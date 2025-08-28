#include "TaleWorlds.Native.Split.h"

// 99_part_06_part054.c - 5 个函数

// 函数: void FUN_1803dd4f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803dd4f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a249c0;
  if (param_1[0x21] != 0) {
    plVar1 = (longlong *)param_1[0x21];
    param_1[0x21] = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  if (param_1[0x22] != 0) {
    plVar1 = (longlong *)param_1[0x22];
    param_1[0x22] = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  if ((longlong *)param_1[0x85] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x85] + 0x38))();
  }
  param_1[0x81] = &UNK_180a3c3e0;
  if (param_1[0x82] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x82] = 0;
  *(int32_t *)(param_1 + 0x84) = 0;
  param_1[0x81] = &UNK_18098bcb0;
  if ((longlong *)param_1[0x80] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x80] + 0x38))();
  }
  FUN_1803e1c20(param_1 + 0x34,param_1[0x36],param_3,param_4,uVar2);
  FUN_1803e1c20(param_1 + 0x2e,param_1[0x30]);
  param_1[0x27] = &UNK_180a3c3e0;
  if (param_1[0x28] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x28] = 0;
  *(int32_t *)(param_1 + 0x2a) = 0;
  param_1[0x27] = &UNK_18098bcb0;
  param_1[0x23] = &UNK_180a3c3e0;
  if (param_1[0x24] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x24] = 0;
  *(int32_t *)(param_1 + 0x26) = 0;
  param_1[0x23] = &UNK_18098bcb0;
  if ((longlong *)param_1[0x22] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x22] + 0x38))();
  }
  if ((longlong *)param_1[0x21] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x21] + 0x38))();
  }
  *param_1 = &UNK_180a14860;
  param_1[5] = 0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



float FUN_1803dd6b0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  FUN_180287b30(param_2 + 0xc0,&fStack_68);
  fVar4 = *(float *)(param_1 + 0xb4);
  fVar1 = *(float *)(param_1 + 0xb8);
  fVar3 = *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38);
  fVar2 = *(float *)(param_1 + 0xb0);
  fStack_38 = fVar4 * fStack_58 + fStack_68 * fVar2 + fVar1 * fStack_48 + fStack_38;
  fStack_34 = fVar4 * fStack_54 + fStack_64 * fVar2 + fVar1 * fStack_44 + fStack_34;
  fStack_30 = fVar4 * fStack_50 + fStack_60 * fVar2 + fVar1 * fStack_40 + fStack_30;
  fStack_30 = fStack_30 * fStack_30;
  fVar4 = 1.0 / (fVar3 - fStack_30);
  fVar4 = SQRT(ABS(((fStack_34 * fStack_34 + fStack_38 * fStack_38 + fStack_30) - fVar3) * fVar4)) *
          *(float *)(param_2 + 0x11c) * -3.1415927 * *(float *)(param_2 + 0x11c) * fVar3 * fVar4 *
          (float)param_3 * (float)param_4 * 0.25;
  if (fVar4 < 0.0) {
    fVar4 = (float)(param_3 * param_4);
  }
  return SQRT(fVar4) * 0.23809524;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803dd820(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4,
void FUN_1803dd820(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4,
                  uint64_t param_5,uint64_t param_6,int param_7,int param_8,int param_9)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  longlong *plVar11;
  char cVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  ulonglong *puVar16;
  uint64_t *******pppppppuVar17;
  uint64_t *******pppppppuVar18;
  uint64_t *******pppppppuVar19;
  longlong **pplVar20;
  longlong lVar21;
  ulonglong *puVar22;
  int iVar23;
  bool bVar24;
  int8_t auStack_4e8 [32];
  int iStack_4c8;
  int iStack_4c4;
  uint64_t uStack_4c0;
  float fStack_4b8;
  int32_t uStack_4b4;
  longlong lStack_4b0;
  longlong *plStack_4a8;
  longlong lStack_4a0;
  uint64_t uStack_498;
  float fStack_490;
  int32_t uStack_48c;
  uint64_t uStack_488;
  uint64_t *******pppppppuStack_478;
  uint64_t *******pppppppuStack_470;
  uint64_t *******pppppppuStack_468;
  uint64_t uStack_460;
  uint64_t uStack_458;
  int32_t uStack_450;
  longlong lStack_448;
  longlong lStack_440;
  uint64_t uStack_438;
  ulonglong uStack_430;
  uint64_t uStack_428;
  ulonglong uStack_420;
  uint64_t uStack_418;
  ulonglong uStack_410;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  int32_t uStack_3fc;
  longlong *plStack_3f8;
  longlong lStack_3f0;
  uint64_t uStack_3e8;
  int32_t uStack_3e0;
  uint64_t uStack_3b8;
  int8_t auStack_3b0 [64];
  longlong *aplStack_370 [8];
  int8_t auStack_330 [72];
  int8_t auStack_2e8 [80];
  uint64_t uStack_298;
  uint64_t uStack_290;
  uint64_t uStack_278;
  uint64_t uStack_270;
  uint64_t uStack_258;
  uint64_t uStack_250;
  int32_t uStack_238;
  int32_t uStack_234;
  int32_t uStack_230;
  int32_t uStack_22c;
  uint64_t uStack_228;
  uint64_t uStack_220;
  uint64_t uStack_218;
  uint64_t uStack_210;
  uint64_t uStack_208;
  uint64_t uStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  int32_t uStack_1ec;
  char cStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  int8_t auStack_1a8 [320];
  ulonglong uStack_68;
  
  uStack_3b8 = 0xfffffffffffffffe;
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_4e8;
  iStack_4c8 = param_9;
  puVar1 = (uint64_t *)(param_4 + 0x220);
  lStack_4a0 = param_4;
  uStack_488 = param_2;
  lStack_448 = param_3;
  lStack_440 = param_1;
  FUN_180094c20(auStack_2e8);
  FUN_1803e0670(param_1,param_9,auStack_2e8);
  lVar21 = (longlong)param_9 + (longlong)param_8 * 6;
  puVar13 = (uint64_t *)(param_3 + 0x35c4 + lVar21 * 0x40);
  *puVar13 = uStack_298;
  puVar13[1] = uStack_290;
  puVar13 = (uint64_t *)(param_3 + 0x35d4 + lVar21 * 0x40);
  *puVar13 = uStack_278;
  puVar13[1] = uStack_270;
  puVar13 = (uint64_t *)(param_3 + 0x35e4 + lVar21 * 0x40);
  *puVar13 = uStack_258;
  puVar13[1] = uStack_250;
  puVar2 = (int32_t *)(param_3 + 0x35f4 + lVar21 * 0x40);
  *puVar2 = uStack_238;
  puVar2[1] = uStack_234;
  puVar2[2] = uStack_230;
  puVar2[3] = uStack_22c;
  if (cStack_1c4 == '\0') {
    pplVar20 = aplStack_370;
    puVar13 = &uStack_228;
  }
  else {
    uStack_438 = uStack_228;
    uStack_430 = uStack_220;
    uStack_428 = uStack_218;
    uStack_420 = uStack_210;
    uStack_418 = uStack_208;
    uStack_410 = uStack_200;
    uStack_3fc = uStack_1ec;
    fStack_408 = fStack_1f8 + fStack_1c0;
    fStack_404 = fStack_1f4 + fStack_1bc;
    fStack_400 = fStack_1f0 + fStack_1b8;
    pplVar20 = &plStack_3f8;
    puVar13 = &uStack_438;
  }
  puVar13 = (uint64_t *)FUN_180287b30(puVar13,pplVar20);
  uStack_428 = puVar13[2];
  uStack_438 = *puVar13;
  fStack_408 = *(float *)(puVar13 + 6);
  fStack_404 = *(float *)((longlong)puVar13 + 0x34);
  fStack_400 = *(float *)(puVar13 + 7);
  uStack_418 = puVar13[4];
  uStack_430 = puVar13[1] & 0xffffffff;
  uStack_420 = puVar13[3] & 0xffffffff;
  uStack_410 = puVar13[5] & 0xffffffff;
  uStack_3fc = 0x3f800000;
  uVar14 = FUN_180286010(auStack_2e8,auStack_330,0);
  puVar15 = (uint64_t *)FUN_1800946d0(&uStack_438,auStack_3b0,uVar14);
  lVar21 = (longlong)param_9 * 0x40;
  uVar14 = puVar15[1];
  puVar13 = (uint64_t *)(lVar21 + 0x1d0 + param_1);
  *puVar13 = *puVar15;
  puVar13[1] = uVar14;
  uVar14 = puVar15[3];
  puVar13 = (uint64_t *)(lVar21 + 0x1e0 + param_1);
  *puVar13 = puVar15[2];
  puVar13[1] = uVar14;
  uVar8 = *(int32_t *)((longlong)puVar15 + 0x24);
  uVar9 = *(int32_t *)(puVar15 + 5);
  uVar10 = *(int32_t *)((longlong)puVar15 + 0x2c);
  puVar2 = (int32_t *)(lVar21 + 0x1f0 + param_1);
  *puVar2 = *(int32_t *)(puVar15 + 4);
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  uVar8 = *(int32_t *)((longlong)puVar15 + 0x34);
  uVar9 = *(int32_t *)(puVar15 + 7);
  uVar10 = *(int32_t *)((longlong)puVar15 + 0x3c);
  puVar2 = (int32_t *)(lVar21 + 0x200 + param_1);
  *puVar2 = *(int32_t *)(puVar15 + 6);
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  lVar21 = FUN_180286010(auStack_2e8,auStack_3b0,0);
  *(int32_t *)(param_1 + 0x398) = *(int32_t *)(lVar21 + 0x28);
  lVar21 = FUN_180286010(auStack_2e8,auStack_3b0,0);
  *(int32_t *)(param_1 + 0x39c) = *(int32_t *)(lVar21 + 0x38);
  FUN_180094c20(auStack_1a8);
  FUN_1803e0670(param_1,param_9,auStack_1a8);
  uStack_450 = 3;
  pppppppuStack_478 = &pppppppuStack_478;
  pppppppuStack_470 = &pppppppuStack_478;
  pppppppuStack_468 = (uint64_t *******)0x0;
  uStack_460 = 0;
  uStack_458 = 0;
  plStack_3f8 = (longlong *)0x0;
  lStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = 3;
  fVar3 = *(float *)(param_1 + 0x30);
  fStack_490 = *(float *)(param_1 + 0xb8) + fVar3;
  uStack_498 = CONCAT44(*(float *)(param_1 + 0xb4) + fVar3,*(float *)(param_1 + 0xb0) + fVar3);
  uStack_48c = 0x7f7fffff;
  fStack_4b8 = *(float *)(param_1 + 0xb8) - fVar3;
  uStack_4c0 = CONCAT44(*(float *)(param_1 + 0xb4) - fVar3,*(float *)(param_1 + 0xb0) - fVar3);
  uStack_4b4 = 0x7f7fffff;
  FUN_1803e1950(param_4 + 0x60c80,&plStack_3f8,&uStack_4c0);
  iStack_4c4 = 0;
  uStack_498 = lStack_3f0 - (longlong)plStack_3f8 >> 3;
  plVar11 = plStack_3f8;
  if (uStack_498 != 0) {
    do {
      plStack_4a8 = plVar11;
      iVar23 = 0;
      uStack_4c0 = *plStack_4a8;
      lVar21 = *(longlong *)(uStack_4c0 + 8);
      if (*(longlong *)(uStack_4c0 + 0x10) - lVar21 >> 2 != 0) {
        lStack_4b0 = 0;
        do {
          uVar5 = *(uint *)(lStack_4b0 + lVar21);
          puVar16 = (ulonglong *)((ulonglong)uVar5 * 0x10 + *(longlong *)(param_4 + 0x60830));
          puVar22 = puVar16 + 1;
          if ((*puVar16 & 0xffffffff00000000) == 0) {
            puVar22 = (ulonglong *)0x0;
          }
          if ((puVar22 != (ulonglong *)0x0) && (uVar6 = *puVar22, uVar6 != 0)) {
            pppppppuVar19 = &pppppppuStack_478;
            pppppppuVar17 = pppppppuStack_468;
            if (pppppppuStack_468 != (uint64_t *******)0x0) {
              do {
                if (*(int *)(pppppppuVar17 + 4) < (int)uVar5) {
                  pppppppuVar18 = (uint64_t *******)*pppppppuVar17;
                }
                else {
                  pppppppuVar18 = (uint64_t *******)pppppppuVar17[1];
                  pppppppuVar19 = pppppppuVar17;
                }
                pppppppuVar17 = pppppppuVar18;
              } while (pppppppuVar18 != (uint64_t *******)0x0);
              if (((uint64_t ********)pppppppuVar19 != &pppppppuStack_478) &&
                 (*(int *)(pppppppuVar19 + 4) <= (int)uVar5)) goto LAB_1803ddef4;
            }
            bVar4 = *(byte *)(uVar6 + 0x2e8);
            if (((bVar4 & 1) != 0) && (((bVar4 & 2) != 0 && ((bVar4 & 8) != 0)))) {
              FUN_1801c0d90(uVar6);
              cVar12 = FUN_18063c5e0(auStack_1a8,*(uint64_t *)(uVar6 + 0x28));
              if (cVar12 != '\0') {
                lVar21 = FUN_18062b420(_DAT_180c8ed18,0x28,*(int8_t *)(param_4 + 0x248));
                *(ulonglong *)(lVar21 + 0x20) = uVar6;
                bVar24 = true;
                puVar13 = puVar1;
                puVar15 = *(uint64_t **)(param_4 + 0x230);
                while (puVar15 != (uint64_t *)0x0) {
                  bVar24 = uVar6 < (ulonglong)puVar15[4];
                  puVar13 = puVar15;
                  if (bVar24) {
                    puVar15 = (uint64_t *)puVar15[1];
                  }
                  else {
                    puVar15 = (uint64_t *)*puVar15;
                  }
                }
                puVar15 = puVar13;
                if (bVar24) {
                  if (puVar13 == *(uint64_t **)(param_4 + 0x228)) goto LAB_1803ddcfe;
                  puVar15 = (uint64_t *)func_0x00018066b9a0(puVar13);
                }
                if (*(ulonglong *)(lVar21 + 0x20) <= (ulonglong)puVar15[4]) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900(lVar21);
                }
LAB_1803ddcfe:
                if ((puVar13 == puVar1) || (*(ulonglong *)(lVar21 + 0x20) < (ulonglong)puVar13[4]))
                {
                  uVar14 = 0;
                }
                else {
                  uVar14 = 1;
                }
                    // WARNING: Subroutine does not return
                FUN_18066bdc0(lVar21,puVar13,puVar1,uVar14);
              }
            }
          }
LAB_1803ddef4:
          iVar23 = iVar23 + 1;
          lStack_4b0 = lStack_4b0 + 4;
          lVar21 = *(longlong *)(uStack_4c0 + 8);
        } while ((ulonglong)(longlong)iVar23 <
                 (ulonglong)(*(longlong *)(uStack_4c0 + 0x10) - lVar21 >> 2));
      }
      iStack_4c4 = iStack_4c4 + 1;
      plStack_4a8 = plStack_4a8 + 1;
      plVar11 = plStack_4a8;
      param_9 = iStack_4c8;
    } while ((ulonglong)(longlong)iStack_4c4 < uStack_498);
  }
  if (plStack_3f8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_9 = param_9 + param_7 * 6;
  iStack_4c4 = param_9;
  FUN_1800571e0(param_4 + 0x27f0,&iStack_4c4);
  iStack_4c8 = param_9;
  FUN_1800571e0(param_4 + 0x2810,&iStack_4c8);
  pppppppuVar19 = pppppppuStack_468;
  if ((*(char *)(param_4 + 0x563) != '\0') &&
     (lVar21 = *(longlong *)(param_4 + 0x5b0) - *(longlong *)(param_4 + 0x5a8),
     iVar7 = (int)(lVar21 >> 0x3f), iVar23 = (int)(lVar21 / 0xc) + iVar7,
     iVar23 != iVar7 && -1 < iVar23 - iVar7)) {
    plStack_3f8 = (longlong *)0x0;
    lStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_3e0 = 3;
    FUN_180080ca0(&plStack_3f8,
                  (*(longlong *)(param_4 + 0x610) - *(longlong *)(param_4 + 0x608)) / 0xbc);
                    // WARNING: Subroutine does not return
    memset(plStack_3f8,0xffffffff,lStack_3f0 - (longlong)plStack_3f8 & 0xfffffffffffffffc);
  }
  if (pppppppuStack_468 == (uint64_t *******)0x0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_4e8);
  }
  FUN_18004b790(&pppppppuStack_478,*pppppppuStack_468);
                    // WARNING: Subroutine does not return
  FUN_18064e900(pppppppuVar19);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803de3f0(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4,
void FUN_1803de3f0(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4,
                  uint64_t param_5,longlong *param_6,int param_7,int param_8,uint param_9)

{
  int32_t *puVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  char cVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  int8_t *puVar15;
  int *piVar16;
  longlong lVar17;
  ulonglong *puVar18;
  int iVar19;
  int *piVar20;
  uint uVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  int8_t auStack_478 [32];
  uint uStack_458;
  uint uStack_454;
  ulonglong uStack_450;
  uint64_t uStack_448;
  ulonglong uStack_440;
  uint64_t uStack_438;
  ulonglong uStack_430;
  uint64_t uStack_428;
  ulonglong uStack_420;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  int32_t uStack_40c;
  longlong lStack_408;
  longlong lStack_400;
  longlong *plStack_3f8;
  longlong lStack_3f0;
  longlong lStack_3e8;
  int8_t auStack_3e0 [16];
  int8_t auStack_3d0 [64];
  int8_t auStack_390 [64];
  int8_t auStack_350 [64];
  int8_t auStack_310 [72];
  int8_t auStack_2c8 [80];
  uint64_t uStack_278;
  uint64_t uStack_270;
  uint64_t uStack_258;
  uint64_t uStack_250;
  uint64_t uStack_238;
  uint64_t uStack_230;
  int32_t uStack_218;
  int32_t uStack_214;
  int32_t uStack_210;
  int32_t uStack_20c;
  uint64_t uStack_208;
  uint64_t uStack_200;
  uint64_t uStack_1f8;
  uint64_t uStack_1f0;
  uint64_t uStack_1e8;
  uint64_t uStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  int32_t uStack_1cc;
  char cStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  int8_t auStack_188 [320];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_478;
  lStack_400 = param_4 + 0x220;
  uVar23 = (ulonglong)(int)param_9;
  plStack_3f8 = param_6;
  uStack_458 = param_9;
  lStack_408 = param_3;
  lStack_3e8 = param_4;
  FUN_180094c20(auStack_2c8);
  FUN_1803e0670(param_1,param_9,auStack_2c8);
  lVar17 = uVar23 + (longlong)param_8 * 6;
  puVar9 = (uint64_t *)(param_3 + 0x35c4 + lVar17 * 0x40);
  *puVar9 = uStack_278;
  puVar9[1] = uStack_270;
  puVar9 = (uint64_t *)(param_3 + 0x35d4 + lVar17 * 0x40);
  *puVar9 = uStack_258;
  puVar9[1] = uStack_250;
  puVar9 = (uint64_t *)(param_3 + 0x35e4 + lVar17 * 0x40);
  *puVar9 = uStack_238;
  puVar9[1] = uStack_230;
  puVar1 = (int32_t *)(param_3 + 0x35f4 + lVar17 * 0x40);
  *puVar1 = uStack_218;
  puVar1[1] = uStack_214;
  puVar1[2] = uStack_210;
  puVar1[3] = uStack_20c;
  if (cStack_1a4 == '\0') {
    puVar15 = auStack_390;
    puVar9 = &uStack_208;
  }
  else {
    puVar15 = auStack_3d0;
    puVar9 = &uStack_448;
    uStack_438 = uStack_1f8;
    uStack_430 = uStack_1f0;
    uStack_40c = uStack_1cc;
    fStack_418 = fStack_1d8 + fStack_1a0;
    uStack_448 = uStack_208;
    uStack_440 = uStack_200;
    uStack_428 = uStack_1e8;
    uStack_420 = uStack_1e0;
    fStack_414 = fStack_1d4 + fStack_19c;
    fStack_410 = fStack_1d0 + fStack_198;
  }
  puVar9 = (uint64_t *)FUN_180287b30(puVar9,puVar15);
  uStack_448 = *puVar9;
  uStack_438 = puVar9[2];
  uStack_440 = puVar9[1] & 0xffffffff;
  uStack_428 = puVar9[4];
  uStack_430 = puVar9[3] & 0xffffffff;
  fStack_418 = *(float *)(puVar9 + 6);
  fStack_414 = *(float *)((longlong)puVar9 + 0x34);
  fStack_410 = *(float *)(puVar9 + 7);
  uStack_420 = puVar9[5] & 0xffffffff;
  uStack_40c = 0x3f800000;
  uVar10 = FUN_180286010(auStack_2c8,auStack_350,0);
  puVar11 = (uint64_t *)FUN_1800946d0(&uStack_448,auStack_310,uVar10);
  lVar17 = uVar23 * 0x40;
  uVar10 = puVar11[1];
  puVar9 = (uint64_t *)(lVar17 + 0x1d0 + param_1);
  *puVar9 = *puVar11;
  puVar9[1] = uVar10;
  uVar10 = puVar11[3];
  puVar9 = (uint64_t *)(lVar17 + 0x1e0 + param_1);
  *puVar9 = puVar11[2];
  puVar9[1] = uVar10;
  uVar5 = *(int32_t *)((longlong)puVar11 + 0x24);
  uVar6 = *(int32_t *)(puVar11 + 5);
  uVar7 = *(int32_t *)((longlong)puVar11 + 0x2c);
  puVar1 = (int32_t *)(lVar17 + 0x1f0 + param_1);
  *puVar1 = *(int32_t *)(puVar11 + 4);
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  uVar5 = *(int32_t *)((longlong)puVar11 + 0x34);
  uVar6 = *(int32_t *)(puVar11 + 7);
  uVar7 = *(int32_t *)((longlong)puVar11 + 0x3c);
  puVar1 = (int32_t *)(lVar17 + 0x200 + param_1);
  *puVar1 = *(int32_t *)(puVar11 + 6);
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  FUN_180094c20(auStack_188);
  FUN_1803e0670(param_1,param_9,auStack_188);
  lStack_3f0 = (longlong)(int)param_6[1];
  puVar18 = (ulonglong *)0x0;
  uStack_454 = 0;
  puVar13 = puVar18;
  puVar22 = puVar18;
  if (0 < lStack_3f0) {
    do {
      puVar14 = (ulonglong *)((longlong)puVar13 * 0x10 + *param_6);
      puVar13 = puVar14 + 1;
      if ((*puVar14 & 0xffffffff00000000) == 0) {
        puVar13 = puVar18;
      }
      if ((((puVar13 != (ulonglong *)0x0) &&
           (uVar3 = *puVar13, uStack_450 = uVar3, *(char *)(uVar3 + 0x2e4) != '\0')) &&
          (bVar2 = *(byte *)(uVar3 + 0x2e8), (bVar2 & 1) != 0)) &&
         (((bVar2 & 2) != 0 && ((bVar2 & 8) != 0)))) {
        FUN_1801c0d90(uVar3);
        cVar8 = FUN_18063c5e0(auStack_188,*(uint64_t *)(uVar3 + 0x28));
        if (cVar8 != '\0') {
          *(int32_t *)(*(longlong *)(lStack_408 + 0x98f8) + (longlong)puVar22 * 4) = 1;
          FUN_18008d710(lStack_400,auStack_3e0,&uStack_450);
          iVar19 = (int)uVar23 + param_7 * 6;
          lVar17 = *(longlong *)(uStack_450 + 0x28);
          piVar20 = *(int **)(lVar17 + 0x158);
          for (piVar16 = *(int **)(lVar17 + 0x150); (piVar16 != piVar20 && (*piVar16 != iVar19));
              piVar16 = piVar16 + 1) {
          }
          if (piVar20 < *(int **)(lVar17 + 0x160)) {
            *(int **)(lVar17 + 0x158) = piVar20 + 1;
            *piVar20 = iVar19;
          }
          else {
            piVar16 = *(int **)(lVar17 + 0x150);
            lVar12 = (longlong)piVar20 - (longlong)piVar16 >> 2;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_1803de776:
              puVar13 = (ulonglong *)
                        FUN_18062b420(_DAT_180c8ed18,lVar12 * 4,*(int8_t *)(lVar17 + 0x168));
              piVar16 = *(int **)(lVar17 + 0x150);
              piVar20 = *(int **)(lVar17 + 0x158);
            }
            else {
              lVar12 = lVar12 * 2;
              puVar13 = puVar18;
              if (lVar12 != 0) goto LAB_1803de776;
            }
            if (piVar16 != piVar20) {
                    // WARNING: Subroutine does not return
              memmove(puVar13,piVar16,(longlong)piVar20 - (longlong)piVar16);
            }
            *(int *)puVar13 = iVar19;
            if (*(longlong *)(lVar17 + 0x150) != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *(ulonglong **)(lVar17 + 0x150) = puVar13;
            uVar23 = (ulonglong)uStack_458;
            *(longlong *)(lVar17 + 0x160) = (longlong)puVar13 + lVar12 * 4;
            *(longlong *)(lVar17 + 0x158) = (longlong)puVar13 + 4;
            param_6 = plStack_3f8;
          }
        }
      }
      puVar22 = (ulonglong *)((longlong)puVar22 + 1);
      uStack_454 = uStack_454 + 1;
      puVar13 = (ulonglong *)(ulonglong)uStack_454;
      param_4 = lStack_3e8;
    } while ((longlong)puVar22 < lStack_3f0);
  }
  puVar13 = puVar18;
  if (*(longlong *)(param_4 + 0xe8) - *(longlong *)(param_4 + 0xe0) >> 3 != 0) {
    do {
      plVar4 = *(longlong **)((longlong)puVar18 + *(longlong *)(param_4 + 0xe0));
      (**(code **)(*plVar4 + 0x28))(plVar4,param_7,uVar23 & 0xffffffff,auStack_188);
      puVar18 = puVar18 + 1;
      uVar21 = (int)puVar13 + 1;
      puVar13 = (ulonglong *)(ulonglong)uVar21;
    } while ((ulonglong)(longlong)(int)uVar21 <
             (ulonglong)(*(longlong *)(param_4 + 0xe8) - *(longlong *)(param_4 + 0xe0) >> 3));
  }
  uStack_458 = (int)uVar23 + param_7 * 6;
  FUN_1800571e0(param_4 + 0x2810,&uStack_458);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_478);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_1803de8d0(longlong param_1,float *param_2)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  float afStack_78 [28];
  
  fVar8 = 0.0;
  if (*(float *)(param_1 + 0xf0) <= 0.0) {
    fVar8 = *(float *)(param_1 + 0xd4);
    fVar4 = *(float *)(param_1 + 0xd8);
    fVar6 = *(float *)(param_1 + 0xdc);
  }
  else {
    fVar5 = 0.0;
    iVar2 = 3;
    fVar7 = 1.0;
    fVar4 = *(float *)(param_1 + 0xf4);
    lVar1 = *(longlong *)(param_1 + 0x28);
    uStack_84 = *(int32_t *)(lVar1 + 0xa4);
    uStack_80 = *(int32_t *)(lVar1 + 0xa8);
    uStack_7c = *(int32_t *)(lVar1 + 0xac);
    fStack_88 = *(float *)(lVar1 + 0xa0) +
                (float)(_DAT_180c8ed30 % 1000000000) * 1e-05 + (float)*(int *)(param_1 + 0xf8);
    fVar6 = 0.6;
    do {
      FUN_18046d350(fVar7 * fVar4,&fStack_88,afStack_78);
      iVar2 = iVar2 + -1;
      fVar3 = afStack_78[0] * fVar7;
      fVar8 = fVar8 + fVar7;
      fVar7 = fVar7 * fVar6;
      fVar5 = fVar5 + fVar3;
      fVar6 = 0.61;
    } while (-1 < iVar2);
    fVar6 = (fVar5 / fVar8) * *(float *)(param_1 + 0xf0) * 3.0 + 1.0;
    fVar8 = fVar6 * *(float *)(param_1 + 0xd4);
    fVar4 = fVar6 * *(float *)(param_1 + 0xd8);
    fVar6 = fVar6 * *(float *)(param_1 + 0xdc);
  }
  fVar5 = *(float *)(param_1 + 0xe4);
  param_2[3] = 3.4028235e+38;
  param_2[2] = fVar6 * fVar5;
  *param_2 = fVar8 * fVar5;
  param_2[1] = fVar4 * fVar5;
  return param_2;
}






// 函数: void FUN_1803de915(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_1803de915(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  uint64_t param_5,float param_6)

{
  float fVar1;
  longlong lVar2;
  longlong in_RAX;
  longlong unaff_RBX;
  float *unaff_RSI;
  int iVar3;
  uint64_t unaff_RDI;
  int in_XMM0_Da;
  float fVar4;
  float fVar5;
  float unaff_XMM6_Da;
  int32_t unaff_XMM7_Da;
  float fVar6;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  int32_t unaff_XMM9_Da;
  float fVar7;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RDI;
  iVar3 = 3;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM7_Dd;
  fVar6 = 1.0;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM10_Dd;
  fVar1 = *(float *)(param_1 + 0xf4);
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM11_Dd;
  lVar2 = *(longlong *)(param_1 + 0x28);
  param_5._0_4_ = *(int32_t *)(lVar2 + 0xa8);
  param_5._4_4_ = *(int32_t *)(lVar2 + 0xac);
  fVar5 = *(float *)(lVar2 + 0xa0) + (float)(param_3 % 1000000000) * 1e-05 + (float)in_XMM0_Da;
  fVar7 = 0.6;
  do {
    FUN_18046d350(fVar6 * fVar1,&stack0x00000020,&param_6,param_4,fVar5);
    iVar3 = iVar3 + -1;
    fVar4 = param_6 * fVar6;
    unaff_XMM8_Da = unaff_XMM8_Da + fVar6;
    fVar6 = fVar6 * fVar7;
    unaff_XMM6_Da = unaff_XMM6_Da + fVar4;
    fVar7 = 0.61;
  } while (-1 < iVar3);
  fVar4 = (unaff_XMM6_Da / unaff_XMM8_Da) * *(float *)(unaff_RBX + 0xf0) * 3.0 + 1.0;
  fVar1 = *(float *)(unaff_RBX + 0xd4);
  fVar7 = *(float *)(unaff_RBX + 0xd8);
  fVar5 = *(float *)(unaff_RBX + 0xdc);
  fVar6 = *(float *)(unaff_RBX + 0xe4);
  unaff_RSI[3] = 3.4028235e+38;
  unaff_RSI[2] = fVar4 * fVar5 * fVar6;
  *unaff_RSI = fVar4 * fVar1 * fVar6;
  unaff_RSI[1] = fVar4 * fVar7 * fVar6;
  return;
}






// 函数: void FUN_1803dea47(longlong param_1)
void FUN_1803dea47(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong unaff_RBX;
  float *unaff_RSI;
  
  fVar2 = *(float *)(param_1 + 0xd4);
  fVar3 = *(float *)(param_1 + 0xd8);
  fVar4 = *(float *)(param_1 + 0xdc);
  fVar1 = *(float *)(unaff_RBX + 0xe4);
  unaff_RSI[3] = 3.4028235e+38;
  unaff_RSI[2] = fVar4 * fVar1;
  *unaff_RSI = fVar2 * fVar1;
  unaff_RSI[1] = fVar3 * fVar1;
  return;
}






