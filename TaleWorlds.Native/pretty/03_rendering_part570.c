#include "TaleWorlds.Native.Split.h"

// 03_rendering_part570.c - 3 个函数

// 函数: void FUN_18057c8c0(longlong param_1,int32_t *param_2,uint64_t param_3)
void FUN_18057c8c0(longlong param_1,int32_t *param_2,uint64_t param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int iVar8;
  int iVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  longlong **pplVar12;
  uint64_t *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint64_t uVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int8_t auStack_258 [32];
  int8_t uStack_238;
  uint uStack_228;
  longlong *plStack_220;
  uint64_t *puStack_218;
  longlong *plStack_210;
  uint64_t *puStack_208;
  longlong *plStack_200;
  uint64_t *puStack_1f8;
  longlong *plStack_1f0;
  longlong *plStack_1e8;
  void *puStack_1e0;
  longlong lStack_1d8;
  int32_t uStack_1c8;
  void *puStack_1c0;
  longlong lStack_1b8;
  int32_t uStack_1a8;
  uint64_t uStack_1a0;
  int8_t auStack_198 [16];
  uint64_t auStack_188 [40];
  ulonglong uStack_48;
  
  uStack_1a0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
  plVar15 = (longlong *)0x0;
  uStack_228 = 0;
  FUN_180588970();
  *(int32_t *)(param_1 + 0xac) = *param_2;
  *(uint64_t *)(param_1 + 0xb0) = param_3;
  *(int8_t *)(param_1 + 0xcc) = *(int8_t *)(param_2 + 6);
  uVar10 = *(uint64_t *)((longlong)param_2 + 0x21);
  *(uint64_t *)(param_1 + 0xcd) = *(uint64_t *)((longlong)param_2 + 0x19);
  *(uint64_t *)(param_1 + 0xd5) = uVar10;
  *(uint64_t *)(param_1 + 0xdd) = *(uint64_t *)((longlong)param_2 + 0x29);
  *(int32_t *)(param_1 + 0xe5) = *(int32_t *)((longlong)param_2 + 0x31);
  uVar10 = *(uint64_t *)(param_2 + 0x1c);
  *(uint64_t *)(param_1 + 0x2558) = *(uint64_t *)(param_2 + 0x1a);
  *(uint64_t *)(param_1 + 0x2560) = uVar10;
  uVar7 = param_2[0x1f];
  uVar5 = param_2[0x20];
  uVar6 = param_2[0x21];
  *(int32_t *)(param_1 + 0x2568) = param_2[0x1e];
  *(int32_t *)(param_1 + 0x256c) = uVar7;
  *(int32_t *)(param_1 + 0x2570) = uVar5;
  *(int32_t *)(param_1 + 0x2574) = uVar6;
  plVar14 = plVar15;
  plVar18 = plVar15;
  if (*(longlong *)(param_2 + 0x22) != 0) {
    uVar10 = FUN_180627910(&puStack_1e0);
    uStack_228 = 1;
    puVar11 = (uint64_t *)FUN_1800b3970(extraout_XMM0_Da,&plStack_200,uVar10,1);
    uStack_228 = 3;
    plVar14 = (longlong *)*puVar11;
    plVar18 = (longlong *)0x3;
  }
  *(longlong **)(param_1 + 0x2548) = plVar14;
  if (((ulonglong)plVar18 & 2) != 0) {
    uStack_228 = (uint)plVar18 & 0xfffffffd;
    plVar18 = (longlong *)(ulonglong)uStack_228;
    if (plStack_200 != (longlong *)0x0) {
      (**(code **)(*plStack_200 + 0x38))();
    }
  }
  uVar17 = (uint)plVar18;
  if (((ulonglong)plVar18 & 1) != 0) {
    uVar17 = uVar17 & 0xfffffffe;
    puStack_1e0 = &unknown_var_3456_ptr;
    uStack_228 = uVar17;
    if (lStack_1d8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_1d8 = 0;
    uStack_1c8 = 0;
    puStack_1e0 = &unknown_var_720_ptr;
  }
  if (*(longlong *)(param_2 + 0x24) == 0) {
    plStack_220 = (longlong *)0x0;
    pplVar12 = &plStack_220;
    uVar17 = uVar17 | 0x10;
  }
  else {
    uVar10 = FUN_180627910(&puStack_1c0);
    uStack_228 = uVar17 | 4;
    pplVar12 = (longlong **)FUN_1800f4ad0(extraout_XMM0_Da_00,&plStack_210,uVar10);
    uVar17 = uVar17 | 0xc;
    plVar15 = *pplVar12;
  }
  *pplVar12 = (longlong *)0x0;
  plStack_1f0 = *(longlong **)(param_1 + 0x2550);
  *(longlong **)(param_1 + 0x2550) = plVar15;
  uStack_228 = uVar17;
  if (plStack_1f0 != (longlong *)0x0) {
    (**(code **)(*plStack_1f0 + 0x38))();
  }
  if (((uVar17 & 0x10) != 0) &&
     (uVar17 = uVar17 & 0xffffffef, uStack_228 = uVar17, plStack_220 != (longlong *)0x0)) {
    (**(code **)(*plStack_220 + 0x38))();
  }
  if (((uVar17 & 8) != 0) &&
     (uVar17 = uVar17 & 0xfffffff7, uStack_228 = uVar17, plStack_210 != (longlong *)0x0)) {
    (**(code **)(*plStack_210 + 0x38))();
  }
  if ((uVar17 & 4) != 0) {
    uStack_228 = uVar17 & 0xfffffffb;
    puStack_1c0 = &unknown_var_3456_ptr;
    if (lStack_1b8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_1b8 = 0;
    uStack_1a8 = 0;
    puStack_1c0 = &unknown_var_720_ptr;
  }
  uVar7 = *(int32_t *)((longlong)param_2 + 0x9e);
  uVar5 = *(int32_t *)((longlong)param_2 + 0xa2);
  uVar6 = *(int32_t *)((longlong)param_2 + 0xa6);
  *(int32_t *)(param_1 + 0x2578) = *(int32_t *)((longlong)param_2 + 0x9a);
  *(int32_t *)(param_1 + 0x257c) = uVar7;
  *(int32_t *)(param_1 + 0x2580) = uVar5;
  *(int32_t *)(param_1 + 0x2584) = uVar6;
  *(int16_t *)(param_1 + 0x2588) = *(int16_t *)((longlong)param_2 + 0xaa);
  lVar20 = (longlong)*(int *)(param_1 + 0xac) * 0xe0 + _DAT_180c95fb0;
  plStack_210 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x40,8,3);
  *plStack_210 = (longlong)&unknown_var_1864_ptr;
  *plStack_210 = (longlong)&unknown_var_2120_ptr;
  plStack_210[1] = 0;
  plStack_210[2] = 0;
  plStack_210[3] = 0;
  plStack_210[4] = 0;
  plStack_210[5] = 0;
  plStack_210[6] = 0;
  plStack_210[7] = 0;
  *(longlong **)(param_1 + 0x2598) = plStack_210;
  cVar3 = *(char *)((longlong)param_2 + 0x99);
  if ((-1 < *(char *)(param_2 + 0x26)) && (-1 < cVar3)) {
    lVar19 = *(longlong *)(*(longlong *)(lVar20 + 0x58) + 0x140);
    fVar1 = *(float *)((longlong)*(char *)(param_2 + 0x26) * 0x1b0 + 0x34 + lVar19);
    *(float *)(plStack_210 + 7) = fVar1;
    fVar2 = *(float *)((longlong)cVar3 * 0x1b0 + 0x34 + lVar19);
    *(float *)((longlong)plStack_210 + 0x3c) = fVar2;
    *(float *)((longlong)plStack_210 + 0x24) = fVar1 - fVar2;
  }
  puVar13 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0xc88,8,3);
  *puVar13 = &unknown_var_1984_ptr;
  puVar13[3] = 0;
  puVar11 = puVar13 + 9;
  lVar19 = 6;
  lVar22 = 6;
  do {
    func_0x0001804aabb0(puVar11);
    puVar11 = (uint64_t *)((longlong)puVar11 + 0x104);
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  puVar11 = puVar13 + 0xcc;
  do {
    func_0x0001804aabb0(puVar11);
    puVar11 = (uint64_t *)((longlong)puVar11 + 0x104);
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  puVar13[399] = 0;
  *(int32_t *)((longlong)puVar13 + 0xc84) = 0;
  *(uint64_t **)(param_1 + 0x2590) = puVar13;
  lVar19 = *(longlong *)(lVar20 + 0x68);
  if (lVar19 == 0) {
    iVar21 = 0;
    puVar11 = auStack_188;
    do {
      iVar9 = 5;
      if (iVar21 < 5) {
        iVar9 = iVar21;
      }
      iVar8 = param_2[1];
      if (iVar9 < iVar8) {
        bVar4 = 5 < iVar21;
        uStack_238 = bVar4;
        uVar7 = FUN_180557990(*(uint64_t *)(param_1 + 0xb0),2,iVar9);
        iVar8 = FUN_18053a410(&system_data_5f30,*(int32_t *)(param_1 + 0xac),uVar7);
        iVar8 = *(int *)(_DAT_180c95f68 + (longlong)iVar8 * 4);
        if (iVar8 == -1) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar8 * 8);
        }
        puVar11[-2] = uVar10;
        uStack_238 = bVar4;
        uVar7 = FUN_180557990(*(uint64_t *)(param_1 + 0xb0),1,iVar9);
        iVar8 = FUN_18053a410(&system_data_5f30,*(int32_t *)(param_1 + 0xac),uVar7);
        iVar8 = *(int *)(_DAT_180c95f68 + (longlong)iVar8 * 4);
        if (iVar8 == -1) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar8 * 8);
        }
        *puVar11 = uVar10;
        uStack_238 = bVar4;
        uVar7 = FUN_180557990(*(uint64_t *)(param_1 + 0xb0),0,iVar9,0xffffffff);
        iVar8 = FUN_18053a410(&system_data_5f30,*(int32_t *)(param_1 + 0xac),uVar7);
        iVar8 = *(int *)(_DAT_180c95f68 + (longlong)iVar8 * 4);
        if (iVar8 == -1) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar8 * 8);
        }
        puVar11[1] = uVar10;
        uStack_238 = bVar4;
        uVar7 = FUN_180557990(*(uint64_t *)(param_1 + 0xb0),5,iVar9);
        iVar9 = FUN_18053a410(&system_data_5f30,*(int32_t *)(param_1 + 0xac),uVar7);
        iVar9 = *(int *)(_DAT_180c95f68 + (longlong)iVar9 * 4);
        uVar10 = 0;
        uVar16 = uVar10;
        if (iVar9 != -1) {
          uVar16 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar9 * 8);
        }
        puVar11[-1] = uVar16;
        lVar19 = *(longlong *)(param_1 + 0xb0);
        puVar13 = (uint64_t *)
                  (*(longlong *)(lVar19 + 0x60) +
                  SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x84)) % ZEXT416(*(uint *)(lVar19 + 0x68)),0)
                  * 8);
        for (plVar15 = (longlong *)*puVar13; plVar15 != (longlong *)0x0;
            plVar15 = (longlong *)plVar15[1]) {
          if ((int)*plVar15 == 0x84) {
            plStack_210 = plVar15;
            puStack_208 = puVar13;
            pplVar12 = &plStack_210;
            goto LAB_18057ce4c;
          }
        }
        plStack_1e8 = (longlong *)(*(longlong *)(lVar19 + 0x60) + *(longlong *)(lVar19 + 0x68) * 8);
        plStack_1f0 = (longlong *)*plStack_1e8;
        pplVar12 = &plStack_1f0;
LAB_18057ce4c:
        iVar9 = FUN_18053a410(&system_data_5f30,*(int32_t *)(param_1 + 0xac),
                              *(int32_t *)((longlong)*pplVar12 + 4));
        iVar9 = *(int *)(_DAT_180c95f68 + (longlong)iVar9 * 4);
        uVar16 = uVar10;
        if (iVar9 != -1) {
          uVar16 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar9 * 8);
        }
        puVar11[2] = uVar16;
        lVar19 = *(longlong *)(param_1 + 0xb0);
        puVar13 = (uint64_t *)
                  (*(longlong *)(lVar19 + 0x60) +
                  SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) % ZEXT416(*(uint *)(lVar19 + 0x68)),0)
                  * 8);
        for (plVar15 = (longlong *)*puVar13; plVar15 != (longlong *)0x0;
            plVar15 = (longlong *)plVar15[1]) {
          if ((int)*plVar15 == 0x82) {
            plStack_200 = plVar15;
            puStack_1f8 = puVar13;
            pplVar12 = &plStack_200;
            goto LAB_18057cef0;
          }
        }
        puStack_218 = (uint64_t *)
                      (*(longlong *)(lVar19 + 0x60) + *(longlong *)(lVar19 + 0x68) * 8);
        plStack_220 = (longlong *)*puStack_218;
        pplVar12 = &plStack_220;
LAB_18057cef0:
        iVar9 = FUN_18053a410(&system_data_5f30,*(int32_t *)(param_1 + 0xac),
                              *(int32_t *)((longlong)*pplVar12 + 4));
        iVar9 = *(int *)(_DAT_180c95f68 + (longlong)iVar9 * 4);
        if (iVar9 != -1) {
          uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar9 * 8);
        }
        puVar11[3] = uVar10;
        iVar8 = param_2[1];
      }
      iVar21 = iVar21 + 1;
      puVar11 = puVar11 + 6;
    } while (iVar21 < 7);
    FUN_18053a960(&system_data_5f30,*(int32_t *)(param_1 + 0xac),auStack_198,iVar8);
    puVar13 = *(uint64_t **)(param_1 + 0x2590);
    lVar19 = *(longlong *)(lVar20 + 0x68);
  }
  iVar21 = param_2[1];
  *(int *)(puVar13 + 1) = iVar21;
  plStack_220 = (longlong *)0x0;
  puVar13[3] = 0;
  puVar13[4] = 0;
  *(int32_t *)((longlong)puVar13 + 0xc) = 0;
  puVar13[2] = 1;
  *(uint64_t *)((longlong)puVar13 + 0x2c) = 0x3f800000;
  *(uint64_t *)((longlong)puVar13 + 0x34) = 0;
  *(uint64_t *)((longlong)puVar13 + 0x3c) = 0;
  *(int32_t *)((longlong)puVar13 + 0x44) = 0;
  iVar9 = iVar21 + 1;
  if (iVar21 < 6) {
    iVar9 = iVar21;
  }
  *(int *)(puVar13 + 400) = iVar9;
  puVar13[399] = lVar19;
  *(int32_t *)((longlong)puVar13 + 0xc84) = 0;
  FUN_18057c630(param_1,*(uint64_t *)(lVar20 + 0x58));
  *(uint64_t *)(param_1 + 0x2500) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x2508) = 0;
  *(uint64_t *)(param_1 + 0x2510) = 0;
  *(uint64_t *)(param_1 + 0x2518) = 0x3f80000000000000;
  *(int32_t *)(param_1 + 0x2520) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2524) = 0;
  *(int32_t *)(param_1 + 0x2528) = 0;
  *(int32_t *)(param_1 + 0x252c) = 0;
  *(int32_t *)(param_1 + 0x2530) = 0;
  *(int32_t *)(param_1 + 0x2534) = 0;
  *(int32_t *)(param_1 + 0x2538) = 0;
  *(int32_t *)(param_1 + 0x253c) = 0x3f800000;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_258);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18057d050(longlong param_1)
void FUN_18057d050(longlong param_1)

{
  uint64_t uVar1;
  bool bVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int **ppiVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  uint64_t *puVar13;
  int *piVar14;
  int8_t auStack_1e8 [32];
  int8_t uStack_1c8;
  int *piStack_1b8;
  longlong lStack_1b0;
  int *piStack_1a8;
  longlong lStack_1a0;
  int *piStack_198;
  longlong lStack_190;
  int *piStack_188;
  longlong lStack_180;
  int8_t auStack_178 [16];
  uint64_t auStack_168 [40];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  lVar12 = *(longlong *)(param_1 + 0x2590);
  if (lVar12 != 0) {
    iVar5 = *(int *)(param_1 + 0xac);
    piVar14 = (int *)0x0;
    if (*(longlong *)((longlong)iVar5 * 0xe0 + 0x68 + _DAT_180c95fb0) == 0) {
      puVar13 = auStack_168;
      piVar10 = piVar14;
      do {
        lVar8 = lVar12;
        iVar11 = (int)piVar10;
        iVar5 = 5;
        if (iVar11 < 5) {
          iVar5 = iVar11;
        }
        if (iVar5 < *(int *)(lVar8 + 8)) {
          bVar2 = 5 < iVar11;
          uStack_1c8 = bVar2;
          uVar3 = FUN_180557990(*(uint64_t *)(param_1 + 0xb0),2,iVar5);
          iVar4 = FUN_18053a410(&system_data_5f30,*(int32_t *)(param_1 + 0xac),uVar3);
          iVar4 = *(int *)(_DAT_180c95f68 + (longlong)iVar4 * 4);
          piVar10 = piVar14;
          if (iVar4 != -1) {
            piVar10 = *(int **)(_DAT_180c95f88 + (longlong)iVar4 * 8);
          }
          uVar1 = *(uint64_t *)(param_1 + 0xb0);
          puVar13[-2] = piVar10;
          uStack_1c8 = bVar2;
          uVar3 = FUN_180557990(uVar1,1,iVar5);
          iVar4 = FUN_18053a410(&system_data_5f30,*(int32_t *)(param_1 + 0xac),uVar3);
          iVar4 = *(int *)(_DAT_180c95f68 + (longlong)iVar4 * 4);
          piVar10 = piVar14;
          if (iVar4 != -1) {
            piVar10 = *(int **)(_DAT_180c95f88 + (longlong)iVar4 * 8);
          }
          uVar1 = *(uint64_t *)(param_1 + 0xb0);
          *puVar13 = piVar10;
          uStack_1c8 = bVar2;
          uVar3 = FUN_180557990(uVar1,0,iVar5,0xffffffff);
          iVar4 = FUN_18053a410(&system_data_5f30,*(int32_t *)(param_1 + 0xac),uVar3);
          iVar4 = *(int *)(_DAT_180c95f68 + (longlong)iVar4 * 4);
          piVar10 = piVar14;
          if (iVar4 != -1) {
            piVar10 = *(int **)(_DAT_180c95f88 + (longlong)iVar4 * 8);
          }
          uVar1 = *(uint64_t *)(param_1 + 0xb0);
          puVar13[1] = piVar10;
          uStack_1c8 = bVar2;
          uVar3 = FUN_180557990(uVar1,5,iVar5);
          iVar5 = FUN_18053a410(&system_data_5f30,*(int32_t *)(param_1 + 0xac),uVar3);
          iVar5 = *(int *)(_DAT_180c95f68 + (longlong)iVar5 * 4);
          piVar10 = piVar14;
          if (iVar5 != -1) {
            piVar10 = *(int **)(_DAT_180c95f88 + (longlong)iVar5 * 8);
          }
          lVar12 = *(longlong *)(param_1 + 0xb0);
          puVar13[-1] = piVar10;
          lVar8 = *(longlong *)(lVar12 + 0x60);
          lVar9 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x84)) % ZEXT416(*(uint *)(lVar12 + 0x68)),0)
          ;
          for (piVar10 = *(int **)(lVar8 + lVar9 * 8);
              (piVar6 = piVar14, piVar10 != (int *)0x0 && (piVar6 = piVar10, *piVar10 != 0x84));
              piVar10 = *(int **)(piVar10 + 2)) {
          }
          if (piVar6 == (int *)0x0) {
            piStack_1a8 = *(int **)(lVar8 + *(longlong *)(lVar12 + 0x68) * 8);
            ppiVar7 = &piStack_1a8;
            lStack_1a0 = lVar8 + *(longlong *)(lVar12 + 0x68) * 8;
          }
          else {
            piStack_1b8 = piVar6;
            ppiVar7 = &piStack_1b8;
            lStack_1b0 = lVar8 + lVar9 * 8;
          }
          iVar5 = FUN_18053a410(&system_data_5f30,*(int32_t *)(param_1 + 0xac),(*ppiVar7)[1]);
          iVar5 = *(int *)(_DAT_180c95f68 + (longlong)iVar5 * 4);
          piVar10 = piVar14;
          if (iVar5 != -1) {
            piVar10 = *(int **)(_DAT_180c95f88 + (longlong)iVar5 * 8);
          }
          lVar12 = *(longlong *)(param_1 + 0xb0);
          puVar13[2] = piVar10;
          lVar8 = *(longlong *)(lVar12 + 0x60);
          lVar9 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) % ZEXT416(*(uint *)(lVar12 + 0x68)),0)
          ;
          for (piVar10 = *(int **)(lVar8 + lVar9 * 8);
              (piVar6 = piVar14, piVar10 != (int *)0x0 && (piVar6 = piVar10, *piVar10 != 0x82));
              piVar10 = *(int **)(piVar10 + 2)) {
          }
          if (piVar6 == (int *)0x0) {
            piStack_188 = *(int **)(lVar8 + *(longlong *)(lVar12 + 0x68) * 8);
            ppiVar7 = &piStack_188;
            lStack_180 = lVar8 + *(longlong *)(lVar12 + 0x68) * 8;
          }
          else {
            piStack_198 = piVar6;
            ppiVar7 = &piStack_198;
            lStack_190 = lVar8 + lVar9 * 8;
          }
          iVar5 = FUN_18053a410(&system_data_5f30,*(int32_t *)(param_1 + 0xac),(*ppiVar7)[1]);
          iVar5 = *(int *)(_DAT_180c95f68 + (longlong)iVar5 * 4);
          if (iVar5 == -1) {
            lVar8 = *(longlong *)(param_1 + 0x2590);
            puVar13[3] = 0;
            lVar12 = lVar8;
          }
          else {
            lVar8 = *(longlong *)(param_1 + 0x2590);
            puVar13[3] = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar5 * 8);
            lVar12 = lVar8;
          }
        }
        else {
          lVar12 = *(longlong *)(param_1 + 0x2590);
        }
        piVar10 = (int *)(ulonglong)(iVar11 + 1U);
        puVar13 = puVar13 + 6;
      } while ((int)(iVar11 + 1U) < 7);
      FUN_18053a960(&system_data_5f30,*(int32_t *)(param_1 + 0xac),auStack_178,
                    *(int32_t *)(lVar8 + 8));
      lVar12 = *(longlong *)(param_1 + 0x2590);
      iVar5 = *(int *)(param_1 + 0xac);
    }
    piStack_1b8 = (int *)0x0;
    uVar1 = *(uint64_t *)((longlong)iVar5 * 0xe0 + 0x68 + _DAT_180c95fb0);
    iVar5 = *(int *)(lVar12 + 8);
    *(uint64_t *)(lVar12 + 0x18) = 0;
    *(uint64_t *)(lVar12 + 0x20) = 0;
    *(int32_t *)(lVar12 + 0xc) = 0;
    *(uint64_t *)(lVar12 + 0x34) = 0;
    iVar11 = iVar5 + 1;
    if (iVar5 < 6) {
      iVar11 = iVar5;
    }
    *(uint64_t *)(lVar12 + 0x3c) = 0;
    *(int32_t *)(lVar12 + 0x44) = 0;
    *(int32_t *)(lVar12 + 0xc84) = 0;
    *(int *)(lVar12 + 0xc80) = iVar11;
    *(int *)(lVar12 + 8) = iVar5;
    *(uint64_t *)(lVar12 + 0x10) = 1;
    *(uint64_t *)(lVar12 + 0x2c) = 0x3f800000;
    *(uint64_t *)(lVar12 + 0xc78) = uVar1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_1e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18057d095(longlong param_1,int param_2,longlong param_3,longlong param_4,uint64_t param_5
void FUN_18057d095(longlong param_1,int param_2,longlong param_3,longlong param_4,uint64_t param_5
                  ,int *param_6,longlong param_7,longlong param_8,longlong param_9,int *param_10,
                  longlong param_11,longlong param_12,longlong param_13)

{
  uint64_t uVar1;
  longlong lVar2;
  bool bVar3;
  int32_t uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  uint64_t unaff_RBX;
  int iVar12;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R14;
  uint64_t *puVar13;
  uint64_t unaff_R15;
  int *piVar14;
  ulonglong in_stack_000001c0;
  
  *(uint64_t *)(in_R11 + -0x18) = unaff_R15;
  piVar14 = (int *)0x0;
  if (*(longlong *)(param_1 + 0x68 + param_4) == 0) {
    *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
    *(uint64_t *)(in_R11 + 0x18) = unaff_RBP;
    *(uint64_t *)(in_R11 + -0x10) = unaff_R14;
    puVar13 = (uint64_t *)(in_R11 + -0x168);
    *(uint64_t *)(in_R11 + 0x20) = unaff_RSI;
    piVar11 = piVar14;
    do {
      lVar9 = param_3;
      iVar12 = (int)piVar11;
      iVar6 = 5;
      if (iVar12 < 5) {
        iVar6 = iVar12;
      }
      if (iVar6 < *(int *)(lVar9 + 8)) {
        bVar3 = 5 < iVar12;
        uVar4 = FUN_180557990(*(uint64_t *)(unaff_RDI + 0xb0),2,iVar6,0xffffffff,bVar3);
        iVar5 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RDI + 0xac),uVar4);
        iVar5 = *(int *)(_DAT_180c95f68 + (longlong)iVar5 * 4);
        piVar11 = piVar14;
        if (iVar5 != -1) {
          piVar11 = *(int **)(_DAT_180c95f88 + (longlong)iVar5 * 8);
        }
        uVar1 = *(uint64_t *)(unaff_RDI + 0xb0);
        puVar13[-2] = piVar11;
        uVar4 = FUN_180557990(uVar1,1,iVar6,0xffffffff,bVar3);
        iVar5 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RDI + 0xac),uVar4);
        iVar5 = *(int *)(_DAT_180c95f68 + (longlong)iVar5 * 4);
        piVar11 = piVar14;
        if (iVar5 != -1) {
          piVar11 = *(int **)(_DAT_180c95f88 + (longlong)iVar5 * 8);
        }
        uVar1 = *(uint64_t *)(unaff_RDI + 0xb0);
        *puVar13 = piVar11;
        uVar4 = FUN_180557990(uVar1,0,iVar6,0xffffffff,bVar3);
        iVar5 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RDI + 0xac),uVar4);
        iVar5 = *(int *)(_DAT_180c95f68 + (longlong)iVar5 * 4);
        piVar11 = piVar14;
        if (iVar5 != -1) {
          piVar11 = *(int **)(_DAT_180c95f88 + (longlong)iVar5 * 8);
        }
        uVar1 = *(uint64_t *)(unaff_RDI + 0xb0);
        puVar13[1] = piVar11;
        uVar4 = FUN_180557990(uVar1,5,iVar6,0xffffffff,bVar3);
        iVar6 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RDI + 0xac),uVar4);
        iVar6 = *(int *)(_DAT_180c95f68 + (longlong)iVar6 * 4);
        piVar11 = piVar14;
        if (iVar6 != -1) {
          piVar11 = *(int **)(_DAT_180c95f88 + (longlong)iVar6 * 8);
        }
        lVar9 = *(longlong *)(unaff_RDI + 0xb0);
        puVar13[-1] = piVar11;
        lVar2 = *(longlong *)(lVar9 + 0x60);
        lVar10 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x84)) % ZEXT416(*(uint *)(lVar9 + 0x68)),0);
        for (piVar11 = *(int **)(lVar2 + lVar10 * 8);
            (piVar7 = piVar14, piVar11 != (int *)0x0 && (piVar7 = piVar11, *piVar11 != 0x84));
            piVar11 = *(int **)(piVar11 + 2)) {
        }
        if (piVar7 == (int *)0x0) {
          param_8 = *(longlong *)(lVar2 + *(longlong *)(lVar9 + 0x68) * 8);
          plVar8 = &param_8;
          param_9 = lVar2 + *(longlong *)(lVar9 + 0x68) * 8;
        }
        else {
          param_6 = piVar7;
          plVar8 = (longlong *)&param_6;
          param_7 = lVar2 + lVar10 * 8;
        }
        iVar6 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RDI + 0xac),
                              *(int32_t *)(*plVar8 + 4));
        iVar6 = *(int *)(_DAT_180c95f68 + (longlong)iVar6 * 4);
        piVar11 = piVar14;
        if (iVar6 != -1) {
          piVar11 = *(int **)(_DAT_180c95f88 + (longlong)iVar6 * 8);
        }
        lVar9 = *(longlong *)(unaff_RDI + 0xb0);
        puVar13[2] = piVar11;
        lVar2 = *(longlong *)(lVar9 + 0x60);
        lVar10 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x82)) % ZEXT416(*(uint *)(lVar9 + 0x68)),0);
        for (piVar11 = *(int **)(lVar2 + lVar10 * 8);
            (piVar7 = piVar14, piVar11 != (int *)0x0 && (piVar7 = piVar11, *piVar11 != 0x82));
            piVar11 = *(int **)(piVar11 + 2)) {
        }
        if (piVar7 == (int *)0x0) {
          param_12 = *(longlong *)(lVar2 + *(longlong *)(lVar9 + 0x68) * 8);
          plVar8 = &param_12;
          param_13 = lVar2 + *(longlong *)(lVar9 + 0x68) * 8;
        }
        else {
          param_10 = piVar7;
          plVar8 = (longlong *)&param_10;
          param_11 = lVar2 + lVar10 * 8;
        }
        iVar6 = FUN_18053a410(&system_data_5f30,*(int32_t *)(unaff_RDI + 0xac),
                              *(int32_t *)(*plVar8 + 4));
        iVar6 = *(int *)(_DAT_180c95f68 + (longlong)iVar6 * 4);
        if (iVar6 == -1) {
          lVar9 = *(longlong *)(unaff_RDI + 0x2590);
          puVar13[3] = 0;
          param_3 = lVar9;
        }
        else {
          lVar9 = *(longlong *)(unaff_RDI + 0x2590);
          puVar13[3] = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar6 * 8);
          param_3 = lVar9;
        }
      }
      else {
        param_3 = *(longlong *)(unaff_RDI + 0x2590);
      }
      piVar11 = (int *)(ulonglong)(iVar12 + 1U);
      puVar13 = puVar13 + 6;
    } while ((int)(iVar12 + 1U) < 7);
    FUN_18053a960(&system_data_5f30,*(int32_t *)(unaff_RDI + 0xac),&stack0x00000070,
                  *(int32_t *)(lVar9 + 8));
    param_3 = *(longlong *)(unaff_RDI + 0x2590);
    param_2 = *(int *)(unaff_RDI + 0xac);
    param_4 = _DAT_180c95fb0;
  }
  param_6 = (int *)0x0;
  uVar1 = *(uint64_t *)((longlong)param_2 * 0xe0 + 0x68 + param_4);
  iVar6 = *(int *)(param_3 + 8);
  *(uint64_t *)(param_3 + 0x18) = 0;
  *(uint64_t *)(param_3 + 0x20) = 0;
  *(int32_t *)(param_3 + 0xc) = 0;
  *(uint64_t *)(param_3 + 0x34) = 0;
  iVar12 = iVar6 + 1;
  if (iVar6 < 6) {
    iVar12 = iVar6;
  }
  *(uint64_t *)(param_3 + 0x3c) = 0;
  *(int32_t *)(param_3 + 0x44) = 0;
  *(int32_t *)(param_3 + 0xc84) = 0;
  *(int *)(param_3 + 0xc80) = iVar12;
  *(int *)(param_3 + 8) = iVar6;
  *(uint64_t *)(param_3 + 0x10) = 1;
  *(uint64_t *)(param_3 + 0x2c) = 0x3f800000;
  *(uint64_t *)(param_3 + 0xc78) = uVar1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000001c0 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



