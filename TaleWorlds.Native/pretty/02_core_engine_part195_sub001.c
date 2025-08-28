#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part195_sub001.c - 18 个函数

#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part195.c - 18 个函数


// 函数: void FUN_1801781f0(uint64_t param_1,uint64_t *param_2,int param_3)
void FUN_1801781f0(uint64_t param_1,uint64_t *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int32_t uVar7;
  int iVar8;
  void *puVar9;
  longlong lVar10;
  int8_t auStack_968 [32];
  uint64_t uStack_948;
  longlong **pplStack_940;
  void *puStack_938;
  longlong lStack_930;
  int32_t uStack_928;
  ulonglong uStack_920;
  longlong *plStack_918;
  uint64_t *puStack_910;
  uint64_t uStack_908;
  longlong lStack_900;
  uint64_t *puStack_8f8;
  void *puStack_8e8;
  void *puStack_8e0;
  int iStack_8d8;
  uint8_t auStack_8d0 [136];
  int8_t auStack_848 [2048];
  ulonglong uStack_48;
  
  lVar4 = _DAT_180c8a9d0;
  uStack_908 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_968;
  iVar8 = (int)(*(longlong *)(_DAT_180c8a9d0 + 200) - *(longlong *)(_DAT_180c8a9d0 + 0xc0) >> 3);
  puStack_910 = param_2;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0xc0) + lVar10 * 8);
      uVar3 = *(uint64_t *)(lVar4 + 0xf8);
      lVar1 = lVar2 + 8;
      lStack_900 = lVar1;
      iVar6 = _Mtx_lock();
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z();
      }
      puStack_8e8 = &UNK_1809fcc28;
      puStack_8e0 = auStack_8d0;
      iStack_8d8 = 0;
      auStack_8d0[0] = 0;
      FUN_1802e5050(&puStack_8e8,&UNK_180a02954,puStack_910);
      puStack_938 = &UNK_180a3c3e0;
      uStack_920 = 0;
      lStack_930 = 0;
      uStack_928 = 0;
      puVar9 = &system_buffer_ptr;
      if (puStack_8e0 != (void *)0x0) {
        puVar9 = puStack_8e0;
      }
      FUN_180628040(&puStack_938,&UNK_180a19458,puVar9,param_3);
      plStack_918 = (longlong *)0x0;
      puVar9 = &system_buffer_ptr;
      if (puStack_8e0 != (void *)0x0) {
        puVar9 = puStack_8e0;
      }
      mbstowcs(auStack_848,puVar9,(longlong)(iStack_8d8 + 1));
      pplStack_940 = &plStack_918;
      uStack_948 = uVar3;
      iVar6 = (**(code **)(**(longlong **)(lVar2 + 0x148) + 0x160))
                        (*(longlong **)(lVar2 + 0x148),auStack_848,param_3,4);
      plVar5 = plStack_918;
      if ((iVar6 == 0) && (plStack_918 != (longlong *)0x0)) {
        (**(code **)(*plStack_918 + 0x80))(plStack_918,0);
        puStack_910 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x50,8,3);
        puStack_910[2] = 0;
        puStack_8f8 = puStack_910 + 4;
        *puStack_8f8 = &UNK_18098bcb0;
        puStack_910[5] = 0;
        *(int32_t *)(puStack_910 + 6) = 0;
        *puStack_8f8 = &UNK_180a3c3e0;
        puStack_910[7] = 0;
        puStack_910[5] = 0;
        *(int32_t *)(puStack_910 + 6) = 0;
        *puStack_910 = plVar5;
        puStack_910[1] = lVar2;
        uVar7 = 0x14;
        if (param_3 != 1) {
          uVar7 = 0x12;
        }
        *(int32_t *)(puStack_910 + 3) = uVar7;
        *(int32_t *)((longlong)puStack_910 + 0x4c) = 0x10;
        *(uint64_t *)((longlong)puStack_910 + 0x44) = 0xffffffffffffffff;
        *(int32_t *)(puStack_910 + 8) = 0;
        puStack_938 = &UNK_180a3c3e0;
        if (lStack_930 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_930 = 0;
        uStack_920 = uStack_920 & 0xffffffff00000000;
        puStack_938 = &UNK_18098bcb0;
        puStack_8e8 = &UNK_18098bcb0;
        iVar8 = _Mtx_unlock(lVar1);
        if (iVar8 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar8);
        }
        break;
      }
      puStack_938 = &UNK_180a3c3e0;
      if (lStack_930 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_930 = 0;
      uStack_920 = uStack_920 & 0xffffffff00000000;
      puStack_938 = &UNK_18098bcb0;
      puStack_8e8 = &UNK_18098bcb0;
      iVar6 = _Mtx_unlock(lVar1);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar8);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_968);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180178500(void)
void FUN_180178500(void)

{
  longlong *plVar1;
  uint64_t auStackX_18 [2];
  
  auStackX_18[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar1 + 0x40))(plVar1,0x2f,1,auStackX_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180178540(void)
void FUN_180178540(void)

{
  longlong lVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t in_R9;
  void *puStack_30;
  uint64_t *puStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  lVar1 = _DAT_180c8a9d0;
  if (*(longlong *)(_DAT_180c8a9d0 + 0xf0) == 0) {
    puStack_30 = &UNK_180a3c3e0;
    uStack_18 = 0;
    puStack_28 = (uint64_t *)0x0;
    uStack_20 = 0;
    puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,in_R9,0xfffffffffffffffe);
    *(int8_t *)puVar3 = 0;
    puStack_28 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    uStack_18 = CONCAT44(uStack_18._4_4_,uVar2);
    *puVar3 = 0x6f6c72656e6e6142;
    *(int16_t *)(puVar3 + 1) = 0x6472;
    *(int8_t *)((longlong)puVar3 + 10) = 0;
    uStack_20 = 10;
    uVar4 = FUN_180177c00(lVar1,&puStack_30);
    *(uint64_t *)(lVar1 + 0xf0) = uVar4;
    puStack_30 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180178650(uint64_t param_1,longlong param_2)
void FUN_180178650(uint64_t param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t *puVar6;
  int8_t auStack_68 [32];
  uint64_t uStack_48;
  uint64_t auStack_40 [4];
  ulonglong uStack_20;
  
  lVar2 = _DAT_180c8a9d0;
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  uVar3 = (**(code **)(**(longlong **)(param_2 + 0x148) + 0x20))();
  uVar5 = 0;
  if (uVar3 != 0) {
    puVar6 = auStack_40;
    do {
      uVar4 = (**(code **)(**(longlong **)(param_2 + 0x148) + 0xa0))
                        (*(longlong **)(param_2 + 0x148),uVar5);
      uVar4 = FUN_180179480(lVar2 + 0x228,uVar4,0);
      uVar5 = uVar5 + 1;
      *puVar6 = uVar4;
      puVar6 = puVar6 + 1;
    } while (uVar5 < uVar3);
  }
  plVar1 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar1 + 0x40))(plVar1,0x2c,uVar3,auStack_40);
  uVar4 = (**(code **)(**(longlong **)(param_2 + 0x148) + 0xb0))(*(longlong **)(param_2 + 0x148),0);
  uStack_48 = FUN_180179480(lVar2 + 0x228,uVar4,0);
  plVar1 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
  (**(code **)(*plVar1 + 0x40))(plVar1,0x2f,1,&uStack_48);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_68);
}






// 函数: void FUN_180178770(void)
void FUN_180178770(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801790a0(uint64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  longlong *plVar2;
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  if (*(int *)(_DAT_180c8a9c8 + 0x380) == 0) {
    plVar2 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,200,8,3,0xfffffffffffffffe);
    plStackX_18 = plVar2;
    FUN_180049830(plVar2);
    *plVar2 = (longlong)&UNK_180a09420;
    plVar2[0x18] = (longlong)param_2;
    plVar2[3] = -4;
    plStackX_20 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
    uVar1 = _DAT_180c82868;
    plStackX_18 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
    FUN_18005e110(uVar1,&plStackX_18);
    (**(code **)(*plVar2 + 0x38))(plVar2);
    return 1;
  }
  (**(code **)*param_2)(param_2);
  return 1;
}



ulonglong FUN_180179180(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4,
                       uint64_t param_5,longlong param_6,uint64_t param_7,ulonglong *param_8)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint64_t *puVar5;
  longlong *plVar6;
  uint64_t uStackX_10;
  longlong *plStack_38;
  int8_t auStack_30 [8];
  uint64_t uStack_28;
  int32_t uStack_20;
  
  uVar4 = (**(code **)(*param_2 + 0x28))(param_2,param_3,param_4,param_8);
  if ((int)uVar4 == 0) {
    plVar6 = (longlong *)*param_8;
    uVar4 = uVar4 & 0xffffffff;
    plStack_38 = plVar6;
    if (param_6 != 0) {
      uStackX_10 = 0;
      uVar3 = (**(code **)(*param_2 + 0x38))(param_2,plVar6,param_6,&uStackX_10);
      uVar4 = (ulonglong)uVar3;
      puVar1 = (uint64_t *)(param_1 + 8);
      uStack_28 = uStackX_10;
      uStack_20 = *(int32_t *)(param_6 + 8);
      puVar5 = puVar1;
      puVar2 = *(uint64_t **)(param_1 + 0x18);
      while (puVar2 != (uint64_t *)0x0) {
        if ((longlong *)puVar2[4] < plVar6) {
          puVar2 = (uint64_t *)*puVar2;
        }
        else {
          puVar5 = puVar2;
          puVar2 = (uint64_t *)puVar2[1];
        }
      }
      if ((puVar5 == puVar1) || (plVar6 < (longlong *)puVar5[4])) {
        puVar5 = (uint64_t *)FUN_180179770(puVar1,auStack_30,puVar1,puVar5,&plStack_38);
        puVar5 = (uint64_t *)*puVar5;
        plVar6 = plStack_38;
      }
      FUN_1800863a0(puVar5 + 5,&uStack_28);
    }
    (**(code **)(*plVar6 + 0x28))(plVar6,&UNK_180946958,7,&system_data_89b0);
  }
  return uVar4;
}



int32_t FUN_1801791c0(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int32_t unaff_ESI;
  longlong *unaff_R14;
  uint64_t in_stack_00000040;
  int32_t in_stack_00000048;
  longlong in_stack_00000098;
  
  if (in_stack_00000098 != 0) {
    unaff_ESI = (**(code **)(*unaff_R14 + 0x38))();
    puVar1 = (uint64_t *)(unaff_RBP + 8);
    in_stack_00000040 = 0;
    in_stack_00000048 = *(int32_t *)(in_stack_00000098 + 8);
    puVar3 = puVar1;
    puVar2 = *(uint64_t **)(unaff_RBP + 0x18);
    while (puVar2 != (uint64_t *)0x0) {
      if ((longlong *)puVar2[4] < unaff_RBX) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar3 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    }
    if ((puVar3 == puVar1) || (unaff_RBX < (longlong *)puVar3[4])) {
      puVar3 = (uint64_t *)FUN_180179770(puVar1,&stack0x00000038,puVar1,puVar3,&stack0x00000030);
      puVar3 = (uint64_t *)*puVar3;
    }
    FUN_1800863a0(puVar3 + 5,&stack0x00000040);
  }
  (**(code **)(*unaff_RBX + 0x28))(unaff_RBX,&UNK_180946958,7,&system_data_89b0);
  return unaff_ESI;
}






// 函数: void FUN_180179296(void)
void FUN_180179296(void)

{
  return;
}






// 函数: void FUN_1801792c0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801792c0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)(param_1 + 8);
  puVar2 = *(uint64_t **)(param_1 + 0x18);
  puVar3 = puVar1;
  if (puVar2 != (uint64_t *)0x0) {
    do {
      if ((longlong *)puVar2[4] < param_2) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar3 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    } while (puVar2 != (uint64_t *)0x0);
    if ((puVar3 != puVar1) && ((longlong *)puVar3[4] <= param_2)) goto LAB_18017931c;
  }
  puVar3 = puVar1;
LAB_18017931c:
  if (puVar3 != puVar1) {
    iVar5 = 0;
    lVar4 = puVar3[5];
    if (puVar3[6] - lVar4 >> 4 != 0) {
      lVar6 = 0;
      do {
        (**(code **)(**(longlong **)(lVar6 + lVar4) + 0x10))();
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x10;
        lVar4 = puVar3[5];
      } while ((ulonglong)(longlong)iVar5 < (ulonglong)(puVar3[6] - lVar4 >> 4));
    }
  }
  (**(code **)(*param_2 + 0x10))(param_2);
  puVar3 = puVar1;
  puVar2 = *(uint64_t **)(param_1 + 0x18);
  while (puVar2 != (uint64_t *)0x0) {
    if ((longlong *)puVar2[4] < param_2) {
      puVar2 = (uint64_t *)*puVar2;
    }
    else {
      puVar3 = puVar2;
      puVar2 = (uint64_t *)puVar2[1];
    }
  }
  if ((puVar3 == puVar1) || (param_2 < (longlong *)puVar3[4])) {
    puVar3 = puVar1;
  }
  if (puVar3 != puVar1) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
    func_0x00018066bd70(puVar3);
    FUN_18066ba00(puVar3,puVar1,param_3,param_4,uVar7);
    if (puVar3[5] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar3);
    }
  }
  return;
}



int32_t
FUN_180179410(uint64_t param_1,longlong *param_2,uint64_t param_3,uint64_t param_4,
             uint64_t *param_5)

{
  int32_t uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2,param_3,param_4,param_5);
  (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,&UNK_180946958,7,&system_data_89b0);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180179480(longlong param_1,uint64_t param_2,longlong param_3)
void FUN_180179480(longlong param_1,uint64_t param_2,longlong param_3)

{
  longlong *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int *piVar5;
  int iVar6;
  uint64_t *puVar7;
  ulonglong uVar8;
  int8_t auStack_c8 [32];
  longlong **pplStack_a8;
  longlong *plStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  int8_t auStack_78 [8];
  uint64_t uStack_70;
  int8_t auStack_68 [8];
  int32_t uStack_60;
  int32_t uStack_5c;
  int8_t auStack_50 [48];
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0xc0))();
  puVar7 = (uint64_t *)(param_1 + 8);
  puVar4 = *(uint64_t **)(param_1 + 0x18);
  puVar2 = puVar7;
  if (*(uint64_t **)(param_1 + 0x18) != (uint64_t *)0x0) {
    do {
      if ((longlong *)puVar4[4] < plVar1) {
        puVar3 = (uint64_t *)*puVar4;
      }
      else {
        puVar3 = (uint64_t *)puVar4[1];
        puVar2 = puVar4;
      }
      puVar4 = puVar3;
    } while (puVar3 != (uint64_t *)0x0);
    if ((puVar2 != puVar7) && ((longlong *)puVar2[4] <= plVar1)) goto LAB_1801794f5;
  }
  puVar2 = puVar7;
LAB_1801794f5:
  plStack_98 = plVar1;
  if (puVar2 == puVar7) {
    uStack_70 = 0;
    (**(code **)(**(longlong **)(_DAT_180c86938 + 0x1d78) + 0x38))
              (*(longlong **)(_DAT_180c86938 + 0x1d78),plVar1,0,&uStack_70);
    uStack_88 = uStack_70;
    if (param_3 == 0) {
      uStack_80 = 0;
    }
    else {
      uStack_80 = *(int32_t *)(param_3 + 8);
    }
    puVar2 = puVar7;
    puVar4 = *(uint64_t **)(param_1 + 0x18);
    while (puVar4 != (uint64_t *)0x0) {
      if ((longlong *)puVar4[4] < plVar1) {
        puVar4 = (uint64_t *)*puVar4;
      }
      else {
        puVar2 = puVar4;
        puVar4 = (uint64_t *)puVar4[1];
      }
    }
    if ((puVar2 == puVar7) || (plVar1 < (longlong *)puVar2[4])) {
      pplStack_a8 = &plStack_98;
      puVar2 = (uint64_t *)FUN_180179770(puVar7,auStack_78);
      puVar2 = (uint64_t *)*puVar2;
      plVar1 = plStack_98;
    }
    FUN_1800863a0(puVar2 + 5,&uStack_88);
  }
  else {
    iVar6 = 0;
    uVar8 = (longlong)(puVar2[6] - puVar2[5]) >> 4;
    if (uVar8 != 0) {
      piVar5 = (int *)(puVar2[5] + 8);
      do {
        if ((param_3 == 0) || (*piVar5 == *(int *)(param_3 + 8))) goto LAB_180179745;
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 4;
      } while ((ulonglong)(longlong)iVar6 < uVar8);
    }
  }
  uStack_90 = 0;
  puVar4 = puVar7;
  if (param_3 == 0) {
    (**(code **)(**(longlong **)(_DAT_180c86938 + 0x1d78) + 0x38))
              (*(longlong **)(_DAT_180c86938 + 0x1d78),plVar1,0,&uStack_90);
    uStack_88 = uStack_90;
    uStack_80 = 0;
    puVar2 = *(uint64_t **)(param_1 + 0x18);
    while (puVar2 != (uint64_t *)0x0) {
      if ((longlong *)puVar2[4] < plVar1) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar4 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    }
  }
  else {
    (**(code **)(*plVar1 + 0x50))(plVar1,auStack_50);
    puVar3 = puVar7;
    puVar2 = *(uint64_t **)(param_1 + 0x18);
    while (puVar2 != (uint64_t *)0x0) {
      if ((longlong *)puVar2[4] < plVar1) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar3 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    }
    if ((puVar3 == puVar7) || (plVar1 < (longlong *)puVar3[4])) {
      pplStack_a8 = &plStack_98;
      puVar3 = (uint64_t *)FUN_180179770(puVar7,auStack_78);
      puVar3 = (uint64_t *)*puVar3;
      plVar1 = plStack_98;
    }
    (**(code **)(**(longlong **)puVar3[5] + 0x40))(*(longlong **)puVar3[5],auStack_68);
    uStack_60 = *(int32_t *)(param_3 + 8);
    uStack_5c = 0xffffffff;
    (**(code **)(**(longlong **)(_DAT_180c86938 + 0x1d78) + 0x38))
              (*(longlong **)(_DAT_180c86938 + 0x1d78),plVar1,auStack_68,&uStack_90);
    uStack_88 = uStack_90;
    uStack_80 = *(int32_t *)(param_3 + 8);
    puVar2 = *(uint64_t **)(param_1 + 0x18);
    while (puVar2 != (uint64_t *)0x0) {
      if ((longlong *)puVar2[4] < plVar1) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar4 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    }
  }
  uStack_90 = uStack_88;
  if ((puVar4 == puVar7) || (plVar1 < (longlong *)puVar4[4])) {
    pplStack_a8 = &plStack_98;
    puVar4 = (uint64_t *)FUN_180179770(puVar7,auStack_78);
    puVar4 = (uint64_t *)*puVar4;
  }
  FUN_1800863a0(puVar4 + 5,&uStack_88);
LAB_180179745:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180179770(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             ulonglong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint64_t uVar5;
  bool bVar6;
  
  plVar1 = (longlong *)*param_1;
  if ((param_4 == plVar1) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar1, (ulonglong)plVar1[4] < *param_5)) {
LAB_1801797e2:
      uVar5 = 0;
      goto LAB_1801797e5;
    }
  }
  else {
    plVar1 = (longlong *)func_0x00018066bd70(param_4);
    if (((ulonglong)param_4[4] < *param_5) && (*param_5 < (ulonglong)plVar1[4])) {
      if (*param_4 == 0) goto LAB_1801797e2;
      uVar5 = 1;
      param_4 = plVar1;
LAB_1801797e5:
      if (param_4 != (longlong *)0x0) {
        FUN_180179c00(param_1,param_2,param_4,uVar5,param_5);
        return param_2;
      }
    }
  }
  bVar6 = true;
  plVar1 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
    do {
      plVar1 = plVar2;
      bVar6 = *param_5 < (ulonglong)plVar1[4];
      if (bVar6) {
        plVar2 = (longlong *)plVar1[1];
      }
      else {
        plVar2 = (longlong *)*plVar1;
      }
    } while (plVar2 != (longlong *)0x0);
  }
  plVar2 = plVar1;
  if (bVar6) {
    if (plVar1 == (longlong *)param_1[1]) {
      uVar3 = *param_5;
      goto LAB_180179852;
    }
    plVar2 = (longlong *)func_0x00018066b9a0(plVar1);
  }
  uVar3 = *param_5;
  if (uVar3 <= (ulonglong)plVar2[4]) {
    *param_2 = plVar2;
    return param_2;
  }
LAB_180179852:
  if ((plVar1 == param_1) || (uVar3 < (ulonglong)plVar1[4])) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x48,(char)param_1[5]);
  *(ulonglong *)(lVar4 + 0x20) = *param_5;
  *(uint64_t *)(lVar4 + 0x28) = 0;
  *(uint64_t *)(lVar4 + 0x30) = 0;
  *(uint64_t *)(lVar4 + 0x38) = 0;
  *(int32_t *)(lVar4 + 0x40) = 3;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,plVar1,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1801798f0(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             int32_t *param_5)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint64_t uVar8;
  bool bVar9;
  
  plVar6 = (longlong *)*param_1;
  if ((param_4 == plVar6) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (iVar5 = memcmp(plVar6 + 4,param_5,0x10), param_4 = plVar6, iVar5 < 0))
    {
LAB_180179981:
      uVar8 = 0;
      goto LAB_180179984;
    }
  }
  else {
    plVar6 = (longlong *)func_0x00018066bd70(param_4);
    iVar5 = memcmp(param_4 + 4,param_5,0x10);
    if ((iVar5 < 0) && (iVar5 = memcmp(param_5,plVar6 + 4,0x10), iVar5 < 0)) {
      if (*param_4 == 0) goto LAB_180179981;
      uVar8 = 1;
      param_4 = plVar6;
LAB_180179984:
      if (param_4 != (longlong *)0x0) {
        FUN_180179cd0(param_1,param_2,param_4,uVar8,param_5);
        return param_2;
      }
    }
  }
  bVar9 = true;
  plVar6 = (longlong *)param_1[2];
  plVar4 = param_1;
  while (plVar6 != (longlong *)0x0) {
    iVar5 = memcmp(param_5,plVar6 + 4,0x10);
    bVar9 = iVar5 < 0;
    plVar4 = plVar6;
    if (bVar9) {
      plVar6 = (longlong *)plVar6[1];
    }
    else {
      plVar6 = (longlong *)*plVar6;
    }
  }
  plVar6 = plVar4;
  if (bVar9) {
    if (plVar4 == (longlong *)param_1[1]) goto FUN_180179a0a;
    plVar6 = (longlong *)func_0x00018066b9a0(plVar4);
  }
  iVar5 = memcmp(plVar6 + 4,param_5,0x10);
  if (-1 < iVar5) {
    *param_2 = plVar6;
    return param_2;
  }
FUN_180179a0a:
  if ((plVar4 == param_1) || (iVar5 = memcmp(param_5,plVar4 + 4,0x10), iVar5 < 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  lVar7 = FUN_18062b420(_DAT_180c8ed18,0x40,(char)param_1[5]);
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(int32_t *)(lVar7 + 0x20) = *param_5;
  *(int32_t *)(lVar7 + 0x24) = uVar1;
  *(int32_t *)(lVar7 + 0x28) = uVar2;
  *(int32_t *)(lVar7 + 0x2c) = uVar3;
  *(uint64_t *)(lVar7 + 0x30) = 0;
  *(uint64_t *)(lVar7 + 0x38) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,plVar4,param_1,uVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180179a0a(int32_t param_1)
void FUN_180179a0a(int32_t param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong lVar4;
  longlong unaff_RBX;
  int32_t *unaff_RBP;
  longlong unaff_RSI;
  
  if (unaff_RBX != unaff_RSI) {
    memcmp(param_1,unaff_RBX + 0x20,0x10);
  }
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(unaff_RSI + 0x28));
  uVar1 = unaff_RBP[1];
  uVar2 = unaff_RBP[2];
  uVar3 = unaff_RBP[3];
  *(int32_t *)(lVar4 + 0x20) = *unaff_RBP;
  *(int32_t *)(lVar4 + 0x24) = uVar1;
  *(int32_t *)(lVar4 + 0x28) = uVar2;
  *(int32_t *)(lVar4 + 0x2c) = uVar3;
  *(uint64_t *)(lVar4 + 0x30) = 0;
  *(uint64_t *)(lVar4 + 0x38) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4);
}






// 函数: void FUN_180179a7a(void)
void FUN_180179a7a(void)

{
  uint64_t unaff_RDI;
  uint64_t *unaff_R14;
  
  *unaff_R14 = unaff_RDI;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180179aa0(longlong *param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             int *param_5)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint64_t uVar6;
  
  plVar3 = (longlong *)*param_1;
  if ((param_4 == plVar3) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar3, *(int *)(plVar3 + 4) < *param_5)) {
LAB_180179aff:
      uVar6 = 0;
      goto LAB_180179b02;
    }
  }
  else {
    plVar3 = (longlong *)func_0x00018066bd70(param_4);
    if (((int)param_4[4] < *param_5) && (*param_5 < (int)plVar3[4])) {
      if (*param_4 == 0) goto LAB_180179aff;
      uVar6 = 1;
      param_4 = plVar3;
LAB_180179b02:
      if (param_4 != (longlong *)0x0) {
        FUN_180179d80(param_1,param_2,param_4,uVar6,param_5);
        return param_2;
      }
    }
  }
  bVar1 = true;
  plVar3 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
    do {
      plVar3 = plVar4;
      bVar1 = *param_5 < (int)plVar3[4];
      if (*param_5 < (int)plVar3[4]) {
        plVar4 = (longlong *)plVar3[1];
      }
      else {
        plVar4 = (longlong *)*plVar3;
      }
    } while (plVar4 != (longlong *)0x0);
  }
  plVar4 = plVar3;
  if (bVar1) {
    if (plVar3 == (longlong *)param_1[1]) {
      iVar2 = *param_5;
      goto FUN_180179b7a;
    }
    plVar4 = (longlong *)func_0x00018066b9a0(plVar3);
  }
  iVar2 = *param_5;
  if (iVar2 <= (int)plVar4[4]) {
    *param_2 = plVar4;
    return param_2;
  }
FUN_180179b7a:
  if ((plVar3 == param_1) || (iVar2 < (int)plVar3[4])) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  lVar5 = FUN_18062b420(_DAT_180c8ed18,0x30,(char)param_1[5]);
  *(int *)(lVar5 + 0x20) = *param_5;
  *(uint64_t *)(lVar5 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,plVar3,param_1,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180179b7a(void)
void FUN_180179b7a(void)

{
  longlong lVar1;
  int32_t *unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x30,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180179b91(void)
void FUN_180179b91(void)

{
  longlong lVar1;
  int32_t *unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x30,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180179b95(void)
void FUN_180179b95(void)

{
  longlong lVar1;
  int32_t *unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x30,*(int8_t *)(unaff_RDI + 0x28));
  *(int32_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}






// 函数: void FUN_180179bd8(void)
void FUN_180179bd8(void)

{
  uint64_t unaff_RBX;
  uint64_t *unaff_R14;
  
  *unaff_R14 = unaff_RBX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180179c00(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_180179c00(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  ulonglong *param_5)

{
  longlong lVar1;
  int32_t uVar2;
  
  if ((((char)param_4 == '\0') && (param_3 != param_1)) &&
     (*(ulonglong *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x48,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  *(ulonglong *)(lVar1 + 0x20) = *param_5;
  *(uint64_t *)(lVar1 + 0x28) = 0;
  *(uint64_t *)(lVar1 + 0x30) = 0;
  *(uint64_t *)(lVar1 + 0x38) = 0;
  *(int32_t *)(lVar1 + 0x40) = 3;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180179cd0(longlong param_1,uint64_t param_2,longlong param_3,char param_4,
void FUN_180179cd0(longlong param_1,uint64_t param_2,longlong param_3,char param_4,
                  int32_t *param_5)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  longlong lVar5;
  int32_t uVar6;
  
  if ((param_4 == '\0') && (param_3 != param_1)) {
    iVar4 = memcmp(param_5,param_3 + 0x20,0x10);
    if (-1 < iVar4) {
      uVar6 = 1;
      goto LAB_180179d1f;
    }
  }
  uVar6 = 0;
LAB_180179d1f:
  lVar5 = FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(param_1 + 0x28));
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(int32_t *)(lVar5 + 0x20) = *param_5;
  *(int32_t *)(lVar5 + 0x24) = uVar1;
  *(int32_t *)(lVar5 + 0x28) = uVar2;
  *(int32_t *)(lVar5 + 0x2c) = uVar3;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,param_3,param_1,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180179d80(longlong param_1,uint64_t param_2,longlong param_3,char param_4,int *param_5)
void FUN_180179d80(longlong param_1,uint64_t param_2,longlong param_3,char param_4,int *param_5)

{
  longlong lVar1;
  int32_t uVar2;
  
  if (((param_4 == '\0') && (param_3 != param_1)) && (*(int *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x30,*(int8_t *)(param_1 + 0x28));
  *(int *)(lVar1 + 0x20) = *param_5;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}






