#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part692_sub002_sub002.c - 1 个函数

// 函数: void FUN_180663300(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4,
void FUN_180663300(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4,
                  int64_t param_5,int64_t param_6,uint param_7,float param_8,float param_9,
                  char param_10)

{
  byte bVar1;
  int8_t auVar2 [12];
  int8_t auVar3 [12];
  int8_t auVar4 [12];
  int8_t auVar5 [12];
  int8_t auVar6 [12];
  int8_t auVar7 [12];
  char cVar8;
  int32_t uVar9;
  uint64_t *puVar10;
  float *pfVar11;
  int8_t *puVar12;
  uint64_t *puVar13;
  int8_t (*pauVar14) [16];
  uint64_t uVar15;
  int64_t *plVar16;
  float *pfVar17;
  int32_t *puVar18;
  int8_t auVar19 [8];
  uint64_t uVar20;
  uint64_t uVar21;
  int64_t *plVar22;
  uint uVar23;
  int64_t lVar24;
  int8_t *puVar25;
  char cVar26;
  int iVar27;
  uint uVar28;
  int64_t lVar29;
  uint64_t uVar30;
  uint64_t *puVar31;
  int64_t lVar32;
  uint uVar33;
  char cVar34;
  uint64_t uVar35;
  char cVar36;
  int iVar37;
  uint64_t uVar38;
  uint64_t uVar39;
  int64_t lVar40;
  bool bVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar52;
  float fVar54;
  uint64_t uVar53;
  int8_t auVar46 [16];
  int8_t auVar47 [16];
  int8_t auVar48 [16];
  int8_t auVar49 [16];
  int8_t auVar50 [16];
  int8_t auVar51 [16];
  int32_t uVar55;
  int32_t uVar56;
  int32_t uVar57;
  float fVar58;
  float fVar59;
  int8_t auVar60 [16];
  int8_t auVar61 [16];
  int8_t auVar62 [16];
  int8_t auVar63 [16];
  int8_t auVar64 [16];
  int8_t auVar65 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  int8_t auStack_b38 [32];
  uint64_t *puStack_b18;
  float fStack_b10;
  byte bStack_b08;
  uint uStack_b04;
  char cStack_b00;
  uint64_t uStack_af8;
  int64_t lStack_af0;
  uint uStack_ae8;
  int64_t lStack_ae0;
  int8_t auStack_ad8 [8];
  uint64_t uStack_ad0;
  int iStack_ac8;
  int iStack_ac4;
  uint uStack_ac0;
  float fStack_abc;
  int64_t lStack_ab8;
  int64_t *plStack_ab0;
  int8_t auStack_aa8 [16];
  float fStack_a98;
  float fStack_a94;
  float fStack_a90;
  int32_t uStack_a8c;
  float fStack_a88;
  uint64_t *puStack_a80;
  uint64_t *puStack_a78;
  uint64_t uStack_a68;
  uint64_t uStack_a60;
  int32_t uStack_a58;
  int32_t uStack_a54;
  int32_t uStack_a50;
  int32_t uStack_a4c;
  float fStack_a48;
  float fStack_a44;
  float fStack_a40;
  float fStack_a3c;
  uint64_t *puStack_a38;
  uint64_t *puStack_a30;
  uint64_t uStack_a28;
  float fStack_a20;
  float fStack_a1c;
  int8_t auStack_a18 [8];
  float fStack_a10;
  int32_t uStack_a0c;
  uint64_t uStack_a08;
  uint64_t uStack_a00;
  uint64_t uStack_9f8;
  uint64_t uStack_9f0;
  uint uStack_9e8;
  uint64_t uStack_9d8;
  uint64_t uStack_9d0;
  uint64_t uStack_9c8;
  uint64_t uStack_9c0;
  uint64_t uStack_9b8;
  uint64_t uStack_9b0;
  uint64_t uStack_9a8;
  uint64_t uStack_9a0;
  int8_t auStack_998 [16];
  uint64_t uStack_988;
  uint64_t uStack_980;
  uint64_t uStack_978;
  uint64_t uStack_970;
  int64_t lStack_968;
  uint64_t uStack_958;
  uint64_t uStack_950;
  int32_t uStack_948;
  int32_t uStack_944;
  int32_t uStack_940;
  int32_t uStack_93c;
  int iStack_938;
  float fStack_934;
  int64_t *plStack_928;
  int64_t lStack_920;
  int8_t auStack_918 [16];
  int8_t auStack_908 [16];
  uint64_t uStack_8f8;
  uint64_t uStack_8f0;
  uint64_t uStack_8e8;
  uint64_t uStack_8e0;
  uint64_t uStack_8d8;
  uint64_t uStack_8d0;
  int8_t auStack_8c8 [16];
  int8_t auStack_8b8 [16];
  int8_t auStack_8a8 [16];
  float afStack_898 [4];
  int8_t auStack_888 [16];
  int8_t auStack_878 [16];
  int8_t auStack_868 [16];
  int8_t auStack_858 [16];
  int8_t auStack_848 [16];
  int8_t auStack_838 [16];
  int8_t auStack_828 [16];
  int8_t auStack_818 [16];
  int8_t auStack_808 [16];
  int8_t auStack_7f8 [16];
  int8_t auStack_7e8 [16];
  int8_t auStack_7d8 [16];
  int8_t auStack_7c8 [16];
  uint64_t uStack_7b8;
  uint64_t uStack_7b0;
  uint64_t uStack_7a8;
  uint64_t uStack_7a0;
  uint64_t uStack_788;
  uint64_t uStack_780;
  int32_t uStack_778;
  int32_t uStack_774;
  int32_t uStack_770;
  int32_t uStack_76c;
  uint64_t auStack_768 [2];
  int8_t auStack_758 [8];
  float fStack_750;
  int32_t uStack_74c;
  int32_t uStack_748;
  int32_t uStack_744;
  int32_t uStack_740;
  int32_t uStack_73c;
  uint64_t uStack_738;
  uint64_t uStack_730;
  uint64_t auStack_708 [4];
  uint64_t uStack_6e8;
  uint64_t uStack_6e0;
  uint64_t uStack_6d8;
  uint64_t uStack_6d0;
  int8_t auStack_6c8 [192];
  uint64_t auStack_608 [4];
  int64_t alStack_5e8 [32];
  float afStack_4e8 [2];
  uint64_t uStack_4e0;
  uint64_t uStack_e8;
  
  uStack_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b38;
  uVar23 = 0;
  *(int8_t *)(param_1 + 0x1e0) = 0;
  fStack_a88 = param_9;
  lStack_968 = param_5;
  uStack_a28 = (uint64_t *)0x0;
  uStack_b04 = 0;
  lStack_ae0 = param_2;
  lStack_ab8 = param_1;
  fVar42 = (float)func_0x000180084f70(param_5);
  fStack_934 = fVar42;
  puVar10 = (uint64_t *)FUN_180535610(param_5,&uStack_7b8);
  uStack_738 = *(uint64_t *)(param_5 + 0x30);
  uStack_730 = *(uint64_t *)(param_5 + 0x38);
  auStack_768[0] = *puVar10;
  auStack_768[1] = puVar10[1];
  _auStack_758 = *(int8_t (*) [16])(puVar10 + 2);
  uStack_748 = *(int32_t *)(puVar10 + 4);
  uStack_744 = *(int32_t *)((int64_t)puVar10 + 0x24);
  uStack_740 = *(int32_t *)(puVar10 + 5);
  uStack_73c = *(int32_t *)((int64_t)puVar10 + 0x2c);
  AdvancedProcessor_StateManager0(&uStack_a68,auStack_768);
  uStack_978 = uStack_738;
  uStack_970 = uStack_730;
  uStack_988 = uStack_a68;
  uStack_980 = uStack_a60;
  if ((param_10 != '\0') && (*(int *)(param_1 + 0xa0) != 4)) {
    puVar10 = auStack_768;
    lVar29 = 8;
    do {
      func_0x000180074f10(puVar10);
      lVar40 = lStack_ae0;
      puVar10 = puVar10 + 2;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    cVar8 = *(char *)(param_1 + 0xa4);
    if ('\0' < *(char *)(param_1 + 0xa6)) {
      pfVar17 = (float *)(param_1 + 0x130);
      do {
        param_2 = lVar40;
        if ((int)cVar8 == param_7) break;
        pfVar11 = (float *)CoreSystem_AuthenticationHandler0(lVar40,cVar8,param_6);
        fVar42 = *pfVar11;
        fVar67 = pfVar11[1];
        fVar59 = pfVar11[2];
        fVar66 = pfVar11[3];
        if (0.001 <= param_9) {
          if (param_9 <= 0.999) {
            fVar52 = fVar59 * pfVar17[2];
            fVar54 = fVar66 * pfVar17[3];
            uStack_7a8 = 0xbf800000bf800000;
            uStack_7a0 = 0xbf800000bf800000;
            auVar61._0_4_ = fVar52 + fVar42 * *pfVar17;
            auVar61._4_4_ = fVar54 + fVar67 * pfVar17[1];
            auVar61._8_4_ = fVar52 + fVar52;
            auVar61._12_4_ = fVar54 + fVar54;
            auVar60._4_12_ = auVar61._4_12_;
            auVar60._0_4_ = auVar61._0_4_ + auVar61._4_4_;
            uStack_7b8 = 0x3f8000003f800000;
            uStack_7b0 = 0x3f8000003f800000;
            uVar23 = movmskps((int)pfVar11,auVar60);
            uVar30 = (uint64_t)(uVar23 & 1);
            fVar52 = *(float *)(&uStack_7b8 + uVar30 * 2);
            fVar54 = *(float *)(&uStack_7b0 + uVar30 * 2);
            fVar58 = *pfVar17;
            fVar69 = pfVar17[2];
            fVar68 = *(float *)((int64_t)&uStack_7b8 + uVar30 * 0x10 + 4) * pfVar17[1];
            fVar70 = *(float *)((int64_t)&uStack_7b0 + uVar30 * 0x10 + 4) * pfVar17[3];
            if (0.9995 < ABS(auVar60._0_4_)) {
              fVar43 = 1.0 - param_9;
              uStack_a68 = CONCAT44(fVar43 * fVar67 + param_9 * fVar68,
                                    fVar43 * fVar42 + param_9 * fVar52 * fVar58);
              uStack_a60 = CONCAT44(fVar43 * fVar66 + param_9 * fVar70,
                                    fVar43 * fVar59 + param_9 * fVar54 * fVar69);
              func_0x00018022b430(&uStack_a68);
              fVar42 = (float)uStack_a68;
              fVar67 = uStack_a68._4_4_;
              fVar59 = (float)uStack_a60;
              fVar66 = uStack_a60._4_4_;
            }
            else {
              acosf();
              fVar43 = (float)sinf();
              fVar44 = (float)sinf();
              fVar44 = fVar44 * (1.0 / fVar43);
              fVar45 = (float)sinf();
              fVar45 = fVar45 * (1.0 / fVar43);
              fVar42 = fVar44 * fVar42 + fVar45 * fVar52 * fVar58;
              fVar67 = fVar44 * fVar67 + fVar45 * fVar68;
              fVar59 = fVar44 * fVar59 + fVar45 * fVar54 * fVar69;
              fVar66 = fVar44 * fVar66 + fVar45 * fVar70;
            }
          }
          else {
            fVar42 = *pfVar17;
            fVar67 = pfVar17[1];
            fVar59 = pfVar17[2];
            fVar66 = pfVar17[3];
          }
        }
        uStack_b04 = uStack_b04 + 1;
        uVar23 = (int)uStack_a28 + 1;
        uStack_a28 = (uint64_t *)(uint64_t)uVar23;
        pfVar11 = (float *)(((int64_t)afStack_898 - param_1) + (int64_t)pfVar17);
        *pfVar11 = fVar42;
        pfVar11[1] = fVar67;
        pfVar11[2] = fVar59;
        pfVar11[3] = fVar66;
        pfVar17 = pfVar17 + 4;
        cVar8 = *(char *)((int64_t)cVar8 + 0x100 + param_6);
        param_9 = fStack_a88;
      } while ((int)uVar23 < (int)*(char *)(param_1 + 0xa6));
    }
    iVar37 = uStack_b04 - 1;
    uVar30 = (uint64_t)iVar37;
    if (-1 < iVar37) {
      puVar10 = auStack_768 + uVar30 * 2;
      do {
        cVar8 = *(char *)(lStack_ab8 + 0xa4);
        iVar27 = (int)uVar30;
        if (0 < iVar27) {
          uVar30 = uVar30 & 0xffffffff;
          do {
            cVar8 = *(char *)((int64_t)cVar8 + 0x100 + param_6);
            uVar30 = uVar30 - 1;
          } while (uVar30 != 0);
        }
        uVar39 = (uint64_t)cVar8;
        puVar31 = (uint64_t *)((uVar39 + 0x82) * 0x10 + param_2);
        if (iVar27 == iVar37) {
          if (cVar8 != '\0') {
            puVar12 = (int8_t *)
                      CoreSystem_AuthenticationHandler0(lStack_ae0,*(int8_t *)(uVar39 + 0x100 + param_6),param_6);
            puVar25 = auStack_aa8;
            puVar13 = auStack_768 + (int64_t)iVar27 * 2;
            goto LAB_180663714;
          }
          uVar15 = *puVar10;
          uVar53 = puVar10[1];
        }
        else {
          puVar25 = auStack_998;
          puVar13 = auStack_768 + (int64_t)iVar27 * 2;
          puVar12 = auStack_758 + (int64_t)iVar27 * 0x10;
LAB_180663714:
          puVar13 = (uint64_t *)func_0x00018022b3c0(puVar12,puVar25,puVar13);
          uVar15 = *puVar13;
          uVar53 = puVar13[1];
        }
        *puVar31 = uVar15;
        puVar31[1] = uVar53;
        puVar10 = puVar10 + -2;
        *(uint64_t *)(lStack_ae0 + 0x800) =
             *(uint64_t *)(lStack_ae0 + 0x800) |
             *(uint64_t *)(uVar39 * 0x1b0 + 0xe8 + *(int64_t *)(param_6 + 0x140));
        uVar30 = (uint64_t)(iVar27 - 1U);
        *(uint64_t *)(lStack_ae0 + 0x808) =
             *(uint64_t *)(lStack_ae0 + 0x808) | 1L << (uVar39 & 0x3f);
        param_2 = lStack_ae0;
      } while (-1 < (int)(iVar27 - 1U));
    }
    goto LAB_18066375a;
  }
  cVar8 = *(char *)(param_1 + 0xa5);
  cVar26 = *(char *)(param_1 + 0xa4);
  uStack_a08 = 0x3f800000;
  uStack_a00 = 0;
  uStack_9f8 = 0;
  uStack_9f0 = 0x3f80000000000000;
  if (cVar8 != cVar26) {
    do {
      lVar29 = (int64_t)cVar8;
      puVar10 = (uint64_t *)(param_2 + (lVar29 + 0x82) * 0x10);
      uStack_7b8 = *puVar10;
      uStack_7b0 = puVar10[1];
      puVar10 = (uint64_t *)(lVar29 * 0x1b0 + 0x80 + *(int64_t *)(param_6 + 0x140));
      uStack_7a8 = *puVar10;
      uStack_7a0 = puVar10[1];
      puVar10 = (uint64_t *)UltraHighFreq_ConfigManager1(&uStack_a08,auStack_aa8,&uStack_7a8);
      puVar31 = (uint64_t *)func_0x00018022b490(&uStack_a08,auStack_998,&uStack_7b8);
      uStack_9f8 = *puVar10;
      uStack_9f0 = puVar10[1];
      cVar26 = *(char *)(param_1 + 0xa4);
      uStack_a08 = *puVar31;
      uStack_a00 = puVar31[1];
      cVar8 = *(char *)(lVar29 + 0x100 + param_6);
      param_5 = lStack_968;
    } while (cVar8 != cVar26);
  }
  iVar37 = *(int *)(param_1 + 0xa0);
  if (iVar37 == 3) {
    uVar15 = FUN_1801c13c0(param_5,auStack_aa8,param_1 + 0x10);
    plVar16 = (int64_t *)UltraHighFreq_ConfigManager1(&uStack_988,auStack_998,uVar15);
    uStack_af8 = (uint64_t *)*plVar16;
    lStack_af0 = plVar16[1];
    if (0.0 < *(float *)(param_1 + 0x30)) {
      uVar15 = func_0x0001803812e0(&uStack_a08,auStack_aa8);
      SystemFileHandler(param_1 + 0x20,&uStack_a68,uVar15);
      fVar67 = *(float *)(param_1 + 0x30);
      uStack_af8 = (uint64_t *)
                   CONCAT44(uStack_af8._4_4_ - uStack_a68._4_4_ * fVar67,
                            (float)uStack_af8 - (float)uStack_a68 * fVar67);
      lStack_af0 = CONCAT44(lStack_af0._4_4_,(float)lStack_af0 - (float)uStack_a60 * fVar67);
    }
LAB_180663ade:
    if ((((float)uStack_9f8 != 0.0) || (uStack_9f8._4_4_ != 0.0)) || ((float)uStack_9f0 != 0.0)) {
      puVar10 = (uint64_t *)(param_1 + 0x20);
LAB_180663a5e:
      pfVar17 = (float *)SystemFileHandler(puVar10,auStack_aa8,&uStack_9f8);
      uStack_af8 = (uint64_t *)
                   CONCAT44(uStack_af8._4_4_ - pfVar17[1],(float)uStack_af8 - *pfVar17);
      lStack_af0 = CONCAT44(lStack_af0._4_4_,(float)lStack_af0 - pfVar17[2]);
    }
  }
  else if (iVar37 == 4) {
    puVar10 = (uint64_t *)CoreSystem_AuthenticationHandler0(param_2,cVar26,param_6);
    auStack_768[0] = *puVar10;
    auStack_768[1] = puVar10[1];
    _auStack_758 = *(int8_t (*) [16])(param_2 + ((int64_t)cVar26 + 0x40) * 0x10);
    cVar8 = func_0x0001806673d0(param_1 + 0x20);
    if (cVar8 == '\0') {
      auStack_768[0] = *(uint64_t *)(param_1 + 0x20);
      auStack_768[1] = *(uint64_t *)(param_1 + 0x28);
    }
    puVar10 = (uint64_t *)func_0x00018022b490(&uStack_988,auStack_aa8,auStack_768);
    fStack_a98 = (float)auStack_758._0_4_ + *(float *)(param_1 + 0x10);
    uStack_a8c = 0x7f7fffff;
    uStack_9a8 = *puVar10;
    uStack_9a0 = puVar10[1];
    fStack_a94 = (float)auStack_758._4_4_ + *(float *)(param_1 + 0x14);
    fStack_a90 = fStack_750 + *(float *)(param_1 + 0x18);
    plVar16 = (int64_t *)UltraHighFreq_ConfigManager1(&uStack_988,auStack_aa8,&fStack_a98);
    uStack_af8 = (uint64_t *)*plVar16;
    lStack_af0 = plVar16[1];
  }
  else if (iVar37 == 5) {
    cVar8 = *(char *)(param_1 + 0x20);
    puVar10 = (uint64_t *)CoreSystem_AuthenticationHandler0(param_2,cVar8,param_6);
    auStack_768[0] = *puVar10;
    auStack_768[1] = puVar10[1];
    _auStack_758 = *(int8_t (*) [16])(param_2 + ((int64_t)cVar8 + 0x40) * 0x10);
    pfVar17 = (float *)SystemFileHandler(auStack_768,auStack_aa8,param_1 + 0x10);
    auVar61 = _auStack_758;
    auStack_758._4_4_ = (float)auStack_758._4_4_ + pfVar17[1];
    auStack_758._0_4_ = (float)auStack_758._0_4_ + *pfVar17;
    uStack_74c = auVar61._12_4_;
    fStack_750 = fStack_750 + pfVar17[2];
    UltraHighFreq_ConfigManager1(&uStack_988,&uStack_9d8,auStack_758);
    uStack_af8 = uStack_9d8;
    lStack_af0 = uStack_9d0;
    puVar10 = (uint64_t *)CoreSystem_AuthenticationHandler0(param_2,*(int8_t *)(param_1 + 0xa4),param_6);
    uStack_9a8 = *puVar10;
    uStack_9a0 = puVar10[1];
    puVar10 = (uint64_t *)func_0x00018022b490(&uStack_988,auStack_aa8,&uStack_9a8);
    uStack_9a8 = *puVar10;
    uStack_9a0 = puVar10[1];
    if ((((float)uStack_9f8 != 0.0) || (uStack_9f8._4_4_ != 0.0)) || ((float)uStack_9f0 != 0.0)) {
      SystemFileHandler(&uStack_9a8,&uStack_a68,&uStack_9f8);
      uStack_af8 = (uint64_t *)
                   CONCAT44(uStack_af8._4_4_ - uStack_a68._4_4_,
                            (float)uStack_af8 - (float)uStack_a68);
      lStack_af0 = CONCAT44(lStack_af0._4_4_,(float)lStack_af0 - (float)uStack_a60);
    }
  }
  else {
    if (iVar37 == 6) {
      uVar15 = FUN_1801c13c0(param_5,auStack_aa8,param_1 + 0x10);
      plVar16 = (int64_t *)UltraHighFreq_ConfigManager1(&uStack_988,auStack_998,uVar15);
      uStack_af8 = (uint64_t *)*plVar16;
      lStack_af0 = plVar16[1];
      goto LAB_180663ade;
    }
    if (iVar37 == 7) {
      if ((*(uint64_t *)(param_4 + 0x810) >> ((uint64_t)*(byte *)(param_1 + 0xa5) & 0x3f) & 1) ==
          0) {
        puVar31 = (uint64_t *)CoreSystem_AuthenticationHandler0(param_2,cVar26,param_6);
        puVar10 = (uint64_t *)(param_2 + ((int64_t)cVar26 + 0x40) * 0x10);
        uStack_7a8 = *puVar10;
        uStack_7a0 = puVar10[1];
        uStack_7b8 = *puVar31;
        uStack_7b0 = puVar31[1];
        puVar10 = (uint64_t *)func_0x00018022b490(&uStack_988,auStack_aa8,&uStack_7b8);
        cVar8 = *(char *)(param_1 + 0xa5);
        uStack_9a8 = *puVar10;
        uStack_9a0 = puVar10[1];
        CoreSystem_AuthenticationHandler0(param_2,cVar8,param_6);
        puVar10 = (uint64_t *)(param_2 + ((int64_t)cVar8 + 0x40) * 0x10);
        auStack_ad8 = (int8_t  [8])*puVar10;
        uVar15 = puVar10[1];
      }
      else {
        puVar31 = (uint64_t *)CoreSystem_AuthenticationHandler0(param_4,cVar26,param_6);
        puVar10 = (uint64_t *)(param_4 + ((int64_t)cVar26 + 0x40) * 0x10);
        uStack_7a8 = *puVar10;
        uStack_7a0 = puVar10[1];
        uStack_7b8 = *puVar31;
        uStack_7b0 = puVar31[1];
        puVar10 = (uint64_t *)func_0x00018022b490(&uStack_988,auStack_aa8,&uStack_7b8);
        cVar8 = *(char *)(param_1 + 0xa5);
        uStack_9a8 = *puVar10;
        uStack_9a0 = puVar10[1];
        CoreSystem_AuthenticationHandler0(param_4,cVar8,param_6);
        puVar10 = (uint64_t *)(param_4 + ((int64_t)cVar8 + 0x40) * 0x10);
        auStack_ad8 = (int8_t  [8])*puVar10;
        uVar15 = puVar10[1];
      }
      uStack_ad0._0_4_ = (float)uVar15;
      uStack_ad0._4_4_ = (float)((uint64_t)uVar15 >> 0x20);
      uStack_ad0._0_4_ = (float)uStack_ad0 + *(float *)(param_1 + 0x90);
      puVar10 = (uint64_t *)FUN_1801c1690(param_1 + 0x10,auStack_aa8,auStack_ad8);
      auStack_ad8 = (int8_t  [8])*puVar10;
      uStack_ad0 = puVar10[1];
      pauVar14 = (int8_t (*) [16])func_0x0001800f8f10(param_1 + 0x50,auStack_aa8,auStack_ad8);
      _auStack_ad8 = *pauVar14;
      uVar15 = FUN_1801c13c0(lStack_968,auStack_aa8,auStack_ad8);
      plVar16 = (int64_t *)UltraHighFreq_ConfigManager1(&uStack_988,auStack_998,uVar15);
      uStack_af8 = (uint64_t *)*plVar16;
      lStack_af0 = plVar16[1];
      if ((((float)uStack_9f8 != 0.0) || (uStack_9f8._4_4_ != 0.0)) || ((float)uStack_9f0 != 0.0)) {
        puVar10 = &uStack_9a8;
        goto LAB_180663a5e;
      }
    }
  }
  lVar29 = 8;
  plVar16 = alStack_5e8;
  lVar40 = 8;
  do {
    func_0x000180074f10(plVar16);
    plVar16 = plVar16 + 4;
    lVar40 = lVar40 + -1;
  } while (lVar40 != 0);
  puVar10 = &uStack_6e8;
  do {
    func_0x000180074f10(puVar10);
    puVar10 = puVar10 + 4;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  pfVar17 = afStack_4e8;
  lVar29 = 0x40;
  do {
    func_0x000180074f10(pfVar17);
    pfVar17 = pfVar17 + 4;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  bStack_b08 = *(byte *)(param_1 + 0xa4);
  uVar28 = (uint)(char)bStack_b08;
  _auStack_a18 = ZEXT416(0);
  if (uVar28 != param_7) {
    puVar10 = &uStack_6e8;
    uVar33 = uVar23;
    do {
      lVar29 = lStack_ae0;
      if ((int)*(char *)(param_1 + 0xa6) <= (int)uVar23) break;
      puVar18 = (int32_t *)CoreSystem_AuthenticationHandler0(lStack_ae0,uVar28 & 0xff,param_6);
      lVar40 = (int64_t)(char)uVar28;
      uVar9 = puVar18[1];
      uVar55 = puVar18[2];
      uVar56 = puVar18[3];
      *(int32_t *)puVar10 = *puVar18;
      *(int32_t *)((int64_t)puVar10 + 4) = uVar9;
      *(int32_t *)(puVar10 + 1) = uVar55;
      *(int32_t *)((int64_t)puVar10 + 0xc) = uVar56;
      puVar31 = (uint64_t *)(lVar29 + (lVar40 + 0x40) * 0x10);
      uVar15 = puVar31[1];
      puVar10[2] = *puVar31;
      puVar10[3] = uVar15;
      puVar31 = (uint64_t *)CoreSystem_AuthenticationHandler0(lVar29,bStack_b08,param_6);
      lVar29 = lStack_ab8;
      bVar1 = *(byte *)(lVar40 + 0x100 + param_6);
      uVar15 = puVar31[1];
      *(uint64_t *)(afStack_4e8 + lVar40 * 4) = *puVar31;
      (&uStack_4e0)[lVar40 * 2] = uVar15;
      if (bStack_b08 == 0) {
        fVar67 = (float)(int)((int)*(char *)(lStack_ab8 + 0xa6) - uVar23) /
                 (float)(int)*(char *)(lStack_ab8 + 0xa6);
        fVar67 = fVar67 * fVar67 + 0.1;
        if (1.0 <= fVar67) {
          fVar67 = 1.0;
        }
        pfVar11 = (float *)FUN_180285c90(&uStack_988,auStack_aa8,&uStack_af8);
        cVar8 = *(char *)(lVar29 + 0xa4);
        CoreSystem_AuthenticationHandler0(lStack_ae0,cVar8,param_6);
        pfVar17 = (float *)(lStack_ae0 + ((int64_t)cVar8 + 0x40) * 0x10);
        fStack_a10 = pfVar11[2] - pfVar17[2];
        uStack_a0c = 0x7f7fffff;
        auStack_a18._4_4_ = (pfVar11[1] - pfVar17[1]) * fVar67;
        auStack_a18._0_4_ = (*pfVar11 - *pfVar17) * fVar67;
        if (0.0 < pfVar11[2] - pfVar17[2]) {
          fStack_a10 = 0.0;
          uStack_a0c = 0x7f7fffff;
        }
        pfVar17 = (float *)SystemFileHandler(&uStack_988,auStack_998,auStack_a18);
        uStack_af8 = (uint64_t *)
                     CONCAT44(uStack_af8._4_4_ - pfVar17[1],(float)uStack_af8 - *pfVar17);
        lStack_af0 = CONCAT44(lStack_af0._4_4_,(float)lStack_af0 - pfVar17[2]);
      }
      uVar28 = (uint)bVar1;
      uVar33 = uStack_b04 + 1;
      uVar23 = uVar23 + 1;
      puVar10 = puVar10 + 4;
      param_1 = lStack_ab8;
      bStack_b08 = bVar1;
      uStack_b04 = uVar33;
    } while ((int)(char)bVar1 != param_7);
    lVar29 = lStack_ae0;
    if (uVar33 != 0) {
      if ((char)uVar28 < '\0') {
        uStack_8f8 = 0x3f800000;
        uStack_8f0 = 0;
        uStack_8e8 = 0;
        uStack_8e0 = 0x3f80000000000000;
      }
      else {
        puVar10 = (uint64_t *)CoreSystem_AuthenticationHandler0(lStack_ae0,uVar28 & 0xff,param_6);
        uStack_8f8 = *puVar10;
        uStack_8f0 = puVar10[1];
        puVar10 = (uint64_t *)(lVar29 + ((int64_t)(char)bStack_b08 + 0x40) * 0x10);
        uStack_8e8 = *puVar10;
        uStack_8e0 = puVar10[1];
        uVar33 = uStack_b04;
      }
      uStack_ac0 = uVar33 - 1;
      fStack_abc = 0.0;
      uVar15 = auStack_708[(int64_t)(int)uVar33 * 4 + 2];
      uVar53 = auStack_708[(int64_t)(int)uVar33 * 4 + 3];
      auStack_ad8 = (int8_t  [8])(int64_t)(int)uVar33;
      plVar16 = (int64_t *)((int64_t)auStack_ad8 + -1);
      auVar19 = auStack_ad8;
      plStack_928 = plVar16;
      do {
        cVar8 = *(char *)(param_1 + 0xa4);
        iStack_ac8 = -1;
        puStack_a30 = (uint64_t *)0x0;
        cVar26 = -1;
        puStack_a80 = (uint64_t *)0xffffffffffffffff;
        plStack_ab0 = plVar16;
        if (0 < (int64_t)auVar19) {
          puStack_a78 = (uint64_t *)0x0;
          uStack_ae8 = 0xffffffff;
          puStack_a38 = (uint64_t *)0xffffffffffffffe0;
          do {
            puVar31 = puStack_a30;
            puVar10 = puStack_a78;
            uVar23 = uStack_ae8;
            lVar29 = (int64_t)cVar8;
            plStack_ab0 = (int64_t *)lVar29;
            if (*(int *)(lVar29 * 0x1b0 + 0x110 + *(int64_t *)(param_6 + 0x140)) != -1) {
              if (cVar26 == -1) {
                puVar18 = (int32_t *)FUN_180285c90(&uStack_988,auStack_808,&uStack_af8);
                uVar9 = puVar18[1];
                uVar55 = puVar18[2];
                uVar56 = puVar18[3];
                *(int32_t *)((int64_t)&uStack_6d8 + (int64_t)puVar10) = *puVar18;
                *(int32_t *)((int64_t)&uStack_6d8 + 4 + (int64_t)puVar10) = uVar9;
                *(int32_t *)((int64_t)&uStack_6d0 + (int64_t)puVar10) = uVar55;
                *(int32_t *)((int64_t)&uStack_6d0 + 4 + (int64_t)puVar10) = uVar56;
                plStack_ab0 = (int64_t *)lVar29;
                puStack_a30 = puVar31;
                uStack_ae8 = uVar23;
              }
              else {
                uStack_958 = (uint64_t *)0x0;
                uStack_950 = 0;
                for (; cVar26 != cVar8; cVar26 = *(char *)((int64_t)cVar26 + 0x100 + param_6)) {
                  lVar29 = (int64_t)cVar26 * 0x1b0 + *(int64_t *)(param_6 + 0x140);
                  uStack_a68 = *(uint64_t *)(lVar29 + 0x90);
                  uStack_a60 = *(uint64_t *)(lVar29 + 0x98);
                  uStack_a58 = *(int32_t *)(lVar29 + 0x80);
                  uStack_a54 = *(int32_t *)(lVar29 + 0x84);
                  uStack_a50 = *(int32_t *)(lVar29 + 0x88);
                  uStack_a4c = *(int32_t *)(lVar29 + 0x8c);
                  puVar10 = (uint64_t *)UltraHighFreq_ConfigManager1(&uStack_a68,auStack_7e8,&uStack_958);
                  uStack_958 = (uint64_t *)*puVar10;
                  uStack_950 = puVar10[1];
                  uVar33 = uStack_b04;
                }
                puVar25 = auStack_6c8 + (int64_t)(int)uVar23 * 0x20;
                if ((int)(uVar23 + 2) < (int)uVar33) {
                  puVar10 = &uStack_6e8 + (int64_t)(int)(uVar23 + 2) * 4;
                }
                else {
                  puVar10 = &uStack_8f8;
                }
                uStack_a28 = puVar10;
                FUN_180300b10(puVar10,&uStack_7b8,puVar25);
                FUN_180285c90(puVar25,auStack_908,&uStack_6d8 + (int64_t)iStack_ac8 * 4);
                uVar20 = FUN_1801503e0(auStack_908,auStack_7d8);
                uVar21 = FUN_1801503e0(&uStack_958,auStack_7c8);
                func_0x000180085850(uVar21,&fStack_a48,uVar20);
                lVar29 = (int64_t)puVar31 + -1;
                uVar28 = uVar23;
                if ((int64_t)puStack_a80 < lVar29) {
                  lVar40 = lVar29 - (int64_t)puStack_a80;
                  plVar16 = alStack_5e8 + lVar29 * 4;
                  do {
                    plVar22 = (int64_t *)
                              func_0x00018022b3c0(puVar25,auStack_888,
                                                  &uStack_6e8 + (int64_t)(int)uVar23 * 4);
                    uVar23 = uVar23 - 1;
                    lVar32 = plVar22[1];
                    *plVar16 = *plVar22;
                    plVar16[1] = lVar32;
                    lVar40 = lVar40 + -1;
                    plVar16 = plVar16 + -4;
                    puVar10 = uStack_a28;
                    uVar28 = uStack_ae8;
                  } while (lVar40 != 0);
                }
                if (((fStack_a48 != 0.0) || (fStack_a44 != 0.0)) || (fStack_a40 != 0.0)) {
                  fVar59 = fStack_a44 * fStack_a44 + fStack_a48 * fStack_a48 +
                           fStack_a40 * fStack_a40;
                  auVar61 = rsqrtss(ZEXT416((uint)fVar59),ZEXT416((uint)fVar59));
                  fVar67 = auVar61._0_4_;
                  fVar67 = fVar67 * 0.5 * (3.0 - fVar59 * fVar67 * fVar67);
                  fStack_a48 = fStack_a48 * fVar67;
                  fStack_a44 = fStack_a44 * fVar67;
                  fStack_a40 = fStack_a40 * fVar67;
                  asinf();
                  FUN_18063b860(auStack_918,&fStack_a48);
                  puVar31 = (uint64_t *)func_0x00018022b490(&uStack_7b8,auStack_878,auStack_918);
                  uStack_7b8 = *puVar31;
                  uStack_7b0 = puVar31[1];
                }
                puVar31 = (uint64_t *)func_0x00018022b490(puVar10,auStack_868,&uStack_7b8);
                puVar10 = puStack_a78;
                uVar20 = puVar31[1];
                *(uint64_t *)((int64_t)&uStack_6e8 + (int64_t)puStack_a78) = *puVar31;
                *(uint64_t *)((int64_t)&uStack_6e0 + (int64_t)puStack_a78) = uVar20;
                uVar23 = uVar28;
                if ((int64_t)puStack_a80 < lVar29) {
                  lVar40 = lVar29 - (int64_t)puStack_a80;
                  puVar31 = &uStack_6e8 + lVar29 * 4;
                  do {
                    puVar13 = (uint64_t *)
                              func_0x00018022b490(puVar25,auStack_858,
                                                  alStack_5e8 + (int64_t)(int)uVar28 * 4);
                    uVar28 = uVar28 - 1;
                    uVar20 = puVar13[1];
                    *puVar31 = *puVar13;
                    puVar31[1] = uVar20;
                    lVar40 = lVar40 + -1;
                    puVar31 = puVar31 + -4;
                    uVar23 = uStack_ae8;
                  } while (lVar40 != 0);
                }
                pfVar17 = (float *)SystemFileHandler(puVar25,auStack_848,&uStack_958);
                fVar67 = *(float *)((int64_t)&uStack_6d8 + (int64_t)puStack_a38) - *pfVar17;
                fVar59 = *(float *)((int64_t)&uStack_6d8 + 4 + (int64_t)puStack_a38) - pfVar17[1];
                fVar66 = *(float *)((int64_t)&uStack_6d0 + (int64_t)puStack_a38) - pfVar17[2];
                uStack_9d8 = (uint64_t *)CONCAT44(fVar59,fVar67);
                uStack_9d0 = CONCAT44(0x7f7fffff,fVar66);
                *(float *)((int64_t)&uStack_6d8 + (int64_t)puVar10) = fVar67;
                *(float *)((int64_t)&uStack_6d8 + 4 + (int64_t)puVar10) = fVar59;
                *(float *)((int64_t)&uStack_6d0 + (int64_t)puVar10) = fVar66;
                *(int32_t *)((int64_t)&uStack_6d0 + 4 + (int64_t)puVar10) = 0x7f7fffff;
                uStack_ae8 = uVar23;
              }
              iStack_ac8 = uStack_ae8 + 1;
              cVar26 = cVar8;
              uVar33 = uStack_b04;
              puStack_a80 = puStack_a30;
              puStack_a38 = puVar10;
            }
            cVar8 = *(char *)((int64_t)plStack_ab0 + 0x100 + param_6);
            puStack_a30 = (uint64_t *)((int64_t)puStack_a30 + 1);
            uStack_ae8 = uStack_ae8 + 1;
            puStack_a78 = puVar10 + 4;
            plStack_ab0 = plStack_928;
            param_1 = lStack_ab8;
          } while ((int64_t)puStack_a30 < (int64_t)(int)uVar33);
        }
        uVar23 = uVar33 - 1;
        uStack_9e8 = uVar23;
        if (0 < (int)uVar33) {
          puStack_a80 = (uint64_t *)((int64_t)plStack_ab0 + -1);
          uVar30 = (uint64_t)iStack_ac8;
          iStack_ac4 = uVar33 - 2;
          uStack_a28 = &uStack_6e8 + (int64_t)plStack_ab0 * 4;
          puStack_a38 = &uStack_6d8 + (int64_t)plStack_ab0 * 4;
          puStack_a30 = auStack_608 + (int64_t)plStack_ab0 * 4;
          puStack_a78 = auStack_708 + (int64_t)plStack_ab0 * 4;
          iVar37 = iStack_ac8;
          uStack_ae8 = uVar33;
          do {
            uVar39 = 0;
            cVar8 = *(char *)(param_1 + 0xa4);
            cVar26 = -1;
            if (0 < (int64_t)plStack_ab0) {
              uVar35 = uVar39;
              uVar38 = uVar30;
              cVar36 = cVar8;
              cVar34 = cVar26;
              do {
                cVar8 = *(char *)((int64_t)cVar36 + 0x100 + param_6);
                bVar41 = *(int *)((int64_t)cVar36 * 0x1b0 + 0x110 + *(int64_t *)(param_6 + 0x140))
                         < 0;
                uVar30 = uVar39;
                if (bVar41) {
                  uVar30 = uVar38;
                }
                cVar26 = cVar36;
                iVar27 = (int)uVar35;
                if (bVar41) {
                  cVar26 = cVar34;
                  iVar27 = iVar37;
                }
                iVar37 = iVar27;
                uVar35 = (uint64_t)((int)uVar35 + 1);
                uVar39 = uVar39 + 1;
                uVar38 = uVar30;
                cVar36 = cVar8;
                iStack_ac8 = iVar37;
                cVar34 = cVar26;
              } while ((int64_t)uVar39 < (int64_t)plStack_ab0);
            }
            iStack_938 = *(int *)((int64_t)cVar8 * 0x1b0 + 0x110 + *(int64_t *)(param_6 + 0x140));
            uStack_9e8 = uVar23;
            if (iStack_938 != -1) {
              if (uVar23 == uStack_ac0) {
                *puStack_a38 = uVar15;
                puStack_a38[1] = uVar53;
              }
              if (0 < (int)uVar23) {
                uStack_a68 = 0;
                uStack_a60 = 0;
                for (; cVar26 != cVar8; cVar26 = *(char *)((int64_t)cVar26 + 0x100 + param_6)) {
                  lVar29 = (int64_t)cVar26 * 0x1b0 + *(int64_t *)(param_6 + 0x140);
                  uStack_958 = *(uint64_t **)(lVar29 + 0x90);
                  uStack_950 = *(uint64_t *)(lVar29 + 0x98);
                  uStack_948 = *(int32_t *)(lVar29 + 0x80);
                  uStack_944 = *(int32_t *)(lVar29 + 0x84);
                  uStack_940 = *(int32_t *)(lVar29 + 0x88);
                  uStack_93c = *(int32_t *)(lVar29 + 0x8c);
                  puVar10 = (uint64_t *)UltraHighFreq_ConfigManager1(&uStack_958,auStack_838,&uStack_a68);
                  uStack_a68 = *puVar10;
                  uStack_a60 = puVar10[1];
                }
                puVar10 = &uStack_6e8 + (int64_t)(int)uVar23 * 4;
                if ((int)uStack_ae8 < (int)uStack_b04) {
                  puVar31 = &uStack_6e8 + (int64_t)(int)uStack_ae8 * 4;
                }
                else {
                  puVar31 = &uStack_8f8;
                }
                uStack_958 = puVar31;
                FUN_180300b10(puVar31,&uStack_7b8,puVar10);
                FUN_180285c90(puVar10,auStack_998,&uStack_6d8 + (int64_t)iStack_ac8 * 4);
                uVar20 = FUN_1801503e0(auStack_998,auStack_828);
                uVar21 = FUN_1801503e0(&uStack_a68,auStack_818);
                func_0x000180085850(uVar21,&fStack_a98,uVar20);
                if ((int64_t)uVar30 < (int64_t)puStack_a80) {
                  lVar29 = (int64_t)puStack_a80 - uVar30;
                  puVar13 = puStack_a30;
                  iVar37 = iStack_ac4;
                  do {
                    puVar31 = (uint64_t *)
                              func_0x00018022b3c0(puVar10,auStack_7f8,
                                                  &uStack_6e8 + (int64_t)iVar37 * 4);
                    iVar37 = iVar37 + -1;
                    uVar20 = puVar31[1];
                    *puVar13 = *puVar31;
                    puVar13[1] = uVar20;
                    lVar29 = lVar29 + -1;
                    puVar13 = puVar13 + -4;
                    puVar31 = uStack_958;
                  } while (lVar29 != 0);
                }
                iVar37 = iStack_ac4;
                if (((fStack_a98 != 0.0) || (fStack_a94 != 0.0)) || (fStack_a90 != 0.0)) {
                  fVar59 = fStack_a94 * fStack_a94 + fStack_a98 * fStack_a98 +
                           fStack_a90 * fStack_a90;
                  auVar61 = rsqrtss(ZEXT416((uint)fVar59),ZEXT416((uint)fVar59));
                  fVar67 = auVar61._0_4_;
                  fVar67 = fVar67 * 0.5 * (3.0 - fVar59 * fVar67 * fVar67);
                  fStack_a98 = fStack_a98 * fVar67;
                  fStack_a94 = fStack_a94 * fVar67;
                  fStack_a90 = fStack_a90 * fVar67;
                  asinf();
                  FUN_18063b860(auStack_aa8,&fStack_a98);
                  puVar13 = (uint64_t *)func_0x00018022b490(&uStack_7b8,&uStack_788,auStack_aa8);
                  uStack_7b8 = *puVar13;
                  uStack_7b0 = puVar13[1];
                }
                puStack_b18 = &uStack_958;
                fStack_b10 = 1.1 / (param_9 + 0.1);
                uStack_958 = (uint64_t *)uStack_7b8;
                uStack_950 = uStack_7b0;
                puVar13 = (uint64_t *)FUN_18040b910(param_6,auStack_8c8,cVar8,iStack_938);
                uStack_7b8 = *puVar13;
                uStack_7b0 = puVar13[1];
                puVar31 = (uint64_t *)func_0x00018022b490(puVar31,auStack_8b8,&uStack_7b8);
                uVar20 = puVar31[1];
                *uStack_a28 = *puVar31;
                uStack_a28[1] = uVar20;
                if ((int64_t)uVar30 < (int64_t)puStack_a80) {
                  lVar29 = (int64_t)puStack_a80 - uVar30;
                  puVar31 = puStack_a78;
                  do {
                    puVar13 = (uint64_t *)
                              func_0x00018022b490(puVar10,auStack_8a8,
                                                  alStack_5e8 + (int64_t)iVar37 * 4);
                    iVar37 = iVar37 + -1;
                    uVar20 = puVar13[1];
                    *puVar31 = *puVar13;
                    puVar31[1] = uVar20;
                    lVar29 = lVar29 + -1;
                    puVar31 = puVar31 + -4;
                  } while (lVar29 != 0);
                }
                puVar18 = (int32_t *)UltraHighFreq_ConfigManager1(puVar10,afStack_898,&uStack_a68);
                uVar9 = puVar18[1];
                uVar55 = puVar18[2];
                uVar56 = puVar18[3];
                lVar29 = uVar30 * 0x20;
                *(int32_t *)(&uStack_6d8 + uVar30 * 4) = *puVar18;
                *(int32_t *)((int64_t)&uStack_6d8 + lVar29 + 4) = uVar9;
                *(int32_t *)(auStack_6c8 + lVar29 + -8) = uVar55;
                *(int32_t *)(auStack_6c8 + lVar29 + -4) = uVar56;
                iVar37 = iStack_ac8;
              }
            }
            puStack_a30 = puStack_a30 + -4;
            uVar23 = uStack_9e8 - 1;
            puStack_a38 = puStack_a38 + -4;
            puStack_a78 = puStack_a78 + -4;
            uStack_a28 = uStack_a28 + -4;
            uStack_ae8 = uStack_ae8 - 1;
            iStack_ac4 = iStack_ac4 + -1;
            puStack_a80 = (uint64_t *)((int64_t)puStack_a80 + -1);
            plStack_ab0 = (int64_t *)((int64_t)plStack_ab0 + -1);
            param_1 = lStack_ab8;
            uStack_9e8 = uVar23;
          } while (-1 < (int)uVar23);
        }
        uStack_8d8 = uStack_6d8;
        uStack_8d0 = uStack_6d0;
        pfVar17 = (float *)UltraHighFreq_ConfigManager1(&uStack_988,auStack_768,&uStack_8d8);
        fStack_abc = (float)((int)fStack_abc + 1);
        fVar67 = *pfVar17;
        fVar59 = pfVar17[1];
        uStack_8d8 = *(uint64_t *)pfVar17;
        fVar66 = pfVar17[2];
        uStack_8d0 = *(uint64_t *)(pfVar17 + 2);
        fVar54 = (fVar67 - (float)uStack_af8) * fVar42;
        fVar58 = (fVar59 - uStack_af8._4_4_) * fVar42;
        fVar52 = (fVar66 - (float)lStack_af0) * fVar42;
        fVar52 = fVar58 * fVar58 + fVar54 * fVar54 + fVar52 * fVar52;
        if (fVar52 <= 1e-05) break;
        plVar16 = (int64_t *)((int64_t)auStack_ad8 + -1);
        auVar19 = auStack_ad8;
        param_1 = lStack_ab8;
        uVar33 = uStack_b04;
      } while ((int)fStack_abc < 10);
      *(bool *)(lStack_ab8 + 0x1c4) = fVar52 <= 1e-05;
      if (1e-05 < fVar52) {
        fVar54 = ((float)lStack_af0 - fVar66) * fVar42;
        fVar52 = ((float)uStack_af8 - fVar67) * fVar42;
        fVar42 = (uStack_af8._4_4_ - fVar59) * fVar42;
        fVar66 = fVar42 * fVar42 + fVar52 * fVar52 + fVar54 * fVar54;
        auVar61 = rsqrtss(ZEXT416((uint)fVar66),ZEXT416((uint)fVar66));
        fVar67 = auVar61._0_4_;
        fVar59 = fVar67 * 0.5 * (3.0 - fVar66 * fVar67 * fVar67);
        fVar66 = fVar66 * fVar59 - 0.0031622776;
        fVar67 = fVar59 * fVar52 * fVar66;
        fVar42 = fVar59 * fVar42 * fVar66;
        fVar66 = fVar59 * fVar54 * fVar66;
        uStack_a68 = CONCAT44(fVar42,fVar67);
        uStack_a60 = CONCAT44(0x7f7fffff,fVar66);
        *(float *)(lStack_ab8 + 0x1b0) = fVar67;
        *(float *)(lStack_ab8 + 0x1b4) = fVar42;
        *(float *)(lStack_ab8 + 0x1b8) = fVar66;
        *(int32_t *)(lStack_ab8 + 0x1bc) = 0x7f7fffff;
      }
      else {
        *(uint64_t *)(lStack_ab8 + 0x1b0) = 0;
        *(uint64_t *)(lStack_ab8 + 0x1b8) = 0;
      }
      cVar26 = -1;
      cVar8 = *(char *)(lStack_ab8 + 0xa4);
      cStack_b00 = cVar8;
      plVar16 = (int64_t *)(uint64_t)uStack_b04;
      if (0 < (int)uStack_b04) {
        do {
          plStack_ab0 = plVar16;
          lVar29 = lStack_ae0;
          lVar40 = (int64_t)cVar8 * 0x1b0;
          auStack_ad8 = (int8_t  [8])(int64_t)cVar8;
          bVar1 = *(byte *)(lVar40 + 0xf1 + *(int64_t *)(param_6 + 0x140));
          cStack_b00 = cVar8;
          if ('\0' < (char)bVar1) {
            lVar32 = 0;
            uVar30 = (uint64_t)bVar1;
            do {
              cVar8 = *(char *)(lVar32 + *(int64_t *)
                                          (lVar40 + 0xf8 + *(int64_t *)(param_6 + 0x140)));
              if (cVar8 != cVar26) {
                pfVar17 = (float *)CoreSystem_AuthenticationHandler0(lVar29,cVar8,param_6);
                lVar24 = (int64_t)cVar8;
                fVar42 = pfVar17[1];
                fVar67 = pfVar17[2];
                fVar59 = pfVar17[3];
                afStack_4e8[lVar24 * 4] = *pfVar17;
                afStack_4e8[lVar24 * 4 + 1] = fVar42;
                *(float *)(&uStack_4e0 + lVar24 * 2) = fVar67;
                *(float *)((int64_t)&uStack_4e0 + lVar24 * 0x10 + 4) = fVar59;
              }
              lVar32 = lVar32 + 1;
              uVar30 = uVar30 - 1;
            } while (uVar30 != 0);
          }
          cVar8 = *(char *)((int64_t)auStack_ad8 + 0x100 + param_6);
          cVar26 = cStack_b00;
          plVar16 = (int64_t *)((int64_t)plStack_ab0 - 1U);
        } while ((int64_t)plStack_ab0 - 1U != 0);
        plStack_ab0 = (int64_t *)0x0;
        cStack_b00 = cVar8;
      }
      lVar29 = lStack_ab8;
      uStack_9c8 = uStack_988;
      uStack_9c0 = uStack_980;
      uStack_9b8 = uStack_978;
      uStack_9b0 = uStack_970;
      uVar9 = (int32_t)uStack_978;
      uVar55 = uStack_978._4_4_;
      uVar56 = (int32_t)uStack_970;
      uVar57 = uStack_970._4_4_;
      if (bStack_b08 != 0xff) {
        puVar10 = (uint64_t *)UltraHighFreq_FileSystem1(&uStack_9c8,&uStack_7b8,&uStack_8f8);
        uStack_9c8 = *puVar10;
        uStack_9c0 = puVar10[1];
        uVar9 = *(int32_t *)(puVar10 + 2);
        uVar55 = *(int32_t *)((int64_t)puVar10 + 0x14);
        uStack_9b8 = puVar10[2];
        uVar56 = *(int32_t *)(puVar10 + 3);
        uVar57 = *(int32_t *)((int64_t)puVar10 + 0x1c);
        uStack_9b0 = puVar10[3];
      }
      uVar30 = (uint64_t)(int)uStack_ac0;
      if (-1 < (int)uStack_ac0) {
        plVar16 = alStack_5e8 + uVar30 * 4;
        pfVar17 = (float *)((uVar30 + 0xb) * 0x10 + lVar29);
        do {
          cVar8 = *(char *)(lVar29 + 0xa4);
          iVar37 = (int)uVar30;
          if (0 < iVar37) {
            uVar30 = uVar30 & 0xffffffff;
            do {
              cVar26 = cVar8;
              cVar8 = *(char *)((int64_t)cVar26 + 0x100 + param_6);
              uVar30 = uVar30 - 1;
            } while (uVar30 != 0);
          }
          uStack_7a8 = CONCAT44(uVar55,uVar9);
          uStack_7a0 = CONCAT44(uVar57,uVar56);
          auStack_ad8 = (int8_t  [8])((int64_t)iVar37 * 0x20);
          plStack_ab0 = plVar16;
          uStack_7b8 = uStack_9c8;
          uStack_7b0 = uStack_9c0;
          puVar10 = (uint64_t *)
                    UltraHighFreq_FileSystem1(&uStack_988,&uStack_788,&uStack_6e8 + (int64_t)iVar37 * 4);
          uStack_9c8 = *puVar10;
          uStack_9c0 = puVar10[1];
          uStack_9b8 = puVar10[2];
          uStack_9b0 = puVar10[3];
          plVar22 = (int64_t *)FUN_180300b10(&uStack_7b8,&uStack_788,&uStack_9c8);
          lVar40 = plVar22[1];
          *plVar16 = *plVar22;
          plVar16[1] = lVar40;
          uVar9 = *(int32_t *)((int64_t)plVar22 + 0x14);
          lVar40 = plVar22[3];
          uVar55 = *(int32_t *)((int64_t)plVar22 + 0x1c);
          *(int *)(plVar16 + 2) = (int)plVar22[2];
          *(int32_t *)((int64_t)plVar16 + 0x14) = uVar9;
          *(int *)(plVar16 + 3) = (int)lVar40;
          *(int32_t *)((int64_t)plVar16 + 0x1c) = uVar55;
          if (cVar8 == *(char *)(lVar29 + 0xa4)) {
            iVar37 = *(int *)(lVar29 + 0xa0);
            if (iVar37 == 5) {
LAB_180664ddf:
              uStack_9c8 = uStack_9a8;
              uStack_9c0 = uStack_9a0;
            }
            else if (iVar37 == 6) {
              uStack_9c8 = *(uint64_t *)(lVar29 + 0x20);
              uStack_9c0 = *(uint64_t *)(lVar29 + 0x28);
            }
            else {
              if (iVar37 != 3) goto LAB_180664ddf;
              uStack_9c8 = *(uint64_t *)(lVar29 + 0x20);
              uStack_9c0 = *(uint64_t *)(lVar29 + 0x28);
              if (0.0 < *(float *)(lVar29 + 0x30)) {
                pfVar11 = (float *)UltraHighFreq_ConfigManager1(&uStack_9c8,auStack_768,&uStack_9f8);
                fVar42 = *pfVar11;
                fVar67 = *(float *)(lStack_968 + 0x30);
                fVar59 = *(float *)(lStack_968 + 0x34);
                fVar66 = *(float *)(lStack_968 + 0x38);
                fVar52 = pfVar11[1];
                fVar54 = pfVar11[2];
                uVar15 = func_0x0001803812e0(&uStack_a08,afStack_898);
                SystemFileHandler(&uStack_9c8,auStack_998,uVar15);
                uStack_a68 = CONCAT44(*(float *)(lVar29 + 0x14) -
                                      ((fVar52 - fVar59) * fStack_934 + fVar59),
                                      *(float *)(lVar29 + 0x10) -
                                      ((fVar42 - fVar67) * fStack_934 + fVar67));
                uStack_a60 = CONCAT44(0x7f7fffff,
                                      *(float *)(lVar29 + 0x18) -
                                      ((fVar54 - fVar66) * fStack_934 + fVar66));
                FUN_1801503e0(&uStack_a68,auStack_aa8);
                func_0x000180085850(auStack_998,&fStack_a98,auStack_aa8);
                if (((fStack_a98 != 0.0) || (fStack_a94 != 0.0)) || (fStack_a90 != 0.0)) {
                  fVar67 = fStack_a94 * fStack_a94 + fStack_a98 * fStack_a98 +
                           fStack_a90 * fStack_a90;
                  auVar61 = rsqrtss(ZEXT416((uint)fVar67),ZEXT416((uint)fVar67));
                  fVar42 = auVar61._0_4_;
                  fVar42 = fVar42 * 0.5 * (3.0 - fVar67 * fVar42 * fVar42);
                  fStack_a98 = fStack_a98 * fVar42;
                  fStack_a94 = fStack_a94 * fVar42;
                  fStack_a90 = fStack_a90 * fVar42;
                  asinf();
                  FUN_18063b860(auStack_918,&fStack_a98);
                  puVar10 = (uint64_t *)func_0x00018022b490(auStack_918,auStack_8a8,&uStack_9c8);
                  uStack_9c8 = *puVar10;
                  uStack_9c0 = puVar10[1];
                }
              }
            }
            plVar22 = (int64_t *)FUN_180300b10(&uStack_7b8,&uStack_788,&uStack_9c8);
            lVar29 = plVar22[1];
            *plVar16 = *plVar22;
            plVar16[1] = lVar29;
            uVar9 = *(int32_t *)((int64_t)plVar22 + 0x14);
            lVar29 = plVar22[3];
            uVar55 = *(int32_t *)((int64_t)plVar22 + 0x1c);
            *(int *)(plVar16 + 2) = (int)plVar22[2];
            *(int32_t *)((int64_t)plVar16 + 0x14) = uVar9;
            *(int *)(plVar16 + 3) = (int)lVar29;
            *(int32_t *)((int64_t)plVar16 + 0x1c) = uVar55;
          }
          plStack_928 = (int64_t *)*plVar16;
          lStack_920 = plVar16[1];
          func_0x00018022b430(&plStack_928);
          lVar29 = (int64_t)cVar8;
          func_0x00018022b3c0(lStack_ae0 + 0x820 + lVar29 * 0x10,&fStack_a48,&plStack_928);
          if ((*(float *)(lStack_ab8 + 0x1dc) <= 30.0 && *(float *)(lStack_ab8 + 0x1dc) != 30.0) &&
             (cVar8 != *(char *)(lStack_ab8 + 0xa4))) {
            func_0x00018022b3c0(((int64_t)(int)uStack_ac0 + 0xb) * 0x10 + lStack_ab8,auStack_908,
                                &fStack_a48);
            FUN_18063b720(auStack_8b8,&fStack_abc,auStack_908);
            if (3.1415927 < fStack_abc) {
              fStack_abc = 6.2831855 - fStack_abc;
            }
            fVar42 = param_8 * *(float *)(lStack_ab8 + 0x1dc);
            if (fVar42 < fStack_abc) {
              fVar42 = fVar42 / fStack_abc;
              if (0.001 <= fVar42) {
                if (fVar42 <= 0.999) {
                  fVar67 = *pfVar17;
                  fVar59 = pfVar17[1];
                  fVar66 = pfVar17[2];
                  fVar52 = pfVar17[3];
                  fVar54 = fVar66 * fStack_a40;
                  fVar58 = fVar52 * fStack_a3c;
                  uStack_778 = 0xbf800000;
                  uStack_774 = 0xbf800000;
                  uStack_770 = 0xbf800000;
                  uStack_76c = 0xbf800000;
                  auVar62._0_4_ = fVar54 + fVar67 * fStack_a48;
                  auVar62._4_4_ = fVar58 + fVar59 * fStack_a44;
                  auVar62._8_4_ = fVar54 + fVar54;
                  auVar62._12_4_ = fVar58 + fVar58;
                  auVar63._4_12_ = auVar62._4_12_;
                  auVar63._0_4_ = auVar62._0_4_ + auVar62._4_4_;
                  uStack_788 = 0x3f8000003f800000;
                  uStack_780 = 0x3f8000003f800000;
                  uVar23 = movmskps((int)lStack_ab8,auVar63);
                  uVar30 = (uint64_t)(uVar23 & 1);
                  fVar54 = *(float *)(&uStack_788 + uVar30 * 2) * fStack_a48;
                  fVar58 = *(float *)((int64_t)&uStack_788 + uVar30 * 0x10 + 4) * fStack_a44;
                  fVar69 = *(float *)(&uStack_780 + uVar30 * 2) * fStack_a40;
                  fVar68 = *(float *)((int64_t)&uStack_780 + uVar30 * 0x10 + 4) * fStack_a3c;
                  if (0.9995 < ABS(auVar63._0_4_)) {
                    fVar70 = 1.0 - fVar42;
                    uStack_958 = (uint64_t *)
                                 CONCAT44(fVar70 * fVar59 + fVar42 * fVar58,
                                          fVar70 * fVar67 + fVar42 * fVar54);
                    uStack_950 = CONCAT44(fVar70 * fVar52 + fVar42 * fVar68,
                                          fVar70 * fVar66 + fVar42 * fVar69);
                    func_0x00018022b430(&uStack_958);
                    fStack_a48 = (float)uStack_958;
                    fStack_a44 = uStack_958._4_4_;
                    fStack_a40 = (float)uStack_950;
                    fStack_a3c = uStack_950._4_4_;
                  }
                  else {
                    acosf();
                    fVar42 = (float)sinf();
                    fVar70 = (float)sinf();
                    fVar70 = fVar70 * (1.0 / fVar42);
                    fVar43 = (float)sinf();
                    fVar43 = fVar43 * (1.0 / fVar42);
                    fStack_a48 = fVar70 * fVar67 + fVar43 * fVar54;
                    fStack_a44 = fVar70 * fVar59 + fVar43 * fVar58;
                    fStack_a40 = fVar70 * fVar66 + fVar43 * fVar69;
                    fStack_a3c = fVar70 * fVar52 + fVar43 * fVar68;
                  }
                }
              }
              else {
                fStack_a48 = *pfVar17;
                fStack_a44 = pfVar17[1];
                fStack_a40 = pfVar17[2];
                fStack_a3c = pfVar17[3];
              }
              plVar22 = (int64_t *)
                        func_0x00018022b490((lVar29 + 0x82) * 0x10 + lStack_ae0,auStack_8c8,
                                            &fStack_a48);
              plStack_928 = (int64_t *)*plVar22;
              lStack_920 = plVar22[1];
              *plVar16 = (int64_t)plStack_928;
              plVar16[1] = lStack_920;
              puVar10 = (uint64_t *)
                        UltraHighFreq_FileSystem1(&uStack_7b8,&uStack_788,
                                      (int64_t)alStack_5e8 + (int64_t)auStack_ad8);
              uStack_9c8 = *puVar10;
              uStack_9c0 = puVar10[1];
              uStack_9b8 = puVar10[2];
              uStack_9b0 = puVar10[3];
            }
          }
          *(uint64_t *)pfVar17 = CONCAT44(fStack_a44,fStack_a48);
          *(uint64_t *)(pfVar17 + 2) = CONCAT44(fStack_a3c,fStack_a40);
          uVar9 = func_0x00018022b3c0(&uStack_988,&uStack_a28,&uStack_9c8);
          fVar42 = fStack_a88;
          lVar40 = lStack_ae0;
          pfVar17[0x20] = (float)uStack_a28;
          pfVar17[0x21] = uStack_a28._4_4_;
          pfVar17[0x22] = fStack_a20;
          pfVar17[0x23] = fStack_a1c;
          if (1.0 <= fStack_a88) {
            FUN_18022b240(lStack_ae0,cVar8,&uStack_a28,param_6);
            if (cVar8 == '\0') {
              uVar15 = *(uint64_t *)(lVar40 + 0x1028);
              fVar42 = (float)*(uint64_t *)(lVar40 + 0x1020) + (float)auStack_a18._0_4_;
              auStack_ad8._4_4_ = (int32_t)((uint64_t)*(uint64_t *)(lVar40 + 0x1020) >> 0x20);
              uStack_ad0._0_4_ = (float)uVar15;
              uStack_ad0._4_4_ = (float)((uint64_t)uVar15 >> 0x20);
              auVar4._4_8_ = uVar15;
              auVar4._0_4_ = auStack_ad8._4_4_;
              auVar49._0_8_ = auVar4._0_8_ << 0x20;
              auVar49._8_4_ = (float)uStack_ad0;
              auVar49._12_4_ = uStack_ad0._4_4_;
              auVar5._4_8_ = auVar49._8_8_;
              auVar5._0_4_ = fVar42;
              auVar50._0_8_ = auVar5._0_8_ << 0x20;
              auVar50._8_4_ = (float)uStack_ad0;
              auVar50._12_4_ = uStack_ad0._4_4_;
              auVar6._4_8_ = auVar50._8_8_;
              auVar6._0_4_ = fVar42;
              auVar51._0_8_ = auVar6._0_8_ << 0x20;
              auVar51._8_4_ = (float)auStack_ad8._4_4_ + (float)auStack_a18._4_4_;
              auVar51._12_4_ = uStack_ad0._4_4_;
              auVar48._4_12_ = auVar51._4_12_;
              auVar48._0_4_ = (float)uStack_ad0 + fStack_a10;
              goto LAB_1806654b3;
            }
          }
          else {
            if (0.001 <= fStack_a88) {
              if (fStack_a88 <= 0.999) {
                fVar67 = afStack_4e8[lVar29 * 4];
                fVar59 = afStack_4e8[lVar29 * 4 + 1];
                fVar66 = *(float *)(&uStack_4e0 + lVar29 * 2);
                fVar52 = *(float *)((int64_t)&uStack_4e0 + lVar29 * 0x10 + 4);
                fVar54 = fVar66 * fStack_a20;
                fVar58 = fVar52 * fStack_a1c;
                uStack_778 = 0xbf800000;
                uStack_774 = 0xbf800000;
                uStack_770 = 0xbf800000;
                uStack_76c = 0xbf800000;
                auVar64._0_4_ = fVar54 + fVar67 * (float)uStack_a28;
                auVar64._4_4_ = fVar58 + fVar59 * uStack_a28._4_4_;
                auVar64._8_4_ = fVar54 + fVar54;
                auVar64._12_4_ = fVar58 + fVar58;
                auVar65._4_12_ = auVar64._4_12_;
                auVar65._0_4_ = auVar64._0_4_ + auVar64._4_4_;
                uStack_788 = 0x3f8000003f800000;
                uStack_780 = 0x3f8000003f800000;
                uVar23 = movmskps(uVar9,auVar65);
                uVar30 = (uint64_t)(uVar23 & 1);
                fVar54 = *(float *)(&uStack_788 + uVar30 * 2) * (float)uStack_a28;
                fVar58 = *(float *)((int64_t)&uStack_788 + uVar30 * 0x10 + 4) * uStack_a28._4_4_;
                fVar69 = *(float *)(&uStack_780 + uVar30 * 2) * fStack_a20;
                fVar68 = *(float *)((int64_t)&uStack_780 + uVar30 * 0x10 + 4) * fStack_a1c;
                if (0.9995 < ABS(auVar65._0_4_)) {
                  fVar70 = 1.0 - fStack_a88;
                  auStack_ad8._4_4_ = fVar70 * fVar59 + fStack_a88 * fVar58;
                  auStack_ad8._0_4_ = fVar70 * fVar67 + fStack_a88 * fVar54;
                  uStack_ad0._0_4_ = fVar70 * fVar66 + fStack_a88 * fVar69;
                  uStack_ad0._4_4_ = fVar70 * fVar52 + fStack_a88 * fVar68;
                  func_0x00018022b430(auStack_ad8);
                  fVar67 = (float)auStack_ad8._0_4_;
                  fVar59 = (float)auStack_ad8._4_4_;
                  fVar66 = (float)uStack_ad0;
                  fVar52 = uStack_ad0._4_4_;
                }
                else {
                  acosf();
                  fVar42 = (float)sinf();
                  fVar70 = (float)sinf();
                  fVar70 = fVar70 * (1.0 / fVar42);
                  fVar43 = (float)sinf();
                  fVar43 = fVar43 * (1.0 / fVar42);
                  fVar42 = fStack_a88;
                  fVar67 = fVar70 * fVar67 + fVar43 * fVar54;
                  fVar59 = fVar70 * fVar59 + fVar43 * fVar58;
                  fVar66 = fVar70 * fVar66 + fVar43 * fVar69;
                  fVar52 = fVar70 * fVar52 + fVar43 * fVar68;
                }
                uStack_9d8 = (uint64_t *)CONCAT44(fVar59,fVar67);
                uStack_9d0 = CONCAT44(fVar52,fVar66);
              }
              else {
                uStack_9d8 = uStack_a28;
                uStack_9d0 = CONCAT44(fStack_a1c,fStack_a20);
              }
            }
            else {
              uStack_9d8 = *(uint64_t **)(afStack_4e8 + lVar29 * 4);
              uStack_9d0 = (&uStack_4e0)[lVar29 * 2];
            }
            func_0x00018022b430(&uStack_9d8);
            lVar40 = lStack_ae0;
            FUN_18022b240(lStack_ae0,cVar8,&uStack_9d8,param_6);
            if (cVar8 == '\0') {
              fVar67 = *(float *)(lVar40 + 0x1028);
              uVar9 = *(int32_t *)(lVar40 + 0x102c);
              auVar7._4_8_ = uStack_ad0;
              auVar7._0_4_ = *(float *)(lVar40 + 0x1024);
              auStack_ad8 = (int8_t  [8])(auVar7._0_8_ << 0x20);
              uStack_ad0._0_4_ = fVar67;
              uStack_ad0._4_4_ = (float)uVar9;
              fVar59 = (float)auStack_a18._0_4_ * fVar42 + *(float *)(lVar40 + 0x1020);
              auVar2._4_8_ = auStack_ad8._8_8_;
              auVar2._0_4_ = fVar59;
              auVar46._0_8_ = auVar2._0_8_ << 0x20;
              auVar46._8_4_ = fVar67;
              auVar46._12_4_ = uVar9;
              auVar3._4_8_ = auVar46._8_8_;
              auVar3._0_4_ = fVar59;
              auVar47._0_8_ = auVar3._0_8_ << 0x20;
              auVar47._8_4_ = *(float *)(lVar40 + 0x1024) + (float)auStack_a18._4_4_ * fVar42;
              auVar47._12_4_ = uVar9;
              auVar48._4_12_ = auVar47._4_12_;
              auVar48._0_4_ = fVar67 + fVar42 * fStack_a10;
LAB_1806654b3:
              *(uint64_t *)(lVar40 + 0x800) =
                   *(uint64_t *)(lVar40 + 0x800) | *(uint64_t *)(lVar40 + 0x810);
              uStack_ad0._4_4_ = auVar48._12_4_;
              auStack_ad8 = auVar48._4_8_;
              uStack_ad0._0_4_ = (float)auVar48._0_4_;
              *(int8_t (*) [16])(lVar40 + 0x1020) = _auStack_ad8;
            }
          }
          lVar40 = lStack_ae0;
          bVar1 = *(byte *)(lVar29 * 0x1b0 + 0xf1 + *(int64_t *)(param_6 + 0x140));
          if ('\x01' < (char)bVar1) {
            lVar32 = 0;
            uVar30 = (uint64_t)bVar1;
            do {
              cVar8 = *(char *)(lVar32 + *(int64_t *)
                                          (lVar29 * 0x1b0 + 0xf8 + *(int64_t *)(param_6 + 0x140)));
              if (cVar8 != cVar26) {
                FUN_18022b240(lVar40,cVar8,afStack_4e8 + (int64_t)cVar8 * 4,param_6);
              }
              lVar32 = lVar32 + 1;
              uVar30 = uVar30 - 1;
              plVar16 = plStack_ab0;
            } while (uVar30 != 0);
          }
          plVar16 = plVar16 + -4;
          uStack_ac0 = uStack_ac0 - 1;
          uVar30 = (uint64_t)uStack_ac0;
          pfVar17 = pfVar17 + -4;
          plStack_ab0 = plVar16;
          if ((int)uStack_ac0 < 0) break;
          lVar29 = lStack_ab8;
          uVar9 = (int32_t)uStack_9b8;
          uVar55 = uStack_9b8._4_4_;
          uVar56 = (int32_t)uStack_9b0;
          uVar57 = uStack_9b0._4_4_;
        } while( true );
      }
    }
  }
LAB_18066375a:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_e8 ^ (uint64_t)auStack_b38);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





