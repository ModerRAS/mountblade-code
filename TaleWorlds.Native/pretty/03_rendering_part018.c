#include "TaleWorlds.Native.Split.h"

// 03_rendering_part018.c - 3 个函数

// 函数: void FUN_180278270(longlong param_1)
void FUN_180278270(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar6 = 1;
  if (1 < *(int *)(param_1 + 0x58)) {
    do {
      uVar4 = *(ulonglong *)(param_1 + 0x38);
      uVar1 = *(ulonglong *)(param_1 + 0x40);
      uVar8 = 1 << ((byte)iVar6 & 0x1f);
      iVar7 = 0;
      uVar5 = uVar4;
      if (uVar4 < uVar1) {
        do {
          iVar3 = iVar7 + 1;
          if ((*(uint *)(uVar5 + 8) & uVar8) == 0) {
            iVar3 = iVar7;
          }
          iVar7 = iVar3;
          uVar5 = uVar5 + 0x10;
        } while (uVar5 < uVar1);
        if (iVar7 == 0) goto LAB_1802782bc;
      }
      else {
LAB_1802782bc:
        if (uVar4 < uVar1) {
          do {
            if ((1 << ((byte)iVar6 - 1 & 0x1f) & *(uint *)(uVar4 + 8)) != 0) {
              *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) | uVar8;
            }
            uVar4 = uVar4 + 0x10;
          } while (uVar4 < *(ulonglong *)(param_1 + 0x40));
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x58));
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 != 0) {
    *(short *)(lVar2 + 0x2b0) = *(short *)(lVar2 + 0x2b0) + 1;
    lVar2 = *(longlong *)(lVar2 + 0x168);
    if (lVar2 != 0) {
      *(short *)(lVar2 + 0x2b0) = *(short *)(lVar2 + 0x2b0) + 1;
      for (lVar2 = *(longlong *)(lVar2 + 0x168); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x168)) {
        *(short *)(lVar2 + 0x2b0) = *(short *)(lVar2 + 0x2b0) + 1;
      }
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802786d0(longlong param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void FUN_1802786d0(longlong param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(int8_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x330) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x338) = 0;
  *(uint64_t *)(param_1 + 0x340) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x348) = 0;
  *(uint64_t *)(param_1 + 0x350) = 0;
  *(uint64_t *)(param_1 + 0x358) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x360) = 0;
  *(uint64_t *)(param_1 + 0x368) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x370) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x378) = 0;
  *(uint64_t *)(param_1 + 0x380) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x388) = 0;
  *(int32_t *)(param_1 + 0x390) = 0;
  *(int32_t *)(param_1 + 0x394) = 0;
  *(int32_t *)(param_1 + 0x398) = 0x3f800000;
  *(int32_t *)(param_1 + 0x39c) = 0;
  *(int32_t *)(param_1 + 0x3a0) = 0;
  *(int32_t *)(param_1 + 0x3a4) = 0;
  *(int32_t *)(param_1 + 0x3a8) = 0;
  *(int32_t *)(param_1 + 0x3ac) = 0x3f800000;
  *(int8_t *)(param_1 + 0x3b0) = 0xff;
  *(int8_t *)(param_1 + 800) = 1;
  *(int32_t *)(param_1 + 0x210) = 0x21;
  *(int8_t *)(param_1 + 0x3c0) = 0;
  *(int32_t *)(param_1 + 0x328) = 0xffffffff;
  *(int32_t *)(param_1 + 0x3c4) = 0;
  *(int32_t *)(param_1 + 0x324) = 0;
  *(int8_t *)(param_1 + 0x32c) = 0;
  *(int32_t *)(param_1 + 0x68) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x7c) = 0;
  plVar1 = *(longlong **)(param_1 + 0x3b8);
  *(uint64_t *)(param_1 + 0x3b8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,0,param_3,param_4,0xfffffffffffffffe);
  }
  *(int32_t *)(param_1 + 0x248) = 0xffffffff;
  plVar2 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,0x1e);
  *plVar2 = (longlong)&UNK_180a21690;
  *plVar2 = (longlong)&UNK_180a21720;
  *(int32_t *)(plVar2 + 1) = 0;
  *plVar2 = (longlong)&UNK_180a16940;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *(int32_t *)(plVar2 + 2) = 0;
  *(int32_t *)(plVar2 + 5) = 0;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar1 = *(longlong **)(param_1 + 0x3c8);
  *(longlong **)(param_1 + 0x3c8) = plVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int8_t *)(param_1 + 0x322) = 0;
  *(int32_t *)(param_1 + 0x3b4) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180278870(longlong param_1,longlong param_2,longlong param_3)
void FUN_180278870(longlong param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  longlong *plVar2;
  int32_t uVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *puVar10;
  longlong *plVar11;
  uint64_t *puVar12;
  char *pcVar13;
  char *pcVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int8_t auStack_358 [32];
  int32_t uStack_338;
  int32_t uStack_334;
  longlong lStack_330;
  uint64_t uStack_328;
  uint64_t uStack_320;
  uint64_t uStack_318;
  uint64_t uStack_310;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  int32_t uStack_2fc;
  longlong lStack_2f8;
  uint64_t uStack_2f0;
  uint64_t uStack_2e8;
  uint64_t uStack_2e0;
  int32_t uStack_2d8;
  int32_t uStack_2d4;
  int32_t uStack_2d0;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  longlong *aplStack_2b0 [2];
  longlong *plStack_2a0;
  int32_t uStack_298;
  int32_t uStack_294;
  int32_t uStack_290;
  int32_t uStack_28c;
  int32_t uStack_288;
  int32_t uStack_284;
  int32_t uStack_280;
  int32_t uStack_27c;
  uint64_t uStack_278;
  uint64_t uStack_270;
  uint64_t uStack_268;
  uint64_t uStack_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  int32_t uStack_24c;
  uint64_t uStack_248;
  int32_t uStack_240;
  int32_t uStack_23c;
  int32_t uStack_238;
  int32_t uStack_234;
  void *puStack_228;
  int8_t *puStack_220;
  int32_t uStack_218;
  int8_t auStack_210 [136];
  void *puStack_188;
  void *puStack_180;
  int32_t uStack_178;
  undefined auStack_170 [136];
  ulonglong uStack_e8;
  
  uStack_248 = 0xfffffffffffffffe;
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_358;
  plVar11 = (longlong *)0x0;
  puStack_228 = &UNK_1809fcc28;
  puStack_220 = auStack_210;
  uStack_218 = 0;
  auStack_210[0] = 0;
  pcVar14 = "material";
  do {
    pcVar13 = pcVar14;
    pcVar14 = pcVar13 + 1;
  } while (*pcVar14 != '\0');
  puVar5 = *(uint64_t **)(param_3 + 0x40);
  do {
    lStack_330 = param_3;
    uStack_2e8 = param_2;
    if (puVar5 == (uint64_t *)0x0) {
LAB_180278a68:
      puVar5 = *(uint64_t **)(lStack_330 + 0x30);
      if (puVar5 == (uint64_t *)0x0) {
LAB_18027916b:
        lVar8 = lStack_330;
        uStack_334 = 0;
        lVar7 = FUN_1800a02a0(lStack_330,&UNK_180a16828);
        if (lVar7 != 0) {
          pcVar14 = (char *)0x180d48d24;
          if (*(char **)(lVar7 + 8) != (char *)0x0) {
            pcVar14 = *(char **)(lVar7 + 8);
          }
          uVar9 = 0xffffffffffffffff;
          do {
            uVar9 = uVar9 + 1;
          } while (pcVar14[uVar9] != '\0');
          if (((uVar9 < 3) || (*pcVar14 != '0')) ||
             (puVar10 = &UNK_180a3cb84, (pcVar14[1] + 0xa8U & 0xdf) != 0)) {
            puVar10 = &UNK_180a063a0;
          }
          FUN_18010cbc0(pcVar14,puVar10,&uStack_334);
          puVar4 = (int32_t *)FUN_18039ffc0(param_1);
          *puVar4 = 0;
          puVar4[2] = uStack_334;
          plVar2 = *(longlong **)(param_2 + 0x18);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar7 = *plVar6;
          *plVar6 = *plVar6 + 0x28;
          UNLOCK();
          uVar9 = lVar7 + 0xfU & 0xfffffffffffffff0;
          plVar6 = plVar11;
          if (uVar9 + 0x18 < 0x2000000) {
            plVar6 = (longlong *)(uVar9 + *plVar2);
          }
          plVar6[2] = (longlong)puVar4;
          *plVar6 = param_2 + 8;
          plVar6[1] = *(longlong *)(param_2 + 0x10);
          **(uint64_t **)(param_2 + 0x10) = plVar6;
          *(longlong **)(param_2 + 0x10) = plVar6;
          *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
        }
        lVar7 = FUN_1800a02a0(lVar8,&UNK_180a16840);
        if (lVar7 != 0) {
          lVar8 = 0x180d48d24;
          if (*(longlong *)(lVar7 + 8) != 0) {
            lVar8 = *(longlong *)(lVar7 + 8);
          }
          (**(code **)(puStack_228 + 0x10))(&puStack_228,lVar8);
          puVar4 = (int32_t *)FUN_18039ffc0(param_1);
          *puVar4 = 2;
          puVar5 = (uint64_t *)FUN_1800b30d0(_DAT_180c86930,&plStack_2a0,&puStack_228,1);
          *(uint64_t *)(puVar4 + 2) = *puVar5;
          if (plStack_2a0 != (longlong *)0x0) {
            (**(code **)(*plStack_2a0 + 0x38))();
          }
          plVar2 = *(longlong **)(param_2 + 0x18);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar8 = *plVar6;
          *plVar6 = *plVar6 + 0x28;
          UNLOCK();
          uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
          plVar6 = plVar11;
          if (uVar9 + 0x18 < 0x2000000) {
            plVar6 = (longlong *)(uVar9 + *plVar2);
          }
          plVar6[2] = (longlong)puVar4;
          *plVar6 = param_2 + 8;
          plVar6[1] = *(longlong *)(param_2 + 0x10);
          **(uint64_t **)(param_2 + 0x10) = plVar6;
          *(longlong **)(param_2 + 0x10) = plVar6;
          *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
          lVar8 = lStack_330;
        }
        uStack_328 = 0x3f800000;
        uStack_320 = 0;
        uStack_318 = 0x3f80000000000000;
        uStack_310 = 0;
        fStack_308 = 0.0;
        fStack_304 = 0.0;
        fStack_300 = 1.0;
        uStack_2fc = 0;
        lStack_2f8 = 0;
        uStack_2f0 = 0x3f80000000000000;
        uStack_288 = 0;
        uStack_284 = 0;
        uStack_280 = 0;
        uStack_27c = 0x3f800000;
        FUN_1801c1720(&uStack_328,&uStack_2d8);
        FUN_180085020(&uStack_328,&fStack_2c8);
        lVar7 = FUN_180631960(lVar8,&UNK_180a16808,&uStack_288);
        if (((lVar7 != 0) || (lVar7 = FUN_180631960(lVar8,&UNK_180a16818,&uStack_2d8), lVar7 != 0))
           || (lVar7 = FUN_180631960(lVar8,&UNK_180a0f108,&fStack_2c8), lVar7 != 0)) {
          lStack_2f8 = CONCAT44(uStack_284,uStack_288);
          uStack_2f0 = CONCAT44(uStack_27c,uStack_280);
          uStack_278 = 0x3f800000;
          uStack_270 = 0;
          uStack_268 = 0x3f80000000000000;
          uStack_260 = 0;
          fStack_258 = 0.0;
          fStack_254 = 0.0;
          fStack_250 = 1.0;
          uStack_24c = 0;
          uStack_2e8 = lStack_2f8;
          uStack_2e0 = uStack_2f0;
          FUN_180085c10(&uStack_278,uStack_2d0);
          FUN_180085970(&uStack_278,uStack_2d8);
          FUN_180085ac0(&uStack_278,uStack_2d4);
          uVar3 = uStack_270._4_4_;
          uStack_318 = uStack_268;
          uStack_310._0_4_ = (float)uStack_260;
          uStack_310._4_4_ = uStack_260._4_4_;
          fStack_308 = fStack_258;
          fStack_304 = fStack_254;
          fStack_300 = fStack_250;
          uStack_2fc = uStack_24c;
          fVar18 = (float)uStack_278 * fStack_2c8;
          fVar21 = uStack_278._4_4_ * fStack_2c8;
          fVar19 = (float)uStack_270 * fStack_2c8;
          fVar15 = (float)uStack_268 * fStack_2c4;
          fVar17 = uStack_268._4_4_ * fStack_2c4;
          fVar20 = (float)uStack_310 * fStack_2c4;
          fVar16 = fStack_258 * fStack_2c0;
          fVar22 = fStack_254 * fStack_2c0;
          fVar23 = fStack_250 * fStack_2c0;
          puVar4 = (int32_t *)FUN_18039ffc0(param_1);
          *puVar4 = 3;
          uStack_328 = CONCAT44(fVar21,fVar18);
          uStack_320 = CONCAT44(uVar3,fVar19);
          puVar4[2] = fVar18;
          puVar4[3] = fVar21;
          puVar4[4] = fVar19;
          puVar4[5] = uVar3;
          uStack_318 = CONCAT44(fVar17,fVar15);
          uStack_310 = CONCAT44(uStack_310._4_4_,fVar20);
          puVar4[6] = fVar15;
          puVar4[7] = fVar17;
          puVar4[8] = fVar20;
          puVar4[9] = uStack_310._4_4_;
          puVar4[10] = fVar16;
          puVar4[0xb] = fVar22;
          puVar4[0xc] = fVar23;
          puVar4[0xd] = uStack_2fc;
          puVar4[0xe] = (int32_t)uStack_2e8;
          puVar4[0xf] = uStack_2e8._4_4_;
          puVar4[0x10] = (int32_t)uStack_2e0;
          puVar4[0x11] = uStack_2e0._4_4_;
          plVar2 = *(longlong **)(param_2 + 0x18);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar7 = *plVar6;
          *plVar6 = *plVar6 + 0x28;
          UNLOCK();
          uVar9 = lVar7 + 0xfU & 0xfffffffffffffff0;
          plVar6 = plVar11;
          if (uVar9 + 0x18 < 0x2000000) {
            plVar6 = (longlong *)(uVar9 + *plVar2);
          }
          plVar6[2] = (longlong)puVar4;
          *plVar6 = param_2 + 8;
          plVar6[1] = *(longlong *)(param_2 + 0x10);
          **(uint64_t **)(param_2 + 0x10) = plVar6;
          *(longlong **)(param_2 + 0x10) = plVar6;
          *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
          fStack_308 = fVar16;
          fStack_304 = fVar22;
          fStack_300 = fVar23;
        }
        lVar8 = FUN_180631b90(lVar8,&UNK_180a167f0,&uStack_240);
        if (lVar8 != 0) {
          puVar4 = (int32_t *)FUN_18039ffc0(param_1);
          *puVar4 = 4;
          puVar4[0x42] = uStack_240;
          puVar4[0x43] = uStack_23c;
          puVar4[0x44] = uStack_238;
          puVar4[0x45] = uStack_234;
          plVar2 = *(longlong **)(param_2 + 0x18);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar8 = *plVar6;
          *plVar6 = *plVar6 + 0x28;
          UNLOCK();
          uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
          if (uVar9 + 0x18 < 0x2000000) {
            plVar11 = (longlong *)(*plVar2 + uVar9);
          }
          plVar11[2] = (longlong)puVar4;
          *plVar11 = param_2 + 8;
          plVar11[1] = *(longlong *)(param_2 + 0x10);
          **(uint64_t **)(param_2 + 0x10) = plVar11;
          *(longlong **)(param_2 + 0x10) = plVar11;
          *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
        }
        puStack_228 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
        FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_358);
      }
      puStack_188 = &UNK_1809fcc28;
      puStack_180 = auStack_170;
      uStack_178 = 0;
      auStack_170[0] = 0;
LAB_180278aab:
      do {
        pcVar14 = "name";
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + 1;
        } while (*pcVar14 != '\0');
        for (puVar12 = (uint64_t *)puVar5[8]; puVar12 != (uint64_t *)0x0;
            puVar12 = (uint64_t *)puVar12[6]) {
          pcVar14 = (char *)*puVar12;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            plVar6 = plVar11;
          }
          else {
            plVar6 = (longlong *)puVar12[2];
          }
          if (plVar6 == (longlong *)(pcVar13 + -0x180a03a83)) {
            pcVar1 = (char *)((longlong)plVar6 + (longlong)pcVar14);
            if (pcVar1 <= pcVar14) {
LAB_180278b10:
              lVar8 = 0x180d48d24;
              if (puVar12[1] != 0) {
                lVar8 = puVar12[1];
              }
              (**(code **)(puStack_188 + 0x10))(&puStack_188,lVar8);
              break;
            }
            lVar8 = (longlong)&DAT_180a03a84 - (longlong)pcVar14;
            while (*pcVar14 == pcVar14[lVar8]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar1 <= pcVar14) goto LAB_180278b10;
            }
          }
        }
        uStack_338 = 0;
        pcVar14 = "material";
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + 1;
        } while (*pcVar14 != '\0');
        for (puVar12 = (uint64_t *)puVar5[8]; puVar12 != (uint64_t *)0x0;
            puVar12 = (uint64_t *)puVar12[6]) {
          pcVar14 = (char *)*puVar12;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            plVar6 = plVar11;
          }
          else {
            plVar6 = (longlong *)puVar12[2];
          }
          if (plVar6 == (longlong *)(pcVar13 + -0x180a04ebf)) {
            pcVar1 = (char *)((longlong)plVar6 + (longlong)pcVar14);
            if (pcVar1 <= pcVar14) {
LAB_180278ba0:
              lVar8 = 0x180d48d24;
              if (puVar12[1] != 0) {
                lVar8 = puVar12[1];
              }
              (**(code **)(puStack_228 + 0x10))(&puStack_228,lVar8);
              plVar2 = *(longlong **)(param_1 + 0x50);
              LOCK();
              plVar6 = plVar2 + 1;
              lVar8 = *plVar6;
              *plVar6 = *plVar6 + 0x128;
              UNLOCK();
              uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
              if (uVar9 + 0x118 < 0x2000000) {
                plVar11 = (longlong *)(*plVar2 + uVar9);
              }
                    // WARNING: Subroutine does not return
              memset((void *)((longlong)plVar11 + 4),0,0x114);
            }
            lVar8 = (longlong)&UNK_180a04ec0 - (longlong)pcVar14;
            while (*pcVar14 == pcVar14[lVar8]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar1 <= pcVar14) goto LAB_180278ba0;
            }
          }
        }
        pcVar14 = "factor";
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + 1;
        } while (*pcVar14 != '\0');
        for (puVar12 = (uint64_t *)puVar5[8]; puVar12 != (uint64_t *)0x0;
            puVar12 = (uint64_t *)puVar12[6]) {
          pcVar14 = (char *)*puVar12;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            plVar6 = plVar11;
          }
          else {
            plVar6 = (longlong *)puVar12[2];
          }
          if (plVar6 == (longlong *)(pcVar13 + -0x180a1674b)) {
            pcVar1 = (char *)((longlong)plVar6 + (longlong)pcVar14);
            if (pcVar1 <= pcVar14) {
LAB_180278d28:
              lVar8 = 0x180d48d24;
              if (puVar12[1] != 0) {
                lVar8 = puVar12[1];
              }
              FUN_18010cbc0(lVar8,&UNK_180a063a0,&uStack_338);
              plVar2 = *(longlong **)(param_1 + 0x50);
              LOCK();
              plVar6 = plVar2 + 1;
              lVar8 = *plVar6;
              *plVar6 = *plVar6 + 0x128;
              UNLOCK();
              uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
              if (uVar9 + 0x118 < 0x2000000) {
                plVar11 = (longlong *)(*plVar2 + uVar9);
              }
                    // WARNING: Subroutine does not return
              memset((void *)((longlong)plVar11 + 4),0,0x114);
            }
            lVar8 = (longlong)&UNK_180a1674c - (longlong)pcVar14;
            while (*pcVar14 == pcVar14[lVar8]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar1 <= pcVar14) goto LAB_180278d28;
            }
          }
        }
        pcVar14 = "factor2";
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + 1;
        } while (*pcVar14 != '\0');
        for (puVar12 = (uint64_t *)puVar5[8]; puVar12 != (uint64_t *)0x0;
            puVar12 = (uint64_t *)puVar12[6]) {
          pcVar14 = (char *)*puVar12;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            plVar6 = plVar11;
          }
          else {
            plVar6 = (longlong *)puVar12[2];
          }
          if (plVar6 == (longlong *)(pcVar13 + -0x180a167ff)) {
            pcVar1 = (char *)((longlong)plVar6 + (longlong)pcVar14);
            if (pcVar1 <= pcVar14) {
LAB_180278e70:
              lVar8 = 0x180d48d24;
              if (puVar12[1] != 0) {
                lVar8 = puVar12[1];
              }
              FUN_18010cbc0(lVar8,&UNK_180a063a0,&uStack_338);
              plVar2 = *(longlong **)(param_1 + 0x50);
              LOCK();
              plVar6 = plVar2 + 1;
              lVar8 = *plVar6;
              *plVar6 = *plVar6 + 0x128;
              UNLOCK();
              uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
              if (uVar9 + 0x118 < 0x2000000) {
                plVar11 = (longlong *)(*plVar2 + uVar9);
              }
                    // WARNING: Subroutine does not return
              memset((void *)((longlong)plVar11 + 4),0,0x114);
            }
            lVar8 = (longlong)&UNK_180a16800 - (longlong)pcVar14;
            while (*pcVar14 == pcVar14[lVar8]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar1 <= pcVar14) goto LAB_180278e70;
            }
          }
        }
        lVar8 = FUN_180631b90(puVar5,&UNK_180a167e0,&uStack_298);
        if (lVar8 != 0) {
          plVar2 = *(longlong **)(param_1 + 0x50);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar8 = *plVar6;
          *plVar6 = *plVar6 + 0x128;
          UNLOCK();
          uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
          if (uVar9 + 0x118 < 0x2000000) {
            plVar11 = (longlong *)(*plVar2 + uVar9);
          }
                    // WARNING: Subroutine does not return
          memset((void *)((longlong)plVar11 + 4),0,0x114);
        }
        lVar8 = FUN_180631b90(puVar5,&UNK_180a167f0,&uStack_298);
        if (lVar8 != 0) {
          puVar4 = (int32_t *)FUN_18039ffc0(param_1);
          *puVar4 = 9;
          puVar4[0x42] = uStack_298;
          puVar4[0x43] = uStack_294;
          puVar4[0x44] = uStack_290;
          puVar4[0x45] = uStack_28c;
          puVar10 = &DAT_18098bc73;
          if (puStack_180 != (void *)0x0) {
            puVar10 = puStack_180;
          }
          strcpy_s(puVar4 + 2,0x80,puVar10);
          plVar2 = *(longlong **)(param_2 + 0x18);
          LOCK();
          plVar6 = plVar2 + 1;
          lVar8 = *plVar6;
          *plVar6 = *plVar6 + 0x28;
          UNLOCK();
          uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
          plVar6 = plVar11;
          if (uVar9 + 0x18 < 0x2000000) {
            plVar6 = (longlong *)(uVar9 + *plVar2);
          }
          plVar6[2] = (longlong)puVar4;
          *plVar6 = param_2 + 8;
          plVar6[1] = *(longlong *)(param_2 + 0x10);
          **(uint64_t **)(param_2 + 0x10) = plVar6;
          *(longlong **)(param_2 + 0x10) = plVar6;
          *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
        }
        pcVar14 = "mesh";
        do {
          pcVar13 = pcVar14;
          pcVar14 = pcVar13 + 1;
        } while (*pcVar14 != '\0');
        while( true ) {
          do {
            puVar5 = (uint64_t *)puVar5[0xb];
            if (puVar5 == (uint64_t *)0x0) {
              puStack_188 = &UNK_18098bcb0;
              goto LAB_18027916b;
            }
            pcVar14 = (char *)*puVar5;
            if (pcVar14 == (char *)0x0) {
              pcVar14 = (char *)0x180d48d24;
              plVar6 = plVar11;
            }
            else {
              plVar6 = (longlong *)puVar5[2];
            }
          } while (plVar6 != (longlong *)(pcVar13 + -0x180a0f3e7));
          pcVar1 = (char *)((longlong)plVar6 + (longlong)pcVar14);
          if (pcVar1 <= pcVar14) break;
          lVar8 = (longlong)&UNK_180a0f3e8 - (longlong)pcVar14;
          while (*pcVar14 == pcVar14[lVar8]) {
            pcVar14 = pcVar14 + 1;
            if (pcVar1 <= pcVar14) goto LAB_180278aab;
          }
        }
      } while( true );
    }
    pcVar14 = (char *)*puVar5;
    if (pcVar14 == (char *)0x0) {
      pcVar14 = (char *)0x180d48d24;
      plVar6 = plVar11;
    }
    else {
      plVar6 = (longlong *)puVar5[2];
    }
    if (plVar6 == (longlong *)(pcVar13 + -0x180a04ebf)) {
      pcVar1 = (char *)((longlong)plVar6 + (longlong)pcVar14);
      if (pcVar1 <= pcVar14) {
LAB_1802789a4:
        lVar8 = 0x180d48d24;
        if (puVar5[1] != 0) {
          lVar8 = puVar5[1];
        }
        FUN_18004a180(&puStack_228,lVar8);
        puVar4 = (int32_t *)FUN_18039ffc0(param_1);
        *puVar4 = 1;
        puVar5 = (uint64_t *)FUN_1800b30d0(_DAT_180c86930,aplStack_2b0,&puStack_228,1);
        *(uint64_t *)(puVar4 + 2) = *puVar5;
        if (aplStack_2b0[0] != (longlong *)0x0) {
          (**(code **)(*aplStack_2b0[0] + 0x38))();
        }
        plVar2 = *(longlong **)(param_2 + 0x18);
        LOCK();
        plVar6 = plVar2 + 1;
        lVar8 = *plVar6;
        *plVar6 = *plVar6 + 0x28;
        UNLOCK();
        uVar9 = lVar8 + 0xfU & 0xfffffffffffffff0;
        plVar6 = plVar11;
        if (uVar9 + 0x18 < 0x2000000) {
          plVar6 = (longlong *)(uVar9 + *plVar2);
        }
        plVar6[2] = (longlong)puVar4;
        *plVar6 = param_2 + 8;
        plVar6[1] = *(longlong *)(param_2 + 0x10);
        **(uint64_t **)(param_2 + 0x10) = plVar6;
        *(longlong **)(param_2 + 0x10) = plVar6;
        *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
        goto LAB_180278a68;
      }
      lVar8 = (longlong)&UNK_180a04ec0 - (longlong)pcVar14;
      while (*pcVar14 == pcVar14[lVar8]) {
        pcVar14 = pcVar14 + 1;
        if (pcVar1 <= pcVar14) goto LAB_1802789a4;
      }
    }
    puVar5 = (uint64_t *)puVar5[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



