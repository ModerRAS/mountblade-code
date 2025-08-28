#include "TaleWorlds.Native.Split.h"
// 99_part_12_part035_sub002_sub002.c - 1 个函数
// 函数: void function_7e184f(uint64_t param_1,uint64_t param_2,uint param_3,uint64_t param_4)
void function_7e184f(uint64_t param_1,uint64_t param_2,uint param_3,uint64_t param_4)
{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
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
  float *pfVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  float fVar38;
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
  float *pfVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float *pfVar55;
  float *pfVar56;
  float *pfVar57;
  float fVar58;
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
  float *pfVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float *pfVar75;
  float *pfVar76;
  float *pfVar77;
  float fVar78;
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
  float *pfVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float *pfVar99;
  float *pfVar100;
  float *pfVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float *pfVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float *pfVar115;
  float *pfVar116;
  float *pfVar117;
  float fVar118;
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
  int32_t uVar130;
  int iVar131;
  float *pfVar132;
  float *pfVar133;
  float *unaff_RBX;
  int64_t unaff_RBP;
  float *unaff_RDI;
  uint uVar134;
  int64_t in_R9;
  uint64_t uVar135;
  int in_R11D;
  int32_t unaff_R12D;
  float *unaff_R14;
  uint uVar136;
  uint uVar137;
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
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
  uint unaff_XMM11_Da;
  uint unaff_XMM11_Db;
  uint unaff_XMM11_Dc;
  uint unaff_XMM11_Dd;
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  uint stack_special_x_8;
  uint stack_special_x_c;
  uVar137 = (uint)((uint64_t)param_4 >> 0x20);
  uVar136 = (uint)param_4;
  uVar1 = *(uint *)(unaff_RBP + 0x77);
  uVar135 = (uint64_t)param_3;
  do {
    if ((int)in_R9 - 1U < 0x20) {
      iVar131 = (int)uVar1 >> 2;
      switch((int)in_R9) {
      default:
        fVar138 = (float)((uint)*unaff_RBX & uVar136);
        fVar142 = (float)((uint)unaff_RBX[1] & uVar137);
        fVar146 = (float)((uint)unaff_RBX[2] & in_XMM3_Dc);
        fVar150 = (float)((uint)unaff_RBX[3] & in_XMM3_Dd);
        pfVar132 = unaff_RDI;
        pfVar133 = unaff_R14;
        for (; iVar131 != 0; iVar131 = iVar131 + -1) {
          fVar154 = pfVar133[0x20];
          fVar158 = pfVar133[0x21];
          fVar162 = pfVar133[0x22];
          fVar166 = pfVar133[0x23];
          fVar155 = *pfVar133;
          pfVar2 = pfVar133 + 1;
          pfVar3 = pfVar133 + 2;
          pfVar4 = pfVar133 + 3;
          fVar159 = pfVar133[0x40];
          fVar163 = pfVar133[0x41];
          fVar167 = pfVar133[0x42];
          fVar139 = pfVar133[0x43];
          fVar143 = pfVar133[0x60];
          fVar147 = pfVar133[0x61];
          fVar151 = pfVar133[0x62];
          fVar140 = pfVar133[99];
          pfVar133 = pfVar133 + 0x80;
          *pfVar132 = (float)((uint)*pfVar132 & unaff_XMM11_Da) + fVar138 * fVar155 +
                      fVar142 * *pfVar2 + fVar146 * *pfVar3 + fVar150 * *pfVar4;
          pfVar132[1] = (float)((uint)pfVar132[1] & unaff_XMM11_Db) + fVar154 * fVar138 +
                        fVar158 * fVar142 + fVar162 * fVar146 + fVar166 * fVar150;
          pfVar132[2] = (float)((uint)pfVar132[2] & unaff_XMM11_Dc) + fVar159 * fVar138 +
                        fVar163 * fVar142 + fVar167 * fVar146 + fVar139 * fVar150;
          pfVar132[3] = (float)((uint)pfVar132[3] & unaff_XMM11_Dd) + fVar143 * fVar138 +
                        fVar147 * fVar142 + fVar151 * fVar146 + fVar140 * fVar150;
          pfVar132 = pfVar132 + 4;
          uVar136 = unaff_retaddr;
          uVar137 = unaff_retaddr_00;
          in_XMM3_Dc = stack_special_x_8;
          in_XMM3_Dd = stack_special_x_c;
        }
        for (uVar134 = uVar1 & 3; uVar134 != 0; uVar134 = uVar134 - 1) {
          *(float *)(unaff_RBP + 0x7f) = *pfVar132;
          fVar154 = *pfVar133;
          fVar158 = pfVar133[1];
          fVar162 = pfVar133[2];
          fVar166 = pfVar133[3];
          uVar130 = *(int32_t *)(unaff_RBP + 0x7f);
          if (in_R11D != 0) {
            uVar130 = unaff_R12D;
          }
          *(int32_t *)(unaff_RBP + 0x7f) = uVar130;
          pfVar133 = pfVar133 + 0x20;
          *pfVar132 = fVar154 * fVar138 + fVar158 * fVar142 + fVar162 * fVar146 + fVar166 * fVar150
                      + *(float *)(unaff_RBP + 0x7f);
          pfVar132 = pfVar132 + 1;
        }
        break;
      case 5:
      case 6:
      case 7:
      case 8:
        fVar138 = *unaff_RBX;
        fVar142 = unaff_RBX[1];
        fVar146 = unaff_RBX[2];
        fVar150 = unaff_RBX[3];
        fVar154 = (float)((uint)unaff_RBX[4] & uVar136);
        fVar158 = (float)((uint)unaff_RBX[5] & uVar137);
        fVar162 = (float)((uint)unaff_RBX[6] & in_XMM3_Dc);
        fVar166 = (float)((uint)unaff_RBX[7] & in_XMM3_Dd);
        pfVar132 = unaff_RDI;
        pfVar133 = unaff_R14;
        for (; iVar131 != 0; iVar131 = iVar131 + -1) {
          fVar155 = *pfVar133;
          pfVar3 = pfVar133 + 1;
          pfVar4 = pfVar133 + 2;
          pfVar5 = pfVar133 + 3;
          pfVar2 = pfVar133 + 4;
          pfVar6 = pfVar133 + 5;
          pfVar7 = pfVar133 + 6;
          pfVar8 = pfVar133 + 7;
          fVar159 = pfVar133[0x20];
          fVar163 = pfVar133[0x21];
          fVar167 = pfVar133[0x22];
          fVar139 = pfVar133[0x23];
          fVar143 = pfVar133[0x40];
          fVar147 = pfVar133[0x41];
          fVar151 = pfVar133[0x42];
          fVar140 = pfVar133[0x43];
          fVar144 = pfVar133[0x24];
          fVar148 = pfVar133[0x25];
          fVar152 = pfVar133[0x26];
          fVar156 = pfVar133[0x27];
          fVar160 = pfVar133[0x44];
          fVar164 = pfVar133[0x45];
          fVar168 = pfVar133[0x46];
          fVar157 = pfVar133[0x47];
          fVar161 = pfVar133[0x60];
          fVar165 = pfVar133[0x61];
          fVar169 = pfVar133[0x62];
          fVar141 = pfVar133[99];
          fVar145 = pfVar133[100];
          fVar149 = pfVar133[0x65];
          fVar153 = pfVar133[0x66];
          fVar9 = pfVar133[0x67];
          pfVar133 = pfVar133 + 0x80;
          *pfVar132 = (float)((uint)*pfVar132 & unaff_XMM11_Da) +
                      fVar155 * fVar138 + *pfVar2 * fVar154 + *pfVar3 * fVar142 + *pfVar6 * fVar158
                      + *pfVar4 * fVar146 + *pfVar7 * fVar162 +
                      *pfVar5 * fVar150 + *pfVar8 * fVar166;
          pfVar132[1] = (float)((uint)pfVar132[1] & unaff_XMM11_Db) +
                        fVar159 * fVar138 + fVar144 * fVar154 +
                        fVar163 * fVar142 + fVar148 * fVar158 +
                        fVar167 * fVar146 + fVar152 * fVar162 +
                        fVar139 * fVar150 + fVar156 * fVar166;
          pfVar132[2] = (float)((uint)pfVar132[2] & unaff_XMM11_Dc) +
                        fVar143 * fVar138 + fVar160 * fVar154 +
                        fVar147 * fVar142 + fVar164 * fVar158 +
                        fVar151 * fVar146 + fVar168 * fVar162 +
                        fVar140 * fVar150 + fVar157 * fVar166;
          pfVar132[3] = (float)((uint)pfVar132[3] & unaff_XMM11_Dd) +
                        fVar161 * fVar138 + fVar145 * fVar154 +
                        fVar165 * fVar142 + fVar149 * fVar158 +
                        fVar169 * fVar146 + fVar153 * fVar162 + fVar141 * fVar150 + fVar9 * fVar166;
          pfVar132 = pfVar132 + 4;
          uVar136 = unaff_retaddr;
          uVar137 = unaff_retaddr_00;
          in_XMM3_Dc = stack_special_x_8;
          in_XMM3_Dd = stack_special_x_c;
        }
        for (uVar134 = uVar1 & 3; uVar134 != 0; uVar134 = uVar134 - 1) {
          fVar155 = pfVar133[4];
          fVar159 = pfVar133[5];
          fVar163 = pfVar133[6];
          fVar167 = pfVar133[7];
          *(float *)(unaff_RBP + 0x7f) = *pfVar132;
          fVar139 = *pfVar133;
          fVar143 = pfVar133[1];
          fVar147 = pfVar133[2];
          fVar151 = pfVar133[3];
          uVar130 = *(int32_t *)(unaff_RBP + 0x7f);
          if (in_R11D != 0) {
            uVar130 = unaff_R12D;
          }
          pfVar133 = pfVar133 + 0x20;
          *(int32_t *)(unaff_RBP + 0x7f) = uVar130;
          *pfVar132 = fVar155 * fVar154 + fVar139 * fVar138 + fVar159 * fVar158 + fVar143 * fVar142
                      + fVar163 * fVar162 + fVar147 * fVar146 +
                        fVar167 * fVar166 + fVar151 * fVar150 + *(float *)(unaff_RBP + 0x7f);
          pfVar132 = pfVar132 + 1;
        }
        break;
      case 9:
      case 10:
      case 0xb:
      case 0xc:
        fVar138 = *unaff_RBX;
        fVar142 = unaff_RBX[1];
        fVar146 = unaff_RBX[2];
        fVar150 = unaff_RBX[3];
        fVar155 = (float)((uint)unaff_RBX[8] & uVar136);
        fVar159 = (float)((uint)unaff_RBX[9] & uVar137);
        fVar163 = (float)((uint)unaff_RBX[10] & in_XMM3_Dc);
        fVar167 = (float)((uint)unaff_RBX[0xb] & in_XMM3_Dd);
        fVar154 = unaff_RBX[4];
        fVar158 = unaff_RBX[5];
        fVar162 = unaff_RBX[6];
        fVar166 = unaff_RBX[7];
        pfVar133 = unaff_RDI;
        pfVar132 = unaff_R14;
        for (; iVar131 != 0; iVar131 = iVar131 + -1) {
          fVar139 = *pfVar132;
          pfVar4 = pfVar132 + 1;
          pfVar5 = pfVar132 + 2;
          pfVar6 = pfVar132 + 3;
          pfVar2 = pfVar132 + 4;
          pfVar7 = pfVar132 + 5;
          pfVar8 = pfVar132 + 6;
          pfVar10 = pfVar132 + 7;
          fVar143 = pfVar132[0x20];
          fVar147 = pfVar132[0x21];
          fVar151 = pfVar132[0x22];
          fVar140 = pfVar132[0x23];
          fVar144 = pfVar132[0x40];
          fVar148 = pfVar132[0x41];
          fVar152 = pfVar132[0x42];
          fVar156 = pfVar132[0x43];
          fVar160 = pfVar132[0x24];
          fVar164 = pfVar132[0x25];
          fVar168 = pfVar132[0x26];
          fVar157 = pfVar132[0x27];
          fVar161 = pfVar132[0x44];
          fVar165 = pfVar132[0x45];
          fVar169 = pfVar132[0x46];
          fVar141 = pfVar132[0x47];
          fVar145 = pfVar132[0x60];
          fVar149 = pfVar132[0x61];
          fVar153 = pfVar132[0x62];
          fVar9 = pfVar132[99];
          fVar11 = pfVar132[100];
          fVar12 = pfVar132[0x65];
          fVar13 = pfVar132[0x66];
          fVar14 = pfVar132[0x67];
          pfVar3 = pfVar132 + 8;
          pfVar15 = pfVar132 + 9;
          pfVar16 = pfVar132 + 10;
          pfVar17 = pfVar132 + 0xb;
          fVar18 = pfVar132[0x48];
          fVar19 = pfVar132[0x49];
          fVar20 = pfVar132[0x4a];
          fVar21 = pfVar132[0x4b];
          fVar22 = pfVar132[0x28];
          fVar23 = pfVar132[0x29];
          fVar24 = pfVar132[0x2a];
          fVar25 = pfVar132[0x2b];
          fVar26 = pfVar132[0x68];
          fVar27 = pfVar132[0x69];
          fVar28 = pfVar132[0x6a];
          fVar29 = pfVar132[0x6b];
          pfVar132 = pfVar132 + 0x80;
          *pfVar133 = (float)((uint)*pfVar133 & unaff_XMM11_Da) +
                      fVar139 * fVar138 + *pfVar2 * fVar154 + *pfVar3 * fVar155 +
                      *pfVar4 * fVar142 + *pfVar7 * fVar158 + *pfVar15 * fVar159 +
                      *pfVar5 * fVar146 + *pfVar8 * fVar162 + *pfVar16 * fVar163 +
                      *pfVar6 * fVar150 + *pfVar10 * fVar166 + *pfVar17 * fVar167;
          pfVar133[1] = (float)((uint)pfVar133[1] & unaff_XMM11_Db) +
                        fVar143 * fVar138 + fVar160 * fVar154 + fVar22 * fVar155 +
                        fVar147 * fVar142 + fVar164 * fVar158 + fVar23 * fVar159 +
                        fVar151 * fVar146 + fVar168 * fVar162 + fVar24 * fVar163 +
                        fVar140 * fVar150 + fVar157 * fVar166 + fVar25 * fVar167;
          pfVar133[2] = (float)((uint)pfVar133[2] & unaff_XMM11_Dc) +
                        fVar144 * fVar138 + fVar161 * fVar154 + fVar18 * fVar155 +
                        fVar148 * fVar142 + fVar165 * fVar158 + fVar19 * fVar159 +
                        fVar152 * fVar146 + fVar169 * fVar162 + fVar20 * fVar163 +
                        fVar156 * fVar150 + fVar141 * fVar166 + fVar21 * fVar167;
          pfVar133[3] = (float)((uint)pfVar133[3] & unaff_XMM11_Dd) +
                        fVar145 * fVar138 + fVar11 * fVar154 + fVar26 * fVar155 +
                        fVar149 * fVar142 + fVar12 * fVar158 + fVar27 * fVar159 +
                        fVar153 * fVar146 + fVar13 * fVar162 + fVar28 * fVar163 +
                        fVar9 * fVar150 + fVar14 * fVar166 + fVar29 * fVar167;
          pfVar133 = pfVar133 + 4;
          uVar136 = unaff_retaddr;
          uVar137 = unaff_retaddr_00;
          in_XMM3_Dc = stack_special_x_8;
          in_XMM3_Dd = stack_special_x_c;
        }
        uVar134 = uVar1 & 3;
        if (uVar134 != 0) {
          pfVar132 = pfVar132 + 8;
          do {
            fVar139 = pfVar132[-4];
            fVar143 = pfVar132[-3];
            fVar147 = pfVar132[-2];
            fVar151 = pfVar132[-1];
            *(float *)(unaff_RBP + 0x7f) = *pfVar133;
            fVar140 = pfVar132[-8];
            fVar144 = pfVar132[-7];
            fVar148 = pfVar132[-6];
            fVar152 = pfVar132[-5];
            uVar130 = *(int32_t *)(unaff_RBP + 0x7f);
            if (in_R11D != 0) {
              uVar130 = unaff_R12D;
            }
            *(int32_t *)(unaff_RBP + 0x7f) = uVar130;
            fVar156 = *pfVar132;
            pfVar2 = pfVar132 + 1;
            pfVar3 = pfVar132 + 2;
            pfVar4 = pfVar132 + 3;
            pfVar132 = pfVar132 + 0x20;
            *pfVar133 = fVar139 * fVar154 + fVar140 * fVar138 + fVar156 * fVar155 +
                        fVar143 * fVar158 + fVar144 * fVar142 + *pfVar2 * fVar159 +
                        fVar147 * fVar162 + fVar148 * fVar146 + *pfVar3 * fVar163 +
                        fVar151 * fVar166 + fVar152 * fVar150 + *pfVar4 * fVar167 +
                        *(float *)(unaff_RBP + 0x7f);
            pfVar133 = pfVar133 + 1;
            uVar134 = uVar134 - 1;
          } while (uVar134 != 0);
        }
        break;
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
        fVar138 = *unaff_RBX;
        fVar142 = unaff_RBX[1];
        fVar146 = unaff_RBX[2];
        fVar150 = unaff_RBX[3];
        fVar139 = (float)((uint)unaff_RBX[0xc] & uVar136);
        fVar143 = (float)((uint)unaff_RBX[0xd] & uVar137);
        fVar147 = (float)((uint)unaff_RBX[0xe] & in_XMM3_Dc);
        fVar151 = (float)((uint)unaff_RBX[0xf] & in_XMM3_Dd);
        fVar154 = unaff_RBX[4];
        fVar158 = unaff_RBX[5];
        fVar162 = unaff_RBX[6];
        fVar166 = unaff_RBX[7];
        fVar155 = unaff_RBX[8];
        fVar159 = unaff_RBX[9];
        fVar163 = unaff_RBX[10];
        fVar167 = unaff_RBX[0xb];
        pfVar133 = unaff_RDI;
        pfVar132 = unaff_R14;
        for (; iVar131 != 0; iVar131 = iVar131 + -1) {
          pfVar2 = pfVar132 + 4;
          pfVar5 = pfVar132 + 5;
          pfVar6 = pfVar132 + 6;
          pfVar7 = pfVar132 + 7;
          fVar140 = *pfVar132;
          pfVar8 = pfVar132 + 1;
          pfVar10 = pfVar132 + 2;
          pfVar15 = pfVar132 + 3;
          fVar144 = pfVar132[0x20];
          fVar148 = pfVar132[0x21];
          fVar152 = pfVar132[0x22];
          fVar156 = pfVar132[0x23];
          fVar160 = pfVar132[0x60];
          fVar164 = pfVar132[0x61];
          fVar168 = pfVar132[0x62];
          fVar157 = pfVar132[99];
          fVar161 = pfVar132[0x40];
          fVar165 = pfVar132[0x41];
          fVar169 = pfVar132[0x42];
          fVar141 = pfVar132[0x43];
          fVar145 = pfVar132[0x24];
          fVar149 = pfVar132[0x25];
          fVar153 = pfVar132[0x26];
          fVar9 = pfVar132[0x27];
          fVar11 = pfVar132[0x44];
          fVar12 = pfVar132[0x45];
          fVar13 = pfVar132[0x46];
          fVar14 = pfVar132[0x47];
          fVar18 = pfVar132[100];
          fVar19 = pfVar132[0x65];
          fVar20 = pfVar132[0x66];
          fVar21 = pfVar132[0x67];
          pfVar3 = pfVar132 + 8;
          pfVar16 = pfVar132 + 9;
          pfVar17 = pfVar132 + 10;
          pfVar30 = pfVar132 + 0xb;
          fVar22 = pfVar132[0x28];
          fVar23 = pfVar132[0x29];
          fVar24 = pfVar132[0x2a];
          fVar25 = pfVar132[0x2b];
          fVar26 = pfVar132[0x48];
          fVar27 = pfVar132[0x49];
          fVar28 = pfVar132[0x4a];
          fVar29 = pfVar132[0x4b];
          fVar31 = pfVar132[0x68];
          fVar32 = pfVar132[0x69];
          fVar33 = pfVar132[0x6a];
          fVar34 = pfVar132[0x6b];
          pfVar4 = pfVar132 + 0xc;
          pfVar35 = pfVar132 + 0xd;
          pfVar36 = pfVar132 + 0xe;
          pfVar37 = pfVar132 + 0xf;
          fVar38 = pfVar132[0x2c];
          fVar39 = pfVar132[0x2d];
          fVar40 = pfVar132[0x2e];
          fVar41 = pfVar132[0x2f];
          fVar42 = pfVar132[0x4c];
          fVar43 = pfVar132[0x4d];
          fVar44 = pfVar132[0x4e];
          fVar45 = pfVar132[0x4f];
          fVar46 = pfVar132[0x6c];
          fVar47 = pfVar132[0x6d];
          fVar48 = pfVar132[0x6e];
          fVar49 = pfVar132[0x6f];
          pfVar132 = pfVar132 + 0x80;
          *pfVar133 = (float)((uint)*pfVar133 & unaff_XMM11_Da) +
                      fVar138 * fVar140 + fVar154 * *pfVar2 + fVar155 * *pfVar3 + fVar139 * *pfVar4
                      + fVar142 * *pfVar8 + fVar158 * *pfVar5 + fVar159 * *pfVar16 +
                        fVar143 * *pfVar35 +
                      fVar146 * *pfVar10 + fVar162 * *pfVar6 + fVar163 * *pfVar17 +
                      fVar147 * *pfVar36 +
                      fVar150 * *pfVar15 + fVar166 * *pfVar7 + fVar167 * *pfVar30 +
                      fVar151 * *pfVar37;
          pfVar133[1] = (float)((uint)pfVar133[1] & unaff_XMM11_Db) +
                        fVar138 * fVar144 + fVar154 * fVar145 + fVar155 * fVar22 + fVar139 * fVar38
                        + fVar142 * fVar148 + fVar158 * fVar149 + fVar159 * fVar23 +
                          fVar143 * fVar39 +
                        fVar146 * fVar152 + fVar162 * fVar153 + fVar163 * fVar24 + fVar147 * fVar40
                        + fVar150 * fVar156 + fVar166 * fVar9 + fVar167 * fVar25 + fVar151 * fVar41;
          pfVar133[2] = (float)((uint)pfVar133[2] & unaff_XMM11_Dc) +
                        fVar138 * fVar161 + fVar154 * fVar11 + fVar155 * fVar26 + fVar139 * fVar42 +
                        fVar142 * fVar165 + fVar158 * fVar12 + fVar159 * fVar27 + fVar143 * fVar43 +
                        fVar146 * fVar169 + fVar162 * fVar13 + fVar163 * fVar28 + fVar147 * fVar44 +
                        fVar150 * fVar141 + fVar166 * fVar14 + fVar167 * fVar29 + fVar151 * fVar45;
          pfVar133[3] = (float)((uint)pfVar133[3] & unaff_XMM11_Dd) +
                        fVar138 * fVar160 + fVar154 * fVar18 + fVar155 * fVar31 + fVar139 * fVar46 +
                        fVar142 * fVar164 + fVar158 * fVar19 + fVar159 * fVar32 + fVar143 * fVar47 +
                        fVar146 * fVar168 + fVar162 * fVar20 + fVar163 * fVar33 + fVar147 * fVar48 +
                        fVar150 * fVar157 + fVar166 * fVar21 + fVar167 * fVar34 + fVar151 * fVar49;
          pfVar133 = pfVar133 + 4;
          uVar136 = unaff_retaddr;
          uVar137 = unaff_retaddr_00;
          in_XMM3_Dc = stack_special_x_8;
          in_XMM3_Dd = stack_special_x_c;
        }
        uVar134 = uVar1 & 3;
        if (uVar134 != 0) {
          pfVar132 = pfVar132 + 8;
          do {
            fVar140 = pfVar132[-4];
            fVar144 = pfVar132[-3];
            fVar148 = pfVar132[-2];
            fVar152 = pfVar132[-1];
            *(float *)(unaff_RBP + 0x7f) = *pfVar133;
            fVar156 = pfVar132[-8];
            fVar160 = pfVar132[-7];
            fVar164 = pfVar132[-6];
            fVar168 = pfVar132[-5];
            uVar130 = *(int32_t *)(unaff_RBP + 0x7f);
            if (in_R11D != 0) {
              uVar130 = unaff_R12D;
            }
            *(int32_t *)(unaff_RBP + 0x7f) = uVar130;
            fVar157 = *pfVar132;
            pfVar3 = pfVar132 + 1;
            pfVar4 = pfVar132 + 2;
            pfVar5 = pfVar132 + 3;
            pfVar2 = pfVar132 + 4;
            pfVar6 = pfVar132 + 5;
            pfVar7 = pfVar132 + 6;
            pfVar8 = pfVar132 + 7;
            pfVar132 = pfVar132 + 0x20;
            *pfVar133 = fVar140 * fVar154 + fVar156 * fVar138 + fVar157 * fVar155 +
                        *pfVar2 * fVar139 +
                        fVar144 * fVar158 + fVar160 * fVar142 + *pfVar3 * fVar159 +
                        *pfVar6 * fVar143 +
                        fVar148 * fVar162 + fVar164 * fVar146 + *pfVar4 * fVar163 +
                        *pfVar7 * fVar147 +
                        fVar152 * fVar166 + fVar168 * fVar150 + *pfVar5 * fVar167 +
                        *pfVar8 * fVar151 + *(float *)(unaff_RBP + 0x7f);
            pfVar133 = pfVar133 + 1;
            uVar134 = uVar134 - 1;
          } while (uVar134 != 0);
        }
        break;
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
        fVar138 = *unaff_RBX;
        fVar142 = unaff_RBX[1];
        fVar146 = unaff_RBX[2];
        fVar150 = unaff_RBX[3];
        fVar140 = (float)((uint)unaff_RBX[0x10] & uVar136);
        fVar144 = (float)((uint)unaff_RBX[0x11] & uVar137);
        fVar148 = (float)((uint)unaff_RBX[0x12] & in_XMM3_Dc);
        fVar152 = (float)((uint)unaff_RBX[0x13] & in_XMM3_Dd);
        fVar154 = unaff_RBX[4];
        fVar158 = unaff_RBX[5];
        fVar162 = unaff_RBX[6];
        fVar166 = unaff_RBX[7];
        fVar155 = unaff_RBX[8];
        fVar159 = unaff_RBX[9];
        fVar163 = unaff_RBX[10];
        fVar167 = unaff_RBX[0xb];
        fVar139 = unaff_RBX[0xc];
        fVar143 = unaff_RBX[0xd];
        fVar147 = unaff_RBX[0xe];
        fVar151 = unaff_RBX[0xf];
        pfVar133 = unaff_RDI;
        pfVar132 = unaff_R14;
        for (; iVar131 != 0; iVar131 = iVar131 + -1) {
          pfVar2 = pfVar132 + 4;
          pfVar6 = pfVar132 + 5;
          pfVar7 = pfVar132 + 6;
          pfVar8 = pfVar132 + 7;
          fVar156 = *pfVar132;
          pfVar10 = pfVar132 + 1;
          pfVar15 = pfVar132 + 2;
          pfVar16 = pfVar132 + 3;
          fVar160 = pfVar132[0x20];
          fVar164 = pfVar132[0x21];
          fVar168 = pfVar132[0x22];
          fVar157 = pfVar132[0x23];
          fVar161 = pfVar132[0x60];
          fVar165 = pfVar132[0x61];
          fVar169 = pfVar132[0x62];
          fVar141 = pfVar132[99];
          fVar145 = pfVar132[0x40];
          fVar149 = pfVar132[0x41];
          fVar153 = pfVar132[0x42];
          fVar9 = pfVar132[0x43];
          fVar11 = pfVar132[0x24];
          fVar12 = pfVar132[0x25];
          fVar13 = pfVar132[0x26];
          fVar14 = pfVar132[0x27];
          fVar18 = pfVar132[0x44];
          fVar19 = pfVar132[0x45];
          fVar20 = pfVar132[0x46];
          fVar21 = pfVar132[0x47];
          fVar22 = pfVar132[100];
          fVar23 = pfVar132[0x65];
          fVar24 = pfVar132[0x66];
          fVar25 = pfVar132[0x67];
          pfVar3 = pfVar132 + 8;
          pfVar17 = pfVar132 + 9;
          pfVar30 = pfVar132 + 10;
          pfVar35 = pfVar132 + 0xb;
          fVar26 = pfVar132[0x28];
          fVar27 = pfVar132[0x29];
          fVar28 = pfVar132[0x2a];
          fVar29 = pfVar132[0x2b];
          fVar31 = pfVar132[0x48];
          fVar32 = pfVar132[0x49];
          fVar33 = pfVar132[0x4a];
          fVar34 = pfVar132[0x4b];
          fVar38 = pfVar132[0x68];
          fVar39 = pfVar132[0x69];
          fVar40 = pfVar132[0x6a];
          fVar41 = pfVar132[0x6b];
          pfVar4 = pfVar132 + 0xc;
          pfVar36 = pfVar132 + 0xd;
          pfVar37 = pfVar132 + 0xe;
          pfVar50 = pfVar132 + 0xf;
          fVar42 = pfVar132[0x2c];
          fVar43 = pfVar132[0x2d];
          fVar44 = pfVar132[0x2e];
          fVar45 = pfVar132[0x2f];
          fVar46 = pfVar132[0x4c];
          fVar47 = pfVar132[0x4d];
          fVar48 = pfVar132[0x4e];
          fVar49 = pfVar132[0x4f];
          fVar51 = pfVar132[0x6c];
          fVar52 = pfVar132[0x6d];
          fVar53 = pfVar132[0x6e];
          fVar54 = pfVar132[0x6f];
          pfVar5 = pfVar132 + 0x10;
          pfVar55 = pfVar132 + 0x11;
          pfVar56 = pfVar132 + 0x12;
          pfVar57 = pfVar132 + 0x13;
          fVar58 = pfVar132[0x30];
          fVar59 = pfVar132[0x31];
          fVar60 = pfVar132[0x32];
          fVar61 = pfVar132[0x33];
          fVar62 = pfVar132[0x50];
          fVar63 = pfVar132[0x51];
          fVar64 = pfVar132[0x52];
          fVar65 = pfVar132[0x53];
          fVar66 = pfVar132[0x70];
          fVar67 = pfVar132[0x71];
          fVar68 = pfVar132[0x72];
          fVar69 = pfVar132[0x73];
          pfVar132 = pfVar132 + 0x80;
          *pfVar133 = (float)((uint)*pfVar133 & unaff_XMM11_Da) +
                      fVar138 * fVar156 + fVar154 * *pfVar2 + fVar155 * *pfVar3 + fVar139 * *pfVar4
                      + fVar140 * *pfVar5 +
                      fVar142 * *pfVar10 + fVar158 * *pfVar6 + fVar159 * *pfVar17 +
                      fVar143 * *pfVar36 + fVar144 * *pfVar55 +
                      fVar146 * *pfVar15 + fVar162 * *pfVar7 + fVar163 * *pfVar30 +
                      fVar147 * *pfVar37 + fVar148 * *pfVar56 +
                      fVar150 * *pfVar16 + fVar166 * *pfVar8 + fVar167 * *pfVar35 +
                      fVar151 * *pfVar50 + fVar152 * *pfVar57;
          pfVar133[1] = (float)((uint)pfVar133[1] & unaff_XMM11_Db) +
                        fVar138 * fVar160 + fVar154 * fVar11 + fVar155 * fVar26 + fVar139 * fVar42 +
                        fVar140 * fVar58 +
                        fVar142 * fVar164 + fVar158 * fVar12 + fVar159 * fVar27 + fVar143 * fVar43 +
                        fVar144 * fVar59 +
                        fVar146 * fVar168 + fVar162 * fVar13 + fVar163 * fVar28 + fVar147 * fVar44 +
                        fVar148 * fVar60 +
                        fVar150 * fVar157 + fVar166 * fVar14 + fVar167 * fVar29 + fVar151 * fVar45 +
                        fVar152 * fVar61;
          pfVar133[2] = (float)((uint)pfVar133[2] & unaff_XMM11_Dc) +
                        fVar138 * fVar145 + fVar154 * fVar18 + fVar155 * fVar31 + fVar139 * fVar46 +
                        fVar140 * fVar62 +
                        fVar142 * fVar149 + fVar158 * fVar19 + fVar159 * fVar32 + fVar143 * fVar47 +
                        fVar144 * fVar63 +
                        fVar146 * fVar153 + fVar162 * fVar20 + fVar163 * fVar33 + fVar147 * fVar48 +
                        fVar148 * fVar64 +
                        fVar150 * fVar9 + fVar166 * fVar21 + fVar167 * fVar34 + fVar151 * fVar49 +
                        fVar152 * fVar65;
          pfVar133[3] = (float)((uint)pfVar133[3] & unaff_XMM11_Dd) +
                        fVar138 * fVar161 + fVar154 * fVar22 + fVar155 * fVar38 + fVar139 * fVar51 +
                        fVar140 * fVar66 +
                        fVar142 * fVar165 + fVar158 * fVar23 + fVar159 * fVar39 + fVar143 * fVar52 +
                        fVar144 * fVar67 +
                        fVar146 * fVar169 + fVar162 * fVar24 + fVar163 * fVar40 + fVar147 * fVar53 +
                        fVar148 * fVar68 +
                        fVar150 * fVar141 + fVar166 * fVar25 + fVar167 * fVar41 + fVar151 * fVar54 +
                        fVar152 * fVar69;
          pfVar133 = pfVar133 + 4;
          uVar136 = unaff_retaddr;
          uVar137 = unaff_retaddr_00;
          in_XMM3_Dc = stack_special_x_8;
          in_XMM3_Dd = stack_special_x_c;
        }
        uVar134 = uVar1 & 3;
        if (uVar134 != 0) {
          pfVar132 = pfVar132 + 8;
          do {
            fVar156 = pfVar132[-4];
            fVar160 = pfVar132[-3];
            fVar164 = pfVar132[-2];
            fVar168 = pfVar132[-1];
            *(float *)(unaff_RBP + 0x7f) = *pfVar133;
            fVar157 = pfVar132[-8];
            fVar161 = pfVar132[-7];
            fVar165 = pfVar132[-6];
            fVar169 = pfVar132[-5];
            uVar130 = *(int32_t *)(unaff_RBP + 0x7f);
            if (in_R11D != 0) {
              uVar130 = unaff_R12D;
            }
            *(int32_t *)(unaff_RBP + 0x7f) = uVar130;
            fVar141 = *pfVar132;
            pfVar4 = pfVar132 + 1;
            pfVar5 = pfVar132 + 2;
            pfVar6 = pfVar132 + 3;
            pfVar2 = pfVar132 + 4;
            pfVar7 = pfVar132 + 5;
            pfVar8 = pfVar132 + 6;
            pfVar10 = pfVar132 + 7;
            pfVar3 = pfVar132 + 8;
            pfVar15 = pfVar132 + 9;
            pfVar16 = pfVar132 + 10;
            pfVar17 = pfVar132 + 0xb;
            pfVar132 = pfVar132 + 0x20;
            *pfVar133 = fVar156 * fVar154 + fVar157 * fVar138 + fVar141 * fVar155 +
                        *pfVar2 * fVar139 + *pfVar3 * fVar140 +
                        fVar160 * fVar158 + fVar161 * fVar142 + *pfVar4 * fVar159 +
                        *pfVar7 * fVar143 + *pfVar15 * fVar144 +
                        fVar164 * fVar162 + fVar165 * fVar146 + *pfVar5 * fVar163 +
                        *pfVar8 * fVar147 + *pfVar16 * fVar148 +
                        fVar168 * fVar166 + fVar169 * fVar150 + *pfVar6 * fVar167 +
                        *pfVar10 * fVar151 + *pfVar17 * fVar152 + *(float *)(unaff_RBP + 0x7f);
            pfVar133 = pfVar133 + 1;
            uVar134 = uVar134 - 1;
          } while (uVar134 != 0);
        }
        break;
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
        fVar138 = *unaff_RBX;
        fVar142 = unaff_RBX[1];
        fVar146 = unaff_RBX[2];
        fVar150 = unaff_RBX[3];
        fVar156 = (float)((uint)unaff_RBX[0x14] & uVar136);
        fVar160 = (float)((uint)unaff_RBX[0x15] & uVar137);
        fVar164 = (float)((uint)unaff_RBX[0x16] & in_XMM3_Dc);
        fVar168 = (float)((uint)unaff_RBX[0x17] & in_XMM3_Dd);
        fVar154 = unaff_RBX[4];
        fVar158 = unaff_RBX[5];
        fVar162 = unaff_RBX[6];
        fVar166 = unaff_RBX[7];
        fVar155 = unaff_RBX[8];
        fVar159 = unaff_RBX[9];
        fVar163 = unaff_RBX[10];
        fVar167 = unaff_RBX[0xb];
        fVar139 = unaff_RBX[0xc];
        fVar143 = unaff_RBX[0xd];
        fVar147 = unaff_RBX[0xe];
        fVar151 = unaff_RBX[0xf];
        fVar140 = unaff_RBX[0x10];
        fVar144 = unaff_RBX[0x11];
        fVar148 = unaff_RBX[0x12];
        fVar152 = unaff_RBX[0x13];
        pfVar132 = unaff_RDI;
        pfVar133 = unaff_R14;
        for (; iVar131 != 0; iVar131 = iVar131 + -1) {
          fVar157 = *pfVar133;
          pfVar7 = pfVar133 + 1;
          pfVar8 = pfVar133 + 2;
          pfVar10 = pfVar133 + 3;
          pfVar2 = pfVar133 + 4;
          pfVar15 = pfVar133 + 5;
          pfVar16 = pfVar133 + 6;
          pfVar17 = pfVar133 + 7;
          fVar161 = pfVar133[0x20];
          fVar165 = pfVar133[0x21];
          fVar169 = pfVar133[0x22];
          fVar141 = pfVar133[0x23];
          fVar145 = pfVar133[0x40];
          fVar149 = pfVar133[0x41];
          fVar153 = pfVar133[0x42];
          fVar9 = pfVar133[0x43];
          fVar11 = pfVar133[0x24];
          fVar12 = pfVar133[0x25];
          fVar13 = pfVar133[0x26];
          fVar14 = pfVar133[0x27];
          fVar18 = pfVar133[0x44];
          fVar19 = pfVar133[0x45];
          fVar20 = pfVar133[0x46];
          fVar21 = pfVar133[0x47];
          fVar22 = pfVar133[0x60];
          fVar23 = pfVar133[0x61];
          fVar24 = pfVar133[0x62];
          fVar25 = pfVar133[99];
          fVar26 = pfVar133[100];
          fVar27 = pfVar133[0x65];
          fVar28 = pfVar133[0x66];
          fVar29 = pfVar133[0x67];
          pfVar3 = pfVar133 + 8;
          pfVar30 = pfVar133 + 9;
          pfVar35 = pfVar133 + 10;
          pfVar36 = pfVar133 + 0xb;
          fVar31 = pfVar133[0x48];
          fVar32 = pfVar133[0x49];
          fVar33 = pfVar133[0x4a];
          fVar34 = pfVar133[0x4b];
          fVar38 = pfVar133[0x28];
          fVar39 = pfVar133[0x29];
          fVar40 = pfVar133[0x2a];
          fVar41 = pfVar133[0x2b];
          fVar42 = pfVar133[0x68];
          fVar43 = pfVar133[0x69];
          fVar44 = pfVar133[0x6a];
          fVar45 = pfVar133[0x6b];
          pfVar4 = pfVar133 + 0xc;
          pfVar37 = pfVar133 + 0xd;
          pfVar50 = pfVar133 + 0xe;
          pfVar55 = pfVar133 + 0xf;
          fVar46 = pfVar133[0x6c];
          fVar47 = pfVar133[0x6d];
          fVar48 = pfVar133[0x6e];
          fVar49 = pfVar133[0x6f];
          fVar51 = pfVar133[0x2c];
          fVar52 = pfVar133[0x2d];
          fVar53 = pfVar133[0x2e];
          fVar54 = pfVar133[0x2f];
          fVar58 = pfVar133[0x4c];
          fVar59 = pfVar133[0x4d];
          fVar60 = pfVar133[0x4e];
          fVar61 = pfVar133[0x4f];
          pfVar5 = pfVar133 + 0x10;
          pfVar56 = pfVar133 + 0x11;
          pfVar57 = pfVar133 + 0x12;
          pfVar70 = pfVar133 + 0x13;
          fVar62 = pfVar133[0x70];
          fVar63 = pfVar133[0x71];
          fVar64 = pfVar133[0x72];
          fVar65 = pfVar133[0x73];
          fVar66 = pfVar133[0x30];
          fVar67 = pfVar133[0x31];
          fVar68 = pfVar133[0x32];
          fVar69 = pfVar133[0x33];
          fVar71 = pfVar133[0x50];
          fVar72 = pfVar133[0x51];
          fVar73 = pfVar133[0x52];
          fVar74 = pfVar133[0x53];
          pfVar6 = pfVar133 + 0x14;
          pfVar75 = pfVar133 + 0x15;
          pfVar76 = pfVar133 + 0x16;
          pfVar77 = pfVar133 + 0x17;
          fVar78 = pfVar133[0x74];
          fVar79 = pfVar133[0x75];
          fVar80 = pfVar133[0x76];
          fVar81 = pfVar133[0x77];
          fVar82 = pfVar133[0x34];
          fVar83 = pfVar133[0x35];
          fVar84 = pfVar133[0x36];
          fVar85 = pfVar133[0x37];
          fVar86 = pfVar133[0x54];
          fVar87 = pfVar133[0x55];
          fVar88 = pfVar133[0x56];
          fVar89 = pfVar133[0x57];
          pfVar133 = pfVar133 + 0x80;
          *pfVar132 = (float)((uint)*pfVar132 & unaff_XMM11_Da) +
                      fVar157 * fVar138 + *pfVar2 * fVar154 + *pfVar3 * fVar155 + *pfVar4 * fVar139
                      + *pfVar5 * fVar140 + *pfVar6 * fVar156 +
                      *pfVar7 * fVar142 + *pfVar15 * fVar158 + *pfVar30 * fVar159 +
                      *pfVar37 * fVar143 + *pfVar56 * fVar144 + *pfVar75 * fVar160 +
                      *pfVar8 * fVar146 + *pfVar16 * fVar162 + *pfVar35 * fVar163 +
                      *pfVar50 * fVar147 + *pfVar57 * fVar148 + *pfVar76 * fVar164 +
                      *pfVar10 * fVar150 + *pfVar17 * fVar166 + *pfVar36 * fVar167 +
                      *pfVar55 * fVar151 + *pfVar70 * fVar152 + *pfVar77 * fVar168;
          pfVar132[1] = (float)((uint)pfVar132[1] & unaff_XMM11_Db) +
                        fVar161 * fVar138 + fVar11 * fVar154 + fVar38 * fVar155 + fVar51 * fVar139 +
                        fVar66 * fVar140 + fVar82 * fVar156 +
                        fVar165 * fVar142 + fVar12 * fVar158 + fVar39 * fVar159 + fVar52 * fVar143 +
                        fVar67 * fVar144 + fVar83 * fVar160 +
                        fVar169 * fVar146 + fVar13 * fVar162 + fVar40 * fVar163 + fVar53 * fVar147 +
                        fVar68 * fVar148 + fVar84 * fVar164 +
                        fVar141 * fVar150 + fVar14 * fVar166 + fVar41 * fVar167 + fVar54 * fVar151 +
                        fVar69 * fVar152 + fVar85 * fVar168;
          pfVar132[2] = (float)((uint)pfVar132[2] & unaff_XMM11_Dc) +
                        fVar145 * fVar138 + fVar18 * fVar154 + fVar31 * fVar155 + fVar58 * fVar139 +
                        fVar71 * fVar140 + fVar86 * fVar156 +
                        fVar149 * fVar142 + fVar19 * fVar158 + fVar32 * fVar159 + fVar59 * fVar143 +
                        fVar72 * fVar144 + fVar87 * fVar160 +
                        fVar153 * fVar146 + fVar20 * fVar162 + fVar33 * fVar163 + fVar60 * fVar147 +
                        fVar73 * fVar148 + fVar88 * fVar164 +
                        fVar9 * fVar150 + fVar21 * fVar166 + fVar34 * fVar167 + fVar61 * fVar151 +
                        fVar74 * fVar152 + fVar89 * fVar168;
          pfVar132[3] = (float)((uint)pfVar132[3] & unaff_XMM11_Dd) +
                        fVar22 * fVar138 + fVar26 * fVar154 + fVar42 * fVar155 + fVar46 * fVar139 +
                        fVar62 * fVar140 + fVar78 * fVar156 +
                        fVar23 * fVar142 + fVar27 * fVar158 + fVar43 * fVar159 + fVar47 * fVar143 +
                        fVar63 * fVar144 + fVar79 * fVar160 +
                        fVar24 * fVar146 + fVar28 * fVar162 + fVar44 * fVar163 + fVar48 * fVar147 +
                        fVar64 * fVar148 + fVar80 * fVar164 +
                        fVar25 * fVar150 + fVar29 * fVar166 + fVar45 * fVar167 + fVar49 * fVar151 +
                        fVar65 * fVar152 + fVar81 * fVar168;
          pfVar132 = pfVar132 + 4;
          uVar136 = unaff_retaddr;
          uVar137 = unaff_retaddr_00;
          in_XMM3_Dc = stack_special_x_8;
          in_XMM3_Dd = stack_special_x_c;
        }
        uVar134 = uVar1 & 3;
        if (uVar134 != 0) {
          pfVar133 = pfVar133 + 8;
          do {
            fVar157 = pfVar133[-4];
            fVar161 = pfVar133[-3];
            fVar165 = pfVar133[-2];
            fVar169 = pfVar133[-1];
            *(float *)(unaff_RBP + 0x7f) = *pfVar132;
            fVar141 = pfVar133[-8];
            fVar145 = pfVar133[-7];
            fVar149 = pfVar133[-6];
            fVar153 = pfVar133[-5];
            uVar130 = *(int32_t *)(unaff_RBP + 0x7f);
            if (in_R11D != 0) {
              uVar130 = unaff_R12D;
            }
            *(int32_t *)(unaff_RBP + 0x7f) = uVar130;
            fVar9 = *pfVar133;
            pfVar5 = pfVar133 + 1;
            pfVar6 = pfVar133 + 2;
            pfVar7 = pfVar133 + 3;
            pfVar2 = pfVar133 + 4;
            pfVar8 = pfVar133 + 5;
            pfVar10 = pfVar133 + 6;
            pfVar15 = pfVar133 + 7;
            pfVar3 = pfVar133 + 8;
            pfVar16 = pfVar133 + 9;
            pfVar17 = pfVar133 + 10;
            pfVar30 = pfVar133 + 0xb;
            pfVar4 = pfVar133 + 0xc;
            pfVar35 = pfVar133 + 0xd;
            pfVar36 = pfVar133 + 0xe;
            pfVar37 = pfVar133 + 0xf;
            pfVar133 = pfVar133 + 0x20;
            *pfVar132 = fVar157 * fVar154 + fVar141 * fVar138 + fVar9 * fVar155 + *pfVar2 * fVar139
                        + *pfVar3 * fVar140 + *pfVar4 * fVar156 +
                        fVar161 * fVar158 + fVar145 * fVar142 + *pfVar5 * fVar159 +
                        *pfVar8 * fVar143 + *pfVar16 * fVar144 + *pfVar35 * fVar160 +
                        fVar165 * fVar162 + fVar149 * fVar146 + *pfVar6 * fVar163 +
                        *pfVar10 * fVar147 + *pfVar17 * fVar148 + *pfVar36 * fVar164 +
                        fVar169 * fVar166 + fVar153 * fVar150 + *pfVar7 * fVar167 +
                        *pfVar15 * fVar151 + *pfVar30 * fVar152 + *pfVar37 * fVar168 +
                        *(float *)(unaff_RBP + 0x7f);
            pfVar132 = pfVar132 + 1;
            uVar134 = uVar134 - 1;
          } while (uVar134 != 0);
        }
        break;
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
        fVar138 = *unaff_RBX;
        fVar142 = unaff_RBX[1];
        fVar146 = unaff_RBX[2];
        fVar150 = unaff_RBX[3];
        fVar157 = (float)((uint)unaff_RBX[0x18] & uVar136);
        fVar161 = (float)((uint)unaff_RBX[0x19] & uVar137);
        fVar165 = (float)((uint)unaff_RBX[0x1a] & in_XMM3_Dc);
        fVar169 = (float)((uint)unaff_RBX[0x1b] & in_XMM3_Dd);
        fVar154 = unaff_RBX[4];
        fVar158 = unaff_RBX[5];
        fVar162 = unaff_RBX[6];
        fVar166 = unaff_RBX[7];
        fVar155 = unaff_RBX[8];
        fVar159 = unaff_RBX[9];
        fVar163 = unaff_RBX[10];
        fVar167 = unaff_RBX[0xb];
        fVar139 = unaff_RBX[0xc];
        fVar143 = unaff_RBX[0xd];
        fVar147 = unaff_RBX[0xe];
        fVar151 = unaff_RBX[0xf];
        fVar140 = unaff_RBX[0x10];
        fVar144 = unaff_RBX[0x11];
        fVar148 = unaff_RBX[0x12];
        fVar152 = unaff_RBX[0x13];
        fVar156 = unaff_RBX[0x14];
        fVar160 = unaff_RBX[0x15];
        fVar164 = unaff_RBX[0x16];
        fVar168 = unaff_RBX[0x17];
        pfVar132 = unaff_RDI;
        pfVar133 = unaff_R14;
        for (; iVar131 != 0; iVar131 = iVar131 + -1) {
          fVar141 = *pfVar133;
          pfVar8 = pfVar133 + 1;
          pfVar10 = pfVar133 + 2;
          pfVar15 = pfVar133 + 3;
          pfVar2 = pfVar133 + 4;
          pfVar16 = pfVar133 + 5;
          pfVar17 = pfVar133 + 6;
          pfVar30 = pfVar133 + 7;
          fVar145 = pfVar133[0x60];
          fVar149 = pfVar133[0x61];
          fVar153 = pfVar133[0x62];
          fVar9 = pfVar133[99];
          fVar11 = pfVar133[100];
          fVar12 = pfVar133[0x65];
          fVar13 = pfVar133[0x66];
          fVar14 = pfVar133[0x67];
          fVar18 = pfVar133[0x20];
          fVar19 = pfVar133[0x21];
          fVar20 = pfVar133[0x22];
          fVar21 = pfVar133[0x23];
          fVar22 = pfVar133[0x40];
          fVar23 = pfVar133[0x41];
          fVar24 = pfVar133[0x42];
          fVar25 = pfVar133[0x43];
          fVar26 = pfVar133[0x24];
          fVar27 = pfVar133[0x25];
          fVar28 = pfVar133[0x26];
          fVar29 = pfVar133[0x27];
          fVar31 = pfVar133[0x44];
          fVar32 = pfVar133[0x45];
          fVar33 = pfVar133[0x46];
          fVar34 = pfVar133[0x47];
          pfVar3 = pfVar133 + 8;
          pfVar35 = pfVar133 + 9;
          pfVar36 = pfVar133 + 10;
          pfVar37 = pfVar133 + 0xb;
          fVar38 = pfVar133[0x68];
          fVar39 = pfVar133[0x69];
          fVar40 = pfVar133[0x6a];
          fVar41 = pfVar133[0x6b];
          fVar42 = pfVar133[0x28];
          fVar43 = pfVar133[0x29];
          fVar44 = pfVar133[0x2a];
          fVar45 = pfVar133[0x2b];
          fVar46 = pfVar133[0x48];
          fVar47 = pfVar133[0x49];
          fVar48 = pfVar133[0x4a];
          fVar49 = pfVar133[0x4b];
          fVar51 = pfVar133[0x6c];
          fVar52 = pfVar133[0x6d];
          fVar53 = pfVar133[0x6e];
          fVar54 = pfVar133[0x6f];
          pfVar4 = pfVar133 + 0xc;
          pfVar50 = pfVar133 + 0xd;
          pfVar55 = pfVar133 + 0xe;
          pfVar56 = pfVar133 + 0xf;
          fVar58 = pfVar133[0x2c];
          fVar59 = pfVar133[0x2d];
          fVar60 = pfVar133[0x2e];
          fVar61 = pfVar133[0x2f];
          fVar62 = pfVar133[0x4c];
          fVar63 = pfVar133[0x4d];
          fVar64 = pfVar133[0x4e];
          fVar65 = pfVar133[0x4f];
          fVar66 = pfVar133[0x70];
          fVar67 = pfVar133[0x71];
          fVar68 = pfVar133[0x72];
          fVar69 = pfVar133[0x73];
          pfVar5 = pfVar133 + 0x10;
          pfVar57 = pfVar133 + 0x11;
          pfVar70 = pfVar133 + 0x12;
          pfVar75 = pfVar133 + 0x13;
          fVar71 = pfVar133[0x30];
          fVar72 = pfVar133[0x31];
          fVar73 = pfVar133[0x32];
          fVar74 = pfVar133[0x33];
          fVar78 = pfVar133[0x50];
          fVar79 = pfVar133[0x51];
          fVar80 = pfVar133[0x52];
          fVar81 = pfVar133[0x53];
          fVar82 = pfVar133[0x74];
          fVar83 = pfVar133[0x75];
          fVar84 = pfVar133[0x76];
          fVar85 = pfVar133[0x77];
          pfVar6 = pfVar133 + 0x14;
          pfVar76 = pfVar133 + 0x15;
          pfVar77 = pfVar133 + 0x16;
          pfVar90 = pfVar133 + 0x17;
          fVar86 = pfVar133[0x34];
          fVar87 = pfVar133[0x35];
          fVar88 = pfVar133[0x36];
          fVar89 = pfVar133[0x37];
          fVar91 = pfVar133[0x54];
          fVar92 = pfVar133[0x55];
          fVar93 = pfVar133[0x56];
          fVar94 = pfVar133[0x57];
          fVar95 = pfVar133[0x78];
          fVar96 = pfVar133[0x79];
          fVar97 = pfVar133[0x7a];
          fVar98 = pfVar133[0x7b];
          pfVar7 = pfVar133 + 0x18;
          pfVar99 = pfVar133 + 0x19;
          pfVar100 = pfVar133 + 0x1a;
          pfVar101 = pfVar133 + 0x1b;
          fVar102 = pfVar133[0x38];
          fVar103 = pfVar133[0x39];
          fVar104 = pfVar133[0x3a];
          fVar105 = pfVar133[0x3b];
          fVar106 = pfVar133[0x58];
          fVar107 = pfVar133[0x59];
          fVar108 = pfVar133[0x5a];
          fVar109 = pfVar133[0x5b];
          pfVar133 = pfVar133 + 0x80;
          *pfVar132 = (float)((uint)*pfVar132 & unaff_XMM11_Da) +
                      fVar141 * fVar138 + *pfVar2 * fVar154 + *pfVar3 * fVar155 + *pfVar4 * fVar139
                      + *pfVar5 * fVar140 + *pfVar6 * fVar156 + *pfVar7 * fVar157 +
                      *pfVar8 * fVar142 + *pfVar16 * fVar158 + *pfVar35 * fVar159 +
                      *pfVar50 * fVar143 + *pfVar57 * fVar144 + *pfVar76 * fVar160 +
                      *pfVar99 * fVar161 +
                      *pfVar10 * fVar146 + *pfVar17 * fVar162 + *pfVar36 * fVar163 +
                      *pfVar55 * fVar147 + *pfVar70 * fVar148 + *pfVar77 * fVar164 +
                      *pfVar100 * fVar165 +
                      *pfVar15 * fVar150 + *pfVar30 * fVar166 + *pfVar37 * fVar167 +
                      *pfVar56 * fVar151 + *pfVar75 * fVar152 + *pfVar90 * fVar168 +
                      *pfVar101 * fVar169;
          pfVar132[1] = (float)((uint)pfVar132[1] & unaff_XMM11_Db) +
                        fVar18 * fVar138 + fVar26 * fVar154 + fVar42 * fVar155 + fVar58 * fVar139 +
                        fVar71 * fVar140 + fVar86 * fVar156 + fVar102 * fVar157 +
                        fVar19 * fVar142 + fVar27 * fVar158 + fVar43 * fVar159 + fVar59 * fVar143 +
                        fVar72 * fVar144 + fVar87 * fVar160 + fVar103 * fVar161 +
                        fVar20 * fVar146 + fVar28 * fVar162 + fVar44 * fVar163 + fVar60 * fVar147 +
                        fVar73 * fVar148 + fVar88 * fVar164 + fVar104 * fVar165 +
                        fVar21 * fVar150 + fVar29 * fVar166 + fVar45 * fVar167 + fVar61 * fVar151 +
                        fVar74 * fVar152 + fVar89 * fVar168 + fVar105 * fVar169;
          pfVar132[2] = (float)((uint)pfVar132[2] & unaff_XMM11_Dc) +
                        fVar22 * fVar138 + fVar31 * fVar154 + fVar46 * fVar155 + fVar62 * fVar139 +
                        fVar78 * fVar140 + fVar91 * fVar156 + fVar106 * fVar157 +
                        fVar23 * fVar142 + fVar32 * fVar158 + fVar47 * fVar159 + fVar63 * fVar143 +
                        fVar79 * fVar144 + fVar92 * fVar160 + fVar107 * fVar161 +
                        fVar24 * fVar146 + fVar33 * fVar162 + fVar48 * fVar163 + fVar64 * fVar147 +
                        fVar80 * fVar148 + fVar93 * fVar164 + fVar108 * fVar165 +
                        fVar25 * fVar150 + fVar34 * fVar166 + fVar49 * fVar167 + fVar65 * fVar151 +
                        fVar81 * fVar152 + fVar94 * fVar168 + fVar109 * fVar169;
          pfVar132[3] = (float)((uint)pfVar132[3] & unaff_XMM11_Dd) +
                        fVar145 * fVar138 + fVar11 * fVar154 + fVar38 * fVar155 + fVar51 * fVar139 +
                        fVar66 * fVar140 + fVar82 * fVar156 + fVar95 * fVar157 +
                        fVar149 * fVar142 + fVar12 * fVar158 + fVar39 * fVar159 + fVar52 * fVar143 +
                        fVar67 * fVar144 + fVar83 * fVar160 + fVar96 * fVar161 +
                        fVar153 * fVar146 + fVar13 * fVar162 + fVar40 * fVar163 + fVar53 * fVar147 +
                        fVar68 * fVar148 + fVar84 * fVar164 + fVar97 * fVar165 +
                        fVar9 * fVar150 + fVar14 * fVar166 + fVar41 * fVar167 + fVar54 * fVar151 +
                        fVar69 * fVar152 + fVar85 * fVar168 + fVar98 * fVar169;
          pfVar132 = pfVar132 + 4;
          uVar136 = unaff_retaddr;
          uVar137 = unaff_retaddr_00;
          in_XMM3_Dc = stack_special_x_8;
          in_XMM3_Dd = stack_special_x_c;
        }
        uVar134 = uVar1 & 3;
        if (uVar134 != 0) {
          pfVar133 = pfVar133 + 8;
          do {
            fVar141 = pfVar133[-4];
            fVar145 = pfVar133[-3];
            fVar149 = pfVar133[-2];
            fVar153 = pfVar133[-1];
            *(float *)(unaff_RBP + 0x7f) = *pfVar132;
            fVar9 = pfVar133[-8];
            fVar11 = pfVar133[-7];
            fVar12 = pfVar133[-6];
            fVar13 = pfVar133[-5];
            uVar130 = *(int32_t *)(unaff_RBP + 0x7f);
            if (in_R11D != 0) {
              uVar130 = unaff_R12D;
            }
            *(int32_t *)(unaff_RBP + 0x7f) = uVar130;
            fVar14 = *pfVar133;
            pfVar6 = pfVar133 + 1;
            pfVar7 = pfVar133 + 2;
            pfVar8 = pfVar133 + 3;
            pfVar2 = pfVar133 + 4;
            pfVar10 = pfVar133 + 5;
            pfVar15 = pfVar133 + 6;
            pfVar16 = pfVar133 + 7;
            pfVar3 = pfVar133 + 8;
            pfVar17 = pfVar133 + 9;
            pfVar30 = pfVar133 + 10;
            pfVar35 = pfVar133 + 0xb;
            pfVar4 = pfVar133 + 0xc;
            pfVar36 = pfVar133 + 0xd;
            pfVar37 = pfVar133 + 0xe;
            pfVar50 = pfVar133 + 0xf;
            pfVar5 = pfVar133 + 0x10;
            pfVar55 = pfVar133 + 0x11;
            pfVar56 = pfVar133 + 0x12;
            pfVar57 = pfVar133 + 0x13;
            pfVar133 = pfVar133 + 0x20;
            *pfVar132 = fVar141 * fVar154 + fVar9 * fVar138 + fVar14 * fVar155 + *pfVar2 * fVar139 +
                        *pfVar3 * fVar140 + *pfVar4 * fVar156 + *pfVar5 * fVar157 +
                        fVar145 * fVar158 + fVar11 * fVar142 + *pfVar6 * fVar159 +
                        *pfVar10 * fVar143 + *pfVar17 * fVar144 + *pfVar36 * fVar160 +
                        *pfVar55 * fVar161 +
                        fVar149 * fVar162 + fVar12 * fVar146 + *pfVar7 * fVar163 +
                        *pfVar15 * fVar147 + *pfVar30 * fVar148 + *pfVar37 * fVar164 +
                        *pfVar56 * fVar165 +
                        fVar153 * fVar166 + fVar13 * fVar150 + *pfVar8 * fVar167 +
                        *pfVar16 * fVar151 + *pfVar35 * fVar152 + *pfVar50 * fVar168 +
                        *pfVar57 * fVar169 + *(float *)(unaff_RBP + 0x7f);
            pfVar132 = pfVar132 + 1;
            uVar134 = uVar134 - 1;
          } while (uVar134 != 0);
        }
        break;
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
        fVar138 = *unaff_RBX;
        fVar142 = unaff_RBX[1];
        fVar146 = unaff_RBX[2];
        fVar150 = unaff_RBX[3];
        fVar141 = (float)((uint)unaff_RBX[0x1c] & uVar136);
        fVar145 = (float)((uint)unaff_RBX[0x1d] & uVar137);
        fVar149 = (float)((uint)unaff_RBX[0x1e] & in_XMM3_Dc);
        fVar153 = (float)((uint)unaff_RBX[0x1f] & in_XMM3_Dd);
        fVar154 = unaff_RBX[4];
        fVar158 = unaff_RBX[5];
        fVar162 = unaff_RBX[6];
        fVar166 = unaff_RBX[7];
        fVar155 = unaff_RBX[8];
        fVar159 = unaff_RBX[9];
        fVar163 = unaff_RBX[10];
        fVar167 = unaff_RBX[0xb];
        fVar139 = unaff_RBX[0xc];
        fVar143 = unaff_RBX[0xd];
        fVar147 = unaff_RBX[0xe];
        fVar151 = unaff_RBX[0xf];
        fVar140 = unaff_RBX[0x10];
        fVar144 = unaff_RBX[0x11];
        fVar148 = unaff_RBX[0x12];
        fVar152 = unaff_RBX[0x13];
        fVar156 = unaff_RBX[0x14];
        fVar160 = unaff_RBX[0x15];
        fVar164 = unaff_RBX[0x16];
        fVar168 = unaff_RBX[0x17];
        fVar157 = unaff_RBX[0x18];
        fVar161 = unaff_RBX[0x19];
        fVar165 = unaff_RBX[0x1a];
        fVar169 = unaff_RBX[0x1b];
        pfVar132 = unaff_RDI;
        pfVar133 = unaff_R14;
        for (; iVar131 != 0; iVar131 = iVar131 + -1) {
          pfVar2 = pfVar133 + 4;
          pfVar10 = pfVar133 + 5;
          pfVar15 = pfVar133 + 6;
          pfVar16 = pfVar133 + 7;
          fVar9 = *pfVar133;
          pfVar17 = pfVar133 + 1;
          pfVar30 = pfVar133 + 2;
          pfVar35 = pfVar133 + 3;
          fVar11 = pfVar133[0x20];
          fVar12 = pfVar133[0x21];
          fVar13 = pfVar133[0x22];
          fVar14 = pfVar133[0x23];
          fVar18 = pfVar133[0x40];
          fVar19 = pfVar133[0x41];
          fVar20 = pfVar133[0x42];
          fVar21 = pfVar133[0x43];
          fVar22 = pfVar133[0x60];
          fVar23 = pfVar133[0x61];
          fVar24 = pfVar133[0x62];
          fVar25 = pfVar133[99];
          fVar26 = pfVar133[0x24];
          fVar27 = pfVar133[0x25];
          fVar28 = pfVar133[0x26];
          fVar29 = pfVar133[0x27];
          fVar31 = pfVar133[0x44];
          fVar32 = pfVar133[0x45];
          fVar33 = pfVar133[0x46];
          fVar34 = pfVar133[0x47];
          fVar38 = pfVar133[100];
          fVar39 = pfVar133[0x65];
          fVar40 = pfVar133[0x66];
          fVar41 = pfVar133[0x67];
          pfVar3 = pfVar133 + 8;
          pfVar36 = pfVar133 + 9;
          pfVar37 = pfVar133 + 10;
          pfVar50 = pfVar133 + 0xb;
          fVar42 = pfVar133[0x28];
          fVar43 = pfVar133[0x29];
          fVar44 = pfVar133[0x2a];
          fVar45 = pfVar133[0x2b];
          fVar46 = pfVar133[0x48];
          fVar47 = pfVar133[0x49];
          fVar48 = pfVar133[0x4a];
          fVar49 = pfVar133[0x4b];
          fVar51 = pfVar133[0x68];
          fVar52 = pfVar133[0x69];
          fVar53 = pfVar133[0x6a];
          fVar54 = pfVar133[0x6b];
          pfVar4 = pfVar133 + 0xc;
          pfVar55 = pfVar133 + 0xd;
          pfVar56 = pfVar133 + 0xe;
          pfVar57 = pfVar133 + 0xf;
          fVar58 = pfVar133[0x2c];
          fVar59 = pfVar133[0x2d];
          fVar60 = pfVar133[0x2e];
          fVar61 = pfVar133[0x2f];
          fVar62 = pfVar133[0x4c];
          fVar63 = pfVar133[0x4d];
          fVar64 = pfVar133[0x4e];
          fVar65 = pfVar133[0x4f];
          fVar66 = pfVar133[0x6c];
          fVar67 = pfVar133[0x6d];
          fVar68 = pfVar133[0x6e];
          fVar69 = pfVar133[0x6f];
          pfVar5 = pfVar133 + 0x10;
          pfVar70 = pfVar133 + 0x11;
          pfVar75 = pfVar133 + 0x12;
          pfVar76 = pfVar133 + 0x13;
          fVar71 = pfVar133[0x30];
          fVar72 = pfVar133[0x31];
          fVar73 = pfVar133[0x32];
          fVar74 = pfVar133[0x33];
          fVar78 = pfVar133[0x50];
          fVar79 = pfVar133[0x51];
          fVar80 = pfVar133[0x52];
          fVar81 = pfVar133[0x53];
          fVar82 = pfVar133[0x70];
          fVar83 = pfVar133[0x71];
          fVar84 = pfVar133[0x72];
          fVar85 = pfVar133[0x73];
          pfVar6 = pfVar133 + 0x14;
          pfVar77 = pfVar133 + 0x15;
          pfVar90 = pfVar133 + 0x16;
          pfVar99 = pfVar133 + 0x17;
          fVar86 = pfVar133[0x34];
          fVar87 = pfVar133[0x35];
          fVar88 = pfVar133[0x36];
          fVar89 = pfVar133[0x37];
          fVar91 = pfVar133[0x54];
          fVar92 = pfVar133[0x55];
          fVar93 = pfVar133[0x56];
          fVar94 = pfVar133[0x57];
          fVar95 = pfVar133[0x74];
          fVar96 = pfVar133[0x75];
          fVar97 = pfVar133[0x76];
          fVar98 = pfVar133[0x77];
          pfVar7 = pfVar133 + 0x18;
          pfVar100 = pfVar133 + 0x19;
          pfVar101 = pfVar133 + 0x1a;
          pfVar110 = pfVar133 + 0x1b;
          fVar102 = pfVar133[0x38];
          fVar103 = pfVar133[0x39];
          fVar104 = pfVar133[0x3a];
          fVar105 = pfVar133[0x3b];
          fVar106 = pfVar133[0x58];
          fVar107 = pfVar133[0x59];
          fVar108 = pfVar133[0x5a];
          fVar109 = pfVar133[0x5b];
          fVar111 = pfVar133[0x78];
          fVar112 = pfVar133[0x79];
          fVar113 = pfVar133[0x7a];
          fVar114 = pfVar133[0x7b];
          pfVar8 = pfVar133 + 0x1c;
          pfVar115 = pfVar133 + 0x1d;
          pfVar116 = pfVar133 + 0x1e;
          pfVar117 = pfVar133 + 0x1f;
          fVar118 = pfVar133[0x3c];
          fVar119 = pfVar133[0x3d];
          fVar120 = pfVar133[0x3e];
          fVar121 = pfVar133[0x3f];
          fVar122 = pfVar133[0x5c];
          fVar123 = pfVar133[0x5d];
          fVar124 = pfVar133[0x5e];
          fVar125 = pfVar133[0x5f];
          fVar126 = pfVar133[0x7c];
          fVar127 = pfVar133[0x7d];
          fVar128 = pfVar133[0x7e];
          fVar129 = pfVar133[0x7f];
          pfVar133 = pfVar133 + 0x80;
          *pfVar132 = (float)((uint)*pfVar132 & unaff_XMM11_Da) +
                      fVar138 * fVar9 + fVar154 * *pfVar2 + fVar155 * *pfVar3 + fVar139 * *pfVar4 +
                      fVar140 * *pfVar5 + fVar156 * *pfVar6 + fVar157 * *pfVar7 + fVar141 * *pfVar8
                      + fVar142 * *pfVar17 + fVar158 * *pfVar10 + fVar159 * *pfVar36 +
                        fVar143 * *pfVar55 + fVar144 * *pfVar70 + fVar160 * *pfVar77 +
                        fVar161 * *pfVar100 + fVar145 * *pfVar115 +
                      fVar146 * *pfVar30 + fVar162 * *pfVar15 + fVar163 * *pfVar37 +
                      fVar147 * *pfVar56 + fVar148 * *pfVar75 + fVar164 * *pfVar90 +
                      fVar165 * *pfVar101 + fVar149 * *pfVar116 +
                      fVar150 * *pfVar35 + fVar166 * *pfVar16 + fVar167 * *pfVar50 +
                      fVar151 * *pfVar57 + fVar152 * *pfVar76 + fVar168 * *pfVar99 +
                      fVar169 * *pfVar110 + fVar153 * *pfVar117;
          pfVar132[1] = (float)((uint)pfVar132[1] & unaff_XMM11_Db) +
                        fVar138 * fVar11 + fVar154 * fVar26 + fVar155 * fVar42 + fVar139 * fVar58 +
                        fVar140 * fVar71 + fVar156 * fVar86 + fVar157 * fVar102 + fVar141 * fVar118
                        + fVar142 * fVar12 + fVar158 * fVar27 + fVar159 * fVar43 + fVar143 * fVar59
                          + fVar144 * fVar72 + fVar160 * fVar87 + fVar161 * fVar103 +
                          fVar145 * fVar119 +
                        fVar146 * fVar13 + fVar162 * fVar28 + fVar163 * fVar44 + fVar147 * fVar60 +
                        fVar148 * fVar73 + fVar164 * fVar88 + fVar165 * fVar104 + fVar149 * fVar120
                        + fVar150 * fVar14 + fVar166 * fVar29 + fVar167 * fVar45 + fVar151 * fVar61
                          + fVar152 * fVar74 + fVar168 * fVar89 + fVar169 * fVar105 +
                          fVar153 * fVar121;
          pfVar132[2] = (float)((uint)pfVar132[2] & unaff_XMM11_Dc) +
                        fVar138 * fVar18 + fVar154 * fVar31 + fVar155 * fVar46 + fVar139 * fVar62 +
                        fVar140 * fVar78 + fVar156 * fVar91 + fVar157 * fVar106 + fVar141 * fVar122
                        + fVar142 * fVar19 + fVar158 * fVar32 + fVar159 * fVar47 + fVar143 * fVar63
                          + fVar144 * fVar79 + fVar160 * fVar92 + fVar161 * fVar107 +
                          fVar145 * fVar123 +
                        fVar146 * fVar20 + fVar162 * fVar33 + fVar163 * fVar48 + fVar147 * fVar64 +
                        fVar148 * fVar80 + fVar164 * fVar93 + fVar165 * fVar108 + fVar149 * fVar124
                        + fVar150 * fVar21 + fVar166 * fVar34 + fVar167 * fVar49 + fVar151 * fVar65
                          + fVar152 * fVar81 + fVar168 * fVar94 + fVar169 * fVar109 +
                          fVar153 * fVar125;
          pfVar132[3] = (float)((uint)pfVar132[3] & unaff_XMM11_Dd) +
                        fVar138 * fVar22 + fVar154 * fVar38 + fVar155 * fVar51 + fVar139 * fVar66 +
                        fVar140 * fVar82 + fVar156 * fVar95 + fVar157 * fVar111 + fVar141 * fVar126
                        + fVar142 * fVar23 + fVar158 * fVar39 + fVar159 * fVar52 + fVar143 * fVar67
                          + fVar144 * fVar83 + fVar160 * fVar96 + fVar161 * fVar112 +
                          fVar145 * fVar127 +
                        fVar146 * fVar24 + fVar162 * fVar40 + fVar163 * fVar53 + fVar147 * fVar68 +
                        fVar148 * fVar84 + fVar164 * fVar97 + fVar165 * fVar113 + fVar149 * fVar128
                        + fVar150 * fVar25 + fVar166 * fVar41 + fVar167 * fVar54 + fVar151 * fVar69
                          + fVar152 * fVar85 + fVar168 * fVar98 + fVar169 * fVar114 +
                          fVar153 * fVar129;
          pfVar132 = pfVar132 + 4;
          uVar136 = unaff_retaddr;
          uVar137 = unaff_retaddr_00;
          in_XMM3_Dc = stack_special_x_8;
          in_XMM3_Dd = stack_special_x_c;
        }
        uVar134 = uVar1 & 3;
        if (uVar134 != 0) {
          pfVar133 = pfVar133 + 8;
          do {
            fVar9 = pfVar133[-4];
            fVar11 = pfVar133[-3];
            fVar12 = pfVar133[-2];
            fVar13 = pfVar133[-1];
            *(float *)(unaff_RBP + 0x7f) = *pfVar132;
            fVar14 = pfVar133[-8];
            fVar18 = pfVar133[-7];
            fVar19 = pfVar133[-6];
            fVar20 = pfVar133[-5];
            uVar130 = *(int32_t *)(unaff_RBP + 0x7f);
            if (in_R11D != 0) {
              uVar130 = unaff_R12D;
            }
            *(int32_t *)(unaff_RBP + 0x7f) = uVar130;
            fVar21 = *pfVar133;
            pfVar7 = pfVar133 + 1;
            pfVar8 = pfVar133 + 2;
            pfVar10 = pfVar133 + 3;
            pfVar2 = pfVar133 + 4;
            pfVar15 = pfVar133 + 5;
            pfVar16 = pfVar133 + 6;
            pfVar17 = pfVar133 + 7;
            pfVar3 = pfVar133 + 8;
            pfVar30 = pfVar133 + 9;
            pfVar35 = pfVar133 + 10;
            pfVar36 = pfVar133 + 0xb;
            pfVar4 = pfVar133 + 0xc;
            pfVar37 = pfVar133 + 0xd;
            pfVar50 = pfVar133 + 0xe;
            pfVar55 = pfVar133 + 0xf;
            pfVar5 = pfVar133 + 0x10;
            pfVar56 = pfVar133 + 0x11;
            pfVar57 = pfVar133 + 0x12;
            pfVar70 = pfVar133 + 0x13;
            pfVar6 = pfVar133 + 0x14;
            pfVar75 = pfVar133 + 0x15;
            pfVar76 = pfVar133 + 0x16;
            pfVar77 = pfVar133 + 0x17;
            pfVar133 = pfVar133 + 0x20;
            *pfVar132 = fVar9 * fVar154 + fVar14 * fVar138 + fVar21 * fVar155 + *pfVar2 * fVar139 +
                        *pfVar3 * fVar140 + *pfVar4 * fVar156 + *pfVar5 * fVar157 +
                        *pfVar6 * fVar141 +
                        fVar11 * fVar158 + fVar18 * fVar142 + *pfVar7 * fVar159 + *pfVar15 * fVar143
                        + *pfVar30 * fVar144 + *pfVar37 * fVar160 + *pfVar56 * fVar161 +
                        *pfVar75 * fVar145 +
                        fVar12 * fVar162 + fVar19 * fVar146 + *pfVar8 * fVar163 + *pfVar16 * fVar147
                        + *pfVar35 * fVar148 + *pfVar50 * fVar164 + *pfVar57 * fVar165 +
                        *pfVar76 * fVar149 +
                        fVar13 * fVar166 + fVar20 * fVar150 + *pfVar10 * fVar167 +
                        *pfVar17 * fVar151 + *pfVar36 * fVar152 + *pfVar55 * fVar168 +
                        *pfVar70 * fVar169 + *pfVar77 * fVar153 + *(float *)(unaff_RBP + 0x7f);
            pfVar132 = pfVar132 + 1;
            uVar134 = uVar134 - 1;
          } while (uVar134 != 0);
        }
      }
      unaff_RDI = unaff_RDI + (int)uVar1;
    }
    unaff_RBX = unaff_RBX + in_R9;
    uVar135 = uVar135 - 1;
  } while (uVar135 != 0);
  return;
}