#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 99_part_03_part062_sub002_sub002.c - 1 个函数

// 函数: void FUN_180235d00(uint64_t param_1,double param_2,uint64_t param_3,byte param_4,
void FUN_180235d00(uint64_t param_1,double param_2,uint64_t param_3,byte param_4,
                  int8_t param_5 [16],double param_6,double param_7,uint param_8,
                  uint64_t param_9,int64_t param_10,int param_11,int64_t param_12,
                  double *param_13,int64_t *param_14)

{
  double *pdVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  char cVar13;
  int8_t (*pauVar14) [16];
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int32_t uVar22;
  int32_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  bool bVar28;
  bool bVar29;
  int8_t auVar30 [12];
  int iVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  int64_t lVar35;
  double dVar36;
  int64_t lVar37;
  double dVar38;
  int64_t *plVar39;
  double *pdVar40;
  float *pfVar41;
  uint uVar42;
  void *puVar43;
  byte unaff_BL;
  uint uVar44;
  int *piVar45;
  double *unaff_RBP;
  int64_t *unaff_RSI;
  uint64_t uVar46;
  uint uVar47;
  uint uVar48;
  int64_t lVar49;
  int64_t lVar50;
  int64_t in_R11;
  uint uVar51;
  int64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t uVar52;
  int8_t (*unaff_R15) [16];
  uint64_t uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  int8_t auVar57 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  double dVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  double dVar74;
  int8_t auVar75 [16];
  double dVar76;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  byte bStackX_20;
  
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  unaff_RBP[6] = param_2;
  lVar37 = unaff_R13;
  if ((unaff_BL & 0x20) == 0) {
    param_2 = (double)func_0x000180085de0(*(uint64_t *)((int64_t)param_2 + 0x1b0));
    lVar37 = func_0x000180085de0(*(uint64_t *)(unaff_R13 + 0x1b0));
  }
  lVar35 = unaff_R13;
  if ((((unaff_R14 & 0x40) == 0) || (*(int64_t *)(unaff_R13 + 0x210) == 0)) &&
     (*(int64_t *)(unaff_R13 + 0x1b0) != 0)) {
    lVar35 = FUN_180085900();
  }
  uVar51 = 0;
  param_13 = (double *)0x0;
  param_14 = (int64_t *)0x0;
  dVar36 = *(double *)(system_main_module_state + 0x98);
  unaff_RBP[7] = dVar36;
  unaff_RBP[-0x10] = 0.0;
  param_12 = lVar35;
  if (dVar36 == 0.0) {
    param_13 = (double *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
    *param_13 = param_2;
    *(int32_t *)(param_13 + 1) = 0;
    FUN_18007f770(param_13);
    param_14 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
    *param_14 = lVar37;
    *(int32_t *)(param_14 + 1) = 0;
    FUN_18007f770(param_14);
    plVar39 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
    unaff_RBP[-0x10] = (double)plVar39;
    *plVar39 = lVar35;
    *(int32_t *)(plVar39 + 1) = 0;
    FUN_18007f770(plVar39);
    dVar36 = param_13[2];
    lVar37 = param_14[2];
    dVar38 = *(double *)((int64_t)unaff_RBP[-0x10] + 0x10);
    param_10 = lVar37;
  }
  else {
    dVar36 = (double)FUN_18022f240(dVar36,param_2);
    lVar37 = FUN_18022f240(*(uint64_t *)(system_main_module_state + 0x98),lVar37);
    param_10 = lVar37;
    dVar38 = (double)FUN_18022f240(*(uint64_t *)(system_main_module_state + 0x98),lVar35);
  }
  lVar35 = *unaff_RSI;
  unaff_RBP[-0xf] = dVar38;
  param_9._0_4_ = *(int *)(unaff_RSI[1] + 0x10);
  iVar33 = *(int *)(unaff_RSI[1] + 0x60);
  if (*(char *)(lVar35 + 0xf6) < *(char *)(unaff_R13 + 0xf6)) {
    *(char *)(lVar35 + 0xf6) = *(char *)(unaff_R13 + 0xf6);
    lVar35 = *unaff_RSI;
  }
  if ((int)*(char *)(lVar35 + 0xf6) < (char)param_4 + 1) {
    *(byte *)(lVar35 + 0xf6) = param_4 + 1;
  }
  lVar35 = unaff_RSI[1];
  iVar31 = *(int *)((int64_t)dVar36 + 0x10) + *(int *)(lVar35 + 0x10);
  iVar34 = *(int *)(lVar35 + 0x14);
  param_11 = iVar33;
  if (iVar34 < iVar31) {
    if (iVar31 == 0) {
      if (iVar34 < 2) {
        iVar31 = 8;
      }
      else {
        iVar31 = (iVar34 >> 1) + iVar34;
      }
    }
    *(int *)(lVar35 + 0x14) = iVar31;
    CoreEngine_DataProcessor();
  }
  lVar35 = unaff_RSI[1];
  iVar31 = *(int *)((int64_t)dVar36 + 0x60) + *(int *)(lVar35 + 0x60);
  iVar34 = *(int *)(lVar35 + 100);
  if (iVar34 < iVar31) {
    if (iVar31 == 0) {
      if (iVar34 < 2) {
        iVar31 = 8;
      }
      else {
        iVar31 = (iVar34 >> 1) + iVar34;
      }
    }
    *(int *)(lVar35 + 100) = iVar31;
    FUN_180086010();
  }
  lVar35 = unaff_RSI[1];
  iVar31 = *(int *)(lVar37 + 0x88) + *(int *)(lVar35 + 0x88);
  iVar34 = *(int *)(lVar35 + 0x8c);
  if (iVar34 < iVar31) {
    if (iVar31 == 0) {
      if (iVar34 < 2) {
        iVar31 = 8;
      }
      else {
        iVar31 = (iVar34 >> 1) + iVar34;
      }
    }
    *(int *)(lVar35 + 0x8c) = iVar31;
    FUN_180085f20();
  }
  pfVar41 = (float *)(unaff_R13 + 0x120);
  if (*(char *)(unaff_RBP + 0x4e) == '\0') {
    fVar63 = *(float *)(unaff_R13 + 0x124);
    auVar75 = *unaff_R15;
    fVar60 = auVar75._0_4_;
    fVar64 = auVar75._4_4_;
    fVar65 = auVar75._8_4_;
    fVar66 = auVar75._12_4_;
    auVar75 = unaff_R15[1];
    fVar61 = auVar75._0_4_;
    fVar58 = auVar75._4_4_;
    fVar56 = auVar75._8_4_;
    fVar59 = auVar75._12_4_;
    auVar75 = unaff_R15[2];
    fVar67 = auVar75._0_4_;
    fVar70 = auVar75._4_4_;
    fVar71 = auVar75._8_4_;
    fVar72 = auVar75._12_4_;
    fVar62 = *pfVar41;
    fVar55 = *(float *)(unaff_R13 + 0x128);
    fVar54 = *(float *)(unaff_R13 + 0x134);
    fVar68 = *(float *)(unaff_R13 + 0x144);
    fVar73 = *(float *)(unaff_R13 + 0x154);
    fVar82 = *(float *)(unaff_R13 + 0x130);
    auVar75._0_4_ = fVar63 * fVar61 + fVar62 * fVar60 + fVar55 * fVar67;
    auVar75._4_4_ = fVar63 * fVar58 + fVar62 * fVar64 + fVar55 * fVar70;
    auVar75._8_4_ = fVar63 * fVar56 + fVar62 * fVar65 + fVar55 * fVar71;
    auVar75._12_4_ = fVar63 * fVar59 + fVar62 * fVar66 + fVar55 * fVar72;
    fVar63 = *(float *)(unaff_R13 + 0x138);
    fVar62 = *(float *)(unaff_R13 + 0x140);
    fVar77 = fVar54 * fVar61 + fVar82 * fVar60 + fVar63 * fVar67;
    fVar78 = fVar54 * fVar58 + fVar82 * fVar64 + fVar63 * fVar70;
    fVar79 = fVar54 * fVar56 + fVar82 * fVar65 + fVar63 * fVar71;
    fVar80 = fVar54 * fVar59 + fVar82 * fVar66 + fVar63 * fVar72;
    fVar63 = *(float *)(unaff_R13 + 0x148);
    fVar55 = *(float *)(unaff_R13 + 0x150);
    *(int8_t (*) [16])(unaff_RBP + -0xc) = auVar75;
    fVar81 = fVar68 * fVar61 + fVar62 * fVar60 + fVar63 * fVar67;
    fVar83 = fVar68 * fVar58 + fVar62 * fVar64 + fVar63 * fVar70;
    fVar84 = fVar68 * fVar56 + fVar62 * fVar65 + fVar63 * fVar71;
    fVar85 = fVar68 * fVar59 + fVar62 * fVar66 + fVar63 * fVar72;
    fVar63 = *(float *)(unaff_R13 + 0x158);
    fVar62 = *(float *)unaff_R15[3];
    fVar54 = *(float *)(unaff_R15[3] + 4);
    fVar68 = *(float *)(unaff_R15[3] + 8);
    fVar82 = *(float *)(unaff_R15[3] + 0xc);
    *(float *)(unaff_RBP + -0xe) = fVar77;
    *(float *)((int64_t)unaff_RBP + -0x6c) = fVar78;
    *(float *)(unaff_RBP + -0xd) = fVar79;
    *(float *)((int64_t)unaff_RBP + -100) = fVar80;
    param_6 = (double)CONCAT44(fVar83,fVar81);
    param_7 = (double)CONCAT44(fVar85,fVar84);
    *(int8_t (*) [16])(unaff_RBP + -10) = auVar75;
    *(float *)(unaff_RBP + -8) = fVar77;
    *(float *)((int64_t)unaff_RBP + -0x3c) = fVar78;
    *(float *)(unaff_RBP + -7) = fVar79;
    *(float *)((int64_t)unaff_RBP + -0x34) = fVar80;
    *(float *)(unaff_RBP + -6) = fVar81;
    *(float *)((int64_t)unaff_RBP + -0x2c) = fVar83;
    *(float *)(unaff_RBP + -5) = fVar84;
    *(float *)((int64_t)unaff_RBP + -0x24) = fVar85;
    uVar44 = uVar51;
    if (*(int *)((int64_t)dVar36 + 0x10) != 0) {
      do {
        pfVar41 = (float *)(*(int64_t *)((int64_t)dVar36 + 0x18) + (int64_t)(int)uVar44 * 0x10);
        fVar19 = *pfVar41;
        fVar20 = pfVar41[1];
        fVar21 = pfVar41[2];
        param_5._0_4_ =
             fVar19 * auVar75._0_4_ + fVar20 * fVar77 + fVar21 * fVar81 +
             fVar73 * fVar61 + fVar55 * fVar60 + fVar63 * fVar67 + fVar62;
        param_5._4_4_ =
             fVar19 * auVar75._4_4_ + fVar20 * fVar78 + fVar21 * fVar83 +
             fVar73 * fVar58 + fVar55 * fVar64 + fVar63 * fVar70 + fVar54;
        param_5._8_4_ =
             fVar19 * auVar75._8_4_ + fVar20 * fVar79 + fVar21 * fVar84 +
             fVar73 * fVar56 + fVar55 * fVar65 + fVar63 * fVar71 + fVar68;
        param_5._12_4_ =
             fVar19 * auVar75._12_4_ + fVar20 * fVar80 + fVar21 * fVar85 +
             fVar73 * fVar59 + fVar55 * fVar66 + fVar63 * fVar72 + fVar82;
        SystemCore_DataSerializer(fVar21 * fVar81,param_5);
        auVar75 = *(int8_t (*) [16])(unaff_RBP + -0xc);
        uVar44 = uVar44 + 1;
      } while (uVar44 < *(uint *)((int64_t)dVar36 + 0x10));
    }
  }
  else {
    func_0x000180239f10(unaff_RBP + -10);
    func_0x000180239f10(unaff_RBP + 8,pfVar41);
    pdVar40 = (double *)FUN_180239c40(unaff_RBP + -10,unaff_RBP + 0x18,unaff_RBP + 8);
    dVar38 = pdVar40[1];
    dVar4 = pdVar40[2];
    dVar5 = pdVar40[3];
    unaff_RBP[-10] = *pdVar40;
    unaff_RBP[-9] = dVar38;
    dVar38 = pdVar40[4];
    dVar6 = pdVar40[5];
    unaff_RBP[-8] = dVar4;
    unaff_RBP[-7] = dVar5;
    dVar4 = pdVar40[6];
    dVar5 = pdVar40[7];
    unaff_RBP[-6] = dVar38;
    unaff_RBP[-5] = dVar6;
    dVar38 = pdVar40[8];
    dVar6 = pdVar40[9];
    unaff_RBP[-4] = dVar4;
    unaff_RBP[-3] = dVar5;
    dVar4 = pdVar40[10];
    dVar5 = pdVar40[0xb];
    unaff_RBP[-2] = dVar38;
    unaff_RBP[-1] = dVar6;
    uVar15 = *(int32_t *)(pdVar40 + 0xc);
    uVar16 = *(int32_t *)((int64_t)pdVar40 + 100);
    uVar17 = *(int32_t *)(pdVar40 + 0xd);
    uVar18 = *(int32_t *)((int64_t)pdVar40 + 0x6c);
    *unaff_RBP = dVar4;
    unaff_RBP[1] = dVar5;
    dVar38 = pdVar40[0xe];
    dVar4 = pdVar40[0xf];
    *(int32_t *)(unaff_RBP + 2) = uVar15;
    *(int32_t *)((int64_t)unaff_RBP + 0x14) = uVar16;
    *(int32_t *)(unaff_RBP + 3) = uVar17;
    *(int32_t *)((int64_t)unaff_RBP + 0x1c) = uVar18;
    unaff_RBP[4] = dVar38;
    unaff_RBP[5] = dVar4;
    if (*(int *)((int64_t)dVar36 + 0x10) != 0) {
      dVar38 = unaff_RBP[4];
      dVar4 = unaff_RBP[3];
      dVar5 = unaff_RBP[2];
      dVar6 = *unaff_RBP;
      dVar7 = unaff_RBP[-1];
      dVar8 = unaff_RBP[-2];
      dVar9 = unaff_RBP[-4];
      dVar10 = unaff_RBP[-5];
      dVar11 = unaff_RBP[-6];
      param_5._12_4_ = 0x3f800000;
      uVar44 = uVar51;
      do {
        auVar75 = param_5;
        pfVar41 = (float *)((int64_t)(int)uVar44 * 0x10 + *(int64_t *)((int64_t)dVar36 + 0x18));
        dVar74 = (double)*pfVar41;
        dVar69 = (double)pfVar41[1];
        dVar76 = (double)pfVar41[2];
        param_5._4_4_ = (float)(dVar10 * dVar69 + dVar74 * unaff_RBP[-9] + dVar76 * dVar7 + dVar4);
        param_5._0_4_ = (float)(dVar69 * dVar11 + dVar74 * unaff_RBP[-10] + dVar76 * dVar8 + dVar5);
        param_5._8_4_ =
             (int32_t)(dVar9 * dVar69 + unaff_RBP[-8] * dVar74 + dVar6 * dVar76 + dVar38);
        param_5._12_4_ = auVar75._12_4_;
        SystemCore_DataSerializer(param_5._8_4_,param_5);
        uVar44 = uVar44 + 1;
      } while (uVar44 < *(uint *)((int64_t)dVar36 + 0x10));
    }
    pdVar40 = (double *)func_0x000180645570(unaff_RBP + 8,unaff_RBP + -10);
    dVar38 = pdVar40[2];
    dVar4 = pdVar40[3];
    dVar5 = *pdVar40;
    dVar6 = pdVar40[1];
    unaff_RBP[-0xe] = dVar38;
    unaff_RBP[-0xd] = dVar4;
    unaff_RBP[-8] = dVar38;
    unaff_RBP[-7] = dVar4;
    param_6 = pdVar40[4];
    param_7 = pdVar40[5];
    unaff_RBP[-0xc] = dVar5;
    unaff_RBP[-0xb] = dVar6;
    unaff_RBP[-6] = param_6;
    unaff_RBP[-5] = param_7;
    unaff_RBP[-10] = dVar5;
    unaff_RBP[-9] = dVar6;
  }
  iVar31 = (int)param_9;
  iVar34 = *(int *)((int64_t)dVar36 + 0x60);
  lVar37 = (int64_t)iVar34;
  cVar12 = *(char *)(unaff_RBP + 0x4b);
  fVar63 = 0.0;
  fVar62 = 0.0;
  if ((0 < iVar34) && (fVar63 = 0.0, fVar62 = 0.0, *(char *)(unaff_RBP + 0x4c) != '\0')) {
    piVar45 = *(int **)((int64_t)dVar36 + 0x68);
    lVar35 = *(int64_t *)((int64_t)dVar36 + 0x18);
    fVar63 = *(float *)(lVar35 + 8 + (int64_t)*piVar45 * 0x10);
    fVar62 = fVar63;
    if (1 < lVar37) {
      lVar50 = 1;
      if (4 < lVar37) {
        pfVar41 = (float *)(piVar45 + 0x26);
        lVar49 = (lVar37 - 5U >> 2) + 1;
        lVar50 = lVar49 * 4 + 1;
        do {
          fVar55 = (float)((uint)pfVar41[6] >> 8 & 0xff) * 0.003921569;
          param_5._8_4_ =
               SUB164(*(int8_t (*) [16])(lVar35 + (int64_t)(int)pfVar41[-0xf] * 0x10),8);
          if ((cVar12 == '\0') && (fVar55 <= 0.0)) {
            param_5._8_4_ = (float)param_5._8_4_ + fVar55 * *pfVar41;
          }
          fVar55 = (float)param_5._8_4_;
          if ((float)param_5._8_4_ <= fVar63) {
            fVar55 = fVar63;
          }
          fVar63 = (float)param_5._8_4_;
          if (fVar62 <= (float)param_5._8_4_) {
            fVar63 = fVar62;
          }
          fVar62 = (float)((uint)pfVar41[0x1d] >> 8 & 0xff) * 0.003921569;
          param_5._8_4_ =
               SUB164(*(int8_t (*) [16])(lVar35 + (int64_t)(int)pfVar41[8] * 0x10),8);
          if ((cVar12 == '\0') && (fVar62 <= 0.0)) {
            param_5._8_4_ = (float)param_5._8_4_ + fVar62 * pfVar41[0x17];
          }
          fVar62 = (float)param_5._8_4_;
          if ((float)param_5._8_4_ <= fVar55) {
            fVar62 = fVar55;
          }
          fVar55 = (float)param_5._8_4_;
          if (fVar63 <= (float)param_5._8_4_) {
            fVar55 = fVar63;
          }
          fVar63 = (float)((uint)pfVar41[0x34] >> 8 & 0xff) * 0.003921569;
          param_5._8_4_ =
               SUB164(*(int8_t (*) [16])(lVar35 + (int64_t)(int)pfVar41[0x1f] * 0x10),8);
          if ((cVar12 == '\0') && (fVar63 <= 0.0)) {
            param_5._8_4_ = (float)param_5._8_4_ + fVar63 * pfVar41[0x2e];
          }
          fVar54 = (float)param_5._8_4_;
          if (fVar55 <= (float)param_5._8_4_) {
            fVar54 = fVar55;
          }
          fVar55 = (float)param_5._8_4_;
          if ((float)param_5._8_4_ <= fVar62) {
            fVar55 = fVar62;
          }
          fVar63 = (float)((uint)pfVar41[0x4b] >> 8 & 0xff) * 0.003921569;
          param_5._8_4_ =
               SUB164(*(int8_t (*) [16])(lVar35 + (int64_t)(int)pfVar41[0x36] * 0x10),8);
          if ((cVar12 == '\0') && (fVar63 <= 0.0)) {
            param_5._8_4_ = (float)param_5._8_4_ + fVar63 * pfVar41[0x45];
          }
          pfVar41 = pfVar41 + 0x5c;
          fVar63 = (float)param_5._8_4_;
          if ((float)param_5._8_4_ <= fVar55) {
            fVar63 = fVar55;
          }
          fVar62 = (float)param_5._8_4_;
          if (fVar54 <= (float)param_5._8_4_) {
            fVar62 = fVar54;
          }
          lVar49 = lVar49 + -1;
        } while (lVar49 != 0);
      }
      if (lVar50 < lVar37) {
        pfVar41 = (float *)(piVar45 + lVar50 * 0x17 + 0xf);
        lVar37 = lVar37 - lVar50;
        fVar55 = fVar63;
        fVar54 = fVar62;
        do {
          fVar63 = (float)((uint)pfVar41[6] >> 8 & 0xff) * 0.003921569;
          param_5._8_4_ =
               SUB164(*(int8_t (*) [16])(lVar35 + (int64_t)(int)pfVar41[-0xf] * 0x10),8);
          if ((cVar12 == '\0') && (fVar63 <= 0.0)) {
            param_5._8_4_ = (float)param_5._8_4_ + fVar63 * *pfVar41;
          }
          pfVar41 = pfVar41 + 0x17;
          fVar63 = (float)param_5._8_4_;
          if ((float)param_5._8_4_ <= fVar55) {
            fVar63 = fVar55;
          }
          fVar62 = (float)param_5._8_4_;
          if (fVar54 <= (float)param_5._8_4_) {
            fVar62 = fVar54;
          }
          lVar37 = lVar37 + -1;
          fVar55 = fVar63;
          fVar54 = fVar62;
        } while (lVar37 != 0);
      }
    }
  }
  pauVar14 = (int8_t (*) [16])unaff_RBP[0x4a];
  auVar30 = *(int8_t (*) [12])*pauVar14;
  fVar55 = *(float *)(*pauVar14 + 0xc);
  param_5 = *pauVar14;
  if (iVar34 != 0) {
    param_5._0_4_ = auVar30._0_4_;
    param_5._8_4_ = auVar30._8_4_;
    uVar16 = param_5._8_4_;
    param_5._4_4_ = auVar30._4_4_;
    uVar15 = param_5._4_4_;
    cVar13 = *(char *)(unaff_RBP + 0x4c);
    param_9._4_4_ = (float)param_5._0_4_;
    auVar75 = *pauVar14;
    fVar54 = (float)param_5._0_4_;
    do {
      param_5 = auVar75;
      lVar37 = *(int64_t *)((int64_t)dVar36 + 0x68);
      lVar35 = (int64_t)(int)uVar51 * 0x5c;
      pdVar40 = (double *)(lVar35 + 0x10 + lVar37);
      dVar38 = pdVar40[1];
      param_9._0_4_ = *(int *)(lVar35 + 0x58 + lVar37);
      auVar75 = *(int8_t (*) [16])(lVar35 + lVar37);
      pdVar1 = (double *)(lVar35 + 0x20 + lVar37);
      dVar4 = *pdVar1;
      dVar5 = pdVar1[1];
      unaff_RBP[10] = *pdVar40;
      unaff_RBP[0xb] = dVar38;
      pdVar40 = (double *)(lVar35 + 0x30 + lVar37);
      dVar38 = pdVar40[1];
      unaff_RBP[0xe] = *pdVar40;
      unaff_RBP[0xf] = dVar38;
      unaff_RBP[0x12] = *(double *)(lVar35 + 0x50 + lVar37);
      *(int8_t (*) [16])(unaff_RBP + 8) = auVar75;
      *(int *)(unaff_RBP + 8) = auVar75._0_4_ + iVar31;
      uVar44 = *(uint *)((int64_t)unaff_RBP + 0x94);
      unaff_RBP[0xc] = dVar4;
      unaff_RBP[0xd] = dVar5;
      pdVar40 = (double *)(lVar35 + 0x40 + lVar37);
      dVar38 = pdVar40[1];
      unaff_RBP[0x10] = *pdVar40;
      unaff_RBP[0x11] = dVar38;
      fVar73 = (float)*(byte *)((int64_t)unaff_RBP + 0x94) * 0.003921569;
      fVar82 = (float)(uVar44 >> 8 & 0xff) * 0.003921569;
      fVar68 = (float)(uVar44 >> 0x18) * 0.003921569;
      if ((cVar12 != '\0') || (0.0 < fVar73)) {
        fVar54 = *(float *)(lVar35 + 8 + lVar37);
        fVar61 = *(float *)(lVar35 + 0xc + lVar37);
        fVar58 = *(float *)(lVar35 + 4 + lVar37);
        fVar56 = fVar54 * *(float *)(unaff_RBP + -0xe) + fVar58 * *(float *)(unaff_RBP + -0xc) +
                 fVar61 * param_6._0_4_;
        fVar59 = fVar54 * *(float *)((int64_t)unaff_RBP + -0x6c) +
                 fVar58 * *(float *)((int64_t)unaff_RBP + -0x5c) + fVar61 * param_6._4_4_;
        fVar60 = fVar54 * *(float *)(unaff_RBP + -0xd) + fVar58 * *(float *)(unaff_RBP + -0xb) +
                 fVar61 * param_7._0_4_;
        fVar61 = fVar54 * *(float *)((int64_t)unaff_RBP + -100) +
                 fVar58 * *(float *)((int64_t)unaff_RBP + -0x54) + fVar61 * param_7._4_4_;
        fVar54 = *(float *)(lVar35 + 0x1c + lVar37);
        *(float *)((int64_t)unaff_RBP + 0x44) = fVar56;
        *(float *)(unaff_RBP + 9) = fVar59;
        *(float *)((int64_t)unaff_RBP + 0x4c) = fVar60;
        *(float *)(unaff_RBP + 10) = fVar61;
        *(float *)((int64_t)unaff_RBP + 0x74) = fVar56;
        *(float *)(unaff_RBP + 0xf) = fVar59;
        *(float *)((int64_t)unaff_RBP + 0x7c) = fVar60;
        *(float *)(unaff_RBP + 0x10) = fVar61;
        fVar61 = *(float *)(lVar35 + 0x18 + lVar37);
        fVar58 = *(float *)(lVar35 + 0x14 + lVar37);
        fVar56 = *(float *)(lVar35 + 0x28 + lVar37);
        auVar57._0_4_ =
             fVar61 * *(float *)(unaff_RBP + -0xe) + fVar58 * *(float *)(unaff_RBP + -0xc) +
             fVar54 * param_6._0_4_;
        auVar57._4_4_ =
             fVar61 * *(float *)((int64_t)unaff_RBP + -0x6c) +
             fVar58 * *(float *)((int64_t)unaff_RBP + -0x5c) + fVar54 * param_6._4_4_;
        auVar57._8_4_ =
             fVar61 * *(float *)(unaff_RBP + -0xd) + fVar58 * *(float *)(unaff_RBP + -0xb) +
             fVar54 * param_7._0_4_;
        auVar57._12_4_ =
             fVar61 * *(float *)((int64_t)unaff_RBP + -100) +
             fVar58 * *(float *)((int64_t)unaff_RBP + -0x54) + fVar54 * param_7._4_4_;
        fVar54 = *(float *)(lVar35 + 0x24 + lVar37);
        fVar61 = *(float *)(lVar35 + 0x2c + lVar37);
        *(int8_t (*) [16])((int64_t)unaff_RBP + 0x54) = auVar57;
        *(float *)((int64_t)unaff_RBP + 100) =
             fVar56 * *(float *)(unaff_RBP + -0xe) + fVar54 * *(float *)(unaff_RBP + -0xc) +
             fVar61 * param_6._0_4_;
        *(float *)(unaff_RBP + 0xd) =
             fVar56 * *(float *)((int64_t)unaff_RBP + -0x6c) +
             fVar54 * *(float *)((int64_t)unaff_RBP + -0x5c) + fVar61 * param_6._4_4_;
        *(float *)((int64_t)unaff_RBP + 0x6c) =
             fVar56 * *(float *)(unaff_RBP + -0xd) + fVar54 * *(float *)(unaff_RBP + -0xb) +
             fVar61 * param_7._0_4_;
        *(float *)(unaff_RBP + 0xe) =
             fVar56 * *(float *)((int64_t)unaff_RBP + -100) +
             fVar54 * *(float *)((int64_t)unaff_RBP + -0x54) + fVar61 * param_7._4_4_;
        fVar54 = param_9._4_4_;
      }
      else {
        puVar2 = (uint64_t *)(lVar35 + 4 + lVar37);
        uVar24 = *puVar2;
        uVar25 = puVar2[1];
        puVar2 = (uint64_t *)(lVar35 + 0x24 + lVar37);
        uVar26 = *puVar2;
        uVar27 = puVar2[1];
        *(uint64_t *)((int64_t)unaff_RBP + 0x44) = uVar24;
        *(uint64_t *)((int64_t)unaff_RBP + 0x4c) = uVar25;
        *(uint64_t *)((int64_t)unaff_RBP + 0x74) = uVar24;
        *(uint64_t *)((int64_t)unaff_RBP + 0x7c) = uVar25;
        puVar2 = (uint64_t *)(lVar35 + 0x14 + lVar37);
        uVar24 = *puVar2;
        uVar25 = puVar2[1];
        *(uint64_t *)((int64_t)unaff_RBP + 100) = uVar26;
        *(uint64_t *)((int64_t)unaff_RBP + 0x6c) = uVar27;
        *(uint64_t *)((int64_t)unaff_RBP + 0x54) = uVar24;
        *(uint64_t *)((int64_t)unaff_RBP + 0x5c) = uVar25;
      }
      if (cVar13 != '\0') {
        auVar75 = *(int8_t (*) [16])
                   (*(int64_t *)((int64_t)dVar36 + 0x18) +
                   (int64_t)*(int *)(lVar35 + lVar37) * 0x10);
        param_5._8_4_ = auVar75._8_4_;
        if ((cVar12 == '\0') && (fVar73 <= 0.0)) {
          param_5._8_4_ = (float)param_5._8_4_ + fVar82 * *(float *)(lVar35 + 0x3c + lVar37);
        }
        fVar68 = ((float)param_5._8_4_ - fVar62) / (fVar63 - fVar62);
        param_5 = auVar75;
        if (0.0 <= fVar68) {
          if (1.0 <= fVar68) {
            fVar68 = 1.0;
          }
        }
        else {
          fVar68 = 0.0;
        }
      }
      lVar37 = unaff_RSI[1];
      uVar32 = (uint)(int64_t)(fVar55 * fVar68 * 256.0);
      uVar48 = 0xff;
      if (uVar32 < 0xff) {
        uVar48 = uVar32;
      }
      uVar32 = (uint)(int64_t)((float)(uVar44 >> 0x10 & 0xff) * 0.003921569 * fVar54 * 256.0);
      uVar44 = 0xff;
      if (uVar32 < 0xff) {
        uVar44 = uVar32;
      }
      iVar33 = *(int *)(lVar37 + 100);
      uVar42 = (uint)(int64_t)((float)uVar15 * fVar82 * 256.0);
      uVar32 = 0xff;
      if (uVar42 < 0xff) {
        uVar32 = uVar42;
      }
      uVar47 = (uint)(int64_t)((float)uVar16 * fVar73 * 256.0);
      uVar42 = 0xff;
      if (uVar47 < 0xff) {
        uVar42 = uVar47;
      }
      iVar34 = *(int *)(lVar37 + 0x60);
      *(uint *)((int64_t)unaff_RBP + 0x94) = ((uVar48 << 8 | uVar44) << 8 | uVar32) << 8 | uVar42;
      if (iVar33 <= iVar34) {
        if (iVar33 < 2) {
          iVar33 = 8;
        }
        else {
          iVar33 = (iVar33 >> 1) + iVar33;
        }
        *(int *)(lVar37 + 100) = iVar33;
        FUN_180086010(lVar37 + 0x60);
        iVar34 = *(int *)(lVar37 + 0x60);
        fVar54 = param_9._4_4_;
      }
      dVar38 = unaff_RBP[9];
      uVar51 = uVar51 + 1;
      dVar4 = unaff_RBP[10];
      dVar5 = unaff_RBP[0xb];
      lVar50 = (int64_t)iVar34 * 0x5c;
      lVar35 = *(int64_t *)(lVar37 + 0x68);
      *(double *)(lVar50 + lVar35) = unaff_RBP[8];
      ((double *)(lVar50 + lVar35))[1] = dVar38;
      dVar38 = unaff_RBP[0xc];
      dVar6 = unaff_RBP[0xd];
      pdVar40 = (double *)(lVar50 + 0x10 + lVar35);
      *pdVar40 = dVar4;
      pdVar40[1] = dVar5;
      dVar4 = unaff_RBP[0xe];
      dVar5 = unaff_RBP[0xf];
      pdVar40 = (double *)(lVar50 + 0x20 + lVar35);
      *pdVar40 = dVar38;
      pdVar40[1] = dVar6;
      uVar17 = *(int32_t *)(unaff_RBP + 0x10);
      uVar18 = *(int32_t *)((int64_t)unaff_RBP + 0x84);
      uVar22 = *(int32_t *)(unaff_RBP + 0x11);
      uVar23 = *(int32_t *)((int64_t)unaff_RBP + 0x8c);
      pdVar40 = (double *)(lVar50 + 0x30 + lVar35);
      *pdVar40 = dVar4;
      pdVar40[1] = dVar5;
      dVar38 = unaff_RBP[0x12];
      puVar3 = (int32_t *)(lVar50 + 0x40 + lVar35);
      *puVar3 = uVar17;
      puVar3[1] = uVar18;
      puVar3[2] = uVar22;
      puVar3[3] = uVar23;
      *(double *)(lVar50 + 0x50 + lVar35) = dVar38;
      *(int *)(lVar50 + 0x58 + lVar35) = (int)param_9;
      *(int *)(lVar37 + 0x60) = *(int *)(lVar37 + 0x60) + 1;
      iVar33 = param_11;
      auVar75 = param_5;
    } while (uVar51 < *(uint *)((int64_t)dVar36 + 0x60));
  }
  uVar52 = 0;
  if (*(char *)(unaff_RBP + 0x4d) != '\0') {
    dVar38 = unaff_RBP[-0xf];
    if (*(int *)((int64_t)dVar36 + 0x10) == *(int *)((int64_t)dVar38 + 200)) {
      uVar46 = uVar52;
      uVar53 = uVar52;
      if (0 < *(int *)((int64_t)dVar38 + 200)) {
        do {
          lVar37 = *(int64_t *)((int64_t)dVar38 + 0xd0);
          lVar35 = unaff_RSI[1];
          piVar45 = (int *)(lVar35 + 200);
          param_6 = *(double *)(uVar46 + lVar37);
          param_7 = ((double *)(uVar46 + lVar37))[1];
          iVar34 = *piVar45;
          iVar31 = *(int *)(lVar35 + 0xcc);
          param_8 = CONCAT13(*(int8_t *)(uVar46 + 0x13 + lVar37),
                             CONCAT12(*(int8_t *)(uVar46 + 0x12 + lVar37),
                                      CONCAT11(*(int8_t *)(uVar46 + 0x11 + lVar37),
                                               *(int8_t *)(uVar46 + 0x10 + lVar37))));
          if (iVar31 <= iVar34) {
            if (iVar31 < 2) {
              iVar31 = 8;
            }
            else {
              iVar31 = (iVar31 >> 1) + iVar31;
            }
            *(int *)(lVar35 + 0xcc) = iVar31;
            FUN_180085e30(piVar45);
            iVar34 = *piVar45;
          }
          lVar37 = *(int64_t *)(lVar35 + 0xd0);
          uVar51 = (int)uVar53 + 1;
          pdVar40 = (double *)(lVar37 + (int64_t)iVar34 * 0x14);
          *pdVar40 = param_6;
          pdVar40[1] = param_7;
          *(uint *)(lVar37 + 0x10 + (int64_t)iVar34 * 0x14) = param_8;
          *piVar45 = *piVar45 + 1;
          uVar46 = uVar46 + 0x14;
          uVar53 = (uint64_t)uVar51;
        } while ((int)uVar51 < *(int *)((int64_t)dVar38 + 200));
      }
    }
    else {
      bStackX_20 = param_4;
      if (param_4 == 0xff) {
        if (*(int64_t *)(param_12 + 0x1b0) == 0) {
          lVar37 = param_12 + 0x10;
        }
        else {
          lVar37 = func_0x000180079240();
        }
        puVar43 = &system_buffer_ptr;
        if (*(void **)(lVar37 + 8) != (void *)0x0) {
          puVar43 = *(void **)(lVar37 + 8);
        }
        SystemCore_Allocator(&processed_var_8000_ptr,puVar43);
        bStackX_20 = 0;
      }
      if ((int)*(char *)(*unaff_RSI + 0xf6) < (char)bStackX_20 + 1) {
        *(byte *)(*unaff_RSI + 0xf6) = bStackX_20 + 1;
      }
      uVar46 = uVar52;
      if (0 < *(int *)((int64_t)dVar36 + 0x10)) {
        do {
          lVar37 = unaff_RSI[1];
          piVar45 = (int *)(lVar37 + 200);
          param_6 = 5.26354424712089e-315;
          param_7 = 0.0;
          iVar34 = *(int *)(lVar37 + 0xcc);
          iVar31 = *piVar45;
          param_8 = (uint)bStackX_20;
          if (iVar34 <= iVar31) {
            if (iVar34 < 2) {
              iVar34 = 8;
            }
            else {
              iVar34 = (iVar34 >> 1) + iVar34;
            }
            *(int *)(lVar37 + 0xcc) = iVar34;
            FUN_180085e30(piVar45);
            iVar31 = *piVar45;
          }
          lVar37 = *(int64_t *)(lVar37 + 0xd0);
          uVar51 = (int)uVar46 + 1;
          puVar3 = (int32_t *)(lVar37 + (int64_t)iVar31 * 0x14);
          *puVar3 = param_6._0_4_;
          puVar3[1] = param_6._4_4_;
          puVar3[2] = param_7._0_4_;
          puVar3[3] = param_7._4_4_;
          *(uint *)(lVar37 + 0x10 + (int64_t)iVar31 * 0x14) = param_8;
          *piVar45 = *piVar45 + 1;
          uVar46 = (uint64_t)uVar51;
        } while ((int)uVar51 < *(int *)((int64_t)dVar36 + 0x10));
      }
    }
  }
  bVar28 = false;
  bVar29 = false;
  fVar63 = *(float *)(unaff_RBP + -10) * *(float *)(unaff_RBP + -7);
  if ((*(char *)(*unaff_RSI + 0xff) == '\0') || (*(char *)((int64_t)unaff_RBP[6] + 0xff) != '\0'))
  {
    if (0.0 <= (*(float *)(unaff_RBP + -8) * *(float *)(unaff_RBP + -9) - fVar63) *
               *(float *)((int64_t)unaff_RBP + -0x2c) +
               (*(float *)((int64_t)unaff_RBP + -0x4c) * *(float *)(unaff_RBP + -7) -
               *(float *)(unaff_RBP + -9) * *(float *)((int64_t)unaff_RBP + -0x3c)) *
               *(float *)(unaff_RBP + -6) +
               (*(float *)(unaff_RBP + -10) * *(float *)((int64_t)unaff_RBP + -0x3c) -
               *(float *)(unaff_RBP + -8) * *(float *)((int64_t)unaff_RBP + -0x4c)) *
               *(float *)(unaff_RBP + -5)) {
      bVar28 = true;
    }
    else {
      bVar29 = true;
    }
  }
  else {
    bVar29 = true;
    bVar28 = true;
  }
  lVar37 = param_10;
  if (*(int *)(param_10 + 0x88) != 0) {
    do {
      lVar35 = *(int64_t *)(lVar37 + 0x90);
      lVar50 = (int64_t)(int)uVar52;
      if (bVar28) {
        fVar63 = (float)SystemCore_RenderFrame(fVar63,*(int *)(lVar35 + lVar50 * 0xc) + iVar33,
                                      *(int *)(lVar35 + 4 + lVar50 * 0xc) + iVar33,
                                      *(int *)(lVar35 + 8 + lVar50 * 0xc) + iVar33);
        lVar37 = param_10;
      }
      if (bVar29) {
        fVar63 = (float)SystemCore_RenderFrame(fVar63,*(int *)(lVar35 + lVar50 * 0xc) + iVar33,
                                      *(int *)(lVar35 + 8 + lVar50 * 0xc) + iVar33,
                                      *(int *)(lVar35 + 4 + lVar50 * 0xc) + iVar33);
        lVar37 = param_10;
      }
      uVar51 = (int)uVar52 + 1;
      uVar52 = (uint64_t)uVar51;
    } while (uVar51 < *(uint *)(lVar37 + 0x88));
  }
  plVar39 = param_14;
  pdVar40 = param_13;
  dVar36 = unaff_RBP[7];
  *(int16_t *)(unaff_RSI + 6) = 0x101;
  *(int8_t *)((int64_t)unaff_RSI + 0x32) = 1;
  if (dVar36 == 0.0) {
    if (param_13 != (double *)0x0) {
      SystemManager_Validator(param_13);
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(pdVar40);
    }
    if (param_14 != (int64_t *)0x0) {
      SystemManager_Validator(param_14);
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar39);
    }
    dVar36 = unaff_RBP[-0x10];
    if (dVar36 != 0.0) {
      SystemManager_Validator(dVar36);
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(dVar36);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker((uint64_t)unaff_RBP[0x28] ^ (uint64_t)&stack0x00000000);
}








