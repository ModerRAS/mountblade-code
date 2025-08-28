#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part085.c - 4 个函数

// 函数: void FUN_180317990(longlong *param_1)
void FUN_180317990(longlong *param_1)

{
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803179d0(longlong param_1,char param_2)
void FUN_1803179d0(longlong param_1,char param_2)

{
  float *pfVar1;
  uint64_t *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  bool bVar19;
  uint64_t uVar20;
  longlong *plStackX_8;
  longlong *plStackX_18;
  
  uVar14 = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3;
  iVar13 = (int)uVar14;
  if ((0 < iVar13) && (param_2 != '\0')) {
    uVar20 = FUN_1800f6ce0(param_1,&plStackX_18,iVar13 * 4);
    FUN_18031bde0(uVar20,&plStackX_8,uVar14 & 0xffffffff);
    lVar9 = plStackX_18[2];
    lVar10 = plStackX_8[2];
    iVar15 = 1;
    iVar18 = 0;
    if (0 < iVar13) {
      lVar17 = 0;
      do {
        bVar19 = iVar18 != *(int *)(param_1 + 0x30);
        iVar16 = 0;
        if (bVar19) {
          iVar16 = iVar15;
        }
        if (bVar19) {
          iVar15 = iVar15 + 1;
        }
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar17 * 8);
        fVar5 = *(float *)(lVar11 + 0x98);
        fVar6 = *(float *)(lVar11 + 0x9c);
        fVar3 = *(float *)(lVar11 + 0xe8);
        fVar4 = *(float *)(lVar11 + 0xec);
        lVar12 = (longlong)(iVar16 * 4);
        *(float *)(lVar9 + lVar12 * 4) = *(float *)(lVar11 + 0x94) + *(float *)(lVar11 + 0xe4);
        *(float *)(lVar9 + 4 + lVar12 * 4) = fVar5 + fVar3;
        *(float *)(lVar9 + 8 + lVar12 * 4) = fVar6 + fVar4;
        *(int32_t *)(lVar9 + 0xc + lVar12 * 4) = *(int32_t *)(lVar11 + 0x48);
        fVar5 = *(float *)(lVar11 + 0x98);
        fVar6 = *(float *)(lVar11 + 0x9c);
        fVar7 = *(float *)(lVar11 + 0xa0);
        fVar3 = *(float *)(lVar11 + 0xe8);
        fVar4 = *(float *)(lVar11 + 0xec);
        lVar12 = (longlong)iVar16 * 0x60;
        pfVar1 = (float *)(lVar12 + 0x40 + lVar10);
        *pfVar1 = *(float *)(lVar11 + 0x94) + *(float *)(lVar11 + 0xe4);
        pfVar1[1] = fVar5 + fVar3;
        pfVar1[2] = fVar6 + fVar4;
        pfVar1[3] = fVar7;
        *(float *)(lVar12 + 0x4c + lVar10) =
             (float)*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar17 * 8) + 0x149);
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar17 * 8);
        fVar3 = *(float *)(lVar11 + 0x88);
        fVar4 = *(float *)(lVar11 + 0x84);
        fVar5 = *(float *)(lVar11 + 0x8c);
        fVar6 = *(float *)(lVar11 + 0x78);
        fVar7 = *(float *)(lVar11 + 0x74);
        fVar8 = *(float *)(lVar11 + 0x7c);
        pfVar1 = (float *)(lVar12 + 0x50 + lVar10);
        *pfVar1 = SQRT(*(float *)(lVar11 + 100) * *(float *)(lVar11 + 100) +
                       *(float *)(lVar11 + 0x68) * *(float *)(lVar11 + 0x68) +
                       *(float *)(lVar11 + 0x6c) * *(float *)(lVar11 + 0x6c));
        pfVar1[1] = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8);
        pfVar1[2] = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
        pfVar1[3] = 3.4028235e+38;
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar17 * 8);
        uVar20 = *(uint64_t *)(lVar11 + 0xac);
        *(uint64_t *)(lVar12 + lVar10) = *(uint64_t *)(lVar11 + 0xa4);
        ((uint64_t *)(lVar12 + lVar10))[1] = uVar20;
        uVar20 = *(uint64_t *)(lVar11 + 0xbc);
        puVar2 = (uint64_t *)(lVar12 + 0x10 + lVar10);
        *puVar2 = *(uint64_t *)(lVar11 + 0xb4);
        puVar2[1] = uVar20;
        uVar20 = *(uint64_t *)(lVar11 + 0xcc);
        puVar2 = (uint64_t *)(lVar12 + 0x20 + lVar10);
        *puVar2 = *(uint64_t *)(lVar11 + 0xc4);
        puVar2[1] = uVar20;
        uVar20 = *(uint64_t *)(lVar11 + 0xdc);
        puVar2 = (uint64_t *)(lVar12 + 0x30 + lVar10);
        *puVar2 = *(uint64_t *)(lVar11 + 0xd4);
        puVar2[1] = uVar20;
        *(int32_t *)(lVar12 + 0xc + lVar10) =
             *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar17 * 8) + 0x60);
        *(int32_t *)(lVar12 + 0x1c + lVar10) =
             *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar17 * 8) + 0x144);
        *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar17 * 8) + 0x50) = 0;
        *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar17 * 8) + 0x58) =
             *(int32_t *)(param_1 + 4);
        iVar18 = iVar18 + 1;
        lVar17 = lVar17 + 1;
      } while (lVar17 < iVar13);
    }
    FUN_18029b390(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0x40),
                  plStackX_18);
    FUN_18029b390(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_1 + 0x48),
                  plStackX_8);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180317e00(longlong param_1)
void FUN_180317e00(longlong param_1)

{
  longlong lVar1;
  int8_t auStack_78 [32];
  uint64_t uStack_58;
  void *puStack_50;
  int8_t *puStack_48;
  int32_t uStack_40;
  int8_t auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x9650);
  render_system_control_memory = 0x80;


// 函数: void FUN_180317ee0(longlong param_1,longlong param_2,longlong *param_3,uint64_t param_4,
void FUN_180317ee0(longlong param_1,longlong param_2,longlong *param_3,uint64_t param_4,
                  longlong *param_5,uint64_t param_6,int32_t param_7)

{
  int *piVar1;
  int iVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int8_t uVar6;
  int32_t uVar7;
  int32_t *puVar8;
  longlong *plVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  longlong lVar13;
  byte bVar14;
  uint64_t uVar15;
  int8_t auStack_378 [32];
  uint64_t *puStack_358;
  int8_t uStack_350;
  longlong *plStack_348;
  void *puStack_340;
  uint64_t *puStack_338;
  int32_t uStack_330;
  uint64_t uStack_328;
  int32_t uStack_320;
  int32_t uStack_31c;
  int32_t uStack_318;
  uint64_t uStack_314;
  int32_t uStack_30c;
  int32_t uStack_308;
  int32_t uStack_300;
  int32_t uStack_2fc;
  longlong *plStack_2f8;
  longlong *plStack_2f0;
  longlong *plStack_2e8;
  longlong *plStack_2e0;
  longlong *plStack_2d8;
  longlong *plStack_2d0;
  longlong *plStack_2c8;
  longlong *plStack_2c0;
  uint64_t uStack_2b8;
  int32_t uStack_2b0;
  int16_t uStack_2ac;
  uint64_t uStack_2a8;
  uint64_t uStack_2a0;
  int32_t uStack_298;
  int8_t uStack_294;
  int32_t uStack_290;
  uint64_t uStack_28c;
  int16_t uStack_284;
  uint64_t uStack_280;
  int32_t uStack_278;
  uint64_t uStack_270;
  int32_t uStack_268;
  int8_t uStack_264;
  uint64_t uStack_250;
  uint64_t uStack_248;
  longlong lStack_238;
  longlong lStack_230;
  void *puStack_228;
  int8_t *puStack_220;
  int32_t uStack_218;
  int8_t auStack_210 [136];
  uint64_t auStack_188 [40];
  ulonglong uStack_48;
  
  uStack_248 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_378;
  plStack_348 = param_3;
  puVar8 = (int32_t *)FUN_1800daa50();
  switch(param_7) {
  case 0:
    FUN_180094b30(puVar8,&unknown_var_5488_ptr);
    break;
  case 1:
    FUN_180094b30(puVar8,&unknown_var_5720_ptr);
    break;
  case 2:
    FUN_180094b30(puVar8,&unknown_var_5680_ptr);
    break;
  case 3:
    FUN_180094b30(puVar8,&unknown_var_5640_ptr);
    break;
  case 4:
    FUN_180094b30(puVar8,&unknown_var_5600_ptr);
    break;
  case 5:
    FUN_180094b30(puVar8,&unknown_var_5872_ptr);
    break;
  default:
    FUN_180626ee0(&unknown_var_5816_ptr);
  }
  plVar9 = (longlong *)FUN_1800bde30();
  if (plVar9 != (longlong *)0x0) {
    plStack_2f0 = plVar9;
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  plStack_2f0 = *(longlong **)(puVar8 + 0x2662);
  *(longlong **)(puVar8 + 0x2662) = plVar9;
  if (plStack_2f0 != (longlong *)0x0) {
    (**(code **)(*plStack_2f0 + 0x38))();
  }
  *puVar8 = 0x41;
  *(uint64_t *)(puVar8 + 0x4706) = 0;
  puVar8[0x4708] = (float)*(ushort *)((longlong)param_5 + 0x32c);
  puVar8[0x4709] = (float)*(ushort *)((longlong)param_5 + 0x32e);
  puVar8[0x470a] = 0;
  puVar8[0x470b] = 0x3f800000;
  puVar8[0xd62] = (uint)*(ushort *)((longlong)param_5 + 0x32c);
  puVar8[0xd63] = (uint)*(ushort *)((longlong)param_5 + 0x32e);
  puVar8[0xd64] = (uint)*(ushort *)((longlong)param_5 + 0x32c);
  puVar8[0xd65] = (uint)*(ushort *)((longlong)param_5 + 0x32e);
  puVar8[1] = 0x10141;
  puVar8[0x473c] = 0;
  *(int8_t *)((longlong)puVar8 + 0x11c37) = 1;
  *(byte *)((longlong)puVar8 + 0x1bd9) = *(byte *)((longlong)puVar8 + 0x1bd9) | 2;
  *(byte *)(puVar8 + 0x6f6) = *(byte *)(puVar8 + 0x6f6) | 0x40;
  *(int16_t *)((longlong)puVar8 + 0x9a31) = 0;
  *(int8_t *)(puVar8 + 0x4931) = 1;
  if (*(longlong *)(puVar8 + 0x2674) != 0) {
    uStack_318 = 1;
    uStack_30c = 0x1018a;
    uStack_314 = 0x2f;
    uStack_320 = 0x80;
    uStack_31c = 0x80;
    uStack_308 = *(int32_t *)(param_2 + 0x1bd4);
    puStack_228 = &unknown_var_3432_ptr;
    puStack_220 = auStack_210;
    auStack_210[0] = 0;
    uStack_218 = 0x11;
    uVar15 = strcpy_s(auStack_210,0x80,&unknown_var_5792_ptr);
    FUN_1800b1d80(uVar15,&plStack_2f8,&puStack_228,&uStack_320);
    plVar9 = plStack_2f8;
    puStack_228 = &unknown_var_720_ptr;
    puVar8[1] = puVar8[1] | 2;
    *(uint64_t *)(puVar8 + 0x2684) = 0;
    *(uint64_t *)(puVar8 + 0x2686) = 0;
    plStack_2e0 = plStack_2f8;
    if (plStack_2f8 != (longlong *)0x0) {
      (**(code **)(*plStack_2f8 + 0x28))(plStack_2f8);
    }
    plStack_2e0 = *(longlong **)(puVar8 + 0x25aa);
    *(longlong **)(puVar8 + 0x25aa) = plVar9;
    if (plStack_2e0 != (longlong *)0x0) {
      (**(code **)(*plStack_2e0 + 0x38))();
    }
    plStack_2d8 = param_5;
    (**(code **)(*param_5 + 0x28))(param_5);
    plStack_2d8 = *(longlong **)(puVar8 + 0x25a4);
    *(longlong **)(puVar8 + 0x25a4) = param_5;
    if (plStack_2d8 != (longlong *)0x0) {
      (**(code **)(*plStack_2d8 + 0x38))();
    }
    bVar14 = 0;
    puVar8[0xd5f] = 0;
    puVar8[0xd5e] = param_7;
    plStack_2d0 = *(longlong **)(puVar8 + 0x265c);
    *(uint64_t *)(puVar8 + 0x265c) = 0;
    if (plStack_2d0 != (longlong *)0x0) {
      (**(code **)(*plStack_2d0 + 0x38))();
    }
    plVar9 = (longlong *)FUN_1800be440();
    if (plVar9 != (longlong *)0x0) {
      plStack_2c8 = plVar9;
      (**(code **)(*plVar9 + 0x28))(plVar9);
    }
    plStack_2c8 = *(longlong **)(puVar8 + 0x2660);
    *(longlong **)(puVar8 + 0x2660) = plVar9;
    if (plStack_2c8 != (longlong *)0x0) {
      (**(code **)(*plStack_2c8 + 0x38))();
    }
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x60b80);
    if (lVar13 == 0) {
      uStack_300 = 0x3f800000;
      uStack_2fc = 0x3f800000;
      uVar15 = 0x3f8000003f800000;
    }
    else {
      uVar15 = *(uint64_t *)(lVar13 + 0x20);
    }
    *(uint64_t *)(puVar8 + 0x4932) = uVar15;
    FUN_180094c20(auStack_188);
    lStack_238 = *plStack_348;
    lStack_230 = plStack_348[1];
    uStack_350 = 1;
    puStack_358 = (uint64_t *)CONCAT44(puStack_358._4_4_,0x447a0000);
    FUN_180286300(auStack_188,param_7,&lStack_238);
    lVar13 = 2;
    puVar10 = (uint64_t *)(puVar8 + 0xc);
    puVar5 = auStack_188;
    do {
      puVar12 = puVar5;
      puVar11 = puVar10;
      uVar15 = puVar12[1];
      *puVar11 = *puVar12;
      puVar11[1] = uVar15;
      uVar15 = puVar12[3];
      puVar11[2] = puVar12[2];
      puVar11[3] = uVar15;
      uVar15 = puVar12[5];
      puVar11[4] = puVar12[4];
      puVar11[5] = uVar15;
      uVar15 = puVar12[7];
      puVar11[6] = puVar12[6];
      puVar11[7] = uVar15;
      uVar15 = puVar12[9];
      puVar11[8] = puVar12[8];
      puVar11[9] = uVar15;
      uVar15 = puVar12[0xb];
      puVar11[10] = puVar12[10];
      puVar11[0xb] = uVar15;
      uVar15 = puVar12[0xd];
      puVar11[0xc] = puVar12[0xc];
      puVar11[0xd] = uVar15;
      uVar15 = puVar12[0xf];
      puVar11[0xe] = puVar12[0xe];
      puVar11[0xf] = uVar15;
      lVar13 = lVar13 + -1;
      puVar10 = puVar11 + 0x10;
      puVar5 = puVar12 + 0x10;
    } while (lVar13 != 0);
    uVar15 = puVar12[0x11];
    puVar11[0x10] = puVar12[0x10];
    puVar11[0x11] = uVar15;
    uVar15 = puVar12[0x13];
    puVar11[0x12] = puVar12[0x12];
    puVar11[0x13] = uVar15;
    uVar15 = puVar12[0x15];
    puVar11[0x14] = puVar12[0x14];
    puVar11[0x15] = uVar15;
    uVar7 = *(int32_t *)((longlong)puVar12 + 0xb4);
    uVar3 = *(int32_t *)(puVar12 + 0x17);
    uVar4 = *(int32_t *)((longlong)puVar12 + 0xbc);
    *(int32_t *)(puVar11 + 0x16) = *(int32_t *)(puVar12 + 0x16);
    *(int32_t *)((longlong)puVar11 + 0xb4) = uVar7;
    *(int32_t *)(puVar11 + 0x17) = uVar3;
    *(int32_t *)((longlong)puVar11 + 0xbc) = uVar4;
    FUN_18024b8d0(puVar8);
    if (*(longlong *)(param_1 + 0x38) == -14000) {
      *(int8_t *)(puVar8 + 0x473d) = 0;
    }
    else {
      FUN_1801c1c40(puVar8 + 0x4740);
      *(int8_t *)(puVar8 + 0x473d) = 1;
    }
    *(int8_t *)(puVar8 + 0x268c) = 1;
    *(byte *)(puVar8 + 0x6f6) = *(byte *)(puVar8 + 0x6f6) | 0x20;
    plVar9 = *(longlong **)(param_2 + 0x3580);
    if (plVar9 != (longlong *)0x0) {
      plStack_2c0 = plVar9;
      (**(code **)(*plVar9 + 0x28))(plVar9);
    }
    plStack_2c0 = *(longlong **)(puVar8 + 0xd60);
    *(longlong **)(puVar8 + 0xd60) = plVar9;
    if (plStack_2c0 != (longlong *)0x0) {
      (**(code **)(*plStack_2c0 + 0x38))();
    }
    puVar8[0x4a7d] = *(int32_t *)(*(longlong *)(param_1 + 0x38) + 0x3ec4);
    puVar8[0x4a7e] =
         *(float *)(*(longlong *)(param_1 + 0x38) + 0x3ec8) * 0.05 *
         *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x81f0) + 0xc);
    *(int8_t *)(puVar8 + 0x718) = 1;
    uVar6 = func_0x0001800e2bf0(system_parameter_buffer,puVar8);
    *(int8_t *)((longlong)puVar8 + 0x1c61) = uVar6;
    if (puVar8[2] != -1) {
      bVar14 = (byte)puVar8[6];
    }
    *(byte *)((longlong)puVar8 + 0x1c62) = bVar14 & 1;
    uVar7 = func_0x00018024c420(puVar8);
    puVar8[0x719] = uVar7;
    uStack_2b8 = 0;
    uStack_2ac = 0xff00;
    uStack_2a8 = 0;
    uStack_2a0 = 0xffffffffffffffff;
    uStack_298 = 0xffffffff;
    uStack_294 = 0xff;
    uStack_290 = 0xffffffff;
    uStack_28c = 0;
    uStack_284 = 0x400;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_264 = 0;
    uStack_250 = 0;
    uStack_2b0 = 0;
    if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x27b8) != '\0') {
      plVar9 = (longlong *)
               **(uint64_t **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x81f8) + 0xf0);
      (**(code **)(*plVar9 + 0xa8))(plVar9,&plStack_348);
      if (plStack_348 != (longlong *)0x0) {
        lVar13 = (**(code **)(*plStack_348 + 0x178))();
        *(int32_t *)(lVar13 + 0x2c4) = 0x3f800000;
        puStack_358 = &uStack_2b8;
        (**(code **)(*plStack_348 + 0x1c8))
                  (plStack_348,puVar8,*(longlong *)(param_1 + 0x38),
                   *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x81f8) + 0x70);
      }
      puStack_358 = &uStack_2b8;
      (**(code **)(*plStack_348 + 0x1c8))
                (plStack_348,puVar8,*(longlong *)(param_1 + 0x38),
                 *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x81f8) + 0x70);
      if (plStack_348 != (longlong *)0x0) {
        (**(code **)(*plStack_348 + 0x38))();
      }
    }
    LOCK();
    piVar1 = (int *)(param_2 + 0x11a48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(int32_t **)(param_2 + 0x9a48 + (longlong)iVar2 * 8) = puVar8;
    uVar15 = *(uint64_t *)(param_2 + 0x9a3c);
    *(uint64_t *)(puVar8 + 0x268d) = *(uint64_t *)(param_2 + 0x9a34);
    *(uint64_t *)(puVar8 + 0x268f) = uVar15;
    if (plStack_2f8 != (longlong *)0x0) {
      (**(code **)(*plStack_2f8 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_378);
  }
  puStack_340 = &unknown_var_3456_ptr;
  uStack_328 = 0;
  puStack_338 = (uint64_t *)0x0;
  uStack_330 = 0;
  puVar10 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar10 = 0;
  puStack_338 = puVar10;
  uVar7 = FUN_18064e990(puVar10);
  uStack_328 = CONCAT44(uStack_328._4_4_,uVar7);
  *puVar10 = 0x616d776f64616873;
  puVar10[1] = 0x68706172675f70;
  uStack_330 = 0xf;
  plVar9 = (longlong *)FUN_1801f20c0();
  if (plVar9 != (longlong *)0x0) {
    plStack_2e8 = plVar9;
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  plStack_2e8 = *(longlong **)(puVar8 + 0x2674);
  *(longlong **)(puVar8 + 0x2674) = plVar9;
  if (plStack_2e8 != (longlong *)0x0) {
    (**(code **)(*plStack_2e8 + 0x38))();
  }
  puStack_340 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



