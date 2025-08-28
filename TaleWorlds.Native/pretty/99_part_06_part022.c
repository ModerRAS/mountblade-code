#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part022.c - 3 个函数

// 函数: void FUN_1803ba550(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
void FUN_1803ba550(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                  char param_5,uint *param_6)

{
  uint64_t uVar1;
  int64_t *plVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  void *puVar8;
  void *puVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  bool bVar14;
  void *puStack_b8;
  int64_t lStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  int64_t lStack_98;
  uint64_t uStack_90;
  int64_t *plStack_88;
  void *puStack_80;
  int64_t lStack_78;
  int32_t uStack_68;
  
  uStack_90 = 0xfffffffffffffffe;
  FUN_1803bd8e0();
  if (*(char *)(param_1 + 0x39) == '\0') {
    FUN_1803bdc20(param_1,param_2,param_3);
    FUN_1803bd8e0(param_1,param_2);
    lStack_98 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x268);
    FUN_1803bcdd0(param_1,param_2);
    FUN_1803bb160(param_1,param_2);
    FUN_1803baaa0(param_1,param_2);
    FUN_1802f5e40(&plStack_88);
    FUN_1803817c0(&plStack_88,param_2,*(uint64_t *)(*(int64_t *)(param_1 + 0x28) + 0x268));
    FUN_1802eced0(*(uint64_t *)(param_1 + 0x28),&plStack_88);
    puStack_80 = &system_data_buffer_ptr;
    if (lStack_78 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    uVar11 = 0;
    lStack_78 = 0;
    uStack_68 = 0;
    puStack_80 = &system_state_ptr;
    if (plStack_88 != (int64_t *)0x0) {
      (**(code **)(*plStack_88 + 0x38))();
    }
    FUN_1803bbc50(param_1,param_2);
    FUN_1803bca60(param_1,param_2,param_4);
    FUN_1803ba280(param_1,param_2,param_4);
    if (param_5 == '\0') {
      puStack_b8 = &system_data_buffer_ptr;
      uStack_a0 = 0;
      lStack_b0 = 0;
      uStack_a8 = 0;
      uVar1 = *(uint64_t *)(param_1 + 0x28);
      puVar8 = &system_buffer_ptr;
      if (*(void **)(param_4 + 8) != (void *)0x0) {
        puVar8 = *(void **)(param_4 + 8);
      }
      CoreSystem_ConfigValidator0(&puStack_b8,puVar8);
      LOCK();
      uVar12 = *param_6;
      *param_6 = *param_6 + 1;
      UNLOCK();
      uVar5 = uVar12 >> 0xc;
      uVar10 = (uint64_t)uVar5;
      if (*(int64_t *)(param_6 + (uint64_t)uVar5 * 2 + 2) == 0) {
        lVar6 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x30000,0);
        LOCK();
        bVar14 = *(int64_t *)(param_6 + uVar10 * 2 + 2) == 0;
        if (bVar14) {
          *(int64_t *)(param_6 + uVar10 * 2 + 2) = lVar6;
        }
        UNLOCK();
        if (bVar14) {
          FUN_1803c2540(param_6,uVar5 << 0xc);
          LOCK();
          *(int8_t *)(uVar10 + 0x108 + (int64_t)param_6) = 0;
          UNLOCK();
        }
        else {
          if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          do {
          } while (*(char *)(uVar10 + 0x108 + (int64_t)param_6) != '\0');
        }
      }
      else {
        do {
        } while (*(char *)(uVar10 + 0x108 + (int64_t)param_6) != '\0');
      }
      lVar6 = *(int64_t *)(param_6 + uVar10 * 2 + 2);
      lVar7 = (uint64_t)(uVar12 + uVar5 * -0x1000) * 0x30;
      *(uint64_t *)(lVar6 + lVar7) = uVar1;
      *(uint64_t *)(lVar6 + 8 + lVar7) = param_2;
      SystemCore_ConfigurationHandler0(lVar7 + lVar6 + 0x10,&puStack_b8);
      puStack_b8 = &system_data_buffer_ptr;
      if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      lStack_b0 = 0;
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
      puStack_b8 = &system_state_ptr;
    }
    else {
      FUN_1803bb5f0(param_1,param_2);
    }
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x268) == 0) {
      FUN_1803bc6d0(param_1,param_2,param_3,param_4,param_5,param_6);
    }
    else {
      FUN_1803bbff0();
    }
    FUN_1803be690(param_1,param_2);
    FUN_1802ed3b0(*(uint64_t *)(param_1 + 0x28));
    FUN_1802ec150(*(uint64_t *)(param_1 + 0x28),1);
    lVar6 = *(int64_t *)(param_1 + 0x28);
    uVar10 = uVar11;
    uVar13 = uVar11;
    if (*(int64_t *)(lVar6 + 0x1c8) - *(int64_t *)(lVar6 + 0x1c0) >> 3 != 0) {
      do {
        lVar6 = *(int64_t *)(uVar13 + *(int64_t *)(lVar6 + 0x1c0));
        FUN_180382d30(lVar6 + 0x270,lVar6,lVar6 + 0x70);
        FUN_1802ebec0(lVar6);
        if (((*(int64_t *)(lVar6 + 0x20) != 0) &&
            (lVar7 = *(int64_t *)(*(int64_t *)(lVar6 + 0x28) + 0x170), lVar7 != 0)) &&
           (plVar2 = *(int64_t **)(*(int64_t *)(lVar6 + 0x20) + 0x29a8), plVar2 != (int64_t *)0x0
           )) {
          (**(code **)(*plVar2 + 0x18))(plVar2,lVar7,lVar6 + 0x70);
        }
        if ((((*(uint *)(lVar6 + 0x2ac) & 0x1000) == 0) &&
            (lVar7 = *(int64_t *)(lVar6 + 0x168), lVar7 != 0)) &&
           (*(short *)(lVar7 + 0x2b0) = *(short *)(lVar7 + 0x2b0) + 1,
           *(int64_t *)(lVar7 + 0x168) != 0)) {
          func_0x0001802eeba0();
        }
        FUN_1802eebe0(lVar6);
        *(byte *)(lVar6 + 0x2e8) = *(byte *)(lVar6 + 0x2e8) & 0xef;
        uVar12 = (int)uVar10 + 1;
        lVar6 = *(int64_t *)(param_1 + 0x28);
        uVar10 = (uint64_t)uVar12;
        uVar13 = uVar13 + 8;
      } while ((uint64_t)(int64_t)(int)uVar12 <
               (uint64_t)(*(int64_t *)(lVar6 + 0x1c8) - *(int64_t *)(lVar6 + 0x1c0) >> 3));
    }
    *(byte *)(lVar6 + 0x2e8) = *(byte *)(lVar6 + 0x2e8) & 0xef;
    lVar6 = *(int64_t *)(param_1 + 0x28);
    if ((lStack_98 != *(int64_t *)(lVar6 + 0x268)) && (*(int64_t *)(lVar6 + 0x168) == 0)) {
      puVar8 = &system_buffer_ptr;
      if (*(void **)(lStack_98 + 0x290) != (void *)0x0) {
        puVar8 = *(void **)(lStack_98 + 0x290);
      }
      puVar9 = &system_buffer_ptr;
      if (*(void **)(lVar6 + 0x290) != (void *)0x0) {
        puVar9 = *(void **)(lVar6 + 0x290);
      }
      SystemCore_Allocator(&ui_system_data_1104_ptr,puVar9,puVar8);
      lVar6 = *(int64_t *)(param_1 + 0x28);
    }
    if ((*(int64_t *)(lVar6 + 0x270) == 0) ||
       ((*(byte *)(*(int64_t *)(lVar6 + 0x270) + 0x18) & 0x38) == 0)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    bVar3 = false;
    uVar10 = uVar11;
    uVar13 = uVar11;
    if (*(int64_t *)(lVar6 + 0x208) - *(int64_t *)(lVar6 + 0x200) >> 3 != 0) {
      do {
        cVar4 = (**(code **)(**(int64_t **)(uVar10 + *(int64_t *)(lVar6 + 0x200)) + 0x128))();
        if (cVar4 != '\0') {
          bVar3 = true;
          break;
        }
        uVar12 = (int)uVar13 + 1;
        lVar6 = *(int64_t *)(param_1 + 0x28);
        uVar10 = uVar10 + 8;
        uVar13 = (uint64_t)uVar12;
      } while ((uint64_t)(int64_t)(int)uVar12 <
               (uint64_t)(*(int64_t *)(lVar6 + 0x208) - *(int64_t *)(lVar6 + 0x200) >> 3));
    }
    if ((bVar14) || (bVar3)) {
      lVar6 = *(int64_t *)(param_1 + 0x28);
      *(int8_t *)(lVar6 + 0x2e4) = 1;
      uVar10 = uVar11;
      if (*(int64_t *)(lVar6 + 0x1c8) - *(int64_t *)(lVar6 + 0x1c0) >> 3 != 0) {
        do {
          FUN_1802e8580(*(uint64_t *)(uVar10 + *(int64_t *)(lVar6 + 0x1c0)),1);
          uVar12 = (int)uVar11 + 1;
          uVar11 = (uint64_t)uVar12;
          uVar10 = uVar10 + 8;
        } while ((uint64_t)(int64_t)(int)uVar12 <
                 (uint64_t)(*(int64_t *)(lVar6 + 0x1c8) - *(int64_t *)(lVar6 + 0x1c0) >> 3));
      }
    }
    else if (*(char *)(*(int64_t *)(param_1 + 0x28) + 0x2e4) != '\x02') {
      *(int8_t *)(*(int64_t *)(param_1 + 0x28) + 0x2e4) = 0;
    }
  }
  return;
}






// 函数: void FUN_1803baaa0(int64_t param_1,int64_t param_2)
void FUN_1803baaa0(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  float fVar2;
  char *pcVar3;
  int64_t lVar4;
  int64_t lVar5;
  char *pcVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int8_t auVar12 [16];
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int32_t uStack_ec;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int32_t uStack_cc;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  int32_t uStack_9c;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int32_t uStack_4c;
  char *pcVar7;
  
  lVar4 = *(int64_t *)(param_1 + 0x28);
  fVar9 = *(float *)(lVar4 + 0x30);
  fVar11 = *(float *)(lVar4 + 0x34);
  fVar2 = *(float *)(lVar4 + 0x38);
  uStack_108._0_4_ = *(float *)(lVar4 + 0x40);
  uStack_108._4_4_ = *(float *)(lVar4 + 0x44);
  uStack_100._0_4_ = *(float *)(lVar4 + 0x48);
  uStack_100._4_4_ = *(int32_t *)(lVar4 + 0x4c);
  fStack_f8 = *(float *)(lVar4 + 0x50);
  fStack_f4 = *(float *)(lVar4 + 0x54);
  fStack_f0 = *(float *)(lVar4 + 0x58);
  uStack_ec = *(int32_t *)(lVar4 + 0x5c);
  uStack_e8 = *(uint64_t *)(lVar4 + 0x60);
  uStack_e0 = *(uint64_t *)(lVar4 + 0x68);
  fVar8 = fVar9 * fVar9 + fVar11 * fVar11 + fVar2 * fVar2;
  auVar12 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
  fVar10 = auVar12._0_4_;
  fVar8 = fVar10 * 0.5 * (3.0 - fVar8 * fVar10 * fVar10);
  uStack_110 = CONCAT44(*(int32_t *)(lVar4 + 0x3c),fVar2 * fVar8);
  uStack_118 = CONCAT44(fVar11 * fVar8,fVar9 * fVar8);
  fVar9 = uStack_108._4_4_ * uStack_108._4_4_ + (float)uStack_108 * (float)uStack_108 +
          (float)uStack_100 * (float)uStack_100;
  auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
  fVar11 = auVar12._0_4_;
  fVar9 = fVar11 * 0.5 * (3.0 - fVar9 * fVar11 * fVar11);
  uStack_108._4_4_ = uStack_108._4_4_ * fVar9;
  uStack_108._0_4_ = (float)uStack_108 * fVar9;
  uStack_100._0_4_ = (float)uStack_100 * fVar9;
  fVar9 = fStack_f4 * fStack_f4 + fStack_f8 * fStack_f8 + fStack_f0 * fStack_f0;
  auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
  fVar11 = auVar12._0_4_;
  fVar9 = fVar11 * 0.5 * (3.0 - fVar9 * fVar11 * fVar11);
  fStack_f8 = fStack_f8 * fVar9;
  fStack_f4 = fStack_f4 * fVar9;
  fStack_f0 = fStack_f0 * fVar9;
  pcVar6 = "transform";
  do {
    pcVar7 = pcVar6;
    pcVar6 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  for (puVar1 = *(uint64_t **)(param_2 + 0x30); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[0xb]) {
    pcVar6 = (char *)*puVar1;
    if (pcVar6 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar6 = (char *)0x180d48d24;
    }
    else {
      pcVar3 = (char *)puVar1[2];
    }
    if (pcVar3 == pcVar7 + -0x180a2354f) {
      pcVar3 = pcVar3 + (int64_t)pcVar6;
      if (pcVar3 <= pcVar6) {
LAB_1803bacf4:
        RenderingSystem_LightSystem(lVar4 + 0x30,&fStack_d8);
        StringProcessor(puVar1,&processed_var_8408_ptr,&fStack_d8);
        StringProcessor(puVar1,&processed_var_8872_ptr,&uStack_e8);
        uStack_98 = 0x3f800000;
        uStack_90 = 0;
        uStack_b8 = 0x3f80000000000000;
        uStack_b0 = 0;
        uStack_c8 = 0x3f800000;
        uStack_c0 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        fStack_a8 = 0.0;
        fStack_a4 = 0.0;
        fStack_a0 = 1.0;
        uStack_9c = 0;
        lVar4 = FUN_180631cc0(puVar1,0,&uStack_98);
        if (lVar4 != 0) {
          FUN_180084000(&uStack_98);
          SystemSecurityManager(&uStack_118,&uStack_98);
          goto LAB_1803baff3;
        }
        lVar4 = FUN_180631de0(puVar1,&ui_system_data_1408_ptr,&uStack_c8);
        if (lVar4 == 0) {
          lVar4 = FUN_180631de0(puVar1,&ui_system_data_1376_ptr,&uStack_c8);
          if (lVar4 != 0) goto LAB_1803bafd7;
          lVar4 = StringProcessor(puVar1,&ui_system_data_1352_ptr,&uStack_88);
          if (lVar4 != 0) {
            uStack_78 = 0x3f800000;
            uStack_70 = 0;
            uStack_68 = 0x3f80000000000000;
            uStack_60 = 0;
            fStack_58 = 0.0;
            fStack_54 = 0.0;
            fStack_50 = 1.0;
            uStack_4c = 0;
            FUN_180085c10(&uStack_78,(int32_t)uStack_80);
            FUN_180085970(&uStack_78,(int32_t)uStack_88);
            FUN_180085ac0(&uStack_78,uStack_88._4_4_);
            uStack_118 = uStack_78;
            uStack_110 = uStack_70;
            uStack_108._0_4_ = (float)uStack_68;
            uStack_108._4_4_ = uStack_68._4_4_;
            fStack_f8 = fStack_58;
            fStack_f4 = fStack_54;
            fStack_f0 = fStack_50;
            uStack_ec = uStack_4c;
            uStack_100._0_4_ = (float)uStack_60;
            uStack_100._4_4_ = uStack_60._4_4_;
          }
        }
        else {
          uStack_118 = uStack_c8;
          uStack_110 = uStack_c0;
          uStack_108._0_4_ = (float)uStack_b8;
          uStack_108._4_4_ = uStack_b8._4_4_;
          uStack_100._0_4_ = (float)uStack_b0;
          uStack_100._4_4_ = uStack_b0._4_4_;
          fStack_f8 = fStack_a8;
          fStack_f4 = fStack_a4;
          fStack_f0 = fStack_a0;
          uStack_ec = uStack_9c;
          FUN_1802bfe50(&uStack_118);
        }
        goto LAB_1803baff3;
      }
      lVar5 = (int64_t)&ui_system_data_1424_ptr - (int64_t)pcVar6;
      while (*pcVar6 == pcVar6[lVar5]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar3 <= pcVar6) goto LAB_1803bacf4;
      }
    }
  }
  pcVar6 = "position";
  do {
    pcVar7 = pcVar6;
    pcVar6 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  puVar1 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar1 == (uint64_t *)0x0) {
      return;
    }
    pcVar6 = (char *)*puVar1;
    if (pcVar6 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar6 = (char *)0x180d48d24;
    }
    else {
      pcVar3 = (char *)puVar1[2];
    }
    if (pcVar3 == pcVar7 + -0x180a16807) {
      pcVar3 = pcVar3 + (int64_t)pcVar6;
      if (pcVar3 <= pcVar6) {
LAB_1803baee4:
        uStack_118 = 0x3f800000;
        uStack_110 = 0;
        fStack_f8 = 0.0;
        fStack_f4 = 0.0;
        fStack_f0 = 1.0;
        uStack_ec = 0;
        uStack_108._0_4_ = 0.0;
        uStack_108._4_4_ = 1.0;
        uStack_100._0_4_ = 0.0;
        uStack_100._4_4_ = 0;
        fStack_d8 = 1.0;
        fStack_d4 = 1.0;
        fStack_d0 = 1.0;
        uStack_cc = 0x7f7fffff;
        uStack_e8 = 0;
        uStack_e0 = 0x3f80000000000000;
        StringProcessor(param_2,&processed_var_8872_ptr,&uStack_e8);
        StringProcessor(param_2,&processed_var_8408_ptr,&fStack_d8);
        uStack_98 = 0x3f800000;
        uStack_90 = 0;
        uStack_c8 = 0x3f800000;
        uStack_c0 = 0;
        uStack_b8 = 0x3f80000000000000;
        uStack_b0 = 0;
        fStack_a8 = 0.0;
        fStack_a4 = 0.0;
        fStack_a0 = 1.0;
        uStack_9c = 0;
        lVar4 = FUN_180631cc0(param_2,0,&uStack_98);
        if (lVar4 == 0) {
          lVar4 = FUN_180631de0(param_2,&ui_system_data_1376_ptr,&uStack_c8);
          if ((lVar4 != 0) || (lVar4 = FUN_180631de0(param_2,&ui_system_data_1408_ptr,&uStack_c8), lVar4 != 0)
             ) {
LAB_1803bafd7:
            uStack_118 = uStack_c8;
            uStack_110 = uStack_c0;
            uStack_108._0_4_ = (float)uStack_b8;
            uStack_108._4_4_ = uStack_b8._4_4_;
            fStack_f8 = fStack_a8;
            fStack_f4 = fStack_a4;
            fStack_f0 = fStack_a0;
            uStack_ec = uStack_9c;
            uStack_100._0_4_ = (float)uStack_b0;
            uStack_100._4_4_ = uStack_b0._4_4_;
          }
        }
        else {
          SystemSecurityManager(&uStack_118,&uStack_98);
        }
LAB_1803baff3:
        lVar4 = *(int64_t *)(param_1 + 0x28);
        uStack_118._0_4_ = (float)uStack_118 * fStack_d8;
        uStack_118._4_4_ = uStack_118._4_4_ * fStack_d8;
        fVar9 = (float)uStack_110 * fStack_d8;
        uStack_108._0_4_ = (float)uStack_108 * fStack_d4;
        uStack_108._4_4_ = uStack_108._4_4_ * fStack_d4;
        uStack_100._0_4_ = (float)uStack_100 * fStack_d4;
        fStack_f0 = fStack_f0 * fStack_d0;
        fStack_f4 = fStack_f4 * fStack_d0;
        fStack_f8 = fStack_f8 * fStack_d0;
        uStack_110 = CONCAT44(uStack_110._4_4_,fVar9);
        if ((((((float)uStack_e8 != *(float *)(lVar4 + 0x60)) ||
              (uStack_e8._4_4_ != *(float *)(lVar4 + 100))) ||
             ((float)uStack_e0 != *(float *)(lVar4 + 0x68))) ||
            (((((float)uStack_118 != *(float *)(lVar4 + 0x30) ||
               (uStack_118._4_4_ != *(float *)(lVar4 + 0x34))) ||
              ((fVar9 != *(float *)(lVar4 + 0x38) ||
               (((float)uStack_108 != *(float *)(lVar4 + 0x40) ||
                (uStack_108._4_4_ != *(float *)(lVar4 + 0x44))))))) ||
             ((float)uStack_100 != *(float *)(lVar4 + 0x48))))) ||
           (((fStack_f8 != *(float *)(lVar4 + 0x50) || (fStack_f4 != *(float *)(lVar4 + 0x54))) ||
            (fStack_f0 != *(float *)(lVar4 + 0x58))))) {
          *(uint64_t *)(lVar4 + 0x30) = uStack_118;
          *(uint64_t *)(lVar4 + 0x38) = uStack_110;
          *(uint64_t *)(lVar4 + 0x40) = uStack_108;
          *(uint64_t *)(lVar4 + 0x48) = uStack_100;
          *(float *)(lVar4 + 0x50) = fStack_f8;
          *(float *)(lVar4 + 0x54) = fStack_f4;
          *(float *)(lVar4 + 0x58) = fStack_f0;
          *(int32_t *)(lVar4 + 0x5c) = uStack_ec;
          *(float *)(lVar4 + 0x60) = (float)uStack_e8;
          *(float *)(lVar4 + 100) = uStack_e8._4_4_;
          *(float *)(lVar4 + 0x68) = (float)uStack_e0;
          *(int32_t *)(lVar4 + 0x6c) = uStack_e0._4_4_;
          RenderingSystem_CameraController();
          UtilitiesSystem_StringProcessor();
        }
        return;
      }
      lVar4 = (int64_t)&processed_var_8872_ptr - (int64_t)pcVar6;
      while (*pcVar6 == pcVar6[lVar4]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar3 <= pcVar6) goto LAB_1803baee4;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803bb160(int64_t param_1,int64_t param_2)
void FUN_1803bb160(int64_t param_1,int64_t param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  uint64_t uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int64_t lVar9;
  int iVar10;
  uint64_t *puVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  void *puStack_50;
  int64_t lStack_48;
  int iStack_40;
  uint64_t uStack_38;
  
  pcVar12 = "tags";
  do {
    pcVar13 = pcVar12;
    pcVar12 = pcVar13 + 1;
  } while (*pcVar12 != '\0');
  puVar11 = *(uint64_t **)(param_2 + 0x30);
  if (puVar11 != (uint64_t *)0x0) {
    pcVar12 = (char *)0x0;
    do {
      pcVar6 = (char *)*puVar11;
      if (pcVar6 == (char *)0x0) {
        pcVar6 = (char *)0x180d48d24;
        pcVar2 = pcVar12;
      }
      else {
        pcVar2 = (char *)puVar11[2];
      }
      if (pcVar2 == pcVar13 + -0x180a23573) {
        pcVar2 = pcVar2 + (int64_t)pcVar6;
        if (pcVar2 <= pcVar6) {
LAB_1803bb200:
          pcVar13 = "tag";
          do {
            pcVar6 = pcVar13;
            pcVar13 = pcVar6 + 1;
          } while (*pcVar13 != '\0');
          pcVar13 = (char *)puVar11[6];
          do {
            pcVar2 = pcVar12;
            pcVar14 = pcVar12;
            if (pcVar13 == (char *)0x0) {
LAB_1803bb551:
              lVar9 = *(int64_t *)(param_1 + 0x28);
              if (pcVar2 != (char *)0x0) {
                CoreMemoryPoolProcessor(lVar9 + 0xd0,pcVar14);
              }
              if ((int)pcVar14 != 0) {
                    // WARNING: Subroutine does not return
                memcpy(*(uint64_t *)(lVar9 + 0xd8),pcVar2,pcVar14);
              }
              *(int32_t *)(lVar9 + 0xe0) = 0;
              if (*(int64_t *)(lVar9 + 0xd8) != 0) {
                pcVar14[*(int64_t *)(lVar9 + 0xd8)] = '\0';
              }
              *(int32_t *)(lVar9 + 0xec) = 0;
              if (pcVar2 == (char *)0x0) {
                return;
              }
                    // WARNING: Subroutine does not return
              CoreMemoryPoolInitializer(pcVar2);
            }
            pcVar7 = *(char **)pcVar13;
            if (pcVar7 == (char *)0x0) {
              pcVar7 = (char *)0x180d48d24;
              pcVar5 = pcVar12;
            }
            else {
              pcVar5 = *(char **)(pcVar13 + 0x10);
            }
            if (pcVar5 == pcVar6 + -0x180a2356f) {
              pcVar5 = pcVar5 + (int64_t)pcVar7;
              pcVar3 = pcVar12;
              if (pcVar5 <= pcVar7) {
LAB_1803bb2c0:
                do {
                  puStack_50 = &system_data_buffer_ptr;
                  uStack_38 = 0;
                  lStack_48 = 0;
                  iStack_40 = 0;
                  pcVar6 = "name";
                  do {
                    pcVar7 = pcVar6;
                    pcVar6 = pcVar7 + 1;
                  } while (*pcVar6 != '\0');
                  for (puVar11 = *(uint64_t **)(pcVar13 + 0x40); puVar11 != (uint64_t *)0x0;
                      puVar11 = (uint64_t *)puVar11[6]) {
                    pcVar6 = (char *)*puVar11;
                    if (pcVar6 == (char *)0x0) {
                      pcVar6 = (char *)0x180d48d24;
                      pcVar5 = pcVar12;
                    }
                    else {
                      pcVar5 = (char *)puVar11[2];
                    }
                    if (pcVar5 == pcVar7 + -0x180a03a83) {
                      pcVar5 = pcVar5 + (int64_t)pcVar6;
                      if (pcVar5 <= pcVar6) {
LAB_1803bb347:
                        lVar9 = 0x180d48d24;
                        if (puVar11[1] != 0) {
                          lVar9 = puVar11[1];
                        }
                        CoreSystem_ConfigValidator0(&puStack_50,lVar9);
                        break;
                      }
                      lVar9 = (int64_t)&system_data_3a84 - (int64_t)pcVar6;
                      while (*pcVar6 == pcVar6[lVar9]) {
                        pcVar6 = pcVar6 + 1;
                        if (pcVar5 <= pcVar6) goto LAB_1803bb347;
                      }
                    }
                  }
                  iVar10 = (int)pcVar14;
                  if (0 < iVar10) {
                    if (iVar10 + 1U != 0) {
                      uVar1 = iVar10 + 2;
                      if (pcVar2 == (char *)0x0) {
                        if ((int)uVar1 < 0x10) {
                          uVar1 = 0x10;
                        }
                        pcVar2 = (char *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar1,0x13);
                        *pcVar2 = '\0';
                        uVar4 = CoreMemoryPoolCleaner(pcVar2);
                        pcVar3 = (char *)(uVar4 & 0xffffffff);
                      }
                      else if ((uint)pcVar3 < uVar1) {
                        pcVar2 = (char *)DataValidator(system_memory_pool_ptr,pcVar2,uVar1,0x10,0x13);
                        pcVar3 = (char *)CoreMemoryPoolCleaner(pcVar2);
                      }
                    }
                    (pcVar14 + (int64_t)pcVar2)[0] = ' ';
                    (pcVar14 + (int64_t)pcVar2)[1] = '\0';
                    pcVar14 = (char *)(uint64_t)(iVar10 + 1U);
                  }
                  if (0 < iStack_40) {
                    iVar10 = iStack_40 + (int)pcVar14;
                    if (iVar10 != 0) {
                      if (pcVar2 == (char *)0x0) {
                        iVar10 = iVar10 + 1;
                        if (iVar10 < 0x10) {
                          iVar10 = 0x10;
                        }
                        pcVar2 = (char *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar10,0x13);
                        *pcVar2 = '\0';
                      }
                      else {
                        if (iVar10 + 1U <= (uint)pcVar3) goto LAB_1803bb478;
                        pcVar2 = (char *)DataValidator(system_memory_pool_ptr,pcVar2,iVar10 + 1U,0x10,0x13);
                      }
                      CoreMemoryPoolCleaner(pcVar2);
                    }
LAB_1803bb478:
                    // WARNING: Subroutine does not return
                    memcpy(pcVar14 + (int64_t)pcVar2,lStack_48,(int64_t)(iStack_40 + 1));
                  }
                  puStack_50 = &system_data_buffer_ptr;
                  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
                    CoreMemoryPoolInitializer();
                  }
                  lStack_48 = 0;
                  uStack_38 = uStack_38 & 0xffffffff00000000;
                  puStack_50 = &system_state_ptr;
                  pcVar6 = "tag";
                  do {
                    pcVar7 = pcVar6;
                    pcVar6 = pcVar7 + 1;
                  } while (*pcVar6 != '\0');
                  for (pcVar6 = *(char **)(pcVar13 + 0x58); pcVar13 = pcVar12, pcVar6 != (char *)0x0
                      ; pcVar6 = *(char **)(pcVar6 + 0x58)) {
                    pcVar5 = *(char **)pcVar6;
                    if (pcVar5 == (char *)0x0) {
                      pcVar5 = (char *)0x180d48d24;
                      pcVar8 = pcVar12;
                    }
                    else {
                      pcVar8 = *(char **)(pcVar6 + 0x10);
                    }
                    if (pcVar8 == pcVar7 + -0x180a2356f) {
                      pcVar8 = pcVar8 + (int64_t)pcVar5;
                      pcVar13 = pcVar6;
                      if (pcVar8 <= pcVar5) break;
                      lVar9 = (int64_t)&ui_system_data_1456_ptr - (int64_t)pcVar5;
                      while (*pcVar5 == pcVar5[lVar9]) {
                        pcVar5 = pcVar5 + 1;
                        if (pcVar8 <= pcVar5) goto LAB_1803bb536;
                      }
                    }
                  }
LAB_1803bb536:
                  if (pcVar13 == (char *)0x0) goto LAB_1803bb551;
                } while( true );
              }
              lVar9 = (int64_t)&ui_system_data_1456_ptr - (int64_t)pcVar7;
              while (*pcVar7 == pcVar7[lVar9]) {
                pcVar7 = pcVar7 + 1;
                if (pcVar5 <= pcVar7) goto LAB_1803bb2c0;
              }
            }
            pcVar13 = *(char **)(pcVar13 + 0x58);
          } while( true );
        }
        lVar9 = (int64_t)&ui_system_data_1460_ptr - (int64_t)pcVar6;
        while (*pcVar6 == pcVar6[lVar9]) {
          pcVar6 = pcVar6 + 1;
          if (pcVar2 <= pcVar6) goto LAB_1803bb200;
        }
      }
      puVar11 = (uint64_t *)puVar11[0xb];
    } while (puVar11 != (uint64_t *)0x0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




