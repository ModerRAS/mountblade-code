#define SystemInitializer FUN_1808fcb90  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part033_sub001.c - 4 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_02_part033.c - 4 个函数


// 函数: void FUN_1801a48a0(int64_t param_1,float *param_2,float *param_3,float *param_4,float *param_5,
void FUN_1801a48a0(int64_t param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  char param_6,int64_t *param_7,uint64_t param_8,byte param_9)

{
  code *pcVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  int8_t auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int32_t uVar14;
  float fVar15;
  int32_t uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int32_t uStack_ec;
  float fStack_e8;
  float fStack_e4;
  uint64_t uStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int32_t uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  fStack_c8 = *param_3;
  fStack_c4 = param_3[1];
  fStack_c0 = param_3[2];
  fStack_bc = param_3[3];
  fVar13 = fStack_c4 * param_2[1];
  fVar5 = fStack_c8 * *param_2;
  fVar8 = fStack_c0 * param_2[2];
  fStack_d0 = (float)*(uint64_t *)(param_2 + 2);
  uVar14 = 0;
  fStack_d4 = (float)((uint64_t)*(uint64_t *)param_2 >> 0x20);
  fStack_d8 = (float)*(uint64_t *)param_2;
  if (ABS(*param_2) <= 0.95) {
    fVar12 = -fStack_d4;
    fVar9 = fStack_d0 * fStack_d0 + fVar12 * fVar12;
    auVar7 = rsqrtss(ZEXT416((uint)(fVar12 * fVar12)),ZEXT416((uint)fVar9));
    fVar10 = auVar7._0_4_;
    fVar9 = fVar9 * fVar10 * fVar10;
    fVar10 = fVar10 * 0.5 * (3.0 - fVar9);
    fVar17 = 0.0;
    fVar11 = fStack_d0 * fVar10;
    fVar12 = fVar12 * fVar10;
    fVar15 = fStack_d0 * fVar11 - fStack_d4 * fVar12;
    fVar18 = fVar12 * fStack_d8;
    fVar19 = -(fStack_d8 * fVar11);
  }
  else {
    fVar17 = -fStack_d0;
    fVar9 = fVar17 * fVar17 + fStack_d8 * fStack_d8;
    auVar7 = rsqrtss(ZEXT416((uint)(fStack_d8 * fStack_d8)),ZEXT416((uint)fVar9));
    fVar10 = auVar7._0_4_;
    fVar9 = fVar9 * fVar10 * fVar10;
    fVar10 = fVar10 * 0.5 * (3.0 - fVar9);
    fVar17 = fVar17 * fVar10;
    fVar11 = 0.0;
    fVar12 = fStack_d8 * fVar10;
    fVar15 = -(fStack_d4 * fVar12);
    fVar18 = fVar12 * fStack_d8 - fVar17 * fStack_d0;
    fVar19 = fVar17 * fStack_d4;
  }
  uStack_cc = (int32_t)((uint64_t)*(uint64_t *)(param_2 + 2) >> 0x20);
  if (*(int *)(system_system_data_memory + 0xe0) == 0) {
    system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
    system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
    system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
    fVar9 = (*param_5 - *param_4) * (float)(system_memory_flags - 1) * 2.3283064e-10 + *param_4;
    _fStack_f8 = CONCAT44(fVar18 * fVar9,fVar15 * fVar9);
    _fStack_f0 = CONCAT44(0x7f7fffff,fVar19 * fVar9);
    system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
    system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
    uVar4 = system_memory_flags << 5 ^ system_memory_flags;
    fVar18 = (param_5[1] - param_4[1]) * (float)(uVar4 - 1) * 2.3283064e-10 + param_4[1];
    _fStack_e8 = CONCAT44(fVar11 * fVar18,fVar17 * fVar18);
    uStack_e0 = (uint64_t)(uint)(fVar12 * fVar18);
    fVar9 = (fVar11 * fVar18 + fVar15 * fVar9) * 0.5;
    _fStack_d8 = CONCAT44(fStack_d4 * fVar9,fStack_d8 * fVar9);
    _fStack_d0 = CONCAT44(uStack_cc,fStack_d0 * fVar9);
    if (param_6 != '\0') {
      uVar4 = uVar4 << 0xd ^ uVar4;
      uVar4 = uVar4 >> 0x11 ^ uVar4;
      uVar4 = uVar4 << 5 ^ uVar4;
      system_memory_flags = uVar4;
      FUN_180085c10(&fStack_f8,(float)(uVar4 - 1) * 1.4629181e-09,fVar18,fVar10,0xfffffffffffffffe);
    }
    uVar4 = uVar4 << 0xd ^ uVar4;
    uVar4 = uVar4 >> 0x11 ^ uVar4;
    uVar4 = uVar4 << 5 ^ uVar4;
    if ((uVar4 - 1 & 1) == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0x3f000000;
    }
    uVar4 = uVar4 << 0xd ^ uVar4;
    uVar4 = uVar4 >> 0x11 ^ uVar4;
    system_memory_flags = uVar4 << 5 ^ uVar4;
    if ((system_memory_flags - 1 & 1) != 0) {
      uVar14 = 0x3f000000;
    }
  }
  else {
    fVar6 = (*param_4 + *param_5) * 0.5;
    _fStack_f8 = CONCAT44(fVar18 * fVar6,fVar15 * fVar6);
    _fStack_f0 = CONCAT44(0x7f7fffff,fVar19 * fVar6);
    fVar18 = (param_4[1] + param_5[1]) * 0.5;
    _fStack_e8 = CONCAT44(fVar11 * fVar18,fVar17 * fVar18);
    uStack_e0 = (uint64_t)(uint)(fVar12 * fVar18);
    fVar11 = (fVar11 * fVar18 + fVar15 * fVar6) * 0.5;
    _fStack_d8 = CONCAT44(fStack_d4 * fVar11,fStack_d8 * fVar11);
    _fStack_d0 = CONCAT44(uStack_cc,fStack_d0 * fVar11);
    if (param_6 != '\0') {
      FUN_180085c10(&fStack_f8,0x40490fdb,fVar9,fVar10,0xfffffffffffffffe);
    }
    uVar16 = 0;
  }
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0x298,8,3);
  plVar3 = (int64_t *)FUN_1802f5f70(uVar2);
  (**(code **)(*plVar3 + 0x148))(plVar3,&fStack_f8);
  fVar10 = param_2[1];
  fVar9 = param_2[2];
  *(float *)(plVar3 + 0xc) = *param_2;
  *(float *)((int64_t)plVar3 + 100) = fVar10;
  *(float *)(plVar3 + 0xd) = fVar9;
  *(float *)((int64_t)plVar3 + 0x6c) = -(fVar13 + fVar5 + fVar8);
  uStack_110 = 0x3f000000;
  uStack_10c = 0x3f000000;
  uStack_108 = uVar16;
  uStack_104 = uVar14;
  (**(code **)(*plVar3 + 400))(plVar3,&uStack_110);
  pcVar1 = *(code **)(*plVar3 + 0x118);
  if (param_7 != (int64_t *)0x0) {
    (**(code **)(*param_7 + 0x28))();
  }
  (*pcVar1)(plVar3,&param_7);
  if (param_7 != (int64_t *)0x0) {
    (**(code **)(*param_7 + 0x38))();
  }
  *(byte *)(plVar3 + 7) = param_9 ^ 1;
  uVar2 = *(uint64_t *)(param_1 + 0x338);
  param_7 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_1803a61d0(uVar2,&param_7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t (*) [16]
FUN_1801a4e70(int64_t param_1,int8_t (*param_2) [16],int64_t *param_3,int64_t param_4)

{
  float fVar1;
  int64_t *plVar2;
  int64_t lVar3;
  float *pfVar4;
  int8_t (*pauVar5) [16];
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar7 = 0;
  *(int32_t *)param_2[3] = 0;
  *(uint64_t *)param_2[2] = 0;
  *(uint64_t *)(param_2[2] + 8) = 0;
  *param_2 = system_system_memory;
  *(int32_t *)param_2[1] = 0xff7fffff;
  *(int32_t *)(param_2[1] + 4) = 0xff7fffff;
  *(int32_t *)(param_2[1] + 8) = 0xff7fffff;
  *(int32_t *)(param_2[1] + 0xc) = 0x7f7fffff;
  lVar6 = *(int64_t *)(param_1 + 0x60b80);
  pauVar5 = param_2;
  if (lVar6 != 0) {
    plVar2 = *(int64_t **)(lVar6 + 0x40);
    param_4 = *plVar2;
    param_3 = plVar2;
    if (param_4 == 0) {
      param_3 = plVar2 + 1;
      param_4 = *param_3;
      while (param_4 == 0) {
        param_3 = param_3 + 1;
        param_4 = *param_3;
      }
    }
    lVar6 = plVar2[*(int64_t *)(lVar6 + 0x48)];
    while (param_4 != lVar6) {
                    // WARNING: Read-only address (ram,0x000180a40490) is written
      lVar3 = *(int64_t *)(param_4 + 8);
      if (lVar3 != 0) {
        uVar8 = *(uint *)(lVar3 + 0x18);
        pauVar5 = (int8_t (*) [16])(uint64_t)uVar8;
        fVar12 = *(float *)(lVar3 + 0x78);
        fVar11 = *(float *)(*(int64_t *)(param_1 + 0x60b80) + 0x1c);
        fVar14 = (float)*(int *)(lVar3 + 0x1c) * fVar11;
        fVar1 = *(float *)(lVar3 + 0x7c);
        fVar15 = (float)(*(int *)(lVar3 + 0x1c) + 1) * fVar11;
        fVar13 = (float)(int)(uVar8 + 1) * fVar11;
        fVar10 = *(float *)*param_2;
        if ((float)(int)uVar8 * fVar11 <= *(float *)*param_2) {
          fVar10 = (float)(int)uVar8 * fVar11;
        }
        *(float *)*param_2 = fVar10;
        fVar11 = *(float *)(*param_2 + 4);
        if (fVar14 <= *(float *)(*param_2 + 4)) {
          fVar11 = fVar14;
        }
        *(float *)(*param_2 + 4) = fVar11;
        fVar11 = *(float *)(*param_2 + 8);
        if (fVar12 <= *(float *)(*param_2 + 8)) {
          fVar11 = fVar12;
        }
        *(float *)(*param_2 + 8) = fVar11;
        if (fVar13 <= *(float *)param_2[1]) {
          fVar13 = *(float *)param_2[1];
        }
        *(float *)param_2[1] = fVar13;
        fVar12 = *(float *)(param_2[1] + 4);
        if (*(float *)(param_2[1] + 4) <= fVar15) {
          fVar12 = fVar15;
        }
        *(float *)(param_2[1] + 4) = fVar12;
        fVar12 = *(float *)(param_2[1] + 8);
        if (*(float *)(param_2[1] + 8) <= fVar1) {
          fVar12 = fVar1;
        }
        *(float *)(param_2[1] + 8) = fVar12;
      }
      param_4 = *(int64_t *)(param_4 + 0x10);
      while (param_4 == 0) {
        param_3 = param_3 + 1;
        param_4 = *param_3;
      }
    }
  }
  FUN_1803986d0(param_1 + 0x607e0,pauVar5,param_3,param_4,0xfffffffffffffffe);
  lVar6 = *(int64_t *)(param_1 + 0x60858);
  uVar9 = uVar7;
  if (*(int64_t *)(param_1 + 0x60860) - lVar6 >> 3 != 0) {
    do {
      plVar2 = *(int64_t **)(uVar7 + lVar6);
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      if (plVar2 == *(int64_t **)(param_1 + 0x81f8)) {
        if (plVar2 != (int64_t *)0x0) goto LAB_1801a5131;
      }
      else {
        if ((*(uint *)((int64_t)plVar2 + 0x2ac) & 0x2020000) == 0) {
          if ((short)plVar2[0x56] != *(short *)((int64_t)plVar2 + 0x2b4)) {
            if ((char)plVar2[0x5b] == '\0') {
              FUN_1802e7e20(plVar2);
            }
            else {
              FUN_18063ad30(plVar2[5],plVar2[5] + 0xf8,plVar2 + 0xe);
            }
            *(int16_t *)(plVar2 + 0x56) = *(int16_t *)((int64_t)plVar2 + 0x2b4);
          }
          FUN_1801c0d90(plVar2);
          FUN_1801c0d90(plVar2);
          pfVar4 = (float *)plVar2[5];
          FUN_1801c0d90(plVar2);
          FUN_1801c0d90(plVar2);
          lVar6 = plVar2[5];
          fVar12 = *pfVar4;
          if (((fVar12 < *(float *)(lVar6 + 0x10) || fVar12 == *(float *)(lVar6 + 0x10)) &&
              (pfVar4[1] <= *(float *)(lVar6 + 0x14))) && (pfVar4[2] <= *(float *)(lVar6 + 0x18))) {
            if (*(float *)*param_2 <= fVar12) {
              fVar12 = *(float *)*param_2;
            }
            *(float *)*param_2 = fVar12;
            fVar12 = pfVar4[1];
            if (*(float *)(*param_2 + 4) <= pfVar4[1]) {
              fVar12 = *(float *)(*param_2 + 4);
            }
            *(float *)(*param_2 + 4) = fVar12;
            fVar12 = *(float *)(*param_2 + 8);
            if (pfVar4[2] <= *(float *)(*param_2 + 8)) {
              fVar12 = pfVar4[2];
            }
            *(float *)(*param_2 + 8) = fVar12;
            fVar12 = *(float *)(lVar6 + 0x10);
            if (*(float *)(lVar6 + 0x10) <= *(float *)param_2[1]) {
              fVar12 = *(float *)param_2[1];
            }
            *(float *)param_2[1] = fVar12;
            fVar12 = *(float *)(lVar6 + 0x14);
            if (*(float *)(lVar6 + 0x14) <= *(float *)(param_2[1] + 4)) {
              fVar12 = *(float *)(param_2[1] + 4);
            }
            *(float *)(param_2[1] + 4) = fVar12;
            fVar12 = *(float *)(lVar6 + 0x18);
            if (*(float *)(lVar6 + 0x18) <= *(float *)(param_2[1] + 8)) {
              fVar12 = *(float *)(param_2[1] + 8);
            }
            *(float *)(param_2[1] + 8) = fVar12;
          }
        }
LAB_1801a5131:
        (**(code **)(*plVar2 + 0x38))(plVar2);
      }
      uVar8 = (int)uVar9 + 1;
      uVar7 = uVar7 + 8;
      lVar6 = *(int64_t *)(param_1 + 0x60858);
      uVar9 = (uint64_t)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)(*(int64_t *)(param_1 + 0x60860) - lVar6 >> 3));
  }
  FUN_1800b9f60(param_2);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1801a5190(uint64_t param_1,int64_t param_2,char param_3,char param_4,char param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  void **ppuVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint uVar10;
  int iVar11;
  void *puStack_a0;
  int8_t *puStack_98;
  uint uStack_90;
  uint64_t uStack_88;
  void *puStack_80;
  int64_t lStack_78;
  uint uStack_70;
  void *puStack_60;
  int64_t lStack_58;
  int32_t uStack_48;
  uint64_t uStack_40;
  int64_t lStack_38;
  void **ppuStack_30;
  
  uStack_40 = 0xfffffffffffffffe;
  lStack_38 = param_2;
  FUN_1800baa00(&puStack_80);
  while ((0 < (int)uStack_70 && (lVar4 = strstr(lStack_78,&system_ptr_cfb8), lVar4 != 0))) {
    iVar11 = 1;
    iVar7 = (int)lVar4 - (int)lStack_78;
    if (uStack_70 < iVar7 + 1U) {
      iVar11 = uStack_70 - iVar7;
    }
    uVar10 = iVar7 + iVar11;
    if (uVar10 < uStack_70) {
      lVar9 = (int64_t)(int)uVar10;
      do {
        *(int8_t *)((lVar9 - iVar11) + lStack_78) = *(int8_t *)(lVar9 + lStack_78);
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 1;
      } while (uVar10 < uStack_70);
    }
    uStack_70 = uStack_70 - iVar11;
    *(int8_t *)((uint64_t)uStack_70 + lStack_78) = 0;
    uVar5 = FUN_180627910(&puStack_a0,&system_ptr_e2c8);
    FUN_1806288c0(&puStack_80,(int)lVar4 - (int)lStack_78,uVar5);
    puStack_a0 = &system_data_buffer_ptr;
    if (puStack_98 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_98 = (int8_t *)0x0;
    uStack_88 = uStack_88 & 0xffffffff00000000;
    puStack_a0 = &system_state_ptr;
  }
  cVar3 = FUN_180624a00(&puStack_80);
  if (cVar3 == '\0') {
    FUN_180624910(&puStack_80);
  }
  FUN_180627ae0(param_2,&puStack_80);
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
               0x48) < system_system_config_memory) && (SystemInitializer(&system_ptr_9630), system_system_config_memory == -1)) {
    FUN_1800fa160(&system_ptr_9638);
    FUN_1808fc820(FUN_180941b20);
    FUN_1808fcb30(&system_ptr_9630);
  }
  if (param_4 == '\0') {
    ppuVar6 = (void **)FUN_1800fa160(&puStack_60);
    bVar2 = false;
    bVar1 = true;
  }
  else {
    puStack_a0 = &system_data_buffer_ptr;
    uStack_88 = 0;
    puStack_98 = (int8_t *)0x0;
    uStack_90 = 0;
    FUN_1806277c0(&puStack_a0,system_system_config_memory);
    if (system_system_config_memory != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_98,system_system_config_memory,system_system_config_memory + 1);
    }
    if (system_system_config_memory != (void *)0x0) {
      uStack_90 = 0;
      if (puStack_98 != (int8_t *)0x0) {
        *puStack_98 = 0;
      }
      uStack_88 = uStack_88 & 0xffffffff;
    }
    ppuVar6 = &puStack_a0;
    bVar2 = true;
    bVar1 = false;
  }
  if (system_system_config_memory != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  system_system_config_memory = *(int *)(ppuVar6 + 2);
  system_system_config_memory = ppuVar6[1];
  system_system_config_memory = ppuVar6[3];
  *(int32_t *)(ppuVar6 + 2) = 0;
  ppuVar6[1] = (void *)0x0;
  ppuVar6[3] = (void *)0x0;
  if (bVar1) {
    puStack_60 = &system_data_buffer_ptr;
    if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_58 = 0;
    uStack_48 = 0;
    puStack_60 = &system_state_ptr;
  }
  if ((bVar2) && (puStack_a0 = &system_data_buffer_ptr, puStack_98 != (int8_t *)0x0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_a0 = &system_data_buffer_ptr;
  uStack_88 = 0;
  puStack_98 = (int8_t *)0x0;
  uStack_90 = 0;
  uVar10 = *(uint *)(param_2 + 0x10);
  uVar8 = (uint64_t)uVar10;
  if (*(int64_t *)(param_2 + 8) != 0) {
    FUN_1806277c0(&puStack_a0,uVar8);
  }
  if (uVar10 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_98,*(uint64_t *)(param_2 + 8),uVar8);
  }
  if (puStack_98 != (int8_t *)0x0) {
    *(int8_t *)(uVar8 + (int64_t)puStack_98) = 0;
  }
  uStack_90 = uVar10;
  uStack_88._4_4_ = *(uint *)(param_2 + 0x1c);
  if (0 < system_system_config_memory) {
    FUN_1806277c0(&puStack_a0,system_system_config_memory);
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)uStack_90 + (int64_t)puStack_98,system_system_config_memory,(int64_t)(system_system_config_memory + 1)
          );
  }
  FUN_18005d190(param_2,&puStack_a0);
  puStack_a0 = &system_data_buffer_ptr;
  if (puStack_98 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_98 = (int8_t *)0x0;
  uStack_88 = (uint64_t)uStack_88._4_4_ << 0x20;
  puStack_a0 = &system_state_ptr;
  if (param_4 != '\0') {
    FUN_180627f00(param_2,&unknown_var_3376_ptr);
  }
  FUN_180627f00(param_2,&system_ptr_3fc0);
  ppuStack_30 = &puStack_60;
  FUN_180627ae0(&puStack_60,param_2);
  FUN_180056c50();
  lVar4 = system_parameter_buffer;
  if (param_3 != '\0') {
    *(byte *)(system_parameter_buffer + 0x1507) = *(byte *)(system_parameter_buffer + 0x1507) | 1;
  }
  if (param_5 != '\0') {
    *(byte *)(lVar4 + 0x1507) = *(byte *)(lVar4 + 0x1507) | 2;
  }
  puStack_80 = &system_data_buffer_ptr;
  if (lStack_78 == 0) {
    return param_2;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1801a5620(int64_t param_1,int32_t *param_2,char param_3)
void FUN_1801a5620(int64_t param_1,int32_t *param_2,char param_3)

{
  float fVar1;
  int64_t *plVar2;
  float fVar3;
  int8_t auStack_128 [48];
  void *puStack_f8;
  int32_t uStack_f0;
  int32_t uStack_ec;
  int8_t uStack_e8;
  uint64_t uStack_e0;
  int32_t uStack_d8;
  int32_t uStack_d4;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  int8_t uStack_b4;
  void **ppuStack_b0;
  int32_t uStack_88;
  int8_t auStack_78 [36];
  float fStack_54;
  int iStack_38;
  uint64_t uStack_28;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  fVar1 = *(float *)(param_1 + 0x3ec4);
  fVar3 = fVar1;
  if (param_3 != '\0') {
    iStack_38 = 0;
    uStack_ec = 0xffefffff;
    uStack_f0 = 2;
    puStack_f8 = &unknown_var_6456_ptr;
    uStack_e8 = 1;
    plVar2 = *(int64_t **)(*(int64_t *)(param_1 + 0x28f8) + 0x318);
    if (plVar2 != (int64_t *)0x0) {
      uStack_88 = 0x461c4000;
      uStack_d0 = 0x42cb0000;
      uStack_cc = 0x7f7fffff;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0xbf800000;
      uStack_bc = 0x7f7fffff;
      uStack_b8 = 0x461c4000;
      uStack_b4 = 0;
      ppuStack_b0 = &puStack_f8;
      uStack_d8 = *param_2;
      uStack_d4 = param_2[1];
      (**(code **)(*plVar2 + 0x118))(plVar2,&uStack_d8,auStack_78);
    }
    if ((iStack_38 != 0) && (fVar3 = fStack_54, fStack_54 <= fVar1)) {
      fVar3 = fVar1;
    }
    iStack_38 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(fVar3);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1801a5770(int64_t param_1)
void FUN_1801a5770(int64_t param_1)

{
  uint64_t ******ppppppuVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t *******pppppppuVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *******pppppppuVar7;
  int64_t lVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int iVar15;
  bool bVar16;
  int aiStackX_10 [2];
  int **ppiStackX_18;
  int64_t *plStackX_20;
  uint64_t *******pppppppuStack_148;
  uint64_t *******pppppppuStack_140;
  uint64_t *******pppppppuStack_138;
  int8_t uStack_130;
  int32_t uStack_12f;
  int16_t uStack_12b;
  int8_t uStack_129;
  uint64_t uStack_128;
  int64_t *plStack_120;
  int64_t alStack_118 [2];
  int32_t uStack_108;
  int64_t *plStack_100;
  uint64_t uStack_f8;
  int64_t lStack_e8;
  uint64_t ******ppppppuStack_e0;
  int *apiStack_d8 [2];
  code *pcStack_c8;
  void *puStack_c0;
  int64_t *plStack_b8;
  uint64_t uStack_b0;
  int64_t lStack_a0;
  int *apiStack_98 [2];
  void *puStack_88;
  void *puStack_80;
  uint64_t uStack_78;
  int64_t *plStack_70;
  uint64_t uStack_68;
  int64_t lStack_58;
  
  uStack_78 = 0xfffffffffffffffe;
  aiStackX_10[0] = 0;
  lVar13 = param_1 + 0x60830;
  FUN_1801c2360(lVar13,&plStack_b8);
  lVar8 = lStack_a0;
  uVar12 = 0;
LAB_1801a57e0:
  uVar14 = uStack_b0;
  if (uStack_b0 != *(uint64_t *)(param_1 + 0x60838)) {
    if ((*(int64_t *)(lVar8 + 0x10) != 0) && ((*(byte *)(lVar8 + 0x2e8) & 0xb) == 0xb)) {
      uVar12 = (uint64_t)((int)uVar12 + 1);
      pcStack_c8 = (code *)&unknown_var_1584_ptr;
      puStack_c0 = &unknown_var_3568_ptr;
      apiStack_d8[0] = aiStackX_10;
      FUN_1800b6f90(&unknown_var_1584_ptr,*(uint64_t *)(lVar8 + 0x10),apiStack_d8);
      if (pcStack_c8 != (code *)0x0) {
        (*pcStack_c8)(apiStack_d8,0,0);
      }
    }
    lVar11 = *plStack_b8;
    do {
      uVar14 = uVar14 + 1;
      lVar2 = (uVar14 & 0xffffffff) * 0x10;
      uVar3 = lVar2 + 8 + lVar11;
      if ((*(uint64_t *)(lVar2 + lVar11) & 0xffffffff00000000) == 0) {
        uVar3 = 0;
      }
      uStack_b0 = uVar14;
      if (uVar3 != 0) {
        lVar8 = *(int64_t *)(lVar11 + 8 + (uVar14 & 0xffffffff) * 0x10);
        break;
      }
    } while (uVar14 != plStack_b8[1]);
    goto LAB_1801a57e0;
  }
  ppiStackX_18 = (int **)CONCAT44(ppiStackX_18._4_4_,(int)uVar12);
  alStack_118[0] = 0;
  lStack_a0 = lVar8;
  alStack_118[0] = FUN_18062b420(system_memory_pool_ptr,0x40000,0xffffffff0000000d);
  LOCK();
  alStack_118[1] = 0;
  UNLOCK();
  uStack_108 = 0;
  uStack_12f = 0;
  uStack_12b = 0;
  uStack_129 = 0;
  plStack_120 = alStack_118;
  pppppppuStack_148 = &pppppppuStack_148;
  pppppppuStack_140 = &pppppppuStack_148;
  pppppppuStack_138 = (uint64_t *******)0x0;
  uStack_130 = 0;
  uStack_128 = 0;
  FUN_1801c2360(lVar13,&plStack_100);
  lVar11 = 0;
  lVar8 = lStack_e8;
LAB_1801a5924:
  uVar12 = uStack_f8;
  if (uStack_f8 != *(uint64_t *)(param_1 + 0x60838)) {
    if (((((*(uint *)(lVar8 + 0x2ac) & 0x8000) == 0) &&
         (ppppppuVar1 = *(uint64_t *******)(lVar8 + 0x110), ppppppuVar1 != (uint64_t ******)0x0)
         ) && (*(int64_t *)(*(int64_t *)(lVar8 + 0x20) + 0x318) != 0)) &&
       ((*(uint *)(lVar8 + 0x148) & 0x20000) == 0)) {
      ppppppuStack_e0 = ppppppuVar1;
      bVar16 = true;
      pppppppuVar7 = &pppppppuStack_148;
      pppppppuVar4 = pppppppuStack_138;
      while (pppppppuVar4 != (uint64_t *******)0x0) {
        bVar16 = ppppppuVar1 < pppppppuVar4[4];
        pppppppuVar7 = pppppppuVar4;
        if (bVar16) {
          pppppppuVar4 = (uint64_t *******)pppppppuVar4[1];
        }
        else {
          pppppppuVar4 = (uint64_t *******)*pppppppuVar4;
        }
      }
      pppppppuVar4 = pppppppuVar7;
      if (bVar16) {
        if (pppppppuVar7 == pppppppuStack_140) goto LAB_1801a59cb;
        pppppppuVar4 = (uint64_t *******)func_0x00018066b9a0(pppppppuVar7);
      }
      if (pppppppuVar4[4] < ppppppuVar1) {
LAB_1801a59cb:
        LOCK();
        plVar9 = plStack_120 + 1;
        lVar13 = *plVar9;
        *plVar9 = *plVar9 + 0x38;
        UNLOCK();
        uVar12 = lVar13 + 0xfU & 0xfffffffffffffff0;
        lVar13 = lVar11;
        if (uVar12 + 0x28 < 0x40000) {
          lVar13 = uVar12 + *plStack_120;
        }
        *(uint64_t *******)(lVar13 + 0x20) = ppppppuStack_e0;
        if (((uint64_t ********)pppppppuVar7 == &pppppppuStack_148) ||
           (lVar8 = 1, ppppppuVar1 < pppppppuVar7[4])) {
          lVar8 = lVar11;
        }
                    // WARNING: Subroutine does not return
        FUN_18066bdc0(lVar13,pppppppuVar7,&pppppppuStack_148,lVar8);
      }
    }
    lVar2 = *plStack_100;
    do {
      uVar12 = uVar12 + 1;
      uStack_f8 = uVar12;
      lVar5 = (uVar12 & 0xffffffff) * 0x10;
      lVar6 = lVar5 + 8 + lVar2;
      if ((*(uint64_t *)(lVar5 + lVar2) & 0xffffffff00000000) == 0) {
        lVar6 = lVar11;
      }
      if (lVar6 != 0) {
        lVar8 = *(int64_t *)(lVar2 + 8 + (uVar12 & 0xffffffff) * 0x10);
        lStack_e8 = lVar8;
        break;
      }
    } while (uVar12 != plStack_100[1]);
    goto LAB_1801a5924;
  }
  iVar15 = (int)ppiStackX_18;
  if ((0 < (int)uStack_128) &&
     (pppppppuVar7 = pppppppuStack_140, (uint64_t ********)pppppppuStack_140 != &pppppppuStack_148
     )) {
    do {
      iVar15 = iVar15 + 1;
      ppiStackX_18 = apiStack_98;
      puStack_88 = &unknown_var_1520_ptr;
      puStack_80 = &unknown_var_3488_ptr;
      apiStack_98[0] = aiStackX_10;
      FUN_180149bd0(pppppppuVar7[4],apiStack_98);
      pppppppuVar7 = (uint64_t *******)func_0x00018066bd70(pppppppuVar7);
    } while ((uint64_t ********)pppppppuVar7 != &pppppppuStack_148);
  }
  while (uVar10 = system_context_ptr, iVar15 != aiStackX_10[0]) {
    lVar8 = FUN_18005e890(system_context_ptr);
    if (lVar8 != 0) {
      plVar9 = (int64_t *)FUN_18005e890(uVar10);
      (**(code **)(*plVar9 + 0x20))(plVar9,0);
    }
  }
  if (*(int64_t *)(param_1 + 0x318) != 0) {
    FUN_1801c2360(lVar13,&plStack_70);
    lVar13 = lStack_58;
    uVar12 = uStack_68;
LAB_1801a5b51:
    if (uVar12 != *(uint64_t *)(param_1 + 0x60838)) {
      if (((*(uint *)(lVar13 + 0x2ac) & 0x8000) == 0) && (*(int64_t *)(lVar13 + 0x110) != 0)) {
        FUN_1802f28f0(lVar13,*(uint64_t *)(lVar13 + 0x20));
        plVar9 = *(int64_t **)(lVar13 + 0x10);
        if ((plVar9 != (int64_t *)0x0) && ((*(byte *)(lVar13 + 0x2e8) & 0xb) == 0xb)) {
          plStackX_20 = plVar9;
          (**(code **)(*plVar9 + 0x28))();
          uVar10 = FUN_180389a90(param_1 + 0x29a0,&plStackX_20);
          *(uint64_t *)(*(int64_t *)(lVar13 + 0x28) + 0x170) = uVar10;
          plVar9 = *(int64_t **)(param_1 + 0x29a8);
          if (plVar9 != (int64_t *)0x0) {
            (**(code **)(*plVar9 + 0x18))
                      (plVar9,*(uint64_t *)(*(int64_t *)(lVar13 + 0x28) + 0x170),lVar13 + 0x70);
            plVar9 = *(int64_t **)(param_1 + 0x29a8);
            if (plVar9 != (int64_t *)0x0) {
              (**(code **)(*plVar9 + 0x20))
                        (plVar9,*(uint64_t *)(*(int64_t *)(lVar13 + 0x28) + 0x170),
                         *(int32_t *)(lVar13 + 0x18));
            }
          }
        }
      }
      lVar8 = *plStack_70;
      do {
        uVar12 = uVar12 + 1;
        lVar2 = (uVar12 & 0xffffffff) * 0x10;
        lVar11 = lVar2 + 8 + lVar8;
        if ((*(uint64_t *)(lVar2 + lVar8) & 0xffffffff00000000) == 0) {
          lVar11 = 0;
        }
        if (lVar11 != 0) {
          lVar13 = *(int64_t *)(lVar8 + 8 + (uVar12 & 0xffffffff) * 0x10);
          break;
        }
      } while (uVar12 != plStack_70[1]);
      goto LAB_1801a5b51;
    }
  }
  if (alStack_118[0] == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}







