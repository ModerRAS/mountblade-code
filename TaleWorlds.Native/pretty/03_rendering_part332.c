#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part332.c - 26 个函数

// 函数: void FUN_180441a00(int64_t param_1,int64_t param_2)
void FUN_180441a00(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t ***ppplVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t ***ppplStackX_8;
  int64_t ***ppplStackX_18;
  int64_t **pplStackX_20;
  int64_t lStack_108;
  int64_t lStack_100;
  uint64_t uStack_f8;
  int32_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int8_t uStack_a4;
  int64_t alStack_98 [3];
  int32_t uStack_80;
  uint64_t uStack_78;
  int64_t ****pppplStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  if (param_1 != 0) {
    uStack_78 = 0xfffffffffffffffe;
    lStack_108 = 0;
    lStack_100 = 0;
    uVar3 = 0;
    uStack_f8 = 0;
    uStack_f0 = 3;
    alStack_98[0] = 0;
    alStack_98[1] = 0;
    alStack_98[2] = 0;
    uStack_80 = 3;
    uStack_e8 = *(uint64_t *)(param_2 + 0x30);
    uStack_d8 = *(uint64_t *)(param_2 + 0x40);
    uStack_c8 = *(uint64_t *)(param_2 + 0x50);
    uStack_b8 = *(int32_t *)(param_2 + 0x60);
    uStack_b4 = *(int32_t *)(param_2 + 100);
    uStack_b0 = *(int32_t *)(param_2 + 0x68);
    uStack_e0 = *(uint64_t *)(param_2 + 0x38) & 0xffffffff;
    uStack_d0 = *(uint64_t *)(param_2 + 0x48) & 0xffffffff;
    uStack_c0 = *(uint64_t *)(param_2 + 0x58) & 0xffffffff;
    uStack_ac = 0x3f800000;
    FUN_180084760(&uStack_e8,&uStack_68);
    uStack_a8 = 0xffffffff;
    uStack_a4 = 0;
    uStack_e8 = uStack_68;
    uStack_e0 = uStack_60;
    uStack_d8 = uStack_58;
    uStack_d0 = uStack_50;
    uStack_b8 = uStack_38;
    uStack_b4 = uStack_34;
    uStack_b0 = uStack_30;
    uStack_ac = uStack_2c;
    FUN_1802e94a0(param_2,&lStack_108,alStack_98,&uStack_e8);
    uVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
    ppplVar2 = (int64_t ***)FUN_180275090(uVar1);
    pplStackX_20 = (int64_t **)ppplVar2;
    if (ppplVar2 != (int64_t ***)0x0) {
      (*(code *)(*ppplVar2)[5])(ppplVar2);
    }
    uVar5 = uVar3;
    uVar6 = uVar3;
    if (lStack_100 - lStack_108 >> 3 != 0) {
      do {
        FUN_1800763c0(*(uint64_t *)(uVar6 + lStack_108),&ppplStackX_8);
        FUN_180075630(ppplStackX_8,uVar3 * 0x40 + alStack_98[0]);
        pppplStack_70 = &ppplStackX_18;
        ppplStackX_18 = ppplStackX_8;
        if (ppplStackX_8 != (int64_t ***)0x0) {
          (*(code *)(*ppplStackX_8)[5])();
        }
        FUN_180275cf0(ppplVar2,0,&ppplStackX_18,0);
        if (ppplStackX_8 != (int64_t ***)0x0) {
          (*(code *)(*ppplStackX_8)[7])();
        }
        uVar4 = (int)uVar5 + 1;
        uVar3 = (uint64_t)(int)uVar4;
        uVar5 = (uint64_t)uVar4;
        uVar6 = uVar6 + 8;
      } while (uVar3 < (uint64_t)(lStack_100 - lStack_108 >> 3));
    }
    FUN_180276f30(ppplVar2,(int64_t)ppplVar2 + 0x214,1);
    ppplStackX_8 = ppplVar2;
    if (ppplVar2 != (int64_t ***)0x0) {
      (*(code *)(*ppplVar2)[5])(ppplVar2);
    }
    ppplStackX_18 = (int64_t ***)&ppplStackX_8;
    FUN_1802edcd0(param_1,ppplStackX_8,1);
    if (ppplStackX_8 != (int64_t ***)0x0) {
      (*(code *)(*ppplStackX_8)[7])();
    }
    if (ppplVar2 != (int64_t ***)0x0) {
      (*(code *)(*ppplVar2)[7])(ppplVar2);
    }
    if (alStack_98[0] != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (lStack_108 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  return;
}



uint64_t FUN_180441c50(int64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  void *puVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_1802e8fb0();
    if (lVar1 == 0) {
      FUN_1802edcd0(param_1,param_2,1);
      return 1;
    }
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x290) != (void *)0x0) {
      puVar2 = *(void **)(param_1 + 0x290);
    }
    FUN_180626f80(&unknown_var_9664_ptr,puVar2);
  }
  return 0;
}



uint64_t * FUN_180441cc0(uint64_t *param_1,int64_t param_2)

{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t uStack_c;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = CONCAT44(uStack_c,0xffffffff);
    return param_1;
  }
  plVar2 = (int64_t *)FUN_1802e8fb0(param_2);
  if (plVar2 == (int64_t *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *param_1 = plVar2;
  param_1[1] = CONCAT44(uStack_c,uVar1);
  return param_1;
}





// 函数: void FUN_180441cd1(void)
void FUN_180441cd1(void)

{
  int32_t uVar1;
  int64_t *plVar2;
  uint64_t *unaff_RDI;
  uint64_t in_stack_00000028;
  
  plVar2 = (int64_t *)FUN_1802e8fb0();
  if (plVar2 == (int64_t *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *unaff_RDI = plVar2;
  unaff_RDI[1] = CONCAT44(in_stack_00000028._4_4_,uVar1);
  return;
}





// 函数: void FUN_180441d20(uint64_t *param_1)
void FUN_180441d20(uint64_t *param_1)

{
  uint64_t in_stack_00000028;
  
  *param_1 = 0;
  param_1[1] = CONCAT44(in_stack_00000028._4_4_,0xffffffff);
  return;
}



uint64_t * FUN_180441dd0(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  FUN_1802e7dc0(param_2);
  uVar1 = *(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x100);
  *param_1 = *(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0xf8);
  param_1[1] = uVar1;
  return param_1;
}



uint64_t * FUN_180441e10(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  FUN_1802e7dc0(param_2);
  uVar1 = *(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x110);
  *param_1 = *(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x108);
  param_1[1] = uVar1;
  return param_1;
}



uint64_t FUN_180441e50(int64_t param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x2e8) & 0x10) != 0) {
      return 1;
    }
    if ((*(int64_t **)(param_1 + 0x270) != (int64_t *)0x0) &&
       (cVar1 = (**(code **)(**(int64_t **)(param_1 + 0x270) + 0x70))(), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}





// 函数: void FUN_180441e90(int64_t param_1,uint param_2)
void FUN_180441e90(int64_t param_1,uint param_2)

{
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (param_1 != 0) {
    fStack_c = (float)(param_2 >> 0x18) * 0.003921569;
    fStack_18 = (float)(param_2 >> 0x10 & 0xff) * 0.003921569;
    fStack_14 = (float)(param_2 >> 8 & 0xff) * 0.003921569;
    fStack_10 = (float)(param_2 & 0xff) * 0.003921569;
    FUN_1802ec490(fStack_10,&fStack_18);
  }
  return;
}



uint64_t * FUN_180441f60(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if (param_2 != 0) {
    FUN_1802e7dc0(param_2);
    FUN_1801c0d90(param_2);
    FUN_1801c0d90(param_2);
    uVar1 = *(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x18);
    *param_1 = *(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10);
    param_1[1] = uVar1;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



uint64_t * FUN_180441fc0(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if (param_2 != 0) {
    FUN_1802e7dc0(param_2);
    FUN_1801c0d90(param_2);
    FUN_1801c0d90(param_2);
    uVar1 = (*(uint64_t **)(param_2 + 0x28))[1];
    *param_1 = **(uint64_t **)(param_2 + 0x28);
    param_1[1] = uVar1;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



float * FUN_180442020(float *param_1,int64_t param_2)

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
  float fVar15;
  float *pfVar16;
  int8_t auStack_48 [64];
  
  if (param_2 != 0) {
    pfVar16 = (float *)FUN_1802f4040(param_2,auStack_48,1);
    fVar4 = *(float *)(param_2 + 0x84);
    fVar5 = *(float *)(param_2 + 0x88);
    fVar6 = *(float *)(param_2 + 0x8c);
    fVar7 = *(float *)(param_2 + 0x74);
    fVar8 = *(float *)(param_2 + 0x78);
    fVar9 = *(float *)(param_2 + 0x7c);
    fVar1 = pfVar16[1];
    fVar2 = *pfVar16;
    fVar3 = pfVar16[2];
    fVar10 = *(float *)(param_2 + 0x94);
    fVar11 = *(float *)(param_2 + 0x98);
    fVar12 = *(float *)(param_2 + 0x9c);
    fVar13 = *(float *)(param_2 + 0xa4);
    fVar14 = *(float *)(param_2 + 0xa8);
    fVar15 = *(float *)(param_2 + 0xac);
    *param_1 = *(float *)(param_2 + 0x80) * fVar1 + *(float *)(param_2 + 0x70) * fVar2 +
               *(float *)(param_2 + 0x90) * fVar3 + *(float *)(param_2 + 0xa0);
    param_1[1] = fVar4 * fVar1 + fVar7 * fVar2 + fVar10 * fVar3 + fVar13;
    param_1[2] = fVar5 * fVar1 + fVar8 * fVar2 + fVar11 * fVar3 + fVar14;
    param_1[3] = fVar6 * fVar1 + fVar9 * fVar2 + fVar12 * fVar3 + fVar15;
    return param_1;
  }
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  return param_1;
}



float * FUN_1804420c0(float *param_1,int64_t param_2)

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
  float fVar15;
  int64_t lVar16;
  int8_t auStack_48 [64];
  
  if (param_2 != 0) {
    lVar16 = FUN_1802f4040(param_2,auStack_48,1);
    fVar4 = *(float *)(param_2 + 0x84);
    fVar5 = *(float *)(param_2 + 0x88);
    fVar6 = *(float *)(param_2 + 0x8c);
    fVar7 = *(float *)(param_2 + 0x74);
    fVar8 = *(float *)(param_2 + 0x78);
    fVar9 = *(float *)(param_2 + 0x7c);
    fVar1 = *(float *)(lVar16 + 0x14);
    fVar2 = *(float *)(lVar16 + 0x10);
    fVar3 = *(float *)(lVar16 + 0x18);
    fVar10 = *(float *)(param_2 + 0x94);
    fVar11 = *(float *)(param_2 + 0x98);
    fVar12 = *(float *)(param_2 + 0x9c);
    fVar13 = *(float *)(param_2 + 0xa4);
    fVar14 = *(float *)(param_2 + 0xa8);
    fVar15 = *(float *)(param_2 + 0xac);
    *param_1 = *(float *)(param_2 + 0x80) * fVar1 + *(float *)(param_2 + 0x70) * fVar2 +
               *(float *)(param_2 + 0x90) * fVar3 + *(float *)(param_2 + 0xa0);
    param_1[1] = fVar4 * fVar1 + fVar7 * fVar2 + fVar10 * fVar3 + fVar13;
    param_1[2] = fVar5 * fVar1 + fVar8 * fVar2 + fVar11 * fVar3 + fVar14;
    param_1[3] = fVar6 * fVar1 + fVar9 * fVar2 + fVar12 * fVar3 + fVar15;
    return param_1;
  }
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180442180(int64_t param_1,int64_t param_2,int32_t param_3)
void FUN_180442180(int64_t param_1,int64_t param_2,int32_t param_3)

{
  uint64_t uVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  
  if (param_1 != 0) {
    uVar3 = 0xfffffffffffffffe;
    uVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x140,0x10,6,0xfffffffffffffffe);
    plVar2 = (int64_t *)FUN_18014a1b0(uVar1);
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    uVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x130,8,6,uVar3,param_3,*(int32_t *)(param_2 + 4),
                          *(int32_t *)(param_2 + 0xc),*(uint64_t *)(render_system_data_config + 0x28));
                    // WARNING: Subroutine does not return
    memset(uVar1,0,0x130);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804422a0(int64_t param_1,char param_2,int32_t *param_3)
void FUN_1804422a0(int64_t param_1,char param_2,int32_t *param_3)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint *puVar4;
  int8_t auStack_b8 [32];
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint64_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  
  if (param_1 != 0) {
    uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
    puVar4 = (uint *)((int64_t)param_2 * 0x100 +
                     *(int64_t *)(*(int64_t *)(param_1 + 0x260) + 0x18));
    do {
      LOCK();
      uVar1 = *puVar4;
      *puVar4 = *puVar4 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStack_98 = puVar4[1];
    uStack_94 = puVar4[2];
    uStack_90 = puVar4[3];
    uStack_8c = puVar4[4];
    uVar2 = *(uint64_t *)(puVar4 + 5);
    uVar3 = *(uint64_t *)(puVar4 + 7);
    *puVar4 = 0;
    uStack_88 = uVar2;
    uStack_80 = uVar3;
    uStack_48 = uStack_98;
    uStack_44 = uStack_94;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    uStack_38 = uVar2;
    uStack_30 = uVar3;
    FUN_18063b5f0(&uStack_78,&uStack_98);
    *param_3 = uStack_78;
    param_3[1] = uStack_74;
    param_3[2] = uStack_70;
    param_3[3] = uStack_6c;
    param_3[4] = uStack_68;
    param_3[5] = uStack_64;
    param_3[6] = uStack_60;
    param_3[7] = uStack_5c;
    param_3[8] = uStack_58;
    param_3[9] = uStack_54;
    param_3[10] = uStack_50;
    param_3[0xb] = uStack_4c;
    *(uint64_t *)(param_3 + 0xc) = uVar2;
    *(uint64_t *)(param_3 + 0xe) = uVar3;
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_b8);
  }
  return;
}





// 函数: void FUN_1804422d1(int64_t param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4)
void FUN_1804422d1(int64_t param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t in_RAX;
  uint *puVar4;
  uint uStack0000000000000028;
  uint uStack000000000000002c;
  uint64_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  uint uStack0000000000000070;
  uint uStack0000000000000074;
  uint uStack0000000000000078;
  uint uStack000000000000007c;
  uint64_t uStack0000000000000080;
  uint64_t uStack0000000000000088;
  uint64_t in_stack_00000090;
  
  puVar4 = (uint *)(in_RAX + *(int64_t *)(param_1 + 0x18));
  do {
    LOCK();
    uVar1 = *puVar4;
    *puVar4 = *puVar4 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uStack0000000000000070 = puVar4[1];
  uStack0000000000000074 = puVar4[2];
  uStack0000000000000028 = puVar4[3];
  uStack000000000000002c = puVar4[4];
  uVar2 = *(uint64_t *)(puVar4 + 5);
  uVar3 = *(uint64_t *)(puVar4 + 7);
  *puVar4 = 0;
  uStack0000000000000030 = uVar2;
  uStack0000000000000038 = uVar3;
  uStack0000000000000078 = uStack0000000000000028;
  uStack000000000000007c = uStack000000000000002c;
  uStack0000000000000080 = uVar2;
  uStack0000000000000088 = uVar3;
  FUN_18063b5f0(&stack0x00000040,&stack0x00000020,param_3,param_4,uStack0000000000000070);
  *param_3 = uStack0000000000000040;
  param_3[1] = uStack0000000000000044;
  param_3[2] = uStack0000000000000048;
  param_3[3] = uStack000000000000004c;
  param_3[4] = uStack0000000000000050;
  param_3[5] = uStack0000000000000054;
  param_3[6] = uStack0000000000000058;
  param_3[7] = uStack000000000000005c;
  param_3[8] = uStack0000000000000060;
  param_3[9] = uStack0000000000000064;
  param_3[10] = uStack0000000000000068;
  param_3[0xb] = uStack000000000000006c;
  *(uint64_t *)(param_3 + 0xc) = uVar2;
  *(uint64_t *)(param_3 + 0xe) = uVar3;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180442360(void)
void FUN_180442360(void)

{
  return;
}





// 函数: void FUN_180442370(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_180442370(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  if (param_1 != 0) {
    lVar3 = *(int64_t *)(param_1 + 0xf0);
    iVar1 = 0;
    if (*(int64_t *)(param_1 + 0xf8) - lVar3 >> 3 != 0) {
      lVar2 = 0;
      do {
        if (*(int64_t *)(lVar2 + lVar3) == param_2) {
          FUN_1802ee610(param_1,param_2);
        }
        lVar3 = *(int64_t *)(param_1 + 0xf0);
        iVar1 = iVar1 + 1;
        lVar2 = lVar2 + 8;
      } while ((uint64_t)(int64_t)iVar1 < (uint64_t)(*(int64_t *)(param_1 + 0xf8) - lVar3 >> 3))
      ;
    }
    if (param_3 != 0) {
      FUN_1802edcd0(param_1,param_3,1);
    }
  }
  return;
}





// 函数: void FUN_1804423a0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_1804423a0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t in_RAX;
  int iVar1;
  int64_t unaff_RSI;
  int64_t lVar2;
  int64_t unaff_R14;
  
  iVar1 = 0;
  if (in_RAX >> 3 != 0) {
    lVar2 = 0;
    do {
      if (*(int64_t *)(lVar2 + param_4) == unaff_RSI) {
        FUN_1802ee610(param_1);
      }
      param_4 = *(int64_t *)(param_1 + 0xf0);
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while ((uint64_t)(int64_t)iVar1 < (uint64_t)(*(int64_t *)(param_1 + 0xf8) - param_4 >> 3))
    ;
  }
  if (unaff_R14 != 0) {
    FUN_1802edcd0(param_1);
  }
  return;
}





// 函数: void FUN_1804423b3(void)
void FUN_1804423b3(void)

{
  int64_t unaff_RBX;
  uint unaff_EBP;
  int64_t unaff_RSI;
  uint64_t uVar1;
  int64_t in_R9;
  int64_t unaff_R14;
  
  uVar1 = (uint64_t)unaff_EBP;
  do {
    if (*(int64_t *)(uVar1 + in_R9) == unaff_RSI) {
      FUN_1802ee610();
    }
    in_R9 = *(int64_t *)(unaff_RBX + 0xf0);
    unaff_EBP = unaff_EBP + 1;
    uVar1 = uVar1 + 8;
  } while ((uint64_t)(int64_t)(int)unaff_EBP <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0xf8) - in_R9 >> 3));
  if (unaff_R14 != 0) {
    FUN_1802edcd0();
  }
  return;
}





// 函数: void FUN_1804423f9(void)
void FUN_1804423f9(void)

{
  int64_t unaff_R14;
  
  if (unaff_R14 != 0) {
    FUN_1802edcd0();
  }
  return;
}





// 函数: void FUN_180442403(void)
void FUN_180442403(void)

{
  FUN_1802edcd0();
  return;
}



int64_t * FUN_180442450(int64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uStack_c;
  
  if ((param_2 != 0) && (plVar1 = *(int64_t **)(param_2 + 0x260), plVar1 != (int64_t *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    *param_1 = (int64_t)plVar1;
    param_1[1] = CONCAT44(uStack_c,uVar2);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = CONCAT44(uStack_c,0xffffffff);
  return param_1;
}



int8_t FUN_1804424d0(int64_t param_1,int32_t *param_2)

{
  int64_t lVar1;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (param_1 != 0) {
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    FUN_1801c13c0(param_1 + 0x70,&fStack_28,&uStack_18);
    lVar1 = *(int64_t *)(param_1 + 0x28);
    if ((((*(float *)(lVar1 + 0xf8) <= fStack_28) &&
         (fStack_28 < *(float *)(lVar1 + 0x108) || fStack_28 == *(float *)(lVar1 + 0x108))) &&
        (*(float *)(lVar1 + 0xfc) <= fStack_24)) &&
       (((fStack_24 < *(float *)(lVar1 + 0x10c) || fStack_24 == *(float *)(lVar1 + 0x10c) &&
         (*(float *)(lVar1 + 0x100) <= fStack_20)) &&
        (fStack_20 < *(float *)(lVar1 + 0x110) || fStack_20 == *(float *)(lVar1 + 0x110))))) {
      return 1;
    }
  }
  return 0;
}





// 函数: void FUN_180442560(int64_t param_1,char param_2)
void FUN_180442560(int64_t param_1,char param_2)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    uVar4 = 0;
    iVar1 = (int)(*(int64_t *)(param_1 + 0x1e8) - *(int64_t *)(param_1 + 0x1e0) >> 3);
    uVar3 = uVar4;
    if (0 < iVar1) {
      do {
        iVar2 = (**(code **)(**(int64_t **)(*(int64_t *)(param_1 + 0x1e0) + uVar3 * 8) + 0x98))();
        if (iVar2 == 4) {
          *(int8_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x1e0) + uVar3 * 8) + 0x159) = 0;
        }
        uVar3 = uVar3 + 1;
      } while ((int64_t)uVar3 < (int64_t)iVar1);
    }
    if ((param_2 != '\0') &&
       (uVar3 = uVar4, *(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0)) {
      do {
        FUN_1802ef740(*(uint64_t *)(uVar4 + *(int64_t *)(param_1 + 0x1c0)),param_2);
        uVar4 = uVar4 + 8;
        uVar5 = (int)uVar3 + 1;
        uVar3 = (uint64_t)uVar5;
      } while ((uint64_t)(int64_t)(int)uVar5 <
               (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
    }
  }
  return;
}





// 函数: void FUN_180442589(void)
void FUN_180442589(void)

{
  int iVar1;
  int iVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t unaff_RDI;
  char unaff_R14B;
  
  uVar4 = 0;
  iVar1 = (int)(in_RAX >> 3);
  uVar3 = uVar4;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(**(int64_t **)(*(int64_t *)(unaff_RDI + 0x1e0) + uVar3 * 8) + 0x98))();
      if (iVar2 == 4) {
        *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x1e0) + uVar3 * 8) + 0x159) = 0;
      }
      uVar3 = uVar3 + 1;
    } while ((int64_t)uVar3 < (int64_t)iVar1);
  }
  if ((unaff_R14B != '\0') &&
     (uVar3 = uVar4, *(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3 != 0))
  {
    do {
      FUN_1802ef740(*(uint64_t *)(uVar4 + *(int64_t *)(unaff_RDI + 0x1c0)),unaff_R14B);
      uVar4 = uVar4 + 8;
      uVar5 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 <
             (uint64_t)(*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3));
  }
  return;
}





// 函数: void FUN_18044258e(void)
void FUN_18044258e(void)

{
  int iVar1;
  int iVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t unaff_RDI;
  char unaff_R14B;
  
  uVar4 = 0;
  iVar1 = (int)(in_RAX >> 3);
  uVar3 = uVar4;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(**(int64_t **)(*(int64_t *)(unaff_RDI + 0x1e0) + uVar3 * 8) + 0x98))();
      if (iVar2 == 4) {
        *(int8_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x1e0) + uVar3 * 8) + 0x159) = 0;
      }
      uVar3 = uVar3 + 1;
    } while ((int64_t)uVar3 < (int64_t)iVar1);
  }
  if ((unaff_R14B != '\0') &&
     (uVar3 = uVar4, *(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3 != 0))
  {
    do {
      FUN_1802ef740(*(uint64_t *)(uVar4 + *(int64_t *)(unaff_RDI + 0x1c0)),unaff_R14B);
      uVar4 = uVar4 + 8;
      uVar5 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 <
             (uint64_t)(*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3));
  }
  return;
}





// 函数: void FUN_1804425ed(void)
void FUN_1804425ed(void)

{
  uint uVar1;
  uint64_t unaff_RSI;
  uint64_t uVar2;
  int64_t unaff_RDI;
  int8_t unaff_R14B;
  
  uVar2 = unaff_RSI;
  if (*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802ef740(*(uint64_t *)(unaff_RSI + *(int64_t *)(unaff_RDI + 0x1c0)),unaff_R14B);
      unaff_RSI = unaff_RSI + 8;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
    } while ((uint64_t)(int64_t)(int)uVar1 <
             (uint64_t)(*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3));
  }
  return;
}





// 函数: void FUN_180442659(void)
void FUN_180442659(void)

{
  return;
}





// 函数: void FUN_180442670(int64_t param_1,int32_t param_2)
void FUN_180442670(int64_t param_1,int32_t param_2)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  
  if ((param_1 != 0) &&
     (iVar1 = (int)(*(int64_t *)(param_1 + 0x1e8) - *(int64_t *)(param_1 + 0x1e0) >> 3), 0 < iVar1
     )) {
    lVar3 = 0;
    do {
      iVar2 = (**(code **)(**(int64_t **)(*(int64_t *)(param_1 + 0x1e0) + lVar3 * 8) + 0x98))();
      if (iVar2 == 4) {
        *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x1e0) + lVar3 * 8) + 0x160) = param_2
        ;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  return;
}





// 函数: void FUN_18044269b(void)
void FUN_18044269b(void)

{
  int in_EAX;
  int iVar1;
  int64_t lVar2;
  int64_t unaff_RDI;
  int32_t unaff_XMM6_Da;
  
  if (0 < in_EAX) {
    lVar2 = 0;
    do {
      iVar1 = (**(code **)(**(int64_t **)(*(int64_t *)(unaff_RDI + 0x1e0) + lVar2 * 8) + 0x98))();
      if (iVar1 == 4) {
        *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x1e0) + lVar2 * 8) + 0x160) =
             unaff_XMM6_Da;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < in_EAX);
  }
  return;
}





// 函数: void FUN_1804426a7(void)
void FUN_1804426a7(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int32_t unaff_XMM6_Da;
  
  lVar2 = 0;
  do {
    iVar1 = (**(code **)(**(int64_t **)(*(int64_t *)(unaff_RDI + 0x1e0) + lVar2 * 8) + 0x98))();
    if (iVar1 == 4) {
      *(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x1e0) + lVar2 * 8) + 0x160) =
           unaff_XMM6_Da;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 < unaff_RSI);
  return;
}





// 函数: void FUN_1804426e9(void)
void FUN_1804426e9(void)

{
  return;
}





// 函数: void FUN_1804426f8(void)
void FUN_1804426f8(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180442720(int64_t param_1,int32_t param_2,int8_t param_3,int8_t param_4,
void FUN_180442720(int64_t param_1,int32_t param_2,int8_t param_3,int8_t param_4,
                  int8_t param_5)

{
  uint64_t *puVar1;
  
  if (param_1 != 0) {
    puVar1 = *(uint64_t **)(param_1 + 0x2d0);
    if (puVar1 == (uint64_t *)0x0) {
      puVar1 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x88,8,3);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(int32_t *)(puVar1 + 3) = 3;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(int32_t *)(puVar1 + 7) = 3;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      *(int32_t *)(puVar1 + 0xb) = 3;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      *(int32_t *)(puVar1 + 0x10) = 3;
      puVar1[0xc] = param_1;
      *(uint64_t **)(param_1 + 0x2d0) = puVar1;
    }
    FUN_1803d9b20(puVar1,param_2,param_3,param_4,param_5);
    *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) | 0x10;
  }
  return;
}





// 函数: void FUN_180442860(void)
void FUN_180442860(void)

{
  char *pcVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lStack_30;
  int64_t lStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  lStack_30 = 0;
  lStack_28 = 0;
  uVar5 = 0;
  uStack_20 = 0;
  uStack_18 = 3;
  FUN_1802e9180(0,&lStack_30,1,0xffffffff,0xfffffffffffffffe);
  uVar6 = uVar5;
  if (lStack_28 - lStack_30 >> 3 != 0) {
    do {
      lVar2 = *(int64_t *)(uVar6 + lStack_30);
      iVar3 = _Mtx_lock(0x180c91910);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      pcVar1 = (char *)(lVar2 + 0xfc);
      *pcVar1 = *pcVar1 + '\x01';
      iVar3 = _Mtx_unlock(0x180c91910);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      uVar6 = uVar6 + 8;
    } while ((uint64_t)(int64_t)(int)uVar4 < (uint64_t)(lStack_28 - lStack_30 >> 3));
  }
  lStack_28 = lStack_30;
  if (lStack_30 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}





// 函数: void FUN_180442950(void)
void FUN_180442950(void)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lStack_30;
  int64_t lStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  lStack_30 = 0;
  lStack_28 = 0;
  uVar2 = 0;
  uStack_20 = 0;
  uStack_18 = 3;
  FUN_1802e9180(0,&lStack_30,1,0xffffffff,0xfffffffffffffffe);
  uVar3 = uVar2;
  if (lStack_28 - lStack_30 >> 3 != 0) {
    do {
      FUN_180076a80(*(uint64_t *)(uVar3 + lStack_30));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
      uVar3 = uVar3 + 8;
    } while ((uint64_t)(int64_t)(int)uVar1 < (uint64_t)(lStack_28 - lStack_30 >> 3));
  }
  if (lStack_30 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}





