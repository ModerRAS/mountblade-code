#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part171.c - 8 个函数

// 函数: void FUN_180156300(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180156300(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  longlong lVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  int32_t **ppuVar11;
  int32_t *puVar12;
  longlong lVar13;
  int32_t *puVar14;
  uint64_t uVar15;
  int32_t *puStack_b0;
  int32_t *puStack_a8;
  int32_t *puStack_a0;
  int32_t uStack_98;
  int32_t *puStack_90;
  int32_t *puStack_88;
  int32_t *puStack_80;
  int32_t uStack_78;
  int32_t *puStack_70;
  int32_t *puStack_68;
  int32_t *puStack_60;
  int32_t uStack_58;
  
  uVar15 = 0xfffffffffffffffe;
  puStack_90 = (int32_t *)0x0;
  puStack_88 = (int32_t *)0x0;
  puVar8 = (int32_t *)0x0;
  puStack_80 = (int32_t *)0x0;
  uStack_78 = 3;
  puStack_b0 = (int32_t *)0x0;
  puStack_a8 = (int32_t *)0x0;
  puStack_a0 = (int32_t *)0x0;
  uStack_98 = 3;
  puStack_70 = (int32_t *)0x0;
  puStack_68 = (int32_t *)0x0;
  puStack_60 = (int32_t *)0x0;
  uStack_58 = 3;
  iVar2 = _Mtx_lock(param_1 + 0xc);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  ppuVar11 = (int32_t **)(param_1 + 0x16);
  puVar4 = puVar8;
  puVar10 = puVar8;
  if (&puStack_70 != ppuVar11) {
    puVar5 = (int32_t *)param_1[0x17];
    puVar14 = *ppuVar11;
    lVar13 = (longlong)puVar5 - (longlong)puVar14;
    lVar7 = lVar13 >> 2;
    if (lVar7 == 0) {
      if (puVar14 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(0,puVar14,lVar13,param_4,uVar15);
      }
      puStack_68 = (int32_t *)0x0;
    }
    else {
      puVar4 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,lVar7 * 4,3);
      if (puVar14 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar4,puVar14,lVar13,param_4,uVar15);
      }
      puStack_68 = puVar4 + lVar7;
      puVar10 = puStack_68;
      puStack_70 = puVar4;
      puStack_60 = puStack_68;
    }
  }
  puVar5 = puStack_70;
  FUN_18015b590(ppuVar11,&puStack_b0);
  iVar2 = _Mtx_unlock(param_1 + 0xc);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  iVar2 = 0;
  uVar9 = (longlong)puVar10 - (longlong)puVar5 >> 2;
  puVar10 = puStack_88;
  puVar5 = puStack_a8;
  puVar14 = puStack_90;
  if (uVar9 != 0) {
    do {
      cVar1 = (**(code **)(*param_1 + 8))(param_1,*puVar4);
      if (cVar1 == '\0') {
        if (puVar5 < puStack_a0) {
          puVar12 = puVar5 + 1;
          *puVar5 = *puVar4;
          puStack_a8 = puVar12;
          goto LAB_1801565db;
        }
        lVar13 = (longlong)puVar5 - (longlong)puStack_b0;
        lVar7 = lVar13 >> 2;
        if (lVar7 == 0) {
          lVar7 = 1;
LAB_180156576:
          puVar6 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,lVar7 * 4,(int8_t)uStack_98);
        }
        else {
          lVar7 = lVar7 * 2;
          if (lVar7 != 0) goto LAB_180156576;
          puVar6 = (int32_t *)0x0;
        }
        if (puStack_b0 != puVar5) {
                    // WARNING: Subroutine does not return
          memmove(puVar6,puStack_b0,lVar13);
        }
        *puVar6 = *puVar4;
        puVar12 = puVar6 + 1;
        if (puStack_b0 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puStack_b0);
        }
        puStack_a0 = puVar6 + lVar7;
        puVar8 = puStack_80;
        puStack_b0 = puVar6;
        puStack_a8 = puVar12;
      }
      else {
        puVar12 = puVar5;
        if (puVar10 < puVar8) {
          puStack_88 = puVar10 + 1;
          *puVar10 = *puVar4;
          puVar10 = puStack_88;
        }
        else {
          lVar7 = (longlong)puVar10 - (longlong)puVar14 >> 2;
          if (lVar7 == 0) {
            lVar7 = 1;
LAB_1801564c8:
            puVar5 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,lVar7 * 4,3);
          }
          else {
            lVar7 = lVar7 * 2;
            if (lVar7 != 0) goto LAB_1801564c8;
            puVar5 = (int32_t *)0x0;
          }
          if (puVar14 != puVar10) {
                    // WARNING: Subroutine does not return
            memmove(puVar5,puVar14,(longlong)puVar10 - (longlong)puVar14);
          }
          *puVar5 = *puVar4;
          puVar10 = puVar5 + 1;
          if (puVar14 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar14);
          }
          puStack_80 = puVar5 + lVar7;
          puVar8 = puStack_80;
          puVar14 = puVar5;
          puStack_90 = puVar5;
          puStack_88 = puVar10;
        }
      }
LAB_1801565db:
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar12;
    } while ((ulonglong)(longlong)iVar2 < uVar9);
  }
  iVar2 = 0;
  if (puStack_70 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  iVar3 = _Mtx_lock(param_1 + 0x1a);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uVar9 = (longlong)puVar10 - (longlong)puVar14 >> 2;
  puVar8 = puVar14;
  if (uVar9 != 0) {
    do {
      (**(code **)(*param_1 + 0x108))(param_1,*puVar8);
      iVar2 = iVar2 + 1;
      puVar8 = puVar8 + 1;
    } while ((ulonglong)(longlong)iVar2 < uVar9);
  }
  iVar2 = _Mtx_unlock(param_1 + 0x1a);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if (puStack_b0 == (int32_t *)0x0) {
    if (puVar14 == (int32_t *)0x0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar14);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1801566b0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  longlong *plVar2;
  uint64_t *puStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  *param_1 = &unknown_var_8656_ptr;
  param_1[3] = 0;
  param_1[4] = _guard_check_icall;
  *(int32_t *)(param_1 + 10) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x54) = 0x40000000;
  *(int32_t *)((longlong)param_1 + 0x5c) = 3;
  param_1[8] = 1;
  param_1[7] = &system_data_0000;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  puStackX_10 = param_1 + 0xc;
  _Mtx_init_in_situ(puStackX_10,0x102,param_3,param_4,0xfffffffffffffffe);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 3;
  puStackX_10 = param_1 + 0x1a;
  _Mtx_init_in_situ(puStackX_10,0x102);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(int32_t *)(param_1 + 0x27) = 3;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(int32_t *)(param_1 + 0x2b) = 3;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(int32_t *)(param_1 + 0x30) = 3;
  param_1[0x3d] = 0;
  *(uint64_t *)((longlong)param_1 + 0x214) = 0;
  *(int32_t *)((longlong)param_1 + 0x21c) = 0;
  puStackX_10 = param_1 + 0x44;
  *(int32_t *)(param_1 + 0x48) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x244) = 0x40000000;
  *(int32_t *)((longlong)param_1 + 0x24c) = 3;
  param_1[0x46] = 1;
  param_1[0x45] = &system_data_0000;
  param_1[0x47] = 0;
  *(int32_t *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  *(int32_t *)(param_1 + 0x4b) = 0;
  *(uint64_t *)((longlong)param_1 + 0x214) = 0x2ee00002ee00;
  *(int32_t *)((longlong)param_1 + 0x21c) = 1;
  uVar1 = FUN_1806fade0(*(int32_t *)(param_1 + 0x43),*(int32_t *)((longlong)param_1 + 0x21c),
                        0x800,&puStackX_10);
  param_1[0x4a] = uVar1;
  if ((int)puStackX_10 < 0) {
    FUN_180626f80(&unknown_var_7224_ptr);
    param_1[0x4a] = 0;
  }
  FUN_1806faf00(param_1[0x4a],0xfa2,*(uint *)((longlong)param_1 + 0x214) >> 2,&puStackX_10);
  FUN_1806faf00(param_1[0x4a],0xfa8,0xfffffc18,&puStackX_10);
  FUN_1806faf00(param_1[0x4a],0xfa6,1,&puStackX_10);
  FUN_1806faf00(param_1[0x4a],0xfb4,0,&puStackX_10);
  FUN_1806faf00(param_1[0x4a],0xfaa,10,&puStackX_10);
  FUN_1806faf00(param_1[0x4a],0xfac,0,&puStackX_10);
  FUN_1806faf00(param_1[0x4a],0xfb6,0xfffffc18,&puStackX_10);
  FUN_1806faf00(param_1[0x4a],0xfb0,0,&puStackX_10);
  FUN_1806faf00(param_1[0x4a],0xfae,0,&puStackX_10);
  *(int32_t *)(param_1 + 0x4b) = 0;
  FUN_1806faf00(param_1[0x4a],0xfbb,param_1 + 0x4b,&puStackX_10);
  FUN_1806faf00(param_1[0x4a],0xfc4,0x10,&puStackX_10);
  FUN_1806faf00(param_1[0x4a],0xfc8,5000,&puStackX_10);
  *(int16_t *)((longlong)param_1 + 0x161) = 0;
  *(int8_t *)(param_1 + 0x2c) = 0;
  *(int8_t *)(param_1 + 0x42) = 1;
  param_1[0x31] = 0x3f800000;
  param_1[0x32] = 0;
  param_1[0x33] = 0x3f80000000000000;
  param_1[0x34] = 0;
  *(int32_t *)(param_1 + 0x35) = 0;
  *(int32_t *)((longlong)param_1 + 0x1ac) = 0;
  *(int32_t *)(param_1 + 0x36) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0x1b4) = 0;
  *(int32_t *)(param_1 + 0x37) = 0;
  *(int32_t *)((longlong)param_1 + 0x1bc) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  *(int32_t *)((longlong)param_1 + 0x1c4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x39) = 0;
  *(int32_t *)((longlong)param_1 + 0x1cc) = 0;
  *(int32_t *)(param_1 + 0x3a) = 0;
  *(int32_t *)((longlong)param_1 + 0x1d4) = 0x3f800000;
  FUN_180157050(param_1);
  plVar2 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x60,8,3);
  *plVar2 = (longlong)&system_handler1_ptr;
  *plVar2 = (longlong)&system_handler2_ptr;
  *(int32_t *)(plVar2 + 1) = 0;
  *plVar2 = (longlong)&unknown_var_7872_ptr;
  plStackX_20 = plVar2;
  FUN_18015c2b0(plVar2 + 2);
  *plVar2 = (longlong)&unknown_var_8264_ptr;
  *(int32_t *)(plVar2 + 10) = 0xffffffff;
  plVar2[0xb] = 0;
  plStackX_18 = plVar2;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plStackX_18 = (longlong *)param_1[0x3d];
  param_1[0x3d] = plVar2;
  if (plStackX_18 != (longlong *)0x0) {
    (**(code **)(*plStackX_18 + 0x38))();
  }
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  if ((code *)param_1[3] != (code *)0x0) {
    (*(code *)param_1[3])(param_1 + 1,0,0);
  }
  param_1[3] = 0;
  param_1[4] = _guard_check_icall;
  *(int32_t *)(param_1 + 0x40) = 0xbf800000;
  *(int32_t *)((longlong)param_1 + 0x204) = 0xbf800000;
  *(int32_t *)(param_1 + 0x41) = 0xbf800000;
  *(int32_t *)((longlong)param_1 + 0x20c) = 0xbf800000;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[0x3f] = 0;
  return param_1;
}



uint64_t FUN_180156b20(uint64_t param_1,ulonglong param_2)

{
  FUN_1801570c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x260);
  }
  return param_1;
}





// 函数: void FUN_180156b60(longlong param_1)
void FUN_180156b60(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_18015b450();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180156ba0(longlong param_1)
void FUN_180156ba0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180156bc0(longlong param_1)
void FUN_180156bc0(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_18015b450();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180156c00(longlong param_1)
void FUN_180156c00(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180156c20(uint64_t param_1,longlong param_2,int8_t param_3)
void FUN_180156c20(uint64_t param_1,longlong param_2,int8_t param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong *plVar6;
  byte *pbVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *puStack_78;
  longlong lStack_70;
  uint uStack_68;
  int32_t uStack_60;
  void *puStack_58;
  longlong lStack_50;
  uint uStack_48;
  uint64_t uStack_40;
  int8_t uStack_38;
  
  plVar6 = core_system_data_config;
  puStack_58 = &system_data_buffer_ptr;
  uStack_40 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar9 = (ulonglong)uVar2;
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1806277c0(&puStack_58,uVar9);
  }
  if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_50,*(uint64_t *)(param_2 + 8),uVar9);
  }
  if (lStack_50 != 0) {
    *(int8_t *)(uVar9 + lStack_50) = 0;
  }
  uStack_40 = CONCAT44(*(int32_t *)(param_2 + 0x1c),(int32_t)uStack_40);
  bVar5 = false;
  uVar9 = plVar6[0x25];
  uVar11 = plVar6[0x24];
  uStack_48 = uVar2;
  uStack_38 = param_3;
  if (uVar11 != uVar9) {
    iVar3 = *(int *)(param_2 + 0x10);
    do {
      iVar4 = *(int *)(uVar11 + 0x10);
      iVar8 = iVar3;
      if (iVar4 == iVar3) {
        if (iVar4 != 0) {
          pbVar7 = *(byte **)(uVar11 + 8);
          lVar10 = *(longlong *)(param_2 + 8) - (longlong)pbVar7;
          do {
            pbVar1 = pbVar7 + lVar10;
            iVar8 = (uint)*pbVar7 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar7 = pbVar7 + 1;
          } while (*pbVar1 != 0);
        }
LAB_180156d2e:
        if (iVar8 == 0) {
          bVar5 = true;
        }
      }
      else if (iVar4 == 0) goto LAB_180156d2e;
      uVar11 = uVar11 + 0x28;
    } while (uVar11 != uVar9);
    if (bVar5) goto LAB_180156d7b;
  }
  if (uVar9 < (ulonglong)plVar6[0x26]) {
    plVar6[0x25] = uVar9 + 0x28;
    FUN_180627ae0(uVar9);
    *(int8_t *)(uVar9 + 0x20) = uStack_38;
  }
  else {
    FUN_18015bea0(plVar6 + 0x24,&puStack_58);
  }
LAB_180156d7b:
  FUN_180159870();
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_1806277c0(&puStack_78,uStack_68 + *(int *)(param_2 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_68 + lStack_70,*(uint64_t *)(param_2 + 8),
           (longlong)(*(int *)(param_2 + 0x10) + 1));
  }
  (**(code **)(*plVar6 + 0x40))(plVar6,&puStack_78,param_3);
  puStack_78 = &system_data_buffer_ptr;
  if (lStack_70 == 0) {
    lStack_70 = 0;
    uStack_60 = 0;
    puStack_78 = &system_state_ptr;
    puStack_58 = &system_data_buffer_ptr;
    if (lStack_50 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180156e40(uint64_t param_1,longlong param_2,int8_t param_3)
void FUN_180156e40(uint64_t param_1,longlong param_2,int8_t param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  byte *pbVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *puStack_78;
  longlong lStack_70;
  uint uStack_68;
  int32_t uStack_60;
  void *puStack_58;
  longlong lStack_50;
  uint uStack_48;
  uint64_t uStack_40;
  int8_t uStack_38;
  
  plVar6 = core_system_data_config;
  puStack_58 = &system_data_buffer_ptr;
  uStack_40 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar10 = (ulonglong)uVar2;
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1806277c0(&puStack_58,uVar10);
  }
  if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_50,*(uint64_t *)(param_2 + 8),uVar10);
  }
  if (lStack_50 != 0) {
    *(int8_t *)(uVar10 + lStack_50) = 0;
  }
  uStack_40 = CONCAT44(*(int32_t *)(param_2 + 0x1c),(int32_t)uStack_40);
  uVar10 = plVar6[0x28];
  uVar5 = plVar6[0x29];
  uStack_48 = uVar2;
  uStack_38 = param_3;
  if (uVar10 != uVar5) {
    iVar3 = *(int *)(param_2 + 0x10);
    do {
      iVar4 = *(int *)(uVar10 + 0x10);
      iVar8 = iVar3;
      if (iVar4 == iVar3) {
        if (iVar4 != 0) {
          pbVar7 = *(byte **)(uVar10 + 8);
          lVar9 = *(longlong *)(param_2 + 8) - (longlong)pbVar7;
          do {
            pbVar1 = pbVar7 + lVar9;
            iVar8 = (uint)*pbVar7 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar7 = pbVar7 + 1;
          } while (*pbVar1 != 0);
        }
LAB_180156f4e:
        if (iVar8 == 0) goto LAB_180156f96;
      }
      else if (iVar4 == 0) goto LAB_180156f4e;
      uVar10 = uVar10 + 0x28;
    } while (uVar10 != uVar5);
  }
  if (uVar5 < (ulonglong)plVar6[0x2a]) {
    plVar6[0x29] = uVar5 + 0x28;
    FUN_180627ae0(uVar5);
    *(int8_t *)(uVar5 + 0x20) = uStack_38;
  }
  else {
    FUN_18015bea0(plVar6 + 0x28,&puStack_58);
  }
LAB_180156f96:
  FUN_180159820();
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_1806277c0(&puStack_78,uStack_68 + *(int *)(param_2 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_68 + lStack_70,*(uint64_t *)(param_2 + 8),
           (longlong)(*(int *)(param_2 + 0x10) + 1));
  }
  (**(code **)(*plVar6 + 0x40))(plVar6,&puStack_78,param_3);
  puStack_78 = &system_data_buffer_ptr;
  if (lStack_70 == 0) {
    lStack_70 = 0;
    uStack_60 = 0;
    puStack_78 = &system_state_ptr;
    puStack_58 = &system_data_buffer_ptr;
    if (lStack_50 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180157050(longlong param_1)
void FUN_180157050(longlong param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0xd0);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  FUN_18015b450(param_1 + 0x30);
  iVar1 = _Mtx_unlock(param_1 + 0xd0);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



