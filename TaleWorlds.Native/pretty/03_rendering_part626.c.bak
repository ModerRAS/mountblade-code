#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part626.c - 13 个函数

// 函数: void FUN_180616ba0(char param_1)
void FUN_180616ba0(char param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int8_t auStack_238 [32];
  int8_t auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_238;
  if (render_system_memory == 0) {
    FUN_180626eb0(auStack_218,0x200,&unknown_var_1952_ptr,&unknown_var_1408_ptr);
    FUN_18061c7a0(auStack_218);
  }
  else {
    cVar1 = FUN_18061ca90(render_system_memory);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)(**(code **)(render_system_memory + 0x20))(&system_data_25a0,render_system_memory);
      render_system_memory = 0;
      render_system_memory = 0xffffffff;
      if (*plVar3 != 0) {
        if (param_1 == '\0') {
          FUN_1805b5950();
        }
        else {
          FUN_1805b5b20();
        }
      }
    }
  }
  iVar2 = _Mtx_unlock(0x180c95d70);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180616c90(int32_t param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_18061ca90();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)(**(code **)(render_system_memory + 0x20))(&system_data_25a0,param_1);
    if (*plVar2 != 0) {
      return *(uint64_t *)(*plVar2 + 0x58e8);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

double FUN_180616ce0(int32_t param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_18061ca90();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)(**(code **)(render_system_memory + 0x20))(&system_data_25a0,param_1);
    if (*plVar2 != 0) {
      return *(double *)(*plVar2 + 0x58e0) * 100.0;
    }
  }
  return 0.0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_180616d30(int32_t param_1)

{
  uint64_t uVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  
  cVar2 = FUN_18061ca90();
  if (cVar2 != '\0') {
    plVar3 = (longlong *)(**(code **)(render_system_memory + 0x20))(&system_data_25a0,param_1);
    if (*plVar3 != 0) {
      uVar1 = *(uint64_t *)(*plVar3 + 0x14);
      uVar4 = (uint)((ulonglong)uVar1 >> 0x20);
      return (uVar4 & 0xff0000 | (uint)(ushort)((ulonglong)uVar1 >> 0x30)) >> 8 |
             (uVar4 << 0x10 | uVar4 & 0xff00) << 8;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180616db0(int32_t param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_18061ca90();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)(**(code **)(render_system_memory + 0x20))(&system_data_25a0,param_1);
    if (*plVar2 != 0) {
      return *(ulonglong *)(*plVar2 + 0x14) >> 0x20;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180616e00(int32_t param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_18061ca90();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)(**(code **)(render_system_memory + 0x20))(&system_data_25a0,param_1);
    if (*plVar2 != 0) {
      return *(ulonglong *)(*plVar2 + 0x14) & 0xffff;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180616e50(uint64_t *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *puVar5;
  int32_t uVar6;
  longlong *plStackX_8;
  longlong *plStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  void *puStack_48;
  void *puStack_40;
  int iStack_38;
  
  uVar6 = FUN_180627910(&puStack_48);
  if (0 < iStack_38) {
    plVar2 = (longlong *)FUN_1800b3970(uVar6,&plStackX_8,&puStack_48,1);
    lVar1 = *plVar2;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (lVar1 != 0) {
      puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x70,8,3);
      *puVar3 = &unknown_var_1864_ptr;
      *puVar3 = &unknown_var_1608_ptr;
      puVar3[9] = 0;
      puVar3[10] = 0;
      *puVar3 = &unknown_var_1912_ptr;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xb] = 0;
      FUN_1802f8a10(puVar3,lVar1);
      uVar4 = FUN_18062b1e0(system_memory_pool_ptr,0x240,0x10,3);
      plStack_58 = (longlong *)FUN_1802fb490(uVar4);
      if (plStack_58 != (longlong *)0x0) {
        (**(code **)(*plStack_58 + 0x28))(plStack_58);
      }
      FUN_1802fa090(plStack_58,lVar1,puVar3);
      if (plStack_58 == (longlong *)0x0) {
        uStack_50 = 0xffffffff;
      }
      else {
        uStack_50 = (**(code **)(*plStack_58 + 8))(plStack_58);
        (**(code **)(*plStack_58 + 0x28))(plStack_58);
        (**(code **)(*plStack_58 + 0x38))(plStack_58);
      }
      puStack_48 = &system_data_buffer_ptr;
      if (puStack_40 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      goto LAB_180616ef8;
    }
    puVar5 = &system_buffer_ptr;
    if (puStack_40 != (void *)0x0) {
      puVar5 = puStack_40;
    }
    FUN_180626f80(&unknown_var_1488_ptr,puVar5);
  }
  plStack_58 = (longlong *)0x0;
  uStack_50 = 0xffffffff;
  puStack_48 = &system_data_buffer_ptr;
  if (puStack_40 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
LAB_180616ef8:
  *param_1 = plStack_58;
  param_1[1] = CONCAT44(uStack_4c,uStack_50);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180617030(uint64_t *param_1,uint64_t param_2,char param_3,uint64_t param_4,
             uint64_t param_5,uint64_t param_6)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  void *puVar6;
  int32_t uVar7;
  longlong *plStackX_8;
  longlong *plStack_70;
  longlong lStack_68;
  int32_t uStack_58;
  void *puStack_50;
  void *puStack_48;
  int iStack_40;
  
  uVar7 = FUN_180627910(&puStack_50);
  if (0 < iStack_40) {
    plVar3 = (longlong *)FUN_1800b3970(uVar7,&plStackX_8,&puStack_50,1);
    lVar1 = *plVar3;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (lVar1 != 0) {
      if (param_3 == '\0') {
        uVar4 = FUN_18062b1e0(system_memory_pool_ptr,0x25a0,0x10,3);
        uVar4 = FUN_18057c730(uVar4);
        FUN_180627910(&plStack_70,param_5);
        iVar2 = FUN_180555eb0(&system_data_60a0,&plStack_70);
        FUN_18057c8c0(uVar4,param_6,(longlong)iVar2 * 0x1a8 + render_system_memory);
        plStack_70 = (longlong *)&system_data_buffer_ptr;
        if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_68 = 0;
        uStack_58 = 0;
        plStack_70 = (longlong *)&system_state_ptr;
      }
      else {
        uVar4 = FUN_18062b1e0(system_memory_pool_ptr,0xac00,0x10,3);
        uVar4 = FUN_180572910(uVar4);
        FUN_180572c50(uVar4,param_6,0,0);
      }
      uVar5 = FUN_18062b1e0(system_memory_pool_ptr,0x240,0x10,3);
      plVar3 = (longlong *)FUN_1802fb490(uVar5);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      FUN_1802fa090(plVar3,lVar1,uVar4);
      if (plVar3 == (longlong *)0x0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (**(code **)(*plVar3 + 8))(plVar3);
      }
      lStack_68 = CONCAT44(lStack_68._4_4_,uVar7);
      plStack_70 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
        (**(code **)(*plVar3 + 0x38))(plVar3);
      }
      puStack_50 = &system_data_buffer_ptr;
      if (puStack_48 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      goto LAB_1806170f2;
    }
    puVar6 = &system_buffer_ptr;
    if (puStack_48 != (void *)0x0) {
      puVar6 = puStack_48;
    }
    FUN_180626f80(&unknown_var_1488_ptr,puVar6);
  }
  plStack_70 = (longlong *)0x0;
  lStack_68 = CONCAT44(lStack_68._4_4_,0xffffffff);
  puStack_50 = &system_data_buffer_ptr;
  if (puStack_48 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
LAB_1806170f2:
  *param_1 = plStack_70;
  param_1[1] = lStack_68;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_180617280(int32_t *param_1,int *param_2)

{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t uVar7;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  uVar7 = 0xfffffffffffffffe;
  lVar6 = (longlong)*param_2 * 0xe0 + render_system_memory;
  if (*(int *)(lVar6 + 0x60) == 0) {
    uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0xac00,0x10,4,0xfffffffffffffffe);
    puVar3 = (uint64_t *)FUN_180572910(uVar2);
    if (param_2[2] < 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (longlong)param_2[2] * 0x1a8 + render_system_memory;
    }
    FUN_180572c50(puVar3,param_2,lVar5,0);
  }
  else if (*(int *)(lVar6 + 0x60) == 1) {
    uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0x25a0,0x10,4,0xfffffffffffffffe);
    puVar3 = (uint64_t *)FUN_18057c730(uVar2);
    FUN_18057c8c0(puVar3,param_2,(longlong)param_2[2] * 0x1a8 + render_system_memory);
  }
  else {
    puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x70,8,4,0xfffffffffffffffe);
    *puVar3 = &unknown_var_1864_ptr;
    *puVar3 = &unknown_var_1608_ptr;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *puVar3 = &unknown_var_1912_ptr;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xb] = 0;
    FUN_1802f8a10(puVar3,*(uint64_t *)(lVar6 + 0x58));
  }
  uVar7 = FUN_18062b1e0(system_memory_pool_ptr,0x240,0x10,4,uVar7);
  plVar4 = (longlong *)FUN_1802fb490(uVar7);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  FUN_1802fa090(plVar4,*(uint64_t *)(lVar6 + 0x58),puVar3);
  if (plVar4 == (longlong *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar4 + 8))(plVar4);
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  uStack_20 = SUB84(plVar4,0);
  uStack_1c = (int32_t)((ulonglong)plVar4 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar1;
  param_1[3] = uStack_14;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  return param_1;
}





// 函数: void FUN_180617480(longlong param_1,int32_t param_2)
void FUN_180617480(longlong param_1,int32_t param_2)

{
  uint64_t *puVar1;
  
  if ((param_1 != 0) &&
     (puVar1 = *(uint64_t **)(*(longlong *)(param_1 + 0x210) + 0xabf0),
     puVar1 != (uint64_t *)0x0)) {
    (**(code **)*puVar1)(puVar1,0,0);
    *(int32_t *)(puVar1 + 0x113) = param_2;
  }
  return;
}





// 函数: void FUN_180617498(void)
void FUN_180617498(void)

{
  uint64_t *puVar1;
  longlong in_RAX;
  int32_t unaff_XMM6_Da;
  
  puVar1 = *(uint64_t **)(in_RAX + 0xabf0);
  if (puVar1 != (uint64_t *)0x0) {
    (**(code **)*puVar1)(puVar1,0,0);
    *(int32_t *)(puVar1 + 0x113) = unaff_XMM6_Da;
  }
  return;
}





// 函数: void FUN_1806174cd(void)
void FUN_1806174cd(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1806174d0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  void *puVar2;
  int32_t uVar3;
  void *puVar4;
  void *puStack_30;
  longlong lStack_28;
  
  if (((param_1 == 0) ||
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x210) + 0xabf0), lVar1 == 0)) ||
     (lVar1 = *(longlong *)(lVar1 + 0x88), lVar1 == 0)) {
    return 0;
  }
  puVar2 = *(void **)(lVar1 + 0x18);
  puVar4 = &system_buffer_ptr;
  if (puVar2 != (void *)0x0) {
    puVar4 = puVar2;
  }
  FUN_180627910(&puStack_30,puVar4,param_3,param_4,0xfffffffffffffffe);
  uVar3 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&puStack_30);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180617580(longlong param_1,int8_t param_2,int param_3,int32_t param_4,
void FUN_180617580(longlong param_1,int8_t param_2,int param_3,int32_t param_4,
                  uint64_t *param_5)

{
  int iVar1;
  uint64_t uVar2;
  longlong lVar3;
  uint64_t uVar4;
  int8_t auStack_58 [32];
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(render_system_memory + (longlong)param_3 * 4);
    if (iVar1 == -1) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint64_t *)(render_system_memory + (longlong)iVar1 * 8);
    }
    lVar3 = FUN_18040c880(*(uint64_t *)(param_1 + 0x208),auStack_58,uVar4,param_2,param_4,0);
    FUN_18063b5f0(&uStack_38);
    uVar4 = *(uint64_t *)(lVar3 + 0x10);
    uVar2 = *(uint64_t *)(lVar3 + 0x18);
    *param_5 = uStack_38;
    param_5[1] = uStack_30;
    param_5[2] = uStack_28;
    param_5[3] = uStack_20;
    param_5[4] = uStack_18;
    param_5[5] = uStack_10;
    param_5[6] = uVar4;
    param_5[7] = uVar2;
    return;
  }
  *param_5 = 0x3f800000;
  param_5[1] = 0;
  param_5[2] = 0x3f80000000000000;
  param_5[3] = 0;
  param_5[4] = 0;
  param_5[5] = 0x3f800000;
  param_5[6] = 0;
  param_5[7] = 0x3f80000000000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180617650(longlong param_1,char param_2,char param_3,char param_4,uint64_t *param_5)
void FUN_180617650(longlong param_1,char param_2,char param_3,char param_4,uint64_t *param_5)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  longlong lVar8;
  uint *puVar9;
  int8_t auStack_108 [32];
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int8_t auStack_68 [32];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint64_t uStack_38;
  uint64_t uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_108;
  if (param_1 == 0) {
    *param_5 = 0x3f800000;
    param_5[1] = 0;
    param_5[2] = 0x3f80000000000000;
    param_5[3] = 0;
    *(int32_t *)(param_5 + 4) = 0;
    *(int32_t *)((longlong)param_5 + 0x24) = 0;
    *(int32_t *)(param_5 + 5) = 0x3f800000;
    *(int32_t *)((longlong)param_5 + 0x2c) = 0;
    *(int32_t *)(param_5 + 6) = 0;
    *(int32_t *)((longlong)param_5 + 0x34) = 0;
    *(int32_t *)(param_5 + 7) = 0;
    *(int32_t *)((longlong)param_5 + 0x3c) = 0x3f800000;
  }
  else {
    if (param_3 != '\0') {
      param_2 = *(char *)(*(longlong *)(param_1 + 0x208) + 0xc0 + (longlong)param_2);
    }
    if (param_4 == '\0') {
      puVar9 = (uint *)((longlong)param_2 * 0x100 + *(longlong *)(param_1 + 0x18));
      do {
        LOCK();
        uVar1 = *puVar9;
        *puVar9 = *puVar9 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      uStack_e8 = puVar9[1];
      uStack_e4 = puVar9[2];
      uStack_e0 = puVar9[3];
      uStack_dc = puVar9[4];
      uVar6 = *(uint64_t *)(puVar9 + 5);
      uVar7 = *(uint64_t *)(puVar9 + 7);
      *puVar9 = 0;
      uStack_d8 = uVar6;
      uStack_d0 = uVar7;
      uStack_48 = uStack_e8;
      uStack_44 = uStack_e4;
      uStack_40 = uStack_e0;
      uStack_3c = uStack_dc;
      uStack_38 = uVar6;
      uStack_30 = uVar7;
      FUN_18063b5f0(&uStack_98,&uStack_e8);
      *(int32_t *)param_5 = uStack_98;
      *(int32_t *)((longlong)param_5 + 4) = uStack_94;
      *(int32_t *)(param_5 + 1) = uStack_90;
      *(int32_t *)((longlong)param_5 + 0xc) = uStack_8c;
      *(int32_t *)(param_5 + 2) = uStack_88;
      *(int32_t *)((longlong)param_5 + 0x14) = uStack_84;
      *(int32_t *)(param_5 + 3) = uStack_80;
      *(int32_t *)((longlong)param_5 + 0x1c) = uStack_7c;
      *(int32_t *)(param_5 + 4) = uStack_78;
      *(int32_t *)((longlong)param_5 + 0x24) = uStack_74;
      *(int32_t *)(param_5 + 5) = uStack_70;
      *(int32_t *)((longlong)param_5 + 0x2c) = uStack_6c;
      param_5[6] = uVar6;
      param_5[7] = uVar7;
    }
    else {
      lVar8 = FUN_180534770(param_1,auStack_68,param_2);
      FUN_18063b5f0(&uStack_c8);
      uVar2 = *(int32_t *)(lVar8 + 0x10);
      uVar3 = *(int32_t *)(lVar8 + 0x14);
      uVar4 = *(int32_t *)(lVar8 + 0x18);
      uVar5 = *(int32_t *)(lVar8 + 0x1c);
      *(int32_t *)param_5 = uStack_c8;
      *(int32_t *)((longlong)param_5 + 4) = uStack_c4;
      *(int32_t *)(param_5 + 1) = uStack_c0;
      *(int32_t *)((longlong)param_5 + 0xc) = uStack_bc;
      *(int32_t *)(param_5 + 2) = uStack_b8;
      *(int32_t *)((longlong)param_5 + 0x14) = uStack_b4;
      *(int32_t *)(param_5 + 3) = uStack_b0;
      *(int32_t *)((longlong)param_5 + 0x1c) = uStack_ac;
      param_5[4] = uStack_a8;
      param_5[5] = uStack_a0;
      *(int32_t *)(param_5 + 6) = uVar2;
      *(int32_t *)((longlong)param_5 + 0x34) = uVar3;
      *(int32_t *)(param_5 + 7) = uVar4;
      *(int32_t *)((longlong)param_5 + 0x3c) = uVar5;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_108);
}





// 函数: void FUN_1806176f0(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)
void FUN_1806176f0(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint *in_RAX;
  int32_t *unaff_RBX;
  uint uStack0000000000000028;
  uint uStack000000000000002c;
  uint64_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  int32_t uStack0000000000000080;
  int32_t uStack0000000000000084;
  int32_t uStack0000000000000088;
  int32_t uStack000000000000008c;
  int32_t uStack0000000000000090;
  int32_t uStack0000000000000094;
  int32_t uStack0000000000000098;
  int32_t uStack000000000000009c;
  uint uStack00000000000000c0;
  uint uStack00000000000000c4;
  uint uStack00000000000000c8;
  uint uStack00000000000000cc;
  uint64_t uStack00000000000000d0;
  uint64_t uStack00000000000000d8;
  ulonglong in_stack_000000e0;
  
  do {
    LOCK();
    uVar1 = *in_RAX;
    *in_RAX = *in_RAX | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uStack00000000000000c0 = in_RAX[1];
  uStack00000000000000c4 = in_RAX[2];
  uStack0000000000000028 = in_RAX[3];
  uStack000000000000002c = in_RAX[4];
  uVar2 = *(uint64_t *)(in_RAX + 5);
  uVar3 = *(uint64_t *)(in_RAX + 7);
  *in_RAX = 0;
  uStack0000000000000030 = uVar2;
  uStack0000000000000038 = uVar3;
  uStack00000000000000c8 = uStack0000000000000028;
  uStack00000000000000cc = uStack000000000000002c;
  uStack00000000000000d0 = uVar2;
  uStack00000000000000d8 = uVar3;
  FUN_18063b5f0(&stack0x00000070,&stack0x00000020,param_3,param_4,uStack00000000000000c0);
  *unaff_RBX = uStack0000000000000070;
  unaff_RBX[1] = uStack0000000000000074;
  unaff_RBX[2] = uStack0000000000000078;
  unaff_RBX[3] = uStack000000000000007c;
  unaff_RBX[4] = uStack0000000000000080;
  unaff_RBX[5] = uStack0000000000000084;
  unaff_RBX[6] = uStack0000000000000088;
  unaff_RBX[7] = uStack000000000000008c;
  unaff_RBX[8] = uStack0000000000000090;
  unaff_RBX[9] = uStack0000000000000094;
  unaff_RBX[10] = uStack0000000000000098;
  unaff_RBX[0xb] = uStack000000000000009c;
  *(uint64_t *)(unaff_RBX + 0xc) = uVar2;
  *(uint64_t *)(unaff_RBX + 0xe) = uVar3;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000e0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180617771(void)
void FUN_180617771(void)

{
  uint64_t *unaff_RBX;
  ulonglong in_stack_000000e0;
  
  *unaff_RBX = 0x3f800000;
  unaff_RBX[1] = 0;
  unaff_RBX[2] = 0x3f80000000000000;
  unaff_RBX[3] = 0;
  *(int32_t *)(unaff_RBX + 4) = 0;
  *(int32_t *)((longlong)unaff_RBX + 0x24) = 0;
  *(int32_t *)(unaff_RBX + 5) = 0x3f800000;
  *(int32_t *)((longlong)unaff_RBX + 0x2c) = 0;
  *(int32_t *)(unaff_RBX + 6) = 0;
  *(int32_t *)((longlong)unaff_RBX + 0x34) = 0;
  *(int32_t *)(unaff_RBX + 7) = 0;
  *(int32_t *)((longlong)unaff_RBX + 0x3c) = 0x3f800000;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000e0 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806177c0(longlong param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
void FUN_1806177c0(longlong param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
                  float param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int32_t in_XMM3_Da;
  
  if (param_1 == 0) {
    return;
  }
  if ((int)param_2 < 0) {
                    // WARNING: Could not recover jumptable at 0x0001806177f8. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0x78))
              (*(longlong **)(param_1 + 0x210),param_3,0,0x3727c5ac);
    return;
  }
  iVar1 = *(int *)(render_system_memory + (longlong)(int)param_2 * 4);
  lVar3 = (longlong)iVar1;
  if ((iVar1 != -1) && (lVar3 = *(longlong *)(render_system_memory + lVar3 * 8), lVar3 != 0)) {
    if (param_5 < 0.0) {
      param_5 = *(float *)(lVar3 + 0x1e4);
    }
    uVar2 = *(ulonglong *)(lVar3 + 0x1d0) >> 0x24 & 0xffff;
    uVar4 = (ulonglong)((uint)uVar2 | 0x4000);
    if ((*(ulonglong *)(lVar3 + 0x1d0) & 0x110000000) != 0) {
      uVar4 = uVar2;
    }
    FUN_180300970(param_1,param_3,lVar3,uVar4,param_5,in_XMM3_Da);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd200(&unknown_var_1584_ptr,param_2,lVar3,param_4,param_2,lVar3,param_4);
}





// 函数: void FUN_1806178d0(longlong param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806178d0(longlong param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  int8_t param_5)

{
  longlong lVar1;
  uint64_t uVar2;
  void *puStack_30;
  longlong lStack_28;
  
  if ((param_1 != 0) && (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x210) + 0xabf0), lVar1 != 0)
     ) {
    uVar2 = FUN_180627910(&puStack_30,param_3);
    FUN_1805ef2e0(lVar1,param_2,uVar2,param_5);
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}





// 函数: void FUN_180617970(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_180617970(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int32_t param_5)

{
  int32_t uStack_38;
  int iStack_34;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  uint64_t uStack_18;
  
  if (param_1 == 0) {
                    // WARNING: Subroutine does not return
    uStack_18 = 0x180626fa0;
    FUN_1808fd200(&unknown_var_1528_ptr,param_2,param_3,0,param_2,param_3,0);
  }
  iStack_34 = (int)param_3;
  if (-1 < iStack_34) {
    uStack_24 = 0;
    uStack_1c = param_5;
    uStack_20 = 0x3f800000;
    uStack_38 = (int32_t)param_2;
    uStack_18 = 0x3ecccccdbe4ccccd;
    uStack_30 = 0;
    uStack_28 = param_4;
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0x160))
              (*(longlong **)(param_1 + 0x210),&uStack_38,*(uint64_t *)(param_1 + 0x208));
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180617a30(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  
  if ((param_1 == 0) || (param_3 < 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar1 = *(longlong *)(param_1 + 0x210);
  iVar3 = FUN_18053a410(&system_data_5f30,*(int32_t *)(lVar1 + 0xac));
  iVar3 = *(int *)(render_system_memory + (longlong)iVar3 * 4);
  uVar4 = render_system_memory;
  if (iVar3 != -1) {
    lVar2 = *(longlong *)(render_system_memory + (longlong)iVar3 * 8);
    uVar4 = render_system_memory;
    if (((lVar2 != 0) && (iVar3 = *(int *)(lVar2 + 0x1f0), uVar4 = render_system_memory, iVar3 != -1)) &&
       (uVar4 = (longlong)param_2, iVar3 == *(int *)(lVar1 + 0x2450 + (longlong)param_2 * 0x48))) {
      return CONCAT71((int7)(int3)((uint)param_2 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180617a43(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong unaff_RBX;
  
  lVar1 = *(longlong *)(param_1 + 0x210);
  iVar3 = FUN_18053a410(&system_data_5f30,*(int32_t *)(lVar1 + 0xac));
  iVar3 = *(int *)(render_system_memory + (longlong)iVar3 * 4);
  if (iVar3 != -1) {
    lVar2 = *(longlong *)(render_system_memory + (longlong)iVar3 * 8);
    if (((lVar2 != 0) && (iVar3 = *(int *)(lVar2 + 0x1f0), iVar3 != -1)) &&
       (iVar3 == *(int *)(lVar1 + 0x2450 + unaff_RBX * 0x48))) {
      return 1;
    }
  }
  return 0;
}



int8_t FUN_180617aac(void)

{
  return 0;
}



int8_t FUN_180617ab9(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180617af0(uint64_t param_1,uint64_t *param_2)
void FUN_180617af0(uint64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(param_2 + 1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_18062b420(system_memory_pool_ptr,lVar2,3);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar1,*param_2,lVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180617ba0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *plStackX_20;
  void *puStack_30;
  longlong lStack_28;
  int32_t uStack_18;
  
  uVar2 = FUN_180627910(&puStack_30);
  FUN_1801580f0(render_system_data_memory,&plStackX_20,param_1,uVar2,param_3,0,0);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_28 = 0;
  uStack_18 = 0;
  puStack_30 = &system_state_ptr;
  (**(code **)(*plStackX_20 + 0x60))();
  lVar1 = plStackX_20[10];
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  return (int)lVar1;
}



int8_t * FUN_180617c60(int param_1,uint64_t *param_2)

{
  int8_t *puVar1;
  int iStack_48;
  uint64_t uStack_44;
  uint64_t uStack_3c;
  int32_t uStack_34;
  uint64_t uStack_30;
  uint64_t uStack_28;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  
  uStack_1c = 0x3f800000;
  uStack_34 = 1;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_44 = *param_2;
  uStack_3c = param_2[1];
  uStack_30 = 0;
  uStack_28 = 0;
  if (-1 < param_1) {
    iStack_48 = param_1;
    puVar1 = (int8_t *)FUN_180545140(&system_data_6110,&iStack_48,0,0);
    return puVar1;
  }
  return &stack0x00000000;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180617cd0(uint param_1,int32_t param_2,int32_t param_3,uint64_t *param_4)
void FUN_180617cd0(uint param_1,int32_t param_2,int32_t param_3,uint64_t *param_4)

{
  uint uVar1;
  int8_t auStack_188 [32];
  code *pcStack_168;
  uint64_t uStack_160;
  int32_t uStack_158;
  int8_t *puStack_150;
  uint64_t uStack_148;
  int8_t uStack_140;
  uint uStack_138;
  uint64_t uStack_134;
  uint64_t uStack_12c;
  int32_t uStack_124;
  code *pcStack_120;
  uint64_t uStack_118;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  uint64_t uStack_100;
  int8_t auStack_f8 [8];
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int32_t uStack_d8;
  int32_t uStack_d4;
  int8_t uStack_d0;
  int32_t uStack_38;
  ulonglong uStack_28;
  
  uStack_100 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_188;
  pcStack_168 = FUN_18004a130;
  FUN_1808fc838(auStack_f8,0x30,4,FUN_1801c2890);
  uStack_38 = 0;
  uStack_e8 = 0;
  if (puStack_f0 != (int8_t *)0x0) {
    *puStack_f0 = 0;
  }
  uStack_d0 = 1;
  uStack_38 = 1;
  uStack_134 = *param_4;
  uStack_12c = param_4[1];
  uStack_124 = 1;
  pcStack_120 = (code *)0x0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_10c = 0x3f800000;
  uStack_108 = 0;
  uStack_138 = param_1;
  uStack_d8 = param_2;
  uStack_d4 = param_3;
  if ((-1 < (int)param_1) && (uVar1 = (**(code **)(*render_system_data_memory + 0xe8))(), uStack_138 < uVar1))
  {
    if (((char)uStack_124 == '\0') &&
       (((system_status_flag - 2U & 0xfffffffc) == 0 && (system_status_flag != 4)))) {
      uStack_158 = CONCAT31(uStack_158._1_3_,uStack_124._1_1_);
      uStack_160 = uStack_118;
      pcStack_168 = pcStack_120;
      FUN_1805458e0(&system_data_6110,uStack_138,auStack_f8,&uStack_134);
    }
    uStack_140 = uStack_124._2_1_;
    uStack_148 = 0;
    puStack_150 = auStack_f8;
    uStack_158 = uStack_108;
    uStack_160 = CONCAT44(uStack_160._4_4_,uStack_10c);
    pcStack_168 = (code *)CONCAT44(pcStack_168._4_4_,uStack_110);
    FUN_180545230(&system_data_6110,uStack_138,&uStack_134,uStack_124._3_1_);
  }
  FUN_1808fc8a8(auStack_f8,0x30,4,FUN_18004a130);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



