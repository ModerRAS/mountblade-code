#include "TaleWorlds.Native.Split.h"

// 99_part_11_part019.c - 10 个函数

// 函数: void FUN_1806ee500(uint64_t param_1,longlong *param_2,uint64_t param_3,longlong *param_4,
void FUN_1806ee500(uint64_t param_1,longlong *param_2,uint64_t param_3,longlong *param_4,
                  uint64_t param_5)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  int16_t *puVar5;
  longlong lVar6;
  void *puVar7;
  ulonglong uVar8;
  uint uVar9;
  int8_t *puVar10;
  uint64_t uVar11;
  int8_t auStackX_10 [8];
  uint64_t uStack_168;
  int32_t uStack_160;
  int32_t uStack_158;
  longlong lStack_150;
  int32_t uStack_148;
  int16_t uStack_144;
  uint64_t *puStack_140;
  longlong lStack_138;
  ulonglong uStack_130;
  uint64_t **ppuStack_128;
  longlong *plStack_120;
  uint64_t *puStack_118;
  uint64_t *puStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  int8_t auStack_e8 [192];
  
  uVar8 = 0;
  uStack_158 = 0;
  uStack_148 = 0;
  lStack_150 = 0;
  uStack_168 = 0;
  uStack_160 = 1;
  uStack_144 = 0;
  uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  uStack_168 = CONCAT44(uStack_168._4_4_,uVar2);
  uVar2 = (**(code **)(*param_2 + 0x40))(param_2);
  uStack_168 = CONCAT44(uVar2,(int)uStack_168);
  uStack_160 = (**(code **)(*param_2 + 0x48))(param_2);
  uStack_158 = (**(code **)(*param_2 + 0x50))(param_2);
  lStack_150 = 0;
  uStack_148 = (**(code **)(*param_2 + 0x58))(param_2);
  puVar5 = (int16_t *)(**(code **)(*param_2 + 0x60))(param_2,auStackX_10);
  uStack_144 = *puVar5;
  iVar3 = (**(code **)(*param_2 + 0x40))(param_2);
  iVar4 = (**(code **)(*param_2 + 0x38))(param_2);
  puVar1 = (uint64_t *)
           CONCAT44(param_5._4_4_,
                    CONCAT13(param_5._3_1_,
                             CONCAT12(param_5._2_1_,CONCAT11(param_5._1_1_,(int8_t)param_5))));
  iVar3 = iVar3 * iVar4 * 4;
  lVar6 = FUN_1806f12b0(puVar1[2] + 8,iVar3);
  (**(code **)(*param_2 + 0x28))(param_2,lVar6,iVar3);
  puStack_140 = (uint64_t *)puVar1[2];
  lStack_138 = 0;
  uStack_130 = 0;
  lStack_150 = lVar6;
  __0PxHeightFieldDescGeneratedInfo_physx__QEAA_XZ(auStack_e8);
  ppuStack_128 = &puStack_140;
  puStack_118 = &uStack_168;
  uStack_100 = 0;
  uStack_f8 = 0;
  plStack_120 = param_4;
  puStack_110 = puVar1;
  uStack_108 = param_3;
  FUN_1806f08b0(auStack_e8,&ppuStack_128,0);
  if ((((uStack_130 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_130)) && (lStack_138 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_140 + 0x10))();
  }
  uVar9 = uStack_168._4_4_ * (int)uStack_168;
  if ((uVar9 != 0) && (lStack_150 != 0)) {
    if (uVar9 != 0) {
      puVar10 = (int8_t *)(lStack_150 + 2);
      do {
        iVar3 = (int)uVar8;
        if ((iVar3 == 0) || (iVar3 != (int)(uVar8 / 6) * 6)) {
          uVar11 = 1;
          puVar7 = &system_data_c8e4;
        }
        else {
          uVar11 = 4;
          puVar7 = &UNK_18094e480;
        }
        (**(code **)*puVar1)(puVar1,puVar7,uVar11);
        param_5._0_1_ = puVar10[-2];
        param_5._1_1_ = puVar10[-1];
        param_5._2_1_ = *puVar10;
        param_5._3_1_ = puVar10[1];
        FUN_1806c4e00(puVar1,&UNK_180a063a0,
                      CONCAT13(param_5._3_1_,CONCAT12(param_5._2_1_,*(int16_t *)(puVar10 + -2))))
        ;
        uVar8 = (ulonglong)(iVar3 + 1U);
        puVar10 = puVar10 + 4;
      } while (iVar3 + 1U < uVar9);
    }
    param_5._0_1_ = 0;
    (**(code **)*puVar1)(puVar1,&param_5,1);
    (**(code **)(*param_4 + 0x10))(param_4,&UNK_18094e418,puVar1[4]);
    puVar1[3] = 0;
  }
  FUN_1806f1550(puVar1[2],lVar6);
  return;
}



uint64_t *
FUN_1806ee7a0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             uint64_t *param_5,uint64_t param_6)

{
  longlong lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t uStackX_10;
  uint64_t *puStack_1b8;
  longlong lStack_1b0;
  ulonglong uStack_1a8;
  uint64_t *puStack_1a0;
  longlong lStack_198;
  ulonglong uStack_190;
  uint64_t uStack_188;
  int32_t uStack_180;
  int32_t auStack_178 [2];
  uint64_t uStack_170;
  int32_t uStack_168;
  int16_t uStack_164;
  uint64_t **ppuStack_160;
  uint64_t **ppuStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t *puStack_130;
  longlong *plStack_128;
  uint64_t uStack_120;
  int8_t uStack_118;
  uint64_t *puStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int8_t auStack_f8 [224];
  
  puVar4 = param_5;
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar5 = param_5[2];
  uStack_168 = 0;
  auStack_178[0] = 0;
  uStack_170 = 0;
  uStack_188 = 0;
  uStack_180 = 1;
  uStack_164 = 0;
  uStackX_10 = (**(code **)(*param_4 + 0x18))(param_4);
  lStack_198 = 0;
  puStack_1a0 = &uStackX_10;
  puStack_1b8 = &uStackX_10;
  uStack_190 = 0;
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  __0PxHeightFieldDescGeneratedInfo_physx__QEAA_XZ(auStack_f8);
  ppuStack_160 = &puStack_1a0;
  param_5._0_1_ = 0;
  ppuStack_158 = &puStack_1b8;
  puStack_130 = &uStack_188;
  uStack_120 = param_6;
  puStack_110 = &param_5;
  uStack_118 = 1;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_150 = uVar2;
  uStack_148 = uVar3;
  uStack_140 = uVar5;
  uStack_138 = param_3;
  plStack_128 = param_4;
  FUN_1806f04f0(auStack_f8,&ppuStack_160,0);
  if ((((uStack_1a8 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_1a8)) && (lStack_1b0 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_1b8 + 0x10))();
  }
  if ((((uStack_190 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_190)) && (lStack_198 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_1a0 + 0x10))();
  }
  param_6 = 0;
  FUN_1806f0110(param_3,&UNK_18094e418,&param_6,auStack_178,&param_5,param_4);
  uStack_170 = param_6;
  lVar1 = *(longlong *)puVar4[1];
  uVar5 = (**(code **)(*(longlong *)*puVar4 + 0x120))();
  uVar5 = (**(code **)(lVar1 + 0x60))(puVar4[1],&uStack_188,uVar5);
  param_2[1] = uVar5;
  param_2[2] = uVar5;
  *param_2 = &UNK_18094bf18;
  return param_2;
}






// 函数: void FUN_1806ee9b0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806ee9b0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,longlong param_6)

{
  int32_t uVar1;
  uint64_t uVar2;
  void *puStack_118;
  void *puStack_110;
  uint64_t *puStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  int32_t uStack_f0;
  int32_t auStack_e8 [2];
  uint64_t uStack_e0;
  int32_t uStack_d8;
  int32_t uStack_d0;
  uint64_t uStack_c8;
  int32_t uStack_c0;
  int32_t uStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a0;
  int16_t uStack_9c;
  uint64_t uStack_98;
  uint64_t *puStack_90;
  uint64_t *puStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t *puStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  uint64_t uStack_38;
  int32_t uStack_30;
  
  uVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  uVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  FUN_1806f0e70(param_4,param_5,2,uVar2,uVar1,&UNK_180a1a470,&UNK_1806f1a70);
  if (*(longlong *)(param_6 + 8) != 0) {
    uStack_9c = 0xff;
    auStack_e8[0] = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0xff0000;
    uStack_e0 = (**(code **)(*param_2 + 0x30))(param_2);
    auStack_e8[0] = 0xc;
    uStack_d8 = (**(code **)(*param_2 + 0x28))(param_2);
    uStack_a0 = CONCAT22(uStack_a0._2_2_,2);
    uStack_98 = *(uint64_t *)(param_1 + 8);
    puStack_90 = &uStack_98;
    uStack_68 = 0;
    uStack_60 = 0;
    puStack_88 = &uStack_98;
    puStack_70 = &uStack_98;
    uStack_40 = 0x3f400000;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_3c = 0xffffffff;
    uStack_38 = 0;
    FUN_1806f1810(&puStack_70,0x40);
    puStack_108 = &uStack_98;
    uStack_30 = 0x20;
    puStack_118 = &UNK_18094e3c0;
    uStack_100 = 0;
    puStack_110 = &UNK_18094e3d0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    (**(code **)(**(longlong **)(param_6 + 8) + 0x38))
              (*(longlong **)(param_6 + 8),auStack_e8,&puStack_118,0);
    FUN_1806f0c90(param_4,param_5,0x10,uStack_f8,(int32_t)uStack_100,&UNK_18094e408,
                  &UNK_1806f0f60);
    puStack_118 = &UNK_18094e3c0;
    puStack_110 = &UNK_18094e3d0;
    FUN_1806f1550(puStack_108,uStack_f8);
    puStack_110 = &UNK_180a23da0;
    puStack_118 = &UNK_18094a210;
    FUN_1806f1080(&puStack_90);
  }
  return;
}






// 函数: void FUN_1806eea3d(void)
void FUN_1806eea3d(void)

{
  longlong lVar1;
  longlong *plVar2;
  int16_t in_AX;
  int32_t uVar3;
  uint64_t *unaff_RBP;
  longlong *unaff_RDI;
  int unaff_R13D;
  longlong unaff_R14;
  longlong unaff_R15;
  void *in_stack_00000040;
  void *in_stack_00000048;
  uint64_t *in_stack_00000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  int32_t in_stack_00000068;
  int32_t uStack0000000000000070;
  uint64_t uStack0000000000000078;
  
  *(int16_t *)((longlong)unaff_RBP + -0x44) = in_AX;
  lVar1 = *unaff_RDI;
  uStack0000000000000070 = 0;
  uStack0000000000000078 = 0;
  *(int32_t *)(unaff_RBP + -0x10) = 0;
  *(int32_t *)(unaff_RBP + -0xf) = 0;
  unaff_RBP[-0xe] = 0;
  *(int32_t *)(unaff_RBP + -0xd) = 0;
  *(int32_t *)(unaff_RBP + -0xc) = 0;
  unaff_RBP[-0xb] = 0;
  *(int32_t *)(unaff_RBP + -10) = 0;
  *(int32_t *)(unaff_RBP + -9) = 0xff0000;
  uStack0000000000000078 = (**(code **)(lVar1 + 0x30))();
  uStack0000000000000070 = 0xc;
  uVar3 = (**(code **)(*unaff_RDI + 0x28))();
  *(short *)(unaff_RBP + -9) = (short)unaff_R13D;
  *(int32_t *)(unaff_RBP + -0x10) = uVar3;
  unaff_RBP[-8] = *(uint64_t *)(unaff_R15 + 8);
  unaff_RBP[-2] = 0;
  unaff_RBP[-1] = 0;
  unaff_RBP[-7] = unaff_RBP + -8;
  unaff_RBP[-6] = unaff_RBP + -8;
  unaff_RBP[-3] = unaff_RBP + -8;
  *(int32_t *)(unaff_RBP + 3) = 0x3f400000;
  unaff_RBP[-5] = 0;
  unaff_RBP[-4] = 0;
  *unaff_RBP = 0;
  unaff_RBP[1] = 0;
  unaff_RBP[2] = 0;
  *(int32_t *)((longlong)unaff_RBP + 0x1c) = 0xffffffff;
  unaff_RBP[4] = 0;
  FUN_1806f1810(unaff_RBP + -3,unaff_R13D + 0x3e);
  plVar2 = *(longlong **)(unaff_R14 + 8);
  in_stack_00000050 = unaff_RBP + -8;
  *(int32_t *)(unaff_RBP + 5) = 0x20;
  in_stack_00000040 = &UNK_18094e3c0;
  in_stack_00000058 = 0;
  in_stack_00000048 = &UNK_18094e3d0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  (**(code **)(*plVar2 + 0x38))(plVar2,&stack0x00000070,&stack0x00000040,0);
  FUN_1806f0c90();
  in_stack_00000040 = &UNK_18094e3c0;
  in_stack_00000048 = &UNK_18094e3d0;
  FUN_1806f1550(in_stack_00000050,in_stack_00000060);
  in_stack_00000048 = &UNK_180a23da0;
  in_stack_00000040 = &UNK_18094a210;
  FUN_1806f1080(unaff_RBP + -7);
  return;
}






// 函数: void FUN_1806eebd3(void)
void FUN_1806eebd3(void)

{
  return;
}



uint64_t *
FUN_1806eec00(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4,
             uint64_t *param_5)

{
  longlong lVar1;
  uint64_t uStackX_10;
  uint64_t uStackX_20;
  void *puStack_118;
  void *puStack_110;
  uint64_t *puStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  int32_t uStack_f0;
  int32_t auStack_e8 [2];
  uint64_t uStack_e0;
  int32_t auStack_d8 [2];
  int32_t uStack_d0;
  uint64_t uStack_c8;
  int32_t uStack_c0;
  int32_t uStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a0;
  int16_t uStack_9c;
  uint64_t uStack_98;
  uint64_t *puStack_90;
  uint64_t *puStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t *puStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  uint64_t uStack_38;
  int32_t uStack_30;
  int8_t auStack_28 [16];
  
  auStack_e8[0] = 0;
  uStack_e0 = 0;
  uStack_9c = 0xff;
  auStack_d8[0] = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0xff0000;
  uStackX_10 = 0;
  FUN_1806f02d0(param_3,&UNK_180a1a470,&uStackX_10,auStack_e8,auStack_d8,param_4);
  uStack_e0 = uStackX_10;
  uStack_a0 = CONCAT22(uStack_a0._2_2_,2);
  uStackX_20 = 0;
  FUN_1806efb40(param_3,&UNK_18094e408,&uStackX_20,auStack_28,&uStackX_10,param_4);
  uStack_98 = (**(code **)(*param_4 + 0x18))(param_4);
  uStack_80 = 0;
  puStack_90 = &uStack_98;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_88 = &uStack_98;
  uStack_40 = 0x3f400000;
  puStack_70 = &uStack_98;
  uStack_78 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_3c = 0xffffffff;
  uStack_38 = 0;
  FUN_1806f1810(&puStack_70,0x40);
  puStack_108 = &uStack_98;
  puStack_118 = &UNK_18094e3c0;
  puStack_110 = &UNK_18094e3d0;
  uStack_30 = 0x20;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  if ((int)uStackX_10 != 0) {
    FUN_1806f19b0(&puStack_118,uStackX_20);
    lVar1 = (**(code **)(*(longlong *)*param_5 + 0x58))((longlong *)*param_5,&puStack_110);
    if (lVar1 != 0) goto LAB_1806eedb9;
  }
  uStack_100 = 0;
  (**(code **)(*(longlong *)param_5[1] + 0x38))((longlong *)param_5[1],auStack_e8,&puStack_118,0);
  lVar1 = (**(code **)(*(longlong *)*param_5 + 0x58))((longlong *)*param_5,&puStack_110);
LAB_1806eedb9:
  param_2[1] = lVar1;
  param_2[2] = lVar1;
  puStack_118 = &UNK_18094e3c0;
  *param_2 = &UNK_18094bed8;
  puStack_110 = &UNK_18094e3d0;
  FUN_1806f1550(puStack_108,uStack_f8);
  puStack_110 = &UNK_180a23da0;
  puStack_118 = &UNK_18094a210;
  FUN_1806f1080(&puStack_90);
  return param_2;
}






// 函数: void FUN_1806eee40(uint64_t param_1,uint64_t *param_2)
void FUN_1806eee40(uint64_t param_1,uint64_t *param_2)

{
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  uint64_t uStack_18;
  int32_t uStack_10;
  
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
  uStack_18 = 0;
  uStack_10 = 0;
  (**(code **)(*(longlong *)*param_2 + 0xa0))((longlong *)*param_2,&uStack_28);
  return;
}






// 函数: void FUN_1806eee80(uint64_t param_1,uint64_t *param_2)
void FUN_1806eee80(uint64_t param_1,uint64_t *param_2)

{
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  uint64_t uStack_18;
  int32_t uStack_10;
  
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
  uStack_18 = 0;
  uStack_10 = 0;
  (**(code **)(*(longlong *)*param_2 + 0xa8))((longlong *)*param_2,&uStack_28);
  return;
}






// 函数: void FUN_1806eeec0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806eeec0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  longlong param_5)

{
  uint64_t uStack_2b8;
  uint64_t uStack_2b0;
  uint64_t uStack_2a8;
  uint64_t uStack_258;
  uint64_t uStack_250;
  uint64_t uStack_248;
  uint64_t uStack_240;
  uint64_t uStack_238;
  uint64_t uStack_230;
  int32_t uStack_228;
  int32_t uStack_224;
  uint64_t uStack_220;
  int8_t auStack_218 [48];
  int8_t auStack_1e8 [448];
  
  uStack_2b0 = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_2b8 = *(uint64_t *)(param_5 + 0x10);
  uStack_2a8 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_220 = 0;
  uStack_228 = 0x3f400000;
  uStack_224 = 0xffffffff;
  uStack_258 = uStack_2b8;
  FUN_1806d7a90(&uStack_258,0x40);
  FUN_1806d2f90(auStack_218,&uStack_2b8,param_4,param_2,param_5,param_3,&uStack_258);
                    // WARNING: Subroutine does not return
  memset(auStack_1e8,0,0x1b8);
}






// 函数: void FUN_1806ef0b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806ef0b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  longlong param_5)

{
  uint64_t uStack_298;
  uint64_t uStack_290;
  uint64_t uStack_288;
  uint64_t uStack_238;
  uint64_t uStack_230;
  uint64_t uStack_228;
  uint64_t uStack_220;
  uint64_t uStack_218;
  uint64_t uStack_210;
  int32_t uStack_208;
  int32_t uStack_204;
  uint64_t uStack_200;
  int8_t auStack_1f8 [48];
  int8_t auStack_1c8 [416];
  
  uStack_290 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_298 = *(uint64_t *)(param_5 + 0x10);
  uStack_288 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_200 = 0;
  uStack_208 = 0x3f400000;
  uStack_204 = 0xffffffff;
  uStack_238 = uStack_298;
  FUN_1806d7a90(&uStack_238,0x40);
  FUN_1806d2f90(auStack_1f8,&uStack_298,param_4,param_2,param_5,param_3,&uStack_238);
                    // WARNING: Subroutine does not return
  memset(auStack_1c8,0,0x1a0);
}






// 函数: void FUN_1806ef2a0(uint64_t param_1,longlong *param_2,longlong *param_3,longlong *param_4,
void FUN_1806ef2a0(uint64_t param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  uint64_t param_5)

{
  uint64_t *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int32_t uVar5;
  longlong lVar6;
  uint64_t uVar7;
  longlong *plVar8;
  void *puVar9;
  char *pcVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plStackX_10;
  int8_t auStack_98 [112];
  
  plVar14 = (longlong *)0x0;
  (**(code **)(*param_4 + 0x18))(param_4,&UNK_18094e420);
  iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
  puVar1 = (uint64_t *)CONCAT71(param_5._1_7_,(int8_t)param_5);
  plVar12 = plVar14;
  plVar13 = plVar14;
  if (iVar3 != 0) {
    do {
      iVar3 = (**(code **)(*param_2 + 0x58))(param_2,&plStackX_10,1,plVar12);
      if ((iVar3 != 0) && (plVar13 = plVar14, (short)plStackX_10[1] == 0xd)) {
        plVar13 = plStackX_10;
      }
      if (plVar13 == (longlong *)0x0) {
        plVar8 = (longlong *)(**(code **)(*param_3 + 0x68))(param_3);
        if (plVar8 == (longlong *)0x0) {
          plVar8 = plStackX_10;
        }
        FUN_1806f11b0(puVar1,plVar8);
        param_5._0_1_ = 0;
        (**(code **)*puVar1)(puVar1,&param_5,1);
        puVar9 = &UNK_18094e440;
LAB_1806ef3cf:
        (**(code **)(*param_4 + 0x10))(param_4,puVar9,puVar1[4]);
        puVar1[3] = 0;
      }
      else {
        lVar6 = (**(code **)(*plVar13 + 0x1f0))(plVar13);
        if (lVar6 == 0) {
          uVar7 = (**(code **)(*plVar13 + 0x1e8))(plVar13);
          FUN_1806f11b0(puVar1,uVar7);
          param_5._0_1_ = 0;
          (**(code **)*puVar1)(puVar1,&param_5,1);
          puVar9 = &UNK_18094e428;
          goto LAB_1806ef3cf;
        }
      }
      uVar11 = (int)plVar12 + 1;
      uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar12 = (longlong *)(ulonglong)uVar11;
    } while (uVar11 < uVar4);
  }
  (**(code **)(*param_4 + 0x20))(param_4);
  uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
  FUN_1806c4e00(puVar1,&UNK_180a063a0,uVar5);
  param_5._0_1_ = 0;
  (**(code **)*puVar1)(puVar1,&param_5,1);
  (**(code **)(*param_4 + 0x10))(param_4,&UNK_18094e450,puVar1[4]);
  puVar1[3] = 0;
  uVar5 = (**(code **)(*param_2 + 0x50))(param_2);
  FUN_1806c4e00(puVar1,&UNK_180a063a0,uVar5);
  param_5._0_1_ = 0;
  (**(code **)*puVar1)(puVar1,&param_5,1);
  (**(code **)(*param_4 + 0x10))(param_4,&UNK_18094e460,puVar1[4]);
  puVar1[3] = 0;
  cVar2 = (**(code **)(*param_2 + 0x68))(param_2);
  pcVar10 = "false";
  if (cVar2 != '\0') {
    pcVar10 = "true";
  }
  if (*pcVar10 != '\0') {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pcVar10[lVar6] != '\0');
    (**(code **)*puVar1)(puVar1);
  }
  param_5._0_1_ = 0;
  (**(code **)*puVar1)(puVar1,&param_5,1);
  (**(code **)(*param_4 + 0x10))(param_4,&UNK_18094e470,puVar1[4]);
  puVar1[3] = 0;
  __0PxAggregateGeneratedInfo_physx__QEAA_XZ(auStack_98);
  return;
}



uint64_t *
FUN_1806ef550(uint64_t param_1,uint64_t *param_2,longlong *param_3,uint64_t param_4,
             char *param_5,longlong *param_6)

{
  char *pcVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint64_t *puVar11;
  byte bVar12;
  ulonglong uVar13;
  int32_t uStackX_10;
  char *apcStackX_18 [2];
  char *apcStack_68 [2];
  void *puStack_58;
  uint64_t uStack_50;
  longlong *plStack_48;
  
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3,&UNK_18094e450,apcStackX_18);
  if (((cVar3 != '\0') && (apcStack_68[0] = apcStackX_18[0], apcStackX_18[0] != (char *)0x0)) &&
     (*apcStackX_18[0] != '\0')) {
    strtoul(apcStackX_18[0],apcStack_68,10);
  }
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3,&UNK_18094e460,apcStackX_18);
  if (((cVar3 == '\0') || (apcStack_68[0] = apcStackX_18[0], apcStackX_18[0] == (char *)0x0)) ||
     (*apcStackX_18[0] == '\0')) {
    uStackX_10 = SUB84(param_2,0);
  }
  else {
    uStackX_10 = strtoul(apcStackX_18[0],apcStack_68,10);
  }
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3,&UNK_18094e470,apcStackX_18);
  if (cVar3 == '\0') {
    uVar13 = (ulonglong)param_2 & 0xff;
    bVar12 = 0;
  }
  else if ((apcStackX_18[0] == (char *)0x0) || (*apcStackX_18[0] == '\0')) {
    uVar13 = (ulonglong)param_2 & 0xff;
    bVar12 = 1;
  }
  else {
    iVar5 = _stricmp_shdfnd_physx__YAHPEBD0_Z(apcStackX_18[0],&UNK_180a06418);
    bVar12 = 1;
    uVar13 = (ulonglong)(iVar5 == 0);
  }
  pcVar1 = param_5;
  plVar6 = (longlong *)
           (**(code **)(**(longlong **)param_5 + 0x18))(*(longlong **)param_5,uStackX_10,uVar13);
  plVar2 = param_6;
  puStack_58 = *(void **)pcVar1;
  uStack_50 = *(uint64_t *)(pcVar1 + 8);
  plStack_48 = *(longlong **)(pcVar1 + 0x10);
  bVar4 = FUN_1806ef930(&puStack_58,param_3,plVar6,param_4,param_6);
  bVar12 = bVar12 & bVar4;
  (**(code **)(*param_3 + 0x58))(param_3);
  cVar3 = (**(code **)(*param_3 + 0x18))(param_3,&UNK_18094e420);
  if (cVar3 != '\0') {
    (**(code **)(*param_3 + 0x58))(param_3);
    cVar3 = (**(code **)(*param_3 + 0x20))(param_3);
    puVar11 = param_2;
    puVar8 = param_2;
    while (cVar3 != '\0') {
      uVar7 = (**(code **)(*param_3 + 0x38))(param_3);
      iVar5 = _stricmp_shdfnd_physx__YAHPEBD0_Z(uVar7,&UNK_18094e440);
      if (iVar5 == 0) {
        param_5 = (char *)(**(code **)(*param_3 + 0x40))(param_3);
        if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
          puVar8 = (uint64_t *)_strtoui64(param_5,&param_5,10);
        }
        if (puVar8 != (uint64_t *)0x0) {
          plVar9 = (longlong *)(**(code **)(*plVar2 + 0x50))(plVar2,puVar8);
          if (plVar9 == (longlong *)0x0) {
            uVar7 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
            _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                      (uVar7,4,&UNK_18094c930,0x6c,&UNK_18094c870,puVar8);
          }
          bVar12 = bVar12 & plVar9 != (longlong *)0x0;
          if (plVar9 != (longlong *)0x0) {
            plVar10 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9);
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x68))(plVar10,plVar9,1);
            }
            (**(code **)(*plVar6 + 0x28))(plVar6,plVar9,0);
          }
        }
      }
      else {
        iVar5 = _stricmp_shdfnd_physx__YAHPEBD0_Z(uVar7,&UNK_18094e428);
        if (iVar5 == 0) {
          apcStackX_18[0] = (char *)(**(code **)(*param_3 + 0x40))(param_3);
          if ((apcStackX_18[0] != (char *)0x0) && (*apcStackX_18[0] != '\0')) {
            puVar11 = (uint64_t *)_strtoui64(apcStackX_18[0],apcStackX_18,10);
          }
          if (puVar11 != (uint64_t *)0x0) {
            plVar9 = (longlong *)(**(code **)(*plVar2 + 0x50))(plVar2,puVar11);
            if (plVar9 == (longlong *)0x0) {
              uVar7 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
              _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                        (uVar7,4,&UNK_18094c930,0x6c,&UNK_18094c870,puVar11);
            }
            bVar12 = bVar12 & plVar9 != (longlong *)0x0;
            if (plVar9 != (longlong *)0x0) {
              plVar10 = (longlong *)(**(code **)(*plVar9 + 0x28))(plVar9);
              if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x48))(plVar10,plVar9,1);
              }
              (**(code **)(*plVar6 + 0x38))(plVar6,plVar9);
            }
          }
        }
      }
      cVar3 = (**(code **)(*param_3 + 0x28))(param_3);
    }
    (**(code **)(*param_3 + 0x60))(param_3);
    (**(code **)(*param_3 + 0x48))(param_3);
  }
  (**(code **)(*param_3 + 0x60))(param_3);
  if (bVar12 == 0) {
    puStack_58 = &system_buffer_ptr;
    plStack_48 = (longlong *)0x0;
  }
  else {
    puStack_58 = &UNK_18094bf80;
    plStack_48 = plVar6;
  }
  *param_2 = puStack_58;
  param_2[1] = plStack_48;
  param_2[2] = plStack_48;
  return param_2;
}



int16_t FUN_1806ef910(longlong *param_1)

{
  int16_t uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x68))();
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x0001806ef9ba)
// WARNING: Removing unreachable block (ram,0x0001806ef9be)
// WARNING: Removing unreachable block (ram,0x0001806ef9a1)
// WARNING: Removing unreachable block (ram,0x0001806ef993)
// WARNING: Removing unreachable block (ram,0x0001806ef997)
// WARNING: Removing unreachable block (ram,0x0001806ef9c8)

uint64_t FUN_1806ef930(void)

{
  longlong *in_R9;
  int8_t auStack_78 [120];
  
  (**(code **)(*in_R9 + 0x18))();
  __0PxAggregateGeneratedInfo_physx__QEAA_XZ(auStack_78);
  return 1;
}



bool FUN_1806ef9e0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,longlong *param_4,
                  uint64_t param_5)

{
  bool bVar1;
  char acStackX_8 [8];
  uint64_t uStackX_10;
  uint64_t *puStack_298;
  longlong lStack_290;
  ulonglong uStack_288;
  uint64_t *puStack_280;
  longlong lStack_278;
  ulonglong uStack_270;
  uint64_t **ppuStack_268;
  uint64_t **ppuStack_260;
  uint64_t uStack_258;
  uint64_t uStack_250;
  uint64_t uStack_248;
  uint64_t uStack_240;
  uint64_t uStack_238;
  longlong *plStack_230;
  uint64_t uStack_228;
  int8_t uStack_220;
  char *pcStack_218;
  uint64_t uStack_210;
  uint64_t uStack_208;
  int8_t auStack_1f8 [480];
  
  uStackX_10 = (**(code **)(*param_4 + 0x18))();
  puStack_280 = &uStackX_10;
  lStack_278 = 0;
  puStack_298 = &uStackX_10;
  uStack_270 = 0;
  lStack_290 = 0;
  uStack_288 = 0;
  __0PxShapeGeneratedInfo_physx__QEAA_XZ(auStack_1f8);
  uStack_258 = *param_1;
  uStack_250 = param_1[1];
  ppuStack_268 = &puStack_280;
  uStack_248 = param_1[2];
  ppuStack_260 = &puStack_298;
  acStackX_8[0] = '\0';
  uStack_228 = param_5;
  pcStack_218 = acStackX_8;
  uStack_220 = 1;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_240 = param_2;
  uStack_238 = param_3;
  plStack_230 = param_4;
  FUN_1806cb3f0(auStack_1f8,&ppuStack_268,0);
  bVar1 = acStackX_8[0] == '\0';
  if ((((uStack_288 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_288)) && (lStack_290 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_298 + 0x10))();
  }
  if ((((uStack_270 & 0x7fffffff00000000) != 0) && (-1 < (longlong)uStack_270)) && (lStack_278 != 0)
     ) {
    (**(code **)(*(longlong *)*puStack_280 + 0x10))();
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806efb40(longlong *param_1,uint64_t param_2,ulonglong *param_3,int32_t *param_4,
void FUN_1806efb40(longlong *param_1,uint64_t param_2,ulonglong *param_3,int32_t *param_4,
                  int *param_5,longlong *param_6)

{
  uint uVar1;
  char cVar2;
  int8_t uVar3;
  int iVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  uint uVar7;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char *pcStackX_18;
  char *pcStackX_20;
  int iVar8;
  
  uVar11 = 0;
  *param_4 = 1;
  *param_3 = 0;
  *param_5 = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&pcStackX_20);
  if (cVar2 != '\0') {
    if (pcStackX_20 != (char *)0x0) {
      _DAT_180c0c324 = _DAT_180c0c324 + 1;
      pcVar9 = pcStackX_20;
      if (*pcStackX_20 != '\0') {
        do {
          iVar8 = (int)uVar11;
          uVar7 = iVar8 + 1;
          uVar11 = (ulonglong)uVar7;
          pcVar9 = pcVar9 + 1;
        } while (*pcVar9 != '\0');
        uVar5 = (**(code **)(*param_6 + 8))(param_6,iVar8 + 2);
                    // WARNING: Subroutine does not return
        memcpy(uVar5,pcStackX_20,uVar7);
      }
      pcStackX_18 = "";
      uVar10 = uVar11;
      uVar12 = uVar11;
      uVar3 = param_5._0_1_;
      do {
        cVar2 = *pcStackX_18;
        iVar8 = (int)uVar10;
        pcVar9 = pcStackX_18;
        while( true ) {
          if (cVar2 == '\0') {
            *param_3 = uVar12;
            *param_5 = iVar8;
            (**(code **)(*param_6 + 0x10))(param_6,&system_buffer_ptr);
            goto FUN_1806efc53;
          }
          iVar4 = isspace((int)cVar2);
          if (iVar4 == 0) break;
          cVar2 = pcVar9[1];
          pcVar9 = pcVar9 + 1;
        }
        if ((pcStackX_18 != (char *)0x0) && (*pcStackX_18 != '\0')) {
          uVar3 = strtoul(pcStackX_18,&pcStackX_18,10);
        }
        uVar7 = iVar8 + 1;
        uVar6 = uVar12;
        if ((uint)uVar11 < uVar7) {
          uVar11 = 0x20;
          if (0x20 < uVar7) {
            do {
              uVar1 = (int)uVar11 * 2;
              uVar11 = (ulonglong)uVar1;
            } while (uVar1 < uVar7);
          }
          uVar6 = (**(code **)(*param_6 + 8))(param_6,uVar11);
          if (iVar8 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(uVar6,uVar12,uVar10);
          }
          (**(code **)(*param_6 + 0x10))(param_6,uVar12);
        }
        *(int8_t *)(uVar10 + uVar6) = uVar3;
        uVar10 = (ulonglong)uVar7;
        uVar12 = uVar6;
      } while( true );
    }
FUN_1806efc53:
    (**(code **)(*param_6 + 0x10))(param_6,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




