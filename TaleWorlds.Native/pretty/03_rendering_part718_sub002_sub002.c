#include "TaleWorlds.Native.Split.h"

// 03_rendering_part718_sub002_sub002.c - 1 个函数

// 函数: void FUN_18068d2b0(int8_t (*param_1) [16],int param_2,int8_t (*param_3) [16],int param_4,
void FUN_18068d2b0(int8_t (*param_1) [16],int param_2,int8_t (*param_3) [16],int param_4,
                  int *param_5,int *param_6)

{
  uint uVar1;
  uint uVar2;
  int8_t auVar3 [14];
  int8_t auVar4 [12];
  unkbyte10 Var5;
  int8_t auVar6 [14];
  int8_t auVar7 [12];
  unkbyte10 Var8;
  longlong lVar9;
  int8_t auVar10 [16];
  short sVar17;
  int8_t auVar24 [16];
  int8_t auVar31 [16];
  short sVar32;
  int8_t auVar39 [16];
  int8_t auVar40 [16];
  int8_t in_XMM4_Ba;
  int8_t in_XMM4_Bb;
  int8_t uVar41;
  int8_t in_XMM4_Bc;
  int8_t uVar42;
  int8_t in_XMM4_Bd;
  int8_t uVar43;
  int8_t in_XMM4_Be;
  int8_t uVar44;
  int8_t in_XMM4_Bf;
  int8_t uVar45;
  int8_t in_XMM4_Bg;
  int8_t uVar46;
  int8_t in_XMM4_Bh;
  int8_t uVar47;
  int8_t in_XMM4_Bi;
  int8_t uVar48;
  int8_t in_XMM4_Bj;
  int8_t uVar49;
  int8_t in_XMM4_Bk;
  int8_t uVar50;
  int8_t in_XMM4_Bl;
  int8_t uVar51;
  int8_t in_XMM4_Bm;
  int8_t uVar52;
  int8_t in_XMM4_Bn;
  int8_t uVar53;
  int8_t in_XMM4_Bo;
  int8_t uVar54;
  int8_t in_XMM4_Bp;
  int8_t uVar55;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  int8_t auVar56 [16];
  int iVar63;
  int iVar64;
  int iVar65;
  int8_t auVar62 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int32_t uVar18;
  undefined6 uVar19;
  uint64_t uVar20;
  int8_t auVar21 [12];
  int8_t auVar22 [14];
  int8_t auVar23 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  int8_t auVar27 [16];
  int8_t auVar28 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int32_t uVar33;
  undefined6 uVar34;
  uint64_t uVar35;
  int8_t auVar36 [12];
  int8_t auVar37 [14];
  int8_t auVar38 [16];
  
  uVar1 = CONCAT13(in_XMM4_Bd,CONCAT12(in_XMM4_Bc,CONCAT11(in_XMM4_Bb,in_XMM4_Ba))) ^
          CONCAT13(in_XMM4_Bd,CONCAT12(in_XMM4_Bc,CONCAT11(in_XMM4_Bb,in_XMM4_Ba)));
  uVar41 = (int8_t)(uVar1 >> 8);
  uVar42 = (int8_t)(uVar1 >> 0x10);
  uVar43 = (int8_t)(uVar1 >> 0x18);
  uVar2 = CONCAT13(in_XMM4_Bh,CONCAT12(in_XMM4_Bg,CONCAT11(in_XMM4_Bf,in_XMM4_Be))) ^
          CONCAT13(in_XMM4_Bh,CONCAT12(in_XMM4_Bg,CONCAT11(in_XMM4_Bf,in_XMM4_Be)));
  uVar44 = (int8_t)uVar2;
  uVar45 = (int8_t)(uVar2 >> 8);
  uVar46 = (int8_t)(uVar2 >> 0x10);
  uVar47 = (int8_t)(uVar2 >> 0x18);
  uVar2 = CONCAT13(in_XMM4_Bl,CONCAT12(in_XMM4_Bk,CONCAT11(in_XMM4_Bj,in_XMM4_Bi))) ^
          CONCAT13(in_XMM4_Bl,CONCAT12(in_XMM4_Bk,CONCAT11(in_XMM4_Bj,in_XMM4_Bi)));
  uVar48 = (int8_t)uVar2;
  uVar49 = (int8_t)(uVar2 >> 8);
  uVar50 = (int8_t)(uVar2 >> 0x10);
  uVar51 = (int8_t)(uVar2 >> 0x18);
  uVar2 = CONCAT13(in_XMM4_Bp,CONCAT12(in_XMM4_Bo,CONCAT11(in_XMM4_Bn,in_XMM4_Bm))) ^
          CONCAT13(in_XMM4_Bp,CONCAT12(in_XMM4_Bo,CONCAT11(in_XMM4_Bn,in_XMM4_Bm)));
  uVar52 = (int8_t)uVar2;
  uVar53 = (int8_t)(uVar2 >> 8);
  uVar54 = (int8_t)(uVar2 >> 0x10);
  uVar55 = (int8_t)(uVar2 >> 0x18);
  auVar56[4] = uVar44;
  auVar56._0_4_ = uVar1;
  auVar56[5] = uVar45;
  auVar56[6] = uVar46;
  auVar56[7] = uVar47;
  auVar56[8] = uVar48;
  auVar56[9] = uVar49;
  auVar56[10] = uVar50;
  auVar56[0xb] = uVar51;
  auVar56[0xc] = uVar52;
  auVar56[0xd] = uVar53;
  auVar56[0xe] = uVar54;
  auVar56[0xf] = uVar55;
  auVar62[4] = uVar44;
  auVar62._0_4_ = uVar1;
  auVar62[5] = uVar45;
  auVar62[6] = uVar46;
  auVar62[7] = uVar47;
  auVar62[8] = uVar48;
  auVar62[9] = uVar49;
  auVar62[10] = uVar50;
  auVar62[0xb] = uVar51;
  auVar62[0xc] = uVar52;
  auVar62[0xd] = uVar53;
  auVar62[0xe] = uVar54;
  auVar62[0xf] = uVar55;
  lVar9 = 0x10;
  do {
    auVar40 = *param_1;
    param_1 = (int8_t (*) [16])(*param_1 + param_2);
    auVar31 = *param_3;
    param_3 = (int8_t (*) [16])(*param_3 + param_4);
    sVar32 = CONCAT11(uVar48,auVar40[8]);
    uVar33 = CONCAT13(uVar49,CONCAT12(auVar40[9],sVar32));
    uVar34 = CONCAT15(uVar50,CONCAT14(auVar40[10],uVar33));
    uVar35 = CONCAT17(uVar51,CONCAT16(auVar40[0xb],uVar34));
    auVar36._0_10_ = CONCAT19(uVar52,CONCAT18(auVar40[0xc],uVar35));
    auVar36[10] = auVar40[0xd];
    auVar36[0xb] = uVar53;
    auVar37[0xc] = auVar40[0xe];
    auVar37._0_12_ = auVar36;
    auVar37[0xd] = uVar54;
    auVar38[0xe] = auVar40[0xf];
    auVar38._0_14_ = auVar37;
    auVar38[0xf] = uVar55;
    auVar30._0_14_ = auVar40._0_14_;
    auVar30[0xe] = auVar40[7];
    auVar30[0xf] = uVar47;
    auVar29._14_2_ = auVar30._14_2_;
    auVar29._0_13_ = auVar40._0_13_;
    auVar29[0xd] = uVar46;
    auVar28._13_3_ = auVar29._13_3_;
    auVar28._0_12_ = auVar40._0_12_;
    auVar28[0xc] = auVar40[6];
    auVar27._12_4_ = auVar28._12_4_;
    auVar27._0_11_ = auVar40._0_11_;
    auVar27[0xb] = uVar45;
    auVar26._11_5_ = auVar27._11_5_;
    auVar26._0_10_ = auVar40._0_10_;
    auVar26[10] = auVar40[5];
    auVar25._10_6_ = auVar26._10_6_;
    auVar25._0_9_ = auVar40._0_9_;
    auVar25[9] = uVar44;
    auVar24._9_7_ = auVar25._9_7_;
    auVar24._0_8_ = auVar40._0_8_;
    auVar24[8] = auVar40[4];
    Var5 = CONCAT91(CONCAT81(auVar24._8_8_,uVar43),auVar40[3]);
    auVar4._2_10_ = Var5;
    auVar4[1] = uVar42;
    auVar4[0] = auVar40[2];
    auVar3._2_12_ = auVar4;
    auVar3[1] = uVar41;
    auVar3[0] = auVar40[1];
    auVar16._0_14_ = auVar31._0_14_;
    auVar16[0xe] = auVar31[7];
    auVar16[0xf] = uVar47;
    auVar15._14_2_ = auVar16._14_2_;
    auVar15._0_13_ = auVar31._0_13_;
    auVar15[0xd] = uVar46;
    auVar14._13_3_ = auVar15._13_3_;
    auVar14._0_12_ = auVar31._0_12_;
    auVar14[0xc] = auVar31[6];
    auVar13._12_4_ = auVar14._12_4_;
    auVar13._0_11_ = auVar31._0_11_;
    auVar13[0xb] = uVar45;
    auVar12._11_5_ = auVar13._11_5_;
    auVar12._0_10_ = auVar31._0_10_;
    auVar12[10] = auVar31[5];
    auVar11._10_6_ = auVar12._10_6_;
    auVar11._0_9_ = auVar31._0_9_;
    auVar11[9] = uVar44;
    auVar10._9_7_ = auVar11._9_7_;
    auVar10._0_8_ = auVar31._0_8_;
    auVar10[8] = auVar31[4];
    Var8 = CONCAT91(CONCAT81(auVar10._8_8_,uVar43),auVar31[3]);
    auVar7._2_10_ = Var8;
    auVar7[1] = uVar42;
    auVar7[0] = auVar31[2];
    auVar6._2_12_ = auVar7;
    auVar6[1] = uVar41;
    auVar6[0] = auVar31[1];
    sVar17 = CONCAT11(uVar48,auVar31[8]);
    uVar18 = CONCAT13(uVar49,CONCAT12(auVar31[9],sVar17));
    uVar19 = CONCAT15(uVar50,CONCAT14(auVar31[10],uVar18));
    uVar20 = CONCAT17(uVar51,CONCAT16(auVar31[0xb],uVar19));
    auVar21._0_10_ = CONCAT19(uVar52,CONCAT18(auVar31[0xc],uVar20));
    auVar21[10] = auVar31[0xd];
    auVar21[0xb] = uVar53;
    auVar22[0xc] = auVar31[0xe];
    auVar22._0_12_ = auVar21;
    auVar22[0xd] = uVar54;
    auVar23[0xe] = auVar31[0xf];
    auVar23._0_14_ = auVar22;
    auVar23[0xf] = uVar55;
    auVar40._0_2_ = CONCAT11((char)uVar1,auVar40[0]) - CONCAT11((char)uVar1,auVar31[0]);
    auVar40._2_2_ = auVar3._0_2_ - auVar6._0_2_;
    auVar40._4_2_ = auVar4._0_2_ - auVar7._0_2_;
    auVar40._6_2_ = (short)Var5 - (short)Var8;
    auVar40._8_2_ = auVar24._8_2_ - auVar10._8_2_;
    auVar40._10_2_ = auVar26._10_2_ - auVar12._10_2_;
    auVar40._12_2_ = auVar28._12_2_ - auVar14._12_2_;
    auVar40._14_2_ = auVar29._14_2_ - auVar15._14_2_;
    auVar39._0_2_ = sVar32 - sVar17;
    auVar39._2_2_ = (short)((uint)uVar33 >> 0x10) - (short)((uint)uVar18 >> 0x10);
    auVar39._4_2_ = (short)((uint6)uVar34 >> 0x20) - (short)((uint6)uVar19 >> 0x20);
    auVar39._6_2_ = (short)((ulonglong)uVar35 >> 0x30) - (short)((ulonglong)uVar20 >> 0x30);
    auVar39._8_2_ =
         (short)((unkuint10)auVar36._0_10_ >> 0x40) - (short)((unkuint10)auVar21._0_10_ >> 0x40);
    auVar39._10_2_ = auVar36._10_2_ - auVar21._10_2_;
    auVar39._12_2_ = auVar37._12_2_ - auVar22._12_2_;
    auVar39._14_2_ = auVar38._14_2_ - auVar23._14_2_;
    auVar31 = pmaddwd(auVar40,auVar40);
    sVar17 = auVar56._2_2_;
    sVar32 = auVar56._4_2_;
    sVar57 = auVar56._6_2_;
    sVar58 = auVar56._8_2_;
    sVar59 = auVar56._10_2_;
    sVar60 = auVar56._12_2_;
    sVar61 = auVar56._14_2_;
    auVar56._0_2_ = auVar40._0_2_ + auVar56._0_2_ + auVar39._0_2_;
    auVar56._2_2_ = auVar40._2_2_ + sVar17 + auVar39._2_2_;
    auVar56._4_2_ = auVar40._4_2_ + sVar32 + auVar39._4_2_;
    auVar56._6_2_ = auVar40._6_2_ + sVar57 + auVar39._6_2_;
    auVar56._8_2_ = auVar40._8_2_ + sVar58 + auVar39._8_2_;
    auVar56._10_2_ = auVar40._10_2_ + sVar59 + auVar39._10_2_;
    auVar56._12_2_ = auVar40._12_2_ + sVar60 + auVar39._12_2_;
    auVar56._14_2_ = auVar40._14_2_ + sVar61 + auVar39._14_2_;
    auVar40 = pmaddwd(auVar39,auVar39);
    iVar63 = auVar62._4_4_;
    iVar64 = auVar62._8_4_;
    iVar65 = auVar62._12_4_;
    auVar62._0_4_ = auVar31._0_4_ + auVar62._0_4_ + auVar40._0_4_;
    auVar62._4_4_ = auVar31._4_4_ + iVar63 + auVar40._4_4_;
    auVar62._8_4_ = auVar31._8_4_ + iVar64 + auVar40._8_4_;
    auVar62._12_4_ = auVar31._12_4_ + iVar65 + auVar40._12_4_;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *param_6 = (int)(short)(auVar56._14_2_ + auVar56._6_2_ + auVar56._10_2_ + auVar56._2_2_) +
             (int)(short)(auVar56._12_2_ + auVar56._4_2_ + auVar56._8_2_ + auVar56._0_2_);
  *param_5 = auVar62._12_4_ + auVar62._4_4_ + auVar62._8_4_ + auVar62._0_4_;
  return;
}



int32_t FUN_18068d480(void)

{
  int32_t *in_stack_00000028;
  
  FUN_18068d2b0();
  return *in_stack_00000028;
}



int FUN_18068d4b0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x000180025ec0(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              param_8,0x10,0x10,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 8);
}



int FUN_18068d530(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x000180027b50(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              param_8,0x10,0x10,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 8);
}



longlong FUN_18068d5b0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                      uint64_t param_5,uint param_6,uint *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x000180025ec0(param_1,(longlong)param_2,param_3,param_4,param_5,
                              (longlong)(int)param_6,param_8,0x10,0x20,&param_6,0,0);
  *param_7 = param_6;
  return (ulonglong)param_6 - ((longlong)iVar1 * (longlong)iVar1 >> 9);
}



longlong FUN_18068d630(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                      uint64_t param_5,uint param_6,uint *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x000180027b50(param_1,(longlong)param_2,param_3,param_4,param_5,
                              (longlong)(int)param_6,param_8,0x10,0x20,&param_6,0,0);
  *param_7 = param_6;
  return (ulonglong)param_6 - ((longlong)iVar1 * (longlong)iVar1 >> 9);
}



int FUN_18068d6b0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x000180025ec0(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              param_8,0x10,8,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 7);
}



int FUN_18068d730(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x000180027b50(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              param_8,0x10,8,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 7);
}



longlong FUN_18068d7b0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int aiStackX_10 [2];
  
  lVar1 = param_8;
  lVar4 = (longlong)param_6;
  iVar2 = func_0x000180025ec0(param_1,(longlong)param_2,param_3,param_4,param_5,lVar4,param_8,0x20,
                              0x10,&param_6,0,0);
  iVar3 = func_0x000180025ec0(param_1 + 0x10,(longlong)param_2,param_3 & 0xffffffff,
                              param_4 & 0xffffffff,param_5 + 0x10,lVar4,lVar1 + 0x10,0x20,0x10,
                              aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) -
         ((longlong)(iVar2 + iVar3) * (longlong)(iVar2 + iVar3) >> 9);
}



longlong FUN_18068d8d0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int aiStackX_10 [2];
  
  lVar1 = param_8;
  lVar4 = (longlong)param_6;
  iVar2 = func_0x000180027b50(param_1,(longlong)param_2,param_3,param_4,param_5,lVar4,param_8,0x20,
                              0x10,&param_6,0,0);
  iVar3 = func_0x000180027b50(param_1 + 0x10,(longlong)param_2,param_3 & 0xffffffff,
                              param_4 & 0xffffffff,param_5 + 0x10,lVar4,lVar1 + 0x10,0x20,0x10,
                              aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) -
         ((longlong)(iVar2 + iVar3) * (longlong)(iVar2 + iVar3) >> 9);
}



longlong FUN_18068d9f0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int aiStackX_10 [2];
  
  lVar1 = param_8;
  lVar4 = (longlong)param_6;
  iVar2 = func_0x000180025ec0(param_1,(longlong)param_2,param_3,param_4,param_5,lVar4,param_8,0x20,
                              0x20,&param_6,0,0);
  iVar3 = func_0x000180025ec0(param_1 + 0x10,(longlong)param_2,param_3 & 0xffffffff,
                              param_4 & 0xffffffff,param_5 + 0x10,lVar4,lVar1 + 0x10,0x20,0x20,
                              aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) -
         ((longlong)(iVar2 + iVar3) * (longlong)(iVar2 + iVar3) >> 10);
}



longlong FUN_18068db10(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int aiStackX_10 [2];
  
  lVar1 = param_8;
  lVar4 = (longlong)param_6;
  iVar2 = func_0x000180027b50(param_1,(longlong)param_2,param_3,param_4,param_5,lVar4,param_8,0x20,
                              0x20,&param_6,0,0);
  iVar3 = func_0x000180027b50(param_1 + 0x10,(longlong)param_2,param_3 & 0xffffffff,
                              param_4 & 0xffffffff,param_5 + 0x10,lVar4,lVar1 + 0x10,0x20,0x20,
                              aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) -
         ((longlong)(iVar2 + iVar3) * (longlong)(iVar2 + iVar3) >> 10);
}



longlong FUN_18068dc30(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int aiStackX_10 [2];
  
  lVar1 = param_8;
  lVar4 = (longlong)param_6;
  iVar2 = func_0x000180025ec0(param_1,(longlong)param_2,param_3,param_4,param_5,lVar4,param_8,0x20,
                              0x40,&param_6,0,0);
  iVar3 = func_0x000180025ec0(param_1 + 0x10,(longlong)param_2,param_3 & 0xffffffff,
                              param_4 & 0xffffffff,param_5 + 0x10,lVar4,lVar1 + 0x10,0x20,0x40,
                              aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) -
         ((longlong)(iVar2 + iVar3) * (longlong)(iVar2 + iVar3) >> 0xb);
}



longlong FUN_18068dd50(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int aiStackX_10 [2];
  
  lVar1 = param_8;
  lVar4 = (longlong)param_6;
  iVar2 = func_0x000180027b50(param_1,(longlong)param_2,param_3,param_4,param_5,lVar4,param_8,0x20,
                              0x40,&param_6,0,0);
  iVar3 = func_0x000180027b50(param_1 + 0x10,(longlong)param_2,param_3 & 0xffffffff,
                              param_4 & 0xffffffff,param_5 + 0x10,lVar4,lVar1 + 0x10,0x20,0x40,
                              aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) -
         ((longlong)(iVar2 + iVar3) * (longlong)(iVar2 + iVar3) >> 0xb);
}



int FUN_18068de70(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x000180024c40(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              param_8,4,4,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 4);
}



int FUN_18068def0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x000180026a20(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              param_8,4,4,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 4);
}



int FUN_18068df70(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x000180024c40(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              param_8,4,8,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 5);
}



int FUN_18068dff0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x000180026a20(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              param_8,4,8,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 5);
}



longlong FUN_18068e070(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int aiStackX_10 [2];
  
  lVar5 = param_8;
  lVar6 = (longlong)param_6;
  lVar7 = (longlong)param_2;
  iVar1 = func_0x000180025ec0(param_1,lVar7,param_3,param_4,param_5,lVar6,param_8,0x40,0x20,&param_6
                              ,0,0);
  iVar2 = func_0x000180025ec0(param_1 + 0x10,lVar7,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x10,lVar6,lVar5 + 0x10,0x40,0x20,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar3 = func_0x000180025ec0(param_1 + 0x20,lVar7,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x20,lVar6,lVar5 + 0x20,0x40,0x20,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar4 = func_0x000180025ec0(param_1 + 0x30,lVar7,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x30,lVar6,lVar5 + 0x30,0x40,0x20,aiStackX_10,0,0);
  lVar5 = (longlong)(iVar1 + iVar2 + iVar3 + iVar4);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) - (lVar5 * lVar5 >> 0xb);
}



longlong FUN_18068e250(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int aiStackX_10 [2];
  
  lVar5 = param_8;
  lVar6 = (longlong)param_6;
  lVar7 = (longlong)param_2;
  iVar1 = func_0x000180027b50(param_1,lVar7,param_3,param_4,param_5,lVar6,param_8,0x40,0x20,&param_6
                              ,0,0);
  iVar2 = func_0x000180027b50(param_1 + 0x10,lVar7,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x10,lVar6,lVar5 + 0x10,0x40,0x20,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar3 = func_0x000180027b50(param_1 + 0x20,lVar7,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x20,lVar6,lVar5 + 0x20,0x40,0x20,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar4 = func_0x000180027b50(param_1 + 0x30,lVar7,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x30,lVar6,lVar5 + 0x30,0x40,0x20,aiStackX_10,0,0);
  lVar5 = (longlong)(iVar1 + iVar2 + iVar3 + iVar4);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) - (lVar5 * lVar5 >> 0xb);
}



longlong FUN_18068e430(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int aiStackX_10 [2];
  
  lVar5 = param_8;
  lVar6 = (longlong)param_6;
  lVar7 = (longlong)param_2;
  iVar1 = func_0x000180025ec0(param_1,lVar7,param_3,param_4,param_5,lVar6,param_8,0x40,0x40,&param_6
                              ,0,0);
  iVar2 = func_0x000180025ec0(param_1 + 0x10,lVar7,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x10,lVar6,lVar5 + 0x10,0x40,0x40,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar3 = func_0x000180025ec0(param_1 + 0x20,lVar7,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x20,lVar6,lVar5 + 0x20,0x40,0x40,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar4 = func_0x000180025ec0(param_1 + 0x30,lVar7,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x30,lVar6,lVar5 + 0x30,0x40,0x40,aiStackX_10,0,0);
  lVar5 = (longlong)(iVar1 + iVar2 + iVar3 + iVar4);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) - (lVar5 * lVar5 >> 0xc);
}



longlong FUN_18068e610(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int aiStackX_10 [2];
  
  lVar5 = param_8;
  lVar6 = (longlong)param_6;
  lVar7 = (longlong)param_2;
  iVar1 = func_0x000180027b50(param_1,lVar7,param_3,param_4,param_5,lVar6,param_8,0x40,0x40,&param_6
                              ,0,0);
  iVar2 = func_0x000180027b50(param_1 + 0x10,lVar7,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x10,lVar6,lVar5 + 0x10,0x40,0x40,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar3 = func_0x000180027b50(param_1 + 0x20,lVar7,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x20,lVar6,lVar5 + 0x20,0x40,0x40,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar4 = func_0x000180027b50(param_1 + 0x30,lVar7,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x30,lVar6,lVar5 + 0x30,0x40,0x40,aiStackX_10,0,0);
  lVar5 = (longlong)(iVar1 + iVar2 + iVar3 + iVar4);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) - (lVar5 * lVar5 >> 0xc);
}



int FUN_18068e7f0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x000180025360(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              param_8,8,0x10,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 7);
}



int FUN_18068e870(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x0001800270c0(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              param_8,8,0x10,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 7);
}



int FUN_18068e8f0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x000180025360(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              param_8,8,4,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 5);
}



int FUN_18068e970(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x0001800270c0(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              param_8,8,4,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 5);
}



int FUN_18068e9f0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x000180025360(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              param_8,8,8,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 6);
}



int FUN_18068ea70(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7,uint64_t param_8)

{
  int iVar1;
  
  iVar1 = func_0x0001800270c0(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              param_8,8,8,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 6);
}



int FUN_18068eaf0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = func_0x000180022810(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              0x10,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 8);
}



int FUN_18068eb60(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = func_0x000180024290(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              0x10,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 8);
}



longlong FUN_18068ebd0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                      uint64_t param_5,uint param_6,uint *param_7)

{
  int iVar1;
  
  iVar1 = func_0x000180022810(param_1,(longlong)param_2,param_3,param_4,param_5,
                              (longlong)(int)param_6,0x20,&param_6,0,0);
  *param_7 = param_6;
  return (ulonglong)param_6 - ((longlong)iVar1 * (longlong)iVar1 >> 9);
}



longlong FUN_18068ec40(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                      uint64_t param_5,uint param_6,uint *param_7)

{
  int iVar1;
  
  iVar1 = func_0x000180024290(param_1,(longlong)param_2,param_3,param_4,param_5,
                              (longlong)(int)param_6,0x20,&param_6,0,0);
  *param_7 = param_6;
  return (ulonglong)param_6 - ((longlong)iVar1 * (longlong)iVar1 >> 9);
}



int FUN_18068ecb0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = func_0x000180022810(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,8,
                              &param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 7);
}



int FUN_18068ed20(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = func_0x000180024290(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,8,
                              &param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 7);
}



longlong FUN_18068ed90(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int aiStackX_10 [2];
  
  lVar3 = (longlong)param_6;
  iVar1 = func_0x000180022810(param_1,(longlong)param_2,param_3,param_4,param_5,lVar3,0x10,&param_6,
                              0,0);
  iVar2 = func_0x000180022810(param_1 + 0x10,(longlong)param_2,param_3 & 0xffffffff,
                              param_4 & 0xffffffff,param_5 + 0x10,lVar3,0x10,aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) -
         ((longlong)(iVar1 + iVar2) * (longlong)(iVar1 + iVar2) >> 9);
}



longlong FUN_18068ee80(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int aiStackX_10 [2];
  
  lVar3 = (longlong)param_6;
  iVar1 = func_0x000180024290(param_1,(longlong)param_2,param_3,param_4,param_5,lVar3,0x10,&param_6,
                              0,0);
  iVar2 = func_0x000180024290(param_1 + 0x10,(longlong)param_2,param_3 & 0xffffffff,
                              param_4 & 0xffffffff,param_5 + 0x10,lVar3,0x10,aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) -
         ((longlong)(iVar1 + iVar2) * (longlong)(iVar1 + iVar2) >> 9);
}



longlong FUN_18068ef70(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int aiStackX_10 [2];
  
  lVar3 = (longlong)param_6;
  iVar1 = func_0x000180022810(param_1,(longlong)param_2,param_3,param_4,param_5,lVar3,0x20,&param_6,
                              0,0);
  iVar2 = func_0x000180022810(param_1 + 0x10,(longlong)param_2,param_3 & 0xffffffff,
                              param_4 & 0xffffffff,param_5 + 0x10,lVar3,0x20,aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) -
         ((longlong)(iVar1 + iVar2) * (longlong)(iVar1 + iVar2) >> 10);
}



longlong FUN_18068f060(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int aiStackX_10 [2];
  
  lVar3 = (longlong)param_6;
  iVar1 = func_0x000180024290(param_1,(longlong)param_2,param_3,param_4,param_5,lVar3,0x20,&param_6,
                              0,0);
  iVar2 = func_0x000180024290(param_1 + 0x10,(longlong)param_2,param_3 & 0xffffffff,
                              param_4 & 0xffffffff,param_5 + 0x10,lVar3,0x20,aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) -
         ((longlong)(iVar1 + iVar2) * (longlong)(iVar1 + iVar2) >> 10);
}



longlong FUN_18068f150(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int aiStackX_10 [2];
  
  lVar3 = (longlong)param_6;
  iVar1 = func_0x000180022810(param_1,(longlong)param_2,param_3,param_4,param_5,lVar3,0x40,&param_6,
                              0,0);
  iVar2 = func_0x000180022810(param_1 + 0x10,(longlong)param_2,param_3 & 0xffffffff,
                              param_4 & 0xffffffff,param_5 + 0x10,lVar3,0x40,aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) -
         ((longlong)(iVar1 + iVar2) * (longlong)(iVar1 + iVar2) >> 0xb);
}



longlong FUN_18068f240(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int aiStackX_10 [2];
  
  lVar3 = (longlong)param_6;
  iVar1 = func_0x000180024290(param_1,(longlong)param_2,param_3,param_4,param_5,lVar3,0x40,&param_6,
                              0,0);
  iVar2 = func_0x000180024290(param_1 + 0x10,(longlong)param_2,param_3 & 0xffffffff,
                              param_4 & 0xffffffff,param_5 + 0x10,lVar3,0x40,aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) -
         ((longlong)(iVar1 + iVar2) * (longlong)(iVar1 + iVar2) >> 0xb);
}



int FUN_18068f330(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = func_0x000180021700(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,4,
                              &param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 4);
}



int FUN_18068f3a0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = func_0x0001800232d0(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,4,
                              &param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 4);
}



int FUN_18068f410(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = func_0x000180021700(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,8,
                              &param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 5);
}



int FUN_18068f480(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = func_0x0001800232d0(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,8,
                              &param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 5);
}



longlong FUN_18068f4f0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int aiStackX_10 [2];
  
  lVar5 = (longlong)param_6;
  lVar6 = (longlong)param_2;
  iVar1 = func_0x000180022810(param_1,lVar6,param_3,param_4,param_5,lVar5,0x20,&param_6,0,0);
  iVar2 = func_0x000180022810(param_1 + 0x10,lVar6,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x10,lVar5,0x20,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar3 = func_0x000180022810(param_1 + 0x20,lVar6,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x20,lVar5,0x20,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar4 = func_0x000180022810(param_1 + 0x30,lVar6,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x30,lVar5,0x20,aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  lVar5 = (longlong)(iVar1 + iVar2 + iVar3 + iVar4);
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) - (lVar5 * lVar5 >> 0xb);
}



longlong FUN_18068f680(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int aiStackX_10 [2];
  
  lVar5 = (longlong)param_6;
  lVar6 = (longlong)param_2;
  iVar1 = func_0x000180024290(param_1,lVar6,param_3,param_4,param_5,lVar5,0x20,&param_6,0,0);
  iVar2 = func_0x000180024290(param_1 + 0x10,lVar6,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x10,lVar5,0x20,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar3 = func_0x000180024290(param_1 + 0x20,lVar6,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x20,lVar5,0x20,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar4 = func_0x000180024290(param_1 + 0x30,lVar6,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x30,lVar5,0x20,aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  lVar5 = (longlong)(iVar1 + iVar2 + iVar3 + iVar4);
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) - (lVar5 * lVar5 >> 0xb);
}



longlong FUN_18068f810(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int aiStackX_10 [2];
  
  lVar5 = (longlong)param_6;
  lVar6 = (longlong)param_2;
  iVar1 = func_0x000180022810(param_1,lVar6,param_3,param_4,param_5,lVar5,0x40,&param_6,0,0);
  iVar2 = func_0x000180022810(param_1 + 0x10,lVar6,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x10,lVar5,0x40,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar3 = func_0x000180022810(param_1 + 0x20,lVar6,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x20,lVar5,0x40,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar4 = func_0x000180022810(param_1 + 0x30,lVar6,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x30,lVar5,0x40,aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  lVar5 = (longlong)(iVar1 + iVar2 + iVar3 + iVar4);
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) - (lVar5 * lVar5 >> 0xc);
}



longlong FUN_18068f9a0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,
                      longlong param_5,int param_6,uint *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int aiStackX_10 [2];
  
  lVar5 = (longlong)param_6;
  lVar6 = (longlong)param_2;
  iVar1 = func_0x000180024290(param_1,lVar6,param_3,param_4,param_5,lVar5,0x40,&param_6,0,0);
  iVar2 = func_0x000180024290(param_1 + 0x10,lVar6,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x10,lVar5,0x40,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar3 = func_0x000180024290(param_1 + 0x20,lVar6,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x20,lVar5,0x40,aiStackX_10,0,0);
  param_6 = param_6 + aiStackX_10[0];
  iVar4 = func_0x000180024290(param_1 + 0x30,lVar6,param_3 & 0xffffffff,param_4 & 0xffffffff,
                              param_5 + 0x30,lVar5,0x40,aiStackX_10,0,0);
  *param_7 = param_6 + aiStackX_10[0];
  lVar5 = (longlong)(iVar1 + iVar2 + iVar3 + iVar4);
  return (ulonglong)(uint)(param_6 + aiStackX_10[0]) - (lVar5 * lVar5 >> 0xc);
}



int FUN_18068fb30(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = func_0x000180021d70(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              0x10,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 7);
}



int FUN_18068fba0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = func_0x0001800238c0(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,
                              0x10,&param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 7);
}



int FUN_18068fc10(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = func_0x000180021d70(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,4,
                              &param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 5);
}



int FUN_18068fc80(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = func_0x0001800238c0(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,4,
                              &param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 5);
}



int FUN_18068fcf0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = func_0x000180021d70(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,8,
                              &param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 6);
}



int FUN_18068fd60(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,int param_6,int *param_7)

{
  int iVar1;
  
  iVar1 = func_0x0001800238c0(param_1,(longlong)param_2,param_3,param_4,param_5,(longlong)param_6,8,
                              &param_6,0,0);
  *param_7 = param_6;
  return param_6 - ((uint)(iVar1 * iVar1) >> 6);
}



int FUN_18068fdd0(void)

{
  int *in_stack_00000028;
  int32_t uStack_18;
  
  FUN_18068d2b0();
  return *in_stack_00000028 - ((uint)(uStack_18 * uStack_18) >> 8);
}



ulonglong FUN_18068fe10(int8_t (*param_1) [16],int param_2,longlong param_3,int param_4,
                       uint *param_5)

{
  uint uVar1;
  int8_t auVar2 [14];
  int8_t auVar3 [12];
  unkbyte10 Var4;
  int8_t auVar5 [14];
  int8_t auVar6 [12];
  unkbyte10 Var7;
  int8_t (*pauVar8) [16];
  int8_t (*pauVar9) [16];
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int8_t auVar14 [16];
  short sVar21;
  int8_t auVar28 [16];
  int8_t auVar35 [16];
  short sVar36;
  int8_t auVar43 [16];
  int8_t auVar44 [16];
  int8_t in_XMM4_Ba;
  int8_t in_XMM4_Bb;
  int8_t uVar45;
  int8_t in_XMM4_Bc;
  int8_t uVar46;
  int8_t in_XMM4_Bd;
  int8_t uVar47;
  int8_t in_XMM4_Be;
  int8_t uVar48;
  int8_t in_XMM4_Bf;
  int8_t uVar49;
  int8_t in_XMM4_Bg;
  int8_t uVar50;
  int8_t in_XMM4_Bh;
  int8_t uVar51;
  int8_t in_XMM4_Bi;
  int8_t uVar52;
  int8_t in_XMM4_Bj;
  int8_t uVar53;
  int8_t in_XMM4_Bk;
  int8_t uVar54;
  int8_t in_XMM4_Bl;
  int8_t uVar55;
  int8_t in_XMM4_Bm;
  int8_t uVar56;
  int8_t in_XMM4_Bn;
  int8_t uVar57;
  int8_t in_XMM4_Bo;
  int8_t uVar58;
  int8_t in_XMM4_Bp;
  int8_t uVar59;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  int8_t auVar60 [16];
  int iVar67;
  int iVar68;
  int iVar69;
  int8_t auVar66 [16];
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int32_t uVar22;
  undefined6 uVar23;
  uint64_t uVar24;
  int8_t auVar25 [12];
  int8_t auVar26 [14];
  int8_t auVar27 [16];
  int8_t auVar29 [16];
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  int32_t uVar37;
  undefined6 uVar38;
  uint64_t uVar39;
  int8_t auVar40 [12];
  int8_t auVar41 [14];
  int8_t auVar42 [16];
  
  iVar13 = 0;
  uVar1 = CONCAT13(in_XMM4_Bd,CONCAT12(in_XMM4_Bc,CONCAT11(in_XMM4_Bb,in_XMM4_Ba))) ^
          CONCAT13(in_XMM4_Bd,CONCAT12(in_XMM4_Bc,CONCAT11(in_XMM4_Bb,in_XMM4_Ba)));
  uVar45 = (int8_t)(uVar1 >> 8);
  uVar46 = (int8_t)(uVar1 >> 0x10);
  uVar47 = (int8_t)(uVar1 >> 0x18);
  uVar12 = CONCAT13(in_XMM4_Bh,CONCAT12(in_XMM4_Bg,CONCAT11(in_XMM4_Bf,in_XMM4_Be))) ^
           CONCAT13(in_XMM4_Bh,CONCAT12(in_XMM4_Bg,CONCAT11(in_XMM4_Bf,in_XMM4_Be)));
  uVar48 = (int8_t)uVar12;
  uVar49 = (int8_t)(uVar12 >> 8);
  uVar50 = (int8_t)(uVar12 >> 0x10);
  uVar51 = (int8_t)(uVar12 >> 0x18);
  uVar12 = CONCAT13(in_XMM4_Bl,CONCAT12(in_XMM4_Bk,CONCAT11(in_XMM4_Bj,in_XMM4_Bi))) ^
           CONCAT13(in_XMM4_Bl,CONCAT12(in_XMM4_Bk,CONCAT11(in_XMM4_Bj,in_XMM4_Bi)));
  uVar52 = (int8_t)uVar12;
  uVar53 = (int8_t)(uVar12 >> 8);
  uVar54 = (int8_t)(uVar12 >> 0x10);
  uVar55 = (int8_t)(uVar12 >> 0x18);
  uVar12 = CONCAT13(in_XMM4_Bp,CONCAT12(in_XMM4_Bo,CONCAT11(in_XMM4_Bn,in_XMM4_Bm))) ^
           CONCAT13(in_XMM4_Bp,CONCAT12(in_XMM4_Bo,CONCAT11(in_XMM4_Bn,in_XMM4_Bm)));
  uVar56 = (int8_t)uVar12;
  uVar57 = (int8_t)(uVar12 >> 8);
  uVar58 = (int8_t)(uVar12 >> 0x10);
  uVar59 = (int8_t)(uVar12 >> 0x18);
  uVar12 = 0;
  *param_5 = 0;
  lVar10 = 2;
  param_3 = param_3 - (longlong)param_1;
  do {
    pauVar8 = (int8_t (*) [16])(param_3 + (longlong)param_1);
    auVar60[4] = uVar48;
    auVar60._0_4_ = uVar1;
    auVar60[5] = uVar49;
    auVar60[6] = uVar50;
    auVar60[7] = uVar51;
    auVar60[8] = uVar52;
    auVar60[9] = uVar53;
    auVar60[10] = uVar54;
    auVar60[0xb] = uVar55;
    auVar60[0xc] = uVar56;
    auVar60[0xd] = uVar57;
    auVar60[0xe] = uVar58;
    auVar60[0xf] = uVar59;
    auVar66[4] = uVar48;
    auVar66._0_4_ = uVar1;
    auVar66[5] = uVar49;
    auVar66[6] = uVar50;
    auVar66[7] = uVar51;
    auVar66[8] = uVar52;
    auVar66[9] = uVar53;
    auVar66[10] = uVar54;
    auVar66[0xb] = uVar55;
    auVar66[0xc] = uVar56;
    auVar66[0xd] = uVar57;
    auVar66[0xe] = uVar58;
    auVar66[0xf] = uVar59;
    lVar11 = 0x10;
    pauVar9 = param_1;
    do {
      auVar44 = *pauVar9;
      pauVar9 = (int8_t (*) [16])(*pauVar9 + param_2);
      auVar35 = *pauVar8;
      pauVar8 = (int8_t (*) [16])(*pauVar8 + param_4);
      sVar36 = CONCAT11(uVar52,auVar44[8]);
      uVar37 = CONCAT13(uVar53,CONCAT12(auVar44[9],sVar36));
      uVar38 = CONCAT15(uVar54,CONCAT14(auVar44[10],uVar37));
      uVar39 = CONCAT17(uVar55,CONCAT16(auVar44[0xb],uVar38));
      auVar40._0_10_ = CONCAT19(uVar56,CONCAT18(auVar44[0xc],uVar39));
      auVar40[10] = auVar44[0xd];
      auVar40[0xb] = uVar57;
      auVar41[0xc] = auVar44[0xe];
      auVar41._0_12_ = auVar40;
      auVar41[0xd] = uVar58;
      auVar42[0xe] = auVar44[0xf];
      auVar42._0_14_ = auVar41;
      auVar42[0xf] = uVar59;
      auVar34._0_14_ = auVar44._0_14_;
      auVar34[0xe] = auVar44[7];
      auVar34[0xf] = uVar51;
      auVar33._14_2_ = auVar34._14_2_;
      auVar33._0_13_ = auVar44._0_13_;
      auVar33[0xd] = uVar50;
      auVar32._13_3_ = auVar33._13_3_;
      auVar32._0_12_ = auVar44._0_12_;
      auVar32[0xc] = auVar44[6];
      auVar31._12_4_ = auVar32._12_4_;
      auVar31._0_11_ = auVar44._0_11_;
      auVar31[0xb] = uVar49;
      auVar30._11_5_ = auVar31._11_5_;
      auVar30._0_10_ = auVar44._0_10_;
      auVar30[10] = auVar44[5];
      auVar29._10_6_ = auVar30._10_6_;
      auVar29._0_9_ = auVar44._0_9_;
      auVar29[9] = uVar48;
      auVar28._9_7_ = auVar29._9_7_;
      auVar28._0_8_ = auVar44._0_8_;
      auVar28[8] = auVar44[4];
      Var4 = CONCAT91(CONCAT81(auVar28._8_8_,uVar47),auVar44[3]);
      auVar3._2_10_ = Var4;
      auVar3[1] = uVar46;
      auVar3[0] = auVar44[2];
      auVar2._2_12_ = auVar3;
      auVar2[1] = uVar45;
      auVar2[0] = auVar44[1];
      auVar20._0_14_ = auVar35._0_14_;
      auVar20[0xe] = auVar35[7];
      auVar20[0xf] = uVar51;
      auVar19._14_2_ = auVar20._14_2_;
      auVar19._0_13_ = auVar35._0_13_;
      auVar19[0xd] = uVar50;
      auVar18._13_3_ = auVar19._13_3_;
      auVar18._0_12_ = auVar35._0_12_;
      auVar18[0xc] = auVar35[6];
      auVar17._12_4_ = auVar18._12_4_;
      auVar17._0_11_ = auVar35._0_11_;
      auVar17[0xb] = uVar49;
      auVar16._11_5_ = auVar17._11_5_;
      auVar16._0_10_ = auVar35._0_10_;
      auVar16[10] = auVar35[5];
      auVar15._10_6_ = auVar16._10_6_;
      auVar15._0_9_ = auVar35._0_9_;
      auVar15[9] = uVar48;
      auVar14._9_7_ = auVar15._9_7_;
      auVar14._0_8_ = auVar35._0_8_;
      auVar14[8] = auVar35[4];
      Var7 = CONCAT91(CONCAT81(auVar14._8_8_,uVar47),auVar35[3]);
      auVar6._2_10_ = Var7;
      auVar6[1] = uVar46;
      auVar6[0] = auVar35[2];
      auVar5._2_12_ = auVar6;
      auVar5[1] = uVar45;
      auVar5[0] = auVar35[1];
      sVar21 = CONCAT11(uVar52,auVar35[8]);
      uVar22 = CONCAT13(uVar53,CONCAT12(auVar35[9],sVar21));
      uVar23 = CONCAT15(uVar54,CONCAT14(auVar35[10],uVar22));
      uVar24 = CONCAT17(uVar55,CONCAT16(auVar35[0xb],uVar23));
      auVar25._0_10_ = CONCAT19(uVar56,CONCAT18(auVar35[0xc],uVar24));
      auVar25[10] = auVar35[0xd];
      auVar25[0xb] = uVar57;
      auVar26[0xc] = auVar35[0xe];
      auVar26._0_12_ = auVar25;
      auVar26[0xd] = uVar58;
      auVar27[0xe] = auVar35[0xf];
      auVar27._0_14_ = auVar26;
      auVar27[0xf] = uVar59;
      auVar44._0_2_ = CONCAT11((char)uVar1,auVar44[0]) - CONCAT11((char)uVar1,auVar35[0]);
      auVar44._2_2_ = auVar2._0_2_ - auVar5._0_2_;
      auVar44._4_2_ = auVar3._0_2_ - auVar6._0_2_;
      auVar44._6_2_ = (short)Var4 - (short)Var7;
      auVar44._8_2_ = auVar28._8_2_ - auVar14._8_2_;
      auVar44._10_2_ = auVar30._10_2_ - auVar16._10_2_;
      auVar44._12_2_ = auVar32._12_2_ - auVar18._12_2_;
      auVar44._14_2_ = auVar33._14_2_ - auVar19._14_2_;
      auVar43._0_2_ = sVar36 - sVar21;
      auVar43._2_2_ = (short)((uint)uVar37 >> 0x10) - (short)((uint)uVar22 >> 0x10);
      auVar43._4_2_ = (short)((uint6)uVar38 >> 0x20) - (short)((uint6)uVar23 >> 0x20);
      auVar43._6_2_ = (short)((ulonglong)uVar39 >> 0x30) - (short)((ulonglong)uVar24 >> 0x30);
      auVar43._8_2_ =
           (short)((unkuint10)auVar40._0_10_ >> 0x40) - (short)((unkuint10)auVar25._0_10_ >> 0x40);
      auVar43._10_2_ = auVar40._10_2_ - auVar25._10_2_;
      auVar43._12_2_ = auVar41._12_2_ - auVar26._12_2_;
      auVar43._14_2_ = auVar42._14_2_ - auVar27._14_2_;
      auVar35 = pmaddwd(auVar44,auVar44);
      sVar21 = auVar60._2_2_;
      sVar36 = auVar60._4_2_;
      sVar61 = auVar60._6_2_;
      sVar62 = auVar60._8_2_;
      sVar63 = auVar60._10_2_;
      sVar64 = auVar60._12_2_;
      sVar65 = auVar60._14_2_;
      auVar60._0_2_ = auVar44._0_2_ + auVar60._0_2_ + auVar43._0_2_;
      auVar60._2_2_ = auVar44._2_2_ + sVar21 + auVar43._2_2_;
      auVar60._4_2_ = auVar44._4_2_ + sVar36 + auVar43._4_2_;
      auVar60._6_2_ = auVar44._6_2_ + sVar61 + auVar43._6_2_;
      auVar60._8_2_ = auVar44._8_2_ + sVar62 + auVar43._8_2_;
      auVar60._10_2_ = auVar44._10_2_ + sVar63 + auVar43._10_2_;
      auVar60._12_2_ = auVar44._12_2_ + sVar64 + auVar43._12_2_;
      auVar60._14_2_ = auVar44._14_2_ + sVar65 + auVar43._14_2_;
      auVar44 = pmaddwd(auVar43,auVar43);
      iVar67 = auVar66._4_4_;
      iVar68 = auVar66._8_4_;
      iVar69 = auVar66._12_4_;
      auVar66._0_4_ = auVar35._0_4_ + auVar66._0_4_ + auVar44._0_4_;
      auVar66._4_4_ = auVar35._4_4_ + iVar67 + auVar44._4_4_;
      auVar66._8_4_ = auVar35._8_4_ + iVar68 + auVar44._8_4_;
      auVar66._12_4_ = auVar35._12_4_ + iVar69 + auVar44._12_4_;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    param_1 = param_1 + 1;
    uVar12 = uVar12 + auVar66._12_4_ + auVar66._4_4_ + auVar66._8_4_ + auVar66._0_4_;
    *param_5 = uVar12;
    iVar13 = iVar13 + (short)(auVar60._12_2_ + auVar60._4_2_ + auVar60._8_2_ + auVar60._0_2_) +
             (int)(short)(auVar60._14_2_ + auVar60._6_2_ + auVar60._10_2_ + auVar60._2_2_);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return (ulonglong)uVar12 - ((longlong)iVar13 * (longlong)iVar13 >> 9) & 0xffffffff;
}



ulonglong FUN_18068ff60(longlong param_1,int param_2,longlong param_3,int param_4,uint *param_5)

{
  uint uVar1;
  int8_t auVar2 [14];
  int8_t auVar3 [12];
  unkbyte10 Var4;
  int8_t auVar5 [14];
  int8_t auVar6 [12];
  unkbyte10 Var7;
  int8_t (*pauVar8) [16];
  int8_t (*pauVar9) [16];
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int8_t (*pauVar13) [16];
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int8_t auVar18 [16];
  short sVar25;
  int8_t auVar32 [16];
  int8_t auVar39 [16];
  short sVar40;
  int8_t auVar47 [16];
  int8_t auVar48 [16];
  int8_t in_XMM4_Ba;
  int8_t in_XMM4_Bb;
  int8_t uVar49;
  int8_t in_XMM4_Bc;
  int8_t uVar50;
  int8_t in_XMM4_Bd;
  int8_t uVar51;
  int8_t in_XMM4_Be;
  int8_t uVar52;
  int8_t in_XMM4_Bf;
  int8_t uVar53;
  int8_t in_XMM4_Bg;
  int8_t uVar54;
  int8_t in_XMM4_Bh;
  int8_t uVar55;
  int8_t in_XMM4_Bi;
  int8_t uVar56;
  int8_t in_XMM4_Bj;
  int8_t uVar57;
  int8_t in_XMM4_Bk;
  int8_t uVar58;
  int8_t in_XMM4_Bl;
  int8_t uVar59;
  int8_t in_XMM4_Bm;
  int8_t uVar60;
  int8_t in_XMM4_Bn;
  int8_t uVar61;
  int8_t in_XMM4_Bo;
  int8_t uVar62;
  int8_t in_XMM4_Bp;
  int8_t uVar63;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  int8_t auVar64 [16];
  int iVar71;
  int iVar72;
  int iVar73;
  int8_t auVar70 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int32_t uVar26;
  undefined6 uVar27;
  uint64_t uVar28;
  int8_t auVar29 [12];
  int8_t auVar30 [14];
  int8_t auVar31 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  int32_t uVar41;
  undefined6 uVar42;
  uint64_t uVar43;
  int8_t auVar44 [12];
  int8_t auVar45 [14];
  int8_t auVar46 [16];
  
  iVar12 = 0;
  uVar1 = CONCAT13(in_XMM4_Bd,CONCAT12(in_XMM4_Bc,CONCAT11(in_XMM4_Bb,in_XMM4_Ba))) ^
          CONCAT13(in_XMM4_Bd,CONCAT12(in_XMM4_Bc,CONCAT11(in_XMM4_Bb,in_XMM4_Ba)));
  uVar49 = (int8_t)(uVar1 >> 8);
  uVar50 = (int8_t)(uVar1 >> 0x10);
  uVar51 = (int8_t)(uVar1 >> 0x18);
  uVar14 = CONCAT13(in_XMM4_Bh,CONCAT12(in_XMM4_Bg,CONCAT11(in_XMM4_Bf,in_XMM4_Be))) ^
           CONCAT13(in_XMM4_Bh,CONCAT12(in_XMM4_Bg,CONCAT11(in_XMM4_Bf,in_XMM4_Be)));
  uVar52 = (int8_t)uVar14;
  uVar53 = (int8_t)(uVar14 >> 8);
  uVar54 = (int8_t)(uVar14 >> 0x10);
  uVar55 = (int8_t)(uVar14 >> 0x18);
  uVar14 = CONCAT13(in_XMM4_Bl,CONCAT12(in_XMM4_Bk,CONCAT11(in_XMM4_Bj,in_XMM4_Bi))) ^
           CONCAT13(in_XMM4_Bl,CONCAT12(in_XMM4_Bk,CONCAT11(in_XMM4_Bj,in_XMM4_Bi)));
  uVar56 = (int8_t)uVar14;
  uVar57 = (int8_t)(uVar14 >> 8);
  uVar58 = (int8_t)(uVar14 >> 0x10);
  uVar59 = (int8_t)(uVar14 >> 0x18);
  uVar14 = CONCAT13(in_XMM4_Bp,CONCAT12(in_XMM4_Bo,CONCAT11(in_XMM4_Bn,in_XMM4_Bm))) ^
           CONCAT13(in_XMM4_Bp,CONCAT12(in_XMM4_Bo,CONCAT11(in_XMM4_Bn,in_XMM4_Bm)));
  uVar60 = (int8_t)uVar14;
  uVar61 = (int8_t)(uVar14 >> 8);
  uVar62 = (int8_t)(uVar14 >> 0x10);
  uVar63 = (int8_t)(uVar14 >> 0x18);
  uVar14 = 0;
  lVar15 = 2;
  lVar17 = 0;
  lVar16 = 0;
  *param_5 = 0;
  do {
    pauVar13 = (int8_t (*) [16])(lVar16 + param_1);
    lVar11 = 2;
    do {
      pauVar9 = (int8_t (*) [16])(param_3 + ((lVar17 - lVar16) - param_1) + (longlong)pauVar13);
      auVar64[4] = uVar52;
      auVar64._0_4_ = uVar1;
      auVar64[5] = uVar53;
      auVar64[6] = uVar54;
      auVar64[7] = uVar55;
      auVar64[8] = uVar56;
      auVar64[9] = uVar57;
      auVar64[10] = uVar58;
      auVar64[0xb] = uVar59;
      auVar64[0xc] = uVar60;
      auVar64[0xd] = uVar61;
      auVar64[0xe] = uVar62;
      auVar64[0xf] = uVar63;
      auVar70[4] = uVar52;
      auVar70._0_4_ = uVar1;
      auVar70[5] = uVar53;
      auVar70[6] = uVar54;
      auVar70[7] = uVar55;
      auVar70[8] = uVar56;
      auVar70[9] = uVar57;
      auVar70[10] = uVar58;
      auVar70[0xb] = uVar59;
      auVar70[0xc] = uVar60;
      auVar70[0xd] = uVar61;
      auVar70[0xe] = uVar62;
      auVar70[0xf] = uVar63;
      lVar10 = 0x10;
      pauVar8 = pauVar13;
      do {
        auVar48 = *pauVar8;
        pauVar8 = (int8_t (*) [16])(*pauVar8 + param_2);
        auVar39 = *pauVar9;
        pauVar9 = (int8_t (*) [16])(*pauVar9 + param_4);
        sVar40 = CONCAT11(uVar56,auVar48[8]);
        uVar41 = CONCAT13(uVar57,CONCAT12(auVar48[9],sVar40));
        uVar42 = CONCAT15(uVar58,CONCAT14(auVar48[10],uVar41));
        uVar43 = CONCAT17(uVar59,CONCAT16(auVar48[0xb],uVar42));
        auVar44._0_10_ = CONCAT19(uVar60,CONCAT18(auVar48[0xc],uVar43));
        auVar44[10] = auVar48[0xd];
        auVar44[0xb] = uVar61;
        auVar45[0xc] = auVar48[0xe];
        auVar45._0_12_ = auVar44;
        auVar45[0xd] = uVar62;
        auVar46[0xe] = auVar48[0xf];
        auVar46._0_14_ = auVar45;
        auVar46[0xf] = uVar63;
        auVar38._0_14_ = auVar48._0_14_;
        auVar38[0xe] = auVar48[7];
        auVar38[0xf] = uVar55;
        auVar37._14_2_ = auVar38._14_2_;
        auVar37._0_13_ = auVar48._0_13_;
        auVar37[0xd] = uVar54;
        auVar36._13_3_ = auVar37._13_3_;
        auVar36._0_12_ = auVar48._0_12_;
        auVar36[0xc] = auVar48[6];
        auVar35._12_4_ = auVar36._12_4_;
        auVar35._0_11_ = auVar48._0_11_;
        auVar35[0xb] = uVar53;
        auVar34._11_5_ = auVar35._11_5_;
        auVar34._0_10_ = auVar48._0_10_;
        auVar34[10] = auVar48[5];
        auVar33._10_6_ = auVar34._10_6_;
        auVar33._0_9_ = auVar48._0_9_;
        auVar33[9] = uVar52;
        auVar32._9_7_ = auVar33._9_7_;
        auVar32._0_8_ = auVar48._0_8_;
        auVar32[8] = auVar48[4];
        Var4 = CONCAT91(CONCAT81(auVar32._8_8_,uVar51),auVar48[3]);
        auVar3._2_10_ = Var4;
        auVar3[1] = uVar50;
        auVar3[0] = auVar48[2];
        auVar2._2_12_ = auVar3;
        auVar2[1] = uVar49;
        auVar2[0] = auVar48[1];
        auVar24._0_14_ = auVar39._0_14_;
        auVar24[0xe] = auVar39[7];
        auVar24[0xf] = uVar55;
        auVar23._14_2_ = auVar24._14_2_;
        auVar23._0_13_ = auVar39._0_13_;
        auVar23[0xd] = uVar54;
        auVar22._13_3_ = auVar23._13_3_;
        auVar22._0_12_ = auVar39._0_12_;
        auVar22[0xc] = auVar39[6];
        auVar21._12_4_ = auVar22._12_4_;
        auVar21._0_11_ = auVar39._0_11_;
        auVar21[0xb] = uVar53;
        auVar20._11_5_ = auVar21._11_5_;
        auVar20._0_10_ = auVar39._0_10_;
        auVar20[10] = auVar39[5];
        auVar19._10_6_ = auVar20._10_6_;
        auVar19._0_9_ = auVar39._0_9_;
        auVar19[9] = uVar52;
        auVar18._9_7_ = auVar19._9_7_;
        auVar18._0_8_ = auVar39._0_8_;
        auVar18[8] = auVar39[4];
        Var7 = CONCAT91(CONCAT81(auVar18._8_8_,uVar51),auVar39[3]);
        auVar6._2_10_ = Var7;
        auVar6[1] = uVar50;
        auVar6[0] = auVar39[2];
        auVar5._2_12_ = auVar6;
        auVar5[1] = uVar49;
        auVar5[0] = auVar39[1];
        sVar25 = CONCAT11(uVar56,auVar39[8]);
        uVar26 = CONCAT13(uVar57,CONCAT12(auVar39[9],sVar25));
        uVar27 = CONCAT15(uVar58,CONCAT14(auVar39[10],uVar26));
        uVar28 = CONCAT17(uVar59,CONCAT16(auVar39[0xb],uVar27));
        auVar29._0_10_ = CONCAT19(uVar60,CONCAT18(auVar39[0xc],uVar28));
        auVar29[10] = auVar39[0xd];
        auVar29[0xb] = uVar61;
        auVar30[0xc] = auVar39[0xe];
        auVar30._0_12_ = auVar29;
        auVar30[0xd] = uVar62;
        auVar31[0xe] = auVar39[0xf];
        auVar31._0_14_ = auVar30;
        auVar31[0xf] = uVar63;
        auVar48._0_2_ = CONCAT11((char)uVar1,auVar48[0]) - CONCAT11((char)uVar1,auVar39[0]);
        auVar48._2_2_ = auVar2._0_2_ - auVar5._0_2_;
        auVar48._4_2_ = auVar3._0_2_ - auVar6._0_2_;
        auVar48._6_2_ = (short)Var4 - (short)Var7;
        auVar48._8_2_ = auVar32._8_2_ - auVar18._8_2_;
        auVar48._10_2_ = auVar34._10_2_ - auVar20._10_2_;
        auVar48._12_2_ = auVar36._12_2_ - auVar22._12_2_;
        auVar48._14_2_ = auVar37._14_2_ - auVar23._14_2_;
        auVar47._0_2_ = sVar40 - sVar25;
        auVar47._2_2_ = (short)((uint)uVar41 >> 0x10) - (short)((uint)uVar26 >> 0x10);
        auVar47._4_2_ = (short)((uint6)uVar42 >> 0x20) - (short)((uint6)uVar27 >> 0x20);
        auVar47._6_2_ = (short)((ulonglong)uVar43 >> 0x30) - (short)((ulonglong)uVar28 >> 0x30);
        auVar47._8_2_ =
             (short)((unkuint10)auVar44._0_10_ >> 0x40) - (short)((unkuint10)auVar29._0_10_ >> 0x40)
        ;
        auVar47._10_2_ = auVar44._10_2_ - auVar29._10_2_;
        auVar47._12_2_ = auVar45._12_2_ - auVar30._12_2_;
        auVar47._14_2_ = auVar46._14_2_ - auVar31._14_2_;
        auVar39 = pmaddwd(auVar48,auVar48);
        sVar25 = auVar64._2_2_;
        sVar40 = auVar64._4_2_;
        sVar65 = auVar64._6_2_;
        sVar66 = auVar64._8_2_;
        sVar67 = auVar64._10_2_;
        sVar68 = auVar64._12_2_;
        sVar69 = auVar64._14_2_;
        auVar64._0_2_ = auVar48._0_2_ + auVar64._0_2_ + auVar47._0_2_;
        auVar64._2_2_ = auVar48._2_2_ + sVar25 + auVar47._2_2_;
        auVar64._4_2_ = auVar48._4_2_ + sVar40 + auVar47._4_2_;
        auVar64._6_2_ = auVar48._6_2_ + sVar65 + auVar47._6_2_;
        auVar64._8_2_ = auVar48._8_2_ + sVar66 + auVar47._8_2_;
        auVar64._10_2_ = auVar48._10_2_ + sVar67 + auVar47._10_2_;
        auVar64._12_2_ = auVar48._12_2_ + sVar68 + auVar47._12_2_;
        auVar64._14_2_ = auVar48._14_2_ + sVar69 + auVar47._14_2_;
        auVar48 = pmaddwd(auVar47,auVar47);
        iVar71 = auVar70._4_4_;
        iVar72 = auVar70._8_4_;
        iVar73 = auVar70._12_4_;
        auVar70._0_4_ = auVar39._0_4_ + auVar70._0_4_ + auVar48._0_4_;
        auVar70._4_4_ = auVar39._4_4_ + iVar71 + auVar48._4_4_;
        auVar70._8_4_ = auVar39._8_4_ + iVar72 + auVar48._8_4_;
        auVar70._12_4_ = auVar39._12_4_ + iVar73 + auVar48._12_4_;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      pauVar13 = pauVar13 + 1;
      uVar14 = uVar14 + auVar70._12_4_ + auVar70._4_4_ + auVar70._8_4_ + auVar70._0_4_;
      *param_5 = uVar14;
      iVar12 = iVar12 + (short)(auVar64._12_2_ + auVar64._4_2_ + auVar64._8_2_ + auVar64._0_2_) +
               (int)(short)(auVar64._14_2_ + auVar64._6_2_ + auVar64._10_2_ + auVar64._2_2_);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    lVar16 = lVar16 + (param_2 << 4);
    lVar17 = lVar17 + (param_4 << 4);
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  return (ulonglong)uVar14 - ((longlong)iVar12 * (longlong)iVar12 >> 10) & 0xffffffff;
}



ulonglong FUN_180690200(longlong param_1,int param_2,longlong param_3,int param_4,uint *param_5)

{
  uint uVar1;
  int8_t auVar2 [14];
  int8_t auVar3 [12];
  unkbyte10 Var4;
  int8_t auVar5 [14];
  int8_t auVar6 [12];
  unkbyte10 Var7;
  int8_t (*pauVar8) [16];
  int8_t (*pauVar9) [16];
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int8_t (*pauVar13) [16];
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int8_t auVar18 [16];
  short sVar25;
  int8_t auVar32 [16];
  int8_t auVar39 [16];
  short sVar40;
  int8_t auVar47 [16];
  int8_t auVar48 [16];
  int8_t in_XMM4_Ba;
  int8_t in_XMM4_Bb;
  int8_t uVar49;
  int8_t in_XMM4_Bc;
  int8_t uVar50;
  int8_t in_XMM4_Bd;
  int8_t uVar51;
  int8_t in_XMM4_Be;
  int8_t uVar52;
  int8_t in_XMM4_Bf;
  int8_t uVar53;
  int8_t in_XMM4_Bg;
  int8_t uVar54;
  int8_t in_XMM4_Bh;
  int8_t uVar55;
  int8_t in_XMM4_Bi;
  int8_t uVar56;
  int8_t in_XMM4_Bj;
  int8_t uVar57;
  int8_t in_XMM4_Bk;
  int8_t uVar58;
  int8_t in_XMM4_Bl;
  int8_t uVar59;
  int8_t in_XMM4_Bm;
  int8_t uVar60;
  int8_t in_XMM4_Bn;
  int8_t uVar61;
  int8_t in_XMM4_Bo;
  int8_t uVar62;
  int8_t in_XMM4_Bp;
  int8_t uVar63;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  int8_t auVar64 [16];
  int iVar71;
  int iVar72;
  int iVar73;
  int8_t auVar70 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int32_t uVar26;
  undefined6 uVar27;
  uint64_t uVar28;
  int8_t auVar29 [12];
  int8_t auVar30 [14];
  int8_t auVar31 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  int32_t uVar41;
  undefined6 uVar42;
  uint64_t uVar43;
  int8_t auVar44 [12];
  int8_t auVar45 [14];
  int8_t auVar46 [16];
  
  iVar12 = 0;
  uVar1 = CONCAT13(in_XMM4_Bd,CONCAT12(in_XMM4_Bc,CONCAT11(in_XMM4_Bb,in_XMM4_Ba))) ^
          CONCAT13(in_XMM4_Bd,CONCAT12(in_XMM4_Bc,CONCAT11(in_XMM4_Bb,in_XMM4_Ba)));
  uVar49 = (int8_t)(uVar1 >> 8);
  uVar50 = (int8_t)(uVar1 >> 0x10);
  uVar51 = (int8_t)(uVar1 >> 0x18);
  uVar14 = CONCAT13(in_XMM4_Bh,CONCAT12(in_XMM4_Bg,CONCAT11(in_XMM4_Bf,in_XMM4_Be))) ^
           CONCAT13(in_XMM4_Bh,CONCAT12(in_XMM4_Bg,CONCAT11(in_XMM4_Bf,in_XMM4_Be)));
  uVar52 = (int8_t)uVar14;
  uVar53 = (int8_t)(uVar14 >> 8);
  uVar54 = (int8_t)(uVar14 >> 0x10);
  uVar55 = (int8_t)(uVar14 >> 0x18);
  uVar14 = CONCAT13(in_XMM4_Bl,CONCAT12(in_XMM4_Bk,CONCAT11(in_XMM4_Bj,in_XMM4_Bi))) ^
           CONCAT13(in_XMM4_Bl,CONCAT12(in_XMM4_Bk,CONCAT11(in_XMM4_Bj,in_XMM4_Bi)));
  uVar56 = (int8_t)uVar14;
  uVar57 = (int8_t)(uVar14 >> 8);
  uVar58 = (int8_t)(uVar14 >> 0x10);
  uVar59 = (int8_t)(uVar14 >> 0x18);
  uVar14 = CONCAT13(in_XMM4_Bp,CONCAT12(in_XMM4_Bo,CONCAT11(in_XMM4_Bn,in_XMM4_Bm))) ^
           CONCAT13(in_XMM4_Bp,CONCAT12(in_XMM4_Bo,CONCAT11(in_XMM4_Bn,in_XMM4_Bm)));
  uVar60 = (int8_t)uVar14;
  uVar61 = (int8_t)(uVar14 >> 8);
  uVar62 = (int8_t)(uVar14 >> 0x10);
  uVar63 = (int8_t)(uVar14 >> 0x18);
  uVar14 = 0;
  lVar15 = 2;
  lVar17 = 0;
  lVar16 = 0;
  *param_5 = 0;
  do {
    pauVar13 = (int8_t (*) [16])(lVar16 + param_1);
    lVar11 = 4;
    do {
      pauVar9 = (int8_t (*) [16])(param_3 + ((lVar17 - lVar16) - param_1) + (longlong)pauVar13);
      auVar64[4] = uVar52;
      auVar64._0_4_ = uVar1;
      auVar64[5] = uVar53;
      auVar64[6] = uVar54;
      auVar64[7] = uVar55;
      auVar64[8] = uVar56;
      auVar64[9] = uVar57;
      auVar64[10] = uVar58;
      auVar64[0xb] = uVar59;
      auVar64[0xc] = uVar60;
      auVar64[0xd] = uVar61;
      auVar64[0xe] = uVar62;
      auVar64[0xf] = uVar63;
      auVar70[4] = uVar52;
      auVar70._0_4_ = uVar1;
      auVar70[5] = uVar53;
      auVar70[6] = uVar54;
      auVar70[7] = uVar55;
      auVar70[8] = uVar56;
      auVar70[9] = uVar57;
      auVar70[10] = uVar58;
      auVar70[0xb] = uVar59;
      auVar70[0xc] = uVar60;
      auVar70[0xd] = uVar61;
      auVar70[0xe] = uVar62;
      auVar70[0xf] = uVar63;
      lVar10 = 0x10;
      pauVar8 = pauVar13;
      do {
        auVar48 = *pauVar8;
        pauVar8 = (int8_t (*) [16])(*pauVar8 + param_2);
        auVar39 = *pauVar9;
        pauVar9 = (int8_t (*) [16])(*pauVar9 + param_4);
        sVar40 = CONCAT11(uVar56,auVar48[8]);
        uVar41 = CONCAT13(uVar57,CONCAT12(auVar48[9],sVar40));
        uVar42 = CONCAT15(uVar58,CONCAT14(auVar48[10],uVar41));
        uVar43 = CONCAT17(uVar59,CONCAT16(auVar48[0xb],uVar42));
        auVar44._0_10_ = CONCAT19(uVar60,CONCAT18(auVar48[0xc],uVar43));
        auVar44[10] = auVar48[0xd];
        auVar44[0xb] = uVar61;
        auVar45[0xc] = auVar48[0xe];
        auVar45._0_12_ = auVar44;
        auVar45[0xd] = uVar62;
        auVar46[0xe] = auVar48[0xf];
        auVar46._0_14_ = auVar45;
        auVar46[0xf] = uVar63;
        auVar38._0_14_ = auVar48._0_14_;
        auVar38[0xe] = auVar48[7];
        auVar38[0xf] = uVar55;
        auVar37._14_2_ = auVar38._14_2_;
        auVar37._0_13_ = auVar48._0_13_;
        auVar37[0xd] = uVar54;
        auVar36._13_3_ = auVar37._13_3_;
        auVar36._0_12_ = auVar48._0_12_;
        auVar36[0xc] = auVar48[6];
        auVar35._12_4_ = auVar36._12_4_;
        auVar35._0_11_ = auVar48._0_11_;
        auVar35[0xb] = uVar53;
        auVar34._11_5_ = auVar35._11_5_;
        auVar34._0_10_ = auVar48._0_10_;
        auVar34[10] = auVar48[5];
        auVar33._10_6_ = auVar34._10_6_;
        auVar33._0_9_ = auVar48._0_9_;
        auVar33[9] = uVar52;
        auVar32._9_7_ = auVar33._9_7_;
        auVar32._0_8_ = auVar48._0_8_;
        auVar32[8] = auVar48[4];
        Var4 = CONCAT91(CONCAT81(auVar32._8_8_,uVar51),auVar48[3]);
        auVar3._2_10_ = Var4;
        auVar3[1] = uVar50;
        auVar3[0] = auVar48[2];
        auVar2._2_12_ = auVar3;
        auVar2[1] = uVar49;
        auVar2[0] = auVar48[1];
        auVar24._0_14_ = auVar39._0_14_;
        auVar24[0xe] = auVar39[7];
        auVar24[0xf] = uVar55;
        auVar23._14_2_ = auVar24._14_2_;
        auVar23._0_13_ = auVar39._0_13_;
        auVar23[0xd] = uVar54;
        auVar22._13_3_ = auVar23._13_3_;
        auVar22._0_12_ = auVar39._0_12_;
        auVar22[0xc] = auVar39[6];
        auVar21._12_4_ = auVar22._12_4_;
        auVar21._0_11_ = auVar39._0_11_;
        auVar21[0xb] = uVar53;
        auVar20._11_5_ = auVar21._11_5_;
        auVar20._0_10_ = auVar39._0_10_;
        auVar20[10] = auVar39[5];
        auVar19._10_6_ = auVar20._10_6_;
        auVar19._0_9_ = auVar39._0_9_;
        auVar19[9] = uVar52;
        auVar18._9_7_ = auVar19._9_7_;
        auVar18._0_8_ = auVar39._0_8_;
        auVar18[8] = auVar39[4];
        Var7 = CONCAT91(CONCAT81(auVar18._8_8_,uVar51),auVar39[3]);
        auVar6._2_10_ = Var7;
        auVar6[1] = uVar50;
        auVar6[0] = auVar39[2];
        auVar5._2_12_ = auVar6;
        auVar5[1] = uVar49;
        auVar5[0] = auVar39[1];
        sVar25 = CONCAT11(uVar56,auVar39[8]);
        uVar26 = CONCAT13(uVar57,CONCAT12(auVar39[9],sVar25));
        uVar27 = CONCAT15(uVar58,CONCAT14(auVar39[10],uVar26));
        uVar28 = CONCAT17(uVar59,CONCAT16(auVar39[0xb],uVar27));
        auVar29._0_10_ = CONCAT19(uVar60,CONCAT18(auVar39[0xc],uVar28));
        auVar29[10] = auVar39[0xd];
        auVar29[0xb] = uVar61;
        auVar30[0xc] = auVar39[0xe];
        auVar30._0_12_ = auVar29;
        auVar30[0xd] = uVar62;
        auVar31[0xe] = auVar39[0xf];
        auVar31._0_14_ = auVar30;
        auVar31[0xf] = uVar63;
        auVar48._0_2_ = CONCAT11((char)uVar1,auVar48[0]) - CONCAT11((char)uVar1,auVar39[0]);
        auVar48._2_2_ = auVar2._0_2_ - auVar5._0_2_;
        auVar48._4_2_ = auVar3._0_2_ - auVar6._0_2_;
        auVar48._6_2_ = (short)Var4 - (short)Var7;
        auVar48._8_2_ = auVar32._8_2_ - auVar18._8_2_;
        auVar48._10_2_ = auVar34._10_2_ - auVar20._10_2_;
        auVar48._12_2_ = auVar36._12_2_ - auVar22._12_2_;
        auVar48._14_2_ = auVar37._14_2_ - auVar23._14_2_;
        auVar47._0_2_ = sVar40 - sVar25;
        auVar47._2_2_ = (short)((uint)uVar41 >> 0x10) - (short)((uint)uVar26 >> 0x10);
        auVar47._4_2_ = (short)((uint6)uVar42 >> 0x20) - (short)((uint6)uVar27 >> 0x20);
        auVar47._6_2_ = (short)((ulonglong)uVar43 >> 0x30) - (short)((ulonglong)uVar28 >> 0x30);
        auVar47._8_2_ =
             (short)((unkuint10)auVar44._0_10_ >> 0x40) - (short)((unkuint10)auVar29._0_10_ >> 0x40)
        ;
        auVar47._10_2_ = auVar44._10_2_ - auVar29._10_2_;
        auVar47._12_2_ = auVar45._12_2_ - auVar30._12_2_;
        auVar47._14_2_ = auVar46._14_2_ - auVar31._14_2_;
        auVar39 = pmaddwd(auVar48,auVar48);
        sVar25 = auVar64._2_2_;
        sVar40 = auVar64._4_2_;
        sVar65 = auVar64._6_2_;
        sVar66 = auVar64._8_2_;
        sVar67 = auVar64._10_2_;
        sVar68 = auVar64._12_2_;
        sVar69 = auVar64._14_2_;
        auVar64._0_2_ = auVar48._0_2_ + auVar64._0_2_ + auVar47._0_2_;
        auVar64._2_2_ = auVar48._2_2_ + sVar25 + auVar47._2_2_;
        auVar64._4_2_ = auVar48._4_2_ + sVar40 + auVar47._4_2_;
        auVar64._6_2_ = auVar48._6_2_ + sVar65 + auVar47._6_2_;
        auVar64._8_2_ = auVar48._8_2_ + sVar66 + auVar47._8_2_;
        auVar64._10_2_ = auVar48._10_2_ + sVar67 + auVar47._10_2_;
        auVar64._12_2_ = auVar48._12_2_ + sVar68 + auVar47._12_2_;
        auVar64._14_2_ = auVar48._14_2_ + sVar69 + auVar47._14_2_;
        auVar48 = pmaddwd(auVar47,auVar47);
        iVar71 = auVar70._4_4_;
        iVar72 = auVar70._8_4_;
        iVar73 = auVar70._12_4_;
        auVar70._0_4_ = auVar39._0_4_ + auVar70._0_4_ + auVar48._0_4_;
        auVar70._4_4_ = auVar39._4_4_ + iVar71 + auVar48._4_4_;
        auVar70._8_4_ = auVar39._8_4_ + iVar72 + auVar48._8_4_;
        auVar70._12_4_ = auVar39._12_4_ + iVar73 + auVar48._12_4_;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      pauVar13 = pauVar13 + 1;
      uVar14 = uVar14 + auVar70._12_4_ + auVar70._4_4_ + auVar70._8_4_ + auVar70._0_4_;
      *param_5 = uVar14;
      iVar12 = iVar12 + (short)(auVar64._12_2_ + auVar64._4_2_ + auVar64._8_2_ + auVar64._0_2_) +
               (int)(short)(auVar64._14_2_ + auVar64._6_2_ + auVar64._10_2_ + auVar64._2_2_);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    lVar16 = lVar16 + (param_2 << 4);
    lVar17 = lVar17 + (param_4 << 4);
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  return (ulonglong)uVar14 - ((longlong)iVar12 * (longlong)iVar12 >> 0xb) & 0xffffffff;
}



ulonglong FUN_1806903c0(longlong param_1,int param_2,longlong param_3,int param_4,uint *param_5)

{
  uint uVar1;
  int8_t auVar2 [14];
  int8_t auVar3 [12];
  unkbyte10 Var4;
  int8_t auVar5 [14];
  int8_t auVar6 [12];
  unkbyte10 Var7;
  int8_t (*pauVar8) [16];
  int8_t (*pauVar9) [16];
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int8_t (*pauVar13) [16];
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int8_t auVar18 [16];
  short sVar25;
  int8_t auVar32 [16];
  int8_t auVar39 [16];
  short sVar40;
  int8_t auVar47 [16];
  int8_t auVar48 [16];
  int8_t in_XMM4_Ba;
  int8_t in_XMM4_Bb;
  int8_t uVar49;
  int8_t in_XMM4_Bc;
  int8_t uVar50;
  int8_t in_XMM4_Bd;
  int8_t uVar51;
  int8_t in_XMM4_Be;
  int8_t uVar52;
  int8_t in_XMM4_Bf;
  int8_t uVar53;
  int8_t in_XMM4_Bg;
  int8_t uVar54;
  int8_t in_XMM4_Bh;
  int8_t uVar55;
  int8_t in_XMM4_Bi;
  int8_t uVar56;
  int8_t in_XMM4_Bj;
  int8_t uVar57;
  int8_t in_XMM4_Bk;
  int8_t uVar58;
  int8_t in_XMM4_Bl;
  int8_t uVar59;
  int8_t in_XMM4_Bm;
  int8_t uVar60;
  int8_t in_XMM4_Bn;
  int8_t uVar61;
  int8_t in_XMM4_Bo;
  int8_t uVar62;
  int8_t in_XMM4_Bp;
  int8_t uVar63;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  int8_t auVar64 [16];
  int iVar71;
  int iVar72;
  int iVar73;
  int8_t auVar70 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int32_t uVar26;
  undefined6 uVar27;
  uint64_t uVar28;
  int8_t auVar29 [12];
  int8_t auVar30 [14];
  int8_t auVar31 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  int8_t auVar35 [16];
  int8_t auVar36 [16];
  int8_t auVar37 [16];
  int8_t auVar38 [16];
  int32_t uVar41;
  undefined6 uVar42;
  uint64_t uVar43;
  int8_t auVar44 [12];
  int8_t auVar45 [14];
  int8_t auVar46 [16];
  
  iVar12 = 0;
  uVar1 = CONCAT13(in_XMM4_Bd,CONCAT12(in_XMM4_Bc,CONCAT11(in_XMM4_Bb,in_XMM4_Ba))) ^
          CONCAT13(in_XMM4_Bd,CONCAT12(in_XMM4_Bc,CONCAT11(in_XMM4_Bb,in_XMM4_Ba)));
  uVar49 = (int8_t)(uVar1 >> 8);
  uVar50 = (int8_t)(uVar1 >> 0x10);
  uVar51 = (int8_t)(uVar1 >> 0x18);
  uVar14 = CONCAT13(in_XMM4_Bh,CONCAT12(in_XMM4_Bg,CONCAT11(in_XMM4_Bf,in_XMM4_Be))) ^
           CONCAT13(in_XMM4_Bh,CONCAT12(in_XMM4_Bg,CONCAT11(in_XMM4_Bf,in_XMM4_Be)));
  uVar52 = (int8_t)uVar14;
  uVar53 = (int8_t)(uVar14 >> 8);
  uVar54 = (int8_t)(uVar14 >> 0x10);
  uVar55 = (int8_t)(uVar14 >> 0x18);
  uVar14 = CONCAT13(in_XMM4_Bl,CONCAT12(in_XMM4_Bk,CONCAT11(in_XMM4_Bj,in_XMM4_Bi))) ^
           CONCAT13(in_XMM4_Bl,CONCAT12(in_XMM4_Bk,CONCAT11(in_XMM4_Bj,in_XMM4_Bi)));
  uVar56 = (int8_t)uVar14;
  uVar57 = (int8_t)(uVar14 >> 8);
  uVar58 = (int8_t)(uVar14 >> 0x10);
  uVar59 = (int8_t)(uVar14 >> 0x18);
  uVar14 = CONCAT13(in_XMM4_Bp,CONCAT12(in_XMM4_Bo,CONCAT11(in_XMM4_Bn,in_XMM4_Bm))) ^
           CONCAT13(in_XMM4_Bp,CONCAT12(in_XMM4_Bo,CONCAT11(in_XMM4_Bn,in_XMM4_Bm)));
  uVar60 = (int8_t)uVar14;
  uVar61 = (int8_t)(uVar14 >> 8);
  uVar62 = (int8_t)(uVar14 >> 0x10);
  uVar63 = (int8_t)(uVar14 >> 0x18);
  uVar14 = 0;
  lVar15 = 4;
  lVar17 = 0;
  lVar16 = 0;
  *param_5 = 0;
  do {
    pauVar13 = (int8_t (*) [16])(lVar16 + param_1);
    lVar11 = 4;
    do {
      pauVar9 = (int8_t (*) [16])(param_3 + ((lVar17 - lVar16) - param_1) + (longlong)pauVar13);
      auVar64[4] = uVar52;
      auVar64._0_4_ = uVar1;
      auVar64[5] = uVar53;
      auVar64[6] = uVar54;
      auVar64[7] = uVar55;
      auVar64[8] = uVar56;
      auVar64[9] = uVar57;
      auVar64[10] = uVar58;
      auVar64[0xb] = uVar59;
      auVar64[0xc] = uVar60;
      auVar64[0xd] = uVar61;
      auVar64[0xe] = uVar62;
      auVar64[0xf] = uVar63;
      auVar70[4] = uVar52;
      auVar70._0_4_ = uVar1;
      auVar70[5] = uVar53;
      auVar70[6] = uVar54;
      auVar70[7] = uVar55;
      auVar70[8] = uVar56;
      auVar70[9] = uVar57;
      auVar70[10] = uVar58;
      auVar70[0xb] = uVar59;
      auVar70[0xc] = uVar60;
      auVar70[0xd] = uVar61;
      auVar70[0xe] = uVar62;
      auVar70[0xf] = uVar63;
      lVar10 = 0x10;
      pauVar8 = pauVar13;
      do {
        auVar48 = *pauVar8;
        pauVar8 = (int8_t (*) [16])(*pauVar8 + param_2);
        auVar39 = *pauVar9;
        pauVar9 = (int8_t (*) [16])(*pauVar9 + param_4);
        sVar40 = CONCAT11(uVar56,auVar48[8]);
        uVar41 = CONCAT13(uVar57,CONCAT12(auVar48[9],sVar40));
        uVar42 = CONCAT15(uVar58,CONCAT14(auVar48[10],uVar41));
        uVar43 = CONCAT17(uVar59,CONCAT16(auVar48[0xb],uVar42));
        auVar44._0_10_ = CONCAT19(uVar60,CONCAT18(auVar48[0xc],uVar43));
        auVar44[10] = auVar48[0xd];
        auVar44[0xb] = uVar61;
        auVar45[0xc] = auVar48[0xe];
        auVar45._0_12_ = auVar44;
        auVar45[0xd] = uVar62;
        auVar46[0xe] = auVar48[0xf];
        auVar46._0_14_ = auVar45;
        auVar46[0xf] = uVar63;
        auVar38._0_14_ = auVar48._0_14_;
        auVar38[0xe] = auVar48[7];
        auVar38[0xf] = uVar55;
        auVar37._14_2_ = auVar38._14_2_;
        auVar37._0_13_ = auVar48._0_13_;
        auVar37[0xd] = uVar54;
        auVar36._13_3_ = auVar37._13_3_;
        auVar36._0_12_ = auVar48._0_12_;
        auVar36[0xc] = auVar48[6];
        auVar35._12_4_ = auVar36._12_4_;
        auVar35._0_11_ = auVar48._0_11_;
        auVar35[0xb] = uVar53;
        auVar34._11_5_ = auVar35._11_5_;
        auVar34._0_10_ = auVar48._0_10_;
        auVar34[10] = auVar48[5];
        auVar33._10_6_ = auVar34._10_6_;
        auVar33._0_9_ = auVar48._0_9_;
        auVar33[9] = uVar52;
        auVar32._9_7_ = auVar33._9_7_;
        auVar32._0_8_ = auVar48._0_8_;
        auVar32[8] = auVar48[4];
        Var4 = CONCAT91(CONCAT81(auVar32._8_8_,uVar51),auVar48[3]);
        auVar3._2_10_ = Var4;
        auVar3[1] = uVar50;
        auVar3[0] = auVar48[2];
        auVar2._2_12_ = auVar3;
        auVar2[1] = uVar49;
        auVar2[0] = auVar48[1];
        auVar24._0_14_ = auVar39._0_14_;
        auVar24[0xe] = auVar39[7];
        auVar24[0xf] = uVar55;
        auVar23._14_2_ = auVar24._14_2_;
        auVar23._0_13_ = auVar39._0_13_;
        auVar23[0xd] = uVar54;
        auVar22._13_3_ = auVar23._13_3_;
        auVar22._0_12_ = auVar39._0_12_;
        auVar22[0xc] = auVar39[6];
        auVar21._12_4_ = auVar22._12_4_;
        auVar21._0_11_ = auVar39._0_11_;
        auVar21[0xb] = uVar53;
        auVar20._11_5_ = auVar21._11_5_;
        auVar20._0_10_ = auVar39._0_10_;
        auVar20[10] = auVar39[5];
        auVar19._10_6_ = auVar20._10_6_;
        auVar19._0_9_ = auVar39._0_9_;
        auVar19[9] = uVar52;
        auVar18._9_7_ = auVar19._9_7_;
        auVar18._0_8_ = auVar39._0_8_;
        auVar18[8] = auVar39[4];
        Var7 = CONCAT91(CONCAT81(auVar18._8_8_,uVar51),auVar39[3]);
        auVar6._2_10_ = Var7;
        auVar6[1] = uVar50;
        auVar6[0] = auVar39[2];
        auVar5._2_12_ = auVar6;
        auVar5[1] = uVar49;
        auVar5[0] = auVar39[1];
        sVar25 = CONCAT11(uVar56,auVar39[8]);
        uVar26 = CONCAT13(uVar57,CONCAT12(auVar39[9],sVar25));
        uVar27 = CONCAT15(uVar58,CONCAT14(auVar39[10],uVar26));
        uVar28 = CONCAT17(uVar59,CONCAT16(auVar39[0xb],uVar27));
        auVar29._0_10_ = CONCAT19(uVar60,CONCAT18(auVar39[0xc],uVar28));
        auVar29[10] = auVar39[0xd];
        auVar29[0xb] = uVar61;
        auVar30[0xc] = auVar39[0xe];
        auVar30._0_12_ = auVar29;
        auVar30[0xd] = uVar62;
        auVar31[0xe] = auVar39[0xf];
        auVar31._0_14_ = auVar30;
        auVar31[0xf] = uVar63;
        auVar48._0_2_ = CONCAT11((char)uVar1,auVar48[0]) - CONCAT11((char)uVar1,auVar39[0]);
        auVar48._2_2_ = auVar2._0_2_ - auVar5._0_2_;
        auVar48._4_2_ = auVar3._0_2_ - auVar6._0_2_;
        auVar48._6_2_ = (short)Var4 - (short)Var7;
        auVar48._8_2_ = auVar32._8_2_ - auVar18._8_2_;
        auVar48._10_2_ = auVar34._10_2_ - auVar20._10_2_;
        auVar48._12_2_ = auVar36._12_2_ - auVar22._12_2_;
        auVar48._14_2_ = auVar37._14_2_ - auVar23._14_2_;
        auVar47._0_2_ = sVar40 - sVar25;
        auVar47._2_2_ = (short)((uint)uVar41 >> 0x10) - (short)((uint)uVar26 >> 0x10);
        auVar47._4_2_ = (short)((uint6)uVar42 >> 0x20) - (short)((uint6)uVar27 >> 0x20);
        auVar47._6_2_ = (short)((ulonglong)uVar43 >> 0x30) - (short)((ulonglong)uVar28 >> 0x30);
        auVar47._8_2_ =
             (short)((unkuint10)auVar44._0_10_ >> 0x40) - (short)((unkuint10)auVar29._0_10_ >> 0x40)
        ;
        auVar47._10_2_ = auVar44._10_2_ - auVar29._10_2_;
        auVar47._12_2_ = auVar45._12_2_ - auVar30._12_2_;
        auVar47._14_2_ = auVar46._14_2_ - auVar31._14_2_;
        auVar39 = pmaddwd(auVar48,auVar48);
        sVar25 = auVar64._2_2_;
        sVar40 = auVar64._4_2_;
        sVar65 = auVar64._6_2_;
        sVar66 = auVar64._8_2_;
        sVar67 = auVar64._10_2_;
        sVar68 = auVar64._12_2_;
        sVar69 = auVar64._14_2_;
        auVar64._0_2_ = auVar48._0_2_ + auVar64._0_2_ + auVar47._0_2_;
        auVar64._2_2_ = auVar48._2_2_ + sVar25 + auVar47._2_2_;
        auVar64._4_2_ = auVar48._4_2_ + sVar40 + auVar47._4_2_;
        auVar64._6_2_ = auVar48._6_2_ + sVar65 + auVar47._6_2_;
        auVar64._8_2_ = auVar48._8_2_ + sVar66 + auVar47._8_2_;
        auVar64._10_2_ = auVar48._10_2_ + sVar67 + auVar47._10_2_;
        auVar64._12_2_ = auVar48._12_2_ + sVar68 + auVar47._12_2_;
        auVar64._14_2_ = auVar48._14_2_ + sVar69 + auVar47._14_2_;
        auVar48 = pmaddwd(auVar47,auVar47);
        iVar71 = auVar70._4_4_;
        iVar72 = auVar70._8_4_;
        iVar73 = auVar70._12_4_;
        auVar70._0_4_ = auVar39._0_4_ + auVar70._0_4_ + auVar48._0_4_;
        auVar70._4_4_ = auVar39._4_4_ + iVar71 + auVar48._4_4_;
        auVar70._8_4_ = auVar39._8_4_ + iVar72 + auVar48._8_4_;
        auVar70._12_4_ = auVar39._12_4_ + iVar73 + auVar48._12_4_;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      pauVar13 = pauVar13 + 1;
      uVar14 = uVar14 + auVar70._12_4_ + auVar70._4_4_ + auVar70._8_4_ + auVar70._0_4_;
      *param_5 = uVar14;
      iVar12 = iVar12 + (short)(auVar64._12_2_ + auVar64._4_2_ + auVar64._8_2_ + auVar64._0_2_) +
               (int)(short)(auVar64._14_2_ + auVar64._6_2_ + auVar64._10_2_ + auVar64._2_2_);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    lVar16 = lVar16 + (param_2 << 4);
    lVar17 = lVar17 + (param_4 << 4);
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  return (ulonglong)uVar14 - ((longlong)iVar12 * (longlong)iVar12 >> 0xc) & 0xffffffff;
}



int FUN_180690580(void)

{
  int *in_stack_00000028;
  int32_t uStack_18;
  
  func_0x00018068d390();
  return *in_stack_00000028 - ((uint)(uStack_18 * uStack_18) >> 6);
}







