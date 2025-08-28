/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part611.c - 26 个函数

// 函数: void FUN_1806011d0(int64_t param_1)
void FUN_1806011d0(int64_t param_1)

{
  ushort *puVar1;
  ushort uVar2;
  
  FUN_18052d670();
  uVar2 = *(ushort *)(*(int64_t *)(param_1 + 0x728) + 0x5aa);
  if (uVar2 != 0) {
    puVar1 = (ushort *)(*(int64_t *)(param_1 + 0x728) + 0x5ac);
    *puVar1 = *puVar1 | uVar2;
    *(int16_t *)(*(int64_t *)(param_1 + 0x728) + 0x5aa) = 0;
    *(int32_t *)(*(int64_t *)(param_1 + 0x728) + 0x5a4) = 0xffffffff;
  }
  FUN_180516e40(param_1,0xffff);
  FUN_180526710(param_1,0x3c23d70a);
                    // WARNING: Could not recover jumptable at 0x000180601254. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)**(uint64_t **)(param_1 + 0x590))
            (*(uint64_t **)(param_1 + 0x590),0x3c23d70a,*(uint64_t *)(param_1 + 0x658));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180601280(int64_t param_1)

{
  int iVar1;
  
  if (-1 < *(int *)(param_1 + 0x564)) {
    iVar1 = *(int *)((int64_t)*(int *)(param_1 + 0x564) * 0xa60 + 0x30b8 +
                    *(int64_t *)(param_1 + 0x8d8));
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar1);
    }
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar1);
    }
    return iVar1;
  }
  return 0;
}





// 函数: void FUN_180601310(int64_t param_1,int param_2)
void FUN_180601310(int64_t param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_18061ca10(*(uint64_t *)(param_1 + 0x8d8),param_2);
  if (cVar1 != '\0') {
    if (-1 < *(int *)(param_1 + 0x564)) {
      FUN_18052e130((int64_t)*(int *)(param_1 + 0x564) * 0xa60 +
                    *(int64_t *)(param_1 + 0x8d8) + 0x30a0,0xffffffff,1);
    }
    if (-1 < param_2) {
      FUN_18052e130((int64_t)param_2 * 0xa60 + *(int64_t *)(param_1 + 0x8d8) + 0x30a0,
                    *(int32_t *)(param_1 + 0x10),1);
    }
    FUN_18052e450(param_1,param_2,1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1806013b0(int64_t param_1)

{
  int iVar1;
  
  if (-1 < *(int *)(param_1 + 0x560)) {
    iVar1 = *(int *)((int64_t)*(int *)(param_1 + 0x560) * 0xa60 + 0x30b8 +
                    *(int64_t *)(param_1 + 0x8d8));
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar1);
    }
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar1);
    }
    return iVar1;
  }
  return 0;
}





// 函数: void FUN_180601460(int64_t param_1,int param_2)
void FUN_180601460(int64_t param_1,int param_2)

{
  int64_t lVar1;
  
  lVar1 = *(int64_t *)(param_1 + 0x6e0);
  if (param_2 != -1) {
    FUN_180508010(lVar1);
  }
  *(int *)(lVar1 + 0x172c) = param_2;
  return;
}



int32_t
FUN_180601520(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t uVar2;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar2 = CoreMemoryPoolValidator(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar1 = FUN_18055b2f0(&system_data_6150,uVar2);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return uVar1;
}





// 函数: void FUN_1806015a0(int64_t param_1)
void FUN_1806015a0(int64_t param_1)

{
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(*(int64_t *)(param_1 + 0x20) + 0x34));
}





// 函数: void FUN_1806015d0(int64_t param_1,uint *param_2)
void FUN_1806015d0(int64_t param_1,uint *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int32_t uVar3;
  
  uVar2 = *(uint64_t *)param_2;
  uVar3 = atan2f(*param_2 ^ 0x80000000);
  *(int32_t *)(*(int64_t *)(param_1 + 0x20) + 0x34) = uVar3;
  *(uint64_t *)(param_1 + 0x4c4) = 0;
  *(uint64_t *)(param_1 + 0x4cc) = 0;
  *(uint64_t *)(param_1 + 0x49c) = uVar2;
  *(int32_t *)(param_1 + 0x4ac) = uVar3;
  *(int32_t *)(param_1 + 0x4a4) = 0;
  *(int8_t *)(param_1 + 0x4d4) = 0;
  *(uint64_t *)(param_1 + 0x4b0) = 0;
  *(uint64_t *)(param_1 + 0x4b8) = 0;
  *(int32_t *)(param_1 + 0x4c0) = 0xffffffff;
  lVar1 = *(int64_t *)(param_1 + 0x6e0);
  *(uint64_t *)(lVar1 + 0x1588) = 0;
  *(uint64_t *)(lVar1 + 0x1590) = 0;
  *(int32_t *)(lVar1 + 0x1570) = uVar3;
  *(uint64_t *)(lVar1 + 0x1560) = uVar2;
  *(int32_t *)(lVar1 + 0x1568) = 0;
  *(int8_t *)(lVar1 + 0x1598) = 0;
  *(uint64_t *)(lVar1 + 0x1574) = 0;
  *(uint64_t *)(lVar1 + 0x157c) = 0;
  *(int32_t *)(lVar1 + 0x1584) = 0xffffffff;
  return;
}





// 函数: void FUN_1806016b0(int64_t param_1)
void FUN_1806016b0(int64_t param_1)

{
  FUN_1802ea560(*(uint64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8),0);
  if ((*(int *)(param_1 + 0x720) != 2) &&
     (*(int32_t *)(param_1 + 0x720) = 2, *(char *)(param_1 + 0x984) != '\0')) {
    *(int32_t *)(*(int64_t *)(param_1 + 0x738) + 0x1a0) = 2;
  }
  *(uint64_t *)(param_1 + 0x710) =
       *(uint64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x718) * 8);
  return;
}



char FUN_180601760(int64_t param_1,uint64_t *param_2,float param_3,char param_4,uint param_5)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  void *puVar6;
  char cVar7;
  
  lVar1 = *(int64_t *)(param_1 + 0x6e0);
  if ((*(float *)(param_2 + 3) == *(float *)(lVar1 + 0x20b8)) &&
     (*(float *)((int64_t)param_2 + 0x1c) == *(float *)(lVar1 + 0x20bc))) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  if (((cVar7 != '\0') || (*(uint *)(lVar1 + 0x2098) != (param_5 | 5))) ||
     (param_3 != *(float *)(lVar1 + 0x20e8))) {
    *(uint *)(lVar1 + 0x2098) = param_5 | 5;
    *(uint64_t *)(lVar1 + 0x20a0) = *param_2;
    uVar5 = param_2[4];
    *(uint64_t *)(lVar1 + 0x20b8) = param_2[3];
    *(uint64_t *)(lVar1 + 0x20c0) = uVar5;
    uVar2 = *(int32_t *)((int64_t)param_2 + 0x2c);
    uVar3 = *(int32_t *)(param_2 + 6);
    uVar4 = *(int32_t *)((int64_t)param_2 + 0x34);
    *(int32_t *)(lVar1 + 0x20c8) = *(int32_t *)(param_2 + 5);
    *(int32_t *)(lVar1 + 0x20cc) = uVar2;
    *(int32_t *)(lVar1 + 0x20d0) = uVar3;
    *(int32_t *)(lVar1 + 0x20d4) = uVar4;
    *(uint64_t *)(lVar1 + 0x20a8) = param_2[1];
    *(uint64_t *)(lVar1 + 0x20b0) = param_2[2];
    *(uint64_t *)(lVar1 + 0x20d8) = param_2[7];
    *(int32_t *)(lVar1 + 0x20e0) = *(int32_t *)(param_2 + 8);
    *(float *)(lVar1 + 0x20e8) = param_3;
    if (param_4 == '\0') {
      *(int32_t *)(lVar1 + 0x13b8) = 0;
    }
    else {
      FUN_180508010(lVar1);
    }
    puVar6 = &unknown_var_6416_ptr;
    if (param_4 != '\0') {
      puVar6 = &unknown_var_6344_ptr;
    }
    func_0x000180508000(lVar1,&unknown_var_7760_ptr,&unknown_var_7792_ptr,(double)*(float *)(param_2 + 3),
                        (double)*(float *)((int64_t)param_2 + 0x1c),(double)param_3,puVar6,param_5)
    ;
  }
  return cVar7;
}



uint64_t FUN_1806018c0(int64_t param_1,uint64_t *param_2,char param_3,uint param_4)

{
  float fVar1;
  int64_t lVar2;
  uint64_t uVar3;
  void *puVar4;
  uint64_t uVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = *(int64_t *)(param_1 + 0x6e0);
  fVar1 = *(float *)(param_2 + 3);
  if ((*(float *)(lVar2 + 0x20b8) == fVar1) &&
     (*(float *)((int64_t)param_2 + 0x1c) == *(float *)(lVar2 + 0x20bc))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  if ((*(uint *)(lVar2 + 0x2098) != (param_4 | 1)) ||
     (fVar7 = *(float *)((int64_t)param_2 + 0x1c) - *(float *)(lVar2 + 0x20bc),
     fVar6 = fVar1 - *(float *)(lVar2 + 0x20b8), 0.1 < fVar6 * fVar6 + fVar7 * fVar7)) {
    puVar4 = &unknown_var_6416_ptr;
    if (param_3 != '\0') {
      puVar4 = &unknown_var_6344_ptr;
    }
    func_0x000180508000(lVar2,&unknown_var_7848_ptr,&unknown_var_7872_ptr,(double)fVar1,
                        (double)*(float *)((int64_t)param_2 + 0x1c),puVar4,param_4);
    if (param_3 == '\0') {
      *(int32_t *)(lVar2 + 0x13b8) = 0;
    }
    else {
      FUN_180508010();
    }
  }
  *(uint64_t *)(lVar2 + 0x20a0) = *param_2;
  uVar3 = param_2[4];
  *(uint64_t *)(lVar2 + 0x20b8) = param_2[3];
  *(uint64_t *)(lVar2 + 0x20c0) = uVar3;
  uVar3 = param_2[6];
  *(uint64_t *)(lVar2 + 0x20c8) = param_2[5];
  *(uint64_t *)(lVar2 + 0x20d0) = uVar3;
  *(uint64_t *)(lVar2 + 0x20a8) = param_2[1];
  *(uint64_t *)(lVar2 + 0x20b0) = param_2[2];
  *(uint64_t *)(lVar2 + 0x20d8) = param_2[7];
  *(int32_t *)(lVar2 + 0x20e0) = *(int32_t *)(param_2 + 8);
  *(uint *)(lVar2 + 0x2098) = param_4 | 1;
  return uVar5;
}





// 函数: void FUN_180601a10(int64_t param_1,int64_t param_2,uint64_t param_3,uint param_4,char param_5)
void FUN_180601a10(int64_t param_1,int64_t param_2,uint64_t param_3,uint param_4,char param_5)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lStackX_8;
  int64_t alStack_28 [4];
  
  lVar2 = *(int64_t *)(param_1 + 0x6e0);
  if ((param_5 == '\0') || (*(int64_t *)(lVar2 + 0x20f0) != param_2)) {
    lStackX_8 = *(int64_t *)(lVar2 + 0x20f0);
    uVar1 = *(uint *)(lVar2 + 0x2108);
    if ((lStackX_8 != 0) && (uVar1 != 0xffffffff)) {
      FUN_1804fd670(*(int64_t *)(param_1 + 0x8d8) + 0x98d2a0,alStack_28,param_3,&lStackX_8,
                    lStackX_8);
      *(uint *)(alStack_28[0] + 8) = *(uint *)(alStack_28[0] + 8) & ~(1 << (uVar1 & 0x1f));
    }
    FUN_1805d67c0(lVar2,param_2,*(uint *)(lVar2 + 0x209c) & 0x800 | param_4 | 1);
  }
  return;
}





// 函数: void FUN_180601a46(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_180601a46(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,int64_t param_6)

{
  uint uVar1;
  int64_t in_RAX;
  int64_t unaff_RBX;
  
  uVar1 = *(uint *)(unaff_RBX + 0x2108);
  if ((in_RAX != 0) && (uVar1 != 0xffffffff)) {
    FUN_1804fd670(*(int64_t *)(param_1 + 0x8d8) + 0x98d2a0,&param_6,param_3,&stack0x00000060);
    *(uint *)(param_6 + 8) = *(uint *)(param_6 + 8) & ~(1 << (uVar1 & 0x1f));
  }
  FUN_1805d67c0();
  return;
}





// 函数: void FUN_180601ab5(void)
void FUN_180601ab5(void)

{
  return;
}





// 函数: void FUN_180601af0(int64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180601af0(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint uVar5;
  int64_t *plStackX_8;
  int64_t alStack_20 [3];
  
  lVar2 = *(int64_t *)(param_1 + 0x6e0);
  iVar1 = *(int *)(lVar2 + 0x2108);
  plVar4 = *(int64_t **)(lVar2 + 0x20f0);
  plStackX_8 = plVar4;
  if ((plVar4 != (int64_t *)0x0) && (iVar1 != -1)) {
    FUN_1804fd670(*(int64_t *)(param_1 + 0x8d8) + 0x98d2a0,alStack_20,param_3,&plStackX_8,plVar4);
    *(uint *)(alStack_20[0] + 8) = *(uint *)(alStack_20[0] + 8) & ~(1 << ((byte)iVar1 & 0x1f));
    plVar4 = *(int64_t **)(lVar2 + 0x20f0);
  }
  uVar5 = *(uint *)(lVar2 + 0x209c) & 0x800;
  uVar3 = func_0x000180508000(lVar2,&unknown_var_3320_ptr,&unknown_var_3288_ptr,plVar4,0,*(uint *)(lVar2 + 0x209c)
                              ,uVar5);
  *(uint *)(lVar2 + 0x209c) = uVar5;
  plStackX_8 = *(int64_t **)(lVar2 + 0x20f0);
  *(uint64_t *)(lVar2 + 0x20f0) = uVar3;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *(uint64_t *)(lVar2 + 0x20f8) = 0x7fc000007fc00000;
  *(uint64_t *)(lVar2 + 0x2100) = 0x7fc000007fc00000;
  *(int32_t *)(lVar2 + 0x2108) = 0xffffffff;
  *(ushort *)(lVar2 + 0x130) = *(ushort *)(lVar2 + 0x130) | 0x200;
  return;
}





// 函数: void FUN_180601c20(int64_t param_1)
void FUN_180601c20(int64_t param_1)

{
  FUN_180604440(*(int64_t *)(param_1 + 0x6e0) + 0x178);
  return;
}





// 函数: void FUN_180601c60(int64_t param_1)
void FUN_180601c60(int64_t param_1)

{
  FUN_180604a00(*(int64_t *)(param_1 + 0x6e0) + 0x178);
  return;
}





// 函数: void FUN_180601cb0(int64_t param_1,uint64_t param_2,int32_t *param_3)
void FUN_180601cb0(int64_t param_1,uint64_t param_2,int32_t *param_3)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_1805e4d10(*(int64_t *)(param_1 + 0x6e0) + 0x178,param_2,&uStack_18);
  return;
}





// 函数: void FUN_180601ce0(int64_t param_1,uint64_t *param_2)
void FUN_180601ce0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t in_stack_ffffffffffffffc8;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  uStack_18 = *param_2;
  uStack_10 = param_2[1];
  lVar1 = *(int64_t *)(param_1 + 0x660) + 0x2a68;
  uVar2 = FUN_180455a30(lVar1,&uStack_18,*(int64_t *)(param_1 + 0x660) + 0x28c8,0xffffffff,
                        in_stack_ffffffffffffffc8 & 0xffffffffffffff00,0x3fc00000);
  FUN_180392600(lVar1,*(uint64_t *)(param_1 + 0x9d8),uVar2,*(int64_t *)(param_1 + 0x20) + 0xc,
                &uStack_18,*(int32_t *)(*(int64_t *)(param_1 + 0x20) + 0x1d0),0x49742400);
  return;
}



uint64_t * FUN_180601db0(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char cVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int32_t uStack_14;
  
  lVar6 = *(int64_t *)(param_2 + 0x9d8);
  lVar7 = *(int64_t *)(param_2 + 0x20);
  lVar8 = lVar6;
  if ((lVar6 == 0) || (cVar5 = FUN_18038d0a0(lVar6), lVar8 = lVar6, cVar5 == '\0')) {
    lVar6 = 0;
  }
  uVar1 = *(uint64_t *)(lVar7 + 0xc);
  uVar2 = *(uint64_t *)(lVar7 + 0x14);
  uVar3 = *(uint64_t *)(lVar7 + 0xb0);
  uVar4 = *(uint64_t *)(lVar7 + 0xb8);
  *param_1 = *(uint64_t *)(*(int64_t *)(param_2 + 0x8d8) + 0x18);
  param_1[1] = lVar6;
  param_1[2] = lVar8;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar1;
  param_1[8] = CONCAT44(uStack_14,3);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180601f77)
// WARNING: Removing unreachable block (ram,0x000180601f92)
// WARNING: Removing unreachable block (ram,0x000180601fd6)
// WARNING: Removing unreachable block (ram,0x000180601f9c)
// WARNING: Removing unreachable block (ram,0x000180601fb0)
// WARNING: Removing unreachable block (ram,0x000180601fbe)
// WARNING: Removing unreachable block (ram,0x000180601fc5)
// WARNING: Removing unreachable block (ram,0x000180601fd8)
// WARNING: Removing unreachable block (ram,0x000180601fd0)
// WARNING: Removing unreachable block (ram,0x000180601fdb)
// WARNING: Removing unreachable block (ram,0x000180601fdd)
// WARNING: Removing unreachable block (ram,0x000180601fe1)
// WARNING: Removing unreachable block (ram,0x000180601fe9)
// WARNING: Removing unreachable block (ram,0x000180601fee)
// WARNING: Removing unreachable block (ram,0x000180601ff4)
// WARNING: Removing unreachable block (ram,0x000180602000)
// WARNING: Removing unreachable block (ram,0x00018060200e)
// WARNING: Removing unreachable block (ram,0x000180602015)
// WARNING: Removing unreachable block (ram,0x00018060201a)
// WARNING: Removing unreachable block (ram,0x00018060201d)
// WARNING: Removing unreachable block (ram,0x000180602022)
// WARNING: Removing unreachable block (ram,0x000180602027)
// WARNING: Removing unreachable block (ram,0x00018060202a)
// WARNING: Removing unreachable block (ram,0x00018060202e)
// WARNING: Removing unreachable block (ram,0x000180602095)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180601e80(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)
void FUN_180601e80(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int iVar2;
  int8_t *puVar3;
  void *puVar4;
  void *puStack_50;
  void *puStack_48;
  int iStack_40;
  
  CoreMemoryPoolValidator(&puStack_50,param_3,param_3,param_4,0xfffffffffffffffe);
  puVar3 = (int8_t *)0x0;
  if (iStack_40 != 0) {
    iVar2 = iStack_40 + 1;
    if (iVar2 < 0x10) {
      iVar2 = 0x10;
    }
    puVar3 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar2,0x13);
    *puVar3 = 0;
    CoreMemoryPoolCleaner(puVar3);
  }
  if (0 < iStack_40) {
    puVar4 = &system_buffer_ptr;
    if (puStack_48 != (void *)0x0) {
      puVar4 = puStack_48;
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar3,puVar4,(int64_t)(iStack_40 + 1));
  }
  if ((puStack_48 != (void *)0x0) && (puVar3 != (int8_t *)0x0)) {
    *puVar3 = 0;
  }
  if (puVar3 == (int8_t *)0x0) {
    lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x590) + 0xabf0);
    if (lVar1 != 0) {
      *(int32_t *)(lVar1 + 0x1108 + (int64_t)param_2 * 4) = 0xffffffff;
      *(char *)((int64_t)param_2 + 0x1114 + lVar1) = (char)param_4;
    }
    puStack_50 = &system_data_buffer_ptr;
    if (puStack_48 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1806020e0(void)

{
  int32_t uVar1;
  uint64_t in_R9;
  void *puStack_30;
  int32_t *puStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  puStack_30 = &system_data_buffer_ptr;
  uStack_18 = 0;
  puStack_28 = (int32_t *)0x0;
  uStack_20 = 0;
  puStack_28 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x17,0x13,in_R9,0xfffffffffffffffe);
  *(int8_t *)puStack_28 = 0;
  uVar1 = CoreMemoryPoolCleaner(puStack_28);
  uStack_18 = CONCAT44(uStack_18._4_4_,uVar1);
  *puStack_28 = 0x72656874;
  puStack_28[1] = 0x73692065;
  puStack_28[2] = 0x746f6e20;
  puStack_28[3] = 0x63616620;
  puStack_28[4] = 0x6e612065;
  *(int16_t *)(puStack_28 + 5) = 0x6d69;
  *(int8_t *)((int64_t)puStack_28 + 0x16) = 0;
  uStack_20 = 0x16;
  uVar1 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&puStack_30);
  puStack_30 = &system_data_buffer_ptr;
  if (puStack_28 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806021d0(int64_t param_1)
void FUN_1806021d0(int64_t param_1)

{
  int64_t lVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  uint64_t uVar2;
  
  lVar1 = *(int64_t *)(param_1 + 0x6d8);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*system_cache_buffer + 0x70);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x8be) != '\0')) && (-1 < *(int *)(lVar1 + 0x8b4))) {
                    // WARNING: Could not recover jumptable at 0x000180602225. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE_00)
              (system_cache_buffer,(int64_t)*(int *)(lVar1 + 0x8b4) * 0x60 + render_system_config);
    return;
  }
  uVar2 = FUN_180628ca0();
                    // WARNING: Could not recover jumptable at 0x00018060223f. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE_00)(system_cache_buffer,uVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806023c0(int64_t param_1,int param_2)
void FUN_1806023c0(int64_t param_1,int param_2)

{
  int64_t lVar1;
  
  if ((param_2 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))(param_2);
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  lVar1 = system_cache_buffer;
  *(int *)(param_1 + 0x18) = param_2;
  if ((param_2 != 0) && (lVar1 != 0)) {
    (**(code **)(lVar1 + 0x30))();
    lVar1 = system_cache_buffer;
  }
  if ((param_2 != 0) && (lVar1 != 0)) {
    (**(code **)(lVar1 + 0x18))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180602490(int64_t param_1,int64_t *param_2,int8_t param_3)
void FUN_180602490(int64_t param_1,int64_t *param_2,int8_t param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  
  uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16,0xfffffffffffffffe);
  plVar3 = (int64_t *)FUN_180275090(uVar2);
  plStackX_10 = plVar3;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plStackX_8 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  FUN_180275cf0(plVar3,0,&plStackX_8,1);
  if (*(int64_t *)(param_1 + 0x658) != 0) {
    lVar1 = *(int64_t *)(param_1 + 0x6d8);
    if ((void *)*plVar3 == &unknown_var_9304_ptr) {
      plVar4 = plVar3 + 0x66;
    }
    else {
      plVar4 = (int64_t *)(**(code **)((void *)*plVar3 + 0x158))(plVar3);
    }
    FUN_1802fbf30(*(uint64_t *)(*(int64_t *)(lVar1 + 0x8a8) + 0x260),param_3,plVar3,plVar4);
    FUN_180544ac0(lVar1);
  }
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  return;
}





// 函数: void FUN_180602590(int64_t param_1,uint64_t param_2,char param_3)
void FUN_180602590(int64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int8_t uVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t lVar8;
  
  if (*(int64_t *)(param_1 + 0x658) != 0) {
    lVar1 = *(int64_t *)(param_1 + 0x6d8);
    lVar8 = (int64_t)param_3 * 0x100;
    lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x8a8) + 0x260);
    plVar7 = *(int64_t **)(*(int64_t *)(lVar2 + 0x18) + 0xb0 + lVar8);
    if (plVar7 < *(int64_t **)(*(int64_t *)(lVar2 + 0x18) + 0xb8 + lVar8)) {
      do {
        iVar6 = (**(code **)(*(int64_t *)*plVar7 + 0x98))();
        if (iVar6 == 0) {
          lVar3 = *plVar7;
          cVar4 = FUN_1802828a0(lVar3,param_2);
          if ((cVar4 != '\0') &&
             ((*(int64_t *)(lVar3 + 0x40) - *(int64_t *)(lVar3 + 0x38) & 0xfffffffffffffff0U) == 0
             )) {
            uVar5 = FUN_1802fc790(lVar2,lVar3);
            FUN_1802fca80(lVar2,lVar3,uVar5);
            break;
          }
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 < *(int64_t **)(*(int64_t *)(lVar2 + 0x18) + 0xb8 + lVar8));
    }
    FUN_180544ac0(lVar1);
  }
  return;
}





// 函数: void FUN_1806025a7(int64_t param_1,uint64_t param_2,char param_3)
void FUN_1806025a7(int64_t param_1,uint64_t param_2,char param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int8_t uVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t lVar8;
  
  lVar1 = *(int64_t *)(param_1 + 0x6d8);
  lVar8 = (int64_t)param_3 * 0x100;
  lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x8a8) + 0x260);
  plVar7 = *(int64_t **)(*(int64_t *)(lVar2 + 0x18) + 0xb0 + lVar8);
  if (plVar7 < *(int64_t **)(*(int64_t *)(lVar2 + 0x18) + 0xb8 + lVar8)) {
    do {
      iVar6 = (**(code **)(*(int64_t *)*plVar7 + 0x98))();
      if (iVar6 == 0) {
        lVar3 = *plVar7;
        cVar4 = FUN_1802828a0(lVar3);
        if ((cVar4 != '\0') &&
           ((*(int64_t *)(lVar3 + 0x40) - *(int64_t *)(lVar3 + 0x38) & 0xfffffffffffffff0U) == 0))
        {
          uVar5 = FUN_1802fc790(lVar2,lVar3);
          FUN_1802fca80(lVar2,lVar3,uVar5);
          break;
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 < *(int64_t **)(*(int64_t *)(lVar2 + 0x18) + 0xb8 + lVar8));
  }
  FUN_180544ac0(lVar1);
  return;
}





// 函数: void FUN_1806025ee(void)
void FUN_1806025ee(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  
  do {
    iVar3 = (**(code **)(*(int64_t *)*unaff_RBX + 0x98))();
    if (iVar3 == 0) {
      lVar1 = *unaff_RBX;
      cVar2 = FUN_1802828a0(lVar1);
      if ((cVar2 != '\0') &&
         ((*(int64_t *)(lVar1 + 0x40) - *(int64_t *)(lVar1 + 0x38) & 0xfffffffffffffff0U) == 0)) {
        FUN_1802fc790();
        FUN_1802fca80();
        goto LAB_180602653;
      }
    }
    unaff_RBX = unaff_RBX + 1;
    if (*(int64_t **)(*(int64_t *)(unaff_RSI + 0x18) + 0xb8 + unaff_RBP) <= unaff_RBX) {
LAB_180602653:
      FUN_180544ac0();
      return;
    }
  } while( true );
}





// 函数: void FUN_180602658(void)
void FUN_180602658(void)

{
  FUN_180544ac0();
  return;
}





// 函数: void FUN_180602674(void)
void FUN_180602674(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180602680(uint64_t *param_1,int64_t param_2,uint64_t param_3,int8_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int32_t uStack_34;
  void *puStack_30;
  int64_t lStack_28;
  
  if (*(int64_t *)(param_2 + 0x658) == 0) {
    *param_1 = 0;
    param_1[1] = CONCAT44(uStack_34,0xffffffff);
  }
  else {
    CoreMemoryPoolValidator(&puStack_30,param_3,param_3,param_4,0xfffffffffffffffe);
    lVar1 = *(int64_t *)(param_2 + 0x6d8);
    uVar2 = *(uint64_t *)(*(int64_t *)(lVar1 + 0x8a8) + 0x260);
    uVar4 = FUN_18020bef0(render_system_data_config,&puStack_30);
    plVar5 = (int64_t *)FUN_1802ffb00(uVar2,uVar4,param_4);
    FUN_180544ac0(lVar1);
    if (plVar5 == (int64_t *)0x0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (**(code **)(*plVar5 + 8))(plVar5);
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    *param_1 = plVar5;
    param_1[1] = CONCAT44(uStack_34,uVar3);
  }
  return param_1;
}





// 函数: void FUN_1806027a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1806027a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  int16_t uStack_48;
  int8_t uStack_46;
  int32_t uStack_44;
  int8_t uStack_40;
  uint64_t uStack_38;
  int64_t lStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  uint64_t uStack_10;
  
  uVar4 = 0xfffffffffffffffe;
  lVar2 = *(int64_t *)(param_1 + 0x6d8) + 0x958;
  iVar1 = _Mtx_lock(lVar2);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  lVar3 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0xffffffff;
  uStack_48 = 1;
  uStack_46 = 0;
  uStack_44 = 0xffffffff;
  uStack_40 = 1;
  uStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 3;
  uStack_10 = 0;
  FUN_1802e7bc0(*(uint64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8),&uStack_58);
  if (-1 < *(int *)(param_1 + 0x564)) {
    lVar3 = *(int64_t *)(param_1 + 0x8d8) + 0x52eda0 + (int64_t)*(int *)(param_1 + 0x564) * 0x200;
  }
  FUN_180526520(param_1,(int64_t)*(int *)(param_1 + 0x10) * 0x200 + 0x52eda0 +
                        *(int64_t *)(param_1 + 0x8d8),lVar3,param_4,uVar4);
  if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  iVar1 = _Mtx_unlock(lVar2);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180602950(int64_t param_1)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  uVar4 = *(uint64_t *)(param_1 + 0x8f8);
  lVar3 = *(int64_t *)(uVar4 + 0x9e8);
  plVar1 = (int64_t *)(uVar4 + 0x9f0);
  if ((((lVar3 == 0) ||
       (uVar4 = *(uint64_t *)(lVar3 + 0xd0),
       (*(byte *)((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + uVar4) & 1) != 0)) &&
      (*(int *)(param_1 + 0x1fc) == 1)) &&
     (uVar4 = (uint64_t)(uint)(int)*(float *)(render_system_config + 0xc),
     (int)*(float *)(render_system_config + 0xc) < 2)) {
    iVar2 = *(int *)(*(uint64_t *)(param_1 + 0x590) + 0x2498);
    uVar4 = *(uint64_t *)(param_1 + 0x590);
    if (((iVar2 != -1) &&
        (uVar4 = (int64_t)iVar2, *(char *)((int64_t)iVar2 * 0x68 + 0x60 + render_system_config) == '\0')
        ) && (uVar4 = *(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x120) * 8) -
                      *(int64_t *)(param_1 + 0x118), (float)(int64_t)uVar4 * 1e-05 < 0.1))
    goto LAB_180602a78;
  }
  if ((*plVar1 == 0) && (*(int *)(param_1 + 0x1fc) == 7)) {
    uVar4 = *(uint64_t *)(param_1 + 0x590);
    iVar2 = *(int *)(uVar4 + 0x2498);
    if (((iVar2 != -1) &&
        (((uVar4 = (int64_t)iVar2 * 0x68, 0 < *(int *)(uVar4 + 0x58 + render_system_config) &&
          (uVar4 = (int64_t)iVar2 * 0x68, *(int *)(uVar4 + 0x58 + render_system_config) < 0xf)) &&
         (uVar4 = *(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x110) * 8) -
                  *(int64_t *)(param_1 + 0x108), (float)(int64_t)uVar4 * 1e-05 < 0.1)))) &&
       (uVar4 = (uint64_t)(uint)(int)*(float *)(render_system_config + 8),
       (int)*(float *)(render_system_config + 8) == 0)) {
LAB_180602a78:
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}





// 函数: void FUN_180602ab0(int64_t param_1,int32_t param_2)
void FUN_180602ab0(int64_t param_1,int32_t param_2)

{
  if (*(char *)(param_1 + 0x5fc) != '\0') {
    *(int32_t *)(param_1 + 0x4ac) = param_2;
    *(int32_t *)(param_1 + 0x4b0) = 0;
                    // WARNING: Subroutine does not return
    AdvancedSystemController(param_2);
  }
  return;
}





// 函数: void FUN_180602ac0(int64_t param_1,int32_t param_2)
void FUN_180602ac0(int64_t param_1,int32_t param_2)

{
  *(int32_t *)(param_1 + 0x4ac) = param_2;
  *(int32_t *)(param_1 + 0x4b0) = 0;
                    // WARNING: Subroutine does not return
  AdvancedSystemController(param_2);
}





