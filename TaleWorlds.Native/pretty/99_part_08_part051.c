#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part051.c - 2 个函数

// 函数: void FUN_1805abd60(int64_t *param_1,char *param_2,uint64_t *param_3,char param_4,
void FUN_1805abd60(int64_t *param_1,char *param_2,uint64_t *param_3,char param_4,
                  int64_t **param_5,int32_t param_6,char *param_7)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  float *pfVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  int iVar13;
  byte bVar14;
  uint *puVar15;
  char *pcVar16;
  int8_t auVar17 [16];
  float fVar18;
  int8_t auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  int8_t auStack_3e8 [32];
  float *pfStack_3c8;
  float *pfStack_3c0;
  int32_t uStack_3b8;
  int64_t *plStack_3b0;
  uint64_t uStack_3a8;
  int32_t uStack_3a0;
  float afStack_398 [4];
  float fStack_388;
  float fStack_384;
  float fStack_380;
  int32_t uStack_37c;
  float fStack_378;
  float fStack_374;
  uint64_t uStack_370;
  uint64_t uStack_368;
  uint64_t uStack_360;
  uint64_t uStack_358;
  uint64_t uStack_350;
  int32_t uStack_348;
  int64_t *plStack_340;
  int64_t **pplStack_338;
  int32_t uStack_324;
  int32_t uStack_314;
  int32_t uStack_304;
  uint64_t uStack_300;
  uint64_t uStack_2f8;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  int32_t uStack_2e4;
  int32_t uStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  uint64_t uStack_2c0;
  uint64_t uStack_2b8;
  uint64_t uStack_2b0;
  int8_t uStack_2a8;
  int32_t uStack_2a4;
  uint64_t uStack_2a0;
  uint64_t uStack_298;
  uint64_t uStack_290;
  uint64_t uStack_288;
  int8_t uStack_280;
  int32_t uStack_27c;
  float *pfStack_278;
  int64_t *plStack_270;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  uint64_t uStack_228;
  int64_t *plStack_220;
  int64_t *plStack_218;
  float afStack_210 [6];
  int64_t lStack_1f8;
  int64_t lStack_1f0;
  int64_t lStack_1e8;
  int64_t lStack_1e0;
  int64_t lStack_1d8;
  int64_t lStack_1d0;
  int64_t lStack_1c8;
  int64_t lStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int32_t uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t uStack_17c;
  uint64_t uStack_178;
  uint64_t uStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  int8_t auStack_158 [16];
  int8_t auStack_148 [64];
  uint64_t uStack_108;
  uint64_t uStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint uStack_ec;
  uint64_t uStack_e8;
  
  uStack_228 = 0xfffffffffffffffe;
  uStack_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_3e8;
  pplStack_338 = param_5;
  pcVar16 = param_2 + (int64_t)param_4 * 0x30 + 4;
  pfStack_3c8 = (float *)(*(int64_t *)(*(int64_t *)(*param_1 + 0x6d8) + 0x8a8) + 0x70);
  fStack_2c8 = 0.0;
  fStack_2c4 = 0.0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0xff;
  uStack_2a4 = 0x7f7fffff;
  pfStack_278 = pfStack_3c8;
  cVar6 = FUN_180531dc0(0,pcVar16,param_3,&fStack_2c8);
  fStack_378 = fStack_2c8;
  fStack_374 = fStack_2c4;
  uStack_370 = uStack_2c0;
  puVar15 = (uint *)((int64_t)pcVar16[0x2c] * 0x100 +
                    *(int64_t *)(*(int64_t *)(*param_1 + 0x658) + 0x18));
  do {
    LOCK();
    uVar8 = *puVar15;
    *puVar15 = *puVar15 | 1;
    UNLOCK();
  } while ((uVar8 & 1) != 0);
  uStack_178 = *(uint64_t *)(puVar15 + 1);
  uStack_170 = *(uint64_t *)(puVar15 + 3);
  fVar22 = (float)puVar15[5];
  fVar4 = (float)puVar15[6];
  auVar19._0_4_ = (float)puVar15[7];
  uStack_15c = puVar15[8];
  plVar12 = (int64_t *)0x0;
  *puVar15 = 0;
  fStack_168 = fVar22;
  fStack_164 = fVar4;
  fStack_160 = auVar19._0_4_;
  uStack_108 = uStack_178;
  uStack_100 = uStack_170;
  fStack_f8 = fVar22;
  fStack_f4 = fVar4;
  fStack_f0 = auVar19._0_4_;
  uStack_ec = uStack_15c;
  FUN_18063b5f0(&fStack_258,&uStack_178);
  fStack_1b0 = pfStack_278[10];
  fStack_380 = fStack_1b0 * auVar19._0_4_ + pfStack_278[0xe];
  auVar19._0_4_ = pfStack_278[5];
  fVar20 = pfStack_278[1];
  fStack_384 = fVar20 * fVar22 + auVar19._0_4_ * fVar4 + pfStack_278[0xd];
  fVar18 = pfStack_278[4];
  fVar21 = *pfStack_278;
  fStack_388 = fVar21 * fVar22 + fVar18 * fVar4 + pfStack_278[0xc];
  uStack_37c = 0x7f7fffff;
  uStack_17c = 0x7f7fffff;
  fStack_190 = fStack_1b0 * fStack_230;
  fStack_194 = fVar20 * fStack_238 + auVar19._0_4_ * fStack_234;
  fStack_198 = fVar21 * fStack_238 + fVar18 * fStack_234;
  uStack_304 = 0x7f7fffff;
  fStack_1a0 = fStack_1b0 * fStack_240;
  fStack_1a4 = fVar20 * fStack_248 + auVar19._0_4_ * fStack_244;
  fStack_1a8 = fVar21 * fStack_248 + fVar18 * fStack_244;
  uStack_314 = 0x7f7fffff;
  fStack_1b0 = fStack_1b0 * fStack_250;
  fStack_1b4 = fVar20 * fStack_258 + auVar19._0_4_ * fStack_254;
  fStack_1b8 = fVar21 * fStack_258 + fVar18 * fStack_254;
  uStack_324 = 0x7f7fffff;
  uStack_1ac = 0x7f7fffff;
  uStack_19c = 0x7f7fffff;
  uStack_18c = 0x7f7fffff;
  fStack_188 = fStack_388;
  fStack_184 = fStack_384;
  fStack_180 = fStack_380;
  if (cVar6 == '\0') {
    if ((*param_7 != '\0') || ((char)param_1[8] != pcVar16[0x2c])) {
      if ((*param_7 == '\x01') &&
         (*param_7 = '\x02', (*(byte *)((int64_t)param_1 + 0x41) & 4) == 0)) {
        if (*param_2 == '\0') {
          FUN_1805afe90(param_2);
        }
        bVar5 = true;
        plVar10 = plVar12;
        if (0 < (int64_t)param_2[1]) {
          do {
            if ((bVar5) && (*(char *)((int64_t)(plVar10 + 0xe) + (int64_t)param_1) != '\x01')) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            plVar10 = (int64_t *)((int64_t)plVar10 + 1);
          } while ((int64_t)plVar10 < (int64_t)param_2[1]);
          if (!bVar5) goto LAB_1805ac7c7;
        }
        *(byte *)((int64_t)param_1 + 0x41) = *(byte *)((int64_t)param_1 + 0x41) | 4;
        afStack_398[0] = 0.0;
        FUN_1805aded0(param_5,&fStack_268,param_6,afStack_398);
        lVar1 = *param_1;
        lVar2 = *(int64_t *)(lVar1 + 0x6d8);
        lVar3 = *(int64_t *)(lVar2 + 0x8a8);
        fVar20 = afStack_398[0] * *(float *)(lVar2 + 0x8c0);
        auVar19._0_4_ = (0.5 / *(float *)(param_3 + 4)) * fVar20;
        iVar13 = (int)auVar19._0_4_;
        if (auVar19._0_4_ <= 0.0) {
          if ((iVar13 != -0x80000000) && ((float)iVar13 != auVar19._0_4_)) {
            auVar17._4_4_ = auVar19._0_4_;
            auVar17._0_4_ = auVar19._0_4_;
            auVar17._8_8_ = 0;
            uVar8 = movmskps((int)lVar2,auVar17);
            auVar19._0_4_ = (float)(int)(iVar13 + (uVar8 & 1 ^ 1));
          }
          auVar19._0_4_ = auVar19._0_4_ - 1e-08;
        }
        else {
          if ((iVar13 != -0x80000000) && ((float)iVar13 != auVar19._0_4_)) {
            auVar19._4_4_ = auVar19._0_4_;
            auVar19._8_8_ = 0;
            uVar8 = movmskps((int)lVar2,auVar19);
            auVar19._0_4_ = (float)(int)(iVar13 + (uVar8 & 1 ^ 1));
          }
          auVar19._0_4_ = auVar19._0_4_ + 1e-08;
        }
        iVar13 = (int)auVar19._0_4_;
        fVar20 = fVar20 / (float)iVar13;
        uStack_368 = *param_3;
        uStack_360 = param_3[1];
        uStack_358 = param_3[2];
        uStack_350 = param_3[3];
        uStack_348 = *(int32_t *)(param_3 + 4);
        if (0 < iVar13) {
          auVar19._0_4_ =
               -(fVar20 * (fStack_264 * *(float *)(lVar1 + 0x524) +
                          fStack_268 * *(float *)(lVar1 + 0x520)));
          fVar18 = -(fVar20 * (fStack_268 * *(float *)(lVar1 + 0x530) +
                              fStack_264 * *(float *)(lVar1 + 0x534)));
          plVar10 = plVar12;
          do {
            uStack_368 = CONCAT44(uStack_368._4_4_ + fVar18,(float)uStack_368 + auVar19._0_4_);
            uStack_360 = CONCAT44(uStack_360._4_4_,(float)uStack_360 + -fStack_260 * fVar20);
            uStack_358._4_4_ = uStack_358._4_4_ + fVar18;
            uStack_358 = CONCAT44(uStack_358._4_4_,(float)uStack_358 + auVar19._0_4_);
            uStack_350 = CONCAT44(uStack_350._4_4_,(float)uStack_350 + -fStack_260 * fVar20);
            uStack_2a0 = 0;
            uStack_298 = 0;
            uStack_290 = 0;
            uStack_288 = 0;
            uStack_280 = 0xff;
            uStack_27c = 0x7f7fffff;
            pfStack_3c8 = (float *)(lVar3 + 0x70);
            cVar6 = FUN_180531dc0(uStack_358._4_4_,pcVar16,&uStack_368,&uStack_2a0);
            if (cVar6 != '\0') {
              uStack_300 = uStack_2a0;
              uStack_2f8 = uStack_298;
              FUN_1805aded0(pplStack_338,afStack_210,param_6,0);
              bVar14 = *(byte *)(param_1 + 5) >> 2 & 1;
              if (bVar14 != 0) {
                plVar12 = param_1 + 9;
                FUN_1805ab6a0(plVar12,*param_1);
              }
              uStack_3b8 = CONCAT31(uStack_3b8._1_3_,pcVar16[0x2c]);
              pfStack_3c0 = &fStack_1b8;
              pfStack_3c8 = afStack_210;
              plStack_3b0 = plVar12;
              FUN_1805ac830(param_1,param_1[4],bVar14,&uStack_300);
              break;
            }
            uVar8 = (int)plVar10 + 1;
            plVar10 = (int64_t *)(uint64_t)uVar8;
          } while ((int)uVar8 < iVar13);
        }
      }
      goto LAB_1805ac7c7;
    }
    auVar19._0_4_ = *(float *)((int64_t)param_1 + 0x34);
    fVar20 = *(float *)(param_1 + 7);
    fVar18 = *(float *)(param_1 + 6);
    fStack_378 = fVar18 * fStack_1b8 + auVar19._0_4_ * fStack_1a8 + fVar20 * fStack_198 + fStack_388
    ;
    fStack_374 = fVar18 * fStack_1b4 + auVar19._0_4_ * fStack_1a4 + fVar20 * fStack_194 + fStack_384
    ;
    uStack_370 = CONCAT44(fVar18 * 3.4028235e+38 + auVar19._0_4_ * 3.4028235e+38 +
                          fVar20 * 3.4028235e+38 + 3.4028235e+38,
                          fVar18 * fStack_1b0 + auVar19._0_4_ * fStack_1a0 + fVar20 * fStack_190 +
                          fStack_380);
  }
  if (*param_7 == '\0') {
    *param_7 = '\x01';
    if ((char)param_1[8] == pcVar16[0x2c]) {
      *(byte *)((int64_t)param_1 + 0x41) = *(byte *)((int64_t)param_1 + 0x41) | 1;
    }
    if ((*(byte *)((int64_t)param_1 + 0x41) & 4) != 0) {
      *(byte *)((int64_t)param_1 + 0x41) = *(byte *)((int64_t)param_1 + 0x41) & 0xfb;
      bVar14 = *(byte *)(param_1 + 5);
      if ((bVar14 & 1) != 0) {
        plVar12 = param_1 + 9;
        FUN_1805ab6a0(plVar12,*param_1);
      }
      lVar1 = *param_1;
      if (*(int *)(lVar1 + 0x568) != 1) {
        uStack_3a0 = 0;
        uStack_3a8 = 0;
        plStack_3b0 = (int64_t *)0x0;
        uStack_3b8 = *(int32_t *)(lVar1 + 0x10);
        pfStack_3c0 = (float *)CONCAT44(pfStack_3c0._4_4_,*(int32_t *)(param_1[1] + 0x10));
        pfStack_3c8 = (float *)((uint64_t)pfStack_3c8 & 0xffffffffffffff00);
        FUN_1804f83f0(*(uint64_t *)(lVar1 + 0x8d8),system_system_memory,&fStack_378,1);
      }
      pfVar9 = (float *)FUN_1805aded0(param_5,auStack_158,param_6,0);
      fStack_2e8 = -pfVar9[2];
      fStack_2ec = -pfVar9[1];
      fStack_2f0 = -*pfVar9;
      uStack_2e4 = 0x7f7fffff;
      uStack_3b8 = CONCAT31(uStack_3b8._1_3_,pcVar16[0x2c]);
      pfStack_3c0 = &fStack_1b8;
      pfStack_3c8 = &fStack_2f0;
      plStack_3b0 = plVar12;
      FUN_1805ac830(param_1,param_1[2],bVar14 & 1,&fStack_378);
    }
  }
  else if ((*(byte *)((int64_t)param_1 + 0x41) & 2) == 0) {
    *(byte *)((int64_t)param_1 + 0x41) = *(byte *)((int64_t)param_1 + 0x41) | 2;
    fVar21 = *(float *)(param_5 + 0x1a) - (float)uStack_370;
    fVar18 = *(float *)((int64_t)param_5 + 0xcc) - fStack_374;
    fVar22 = *(float *)(param_5 + 0x19) - fStack_378;
    uStack_2cc = 0x7f7fffff;
    uStack_37c = 0x7f7fffff;
    auVar19._0_4_ = fVar22 * fVar22 + fVar18 * fVar18 + fVar21 * fVar21;
    auVar17 = rsqrtss(ZEXT416((uint)auVar19._0_4_),ZEXT416((uint)auVar19._0_4_));
    fVar20 = auVar17._0_4_;
    auVar19._0_4_ = fVar20 * 0.5 * (3.0 - auVar19._0_4_ * fVar20 * fVar20);
    fStack_388 = fVar22 * auVar19._0_4_;
    fStack_384 = fVar18 * auVar19._0_4_;
    fStack_380 = fVar21 * auVar19._0_4_;
    FUN_1805ad0b0(auStack_148,&fStack_388,&fStack_378);
    FUN_1802f5d10(&fStack_1b8,&lStack_1f8,auStack_148);
    plVar12 = (int64_t *)param_1[0xd];
    if (plVar12 == (int64_t *)0x0) {
      uVar11 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x168,8,3);
      plVar12 = (int64_t *)FUN_1802ac390(uVar11);
      plStack_220 = plVar12;
      if (plVar12 != (int64_t *)0x0) {
        (**(code **)(*plVar12 + 0x28))(plVar12);
      }
      pplStack_338 = &plStack_340;
      plStack_340 = (int64_t *)param_1[3];
      if (plStack_340 != (int64_t *)0x0) {
        (**(code **)(*plStack_340 + 0x28))();
      }
      FUN_1802adab0(plVar12,&plStack_340);
      plVar12[10] = lStack_1f8;
      plVar12[0xb] = lStack_1f0;
      plVar12[0xc] = lStack_1e8;
      plVar12[0xd] = lStack_1e0;
      plVar12[0xe] = lStack_1d8;
      plVar12[0xf] = lStack_1d0;
      plVar12[0x10] = lStack_1c8;
      plVar12[0x11] = lStack_1c0;
      if ((*(byte *)(param_1 + 5) & 2) != 0) {
        FUN_1805ab6a0(param_1 + 9,*param_1);
        FUN_1802ae880(plVar12,param_1 + 9);
      }
      lVar1 = *(int64_t *)(*param_1 + 0x6d8);
      FUN_1802fbf30(*(uint64_t *)(*(int64_t *)(lVar1 + 0x8a8) + 0x260),pcVar16[0x2c],plVar12,
                    &lStack_1f8);
      FUN_180544ac0(lVar1);
      plStack_270 = plVar12;
      (**(code **)(*plVar12 + 0x28))(plVar12);
      plStack_270 = (int64_t *)param_1[0xd];
      param_1[0xd] = (int64_t)plVar12;
      if (plStack_270 != (int64_t *)0x0) {
        (**(code **)(*plStack_270 + 0x38))();
      }
      (**(code **)(*plVar12 + 0x38))(plVar12);
    }
    else {
      lVar1 = *(int64_t *)(*param_1 + 0x6d8);
      cVar6 = pcVar16[0x2c];
      uVar11 = *(uint64_t *)(*(int64_t *)(lVar1 + 0x8a8) + 0x260);
      cVar7 = FUN_1802fc790(uVar11,plVar12);
      if (cVar7 != cVar6) {
        plStack_218 = plVar12;
        if (plVar12 != (int64_t *)0x0) {
          (**(code **)(*plVar12 + 0x28))(plVar12);
        }
        FUN_1802fca80(uVar11,plVar12,cVar7);
        FUN_1802fbf30(uVar11,cVar6,plVar12,&lStack_1f8);
        if (plVar12 != (int64_t *)0x0) {
          (**(code **)(*plVar12 + 0x38))(plVar12);
        }
      }
      (**(code **)(*plVar12 + 0x148))(plVar12,&lStack_1f8);
      FUN_180544ac0(lVar1);
    }
  }
LAB_1805ac7c7:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_e8 ^ (uint64_t)auStack_3e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ac830(int64_t *param_1,int64_t *param_2,char param_3,uint64_t param_4,
void FUN_1805ac830(int64_t *param_1,int64_t *param_2,char param_3,uint64_t param_4,
                  float *param_5,uint64_t param_6,int8_t param_7,int64_t *param_8)

{
  int64_t *plVar1;
  int64_t *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int64_t **pplVar10;
  int iVar11;
  int32_t uVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  float *pfVar15;
  int64_t lVar16;
  int64_t *plVar17;
  int64_t **pplVar18;
  uint uVar19;
  int iVar20;
  int64_t lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int32_t uVar30;
  int64_t *plStack_228;
  int64_t *plStack_220;
  uint64_t uStack_218;
  int32_t uStack_210;
  uint64_t uStack_208;
  int64_t *plStack_200;
  int64_t *plStack_1f8;
  int8_t auStack_1e8 [48];
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int32_t uStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  int64_t lStack_148;
  int64_t lStack_140;
  int64_t lStack_138;
  int64_t lStack_130;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  int8_t auStack_118 [16];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  uStack_208 = 0xfffffffffffffffe;
  iVar20 = 0;
  uVar30 = 0;
  FUN_1805ad0b0(auStack_1e8,param_5,param_4);
  FUN_1802f5d10(param_6,&lStack_148,auStack_1e8);
  uVar13 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x168,8,3);
  plVar14 = (int64_t *)FUN_1802ac390(uVar13);
  plStack_200 = plVar14;
  if (plVar14 != (int64_t *)0x0) {
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  pplStackX_10 = &plStackX_8;
  plStackX_8 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  FUN_1802adab0(plVar14,&plStackX_8);
  plVar14[10] = lStack_148;
  plVar14[0xb] = lStack_140;
  plVar14[0xc] = lStack_138;
  plVar14[0xd] = lStack_130;
  *(int32_t *)(plVar14 + 0xe) = uStack_128;
  *(int32_t *)((int64_t)plVar14 + 0x74) = uStack_124;
  *(int32_t *)(plVar14 + 0xf) = uStack_120;
  *(int32_t *)((int64_t)plVar14 + 0x7c) = uStack_11c;
  *(int8_t (*) [16])(plVar14 + 0x10) = auStack_118;
  if (param_8 != (int64_t *)0x0) {
    FUN_1802ae880(plVar14);
  }
  lVar16 = *(int64_t *)(*param_1 + 0x6d8);
  FUN_1802fbf30(*(uint64_t *)(*(int64_t *)(lVar16 + 0x8a8) + 0x260),param_7,plVar14,&lStack_148);
  FUN_180544ac0(lVar16);
  if ((param_3 != '\0') && (param_2 != (int64_t *)0x0)) {
    pplVar18 = *(int64_t ***)(*param_1 + 0x660);
    plStack_228 = (int64_t *)0x0;
    plStack_220 = (int64_t *)0x0;
    uStack_218 = 0;
    uStack_210 = 3;
    param_8 = *(int64_t **)(*(int64_t *)(*param_1 + 0x6d8) + 0x8a8);
    pplStackX_10 = pplVar18;
    if (param_8 != (int64_t *)0x0) {
      (**(code **)(*param_8 + 0x28))();
    }
    FUN_1800b87c0(&plStack_228,&param_8);
    if (param_8 != (int64_t *)0x0) {
      (**(code **)(*param_8 + 0x38))();
    }
    lVar16 = *param_1;
    uVar19 = *(int *)(lVar16 + 0x748) << 0xd ^ *(uint *)(lVar16 + 0x748);
    uVar19 = uVar19 ^ uVar19 >> 0x11;
    uVar19 = uVar19 ^ uVar19 << 5;
    *(uint *)(lVar16 + 0x748) = uVar19;
    FUN_18019fc10(pplVar18,&fStack_1b8,param_5,(uVar19 - 1 & 7) + 2,&plStack_228,0x3e800000);
    lVar16 = *(int64_t *)(*(int64_t *)(param_1[1] + 0x8f8) + 0x9e8);
    if (lVar16 != 0) {
      plVar17 = (int64_t *)**(int64_t **)(lVar16 + 0xf8);
      plStack_1f8 = plVar17;
      if (plVar17 != (int64_t *)0x0) {
        (**(code **)(*plVar17 + 0x28))(plVar17);
      }
      uVar30 = 0;
      if (plVar17 != (int64_t *)0x0) {
        (**(code **)(*plVar17 + 0x38))(plVar17);
      }
      pplVar10 = pplStackX_10;
      lVar16 = plVar17[0x1e];
      if (0 < (int)(plVar17[0x1f] - lVar16 >> 3)) {
        lVar21 = 0;
        do {
          plVar2 = *(int64_t **)(lVar16 + lVar21);
          iVar11 = (**(code **)(*plVar2 + 0x98))(plVar2);
          if (iVar11 == 0) {
            if (*(code **)(*plVar2 + 0x158) == (code *)&unknown_var_2528_ptr) {
              pfVar15 = (float *)(plVar2 + 0x66);
            }
            else {
              pfVar15 = (float *)(**(code **)(*plVar2 + 0x158))(plVar2);
            }
            fVar23 = *(float *)(plVar17 + 0xe);
            fVar29 = *(float *)((int64_t)plVar17 + 0x74);
            fVar24 = *(float *)(plVar17 + 0xf);
            fVar26 = *(float *)((int64_t)plVar17 + 0x7c);
            fVar28 = *(float *)(plVar17 + 0x10);
            fVar3 = *(float *)((int64_t)plVar17 + 0x84);
            fVar4 = *(float *)(plVar17 + 0x11);
            fVar5 = *(float *)((int64_t)plVar17 + 0x8c);
            fVar6 = *(float *)(plVar17 + 0x12);
            fVar7 = *(float *)((int64_t)plVar17 + 0x94);
            fVar8 = *(float *)(plVar17 + 0x13);
            fVar9 = *(float *)((int64_t)plVar17 + 0x9c);
            fVar22 = pfVar15[1];
            fVar25 = pfVar15[2];
            fVar27 = *pfVar15;
            fStack_108 = fVar27 * fVar23 + fVar22 * fVar28 + fVar25 * fVar6;
            fStack_104 = fVar27 * fVar29 + fVar22 * fVar3 + fVar25 * fVar7;
            fStack_100 = fVar27 * fVar24 + fVar22 * fVar4 + fVar25 * fVar8;
            fStack_fc = fVar27 * fVar26 + fVar22 * fVar5 + fVar25 * fVar9;
            fVar22 = pfVar15[5];
            fVar25 = pfVar15[6];
            fVar27 = pfVar15[4];
            fStack_f8 = fVar27 * fVar23 + fVar22 * fVar28 + fVar25 * fVar6;
            fStack_f4 = fVar27 * fVar29 + fVar22 * fVar3 + fVar25 * fVar7;
            fStack_f0 = fVar27 * fVar24 + fVar22 * fVar4 + fVar25 * fVar8;
            fStack_ec = fVar27 * fVar26 + fVar22 * fVar5 + fVar25 * fVar9;
            fVar22 = pfVar15[9];
            fVar25 = pfVar15[10];
            fVar27 = pfVar15[8];
            fStack_e8 = fVar27 * fVar23 + fVar22 * fVar28 + fVar25 * fVar6;
            fStack_e4 = fVar27 * fVar29 + fVar22 * fVar3 + fVar25 * fVar7;
            fStack_e0 = fVar27 * fVar24 + fVar22 * fVar4 + fVar25 * fVar8;
            fStack_dc = fVar27 * fVar26 + fVar22 * fVar5 + fVar25 * fVar9;
            fVar22 = pfVar15[0xd];
            fVar25 = pfVar15[0xe];
            fVar27 = pfVar15[0xc];
            fStack_d8 = fVar27 * fVar23 + fVar22 * fVar28 + fVar25 * fVar6 +
                        *(float *)(plVar17 + 0x14);
            fStack_d4 = fVar27 * fVar29 + fVar22 * fVar3 + fVar25 * fVar7 +
                        *(float *)((int64_t)plVar17 + 0xa4);
            fStack_d0 = fVar27 * fVar24 + fVar22 * fVar4 + fVar25 * fVar8 +
                        *(float *)(plVar17 + 0x15);
            fStack_cc = fVar27 * fVar26 + fVar22 * fVar5 + fVar25 * fVar9 +
                        *(float *)((int64_t)plVar17 + 0xac);
            fVar25 = fStack_1b0 - fStack_d0;
            fVar27 = fStack_1b4 - fStack_d4;
            fVar29 = fStack_1b8 - fStack_d8;
            fVar22 = fVar29 * fStack_108 + fVar27 * fStack_104 + fVar25 * fStack_100;
            fVar23 = fVar29 * fStack_f8 + fVar27 * fStack_f4 + fVar25 * fStack_f0;
            fVar24 = fVar29 * fStack_e8 + fVar27 * fStack_e4 + fVar25 * fStack_e0;
            fVar26 = param_5[2] - fStack_d0;
            fVar28 = param_5[1] - fStack_d4;
            fVar25 = *param_5 - fStack_d8;
            fVar27 = fVar25 * fStack_108 + fVar28 * fStack_104 + fVar26 * fStack_100;
            fVar29 = fVar25 * fStack_f8 + fVar28 * fStack_f4 + fVar26 * fStack_f0;
            fVar25 = fVar25 * fStack_e8 + fVar28 * fStack_e4 + fVar26 * fStack_e0;
            plVar1 = plVar2 + 0x61;
            if ((int)plVar2[99] == -1) {
              *(int32_t *)((int64_t)plVar2 + 0x314) = 0x10;
              uVar12 = FUN_1801b9a40(pplVar10 + 0xa3a,0x10);
              *(int32_t *)(plVar2 + 99) = uVar12;
              LOCK();
              *(int32_t *)(plVar2 + 0x62) = 0;
              UNLOCK();
            }
            lVar16 = param_1[1];
            uVar19 = *(int *)(lVar16 + 0x748) << 0xd ^ *(uint *)(lVar16 + 0x748);
            uVar19 = uVar19 >> 0x11 ^ uVar19;
            uVar19 = uVar19 << 5 ^ uVar19;
            *(uint *)(lVar16 + 0x748) = uVar19;
            fStack_18c = (float)((uVar19 - 1 & 7) + 2);
            uStack_19c = 0x3e19999a;
            fStack_1a8 = fVar22;
            fStack_1a4 = fVar23;
            fStack_1a0 = fVar24;
            fStack_198 = fVar27;
            fStack_194 = fVar29;
            fStack_190 = fVar25;
            FUN_18020a7b0(plVar1,pplVar10 + 0x7f7,&fStack_1a8);
            lVar16 = param_1[1];
            uVar19 = *(int *)(lVar16 + 0x748) << 0xd ^ *(uint *)(lVar16 + 0x748);
            uVar19 = uVar19 >> 0x11 ^ uVar19;
            uVar19 = uVar19 << 5 ^ uVar19;
            *(uint *)(lVar16 + 0x748) = uVar19;
            fStack_16c = (float)((uVar19 - 1 & 7) + 2);
            fStack_180 = fVar24 - 0.15;
            uStack_17c = 0x3e19999a;
            fStack_188 = fVar22;
            fStack_184 = fVar23;
            fStack_178 = fVar27;
            fStack_174 = fVar29;
            fStack_170 = fVar25;
            FUN_18020a7b0(plVar1,pplVar10 + 0x7f7,&fStack_188);
            lVar16 = param_1[1];
            uVar19 = *(int *)(lVar16 + 0x748) << 0xd ^ *(uint *)(lVar16 + 0x748);
            uVar19 = uVar19 >> 0x11 ^ uVar19;
            uVar19 = uVar19 << 5 ^ uVar19;
            *(uint *)(lVar16 + 0x748) = uVar19;
            fStack_14c = (float)((uVar19 - 1 & 7) + 2);
            fStack_160 = fVar24 - 0.3;
            uStack_15c = 0x3e19999a;
            fStack_168 = fVar22;
            fStack_164 = fVar23;
            fStack_158 = fVar27;
            fStack_154 = fVar29;
            fStack_150 = fVar25;
            FUN_18020a7b0(plVar1,pplVar10 + 0x7f7,&fStack_168);
          }
          iVar20 = iVar20 + 1;
          lVar21 = lVar21 + 8;
          lVar16 = plVar17[0x1e];
          pplVar18 = pplStackX_10;
        } while (iVar20 < (int)(plVar17[0x1f] - lVar16 >> 3));
      }
    }
    lVar16 = param_1[1];
    uVar19 = *(int *)(lVar16 + 0x748) << 0xd ^ *(uint *)(lVar16 + 0x748);
    uVar19 = uVar19 ^ uVar19 >> 0x11;
    uVar19 = uVar19 ^ uVar19 << 5;
    *(uint *)(lVar16 + 0x748) = uVar19;
    FUN_18019fc10(pplVar18,&fStack_1b8,param_5,(uVar19 - 1 & 7) + 2,&plStack_228,0x3e800000,uVar30);
    plVar1 = plStack_220;
    plVar2 = plStack_228;
    for (plVar17 = plStack_228; plVar17 != plVar1; plVar17 = plVar17 + 1) {
      if ((int64_t *)*plVar17 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar17 + 0x38))();
      }
    }
    if (plVar2 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(plVar2);
    }
  }
  (**(code **)(*plVar14 + 0x38))(plVar14);
  return;
}



float * FUN_1805ad0b0(float *param_1,float *param_2,uint64_t *param_3)

{
  float fVar1;
  float fVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar6 = 0.0;
  param_1[8] = *param_2;
  param_1[9] = fVar7;
  param_1[10] = fVar1;
  param_1[0xb] = fVar2;
  if ((((ABS(*param_2 - 1.0) < 0.01) && (ABS(param_2[1]) < 0.01)) && (ABS(param_2[2]) < 0.01)) ||
     (((ABS(*param_2 - -1.0) < 0.01 && (ABS(param_2[1]) < 0.01)) && (ABS(param_2[2]) < 0.01)))) {
    fVar7 = 0.0;
    param_1[4] = param_1[9];
    param_1[5] = -param_1[8];
  }
  else {
    param_1[4] = 0.0;
    param_1[5] = param_1[10];
    fVar7 = -param_1[9];
  }
  pfVar5 = param_1 + 4;
  param_1[6] = fVar7;
  func_0x00018023a1e0();
  *param_1 = pfVar5[1] * param_1[10] - pfVar5[2] * param_1[9];
  param_1[1] = pfVar5[2] * param_1[8] - *pfVar5 * param_1[10];
  param_1[2] = *pfVar5 * param_1[9] - pfVar5[1] * param_1[8];
  uVar3 = *param_3;
  uVar4 = param_3[1];
  param_1[3] = fVar6;
  param_1[7] = fVar6;
  *(uint64_t *)(param_1 + 0xc) = uVar3;
  *(uint64_t *)(param_1 + 0xe) = uVar4;
  param_1[0xf] = 1.0;
  param_1[0xb] = fVar6;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




