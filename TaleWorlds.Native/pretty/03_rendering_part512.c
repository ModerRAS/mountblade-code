#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part512.c - 8 个函数

// 函数: void FUN_18053f270(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
void FUN_18053f270(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  
  uVar4 = *param_1;
  uVar5 = *param_2;
  puVar3 = param_3;
  iVar1 = func_0x00018053d680(uVar4);
  iVar2 = func_0x00018053d680(uVar5);
  if (iVar1 < iVar2) {
    *param_2 = uVar4;
    *param_1 = uVar5;
    uVar5 = *param_2;
  }
  uVar4 = *puVar3;
  iVar1 = func_0x00018053d680(uVar4);
  iVar2 = func_0x00018053d680(uVar5);
  if (iVar2 < iVar1) {
    *param_3 = uVar5;
    *param_2 = uVar4;
    uVar5 = *param_1;
    iVar1 = func_0x00018053d680(uVar5);
    iVar2 = func_0x00018053d680(uVar4);
    if (iVar1 < iVar2) {
      *param_2 = uVar5;
      *param_1 = uVar4;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18053f310(longlong param_1,uint64_t *param_2,uint64_t param_3,int32_t *param_4,
             ulonglong *param_5)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  uint64_t uVar10;
  longlong lVar11;
  
  puVar8 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(param_1 + 0x2c));
  plVar4 = (longlong *)param_5;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  *(int32_t *)puVar8 = *param_4;
  *(int32_t *)((longlong)puVar8 + 4) = uVar5;
  *(int32_t *)(puVar8 + 1) = uVar6;
  *(int32_t *)((longlong)puVar8 + 0xc) = uVar7;
  puVar8[2] = *(ulonglong *)(param_4 + 4);
  puVar1 = puVar8 + 3;
  lVar11 = (longlong)(((longlong *)param_5)[1] - *param_5) >> 3;
  uVar2 = *(uint *)((longlong *)param_5 + 3);
  *(uint *)(puVar8 + 6) = uVar2;
  uVar9 = 0;
  if (lVar11 != 0) {
    uVar9 = FUN_18062b420(_DAT_180c8ed18,lVar11 * 8,uVar2 & 0xff);
  }
  *puVar1 = uVar9;
  puVar8[4] = uVar9;
  puVar8[5] = uVar9 + lVar11 * 8;
  lVar11 = plVar4[1];
  lVar3 = *plVar4;
  if (lVar3 != lVar11) {
                    // WARNING: Subroutine does not return
    memmove(*puVar1,lVar3,lVar11 - lVar3);
  }
  puVar8[4] = *puVar1;
  puVar8[7] = 0;
  uVar9 = (puVar8[1] ^ puVar8[2] ^ *puVar8) % (ulonglong)*(uint *)(param_1 + 0x10);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 8) + uVar9 * 8);
  do {
    if (plVar4 == (longlong *)0x0) {
LAB_18053f452:
      param_5 = puVar8;
      FUN_18066c220(param_1 + 0x20,&param_5,(ulonglong)*(uint *)(param_1 + 0x10),
                    *(int32_t *)(param_1 + 0x18),1);
      if ((char)param_5 != '\0') {
        lVar11 = ((ulonglong)param_5 >> 0x20) * 8;
        uVar10 = FUN_18062b1e0(_DAT_180c8ed18,lVar11 + 8,8,*(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
        memset(uVar10,0,lVar11);
      }
      puVar8[7] = *(ulonglong *)(*(longlong *)(param_1 + 8) + uVar9 * 8);
      *(ulonglong **)(*(longlong *)(param_1 + 8) + uVar9 * 8) = puVar8;
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
      lVar11 = *(longlong *)(param_1 + 8);
      *param_2 = puVar8;
      param_2[1] = lVar11 + uVar9 * 8;
      *(int8_t *)(param_2 + 2) = 1;
      return param_2;
    }
    lVar11 = *puVar8 - *plVar4;
    if ((lVar11 == 0) && (lVar11 = puVar8[1] - plVar4[1], lVar11 == 0)) {
      lVar11 = puVar8[2] - plVar4[2];
    }
    if (lVar11 == 0) {
      if (plVar4 != (longlong *)0x0) {
        param_5 = puVar1;
        if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar8);
      }
      goto LAB_18053f452;
    }
    plVar4 = (longlong *)plVar4[7];
  } while( true );
}



uint64_t *
FUN_18053f600(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0xd;
  strcpy_s(param_2[1],0x80,&unknown_var_9616_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18053f680(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    _DAT_180c8ecdc = _DAT_180c8ecdc + -1;
    (**(code **)(*(longlong *)*_DAT_180c8ed08 + 0x60))((longlong *)*_DAT_180c8ed08,param_1);
  }
  return iVar2 + -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18053f6c0(uint64_t *param_1,uint64_t param_2)

{
  int iVar1;
  longlong lVar2;
  uint64_t *puVar3;
  
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_9784_ptr;
  param_1[2] = 0;
  FUN_1808fc838(param_1 + 3,8,0xe,&SUB_18005d5f0,FUN_180045af0);
  puVar3 = param_1 + 0x12;
  lVar2 = 5;
  FUN_1808fc838(puVar3,0x180,5,FUN_180544dc0,FUN_180506660);
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  *(int32_t *)(param_1 + 0x105) = 3;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x10a] = 0;
  *(int8_t *)(param_1 + 0x10b) = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  *(int32_t *)(param_1 + 0x114) = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x115] = 0;
  _Mtx_init_in_situ(param_1 + 299,0x102);
  param_1[0x126] = param_2;
  LOCK();
  UNLOCK();
  iVar1 = _DAT_180c95ef4 + 1;
  *(int *)(param_1 + 0x127) = _DAT_180c95ef4;
  _DAT_180c95ef4 = iVar1;
  _DAT_180c8ecdc = _DAT_180c8ecdc + 1;
  *(int8_t *)((longlong)param_1 + 0x8bc) = 1;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  *(int32_t *)((longlong)param_1 + 0x8b4) = 0xffffffff;
  *(int32_t *)(param_1 + 0x117) = 0x3f800000;
  do {
    FUN_1805e7fe0(puVar3,0);
    puVar3 = puVar3 + 0x30;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(int8_t *)((longlong)param_1 + 0x8be) = 1;
  FUN_18053fcb0(param_1,0);
  *(int8_t *)((longlong)param_1 + 0x8be) = 1;
  *(int32_t *)(param_1 + 0x116) = 0xffffffff;
  *(int32_t *)(param_1 + 0x118) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x8c4) = 0;
  *(uint64_t *)((longlong)param_1 + 0x8cc) = 0;
  *(uint64_t *)((longlong)param_1 + 0x8e4) = 0;
  *(uint64_t *)((longlong)param_1 + 0x8ec) = 0;
  *(uint64_t *)((longlong)param_1 + 0x8f4) = 0x7fc000007fc00000;
  *(uint64_t *)((longlong)param_1 + 0x8fc) = 0x7fc000007fc00000;
  *(uint64_t *)((longlong)param_1 + 0x904) = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  *(int32_t *)((longlong)param_1 + 0x8b4) = 0xffffffff;
  *(int32_t *)(param_1 + 0x117) = 0x3f800000;
  return param_1;
}



uint64_t FUN_18053f8f0(uint64_t param_1,ulonglong param_2)

{
  FUN_18053f930();
  if ((param_2 & 1) != 0) {
    free(param_1,0x9b0);
  }
  return param_1;
}





// 函数: void FUN_18053f930(uint64_t *param_1)
void FUN_18053f930(uint64_t *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar4;
  
  *param_1 = &unknown_var_9784_ptr;
  uVar4 = 0;
  if (((param_1[0x115] != 0) && (lVar2 = *(longlong *)(param_1[0x115] + 0x260), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x210), lVar2 != 0)) {
    *(uint64_t *)(lVar2 + 0x48) = 0;
    *(uint64_t *)(lVar2 + 0x50) = 0;
  }
  plVar1 = param_1 + 0x102;
  lVar2 = *plVar1;
  uVar5 = uVar4;
  if (param_1[0x103] - lVar2 >> 3 != 0) {
    do {
      lVar2 = *(longlong *)(uVar5 + lVar2);
      if (lVar2 != 0) {
        FUN_180506660(lVar2);
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(uVar5 + *plVar1) = 0;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      lVar2 = *plVar1;
      uVar5 = uVar5 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(param_1[0x103] - lVar2 >> 3));
  }
  param_1[0x103] = lVar2;
  _Mtx_destroy_in_situ();
  if ((longlong *)param_1[0x115] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x115] + 0x38))();
  }
  if ((longlong *)param_1[0x108] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x108] + 0x38))();
  }
  if ((longlong *)param_1[0x107] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x107] + 0x38))();
  }
  if ((longlong *)param_1[0x106] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x106] + 0x38))();
  }
  if (*plVar1 == 0) {
    FUN_1808fc8a8(param_1 + 0x12,0x180,5,FUN_180506660);
    FUN_1808fc8a8(param_1 + 3,8,0xe,FUN_180045af0);
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[2] + 0x38))();
    }
    *param_1 = &unknown_var_3696_ptr;
    *param_1 = &unknown_var_3552_ptr;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053fae0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18053fae0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lStackX_20;
  int32_t uVar8;
  
  plVar7 = (longlong *)(param_1 + 0x90);
  lStackX_20 = 5;
  do {
    plVar2 = (longlong *)0x0;
    if (*plVar7 != 0) {
      plVar1 = (longlong *)*plVar7;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      uVar8 = 1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar5 = (longlong *)param_2[1];
      if (plVar5 < (longlong *)param_2[2]) {
        param_2[1] = (longlong)(plVar5 + 1);
        *plVar5 = (longlong)plVar1;
      }
      else {
        plVar4 = (longlong *)*param_2;
        lVar3 = (longlong)plVar5 - (longlong)plVar4 >> 3;
        if (lVar3 == 0) {
          lVar3 = 1;
LAB_18053fba9:
          plVar2 = (longlong *)
                   FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,(char)param_2[3],param_4,uVar8);
          plVar5 = (longlong *)param_2[1];
          plVar4 = (longlong *)*param_2;
          plVar6 = plVar2;
        }
        else {
          lVar3 = lVar3 * 2;
          plVar6 = plVar2;
          if (lVar3 != 0) goto LAB_18053fba9;
        }
        for (; plVar4 != plVar5; plVar4 = plVar4 + 1) {
          *plVar2 = *plVar4;
          *plVar4 = 0;
          plVar2 = plVar2 + 1;
        }
        *plVar2 = (longlong)plVar1;
        plVar5 = (longlong *)param_2[1];
        plVar4 = (longlong *)*param_2;
        if (plVar4 != plVar5) {
          do {
            if ((longlong *)*plVar4 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar4 + 0x38))();
            }
            plVar4 = plVar4 + 1;
          } while (plVar4 != plVar5);
          plVar4 = (longlong *)*param_2;
        }
        if (plVar4 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar4);
        }
        *param_2 = (longlong)plVar6;
        param_2[1] = (longlong)(plVar2 + 1);
        param_2[2] = (longlong)(plVar6 + lVar3);
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
    }
    plVar7 = plVar7 + 0x30;
    lStackX_20 = lStackX_20 + -1;
    if (lStackX_20 == 0) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053fcb0(longlong param_1,char param_2)
void FUN_18053fcb0(longlong param_1,char param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  iVar3 = _Mtx_lock(0x180c96690);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  lVar5 = *(longlong *)(param_1 + 0x8a8);
  lVar12 = 0;
  lVar6 = lVar12;
  if (lVar5 != 0) {
    lVar6 = *(longlong *)(lVar5 + 0x260);
  }
  lVar4 = *(longlong *)(param_1 + 0x948);
  lVar10 = lVar12;
  if (lVar4 != 0) {
    lVar10 = *(longlong *)(lVar6 + 0x28);
  }
  if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x260), lVar5 != 0)) {
    lVar11 = lVar12;
    if (lVar4 != 0) {
      lVar11 = *(longlong *)(lVar5 + 0x28);
    }
    if (lVar11 != 0) {
      FUN_180300650(lVar5,0);
      *(int8_t *)(lVar11 + 0xaa) = 0;
      lVar4 = *(longlong *)(param_1 + 0x948);
    }
    if (lVar4 != 0) {
      *(uint64_t *)(lVar4 + 0x940) = 0;
    }
  }
  *(uint64_t *)(param_1 + 0x948) = 0;
  if (lVar10 != 0) {
    (**(code **)(**(longlong **)(lVar6 + 0x210) + 0x18))();
  }
  if ((lVar6 != 0) && (*(longlong **)(lVar6 + 0x210) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(lVar6 + 0x210) + 0x68))();
  }
  if (*(longlong *)(param_1 + 0x940) != 0) {
    *(uint64_t *)(*(longlong *)(param_1 + 0x940) + 0x948) = 0;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x940) + 0x8a8);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x260), lVar5 != 0)) {
      (**(code **)(**(longlong **)(lVar5 + 0x210) + 0x18))();
      FUN_180300650(lVar5,0);
      if (*(longlong **)(lVar5 + 0x210) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar5 + 0x210) + 0x140))();
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x8a8) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260), lVar5 != 0)) {
    *(int8_t *)(lVar5 + 0xaa) = 0;
  }
  *(uint64_t *)(param_1 + 0x940) = 0;
  *(int8_t *)(param_1 + 0x848) = 0;
  *(int8_t *)(param_1 + 0x8bc) = 1;
  *(uint64_t *)(param_1 + 0x850) = 0;
  *(int8_t *)(param_1 + 0x858) = 0;
  *(uint64_t *)(param_1 + 0x860) = 0;
  *(uint64_t *)(param_1 + 0x868) = 0;
  *(int32_t *)(param_1 + 0x8a0) = 0;
  *(uint64_t *)(param_1 + 0x870) = 0;
  *(uint64_t *)(param_1 + 0x878) = 0;
  *(uint64_t *)(param_1 + 0x880) = 0;
  *(uint64_t *)(param_1 + 0x888) = 0;
  *(uint64_t *)(param_1 + 0x890) = 0;
  *(uint64_t *)(param_1 + 0x898) = 0;
  if (*(longlong *)(param_1 + 0x8a8) == 0) {
LAB_18053ffa1:
    iVar3 = _Mtx_lock(param_1 + 0x958);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    FUN_180540840(param_1,param_2);
    FUN_1805401f0(param_1,1,0);
    plVar2 = *(longlong **)(param_1 + 0x838);
    *(uint64_t *)(param_1 + 0x838) = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (((*(longlong *)(param_1 + 0x8a8) != 0) && (param_2 != '\0')) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x20) != 0)) {
      FUN_180198980();
    }
    if (*(longlong *)(param_1 + 0x830) != 0) {
      FUN_18054a450();
      *(uint64_t *)(*(longlong *)(param_1 + 0x830) + 0xd8) = 0;
      plVar2 = *(longlong **)(param_1 + 0x830);
      *(uint64_t *)(param_1 + 0x830) = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
    }
    FUN_180540130(param_1);
    *(uint64_t *)(param_1 + 0x940) = 0;
    *(uint64_t *)(param_1 + 0x948) = 0;
    FUN_180544930(param_1,0);
    *(int8_t *)(param_1 + 0x910) = 0;
    *(int32_t *)(param_1 + 0x950) = 0xffffffff;
    *(int8_t *)(param_1 + 0x8be) = 0;
    iVar3 = _Mtx_unlock(param_1 + 0x958);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    *(int32_t *)(param_1 + 0x8b4) = 0xffffffff;
    *(int32_t *)(param_1 + 0x8b8) = 0x3f800000;
    *(uint64_t *)(param_1 + 0x914) = 0xffffffffffffffff;
    *(int8_t *)(param_1 + 0x8bd) = 0;
    *(int32_t *)(param_1 + 0x91c) = 0xffffffff;
    *(int32_t *)(param_1 + 0x8c0) = 0x3f800000;
    *(int32_t *)(param_1 + 0x90c) = 0;
    iVar3 = _Mtx_unlock(0x180c96690);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    return;
  }
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x8a8) + 0x2ac);
  *puVar1 = *puVar1 & 0xefffffff;
  lVar5 = *(longlong *)(param_1 + 0x8a8);
  if (*(longlong *)(lVar5 + 0x20) != 0) {
    FUN_1801b01f0(*(longlong *)(lVar5 + 0x20),lVar5);
    lVar5 = *(longlong *)(param_1 + 0x8a8);
  }
  if (((param_2 != '\0') || (*(int *)(lVar5 + 0x2b8) != -1)) || (*(longlong *)(lVar5 + 0x20) == 0))
  goto LAB_18053ffa1;
  lVar5 = *(longlong *)(param_1 + 0x930);
  puVar9 = (uint64_t *)(lVar5 + 0x2bb8);
  lVar6 = FUN_18062b420(_DAT_180c8ed18,0x28,*(int8_t *)(lVar5 + 0x2be0));
  plVar2 = *(longlong **)(param_1 + 0x8a8);
  *(longlong **)(lVar6 + 0x20) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  bVar13 = true;
  puVar8 = puVar9;
  if (*(uint64_t **)(lVar5 + 0x2bc8) != (uint64_t *)0x0) {
    puVar7 = *(uint64_t **)(lVar5 + 0x2bc8);
    do {
      puVar8 = puVar7;
      bVar13 = *(ulonglong *)(lVar6 + 0x20) < (ulonglong)puVar8[4];
      if (bVar13) {
        puVar7 = (uint64_t *)puVar8[1];
      }
      else {
        puVar7 = (uint64_t *)*puVar8;
      }
    } while (puVar7 != (uint64_t *)0x0);
  }
  puVar7 = puVar8;
  if (bVar13) {
    if (puVar8 == *(uint64_t **)(lVar5 + 0x2bc0)) goto LAB_18053ff5e;
    puVar7 = (uint64_t *)func_0x00018066b9a0(puVar8);
  }
  if (*(ulonglong *)(lVar6 + 0x20) <= (ulonglong)puVar7[4]) {
    if (*(longlong **)(lVar6 + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar6 + 0x20) + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar6);
  }
LAB_18053ff5e:
  if ((puVar8 == puVar9) || (lVar5 = 1, *(ulonglong *)(lVar6 + 0x20) < (ulonglong)puVar8[4])) {
    lVar5 = lVar12;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,puVar8,puVar9,lVar5);
}





// 函数: void FUN_180540130(longlong param_1)
void FUN_180540130(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  iVar2 = _Mtx_lock(param_1 + 0x958);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  plVar4 = (longlong *)(param_1 + 0x18);
  lVar3 = 0xe;
  do {
    plVar1 = (longlong *)*plVar4;
    *plVar4 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar4 = plVar4 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  plVar4 = *(longlong **)(param_1 + 0x10);
  *(uint64_t *)(param_1 + 0x10) = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  iVar2 = _Mtx_unlock(param_1 + 0x958);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805401f0(longlong param_1,char param_2,uint64_t param_3,int32_t param_4)
void FUN_1805401f0(longlong param_1,char param_2,uint64_t param_3,int32_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint64_t uVar5;
  longlong *plVar6;
  float fVar7;
  longlong *plStackX_8;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  ulonglong uStack_40;
  uint uStack_38;
  int32_t uStack_34;
  longlong lStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    if ((*(int *)(SYSTEM_STATE_MANAGER + 0xc40) < 1) && ((param_2 == '\0' || ((char)param_3 != '\0')))) {
      if (*(longlong *)(param_1 + 0x838) == 0) {
        fStack_50 = 0.5;
        fVar7 = 0.5;
        if ((char)param_3 != '\0') {
          fStack_50 = 0.6;
          fVar7 = 1.6;
        }
        uStack_4c = 0;
        fStack_58 = fStack_50 * 1.0;
        fStack_54 = fStack_50 * 0.0;
        fStack_50 = fStack_50 * 0.0;
        uStack_48 = CONCAT44(fVar7 * 1.0,fVar7 * 0.0);
        uStack_40 = (ulonglong)(uint)(fVar7 * 0.0);
        uStack_38 = 0;
        uStack_34 = 0;
        lStack_30 = 0x3f000000;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0xbe4ccccd;
        uStack_1c = 0x7f7fffff;
        plVar4 = (longlong *)FUN_1800bf780();
        uVar5 = (**(code **)(*plVar4 + 0xa8))(plVar4,&plStackX_8);
        FUN_180060b80(param_1 + 0x838,uVar5);
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
        (**(code **)(**(longlong **)(param_1 + 0x838) + 0x148))
                  (*(longlong **)(param_1 + 0x838),&fStack_58);
        if (*(longlong *)(param_1 + 0x8a8) == 0) {
          FUN_1802fc0f0(0,*(uint64_t *)(param_1 + 0x838));
        }
        else {
          FUN_1802fc0f0(*(uint64_t *)(*(longlong *)(param_1 + 0x8a8) + 0x260),
                        *(uint64_t *)(param_1 + 0x838));
        }
      }
    }
    else {
      plStackX_8 = *(longlong **)(param_1 + 0x838);
      if (plStackX_8 != (longlong *)0x0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
        plVar4 = *(longlong **)(lVar1 + 0x1b0);
        plVar6 = *(longlong **)(lVar1 + 0x1a8);
        if (plVar6 != plVar4) {
          do {
            if ((longlong *)*plVar6 == plStackX_8) break;
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar4);
          if (plVar6 != plVar4) {
            (**(code **)(*plStackX_8 + 0x28))
                      (plStackX_8,plVar4,param_3,param_4,0xfffffffffffffffe,&plStackX_8);
            FUN_1802fc640(lVar1,&plStackX_8);
            plVar4 = *(longlong **)(param_1 + 0x838);
            *(uint64_t *)(param_1 + 0x838) = 0;
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x38))();
            }
          }
        }
      }
    }
  }
  uStack_48 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x930);
  lVar1 = lVar2 + 0x2be8;
  uStack_38 = uStack_38 & 0xffffff00;
  uStack_40 = lVar1;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uStack_38 = CONCAT31(uStack_38._1_3_,1);
  uStack_28 = *(int32_t *)(param_1 + 0x938);
  lStack_30 = param_1;
  FUN_1804dd4d0(lVar2 + 0x2b88,&uStack_20,&lStack_30);
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180540440(longlong param_1,longlong param_2)
void FUN_180540440(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  float *pfVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  int aiStackX_10 [2];
  int32_t auStackX_18 [2];
  int32_t auStackX_20 [2];
  int8_t auStack_50 [24];
  
  pfVar16 = (float *)(param_1 + 0x128);
  iVar14 = 0;
  lVar15 = 0;
  lVar12 = 0;
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x8f8) + 0x9e0);
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x8f8) + 0x9e8);
  do {
    lVar9 = *(longlong *)(param_2 + 0x8f8);
    if (((*(longlong *)(pfVar16 + -0x26) != 0) && (0 < *(int *)(lVar9 + 0x38 + lVar12))) &&
       ((lVar3 = *(longlong *)(lVar9 + 0xd8 + lVar12),
        (*(uint *)((longlong)*(int *)(lVar9 + 0xf8 + lVar12) * 0xa0 + 0x50 + lVar3) >> 9 & 1) == 0
        || (0 < *(short *)(lVar9 + 0x10 + lVar12))))) {
      lVar10 = *(longlong *)(lVar9 + 0xe0 + lVar12) - lVar3;
      iVar13 = 0;
      lVar5 = lVar10 >> 0x3f;
      lVar10 = lVar10 / 0xa0 + lVar5;
      if (lVar10 != lVar5) {
        puVar11 = (uint *)(lVar3 + 0x50);
        do {
          if ((*puVar11 >> 8 & 1) != 0) {
            sVar7 = *(short *)(lVar9 + 0x10 + lVar12);
            iVar13 = (int)sVar7;
            if ((lVar15 == iVar1) && (0 < sVar7)) {
              plVar4 = *(longlong **)(param_2 + 0x590);
              iVar8 = (int)plVar4[0x493];
              if (iVar8 != -1) {
                if ((*(int *)((longlong)iVar8 * 0x68 + 0x58 + _DAT_180c96150) == 0x10) ||
                   (iVar8 = *(int *)((longlong)iVar8 * 0x68 + 0x58 + _DAT_180c96150), iVar8 == 0x11)
                   ) {
                  lVar9 = (**(code **)(*plVar4 + 0x128))(plVar4,1);
                  fVar19 = *(float *)(lVar9 + 0x1d8);
                  fVar20 = (float)(**(code **)(**(longlong **)(param_2 + 0x590) + 0x90))
                                            (*(longlong **)(param_2 + 0x590),1);
                  bVar18 = fVar19 == fVar20;
                  bVar17 = fVar19 < fVar20;
                }
                else {
                  if (iVar8 != 0x12) goto LAB_18054079f;
                  lVar9 = (**(code **)(*plVar4 + 0x128))(plVar4,1);
                  plVar4 = *(longlong **)(param_2 + 0x590);
                  if (((int)plVar4[0x493] == -1) ||
                     (*(char *)((longlong)(int)plVar4[0x493] * 0x68 + 0x60 + _DAT_180c96150) !=
                      '\x04')) goto LAB_1805407d6;
                  fVar19 = (float)(**(code **)(*plVar4 + 0x90))(plVar4,1);
                  bVar18 = fVar19 == *(float *)(lVar9 + 0x1d8);
                  bVar17 = fVar19 < *(float *)(lVar9 + 0x1d8);
                }
                if (bVar17 || bVar18) goto LAB_1805407d6;
              }
LAB_18054079f:
              if (0 < sVar7) {
                iVar13 = iVar13 + -1;
              }
            }
            else if ((plVar2 != (longlong *)0x0) &&
                    ((*(uint *)((longlong)(int)plVar2[0x1e] * 0xa0 + 0x50 + plVar2[0x1a]) & 0x102)
                     == 2)) {
              if ((*(longlong **)(param_2 + 0x628) == plVar2) && (*(int *)(param_2 + 0x644) == -1))
              {
                iVar8 = *(int *)(param_2 + 0x640);
              }
              else {
                aiStackX_10[0] = -1;
                auStackX_20[0] = 0xffffffff;
                auStackX_18[0] = 0xffffffff;
                FUN_18050e440(param_2,plVar2,auStackX_20,auStackX_18,aiStackX_10,auStack_50,
                              0xffffffff);
                iVar8 = aiStackX_10[0];
              }
              if (iVar8 == iVar14) {
                plVar4 = *(longlong **)(param_2 + 0x590);
                if (((int)plVar4[0x493] == -1) ||
                   (*(int *)((longlong)(int)plVar4[0x493] * 0x68 + 0x58 + _DAT_180c96150) != 0x12))
                {
                  if ((*plVar2 != 0) &&
                     ((*(int *)(*plVar2 + 0x30) == *(int *)(lVar9 + 0x38 + lVar12) &&
                      (cVar6 = func_0x000180534460(plVar2,0x80000), cVar6 != '\0')))) {
                    sVar7 = func_0x000180535050(plVar2);
                    iVar13 = iVar13 - sVar7;
                  }
                }
                else {
                  lVar9 = (**(code **)(*plVar4 + 0x128))(plVar4,1);
                  plVar4 = *(longlong **)(param_2 + 0x590);
                  if (((((int)plVar4[0x493] != -1) &&
                       (*(char *)((longlong)(int)plVar4[0x493] * 0x68 + 0x60 + _DAT_180c96150) ==
                        '\x04')) &&
                      (fVar19 = (float)(**(code **)(*plVar4 + 0x90))(plVar4,1),
                      *(float *)(lVar9 + 0x1d8) <= fVar19 && fVar19 != *(float *)(lVar9 + 0x1d8)))
                     && ((cVar6 = func_0x000180534460(plVar2,0x80000), cVar6 != '\0' ||
                         (fVar19 = (float)(**(code **)(**(longlong **)(param_2 + 0x590) + 0x90))
                                                    (*(longlong **)(param_2 + 0x590),1),
                         fVar19 < *(float *)(lVar9 + 0x1dc))))) goto LAB_18054079f;
                }
              }
            }
LAB_1805407d6:
            *pfVar16 = (float)(8 - iVar13);
            break;
          }
          iVar13 = iVar13 + 1;
          puVar11 = puVar11 + 0x28;
        } while ((ulonglong)(longlong)iVar13 < (ulonglong)(lVar10 - lVar5));
      }
    }
    iVar14 = iVar14 + 1;
    lVar15 = lVar15 + 1;
    lVar12 = lVar12 + 0x1f8;
    pfVar16 = pfVar16 + 0x60;
    if (0x9d7 < lVar12) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180540840(longlong param_1,char param_2,uint64_t param_3,uint64_t param_4)
void FUN_180540840(longlong param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint64_t uVar7;
  longlong lVar8;
  longlong lStack_30;
  int32_t uStack_28;
  int8_t auStack_20 [8];
  
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    lVar2 = 5;
    lVar4 = param_1 + 0x90;
    do {
      FUN_1805e7fe0(lVar4,param_2);
      lVar4 = lVar4 + 0x180;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar4 = *(longlong *)(param_1 + 0x810);
    uVar3 = 0;
    uVar6 = uVar3;
    if (*(longlong *)(param_1 + 0x818) - lVar4 >> 3 != 0) {
      do {
        FUN_1805e7fe0(*(uint64_t *)(uVar3 + lVar4),param_2);
        lVar4 = *(longlong *)(uVar3 + *(longlong *)(param_1 + 0x810));
        if (lVar4 != 0) {
          FUN_180506660(lVar4);
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar4);
        }
        *(uint64_t *)(uVar3 + *(longlong *)(param_1 + 0x810)) = 0;
        uVar5 = (int)uVar6 + 1;
        lVar4 = *(longlong *)(param_1 + 0x810);
        uVar3 = uVar3 + 8;
        uVar6 = (ulonglong)uVar5;
      } while ((ulonglong)(longlong)(int)uVar5 <
               (ulonglong)(*(longlong *)(param_1 + 0x818) - lVar4 >> 3));
    }
    *(longlong *)(param_1 + 0x818) = lVar4;
  }
  if (param_2 != '\0') {
    return;
  }
  uVar7 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x930);
  lVar4 = lVar2 + 0x2be8;
  lVar8 = lVar4;
  iVar1 = _Mtx_lock(lVar4);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  uStack_28 = *(int32_t *)(param_1 + 0x938);
  lStack_30 = param_1;
  FUN_1804dd4d0(lVar2 + 0x2b88,auStack_20,&lStack_30,param_4,uVar7,lVar8,1);
  iVar1 = _Mtx_unlock(lVar4);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}





