#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part492_sub001.c - 9 个函数

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part492.c - 9 个函数


// 函数: void FUN_18052dcf0(int64_t param_1,char param_2,int32_t param_3)
void FUN_18052dcf0(int64_t param_1,char param_2,int32_t param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  float *pfVar10;
  uint uVar11;
  int64_t *plVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  float fVar16;
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  int64_t *plStackX_8;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int32_t uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int32_t uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int32_t uStack_cc;
  int64_t *plStack_c8;
  int64_t *plStack_c0;
  uint64_t uStack_b8;
  int32_t uStack_b0;
  int8_t auStack_a8 [16];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint64_t uStack_88;
  int8_t auStack_80 [120];
  
  if (-1 < param_2) {
    uStack_88 = 0xfffffffffffffffe;
    lVar15 = *(int64_t *)(*(int64_t *)(param_1 + 0x658) + 0x208);
    lVar13 = (int64_t)param_2 * 0x1b0;
    if (0.0 < *(float *)(*(int64_t *)(lVar15 + 0x140) + 0x158 + lVar13)) {
      FUN_180534770(*(int64_t *)(param_1 + 0x658),auStack_a8,param_2);
      lVar14 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
      fVar16 = *(float *)(lVar14 + 0x70);
      fVar1 = *(float *)(lVar14 + 0x74);
      fVar2 = *(float *)(lVar14 + 0x80);
      fVar3 = *(float *)(lVar14 + 0x84);
      fVar4 = *(float *)(lVar14 + 0x90);
      fVar5 = *(float *)(lVar14 + 0x94);
      fVar6 = *(float *)(lVar14 + 0xa0);
      fVar7 = *(float *)(lVar14 + 0xa4);
      fVar21 = fStack_98 * *(float *)(lVar14 + 0x78) + fStack_94 * *(float *)(lVar14 + 0x88) +
               fStack_90 * *(float *)(lVar14 + 0x98) + *(float *)(lVar14 + 0xa8);
      lVar15 = *(int64_t *)(lVar15 + 0x140);
      uVar11 = *(uint *)(param_1 + 0x748) << 0xd ^ *(uint *)(param_1 + 0x748);
      uVar11 = uVar11 >> 0x11 ^ uVar11;
      uVar11 = uVar11 << 5 ^ uVar11;
      *(uint *)(param_1 + 0x748) = uVar11;
      fVar20 = (float)(uVar11 - 1) * 2.3283064e-10;
      fVar19 = 1.0 - fVar20;
      fStack_e0 = fVar19 * *(float *)(lVar15 + 0x150 + lVar13) +
                  fVar20 * *(float *)(lVar15 + 0x140 + lVar13);
      fStack_e4 = fVar19 * *(float *)(lVar15 + 0x14c + lVar13) +
                  fVar20 * *(float *)(lVar15 + 0x13c + lVar13);
      fStack_e8 = fVar19 * *(float *)(lVar15 + 0x148 + lVar13) +
                  fVar20 * *(float *)(lVar15 + 0x138 + lVar13);
      uStack_dc = 0x7f7fffff;
      pfVar10 = (float *)SystemFileHandler(auStack_a8,auStack_80,&fStack_e8);
      fStack_f0 = (fStack_90 + pfVar10[2]) * *(float *)(lVar14 + 0x98) + *(float *)(lVar14 + 0xa8);
      fStack_f4 = (fStack_98 + *pfVar10) * *(float *)(lVar14 + 0x74) +
                  (fStack_94 + pfVar10[1]) * *(float *)(lVar14 + 0x84) + *(float *)(lVar14 + 0xa4);
      fStack_f8 = (fStack_94 + pfVar10[1]) * *(float *)(lVar14 + 0x80) +
                  (fStack_98 + *pfVar10) * *(float *)(lVar14 + 0x70) + *(float *)(lVar14 + 0xa0);
      uStack_ec = 0x7f7fffff;
      fVar19 = fVar21 - fStack_f0;
      fStack_d4 = (fStack_98 * fVar1 + fStack_94 * fVar3 + fStack_90 * fVar5 + fVar7) - fStack_f4;
      fStack_d8 = (fStack_98 * fVar16 + fStack_94 * fVar2 + fStack_90 * fVar4 + fVar6) - fStack_f8;
      uStack_cc = 0x7f7fffff;
      auVar18._4_4_ = fVar21;
      auVar18._0_4_ = fVar19;
      auVar18._8_4_ = fVar21;
      auVar18._12_4_ = fVar21;
      auVar17._4_12_ = auVar18._4_12_;
      auVar17._0_4_ = fVar19 * fVar19 + fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4;
      auVar18 = rsqrtss(auVar17,ZEXT416((uint)auVar17._0_4_));
      fVar16 = auVar18._0_4_;
      fStack_d0 = fVar16 * 0.5 * (3.0 - auVar17._0_4_ * fVar16 * fVar16);
      fStack_d8 = fStack_d8 * fStack_d0;
      fStack_d4 = fStack_d0 * fStack_d4;
      fStack_d0 = fStack_d0 * fVar19;
      fVar16 = *(float *)(lVar15 + 0x158 + lVar13);
      fVar1 = *(float *)(*(int64_t *)(param_1 + 0x6d8) + 0x8c0);
      fStack_f8 = fStack_d8 * fVar16 * fVar1 + fStack_f8;
      fStack_f4 = fStack_d4 * fVar16 * fVar1 + fStack_f4;
      fStack_f0 = fStack_d0 * fVar16 * fVar1 + fStack_f0;
      plStack_c8 = (int64_t *)0x0;
      plStack_c0 = (int64_t *)0x0;
      uStack_b8 = 0;
      uStack_b0 = 3;
      plStackX_8 = *(int64_t **)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
      }
      FUN_1800b87c0(&plStack_c8,&plStackX_8);
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      uVar11 = *(uint *)(param_1 + 0x748) << 0xd ^ *(uint *)(param_1 + 0x748);
      uVar11 = uVar11 >> 0x11 ^ uVar11;
      uVar11 = uVar11 << 5 ^ uVar11;
      *(uint *)(param_1 + 0x748) = uVar11;
      FUN_18019fc10(*(uint64_t *)(param_1 + 0x660),&fStack_f8,&fStack_d8,(uVar11 - 1) % 0xc,
                    &plStack_c8,param_3);
      plVar9 = plStack_c0;
      plVar8 = plStack_c8;
      for (plVar12 = plStack_c8; plVar12 != plVar9; plVar12 = plVar12 + 1) {
        if ((int64_t *)*plVar12 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar12 + 0x38))();
        }
      }
      if (plVar8 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar8);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void SystemCore_Validator0(int64_t param_1,uint64_t param_2,char param_3,uint64_t param_4)
void SystemCore_Validator0(int64_t param_1,uint64_t param_2,char param_3,uint64_t param_4)

{
  ushort *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar5 = 0;
  iVar4 = (int)param_2;
  if (*(int *)(param_1 + 0x560) != iVar4) {
    *(int *)(param_1 + 0x560) = iVar4;
    if (*(char *)(param_1 + 0x984) != '\0') {
      if (((byte)(param_2 >> 0x1f) & 1) != 1) {
        lVar5 = *(int64_t *)(param_1 + 0x8d8) + 0x30a0 + (int64_t)iVar4 * 0xa60;
      }
      FUN_1805afdd0(*(uint64_t *)(param_1 + 0x738),param_1,lVar5,param_4,0,0xfffffffffffffffe);
    }
    if ((*(int64_t *)(param_1 + 0x6e0) != 0) && ((*(byte *)(param_1 + 0x56c) & 1) != 0)) {
      puVar1 = (ushort *)(*(int64_t *)(param_1 + 0x6e0) + 0x130);
      *puVar1 = *puVar1 | 0x200;
    }
    if (*(int *)(param_1 + 0x560) != -1) {
      func_0x00018051f9d0(param_1,0xbf800000,0);
    }
    lVar5 = *(int64_t *)(param_1 + 0x6d8);
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x8be) != '\0')) {
      FUN_1805401f0(lVar5,*(int *)(param_1 + 0x564) != -1,*(uint *)(param_1 + 0x56c) & 0xffffff01);
      lVar5 = *(int64_t *)(param_1 + 0x6d8);
    }
    if ((*(int *)(param_1 + 0x560) == -1) ||
       (*(int *)((int64_t)*(int *)(param_1 + 0x560) * 0xa60 + 0x3610 +
                *(int64_t *)(param_1 + 0x8d8)) != 2)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((lVar5 != 0) && (*(char *)(lVar5 + 0x8be) != '\0')) &&
       (*(int64_t *)(param_1 + 0x658) != 0)) {
      lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x8a8) + 0x260);
      if (bVar3) {
        puVar1 = (ushort *)(lVar5 + 0xa8);
        *puVar1 = *puVar1 | 2;
      }
      else {
        puVar1 = (ushort *)(lVar5 + 0xa8);
        *puVar1 = *puVar1 & 0xfffd;
      }
    }
    lVar5 = render_system_data_config;
    if ((param_3 != '\0') && (*(int *)(param_1 + 0x18) != 0)) {
      if (*(int *)(param_1 + 0x560) < 0) {
        iVar4 = *(int *)(param_1 + 0x18);
        if ((iVar4 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x30))(iVar4);
        }
        (**(code **)(lVar5 + 0xe0))(iVar4,0);
        if ((iVar4 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar4);
        }
      }
      else {
        iVar4 = *(int *)((int64_t)*(int *)(param_1 + 0x560) * 0xa60 + 0x30b8 +
                        *(int64_t *)(param_1 + 0x8d8));
        if ((iVar4 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x30))(iVar4);
        }
        iVar2 = *(int *)(param_1 + 0x18);
        if ((iVar2 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x30))(iVar2);
        }
        (**(code **)(lVar5 + 0xe0))(iVar2,iVar4);
        if ((iVar2 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar2);
        }
        if ((iVar4 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar4);
        }
      }
      lVar5 = render_system_data_config;
      if (*(int *)(param_1 + 0x568) == 1) {
        iVar4 = *(int *)(param_1 + 0x18);
        if ((iVar4 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x30))(iVar4);
        }
        (**(code **)(lVar5 + 0xd0))(iVar4);
        if ((iVar4 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar4);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18052e450(int64_t param_1,uint64_t param_2,char param_3,int32_t param_4)
void FUN_18052e450(int64_t param_1,uint64_t param_2,char param_3,int32_t param_4)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int64_t lVar7;
  uint *puVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint uVar12;
  bool bVar13;
  float fVar14;
  int aiStackX_8 [2];
  uint auStackX_10 [2];
  char cStackX_18;
  
  iVar9 = (int)param_2;
  lVar11 = (int64_t)iVar9;
  uVar12 = 0;
  iVar5 = *(int *)(param_1 + 0x564);
  if (iVar5 == iVar9) {
    return;
  }
  cStackX_18 = param_3;
  if (*(char *)(param_1 + 0x984) != '\0') {
    if (iVar5 < 0) {
      if (((byte)(param_2 >> 0x1f) & 1) != 1) {
        lVar10 = *(int64_t *)(param_1 + 0x20);
        lVar7 = *(int64_t *)(lVar11 * 0xa60 + 0x30c0 + *(int64_t *)(param_1 + 0x8d8));
        fVar14 = *(float *)(lVar10 + 0x14);
        fVar2 = *(float *)(lVar7 + 0x14);
        fVar3 = *(float *)(lVar10 + 0x10);
        fVar4 = *(float *)(lVar7 + 0x10);
        *(float *)(param_1 + 0x988) =
             (*(float *)(lVar10 + 0xc) - *(float *)(lVar7 + 0xc)) + *(float *)(param_1 + 0x988);
        *(float *)(param_1 + 0x98c) = (fVar3 - fVar4) + *(float *)(param_1 + 0x98c);
        *(float *)(param_1 + 0x990) = (fVar14 - fVar2) + *(float *)(param_1 + 0x990);
        func_0x000180598e50(*(uint64_t *)(param_1 + 0x20),*(int32_t *)(lVar7 + 0x34),lVar7,
                            param_4,0,0xfffffffffffffffe);
      }
    }
    else if (-1 < iVar5) {
      func_0x00018051a670();
      if (((*(int64_t *)(param_1 + 0x590) != 0) &&
          (iVar5 = *(int *)(*(int64_t *)(param_1 + 0x590) + 0x2450), iVar5 != -1)) &&
         (*(int *)((int64_t)iVar5 * 0x68 + 0x58 + render_system_config) == 0x25)) {
        lVar10 = *(int64_t *)(param_1 + 0x20);
        lVar7 = *(int64_t *)
                 ((int64_t)*(int *)(param_1 + 0x564) * 0xa60 + 0x30c0 +
                 *(int64_t *)(param_1 + 0x8d8));
        fVar14 = *(float *)(lVar7 + 0x34);
        if (fVar14 <= 3.1415927) {
          if (fVar14 < -3.1415927) {
            fVar14 = fVar14 + 6.2831855;
          }
        }
        else {
          fVar14 = fVar14 + -6.2831855;
        }
        *(float *)(lVar10 + 0x34) = fVar14;
        *(int32_t *)(lVar10 + 0x120) = *(int32_t *)(lVar7 + 0x120);
        *(int32_t *)(lVar10 + 0x124) = *(int32_t *)(lVar7 + 0x124);
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x564);
  *(int *)(param_1 + 0x564) = iVar9;
  if (*(int64_t *)(param_1 + 0x6e0) != 0) {
    puVar1 = (ushort *)(*(int64_t *)(param_1 + 0x6e0) + 0x130);
    *puVar1 = *puVar1 | 9;
    *(int32_t *)(*(int64_t *)(param_1 + 0x6e0) + 0x21a0) = 0xbf800000;
  }
  if (*(char *)(param_1 + 0x984) != '\0') {
    if (*(int *)(param_1 + 0x564) < 0) {
      lVar10 = *(int64_t *)(param_1 + 0x738);
      *(uint64_t *)(lVar10 + 0x160) = 0;
      *(int32_t *)(lVar10 + 0x1d4) = 0xffffffff;
      *(int8_t *)(lVar10 + 0x98) = 0;
      *(int32_t *)(lVar10 + 0x168) = 0;
      *(uint64_t *)(lVar10 + 0x1b8) = 0;
    }
    else {
      lVar10 = (int64_t)*(int *)(param_1 + 0x564) * 0xa60 + *(int64_t *)(param_1 + 0x8d8) + 0x30a0
      ;
      func_0x0001805afd50(*(uint64_t *)(param_1 + 0x738),lVar10,
                          *(int32_t *)(*(int64_t *)(lVar10 + 0x6d8) + 0x8c0));
    }
  }
  FUN_180530ca0(param_1,param_4);
  if (((*(int64_t *)(param_1 + 0x6d8) != 0) &&
      (*(char *)(*(int64_t *)(param_1 + 0x6d8) + 0x8be) != '\0')) &&
     ((*(uint *)(param_1 + 0x56c) & 0x800) != 0)) {
    FUN_18059b410(param_1 + 0x28);
  }
  uVar6 = *(uint *)(param_1 + 0x18);
  auStackX_10[0] = uVar6;
  if ((uVar6 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))(uVar6);
  }
  if (uVar6 != 0) {
    if (system_cache_buffer != 0) {
      (**(code **)(system_cache_buffer + 0x18))(uVar6);
    }
    bVar13 = ((byte)(param_2 >> 0x1f) & 1) == 1;
    if (bVar13) {
      auStackX_10[0] = 0;
      puVar8 = auStackX_10;
    }
    else {
      puVar8 = (uint *)FUN_180507810(lVar11 * 0xa60 + *(int64_t *)(param_1 + 0x8d8) + 0x30a0,
                                     aiStackX_8);
      uVar12 = *puVar8;
    }
    *puVar8 = 0;
    if (((bVar13) && (auStackX_10[0] != 0)) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))();
    }
    if (((!bVar13) && (aiStackX_8[0] != 0)) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))();
    }
    lVar10 = render_system_data_config;
    uVar6 = *(uint *)(param_1 + 0x18);
    auStackX_10[0] = uVar6;
    if ((uVar6 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(uVar6);
    }
    (**(code **)(lVar10 + 0xd8))(uVar6,uVar12);
    if ((uVar6 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(uVar6);
    }
    param_3 = cStackX_18;
    if ((uVar12 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(uVar12);
      param_3 = cStackX_18;
    }
  }
  lVar10 = *(int64_t *)(param_1 + 0x6d8);
  if (lVar10 != 0) {
    if (*(char *)(lVar10 + 0x8be) != '\0') {
      FUN_1805401f0(lVar10,*(int *)(param_1 + 0x564) != -1,*(uint *)(param_1 + 0x56c) & 0xffffff01);
      lVar10 = *(int64_t *)(param_1 + 0x6d8);
    }
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x8be) != '\0')) {
      FUN_18050a8c0(param_1);
    }
  }
  lVar10 = system_cache_buffer;
  if (-1 < *(int *)(param_1 + 0x564)) {
    func_0x00018051a670(param_1);
  }
  lVar7 = render_system_data_config;
  if (param_3 == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  if (iVar9 == -1) {
    lVar11 = (int64_t)iVar5 * 0xa60;
    uVar12 = *(uint *)(*(int64_t *)(param_1 + 0x8d8) + 0x30b8 + lVar11);
    auStackX_10[0] = uVar12;
    if ((uVar12 != 0) && (lVar10 != 0)) {
      (**(code **)(lVar10 + 0x30))(uVar12);
      lVar10 = system_cache_buffer;
    }
    iVar5 = *(int *)(param_1 + 0x18);
    aiStackX_8[0] = iVar5;
    if ((iVar5 != 0) && (lVar10 != 0)) {
      (**(code **)(lVar10 + 0x30))(iVar5);
    }
    (**(code **)(lVar7 + 0x60))(iVar5,uVar12);
    if ((iVar5 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar5);
    }
    if ((uVar12 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(uVar12);
    }
    lVar10 = render_system_data_config;
    if (*(int *)(*(int64_t *)(param_1 + 0x8d8) + 0x3608 + lVar11) != 1) goto LAB_18052eadb;
    uVar12 = *(uint *)(*(int64_t *)(param_1 + 0x8d8) + 0x30b8 + lVar11);
    auStackX_10[0] = uVar12;
    if ((uVar12 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(uVar12);
    }
    (**(code **)(lVar10 + 0xd0))(uVar12);
  }
  else {
    lVar11 = lVar11 * 0xa60;
    uVar12 = *(uint *)(lVar11 + 0x30b8 + *(int64_t *)(param_1 + 0x8d8));
    auStackX_10[0] = uVar12;
    if ((uVar12 != 0) && (lVar10 != 0)) {
      (**(code **)(lVar10 + 0x30))(uVar12);
      lVar10 = system_cache_buffer;
    }
    iVar5 = *(int *)(param_1 + 0x18);
    aiStackX_8[0] = iVar5;
    if ((iVar5 != 0) && (lVar10 != 0)) {
      (**(code **)(lVar10 + 0x30))(iVar5);
    }
    (**(code **)(lVar7 + 0x68))(iVar5,uVar12);
    if ((iVar5 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar5);
    }
    if ((uVar12 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(uVar12);
    }
    lVar10 = render_system_data_config;
    if (*(int *)(*(int64_t *)(param_1 + 0x8d8) + 0x3608 + lVar11) != 1) goto LAB_18052eadb;
    uVar12 = *(uint *)(*(int64_t *)(param_1 + 0x8d8) + 0x30b8 + lVar11);
    auStackX_10[0] = uVar12;
    if ((uVar12 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(uVar12);
    }
    (**(code **)(lVar10 + 0xd0))(uVar12);
  }
  if ((uVar12 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))(uVar12);
  }
LAB_18052eadb:
  lVar11 = render_system_data_config;
  if (*(int *)(param_1 + 0x568) == 1) {
    uVar12 = *(uint *)(param_1 + 0x18);
    auStackX_10[0] = uVar12;
    if ((uVar12 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(uVar12);
    }
    (**(code **)(lVar11 + 0xd0))(uVar12);
    if ((uVar12 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(uVar12);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18052eb50(int64_t param_1,int32_t *param_2,int32_t *param_3,char param_4,int param_5
void FUN_18052eb50(int64_t param_1,int32_t *param_2,int32_t *param_3,char param_4,int param_5
                  ,int param_6)

{
  int iVar1;
  int64_t lVar2;
  int32_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  lVar5 = *(int64_t *)(param_1 + 0x8f8);
  if (param_4 == '\0') {
    lVar4 = (int64_t)*(int *)(lVar5 + 0x9e0 + (int64_t)param_6 * 4) * 0x1f8;
    lVar2 = *(int64_t *)(lVar4 + 0x100 + lVar5);
    lVar4 = (int64_t)*(int *)(*(int64_t *)(lVar4 + 0xd8 + lVar5) + 100) * 0x170 + render_system_config;
    iVar1 = *(int *)(lVar2 + 0x16c);
    lVar5 = (int64_t)iVar1;
    if (*(char *)(*(int64_t *)(param_1 + 0x590) + 0x34bc) == '\0') {
      if ((iVar1 < 0) && (lVar5 = (int64_t)*(int *)(lVar2 + 0x15c), *(int *)(lVar2 + 0x15c) < 0)) {
        uVar3 = *(int32_t *)(render_system_config + 0x3c);
      }
      else {
        uVar3 = *(int32_t *)(lVar5 * 200 + 0x3c + render_system_config);
      }
    }
    else if ((iVar1 < 0) && (lVar5 = (int64_t)*(int *)(lVar2 + 0x15c), *(int *)(lVar2 + 0x15c) < 0)
            ) {
      uVar3 = *(int32_t *)(render_system_config + 0x40);
    }
    else {
      uVar3 = *(int32_t *)(lVar5 * 200 + 0x40 + render_system_config);
    }
    *param_2 = uVar3;
    *param_3 = *(int32_t *)(lVar4 + 0x168);
    return;
  }
  lVar5 = lVar5 + (int64_t)param_5 * 0x1f8;
  lVar2 = *(int64_t *)(lVar5 + 0x100);
  lVar4 = (int64_t)*(int *)(*(int64_t *)(lVar5 + 0xd8) + 100) * 0x170 + render_system_config;
  iVar1 = *(int *)(lVar2 + 0x16c);
  lVar5 = (int64_t)iVar1;
  if (*(char *)(*(int64_t *)(param_1 + 0x590) + 0x34bc) != '\0') {
    if ((iVar1 < 0) && (lVar5 = (int64_t)*(int *)(lVar2 + 0x15c), *(int *)(lVar2 + 0x15c) < 0)) {
      *param_2 = *(int32_t *)(render_system_config + 0x38);
      *param_3 = *(int32_t *)(lVar4 + 0x164);
      return;
    }
    *param_2 = *(int32_t *)(lVar5 * 200 + 0x38 + render_system_config);
    *param_3 = *(int32_t *)(lVar4 + 0x164);
    return;
  }
  if ((iVar1 < 0) && (lVar5 = (int64_t)*(int *)(lVar2 + 0x15c), *(int *)(lVar2 + 0x15c) < 0)) {
    *param_2 = *(int32_t *)(render_system_config + 0x34);
    *param_3 = *(int32_t *)(lVar4 + 0x164);
    return;
  }
  *param_2 = *(int32_t *)(lVar5 * 200 + 0x34 + render_system_config);
  *param_3 = *(int32_t *)(lVar4 + 0x164);
  return;
}






// 函数: void FUN_18052ed30(int64_t param_1,int64_t param_2)
void FUN_18052ed30(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  lVar1 = *(int64_t *)(param_1 + 0x660);
  SystemCore_Validator(param_2,2);
  if (*(int *)(param_2 + 0x40) < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint64_t *)(param_2 + 8);
  }
  FUN_180392600(lVar1 + 0x2a68,*(uint64_t *)(param_1 + 0x9d8),uVar2,
                *(int64_t *)(param_1 + 0x20) + 0xc,param_2 + 0x18,
                *(int32_t *)(*(int64_t *)(param_1 + 0x20) + 0x1d0),0x49742400);
  return;
}






// 函数: void FUN_18052edc0(int64_t param_1)
void FUN_18052edc0(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  char cVar7;
  
  lVar1 = *(int64_t *)(param_1 + 0x20);
  lVar2 = *(int64_t *)(param_1 + 0x6d8);
  if (*(int64_t **)(param_1 + 0x6e8) != (int64_t *)0x0) {
    cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0xd8))();
    if ((cVar7 == '\0') ||
       (cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0x80))(), cVar7 == '\0')) {
      plVar3 = *(int64_t **)(param_1 + 0x6e8);
      *(uint64_t *)(param_1 + 0x6e8) = 0;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
    }
    else {
      (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0xa8))
                (*(int64_t **)(param_1 + 0x6e8),lVar2 + 0x8e4);
    }
  }
  if (*(int64_t **)(param_1 + 0x6f0) != (int64_t *)0x0) {
    cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6f0) + 0xd8))();
    if ((cVar7 == '\0') ||
       (cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6f0) + 0x80))(), cVar7 == '\0')) {
      plVar3 = *(int64_t **)(param_1 + 0x6f0);
      *(uint64_t *)(param_1 + 0x6f0) = 0;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
    }
    else {
      (**(code **)(**(int64_t **)(param_1 + 0x6f0) + 0xa8))
                (*(int64_t **)(param_1 + 0x6f0),lVar1 + 0xc);
    }
  }
  uVar4 = *(int32_t *)(lVar1 + 0x10);
  uVar5 = *(int32_t *)(lVar1 + 0x14);
  uVar6 = *(int32_t *)(lVar1 + 0x18);
  *(int32_t *)(param_1 + 0x6f8) = *(int32_t *)(lVar1 + 0xc);
  *(int32_t *)(param_1 + 0x6fc) = uVar4;
  *(int32_t *)(param_1 + 0x700) = uVar5;
  *(int32_t *)(param_1 + 0x704) = uVar6;
  if (*(int64_t **)(param_1 + 0x6f0) != (int64_t *)0x0) {
    cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6f0) + 0xd8))();
    if ((cVar7 == '\0') ||
       (cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6f0) + 0x80))(), cVar7 == '\0')) {
      plVar3 = *(int64_t **)(param_1 + 0x6f0);
      *(uint64_t *)(param_1 + 0x6f0) = 0;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
    }
    else {
      (**(code **)(**(int64_t **)(param_1 + 0x6f0) + 0xb0))
                (*(int64_t **)(param_1 + 0x6f0),param_1 + 0x530);
    }
  }
  if (*(int64_t **)(param_1 + 0x6e8) != (int64_t *)0x0) {
    cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0xd8))();
    if ((cVar7 != '\0') &&
       (cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0x80))(), cVar7 != '\0')) {
      (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0xb0))
                (*(int64_t **)(param_1 + 0x6e8),param_1 + 0x530);
      return;
    }
    plVar3 = *(int64_t **)(param_1 + 0x6e8);
    *(uint64_t *)(param_1 + 0x6e8) = 0;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18052efb0(int64_t param_1)
void FUN_18052efb0(int64_t param_1)

{
  int64_t lVar1;
  int8_t auStack_1d8 [128];
  uint64_t uStack_158;
  uint64_t uStack_c8;
  
  uStack_158 = 0xfffffffffffffffe;
  uStack_c8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1d8;
  if (((*(int64_t *)(*(int64_t *)(param_1 + 0x8d8) + 0x87b398) -
        *(int64_t *)(*(int64_t *)(param_1 + 0x8d8) + 0x87b390) >> 3 != 0) &&
      (lVar1 = *(int64_t *)(param_1 + 0x20), (*(byte *)(lVar1 + 0x40) & 1) != 0)) &&
     ((0.0001 <= ABS(*(float *)(lVar1 + 0x1c)) || (0.0001 <= ABS(*(float *)(lVar1 + 0x20)))))) {
                    // WARNING: Subroutine does not return
    RenderingSystem_Renderer0(*(int32_t *)(lVar1 + 0x34));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_c8 ^ (uint64_t)auStack_1d8);
}






// 函数: void FUN_18052f590(int64_t param_1,float param_2,int64_t param_3,int64_t *param_4)
void FUN_18052f590(int64_t param_1,float param_2,int64_t param_3,int64_t *param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = *(uint *)(param_1 + 0x56c) >> 0xb;
  if (*(int *)(param_3 + 0x194) == 1) {
    if ((0.0 < param_2) && ((uVar3 & 1) != 0)) {
      FUN_1805984e0(*(uint64_t *)(param_1 + 0x20));
    }
    FUN_180598f80(*(uint64_t *)(param_1 + 0x20),*(uint64_t *)(param_1 + 0x8d8),param_2,param_3,0
                 );
    FUN_180522280(param_1,param_2,param_3);
    if ((*(int *)(param_1 + 0x568) == 1) &&
       ((*(uint *)(*(int64_t *)(param_1 + 0x20) + 8) >> 0xe & 1) != 0)) {
      if (param_4 == (int64_t *)0x0) {
        if (*(int *)(param_1 + 0x564) < 0) {
          FUN_180524310(param_1);
        }
      }
      else {
        LOCK();
        plVar1 = param_4 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + 1;
        UNLOCK();
        *(int64_t *)(*param_4 + (int64_t)(int)lVar2 * 8) = param_1;
      }
    }
  }
  else {
    lVar2 = *(int64_t *)(param_1 + 0x20);
    fVar4 = 1.0 - param_2 * 3.0;
    *(float *)(lVar2 + 0x5c) = fVar4 * *(float *)(lVar2 + 0x5c);
    *(float *)(lVar2 + 0x58) = fVar4 * *(float *)(lVar2 + 0x58);
  }
  if ((((0.0 < param_2) && ((uVar3 & 1) != 0)) && (*(int64_t *)(param_1 + 0x590) != 0)) &&
     (((*(char *)(param_1 + 0xa50) == '\0' && (*(int64_t *)(param_1 + 0x6d8) != 0)) &&
      (*(char *)(*(int64_t *)(param_1 + 0x6d8) + 0x8be) != '\0')))) {
    FUN_18050f1e0(param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




