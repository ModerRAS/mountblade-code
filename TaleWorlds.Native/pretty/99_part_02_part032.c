#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part032.c - 3 个函数

// 函数: void FUN_1801a3620(int64_t param_1,uint64_t *param_2)
void FUN_1801a3620(int64_t param_1,uint64_t *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *plVar10;
  uint uVar11;
  int8_t auStack_268 [32];
  uint uStack_248;
  uint64_t uStack_240;
  int64_t lStack_238;
  uint64_t *puStack_230;
  int64_t **pplStack_228;
  int64_t *plStack_220;
  int64_t *aplStack_218 [2];
  int64_t *plStack_208;
  int32_t uStack_200;
  int32_t uStack_1fc;
  char cStack_1f8;
  int8_t uStack_1f7;
  int8_t uStack_1f6;
  int32_t uStack_1f4;
  char cStack_1f0;
  uint64_t uStack_1e8;
  int64_t lStack_1e0;
  int64_t lStack_1d8;
  int64_t lStack_1d0;
  uint uStack_1c8;
  uint64_t uStack_1c0;
  int64_t *plStack_1b8;
  int64_t lStack_1b0;
  uint64_t uStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  code *pcStack_180;
  code *pcStack_178;
  int64_t *plStack_170;
  int64_t *plStack_168;
  int64_t *plStack_160;
  uint64_t uStack_158;
  int64_t lStack_150;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [40];
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [72];
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  uint64_t uStack_48;
  
  uStack_158 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_268;
  lStack_1e0 = 0;
  uStack_248 = 0;
  plStack_208 = (int64_t *)*param_2;
  uStack_200 = *(int32_t *)(param_2 + 1);
  uStack_1fc = *(int32_t *)((int64_t)param_2 + 0xc);
  cStack_1f8 = *(char *)(param_2 + 2);
  uStack_1f7 = *(int8_t *)((int64_t)param_2 + 0x11);
  uStack_1f6 = *(int8_t *)((int64_t)param_2 + 0x12);
  uStack_1f4 = *(int32_t *)((int64_t)param_2 + 0x14);
  cStack_1f0 = *(char *)(param_2 + 3);
  uStack_1e8 = param_2[4];
  plStack_1b8 = &lStack_1e0;
  lVar7 = (int64_t)(param_2[6] - param_2[5]) / 6 + ((int64_t)(param_2[6] - param_2[5]) >> 0x3f);
  lVar7 = (lVar7 >> 2) - (lVar7 >> 0x3f);
  uStack_1c8 = *(uint *)(param_2 + 8);
  if (lVar7 != 0) {
    lStack_1e0 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 0x18,uStack_1c8 & 0xff);
  }
  lStack_1d0 = lStack_1e0 + lVar7 * 0x18;
  lVar7 = param_2[5];
  lStack_1d8 = lStack_1e0;
  if (lVar7 != param_2[6]) {
                    // WARNING: Subroutine does not return
    memmove(lStack_1e0,lVar7,param_2[6] - lVar7);
  }
  uStack_1c0 = param_2[9];
  cStack_1f0 = *(int64_t *)(param_1 + 0x81f8) != 0;
  plVar6 = *(int64_t **)(param_1 + 0x60858);
  if (plVar6 != *(int64_t **)(param_1 + 0x60860)) {
    do {
      lVar7 = *plVar6;
      if ((((*(uint *)(lVar7 + 0x2ac) & 0x1000000) != 0) || (cStack_1f8 != '\0')) &&
         ((*(char *)((int64_t)param_2 + 0x11) == '\0' || ((*(byte *)(lVar7 + 0x2e8) & 0xb) == 0xb))
         )) {
        FUN_1802e7bc0(lVar7,&plStack_208);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != *(int64_t **)(param_1 + 0x60860));
  }
  lVar7 = *(int64_t *)(param_1 + 0x60880);
  plVar6 = plStack_208;
  while (plStack_208 = plVar6, lVar7 != param_1 + 0x60878) {
    lVar9 = *(int64_t *)(lVar7 + 0x20);
    if ((((*(uint *)(lVar9 + 0x2ac) & 0x1000000) != 0) || (cStack_1f8 != '\0')) &&
       ((*(char *)((int64_t)param_2 + 0x11) == '\0' || ((*(byte *)(lVar9 + 0x2e8) & 0xb) == 0xb))))
    {
      FUN_1802e7bc0(lVar9,&plStack_208);
    }
    lVar7 = func_0x00018066bd70(lVar7);
    plVar6 = plStack_208;
  }
  uVar11 = 0;
  if (((*(int64_t *)(param_1 + 0x358) == 0) ||
      (lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0x358) + 0x58), uVar11 = uStack_248,
      lStack_238 = lVar7, *(int *)(lVar7 + 0x380) == 2)) || (*(int *)(lVar7 + 0x380) == 3))
  goto LAB_1801a39ab;
  uStack_240 = 1;
  if (plVar6 != (int64_t *)0x0) {
    plVar10 = (int64_t *)plVar6[1];
    if (plVar10 < (int64_t *)plVar6[2]) {
      plVar6[1] = (int64_t)(plVar10 + 1);
      *plVar10 = lVar7;
    }
    else {
      plVar8 = (int64_t *)*plVar6;
      lVar9 = (int64_t)plVar10 - (int64_t)plVar8 >> 3;
      if (lVar9 == 0) {
        lStack_238 = 1;
LAB_1801a38da:
        plVar4 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lStack_238 * 8,(char)plVar6[3]);
        plVar10 = (int64_t *)plVar6[1];
        plVar8 = (int64_t *)*plVar6;
      }
      else {
        lStack_238 = lVar9 * 2;
        if (lStack_238 != 0) goto LAB_1801a38da;
        plVar4 = (int64_t *)0x0;
      }
      if (plVar8 != plVar10) {
                    // WARNING: Subroutine does not return
        memmove(plVar4,plVar8,(int64_t)plVar10 - (int64_t)plVar8);
      }
      *plVar4 = lVar7;
      if (*plVar6 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *plVar6 = (int64_t)plVar4;
      plVar6[1] = (int64_t)(plVar4 + 1);
      plVar6[2] = (int64_t)(plVar4 + lStack_238);
    }
  }
  uVar11 = uStack_248;
  if (cStack_1f8 != '\0') {
    lStack_1b0 = 0;
    uStack_1a8 = 0;
    pcStack_1a0 = (code *)0x0;
    pcStack_198 = _guard_check_icall;
    FUN_18023c450(lVar7,0,uStack_1f4,&lStack_1b0);
    uVar11 = uStack_248;
    if (pcStack_1a0 != (code *)0x0) {
      (*pcStack_1a0)(&lStack_1b0,0,0);
      uVar11 = uStack_248;
    }
  }
LAB_1801a39ab:
  if ((*(int64_t *)(param_1 + 0x60b80) != 0) &&
     (lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0x60b80) + 0x198), lVar7 != 0)) {
    puStack_148 = &unknown_var_672_ptr;
    puStack_140 = auStack_130;
    auStack_130[0] = 0;
    uStack_138 = 0xd;
    strcpy_s(auStack_130,0x20,&unknown_var_3344_ptr);
    lVar5 = FUN_1802e4d10(lVar7,&puStack_148);
    lVar9 = *(int64_t *)(lVar5 + 0x28);
    lVar7 = lVar9 + 0x58;
    lStack_150 = lVar7;
    iVar3 = _Mtx_lock(lVar7);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    iVar3 = (**(code **)(**(int64_t **)(lVar5 + 0x20) + 0x28))();
    plVar6 = *(int64_t **)(lVar9 + 0x148);
    (**(code **)(*plVar6 + 0x118))(plVar6,*(uint64_t *)(lVar5 + 0x20),iVar3 + -3);
    iVar3 = _Mtx_unlock(lVar7);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    puStack_148 = &system_state_ptr;
  }
  if ((*(byte *)(param_2 + 1) & 4) == 0) {
    lVar7 = *(int64_t *)(param_1 + 0x60b80);
    if (lVar7 != 0) {
      iVar3 = -0x80000000;
      plVar10 = *(int64_t **)(lVar7 + 0x40);
      lVar9 = *plVar10;
      plVar6 = plVar10;
      if (lVar9 == 0) {
        plVar6 = plVar10 + 1;
        lVar9 = *plVar6;
        while (lVar9 == 0) {
          plVar6 = plVar6 + 1;
          lVar9 = *plVar6;
        }
      }
      while (lVar9 != plVar10[*(int64_t *)(lVar7 + 0x48)]) {
        if ((*(int64_t *)(lVar9 + 8) != 0) &&
           (iVar2 = *(int *)(*(int64_t *)(lVar9 + 8) + 0x28), iVar3 < iVar2)) {
          iVar3 = iVar2;
        }
        lVar9 = *(int64_t *)(lVar9 + 0x10);
        while (lVar9 == 0) {
          plVar6 = plVar6 + 1;
          lVar9 = *plVar6;
        }
      }
      lVar7 = (int64_t)iVar3;
      if (0 < iVar3) {
        lVar9 = 0xc08;
        do {
          FUN_180076c50(*(uint64_t *)(lVar9 + system_resource_state),&plStack_208);
          lVar9 = lVar9 + 8;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    lVar7 = system_system_data_memory;
    FUN_1800bd410(system_system_data_memory);
    lVar9 = system_resource_state;
    if (*(int64_t *)(lVar7 + 0x10) == 0) {
      puStack_108 = &unknown_var_3480_ptr;
      puStack_100 = auStack_f0;
      auStack_f0[0] = 0;
      uStack_f8 = 0xe;
      strcpy_s(auStack_f0,0x40,&unknown_var_9048_ptr);
      FUN_1800b08e0(lVar9,&plStack_220,&puStack_108,1);
      plVar6 = plStack_220;
      uStack_248 = 1;
      puStack_108 = &system_state_ptr;
      plStack_220 = (int64_t *)0x0;
      plStack_170 = *(int64_t **)(lVar7 + 0x10);
      *(int64_t **)(lVar7 + 0x10) = plVar6;
      if (plStack_170 != (int64_t *)0x0) {
        (**(code **)(*plStack_170 + 0x38))();
      }
      uVar11 = 0;
      uStack_248 = 0;
      if (plStack_220 != (int64_t *)0x0) {
        (**(code **)(*plStack_220 + 0x38))();
      }
      puVar1 = (uint *)(*(int64_t *)(lVar7 + 0x10) + 0x328);
      *puVar1 = *puVar1 | 0x20000000;
    }
    uStack_190 = 0;
    uStack_188 = 0;
    pcStack_180 = (code *)0x0;
    pcStack_178 = _guard_check_icall;
    FUN_18023c450(*(uint64_t *)(lVar7 + 0x10),0,*(int32_t *)(lVar7 + 0x468),&uStack_190);
    if (pcStack_180 != (code *)0x0) {
      (*pcStack_180)(&uStack_190,0,0);
    }
    lVar9 = system_resource_state;
    if (*(int64_t *)(lVar7 + 0xe0) == 0) {
      puStack_a8 = &unknown_var_3480_ptr;
      puStack_a0 = auStack_90;
      auStack_90[0] = 0;
      uStack_98 = 7;
      strcpy_s(auStack_90,0x40,&unknown_var_9176_ptr);
      FUN_1800b30d0(lVar9,aplStack_218,&puStack_a8,1);
      plVar6 = aplStack_218[0];
      uStack_248 = uVar11 & 0xffffffef | 8;
      puStack_a8 = &system_state_ptr;
      aplStack_218[0] = (int64_t *)0x0;
      plStack_168 = *(int64_t **)(lVar7 + 0xe0);
      *(int64_t **)(lVar7 + 0xe0) = plVar6;
      if (plStack_168 != (int64_t *)0x0) {
        (**(code **)(*plStack_168 + 0x38))();
      }
      uVar11 = uVar11 & 0xffffffe7;
      uStack_248 = uVar11;
      if (aplStack_218[0] != (int64_t *)0x0) {
        (**(code **)(*aplStack_218[0] + 0x38))();
      }
    }
    plVar6 = *(int64_t **)(lVar7 + 0xe0);
    plStack_160 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    uStack_248 = uVar11 & 0xfffffffb;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x38))(plVar6);
    }
    FUN_1800bd790(lVar7);
    FUN_1800c0570(lVar7,&plStack_1b8);
    if (plStack_1b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    if (*(int64_t *)(param_1 + 0x448) != 0) {
      FUN_1803796b0(*(int64_t *)(param_1 + 0x448),&plStack_208);
    }
    uStack_240 = uStack_240 & 0xffffffff00000000;
    puStack_230 = &uStack_240;
    pplStack_228 = &plStack_208;
    if (cStack_1f0 != '\0') {
      if (*(int64_t *)(param_1 + 0x3080) != 0) {
        FUN_180149a10(&puStack_230);
      }
      if (*(int64_t *)(param_1 + 0x30a8) != 0) {
        FUN_180149a10(&puStack_230);
      }
    }
    if (*(int64_t *)(param_1 + 0x3168) != 0) {
      FUN_180149a10(&puStack_230);
    }
    if (*(int64_t *)(param_1 + 0x3190) != 0) {
      FUN_180149a10(&puStack_230);
    }
    if (0 < *(int *)(SYSTEM_STATE_MANAGER + 0xee0)) {
      if (*(int64_t *)(param_1 + 0x3270) != 0) {
        FUN_180149a10(&puStack_230);
      }
      if (*(int64_t *)(param_1 + 0x3298) != 0) {
        FUN_180149a10(&puStack_230);
      }
    }
    if (*(char *)(param_1 + 0x331d) != '\0') {
      if (*(int64_t *)(param_1 + 0x31c0) != 0) {
        FUN_180149a10(&puStack_230);
      }
      if (*(int64_t *)(param_1 + 0x31c8) != 0) {
        FUN_180149a10(&puStack_230);
      }
    }
    (**(code **)(**(int64_t **)(param_1 + 0x27e8) + 200))(*(int64_t **)(param_1 + 0x27e8),1);
    (**(code **)(**(int64_t **)(param_1 + 0x27e8) + 0x1a8))
              (*(int64_t **)(param_1 + 0x27e8),&plStack_208);
  }
  plStack_160 = &lStack_1e0;
  if (lStack_1e0 == 0) {
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_268);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801a3f60(int64_t param_1,float *param_2,float *param_3,float *param_4,char param_5,
void FUN_1801a3f60(int64_t param_1,float *param_2,float *param_3,float *param_4,char param_5,
                  int64_t *param_6,byte param_7)

{
  code *pcVar1;
  byte bVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  uint uStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  uint64_t uStack_9c;
  float fStack_94;
  float fStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int32_t uStack_6c;
  
  bVar2 = param_7;
  fStack_78 = *param_2;
  fStack_74 = param_2[1];
  fStack_70 = param_2[2];
  fStack_c0 = *param_2;
  fStack_bc = param_2[1];
  fStack_b8 = param_2[2];
  uStack_b4 = 0x7f7fffff;
  uStack_6c = 0x7f7fffff;
  FUN_1803a5440(*(uint64_t *)(param_1 + 0x2908),&fStack_c0,param_2,0,0xfffffffffffffffe);
  uStack_7c = uStack_b4;
  fVar10 = -fStack_bc;
  auVar6._0_8_ = CONCAT44(fStack_bc,fStack_bc) ^ 0x8000000080000000;
  auVar6._8_4_ = -fStack_bc;
  auVar6._12_4_ = -fStack_bc;
  auVar5._4_12_ = auVar6._4_12_;
  auVar5._0_4_ = fVar10 * fVar10;
  fVar9 = fStack_b8 * fStack_b8 + auVar5._0_4_;
  auVar6 = rsqrtss(auVar5,ZEXT416((uint)fVar9));
  fVar11 = auVar6._0_4_;
  fVar12 = fVar11 * 0.5 * (3.0 - fVar9 * fVar11 * fVar11);
  fStack_94 = fStack_b8 * fVar12;
  fVar12 = fVar12 * fVar10;
  fVar10 = fStack_b8 * fStack_94 - fStack_bc * fVar12;
  fVar13 = fStack_c0 * fVar12;
  fVar9 = -(fStack_c0 * fStack_94);
  auVar7._8_4_ = -fStack_b8;
  auVar7._0_8_ = CONCAT44(fStack_bc,fStack_c0 * fStack_94) ^ 0x8000000000000000;
  auVar7._12_4_ = uStack_b4 ^ 0x80000000;
  auVar8._4_12_ = auVar7._4_12_;
  auVar8._0_4_ = fVar9 * fVar9 + fVar10 * fVar10 + fVar13 * fVar13;
  auVar6 = rsqrtss(auVar8,ZEXT416((uint)auVar8._0_4_));
  fVar11 = auVar6._0_4_;
  fVar11 = fVar11 * 0.5 * (3.0 - auVar8._0_4_ * fVar11 * fVar11);
  fStack_a0 = *param_3;
  if (*(int *)(system_system_data_memory + 0xe0) == 0) {
    system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
    system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
    system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
    fStack_a0 = (*param_4 - fStack_a0) * (float)(system_memory_flags - 1) * 2.3283064e-10 + fStack_a0;
    fStack_a8 = fStack_a0 * fVar10 * fVar11;
    fStack_a4 = fStack_a0 * fVar13 * fVar11;
    fStack_a0 = fStack_a0 * fVar11 * fVar9;
    system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
    system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
    system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
    fStack_90 = (param_4[1] - param_3[1]) * (float)(system_memory_flags - 1) * 2.3283064e-10 + param_3[1]
    ;
    uStack_9c = 0x7f7fffff;
    fStack_94 = fStack_94 * fStack_90;
    fStack_90 = fVar12 * fStack_90;
    fStack_80 = (fStack_a8 + fStack_94) * 0.5;
    fStack_88 = fStack_c0 * fStack_80;
    fStack_84 = fStack_bc * fStack_80;
    fStack_80 = fStack_b8 * fStack_80;
    if (param_5 == '\0') goto LAB_1801a4300;
    system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
    system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
    system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
    fVar11 = (float)(system_memory_flags - 1) * 1.4629181e-09;
  }
  else {
    fStack_a0 = (fStack_a0 + *param_4) * 0.5;
    fStack_a8 = fStack_a0 * fVar10 * fVar11;
    fStack_a4 = fStack_a0 * fVar13 * fVar11;
    fStack_a0 = fVar11 * fVar9 * fStack_a0;
    fStack_90 = (param_3[1] + param_4[1]) * 0.5;
    uStack_9c = 0x7f7fffff;
    fStack_94 = fStack_90 * fStack_94;
    fStack_90 = fStack_90 * fVar12;
    fStack_80 = (fStack_a8 + fStack_94) * 0.5;
    fStack_88 = fStack_c0 * fStack_80;
    fStack_84 = fStack_bc * fStack_80;
    fStack_80 = fStack_b8 * fStack_80;
    if (param_5 == '\0') goto LAB_1801a4300;
    fVar11 = 3.1415927;
  }
  uStack_9c = 0x7f7fffff;
  FUN_180085c10(&fStack_a8,fVar11);
LAB_1801a4300:
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x298,8,3);
  plVar4 = (int64_t *)FUN_1802f5f70(uVar3);
  (**(code **)(*plVar4 + 0x148))(plVar4,&fStack_a8);
  pcVar1 = *(code **)(*plVar4 + 0x118);
  (**(code **)(*param_6 + 0x28))();
  (*pcVar1)(plVar4,&param_6);
  if (param_6 != (int64_t *)0x0) {
    (**(code **)(*param_6 + 0x38))();
  }
  *(byte *)(plVar4 + 7) = bVar2 ^ 1;
  uVar3 = *(uint64_t *)(param_1 + 0x348);
  param_6 = plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  FUN_1803a61d0(uVar3,&param_6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801a43d0(int64_t param_1,float *param_2,float *param_3,float *param_4,int64_t *param_5)
void FUN_1801a43d0(int64_t param_1,float *param_2,float *param_3,float *param_4,int64_t *param_5)

{
  code *pcVar1;
  int64_t *plVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  float fVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  int32_t uStack_f4;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int32_t uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t uStack_ac;
  
  fStack_b8 = *param_2;
  fStack_b4 = param_2[1];
  fStack_b0 = param_2[2];
  fStack_100 = *param_2;
  fStack_fc = param_2[1];
  fStack_f8 = param_2[2];
  uStack_f4 = 0x7f7fffff;
  uStack_ac = 0x7f7fffff;
  FUN_1803a5440(*(uint64_t *)(param_1 + 0x2908),&fStack_100,param_2,0,0xfffffffffffffffe);
  plVar2 = param_5;
  uStack_bc = uStack_f4;
  fStack_dc = param_3[3];
  fVar15 = fStack_fc * param_3[2] - fStack_f8 * param_3[1];
  fStack_d4 = fStack_f8 * *param_3 - fStack_100 * param_3[2];
  fVar12 = fStack_100 * param_3[1] - fStack_fc * *param_3;
  auVar8._4_4_ = fStack_fc;
  auVar8._0_4_ = fVar12;
  auVar8._8_4_ = fStack_f8;
  auVar8._12_4_ = uStack_f4;
  auVar7._4_12_ = auVar8._4_12_;
  auVar7._0_4_ = fVar12 * fVar12 + fStack_d4 * fStack_d4 + fVar15 * fVar15;
  auVar8 = rsqrtss(auVar7,ZEXT416((uint)auVar7._0_4_));
  fVar6 = auVar8._0_4_;
  fStack_d0 = fVar6 * 0.5 * (3.0 - auVar7._0_4_ * fVar6 * fVar6);
  fVar15 = fStack_d0 * fVar15;
  fStack_d4 = fStack_d0 * fStack_d4;
  fStack_d0 = fStack_d0 * fVar12;
  fVar14 = fStack_f8 * fStack_d4 - fStack_fc * fStack_d0;
  fVar13 = fStack_100 * fStack_d0 - fStack_f8 * fVar15;
  fVar16 = fStack_fc * fVar15 - fStack_100 * fStack_d4;
  auVar9._4_4_ = fStack_fc;
  auVar9._0_4_ = fVar16;
  auVar9._8_4_ = fStack_fc;
  auVar9._12_4_ = fStack_fc;
  auVar10._4_12_ = auVar9._4_12_;
  auVar10._0_4_ = fVar16 * fVar16 + fVar13 * fVar13 + fVar14 * fVar14;
  auVar8 = rsqrtss(auVar10,ZEXT416((uint)auVar10._0_4_));
  fVar6 = auVar8._0_4_;
  fVar11 = fVar6 * 0.5 * (3.0 - auVar10._0_4_ * fVar6 * fVar6);
  fVar6 = *(float *)(param_5 + 0x51);
  fVar12 = *(float *)((int64_t)param_5 + 0x28c);
  system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
  system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
  system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
  uVar3 = system_memory_flags - 1;
  fStack_e4 = *param_4;
  if (*(int *)(system_system_data_memory + 0xe0) == 0) {
    fStack_e8 = fStack_e4 * fVar11 * fVar14;
    fStack_d8 = param_4[1];
    fStack_d4 = fStack_d8 * fStack_d4;
    fStack_c8 = fStack_d4 + fStack_e8;
  }
  else {
    fStack_e4 = fStack_e4 * 0.5;
    fStack_e8 = fStack_e4 * fVar11 * fVar14;
    fStack_d8 = param_4[1] * 0.5;
    fStack_d4 = fStack_d8 * fStack_d4;
    fStack_c8 = fStack_d4 + fStack_e8;
  }
  fStack_d0 = fStack_d8 * fStack_d0;
  fStack_d8 = fStack_d8 * fVar15;
  fStack_e0 = fStack_e4 * fVar11 * fVar16;
  fStack_e4 = fStack_e4 * fVar11 * fVar13;
  fStack_c8 = fStack_c8 * 0.5;
  fStack_c4 = fStack_fc * fStack_c8;
  fStack_c0 = fStack_f8 * fStack_c8;
  fStack_c8 = fStack_100 * fStack_c8;
  uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x298,8,3);
  plVar5 = (int64_t *)FUN_1802f5f70(uVar4);
  (**(code **)(*plVar5 + 0x148))(plVar5,&fStack_e8);
  pcVar1 = *(code **)(*plVar5 + 0x118);
  param_5 = plVar2;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  (*pcVar1)(plVar5,&param_5);
  if (param_5 != (int64_t *)0x0) {
    (**(code **)(*param_5 + 0x38))();
  }
  uStack_f4 = 0;
  fStack_100 = fVar6;
  fStack_fc = fVar12;
  fStack_f8 = (float)(int)(uVar3 % (~(int)(-1.0 / fVar12) + 1U)) * fVar12;
  (**(code **)(*plVar5 + 400))(plVar5,&fStack_100);
  *(int8_t *)(plVar5 + 7) = 0;
  uVar4 = *(uint64_t *)(param_1 + 0x350);
  param_5 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  FUN_1803a61d0(uVar4,&param_5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




