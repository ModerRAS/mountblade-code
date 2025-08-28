#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part026.c - 9 个函数

// 函数: void FUN_1802e86c2(void)
void FUN_1802e86c2(void)

{
  longlong lVar1;
  float fVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int32_t *puVar9;
  longlong lVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  longlong *unaff_RBX;
  char unaff_BPL;
  longlong *plVar13;
  uint64_t *puVar14;
  longlong *in_stack_00000030;
  uint64_t in_stack_00000038;
  longlong *in_stack_00000040;
  int8_t auStack_28 [24];
  
  plVar13 = (longlong *)unaff_RBX[0x4e];
  if (unaff_BPL == '\0') {
    if (plVar13 == (longlong *)0x0) {
      return;
    }
    *(uint *)(unaff_RBX + 0x29) = *(uint *)(unaff_RBX + 0x29) | 1;
                    // WARNING: Could not recover jumptable at 0x0001802e8722. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar13 + 0x88))(plVar13,0);
    return;
  }
  if (plVar13 != (longlong *)0x0) {
    *(uint *)(unaff_RBX + 0x29) = *(uint *)(unaff_RBX + 0x29) & 0xfffffffe;
                    // WARNING: Could not recover jumptable at 0x0001802e86f1. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar13 + 0x88))(plVar13,1);
    return;
  }
  lVar1 = unaff_RBX[4];
  if ((*(uint *)((longlong)unaff_RBX + 0x2ac) & 0x8000) != 0) {
    return;
  }
  if (unaff_RBX[0x22] == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x318) == 0) {
    return;
  }
  if ((*(uint *)(unaff_RBX + 0x29) & 0x20000) != 0) {
    return;
  }
  plVar13 = unaff_RBX + 0xe;
  puVar9 = (int32_t *)FUN_180085020(plVar13,auStack_28);
  fVar2 = (float)puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  *(int32_t *)(unaff_RBX + 0x27) = *puVar9;
  *(float *)((longlong)unaff_RBX + 0x13c) = fVar2;
  *(int32_t *)(unaff_RBX + 0x28) = uVar3;
  *(int32_t *)((longlong)unaff_RBX + 0x144) = uVar4;
  if ((fVar2 <= -1e-06) || (1e-06 <= fVar2)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((-1e-06 < *(float *)(unaff_RBX + 0x28)) && (*(float *)(unaff_RBX + 0x28) < 1e-06)) {
    return;
  }
  if (bVar5) {
    return;
  }
  (**(code **)(**(longlong **)(lVar1 + 0x318) + 0xd0))
            (*(longlong **)(lVar1 + 0x318),&stack0x00000030,0x358637bd,unaff_RBX + 0x4e,plVar13);
  plVar6 = in_stack_00000030;
  plVar13 = (longlong *)(lVar1 + 0x60cb8);
  in_stack_00000040 = plVar13;
  iVar8 = _Mtx_lock(plVar13);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  puVar14 = *(uint64_t **)(lVar1 + 0x78);
  if (puVar14 < *(uint64_t **)(lVar1 + 0x80)) {
    *(uint64_t **)(lVar1 + 0x78) = puVar14 + 1;
    *puVar14 = plVar6;
    goto LAB_1802f2aba;
  }
  puVar12 = *(uint64_t **)(lVar1 + 0x70);
  lVar10 = (longlong)puVar14 - (longlong)puVar12 >> 3;
  if (lVar10 == 0) {
    lVar10 = 1;
LAB_1802f2a4b:
    puVar11 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar10 * 8,*(int8_t *)(lVar1 + 0x88));
    puVar14 = *(uint64_t **)(lVar1 + 0x78);
    puVar12 = *(uint64_t **)(lVar1 + 0x70);
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 != 0) goto LAB_1802f2a4b;
    puVar11 = (uint64_t *)0x0;
  }
  if (puVar12 != puVar14) {
                    // WARNING: Subroutine does not return
    memmove(puVar11,puVar12,(longlong)puVar14 - (longlong)puVar12);
  }
  *puVar11 = plVar6;
  if (*(longlong *)(lVar1 + 0x70) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t **)(lVar1 + 0x70) = puVar11;
  *(uint64_t **)(lVar1 + 0x78) = puVar11 + 1;
  *(uint64_t **)(lVar1 + 0x80) = puVar11 + lVar10;
LAB_1802f2aba:
  iVar8 = _Mtx_unlock(plVar13);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  plVar13 = in_stack_00000030;
  *(uint64_t *)(lVar1 + 0x98) = 0;
  if (in_stack_00000030 != (longlong *)0x0) {
    in_stack_00000030[2] = (longlong)unaff_RBX;
    in_stack_00000040 = in_stack_00000030;
    if (in_stack_00000030 != (longlong *)0x0) {
      (**(code **)(*in_stack_00000030 + 0x28))(in_stack_00000030);
    }
    in_stack_00000040 = (longlong *)unaff_RBX[0x4e];
    unaff_RBX[0x4e] = (longlong)plVar13;
    if (in_stack_00000040 != (longlong *)0x0) {
      (**(code **)(*in_stack_00000040 + 0x38))();
    }
    if ((*(byte *)(unaff_RBX + 0x29) & 1) != 0) {
      (**(code **)(*in_stack_00000030 + 0x90))();
    }
    cVar7 = (**(code **)(*in_stack_00000030 + 0x70))();
    if (cVar7 != '\0') {
      in_stack_00000040 = unaff_RBX;
      iVar8 = _Mtx_lock(lVar1 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
      FUN_18005ea90(lVar1 + 0x8118,&stack0x00000040);
      iVar8 = _Mtx_unlock(lVar1 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
    }
  }
  if (in_stack_00000030 != (longlong *)0x0) {
    (**(code **)(*in_stack_00000030 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802e86d8(int32_t param_1)
void FUN_1802e86d8(int32_t param_1)

{
  longlong lVar1;
  float fVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  longlong *in_RAX;
  int32_t *puVar9;
  longlong lVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  longlong *unaff_RBX;
  longlong *plVar13;
  uint64_t *puVar14;
  longlong *in_stack_00000030;
  uint64_t in_stack_00000038;
  longlong *in_stack_00000040;
  int8_t auStack_28 [24];
  
  if (in_RAX != (longlong *)0x0) {
    *(uint *)(unaff_RBX + 0x29) = *(uint *)(unaff_RBX + 0x29) & 0xfffffffe;
                    // WARNING: Could not recover jumptable at 0x0001802e86f1. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*in_RAX + 0x88))(param_1,1);
    return;
  }
  lVar1 = unaff_RBX[4];
  if ((*(uint *)((longlong)unaff_RBX + 0x2ac) & 0x8000) != 0) {
    return;
  }
  if (unaff_RBX[0x22] == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x318) == 0) {
    return;
  }
  if ((*(uint *)(unaff_RBX + 0x29) & 0x20000) != 0) {
    return;
  }
  plVar13 = unaff_RBX + 0xe;
  puVar9 = (int32_t *)FUN_180085020(plVar13,auStack_28);
  fVar2 = (float)puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  *(int32_t *)(unaff_RBX + 0x27) = *puVar9;
  *(float *)((longlong)unaff_RBX + 0x13c) = fVar2;
  *(int32_t *)(unaff_RBX + 0x28) = uVar3;
  *(int32_t *)((longlong)unaff_RBX + 0x144) = uVar4;
  if ((fVar2 <= -1e-06) || (1e-06 <= fVar2)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((-1e-06 < *(float *)(unaff_RBX + 0x28)) && (*(float *)(unaff_RBX + 0x28) < 1e-06)) {
    return;
  }
  if (bVar5) {
    return;
  }
  (**(code **)(**(longlong **)(lVar1 + 0x318) + 0xd0))
            (*(longlong **)(lVar1 + 0x318),&stack0x00000030,0x358637bd,unaff_RBX + 0x4e,plVar13);
  plVar6 = in_stack_00000030;
  plVar13 = (longlong *)(lVar1 + 0x60cb8);
  in_stack_00000040 = plVar13;
  iVar8 = _Mtx_lock(plVar13);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  puVar14 = *(uint64_t **)(lVar1 + 0x78);
  if (puVar14 < *(uint64_t **)(lVar1 + 0x80)) {
    *(uint64_t **)(lVar1 + 0x78) = puVar14 + 1;
    *puVar14 = plVar6;
    goto LAB_1802f2aba;
  }
  puVar12 = *(uint64_t **)(lVar1 + 0x70);
  lVar10 = (longlong)puVar14 - (longlong)puVar12 >> 3;
  if (lVar10 == 0) {
    lVar10 = 1;
LAB_1802f2a4b:
    puVar11 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar10 * 8,*(int8_t *)(lVar1 + 0x88));
    puVar14 = *(uint64_t **)(lVar1 + 0x78);
    puVar12 = *(uint64_t **)(lVar1 + 0x70);
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 != 0) goto LAB_1802f2a4b;
    puVar11 = (uint64_t *)0x0;
  }
  if (puVar12 != puVar14) {
                    // WARNING: Subroutine does not return
    memmove(puVar11,puVar12,(longlong)puVar14 - (longlong)puVar12);
  }
  *puVar11 = plVar6;
  if (*(longlong *)(lVar1 + 0x70) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t **)(lVar1 + 0x70) = puVar11;
  *(uint64_t **)(lVar1 + 0x78) = puVar11 + 1;
  *(uint64_t **)(lVar1 + 0x80) = puVar11 + lVar10;
LAB_1802f2aba:
  iVar8 = _Mtx_unlock(plVar13);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  plVar13 = in_stack_00000030;
  *(uint64_t *)(lVar1 + 0x98) = 0;
  if (in_stack_00000030 != (longlong *)0x0) {
    in_stack_00000030[2] = (longlong)unaff_RBX;
    in_stack_00000040 = in_stack_00000030;
    if (in_stack_00000030 != (longlong *)0x0) {
      (**(code **)(*in_stack_00000030 + 0x28))(in_stack_00000030);
    }
    in_stack_00000040 = (longlong *)unaff_RBX[0x4e];
    unaff_RBX[0x4e] = (longlong)plVar13;
    if (in_stack_00000040 != (longlong *)0x0) {
      (**(code **)(*in_stack_00000040 + 0x38))();
    }
    if ((*(byte *)(unaff_RBX + 0x29) & 1) != 0) {
      (**(code **)(*in_stack_00000030 + 0x90))();
    }
    cVar7 = (**(code **)(*in_stack_00000030 + 0x70))();
    if (cVar7 != '\0') {
      in_stack_00000040 = unaff_RBX;
      iVar8 = _Mtx_lock(lVar1 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
      FUN_18005ea90(lVar1 + 0x8118,&stack0x00000040);
      iVar8 = _Mtx_unlock(lVar1 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
    }
  }
  if (in_stack_00000030 != (longlong *)0x0) {
    (**(code **)(*in_stack_00000030 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1802e8730(longlong param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  byte bVar1;
  longlong lVar2;
  uint64_t *puVar3;
  int iVar4;
  uint64_t *******pppppppuVar5;
  uint64_t uStack_60;
  uint64_t uStack_58;
  code *pcStack_50;
  code *pcStack_48;
  uint64_t ******ppppppuStack_40;
  uint64_t ******ppppppuStack_38;
  uint64_t *puStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  lVar2 = _DAT_180c8aa00;
  bVar1 = (byte)param_2;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    if (param_2 == 0) {
      return true;
    }
    if (0 < *(int *)(param_1 + 0x128)) {
      iVar4 = FUN_180191c00(_DAT_180c8aa00,param_1 + 0x118);
      if (iVar4 != -1) {
        return (*(byte *)((longlong)iVar4 * 0x68 + *(longlong *)(lVar2 + 0x38) + 0x48) & bVar1) == 0
        ;
      }
      return (bRam0000000000000048 & bVar1) == 0;
    }
    uStack_18 = 3;
    ppppppuStack_40 = &ppppppuStack_40;
    ppppppuStack_38 = &ppppppuStack_40;
    puStack_30 = (uint64_t *)0x0;
    uStack_28 = 0;
    uStack_20 = 0;
    if (*(longlong *)(*(longlong *)(param_1 + 0x110) + 0xb8) == 0) {
      uStack_60 = 0;
      uStack_58 = 0;
      pcStack_50 = (code *)0x0;
      pcStack_48 = _guard_check_icall;
      FUN_18014a370(*(uint64_t *)(param_1 + 0x110),1,&uStack_60,param_4,0xfffffffffffffffe);
      if (pcStack_50 != (code *)0x0) {
        (*pcStack_50)(&uStack_60,0,0);
      }
    }
    FUN_18014b470(*(uint64_t *)(*(longlong *)(param_1 + 0x110) + 0xb8),&ppppppuStack_40);
    pppppppuVar5 = (uint64_t *******)ppppppuStack_38;
    if ((uint64_t *******)ppppppuStack_38 != &ppppppuStack_40) {
      do {
        puVar3 = puStack_30;
        if ((*(byte *)(pppppppuVar5[4] + 9) & bVar1) == 0) {
          if (puStack_30 == (uint64_t *)0x0) {
            return true;
          }
          FUN_18004b790(&ppppppuStack_40,*puStack_30);
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar3);
        }
        pppppppuVar5 = (uint64_t *******)func_0x00018066bd70(pppppppuVar5);
      } while (pppppppuVar5 != &ppppppuStack_40);
    }
    puVar3 = puStack_30;
    if (puStack_30 != (uint64_t *)0x0) {
      FUN_18004b790(&ppppppuStack_40,*puStack_30);
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar3);
    }
  }
  return false;
}






// 函数: void FUN_1802e8910(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802e8910(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x270);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(lVar3 + 0x318) != 0) {
      iVar5 = _Mtx_lock(lVar3 + 0x60cb8);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      plVar4 = *(longlong **)(lVar3 + 0x78);
      plVar6 = *(longlong **)(lVar3 + 0x70);
      if (plVar6 != plVar4) {
        do {
          if (*plVar6 == lVar2) break;
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar4);
        if (plVar6 != plVar4) {
          plVar1 = plVar6 + 1;
          if (plVar1 < plVar4) {
                    // WARNING: Subroutine does not return
            memmove(plVar6,plVar1,(longlong)plVar4 - (longlong)plVar1,param_4,uVar7);
          }
          *(longlong **)(lVar3 + 0x78) = plVar4 + -1;
        }
      }
      iVar5 = _Mtx_unlock(lVar3 + 0x60cb8);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      (**(code **)(**(longlong **)(lVar3 + 0x318) + 0x90))
                (*(longlong **)(lVar3 + 0x318),*(uint64_t *)(param_1 + 0x270));
    }
    plVar4 = *(longlong **)(param_1 + 0x270);
    *(uint64_t *)(param_1 + 0x270) = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x38))();
    }
    FUN_1801b05a0(lVar3,param_1);
  }
  lVar2 = *(longlong *)(param_1 + 0x280);
  if (lVar2 != 0) {
    FUN_1804315b0(lVar2);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar2);
  }
  *(uint64_t *)(param_1 + 0x280) = 0;
  return;
}






// 函数: void FUN_1802e8a50(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802e8a50(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  byte bVar1;
  int32_t uVar2;
  int32_t uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int8_t uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plStackX_10;
  ulonglong in_stack_ffffffffffffff78;
  uint in_stack_ffffffffffffff80;
  uint64_t uVar12;
  int8_t auStack_60 [16];
  uint64_t uStack_50;
  uint64_t uStack_28;
  
  uVar12 = 0xfffffffffffffffe;
  lVar7 = param_2[4];
  if ((lVar7 == 0) || (lVar7 == *(longlong *)(param_1 + 0x20))) {
    uVar8 = 0;
    if (param_2[0x2d] == 0) {
      if (lVar7 != 0) {
        FUN_180398550(*(longlong *)(param_1 + 0x20) + 0x607e0);
      }
    }
    else {
      in_stack_ffffffffffffff80 = 0;
      FUN_1802eb9a0(param_2[0x2d],param_2,1,0,in_stack_ffffffffffffff78 & 0xffffffffffffff00,0x14);
    }
  }
  else {
    uVar8 = 1;
    FUN_180198980(lVar7,param_2,param_3,param_4,0x1a);
  }
  if ((*(uint *)((longlong)param_2 + 0x2ac) & 0x20000) == 0) {
    FUN_1802ed990(param_1,1);
  }
  param_2[0x2d] = param_1;
  lVar7 = param_1;
  do {
    lVar6 = lVar7;
    lVar7 = *(longlong *)(lVar6 + 0x168);
  } while (lVar7 != 0);
  FUN_1802f2700(lVar6,1);
  FUN_1802eaec0(param_2,*(uint64_t *)(param_1 + 0x20),uVar8,1,0,
                in_stack_ffffffffffffff80 & 0xffffff00,(char)param_4,0xffffffff,uVar12);
  plStackX_10 = param_2;
  (**(code **)(*param_2 + 0x28))(param_2);
  FUN_1800b87c0(param_1 + 0x1c0,&plStackX_10);
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  if ((char)param_3 == '\0') {
    FUN_180254610(param_2);
  }
  else {
    plVar5 = (longlong *)FUN_1802f5d10(param_1 + 0x70,auStack_60,param_2 + 6);
    cVar4 = func_0x000180285980(param_2 + 6);
    if (cVar4 != '\0') {
      lVar7 = plVar5[1];
      param_2[6] = *plVar5;
      param_2[7] = lVar7;
      lVar7 = plVar5[3];
      param_2[8] = plVar5[2];
      param_2[9] = lVar7;
      uVar2 = *(int32_t *)((longlong)plVar5 + 0x24);
      lVar7 = plVar5[5];
      uVar3 = *(int32_t *)((longlong)plVar5 + 0x2c);
      *(int *)(param_2 + 10) = (int)plVar5[4];
      *(int32_t *)((longlong)param_2 + 0x54) = uVar2;
      *(int *)(param_2 + 0xb) = (int)lVar7;
      *(int32_t *)((longlong)param_2 + 0x5c) = uVar3;
      uVar2 = *(int32_t *)((longlong)plVar5 + 0x34);
      lVar7 = plVar5[7];
      uVar3 = *(int32_t *)((longlong)plVar5 + 0x3c);
      *(int *)(param_2 + 0xc) = (int)plVar5[6];
      *(int32_t *)((longlong)param_2 + 100) = uVar2;
      *(int *)(param_2 + 0xd) = (int)lVar7;
      *(int32_t *)((longlong)param_2 + 0x6c) = uVar3;
      FUN_180254610(param_2);
      FUN_1802eace0();
    }
  }
  FUN_1802eace0(param_2);
  *(short *)(param_2 + 0x56) = (short)param_2[0x56] + 1;
  if (param_2[0x2d] != 0) {
    func_0x0001802eeba0();
  }
  *(short *)(param_1 + 0x2b0) = *(short *)(param_1 + 0x2b0) + 1;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    func_0x0001802eeba0();
    lVar7 = *(longlong *)(param_1 + 0x168);
    while (lVar6 = lVar7, lVar6 != 0) {
      param_1 = lVar6;
      lVar7 = *(longlong *)(lVar6 + 0x168);
    }
  }
  uStack_28 = 0xfffffffffffffffe;
  bVar1 = *(byte *)(param_1 + 0x2e8);
  *(byte *)(param_1 + 0x2e8) = bVar1 & 0xf7 | 8;
  lVar7 = *(longlong *)(param_1 + 0x20);
  uVar10 = 0;
  if (lVar7 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x28);
    if ((bVar1 & 3 | 8) == 0xb) {
      if ((*(longlong *)(lVar6 + 0x170) == 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)
         ) {
        uStack_50 = 0x1802f2797;
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
        uStack_50 = 0x1802f27a5;
        uVar12 = FUN_180389a90(lVar7 + 0x29a0,&stack0x00000008);
        *(uint64_t *)(*(longlong *)(param_1 + 0x28) + 0x170) = uVar12;
        lVar7 = *(longlong *)(param_1 + 0x20);
        plVar5 = *(longlong **)(lVar7 + 0x29a8);
        if (plVar5 != (longlong *)0x0) {
          uStack_50 = 0x1802f27d8;
          (**(code **)(*plVar5 + 0x18))
                    (plVar5,*(uint64_t *)(*(longlong *)(param_1 + 0x28) + 0x170),param_1 + 0x70);
          lVar7 = *(longlong *)(param_1 + 0x20);
        }
        plVar5 = *(longlong **)(lVar7 + 0x29a8);
        if (plVar5 != (longlong *)0x0) {
          uStack_50 = 0x1802f27fd;
          (**(code **)(*plVar5 + 0x20))
                    (plVar5,*(uint64_t *)(*(longlong *)(param_1 + 0x28) + 0x170),
                     *(int32_t *)(param_1 + 0x18));
        }
      }
    }
    else if (*(longlong *)(lVar6 + 0x170) != 0) {
      plVar5 = *(longlong **)(lVar7 + 0x29a8);
      if (plVar5 != (longlong *)0x0) {
        uStack_50 = 0x1802f2820;
        (**(code **)(*plVar5 + 0x10))(plVar5,*(longlong *)(lVar6 + 0x170));
        lVar6 = *(longlong *)(param_1 + 0x28);
      }
      *(uint64_t *)(lVar6 + 0x170) = 0;
    }
  }
  uVar11 = uVar10;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      uStack_50 = 0x1802f2864;
      FUN_1802f2700(*(uint64_t *)(uVar11 + *(longlong *)(param_1 + 0x1c0)),(bVar1 & 1) != 0);
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802e8c60(longlong param_1,ulonglong *param_2)
void FUN_1802e8c60(longlong param_1,ulonglong *param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x1c0);
  uVar6 = 0;
  if (*(longlong *)(param_1 + 0x1c8) - lVar2 >> 3 != 0) {
    do {
      puVar5 = (uint64_t *)param_2[1];
      uVar1 = *(uint64_t *)(lVar2 + uVar6 * 8);
      if (puVar5 < (uint64_t *)param_2[2]) {
        param_2[1] = (ulonglong)(puVar5 + 1);
        *puVar5 = uVar1;
      }
      else {
        puVar4 = (uint64_t *)*param_2;
        lVar2 = (longlong)puVar5 - (longlong)puVar4 >> 3;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_1802e8cf2:
          puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,(char)param_2[3]);
          puVar4 = (uint64_t *)*param_2;
          puVar5 = (uint64_t *)param_2[1];
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_1802e8cf2;
          puVar3 = (uint64_t *)0x0;
        }
        if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
          memmove(puVar3,puVar4,(longlong)puVar5 - (longlong)puVar4);
        }
        *puVar3 = uVar1;
        if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *param_2 = (ulonglong)puVar3;
        param_2[2] = (ulonglong)(puVar3 + lVar2);
        param_2[1] = (ulonglong)(puVar3 + 1);
      }
      FUN_1802e8c60(*(uint64_t *)(*(longlong *)(param_1 + 0x1c0) + uVar6 * 8),param_2,0);
      lVar2 = *(longlong *)(param_1 + 0x1c0);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)(*(longlong *)(param_1 + 0x1c8) - lVar2 >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802e8c91(uint64_t param_1,longlong param_2)
void FUN_1802e8c91(uint64_t param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  ulonglong *unaff_RBX;
  uint64_t *puVar5;
  longlong unaff_R13;
  ulonglong unaff_R14;
  
  do {
    puVar5 = (uint64_t *)unaff_RBX[1];
    uVar1 = *(uint64_t *)(param_2 + unaff_R14 * 8);
    if (puVar5 < (uint64_t *)unaff_RBX[2]) {
      unaff_RBX[1] = (ulonglong)(puVar5 + 1);
      *puVar5 = uVar1;
    }
    else {
      puVar4 = (uint64_t *)*unaff_RBX;
      lVar2 = (longlong)puVar5 - (longlong)puVar4 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_1802e8cf2:
        puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,(char)unaff_RBX[3]);
        puVar4 = (uint64_t *)*unaff_RBX;
        puVar5 = (uint64_t *)unaff_RBX[1];
      }
      else {
        lVar2 = lVar2 * 2;
        if (lVar2 != 0) goto LAB_1802e8cf2;
        puVar3 = (uint64_t *)0x0;
      }
      if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar3,puVar4,(longlong)puVar5 - (longlong)puVar4);
      }
      *puVar3 = uVar1;
      if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *unaff_RBX = (ulonglong)puVar3;
      unaff_RBX[2] = (ulonglong)(puVar3 + lVar2);
      unaff_RBX[1] = (ulonglong)(puVar3 + 1);
    }
    FUN_1802e8c60(*(uint64_t *)(*(longlong *)(unaff_R13 + 0x1c0) + unaff_R14 * 8));
    param_2 = *(longlong *)(unaff_R13 + 0x1c0);
    unaff_R14 = unaff_R14 + 1;
    if ((ulonglong)(*(longlong *)(unaff_R13 + 0x1c8) - param_2 >> 3) <= unaff_R14) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1802e8da3(void)
void FUN_1802e8da3(void)

{
  return;
}






// 函数: void FUN_1802e8db0(longlong param_1)
void FUN_1802e8db0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint64_t uVar12;
  
  uVar12 = 0xfffffffffffffffe;
  uVar6 = 0;
  plVar1 = (longlong *)(param_1 + 0x1c0);
  plVar11 = (longlong *)*plVar1;
  uVar5 = *(longlong *)(param_1 + 0x1c8) - (longlong)plVar11 >> 3;
  plVar4 = plVar11;
  uVar8 = uVar6;
  uVar10 = uVar6;
  if (uVar5 != 0) {
    do {
      uVar7 = (uint)uVar8 + 1;
      if ((*(uint *)(*plVar4 + 0x2ac) & 0x20000) != 0) {
        uVar7 = (uint)uVar8;
      }
      uVar9 = (int)uVar10 + 1;
      plVar4 = plVar4 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar10 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 < uVar5);
    uVar8 = uVar6;
    uVar10 = uVar6;
    if (uVar7 != 0) {
      do {
        lVar2 = *(longlong *)(uVar10 + (longlong)plVar11);
        *(uint64_t *)(lVar2 + 0x168) = 0;
        FUN_1802f2700(lVar2,1);
        FUN_1802eaec0(*(uint64_t *)(uVar10 + *plVar1),0,1,1,0,0,1,0xf,uVar12);
        uVar7 = (int)uVar8 + 1;
        plVar11 = (longlong *)*plVar1;
        uVar8 = (ulonglong)uVar7;
        uVar10 = uVar10 + 8;
      } while ((ulonglong)(longlong)(int)uVar7 <
               (ulonglong)(*(longlong *)(param_1 + 0x1c8) - (longlong)plVar11 >> 3));
      FUN_1800b8500(plVar1);
      lVar2 = *(longlong *)(param_1 + 0x168);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x268) != 0)) {
        FUN_1802ed990(lVar2,1);
        return;
      }
      if (*(longlong *)(param_1 + 0x268) != 0) {
        plVar11 = *(longlong **)(param_1 + 0x268);
        *(uint64_t *)(param_1 + 0x268) = 0;
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x38))();
        }
      }
      iVar3 = (int)(*(longlong *)(param_1 + 0x1c8) - *plVar1 >> 3);
      if (iVar3 < 1) {
        return;
      }
      do {
        FUN_1802ed990(*(uint64_t *)(*plVar1 + uVar6 * 8),1);
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)iVar3);
      return;
    }
  }
  uVar8 = uVar6;
  if (uVar5 != 0) {
    do {
      lVar2 = *(longlong *)(uVar8 + (longlong)plVar11);
      *(uint64_t *)(lVar2 + 0x168) = 0;
      FUN_1802f2700(lVar2,1);
      FUN_1802eaec0(*(uint64_t *)(uVar8 + *plVar1),0,1,1,0,0,1,0xe);
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar7;
      plVar11 = (longlong *)*plVar1;
      uVar8 = uVar8 + 8;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - (longlong)plVar11 >> 3));
  }
  FUN_1800b8500(plVar1);
  return;
}



longlong * FUN_1802e8fb0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar3 = *(longlong *)(param_1 + 0xf0);
  iVar6 = 0;
  if (*(longlong *)(param_1 + 0xf8) - lVar3 >> 3 != 0) {
    lVar4 = 0;
    do {
      if ((*(longlong **)(lVar4 + lVar3) != (longlong *)0x0) &&
         (iVar1 = (**(code **)(**(longlong **)(lVar4 + lVar3) + 0x98))(), iVar1 == 1)) {
        return *(longlong **)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar6 * 8);
      }
      lVar3 = *(longlong *)(param_1 + 0xf0);
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 8;
    } while ((ulonglong)(longlong)iVar6 < (ulonglong)(*(longlong *)(param_1 + 0xf8) - lVar3 >> 3));
  }
  lVar3 = *(longlong *)(param_1 + 0x260);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x1a8);
    iVar6 = 0;
    if (*(longlong *)(lVar3 + 0x1b0) - lVar4 >> 3 != 0) {
      lVar7 = 0;
      do {
        plVar5 = *(longlong **)(lVar7 + lVar4);
        if ((plVar5 != (longlong *)0x0) &&
           (iVar1 = (**(code **)(*plVar5 + 0x98))(plVar5), iVar1 == 1)) {
FUN_1802e916e:
          if (plVar5 == (longlong *)0x0) {
            return (longlong *)0x0;
          }
          return plVar5;
        }
        lVar4 = *(longlong *)(lVar3 + 0x1a8);
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((ulonglong)(longlong)iVar6 < (ulonglong)(*(longlong *)(lVar3 + 0x1b0) - lVar4 >> 3));
    }
    iVar6 = 0;
    if ('\0' < *(char *)(lVar3 + 0x20)) {
      lVar4 = 0;
      do {
        lVar7 = *(longlong *)(lVar3 + 0x18);
        iVar1 = 0;
        if (*(longlong *)(lVar4 + 0xb8 + lVar7) - *(longlong *)(lVar4 + 0xb0 + lVar7) >> 3 != 0) {
          lVar8 = 0;
          do {
            plVar5 = *(longlong **)(lVar8 + *(longlong *)(lVar4 + 0xb0 + lVar7));
            if ((plVar5 != (longlong *)0x0) &&
               (iVar2 = (**(code **)(*plVar5 + 0x98))(plVar5), iVar2 == 1)) goto FUN_1802e916e;
            lVar7 = *(longlong *)(lVar3 + 0x18);
            iVar1 = iVar1 + 1;
            lVar8 = lVar8 + 8;
          } while ((ulonglong)(longlong)iVar1 <
                   (ulonglong)
                   (*(longlong *)(lVar4 + 0xb8 + lVar7) - *(longlong *)(lVar4 + 0xb0 + lVar7) >> 3))
          ;
        }
        iVar6 = iVar6 + 1;
        lVar4 = lVar4 + 0x100;
      } while (iVar6 < *(char *)(lVar3 + 0x20));
    }
  }
  return (longlong *)0x0;
}



longlong * FUN_1802e9025(void)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong unaff_RSI;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (unaff_RSI != 0) {
    lVar7 = *(longlong *)(unaff_RSI + 0x1a8);
    iVar4 = 0;
    if (*(longlong *)(unaff_RSI + 0x1b0) - lVar7 >> 3 != 0) {
      lVar5 = 0;
      do {
        plVar3 = *(longlong **)(lVar5 + lVar7);
        if ((plVar3 != (longlong *)0x0) &&
           (iVar1 = (**(code **)(*plVar3 + 0x98))(plVar3), iVar1 == 1)) {
FUN_1802e916e:
          if (plVar3 == (longlong *)0x0) {
            return (longlong *)0x0;
          }
          return plVar3;
        }
        lVar7 = *(longlong *)(unaff_RSI + 0x1a8);
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 8;
      } while ((ulonglong)(longlong)iVar4 <
               (ulonglong)(*(longlong *)(unaff_RSI + 0x1b0) - lVar7 >> 3));
    }
    iVar4 = 0;
    if ('\0' < *(char *)(unaff_RSI + 0x20)) {
      lVar7 = 0;
      do {
        lVar5 = *(longlong *)(unaff_RSI + 0x18);
        iVar1 = 0;
        if (*(longlong *)(lVar7 + 0xb8 + lVar5) - *(longlong *)(lVar7 + 0xb0 + lVar5) >> 3 != 0) {
          lVar6 = 0;
          do {
            plVar3 = *(longlong **)(lVar6 + *(longlong *)(lVar7 + 0xb0 + lVar5));
            if ((plVar3 != (longlong *)0x0) &&
               (iVar2 = (**(code **)(*plVar3 + 0x98))(plVar3), iVar2 == 1)) goto FUN_1802e916e;
            lVar5 = *(longlong *)(unaff_RSI + 0x18);
            iVar1 = iVar1 + 1;
            lVar6 = lVar6 + 8;
          } while ((ulonglong)(longlong)iVar1 <
                   (ulonglong)
                   (*(longlong *)(lVar7 + 0xb8 + lVar5) - *(longlong *)(lVar7 + 0xb0 + lVar5) >> 3))
          ;
        }
        iVar4 = iVar4 + 1;
        lVar7 = lVar7 + 0x100;
      } while (iVar4 < *(char *)(unaff_RSI + 0x20));
    }
  }
  return (longlong *)0x0;
}



uint64_t FUN_1802e9158(void)

{
  longlong unaff_RSI;
  int unaff_EDI;
  
  return *(uint64_t *)(*(longlong *)(unaff_RSI + 0xf0) + (longlong)unaff_EDI * 8);
}






// 函数: void FUN_1802e916e(void)
void FUN_1802e916e(void)

{
  return;
}






