#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part222.c - 5 个函数

// 函数: void FUN_180198e30(int64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void FUN_180198e30(int64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)

{
  byte *pbVar1;
  byte bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int64_t *plVar10;
  int iVar11;
  uint64_t uVar12;
  int iVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t *plVar17;
  uint64_t uVar18;
  int64_t *plVar19;
  int64_t *plVar20;
  int8_t auStack_128 [32];
  int8_t uStack_108;
  uint uStack_104;
  void *puStack_100;
  byte *pbStack_f8;
  uint uStack_f0;
  uint64_t uStack_e8;
  void *puStack_e0;
  byte *pbStack_d8;
  uint uStack_d0;
  uint64_t uStack_c8;
  int64_t *plStack_c0;
  int64_t *plStack_b8;
  int64_t *plStack_b0;
  int64_t *plStack_a8;
  int32_t uStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  char acStack_70 [16];
  char acStack_60 [16];
  char acStack_50 [16];
  uint64_t uStack_40;
  int64_t lVar16;
  
  uStack_80 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  uStack_104 = 0;
  plStack_b8 = (int64_t *)0x0;
  plStack_b0 = (int64_t *)0x0;
  plStack_a8 = (int64_t *)0x0;
  uStack_a0 = 3;
  uStack_108 = param_4;
  lStack_90 = param_1;
  uStack_88 = param_2;
  uStack_78 = param_2;
  plStack_c0 = (int64_t *)FUN_1801a9dd0(0,param_3);
  if (plStack_c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_c0 + 0x28))(plStack_c0);
  }
  FUN_1800b87c0(&plStack_b8,&plStack_c0);
  if (plStack_c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_c0 + 0x38))();
  }
  CoreEngineDataTransformer(&puStack_100,param_3);
  uVar9 = uStack_f0 + 3;
  CoreEngineDataBufferProcessor(&puStack_100,uVar9);
  pbVar5 = pbStack_f8 + uStack_f0;
  pbVar5[0] = 0x5f;
  pbVar5[1] = 0x30;
  pbVar5[2] = 0x31;
  pbVar5[3] = 0;
  plStack_c0 = (int64_t *)CONCAT44(plStack_c0._4_4_,1);
  lStack_98 = param_1 + 0x607e0;
  plVar19 = plStack_b0;
  plVar20 = plStack_a8;
  uVar7 = 0;
  uStack_f0 = uVar9;
LAB_180198f21:
  uVar12 = 0;
  uVar9 = uStack_f0 - 2;
  if ((int)(uStack_f0 - 2) < 0) {
    uVar9 = uStack_f0;
  }
  puStack_e0 = &system_data_buffer_ptr;
  uStack_c8 = 0;
  pbStack_d8 = (byte *)0x0;
  uStack_d0 = 0;
  uStack_104 = uVar7 | 2;
  uVar6 = uStack_f0;
  if ((int)uVar9 < (int)uStack_f0) {
    uVar6 = uVar9;
  }
  CoreEngineDataBufferProcessor(&puStack_e0,uVar6 + 1);
  uVar14 = uVar12;
  if (0 < (int)uVar9) {
    do {
      if (uStack_f0 <= (uint)uVar14) break;
      bVar2 = pbStack_f8[uVar12];
      CoreEngineDataBufferProcessor(&puStack_e0,uStack_d0 + 1);
      pbStack_d8[uStack_d0] = bVar2;
      pbStack_d8[uStack_d0 + 1] = 0;
      uStack_d0 = uStack_d0 + 1;
      uVar14 = (uint64_t)((uint)uVar14 + 1);
      uVar12 = uVar12 + 1;
    } while ((int64_t)uVar12 < (int64_t)(int)uVar9);
  }
  plVar10 = plStack_c0;
  uVar9 = uStack_d0;
  if (pbStack_f8 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(pbStack_f8);
  }
  uVar12 = 0;
  pbStack_f8 = pbStack_d8;
  uStack_e8 = uStack_c8;
  uStack_d0 = 0;
  uStack_104 = uVar7 & 0xfffffffd;
  pbStack_d8 = (byte *)0x0;
  uStack_c8 = 0;
  puStack_e0 = &system_state_ptr;
  iVar11 = (int)plStack_c0;
  uStack_f0 = uVar9;
  if ((int)plStack_c0 < 10) {
    FUN_180060680(acStack_70,&processed_var_4576_ptr,0);
    lVar16 = -1;
    do {
      lVar3 = lVar16;
      lVar16 = lVar3 + 1;
    } while (acStack_70[lVar3 + 1] != '\0');
    iVar13 = (int)(lVar3 + 1);
    if (0 < iVar13) {
      CoreEngineDataBufferProcessor(&puStack_100,uStack_f0 + iVar13);
                    // WARNING: Subroutine does not return
      memcpy(pbStack_f8 + uStack_f0,acStack_70,(int64_t)((int)lVar3 + 2));
    }
    FUN_180060680(acStack_60,&processed_var_4576_ptr,(uint64_t)plVar10 & 0xffffffff);
    lVar16 = -1;
    do {
      lVar15 = lVar16 + 1;
      lVar3 = lVar16 + 1;
      lVar16 = lVar15;
    } while (acStack_60[lVar3] != '\0');
    if ((int)lVar15 < 1) {
LAB_18019914b:
      FUN_1803986d0(lStack_98);
      plVar10 = plStack_b8;
      lVar16 = *(int64_t *)(lStack_90 + 0x60858);
      uVar18 = *(int64_t *)(lStack_90 + 0x60860) - lVar16 >> 3;
      uVar14 = uVar12;
      if (uVar18 == 0) {
LAB_1801991d4:
        FUN_1801993a0(lStack_90,uStack_88,&plStack_b8,uStack_108);
        plVar19 = plStack_b0;
        plVar20 = plStack_b8;
        uStack_104 = uStack_104 | 1;
        puStack_100 = &system_data_buffer_ptr;
        if (pbStack_f8 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        pbStack_f8 = (byte *)0x0;
        uStack_e8 = uStack_e8 & 0xffffffff00000000;
        puStack_100 = &system_state_ptr;
        for (plVar10 = plStack_b8; plVar10 != plVar19; plVar10 = plVar10 + 1) {
          if ((int64_t *)*plVar10 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar10 + 0x38))();
          }
        }
        if (plVar20 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar20);
        }
                    // WARNING: Subroutine does not return
        SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_128);
      }
      do {
        lVar3 = *(int64_t *)(lVar16 + uVar14 * 8);
        uVar7 = *(uint *)(lVar3 + 0x298);
        if (uStack_f0 == uVar7) {
          if (uStack_f0 != 0) {
            pbVar5 = pbStack_f8;
            do {
              pbVar1 = pbVar5 + (*(int64_t *)(lVar3 + 0x290) - (int64_t)pbStack_f8);
              uVar7 = (uint)*pbVar5 - (uint)*pbVar1;
              if (uVar7 != 0) break;
              pbVar5 = pbVar5 + 1;
            } while (*pbVar1 != 0);
          }
LAB_1801991c0:
          if (uVar7 == 0) goto LAB_180199282;
        }
        else if (uStack_f0 == 0) goto LAB_1801991c0;
        uVar7 = (int)uVar12 + 1;
        uVar12 = (uint64_t)uVar7;
        uVar14 = uVar14 + 1;
        if (uVar18 <= (uint64_t)(int64_t)(int)uVar7) goto LAB_1801991d4;
      } while( true );
    }
    CoreEngineDataBufferProcessor(&puStack_100,uStack_f0 + (int)lVar15);
    pcVar8 = acStack_60;
  }
  else {
    FUN_180060680(acStack_50,&processed_var_4576_ptr,(uint64_t)plStack_c0 & 0xffffffff);
    lVar16 = -1;
    do {
      lVar15 = lVar16 + 1;
      lVar3 = lVar16 + 1;
      lVar16 = lVar15;
    } while (acStack_50[lVar3] != '\0');
    if ((int)lVar15 < 1) goto LAB_18019914b;
    CoreEngineDataBufferProcessor(&puStack_100,uStack_f0 + (int)lVar15);
    pcVar8 = acStack_50;
  }
                    // WARNING: Subroutine does not return
  memcpy(pbStack_f8 + uStack_f0,pcVar8,(int64_t)((int)lVar15 + 1));
LAB_180199282:
  if (plVar19 < plVar20) {
    plVar4 = plVar19 + 1;
    plVar10 = *(int64_t **)(lVar16 + uVar14 * 8);
    *plVar19 = (int64_t)plVar10;
    if (plVar10 != (int64_t *)0x0) {
      plStack_b0 = plVar4;
      (**(code **)(*plVar10 + 0x28))();
      plStack_c0 = (int64_t *)CONCAT44(plStack_c0._4_4_,iVar11 + 1);
      plVar19 = plVar4;
      uVar7 = uStack_104;
      goto LAB_180198f21;
    }
    goto LAB_18019937e;
  }
  lVar3 = (int64_t)plVar19 - (int64_t)plStack_b8 >> 3;
  plVar20 = plVar10;
  if (lVar3 == 0) {
    lVar3 = 1;
LAB_1801992e1:
    plVar4 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr);
    plVar17 = plVar4;
  }
  else {
    lVar3 = lVar3 * 2;
    if (lVar3 != 0) goto LAB_1801992e1;
    plVar4 = (int64_t *)0x0;
    plVar17 = plVar4;
  }
  for (; plVar20 != plVar19; plVar20 = plVar20 + 1) {
    *plVar4 = *plVar20;
    *plVar20 = 0;
    plVar4 = plVar4 + 1;
  }
  plVar20 = *(int64_t **)(lVar16 + uVar14 * 8);
  *plVar4 = (int64_t)plVar20;
  if (plVar20 != (int64_t *)0x0) {
    (**(code **)(*plVar20 + 0x28))();
  }
  plVar4 = plVar4 + 1;
  for (plVar20 = plVar10; plVar20 != plVar19; plVar20 = plVar20 + 1) {
    if ((int64_t *)*plVar20 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar20 + 0x38))();
    }
  }
  if (plVar10 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar10);
  }
  plVar20 = plVar17 + lVar3;
  iVar11 = (int)plStack_c0;
  plStack_b8 = plVar17;
  plStack_a8 = plVar20;
LAB_18019937e:
  plStack_c0 = (int64_t *)CONCAT44(plStack_c0._4_4_,iVar11 + 1);
  plVar19 = plVar4;
  uVar7 = uStack_104;
  plStack_b0 = plVar4;
  goto LAB_180198f21;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1801993a0(uint64_t param_1,int64_t *param_2,uint64_t param_3,char param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plStack_30;
  int64_t *plStack_28;
  uint64_t uStack_20;
  int64_t **pplStack_18;
  
  uStack_20 = 0xfffffffffffffffe;
  *param_2 = 0;
  if (param_4 == '\0') {
    plVar3 = (int64_t *)FUN_18019eb80(param_1,param_3,param_3,0,1);
    if (plVar3 != (int64_t *)0x0) {
      plStack_28 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plStack_28 = (int64_t *)*param_2;
    *param_2 = (int64_t)plVar3;
  }
  else {
    FUN_1801a0860(param_1,&plStack_28);
    uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,3);
    plVar3 = (int64_t *)FUN_180275090(uVar2);
    if (plVar3 != (int64_t *)0x0) {
      plStack_30 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plStack_30 = (int64_t *)*param_2;
    *param_2 = (int64_t)plVar3;
    if (plStack_30 != (int64_t *)0x0) {
      (**(code **)(*plStack_30 + 0x38))();
    }
    lVar1 = *param_2;
    pplStack_18 = &plStack_30;
    plStack_30 = plStack_28;
    if (plStack_28 != (int64_t *)0x0) {
      (**(code **)(*plStack_28 + 0x28))();
    }
    FUN_180275cf0(lVar1,0,&plStack_30,1);
    (**(code **)(*(int64_t *)*param_2 + 0x100))((int64_t *)*param_2,0);
    (**(code **)(*(int64_t *)(*param_2 + 0x1f0) + 0x10))
              ((int64_t *)(*param_2 + 0x1f0),&rendering_buffer_2416_ptr);
    FUN_180276f30(*param_2,*param_2 + 0x214,1);
    (**(code **)(*(int64_t *)*param_2 + 0x148))((int64_t *)*param_2,&system_data_0300);
  }
  if (plStack_28 != (int64_t *)0x0) {
    (**(code **)(*plStack_28 + 0x38))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180199500(int64_t param_1,float param_2,char param_3)
void FUN_180199500(int64_t param_1,float param_2,char param_3)

{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  float fVar12;
  uint auStackX_18 [4];
  uint64_t uVar13;
  
  uVar13 = 0xfffffffffffffffe;
  *(int *)(param_1 + 0x60b88) = *(int *)(param_1 + 0x60b88) + 1;
  uVar9 = *(uint *)(param_1 + 0x50);
  if (*(uint *)(param_1 + 100) != *(uint *)(param_1 + 0x50)) {
    uVar9 = *(uint *)(param_1 + 100) + 1;
  }
  uVar11 = (uint64_t)uVar9;
  *(uint *)(param_1 + 100) = uVar9;
  *(float *)(*(int64_t *)(param_1 + 0x58) + (int64_t)*(int *)(param_1 + 0x68) * 4) = param_2;
  *(int *)(param_1 + 0x68) = (*(int *)(param_1 + 0x68) + 1) % *(int *)(param_1 + 0x50);
  uVar10 = 0;
  *(int32_t *)(param_1 + 0x60) = 0;
  uVar9 = *(uint *)(param_1 + 100);
  fVar12 = 0.0;
  if (0 < (int)uVar9) {
    pfVar4 = *(float **)(param_1 + 0x58);
    uVar6 = (uint64_t)uVar9;
    do {
      fVar12 = fVar12 + *pfVar4;
      *(float *)(param_1 + 0x60) = fVar12;
      pfVar4 = pfVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *(float *)(param_1 + 0x60) = fVar12 / (float)(int)uVar9;
  if (*(char *)(param_1 + 0x5ba0) == '\0') {
    fVar12 = (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x5b98) * 8) %
                    1000000000) * 1e-05;
  }
  else {
    fVar12 = 0.0;
  }
  *(float *)(param_1 + 0x5b9c) = fVar12;
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  *(int32_t *)(param_1 + 0x8250) = *(int32_t *)(SYSTEM_STATE_MANAGER + 0x17a0);
  lVar7 = *(int64_t *)(param_1 + 0x82c0) - *(int64_t *)(param_1 + 0x82b8);
  lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
  iVar2 = (int)(lVar7 >> 1) - (int)(lVar7 >> 0x3f);
  auStackX_18[0] = 0;
  uVar6 = uVar10;
  if (0 < iVar2) {
    do {
      lVar5 = (int64_t)(int)uVar6;
      lVar7 = *(int64_t *)(param_1 + 0x82b8);
      if ((*(char *)(lVar7 + 8 + lVar5 * 0xc) != '\0') &&
         (iVar3 = *(int *)(lVar7 + 4 + lVar5 * 0xc), iVar3 != -1)) {
        uVar11 = uVar11 & 0xffffffffffffff00;
        do {
          lVar8 = (int64_t)iVar3 * 0x2c;
          fVar12 = *(float *)(lVar8 + 0x8320 + param_1);
          if (fVar12 <= 0.0) {
            *(int32_t *)(lVar8 + 0x8324 + param_1) = 0xffffffff;
            if (((char)uVar11 == '\0') &&
               (*(int32_t *)(lVar7 + 4 + lVar5 * 0xc) = 0xffffffff,
               *(char *)(lVar7 + 9 + lVar5 * 0xc) != '\0')) {
              *(int8_t *)(lVar7 + 8 + lVar5 * 0xc) = 0;
              FUN_1800571e0(param_1 + 0x82d8,auStackX_18,lVar7,uVar11,uVar13);
            }
            break;
          }
          *(float *)(lVar8 + 0x8320 + param_1) =
               fVar12 - param_2 * *(float *)(&ui_system_data_1600_ptr +
                                            (int64_t)*(char *)(lVar7 + lVar5 * 0xc) * 4);
          uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
          iVar3 = *(int *)(lVar8 + 0x8324 + param_1);
        } while (iVar3 != -1);
      }
      auStackX_18[0] = (int)uVar6 + 1;
      uVar6 = (uint64_t)auStackX_18[0];
    } while ((int)auStackX_18[0] < iVar2);
  }
  LOCK();
  *(uint64_t *)(param_1 + 0x8230) = 0;
  UNLOCK();
  iVar2 = _Mtx_unlock(param_1 + 0x8268);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  *(int16_t *)(param_1 + 0x310) = 0;
  *(int8_t *)(param_1 + 0x312) = 0;
  if (((*(int64_t **)(param_1 + 0x318) != (int64_t *)0x0) && (*(char *)(param_1 + 0x2a61) != '\0')
      ) && (*(int *)(core_system_data_memory + 0xaf0) != 0)) {
    (**(code **)(**(int64_t **)(param_1 + 0x318) + 0x100))();
    (**(code **)(**(int64_t **)(param_1 + 0x318) + 0x30))
              (*(int64_t **)(param_1 + 0x318),*(int8_t *)(param_1 + 0x2a62),param_2,
               *(int32_t *)(param_1 + 0x8220));
  }
  FUN_1803986d0(param_1 + 0x607e0);
  uVar11 = uVar10;
  if (*(int64_t *)(param_1 + 0xe8) - *(int64_t *)(param_1 + 0xe0) >> 3 != 0) {
    do {
      plVar1 = *(int64_t **)(uVar11 + *(int64_t *)(param_1 + 0xe0));
      (**(code **)(*plVar1 + 8))(plVar1,param_1,param_2);
      uVar9 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar9;
      uVar11 = uVar11 + 8;
    } while ((uint64_t)(int64_t)(int)uVar9 <
             (uint64_t)(*(int64_t *)(param_1 + 0xe8) - *(int64_t *)(param_1 + 0xe0) >> 3));
  }
  FUN_1801970c0(param_1,param_2);
  if (((*(int64_t **)(param_1 + 0x318) != (int64_t *)0x0) && (*(char *)(param_1 + 0x2a61) != '\0')
      ) && ((*(char *)(param_1 + 0x2a62) != '\0' && (*(int *)(core_system_data_memory + 0xaf0) != 0)))) {
    (**(code **)(**(int64_t **)(param_1 + 0x318) + 0x40))();
  }
  if (param_3 != '\0') {
    FUN_1801998a0(param_1,param_2);
  }
  return;
}





// 函数: void FUN_1801998a0(int64_t param_1,int32_t param_2)
void FUN_1801998a0(int64_t param_1,int32_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(int64_t *)(param_1 + 0xe8) - *(int64_t *)(param_1 + 0xe0) >> 3 != 0) {
    do {
      plVar1 = *(int64_t **)(uVar2 + *(int64_t *)(param_1 + 0xe0));
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2);
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(param_1 + 0xe8) - *(int64_t *)(param_1 + 0xe0) >> 3));
  }
  return;
}





// 函数: void FUN_1801998ce(void)
void FUN_1801998ce(void)

{
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  
  uVar1 = (uint64_t)unaff_EDI;
  do {
    (**(code **)(**(int64_t **)(uVar1 + *(int64_t *)(unaff_RBX + 0xe0)) + 0x10))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0xe8) - *(int64_t *)(unaff_RBX + 0xe0) >> 3));
  return;
}





// 函数: void FUN_18019991c(void)
void FUN_18019991c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



