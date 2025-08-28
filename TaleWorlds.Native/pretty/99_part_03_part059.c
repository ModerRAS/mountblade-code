#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part059.c - 1 个函数

// 函数: void FUN_180235ca0(int64_t *param_1,int64_t param_2,int8_t (*param_3) [16],byte param_4,
void FUN_180235ca0(int64_t *param_1,int64_t param_2,int8_t (*param_3) [16],byte param_4,
                  int8_t (*param_5) [16],char param_6,char param_7,char param_8,char param_9)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int8_t auVar4 [16];
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  bool bVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  int8_t auVar24 [12];
  int32_t uVar25;
  int64_t *plVar26;
  int64_t *plVar27;
  int64_t *plVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int64_t lVar32;
  int64_t lVar33;
  int64_t lVar34;
  double *pdVar35;
  float *pfVar36;
  int8_t (*pauVar37) [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  void *puVar41;
  uint uVar42;
  int *piVar43;
  uint64_t uVar44;
  byte bVar45;
  uint uVar46;
  int64_t lVar47;
  int64_t lVar48;
  uint uVar49;
  uint64_t uVar50;
  uint64_t uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  double dVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  double dVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  int8_t auStack_328 [32];
  byte bStack_308;
  int8_t auStack_300 [8];
  float fStack_2f8;
  int32_t uStack_2f4;
  uint64_t uStack_2f0;
  uint64_t uStack_2e8;
  int32_t uStack_2e0;
  int iStack_2d8;
  float fStack_2d4;
  int64_t lStack_2d0;
  int iStack_2c8;
  int64_t lStack_2c0;
  int64_t *plStack_2b8;
  int64_t *plStack_2b0;
  int64_t *plStack_2a8;
  int64_t lStack_2a0;
  uint64_t uStack_298;
  uint64_t uStack_290;
  int8_t auStack_288 [8];
  float fStack_280;
  float fStack_27c;
  int8_t auStack_278 [8];
  double dStack_270;
  uint64_t uStack_268;
  uint64_t uStack_260;
  uint64_t uStack_258;
  uint64_t uStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  int32_t uStack_218;
  int32_t uStack_214;
  int32_t uStack_210;
  int32_t uStack_20c;
  double dStack_208;
  double dStack_200;
  int64_t lStack_1f8;
  int64_t lStack_1f0;
  int iStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  int8_t auStack_168 [128];
  uint64_t uStack_e8;
  
  uStack_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_328;
  bVar45 = *(byte *)(param_2 + 0xfd);
  lVar34 = param_2;
  lVar33 = param_2;
  bStack_308 = param_4;
  lStack_1f8 = param_2;
  if ((bVar45 & 0x20) == 0) {
    lVar33 = func_0x000180085de0(*(uint64_t *)(param_2 + 0x1b0));
    lVar34 = func_0x000180085de0(*(uint64_t *)(param_2 + 0x1b0));
  }
  lVar32 = param_2;
  if ((((bVar45 & 0x40) == 0) || (*(int64_t *)(param_2 + 0x210) == 0)) &&
     (*(int64_t *)(param_2 + 0x1b0) != 0)) {
    lVar32 = FUN_180085900();
  }
  uVar49 = 0;
  plStack_2b8 = (int64_t *)0x0;
  plStack_2b0 = (int64_t *)0x0;
  lStack_1f0 = *(int64_t *)(system_main_module_state + 0x98);
  plStack_2a8 = (int64_t *)0x0;
  lStack_2c0 = lVar32;
  if (lStack_1f0 == 0) {
    plStack_2b8 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
    *plStack_2b8 = lVar33;
    *(int32_t *)(plStack_2b8 + 1) = 0;
    FUN_18007f770(plStack_2b8);
    plStack_2b0 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
    *plStack_2b0 = lVar34;
    *(int32_t *)(plStack_2b0 + 1) = 0;
    FUN_18007f770(plStack_2b0);
    plStack_2a8 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
    *plStack_2a8 = lVar32;
    *(int32_t *)(plStack_2a8 + 1) = 0;
    FUN_18007f770(plStack_2a8);
    lVar33 = plStack_2b8[2];
    lVar34 = plStack_2b0[2];
    lStack_2a0 = plStack_2a8[2];
    lStack_2d0 = lVar34;
  }
  else {
    lVar33 = FUN_18022f240(lStack_1f0,lVar33);
    lVar34 = FUN_18022f240(*(uint64_t *)(system_main_module_state + 0x98),lVar34);
    lStack_2d0 = lVar34;
    lStack_2a0 = FUN_18022f240(*(uint64_t *)(system_main_module_state + 0x98),lVar32);
  }
  lVar32 = *param_1;
  iStack_2d8 = *(int *)(param_1[1] + 0x10);
  iVar30 = *(int *)(param_1[1] + 0x60);
  if (*(char *)(lVar32 + 0xf6) < *(char *)(param_2 + 0xf6)) {
    *(char *)(lVar32 + 0xf6) = *(char *)(param_2 + 0xf6);
    lVar32 = *param_1;
  }
  if ((int)*(char *)(lVar32 + 0xf6) < (char)bStack_308 + 1) {
    *(byte *)(lVar32 + 0xf6) = bStack_308 + 1;
  }
  lVar32 = param_1[1];
  iVar29 = *(int *)(lVar33 + 0x10) + *(int *)(lVar32 + 0x10);
  iVar31 = *(int *)(lVar32 + 0x14);
  iStack_2c8 = iVar30;
  if (iVar31 < iVar29) {
    if (iVar29 == 0) {
      if (iVar31 < 2) {
        iVar29 = 8;
      }
      else {
        iVar29 = (iVar31 >> 1) + iVar31;
      }
    }
    *(int *)(lVar32 + 0x14) = iVar29;
    FUN_1800846d0();
  }
  lVar32 = param_1[1];
  iVar29 = *(int *)(lVar33 + 0x60) + *(int *)(lVar32 + 0x60);
  iVar31 = *(int *)(lVar32 + 100);
  if (iVar31 < iVar29) {
    if (iVar29 == 0) {
      if (iVar31 < 2) {
        iVar29 = 8;
      }
      else {
        iVar29 = (iVar31 >> 1) + iVar31;
      }
    }
    *(int *)(lVar32 + 100) = iVar29;
    FUN_180086010();
  }
  lVar32 = param_1[1];
  iVar29 = *(int *)(lVar34 + 0x88) + *(int *)(lVar32 + 0x88);
  iVar31 = *(int *)(lVar32 + 0x8c);
  if (iVar31 < iVar29) {
    if (iVar29 == 0) {
      if (iVar31 < 2) {
        iVar29 = 8;
      }
      else {
        iVar29 = (iVar31 >> 1) + iVar31;
      }
    }
    *(int *)(lVar32 + 0x8c) = iVar29;
    FUN_180085f20();
  }
  pfVar36 = (float *)(param_2 + 0x120);
  if (param_9 == '\0') {
    fVar71 = *(float *)(param_2 + 0x124);
    auVar4 = *param_3;
    fVar57 = auVar4._0_4_;
    fVar60 = auVar4._4_4_;
    fVar61 = auVar4._8_4_;
    fVar62 = auVar4._12_4_;
    auVar4 = param_3[1];
    fVar77 = auVar4._0_4_;
    fVar54 = auVar4._4_4_;
    fVar55 = auVar4._8_4_;
    fVar56 = auVar4._12_4_;
    auVar4 = param_3[2];
    fVar63 = auVar4._0_4_;
    fVar66 = auVar4._4_4_;
    fVar67 = auVar4._8_4_;
    fVar68 = auVar4._12_4_;
    fVar58 = *pfVar36;
    fVar53 = *(float *)(param_2 + 0x128);
    fVar52 = *(float *)(param_2 + 0x134);
    fVar59 = *(float *)(param_2 + 0x144);
    fVar64 = *(float *)(param_2 + 0x154);
    fVar69 = *(float *)(param_2 + 0x130);
    auStack_288._0_4_ = fVar71 * fVar77 + fVar58 * fVar57 + fVar53 * fVar63;
    auStack_288._4_4_ = fVar71 * fVar54 + fVar58 * fVar60 + fVar53 * fVar66;
    fStack_280 = fVar71 * fVar55 + fVar58 * fVar61 + fVar53 * fVar67;
    fStack_27c = fVar71 * fVar56 + fVar58 * fVar62 + fVar53 * fVar68;
    fVar71 = *(float *)(param_2 + 0x138);
    fVar58 = *(float *)(param_2 + 0x140);
    fVar72 = fVar52 * fVar77 + fVar69 * fVar57 + fVar71 * fVar63;
    fVar73 = fVar52 * fVar54 + fVar69 * fVar60 + fVar71 * fVar66;
    fVar74 = fVar52 * fVar55 + fVar69 * fVar61 + fVar71 * fVar67;
    fVar75 = fVar52 * fVar56 + fVar69 * fVar62 + fVar71 * fVar68;
    fVar71 = *(float *)(param_2 + 0x148);
    fVar53 = *(float *)(param_2 + 0x150);
    fVar76 = fVar59 * fVar77 + fVar58 * fVar57 + fVar71 * fVar63;
    fVar78 = fVar59 * fVar54 + fVar58 * fVar60 + fVar71 * fVar66;
    fVar79 = fVar59 * fVar55 + fVar58 * fVar61 + fVar71 * fVar67;
    fVar80 = fVar59 * fVar56 + fVar58 * fVar62 + fVar71 * fVar68;
    fVar71 = *(float *)(param_2 + 0x158);
    fVar58 = *(float *)param_3[3];
    fVar52 = *(float *)(param_3[3] + 4);
    fVar59 = *(float *)(param_3[3] + 8);
    fVar69 = *(float *)(param_3[3] + 0xc);
    uStack_298 = CONCAT44(fVar73,fVar72);
    uStack_290 = CONCAT44(fVar75,fVar74);
    uStack_2f0 = CONCAT44(fVar78,fVar76);
    uStack_2e8 = CONCAT44(fVar80,fVar79);
    uStack_268 = (double)CONCAT44(fVar73,fVar72);
    uStack_260 = (double)CONCAT44(fVar75,fVar74);
    uStack_258 = (double)CONCAT44(fVar78,fVar76);
    uStack_250 = (double)CONCAT44(fVar80,fVar79);
    uVar42 = uVar49;
    _auStack_278 = _auStack_288;
    if (*(int *)(lVar33 + 0x10) != 0) {
      do {
        pfVar36 = (float *)(*(int64_t *)(lVar33 + 0x18) + (int64_t)(int)uVar42 * 0x10);
        fVar6 = *pfVar36;
        fVar7 = pfVar36[1];
        fVar8 = pfVar36[2];
        auStack_300._0_4_ =
             fVar6 * auStack_288._0_4_ + fVar7 * fVar72 + fVar8 * fVar76 +
             fVar64 * fVar77 + fVar53 * fVar57 + fVar71 * fVar63 + fVar58;
        auStack_300._4_4_ =
             fVar6 * auStack_288._4_4_ + fVar7 * fVar73 + fVar8 * fVar78 +
             fVar64 * fVar54 + fVar53 * fVar60 + fVar71 * fVar66 + fVar52;
        fStack_2f8 = fVar6 * auStack_288._8_4_ + fVar7 * fVar74 + fVar8 * fVar79 +
                     fVar64 * fVar55 + fVar53 * fVar61 + fVar71 * fVar67 + fVar59;
        uStack_2f4 = fVar6 * auStack_288._12_4_ + fVar7 * fVar75 + fVar8 * fVar80 +
                     fVar64 * fVar56 + fVar53 * fVar62 + fVar71 * fVar68 + fVar69;
        FUN_180235000(param_1,auStack_300);
        uVar42 = uVar42 + 1;
      } while (uVar42 < *(uint *)(lVar33 + 0x10));
    }
  }
  else {
    func_0x000180239f10(auStack_278,param_3);
    func_0x000180239f10(&iStack_1e8,pfVar36);
    pdVar35 = (double *)FUN_180239c40(auStack_278,auStack_168,&iStack_1e8);
    auStack_278 = (int8_t  [8])*pdVar35;
    dStack_270 = pdVar35[1];
    uStack_268 = pdVar35[2];
    uStack_260 = pdVar35[3];
    dVar9 = pdVar35[4];
    dVar10 = pdVar35[5];
    dVar11 = pdVar35[6];
    dStack_240 = pdVar35[7];
    dVar12 = pdVar35[8];
    dVar13 = pdVar35[9];
    dVar14 = pdVar35[10];
    dStack_220 = pdVar35[0xb];
    uStack_218 = *(int32_t *)(pdVar35 + 0xc);
    uStack_214 = *(int32_t *)((int64_t)pdVar35 + 100);
    dVar23 = pdVar35[0xc];
    uStack_210 = *(int32_t *)(pdVar35 + 0xd);
    uStack_20c = *(int32_t *)((int64_t)pdVar35 + 0x6c);
    dVar22 = pdVar35[0xd];
    dVar15 = pdVar35[0xe];
    dStack_200 = pdVar35[0xf];
    uStack_258 = dVar9;
    uStack_250 = dVar10;
    dStack_248 = dVar11;
    dStack_238 = dVar12;
    dStack_230 = dVar13;
    dStack_228 = dVar14;
    dStack_208 = dVar15;
    if (*(int *)(lVar33 + 0x10) != 0) {
      uStack_2f4 = 1.0;
      uVar42 = uVar49;
      do {
        auVar4 = _auStack_300;
        pfVar36 = (float *)((int64_t)(int)uVar42 * 0x10 + *(int64_t *)(lVar33 + 0x18));
        dVar70 = (double)*pfVar36;
        dVar65 = (double)pfVar36[1];
        dVar5 = (double)pfVar36[2];
        auStack_300._4_4_ = (float)(dVar10 * dVar65 + dVar70 * dStack_270 + dVar5 * dVar13 + dVar22)
        ;
        auStack_300._0_4_ =
             (float)(dVar65 * dVar9 + dVar70 * (double)auStack_278 + dVar5 * dVar12 + dVar23);
        uStack_2f4 = auVar4._12_4_;
        fStack_2f8 = (float)(dVar11 * dVar65 + uStack_268 * dVar70 + dVar14 * dVar5 + dVar15);
        FUN_180235000(param_1,auStack_300);
        uVar42 = uVar42 + 1;
      } while (uVar42 < *(uint *)(lVar33 + 0x10));
    }
    pauVar37 = (int8_t (*) [16])func_0x000180645570(&iStack_1e8,auStack_278);
    uStack_298 = *(uint64_t *)pauVar37[1];
    uStack_290 = *(uint64_t *)(pauVar37[1] + 8);
    _auStack_278 = *pauVar37;
    _auStack_288 = *pauVar37;
    uStack_2f0 = *(uint64_t *)pauVar37[2];
    uStack_2e8 = *(uint64_t *)(pauVar37[2] + 8);
    uStack_268 = (double)uStack_298;
    uStack_260 = (double)uStack_290;
    uStack_258 = (double)uStack_2f0;
    uStack_250 = (double)uStack_2e8;
  }
  iVar29 = iStack_2d8;
  iVar31 = *(int *)(lVar33 + 0x60);
  lVar34 = (int64_t)iVar31;
  fVar71 = 0.0;
  fVar58 = 0.0;
  if ((0 < iVar31) && (param_7 != '\0')) {
    piVar43 = *(int **)(lVar33 + 0x68);
    lVar32 = *(int64_t *)(lVar33 + 0x18);
    fVar71 = *(float *)(lVar32 + 8 + (int64_t)*piVar43 * 0x10);
    fVar58 = fVar71;
    if (1 < lVar34) {
      lVar48 = 1;
      if (4 < lVar34) {
        pfVar36 = (float *)(piVar43 + 0x26);
        lVar47 = (lVar34 - 5U >> 2) + 1;
        lVar48 = lVar47 * 4 + 1;
        do {
          fVar53 = (float)((uint)pfVar36[6] >> 8 & 0xff) * 0.003921569;
          fStack_2f8 = SUB164(*(int8_t (*) [16])(lVar32 + (int64_t)(int)pfVar36[-0xf] * 0x10),8
                             );
          if ((param_6 == '\0') && (fVar53 <= 0.0)) {
            fStack_2f8 = fStack_2f8 + fVar53 * *pfVar36;
          }
          fVar53 = fStack_2f8;
          if (fStack_2f8 <= fVar58) {
            fVar53 = fVar58;
          }
          fVar58 = fStack_2f8;
          if (fVar71 <= fStack_2f8) {
            fVar58 = fVar71;
          }
          fVar71 = (float)((uint)pfVar36[0x1d] >> 8 & 0xff) * 0.003921569;
          fStack_2f8 = SUB164(*(int8_t (*) [16])(lVar32 + (int64_t)(int)pfVar36[8] * 0x10),8);
          if ((param_6 == '\0') && (fVar71 <= 0.0)) {
            fStack_2f8 = fStack_2f8 + fVar71 * pfVar36[0x17];
          }
          fVar71 = fStack_2f8;
          if (fStack_2f8 <= fVar53) {
            fVar71 = fVar53;
          }
          fVar53 = fStack_2f8;
          if (fVar58 <= fStack_2f8) {
            fVar53 = fVar58;
          }
          fVar58 = (float)((uint)pfVar36[0x34] >> 8 & 0xff) * 0.003921569;
          fStack_2f8 = SUB164(*(int8_t (*) [16])(lVar32 + (int64_t)(int)pfVar36[0x1f] * 0x10),8
                             );
          if ((param_6 == '\0') && (fVar58 <= 0.0)) {
            fStack_2f8 = fStack_2f8 + fVar58 * pfVar36[0x2e];
          }
          fVar52 = fStack_2f8;
          if (fVar53 <= fStack_2f8) {
            fVar52 = fVar53;
          }
          fVar53 = fStack_2f8;
          if (fStack_2f8 <= fVar71) {
            fVar53 = fVar71;
          }
          fVar71 = (float)((uint)pfVar36[0x4b] >> 8 & 0xff) * 0.003921569;
          fStack_2f8 = SUB164(*(int8_t (*) [16])(lVar32 + (int64_t)(int)pfVar36[0x36] * 0x10),8
                             );
          if ((param_6 == '\0') && (fVar71 <= 0.0)) {
            fStack_2f8 = fStack_2f8 + fVar71 * pfVar36[0x45];
          }
          pfVar36 = pfVar36 + 0x5c;
          fVar58 = fStack_2f8;
          if (fStack_2f8 <= fVar53) {
            fVar58 = fVar53;
          }
          fVar71 = fStack_2f8;
          if (fVar52 <= fStack_2f8) {
            fVar71 = fVar52;
          }
          lVar47 = lVar47 + -1;
        } while (lVar47 != 0);
      }
      if (lVar48 < lVar34) {
        pfVar36 = (float *)(piVar43 + lVar48 * 0x17 + 0xf);
        lVar34 = lVar34 - lVar48;
        fVar53 = fVar71;
        fVar52 = fVar58;
        do {
          fVar71 = (float)((uint)pfVar36[6] >> 8 & 0xff) * 0.003921569;
          fStack_2f8 = SUB164(*(int8_t (*) [16])(lVar32 + (int64_t)(int)pfVar36[-0xf] * 0x10),8
                             );
          if ((param_6 == '\0') && (fVar71 <= 0.0)) {
            fStack_2f8 = fStack_2f8 + fVar71 * *pfVar36;
          }
          pfVar36 = pfVar36 + 0x17;
          fVar58 = fStack_2f8;
          if (fStack_2f8 <= fVar52) {
            fVar58 = fVar52;
          }
          fVar71 = fStack_2f8;
          if (fVar53 <= fStack_2f8) {
            fVar71 = fVar53;
          }
          lVar34 = lVar34 + -1;
          fVar53 = fVar71;
          fVar52 = fVar58;
        } while (lVar34 != 0);
      }
    }
  }
  auVar24 = *(int8_t (*) [12])*param_5;
  fVar53 = *(float *)(*param_5 + 0xc);
  _auStack_300 = *param_5;
  if (iVar31 != 0) {
    auStack_300._0_4_ = auVar24._0_4_;
    fStack_2f8 = auVar24._8_4_;
    fVar52 = fStack_2f8;
    auStack_300._4_4_ = auVar24._4_4_;
    uVar25 = auStack_300._4_4_;
    fStack_2d4 = (float)auStack_300._0_4_;
    auVar4 = *param_5;
    fVar59 = (float)auStack_300._0_4_;
    do {
      _auStack_300 = auVar4;
      lVar34 = *(int64_t *)(lVar33 + 0x68);
      lVar32 = (int64_t)(int)uVar49 * 0x5c;
      iStack_2d8 = *(int *)(lVar32 + 0x58 + lVar34);
      uVar3 = *(uint64_t *)(lVar32 + 0x50 + lVar34);
      iStack_1e8 = SUB164(*(int8_t (*) [16])(lVar32 + lVar34),0) + iVar29;
      uStack_198._4_4_ = (uint)((uint64_t)uVar3 >> 0x20);
      uVar38 = uStack_198._4_4_ >> 0x10;
      puVar2 = (uint64_t *)(lVar32 + 0x40 + lVar34);
      uStack_1a0 = puVar2[1];
      uVar39 = uStack_198._4_4_ >> 8;
      uVar42 = uStack_198._4_4_ >> 0x18;
      fStack_1a4 = (float)((uint64_t)*puVar2 >> 0x20);
      uStack_198._4_1_ = (byte)((uint64_t)uVar3 >> 0x20);
      fVar69 = (float)uStack_198._4_1_ * 0.003921569;
      fVar77 = (float)(uVar39 & 0xff) * 0.003921569;
      fVar64 = (float)uVar42 * 0.003921569;
      if ((param_6 != '\0') || (0.0 < fVar69)) {
        fVar59 = *(float *)(lVar32 + 8 + lVar34);
        fVar54 = *(float *)(lVar32 + 0xc + lVar34);
        fVar55 = *(float *)(lVar32 + 4 + lVar34);
        fStack_1b4 = fVar59 * (float)uStack_298 + fVar55 * (float)auStack_288._0_4_ +
                     fVar54 * (float)uStack_2f0;
        fStack_1b0 = fVar59 * uStack_298._4_4_ + fVar55 * (float)auStack_288._4_4_ +
                     fVar54 * uStack_2f0._4_4_;
        fStack_1ac = fVar59 * (float)uStack_290 + fVar55 * fStack_280 + fVar54 * (float)uStack_2e8;
        fStack_1a8 = fVar59 * uStack_290._4_4_ + fVar55 * fStack_27c + fVar54 * uStack_2e8._4_4_;
        fVar59 = *(float *)(lVar32 + 0x1c + lVar34);
        fVar54 = *(float *)(lVar32 + 0x18 + lVar34);
        fVar55 = *(float *)(lVar32 + 0x14 + lVar34);
        fVar56 = *(float *)(lVar32 + 0x28 + lVar34);
        fStack_1d4 = fVar54 * (float)uStack_298 + fVar55 * (float)auStack_288._0_4_ +
                     fVar59 * (float)uStack_2f0;
        fStack_1d0 = fVar54 * uStack_298._4_4_ + fVar55 * (float)auStack_288._4_4_ +
                     fVar59 * uStack_2f0._4_4_;
        fStack_1cc = fVar54 * (float)uStack_290 + fVar55 * fStack_280 + fVar59 * (float)uStack_2e8;
        fStack_1c8 = fVar54 * uStack_290._4_4_ + fVar55 * fStack_27c + fVar59 * uStack_2e8._4_4_;
        fVar59 = *(float *)(lVar32 + 0x24 + lVar34);
        fVar54 = *(float *)(lVar32 + 0x2c + lVar34);
        fStack_1c4 = fVar56 * (float)uStack_298 + fVar59 * (float)auStack_288._0_4_ +
                     fVar54 * (float)uStack_2f0;
        fStack_1c0 = fVar56 * uStack_298._4_4_ + fVar59 * (float)auStack_288._4_4_ +
                     fVar54 * uStack_2f0._4_4_;
        fStack_1bc = fVar56 * (float)uStack_290 + fVar59 * fStack_280 + fVar54 * (float)uStack_2e8;
        fStack_1b8 = fVar56 * uStack_290._4_4_ + fVar59 * fStack_27c + fVar54 * uStack_2e8._4_4_;
        fVar59 = fStack_2d4;
      }
      else {
        puVar2 = (uint64_t *)(lVar32 + 4 + lVar34);
        uVar16 = *puVar2;
        uVar17 = puVar2[1];
        puVar2 = (uint64_t *)(lVar32 + 0x24 + lVar34);
        uVar18 = *puVar2;
        uVar19 = puVar2[1];
        fStack_1e4 = (float)uVar16;
        fStack_1e0 = (float)((uint64_t)uVar16 >> 0x20);
        fStack_1dc = (float)uVar17;
        fStack_1d8 = (float)((uint64_t)uVar17 >> 0x20);
        puVar2 = (uint64_t *)(lVar32 + 0x14 + lVar34);
        uVar16 = *puVar2;
        uVar17 = puVar2[1];
        fStack_1c4 = (float)uVar18;
        fStack_1c0 = (float)((uint64_t)uVar18 >> 0x20);
        fStack_1bc = (float)uVar19;
        fStack_1b8 = (float)((uint64_t)uVar19 >> 0x20);
        fStack_1d4 = (float)uVar16;
        fStack_1d0 = (float)((uint64_t)uVar16 >> 0x20);
        fStack_1cc = (float)uVar17;
        fStack_1c8 = (float)((uint64_t)uVar17 >> 0x20);
        fStack_1b4 = fStack_1e4;
        fStack_1b0 = fStack_1e0;
        fStack_1ac = fStack_1dc;
        fStack_1a8 = fStack_1d8;
      }
      if (param_7 != '\0') {
        auVar4 = *(int8_t (*) [16])
                  (*(int64_t *)(lVar33 + 0x18) + (int64_t)*(int *)(lVar32 + lVar34) * 0x10);
        fStack_2f8 = auVar4._8_4_;
        if ((param_6 == '\0') && (fVar69 <= 0.0)) {
          fStack_2f8 = fStack_2f8 + fVar77 * *(float *)(lVar32 + 0x3c + lVar34);
        }
        fVar64 = (fStack_2f8 - fVar71) / (fVar58 - fVar71);
        _auStack_300 = auVar4;
        if (0.0 <= fVar64) {
          if (1.0 <= fVar64) {
            fVar64 = 1.0;
          }
        }
        else {
          fVar64 = 0.0;
        }
      }
      lVar34 = param_1[1];
      uVar39 = (uint)(int64_t)(fVar53 * fVar64 * 256.0);
      uVar42 = 0xff;
      if (uVar39 < 0xff) {
        uVar42 = uVar39;
      }
      uVar39 = (uint)(int64_t)((float)(uVar38 & 0xff) * 0.003921569 * fVar59 * 256.0);
      uVar38 = 0xff;
      if (uVar39 < 0xff) {
        uVar38 = uVar39;
      }
      iVar30 = *(int *)(lVar34 + 100);
      uVar40 = (uint)(int64_t)((float)uVar25 * fVar77 * 256.0);
      uVar39 = 0xff;
      if (uVar40 < 0xff) {
        uVar39 = uVar40;
      }
      uVar46 = (uint)(int64_t)(fVar52 * fVar69 * 256.0);
      uVar40 = 0xff;
      if (uVar46 < 0xff) {
        uVar40 = uVar46;
      }
      iVar31 = *(int *)(lVar34 + 0x60);
      uStack_198 = CONCAT44(((uVar42 << 8 | uVar38) << 8 | uVar39) << 8 | uVar40,(int)uVar3);
      fStack_1e4 = fStack_1b4;
      fStack_1e0 = fStack_1b0;
      fStack_1dc = fStack_1ac;
      fStack_1d8 = fStack_1a8;
      if (iVar30 <= iVar31) {
        if (iVar30 < 2) {
          iVar30 = 8;
        }
        else {
          iVar30 = (iVar30 >> 1) + iVar30;
        }
        *(int *)(lVar34 + 100) = iVar30;
        FUN_180086010(lVar34 + 0x60);
        iVar31 = *(int *)(lVar34 + 0x60);
        fVar59 = fStack_2d4;
      }
      uVar49 = uVar49 + 1;
      lVar48 = (int64_t)iVar31 * 0x5c;
      lVar32 = *(int64_t *)(lVar34 + 0x68);
      *(uint64_t *)(lVar48 + lVar32) = CONCAT44(fStack_1e4,iStack_1e8);
      ((uint64_t *)(lVar48 + lVar32))[1] = CONCAT44(fStack_1dc,fStack_1e0);
      puVar2 = (uint64_t *)(lVar48 + 0x10 + lVar32);
      *puVar2 = CONCAT44(fStack_1d4,fStack_1d8);
      puVar2[1] = CONCAT44(fStack_1cc,fStack_1d0);
      puVar2 = (uint64_t *)(lVar48 + 0x20 + lVar32);
      *puVar2 = CONCAT44(fStack_1c4,fStack_1c8);
      puVar2[1] = CONCAT44(fStack_1bc,fStack_1c0);
      puVar2 = (uint64_t *)(lVar48 + 0x30 + lVar32);
      *puVar2 = CONCAT44(fStack_1b4,fStack_1b8);
      puVar2[1] = CONCAT44(fStack_1ac,fStack_1b0);
      pfVar36 = (float *)(lVar48 + 0x40 + lVar32);
      *pfVar36 = fStack_1a8;
      pfVar36[1] = fStack_1a4;
      pfVar36[2] = (float)uStack_1a0;
      pfVar36[3] = uStack_1a0._4_4_;
      *(uint64_t *)(lVar48 + 0x50 + lVar32) = uStack_198;
      *(int *)(lVar48 + 0x58 + lVar32) = iStack_2d8;
      *(int *)(lVar34 + 0x60) = *(int *)(lVar34 + 0x60) + 1;
      iVar30 = iStack_2c8;
      auVar4 = _auStack_300;
    } while (uVar49 < *(uint *)(lVar33 + 0x60));
  }
  lVar34 = lStack_2a0;
  uVar50 = 0;
  if (param_8 != '\0') {
    if (*(int *)(lVar33 + 0x10) == *(int *)(lStack_2a0 + 200)) {
      uVar44 = uVar50;
      uVar51 = uVar50;
      if (0 < *(int *)(lStack_2a0 + 200)) {
        do {
          lVar33 = *(int64_t *)(lVar34 + 0xd0);
          lVar32 = param_1[1];
          piVar43 = (int *)(lVar32 + 200);
          uStack_2f0 = *(uint64_t *)(uVar44 + lVar33);
          uStack_2e8 = ((uint64_t *)(uVar44 + lVar33))[1];
          iVar31 = *piVar43;
          iVar29 = *(int *)(lVar32 + 0xcc);
          uStack_2e0 = CONCAT13(*(int8_t *)(uVar44 + 0x13 + lVar33),
                                CONCAT12(*(int8_t *)(uVar44 + 0x12 + lVar33),
                                         CONCAT11(*(int8_t *)(uVar44 + 0x11 + lVar33),
                                                  *(int8_t *)(uVar44 + 0x10 + lVar33))));
          if (iVar29 <= iVar31) {
            if (iVar29 < 2) {
              iVar29 = 8;
            }
            else {
              iVar29 = (iVar29 >> 1) + iVar29;
            }
            *(int *)(lVar32 + 0xcc) = iVar29;
            FUN_180085e30(piVar43);
            iVar31 = *piVar43;
          }
          lVar33 = *(int64_t *)(lVar32 + 0xd0);
          uVar49 = (int)uVar51 + 1;
          puVar2 = (uint64_t *)(lVar33 + (int64_t)iVar31 * 0x14);
          *puVar2 = uStack_2f0;
          puVar2[1] = uStack_2e8;
          *(uint *)(lVar33 + 0x10 + (int64_t)iVar31 * 0x14) = uStack_2e0;
          *piVar43 = *piVar43 + 1;
          uVar44 = uVar44 + 0x14;
          uVar51 = (uint64_t)uVar49;
        } while ((int)uVar49 < *(int *)(lVar34 + 200));
      }
    }
    else {
      if (bStack_308 == 0xff) {
        if (*(int64_t *)(lStack_2c0 + 0x1b0) == 0) {
          lVar34 = lStack_2c0 + 0x10;
        }
        else {
          lVar34 = func_0x000180079240();
        }
        puVar41 = &system_buffer_ptr;
        if (*(void **)(lVar34 + 8) != (void *)0x0) {
          puVar41 = *(void **)(lVar34 + 8);
        }
        FUN_180627020(&processed_var_8000_ptr,puVar41);
        bStack_308 = 0;
      }
      if ((int)*(char *)(*param_1 + 0xf6) < (char)bStack_308 + 1) {
        *(byte *)(*param_1 + 0xf6) = bStack_308 + 1;
      }
      uVar44 = uVar50;
      bVar45 = bStack_308;
      if (0 < *(int *)(lVar33 + 0x10)) {
        do {
          lVar34 = param_1[1];
          piVar43 = (int *)(lVar34 + 200);
          uStack_2f0 = 0x3f800000;
          uStack_2e8 = 0;
          iVar31 = *(int *)(lVar34 + 0xcc);
          iVar29 = *piVar43;
          uStack_2e0 = (uint)bVar45;
          if (iVar31 <= iVar29) {
            if (iVar31 < 2) {
              iVar31 = 8;
            }
            else {
              iVar31 = (iVar31 >> 1) + iVar31;
            }
            *(int *)(lVar34 + 0xcc) = iVar31;
            FUN_180085e30(piVar43);
            iVar29 = *piVar43;
            bVar45 = bStack_308;
          }
          lVar34 = *(int64_t *)(lVar34 + 0xd0);
          uVar49 = (int)uVar44 + 1;
          puVar1 = (int32_t *)(lVar34 + (int64_t)iVar29 * 0x14);
          *puVar1 = (float)uStack_2f0;
          puVar1[1] = uStack_2f0._4_4_;
          puVar1[2] = (float)uStack_2e8;
          puVar1[3] = uStack_2e8._4_4_;
          *(uint *)(lVar34 + 0x10 + (int64_t)iVar29 * 0x14) = uStack_2e0;
          *piVar43 = *piVar43 + 1;
          uVar44 = (uint64_t)uVar49;
        } while ((int)uVar49 < *(int *)(lVar33 + 0x10));
      }
    }
  }
  bVar20 = false;
  bVar21 = false;
  if ((*(char *)(*param_1 + 0xff) == '\0') || (*(char *)(lStack_1f8 + 0xff) != '\0')) {
    if (0.0 <= ((float)uStack_268 * dStack_270._0_4_ - (float)auStack_278._0_4_ * (float)uStack_260)
               * uStack_258._4_4_ +
               ((float)auStack_278._4_4_ * (float)uStack_260 - dStack_270._0_4_ * uStack_268._4_4_)
               * (float)uStack_258 +
               ((float)auStack_278._0_4_ * uStack_268._4_4_ -
               (float)uStack_268 * (float)auStack_278._4_4_) * (float)uStack_250) {
      bVar20 = true;
    }
    else {
      bVar21 = true;
    }
  }
  else {
    bVar21 = true;
    bVar20 = true;
  }
  lVar33 = lStack_2d0;
  if (*(int *)(lStack_2d0 + 0x88) != 0) {
    do {
      lVar34 = *(int64_t *)(lVar33 + 0x90);
      lVar32 = (int64_t)(int)uVar50;
      if (bVar20) {
        FUN_180235410(param_1,*(int *)(lVar34 + lVar32 * 0xc) + iVar30,
                      *(int *)(lVar34 + 4 + lVar32 * 0xc) + iVar30,
                      *(int *)(lVar34 + 8 + lVar32 * 0xc) + iVar30);
        lVar33 = lStack_2d0;
      }
      if (bVar21) {
        FUN_180235410(param_1,*(int *)(lVar34 + lVar32 * 0xc) + iVar30,
                      *(int *)(lVar34 + 8 + lVar32 * 0xc) + iVar30,
                      *(int *)(lVar34 + 4 + lVar32 * 0xc) + iVar30);
        lVar33 = lStack_2d0;
      }
      uVar49 = (int)uVar50 + 1;
      uVar50 = (uint64_t)uVar49;
    } while (uVar49 < *(uint *)(lVar33 + 0x88));
  }
  plVar28 = plStack_2a8;
  plVar27 = plStack_2b0;
  plVar26 = plStack_2b8;
  *(int16_t *)(param_1 + 6) = 0x101;
  *(int8_t *)((int64_t)param_1 + 0x32) = 1;
  if (lStack_1f0 == 0) {
    if (plStack_2b8 != (int64_t *)0x0) {
      FUN_18007f840(plStack_2b8);
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(plVar26);
    }
    if (plStack_2b0 != (int64_t *)0x0) {
      FUN_18007f840(plStack_2b0);
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(plVar27);
    }
    if (plStack_2a8 != (int64_t *)0x0) {
      FUN_18007f840(plStack_2a8);
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(plVar28);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_e8 ^ (uint64_t)auStack_328);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




