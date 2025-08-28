#include "TaleWorlds.Native.Split.h"
// 03_rendering_part290.c - 6 个函数
// 函数: void UISystem_23639(uint64_t param_1,uint64_t param_2,int64_t param_3,int param_4)
void UISystem_23639(uint64_t param_1,uint64_t param_2,int64_t param_3,int param_4)
{
  byte *pbVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t lVar3;
  int64_t in_R10;
  int64_t in_R11;
  lVar2 = (int64_t)unaff_EBX;
  if (lVar2 < param_4) {
    lVar3 = param_4 - lVar2;
    pbVar1 = (byte *)(lVar2 + param_3);
    do {
      pbVar1[in_R11 - param_3] =
           (byte)(*pbVar1 + 2 + (uint)pbVar1[in_R10 - param_3] + (uint)pbVar1[in_R10 - param_3] * 2
                 >> 2);
      lVar3 = lVar3 + -1;
      pbVar1 = pbVar1 + 1;
    } while (lVar3 != 0);
  }
  return;
}
byte * UISystem_23690(byte *param_1,byte *param_2,uint64_t param_3,int param_4)
{
  int64_t lVar1;
  int iVar2;
  byte bVar3;
  int64_t lVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int64_t lVar8;
  bVar3 = *param_2;
  *param_1 = bVar3;
  if (param_4 == 1) {
    param_1[1] = bVar3;
    return param_1;
  }
  iVar5 = 1;
  lVar4 = (int64_t)param_4;
  param_1[1] = (byte)(param_2[1] + 2 + (uint)*param_2 + (uint)*param_2 * 2 >> 2);
  lVar1 = lVar4 + -1;
  if (1 < lVar1) {
    lVar8 = lVar4 + -2;
    iVar5 = (int)lVar8 + 1;
    pbVar6 = param_1 + 2;
    pbVar7 = param_2;
    do {
      iVar2 = (uint)pbVar7[1] * 3 + 2;
      *pbVar6 = (byte)((uint)*pbVar7 + iVar2 >> 2);
      pbVar6[1] = (byte)((uint)pbVar7[2] + iVar2 >> 2);
      lVar8 = lVar8 + -1;
      pbVar6 = pbVar6 + 2;
      pbVar7 = pbVar7 + 1;
    } while (lVar8 != 0);
  }
  param_1[iVar5 * 2] =
       (byte)(param_2[lVar1] + 2 + (uint)param_2[lVar4 + -2] + (uint)param_2[lVar4 + -2] * 2 >> 2);
  param_1[(int64_t)(iVar5 * 2) + 1] = param_2[lVar1];
  return param_1;
}
int8_t * UISystem_23760(int8_t *param_1,byte *param_2,byte *param_3,int param_4)
{
  byte *pbVar1;
  byte bVar2;
  int8_t uVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  byte *pbVar7;
  int8_t *puVar8;
  iVar4 = (uint)*param_2 + (uint)*param_2 * 2 + (uint)*param_3;
  if (param_4 == 1) {
    uVar3 = (int8_t)(iVar4 + 2U >> 2);
    param_1[1] = uVar3;
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = (char)(iVar4 + 2U >> 2);
  if (1 < (int64_t)param_4) {
    pbVar7 = param_3 + 1;
    lVar6 = (int64_t)param_4 + -1;
    puVar8 = param_1 + 2;
    iVar5 = iVar4;
    do {
      bVar2 = *pbVar7;
      pbVar1 = pbVar7 + ((int64_t)param_2 - (int64_t)param_3);
      pbVar7 = pbVar7 + 1;
      iVar4 = (uint)*pbVar1 + (uint)*pbVar1 * 2 + (uint)bVar2;
      puVar8[-1] = (char)((uint)(iVar4 + (iVar5 + 4) * 2 + iVar5) >> 4);
      *puVar8 = (char)((uint)(iVar5 + (iVar4 + 4) * 2 + iVar4) >> 4);
      lVar6 = lVar6 + -1;
      puVar8 = puVar8 + 2;
      iVar5 = iVar4;
    } while (lVar6 != 0);
  }
  param_1[(int64_t)(param_4 * 2) + -1] = (char)(iVar4 + 2U >> 2);
  return param_1;
}
// WARNING: Removing unreachable block (ram,0x0001804238f3)
char * UISystem_23820(char *param_1,byte *param_2,uint64_t *param_3,int param_4)
{
  byte *pbVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  byte bVar4;
  int8_t auVar5 [15];
  int8_t auVar6 [15];
  int8_t auVar7 [15];
  int8_t auVar8 [15];
  int8_t auVar9 [15];
  int8_t auVar10 [15];
  int8_t auVar11 [15];
  int8_t auVar12 [15];
  int8_t auVar13 [15];
  int8_t auVar14 [15];
  int8_t auVar15 [15];
  int8_t auVar16 [15];
  int8_t auVar17 [15];
  int8_t auVar18 [15];
  unkuint9 Var19;
  int8_t auVar20 [11];
  int8_t auVar21 [13];
  int8_t auVar22 [15];
  unkuint9 Var23;
  int8_t auVar24 [11];
  int8_t auVar25 [15];
  int8_t auVar26 [15];
  int8_t auVar27 [15];
  int8_t auVar28 [15];
  char cVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  uint64_t *puVar33;
  int64_t lVar34;
  int iVar35;
  byte *pbVar36;
  uint64_t *puVar37;
  char *pcVar38;
  uint64_t uVar39;
  int64_t lVar40;
  short sVar41;
  ushort uVar42;
  short sVar45;
  ushort uVar46;
  short sVar47;
  ushort uVar48;
  short sVar49;
  ushort uVar50;
  short sVar51;
  ushort uVar52;
  short sVar53;
  ushort uVar54;
  short sVar55;
  ushort uVar56;
  int8_t auVar43 [16];
  int8_t auVar44 [16];
  short sVar57;
  ushort uVar58;
  ushort uVar59;
  ushort uVar60;
  ushort uVar61;
  ushort uVar62;
  ushort uVar63;
  ushort uVar64;
  ushort uVar65;
  ushort uVar66;
  int8_t auVar67 [16];
  iVar35 = 0;
  iVar32 = (uint)*param_2 + (uint)*param_2 * 2 + (uint)(byte)*param_3;
  if (param_4 == 1) {
    cVar29 = (char)(iVar32 + 2U >> 2);
    param_1[1] = cVar29;
    *param_1 = cVar29;
    return param_1;
  }
  uVar30 = param_4 - 1U & 0xfffffff8;
  if (0 < (int)uVar30) {
    lVar34 = (int64_t)param_2 - (int64_t)param_3;
    uVar30 = (uVar30 - 1 >> 3) + 1;
    uVar39 = (uint64_t)uVar30;
    iVar35 = uVar30 * 8;
    puVar33 = param_3;
    puVar37 = param_3 + 1;
    pcVar38 = param_1;
    do {
      uVar2 = *(uint64_t *)(lVar34 + (int64_t)puVar33);
      uVar3 = *puVar33;
      puVar33 = puVar33 + 1;
      auVar6._8_6_ = 0;
      auVar6._0_8_ = uVar2;
      auVar6[0xe] = (char)(uVar2 >> 0x38);
      auVar8._8_4_ = 0;
      auVar8._0_8_ = uVar2;
      auVar8[0xc] = (char)(uVar2 >> 0x30);
      auVar8._13_2_ = auVar6._13_2_;
      auVar10._8_4_ = 0;
      auVar10._0_8_ = uVar2;
      auVar10._12_3_ = auVar8._12_3_;
      auVar12._8_2_ = 0;
      auVar12._0_8_ = uVar2;
      auVar12[10] = (char)(uVar2 >> 0x28);
      auVar12._11_4_ = auVar10._11_4_;
      auVar14._8_2_ = 0;
      auVar14._0_8_ = uVar2;
      auVar14._10_5_ = auVar12._10_5_;
      auVar16[8] = (char)(uVar2 >> 0x20);
      auVar16._0_8_ = uVar2;
      auVar16._9_6_ = auVar14._9_6_;
      auVar18._7_8_ = 0;
      auVar18._0_7_ = auVar16._8_7_;
      Var19 = CONCAT81(SUB158(auVar18 << 0x40,7),(char)(uVar2 >> 0x18));
      auVar25._9_6_ = 0;
      auVar25._0_9_ = Var19;
      auVar20._1_10_ = SUB1510(auVar25 << 0x30,5);
      auVar20[0] = (char)(uVar2 >> 0x10);
      auVar26._11_4_ = 0;
      auVar26._0_11_ = auVar20;
      auVar21._1_12_ = SUB1512(auVar26 << 0x20,3);
      auVar21[0] = (char)(uVar2 >> 8);
      auVar44._0_2_ = CONCAT11(0,(byte)uVar2);
      auVar44._2_13_ = auVar21;
      auVar44[0xf] = 0;
      auVar5._8_6_ = 0;
      auVar5._0_8_ = uVar3;
      auVar5[0xe] = (char)(uVar3 >> 0x38);
      auVar7._8_4_ = 0;
      auVar7._0_8_ = uVar3;
      auVar7[0xc] = (char)(uVar3 >> 0x30);
      auVar7._13_2_ = auVar5._13_2_;
      auVar9._8_4_ = 0;
      auVar9._0_8_ = uVar3;
      auVar9._12_3_ = auVar7._12_3_;
      auVar11._8_2_ = 0;
      auVar11._0_8_ = uVar3;
      auVar11[10] = (char)(uVar3 >> 0x28);
      auVar11._11_4_ = auVar9._11_4_;
      auVar13._8_2_ = 0;
      auVar13._0_8_ = uVar3;
      auVar13._10_5_ = auVar11._10_5_;
      auVar15[8] = (char)(uVar3 >> 0x20);
      auVar15._0_8_ = uVar3;
      auVar15._9_6_ = auVar13._9_6_;
      auVar22._7_8_ = 0;
      auVar22._0_7_ = auVar15._8_7_;
      Var23 = CONCAT81(SUB158(auVar22 << 0x40,7),(char)(uVar3 >> 0x18));
      auVar27._9_6_ = 0;
      auVar27._0_9_ = Var23;
      auVar24._1_10_ = SUB1510(auVar27 << 0x30,5);
      auVar24[0] = (char)(uVar3 >> 0x10);
      auVar28._11_4_ = 0;
      auVar28._0_11_ = auVar24;
      auVar17[2] = (char)(uVar3 >> 8);
      auVar17._0_2_ = (ushort)uVar3;
      auVar17._3_12_ = SUB1512(auVar28 << 0x20,3);
      auVar43 = psllw(auVar44,2);
      auVar67._0_2_ = (((ushort)uVar3 & 0xff) - auVar44._0_2_) + auVar43._0_2_;
      auVar67._2_2_ = (auVar17._2_2_ - auVar21._0_2_) + auVar43._2_2_;
      auVar67._4_2_ = (auVar24._0_2_ - auVar20._0_2_) + auVar43._4_2_;
      auVar67._6_2_ = ((short)Var23 - (short)Var19) + auVar43._6_2_;
      auVar67._8_2_ = (auVar15._8_2_ - auVar16._8_2_) + auVar43._8_2_;
      auVar67._10_2_ = (auVar11._10_2_ - auVar12._10_2_) + auVar43._10_2_;
      auVar67._12_2_ = (auVar7._12_2_ - auVar8._12_2_) + auVar43._12_2_;
      auVar67._14_2_ = ((auVar5._13_2_ >> 8) - (auVar6._13_2_ >> 8)) + auVar43._14_2_;
      auVar44 = psllw(auVar67,2);
      sVar41 = auVar44._0_2_ + 8;
      sVar45 = auVar44._2_2_ + 8;
      sVar47 = auVar44._4_2_ + 8;
      sVar49 = auVar44._6_2_ + 8;
      sVar51 = auVar44._8_2_ + 8;
      sVar53 = auVar44._10_2_ + 8;
      sVar55 = auVar44._12_2_ + 8;
      sVar57 = auVar44._14_2_ + 8;
      uVar42 = (ushort)(((short)iVar32 - auVar67._0_2_) + sVar41) >> 4;
      uVar46 = (ushort)((auVar67._2_2_ - auVar67._0_2_) + sVar41) >> 4;
      uVar48 = (ushort)((auVar67._0_2_ - auVar67._2_2_) + sVar45) >> 4;
      uVar50 = (ushort)((auVar67._4_2_ - auVar67._2_2_) + sVar45) >> 4;
      uVar52 = (ushort)((auVar67._2_2_ - auVar67._4_2_) + sVar47) >> 4;
      uVar54 = (ushort)((auVar67._6_2_ - auVar67._4_2_) + sVar47) >> 4;
      uVar56 = (ushort)((auVar67._4_2_ - auVar67._6_2_) + sVar49) >> 4;
      uVar58 = (ushort)((auVar67._8_2_ - auVar67._6_2_) + sVar49) >> 4;
      uVar59 = (ushort)((auVar67._6_2_ - auVar67._8_2_) + sVar51) >> 4;
      uVar60 = (ushort)((auVar67._10_2_ - auVar67._8_2_) + sVar51) >> 4;
      uVar61 = (ushort)((auVar67._8_2_ - auVar67._10_2_) + sVar53) >> 4;
      uVar62 = (ushort)((auVar67._12_2_ - auVar67._10_2_) + sVar53) >> 4;
      uVar63 = (ushort)((auVar67._10_2_ - auVar67._12_2_) + sVar55) >> 4;
      uVar64 = (ushort)((auVar67._14_2_ - auVar67._12_2_) + sVar55) >> 4;
      uVar65 = (ushort)((auVar67._12_2_ - auVar67._14_2_) + sVar57) >> 4;
      uVar66 = (ushort)((((ushort)*(byte *)(lVar34 + (int64_t)puVar37) +
                          (ushort)*(byte *)(lVar34 + (int64_t)puVar37) * 2 + (ushort)(byte)*puVar37
                         ) - auVar67._14_2_) + sVar57) >> 4;
      *pcVar38 = (uVar42 != 0) * (uVar42 < 0x100) * (char)uVar42 - (0xff < uVar42);
      pcVar38[1] = (uVar46 != 0) * (uVar46 < 0x100) * (char)uVar46 - (0xff < uVar46);
      pcVar38[2] = (uVar48 != 0) * (uVar48 < 0x100) * (char)uVar48 - (0xff < uVar48);
      pcVar38[3] = (uVar50 != 0) * (uVar50 < 0x100) * (char)uVar50 - (0xff < uVar50);
      pcVar38[4] = (uVar52 != 0) * (uVar52 < 0x100) * (char)uVar52 - (0xff < uVar52);
      pcVar38[5] = (uVar54 != 0) * (uVar54 < 0x100) * (char)uVar54 - (0xff < uVar54);
      pcVar38[6] = (uVar56 != 0) * (uVar56 < 0x100) * (char)uVar56 - (0xff < uVar56);
      pcVar38[7] = (uVar58 != 0) * (uVar58 < 0x100) * (char)uVar58 - (0xff < uVar58);
      pcVar38[8] = (uVar59 != 0) * (uVar59 < 0x100) * (char)uVar59 - (0xff < uVar59);
      pcVar38[9] = (uVar60 != 0) * (uVar60 < 0x100) * (char)uVar60 - (0xff < uVar60);
      pcVar38[10] = (uVar61 != 0) * (uVar61 < 0x100) * (char)uVar61 - (0xff < uVar61);
      pcVar38[0xb] = (uVar62 != 0) * (uVar62 < 0x100) * (char)uVar62 - (0xff < uVar62);
      pcVar38[0xc] = (uVar63 != 0) * (uVar63 < 0x100) * (char)uVar63 - (0xff < uVar63);
      pcVar38[0xd] = (uVar64 != 0) * (uVar64 < 0x100) * (char)uVar64 - (0xff < uVar64);
      pcVar38[0xe] = (uVar65 != 0) * (uVar65 < 0x100) * (char)uVar65 - (0xff < uVar65);
      pcVar38[0xf] = (uVar66 != 0) * (uVar66 < 0x100) * (char)uVar66 - (0xff < uVar66);
      bVar4 = *(byte *)(lVar34 + -9 + (int64_t)(puVar37 + 1));
      iVar32 = (uint)bVar4 + (uint)bVar4 * 2 + (uint)*(byte *)((int64_t)puVar37 + -1);
      uVar39 = uVar39 - 1;
      puVar37 = puVar37 + 1;
      pcVar38 = pcVar38 + 0x10;
    } while (uVar39 != 0);
  }
  iVar31 = (uint)param_2[iVar35] + (uint)param_2[iVar35] * 2 +
           (uint)*(byte *)((int64_t)iVar35 + (int64_t)param_3);
  param_1[iVar35 * 2] = (char)((uint)(iVar32 + 8 + iVar31 * 3) >> 4);
  lVar34 = (int64_t)(iVar35 + 1);
  if (lVar34 < param_4) {
    pbVar36 = (byte *)(lVar34 + (int64_t)param_3);
    lVar40 = param_4 - lVar34;
    pcVar38 = param_1 + lVar34 * 2;
    iVar35 = iVar31;
    do {
      bVar4 = *pbVar36;
      pbVar1 = pbVar36 + ((int64_t)param_2 - (int64_t)param_3);
      pbVar36 = pbVar36 + 1;
      iVar31 = (uint)*pbVar1 + (uint)*pbVar1 * 2 + (uint)bVar4;
      pcVar38[-1] = (char)((uint)(iVar31 + (iVar35 + 4) * 2 + iVar35) >> 4);
      *pcVar38 = (char)((uint)(iVar35 + (iVar31 + 4) * 2 + iVar31) >> 4);
      lVar40 = lVar40 + -1;
      pcVar38 = pcVar38 + 2;
      iVar35 = iVar31;
    } while (lVar40 != 0);
  }
  param_1[(int64_t)(param_4 * 2) + -1] = (char)(iVar31 + 2U >> 2);
  return param_1;
}
// WARNING: Removing unreachable block (ram,0x0001804238f3)
// 函数: void UISystem_23883(uint64_t param_1,int param_2)
void UISystem_23883(uint64_t param_1,int param_2)
{
  byte *pbVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  byte bVar4;
  int8_t auVar5 [15];
  int8_t auVar6 [15];
  int8_t auVar7 [15];
  int8_t auVar8 [15];
  int8_t auVar9 [15];
  int8_t auVar10 [15];
  int8_t auVar11 [15];
  int8_t auVar12 [15];
  int8_t auVar13 [15];
  int8_t auVar14 [15];
  int8_t auVar15 [15];
  int8_t auVar16 [15];
  int8_t auVar17 [15];
  int8_t auVar18 [15];
  unkuint9 Var19;
  int8_t auVar20 [11];
  int8_t auVar21 [13];
  int8_t auVar22 [15];
  unkuint9 Var23;
  int8_t auVar24 [11];
  int8_t auVar25 [15];
  int8_t auVar26 [15];
  int8_t auVar27 [15];
  int8_t auVar28 [15];
  int in_EAX;
  uint uVar29;
  int iVar30;
  int iVar31;
  int64_t unaff_RBX;
  uint64_t *puVar32;
  uint64_t *unaff_RSI;
  char *unaff_RDI;
  int64_t lVar33;
  byte *pbVar34;
  byte *in_R10;
  char *pcVar35;
  uint64_t uVar36;
  int64_t lVar37;
  int64_t unaff_R14;
  short sVar38;
  ushort uVar39;
  short sVar42;
  ushort uVar43;
  short sVar44;
  ushort uVar45;
  short sVar46;
  ushort uVar47;
  short sVar48;
  ushort uVar49;
  short sVar50;
  ushort uVar51;
  short sVar52;
  ushort uVar53;
  int8_t auVar40 [16];
  int8_t auVar41 [16];
  short sVar54;
  ushort uVar55;
  ushort uVar56;
  ushort uVar57;
  ushort uVar58;
  ushort uVar59;
  ushort uVar60;
  ushort uVar61;
  ushort uVar62;
  ushort uVar63;
  int8_t auVar64 [16];
  short in_XMM5_Wa;
  short in_XMM5_Wb;
  short in_XMM5_Wc;
  short in_XMM5_Wd;
  short in_XMM5_We;
  short in_XMM5_Wf;
  short in_XMM5_Wg;
  short in_XMM5_Wh;
  lVar33 = unaff_RBX - (int64_t)unaff_RSI;
  uVar29 = (in_EAX - 1U >> 3) + 1;
  uVar36 = (uint64_t)uVar29;
  iVar31 = uVar29 * 8;
  puVar32 = unaff_RSI;
  pcVar35 = unaff_RDI;
  do {
    uVar2 = *(uint64_t *)(lVar33 + (int64_t)puVar32);
    uVar3 = *puVar32;
    puVar32 = puVar32 + 1;
    auVar6._8_6_ = 0;
    auVar6._0_8_ = uVar2;
    auVar6[0xe] = (char)(uVar2 >> 0x38);
    auVar8._8_4_ = 0;
    auVar8._0_8_ = uVar2;
    auVar8[0xc] = (char)(uVar2 >> 0x30);
    auVar8._13_2_ = auVar6._13_2_;
    auVar10._8_4_ = 0;
    auVar10._0_8_ = uVar2;
    auVar10._12_3_ = auVar8._12_3_;
    auVar12._8_2_ = 0;
    auVar12._0_8_ = uVar2;
    auVar12[10] = (char)(uVar2 >> 0x28);
    auVar12._11_4_ = auVar10._11_4_;
    auVar14._8_2_ = 0;
    auVar14._0_8_ = uVar2;
    auVar14._10_5_ = auVar12._10_5_;
    auVar16[8] = (char)(uVar2 >> 0x20);
    auVar16._0_8_ = uVar2;
    auVar16._9_6_ = auVar14._9_6_;
    auVar18._7_8_ = 0;
    auVar18._0_7_ = auVar16._8_7_;
    Var19 = CONCAT81(SUB158(auVar18 << 0x40,7),(char)(uVar2 >> 0x18));
    auVar25._9_6_ = 0;
    auVar25._0_9_ = Var19;
    auVar20._1_10_ = SUB1510(auVar25 << 0x30,5);
    auVar20[0] = (char)(uVar2 >> 0x10);
    auVar26._11_4_ = 0;
    auVar26._0_11_ = auVar20;
    auVar21._1_12_ = SUB1512(auVar26 << 0x20,3);
    auVar21[0] = (char)(uVar2 >> 8);
    auVar41._0_2_ = CONCAT11(0,(byte)uVar2);
    auVar41._2_13_ = auVar21;
    auVar41[0xf] = 0;
    auVar5._8_6_ = 0;
    auVar5._0_8_ = uVar3;
    auVar5[0xe] = (char)(uVar3 >> 0x38);
    auVar7._8_4_ = 0;
    auVar7._0_8_ = uVar3;
    auVar7[0xc] = (char)(uVar3 >> 0x30);
    auVar7._13_2_ = auVar5._13_2_;
    auVar9._8_4_ = 0;
    auVar9._0_8_ = uVar3;
    auVar9._12_3_ = auVar7._12_3_;
    auVar11._8_2_ = 0;
    auVar11._0_8_ = uVar3;
    auVar11[10] = (char)(uVar3 >> 0x28);
    auVar11._11_4_ = auVar9._11_4_;
    auVar13._8_2_ = 0;
    auVar13._0_8_ = uVar3;
    auVar13._10_5_ = auVar11._10_5_;
    auVar15[8] = (char)(uVar3 >> 0x20);
    auVar15._0_8_ = uVar3;
    auVar15._9_6_ = auVar13._9_6_;
    auVar22._7_8_ = 0;
    auVar22._0_7_ = auVar15._8_7_;
    Var23 = CONCAT81(SUB158(auVar22 << 0x40,7),(char)(uVar3 >> 0x18));
    auVar27._9_6_ = 0;
    auVar27._0_9_ = Var23;
    auVar24._1_10_ = SUB1510(auVar27 << 0x30,5);
    auVar24[0] = (char)(uVar3 >> 0x10);
    auVar28._11_4_ = 0;
    auVar28._0_11_ = auVar24;
    auVar17[2] = (char)(uVar3 >> 8);
    auVar17._0_2_ = (ushort)uVar3;
    auVar17._3_12_ = SUB1512(auVar28 << 0x20,3);
    auVar40 = psllw(auVar41,2);
    auVar64._0_2_ = (((ushort)uVar3 & 0xff) - auVar41._0_2_) + auVar40._0_2_;
    auVar64._2_2_ = (auVar17._2_2_ - auVar21._0_2_) + auVar40._2_2_;
    auVar64._4_2_ = (auVar24._0_2_ - auVar20._0_2_) + auVar40._4_2_;
    auVar64._6_2_ = ((short)Var23 - (short)Var19) + auVar40._6_2_;
    auVar64._8_2_ = (auVar15._8_2_ - auVar16._8_2_) + auVar40._8_2_;
    auVar64._10_2_ = (auVar11._10_2_ - auVar12._10_2_) + auVar40._10_2_;
    auVar64._12_2_ = (auVar7._12_2_ - auVar8._12_2_) + auVar40._12_2_;
    auVar64._14_2_ = ((auVar5._13_2_ >> 8) - (auVar6._13_2_ >> 8)) + auVar40._14_2_;
    auVar41 = psllw(auVar64,2);
    sVar38 = auVar41._0_2_ + in_XMM5_Wa;
    sVar42 = auVar41._2_2_ + in_XMM5_Wb;
    sVar44 = auVar41._4_2_ + in_XMM5_Wc;
    sVar46 = auVar41._6_2_ + in_XMM5_Wd;
    sVar48 = auVar41._8_2_ + in_XMM5_We;
    sVar50 = auVar41._10_2_ + in_XMM5_Wf;
    sVar52 = auVar41._12_2_ + in_XMM5_Wg;
    sVar54 = auVar41._14_2_ + in_XMM5_Wh;
    uVar39 = (ushort)(((short)param_2 - auVar64._0_2_) + sVar38) >> 4;
    uVar43 = (ushort)((auVar64._2_2_ - auVar64._0_2_) + sVar38) >> 4;
    uVar45 = (ushort)((auVar64._0_2_ - auVar64._2_2_) + sVar42) >> 4;
    uVar47 = (ushort)((auVar64._4_2_ - auVar64._2_2_) + sVar42) >> 4;
    uVar49 = (ushort)((auVar64._2_2_ - auVar64._4_2_) + sVar44) >> 4;
    uVar51 = (ushort)((auVar64._6_2_ - auVar64._4_2_) + sVar44) >> 4;
    uVar53 = (ushort)((auVar64._4_2_ - auVar64._6_2_) + sVar46) >> 4;
    uVar55 = (ushort)((auVar64._8_2_ - auVar64._6_2_) + sVar46) >> 4;
    uVar56 = (ushort)((auVar64._6_2_ - auVar64._8_2_) + sVar48) >> 4;
    uVar57 = (ushort)((auVar64._10_2_ - auVar64._8_2_) + sVar48) >> 4;
    uVar58 = (ushort)((auVar64._8_2_ - auVar64._10_2_) + sVar50) >> 4;
    uVar59 = (ushort)((auVar64._12_2_ - auVar64._10_2_) + sVar50) >> 4;
    uVar60 = (ushort)((auVar64._10_2_ - auVar64._12_2_) + sVar52) >> 4;
    uVar61 = (ushort)((auVar64._14_2_ - auVar64._12_2_) + sVar52) >> 4;
    uVar62 = (ushort)((auVar64._12_2_ - auVar64._14_2_) + sVar54) >> 4;
    uVar63 = (ushort)((((ushort)in_R10[lVar33] + (ushort)in_R10[lVar33] * 2 + (ushort)*in_R10) -
                      auVar64._14_2_) + sVar54) >> 4;
    *pcVar35 = (uVar39 != 0) * (uVar39 < 0x100) * (char)uVar39 - (0xff < uVar39);
    pcVar35[1] = (uVar43 != 0) * (uVar43 < 0x100) * (char)uVar43 - (0xff < uVar43);
    pcVar35[2] = (uVar45 != 0) * (uVar45 < 0x100) * (char)uVar45 - (0xff < uVar45);
    pcVar35[3] = (uVar47 != 0) * (uVar47 < 0x100) * (char)uVar47 - (0xff < uVar47);
    pcVar35[4] = (uVar49 != 0) * (uVar49 < 0x100) * (char)uVar49 - (0xff < uVar49);
    pcVar35[5] = (uVar51 != 0) * (uVar51 < 0x100) * (char)uVar51 - (0xff < uVar51);
    pcVar35[6] = (uVar53 != 0) * (uVar53 < 0x100) * (char)uVar53 - (0xff < uVar53);
    pcVar35[7] = (uVar55 != 0) * (uVar55 < 0x100) * (char)uVar55 - (0xff < uVar55);
    pcVar35[8] = (uVar56 != 0) * (uVar56 < 0x100) * (char)uVar56 - (0xff < uVar56);
    pcVar35[9] = (uVar57 != 0) * (uVar57 < 0x100) * (char)uVar57 - (0xff < uVar57);
    pcVar35[10] = (uVar58 != 0) * (uVar58 < 0x100) * (char)uVar58 - (0xff < uVar58);
    pcVar35[0xb] = (uVar59 != 0) * (uVar59 < 0x100) * (char)uVar59 - (0xff < uVar59);
    pcVar35[0xc] = (uVar60 != 0) * (uVar60 < 0x100) * (char)uVar60 - (0xff < uVar60);
    pcVar35[0xd] = (uVar61 != 0) * (uVar61 < 0x100) * (char)uVar61 - (0xff < uVar61);
    pcVar35[0xe] = (uVar62 != 0) * (uVar62 < 0x100) * (char)uVar62 - (0xff < uVar62);
    pcVar35[0xf] = (uVar63 != 0) * (uVar63 < 0x100) * (char)uVar63 - (0xff < uVar63);
    bVar4 = (in_R10 + 8)[lVar33 + -9];
    param_2 = (uint)bVar4 + (uint)bVar4 * 2 + (uint)in_R10[-1];
    uVar36 = uVar36 - 1;
    in_R10 = in_R10 + 8;
    pcVar35 = pcVar35 + 0x10;
  } while (uVar36 != 0);
  bVar4 = *(byte *)(iVar31 + unaff_RBX);
  iVar30 = (uint)bVar4 + (uint)bVar4 * 2 + (uint)*(byte *)((int64_t)iVar31 + (int64_t)unaff_RSI);
  unaff_RDI[(int)(uVar29 * 0x10)] = (char)((uint)(param_2 + 8 + iVar30 * 3) >> 4);
  lVar33 = (int64_t)(iVar31 + 1);
  if (lVar33 < unaff_R14) {
    pbVar34 = (byte *)(lVar33 + (int64_t)unaff_RSI);
    lVar37 = unaff_R14 - lVar33;
    pcVar35 = unaff_RDI + lVar33 * 2;
    iVar31 = iVar30;
    do {
      bVar4 = *pbVar34;
      pbVar1 = pbVar34 + (unaff_RBX - (int64_t)unaff_RSI);
      pbVar34 = pbVar34 + 1;
      iVar30 = (uint)*pbVar1 + (uint)*pbVar1 * 2 + (uint)bVar4;
      pcVar35[-1] = (char)((uint)(iVar30 + (iVar31 + 4) * 2 + iVar31) >> 4);
      *pcVar35 = (char)((uint)(iVar31 + (iVar30 + 4) * 2 + iVar30) >> 4);
      lVar37 = lVar37 + -1;
      pcVar35 = pcVar35 + 2;
      iVar31 = iVar30;
    } while (lVar37 != 0);
  }
  unaff_RDI[(int64_t)((int)unaff_R14 * 2) + -1] = (char)(iVar30 + 2U >> 2);
  return;
}
// 函数: void UISystem_23968(uint64_t param_1,int param_2,uint64_t param_3,int param_4)
void UISystem_23968(uint64_t param_1,int param_2,uint64_t param_3,int param_4)
{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  byte *pbVar6;
  int8_t *puVar7;
  int64_t lVar8;
  int64_t unaff_R14;
  bVar2 = *(byte *)(param_4 + unaff_RBX);
  iVar3 = (uint)bVar2 + (uint)bVar2 * 2 + (uint)*(byte *)(param_4 + unaff_RSI);
  *(char *)(param_4 * 2 + unaff_RDI) = (char)((uint)(param_2 + 8 + iVar3 * 3) >> 4);
  lVar5 = (int64_t)(param_4 + 1);
  if (lVar5 < unaff_R14) {
    pbVar6 = (byte *)(lVar5 + unaff_RSI);
    lVar8 = unaff_R14 - lVar5;
    puVar7 = (int8_t *)(unaff_RDI + lVar5 * 2);
    iVar4 = iVar3;
    do {
      bVar2 = *pbVar6;
      pbVar1 = pbVar6 + (unaff_RBX - unaff_RSI);
      pbVar6 = pbVar6 + 1;
      iVar3 = (uint)*pbVar1 + (uint)*pbVar1 * 2 + (uint)bVar2;
      puVar7[-1] = (char)((uint)(iVar3 + (iVar4 + 4) * 2 + iVar4) >> 4);
      *puVar7 = (char)((uint)(iVar4 + (iVar3 + 4) * 2 + iVar3) >> 4);
      lVar8 = lVar8 + -1;
      puVar7 = puVar7 + 2;
      iVar4 = iVar3;
    } while (lVar8 != 0);
  }
  *(char *)((int64_t)((int)unaff_R14 * 2) + -1 + unaff_RDI) = (char)(iVar3 + 2U >> 2);
  return;
}
// 函数: void UISystem_23a60(int64_t param_1,int64_t param_2,int64_t param_3,byte *param_4,int param_5,
void UISystem_23a60(int64_t param_1,int64_t param_2,int64_t param_3,byte *param_4,int param_5,
                  int param_6)
{
  int8_t *puVar1;
  uint uVar2;
  int64_t lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  lVar3 = (int64_t)param_5;
  if (0 < lVar3) {
    puVar1 = (int8_t *)(param_1 + 2);
    param_2 = param_2 - (int64_t)param_4;
    param_3 = param_3 - (int64_t)param_4;
    uVar8 = 0;
    do {
      iVar5 = (uint)param_4[param_2] * 0x100000 + 0x80000;
      uVar6 = (int)((*param_4 - 0x80) * 0x166f00 + iVar5) >> 0x14;
      uVar4 = (int)((0x80 - (uint)*param_4) * 0xb6d00 +
                   iVar5 + ((0x80 - (uint)param_4[param_3]) * 0x58200 & 0xffff0000)) >> 0x14;
      uVar2 = (int)((param_4[param_3] - 0x80) * 0x1c5a00 + iVar5) >> 0x14;
      uVar7 = uVar6;
      if ((0xff < uVar6) && (uVar7 = 0xff, (int)uVar6 < 0)) {
        uVar7 = uVar8;
      }
      uVar6 = uVar4;
      if ((0xff < uVar4) && (uVar6 = 0xff, (int)uVar4 < 0)) {
        uVar6 = uVar8;
      }
      uVar4 = uVar2;
      if ((0xff < uVar2) && (uVar4 = 0xff, (int)uVar2 < 0)) {
        uVar4 = uVar8;
      }
      puVar1[-2] = (char)uVar7;
      param_4 = param_4 + 1;
      puVar1[-1] = (char)uVar6;
      *puVar1 = (char)uVar4;
      puVar1[1] = 0xff;
      puVar1 = puVar1 + param_6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}
// 函数: void UISystem_23a84(int64_t param_1)
void UISystem_23a84(int64_t param_1)
{
  int8_t *puVar1;
  uint uVar2;
  byte *unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar3;
  int64_t unaff_RDI;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int64_t unaff_R14;
  int64_t lVar8;
  uint uVar9;
  int local_var_40;
  puVar1 = (int8_t *)(param_1 + 2);
  lVar8 = unaff_R14 - (int64_t)unaff_RBX;
  lVar3 = unaff_RBP - (int64_t)unaff_RBX;
  uVar9 = 0;
  do {
    iVar5 = (uint)unaff_RBX[lVar8] * 0x100000 + 0x80000;
    uVar6 = (int)((*unaff_RBX - 0x80) * 0x166f00 + iVar5) >> 0x14;
    uVar4 = (int)((0x80 - (uint)*unaff_RBX) * 0xb6d00 +
                 iVar5 + ((0x80 - (uint)unaff_RBX[lVar3]) * 0x58200 & 0xffff0000)) >> 0x14;
    uVar2 = (int)((unaff_RBX[lVar3] - 0x80) * 0x1c5a00 + iVar5) >> 0x14;
    uVar7 = uVar6;
    if ((0xff < uVar6) && (uVar7 = 0xff, (int)uVar6 < 0)) {
      uVar7 = uVar9;
    }
    uVar6 = uVar4;
    if ((0xff < uVar4) && (uVar6 = 0xff, (int)uVar4 < 0)) {
      uVar6 = uVar9;
    }
    uVar4 = uVar2;
    if ((0xff < uVar2) && (uVar4 = 0xff, (int)uVar2 < 0)) {
      uVar4 = uVar9;
    }
    puVar1[-2] = (char)uVar7;
    unaff_RBX = unaff_RBX + 1;
    puVar1[-1] = (char)uVar6;
    *puVar1 = (char)uVar4;
    puVar1[1] = 0xff;
    puVar1 = puVar1 + local_var_40;
    unaff_RDI = unaff_RDI + -1;
  } while (unaff_RDI != 0);
  return;
}
// 函数: void UISystem_23b76(void)
void UISystem_23b76(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address