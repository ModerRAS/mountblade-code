#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 03_rendering_part623.c - 13 个函数

// 函数: void FUN_18061346a(uint64_t param_1,int param_2,int param_3,int64_t *param_4)
void FUN_18061346a(uint64_t param_1,int param_2,int param_3,int64_t *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int in_R11D;
  uint unaff_R12D;
  int *unaff_R14;
  int *unaff_R15;
  float fVar5;
  float fVar6;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  
  iVar2 = *(int *)(unaff_RBP + -0x25);
  iVar3 = *(int *)(unaff_RBP + -0x29);
  fVar1 = *(float *)(unaff_RBP + 0x57);
LAB_1806134a0:
  lVar4 = *param_4;
  if ((((-1 < *(int *)(lVar4 + 0x980)) && ((*(uint *)(lVar4 + 0x56c) & 0x800) != 0)) &&
      (*(int *)(lVar4 + 0x568) == 1)) &&
     (fVar5 = fVar1 - *(float *)(*(int64_t *)(lVar4 + 0x20) + 0xc),
     fVar6 = in_XMM5_Da - *(float *)(*(int64_t *)(lVar4 + 0x20) + 0x10),
     fVar5 * fVar5 + fVar6 * fVar6 <= unaff_XMM6_Da)) {
    if (((&processed_var_6480_ptr)[unaff_R12D & 7] &
        *(byte *)((int64_t)
                  ((*(int *)(unaff_RSI + 0x87b770) >> 3) * *(int *)(lVar4 + 0x980) +
                  ((int)unaff_R12D >> 3)) + *(int64_t *)(unaff_RSI + 0x87b768))) == 0) {
      *unaff_R15 = *unaff_R15 + 1;
    }
    else {
      *unaff_R14 = *unaff_R14 + 1;
    }
  }
  param_4 = (int64_t *)param_4[3];
  while (param_4 == (int64_t *)0x0) {
    if (param_2 == iVar3) {
      if (param_3 == iVar2) break;
      param_3 = param_3 + 1;
      *(int *)(unaff_RBP + -0x35) = param_3;
      param_2 = in_R11D;
    }
    else {
      param_2 = param_2 + 1;
    }
    *(int *)(unaff_RBP + -0x39) = param_2;
    param_4 = *(int64_t **)
               ((int64_t)
                ((int)((uint64_t)*(uint64_t *)(unaff_RBP + -0x39) >> 0x20) *
                 *(int *)(unaff_RSI + 0x98d238) + param_2) * 9 + *(int64_t *)(unaff_RSI + 0x98d248)
               );
  }
  do {
    if ((param_4 == (int64_t *)0x0) ||
       (fVar5 = in_XMM3_Da - *(float *)((int64_t)param_4 + 0xc),
       (in_XMM4_Da - *(float *)(param_4 + 1)) * (in_XMM4_Da - *(float *)(param_4 + 1)) +
       fVar5 * fVar5 <= in_XMM2_Da)) break;
    param_4 = (int64_t *)param_4[3];
    while (param_4 == (int64_t *)0x0) {
      if (param_2 == iVar3) {
        if (param_3 == iVar2) break;
        param_3 = param_3 + 1;
        *(int *)(unaff_RBP + -0x35) = param_3;
        param_2 = in_R11D;
      }
      else {
        param_2 = param_2 + 1;
      }
      *(int *)(unaff_RBP + -0x39) = param_2;
      param_4 = *(int64_t **)
                 ((int64_t)
                  ((int)((uint64_t)*(uint64_t *)(unaff_RBP + -0x39) >> 0x20) *
                   *(int *)(unaff_RSI + 0x98d238) + param_2) * 9 +
                 *(int64_t *)(unaff_RSI + 0x98d248));
    }
  } while( true );
  if (param_4 == (int64_t *)0x0) {
    return;
  }
  goto LAB_1806134a0;
}





// 函数: void FUN_180613623(void)
void FUN_180613623(void)

{
  return;
}





// 函数: void FUN_180613643(void)
void FUN_180613643(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180613650(int64_t param_1,int param_2)

{
  int iVar1;
  
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x52ed94))) &&
     (-1 < *(short *)(param_1 + 0x52dda0 + (int64_t)param_2 * 2))) {
    iVar1 = *(int *)((int64_t)param_2 * 0xa60 + 0x30b8 + param_1);
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806136e0(int64_t param_1,int param_2,int64_t param_3,int32_t param_4,float param_5)
void FUN_1806136e0(int64_t param_1,int param_2,int64_t param_3,int32_t param_4,float param_5)

{
  int iVar1;
  int64_t lVar2;
  int8_t auStack_298 [32];
  void *puStack_278;
  int8_t auStack_268 [512];
  uint64_t uStack_68;
  
  if (0 < param_2) {
    uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_298;
    lVar2 = 0;
    do {
      iVar1 = *(int *)(param_3 + lVar2 * 4);
      if ((param_1 == 0) || (iVar1 < 0)) {
        puStack_278 = &processed_var_8960_ptr;
        SystemCore_CacheManager(auStack_268,0x200,&ui_system_data_1912_ptr);
        FUN_18061c7a0(auStack_268);
      }
      else if (0.0 <= param_5) {
        FUN_180508100(*(uint64_t *)((int64_t)iVar1 * 0xa60 + 0x3780 + param_1),param_4,param_5);
      }
      else {
        FUN_180508010();
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < param_2);
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_68 ^ (uint64_t)auStack_298);
  }
  return;
}





// 函数: void FUN_18061370d(int64_t param_1,int param_2,int64_t param_3,int32_t param_4)
void FUN_18061370d(int64_t param_1,int param_2,int64_t param_3,int32_t param_4)

{
  int iVar1;
  uint64_t unaff_RBX;
  int64_t lVar2;
  uint64_t unaff_RBP;
  int64_t in_R11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  uint64_t in_stack_00000230;
  float in_stack_000002c0;
  
  *(uint64_t *)(in_R11 + -0x20) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RBP;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  lVar2 = 0;
  do {
    iVar1 = *(int *)(param_3 + lVar2 * 4);
    if ((param_1 == 0) || (iVar1 < 0)) {
      SystemCore_CacheManager(&stack0x00000030,0x200,&ui_system_data_1912_ptr,(int64_t)iVar1,&processed_var_8960_ptr);
      FUN_18061c7a0(&stack0x00000030);
    }
    else if (0.0 <= in_stack_000002c0) {
      FUN_180508100(*(uint64_t *)((int64_t)iVar1 * 0xa60 + 0x3780 + param_1),param_4,
                    in_stack_000002c0);
    }
    else {
      FUN_180508010();
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 < param_2);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000230 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1806137e9(void)
void FUN_1806137e9(void)

{
  return;
}



uint64_t *
FUN_180613800(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int8_t auStack_58 [80];
  
  puVar5 = (uint64_t *)FUN_1804f5600(param_2,auStack_58,param_3,param_2,param_5);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *param_1 = *puVar5;
  param_1[1] = uVar1;
  uVar1 = puVar5[4];
  uVar4 = puVar5[5];
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar2 = puVar5[6];
  uVar3 = puVar5[7];
  param_1[4] = uVar1;
  param_1[5] = uVar4;
  uVar1 = puVar5[8];
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = uVar1;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180613860(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
void FUN_180613860(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
                  int param_5,int32_t param_6,int32_t param_7,int32_t param_8,
                  int32_t param_9,int32_t param_10,int32_t param_11,int32_t param_12,
                  int32_t param_13,int32_t param_14,int32_t param_15,int32_t param_16)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int8_t auStack_2e8 [32];
  int iStack_2c8;
  int32_t uStack_2c0;
  int32_t uStack_2b8;
  int32_t uStack_2b0;
  int32_t uStack_2a8;
  int32_t uStack_2a0;
  int32_t uStack_298;
  int32_t uStack_290;
  int32_t uStack_288;
  int32_t uStack_280;
  int32_t uStack_278;
  int32_t uStack_270;
  int8_t auStack_268 [80];
  int8_t auStack_218 [512];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2e8;
  if (param_5 < 1) {
    SystemCore_CacheManager(auStack_218,0x200,&ui_system_data_1952_ptr,&processed_var_8848_ptr);
    FUN_18061c7a0(auStack_218);
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *param_1 = *param_4;
    param_1[1] = uVar1;
    uVar1 = param_4[4];
    uVar4 = param_4[5];
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    uVar8 = *(int32_t *)(param_4 + 6);
    uVar9 = *(int32_t *)((int64_t)param_4 + 0x34);
    uVar10 = *(int32_t *)(param_4 + 7);
    uVar11 = *(int32_t *)((int64_t)param_4 + 0x3c);
    param_1[4] = uVar1;
    param_1[5] = uVar4;
    uVar6 = (int32_t)param_4[8];
    uVar7 = (int32_t)((uint64_t)param_4[8] >> 0x20);
  }
  else {
    uStack_270 = param_16;
    uStack_278 = param_15;
    uStack_280 = param_14;
    uStack_288 = param_13;
    uStack_290 = param_12;
    uStack_298 = param_11;
    uStack_2a0 = param_10;
    uStack_2a8 = param_9;
    uStack_2b0 = param_8;
    uStack_2b8 = param_7;
    uStack_2c0 = param_6;
    iStack_2c8 = param_5;
    puVar5 = (uint64_t *)FUN_1804f4f20(param_2,auStack_268);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *param_1 = *puVar5;
    param_1[1] = uVar1;
    uVar1 = puVar5[4];
    uVar4 = puVar5[5];
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    uVar8 = *(int32_t *)(puVar5 + 6);
    uVar9 = *(int32_t *)((int64_t)puVar5 + 0x34);
    uVar10 = *(int32_t *)(puVar5 + 7);
    uVar11 = *(int32_t *)((int64_t)puVar5 + 0x3c);
    param_1[4] = uVar1;
    param_1[5] = uVar4;
    uVar6 = (int32_t)puVar5[8];
    uVar7 = (int32_t)((uint64_t)puVar5[8] >> 0x20);
  }
  *(int32_t *)(param_1 + 6) = uVar8;
  *(int32_t *)((int64_t)param_1 + 0x34) = uVar9;
  *(int32_t *)(param_1 + 7) = uVar10;
  *(int32_t *)((int64_t)param_1 + 0x3c) = uVar11;
  param_1[8] = CONCAT44(uVar7,uVar6);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_2e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806139f0(int64_t param_1,int *param_2,float param_3,uint param_4,int param_5,int param_6,
void FUN_1806139f0(int64_t param_1,int *param_2,float param_3,uint param_4,int param_5,int param_6,
                  int64_t param_7,int *param_8)

{
  uint uVar1;
  int64_t lVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint64_t uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint64_t in_R8;
  uint64_t uVar12;
  int iVar13;
  int64_t lVar14;
  int64_t lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint64_t uVar21;
  
  piVar3 = param_8;
  uVar21 = 0xfffffffffffffffe;
  uVar6 = 0;
  *param_8 = 0;
  iVar4 = (int)param_4 >> 3;
  if (*(float *)(param_1 + 0x98d240) * 10.0 < param_3) {
    uVar1 = *(uint *)(param_1 + 0x52ed94);
    if (param_6 == 0) {
      if (0 < (int)uVar1) {
        piVar5 = (int *)(param_1 + 0x30b0);
        uVar12 = uVar6;
        do {
          if (-1 < *piVar5) goto LAB_180613e19;
          uVar12 = (uint64_t)((int)uVar12 + 1);
          uVar6 = uVar6 + 1;
          piVar5 = piVar5 + 0x298;
        } while ((int64_t)uVar6 < (int64_t)(int)uVar1);
      }
      uVar12 = (uint64_t)uVar1;
LAB_180613e19:
      render_system_control_config = (uint)uVar12;
    }
    else {
      uVar12 = (uint64_t)render_system_control_config;
    }
    if ((int)uVar12 < (int)uVar1) {
      uVar6 = (uint64_t)param_2 >> 0x20;
      fVar20 = SUB84(param_2,0);
      lVar15 = system_cache_buffer;
      do {
        uVar11 = (uint)uVar12;
        lVar14 = (int64_t)(int)uVar11 * 0xa60;
        if (param_5 == 1) {
          iVar13 = *(int *)(lVar14 + 0x3a20 + param_1);
          if ((-1 < iVar13) &&
             (((&processed_var_6480_ptr)[param_4 & 7] &
              *(byte *)((int64_t)((*(int *)(param_1 + 0x87b770) >> 3) * iVar13 + iVar4) +
                       *(int64_t *)(param_1 + 0x87b768))) == 0)) goto LAB_180613f01;
        }
        else if (param_5 == 2) {
          iVar13 = *(int *)(lVar14 + 0x3a20 + param_1);
          if ((-1 < iVar13) &&
             (((&processed_var_6480_ptr)[param_4 & 7] &
              *(byte *)((int64_t)((*(int *)(param_1 + 0x87b770) >> 3) * iVar13 + iVar4) +
                       *(int64_t *)(param_1 + 0x87b768))) != 0)) {
LAB_180613f01:
            if ((((*(uint *)(lVar14 + 0x360c + param_1) & 0x800) != 0) &&
                (*(int *)(lVar14 + 0x3608 + param_1) == 1)) &&
               (lVar2 = *(int64_t *)(lVar14 + 0x30c0 + param_1),
               fVar19 = (float)uVar6 - *(float *)(lVar2 + 0x10),
               fVar16 = fVar20 - *(float *)(lVar2 + 0xc), fVar19 = fVar19 * fVar19,
               fVar16 * fVar16 + fVar19 <= param_3 * param_3)) {
              iVar13 = *(int *)(lVar14 + 0x30b8 + param_1);
              param_8 = (int *)CONCAT44(param_8._4_4_,iVar13);
              if ((iVar13 != 0) && (lVar15 != 0)) {
                (**(code **)(lVar15 + 0x30))(iVar13,fVar19,uVar12,lVar14,param_2,uVar21);
                lVar15 = system_cache_buffer;
              }
              *(int *)(param_7 + (int64_t)*piVar3 * 4) = iVar13;
              if ((iVar13 != 0) && (lVar15 != 0)) {
                (**(code **)(lVar15 + 0x18))(iVar13);
                lVar15 = system_cache_buffer;
              }
              *piVar3 = *piVar3 + 1;
              uVar11 = render_system_control_config;
              if (*piVar3 == 0x28) {
                return;
              }
            }
          }
        }
        else if (param_5 == 3) goto LAB_180613f01;
        render_system_control_config = (uint)*(short *)(param_1 + 0x52dda0 + (int64_t)(int)uVar11 * 2);
        uVar12 = (uint64_t)render_system_control_config;
      } while ((int)render_system_control_config < (int)uVar1);
    }
  }
  else {
    if (param_6 == 0) {
      param_8 = param_2;
      FUN_1804ff330(param_1 + 0x98d230,&param_8,in_R8,&system_data_6860);
    }
    if (render_system_config != (int64_t *)0x0) {
      lVar15 = system_cache_buffer;
      fVar20 = render_system_config;
      fVar16 = render_system_config;
      fVar19 = render_system_config;
      iVar9 = render_system_config;
      iVar8 = render_system_config;
      iVar7 = render_system_config;
      iVar13 = render_system_config;
      iVar10 = render_system_config;
LAB_180613af0:
      lVar14 = *render_system_config;
      if (param_5 == 1) {
        if ((*(int *)(lVar14 + 0x980) < 0) ||
           (((&processed_var_6480_ptr)[param_4 & 7] &
            *(byte *)((int64_t)
                      ((*(int *)(param_1 + 0x87b770) >> 3) * *(int *)(lVar14 + 0x980) + iVar4) +
                     *(int64_t *)(param_1 + 0x87b768))) != 0)) goto LAB_180613c94;
      }
      else if (param_5 == 2) {
        if ((*(int *)(lVar14 + 0x980) < 0) ||
           (((&processed_var_6480_ptr)[param_4 & 7] &
            *(byte *)((int64_t)
                      ((*(int *)(param_1 + 0x87b770) >> 3) * *(int *)(lVar14 + 0x980) + iVar4) +
                     *(int64_t *)(param_1 + 0x87b768))) == 0)) goto LAB_180613c94;
      }
      else if (param_5 != 3) goto LAB_180613c94;
      if ((((*(uint *)(lVar14 + 0x56c) & 0x800) != 0) && (*(int *)(lVar14 + 0x568) == 1)) &&
         (fVar17 = (float)((uint64_t)param_2 >> 0x20) -
                   *(float *)(*(int64_t *)(lVar14 + 0x20) + 0x10),
         fVar18 = SUB84(param_2,0) - *(float *)(*(int64_t *)(lVar14 + 0x20) + 0xc),
         fVar18 * fVar18 + fVar17 * fVar17 <= param_3 * param_3)) {
        iVar13 = *(int *)(lVar14 + 0x18);
        param_8 = (int *)CONCAT44(param_8._4_4_,iVar13);
        if ((iVar13 != 0) && (lVar15 != 0)) {
          (**(code **)(lVar15 + 0x30))(iVar13);
          lVar15 = system_cache_buffer;
        }
        *(int *)(param_7 + (int64_t)*piVar3 * 4) = iVar13;
        if ((iVar13 != 0) && (lVar15 != 0)) {
          (**(code **)(lVar15 + 0x18))(iVar13);
          lVar15 = system_cache_buffer;
        }
        *piVar3 = *piVar3 + 1;
        fVar20 = render_system_config;
        fVar16 = render_system_config;
        fVar19 = render_system_config;
        iVar9 = render_system_config;
        iVar8 = render_system_config;
        iVar7 = render_system_config;
        iVar13 = render_system_config;
        iVar10 = render_system_config;
        if (*piVar3 == 0x28) {
          return;
        }
      }
LAB_180613c94:
      render_system_config = (int64_t *)render_system_config[3];
      while (render_system_config == (int64_t *)0x0) {
        if (iVar10 == iVar8) {
          if (iVar13 == iVar9) break;
          render_system_config = iVar13 + 1;
          render_system_config = iVar7;
          iVar13 = render_system_config;
        }
        else {
          render_system_config = iVar10 + 1;
        }
        iVar10 = render_system_config;
        render_system_config =
             *(int64_t **)
              ((int64_t)(render_system_config + render_system_config * *(int *)(param_1 + 0x98d238)) * 9 +
              *(int64_t *)(param_1 + 0x98d248));
      }
      do {
        if ((render_system_config == (int64_t *)0x0) ||
           (fVar18 = fVar16 - *(float *)((int64_t)render_system_config + 0xc),
           (fVar19 - *(float *)(render_system_config + 1)) * (fVar19 - *(float *)(render_system_config + 1)) +
           fVar18 * fVar18 <= fVar20)) goto LAB_180613dcb;
        render_system_config = (int64_t *)render_system_config[3];
        while (render_system_config == (int64_t *)0x0) {
          if (iVar10 == iVar8) {
            if (iVar13 == iVar9) break;
            render_system_config = iVar13 + 1;
            render_system_config = iVar7;
            iVar13 = render_system_config;
          }
          else {
            render_system_config = iVar10 + 1;
          }
          iVar10 = render_system_config;
          render_system_config =
               *(int64_t **)
                ((int64_t)(render_system_config + render_system_config * *(int *)(param_1 + 0x98d238)) * 9 +
                *(int64_t *)(param_1 + 0x98d248));
        }
      } while( true );
    }
  }
  return;
LAB_180613dcb:
  if (render_system_config == (int64_t *)0x0) {
    return;
  }
  goto LAB_180613af0;
}



uint64_t FUN_180614020(int64_t param_1,int param_2,uint64_t param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int64_t lVar4;
  char cVar5;
  int *piVar6;
  uint64_t uVar7;
  int iVar8;
  uint uVar9;
  uint64_t uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStackX_8;
  float fStackX_c;
  
  uVar3 = *(uint *)(param_1 + 0x52ed94);
  uVar7 = 0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  if (0 < (int)uVar3) {
    piVar6 = (int *)(param_1 + 0x30b0);
    uVar10 = uVar7;
    do {
      if (-1 < *piVar6) goto LAB_180614088;
      uVar10 = (uint64_t)((int)uVar10 + 1);
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 0x298;
    } while ((int64_t)uVar7 < (int64_t)(int)uVar3);
  }
  uVar10 = (uint64_t)uVar3;
LAB_180614088:
  fVar13 = 1.0;
  if ((int)uVar10 < (int)uVar3) {
    fStackX_c = (float)((uint64_t)param_3 >> 0x20);
    fStackX_8 = (float)param_3;
    do {
      iVar8 = (int)uVar10;
      if (((param_2 < 0) || (iVar8 < 0)) ||
         (cVar5 = func_0x000180508270((int64_t)param_2 * 0xa60 + 0x30a0 + param_1,
                                      param_1 + 0x30a0 + (int64_t)iVar8 * 0xa60), cVar5 != '\0')) {
        lVar4 = *(int64_t *)((int64_t)iVar8 * 0xa60 + 0x30c0 + param_1);
        fVar1 = *(float *)(lVar4 + 0x10);
        fVar2 = *(float *)(lVar4 + 0xc);
        fVar11 = fVar1 - fStackX_c;
        fVar12 = fVar2 - fStackX_8;
        fVar11 = fVar13 / (fVar12 * fVar12 + fVar11 * fVar11 + 25.0);
        fVar16 = fVar16 + fVar11;
        fVar14 = fVar14 + fVar2 * fVar11;
        fVar15 = fVar15 + fVar1 * fVar11;
      }
      uVar9 = (uint)*(short *)(param_1 + 0x52dda0 + (int64_t)iVar8 * 2);
      uVar10 = (uint64_t)uVar9;
    } while ((int)uVar9 < (int)uVar3);
  }
  return CONCAT44((fVar13 / fVar16) * fVar15,(fVar13 / fVar16) * fVar14);
}



uint64_t FUN_180614099(void)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  char cVar4;
  int unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int unaff_R14D;
  float fVar5;
  float fVar6;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fStack0000000000000090;
  float fStack0000000000000094;
  
  do {
    if (((int)unaff_RBP < 0) || (unaff_EBX < 0)) {
LAB_180614106:
      lVar3 = *(int64_t *)((int64_t)unaff_EBX * 0xa60 + 0x30c0 + unaff_RDI);
      fVar1 = *(float *)(lVar3 + 0x10);
      fVar2 = *(float *)(lVar3 + 0xc);
      fVar5 = fVar1 - fStack0000000000000094;
      fVar6 = fVar2 - fStack0000000000000090;
      fVar5 = in_XMM4_Da / (fVar6 * fVar6 + fVar5 * fVar5 + 25.0);
      unaff_XMM7_Da = unaff_XMM7_Da + fVar5;
      in_XMM5_Da = in_XMM5_Da + fVar2 * fVar5;
      unaff_XMM6_Da = unaff_XMM6_Da + fVar1 * fVar5;
    }
    else {
      cVar4 = func_0x000180508270(unaff_RBP * 0xa60 + 0x30a0 + unaff_RDI,
                                  unaff_RDI + 0x30a0 + (int64_t)unaff_EBX * 0xa60);
      if (cVar4 != '\0') goto LAB_180614106;
    }
    unaff_EBX = (int)*(short *)(unaff_RDI + 0x52dda0 + (int64_t)unaff_EBX * 2);
    if (unaff_R14D <= unaff_EBX) {
      return CONCAT44((in_XMM4_Da / unaff_XMM7_Da) * unaff_XMM6_Da,
                      (in_XMM4_Da / unaff_XMM7_Da) * in_XMM5_Da);
    }
  } while( true );
}



uint64_t FUN_180614189(void)

{
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
  return CONCAT44((in_XMM4_Da / unaff_XMM7_Da) * unaff_XMM6_Da,
                  (in_XMM4_Da / unaff_XMM7_Da) * in_XMM5_Da);
}





// 函数: void FUN_1806141c0(void)
void FUN_1806141c0(void)

{
  FUN_1804f9d70();
  return;
}



uint64_t *
FUN_180614250(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
             int32_t param_5,int8_t param_6)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  int8_t auStack_58 [80];
  
  uStack_a8 = *param_4;
  uStack_a0 = param_4[1];
  uStack_98 = param_4[2];
  uStack_90 = param_4[3];
  uStack_88 = param_4[4];
  uStack_80 = param_4[5];
  uStack_78 = *(int32_t *)(param_4 + 6);
  uStack_74 = *(int32_t *)((int64_t)param_4 + 0x34);
  uStack_70 = *(int32_t *)(param_4 + 7);
  uStack_6c = *(int32_t *)((int64_t)param_4 + 0x3c);
  uStack_68 = param_4[8];
  puVar5 = (uint64_t *)FUN_1804fb120(param_2,auStack_58,param_3,&uStack_a8,param_5,param_6);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *param_1 = *puVar5;
  param_1[1] = uVar1;
  uVar1 = puVar5[4];
  uVar4 = puVar5[5];
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar2 = puVar5[6];
  uVar3 = puVar5[7];
  param_1[4] = uVar1;
  param_1[5] = uVar4;
  uVar1 = puVar5[8];
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = uVar1;
  return param_1;
}





// 函数: void FUN_1806143e0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1806143e0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  void *puStack_30;
  int64_t lStack_28;
  int iStack_20;
  
  if (param_1 != 0) {
    uVar2 = 0xfffffffffffffffe;
    CoreMemoryPoolValidator(&puStack_30);
    iVar1 = *(int *)(param_1 + 0x87b740) + 1;
    CoreMemoryPoolProcessor(param_1 + 0x87b730,iVar1);
    *(int16_t *)((uint64_t)*(uint *)(param_1 + 0x87b740) + *(int64_t *)(param_1 + 0x87b738)) =
         10;
    *(int *)(param_1 + 0x87b740) = iVar1;
    if (0 < iStack_20) {
      CoreMemoryPoolProcessor(param_1 + 0x87b730,iVar1 + iStack_20);
                    // WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_1 + 0x87b740) + *(int64_t *)(param_1 + 0x87b738),lStack_28,
             (int64_t)(iStack_20 + 1),param_4,uVar2);
    }
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806144b0(uint64_t *param_1,int64_t param_2,uint64_t param_3,int32_t param_4)
void FUN_1806144b0(uint64_t *param_1,int64_t param_2,uint64_t param_3,int32_t param_4)

{
  int8_t auStack_98 [32];
  int iStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  uint64_t uStack_50;
  int64_t *aplStack_48 [4];
  uint64_t uStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  uStack_28 = 0;
  aplStack_48[0] = (int64_t *)0x0;
  if (param_2 != 0) {
    uStack_50 = param_3;
    FUN_1804ff330(param_2 + 0x98d230,&uStack_50,param_4,aplStack_48);
    if (aplStack_48[0] != (int64_t *)0x0) {
      iStack_78 = *(int *)(*aplStack_48[0] + 0x10);
      goto LAB_180614526;
    }
  }
  iStack_78 = -1;
LAB_180614526:
  uStack_74 = SUB84(aplStack_48[1],0);
  uStack_70 = (int32_t)((uint64_t)aplStack_48[1] >> 0x20);
  uStack_6c = SUB84(aplStack_48[2],0);
  uStack_68 = (int32_t)((uint64_t)aplStack_48[2] >> 0x20);
  uStack_5c = (int32_t)uStack_28;
  uStack_64 = SUB84(aplStack_48[3],0);
  uStack_60 = (int32_t)((uint64_t)aplStack_48[3] >> 0x20);
  uStack_58 = uStack_28._4_4_;
  uStack_54 = uStack_20;
  if ((iStack_78 != -1) && (*(int *)(*aplStack_48[0] + 0x568) != 1)) {
    FUN_1804f9790(param_2,&iStack_78);
  }
  *param_1 = CONCAT44(uStack_74,iStack_78);
  param_1[1] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = CONCAT44(uStack_64,uStack_68);
  param_1[3] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_54,uStack_58);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_98);
}





// 函数: void FUN_180614620(int64_t param_1,uint64_t param_2)
void FUN_180614620(int64_t param_1,uint64_t param_2)

{
  uint64_t auStackX_8 [4];
  
  auStackX_8[0] = param_2;
  FUN_1801a5620(*(uint64_t *)(param_1 + 0x18),auStackX_8,*(int8_t *)(param_1 + 0x87b3b0));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180614650(int64_t *param_1,int param_2,int32_t *param_3)
void FUN_180614650(int64_t *param_1,int param_2,int32_t *param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int iVar4;
  uint64_t uVar5;
  int8_t auStack_d8 [32];
  int64_t *plStack_b8;
  int64_t lStack_b0;
  int64_t lStack_a8;
  uint64_t uStack_a0;
  int32_t uStack_98;
  uint64_t uStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  uint64_t uStack_78;
  int32_t uStack_70;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_38;
  
  uStack_90 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  plStack_b8 = &lStack_88;
  lStack_88 = 0;
  lStack_80 = 0;
  iVar4 = 0;
  uStack_78 = 0;
  uStack_70 = 3;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 3;
  lVar3 = (int64_t)param_2;
  FUN_18033a920(&lStack_b0,lVar3);
  lVar1 = lStack_b0;
  if (0 < lVar3) {
    plVar2 = param_1;
    do {
      plStack_b8 = (int64_t *)*plVar2;
      *(int64_t **)((lStack_b0 - (int64_t)param_1) + (int64_t)plVar2) = plStack_b8;
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  lVar3 = lStack_a8 - lStack_b0;
  FUN_180640330(lStack_b0);
  FUN_18063efb0(&lStack_88,&lStack_b0,lVar3 >> 3 & 0xffffffff,0);
  uVar5 = lStack_80 - lStack_88 >> 3;
  *param_3 = (int)uVar5;
  if (uVar5 != 0) {
    lVar3 = lStack_88 - (int64_t)param_1;
    do {
      *param_1 = *(int64_t *)(lVar3 + (int64_t)param_1);
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 1;
    } while ((uint64_t)(int64_t)iVar4 < uVar5);
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar1);
  }
  plStack_b8 = &lStack_88;
  if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



