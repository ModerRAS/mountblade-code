#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part063.c - 6 个函数

// 函数: void FUN_1802ff780(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802ff780(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  char *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  void *puVar9;
  longlong lVar10;
  uint64_t *puVar11;
  char cVar12;
  uint64_t *puVar13;
  char *pcVar14;
  char *pcVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int aiStack_88 [4];
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int8_t auStack_68 [48];
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  pcVar14 = "bones";
  do {
    pcVar15 = pcVar14;
    pcVar14 = pcVar15 + 1;
  } while (*pcVar14 != '\0');
  puVar11 = *(uint64_t **)(param_2 + 0x30);
  if (puVar11 != (uint64_t *)0x0) {
    pcVar14 = (char *)0x0;
    do {
      pcVar6 = (char *)*puVar11;
      if (pcVar6 == (char *)0x0) {
        pcVar6 = (char *)0x180d48d24;
        pcVar4 = pcVar14;
      }
      else {
        pcVar4 = (char *)puVar11[2];
      }
      if (pcVar4 == pcVar15 + -0x180a19c8b) {
        pcVar4 = pcVar4 + (longlong)pcVar6;
        if (pcVar4 <= pcVar6) {
LAB_1802ff828:
          pcVar15 = "bone";
          do {
            pcVar6 = pcVar15;
            pcVar15 = pcVar6 + 1;
          } while (*pcVar15 != '\0');
          puVar11 = (uint64_t *)puVar11[6];
          do {
            if (puVar11 == (uint64_t *)0x0) {
              return;
            }
            pcVar15 = (char *)*puVar11;
            if (pcVar15 == (char *)0x0) {
              pcVar15 = (char *)0x180d48d24;
              pcVar4 = pcVar14;
            }
            else {
              pcVar4 = (char *)puVar11[2];
            }
            if (pcVar4 == pcVar6 + -0x180a19c83) {
              pcVar4 = pcVar15 + (longlong)pcVar4;
              if (pcVar4 <= pcVar15) {
LAB_1802ff921:
                aiStack_88[0] = 0;
                pcVar15 = "_index_";
                do {
                  pcVar6 = pcVar15;
                  pcVar15 = pcVar6 + 1;
                } while (*pcVar15 != '\0');
                puVar13 = (uint64_t *)puVar11[8];
                if (puVar13 != (uint64_t *)0x0) {
LAB_1802ff948:
                  pcVar15 = (char *)*puVar13;
                  if (pcVar15 == (char *)0x0) {
                    pcVar15 = (char *)0x180d48d24;
                    pcVar4 = pcVar14;
                  }
                  else {
                    pcVar4 = (char *)puVar13[2];
                  }
                  if (pcVar4 != pcVar6 + -0x180a1692f) goto LAB_1802ff9e8;
                  pcVar4 = pcVar4 + (longlong)pcVar15;
                  if (pcVar15 < pcVar4) {
                    lVar7 = (longlong)&unknown_var_9168_ptr - (longlong)pcVar15;
                    while (*pcVar15 == pcVar15[lVar7]) {
                      pcVar15 = pcVar15 + 1;
                      if (pcVar4 <= pcVar15) goto LAB_1802ff990;
                    }
                    goto LAB_1802ff9e8;
                  }
LAB_1802ff990:
                  pcVar15 = (char *)0x180d48d24;
                  if ((char *)puVar13[1] != (char *)0x0) {
                    pcVar15 = (char *)puVar13[1];
                  }
                  uVar5 = 0xffffffffffffffff;
                  do {
                    uVar5 = uVar5 + 1;
                  } while (pcVar15[uVar5] != '\0');
                  if (((uVar5 < 3) || (*pcVar15 != '0')) ||
                     (puVar9 = &unknown_var_5412_ptr, (pcVar15[1] + 0xa8U & 0xdf) != 0)) {
                    puVar9 = &unknown_var_2208_ptr;
                  }
                  FUN_18010cbc0(pcVar15,puVar9,aiStack_88);
                  goto LAB_1802ff9fc;
                }
LAB_1802ff9f5:
                aiStack_88[0] = 0;
LAB_1802ff9fc:
                if (*(char *)(param_1 + 0x20) <= aiStack_88[0]) {
                  return;
                }
                uVar1 = *(uint64_t *)(param_1 + 0x10);
                lVar10 = (longlong)aiStack_88[0] * 0x100 + *(longlong *)(param_1 + 0x18);
                lVar7 = FUN_180631f30(puVar11,&unknown_var_2248_ptr,auStack_68);
                if (lVar7 == 0) {
                  *(int32_t *)(lVar10 + 0x30) = 0x3f800000;
                  *(int32_t *)(lVar10 + 0x34) = 0;
                  *(int32_t *)(lVar10 + 0x38) = 0;
                  *(int32_t *)(lVar10 + 0x3c) = 0;
                  uVar16 = 0;
                  uVar17 = 0;
                  uVar18 = 0;
                  uVar19 = 0x3f800000;
                }
                else {
                  FUN_18063b470(&uStack_78,auStack_68);
                  *(int32_t *)(lVar10 + 0x30) = uStack_78;
                  *(int32_t *)(lVar10 + 0x34) = uStack_74;
                  *(int32_t *)(lVar10 + 0x38) = uStack_70;
                  *(int32_t *)(lVar10 + 0x3c) = uStack_6c;
                  uVar16 = uStack_38;
                  uVar17 = uStack_34;
                  uVar18 = uStack_30;
                  uVar19 = uStack_2c;
                }
                *(int32_t *)(lVar10 + 0x40) = uVar16;
                *(int32_t *)(lVar10 + 0x44) = uVar17;
                *(int32_t *)(lVar10 + 0x48) = uVar18;
                *(int32_t *)(lVar10 + 0x4c) = uVar19;
                FUN_1802f9b60(lVar10,puVar11,uVar1,param_3,param_4);
                pcVar15 = "bone";
                do {
                  pcVar6 = pcVar15;
                  pcVar15 = pcVar6 + 1;
                } while (*pcVar15 != '\0');
                puVar11 = (uint64_t *)puVar11[0xb];
                if (puVar11 == (uint64_t *)0x0) {
                  return;
                }
                do {
                  pcVar15 = (char *)*puVar11;
                  if (pcVar15 == (char *)0x0) {
                    pcVar15 = (char *)0x180d48d24;
                    pcVar4 = pcVar14;
                  }
                  else {
                    pcVar4 = (char *)puVar11[2];
                  }
                  if (pcVar4 == pcVar6 + -0x180a19c83) {
                    pcVar4 = pcVar4 + (longlong)pcVar15;
                    if (pcVar4 <= pcVar15) goto LAB_1802ff921;
                    lVar7 = (longlong)&unknown_var_2308_ptr - (longlong)pcVar15;
                    while (*pcVar15 == pcVar15[lVar7]) {
                      pcVar15 = pcVar15 + 1;
                      if (pcVar4 <= pcVar15) goto LAB_1802ff921;
                    }
                  }
                  puVar11 = (uint64_t *)puVar11[0xb];
                  if (puVar11 == (uint64_t *)0x0) {
                    return;
                  }
                } while( true );
              }
              lVar7 = (longlong)&unknown_var_2308_ptr - (longlong)pcVar15;
              while (*pcVar15 == pcVar15[lVar7]) {
                pcVar15 = pcVar15 + 1;
                if (pcVar4 <= pcVar15) goto LAB_1802ff921;
              }
            }
            puVar11 = (uint64_t *)puVar11[0xb];
          } while( true );
        }
        lVar7 = (longlong)&unknown_var_2316_ptr - (longlong)pcVar6;
        while (*pcVar6 == pcVar6[lVar7]) {
          pcVar6 = pcVar6 + 1;
          if (pcVar4 <= pcVar6) goto LAB_1802ff828;
        }
      }
      puVar11 = (uint64_t *)puVar11[0xb];
    } while (puVar11 != (uint64_t *)0x0);
  }
  cVar12 = '\0';
  if ('\0' < *(char *)(param_1 + 0x20)) {
    do {
      lVar7 = (longlong)cVar12;
      cVar12 = cVar12 + '\x01';
      lVar8 = lVar7 * 0x100;
      lVar10 = lVar7 * 0x1b0 + *(longlong *)(*(longlong *)(param_1 + 0x208) + 0x140);
      lVar7 = *(longlong *)(param_1 + 0x18);
      uVar1 = *(uint64_t *)(lVar10 + 0x80);
      uVar2 = *(uint64_t *)(lVar10 + 0x88);
      uVar3 = *(uint64_t *)(lVar10 + 0x98);
      puVar11 = (uint64_t *)(lVar8 + 0x30 + lVar7);
      *puVar11 = *(uint64_t *)(lVar10 + 0x90);
      puVar11[1] = uVar3;
      puVar11 = (uint64_t *)(lVar8 + 0x40 + lVar7);
      *puVar11 = uVar1;
      puVar11[1] = uVar2;
    } while (cVar12 < *(char *)(param_1 + 0x20));
  }
  return;
LAB_1802ff9e8:
  puVar13 = (uint64_t *)puVar13[6];
  if (puVar13 == (uint64_t *)0x0) goto LAB_1802ff9f5;
  goto LAB_1802ff948;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1802ffb00(uint64_t param_1,longlong *param_2,int8_t param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *plVar3;
  uint64_t *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plStackX_10;
  longlong lStack_1b8;
  longlong lStack_1b0;
  uint64_t uStack_1a8;
  int32_t uStack_1a0;
  int32_t uStack_198;
  int32_t uStack_194;
  int32_t uStack_190;
  int32_t uStack_18c;
  int32_t uStack_188;
  int32_t uStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  int32_t uStack_168;
  int32_t uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  uint64_t uStack_158;
  longlong lStack_150;
  uint64_t uStack_148;
  longlong lStack_140;
  uint64_t uStack_138;
  longlong lStack_130;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  uint64_t uStack_108;
  ulonglong uStack_100;
  uint64_t uStack_f8;
  ulonglong uStack_f0;
  int32_t uStack_e8;
  int32_t uStack_e4;
  int32_t uStack_e0;
  int32_t uStack_dc;
  int32_t uStack_d8;
  int32_t uStack_d4;
  int32_t uStack_d0;
  int32_t uStack_cc;
  uint64_t uStack_c8;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int8_t auStack_78 [64];
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_158 = param_2[0xe];
  lStack_150 = param_2[0xf];
  uStack_148 = param_2[0x10];
  lStack_140 = param_2[0x11];
  uStack_138 = param_2[0x12];
  lStack_130 = param_2[0x13];
  uStack_128 = (int32_t)param_2[0x14];
  uStack_124 = *(int32_t *)((longlong)param_2 + 0xa4);
  uStack_120 = (int32_t)param_2[0x15];
  uStack_11c = *(int32_t *)((longlong)param_2 + 0xac);
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 3;
  plStackX_10 = param_2;
  FUN_1802e8c60(param_2,&lStack_1b8);
  FUN_18005ea90(&lStack_1b8,&plStackX_10);
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xf0,8,3);
  plVar3 = (longlong *)FUN_18039dda0(uVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  iVar10 = 0;
  if (lStack_1b0 - lStack_1b8 >> 3 != 0) {
    lVar9 = 0;
    lVar5 = lStack_1b8;
    lVar8 = lStack_1b0;
    do {
      lVar1 = *(longlong *)(lVar9 + lVar5);
      iVar6 = 0;
      iVar7 = (int)(*(longlong *)(lVar1 + 0xf8) - *(longlong *)(lVar1 + 0xf0) >> 3);
      if (0 < iVar7) {
        do {
          FUN_1802ed230(lVar1,&plStackX_10,iVar6);
          uStack_198 = (int32_t)uStack_158;
          uStack_194 = uStack_158._4_4_;
          uStack_190 = (int32_t)lStack_150;
          uStack_18c = 0;
          uStack_188 = (int32_t)uStack_148;
          uStack_184 = uStack_148._4_4_;
          uStack_180 = (int32_t)lStack_140;
          uStack_17c = 0;
          uStack_178 = (int32_t)uStack_138;
          uStack_174 = uStack_138._4_4_;
          uStack_170 = (int32_t)lStack_130;
          uStack_16c = 0;
          uStack_168 = uStack_128;
          uStack_164 = uStack_124;
          uStack_160 = uStack_120;
          uStack_15c = 0x3f800000;
          FUN_180084760(&uStack_198,auStack_78);
          uStack_108 = *(uint64_t *)(lVar1 + 0x70);
          uStack_f8 = *(uint64_t *)(lVar1 + 0x80);
          uStack_e8 = *(int32_t *)(lVar1 + 0x90);
          uStack_e4 = *(int32_t *)(lVar1 + 0x94);
          uStack_e0 = *(int32_t *)(lVar1 + 0x98);
          uStack_d8 = *(int32_t *)(lVar1 + 0xa0);
          uStack_d4 = *(int32_t *)(lVar1 + 0xa4);
          uStack_d0 = *(int32_t *)(lVar1 + 0xa8);
          uStack_100 = *(ulonglong *)(lVar1 + 0x78) & 0xffffffff;
          uStack_f0 = *(ulonglong *)(lVar1 + 0x88) & 0xffffffff;
          uStack_dc = 0;
          uStack_cc = 0x3f800000;
          puVar4 = (uint64_t *)FUN_1800946d0(&uStack_108,&uStack_198,auStack_78);
          uStack_b8 = *puVar4;
          uStack_b0 = puVar4[1];
          uStack_a8 = puVar4[2];
          uStack_a0 = puVar4[3];
          uStack_98 = *(int32_t *)(puVar4 + 4);
          uStack_94 = *(int32_t *)((longlong)puVar4 + 0x24);
          uStack_90 = *(int32_t *)(puVar4 + 5);
          uStack_8c = *(int32_t *)((longlong)puVar4 + 0x2c);
          uStack_88 = *(int32_t *)(puVar4 + 6);
          uStack_84 = *(int32_t *)((longlong)puVar4 + 0x34);
          uStack_80 = *(int32_t *)(puVar4 + 7);
          uStack_7c = *(int32_t *)((longlong)puVar4 + 0x3c);
          (**(code **)(*plStackX_10 + 0x148))(plStackX_10,&uStack_b8);
          FUN_18039f160(plVar3,plStackX_10);
          if (plStackX_10 != (longlong *)0x0) {
            (**(code **)(*plStackX_10 + 0x38))();
          }
          iVar6 = iVar6 + 1;
          lVar5 = lStack_1b8;
          lVar8 = lStack_1b0;
        } while (iVar6 < iVar7);
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 8;
    } while ((ulonglong)(longlong)iVar10 < (ulonglong)(lVar8 - lVar5 >> 3));
  }
  FUN_1802fbf30(param_1,param_3,plVar3,&uStack_158);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  if (lStack_1b8 == 0) {
    return plVar3;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1802ffe10(longlong param_1,char param_2,float *param_3)
void FUN_1802ffe10(longlong param_1,char param_2,float *param_3)

{
  uint64_t *puVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  longlong lVar22;
  longlong lVar23;
  
  uVar20 = *(uint64_t *)(param_3 + 2);
  lVar23 = (longlong)param_2;
  puVar1 = (uint64_t *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x18) + lVar23 * 0x10);
  *puVar1 = *(uint64_t *)param_3;
  puVar1[1] = uVar20;
  fVar4 = *param_3;
  lVar22 = lVar23 * 0x1b0;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 0x140);
  lVar8 = *(longlong *)(param_1 + 0x18);
  lVar23 = lVar23 * 0x100;
  pfVar2 = (float *)(lVar7 + 0xa0 + lVar22);
  fVar9 = pfVar2[1];
  fVar10 = pfVar2[2];
  fVar11 = pfVar2[3];
  pfVar3 = (float *)(lVar7 + 0xb0 + lVar22);
  fVar12 = *pfVar3;
  fVar13 = pfVar3[1];
  fVar14 = pfVar3[2];
  fVar15 = pfVar3[3];
  pfVar3 = (float *)(lVar7 + 0xc0 + lVar22);
  fVar16 = *pfVar3;
  fVar17 = pfVar3[1];
  fVar18 = pfVar3[2];
  fVar19 = pfVar3[3];
  puVar1 = (uint64_t *)(lVar7 + 0xd0 + lVar22);
  uVar20 = *puVar1;
  uVar21 = puVar1[1];
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  pfVar3 = (float *)(lVar23 + 0x60 + lVar8);
  *pfVar3 = *pfVar2 * fVar4;
  pfVar3[1] = fVar9 * fVar4;
  pfVar3[2] = fVar10 * fVar4;
  pfVar3[3] = fVar11;
  pfVar3 = (float *)(lVar23 + 0x70 + lVar8);
  *pfVar3 = fVar12 * fVar5;
  pfVar3[1] = fVar13 * fVar5;
  pfVar3[2] = fVar14 * fVar5;
  pfVar3[3] = fVar15;
  pfVar3 = (float *)(lVar23 + 0x80 + lVar8);
  *pfVar3 = fVar16 * fVar6;
  pfVar3[1] = fVar17 * fVar6;
  pfVar3[2] = fVar18 * fVar6;
  pfVar3[3] = fVar19;
  puVar1 = (uint64_t *)(lVar23 + 0x90 + lVar8);
  *puVar1 = uVar20;
  puVar1[1] = uVar21;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fffb0(longlong param_1,char param_2)
void FUN_1802fffb0(longlong param_1,char param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  FUN_1803001a0();
  *(char *)(param_1 + 0x20) = param_2;
  uVar10 = FUN_18062b1e0(_DAT_180c8ed18,(longlong)param_2 << 8,0x10,4,uVar10);
  *(uint64_t *)(param_1 + 0x18) = uVar10;
  uVar8 = 0;
  uVar4 = uVar8;
  uVar9 = uVar8;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    do {
      puVar3 = (uint *)(uVar9 * 0x100 + *(longlong *)(param_1 + 0x18));
      *puVar3 = 0;
      puVar1 = puVar3 + 0x2c;
      puVar1[0] = 0;
      puVar1[1] = 0;
      puVar3[0x2e] = 0;
      puVar3[0x2f] = 0;
      puVar3[0x30] = 0;
      puVar3[0x31] = 0;
      puVar3[0x32] = 3;
      puVar2 = puVar3 + 0x34;
      puVar2[0] = 0;
      puVar2[1] = 0;
      puVar3[0x36] = 0;
      puVar3[0x37] = 0;
      puVar3[0x38] = 0;
      puVar3[0x39] = 0;
      puVar3[0x3a] = 3;
      puVar3[0xc] = 0x3f800000;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0x3f800000;
      do {
        LOCK();
        uVar5 = *puVar3;
        *puVar3 = *puVar3 | 1;
        UNLOCK();
      } while ((uVar5 & 1) != 0);
      puVar3[1] = 0x3f800000;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0x3f800000;
      *puVar3 = 0;
      puVar3[0x14] = 0x3f800000;
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      puVar3[0x18] = 0x3f800000;
      puVar3[0x19] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1b] = 0;
      puVar3[0x1c] = 0;
      puVar3[0x1d] = 0x3f800000;
      puVar3[0x1e] = 0;
      puVar3[0x1f] = 0;
      puVar3[0x20] = 0;
      puVar3[0x21] = 0;
      puVar3[0x22] = 0x3f800000;
      puVar3[0x23] = 0;
      puVar3[0x24] = 0;
      puVar3[0x25] = 0;
      puVar3[0x26] = 0;
      puVar3[0x27] = 0x3f800000;
      puVar3[0x3c] = 0;
      puVar3[0x3d] = 0;
      *(int16_t *)(puVar3 + 0x28) = 0xff;
      puVar3[0x2a] = 0;
      puVar3[0x2b] = 0;
      uVar6 = uVar8;
      uVar7 = uVar8;
      if (*(longlong *)(puVar3 + 0x2e) - *(longlong *)puVar1 >> 3 != 0) {
        do {
          (**(code **)(**(longlong **)(uVar7 + *(longlong *)puVar1) + 0x1e0))
                    (*(longlong **)(uVar7 + *(longlong *)puVar1),0);
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          uVar7 = uVar7 + 8;
        } while ((ulonglong)(longlong)(int)uVar5 <
                 (ulonglong)(*(longlong *)(puVar3 + 0x2e) - *(longlong *)puVar1 >> 3));
      }
      FUN_1800b8500(puVar1);
      FUN_1800b8500(puVar2);
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
      uVar9 = uVar9 + 1;
    } while ((int)uVar5 < (int)*(char *)(param_1 + 0x20));
  }
  return;
}






// 函数: void FUN_1803a00c0(longlong param_1,longlong *param_2)
void FUN_1803a00c0(longlong param_1,longlong *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  
  puVar1 = *(uint64_t **)(param_1 + 0x58);
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar2 = (uint64_t *)puVar1[2];
  puVar3 = puVar1;
  if (puVar2 != (uint64_t *)0x0) {
    do {
      if ((longlong *)puVar2[4] < param_2) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar3 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    } while (puVar2 != (uint64_t *)0x0);
    if ((puVar3 != puVar1) && ((longlong *)puVar3[4] <= param_2)) goto LAB_1803a013f;
  }
  puVar3 = puVar1;
LAB_1803a013f:
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  puVar1 = *(uint64_t **)(param_1 + 0x58);
  if (puVar3 != puVar1) {
    puVar1[4] = puVar1[4] + -1;
    func_0x00018066bd70(puVar3);
    FUN_18066ba00(puVar3,puVar1);
    if ((longlong *)puVar3[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar3[4] + 0x38))();
    }
  }
  return;
}






// 函数: void FUN_1803a01a0(uint64_t param_1,longlong param_2,char param_3)
void FUN_1803a01a0(uint64_t param_1,longlong param_2,char param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_3 == '\0') {
    uVar2 = *(uint *)(param_2 + 0x2c4) >> 1;
    if ((uVar2 & 1) != 0) {
      FUN_1803a00c0();
    }
    iVar3 = 0;
    if (*(longlong *)(param_2 + 0x1c8) - *(longlong *)(param_2 + 0x1c0) >> 3 != 0) {
      lVar5 = 0;
      do {
        FUN_1803a01a0(param_1,*(uint64_t *)(lVar5 + *(longlong *)(param_2 + 0x1c0)),
                      (byte)uVar2 & 1);
        lVar5 = lVar5 + 8;
        iVar3 = iVar3 + 1;
      } while ((ulonglong)(longlong)iVar3 <
               (ulonglong)(*(longlong *)(param_2 + 0x1c8) - *(longlong *)(param_2 + 0x1c0) >> 3));
    }
  }
  else {
    FUN_1803a00c0();
    uVar1 = 0;
    uVar4 = uVar1;
    if (*(longlong *)(param_2 + 0x1c8) - *(longlong *)(param_2 + 0x1c0) >> 3 != 0) {
      do {
        FUN_1803a01a0(param_1,*(uint64_t *)(uVar1 + *(longlong *)(param_2 + 0x1c0)),1);
        uVar1 = uVar1 + 8;
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
      } while ((ulonglong)(longlong)(int)uVar2 <
               (ulonglong)(*(longlong *)(param_2 + 0x1c8) - *(longlong *)(param_2 + 0x1c0) >> 3));
    }
  }
  return;
}






// 函数: void FUN_1803a0247(void)
void FUN_1803a0247(void)

{
  longlong unaff_RBX;
  int unaff_EDI;
  
  do {
    FUN_1803a01a0();
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  return;
}






