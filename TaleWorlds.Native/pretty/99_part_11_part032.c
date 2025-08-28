#include "TaleWorlds.Native.Split.h"

// 99_part_11_part032.c - 25 个函数

// 函数: void FUN_1806fdfa0(uint64_t *param_1,longlong param_2,int param_3,uint64_t param_4,int param_5,
void FUN_1806fdfa0(uint64_t *param_1,longlong param_2,int param_3,uint64_t param_4,int param_5,
                  int8_t *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_278;
  int iStack_274;
  int32_t uStack_270;
  int iStack_26c;
  int iStack_264;
  int *piStack_260;
  int iStack_258;
  int iStack_254;
  int iStack_250;
  uint64_t *puStack_248;
  int iStack_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  int32_t uStack_230;
  int iStack_228;
  int iStack_224;
  int32_t uStack_210;
  int iStack_20c;
  int32_t uStack_208;
  int32_t uStack_200;
  int iStack_1fc;
  longlong lStack_1f8;
  int iStack_1ec;
  longlong lStack_1d8;
  int32_t uStack_1d0;
  int iStack_1c4;
  int32_t uStack_1c0;
  int32_t uStack_1bc;
  uint64_t uStack_1b0;
  longlong lStack_198;
  longlong lStack_180;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  uint64_t uStack_160;
  longlong lStack_158;
  longlong lStack_150;
  int iStack_13c;
  longlong lStack_120;
  longlong lStack_118;
  int8_t auStack_110 [56];
  ulonglong uStack_d8;
  
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)&iStack_278;
  piStack_260 = (int *)*param_1;
  iStack_254 = *(int *)(param_1 + 1);
  iStack_278 = *(int *)((longlong)param_1 + 0xc);
  uStack_208 = 0;
  uStack_1bc = 0;
  uStack_160 = *(uint64_t *)(piStack_260 + 8);
  iStack_258 = piStack_260[2];
  iVar1 = piStack_260[1];
  uStack_270 = *(int32_t *)((longlong)param_1 + 0x24);
  iStack_26c = *(int *)(param_1 + 5);
  uStack_230 = 0xf;
  uStack_1c0 = 0;
  uStack_210 = 0;
  uStack_1d0 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_200 = 0;
  puStack_248 = param_1;
  lStack_1d8 = param_2;
  uStack_1b0 = param_4;
  if ((1 < param_5) && (param_2 != 0)) {
    param_3 = param_3 * *(int *)(param_1 + 4);
    iStack_274 = 0;
    iVar5 = piStack_260[10];
    if (-1 < iVar5) {
      iStack_274 = 0;
      do {
        if (piStack_260[0xc] << ((byte)iStack_274 & 0x1f) == param_3) break;
        iStack_274 = iStack_274 + 1;
      } while (iStack_274 <= iVar5);
    }
    if (iStack_274 <= iVar5) {
      iStack_13c = iStack_258 * iStack_254;
      iStack_234 = 1 << ((byte)iStack_274 & 0x1f);
      iStack_23c = piStack_260[0xc] * iStack_234;
      lStack_118 = (longlong)iStack_13c;
      lStack_158 = lStack_118 * 4;
      lStack_198 = (longlong)param_1 + ((longlong)(iVar1 * iStack_254) + 0x3d) * 4;
      lStack_1f8 = (longlong)param_1 + ((longlong)((iVar1 + 0x400) * iStack_254) + 0x3d) * 4;
      lStack_180 = lStack_1f8 + lStack_158;
      lStack_150 = lStack_180 + lStack_158;
      lStack_120 = lStack_158 + lStack_150;
      if (param_6 == (int8_t *)0x0) {
        iStack_250 = 1;
        uStack_174 = 1;
        iVar5 = 0;
      }
      else {
        uStack_174 = func_0x000180712300(param_6);
        iVar5 = 0x1f;
        if (*(uint *)(param_6 + 0x20) != 0) {
          for (; *(uint *)(param_6 + 0x20) >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iStack_250 = (*(int *)(param_6 + 0x18) - iVar5) + -1;
        iVar5 = (*(int *)(param_6 + 0x18) - iVar5) + 3 >> 3;
      }
      iVar2 = iStack_250;
      iStack_264 = 0x4fb;
      if (param_5 < 0x4fb) {
        iStack_264 = param_5;
      }
      iVar7 = iStack_264 - iVar5;
      if ((*(int *)(param_1 + 6) == 0) || (iVar6 = *(int *)((longlong)param_1 + 0x2c), iVar6 == -1))
      {
        iVar6 = *(int *)((longlong)param_1 + 0x2c);
        iStack_20c = 0;
        iVar4 = iVar6 * param_3 + iStack_250;
        if (iStack_250 < 2) {
          iVar4 = iVar6 * param_3;
        }
        if (iVar6 != -1) {
          iVar3 = (iVar4 + *piStack_260 * 4) / (*piStack_260 * 8) -
                  (uint)(*(int *)((longlong)param_1 + 0x34) != 0);
          iVar4 = iStack_264;
          if (iVar3 <= iStack_264) {
            iVar4 = iVar3;
          }
          if (iVar4 < 2) {
            iStack_264 = 2;
          }
          else if (iVar3 <= iStack_264) {
            iStack_264 = iVar3;
          }
        }
        iStack_224 = iStack_264 - iVar5;
      }
      else {
        iStack_20c = (iVar6 * param_3 + (*piStack_260 >> 4)) / (*piStack_260 >> 3);
        iStack_224 = iStack_20c >> 6;
        param_1 = puStack_248;
      }
      iVar4 = iStack_264;
      iStack_1c4 = 3 - iStack_274;
      iVar3 = ((400 >> ((byte)iStack_274 & 0x1f)) + -0x32) * (iStack_278 * 0x28 + 0x14);
      iStack_1fc = (iStack_264 * 400 >> ((byte)iStack_1c4 & 0x1f)) - iVar3;
      if ((iVar6 != -1) && (iVar6 = iVar6 - iVar3, iVar6 <= iStack_1fc)) {
        iStack_1fc = iVar6;
      }
      iStack_228 = iVar7;
      if (param_6 == (int8_t *)0x0) {
        func_0x000180705500(auStack_110,uStack_1b0,iStack_264);
        param_6 = auStack_110;
      }
      if ((0 < iStack_20c) && (*(int *)(param_1 + 7) != 0)) {
        iVar3 = iStack_20c * 2 - *(int *)((longlong)param_1 + 0xcc) >> 6;
        iVar6 = 0;
        if (iVar2 == 1) {
          iVar6 = 2;
        }
        iVar2 = iVar3;
        if (iVar3 < iVar6) {
          iVar2 = iVar6;
        }
        if (iVar2 < iVar7) {
          if (iVar6 <= iVar3) {
            iVar6 = iVar3;
          }
          if (iVar6 < iVar7) {
            iVar4 = iVar6 + iVar5;
            iStack_264 = iVar4;
            iStack_228 = iVar6;
            FUN_1807056b0(param_6,iVar4);
          }
        }
      }
      iStack_240 = iVar4 * 8;
      iStack_238 = piStack_260[3];
      if (iStack_26c <= piStack_260[3]) {
        iStack_238 = iStack_26c;
      }
      iStack_1ec = iStack_23c + iVar1;
                    // WARNING: Subroutine does not return
      FUN_1808fd200((longlong)(iStack_1ec * iStack_254) * 4,iStack_23c,0xffffffffffffff0);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(_DAT_180bf00a8);
}



int FUN_180700c10(int param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180712260(48000,0x3c0,0);
  return (*(int *)(lVar1 + 4) + *(int *)(lVar1 + 8) * 4 + 0x400) * param_1 * 4 + 0xf4;
}



uint64_t FUN_180700c50(longlong param_1,uint64_t param_2,uint param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  
  lVar1 = FUN_180712260(48000,0x3c0,0);
  if (param_3 < 3) {
    if ((param_1 != 0) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
      memset(param_1,0,
             (longlong)
             (int)((*(int *)(lVar1 + 4) + *(int *)(lVar1 + 8) * 4 + 0x400) * param_3 * 4 + 0xf4));
    }
    uVar2 = 0xfffffff9;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



uint64_t FUN_180700d60(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = 0;
  fVar8 = 0.0;
  fVar7 = 0.0;
  if (3 < param_2) {
    uVar1 = (param_2 - 4U >> 2) + 1;
    uVar2 = (ulonglong)uVar1;
    iVar4 = uVar1 * 4;
    pfVar3 = (float *)(param_1 + 8);
    do {
      fVar5 = pfVar3[-2];
      fVar6 = fVar5;
      if (fVar7 <= fVar5) {
        fVar6 = fVar7;
      }
      if (fVar5 <= fVar8) {
        fVar5 = fVar8;
      }
      if (fVar5 <= pfVar3[-1]) {
        fVar5 = pfVar3[-1];
      }
      if (pfVar3[-1] <= fVar6) {
        fVar6 = pfVar3[-1];
      }
      if (fVar5 <= *pfVar3) {
        fVar5 = *pfVar3;
      }
      if (*pfVar3 <= fVar6) {
        fVar6 = *pfVar3;
      }
      fVar8 = fVar5;
      if (fVar5 <= pfVar3[1]) {
        fVar8 = pfVar3[1];
      }
      fVar7 = fVar6;
      if (pfVar3[1] <= fVar6) {
        fVar7 = pfVar3[1];
      }
      uVar2 = uVar2 - 1;
      pfVar3 = pfVar3 + 4;
    } while (uVar2 != 0);
  }
  if (iVar4 < param_2) {
    pfVar3 = (float *)(param_1 + (longlong)iVar4 * 4);
    uVar2 = (ulonglong)(uint)(param_2 - iVar4);
    fVar5 = fVar7;
    fVar6 = fVar8;
    do {
      fVar8 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      fVar7 = fVar8;
      if (fVar5 <= fVar8) {
        fVar7 = fVar5;
      }
      if (fVar8 <= fVar6) {
        fVar8 = fVar6;
      }
      uVar2 = uVar2 - 1;
      fVar5 = fVar7;
      fVar6 = fVar8;
    } while (uVar2 != 0);
  }
  fVar5 = -fVar7;
  if (-fVar7 <= fVar8) {
    fVar5 = fVar8;
  }
  return CONCAT44(0x80000000,fVar5);
}






// 函数: undefined FUN_1807f9870;
undefined FUN_1807f9870;



// 函数: undefined FUN_1807f98c0;
undefined FUN_1807f98c0;



// 函数: undefined FUN_1807f9910;
undefined FUN_1807f9910;



// 函数: undefined FUN_1807aecd0;
undefined FUN_1807aecd0;



// 函数: undefined FUN_1807aed20;
undefined FUN_1807aed20;



// 函数: undefined FUN_1807aed50;
undefined FUN_1807aed50;



// 函数: undefined FUN_1807aed90;
undefined FUN_1807aed90;



// 函数: undefined FUN_1807aea80;
undefined FUN_1807aea80;



// 函数: undefined FUN_1807aeac0;
undefined FUN_1807aeac0;



// 函数: undefined FUN_1807aeb00;
undefined FUN_1807aeb00;
undefined UNK_18095d390;
undefined DAT_18095d420;
undefined UNK_18095d378;
undefined UNK_18095d380;
undefined UNK_18097bdf0;
undefined DAT_180be4cc8;
undefined UNK_18097be80;
undefined DAT_180be7ae8;
undefined DAT_180be7a80;
undefined UNK_18097c1e0;
undefined UNK_18097c2ec;
undefined UNK_18097bf38;
undefined UNK_18097c348;
undefined UNK_18097c258;
undefined UNK_18097c268;
undefined UNK_18097c278;
undefined UNK_18097c288;
undefined UNK_18097c294;
undefined UNK_18097c29c;
undefined UNK_18097c2a8;
undefined UNK_18097c2b8;
undefined UNK_18097c2c8;
undefined UNK_18097c2d8;
undefined UNK_1807bd138;
undefined UNK_1807bd144;
undefined UNK_1807bd1d0;
undefined UNK_1807bd1f0;
undefined UNK_1807bf0dc;
undefined UNK_1807bf0e8;
undefined UNK_1807bf174;
undefined UNK_1807bf194;
undefined UNK_18097bf60;
undefined UNK_18097c3c0;
undefined UNK_18097c3c8;
undefined UNK_18097c3d0;
undefined UNK_18097c3d8;
undefined UNK_18097c3e0;
undefined UNK_18097c3e4;
undefined UNK_18097c3e8;
undefined UNK_18097c3f0;
undefined UNK_18097c490;
char DAT_180c2e030;
undefined DAT_180c2e978;
undefined DAT_180be5740;
undefined UNK_18097c504;



// 函数: undefined FUN_1807c36a0;
undefined FUN_1807c36a0;
undefined UNK_1807c36e0;



// 函数: undefined FUN_1807c3700;
undefined FUN_1807c3700;
char DAT_180c30370;
undefined UNK_18097c540;
undefined DAT_18097c5d0;
undefined UNK_18097c600;
undefined UNK_18097c608;
undefined UNK_18097c618;
undefined UNK_18097c628;
undefined UNK_18097c638;
undefined UNK_18097c648;
undefined UNK_18097c650;
undefined UNK_18097c658;
undefined UNK_18097c660;
undefined UNK_18097c670;
undefined UNK_18097c6e8;
undefined UNK_18097c6f4;
undefined UNK_18097c700;
undefined UNK_18097c70c;
undefined UNK_18097c718;
undefined UNK_18097c728;
undefined UNK_18097c738;
undefined UNK_18097c748;
undefined UNK_18097c758;
undefined UNK_18097c764;
undefined UNK_18097c770;
undefined UNK_18097c77c;
undefined UNK_18097c7b0;
undefined UNK_18097c7c0;
undefined UNK_18097c7d4;
undefined UNK_18097c7dc;
undefined UNK_18097c7e4;
undefined UNK_18097c7f0;
undefined UNK_18097c7f8;
undefined UNK_18097c804;
undefined UNK_18097c80c;
undefined UNK_18097c818;
undefined UNK_1809fd7a8;
undefined UNK_18097c788;
undefined UNK_18097c798;
undefined UNK_18097c7a0;
undefined DAT_18097c8e8;
undefined DAT_18097c8f8;
undefined UNK_18097c920;
undefined UNK_18097c9c0;
undefined UNK_18097c9a8;
undefined UNK_18097ca38;
undefined UNK_18097caa0;
undefined DAT_180c309a0;
undefined UNK_18097ca88;
undefined UNK_18097cb40;
undefined DAT_180c30a90;
undefined UNK_18097cd70;
undefined DAT_180c30b80;
undefined UNK_18097cbe0;
undefined UNK_18097cc30;
undefined UNK_18097cc80;
undefined UNK_18097ccd0;
undefined UNK_18097cd20;
undefined UNK_18097cdf0;
undefined UNK_18097ce30;
undefined DAT_180c30c70;
undefined UNK_18097cf00;
undefined UNK_18097ceb0;
undefined UNK_18097cf70;
undefined UNK_18097d0d0;
undefined UNK_18097d140;
undefined UNK_18097d1c8;
undefined UNK_18097d1d8;
undefined UNK_18097d1e8;
undefined UNK_18097d260;
undefined UNK_18097d2e0;
undefined UNK_18097d5e0;
undefined UNK_18097d660;
undefined DAT_18097d870;
undefined DAT_18097d860;
undefined DAT_18097d850;
undefined DAT_18097d840;
undefined UNK_18097d8e0;
undefined UNK_18097d888;
undefined UNK_1807e59e0;
undefined DAT_180c31140;
undefined UNK_18097d960;
undefined DAT_180c30f40;
undefined DAT_180c31040;
undefined DAT_180c30f48;
undefined DAT_18097da20;
undefined DAT_18097da70;
undefined DAT_18097da80;
undefined UNK_18097db40;
undefined UNK_18097dc40;
undefined UNK_18097dde0;
undefined UNK_18097df40;
undefined UNK_18097dfb4;
undefined UNK_18097dfc0;
undefined UNK_18097dfd0;
undefined UNK_18097dfdc;
undefined UNK_18097df10;
undefined UNK_18097df18;
undefined UNK_18097df20;
undefined UNK_18097df28;
undefined UNK_18097c50c;
undefined UNK_18097df08;
undefined UNK_18097df0c;
undefined UNK_1807f5ac0;
undefined UNK_1807f5ad0;
undefined UNK_18097dfe8;
undefined DAT_180c2c728;
undefined DAT_180c2c730;
undefined UNK_18097e050;
undefined UNK_18097e170;
undefined UNK_18097e180;
undefined UNK_18097e198;
undefined UNK_18097e1b0;
undefined UNK_18097e1d0;
undefined UNK_18097e1e0;
undefined UNK_18097e1e8;
undefined UNK_18097e1f0;
undefined UNK_18097e200;
undefined UNK_18097e208;
undefined UNK_18097e218;
undefined UNK_18097e228;
undefined UNK_18097e238;
undefined UNK_18097e248;
undefined UNK_18097e258;
undefined UNK_18097e268;
undefined UNK_18097e278;
undefined UNK_18097e288;
undefined UNK_18097e298;
undefined UNK_18097e2a0;
undefined UNK_18097e2b0;
undefined UNK_18097e2b8;
undefined UNK_18097e2c8;
undefined UNK_18097e2d0;
undefined UNK_18097e2e0;
undefined UNK_18097e2e8;
undefined UNK_18097e2f8;
undefined UNK_18097e308;
undefined UNK_18097e320;
undefined UNK_18097e330;
undefined UNK_18097e340;
undefined UNK_18097e350;
undefined UNK_18097e360;
undefined UNK_18097e370;
undefined UNK_18097e380;
undefined UNK_18097e390;
undefined UNK_18097e3a0;
undefined UNK_18097e3a8;
undefined UNK_18097e3b8;
undefined UNK_18097e3c0;
undefined UNK_18097e3d0;
undefined UNK_18097e3d8;
undefined UNK_18097e3e8;
undefined UNK_18097e3f0;
undefined UNK_18097e408;
undefined UNK_18097e418;
undefined UNK_18097e428;
undefined UNK_18097e5d8;
undefined UNK_18097e5e8;
undefined DAT_1809fd738;
undefined UNK_18097e5f8;
undefined UNK_18097e790;
undefined UNK_18097e800;
undefined UNK_18097e8b0;
undefined UNK_18097e898;
undefined DAT_180be4cac;
undefined UNK_18097e938;
undefined UNK_18097ea18;
undefined UNK_18097ebb0;
undefined DAT_180c36cd0;
undefined UNK_18097ec60;
undefined UNK_18097ec50;
undefined DAT_180c36ce0;
undefined UNK_180801c70;
undefined UNK_180801ca0;



// 函数: undefined FUN_1808b4e90;
undefined FUN_1808b4e90;
undefined UNK_180987530;
undefined UNK_180987558;
undefined UNK_1809871d0;
undefined UNK_180987338;
undefined UNK_180987598;
undefined UNK_180987348;
undefined UNK_1809876c0;
undefined UNK_1809875b0;
undefined UNK_180987640;
undefined UNK_1809875c0;
undefined UNK_180987738;
undefined UNK_180987780;
undefined DAT_180c4f494;
undefined DAT_180c4f490;
undefined DAT_180c4f49c;
undefined DAT_180c4f498;
undefined DAT_180bef7b0;
undefined UNK_180987818;
undefined UNK_180987800;
undefined DAT_180c4f4f0;
undefined DAT_180c4f4a8;
undefined DAT_180c4f4b0;
undefined DAT_180c4f4c0;
undefined DAT_180c4f4d0;
undefined DAT_180c4f4a0;
undefined DAT_180c4f4ac;
undefined DAT_180c4f4c8;
undefined DAT_180c4f4e0;
int8_t DAT_180c4f4e8;
longlong UNK_180c4f4b8;
uint64_t UNK_180c4f4d8;
undefined UNK_180987838;
undefined UNK_180987860;
undefined UNK_1809878d8;
undefined UNK_180988078;
undefined UNK_180987f10;
undefined UNK_180987dc8;
undefined UNK_180987b70;
undefined UNK_180987918;
undefined UNK_180987a28;
undefined UNK_1809882d0;
undefined UNK_1809884c0;
undefined UNK_1809884f8;
undefined UNK_180988500;
undefined UNK_180988530;
undefined UNK_180988620;
undefined UNK_180988658;
undefined UNK_180988660;
undefined UNK_180988690;
undefined UNK_1809886d0;
undefined UNK_180988708;
undefined UNK_180988710;
undefined UNK_180988740;
undefined UNK_180988388;
undefined UNK_1809883c0;
undefined UNK_1809883c8;
undefined UNK_1809883f8;
undefined UNK_180988570;
undefined UNK_1809885a8;
undefined UNK_1809885b0;
undefined UNK_1809885e0;
undefined UNK_180988358;
undefined UNK_180988440;
undefined UNK_180988788;
undefined UNK_1809887b0;
undefined UNK_180988870;
undefined UNK_180988830;
undefined UNK_1809888f0;
undefined UNK_180988938;
undefined UNK_180986950;
undefined UNK_180988980;
undefined UNK_180988a00;
undefined DAT_180c4f508;
undefined DAT_180c4f4f8;
undefined UNK_180988af0;
int32_t UNK_180c4f4fc;
int32_t UNK_180c4f500;
int32_t UNK_180c4f504;
undefined UNK_180988a80;
undefined UNK_180988b00;
undefined UNK_180988b10;
undefined UNK_180988b90;
ulonglong UNK_00000070;
int UNK_00000078;
undefined UNK_180988c08;



// 函数: undefined FUN_1808dfa70;
undefined FUN_1808dfa70;
undefined UNK_180988c50;



// 函数: undefined FUN_1808e1cd0;
undefined FUN_1808e1cd0;
undefined UNK_180988c28;



// 函数: undefined FUN_1808e1020;
undefined FUN_1808e1020;
undefined UNK_180988d40;
undefined UNK_180988dc0;
undefined UNK_180988dc8;
undefined UNK_180988dd0;
undefined UNK_180988dd8;
undefined UNK_180988de0;
undefined UNK_180988de8;
undefined UNK_180988df4;
undefined UNK_180988e00;
undefined UNK_180988e18;
undefined UNK_180988e28;
undefined UNK_180988e38;
undefined UNK_180988e44;
undefined UNK_180988e50;
undefined UNK_180988cd0;
undefined UNK_180988e68;
undefined UNK_180988e78;
undefined UNK_180988e88;
undefined UNK_180988f00;
undefined UNK_180988f80;
undefined UNK_180989010;
undefined UNK_1809890f8;
undefined UNK_180989188;
undefined UNK_180989210;
undefined UNK_180989308;
undefined UNK_180848d40;
undefined UNK_180982fb8;
undefined UNK_180983038;
undefined UNK_180982e38;
undefined UNK_180982eb8;
undefined UNK_180982bb8;
undefined UNK_180982c38;
undefined UNK_180983138;
undefined UNK_1809831b8;
undefined UNK_180982d40;
undefined UNK_180984160;
undefined UNK_180984448;
undefined UNK_180983348;
undefined UNK_1809833d8;
undefined UNK_180983468;
undefined UNK_1809836a8;
undefined UNK_180983e00;
undefined UNK_180989090;
undefined UNK_1809838c8;
undefined UNK_1809891a8;
undefined UNK_180985b08;
undefined UNK_1809892a0;
undefined UNK_180981e58;
undefined UNK_180982810;
undefined UNK_180982890;
undefined UNK_180982a30;
undefined UNK_180981d58;
undefined UNK_180982910;
undefined UNK_1809829a0;
undefined UNK_180981dd8;
undefined UNK_180982480;
undefined UNK_1809820c0;
undefined UNK_180989520;
undefined UNK_180989558;
undefined UNK_180989580;
undefined UNK_180989688;
undefined UNK_1809896f0;
undefined UNK_180989758;
undefined UNK_1809895f8;
undefined UNK_180989640;
undefined UNK_180989810;
undefined UNK_1809897c0;
char DAT_180c4f818;
void *PTR_free_180944fd0;
void *PTR_malloc_180944fe8;
int8_t DAT_180c4f818;
undefined UNK_180989a20;
undefined UNK_180989b20;



// 函数: undefined FUN_1808efc90;
undefined FUN_1808efc90;
char DAT_180c69e20;
byte DAT_180c58840;
undefined UNK_180989f30;
undefined UNK_180989f40;
undefined UNK_180989f50;
undefined UNK_180989f60;
undefined DAT_180c69e18;
undefined DAT_180c69e10;



// 函数: undefined FUN_1808f34b0;
undefined FUN_1808f34b0;
char DAT_180c58850;
int8_t DAT_180c58854;
int8_t DAT_180c58853;
int8_t DAT_180c58855;
undefined DAT_180c698c0;
undefined DAT_180c698c8;



// 函数: undefined FUN_1808f4a70;
undefined FUN_1808f4a70;
char DAT_180c58852;
undefined DAT_180c698d0;
undefined DAT_180c69e00;
undefined DAT_180c69e08;
char DAT_180c58855;
undefined DAT_180c69860;
char DAT_180c58853;



// 函数: undefined FUN_1808f3c80;
undefined FUN_1808f3c80;
undefined UNK_18098a100;



// 函数: undefined FUN_1808f8b00;
undefined FUN_1808f8b00;
undefined UNK_18098a788;
undefined UNK_18098a7b0;
undefined UNK_18098a7d0;
undefined UNK_18098a828;
undefined UNK_18098a850;
undefined DAT_180c69e80;
undefined DAT_180c69ec0;
undefined DAT_180c69ea8;
undefined DAT_180c69ed0;
undefined DAT_180c69eb0;
undefined DAT_180c69ec8;
undefined DAT_180c69ea0;
undefined DAT_180c69e98;
undefined UNK_18098a888;
undefined DAT_180c69e88;
undefined DAT_180c69e90;
undefined DAT_180c69eb8;
undefined UNK_18098a8a8;
undefined UNK_18098a8c0;
undefined UNK_18098a8e0;
undefined UNK_18098a900;
undefined UNK_18098a920;
undefined UNK_18098a948;
undefined UNK_18098a968;
undefined UNK_18098a988;
undefined UNK_18098a9a8;
undefined UNK_18098a9d0;
undefined UNK_18098a9f8;
undefined DAT_180c69f78;
undefined UNK_18098ade0;
undefined UNK_18098adc0;
undefined DAT_180c69f70;
undefined UNK_18098ac80;
undefined UNK_18098aca0;
undefined UNK_18098acb8;
undefined UNK_18098ace0;
undefined UNK_18098ad10;
undefined UNK_18098ad38;
undefined UNK_18098ad60;
undefined UNK_18098ad88;
undefined UNK_18098ada0;
undefined UNK_18098afe8;
undefined UNK_18098b008;
undefined UNK_18098b020;
undefined UNK_18098b078;
undefined UNK_18098b098;
undefined UNK_18098b0c8;
undefined UNK_18098b0e0;
undefined UNK_18098b0f8;
undefined UNK_18098b110;
undefined UNK_18098b128;
undefined UNK_18098b190;
undefined UNK_18098b1c8;
undefined UNK_18098b1f0;
undefined UNK_18098b208;
undefined UNK_18098b240;
undefined UNK_18098b258;
undefined UNK_18098b288;
undefined UNK_18098b2a0;
undefined UNK_18098b308;
undefined UNK_18098b320;
undefined UNK_18098b378;
undefined UNK_18098b3a0;
undefined UNK_18098b3e8;
undefined UNK_18098b408;
char DAT_180c69ef8;
char DAT_180bf0080;
undefined DAT_180c69f88;
undefined DAT_180c69f90;
undefined DAT_180c69f98;
undefined DAT_180c69fa8;
undefined DAT_180c69fd0;
undefined DAT_180c69fd8;
undefined UNK_18098ab30;
undefined UNK_18098ae50;
undefined UNK_18098aed8;
undefined UNK_18098aef8;
undefined UNK_18098af08;
undefined UNK_18098af18;
undefined UNK_18098af28;
undefined UNK_18098af40;
undefined UNK_18098af50;
undefined UNK_18098afa0;
undefined UNK_18098ae10;
undefined UNK_18098ae20;
undefined DAT_180c69f58;
undefined DAT_180c69f50;
undefined UNK_18098adf8;
undefined UNK_18098aa48;
undefined UNK_18098aa60;
undefined UNK_18098aa80;
undefined UNK_18098aad8;
undefined UNK_18098ab18;
undefined DAT_180c69f38;
undefined DAT_180c69f40;
undefined DAT_180c69f48;
undefined DAT_180c69f60;
undefined DAT_180c69f68;
undefined DAT_180c69f80;
undefined DAT_180c6a010;
undefined DAT_180c6a018;
undefined UNK_18098ab50;
undefined UNK_18098ab68;
undefined UNK_18098ab78;
undefined UNK_18098ab88;
undefined UNK_18098aba8;
undefined UNK_18098abc8;
undefined UNK_18098abe0;
undefined UNK_18098abf8;
undefined UNK_18098ac10;
undefined UNK_18098ac28;
undefined UNK_18098ac50;
undefined UNK_18098ac70;
undefined DAT_180c6a140;
undefined DAT_180c6a158;
char DAT_180c6a14d;
char DAT_180c821c0;
char DAT_180c6a14c;
undefined UNK_18098b490;
undefined UNK_18098b6a0;
undefined UNK_18098b6d0;
undefined UNK_18098b6f0;
undefined UNK_18098b708;
undefined UNK_18098b720;
undefined UNK_18098b730;
undefined DAT_180c6a148;
undefined UNK_18098b5f8;
undefined UNK_18098b610;
undefined UNK_18098b640;
void *PTR_OutputDebugStringA_180944440;
int8_t DAT_180c6a14d;
undefined UNK_18098b418;
undefined UNK_18098b430;
undefined UNK_18098b45c;
undefined UNK_18098b464;
undefined UNK_18098b470;
undefined UNK_18098b4e0;
undefined UNK_18098b4e8;
undefined UNK_18098b51c;
undefined UNK_18098b520;
undefined UNK_18098b580;
undefined UNK_18098b5d8;
bool DAT_180c6a14d;
char DAT_180bf0082;
undefined UNK_1808fbf20;
undefined DAT_180c823f8;
undefined DAT_180c82398;
undefined DAT_180c82270;
undefined DAT_180c82380;
undefined DAT_180c82260;
undefined DAT_180c82264;
undefined DAT_180c82278;
undefined DAT_180bf00a0;
undefined UNK_18098b898;
uint64_t UNK_180c82280;
undefined DAT_180c821c8;
undefined DAT_180c821c4;
undefined UNK_1809455c0;
undefined UNK_1809464c8;
undefined UNK_1809464e8;
undefined UNK_1809464f8;
undefined UNK_18098b7a0;
undefined DAT_180c821d0;
void *StackBase;
undefined DAT_180c821e0;
int8_t DAT_180c821d8;
char DAT_180c821d9;
undefined DAT_180c821f0;
undefined DAT_180c821f8;
undefined DAT_180c82208;
ulonglong UNK_180c821e8;
ulonglong UNK_180c82200;
IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER_1800002a0;
undefined UNK_1800003e0;
char DAT_180c821d8;
undefined DAT_180c82240;
undefined DAT_180c82248;
undefined DAT_180c82250;
undefined UNK_18098b7d0;
undefined UNK_18098b818;
undefined UNK_18098b838;



// 函数: undefined FUN_1808fcad8;
undefined FUN_1808fcad8;
undefined UNK_18098b858;
undefined UNK_18098b878;
undefined DAT_180bf0094;
ulonglong UNK_180c82280;
undefined UNK_1809464d8;
undefined UNK_1809464e0;
void *StackLimit;
undefined DAT_180bf00b4;
undefined DAT_180bf00b8;
undefined DAT_180c827d0;
undefined DAT_180d9f600;
undefined DAT_180d9f000;
undefined DAT_180d9f5d0;
undefined UNK_180d9f008;
undefined DAT_180d9f5c0;
undefined UNK_180d9f410;
undefined UNK_180d9f418;
undefined DAT_180d9f580;
undefined DAT_180d9f6d0;
undefined DAT_180d9f6b0;
undefined DAT_180d9f680;
undefined DAT_180d9f670;
undefined DAT_180d9f610;
undefined DAT_18098b8c0;
undefined UNK_180d9f700;
undefined DAT_180d9fd20;
undefined UNK_180d9f708;
undefined DAT_180d9fd10;
undefined UNK_180d9fb10;
undefined UNK_180d9fb18;
undefined DAT_180d9fce0;
undefined DAT_180d9fcd0;
undefined DAT_180d9fc80;
undefined DAT_180d9fdc0;
undefined DAT_180d9fda0;
undefined DAT_180d9fd90;
undefined DAT_180d9fd30;
undefined DAT_180da3280;
undefined DAT_180da34c0;
undefined UNK_18099a180;
undefined UNK_180da3600;
undefined UNK_180a908f8;
undefined UNK_180a90908;
undefined UNK_18098b958;
undefined UNK_180bd88e8;
undefined UNK_180da7800;
undefined UNK_180da7824;
undefined UNK_180da7828;
undefined UNK_180da786c;
undefined UNK_180da7890;
undefined UNK_180da7894;
undefined UNK_180da78d8;
undefined UNK_180da791c;
undefined UNK_180da7920;
undefined UNK_180da79a4;
undefined UNK_180da79a8;
undefined UNK_180da7dc0;
undefined UNK_180da7dcc;
undefined UNK_180da7de8;
undefined DAT_180c82800;



// 函数: void FUN_1807a01ab(void)
void FUN_1807a01ab(void)

{
  return;
}






// 函数: void FUN_1807a01e0(void)
void FUN_1807a01e0(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c11794,0,0x5c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




