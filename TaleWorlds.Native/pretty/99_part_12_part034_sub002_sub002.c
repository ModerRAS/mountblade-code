#include "TaleWorlds.Native.Split.h"

// 99_part_12_part034_sub002_sub002.c - 1 个函数

// 函数: void FUN_1807e17b0(float *param_1,float *param_2,uint param_3,float *param_4,uint param_5,
void FUN_1807e17b0(float *param_1,float *param_2,uint param_3,float *param_4,uint param_5,
                  uint param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float *pfVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float *pfVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float *pfVar56;
  float *pfVar57;
  float *pfVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float *pfVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float *pfVar76;
  float *pfVar77;
  float *pfVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float *pfVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float *pfVar100;
  float *pfVar101;
  float *pfVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float *pfVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float *pfVar116;
  float *pfVar117;
  float *pfVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  uint uVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  int iVar137;
  float fVar138;
  uint uVar139;
  uint uVar140;
  float *pfVar141;
  float *pfVar142;
  uint uVar143;
  uint uVar144;
  ulonglong uVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  float fVar169;
  
  uVar143 = (param_7 != 0) - 1;
  uVar139 = param_5 & 3;
  uVar144 = 0xffffffff;
  if (uVar139 == 1) {
    uVar144 = 0;
LAB_1807e181f:
    uVar140 = 0;
  }
  else {
    if (uVar139 == 2) goto LAB_1807e181f;
    uVar140 = uVar144;
    uVar131 = uVar144;
    if (uVar139 != 3) goto LAB_1807e1825;
  }
  uVar131 = 0;
LAB_1807e1825:
  if (0 < (int)param_3) {
    uVar145 = (ulonglong)param_3;
    do {
      if (param_5 - 1 < 0x20) {
        iVar137 = (int)param_6 >> 2;
        switch(param_5) {
        default:
          fVar3 = *param_1;
          fVar146 = (float)((uint)param_1[1] & uVar144);
          fVar150 = (float)((uint)param_1[2] & uVar140);
          fVar154 = (float)((uint)param_1[3] & uVar131);
          pfVar141 = param_2;
          pfVar142 = param_4;
          for (; iVar137 != 0; iVar137 = iVar137 + -1) {
            fVar1 = pfVar142[0x20];
            fVar158 = pfVar142[0x21];
            fVar162 = pfVar142[0x22];
            fVar166 = pfVar142[0x23];
            fVar2 = *pfVar142;
            pfVar4 = pfVar142 + 1;
            pfVar5 = pfVar142 + 2;
            pfVar6 = pfVar142 + 3;
            fVar159 = pfVar142[0x40];
            fVar163 = pfVar142[0x41];
            fVar167 = pfVar142[0x42];
            fVar132 = pfVar142[0x43];
            fVar147 = pfVar142[0x60];
            fVar151 = pfVar142[0x61];
            fVar155 = pfVar142[0x62];
            fVar133 = pfVar142[99];
            pfVar142 = pfVar142 + 0x80;
            *pfVar141 = (float)((uint)*pfVar141 & uVar143) + fVar3 * fVar2 + fVar146 * *pfVar4 +
                        fVar150 * *pfVar5 + fVar154 * *pfVar6;
            pfVar141[1] = (float)((uint)pfVar141[1] & uVar143) + fVar1 * fVar3 + fVar158 * fVar146 +
                          fVar162 * fVar150 + fVar166 * fVar154;
            pfVar141[2] = (float)((uint)pfVar141[2] & uVar143) + fVar159 * fVar3 + fVar163 * fVar146
                          + fVar167 * fVar150 + fVar132 * fVar154;
            pfVar141[3] = (float)((uint)pfVar141[3] & uVar143) + fVar147 * fVar3 + fVar151 * fVar146
                          + fVar155 * fVar150 + fVar133 * fVar154;
            pfVar141 = pfVar141 + 4;
          }
          for (uVar139 = param_6 & 3; uVar139 != 0; uVar139 = uVar139 - 1) {
            fVar158 = *pfVar142;
            pfVar4 = pfVar142 + 1;
            pfVar5 = pfVar142 + 2;
            pfVar6 = pfVar142 + 3;
            fVar1 = *pfVar141;
            if (param_7 != 0) {
              fVar1 = 0.0;
            }
            pfVar142 = pfVar142 + 0x20;
            *pfVar141 = fVar158 * fVar3 + *pfVar4 * fVar146 + *pfVar5 * fVar150 + *pfVar6 * fVar154
                        + fVar1;
            pfVar141 = pfVar141 + 1;
          }
          break;
        case 5:
        case 6:
        case 7:
        case 8:
          fVar3 = param_1[4];
          fVar146 = *param_1;
          fVar150 = param_1[1];
          fVar154 = param_1[2];
          fVar1 = param_1[3];
          fVar158 = (float)((uint)param_1[5] & uVar144);
          fVar162 = (float)((uint)param_1[6] & uVar140);
          fVar166 = (float)((uint)param_1[7] & uVar131);
          pfVar141 = param_2;
          pfVar142 = param_4;
          for (; iVar137 != 0; iVar137 = iVar137 + -1) {
            fVar2 = *pfVar142;
            pfVar5 = pfVar142 + 1;
            pfVar6 = pfVar142 + 2;
            pfVar7 = pfVar142 + 3;
            pfVar4 = pfVar142 + 4;
            pfVar8 = pfVar142 + 5;
            pfVar9 = pfVar142 + 6;
            pfVar10 = pfVar142 + 7;
            fVar159 = pfVar142[0x20];
            fVar163 = pfVar142[0x21];
            fVar167 = pfVar142[0x22];
            fVar132 = pfVar142[0x23];
            fVar147 = pfVar142[0x40];
            fVar151 = pfVar142[0x41];
            fVar155 = pfVar142[0x42];
            fVar133 = pfVar142[0x43];
            fVar148 = pfVar142[0x24];
            fVar152 = pfVar142[0x25];
            fVar156 = pfVar142[0x26];
            fVar134 = pfVar142[0x27];
            fVar160 = pfVar142[0x44];
            fVar164 = pfVar142[0x45];
            fVar168 = pfVar142[0x46];
            fVar135 = pfVar142[0x47];
            fVar161 = pfVar142[0x60];
            fVar165 = pfVar142[0x61];
            fVar169 = pfVar142[0x62];
            fVar136 = pfVar142[99];
            fVar149 = pfVar142[100];
            fVar153 = pfVar142[0x65];
            fVar157 = pfVar142[0x66];
            fVar138 = pfVar142[0x67];
            pfVar142 = pfVar142 + 0x80;
            *pfVar141 = (float)((uint)*pfVar141 & uVar143) + fVar2 * fVar146 + *pfVar4 * fVar3 +
                        *pfVar5 * fVar150 + *pfVar8 * fVar158 +
                        *pfVar6 * fVar154 + *pfVar9 * fVar162 + *pfVar7 * fVar1 + *pfVar10 * fVar166
            ;
            pfVar141[1] = (float)((uint)pfVar141[1] & uVar143) + fVar159 * fVar146 + fVar148 * fVar3
                          + fVar163 * fVar150 + fVar152 * fVar158 +
                          fVar167 * fVar154 + fVar156 * fVar162 +
                          fVar132 * fVar1 + fVar134 * fVar166;
            pfVar141[2] = (float)((uint)pfVar141[2] & uVar143) + fVar147 * fVar146 + fVar160 * fVar3
                          + fVar151 * fVar150 + fVar164 * fVar158 +
                          fVar155 * fVar154 + fVar168 * fVar162 +
                          fVar133 * fVar1 + fVar135 * fVar166;
            pfVar141[3] = (float)((uint)pfVar141[3] & uVar143) + fVar161 * fVar146 + fVar149 * fVar3
                          + fVar165 * fVar150 + fVar153 * fVar158 +
                          fVar169 * fVar154 + fVar157 * fVar162 +
                          fVar136 * fVar1 + fVar138 * fVar166;
            pfVar141 = pfVar141 + 4;
          }
          for (uVar139 = param_6 & 3; uVar139 != 0; uVar139 = uVar139 - 1) {
            pfVar4 = pfVar142 + 4;
            pfVar5 = pfVar142 + 5;
            pfVar6 = pfVar142 + 6;
            pfVar7 = pfVar142 + 7;
            fVar159 = *pfVar142;
            pfVar8 = pfVar142 + 1;
            pfVar9 = pfVar142 + 2;
            pfVar10 = pfVar142 + 3;
            fVar2 = *pfVar141;
            if (param_7 != 0) {
              fVar2 = 0.0;
            }
            pfVar142 = pfVar142 + 0x20;
            *pfVar141 = *pfVar4 * fVar3 + fVar159 * fVar146 + *pfVar5 * fVar158 + *pfVar8 * fVar150
                        + *pfVar6 * fVar162 + *pfVar9 * fVar154 +
                          *pfVar7 * fVar166 + *pfVar10 * fVar1 + fVar2;
            pfVar141 = pfVar141 + 1;
          }
          break;
        case 9:
        case 10:
        case 0xb:
        case 0xc:
          fVar3 = param_1[8];
          fVar146 = *param_1;
          fVar150 = param_1[1];
          fVar154 = param_1[2];
          fVar1 = param_1[3];
          fVar159 = (float)((uint)param_1[9] & uVar144);
          fVar163 = (float)((uint)param_1[10] & uVar140);
          fVar167 = (float)((uint)param_1[0xb] & uVar131);
          fVar158 = param_1[4];
          fVar162 = param_1[5];
          fVar166 = param_1[6];
          fVar2 = param_1[7];
          pfVar142 = param_2;
          pfVar141 = param_4;
          for (; iVar137 != 0; iVar137 = iVar137 + -1) {
            fVar132 = *pfVar141;
            pfVar6 = pfVar141 + 1;
            pfVar7 = pfVar141 + 2;
            pfVar8 = pfVar141 + 3;
            pfVar4 = pfVar141 + 4;
            pfVar9 = pfVar141 + 5;
            pfVar10 = pfVar141 + 6;
            pfVar11 = pfVar141 + 7;
            fVar147 = pfVar141[0x20];
            fVar151 = pfVar141[0x21];
            fVar155 = pfVar141[0x22];
            fVar133 = pfVar141[0x23];
            fVar148 = pfVar141[0x40];
            fVar152 = pfVar141[0x41];
            fVar156 = pfVar141[0x42];
            fVar134 = pfVar141[0x43];
            fVar160 = pfVar141[0x24];
            fVar164 = pfVar141[0x25];
            fVar168 = pfVar141[0x26];
            fVar135 = pfVar141[0x27];
            fVar161 = pfVar141[0x44];
            fVar165 = pfVar141[0x45];
            fVar169 = pfVar141[0x46];
            fVar136 = pfVar141[0x47];
            fVar149 = pfVar141[0x60];
            fVar153 = pfVar141[0x61];
            fVar157 = pfVar141[0x62];
            fVar138 = pfVar141[99];
            fVar12 = pfVar141[100];
            fVar13 = pfVar141[0x65];
            fVar14 = pfVar141[0x66];
            fVar15 = pfVar141[0x67];
            pfVar5 = pfVar141 + 8;
            pfVar16 = pfVar141 + 9;
            pfVar17 = pfVar141 + 10;
            pfVar18 = pfVar141 + 0xb;
            fVar19 = pfVar141[0x48];
            fVar20 = pfVar141[0x49];
            fVar21 = pfVar141[0x4a];
            fVar22 = pfVar141[0x4b];
            fVar23 = pfVar141[0x28];
            fVar24 = pfVar141[0x29];
            fVar25 = pfVar141[0x2a];
            fVar26 = pfVar141[0x2b];
            fVar27 = pfVar141[0x68];
            fVar28 = pfVar141[0x69];
            fVar29 = pfVar141[0x6a];
            fVar30 = pfVar141[0x6b];
            pfVar141 = pfVar141 + 0x80;
            *pfVar142 = (float)((uint)*pfVar142 & uVar143) +
                        fVar132 * fVar146 + *pfVar4 * fVar158 + *pfVar5 * fVar3 +
                        *pfVar6 * fVar150 + *pfVar9 * fVar162 + *pfVar16 * fVar159 +
                        *pfVar7 * fVar154 + *pfVar10 * fVar166 + *pfVar17 * fVar163 +
                        *pfVar8 * fVar1 + *pfVar11 * fVar2 + *pfVar18 * fVar167;
            pfVar142[1] = (float)((uint)pfVar142[1] & uVar143) +
                          fVar147 * fVar146 + fVar160 * fVar158 + fVar23 * fVar3 +
                          fVar151 * fVar150 + fVar164 * fVar162 + fVar24 * fVar159 +
                          fVar155 * fVar154 + fVar168 * fVar166 + fVar25 * fVar163 +
                          fVar133 * fVar1 + fVar135 * fVar2 + fVar26 * fVar167;
            pfVar142[2] = (float)((uint)pfVar142[2] & uVar143) +
                          fVar148 * fVar146 + fVar161 * fVar158 + fVar19 * fVar3 +
                          fVar152 * fVar150 + fVar165 * fVar162 + fVar20 * fVar159 +
                          fVar156 * fVar154 + fVar169 * fVar166 + fVar21 * fVar163 +
                          fVar134 * fVar1 + fVar136 * fVar2 + fVar22 * fVar167;
            pfVar142[3] = (float)((uint)pfVar142[3] & uVar143) +
                          fVar149 * fVar146 + fVar12 * fVar158 + fVar27 * fVar3 +
                          fVar153 * fVar150 + fVar13 * fVar162 + fVar28 * fVar159 +
                          fVar157 * fVar154 + fVar14 * fVar166 + fVar29 * fVar163 +
                          fVar138 * fVar1 + fVar15 * fVar2 + fVar30 * fVar167;
            pfVar142 = pfVar142 + 4;
          }
          uVar139 = param_6 & 3;
          if (uVar139 != 0) {
            pfVar141 = pfVar141 + 8;
            do {
              fVar132 = *pfVar142;
              pfVar4 = pfVar141 + -4;
              pfVar6 = pfVar141 + -3;
              pfVar7 = pfVar141 + -2;
              pfVar8 = pfVar141 + -1;
              pfVar5 = pfVar141 + -8;
              pfVar9 = pfVar141 + -7;
              pfVar10 = pfVar141 + -6;
              pfVar11 = pfVar141 + -5;
              if (param_7 != 0) {
                fVar132 = 0.0;
              }
              fVar147 = *pfVar141;
              pfVar16 = pfVar141 + 1;
              pfVar17 = pfVar141 + 2;
              pfVar18 = pfVar141 + 3;
              pfVar141 = pfVar141 + 0x20;
              *pfVar142 = *pfVar4 * fVar158 + *pfVar5 * fVar146 + fVar147 * fVar3 +
                          *pfVar6 * fVar162 + *pfVar9 * fVar150 + *pfVar16 * fVar159 +
                          *pfVar7 * fVar166 + *pfVar10 * fVar154 + *pfVar17 * fVar163 +
                          *pfVar8 * fVar2 + *pfVar11 * fVar1 + *pfVar18 * fVar167 + fVar132;
              pfVar142 = pfVar142 + 1;
              uVar139 = uVar139 - 1;
            } while (uVar139 != 0);
          }
          break;
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
          fVar3 = param_1[0xc];
          fVar146 = *param_1;
          fVar150 = param_1[1];
          fVar154 = param_1[2];
          fVar1 = param_1[3];
          fVar147 = (float)((uint)param_1[0xd] & uVar144);
          fVar151 = (float)((uint)param_1[0xe] & uVar140);
          fVar155 = (float)((uint)param_1[0xf] & uVar131);
          fVar158 = param_1[4];
          fVar162 = param_1[5];
          fVar166 = param_1[6];
          fVar2 = param_1[7];
          fVar159 = param_1[8];
          fVar163 = param_1[9];
          fVar167 = param_1[10];
          fVar132 = param_1[0xb];
          pfVar142 = param_2;
          pfVar141 = param_4;
          for (; iVar137 != 0; iVar137 = iVar137 + -1) {
            pfVar4 = pfVar141 + 4;
            pfVar7 = pfVar141 + 5;
            pfVar8 = pfVar141 + 6;
            pfVar9 = pfVar141 + 7;
            fVar133 = *pfVar141;
            pfVar10 = pfVar141 + 1;
            pfVar11 = pfVar141 + 2;
            pfVar16 = pfVar141 + 3;
            fVar148 = pfVar141[0x20];
            fVar152 = pfVar141[0x21];
            fVar156 = pfVar141[0x22];
            fVar134 = pfVar141[0x23];
            fVar160 = pfVar141[0x60];
            fVar164 = pfVar141[0x61];
            fVar168 = pfVar141[0x62];
            fVar135 = pfVar141[99];
            fVar161 = pfVar141[0x40];
            fVar165 = pfVar141[0x41];
            fVar169 = pfVar141[0x42];
            fVar136 = pfVar141[0x43];
            fVar149 = pfVar141[0x24];
            fVar153 = pfVar141[0x25];
            fVar157 = pfVar141[0x26];
            fVar138 = pfVar141[0x27];
            fVar12 = pfVar141[0x44];
            fVar13 = pfVar141[0x45];
            fVar14 = pfVar141[0x46];
            fVar15 = pfVar141[0x47];
            fVar19 = pfVar141[100];
            fVar20 = pfVar141[0x65];
            fVar21 = pfVar141[0x66];
            fVar22 = pfVar141[0x67];
            pfVar5 = pfVar141 + 8;
            pfVar17 = pfVar141 + 9;
            pfVar18 = pfVar141 + 10;
            pfVar31 = pfVar141 + 0xb;
            fVar23 = pfVar141[0x28];
            fVar24 = pfVar141[0x29];
            fVar25 = pfVar141[0x2a];
            fVar26 = pfVar141[0x2b];
            fVar27 = pfVar141[0x48];
            fVar28 = pfVar141[0x49];
            fVar29 = pfVar141[0x4a];
            fVar30 = pfVar141[0x4b];
            fVar32 = pfVar141[0x68];
            fVar33 = pfVar141[0x69];
            fVar34 = pfVar141[0x6a];
            fVar35 = pfVar141[0x6b];
            pfVar6 = pfVar141 + 0xc;
            pfVar36 = pfVar141 + 0xd;
            pfVar37 = pfVar141 + 0xe;
            pfVar38 = pfVar141 + 0xf;
            fVar39 = pfVar141[0x2c];
            fVar40 = pfVar141[0x2d];
            fVar41 = pfVar141[0x2e];
            fVar42 = pfVar141[0x2f];
            fVar43 = pfVar141[0x4c];
            fVar44 = pfVar141[0x4d];
            fVar45 = pfVar141[0x4e];
            fVar46 = pfVar141[0x4f];
            fVar47 = pfVar141[0x6c];
            fVar48 = pfVar141[0x6d];
            fVar49 = pfVar141[0x6e];
            fVar50 = pfVar141[0x6f];
            pfVar141 = pfVar141 + 0x80;
            *pfVar142 = (float)((uint)*pfVar142 & uVar143) +
                        fVar146 * fVar133 + fVar158 * *pfVar4 + fVar159 * *pfVar5 + fVar3 * *pfVar6
                        + fVar150 * *pfVar10 + fVar162 * *pfVar7 + fVar163 * *pfVar17 +
                          fVar147 * *pfVar36 +
                        fVar154 * *pfVar11 + fVar166 * *pfVar8 + fVar167 * *pfVar18 +
                        fVar151 * *pfVar37 +
                        fVar1 * *pfVar16 + fVar2 * *pfVar9 + fVar132 * *pfVar31 + fVar155 * *pfVar38
            ;
            pfVar142[1] = (float)((uint)pfVar142[1] & uVar143) +
                          fVar146 * fVar148 + fVar158 * fVar149 + fVar159 * fVar23 + fVar3 * fVar39
                          + fVar150 * fVar152 + fVar162 * fVar153 + fVar163 * fVar24 +
                            fVar147 * fVar40 +
                          fVar154 * fVar156 + fVar166 * fVar157 + fVar167 * fVar25 +
                          fVar151 * fVar41 +
                          fVar1 * fVar134 + fVar2 * fVar138 + fVar132 * fVar26 + fVar155 * fVar42;
            pfVar142[2] = (float)((uint)pfVar142[2] & uVar143) +
                          fVar146 * fVar161 + fVar158 * fVar12 + fVar159 * fVar27 + fVar3 * fVar43 +
                          fVar150 * fVar165 + fVar162 * fVar13 + fVar163 * fVar28 + fVar147 * fVar44
                          + fVar154 * fVar169 + fVar166 * fVar14 + fVar167 * fVar29 +
                            fVar151 * fVar45 +
                          fVar1 * fVar136 + fVar2 * fVar15 + fVar132 * fVar30 + fVar155 * fVar46;
            pfVar142[3] = (float)((uint)pfVar142[3] & uVar143) +
                          fVar146 * fVar160 + fVar158 * fVar19 + fVar159 * fVar32 + fVar3 * fVar47 +
                          fVar150 * fVar164 + fVar162 * fVar20 + fVar163 * fVar33 + fVar147 * fVar48
                          + fVar154 * fVar168 + fVar166 * fVar21 + fVar167 * fVar34 +
                            fVar151 * fVar49 +
                          fVar1 * fVar135 + fVar2 * fVar22 + fVar132 * fVar35 + fVar155 * fVar50;
            pfVar142 = pfVar142 + 4;
          }
          uVar139 = param_6 & 3;
          if (uVar139 != 0) {
            pfVar141 = pfVar141 + 8;
            do {
              fVar133 = *pfVar142;
              pfVar4 = pfVar141 + -4;
              pfVar6 = pfVar141 + -3;
              pfVar7 = pfVar141 + -2;
              pfVar8 = pfVar141 + -1;
              pfVar5 = pfVar141 + -8;
              pfVar9 = pfVar141 + -7;
              pfVar10 = pfVar141 + -6;
              pfVar11 = pfVar141 + -5;
              if (param_7 != 0) {
                fVar133 = 0.0;
              }
              fVar148 = *pfVar141;
              pfVar17 = pfVar141 + 1;
              pfVar18 = pfVar141 + 2;
              pfVar31 = pfVar141 + 3;
              pfVar16 = pfVar141 + 4;
              pfVar36 = pfVar141 + 5;
              pfVar37 = pfVar141 + 6;
              pfVar38 = pfVar141 + 7;
              pfVar141 = pfVar141 + 0x20;
              *pfVar142 = *pfVar4 * fVar158 + *pfVar5 * fVar146 + fVar148 * fVar159 +
                          *pfVar16 * fVar3 +
                          *pfVar6 * fVar162 + *pfVar9 * fVar150 + *pfVar17 * fVar163 +
                          *pfVar36 * fVar147 +
                          *pfVar7 * fVar166 + *pfVar10 * fVar154 + *pfVar18 * fVar167 +
                          *pfVar37 * fVar151 +
                          *pfVar8 * fVar2 + *pfVar11 * fVar1 + *pfVar31 * fVar132 +
                          *pfVar38 * fVar155 + fVar133;
              pfVar142 = pfVar142 + 1;
              uVar139 = uVar139 - 1;
            } while (uVar139 != 0);
          }
          break;
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
          fVar3 = param_1[0x10];
          fVar146 = *param_1;
          fVar150 = param_1[1];
          fVar154 = param_1[2];
          fVar1 = param_1[3];
          fVar148 = (float)((uint)param_1[0x11] & uVar144);
          fVar152 = (float)((uint)param_1[0x12] & uVar140);
          fVar156 = (float)((uint)param_1[0x13] & uVar131);
          fVar158 = param_1[4];
          fVar162 = param_1[5];
          fVar166 = param_1[6];
          fVar2 = param_1[7];
          fVar159 = param_1[8];
          fVar163 = param_1[9];
          fVar167 = param_1[10];
          fVar132 = param_1[0xb];
          fVar147 = param_1[0xc];
          fVar151 = param_1[0xd];
          fVar155 = param_1[0xe];
          fVar133 = param_1[0xf];
          pfVar142 = param_2;
          pfVar141 = param_4;
          for (; iVar137 != 0; iVar137 = iVar137 + -1) {
            pfVar4 = pfVar141 + 4;
            pfVar8 = pfVar141 + 5;
            pfVar9 = pfVar141 + 6;
            pfVar10 = pfVar141 + 7;
            fVar134 = *pfVar141;
            pfVar11 = pfVar141 + 1;
            pfVar16 = pfVar141 + 2;
            pfVar17 = pfVar141 + 3;
            fVar160 = pfVar141[0x20];
            fVar164 = pfVar141[0x21];
            fVar168 = pfVar141[0x22];
            fVar135 = pfVar141[0x23];
            fVar161 = pfVar141[0x60];
            fVar165 = pfVar141[0x61];
            fVar169 = pfVar141[0x62];
            fVar136 = pfVar141[99];
            fVar149 = pfVar141[0x40];
            fVar153 = pfVar141[0x41];
            fVar157 = pfVar141[0x42];
            fVar138 = pfVar141[0x43];
            fVar12 = pfVar141[0x24];
            fVar13 = pfVar141[0x25];
            fVar14 = pfVar141[0x26];
            fVar15 = pfVar141[0x27];
            fVar19 = pfVar141[0x44];
            fVar20 = pfVar141[0x45];
            fVar21 = pfVar141[0x46];
            fVar22 = pfVar141[0x47];
            fVar23 = pfVar141[100];
            fVar24 = pfVar141[0x65];
            fVar25 = pfVar141[0x66];
            fVar26 = pfVar141[0x67];
            pfVar5 = pfVar141 + 8;
            pfVar18 = pfVar141 + 9;
            pfVar31 = pfVar141 + 10;
            pfVar36 = pfVar141 + 0xb;
            fVar27 = pfVar141[0x28];
            fVar28 = pfVar141[0x29];
            fVar29 = pfVar141[0x2a];
            fVar30 = pfVar141[0x2b];
            fVar32 = pfVar141[0x48];
            fVar33 = pfVar141[0x49];
            fVar34 = pfVar141[0x4a];
            fVar35 = pfVar141[0x4b];
            fVar39 = pfVar141[0x68];
            fVar40 = pfVar141[0x69];
            fVar41 = pfVar141[0x6a];
            fVar42 = pfVar141[0x6b];
            pfVar6 = pfVar141 + 0xc;
            pfVar37 = pfVar141 + 0xd;
            pfVar38 = pfVar141 + 0xe;
            pfVar51 = pfVar141 + 0xf;
            fVar43 = pfVar141[0x2c];
            fVar44 = pfVar141[0x2d];
            fVar45 = pfVar141[0x2e];
            fVar46 = pfVar141[0x2f];
            fVar47 = pfVar141[0x4c];
            fVar48 = pfVar141[0x4d];
            fVar49 = pfVar141[0x4e];
            fVar50 = pfVar141[0x4f];
            fVar52 = pfVar141[0x6c];
            fVar53 = pfVar141[0x6d];
            fVar54 = pfVar141[0x6e];
            fVar55 = pfVar141[0x6f];
            pfVar7 = pfVar141 + 0x10;
            pfVar56 = pfVar141 + 0x11;
            pfVar57 = pfVar141 + 0x12;
            pfVar58 = pfVar141 + 0x13;
            fVar59 = pfVar141[0x30];
            fVar60 = pfVar141[0x31];
            fVar61 = pfVar141[0x32];
            fVar62 = pfVar141[0x33];
            fVar63 = pfVar141[0x50];
            fVar64 = pfVar141[0x51];
            fVar65 = pfVar141[0x52];
            fVar66 = pfVar141[0x53];
            fVar67 = pfVar141[0x70];
            fVar68 = pfVar141[0x71];
            fVar69 = pfVar141[0x72];
            fVar70 = pfVar141[0x73];
            pfVar141 = pfVar141 + 0x80;
            *pfVar142 = (float)((uint)*pfVar142 & uVar143) +
                        fVar146 * fVar134 + fVar158 * *pfVar4 + fVar159 * *pfVar5 +
                        fVar147 * *pfVar6 + fVar3 * *pfVar7 +
                        fVar150 * *pfVar11 + fVar162 * *pfVar8 + fVar163 * *pfVar18 +
                        fVar151 * *pfVar37 + fVar148 * *pfVar56 +
                        fVar154 * *pfVar16 + fVar166 * *pfVar9 + fVar167 * *pfVar31 +
                        fVar155 * *pfVar38 + fVar152 * *pfVar57 +
                        fVar1 * *pfVar17 + fVar2 * *pfVar10 + fVar132 * *pfVar36 +
                        fVar133 * *pfVar51 + fVar156 * *pfVar58;
            pfVar142[1] = (float)((uint)pfVar142[1] & uVar143) +
                          fVar146 * fVar160 + fVar158 * fVar12 + fVar159 * fVar27 + fVar147 * fVar43
                          + fVar3 * fVar59 +
                          fVar150 * fVar164 + fVar162 * fVar13 + fVar163 * fVar28 + fVar151 * fVar44
                          + fVar148 * fVar60 +
                          fVar154 * fVar168 + fVar166 * fVar14 + fVar167 * fVar29 + fVar155 * fVar45
                          + fVar152 * fVar61 +
                          fVar1 * fVar135 + fVar2 * fVar15 + fVar132 * fVar30 + fVar133 * fVar46 +
                          fVar156 * fVar62;
            pfVar142[2] = (float)((uint)pfVar142[2] & uVar143) +
                          fVar146 * fVar149 + fVar158 * fVar19 + fVar159 * fVar32 + fVar147 * fVar47
                          + fVar3 * fVar63 +
                          fVar150 * fVar153 + fVar162 * fVar20 + fVar163 * fVar33 + fVar151 * fVar48
                          + fVar148 * fVar64 +
                          fVar154 * fVar157 + fVar166 * fVar21 + fVar167 * fVar34 + fVar155 * fVar49
                          + fVar152 * fVar65 +
                          fVar1 * fVar138 + fVar2 * fVar22 + fVar132 * fVar35 + fVar133 * fVar50 +
                          fVar156 * fVar66;
            pfVar142[3] = (float)((uint)pfVar142[3] & uVar143) +
                          fVar146 * fVar161 + fVar158 * fVar23 + fVar159 * fVar39 + fVar147 * fVar52
                          + fVar3 * fVar67 +
                          fVar150 * fVar165 + fVar162 * fVar24 + fVar163 * fVar40 + fVar151 * fVar53
                          + fVar148 * fVar68 +
                          fVar154 * fVar169 + fVar166 * fVar25 + fVar167 * fVar41 + fVar155 * fVar54
                          + fVar152 * fVar69 +
                          fVar1 * fVar136 + fVar2 * fVar26 + fVar132 * fVar42 + fVar133 * fVar55 +
                          fVar156 * fVar70;
            pfVar142 = pfVar142 + 4;
          }
          uVar139 = param_6 & 3;
          if (uVar139 != 0) {
            pfVar141 = pfVar141 + 8;
            do {
              fVar134 = *pfVar142;
              pfVar4 = pfVar141 + -4;
              pfVar6 = pfVar141 + -3;
              pfVar7 = pfVar141 + -2;
              pfVar8 = pfVar141 + -1;
              pfVar5 = pfVar141 + -8;
              pfVar9 = pfVar141 + -7;
              pfVar10 = pfVar141 + -6;
              pfVar11 = pfVar141 + -5;
              if (param_7 != 0) {
                fVar134 = 0.0;
              }
              fVar160 = *pfVar141;
              pfVar18 = pfVar141 + 1;
              pfVar31 = pfVar141 + 2;
              pfVar36 = pfVar141 + 3;
              pfVar16 = pfVar141 + 4;
              pfVar37 = pfVar141 + 5;
              pfVar38 = pfVar141 + 6;
              pfVar51 = pfVar141 + 7;
              pfVar17 = pfVar141 + 8;
              pfVar56 = pfVar141 + 9;
              pfVar57 = pfVar141 + 10;
              pfVar58 = pfVar141 + 0xb;
              pfVar141 = pfVar141 + 0x20;
              *pfVar142 = *pfVar4 * fVar158 + *pfVar5 * fVar146 + fVar160 * fVar159 +
                          *pfVar16 * fVar147 + *pfVar17 * fVar3 +
                          *pfVar6 * fVar162 + *pfVar9 * fVar150 + *pfVar18 * fVar163 +
                          *pfVar37 * fVar151 + *pfVar56 * fVar148 +
                          *pfVar7 * fVar166 + *pfVar10 * fVar154 + *pfVar31 * fVar167 +
                          *pfVar38 * fVar155 + *pfVar57 * fVar152 +
                          *pfVar8 * fVar2 + *pfVar11 * fVar1 + *pfVar36 * fVar132 +
                          *pfVar51 * fVar133 + *pfVar58 * fVar156 + fVar134;
              pfVar142 = pfVar142 + 1;
              uVar139 = uVar139 - 1;
            } while (uVar139 != 0);
          }
          break;
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
          fVar3 = param_1[0x14];
          fVar146 = *param_1;
          fVar150 = param_1[1];
          fVar154 = param_1[2];
          fVar1 = param_1[3];
          fVar160 = (float)((uint)param_1[0x15] & uVar144);
          fVar164 = (float)((uint)param_1[0x16] & uVar140);
          fVar168 = (float)((uint)param_1[0x17] & uVar131);
          fVar158 = param_1[4];
          fVar162 = param_1[5];
          fVar166 = param_1[6];
          fVar2 = param_1[7];
          fVar159 = param_1[8];
          fVar163 = param_1[9];
          fVar167 = param_1[10];
          fVar132 = param_1[0xb];
          fVar147 = param_1[0xc];
          fVar151 = param_1[0xd];
          fVar155 = param_1[0xe];
          fVar133 = param_1[0xf];
          fVar148 = param_1[0x10];
          fVar152 = param_1[0x11];
          fVar156 = param_1[0x12];
          fVar134 = param_1[0x13];
          pfVar141 = param_2;
          pfVar142 = param_4;
          for (; iVar137 != 0; iVar137 = iVar137 + -1) {
            fVar135 = *pfVar142;
            pfVar9 = pfVar142 + 1;
            pfVar10 = pfVar142 + 2;
            pfVar11 = pfVar142 + 3;
            pfVar4 = pfVar142 + 4;
            pfVar16 = pfVar142 + 5;
            pfVar17 = pfVar142 + 6;
            pfVar18 = pfVar142 + 7;
            fVar161 = pfVar142[0x20];
            fVar165 = pfVar142[0x21];
            fVar169 = pfVar142[0x22];
            fVar136 = pfVar142[0x23];
            fVar149 = pfVar142[0x40];
            fVar153 = pfVar142[0x41];
            fVar157 = pfVar142[0x42];
            fVar138 = pfVar142[0x43];
            fVar12 = pfVar142[0x24];
            fVar13 = pfVar142[0x25];
            fVar14 = pfVar142[0x26];
            fVar15 = pfVar142[0x27];
            fVar19 = pfVar142[0x44];
            fVar20 = pfVar142[0x45];
            fVar21 = pfVar142[0x46];
            fVar22 = pfVar142[0x47];
            fVar23 = pfVar142[0x60];
            fVar24 = pfVar142[0x61];
            fVar25 = pfVar142[0x62];
            fVar26 = pfVar142[99];
            fVar27 = pfVar142[100];
            fVar28 = pfVar142[0x65];
            fVar29 = pfVar142[0x66];
            fVar30 = pfVar142[0x67];
            pfVar5 = pfVar142 + 8;
            pfVar31 = pfVar142 + 9;
            pfVar36 = pfVar142 + 10;
            pfVar37 = pfVar142 + 0xb;
            fVar32 = pfVar142[0x48];
            fVar33 = pfVar142[0x49];
            fVar34 = pfVar142[0x4a];
            fVar35 = pfVar142[0x4b];
            fVar39 = pfVar142[0x28];
            fVar40 = pfVar142[0x29];
            fVar41 = pfVar142[0x2a];
            fVar42 = pfVar142[0x2b];
            fVar43 = pfVar142[0x68];
            fVar44 = pfVar142[0x69];
            fVar45 = pfVar142[0x6a];
            fVar46 = pfVar142[0x6b];
            pfVar6 = pfVar142 + 0xc;
            pfVar38 = pfVar142 + 0xd;
            pfVar51 = pfVar142 + 0xe;
            pfVar56 = pfVar142 + 0xf;
            fVar47 = pfVar142[0x6c];
            fVar48 = pfVar142[0x6d];
            fVar49 = pfVar142[0x6e];
            fVar50 = pfVar142[0x6f];
            fVar52 = pfVar142[0x2c];
            fVar53 = pfVar142[0x2d];
            fVar54 = pfVar142[0x2e];
            fVar55 = pfVar142[0x2f];
            fVar59 = pfVar142[0x4c];
            fVar60 = pfVar142[0x4d];
            fVar61 = pfVar142[0x4e];
            fVar62 = pfVar142[0x4f];
            pfVar7 = pfVar142 + 0x10;
            pfVar57 = pfVar142 + 0x11;
            pfVar58 = pfVar142 + 0x12;
            pfVar71 = pfVar142 + 0x13;
            fVar63 = pfVar142[0x70];
            fVar64 = pfVar142[0x71];
            fVar65 = pfVar142[0x72];
            fVar66 = pfVar142[0x73];
            fVar67 = pfVar142[0x30];
            fVar68 = pfVar142[0x31];
            fVar69 = pfVar142[0x32];
            fVar70 = pfVar142[0x33];
            fVar72 = pfVar142[0x50];
            fVar73 = pfVar142[0x51];
            fVar74 = pfVar142[0x52];
            fVar75 = pfVar142[0x53];
            pfVar8 = pfVar142 + 0x14;
            pfVar76 = pfVar142 + 0x15;
            pfVar77 = pfVar142 + 0x16;
            pfVar78 = pfVar142 + 0x17;
            fVar79 = pfVar142[0x74];
            fVar80 = pfVar142[0x75];
            fVar81 = pfVar142[0x76];
            fVar82 = pfVar142[0x77];
            fVar83 = pfVar142[0x34];
            fVar84 = pfVar142[0x35];
            fVar85 = pfVar142[0x36];
            fVar86 = pfVar142[0x37];
            fVar87 = pfVar142[0x54];
            fVar88 = pfVar142[0x55];
            fVar89 = pfVar142[0x56];
            fVar90 = pfVar142[0x57];
            pfVar142 = pfVar142 + 0x80;
            *pfVar141 = (float)((uint)*pfVar141 & uVar143) +
                        fVar135 * fVar146 + *pfVar4 * fVar158 + *pfVar5 * fVar159 +
                        *pfVar6 * fVar147 + *pfVar7 * fVar148 + *pfVar8 * fVar3 +
                        *pfVar9 * fVar150 + *pfVar16 * fVar162 + *pfVar31 * fVar163 +
                        *pfVar38 * fVar151 + *pfVar57 * fVar152 + *pfVar76 * fVar160 +
                        *pfVar10 * fVar154 + *pfVar17 * fVar166 + *pfVar36 * fVar167 +
                        *pfVar51 * fVar155 + *pfVar58 * fVar156 + *pfVar77 * fVar164 +
                        *pfVar11 * fVar1 + *pfVar18 * fVar2 + *pfVar37 * fVar132 +
                        *pfVar56 * fVar133 + *pfVar71 * fVar134 + *pfVar78 * fVar168;
            pfVar141[1] = (float)((uint)pfVar141[1] & uVar143) +
                          fVar161 * fVar146 + fVar12 * fVar158 + fVar39 * fVar159 + fVar52 * fVar147
                          + fVar67 * fVar148 + fVar83 * fVar3 +
                          fVar165 * fVar150 + fVar13 * fVar162 + fVar40 * fVar163 + fVar53 * fVar151
                          + fVar68 * fVar152 + fVar84 * fVar160 +
                          fVar169 * fVar154 + fVar14 * fVar166 + fVar41 * fVar167 + fVar54 * fVar155
                          + fVar69 * fVar156 + fVar85 * fVar164 +
                          fVar136 * fVar1 + fVar15 * fVar2 + fVar42 * fVar132 + fVar55 * fVar133 +
                          fVar70 * fVar134 + fVar86 * fVar168;
            pfVar141[2] = (float)((uint)pfVar141[2] & uVar143) +
                          fVar149 * fVar146 + fVar19 * fVar158 + fVar32 * fVar159 + fVar59 * fVar147
                          + fVar72 * fVar148 + fVar87 * fVar3 +
                          fVar153 * fVar150 + fVar20 * fVar162 + fVar33 * fVar163 + fVar60 * fVar151
                          + fVar73 * fVar152 + fVar88 * fVar160 +
                          fVar157 * fVar154 + fVar21 * fVar166 + fVar34 * fVar167 + fVar61 * fVar155
                          + fVar74 * fVar156 + fVar89 * fVar164 +
                          fVar138 * fVar1 + fVar22 * fVar2 + fVar35 * fVar132 + fVar62 * fVar133 +
                          fVar75 * fVar134 + fVar90 * fVar168;
            pfVar141[3] = (float)((uint)pfVar141[3] & uVar143) +
                          fVar23 * fVar146 + fVar27 * fVar158 + fVar43 * fVar159 + fVar47 * fVar147
                          + fVar63 * fVar148 + fVar79 * fVar3 +
                          fVar24 * fVar150 + fVar28 * fVar162 + fVar44 * fVar163 + fVar48 * fVar151
                          + fVar64 * fVar152 + fVar80 * fVar160 +
                          fVar25 * fVar154 + fVar29 * fVar166 + fVar45 * fVar167 + fVar49 * fVar155
                          + fVar65 * fVar156 + fVar81 * fVar164 +
                          fVar26 * fVar1 + fVar30 * fVar2 + fVar46 * fVar132 + fVar50 * fVar133 +
                          fVar66 * fVar134 + fVar82 * fVar168;
            pfVar141 = pfVar141 + 4;
          }
          uVar139 = param_6 & 3;
          if (uVar139 != 0) {
            pfVar142 = pfVar142 + 8;
            do {
              fVar135 = *pfVar141;
              pfVar4 = pfVar142 + -4;
              pfVar6 = pfVar142 + -3;
              pfVar7 = pfVar142 + -2;
              pfVar8 = pfVar142 + -1;
              pfVar5 = pfVar142 + -8;
              pfVar9 = pfVar142 + -7;
              pfVar10 = pfVar142 + -6;
              pfVar11 = pfVar142 + -5;
              if (param_7 != 0) {
                fVar135 = 0.0;
              }
              fVar161 = *pfVar142;
              pfVar31 = pfVar142 + 1;
              pfVar36 = pfVar142 + 2;
              pfVar37 = pfVar142 + 3;
              pfVar16 = pfVar142 + 4;
              pfVar38 = pfVar142 + 5;
              pfVar51 = pfVar142 + 6;
              pfVar56 = pfVar142 + 7;
              pfVar17 = pfVar142 + 8;
              pfVar57 = pfVar142 + 9;
              pfVar58 = pfVar142 + 10;
              pfVar71 = pfVar142 + 0xb;
              pfVar18 = pfVar142 + 0xc;
              pfVar76 = pfVar142 + 0xd;
              pfVar77 = pfVar142 + 0xe;
              pfVar78 = pfVar142 + 0xf;
              pfVar142 = pfVar142 + 0x20;
              *pfVar141 = *pfVar4 * fVar158 + *pfVar5 * fVar146 + fVar161 * fVar159 +
                          *pfVar16 * fVar147 + *pfVar17 * fVar148 + *pfVar18 * fVar3 +
                          *pfVar6 * fVar162 + *pfVar9 * fVar150 + *pfVar31 * fVar163 +
                          *pfVar38 * fVar151 + *pfVar57 * fVar152 + *pfVar76 * fVar160 +
                          *pfVar7 * fVar166 + *pfVar10 * fVar154 + *pfVar36 * fVar167 +
                          *pfVar51 * fVar155 + *pfVar58 * fVar156 + *pfVar77 * fVar164 +
                          *pfVar8 * fVar2 + *pfVar11 * fVar1 + *pfVar37 * fVar132 +
                          *pfVar56 * fVar133 + *pfVar71 * fVar134 + *pfVar78 * fVar168 + fVar135;
              pfVar141 = pfVar141 + 1;
              uVar139 = uVar139 - 1;
            } while (uVar139 != 0);
          }
          break;
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
          fVar3 = param_1[0x18];
          fVar146 = *param_1;
          fVar150 = param_1[1];
          fVar154 = param_1[2];
          fVar1 = param_1[3];
          fVar161 = (float)((uint)param_1[0x19] & uVar144);
          fVar165 = (float)((uint)param_1[0x1a] & uVar140);
          fVar169 = (float)((uint)param_1[0x1b] & uVar131);
          fVar158 = param_1[4];
          fVar162 = param_1[5];
          fVar166 = param_1[6];
          fVar2 = param_1[7];
          fVar159 = param_1[8];
          fVar163 = param_1[9];
          fVar167 = param_1[10];
          fVar132 = param_1[0xb];
          fVar147 = param_1[0xc];
          fVar151 = param_1[0xd];
          fVar155 = param_1[0xe];
          fVar133 = param_1[0xf];
          fVar148 = param_1[0x10];
          fVar152 = param_1[0x11];
          fVar156 = param_1[0x12];
          fVar134 = param_1[0x13];
          fVar160 = param_1[0x14];
          fVar164 = param_1[0x15];
          fVar168 = param_1[0x16];
          fVar135 = param_1[0x17];
          pfVar141 = param_2;
          pfVar142 = param_4;
          for (; iVar137 != 0; iVar137 = iVar137 + -1) {
            fVar136 = *pfVar142;
            pfVar10 = pfVar142 + 1;
            pfVar11 = pfVar142 + 2;
            pfVar16 = pfVar142 + 3;
            pfVar4 = pfVar142 + 4;
            pfVar17 = pfVar142 + 5;
            pfVar18 = pfVar142 + 6;
            pfVar31 = pfVar142 + 7;
            fVar149 = pfVar142[0x60];
            fVar153 = pfVar142[0x61];
            fVar157 = pfVar142[0x62];
            fVar138 = pfVar142[99];
            fVar12 = pfVar142[100];
            fVar13 = pfVar142[0x65];
            fVar14 = pfVar142[0x66];
            fVar15 = pfVar142[0x67];
            fVar19 = pfVar142[0x20];
            fVar20 = pfVar142[0x21];
            fVar21 = pfVar142[0x22];
            fVar22 = pfVar142[0x23];
            fVar23 = pfVar142[0x40];
            fVar24 = pfVar142[0x41];
            fVar25 = pfVar142[0x42];
            fVar26 = pfVar142[0x43];
            fVar27 = pfVar142[0x24];
            fVar28 = pfVar142[0x25];
            fVar29 = pfVar142[0x26];
            fVar30 = pfVar142[0x27];
            fVar32 = pfVar142[0x44];
            fVar33 = pfVar142[0x45];
            fVar34 = pfVar142[0x46];
            fVar35 = pfVar142[0x47];
            pfVar5 = pfVar142 + 8;
            pfVar36 = pfVar142 + 9;
            pfVar37 = pfVar142 + 10;
            pfVar38 = pfVar142 + 0xb;
            fVar39 = pfVar142[0x68];
            fVar40 = pfVar142[0x69];
            fVar41 = pfVar142[0x6a];
            fVar42 = pfVar142[0x6b];
            fVar43 = pfVar142[0x28];
            fVar44 = pfVar142[0x29];
            fVar45 = pfVar142[0x2a];
            fVar46 = pfVar142[0x2b];
            fVar47 = pfVar142[0x48];
            fVar48 = pfVar142[0x49];
            fVar49 = pfVar142[0x4a];
            fVar50 = pfVar142[0x4b];
            fVar52 = pfVar142[0x6c];
            fVar53 = pfVar142[0x6d];
            fVar54 = pfVar142[0x6e];
            fVar55 = pfVar142[0x6f];
            pfVar6 = pfVar142 + 0xc;
            pfVar51 = pfVar142 + 0xd;
            pfVar56 = pfVar142 + 0xe;
            pfVar57 = pfVar142 + 0xf;
            fVar59 = pfVar142[0x2c];
            fVar60 = pfVar142[0x2d];
            fVar61 = pfVar142[0x2e];
            fVar62 = pfVar142[0x2f];
            fVar63 = pfVar142[0x4c];
            fVar64 = pfVar142[0x4d];
            fVar65 = pfVar142[0x4e];
            fVar66 = pfVar142[0x4f];
            fVar67 = pfVar142[0x70];
            fVar68 = pfVar142[0x71];
            fVar69 = pfVar142[0x72];
            fVar70 = pfVar142[0x73];
            pfVar7 = pfVar142 + 0x10;
            pfVar58 = pfVar142 + 0x11;
            pfVar71 = pfVar142 + 0x12;
            pfVar76 = pfVar142 + 0x13;
            fVar72 = pfVar142[0x30];
            fVar73 = pfVar142[0x31];
            fVar74 = pfVar142[0x32];
            fVar75 = pfVar142[0x33];
            fVar79 = pfVar142[0x50];
            fVar80 = pfVar142[0x51];
            fVar81 = pfVar142[0x52];
            fVar82 = pfVar142[0x53];
            fVar83 = pfVar142[0x74];
            fVar84 = pfVar142[0x75];
            fVar85 = pfVar142[0x76];
            fVar86 = pfVar142[0x77];
            pfVar8 = pfVar142 + 0x14;
            pfVar77 = pfVar142 + 0x15;
            pfVar78 = pfVar142 + 0x16;
            pfVar91 = pfVar142 + 0x17;
            fVar87 = pfVar142[0x34];
            fVar88 = pfVar142[0x35];
            fVar89 = pfVar142[0x36];
            fVar90 = pfVar142[0x37];
            fVar92 = pfVar142[0x54];
            fVar93 = pfVar142[0x55];
            fVar94 = pfVar142[0x56];
            fVar95 = pfVar142[0x57];
            fVar96 = pfVar142[0x78];
            fVar97 = pfVar142[0x79];
            fVar98 = pfVar142[0x7a];
            fVar99 = pfVar142[0x7b];
            pfVar9 = pfVar142 + 0x18;
            pfVar100 = pfVar142 + 0x19;
            pfVar101 = pfVar142 + 0x1a;
            pfVar102 = pfVar142 + 0x1b;
            fVar103 = pfVar142[0x38];
            fVar104 = pfVar142[0x39];
            fVar105 = pfVar142[0x3a];
            fVar106 = pfVar142[0x3b];
            fVar107 = pfVar142[0x58];
            fVar108 = pfVar142[0x59];
            fVar109 = pfVar142[0x5a];
            fVar110 = pfVar142[0x5b];
            pfVar142 = pfVar142 + 0x80;
            *pfVar141 = (float)((uint)*pfVar141 & uVar143) +
                        fVar136 * fVar146 + *pfVar4 * fVar158 + *pfVar5 * fVar159 +
                        *pfVar6 * fVar147 + *pfVar7 * fVar148 + *pfVar8 * fVar160 + *pfVar9 * fVar3
                        + *pfVar10 * fVar150 + *pfVar17 * fVar162 + *pfVar36 * fVar163 +
                          *pfVar51 * fVar151 + *pfVar58 * fVar152 + *pfVar77 * fVar164 +
                          *pfVar100 * fVar161 +
                        *pfVar11 * fVar154 + *pfVar18 * fVar166 + *pfVar37 * fVar167 +
                        *pfVar56 * fVar155 + *pfVar71 * fVar156 + *pfVar78 * fVar168 +
                        *pfVar101 * fVar165 +
                        *pfVar16 * fVar1 + *pfVar31 * fVar2 + *pfVar38 * fVar132 +
                        *pfVar57 * fVar133 + *pfVar76 * fVar134 + *pfVar91 * fVar135 +
                        *pfVar102 * fVar169;
            pfVar141[1] = (float)((uint)pfVar141[1] & uVar143) +
                          fVar19 * fVar146 + fVar27 * fVar158 + fVar43 * fVar159 + fVar59 * fVar147
                          + fVar72 * fVar148 + fVar87 * fVar160 + fVar103 * fVar3 +
                          fVar20 * fVar150 + fVar28 * fVar162 + fVar44 * fVar163 + fVar60 * fVar151
                          + fVar73 * fVar152 + fVar88 * fVar164 + fVar104 * fVar161 +
                          fVar21 * fVar154 + fVar29 * fVar166 + fVar45 * fVar167 + fVar61 * fVar155
                          + fVar74 * fVar156 + fVar89 * fVar168 + fVar105 * fVar165 +
                          fVar22 * fVar1 + fVar30 * fVar2 + fVar46 * fVar132 + fVar62 * fVar133 +
                          fVar75 * fVar134 + fVar90 * fVar135 + fVar106 * fVar169;
            pfVar141[2] = (float)((uint)pfVar141[2] & uVar143) +
                          fVar23 * fVar146 + fVar32 * fVar158 + fVar47 * fVar159 + fVar63 * fVar147
                          + fVar79 * fVar148 + fVar92 * fVar160 + fVar107 * fVar3 +
                          fVar24 * fVar150 + fVar33 * fVar162 + fVar48 * fVar163 + fVar64 * fVar151
                          + fVar80 * fVar152 + fVar93 * fVar164 + fVar108 * fVar161 +
                          fVar25 * fVar154 + fVar34 * fVar166 + fVar49 * fVar167 + fVar65 * fVar155
                          + fVar81 * fVar156 + fVar94 * fVar168 + fVar109 * fVar165 +
                          fVar26 * fVar1 + fVar35 * fVar2 + fVar50 * fVar132 + fVar66 * fVar133 +
                          fVar82 * fVar134 + fVar95 * fVar135 + fVar110 * fVar169;
            pfVar141[3] = (float)((uint)pfVar141[3] & uVar143) +
                          fVar149 * fVar146 + fVar12 * fVar158 + fVar39 * fVar159 + fVar52 * fVar147
                          + fVar67 * fVar148 + fVar83 * fVar160 + fVar96 * fVar3 +
                          fVar153 * fVar150 + fVar13 * fVar162 + fVar40 * fVar163 + fVar53 * fVar151
                          + fVar68 * fVar152 + fVar84 * fVar164 + fVar97 * fVar161 +
                          fVar157 * fVar154 + fVar14 * fVar166 + fVar41 * fVar167 + fVar54 * fVar155
                          + fVar69 * fVar156 + fVar85 * fVar168 + fVar98 * fVar165 +
                          fVar138 * fVar1 + fVar15 * fVar2 + fVar42 * fVar132 + fVar55 * fVar133 +
                          fVar70 * fVar134 + fVar86 * fVar135 + fVar99 * fVar169;
            pfVar141 = pfVar141 + 4;
          }
          uVar139 = param_6 & 3;
          if (uVar139 != 0) {
            pfVar142 = pfVar142 + 8;
            do {
              fVar136 = *pfVar141;
              pfVar4 = pfVar142 + -4;
              pfVar6 = pfVar142 + -3;
              pfVar7 = pfVar142 + -2;
              pfVar8 = pfVar142 + -1;
              pfVar5 = pfVar142 + -8;
              pfVar9 = pfVar142 + -7;
              pfVar10 = pfVar142 + -6;
              pfVar11 = pfVar142 + -5;
              if (param_7 != 0) {
                fVar136 = 0.0;
              }
              fVar149 = *pfVar142;
              pfVar36 = pfVar142 + 1;
              pfVar37 = pfVar142 + 2;
              pfVar38 = pfVar142 + 3;
              pfVar16 = pfVar142 + 4;
              pfVar51 = pfVar142 + 5;
              pfVar56 = pfVar142 + 6;
              pfVar57 = pfVar142 + 7;
              pfVar17 = pfVar142 + 8;
              pfVar58 = pfVar142 + 9;
              pfVar71 = pfVar142 + 10;
              pfVar76 = pfVar142 + 0xb;
              pfVar18 = pfVar142 + 0xc;
              pfVar77 = pfVar142 + 0xd;
              pfVar78 = pfVar142 + 0xe;
              pfVar91 = pfVar142 + 0xf;
              pfVar31 = pfVar142 + 0x10;
              pfVar100 = pfVar142 + 0x11;
              pfVar101 = pfVar142 + 0x12;
              pfVar102 = pfVar142 + 0x13;
              pfVar142 = pfVar142 + 0x20;
              *pfVar141 = *pfVar4 * fVar158 + *pfVar5 * fVar146 + fVar149 * fVar159 +
                          *pfVar16 * fVar147 + *pfVar17 * fVar148 + *pfVar18 * fVar160 +
                          *pfVar31 * fVar3 +
                          *pfVar6 * fVar162 + *pfVar9 * fVar150 + *pfVar36 * fVar163 +
                          *pfVar51 * fVar151 + *pfVar58 * fVar152 + *pfVar77 * fVar164 +
                          *pfVar100 * fVar161 +
                          *pfVar7 * fVar166 + *pfVar10 * fVar154 + *pfVar37 * fVar167 +
                          *pfVar56 * fVar155 + *pfVar71 * fVar156 + *pfVar78 * fVar168 +
                          *pfVar101 * fVar165 +
                          *pfVar8 * fVar2 + *pfVar11 * fVar1 + *pfVar38 * fVar132 +
                          *pfVar57 * fVar133 + *pfVar76 * fVar134 + *pfVar91 * fVar135 +
                          *pfVar102 * fVar169 + fVar136;
              pfVar141 = pfVar141 + 1;
              uVar139 = uVar139 - 1;
            } while (uVar139 != 0);
          }
          break;
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
          fVar3 = param_1[0x1c];
          fVar146 = *param_1;
          fVar150 = param_1[1];
          fVar154 = param_1[2];
          fVar1 = param_1[3];
          fVar149 = (float)((uint)param_1[0x1d] & uVar144);
          fVar153 = (float)((uint)param_1[0x1e] & uVar140);
          fVar157 = (float)((uint)param_1[0x1f] & uVar131);
          fVar158 = param_1[4];
          fVar162 = param_1[5];
          fVar166 = param_1[6];
          fVar2 = param_1[7];
          fVar159 = param_1[8];
          fVar163 = param_1[9];
          fVar167 = param_1[10];
          fVar132 = param_1[0xb];
          fVar147 = param_1[0xc];
          fVar151 = param_1[0xd];
          fVar155 = param_1[0xe];
          fVar133 = param_1[0xf];
          fVar148 = param_1[0x10];
          fVar152 = param_1[0x11];
          fVar156 = param_1[0x12];
          fVar134 = param_1[0x13];
          fVar160 = param_1[0x14];
          fVar164 = param_1[0x15];
          fVar168 = param_1[0x16];
          fVar135 = param_1[0x17];
          fVar161 = param_1[0x18];
          fVar165 = param_1[0x19];
          fVar169 = param_1[0x1a];
          fVar136 = param_1[0x1b];
          pfVar141 = param_2;
          pfVar142 = param_4;
          for (; iVar137 != 0; iVar137 = iVar137 + -1) {
            pfVar4 = pfVar142 + 4;
            pfVar11 = pfVar142 + 5;
            pfVar16 = pfVar142 + 6;
            pfVar17 = pfVar142 + 7;
            fVar138 = *pfVar142;
            pfVar18 = pfVar142 + 1;
            pfVar31 = pfVar142 + 2;
            pfVar36 = pfVar142 + 3;
            fVar12 = pfVar142[0x20];
            fVar13 = pfVar142[0x21];
            fVar14 = pfVar142[0x22];
            fVar15 = pfVar142[0x23];
            fVar19 = pfVar142[0x40];
            fVar20 = pfVar142[0x41];
            fVar21 = pfVar142[0x42];
            fVar22 = pfVar142[0x43];
            fVar23 = pfVar142[0x60];
            fVar24 = pfVar142[0x61];
            fVar25 = pfVar142[0x62];
            fVar26 = pfVar142[99];
            fVar27 = pfVar142[0x24];
            fVar28 = pfVar142[0x25];
            fVar29 = pfVar142[0x26];
            fVar30 = pfVar142[0x27];
            fVar32 = pfVar142[0x44];
            fVar33 = pfVar142[0x45];
            fVar34 = pfVar142[0x46];
            fVar35 = pfVar142[0x47];
            fVar39 = pfVar142[100];
            fVar40 = pfVar142[0x65];
            fVar41 = pfVar142[0x66];
            fVar42 = pfVar142[0x67];
            pfVar5 = pfVar142 + 8;
            pfVar37 = pfVar142 + 9;
            pfVar38 = pfVar142 + 10;
            pfVar51 = pfVar142 + 0xb;
            fVar43 = pfVar142[0x28];
            fVar44 = pfVar142[0x29];
            fVar45 = pfVar142[0x2a];
            fVar46 = pfVar142[0x2b];
            fVar47 = pfVar142[0x48];
            fVar48 = pfVar142[0x49];
            fVar49 = pfVar142[0x4a];
            fVar50 = pfVar142[0x4b];
            fVar52 = pfVar142[0x68];
            fVar53 = pfVar142[0x69];
            fVar54 = pfVar142[0x6a];
            fVar55 = pfVar142[0x6b];
            pfVar6 = pfVar142 + 0xc;
            pfVar56 = pfVar142 + 0xd;
            pfVar57 = pfVar142 + 0xe;
            pfVar58 = pfVar142 + 0xf;
            fVar59 = pfVar142[0x2c];
            fVar60 = pfVar142[0x2d];
            fVar61 = pfVar142[0x2e];
            fVar62 = pfVar142[0x2f];
            fVar63 = pfVar142[0x4c];
            fVar64 = pfVar142[0x4d];
            fVar65 = pfVar142[0x4e];
            fVar66 = pfVar142[0x4f];
            fVar67 = pfVar142[0x6c];
            fVar68 = pfVar142[0x6d];
            fVar69 = pfVar142[0x6e];
            fVar70 = pfVar142[0x6f];
            pfVar7 = pfVar142 + 0x10;
            pfVar71 = pfVar142 + 0x11;
            pfVar76 = pfVar142 + 0x12;
            pfVar77 = pfVar142 + 0x13;
            fVar72 = pfVar142[0x30];
            fVar73 = pfVar142[0x31];
            fVar74 = pfVar142[0x32];
            fVar75 = pfVar142[0x33];
            fVar79 = pfVar142[0x50];
            fVar80 = pfVar142[0x51];
            fVar81 = pfVar142[0x52];
            fVar82 = pfVar142[0x53];
            fVar83 = pfVar142[0x70];
            fVar84 = pfVar142[0x71];
            fVar85 = pfVar142[0x72];
            fVar86 = pfVar142[0x73];
            pfVar8 = pfVar142 + 0x14;
            pfVar78 = pfVar142 + 0x15;
            pfVar91 = pfVar142 + 0x16;
            pfVar100 = pfVar142 + 0x17;
            fVar87 = pfVar142[0x34];
            fVar88 = pfVar142[0x35];
            fVar89 = pfVar142[0x36];
            fVar90 = pfVar142[0x37];
            fVar92 = pfVar142[0x54];
            fVar93 = pfVar142[0x55];
            fVar94 = pfVar142[0x56];
            fVar95 = pfVar142[0x57];
            fVar96 = pfVar142[0x74];
            fVar97 = pfVar142[0x75];
            fVar98 = pfVar142[0x76];
            fVar99 = pfVar142[0x77];
            pfVar9 = pfVar142 + 0x18;
            pfVar101 = pfVar142 + 0x19;
            pfVar102 = pfVar142 + 0x1a;
            pfVar111 = pfVar142 + 0x1b;
            fVar103 = pfVar142[0x38];
            fVar104 = pfVar142[0x39];
            fVar105 = pfVar142[0x3a];
            fVar106 = pfVar142[0x3b];
            fVar107 = pfVar142[0x58];
            fVar108 = pfVar142[0x59];
            fVar109 = pfVar142[0x5a];
            fVar110 = pfVar142[0x5b];
            fVar112 = pfVar142[0x78];
            fVar113 = pfVar142[0x79];
            fVar114 = pfVar142[0x7a];
            fVar115 = pfVar142[0x7b];
            pfVar10 = pfVar142 + 0x1c;
            pfVar116 = pfVar142 + 0x1d;
            pfVar117 = pfVar142 + 0x1e;
            pfVar118 = pfVar142 + 0x1f;
            fVar119 = pfVar142[0x3c];
            fVar120 = pfVar142[0x3d];
            fVar121 = pfVar142[0x3e];
            fVar122 = pfVar142[0x3f];
            fVar123 = pfVar142[0x5c];
            fVar124 = pfVar142[0x5d];
            fVar125 = pfVar142[0x5e];
            fVar126 = pfVar142[0x5f];
            fVar127 = pfVar142[0x7c];
            fVar128 = pfVar142[0x7d];
            fVar129 = pfVar142[0x7e];
            fVar130 = pfVar142[0x7f];
            pfVar142 = pfVar142 + 0x80;
            *pfVar141 = (float)((uint)*pfVar141 & uVar143) +
                        fVar146 * fVar138 + fVar158 * *pfVar4 + fVar159 * *pfVar5 +
                        fVar147 * *pfVar6 + fVar148 * *pfVar7 + fVar160 * *pfVar8 +
                        fVar161 * *pfVar9 + fVar3 * *pfVar10 +
                        fVar150 * *pfVar18 + fVar162 * *pfVar11 + fVar163 * *pfVar37 +
                        fVar151 * *pfVar56 + fVar152 * *pfVar71 + fVar164 * *pfVar78 +
                        fVar165 * *pfVar101 + fVar149 * *pfVar116 +
                        fVar154 * *pfVar31 + fVar166 * *pfVar16 + fVar167 * *pfVar38 +
                        fVar155 * *pfVar57 + fVar156 * *pfVar76 + fVar168 * *pfVar91 +
                        fVar169 * *pfVar102 + fVar153 * *pfVar117 +
                        fVar1 * *pfVar36 + fVar2 * *pfVar17 + fVar132 * *pfVar51 +
                        fVar133 * *pfVar58 + fVar134 * *pfVar77 + fVar135 * *pfVar100 +
                        fVar136 * *pfVar111 + fVar157 * *pfVar118;
            pfVar141[1] = (float)((uint)pfVar141[1] & uVar143) +
                          fVar146 * fVar12 + fVar158 * fVar27 + fVar159 * fVar43 + fVar147 * fVar59
                          + fVar148 * fVar72 + fVar160 * fVar87 + fVar161 * fVar103 +
                          fVar3 * fVar119 +
                          fVar150 * fVar13 + fVar162 * fVar28 + fVar163 * fVar44 + fVar151 * fVar60
                          + fVar152 * fVar73 + fVar164 * fVar88 + fVar165 * fVar104 +
                          fVar149 * fVar120 +
                          fVar154 * fVar14 + fVar166 * fVar29 + fVar167 * fVar45 + fVar155 * fVar61
                          + fVar156 * fVar74 + fVar168 * fVar89 + fVar169 * fVar105 +
                          fVar153 * fVar121 +
                          fVar1 * fVar15 + fVar2 * fVar30 + fVar132 * fVar46 + fVar133 * fVar62 +
                          fVar134 * fVar75 + fVar135 * fVar90 + fVar136 * fVar106 +
                          fVar157 * fVar122;
            pfVar141[2] = (float)((uint)pfVar141[2] & uVar143) +
                          fVar146 * fVar19 + fVar158 * fVar32 + fVar159 * fVar47 + fVar147 * fVar63
                          + fVar148 * fVar79 + fVar160 * fVar92 + fVar161 * fVar107 +
                          fVar3 * fVar123 +
                          fVar150 * fVar20 + fVar162 * fVar33 + fVar163 * fVar48 + fVar151 * fVar64
                          + fVar152 * fVar80 + fVar164 * fVar93 + fVar165 * fVar108 +
                          fVar149 * fVar124 +
                          fVar154 * fVar21 + fVar166 * fVar34 + fVar167 * fVar49 + fVar155 * fVar65
                          + fVar156 * fVar81 + fVar168 * fVar94 + fVar169 * fVar109 +
                          fVar153 * fVar125 +
                          fVar1 * fVar22 + fVar2 * fVar35 + fVar132 * fVar50 + fVar133 * fVar66 +
                          fVar134 * fVar82 + fVar135 * fVar95 + fVar136 * fVar110 +
                          fVar157 * fVar126;
            pfVar141[3] = (float)((uint)pfVar141[3] & uVar143) +
                          fVar146 * fVar23 + fVar158 * fVar39 + fVar159 * fVar52 + fVar147 * fVar67
                          + fVar148 * fVar83 + fVar160 * fVar96 + fVar161 * fVar112 +
                          fVar3 * fVar127 +
                          fVar150 * fVar24 + fVar162 * fVar40 + fVar163 * fVar53 + fVar151 * fVar68
                          + fVar152 * fVar84 + fVar164 * fVar97 + fVar165 * fVar113 +
                          fVar149 * fVar128 +
                          fVar154 * fVar25 + fVar166 * fVar41 + fVar167 * fVar54 + fVar155 * fVar69
                          + fVar156 * fVar85 + fVar168 * fVar98 + fVar169 * fVar114 +
                          fVar153 * fVar129 +
                          fVar1 * fVar26 + fVar2 * fVar42 + fVar132 * fVar55 + fVar133 * fVar70 +
                          fVar134 * fVar86 + fVar135 * fVar99 + fVar136 * fVar115 +
                          fVar157 * fVar130;
            pfVar141 = pfVar141 + 4;
          }
          uVar139 = param_6 & 3;
          if (uVar139 != 0) {
            pfVar142 = pfVar142 + 8;
            do {
              fVar138 = *pfVar141;
              pfVar4 = pfVar142 + -4;
              pfVar6 = pfVar142 + -3;
              pfVar7 = pfVar142 + -2;
              pfVar8 = pfVar142 + -1;
              pfVar5 = pfVar142 + -8;
              pfVar9 = pfVar142 + -7;
              pfVar10 = pfVar142 + -6;
              pfVar11 = pfVar142 + -5;
              if (param_7 != 0) {
                fVar138 = 0.0;
              }
              fVar12 = *pfVar142;
              pfVar37 = pfVar142 + 1;
              pfVar38 = pfVar142 + 2;
              pfVar51 = pfVar142 + 3;
              pfVar16 = pfVar142 + 4;
              pfVar56 = pfVar142 + 5;
              pfVar57 = pfVar142 + 6;
              pfVar58 = pfVar142 + 7;
              pfVar17 = pfVar142 + 8;
              pfVar71 = pfVar142 + 9;
              pfVar76 = pfVar142 + 10;
              pfVar77 = pfVar142 + 0xb;
              pfVar18 = pfVar142 + 0xc;
              pfVar78 = pfVar142 + 0xd;
              pfVar91 = pfVar142 + 0xe;
              pfVar100 = pfVar142 + 0xf;
              pfVar31 = pfVar142 + 0x10;
              pfVar101 = pfVar142 + 0x11;
              pfVar102 = pfVar142 + 0x12;
              pfVar111 = pfVar142 + 0x13;
              pfVar36 = pfVar142 + 0x14;
              pfVar116 = pfVar142 + 0x15;
              pfVar117 = pfVar142 + 0x16;
              pfVar118 = pfVar142 + 0x17;
              pfVar142 = pfVar142 + 0x20;
              *pfVar141 = *pfVar4 * fVar158 + *pfVar5 * fVar146 + fVar12 * fVar159 +
                          *pfVar16 * fVar147 + *pfVar17 * fVar148 + *pfVar18 * fVar160 +
                          *pfVar31 * fVar161 + *pfVar36 * fVar3 +
                          *pfVar6 * fVar162 + *pfVar9 * fVar150 + *pfVar37 * fVar163 +
                          *pfVar56 * fVar151 + *pfVar71 * fVar152 + *pfVar78 * fVar164 +
                          *pfVar101 * fVar165 + *pfVar116 * fVar149 +
                          *pfVar7 * fVar166 + *pfVar10 * fVar154 + *pfVar38 * fVar167 +
                          *pfVar57 * fVar155 + *pfVar76 * fVar156 + *pfVar91 * fVar168 +
                          *pfVar102 * fVar169 + *pfVar117 * fVar153 +
                          *pfVar8 * fVar2 + *pfVar11 * fVar1 + *pfVar51 * fVar132 +
                          *pfVar58 * fVar133 + *pfVar77 * fVar134 + *pfVar100 * fVar135 +
                          *pfVar111 * fVar136 + *pfVar118 * fVar157 + fVar138;
              pfVar141 = pfVar141 + 1;
              uVar139 = uVar139 - 1;
            } while (uVar139 != 0);
          }
        }
        param_2 = param_2 + (int)param_6;
      }
      param_1 = param_1 + (int)param_5;
      uVar145 = uVar145 - 1;
    } while (uVar145 != 0);
  }
  return;
}








