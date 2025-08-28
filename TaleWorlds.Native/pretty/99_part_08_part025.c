#define SystemInitializer System_Initializer2  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part025.c - 11 个函数

// 函数: void FUN_1804f8630(uint64_t param_1,int32_t param_2,int64_t param_3,int32_t param_4,
void FUN_1804f8630(uint64_t param_1,int32_t param_2,int64_t param_3,int32_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7)

{
  bool bVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int32_t uVar5;
  int8_t auStack_d8 [40];
  int8_t uStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_78;
  void *puStack_70;
  int8_t *puStack_68;
  int32_t uStack_60;
  int8_t auStack_58 [16];
  uint64_t uStack_48;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
              0x48) < system_system_config_config) {
    SystemInitializer();
    if (system_system_config_config == -1) {
      puStack_70 = &system_config_ptr;
      puStack_68 = auStack_58;
      auStack_58[0] = 0;
      uStack_60 = 0xc;
      strcpy_s(auStack_58,0x10,&processed_var_5088_ptr);
      lVar2 = system_system_data_config;
      iVar3 = FUN_180191c00(system_system_data_config,&puStack_70);
      if ((iVar3 == -1) ||
         (lVar4 = (int64_t)iVar3 * 0x68 + *(int64_t *)(lVar2 + 0x38), lVar4 == 0)) {
        lVar4 = *(int64_t *)(lVar2 + 0x28);
      }
      system_system_config_config = *(int32_t *)(lVar4 + 100);
      puStack_70 = &system_state_ptr;
      FUN_1808fcb30(&system_ptr_9e58);
    }
  }
  if (((param_3 == 0) || (*(int *)(param_3 + 0x30) < 1)) ||
     (((*(uint *)((int64_t)*(int *)(param_3 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(param_3 + 0xd0))
        >> 9 & 1) != 0 && (*(short *)(param_3 + 8) < 1)))) {
    bVar1 = false;
    uVar5 = system_system_config_config;
  }
  else {
    bVar1 = true;
    uVar5 = *(int32_t *)(param_3 + 0x34);
  }
  uStack_98 = param_7;
  uStack_a0 = 0xffffffff;
  uStack_a8 = param_2;
  FUN_1804f81c0(param_1,uVar5,param_4,param_5);
  if ((bVar1) &&
     (*(int *)((int64_t)*(int *)(param_3 + 0xf0) * 0xa0 + 0x5c + *(int64_t *)(param_3 + 0xd0)) -
      0x11U < 2)) {
    uStack_b0 = 1;
    uVar5 = 0x41700000;
  }
  else {
    uStack_b0 = 0;
    if ((bVar1) &&
       ((*(uint *)((int64_t)*(int *)(param_3 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(param_3 + 0xd0))
         >> 8 & 1) != 0)) {
      uVar5 = 0x40a00000;
    }
    else {
      uVar5 = 0x41200000;
    }
  }
  FUN_1804f5d10(param_1,param_2,param_5,uVar5);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_d8);
}



uint FUN_1804f8880(int64_t param_1,uint64_t param_2,float *param_3,uint param_4)

{
  int64_t *plVar1;
  uint uVar2;
  uint uVar3;
  int64_t lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  uint uVar11;
  int iVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int32_t uVar15;
  int8_t auVar16 [16];
  int8_t auVar17 [16];
  float fVar18;
  float fVar19;
  int64_t alStack_78 [3];
  int8_t auStack_60 [88];
  
  fVar19 = *param_3 - *(float *)(param_2 + 0xa0);
  fVar18 = param_3[1] - *(float *)(param_2 + 0xa4);
  fVar18 = fVar18 * fVar18 + fVar19 * fVar19;
  auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
  uVar14 = atan2f(param_1,param_2,3.0 - fVar18 * auVar17._0_4_ * auVar17._0_4_);
  uVar15 = (int32_t)((uint64_t)uVar14 >> 0x20);
  uVar2 = FUN_1804fd670(param_1 + 0x98d2a0,alStack_78);
  uVar8 = 0;
  iVar12 = *(int *)(alStack_78[0] + 0x10);
  if (iVar12 == 0) {
    uVar13 = param_2;
    if (*(int64_t *)(param_2 + 0x270) == 0) {
      plVar1 = *(int64_t **)(param_2 + 0x1c0);
      uVar10 = *(int64_t *)(param_2 + 0x1c8) - (int64_t)plVar1 >> 3;
      plVar9 = plVar1;
      uVar13 = uVar8;
      if (uVar10 != 0) {
        do {
          if (*(int64_t *)(*plVar9 + 0x270) != 0) {
            uVar13 = plVar1[(int)uVar8];
            break;
          }
          uVar2 = (int)uVar8 + 1;
          uVar8 = (uint64_t)uVar2;
          plVar9 = plVar9 + 1;
          uVar13 = 0;
        } while ((uint64_t)(int64_t)(int)uVar2 < uVar10);
      }
    }
    if (uVar13 == 0) {
      fVar18 = *(float *)(*(int64_t *)(param_2 + 0x28) + 0x128) * 0.4;
    }
    else {
      lVar4 = (**(code **)(**(int64_t **)(uVar13 + 0x270) + 0x178))
                        (*(int64_t **)(uVar13 + 0x270),auStack_60);
      fVar18 = *(float *)(lVar4 + 0x30) * 0.7;
    }
    *(float *)(alStack_78[0] + 0xc) = fVar18;
    uVar11 = (uint)(fVar18 * 8.97598);
    if ((int)uVar11 < 6) {
      uVar11 = 6;
    }
    else if (0x1f < (int)uVar11) {
      uVar11 = 0x1f;
    }
    uVar2 = uVar11 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    iVar12 = uVar11 - uVar2;
    *(int *)(alStack_78[0] + 0x10) = iVar12;
  }
  fVar19 = ((float)uVar14 + 3.1415927) * (float)iVar12 * 0.15915494;
  auVar17._4_4_ = uVar15;
  auVar17._0_4_ = fVar19;
  iVar5 = (int)fVar19;
  fVar18 = fVar19;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar19)) {
    auVar17._8_4_ = uVar15;
    auVar17._12_4_ = uVar15;
    auVar16._8_8_ = auVar17._8_8_;
    auVar16._4_4_ = fVar19;
    auVar16._0_4_ = fVar19;
    uVar2 = movmskps(uVar2,auVar16);
    fVar18 = (float)(int)(iVar5 - (uVar2 & 1));
  }
  iVar5 = (int)fVar18;
  if (0.5 < fVar19 - fVar18) {
    iVar5 = (int)fVar18 + 1;
  }
  uVar11 = iVar5 % iVar12 & 0xfffffffe;
  uVar2 = 0;
  if ((-1 < (int)uVar11) && (uVar2 = uVar11, (int)(iVar12 - 1U) < (int)uVar11)) {
    uVar2 = iVar12 - 1U;
  }
  if (0 < iVar12) {
    uVar11 = 1;
    do {
      if ((int)(uVar11 - 1) < iVar12 / 2) {
        uVar6 = uVar11 & 0x80000001;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
        }
        iVar5 = uVar11 - uVar6;
      }
      else {
        iVar5 = uVar11 - iVar12 / 2;
        uVar6 = iVar5 + 1U & 0x80000001;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
        }
        iVar5 = iVar5 - uVar6;
      }
      iVar7 = -iVar5;
      if (((char)uVar11 - 1U & 1) == 0) {
        iVar7 = iVar5;
      }
      uVar6 = iVar7 + uVar2;
      if ((int)uVar6 < 0) {
        uVar6 = uVar6 + iVar12;
      }
      else if (iVar12 <= (int)uVar6) {
        uVar6 = uVar6 - iVar12;
      }
      uVar3 = 1 << ((byte)uVar6 & 0x1f);
      if ((uVar6 == param_4) || ((*(uint *)(alStack_78[0] + 8) & uVar3) == 0)) {
        uVar2 = *(uint *)(alStack_78[0] + 8);
        if (param_4 != 0xffffffff) {
          uVar2 = uVar2 & ~(1 << (param_4 & 0x1f));
          *(uint *)(alStack_78[0] + 8) = uVar2;
        }
        *(uint *)(alStack_78[0] + 8) = uVar2 | uVar3;
        return uVar6;
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 <= *(int *)(alStack_78[0] + 0x10));
  }
  return 0xffffffff;
}






// 函数: void FUN_1804f8b80(int64_t param_1,int64_t param_2,uint param_3)
void FUN_1804f8b80(int64_t param_1,int64_t param_2,uint param_3)

{
  int64_t alStackX_10 [3];
  int64_t alStack_28 [4];
  
  if ((param_2 != 0) && (param_3 != 0xffffffff)) {
    alStackX_10[0] = param_2;
    FUN_1804fd670(param_1 + 0x98d2a0,alStack_28,param_3,alStackX_10,param_2);
    *(uint *)(alStack_28[0] + 8) = *(uint *)(alStack_28[0] + 8) & ~(1 << (param_3 & 0x1f));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f8bd0(int64_t param_1,float param_2,float param_3)
void FUN_1804f8bd0(int64_t param_1,float param_2,float param_3)

{
  int8_t uVar1;
  
  uVar1 = *(int8_t *)(param_1 + 0x87b750);
  *(int8_t *)(param_1 + 0x87b750) = 0;
  *(int8_t *)(param_1 + 0x87b718) = 1;
  if (param_3 <= param_2) {
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,&processed_var_5064_ptr,(double)param_2);
  }
  if (0.0033333334 < param_2) {
    FUN_1804e93e0(param_1,param_2);
  }
  *(int8_t *)(param_1 + 0x87b750) = uVar1;
  *(int8_t *)(param_1 + 0x87b718) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f8c80(int64_t param_1,int64_t param_2)
void FUN_1804f8c80(int64_t param_1,int64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar5;
  int *piVar6;
  uint64_t uVar7;
  int64_t lVar8;
  
  lVar3 = system_system_data_config;
  if ((*(uint *)(param_2 + 0x18) & 0x11b188) == 0) {
    uVar1 = *(uint *)(param_1 + 0x52ed94);
    uVar5 = 0;
    if (0 < (int)uVar1) {
      piVar6 = (int *)(param_1 + 0x30b0);
      uVar7 = uVar5;
      do {
        if (-1 < *piVar6) goto LAB_1804f8cdb;
        uVar5 = (uint64_t)((int)uVar5 + 1);
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 0x298;
      } while ((int64_t)uVar7 < (int64_t)(int)uVar1);
    }
    uVar5 = (uint64_t)uVar1;
LAB_1804f8cdb:
    uVar4 = (uint)uVar5;
    while ((int)uVar4 < (int)uVar1) {
      lVar8 = (int64_t)(int)uVar5 * 0xa60 + param_1;
      lVar2 = *(int64_t *)(lVar8 + 0x3780);
      if (lVar2 != 0) {
        if (*(int64_t *)(lVar2 + 0x2040) == param_2) {
          *(uint64_t *)(lVar2 + 0x2040) = 0;
        }
        if (*(int64_t *)(lVar2 + 0x2048) == param_2) {
          *(uint64_t *)(lVar2 + 0x2048) = 0;
        }
        if (*(int64_t *)(lVar2 + 0x2050) == param_2) {
          *(uint64_t *)(lVar2 + 0x2050) = 0;
        }
        if (*(int64_t *)(lVar2 + 0x2058) == param_2) {
          *(uint64_t *)(lVar2 + 0x2058) = 0;
        }
        if (*(int64_t *)(lVar2 + 0x2060) == param_2) {
          *(uint64_t *)(lVar2 + 0x2060) = 0;
        }
        if (*(int64_t *)(lVar2 + 0x2068) == param_2) {
          *(uint64_t *)(lVar2 + 0x2068) = 0;
        }
        if (*(int64_t *)(lVar2 + 0x2070) == param_2) {
          *(uint64_t *)(lVar2 + 0x2070) = 0;
        }
        if (*(int64_t *)(lVar2 + 0x2078) == param_2) {
          *(uint64_t *)(lVar2 + 0x2078) = 0;
        }
        if (*(int64_t *)(lVar2 + 0x2080) == param_2) {
          *(uint64_t *)(lVar2 + 0x2080) = 0;
        }
        if (*(int64_t *)(lVar2 + 0x2088) == param_2) {
          *(uint64_t *)(lVar2 + 0x2088) = 0;
        }
      }
      lVar2 = *(int64_t *)(lVar8 + 0x30c0);
      if (*(int64_t *)(lVar2 + 0xc0) == param_2) {
        *(int32_t *)(lVar2 + 0xb0) = 0;
        *(int32_t *)(lVar2 + 0xb4) = 0;
        *(int32_t *)(lVar2 + 0xb8) = 0x3f800000;
        *(int32_t *)(lVar2 + 0xbc) = 0;
        *(uint64_t *)(lVar2 + 0xc0) = 0;
        *(uint64_t *)(lVar2 + 200) = *(uint64_t *)(lVar3 + 0x28);
        *(int8_t *)(lVar2 + 0xd4) = 1;
      }
      if (((*(uint *)(lVar8 + 0x360c) & 0x800) != 0) && (*(int64_t *)(lVar8 + 0x3630) != 0)) {
        func_0x000180577aa0(*(int64_t *)(lVar8 + 0x3630),param_2);
      }
      uVar4 = (uint)*(short *)(param_1 + 0x52dda0 + (int64_t)(int)uVar5 * 2);
      uVar5 = (uint64_t)uVar4;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f8c9a(int64_t param_1)
void FUN_1804f8c9a(int64_t param_1)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar5;
  int *piVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  
  lVar3 = system_system_data_config;
  uVar1 = *(uint *)(param_1 + 0x52ed94);
  uVar5 = 0;
  if (0 < (int)uVar1) {
    piVar6 = (int *)(param_1 + 0x30b0);
    uVar7 = uVar5;
    do {
      if (-1 < *piVar6) goto LAB_1804f8cdb;
      uVar5 = (uint64_t)((int)uVar5 + 1);
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 0x298;
    } while ((int64_t)uVar7 < (int64_t)(int)uVar1);
  }
  uVar5 = (uint64_t)uVar1;
LAB_1804f8cdb:
  uVar4 = (uint)uVar5;
  while ((int)uVar4 < (int)uVar1) {
    lVar8 = (int64_t)(int)uVar5 * 0xa60 + unaff_RSI;
    lVar2 = *(int64_t *)(lVar8 + 0x3780);
    if (lVar2 != 0) {
      if (*(int64_t *)(lVar2 + 0x2040) == unaff_RBX) {
        *(uint64_t *)(lVar2 + 0x2040) = 0;
      }
      if (*(int64_t *)(lVar2 + 0x2048) == unaff_RBX) {
        *(uint64_t *)(lVar2 + 0x2048) = 0;
      }
      if (*(int64_t *)(lVar2 + 0x2050) == unaff_RBX) {
        *(uint64_t *)(lVar2 + 0x2050) = 0;
      }
      if (*(int64_t *)(lVar2 + 0x2058) == unaff_RBX) {
        *(uint64_t *)(lVar2 + 0x2058) = 0;
      }
      if (*(int64_t *)(lVar2 + 0x2060) == unaff_RBX) {
        *(uint64_t *)(lVar2 + 0x2060) = 0;
      }
      if (*(int64_t *)(lVar2 + 0x2068) == unaff_RBX) {
        *(uint64_t *)(lVar2 + 0x2068) = 0;
      }
      if (*(int64_t *)(lVar2 + 0x2070) == unaff_RBX) {
        *(uint64_t *)(lVar2 + 0x2070) = 0;
      }
      if (*(int64_t *)(lVar2 + 0x2078) == unaff_RBX) {
        *(uint64_t *)(lVar2 + 0x2078) = 0;
      }
      if (*(int64_t *)(lVar2 + 0x2080) == unaff_RBX) {
        *(uint64_t *)(lVar2 + 0x2080) = 0;
      }
      if (*(int64_t *)(lVar2 + 0x2088) == unaff_RBX) {
        *(uint64_t *)(lVar2 + 0x2088) = 0;
      }
    }
    lVar2 = *(int64_t *)(lVar8 + 0x30c0);
    if (*(int64_t *)(lVar2 + 0xc0) == unaff_RBX) {
      *(int32_t *)(lVar2 + 0xb0) = 0;
      *(int32_t *)(lVar2 + 0xb4) = 0;
      *(int32_t *)(lVar2 + 0xb8) = 0x3f800000;
      *(int32_t *)(lVar2 + 0xbc) = 0;
      *(uint64_t *)(lVar2 + 0xc0) = 0;
      *(uint64_t *)(lVar2 + 200) = *(uint64_t *)(lVar3 + 0x28);
      *(int8_t *)(lVar2 + 0xd4) = 1;
    }
    if (((*(uint *)(lVar8 + 0x360c) & 0x800) != 0) && (*(int64_t *)(lVar8 + 0x3630) != 0)) {
      func_0x000180577aa0();
    }
    uVar4 = (uint)*(short *)(unaff_RSI + 0x52dda0 + (int64_t)(int)uVar5 * 2);
    uVar5 = (uint64_t)uVar4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f8ce3(void)
void FUN_1804f8ce3(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int in_EAX;
  int64_t lVar3;
  int64_t unaff_RBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  uint64_t unaff_R15;
  
  lVar2 = system_system_data_config;
  do {
    lVar3 = (int64_t)in_EAX * 0xa60 + unaff_RSI;
    lVar1 = *(int64_t *)(lVar3 + 0x3780);
    if (lVar1 != 0) {
      if (*(int64_t *)(lVar1 + 0x2040) == unaff_RBX) {
        *(uint64_t *)(lVar1 + 0x2040) = unaff_R15;
      }
      if (*(int64_t *)(lVar1 + 0x2048) == unaff_RBX) {
        *(uint64_t *)(lVar1 + 0x2048) = unaff_R15;
      }
      if (*(int64_t *)(lVar1 + 0x2050) == unaff_RBX) {
        *(uint64_t *)(lVar1 + 0x2050) = unaff_R15;
      }
      if (*(int64_t *)(lVar1 + 0x2058) == unaff_RBX) {
        *(uint64_t *)(lVar1 + 0x2058) = unaff_R15;
      }
      if (*(int64_t *)(lVar1 + 0x2060) == unaff_RBX) {
        *(uint64_t *)(lVar1 + 0x2060) = unaff_R15;
      }
      if (*(int64_t *)(lVar1 + 0x2068) == unaff_RBX) {
        *(uint64_t *)(lVar1 + 0x2068) = unaff_R15;
      }
      if (*(int64_t *)(lVar1 + 0x2070) == unaff_RBX) {
        *(uint64_t *)(lVar1 + 0x2070) = unaff_R15;
      }
      if (*(int64_t *)(lVar1 + 0x2078) == unaff_RBX) {
        *(uint64_t *)(lVar1 + 0x2078) = unaff_R15;
      }
      if (*(int64_t *)(lVar1 + 0x2080) == unaff_RBX) {
        *(uint64_t *)(lVar1 + 0x2080) = unaff_R15;
      }
      if (*(int64_t *)(lVar1 + 0x2088) == unaff_RBX) {
        *(uint64_t *)(lVar1 + 0x2088) = unaff_R15;
      }
    }
    lVar1 = *(int64_t *)(lVar3 + 0x30c0);
    if (*(int64_t *)(lVar1 + 0xc0) == unaff_RBX) {
      *(int32_t *)(lVar1 + 0xb0) = 0;
      *(int32_t *)(lVar1 + 0xb4) = 0;
      *(int32_t *)(lVar1 + 0xb8) = 0x3f800000;
      *(int32_t *)(lVar1 + 0xbc) = 0;
      *(uint64_t *)(lVar1 + 0xc0) = unaff_R15;
      *(uint64_t *)(lVar1 + 200) = *(uint64_t *)(lVar2 + 0x28);
      *(int8_t *)(lVar1 + 0xd4) = 1;
    }
    if (((*(uint *)(lVar3 + 0x360c) & 0x800) != 0) && (*(int64_t *)(lVar3 + 0x3630) != 0)) {
      func_0x000180577aa0();
    }
    in_EAX = (int)*(short *)(unaff_RSI + 0x52dda0 + (int64_t)in_EAX * 2);
  } while (in_EAX < unaff_EBP);
  return;
}






// 函数: void FUN_1804f8e2e(void)
void FUN_1804f8e2e(void)

{
  return;
}






// 函数: void FUN_1804f8e38(void)
void FUN_1804f8e38(void)

{
  return;
}



uint64_t FUN_1804f8e40(int64_t param_1,float *param_2,float param_3,float param_4)

{
  char cVar1;
  float *in_RAX;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint64_t in_R8;
  float fVar6;
  float fVar7;
  float fVar8;
  uint64_t *puStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_30;
  int iStack_2c;
  uint64_t uStack_28;
  float fStack_20;
  
  fVar8 = param_3 * param_3;
  if (*(float *)(param_1 + 0x98d240) * 10.0 < param_3) {
    if (*(char *)(param_1 + 0x87a93c) == '\0') {
      iVar5 = (int)(*(int64_t *)(param_1 + 0x87a920) - *(int64_t *)(param_1 + 0x87a918) >> 3);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x87a938);
    }
    iVar3 = 0;
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        lVar2 = param_1 + 0x876958;
        if (*(char *)(param_1 + 0x87a93c) == '\0') {
          lVar2 = *(int64_t *)(param_1 + 0x87a918);
        }
        in_RAX = *(float **)(lVar2 + (int64_t)iVar4 * 8);
        if ((in_RAX[0x260] == param_4) && (in_RAX[0x15a] == 1.4013e-45)) {
          lVar2 = *(int64_t *)(in_RAX + 0x1b6);
          in_RAX = (float *)(lVar2 + 0x8c4);
          fVar7 = param_2[1] - *(float *)(lVar2 + 0x8c8);
          fVar6 = param_2[2] - *(float *)(lVar2 + 0x8cc);
          if ((*param_2 - *in_RAX) * (*param_2 - *in_RAX) + fVar7 * fVar7 + fVar6 * fVar6 <= fVar8)
          goto LAB_1804f90f9;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
    if (*(char *)(param_1 + 0x876954) == '\0') {
      iVar5 = (int)(*(int64_t *)(param_1 + 0x876938) - *(int64_t *)(param_1 + 0x876930) >> 3);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x876950);
    }
    if (0 < iVar5) {
      do {
        lVar2 = param_1 + 0x872970;
        if (*(char *)(param_1 + 0x876954) == '\0') {
          lVar2 = *(int64_t *)(param_1 + 0x876930);
        }
        in_RAX = *(float **)(lVar2 + (int64_t)iVar3 * 8);
        if ((in_RAX[0x260] == param_4) && (in_RAX[0x15a] == 1.4013e-45)) {
          lVar2 = *(int64_t *)(in_RAX + 0x1b6);
          in_RAX = (float *)(lVar2 + 0x8c4);
          fVar7 = param_2[1] - *(float *)(lVar2 + 0x8c8);
          fVar6 = param_2[2] - *(float *)(lVar2 + 0x8cc);
          if ((*param_2 - *in_RAX) * (*param_2 - *in_RAX) + fVar7 * fVar7 + fVar6 * fVar6 <= fVar8)
          goto LAB_1804f90f9;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
    }
  }
  else {
    uStack_28 = 0;
    puStack_48 = (uint64_t *)0x0;
    in_RAX = (float *)FUN_1804ff330(param_1 + 0x98d230,param_2,in_R8,&puStack_48);
    if (puStack_48 != (uint64_t *)0x0) {
      iVar5 = iStack_3c;
      do {
        in_RAX = (float *)*puStack_48;
        if ((in_RAX[0x260] == param_4) && (in_RAX[0x15a] == 1.4013e-45)) {
          lVar2 = *(int64_t *)(in_RAX + 0x1b6);
          in_RAX = (float *)(lVar2 + 0x8c4);
          fVar7 = param_2[1] - *(float *)(lVar2 + 0x8c8);
          fVar6 = param_2[2] - *(float *)(lVar2 + 0x8cc);
          if ((*param_2 - *in_RAX) * (*param_2 - *in_RAX) + fVar7 * fVar7 + fVar6 * fVar6 <= fVar8)
          {
LAB_1804f90f9:
            return CONCAT71((int7)((uint64_t)in_RAX >> 8),1);
          }
        }
        puStack_48 = (uint64_t *)puStack_48[3];
        in_RAX = (float *)CONCAT71((int7)((uint64_t)in_RAX >> 8),puStack_48 != (uint64_t *)0x0);
        while (puStack_48 == (uint64_t *)0x0) {
          if (iStack_40 == iStack_30) {
            if (iVar5 == iStack_2c) break;
            iVar5 = iVar5 + 1;
            iStack_40 = iStack_38;
            iStack_3c = iVar5;
          }
          else {
            iStack_40 = iStack_40 + 1;
          }
          puStack_48 = *(uint64_t **)
                        ((int64_t)(iStack_3c * *(int *)(param_1 + 0x98d238) + iStack_40) * 9 +
                        *(int64_t *)(param_1 + 0x98d248));
          in_RAX = (float *)CONCAT71((int7)((uint64_t)*(int64_t *)(param_1 + 0x98d248) >> 8),
                                     puStack_48 != (uint64_t *)0x0);
        }
        cVar1 = (char)in_RAX;
        while ((cVar1 != '\0' &&
               (fVar6 = uStack_28._4_4_ - *(float *)((int64_t)puStack_48 + 0xc),
               fStack_20 <
               ((float)uStack_28 - *(float *)(puStack_48 + 1)) *
               ((float)uStack_28 - *(float *)(puStack_48 + 1)) + fVar6 * fVar6))) {
          puStack_48 = (uint64_t *)puStack_48[3];
          in_RAX = (float *)CONCAT71((int7)((uint64_t)in_RAX >> 8),puStack_48 != (uint64_t *)0x0)
          ;
          while (puStack_48 == (uint64_t *)0x0) {
            if (iStack_40 == iStack_30) {
              if (iVar5 == iStack_2c) break;
              iVar5 = iVar5 + 1;
              iStack_40 = iStack_38;
              iStack_3c = iVar5;
            }
            else {
              iStack_40 = iStack_40 + 1;
            }
            puStack_48 = *(uint64_t **)
                          ((int64_t)(iStack_3c * *(int *)(param_1 + 0x98d238) + iStack_40) * 9 +
                          *(int64_t *)(param_1 + 0x98d248));
            in_RAX = (float *)CONCAT71((int7)((uint64_t)*(int64_t *)(param_1 + 0x98d248) >> 8),
                                       puStack_48 != (uint64_t *)0x0);
          }
          cVar1 = (char)in_RAX;
        }
      } while (puStack_48 != (uint64_t *)0x0);
    }
  }
  return (uint64_t)in_RAX & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f91b0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
void FUN_1804f91b0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                  int64_t *param_5,uint64_t param_6,uint64_t param_7,byte param_8,short param_9
                  ,int32_t *param_10,uint64_t *param_11,uint64_t param_12,int8_t param_13
                  )

{
  int iVar1;
  char cVar2;
  int aiStackX_8 [2];
  int32_t uVar3;
  uint64_t uVar4;
  int64_t *plStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  
  uVar4 = 0xfffffffffffffffe;
  iVar1 = 0;
  if (((param_4 != 0) && (iVar1 = *(int *)(param_4 + 0x18), iVar1 != 0)) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))(iVar1);
  }
  uVar3 = 0;
  FUN_180507810(param_3,aiStackX_8);
  if (((param_9 < 0) || (param_4 == 0)) || ((int)param_9 != *(int *)(param_4 + 0x10))) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (param_8 ^ 1) + 1;
  }
  if (param_5 == (int64_t *)0x0) {
    uStack_40 = 0xffffffff;
  }
  else {
    uStack_40 = (**(code **)(*param_5 + 8))(param_5);
  }
  uStack_38 = *param_11;
  uStack_30 = param_11[1];
  uStack_28 = *param_10;
  uStack_24 = param_10[1];
  uStack_20 = param_10[2];
  uStack_1c = param_10[3];
  plStack_48 = param_5;
  (**(code **)(system_system_data_config + 0x200))
            (*(int32_t *)(param_1 + 0x98d928),param_2,aiStackX_8[0],iVar1,&plStack_48,param_6,
             param_7,cVar2,&uStack_28,&uStack_38,param_12,param_13,uVar3,uVar4);
  if ((aiStackX_8[0] != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  if ((iVar1 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f9390(int64_t param_1)
void FUN_1804f9390(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  
  if (*(char *)(param_1 + 0x87b388) != '\0') {
    uVar5 = 0;
    *(uint64_t *)(param_1 + 0x87b370) = *(uint64_t *)(param_1 + 0x87b368);
    iVar1 = *(int *)(param_1 + 0x87b318);
    if (0 < iVar1) {
      do {
        if (*(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x87b340) + (uint64_t)(uVar5 >> 4) * 8)
                     + 8 + (uint64_t)(uVar5 & 0xf) * 0xbe0) != 0) break;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar1);
    }
    if ((int)uVar5 < iVar1) {
      do {
        plVar6 = *(int64_t **)(param_1 + 0x87b370);
        lVar7 = (uint64_t)(uVar5 & 0xf) * 0xbe0 +
                *(int64_t *)(*(int64_t *)(param_1 + 0x87b340) + (uint64_t)(uVar5 >> 4) * 8);
        if (plVar6 < *(int64_t **)(param_1 + 0x87b378)) {
          *(int64_t **)(param_1 + 0x87b370) = plVar6 + 1;
          *plVar6 = lVar7;
        }
        else {
          plVar4 = *(int64_t **)(param_1 + 0x87b368);
          lVar2 = (int64_t)plVar6 - (int64_t)plVar4 >> 3;
          if (lVar2 == 0) {
            lVar2 = 1;
LAB_1804f9479:
            plVar3 = (int64_t *)
                     CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,*(int8_t *)(param_1 + 0x87b380));
            plVar4 = *(int64_t **)(param_1 + 0x87b368);
            plVar6 = *(int64_t **)(param_1 + 0x87b370);
          }
          else {
            lVar2 = lVar2 * 2;
            if (lVar2 != 0) goto LAB_1804f9479;
            plVar3 = (int64_t *)0x0;
          }
          if (plVar4 != plVar6) {
                    // WARNING: Subroutine does not return
            memmove(plVar3,plVar4,(int64_t)plVar6 - (int64_t)plVar4);
          }
          *plVar3 = lVar7;
          if (*(int64_t *)(param_1 + 0x87b368) != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *(int64_t **)(param_1 + 0x87b368) = plVar3;
          *(int64_t **)(param_1 + 0x87b378) = plVar3 + lVar2;
          *(int64_t **)(param_1 + 0x87b370) = plVar3 + 1;
        }
        iVar1 = *(int *)(param_1 + 0x87b318);
        uVar5 = uVar5 + 1;
        if (iVar1 <= (int)uVar5) break;
        do {
          if (*(int *)(*(int64_t *)
                        (*(int64_t *)(param_1 + 0x87b340) + (uint64_t)(uVar5 >> 4) * 8) + 8 +
                      (uint64_t)(uVar5 & 0xf) * 0xbe0) != 0) break;
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < iVar1);
      } while ((int)uVar5 < iVar1);
    }
    *(int8_t *)(param_1 + 0x87b388) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f93ad(int64_t param_1)
void FUN_1804f93ad(int64_t param_1)

{
  int iVar1;
  uint64_t in_RAX;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint uVar5;
  int64_t *plVar6;
  int64_t unaff_RDI;
  int64_t lVar7;
  
  uVar5 = 0;
  *(uint64_t *)(param_1 + 0x87b370) = in_RAX;
  iVar1 = *(int *)(param_1 + 0x87b318);
  if (0 < iVar1) {
    do {
      if (*(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x87b340) + (uint64_t)(uVar5 >> 4) * 8) +
                   8 + (uint64_t)(uVar5 & 0xf) * 0xbe0) != 0) break;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar1);
  }
  if ((int)uVar5 < iVar1) {
    do {
      plVar6 = *(int64_t **)(unaff_RDI + 0x87b370);
      lVar7 = (uint64_t)(uVar5 & 0xf) * 0xbe0 +
              *(int64_t *)(*(int64_t *)(unaff_RDI + 0x87b340) + (uint64_t)(uVar5 >> 4) * 8);
      if (plVar6 < *(int64_t **)(unaff_RDI + 0x87b378)) {
        *(int64_t **)(unaff_RDI + 0x87b370) = plVar6 + 1;
        *plVar6 = lVar7;
      }
      else {
        plVar4 = *(int64_t **)(unaff_RDI + 0x87b368);
        lVar2 = (int64_t)plVar6 - (int64_t)plVar4 >> 3;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_1804f9479:
          plVar3 = (int64_t *)
                   CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,*(int8_t *)(unaff_RDI + 0x87b380));
          plVar4 = *(int64_t **)(unaff_RDI + 0x87b368);
          plVar6 = *(int64_t **)(unaff_RDI + 0x87b370);
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_1804f9479;
          plVar3 = (int64_t *)0x0;
        }
        if (plVar4 != plVar6) {
                    // WARNING: Subroutine does not return
          memmove(plVar3,plVar4,(int64_t)plVar6 - (int64_t)plVar4);
        }
        *plVar3 = lVar7;
        if (*(int64_t *)(unaff_RDI + 0x87b368) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(int64_t **)(unaff_RDI + 0x87b368) = plVar3;
        *(int64_t **)(unaff_RDI + 0x87b378) = plVar3 + lVar2;
        *(int64_t **)(unaff_RDI + 0x87b370) = plVar3 + 1;
      }
      iVar1 = *(int *)(unaff_RDI + 0x87b318);
      uVar5 = uVar5 + 1;
      if (iVar1 <= (int)uVar5) break;
      do {
        if (*(int *)(*(int64_t *)
                      (*(int64_t *)(unaff_RDI + 0x87b340) + (uint64_t)(uVar5 >> 4) * 8) + 8 +
                    (uint64_t)(uVar5 & 0xf) * 0xbe0) != 0) break;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar1);
    } while ((int)uVar5 < iVar1);
  }
  *(int8_t *)(unaff_RDI + 0x87b388) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




