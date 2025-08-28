#include "TaleWorlds.Native.Split.h"

// 99_part_08_part010.c - 2 个函数

// 函数: void FUN_1804e88b0(longlong param_1,char param_2,longlong **param_3,float *param_4,
void FUN_1804e88b0(longlong param_1,char param_2,longlong **param_3,float *param_4,
                  uint64_t param_5,float param_6,int32_t param_7,float param_8,
                  longlong **param_9,uint64_t param_10,int32_t param_11,int32_t param_12,
                  uint64_t param_13,uint64_t param_14,uint param_15,char param_16)

{
  int *piVar1;
  uint uVar2;
  void *puVar3;
  uint *puVar4;
  char cVar5;
  int8_t uVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  float *pfVar10;
  uint *puVar11;
  int iVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  longlong *plVar15;
  longlong *plVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  int8_t auStack_d38 [32];
  longlong **pplStack_d18;
  uint64_t uStack_d10;
  uint64_t uStack_d08;
  longlong **pplStack_d00;
  uint64_t uStack_cf8;
  uint64_t uStack_cf0;
  float *pfStack_ce8;
  int32_t uStack_ce0;
  int32_t uStack_cd8;
  float fStack_cd0;
  float fStack_cc8;
  uint64_t uStack_cc0;
  char cStack_cb8;
  char cStack_ca8;
  longlong *plStack_ca0;
  int32_t uStack_c98;
  int32_t uStack_c94;
  uint64_t uStack_c90;
  uint64_t uStack_c88;
  float *pfStack_c80;
  longlong **pplStack_c78;
  float fStack_c70;
  float fStack_c6c;
  float fStack_c68;
  int32_t uStack_c64;
  float fStack_c60;
  float fStack_c5c;
  float fStack_c58;
  int32_t uStack_c54;
  longlong *plStack_c50;
  uint64_t uStack_c48;
  uint64_t uStack_c40;
  void *apuStack_c38 [26];
  longlong *plStack_b68;
  longlong *plStack_b60;
  longlong *plStack_b58;
  int8_t auStack_b38 [2772];
  int32_t uStack_64;
  ulonglong uStack_58;
  longlong *plVar16;
  
  uStack_c40 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_d38;
  pplStack_c78 = param_9;
  uStack_c48 = param_10;
  uStack_c98 = 0;
  cStack_ca8 = param_2;
  uStack_c90 = param_3;
  pfStack_c80 = param_4;
  if ((param_2 != '\0') && (*(char *)(param_1 + 0x87b2f0) != '\0')) {
    *(int8_t *)(param_1 + 0x87b2f0) = 0;
    goto LAB_1804e9114;
  }
  fStack_c60 = 0.0;
  fStack_c5c = 0.0;
  fStack_c58 = 0.0;
  uStack_c54 = 0;
  fStack_c70 = 0.0;
  fStack_c6c = 0.0;
  fStack_c68 = 0.0;
  uStack_c64 = 0;
  uStack_c94 = 0xffffffff;
  plVar16 = (longlong *)0x0;
  plVar15 = (longlong *)0x0;
  plStack_c50 = (longlong *)0x0;
  if (param_2 == '\0') {
    plVar17 = plVar15;
    if ((_DAT_180c92514 == 1) && (param_16 != '\0')) {
      iVar12 = -1;
      fVar23 = 1e+30;
      iVar18 = 0;
      lVar21 = *(longlong *)(param_1 + 0x87b2f8);
      lVar9 = *(longlong *)(param_1 + 0x87b300) - lVar21;
      lVar9 = SUB168(SEXT816(-0x53896e7bf53896e7) * SEXT816(lVar9),8) + lVar9;
      lVar7 = lVar9 >> 0xb;
      lVar9 = lVar9 >> 0x3f;
      if (lVar7 != lVar9) {
        pfVar10 = (float *)(lVar21 + 0x5c);
        do {
          if ((param_6 == pfVar10[0x91]) &&
             (fVar22 = *pfVar10 - *(float *)((longlong)param_3 + 4),
             fVar22 = (pfVar10[-1] - *(float *)param_3) * (pfVar10[-1] - *(float *)param_3) +
                      fVar22 * fVar22 +
                      (pfVar10[1] - *(float *)(param_3 + 1)) *
                      (pfVar10[1] - *(float *)(param_3 + 1)), fVar22 < fVar23)) {
            fVar23 = fVar22;
            iVar12 = iVar18;
          }
          iVar18 = iVar18 + 1;
          pfVar10 = pfVar10 + 0x2f8;
        } while ((ulonglong)(longlong)iVar18 < (ulonglong)(lVar7 - lVar9));
        if (-1 < iVar12) {
          lVar9 = (longlong)iVar12 * 0xbe0;
          fStack_c58 = *(float *)(lVar9 + 0x60 + lVar21) - *(float *)(param_3 + 1);
          fStack_c5c = *(float *)(lVar9 + 0x5c + lVar21) - *(float *)((longlong)param_3 + 4);
          fStack_c60 = *(float *)(lVar9 + 0x58 + lVar21) - *(float *)param_3;
          uStack_c54 = 0x7f7fffff;
          if (*(char *)(lVar9 + 0x3d2 + lVar21) == '\0') {
            puVar13 = (uint64_t *)(lVar9 + 0x8c + lVar21);
            uStack_c90 = (longlong **)*puVar13;
            uStack_c88 = puVar13[1];
          }
          else {
            (**(code **)(**(longlong **)(lVar9 + 0xe8 + lVar21) + 0xa0))();
          }
          fStack_c68 = (float)uStack_c88 - param_8 * pfStack_c80[2];
          fStack_c6c = uStack_c90._4_4_ - param_8 * pfStack_c80[1];
          fStack_c70 = (float)uStack_c90 - param_8 * *pfStack_c80;
          uStack_c64 = 0x7f7fffff;
          plVar17 = *(longlong **)(lVar9 + 0x100 + lVar21);
          if (plVar17 != (longlong *)0x0) {
            uStack_c90 = (longlong **)plVar17;
            (**(code **)(*plVar17 + 0x28))();
          }
          uStack_c90 = (longlong **)0x0;
          plStack_ca0 = (longlong *)0x0;
          uStack_c98 = 0;
          uStack_c94 = *(int32_t *)(lVar9 + 0x2a4 + lVar21);
          uVar20 = *(ulonglong *)(param_1 + 0x87b300);
          uVar19 = *(longlong *)(param_1 + 0x87b2f8) + lVar9 + 0xbe0;
          plStack_c50 = plVar17;
          if (uVar19 < uVar20) {
            FUN_180504b50(uVar19);
            uVar20 = *(ulonglong *)(param_1 + 0x87b300);
          }
          *(uint64_t **)(param_1 + 0x87b300) = (uint64_t *)(uVar20 - 0xbe0);
          (*(code *)**(uint64_t **)(uVar20 - 0xbe0))();
          goto LAB_1804e8dc6;
        }
      }
      if (param_6 == *(float *)(param_1 + 0x98d930)) {
        func_0x000180588750(param_1 + 0x87b754);
        func_0x000180588750(param_1 + 0x87b754);
        plVar17 = plVar16;
        if (((-1 < *(int *)(param_1 + 0x98d930)) &&
            (iVar12 = *(int *)(*(longlong *)
                                ((longlong)*(int *)(param_1 + 0x98d930) * 0xa60 + 0x3630 + param_1)
                              + 0x2498), iVar12 != -1)) &&
           (plVar17 = plVar15, *(int *)((longlong)iVar12 * 0x68 + 0x58 + _DAT_180c96150) == 0x11)) {
          *(int8_t *)(param_1 + 0x87b2f0) = 1;
        }
        goto LAB_1804e8dc6;
      }
    }
    else {
LAB_1804e8dc6:
      plVar16 = plVar17;
      if ((param_6 == *(float *)(param_1 + 0x98d930)) && (_DAT_180c92514 == 1)) {
        *(uint64_t *)(param_1 + 0x87b700) =
             *(uint64_t *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x87b708) * 8);
      }
    }
    uVar19 = (ulonglong)param_15;
    piVar1 = (int *)(param_1 + 0x87b318);
    if ((int)param_15 < 0) {
      if (*(longlong *)(param_1 + 0x87b328) - *(longlong *)(param_1 + 0x87b320) >> 2 == 0) {
        FUN_1804fc9c0(piVar1);
      }
      puVar8 = (uint *)(*(longlong *)(param_1 + 0x87b328) + -4);
      uVar2 = *puVar8;
      uVar19 = (ulonglong)uVar2;
      *(uint **)(param_1 + 0x87b328) = puVar8;
      lVar21 = (ulonglong)(uVar2 & 0xf) * 0xbe0;
      *(int32_t *)
       (lVar21 + 8 + *(longlong *)(*(longlong *)(param_1 + 0x87b340) + (ulonglong)(uVar2 >> 4) * 8))
           = 1;
      *(int *)(param_1 + 0x87b360) = *(int *)(param_1 + 0x87b360) + 1;
      if (*piVar1 <= (int)uVar2) {
        *piVar1 = uVar2 + 1;
      }
      puVar13 = (uint64_t *)
                (*(longlong *)(*(longlong *)(param_1 + 0x87b340) + (ulonglong)(uVar2 >> 4) * 8) +
                lVar21);
      puVar3 = (void *)*puVar13;
      if (puVar3 == &UNK_180a308e0) {
        FUN_180585d80();
      }
      else {
        (**(code **)(puVar3 + 8))(puVar13);
      }
    }
    else {
      iVar12 = *(int *)(param_1 + 0x87b31c);
      while (iVar12 <= (int)param_15) {
        FUN_1804fc9c0(piVar1);
        iVar12 = *(int *)(param_1 + 0x87b31c);
      }
      iVar12 = 0;
      puVar8 = *(uint **)(param_1 + 0x87b328);
      puVar4 = *(uint **)(param_1 + 0x87b320);
      uVar20 = (longlong)puVar8 - (longlong)puVar4 >> 2;
      puVar11 = puVar4;
      if (uVar20 != 0) {
        do {
          if (*puVar11 == param_15) {
            puVar11 = puVar4 + iVar12 + 1;
            if (puVar11 < puVar8) {
                    // WARNING: Subroutine does not return
              memmove(puVar4 + iVar12,puVar11,(longlong)puVar8 - (longlong)puVar11);
            }
            *(uint **)(param_1 + 0x87b328) = puVar8 + -1;
            break;
          }
          iVar12 = iVar12 + 1;
          puVar11 = puVar11 + 1;
        } while ((ulonglong)(longlong)iVar12 < uVar20);
      }
      puVar13 = (uint64_t *)
                ((ulonglong)(param_15 & 0xf) * 0xbe0 +
                *(longlong *)(*(longlong *)(param_1 + 0x87b340) + (ulonglong)(param_15 >> 4) * 8));
      *(int32_t *)(puVar13 + 1) = 1;
      *(int *)(param_1 + 0x87b360) = *(int *)(param_1 + 0x87b360) + 1;
      if (*piVar1 <= (int)param_15) {
        *piVar1 = param_15 + 1;
      }
      if ((void *)*puVar13 == &UNK_180a308e0) {
        FUN_180585d80();
      }
      else {
        (**(code **)((void *)*puVar13 + 8))(puVar13);
      }
    }
    *(int8_t *)(param_1 + 0x87b388) = 1;
    lVar21 = (ulonglong)((uint)uVar19 & 0xf) * 0xbe0 +
             *(longlong *)(*(longlong *)(param_1 + 0x87b340) + (uVar19 >> 4) * 8);
  }
  else {
    FUN_180585c10(apuStack_c38);
    uVar19 = *(ulonglong *)(param_1 + 0x87b300);
    if (uVar19 < *(ulonglong *)(param_1 + 0x87b308)) {
      *(ulonglong *)(param_1 + 0x87b300) = uVar19 + 0xbe0;
      FUN_1804ff950(uVar19,apuStack_c38);
    }
    else {
      lVar21 = *(longlong *)(param_1 + 0x87b2f8);
      lVar9 = SUB168(SEXT816(-0x53896e7bf53896e7) * SEXT816((longlong)(uVar19 - lVar21)),8) +
              (uVar19 - lVar21);
      lVar9 = (lVar9 >> 0xb) - (lVar9 >> 0x3f);
      if (lVar9 == 0) {
        lVar9 = 1;
LAB_1804e89e2:
        lVar7 = FUN_18062b420(_DAT_180c8ed18,lVar9 * 0xbe0,*(int8_t *)(param_1 + 0x87b310));
        uVar19 = *(ulonglong *)(param_1 + 0x87b300);
        lVar21 = *(longlong *)(param_1 + 0x87b2f8);
      }
      else {
        lVar9 = lVar9 * 2;
        if (lVar9 != 0) goto LAB_1804e89e2;
        lVar7 = 0;
      }
      FUN_1805047e0(&plStack_ca0,lVar21,uVar19,lVar7);
      FUN_1804ff950(plStack_ca0,apuStack_c38);
      plStack_ca0 = plStack_ca0 + 0x17c;
      puVar13 = *(uint64_t **)(param_1 + 0x87b300);
      puVar14 = *(uint64_t **)(param_1 + 0x87b2f8);
      if (puVar14 != puVar13) {
        do {
          (**(code **)*puVar14)(puVar14,0);
          puVar14 = puVar14 + 0x17c;
        } while (puVar14 != puVar13);
        puVar14 = *(uint64_t **)(param_1 + 0x87b2f8);
      }
      if (puVar14 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar14);
      }
      *(longlong *)(param_1 + 0x87b2f8) = lVar7;
      *(longlong **)(param_1 + 0x87b300) = plStack_ca0;
      *(longlong *)(param_1 + 0x87b308) = lVar7 + lVar9 * 0xbe0;
      param_3 = uStack_c90;
      param_2 = cStack_ca8;
    }
    lVar21 = *(longlong *)(param_1 + 0x87b300) + -0xbe0;
    apuStack_c38[0] = &UNK_180a308e0;
    uStack_64 = 0;
    FUN_180506660(auStack_b38);
    if (plStack_b58 != (longlong *)0x0) {
      (**(code **)(*plStack_b58 + 0x38))();
    }
    if (plStack_b60 != (longlong *)0x0) {
      (**(code **)(*plStack_b60 + 0x38))();
    }
    if (plStack_b68 != (longlong *)0x0) {
      (**(code **)(*plStack_b68 + 0x38))();
    }
    apuStack_c38[0] = &UNK_180a308c0;
  }
  FUN_18062b1e0(_DAT_180c8ed18,0x1f8,8,3);
  lVar9 = FUN_18058f390();
  uStack_c90 = &plStack_ca0;
  plStack_ca0 = plVar16;
  if (plVar16 != (longlong *)0x0) {
    (**(code **)(*plVar16 + 0x28))();
  }
  pfStack_ce8 = (float *)CONCAT71(pfStack_ce8._1_7_,1);
  uStack_cf0 = (float *)CONCAT44(uStack_cf0._4_4_,0xffffffff);
  uStack_cf8 = 0;
  pplStack_d00 = &plStack_ca0;
  uStack_d08 = (longlong **)((ulonglong)uStack_d08._4_4_ << 0x20);
  uStack_d10 = 0;
  pplStack_d18 = (longlong **)&UNK_180a30990;
  FUN_18058e430(lVar9,pplStack_c78,uStack_c48,param_11);
  *(int16_t *)(lVar9 + 8) = 1;
  lVar7 = *(longlong *)(lVar9 + 0xf8);
  if (lVar7 != 0) {
    if ((*(short *)(lVar9 + 10) <
         *(short *)((longlong)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x96 + *(longlong *)(lVar9 + 0xd0)))
       && (cVar5 = func_0x000180507950(lVar9), cVar5 != '\0')) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    *(int8_t *)(lVar7 + 0x126) = uVar6;
  }
  pplStack_c78 = &plStack_ca0;
  plStack_ca0 = plVar16;
  if (plVar16 != (longlong *)0x0) {
    (**(code **)(*plVar16 + 0x28))(plVar16);
  }
  cStack_cb8 = param_16;
  uStack_cc0 = param_14;
  fStack_cc8 = param_6;
  fStack_cd0 = param_8;
  uStack_cd8 = param_7;
  uStack_ce0 = uStack_c94;
  pfStack_ce8 = &fStack_c70;
  uStack_cf0 = &fStack_c60;
  uStack_cf8 = param_5;
  pplStack_d00 = (longlong **)pfStack_c80;
  uStack_d10 = CONCAT44(uStack_d10._4_4_,param_12);
  pplStack_d18 = &plStack_ca0;
  uStack_d08 = param_3;
  FUN_180581b00(lVar21,param_1,param_2,lVar9);
  if (plVar16 != (longlong *)0x0) {
    (**(code **)(*plVar16 + 0x38))(plVar16);
  }
LAB_1804e9114:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_d38);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804e9160(longlong param_1,uint param_2)
void FUN_1804e9160(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint64_t *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint auStackX_10 [2];
  
  uVar7 = (ulonglong)(param_2 >> 4);
  lVar6 = (ulonglong)(param_2 & 0xf) * 0xbe0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x87b340) + uVar7 * 8) + lVar6;
  if (*(char *)(lVar4 + 0x3d1) != '\0') {
    if (*(longlong *)(lVar4 + 0xe0) != 0) {
      if (*(longlong *)(*(longlong *)(lVar4 + 0xe0) + 0x20) != 0) {
        FUN_180198980();
      }
      plVar1 = *(longlong **)(lVar4 + 0xe0);
      *(uint64_t *)(lVar4 + 0xe0) = 0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      *(uint64_t *)(lVar4 + 0xe8) = 0;
    }
    *(int16_t *)(lVar4 + 0x3d1) = 0;
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&UNK_180a36f00);
  }
  *(int8_t *)(lVar4 + 0x3d0) = 0;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x87b340) + uVar7 * 8) + lVar6;
  if (*(longlong **)(lVar6 + 0xd0) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(lVar6 + 0xd0) + 0xd8))();
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(lVar6 + 0xd0) + 0x68))();
    }
    plVar1 = *(longlong **)(lVar6 + 0xd0);
    *(uint64_t *)(lVar6 + 0xd0) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  if (*(longlong **)(lVar6 + 0xd8) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0xd8))();
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x68))();
    }
    plVar1 = *(longlong **)(lVar6 + 0xd8);
    *(uint64_t *)(lVar6 + 0xd8) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  if (*(int *)(lVar6 + 0x2a4) != -1) {
    FUN_1802e5a50(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x18) + 0x8228);
    *(int32_t *)(lVar6 + 0x2a4) = 0xffffffff;
  }
  lVar4 = *(longlong *)(lVar6 + 0xf0);
  if (lVar4 != 0) {
    FUN_18058f420(lVar4);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar4);
  }
  *(uint64_t *)(lVar6 + 0xf0) = 0;
  puVar5 = (uint64_t *)
           ((ulonglong)(param_2 & 0xf) * 0xbe0 +
           *(longlong *)(*(longlong *)(param_1 + 0x87b340) + uVar7 * 8));
  auStackX_10[0] = param_2;
  if ((void *)*puVar5 != &UNK_180a308e0) {
    (**(code **)((void *)*puVar5 + 0x10))(puVar5);
  }
  *(int32_t *)(puVar5 + 1) = 0;
  FUN_1800571e0(param_1 + 0x87b320,auStackX_10);
  if (*(int *)(param_1 + 0x87b318) - 1U == param_2) {
    *(int32_t *)(param_1 + 0x87b318) = 0;
    uVar3 = *(int *)(param_1 + 0x87b31c) - 1;
    if (-1 < (int)uVar3) {
      do {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x87b340) + (ulonglong)(uVar3 >> 4) * 8)
                     + 8 + (ulonglong)(uVar3 & 0xf) * 0xbe0) != 0) {
          *(uint *)(param_1 + 0x87b318) = uVar3 + 1;
          break;
        }
        uVar3 = uVar3 - 1;
      } while (-1 < (int)uVar3);
    }
  }
  *(int8_t *)(param_1 + 0x87b388) = 1;
                    // WARNING: Could not recover jumptable at 0x0001804e93cc. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(_DAT_180c8ece0 + 0x248))(*(int32_t *)(param_1 + 0x98d928),param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




