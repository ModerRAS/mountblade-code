#include "TaleWorlds.Native.Split.h"

// 99_part_09_part095.c - 10 个函数

// 函数: void FUN_1806a0f40(longlong *param_1)
void FUN_1806a0f40(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  
  *param_1 = (longlong)&unknown_var_2320_ptr;
  param_1[1] = (longlong)&unknown_var_2448_ptr;
  if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
    PxSetProfilerCallback(0);
  }
  uVar3 = 0;
  if (param_1[0x14] != 0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x28))((longlong *)param_1[0x12],param_1[0x13] + 8);
    (**(code **)(*(longlong *)param_1[0x12] + 0x18))((longlong *)param_1[0x12],param_1[0x14]);
    (**(code **)(*(longlong *)param_1[0x14] + 0x28))();
    param_1[0x14] = 0;
    (**(code **)(*param_1 + 0x50))(param_1,param_1[0x13]);
  }
  if (*(char *)((longlong)param_1 + 0x81) == '\0') {
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x12] + 0x38))();
      param_1[0x12] = 0;
    }
    plVar2 = (longlong *)param_1[0x13];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,0);
      (**(code **)(*_DAT_180be0050 + 0x10))(_DAT_180be0050,plVar2);
    }
    param_1[0x13] = 0;
    FUN_1806a2100(param_1 + 6);
    lVar1 = param_1[3];
    if ((((*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) != 0) &&
        (-1 < (int)*(uint *)((longlong)param_1 + 0x24))) && (lVar1 != 0)) {
      plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    }
    param_1[1] = (longlong)&unknown_var_1848_ptr;
    *param_1 = (longlong)&unknown_var_1808_ptr;
    return;
  }
  if ((int)param_1[4] != 0) {
    do {
      (**(code **)(**(longlong **)(param_1[3] + uVar3 * 8) + 0x20))();
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 4));
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*param_1 + 0x50))(param_1);
    plVar2 = (longlong *)param_1[0xf];
    param_1[0xf] = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,0);
      (**(code **)(*_DAT_180be0050 + 0x10))(_DAT_180be0050,plVar2);
    }
  }
  (**(code **)(*(longlong *)param_1[5] + 0x10))();
  (**(code **)(*(longlong *)param_1[2] + 8))();
                    // WARNING: Subroutine does not return
  FUN_1806b1a80(param_1 + 6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806a1110(void)
void FUN_1806a1110(void)

{
  uint64_t *puVar1;
  
  puVar1 = _DAT_180c0c2f0;
  if ((_DAT_180c0c2f8 != 0) && (_DAT_180c0c2f8 = _DAT_180c0c2f8 + -1, _DAT_180c0c2f8 == 0)) {
    if (_DAT_180c0c2f0 != (uint64_t *)0x0) {
      (**(code **)*_DAT_180c0c2f0)(_DAT_180c0c2f0,0);
      (**(code **)(*_DAT_180be0050 + 0x10))(_DAT_180be0050,puVar1);
    }
    _DAT_180c0c2f0 = (uint64_t *)0x0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806a1129(void)
void FUN_1806a1129(void)

{
  uint64_t *puVar1;
  
  puVar1 = _DAT_180c0c2f0;
  if (_DAT_180c0c2f0 != (uint64_t *)0x0) {
    (**(code **)*_DAT_180c0c2f0)(_DAT_180c0c2f0,0);
    (**(code **)(*_DAT_180be0050 + 0x10))(_DAT_180be0050,puVar1);
  }
  _DAT_180c0c2f0 = (uint64_t *)0x0;
  return;
}






// 函数: void FUN_1806a1164(void)
void FUN_1806a1164(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1806a1170(longlong param_1,uint64_t *param_2,int8_t *param_3)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  uint64_t *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  void *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uStackX_8;
  uint64_t in_stack_ffffffffffffff58;
  int32_t uVar13;
  void **ppuVar12;
  void *puStack_88;
  void *puStack_80;
  void *puStack_78;
  void *puStack_70;
  void *puStack_68;
  void *puStack_60;
  void *puStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  longlong lStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  
  uVar13 = (int32_t)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  if (*(char *)(param_1 + 0x81) == '\0') {
    *(int8_t *)(param_1 + 0x80) = *param_3;
    *(uint64_t **)(param_1 + 0x10) = param_2;
    cVar1 = (**(code **)*param_2)(param_2);
    *(char *)(param_1 + 0x81) = cVar1;
    if (cVar1 != '\0') {
      uVar3 = CONCAT44(uVar13,0x83);
      puVar5 = (uint64_t *)
               (**(code **)(*_DAT_180be0050 + 8))
                         (_DAT_180be0050,0x58,&unknown_var_2640_ptr,&unknown_var_2472_ptr,uVar3);
      uVar13 = (int32_t)((ulonglong)uVar3 >> 0x20);
      if (puVar5 == (uint64_t *)0x0) {
        puVar5 = (uint64_t *)0x0;
      }
      else {
        *puVar5 = &unknown_var_2248_ptr;
        uVar3 = FUN_1806a7780();
        puVar5[1] = uVar3;
        iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
        uVar3 = 0;
        if (iVar2 != 0) {
          plVar6 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
          plVar7 = (longlong *)PxGetFoundation();
          cVar1 = (**(code **)(*plVar7 + 0x28))(plVar7);
          if (cVar1 == '\0') {
            puVar8 = &unknown_var_1728_ptr;
          }
          else {
            puVar8 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
          }
          uVar3 = (**(code **)(*plVar6 + 8))
                            (plVar6,iVar2,puVar8,&unknown_var_1664_ptr,CONCAT44(uVar13,0x71));
        }
        puVar5[2] = uVar3;
        __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar3);
        *(int32_t *)(puVar5 + 3) = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        *(int32_t *)(puVar5 + 9) = 0x3f400000;
        *(int32_t *)((longlong)puVar5 + 0x4c) = 0xffffffff;
        puVar5[10] = 0;
        FUN_1806a2bd0(puVar5 + 4,0x40);
        (**(code **)(*(longlong *)puVar5[1] + 0xd0))();
      }
      uVar4 = 0;
      *(uint64_t **)(param_1 + 0x28) = puVar5;
      puStack_58 = &unknown_var_2024_ptr;
      uStack_50 = 0x31e5e882;
      uStack_4c = 1;
      plVar6 = (longlong *)
               _getCounterFrequency_Time_shdfnd_physx__SA_AUCounterFrequencyToTensOfNanos_23_XZ
                         (&puStack_68);
      lStack_48 = *plVar6 * 10;
      lVar9 = _getCounterFrequency_Time_shdfnd_physx__SA_AUCounterFrequencyToTensOfNanos_23_XZ
                        (&puStack_68);
      uStack_40 = *(uint64_t *)(lVar9 + 8);
      uStack_38 = 1;
      puStack_80 = (void *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
      puStack_88 = &unknown_var_2680_ptr;
      func_0x0001806a2e70(&puStack_88,&uStack_50);
      (**(code **)(puStack_88 + 0x40))(&puStack_88,&uStack_4c);
      (**(code **)(puStack_88 + 0x30))(&puStack_88,&lStack_48);
      (**(code **)(puStack_88 + 0x30))(&puStack_88,&uStack_40);
      uStackX_8 = CONCAT44(uStackX_8._4_4_,uStack_38);
      (**(code **)(puStack_88 + 0x40))(&puStack_88,&uStackX_8);
      uStack_38 = (int32_t)uStackX_8;
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
      plVar6 = (longlong *)FUN_1806a3140(param_1);
      puStack_88 = &unknown_var_1904_ptr;
      puStack_80 = &unknown_var_2040_ptr;
      (**(code **)(plVar6[1] + 8))(plVar6 + 1,&puStack_88);
      puStack_78 = (void *)0x0;
      puStack_70 = (void *)0x0;
      puStack_68 = &unknown_var_1872_ptr;
      puStack_60 = &unknown_var_1880_ptr;
      puStack_88 = &unknown_var_1904_ptr;
      puStack_80 = &unknown_var_2040_ptr;
      (**(code **)(plVar6[1] + 0x20))
                (plVar6 + 1,&puStack_88,&unknown_var_1016_ptr,&unknown_var_2160_ptr,&puStack_68,2,&puStack_78);
      puStack_88 = &unknown_var_1904_ptr;
      puStack_80 = &unknown_var_2056_ptr;
      puStack_68 = &unknown_var_1904_ptr;
      puStack_60 = &unknown_var_2056_ptr;
      (**(code **)(plVar6[1] + 8))(plVar6 + 1,&puStack_68);
      puStack_68 = (void *)0x0;
      puStack_60 = (void *)0x0;
      puStack_78 = &unknown_var_1872_ptr;
      puStack_70 = &unknown_var_1880_ptr;
      puStack_88 = &unknown_var_1904_ptr;
      puStack_80 = &unknown_var_2056_ptr;
      (**(code **)(plVar6[1] + 0x20))
                (plVar6 + 1,&puStack_88,&unknown_var_1016_ptr,&unknown_var_2184_ptr,&puStack_78,2,&puStack_68);
      puStack_88 = &unknown_var_1904_ptr;
      puStack_80 = &unknown_var_1888_ptr;
      puStack_68 = &unknown_var_1904_ptr;
      puStack_60 = &unknown_var_1888_ptr;
      (**(code **)(plVar6[1] + 8))(plVar6 + 1,&puStack_68);
      puStack_68 = (void *)0x0;
      puStack_60 = (void *)0x0;
      ppuVar12 = &puStack_78;
      puStack_78 = &unknown_var_1872_ptr;
      puStack_70 = &unknown_var_1880_ptr;
      puStack_88 = &unknown_var_1904_ptr;
      puStack_80 = &unknown_var_1888_ptr;
      (**(code **)(plVar6[1] + 0x20))
                (plVar6 + 1,&puStack_88,&unknown_var_1016_ptr,&unknown_var_2208_ptr,ppuVar12,2,&puStack_68);
      uVar13 = (int32_t)((ulonglong)ppuVar12 >> 0x20);
      (**(code **)(*plVar6 + 0xa0))(plVar6);
      if ((*(byte *)(param_1 + 0x80) & 4) != 0) {
        lVar9 = (**(code **)(*_DAT_180be0050 + 8))
                          (_DAT_180be0050,0x38,&unknown_var_2664_ptr,&unknown_var_2472_ptr,CONCAT44(uVar13,0x8c));
        uVar10 = uVar4;
        if (lVar9 != 0) {
          uVar10 = FUN_1806b1b20(lVar9,param_1);
        }
        *(ulonglong *)(param_1 + 0x78) = uVar10;
        uStackX_8 = uVar10;
        if (*(uint *)(param_1 + 0x20) < (*(uint *)(param_1 + 0x24) & 0x7fffffff)) {
          *(ulonglong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 8) =
               uVar10;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        }
        else {
          FUN_1806a29d0(param_1 + 0x18,&uStackX_8);
        }
      }
      if (((*(byte *)(param_1 + 0x80) & 2) != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
        uStackX_8 = *(ulonglong *)(param_1 + 0x98);
        if (*(uint *)(param_1 + 0x20) < (*(uint *)(param_1 + 0x24) & 0x7fffffff)) {
          *(ulonglong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 8) =
               uStackX_8;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        }
        else {
          FUN_1806a29d0(param_1 + 0x18,&uStackX_8);
        }
        puStack_68 = puStack_88;
        puStack_80 = (void *)0x0;
        puStack_88 = (void *)((ulonglong)puStack_88 & 0xffffffff00000000);
        puStack_68 = (void *)((ulonglong)puStack_68 & 0xffffffff00000000);
        puStack_60 = (void *)0x0;
        uVar3 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        uVar3 = FUN_1806b2060(uVar3,_DAT_180be0060,&puStack_68,0x10000);
        *(uint64_t *)(param_1 + 0xa0) = uVar3;
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        do {
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + uVar4 * 8) + 0x18))();
          uVar11 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_1 + 0x20));
      }
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))
                  (*(longlong **)(param_1 + 0x90),*(longlong *)(param_1 + 0x98) + 8);
        (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))
                  (*(longlong **)(param_1 + 0x90),*(uint64_t *)(param_1 + 0xa0));
      }
      if ((*(byte *)(param_1 + 0x80) & 2) != 0) {
        PxSetProfilerCallback(param_1);
      }
    }
    return (ulonglong)*(byte *)(param_1 + 0x81);
  }
  uVar3 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
  uVar4 = _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                    (uVar3,4,&unknown_var_2472_ptr,0x78,&unknown_var_2560_ptr);
  return uVar4 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_1806a11f6(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  longlong lVar2;
  uint64_t uVar3;
  char cVar4;
  int iVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  longlong *plVar8;
  longlong *plVar9;
  void *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong unaff_RBP;
  uint uVar13;
  longlong unaff_R14;
  uint64_t in_stack_00000020;
  int32_t uVar15;
  ulonglong uVar14;
  
  uVar7 = CONCAT44((int)((ulonglong)in_stack_00000020 >> 0x20),0x83);
  puVar6 = (uint64_t *)(**(code **)(*param_1 + 8))(param_1,0x58,&unknown_var_2640_ptr,param_4,uVar7);
  uVar15 = (int32_t)((ulonglong)uVar7 >> 0x20);
  if (puVar6 == (uint64_t *)0x0) {
    puVar6 = (uint64_t *)0x0;
  }
  else {
    *puVar6 = &unknown_var_2248_ptr;
    uVar7 = FUN_1806a7780();
    puVar6[1] = uVar7;
    iVar5 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
    uVar7 = 0;
    if (iVar5 != 0) {
      plVar8 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar9 = (longlong *)PxGetFoundation();
      cVar4 = (**(code **)(*plVar9 + 0x28))(plVar9);
      if (cVar4 == '\0') {
        puVar10 = &unknown_var_1728_ptr;
      }
      else {
        puVar10 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
      }
      uVar7 = (**(code **)(*plVar8 + 8))(plVar8,iVar5,puVar10,&unknown_var_1664_ptr,CONCAT44(uVar15,0x71));
    }
    puVar6[2] = uVar7;
    __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar7);
    *(int32_t *)(puVar6 + 3) = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    *(int32_t *)(puVar6 + 9) = 0x3f400000;
    *(int32_t *)((longlong)puVar6 + 0x4c) = 0xffffffff;
    puVar6[10] = 0;
    FUN_1806a2bd0(puVar6 + 4,0x40);
    (**(code **)(*(longlong *)puVar6[1] + 0xd0))();
  }
  uVar14 = 0;
  *(uint64_t **)(unaff_R14 + 0x28) = puVar6;
  *(void **)(unaff_RBP + 7) = &unknown_var_2024_ptr;
  *(int32_t *)(unaff_RBP + 0xf) = 0x31e5e882;
  *(int32_t *)(unaff_RBP + 0x13) = 1;
  plVar8 = (longlong *)
           _getCounterFrequency_Time_shdfnd_physx__SA_AUCounterFrequencyToTensOfNanos_23_XZ
                     (unaff_RBP + -9);
  *(longlong *)(unaff_RBP + 0x17) = *plVar8 * 10;
  lVar11 = _getCounterFrequency_Time_shdfnd_physx__SA_AUCounterFrequencyToTensOfNanos_23_XZ
                     (unaff_RBP + -9);
  *(uint64_t *)(unaff_RBP + 0x1f) = *(uint64_t *)(lVar11 + 8);
  plVar8 = *(longlong **)(unaff_R14 + 0x10);
  *(int32_t *)(unaff_RBP + 0x27) = 1;
  uVar7 = (**(code **)(*plVar8 + 0x20))();
  *(uint64_t *)(unaff_RBP + -0x21) = uVar7;
  *(void **)(unaff_RBP + -0x29) = &unknown_var_2680_ptr;
  func_0x0001806a2e70(unaff_RBP + -0x29,unaff_RBP + 0xf);
  (**(code **)(*(longlong *)(unaff_RBP + -0x29) + 0x40))(unaff_RBP + -0x29,unaff_RBP + 0x13);
  (**(code **)(*(longlong *)(unaff_RBP + -0x29) + 0x30))(unaff_RBP + -0x29,unaff_RBP + 0x17);
  (**(code **)(*(longlong *)(unaff_RBP + -0x29) + 0x30))(unaff_RBP + -0x29,unaff_RBP + 0x1f);
  *(int32_t *)(unaff_RBP + 0x67) = *(int32_t *)(unaff_RBP + 0x27);
  (**(code **)(*(longlong *)(unaff_RBP + -0x29) + 0x40))(unaff_RBP + -0x29,unaff_RBP + 0x67);
  plVar8 = *(longlong **)(unaff_R14 + 0x10);
  *(int32_t *)(unaff_RBP + 0x27) = *(int32_t *)(unaff_RBP + 0x67);
  (**(code **)(*plVar8 + 0x28))();
  plVar8 = (longlong *)FUN_1806a3140();
  *(void **)(unaff_RBP + -0x21) = &unknown_var_2040_ptr;
  *(void **)(unaff_RBP + -0x29) = &unknown_var_1904_ptr;
  lVar11 = plVar8[1];
  *(int32_t *)(unaff_RBP + -0x29) = *(int32_t *)(unaff_RBP + -0x29);
  *(int32_t *)(unaff_RBP + -0x25) = *(int32_t *)(unaff_RBP + -0x25);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(unaff_RBP + -0x21);
  *(int32_t *)(unaff_RBP + -0x1d) = *(int32_t *)(unaff_RBP + -0x1d);
  (**(code **)(lVar11 + 8))(plVar8 + 1,unaff_RBP + -0x29);
  *(uint64_t *)(unaff_RBP + -0x19) = 0;
  *(uint64_t *)(unaff_RBP + -0x11) = 0;
  *(void **)(unaff_RBP + -0x29) = &unknown_var_1872_ptr;
  *(void **)(unaff_RBP + -0x21) = &unknown_var_1880_ptr;
  uVar7 = *(uint64_t *)(unaff_RBP + -0x29);
  uVar3 = *(uint64_t *)(unaff_RBP + -0x21);
  *(void **)(unaff_RBP + -0x29) = &unknown_var_1904_ptr;
  lVar11 = plVar8[1];
  *(void **)(unaff_RBP + -0x21) = &unknown_var_2040_ptr;
  *(uint64_t *)(unaff_RBP + -9) = uVar7;
  *(uint64_t *)(unaff_RBP + -1) = uVar3;
  *(int32_t *)(unaff_RBP + -0x29) = *(int32_t *)(unaff_RBP + -0x29);
  *(int32_t *)(unaff_RBP + -0x25) = *(int32_t *)(unaff_RBP + -0x25);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(unaff_RBP + -0x21);
  *(int32_t *)(unaff_RBP + -0x1d) = *(int32_t *)(unaff_RBP + -0x1d);
  (**(code **)(lVar11 + 0x20))
            (plVar8 + 1,unaff_RBP + -0x29,&unknown_var_1016_ptr,&unknown_var_2160_ptr,unaff_RBP + -9);
  *(void **)(unaff_RBP + -0x29) = &unknown_var_1904_ptr;
  lVar11 = plVar8[1];
  *(void **)(unaff_RBP + -0x21) = &unknown_var_2056_ptr;
  *(int32_t *)(unaff_RBP + -9) = *(int32_t *)(unaff_RBP + -0x29);
  *(int32_t *)(unaff_RBP + -5) = *(int32_t *)(unaff_RBP + -0x25);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RBP + -0x21);
  *(int32_t *)(unaff_RBP + 3) = *(int32_t *)(unaff_RBP + -0x1d);
  (**(code **)(lVar11 + 8))(plVar8 + 1,unaff_RBP + -9);
  *(void **)(unaff_RBP + -0x29) = &unknown_var_1872_ptr;
  *(void **)(unaff_RBP + -0x21) = &unknown_var_1880_ptr;
  *(uint64_t *)(unaff_RBP + -9) = 0;
  *(uint64_t *)(unaff_RBP + -1) = 0;
  uVar7 = *(uint64_t *)(unaff_RBP + -0x29);
  uVar3 = *(uint64_t *)(unaff_RBP + -0x21);
  *(void **)(unaff_RBP + -0x29) = &unknown_var_1904_ptr;
  lVar11 = plVar8[1];
  *(void **)(unaff_RBP + -0x21) = &unknown_var_2056_ptr;
  *(uint64_t *)(unaff_RBP + -0x19) = uVar7;
  *(uint64_t *)(unaff_RBP + -0x11) = uVar3;
  *(int32_t *)(unaff_RBP + -0x29) = *(int32_t *)(unaff_RBP + -0x29);
  *(int32_t *)(unaff_RBP + -0x25) = *(int32_t *)(unaff_RBP + -0x25);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(unaff_RBP + -0x21);
  *(int32_t *)(unaff_RBP + -0x1d) = *(int32_t *)(unaff_RBP + -0x1d);
  (**(code **)(lVar11 + 0x20))
            (plVar8 + 1,unaff_RBP + -0x29,&unknown_var_1016_ptr,&unknown_var_2184_ptr,unaff_RBP + -0x19);
  *(void **)(unaff_RBP + -0x29) = &unknown_var_1904_ptr;
  lVar11 = plVar8[1];
  *(void **)(unaff_RBP + -0x21) = &unknown_var_1888_ptr;
  *(int32_t *)(unaff_RBP + -9) = *(int32_t *)(unaff_RBP + -0x29);
  *(int32_t *)(unaff_RBP + -5) = *(int32_t *)(unaff_RBP + -0x25);
  *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RBP + -0x21);
  *(int32_t *)(unaff_RBP + 3) = *(int32_t *)(unaff_RBP + -0x1d);
  (**(code **)(lVar11 + 8))(plVar8 + 1,unaff_RBP + -9);
  *(void **)(unaff_RBP + -0x29) = &unknown_var_1872_ptr;
  *(void **)(unaff_RBP + -0x21) = &unknown_var_1880_ptr;
  *(uint64_t *)(unaff_RBP + -9) = 0;
  *(uint64_t *)(unaff_RBP + -1) = 0;
  lVar11 = unaff_RBP + -0x19;
  uVar7 = *(uint64_t *)(unaff_RBP + -0x29);
  uVar3 = *(uint64_t *)(unaff_RBP + -0x21);
  *(void **)(unaff_RBP + -0x29) = &unknown_var_1904_ptr;
  lVar2 = plVar8[1];
  *(void **)(unaff_RBP + -0x21) = &unknown_var_1888_ptr;
  *(uint64_t *)(unaff_RBP + -0x19) = uVar7;
  *(uint64_t *)(unaff_RBP + -0x11) = uVar3;
  *(int32_t *)(unaff_RBP + -0x29) = *(int32_t *)(unaff_RBP + -0x29);
  *(int32_t *)(unaff_RBP + -0x25) = *(int32_t *)(unaff_RBP + -0x25);
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(unaff_RBP + -0x21);
  *(int32_t *)(unaff_RBP + -0x1d) = *(int32_t *)(unaff_RBP + -0x1d);
  (**(code **)(lVar2 + 0x20))(plVar8 + 1,unaff_RBP + -0x29,&unknown_var_1016_ptr,&unknown_var_2208_ptr,lVar11);
  uVar15 = (int32_t)((ulonglong)lVar11 >> 0x20);
  (**(code **)(*plVar8 + 0xa0))(plVar8);
  if ((*(byte *)(unaff_R14 + 0x80) & 4) != 0) {
    lVar11 = (**(code **)(*_DAT_180be0050 + 8))
                       (_DAT_180be0050,0x38,&unknown_var_2664_ptr,&unknown_var_2472_ptr,CONCAT44(uVar15,0x8c));
    uVar12 = uVar14;
    if (lVar11 != 0) {
      uVar12 = FUN_1806b1b20(lVar11);
    }
    *(ulonglong *)(unaff_R14 + 0x78) = uVar12;
    uVar13 = *(uint *)(unaff_R14 + 0x24);
    uVar1 = *(uint *)(unaff_R14 + 0x20);
    *(ulonglong *)(unaff_RBP + 0x67) = uVar12;
    if (uVar1 < (uVar13 & 0x7fffffff)) {
      *(ulonglong *)(*(longlong *)(unaff_R14 + 0x18) + (ulonglong)uVar1 * 8) = uVar12;
      *(int *)(unaff_R14 + 0x20) = *(int *)(unaff_R14 + 0x20) + 1;
    }
    else {
      FUN_1806a29d0(unaff_R14 + 0x18,unaff_RBP + 0x67);
    }
  }
  if (((*(byte *)(unaff_R14 + 0x80) & 2) != 0) && (*(longlong *)(unaff_R14 + 0x90) != 0)) {
    uVar13 = *(uint *)(unaff_R14 + 0x24);
    uVar1 = *(uint *)(unaff_R14 + 0x20);
    uVar7 = *(uint64_t *)(unaff_R14 + 0x98);
    *(uint64_t *)(unaff_RBP + 0x67) = uVar7;
    if (uVar1 < (uVar13 & 0x7fffffff)) {
      *(uint64_t *)(*(longlong *)(unaff_R14 + 0x18) + (ulonglong)uVar1 * 8) = uVar7;
      *(int *)(unaff_R14 + 0x20) = *(int *)(unaff_R14 + 0x20) + 1;
    }
    else {
      FUN_1806a29d0(unaff_R14 + 0x18,unaff_RBP + 0x67);
    }
    *(uint64_t *)(unaff_RBP + -0x21) = 0;
    *(int32_t *)(unaff_RBP + -0x29) = 0;
    *(int32_t *)(unaff_RBP + -9) = *(int32_t *)(unaff_RBP + -0x29);
    *(int32_t *)(unaff_RBP + -5) = *(int32_t *)(unaff_RBP + -0x25);
    *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RBP + -0x21);
    *(int32_t *)(unaff_RBP + 3) = *(int32_t *)(unaff_RBP + -0x1d);
    uVar7 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    uVar7 = FUN_1806b2060(uVar7,_DAT_180be0060,unaff_RBP + -9,0x10000);
    *(uint64_t *)(unaff_R14 + 0xa0) = uVar7;
  }
  if (*(int *)(unaff_R14 + 0x20) != 0) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(unaff_R14 + 0x18) + uVar14 * 8) + 0x18))();
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
    } while (uVar13 < *(uint *)(unaff_R14 + 0x20));
  }
  if (*(longlong *)(unaff_R14 + 0xa0) != 0) {
    (**(code **)(**(longlong **)(unaff_R14 + 0x90) + 0x20))
              (*(longlong **)(unaff_R14 + 0x90),*(longlong *)(unaff_R14 + 0x98) + 8);
    (**(code **)(**(longlong **)(unaff_R14 + 0x90) + 0x10))
              (*(longlong **)(unaff_R14 + 0x90),*(uint64_t *)(unaff_R14 + 0xa0));
  }
  if ((*(byte *)(unaff_R14 + 0x80) & 2) != 0) {
    PxSetProfilerCallback();
  }
  return *(int8_t *)(unaff_R14 + 0x81);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_1806a15f9(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint64_t uVar4;
  longlong unaff_RBP;
  uint uVar5;
  ulonglong unaff_RSI;
  longlong unaff_R14;
  
  lVar2 = (**(code **)(*_DAT_180be0050 + 8))(_DAT_180be0050,0x38,&unknown_var_2664_ptr,&unknown_var_2472_ptr,0x8c)
  ;
  uVar3 = unaff_RSI;
  if (lVar2 != 0) {
    uVar3 = FUN_1806b1b20(lVar2);
  }
  *(ulonglong *)(unaff_R14 + 0x78) = uVar3;
  uVar5 = *(uint *)(unaff_R14 + 0x24);
  uVar1 = *(uint *)(unaff_R14 + 0x20);
  *(ulonglong *)(unaff_RBP + 0x67) = uVar3;
  if (uVar1 < (uVar5 & 0x7fffffff)) {
    *(ulonglong *)(*(longlong *)(unaff_R14 + 0x18) + (ulonglong)uVar1 * 8) = uVar3;
    *(int *)(unaff_R14 + 0x20) = *(int *)(unaff_R14 + 0x20) + 1;
  }
  else {
    FUN_1806a29d0(unaff_R14 + 0x18,unaff_RBP + 0x67);
  }
  if (((*(byte *)(unaff_R14 + 0x80) & 2) != 0) && (*(longlong *)(unaff_R14 + 0x90) != 0)) {
    uVar5 = *(uint *)(unaff_R14 + 0x24);
    uVar1 = *(uint *)(unaff_R14 + 0x20);
    uVar4 = *(uint64_t *)(unaff_R14 + 0x98);
    *(uint64_t *)(unaff_RBP + 0x67) = uVar4;
    if (uVar1 < (uVar5 & 0x7fffffff)) {
      *(uint64_t *)(*(longlong *)(unaff_R14 + 0x18) + (ulonglong)uVar1 * 8) = uVar4;
      *(int *)(unaff_R14 + 0x20) = *(int *)(unaff_R14 + 0x20) + 1;
    }
    else {
      FUN_1806a29d0(unaff_R14 + 0x18,unaff_RBP + 0x67);
    }
    *(ulonglong *)(unaff_RBP + -0x21) = unaff_RSI;
    *(int *)(unaff_RBP + -0x29) = (int)unaff_RSI;
    *(int32_t *)(unaff_RBP + -9) = *(int32_t *)(unaff_RBP + -0x29);
    *(int32_t *)(unaff_RBP + -5) = *(int32_t *)(unaff_RBP + -0x25);
    *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RBP + -0x21);
    *(int32_t *)(unaff_RBP + 3) = *(int32_t *)(unaff_RBP + -0x1d);
    uVar4 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    uVar4 = FUN_1806b2060(uVar4,_DAT_180be0060,unaff_RBP + -9,0x10000);
    *(uint64_t *)(unaff_R14 + 0xa0) = uVar4;
  }
  if (*(int *)(unaff_R14 + 0x20) != 0) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(unaff_R14 + 0x18) + (unaff_RSI & 0xffffffff) * 8) +
                  0x18))();
      uVar5 = (int)unaff_RSI + 1;
      unaff_RSI = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(unaff_R14 + 0x20));
  }
  if (*(longlong *)(unaff_R14 + 0xa0) != 0) {
    (**(code **)(**(longlong **)(unaff_R14 + 0x90) + 0x20))
              (*(longlong **)(unaff_R14 + 0x90),*(longlong *)(unaff_R14 + 0x98) + 8);
    (**(code **)(**(longlong **)(unaff_R14 + 0x90) + 0x10))
              (*(longlong **)(unaff_R14 + 0x90),*(uint64_t *)(unaff_R14 + 0xa0));
  }
  if ((*(byte *)(unaff_R14 + 0x80) & 2) != 0) {
    PxSetProfilerCallback();
  }
  return *(int8_t *)(unaff_R14 + 0x81);
}



int8_t FUN_1806a172a(void)

{
  longlong unaff_R14;
  
  (**(code **)(**(longlong **)(unaff_R14 + 0x90) + 0x20))
            (*(longlong **)(unaff_R14 + 0x90),*(longlong *)(unaff_R14 + 0x98) + 8);
  (**(code **)(**(longlong **)(unaff_R14 + 0x90) + 0x10))
            (*(longlong **)(unaff_R14 + 0x90),*(uint64_t *)(unaff_R14 + 0xa0));
  if ((*(byte *)(unaff_R14 + 0x80) & 2) != 0) {
    PxSetProfilerCallback();
  }
  return *(int8_t *)(unaff_R14 + 0x81);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806a1790(longlong *param_1)
void FUN_1806a1790(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (param_1[0x14] != 0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x28))((longlong *)param_1[0x12],param_1[0x13] + 8);
    (**(code **)(*(longlong *)param_1[0x12] + 0x18))((longlong *)param_1[0x12],param_1[0x14]);
    (**(code **)(*(longlong *)param_1[0x14] + 0x28))();
    param_1[0x14] = 0;
    (**(code **)(*param_1 + 0x50))(param_1,param_1[0x13]);
  }
  if (*(char *)((longlong)param_1 + 0x81) != '\0') {
    uVar3 = 0;
    if ((int)param_1[4] != 0) {
      do {
        (**(code **)(**(longlong **)(param_1[3] + uVar3 * 8) + 0x20))();
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 4));
    }
    if (param_1[0xf] != 0) {
      (**(code **)(*param_1 + 0x50))(param_1);
      plVar1 = (longlong *)param_1[0xf];
      param_1[0xf] = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,0);
        (**(code **)(*_DAT_180be0050 + 0x10))(_DAT_180be0050,plVar1);
      }
    }
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
    (**(code **)(*(longlong *)param_1[2] + 8))();
                    // WARNING: Subroutine does not return
    FUN_1806b1a80(param_1 + 6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806a1804(void)
void FUN_1806a1804(void)

{
  longlong *plVar1;
  longlong *unaff_RBX;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if ((int)unaff_RBX[4] != 0) {
    do {
      (**(code **)(**(longlong **)(unaff_RBX[3] + uVar3 * 8) + 0x20))();
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(unaff_RBX + 4));
  }
  if (unaff_RBX[0xf] != 0) {
    (**(code **)(*unaff_RBX + 0x50))();
    plVar1 = (longlong *)unaff_RBX[0xf];
    unaff_RBX[0xf] = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,0);
      (**(code **)(*_DAT_180be0050 + 0x10))(_DAT_180be0050,plVar1);
    }
  }
  (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))();
  (**(code **)(*(longlong *)unaff_RBX[2] + 8))();
                    // WARNING: Subroutine does not return
  FUN_1806b1a80(unaff_RBX + 6);
}






// 函数: void FUN_1806a188c(void)
void FUN_1806a188c(void)

{
  return;
}






// 函数: void FUN_1806a18d0(longlong param_1)
void FUN_1806a18d0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + uVar2 * 8) + 0x28))();
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x20));
  }
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x48))();
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18) + 8))();
  }
  return;
}






// 函数: void FUN_1806a1970(longlong param_1,longlong *param_2)
void FUN_1806a1970(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *aplStackX_10 [3];
  
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x20) != 0) {
    do {
      if (param_2 == *(longlong **)(*(longlong *)(param_1 + 0x18) + uVar2 * 8)) {
        return;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x20));
  }
  aplStackX_10[0] = param_2;
  if (*(uint *)(param_1 + 0x20) < (*(uint *)(param_1 + 0x24) & 0x7fffffff)) {
    *(longlong **)(*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 8) =
         param_2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  else {
    FUN_1806a29d0(param_1 + 0x18,aplStackX_10);
  }
  if (*(char *)(param_1 + 0x81) != '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  return;
}






// 函数: void FUN_1806a19f0(longlong param_1,longlong *param_2)
void FUN_1806a19f0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar3;
  ulonglong uVar4;
  uint64_t *puVar5;
  ulonglong uVar2;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      if (param_2 == *(longlong **)(uVar4 * 8 + *(longlong *)(param_1 + 0x18))) {
        (**(code **)(*param_2 + 0x20))(param_2);
        uVar1 = (int)uVar4 + 1;
        uVar3 = *(uint *)(param_1 + 0x20);
        puVar5 = (uint64_t *)(*(longlong *)(param_1 + 0x18) + uVar4 * 8);
        if (uVar1 < uVar3) {
          do {
            uVar2 = (ulonglong)uVar1;
            uVar1 = uVar1 + 1;
            *puVar5 = *(uint64_t *)(*(longlong *)(param_1 + 0x18) + uVar2 * 8);
            uVar3 = *(uint *)(param_1 + 0x20);
            puVar5 = puVar5 + 1;
          } while (uVar1 < uVar3);
        }
        *(uint *)(param_1 + 0x20) = uVar3 - 1;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0x20));
  }
  return;
}






