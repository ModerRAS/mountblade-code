#include "TaleWorlds.Native.Split.h"

// 03_rendering_part720_sub002_sub002.c - 1 个函数

// 函数: void FUN_180690700(int8_t (*param_1) [32],int param_2,int8_t (*param_3) [32],int param_4,
void FUN_180690700(int8_t (*param_1) [32],int param_2,int8_t (*param_3) [32],int param_4,
                  int *param_5,int *param_6)

{
  int8_t auVar1 [32];
  int8_t auVar2 [32];
  int8_t auVar3 [32];
  longlong lVar4;
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  
  auVar5 = ZEXT832(0) << 0x40;
  lVar4 = 0x10;
  auVar6 = auVar5;
  auVar1 = auVar5;
  do {
    auVar7 = vpunpcklbw_avx2(*param_3,auVar5);
    auVar3 = vpunpcklbw_avx2(*param_1,auVar5);
    auVar3 = vpsubw_avx2(auVar3,auVar7);
    auVar7 = vpunpckhbw_avx2(*param_1,auVar5);
    auVar2 = vpunpckhbw_avx2(*param_3,auVar5);
    auVar2 = vpsubw_avx2(auVar7,auVar2);
    auVar7 = vpaddw_avx2(auVar2,auVar3);
    auVar3 = vpmaddwd_avx2(auVar3,auVar3);
    auVar2 = vpmaddwd_avx2(auVar2,auVar2);
    auVar6 = vpaddw_avx2(auVar7,auVar6);
    param_1 = (int8_t (*) [32])(*param_1 + param_2);
    param_3 = (int8_t (*) [32])(*param_3 + param_4);
    auVar7 = vpaddd_avx2(auVar2,auVar3);
    auVar1 = vpaddd_avx2(auVar7,auVar1);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  auVar7 = vpunpcklwd_avx2(auVar5,auVar6);
  auVar7 = vpsrad_avx2(auVar7,0x10);
  auVar6 = vpunpckhwd_avx2(auVar5,auVar6);
  auVar6 = vpsrad_avx2(auVar6,0x10);
  auVar6 = vpaddd_avx2(auVar6,auVar7);
  auVar7 = vpunpckldq_avx2(auVar6,auVar5);
  auVar3 = vpunpckldq_avx2(auVar1,auVar5);
  auVar1 = vpunpckhdq_avx2(auVar1,auVar5);
  auVar1 = vpaddd_avx2(auVar1,auVar3);
  auVar6 = vpunpckhdq_avx2(auVar6,auVar5);
  auVar6 = vpaddd_avx2(auVar6,auVar7);
  auVar5 = vpsrldq_avx2(auVar1,8);
  auVar1 = vpaddd_avx2(auVar5,auVar1);
  auVar5 = vpsrldq_avx2(auVar6,8);
  auVar6 = vpaddd_avx2(auVar5,auVar6);
  *param_5 = auVar1._16_4_ + auVar1._0_4_;
  *param_6 = auVar6._16_4_ + auVar6._0_4_;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180690800(int8_t (*param_1) [32],int param_2,int param_3,int param_4,
                 int8_t (*param_5) [32],int param_6,int8_t (*param_7) [32],int param_8,
                 uint param_9,int *param_10)

{
  ulonglong uVar1;
  int8_t auVar2 [32];
  int8_t auVar3 [32];
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  int8_t auVar9 [64];
  int8_t auVar10 [64];
  
  auVar3 = ZEXT832(0) << 0x40;
  auVar9 = ZEXT3264(auVar3);
  auVar10 = ZEXT3264(auVar3);
  auVar4 = auVar3;
  auVar5 = auVar3;
  if (param_3 == 0) {
    if (param_4 == 0) {
      if (0 < (int)param_9) {
        uVar1 = (ulonglong)param_9;
        do {
          auVar4 = vpavgb_avx2(*param_7,*param_1);
          auVar5 = vpunpcklbw_avx2(*param_5,auVar3);
          auVar7 = vpunpcklbw_avx2(auVar4,auVar3);
          auVar5 = vpsubw_avx2(auVar7,auVar5);
          auVar4 = vpunpckhbw_avx2(auVar4,auVar3);
          auVar7 = vpunpckhbw_avx2(*param_5,auVar3);
          auVar7 = vpsubw_avx2(auVar4,auVar7);
          auVar4 = vpaddw_avx2(auVar5,auVar9._0_32_);
          auVar5 = vpmaddwd_avx2(auVar5,auVar5);
          auVar4 = vpaddw_avx2(auVar4,auVar7);
          auVar9 = ZEXT3264(auVar4);
          param_7 = (int8_t (*) [32])(*param_7 + param_8);
          param_1 = (int8_t (*) [32])(*param_1 + param_2);
          param_5 = (int8_t (*) [32])(*param_5 + param_6);
          auVar5 = vpaddd_avx2(auVar5,auVar10._0_32_);
          auVar7 = vpmaddwd_avx2(auVar7,auVar7);
          auVar5 = vpaddd_avx2(auVar5,auVar7);
          auVar10 = ZEXT3264(auVar5);
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
    }
    else if (param_4 == 8) {
      if (0 < (int)param_9) {
        uVar1 = (ulonglong)param_9;
        do {
          auVar4 = vpavgb_avx2(*param_1,*(int8_t (*) [32])(*param_1 + param_2));
          auVar4 = vpavgb_avx2(auVar4,*param_7);
          auVar5 = vpunpcklbw_avx2(auVar4,auVar3);
          param_1 = (int8_t (*) [32])(*param_1 + param_2);
          param_7 = (int8_t (*) [32])(*param_7 + param_8);
          auVar7 = vpunpcklbw_avx2(*param_5,auVar3);
          auVar5 = vpsubw_avx2(auVar5,auVar7);
          auVar4 = vpunpckhbw_avx2(auVar4,auVar3);
          auVar7 = vpunpckhbw_avx2(*param_5,auVar3);
          auVar7 = vpsubw_avx2(auVar4,auVar7);
          auVar4 = vpaddw_avx2(auVar5,auVar9._0_32_);
          auVar5 = vpmaddwd_avx2(auVar5,auVar5);
          auVar4 = vpaddw_avx2(auVar4,auVar7);
          auVar9 = ZEXT3264(auVar4);
          param_5 = (int8_t (*) [32])(*param_5 + param_6);
          auVar5 = vpaddd_avx2(auVar5,auVar10._0_32_);
          auVar7 = vpmaddwd_avx2(auVar7,auVar7);
          auVar5 = vpaddd_avx2(auVar5,auVar7);
          auVar10 = ZEXT3264(auVar5);
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
    }
    else if (0 < (int)param_9) {
      uVar1 = (ulonglong)param_9;
      do {
        auVar4 = *param_1;
        auVar5 = *param_5;
        param_1 = (int8_t (*) [32])(*param_1 + param_2);
        param_5 = (int8_t (*) [32])(*param_5 + param_6);
        auVar7 = vpunpckhbw_avx2(auVar4,*param_1);
        auVar7 = vpmaddubsw_avx2(auVar7,*(int8_t (*) [32])(&unknown_var_2656_ptr + (param_4 << 5)));
        auVar2 = vpunpcklbw_avx2(auVar4,*param_1);
        auVar4 = vpaddw_avx2(auVar7,_DAT_180948080);
        auVar7 = vpmaddubsw_avx2(auVar2,*(int8_t (*) [32])(&unknown_var_2656_ptr + (param_4 << 5)));
        auVar2 = vpsraw_avx2(auVar4,4);
        auVar4 = vpaddw_avx2(auVar7,_DAT_180948080);
        auVar4 = vpsraw_avx2(auVar4,4);
        auVar4 = vpackuswb_avx2(auVar4,auVar2);
        auVar4 = vpavgb_avx2(auVar4,*param_7);
        auVar7 = vpunpcklbw_avx2(auVar4,auVar3);
        auVar2 = vpunpcklbw_avx2(auVar5,auVar3);
        auVar7 = vpsubw_avx2(auVar7,auVar2);
        auVar4 = vpunpckhbw_avx2(auVar4,auVar3);
        auVar5 = vpunpckhbw_avx2(auVar5,auVar3);
        auVar2 = vpsubw_avx2(auVar4,auVar5);
        auVar4 = vpaddw_avx2(auVar7,auVar9._0_32_);
        auVar5 = vpmaddwd_avx2(auVar7,auVar7);
        auVar4 = vpaddw_avx2(auVar4,auVar2);
        auVar9 = ZEXT3264(auVar4);
        param_7 = (int8_t (*) [32])(*param_7 + param_8);
        auVar5 = vpaddd_avx2(auVar5,auVar10._0_32_);
        auVar7 = vpmaddwd_avx2(auVar2,auVar2);
        auVar5 = vpaddd_avx2(auVar5,auVar7);
        auVar10 = ZEXT3264(auVar5);
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  else if (param_3 == 8) {
    if (param_4 == 0) {
      if (0 < (int)param_9) {
        uVar1 = (ulonglong)param_9;
        do {
          auVar4 = vpavgb_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
          auVar4 = vpavgb_avx2(auVar4,*param_7);
          auVar5 = vpunpcklbw_avx2(auVar4,auVar3);
          auVar7 = vpunpcklbw_avx2(*param_5,auVar3);
          auVar5 = vpsubw_avx2(auVar5,auVar7);
          auVar4 = vpunpckhbw_avx2(auVar4,auVar3);
          auVar7 = vpunpckhbw_avx2(*param_5,auVar3);
          auVar7 = vpsubw_avx2(auVar4,auVar7);
          auVar4 = vpaddw_avx2(auVar5,auVar9._0_32_);
          auVar5 = vpmaddwd_avx2(auVar5,auVar5);
          auVar4 = vpaddw_avx2(auVar4,auVar7);
          auVar9 = ZEXT3264(auVar4);
          param_7 = (int8_t (*) [32])(*param_7 + param_8);
          param_1 = (int8_t (*) [32])(*param_1 + param_2);
          param_5 = (int8_t (*) [32])(*param_5 + param_6);
          auVar5 = vpaddd_avx2(auVar5,auVar10._0_32_);
          auVar7 = vpmaddwd_avx2(auVar7,auVar7);
          auVar5 = vpaddd_avx2(auVar5,auVar7);
          auVar10 = ZEXT3264(auVar5);
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
    }
    else if (param_4 == 8) {
      auVar7 = vpavgb_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
      if (0 < (int)param_9) {
        uVar1 = (ulonglong)param_9;
        do {
          auVar4 = *param_5;
          param_1 = (int8_t (*) [32])(*param_1 + param_2);
          param_5 = (int8_t (*) [32])(*param_5 + param_6);
          auVar2 = vpavgb_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
          auVar5 = vpavgb_avx2(auVar7,auVar2);
          auVar5 = vpavgb_avx2(auVar5,*param_7);
          auVar7 = vpunpcklbw_avx2(auVar5,auVar3);
          auVar6 = vpunpcklbw_avx2(auVar4,auVar3);
          auVar7 = vpsubw_avx2(auVar7,auVar6);
          auVar4 = vpunpckhbw_avx2(auVar4,auVar3);
          auVar5 = vpunpckhbw_avx2(auVar5,auVar3);
          auVar6 = vpsubw_avx2(auVar5,auVar4);
          auVar4 = vpaddw_avx2(auVar7,auVar9._0_32_);
          auVar5 = vpmaddwd_avx2(auVar7,auVar7);
          auVar4 = vpaddw_avx2(auVar4,auVar6);
          auVar9 = ZEXT3264(auVar4);
          param_7 = (int8_t (*) [32])(*param_7 + param_8);
          auVar5 = vpaddd_avx2(auVar5,auVar10._0_32_);
          auVar7 = vpmaddwd_avx2(auVar6,auVar6);
          auVar5 = vpaddd_avx2(auVar5,auVar7);
          auVar10 = ZEXT3264(auVar5);
          uVar1 = uVar1 - 1;
          auVar7 = auVar2;
        } while (uVar1 != 0);
      }
    }
    else {
      auVar7 = vpavgb_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
      if (0 < (int)param_9) {
        uVar1 = (ulonglong)param_9;
        do {
          auVar4 = *param_5;
          param_1 = (int8_t (*) [32])(*param_1 + param_2);
          param_5 = (int8_t (*) [32])(*param_5 + param_6);
          auVar2 = vpavgb_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
          auVar5 = vpunpckhbw_avx2(auVar7,auVar2);
          auVar5 = vpmaddubsw_avx2(auVar5,*(int8_t (*) [32])(&unknown_var_2656_ptr + (param_4 << 5)));
          auVar5 = vpaddw_avx2(auVar5,_DAT_180948080);
          auVar6 = vpsraw_avx2(auVar5,4);
          auVar5 = vpunpcklbw_avx2(auVar7,auVar2);
          auVar5 = vpmaddubsw_avx2(auVar5,*(int8_t (*) [32])(&unknown_var_2656_ptr + (param_4 << 5)));
          auVar5 = vpaddw_avx2(auVar5,_DAT_180948080);
          auVar5 = vpsraw_avx2(auVar5,4);
          auVar5 = vpackuswb_avx2(auVar5,auVar6);
          auVar5 = vpavgb_avx2(auVar5,*param_7);
          auVar7 = vpunpcklbw_avx2(auVar5,auVar3);
          auVar6 = vpunpcklbw_avx2(auVar4,auVar3);
          auVar7 = vpsubw_avx2(auVar7,auVar6);
          auVar4 = vpunpckhbw_avx2(auVar4,auVar3);
          auVar5 = vpunpckhbw_avx2(auVar5,auVar3);
          auVar6 = vpsubw_avx2(auVar5,auVar4);
          auVar4 = vpaddw_avx2(auVar7,auVar9._0_32_);
          auVar5 = vpmaddwd_avx2(auVar7,auVar7);
          auVar4 = vpaddw_avx2(auVar4,auVar6);
          auVar9 = ZEXT3264(auVar4);
          param_7 = (int8_t (*) [32])(*param_7 + param_8);
          auVar5 = vpaddd_avx2(auVar5,auVar10._0_32_);
          auVar7 = vpmaddwd_avx2(auVar6,auVar6);
          auVar5 = vpaddd_avx2(auVar5,auVar7);
          auVar10 = ZEXT3264(auVar5);
          uVar1 = uVar1 - 1;
          auVar7 = auVar2;
        } while (uVar1 != 0);
      }
    }
  }
  else {
    param_3 = param_3 << 5;
    if (param_4 == 0) {
      if (0 < (int)param_9) {
        uVar1 = (ulonglong)param_9;
        do {
          auVar4 = vpunpckhbw_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
          auVar4 = vpmaddubsw_avx2(auVar4,*(int8_t (*) [32])(&unknown_var_2656_ptr + param_3));
          auVar5 = vpunpcklbw_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
          auVar4 = vpaddw_avx2(auVar4,_DAT_180948080);
          auVar5 = vpmaddubsw_avx2(auVar5,*(int8_t (*) [32])(&unknown_var_2656_ptr + param_3));
          auVar7 = vpsraw_avx2(auVar4,4);
          auVar4 = vpaddw_avx2(auVar5,_DAT_180948080);
          auVar4 = vpsraw_avx2(auVar4,4);
          auVar4 = vpackuswb_avx2(auVar4,auVar7);
          auVar4 = vpavgb_avx2(auVar4,*param_7);
          auVar5 = vpunpcklbw_avx2(auVar4,auVar3);
          auVar7 = vpunpcklbw_avx2(*param_5,auVar3);
          auVar5 = vpsubw_avx2(auVar5,auVar7);
          auVar4 = vpunpckhbw_avx2(auVar4,auVar3);
          auVar7 = vpunpckhbw_avx2(*param_5,auVar3);
          auVar7 = vpsubw_avx2(auVar4,auVar7);
          auVar4 = vpaddw_avx2(auVar5,auVar9._0_32_);
          auVar5 = vpmaddwd_avx2(auVar5,auVar5);
          auVar4 = vpaddw_avx2(auVar4,auVar7);
          auVar9 = ZEXT3264(auVar4);
          param_7 = (int8_t (*) [32])(*param_7 + param_8);
          param_1 = (int8_t (*) [32])(*param_1 + param_2);
          param_5 = (int8_t (*) [32])(*param_5 + param_6);
          auVar5 = vpaddd_avx2(auVar5,auVar10._0_32_);
          auVar7 = vpmaddwd_avx2(auVar7,auVar7);
          auVar5 = vpaddd_avx2(auVar5,auVar7);
          auVar10 = ZEXT3264(auVar5);
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
    }
    else {
      auVar7 = *param_1;
      auVar2 = vpunpckhbw_avx2(auVar7,*(int8_t (*) [32])(*param_1 + 1));
      if (param_4 == 8) {
        auVar6 = *(int8_t (*) [32])(&unknown_var_2656_ptr + param_3);
        auVar2 = vpmaddubsw_avx2(auVar2,auVar6);
        auVar8 = vpunpcklbw_avx2(auVar7,*(int8_t (*) [32])(*param_1 + 1));
        auVar7 = vpaddw_avx2(auVar2,_DAT_180948080);
        auVar2 = vpsraw_avx2(auVar7,4);
        auVar7 = vpmaddubsw_avx2(auVar8,auVar6);
        auVar7 = vpaddw_avx2(auVar7,_DAT_180948080);
        auVar7 = vpsraw_avx2(auVar7,4);
        auVar7 = vpackuswb_avx2(auVar7,auVar2);
        if (0 < (int)param_9) {
          uVar1 = (ulonglong)param_9;
          do {
            auVar4 = *param_5;
            param_1 = (int8_t (*) [32])(*param_1 + param_2);
            param_5 = (int8_t (*) [32])(*param_5 + param_6);
            auVar5 = vpunpckhbw_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
            auVar5 = vpmaddubsw_avx2(auVar5,auVar6);
            auVar2 = vpunpcklbw_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
            auVar5 = vpaddw_avx2(auVar5,_DAT_180948080);
            auVar2 = vpmaddubsw_avx2(auVar2,auVar6);
            auVar8 = vpsraw_avx2(auVar5,4);
            auVar5 = vpaddw_avx2(auVar2,_DAT_180948080);
            auVar5 = vpsraw_avx2(auVar5,4);
            auVar2 = vpackuswb_avx2(auVar5,auVar8);
            auVar5 = vpavgb_avx2(auVar7,auVar2);
            auVar5 = vpavgb_avx2(auVar5,*param_7);
            auVar7 = vpunpcklbw_avx2(auVar5,auVar3);
            auVar8 = vpunpcklbw_avx2(auVar4,auVar3);
            auVar7 = vpsubw_avx2(auVar7,auVar8);
            auVar4 = vpunpckhbw_avx2(auVar4,auVar3);
            auVar5 = vpunpckhbw_avx2(auVar5,auVar3);
            auVar8 = vpsubw_avx2(auVar5,auVar4);
            auVar4 = vpaddw_avx2(auVar7,auVar9._0_32_);
            auVar4 = vpaddw_avx2(auVar4,auVar8);
            auVar9 = ZEXT3264(auVar4);
            auVar5 = vpmaddwd_avx2(auVar7,auVar7);
            param_7 = (int8_t (*) [32])(*param_7 + param_8);
            auVar5 = vpaddd_avx2(auVar5,auVar10._0_32_);
            auVar7 = vpmaddwd_avx2(auVar8,auVar8);
            auVar5 = vpaddd_avx2(auVar5,auVar7);
            auVar10 = ZEXT3264(auVar5);
            uVar1 = uVar1 - 1;
            auVar7 = auVar2;
          } while (uVar1 != 0);
        }
      }
      else {
        auVar6 = *(int8_t (*) [32])(&unknown_var_2656_ptr + param_3);
        auVar2 = vpmaddubsw_avx2(auVar2,auVar6);
        auVar8 = vpunpcklbw_avx2(auVar7,*(int8_t (*) [32])(*param_1 + 1));
        auVar7 = vpaddw_avx2(auVar2,_DAT_180948080);
        auVar2 = vpsraw_avx2(auVar7,4);
        auVar7 = vpmaddubsw_avx2(auVar8,auVar6);
        auVar7 = vpaddw_avx2(auVar7,_DAT_180948080);
        auVar7 = vpsraw_avx2(auVar7,4);
        auVar7 = vpackuswb_avx2(auVar7,auVar2);
        if (0 < (int)param_9) {
          uVar1 = (ulonglong)param_9;
          do {
            auVar4 = *param_5;
            param_1 = (int8_t (*) [32])(*param_1 + param_2);
            param_5 = (int8_t (*) [32])(*param_5 + param_6);
            auVar5 = vpunpckhbw_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
            auVar5 = vpmaddubsw_avx2(auVar5,auVar6);
            auVar2 = vpunpcklbw_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
            auVar5 = vpaddw_avx2(auVar5,_DAT_180948080);
            auVar2 = vpmaddubsw_avx2(auVar2,auVar6);
            auVar8 = vpsraw_avx2(auVar5,4);
            auVar5 = vpaddw_avx2(auVar2,_DAT_180948080);
            auVar5 = vpsraw_avx2(auVar5,4);
            auVar2 = vpackuswb_avx2(auVar5,auVar8);
            auVar5 = vpunpckhbw_avx2(auVar7,auVar2);
            auVar5 = vpmaddubsw_avx2(auVar5,*(int8_t (*) [32])(&unknown_var_2656_ptr + (param_4 << 5)))
            ;
            auVar5 = vpaddw_avx2(auVar5,_DAT_180948080);
            auVar8 = vpsraw_avx2(auVar5,4);
            auVar5 = vpunpcklbw_avx2(auVar7,auVar2);
            auVar5 = vpmaddubsw_avx2(auVar5,*(int8_t (*) [32])(&unknown_var_2656_ptr + (param_4 << 5)))
            ;
            auVar5 = vpaddw_avx2(auVar5,_DAT_180948080);
            auVar5 = vpsraw_avx2(auVar5,4);
            auVar5 = vpackuswb_avx2(auVar5,auVar8);
            auVar5 = vpavgb_avx2(auVar5,*param_7);
            auVar8 = vpunpcklbw_avx2(auVar5,auVar3);
            auVar7 = vpunpckhbw_avx2(auVar5,auVar3);
            auVar5 = vpunpcklbw_avx2(auVar4,auVar3);
            auVar5 = vpsubw_avx2(auVar8,auVar5);
            auVar4 = vpunpckhbw_avx2(auVar4,auVar3);
            auVar7 = vpsubw_avx2(auVar7,auVar4);
            auVar4 = vpaddw_avx2(auVar5,auVar9._0_32_);
            auVar4 = vpaddw_avx2(auVar4,auVar7);
            auVar9 = ZEXT3264(auVar4);
            auVar5 = vpmaddwd_avx2(auVar5,auVar5);
            param_7 = (int8_t (*) [32])(*param_7 + param_8);
            auVar5 = vpaddd_avx2(auVar5,auVar10._0_32_);
            auVar7 = vpmaddwd_avx2(auVar7,auVar7);
            auVar5 = vpaddd_avx2(auVar5,auVar7);
            auVar10 = ZEXT3264(auVar5);
            uVar1 = uVar1 - 1;
            auVar7 = auVar2;
          } while (uVar1 != 0);
        }
      }
    }
  }
  auVar3 = vpcmpgtw_avx2(auVar3,auVar4);
  auVar7 = vpunpcklwd_avx2(auVar4,auVar3);
  auVar2 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar2,auVar5);
  auVar4 = vpunpckhwd_avx2(auVar4,auVar3);
  auVar4 = vpaddd_avx2(auVar4,auVar7);
  auVar3 = vpsrldq_avx2(auVar5,4);
  auVar5 = vpaddd_avx2(auVar3,auVar5);
  auVar3 = vpsrldq_avx2(auVar4,8);
  auVar4 = vpaddd_avx2(auVar3,auVar4);
  auVar3 = vpsrldq_avx2(auVar4,4);
  auVar4 = vpaddd_avx2(auVar3,auVar4);
  *param_10 = auVar5._16_4_ + auVar5._0_4_;
  return auVar4._16_4_ + auVar4._0_4_;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180691080(int8_t (*param_1) [32],int param_2,int param_3,int param_4,
                 int8_t (*param_5) [32],int param_6,uint param_7,int *param_8)

{
  ulonglong uVar1;
  int8_t auVar2 [32];
  int8_t auVar3 [32];
  int8_t auVar4 [32];
  int8_t auVar5 [32];
  int8_t auVar6 [32];
  int8_t auVar7 [32];
  int8_t auVar8 [32];
  int8_t auVar9 [32];
  int8_t auVar10 [64];
  int8_t auVar11 [64];
  
  auVar3 = ZEXT832(0) << 0x40;
  auVar10 = ZEXT3264(auVar3);
  auVar11 = ZEXT3264(auVar3);
  auVar9 = auVar3;
  auVar5 = auVar3;
  if (param_3 == 0) {
    if (param_4 == 0) {
      if (0 < (int)param_7) {
        uVar1 = (ulonglong)param_7;
        do {
          auVar9 = vpunpcklbw_avx2(*param_5,auVar3);
          auVar5 = vpunpcklbw_avx2(*param_1,auVar3);
          auVar5 = vpsubw_avx2(auVar5,auVar9);
          auVar9 = vpunpckhbw_avx2(*param_1,auVar3);
          auVar6 = vpunpckhbw_avx2(*param_5,auVar3);
          auVar6 = vpsubw_avx2(auVar9,auVar6);
          auVar9 = vpaddw_avx2(auVar5,auVar10._0_32_);
          auVar5 = vpmaddwd_avx2(auVar5,auVar5);
          auVar9 = vpaddw_avx2(auVar9,auVar6);
          auVar10 = ZEXT3264(auVar9);
          param_1 = (int8_t (*) [32])(*param_1 + param_2);
          param_5 = (int8_t (*) [32])(*param_5 + param_6);
          auVar5 = vpaddd_avx2(auVar5,auVar11._0_32_);
          auVar6 = vpmaddwd_avx2(auVar6,auVar6);
          auVar5 = vpaddd_avx2(auVar5,auVar6);
          auVar11 = ZEXT3264(auVar5);
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
    }
    else if (param_4 == 8) {
      if (0 < (int)param_7) {
        uVar1 = (ulonglong)param_7;
        do {
          auVar5 = vpavgb_avx2(*param_1,*(int8_t (*) [32])(*param_1 + param_2));
          auVar9 = *param_5;
          auVar6 = vpunpcklbw_avx2(auVar9,auVar3);
          auVar2 = vpunpcklbw_avx2(auVar5,auVar3);
          auVar6 = vpsubw_avx2(auVar2,auVar6);
          param_1 = (int8_t (*) [32])(*param_1 + param_2);
          param_5 = (int8_t (*) [32])(*param_5 + param_6);
          auVar5 = vpunpckhbw_avx2(auVar5,auVar3);
          auVar9 = vpunpckhbw_avx2(auVar9,auVar3);
          auVar2 = vpsubw_avx2(auVar5,auVar9);
          auVar9 = vpaddw_avx2(auVar6,auVar10._0_32_);
          auVar5 = vpmaddwd_avx2(auVar6,auVar6);
          auVar9 = vpaddw_avx2(auVar9,auVar2);
          auVar10 = ZEXT3264(auVar9);
          auVar5 = vpaddd_avx2(auVar5,auVar11._0_32_);
          auVar6 = vpmaddwd_avx2(auVar2,auVar2);
          auVar5 = vpaddd_avx2(auVar5,auVar6);
          auVar11 = ZEXT3264(auVar5);
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
    }
    else if (0 < (int)param_7) {
      uVar1 = (ulonglong)param_7;
      do {
        auVar9 = *param_1;
        auVar5 = *param_5;
        param_1 = (int8_t (*) [32])(*param_1 + param_2);
        param_5 = (int8_t (*) [32])(*param_5 + param_6);
        auVar6 = vpunpcklbw_avx2(auVar9,*param_1);
        auVar6 = vpmaddubsw_avx2(auVar6,*(int8_t (*) [32])(&unknown_var_2656_ptr + (param_4 << 5)));
        auVar6 = vpaddw_avx2(auVar6,_DAT_180948080);
        auVar9 = vpunpckhbw_avx2(auVar9,*param_1);
        auVar2 = vpsraw_avx2(auVar6,4);
        auVar6 = vpunpcklbw_avx2(auVar5,auVar3);
        auVar6 = vpsubw_avx2(auVar2,auVar6);
        auVar9 = vpmaddubsw_avx2(auVar9,*(int8_t (*) [32])(&unknown_var_2656_ptr + (param_4 << 5)));
        auVar9 = vpaddw_avx2(auVar9,_DAT_180948080);
        auVar2 = vpsraw_avx2(auVar9,4);
        auVar9 = vpunpckhbw_avx2(auVar5,auVar3);
        auVar2 = vpsubw_avx2(auVar2,auVar9);
        auVar9 = vpaddw_avx2(auVar6,auVar10._0_32_);
        auVar9 = vpaddw_avx2(auVar9,auVar2);
        auVar10 = ZEXT3264(auVar9);
        auVar5 = vpmaddwd_avx2(auVar6,auVar6);
        auVar5 = vpaddd_avx2(auVar5,auVar11._0_32_);
        auVar6 = vpmaddwd_avx2(auVar2,auVar2);
        auVar5 = vpaddd_avx2(auVar5,auVar6);
        auVar11 = ZEXT3264(auVar5);
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  else if (param_3 == 8) {
    if (param_4 == 0) {
      if (0 < (int)param_7) {
        uVar1 = (ulonglong)param_7;
        do {
          auVar9 = vpavgb_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
          auVar5 = vpunpcklbw_avx2(*param_5,auVar3);
          auVar6 = vpunpcklbw_avx2(auVar9,auVar3);
          auVar5 = vpsubw_avx2(auVar6,auVar5);
          auVar9 = vpunpckhbw_avx2(auVar9,auVar3);
          auVar6 = vpunpckhbw_avx2(*param_5,auVar3);
          auVar6 = vpsubw_avx2(auVar9,auVar6);
          auVar9 = vpaddw_avx2(auVar5,auVar10._0_32_);
          auVar5 = vpmaddwd_avx2(auVar5,auVar5);
          auVar9 = vpaddw_avx2(auVar9,auVar6);
          auVar10 = ZEXT3264(auVar9);
          param_1 = (int8_t (*) [32])(*param_1 + param_2);
          param_5 = (int8_t (*) [32])(*param_5 + param_6);
          auVar5 = vpaddd_avx2(auVar5,auVar11._0_32_);
          auVar6 = vpmaddwd_avx2(auVar6,auVar6);
          auVar5 = vpaddd_avx2(auVar5,auVar6);
          auVar11 = ZEXT3264(auVar5);
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
    }
    else if (param_4 == 8) {
      auVar6 = vpavgb_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
      if (0 < (int)param_7) {
        uVar1 = (ulonglong)param_7;
        do {
          auVar9 = *param_5;
          param_1 = (int8_t (*) [32])(*param_1 + param_2);
          param_5 = (int8_t (*) [32])(*param_5 + param_6);
          auVar4 = vpunpcklbw_avx2(auVar9,auVar3);
          auVar2 = vpavgb_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
          auVar5 = vpavgb_avx2(auVar6,auVar2);
          auVar6 = vpunpcklbw_avx2(auVar5,auVar3);
          auVar6 = vpsubw_avx2(auVar6,auVar4);
          auVar9 = vpunpckhbw_avx2(auVar9,auVar3);
          auVar5 = vpunpckhbw_avx2(auVar5,auVar3);
          auVar4 = vpsubw_avx2(auVar5,auVar9);
          auVar9 = vpaddw_avx2(auVar6,auVar10._0_32_);
          auVar5 = vpmaddwd_avx2(auVar6,auVar6);
          auVar9 = vpaddw_avx2(auVar9,auVar4);
          auVar10 = ZEXT3264(auVar9);
          auVar5 = vpaddd_avx2(auVar5,auVar11._0_32_);
          auVar6 = vpmaddwd_avx2(auVar4,auVar4);
          auVar5 = vpaddd_avx2(auVar5,auVar6);
          auVar11 = ZEXT3264(auVar5);
          uVar1 = uVar1 - 1;
          auVar6 = auVar2;
        } while (uVar1 != 0);
      }
    }
    else {
      auVar6 = vpavgb_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
      if (0 < (int)param_7) {
        uVar1 = (ulonglong)param_7;
        do {
          auVar9 = *param_5;
          param_1 = (int8_t (*) [32])(*param_1 + param_2);
          param_5 = (int8_t (*) [32])(*param_5 + param_6);
          auVar2 = vpavgb_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
          auVar5 = vpunpcklbw_avx2(auVar6,auVar2);
          auVar5 = vpmaddubsw_avx2(auVar5,*(int8_t (*) [32])(&unknown_var_2656_ptr + (param_4 << 5)));
          auVar5 = vpaddw_avx2(auVar5,_DAT_180948080);
          auVar4 = vpsraw_avx2(auVar5,4);
          auVar5 = vpunpckhbw_avx2(auVar6,auVar2);
          auVar6 = vpunpcklbw_avx2(auVar9,auVar3);
          auVar6 = vpsubw_avx2(auVar4,auVar6);
          auVar5 = vpmaddubsw_avx2(auVar5,*(int8_t (*) [32])(&unknown_var_2656_ptr + (param_4 << 5)));
          auVar5 = vpaddw_avx2(auVar5,_DAT_180948080);
          auVar5 = vpsraw_avx2(auVar5,4);
          auVar9 = vpunpckhbw_avx2(auVar9,auVar3);
          auVar4 = vpsubw_avx2(auVar5,auVar9);
          auVar9 = vpaddw_avx2(auVar6,auVar10._0_32_);
          auVar5 = vpmaddwd_avx2(auVar6,auVar6);
          auVar9 = vpaddw_avx2(auVar9,auVar4);
          auVar10 = ZEXT3264(auVar9);
          auVar5 = vpaddd_avx2(auVar5,auVar11._0_32_);
          auVar6 = vpmaddwd_avx2(auVar4,auVar4);
          auVar5 = vpaddd_avx2(auVar5,auVar6);
          auVar11 = ZEXT3264(auVar5);
          uVar1 = uVar1 - 1;
          auVar6 = auVar2;
        } while (uVar1 != 0);
      }
    }
  }
  else {
    param_3 = param_3 << 5;
    if (param_4 == 0) {
      if (0 < (int)param_7) {
        uVar1 = (ulonglong)param_7;
        do {
          auVar9 = vpunpcklbw_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
          auVar9 = vpmaddubsw_avx2(auVar9,*(int8_t (*) [32])(&unknown_var_2656_ptr + param_3));
          auVar9 = vpaddw_avx2(auVar9,_DAT_180948080);
          auVar6 = vpunpckhbw_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
          auVar5 = vpsraw_avx2(auVar9,4);
          auVar9 = vpunpcklbw_avx2(*param_5,auVar3);
          auVar5 = vpsubw_avx2(auVar5,auVar9);
          auVar9 = vpmaddubsw_avx2(auVar6,*(int8_t (*) [32])(&unknown_var_2656_ptr + param_3));
          auVar9 = vpaddw_avx2(auVar9,_DAT_180948080);
          auVar6 = vpsraw_avx2(auVar9,4);
          auVar9 = vpunpckhbw_avx2(*param_5,auVar3);
          auVar6 = vpsubw_avx2(auVar6,auVar9);
          auVar9 = vpaddw_avx2(auVar5,auVar10._0_32_);
          auVar9 = vpaddw_avx2(auVar9,auVar6);
          auVar10 = ZEXT3264(auVar9);
          auVar5 = vpmaddwd_avx2(auVar5,auVar5);
          param_1 = (int8_t (*) [32])(*param_1 + param_2);
          param_5 = (int8_t (*) [32])(*param_5 + param_6);
          auVar5 = vpaddd_avx2(auVar5,auVar11._0_32_);
          auVar6 = vpmaddwd_avx2(auVar6,auVar6);
          auVar5 = vpaddd_avx2(auVar5,auVar6);
          auVar11 = ZEXT3264(auVar5);
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
    }
    else {
      auVar6 = *param_1;
      auVar2 = vpunpckhbw_avx2(auVar6,*(int8_t (*) [32])(*param_1 + 1));
      if (param_4 == 8) {
        auVar4 = *(int8_t (*) [32])(&unknown_var_2656_ptr + param_3);
        auVar2 = vpmaddubsw_avx2(auVar2,auVar4);
        auVar7 = vpunpcklbw_avx2(auVar6,*(int8_t (*) [32])(*param_1 + 1));
        auVar6 = vpaddw_avx2(auVar2,_DAT_180948080);
        auVar2 = vpsraw_avx2(auVar6,4);
        auVar6 = vpmaddubsw_avx2(auVar7,auVar4);
        auVar6 = vpaddw_avx2(auVar6,_DAT_180948080);
        auVar6 = vpsraw_avx2(auVar6,4);
        auVar6 = vpackuswb_avx2(auVar6,auVar2);
        if (0 < (int)param_7) {
          uVar1 = (ulonglong)param_7;
          do {
            auVar9 = *param_5;
            param_1 = (int8_t (*) [32])(*param_1 + param_2);
            param_5 = (int8_t (*) [32])(*param_5 + param_6);
            auVar5 = vpunpckhbw_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
            auVar5 = vpmaddubsw_avx2(auVar5,auVar4);
            auVar2 = vpunpcklbw_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
            auVar5 = vpaddw_avx2(auVar5,_DAT_180948080);
            auVar7 = vpsraw_avx2(auVar5,4);
            auVar5 = vpmaddubsw_avx2(auVar2,auVar4);
            auVar5 = vpaddw_avx2(auVar5,_DAT_180948080);
            auVar5 = vpsraw_avx2(auVar5,4);
            auVar2 = vpackuswb_avx2(auVar5,auVar7);
            auVar5 = vpavgb_avx2(auVar6,auVar2);
            auVar6 = vpunpcklbw_avx2(auVar5,auVar3);
            auVar7 = vpunpcklbw_avx2(auVar9,auVar3);
            auVar6 = vpsubw_avx2(auVar6,auVar7);
            auVar9 = vpunpckhbw_avx2(auVar9,auVar3);
            auVar5 = vpunpckhbw_avx2(auVar5,auVar3);
            auVar7 = vpsubw_avx2(auVar5,auVar9);
            auVar9 = vpaddw_avx2(auVar6,auVar10._0_32_);
            auVar5 = vpmaddwd_avx2(auVar6,auVar6);
            auVar9 = vpaddw_avx2(auVar9,auVar7);
            auVar10 = ZEXT3264(auVar9);
            auVar5 = vpaddd_avx2(auVar5,auVar11._0_32_);
            auVar6 = vpmaddwd_avx2(auVar7,auVar7);
            auVar5 = vpaddd_avx2(auVar5,auVar6);
            auVar11 = ZEXT3264(auVar5);
            uVar1 = uVar1 - 1;
            auVar6 = auVar2;
          } while (uVar1 != 0);
        }
      }
      else {
        auVar4 = *(int8_t (*) [32])(&unknown_var_2656_ptr + param_3);
        auVar2 = vpmaddubsw_avx2(auVar2,auVar4);
        auVar7 = vpunpcklbw_avx2(auVar6,*(int8_t (*) [32])(*param_1 + 1));
        auVar6 = vpaddw_avx2(auVar2,_DAT_180948080);
        auVar2 = vpsraw_avx2(auVar6,4);
        auVar6 = vpmaddubsw_avx2(auVar7,auVar4);
        auVar6 = vpaddw_avx2(auVar6,_DAT_180948080);
        auVar6 = vpsraw_avx2(auVar6,4);
        auVar6 = vpackuswb_avx2(auVar6,auVar2);
        if (0 < (int)param_7) {
          uVar1 = (ulonglong)param_7;
          do {
            auVar9 = *param_5;
            param_1 = (int8_t (*) [32])(*param_1 + param_2);
            param_5 = (int8_t (*) [32])(*param_5 + param_6);
            auVar5 = vpunpckhbw_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
            auVar5 = vpmaddubsw_avx2(auVar5,auVar4);
            auVar2 = vpunpcklbw_avx2(*param_1,*(int8_t (*) [32])(*param_1 + 1));
            auVar5 = vpaddw_avx2(auVar5,_DAT_180948080);
            auVar2 = vpmaddubsw_avx2(auVar2,auVar4);
            auVar7 = vpsraw_avx2(auVar5,4);
            auVar5 = vpaddw_avx2(auVar2,_DAT_180948080);
            auVar5 = vpsraw_avx2(auVar5,4);
            auVar2 = vpackuswb_avx2(auVar5,auVar7);
            auVar5 = vpunpcklbw_avx2(auVar6,auVar2);
            auVar5 = vpmaddubsw_avx2(auVar5,*(int8_t (*) [32])(&unknown_var_2656_ptr + (param_4 << 5)))
            ;
            auVar5 = vpaddw_avx2(auVar5,_DAT_180948080);
            auVar6 = vpunpckhbw_avx2(auVar6,auVar2);
            auVar6 = vpmaddubsw_avx2(auVar6,*(int8_t (*) [32])(&unknown_var_2656_ptr + (param_4 << 5)))
            ;
            auVar8 = vpsraw_avx2(auVar5,4);
            auVar5 = vpaddw_avx2(auVar6,_DAT_180948080);
            auVar7 = vpunpcklbw_avx2(auVar9,auVar3);
            auVar5 = vpsraw_avx2(auVar5,4);
            auVar9 = vpunpckhbw_avx2(auVar9,auVar3);
            auVar6 = vpsubw_avx2(auVar5,auVar9);
            auVar5 = vpsubw_avx2(auVar8,auVar7);
            auVar9 = vpaddw_avx2(auVar5,auVar10._0_32_);
            auVar9 = vpaddw_avx2(auVar9,auVar6);
            auVar10 = ZEXT3264(auVar9);
            auVar5 = vpmaddwd_avx2(auVar5,auVar5);
            auVar5 = vpaddd_avx2(auVar5,auVar11._0_32_);
            auVar6 = vpmaddwd_avx2(auVar6,auVar6);
            auVar5 = vpaddd_avx2(auVar5,auVar6);
            auVar11 = ZEXT3264(auVar5);
            uVar1 = uVar1 - 1;
            auVar6 = auVar2;
          } while (uVar1 != 0);
        }
      }
    }
  }
  auVar3 = vpcmpgtw_avx2(auVar3,auVar9);
  auVar6 = vpunpcklwd_avx2(auVar9,auVar3);
  auVar2 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar2,auVar5);
  auVar9 = vpunpckhwd_avx2(auVar9,auVar3);
  auVar9 = vpaddd_avx2(auVar9,auVar6);
  auVar3 = vpsrldq_avx2(auVar5,4);
  auVar5 = vpaddd_avx2(auVar3,auVar5);
  auVar3 = vpsrldq_avx2(auVar9,8);
  auVar9 = vpaddd_avx2(auVar3,auVar9);
  auVar3 = vpsrldq_avx2(auVar9,4);
  auVar9 = vpaddd_avx2(auVar3,auVar9);
  *param_8 = auVar5._16_4_ + auVar5._0_4_;
  return auVar9._16_4_ + auVar9._0_4_;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





