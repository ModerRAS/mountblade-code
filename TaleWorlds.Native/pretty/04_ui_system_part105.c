#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part105.c - 13 个函数
// 函数: void function_72d609(float *param_1,float *param_2)
void function_72d609(float *param_1,float *param_2)
{
  float *pfVar1;
  int64_t unaff_RBX;
  int64_t lVar2;
  int64_t lVar3;
  int64_t in_R10;
  int64_t lVar4;
  int64_t in_R11;
  lVar2 = in_R11 - unaff_RBX;
  lVar3 = (in_R10 - 0x10U >> 2) + 1;
  lVar4 = lVar3 * 4 + 0xc;
  do {
    *(float *)((int64_t)param_1 + lVar2 + 0xc) =
         param_1[3] -
         (*param_2 * param_1[2] + param_1[1] * param_2[1] + *param_1 * param_2[2] +
          param_2[3] * param_1[-1] + param_2[4] * param_1[-2] + param_2[5] * param_1[-3] +
          param_2[6] * param_1[-4] + param_2[7] * param_1[-5] + param_2[8] * param_1[-6] +
          param_2[9] * param_1[-7] + param_2[10] * param_1[-8] + param_1[-9] * param_2[0xb]);
    *(float *)((int64_t)param_1 + lVar2 + 0x10) =
         param_1[4] -
         (*param_2 * param_1[3] + param_1[2] * param_2[1] + param_2[2] * param_1[1] +
          *param_1 * param_2[3] + param_2[4] * param_1[-1] + param_2[5] * param_1[-2] +
          param_2[6] * param_1[-3] + param_2[7] * param_1[-4] + param_2[8] * param_1[-5] +
          param_2[9] * param_1[-6] + param_2[10] * param_1[-7] + param_2[0xb] * param_1[-8]);
    *(float *)((int64_t)param_1 + lVar2 + 0x14) =
         param_1[5] -
         (*param_2 * param_1[4] + param_1[3] * param_2[1] + param_2[2] * param_1[2] +
          param_2[3] * param_1[1] + *param_1 * param_2[4] + param_2[5] * param_1[-1] +
          param_2[6] * param_1[-2] + param_2[7] * param_1[-3] + param_2[8] * param_1[-4] +
          param_2[9] * param_1[-5] + param_2[10] * param_1[-6] + param_2[0xb] * param_1[-7]);
    *(float *)((int64_t)param_1 + lVar2 + 0x18) =
         param_1[6] -
         (*param_2 * param_1[5] + param_1[4] * param_2[1] + param_2[2] * param_1[3] +
          param_2[3] * param_1[2] + param_2[4] * param_1[1] + *param_1 * param_2[5] +
          param_2[6] * param_1[-1] + param_2[7] * param_1[-2] + param_2[8] * param_1[-3] +
          param_2[9] * param_1[-4] + param_2[10] * param_1[-5] + param_2[0xb] * param_1[-6]);
    param_1 = param_1 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (lVar4 < in_R10) {
    pfVar1 = (float *)(unaff_RBX + -0xc + lVar4 * 4);
    lVar4 = in_R10 - lVar4;
    do {
      *(float *)((int64_t)pfVar1 + (in_R11 - unaff_RBX) + 0xc) =
           pfVar1[3] -
           (pfVar1[2] * *param_2 + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
            pfVar1[-1] * param_2[3] + pfVar1[-2] * param_2[4] + pfVar1[-3] * param_2[5] +
            pfVar1[-4] * param_2[6] + pfVar1[-5] * param_2[7] + pfVar1[-6] * param_2[8] +
            pfVar1[-7] * param_2[9] + pfVar1[-8] * param_2[10] + pfVar1[-9] * param_2[0xb]);
      pfVar1 = pfVar1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}
// 函数: void function_72d907(uint64_t param_1,float *param_2,uint64_t param_3,int64_t param_4)
void function_72d907(uint64_t param_1,float *param_2,uint64_t param_3,int64_t param_4)
{
  float *pfVar1;
  int64_t unaff_RBX;
  int64_t in_R10;
  int64_t in_R11;
  if (param_4 < in_R10) {
    pfVar1 = (float *)(unaff_RBX + -0xc + param_4 * 4);
    param_4 = in_R10 - param_4;
    do {
      *(float *)((int64_t)pfVar1 + (in_R11 - unaff_RBX) + 0xc) =
           pfVar1[3] -
           (pfVar1[2] * *param_2 + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
            pfVar1[-1] * param_2[3] + pfVar1[-2] * param_2[4] + pfVar1[-3] * param_2[5] +
            pfVar1[-4] * param_2[6] + pfVar1[-5] * param_2[7] + pfVar1[-6] * param_2[8] +
            pfVar1[-7] * param_2[9] + pfVar1[-8] * param_2[10] + pfVar1[-9] * param_2[0xb]);
      pfVar1 = pfVar1 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}
// 函数: void function_72d9e0(int64_t param_1,float *param_2,int64_t param_3,int param_4)
void function_72d9e0(int64_t param_1,float *param_2,int64_t param_3,int param_4)
{
  float *pfVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  lVar5 = (int64_t)param_4;
  if (0x10 < lVar5) {
    lVar4 = 0x10;
    if (0x13 < lVar5) {
      pfVar1 = (float *)(param_3 + 0x34);
      lVar2 = param_1 - param_3;
      lVar3 = (lVar5 - 0x14U >> 2) + 1;
      lVar4 = lVar3 * 4 + 0x10;
      do {
        *(float *)((int64_t)pfVar1 + lVar2 + 0xc) =
             pfVar1[3] -
             (*param_2 * pfVar1[2] + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
              param_2[3] * pfVar1[-1] + param_2[4] * pfVar1[-2] + param_2[5] * pfVar1[-3] +
              param_2[6] * pfVar1[-4] + param_2[7] * pfVar1[-5] + param_2[8] * pfVar1[-6] +
              param_2[9] * pfVar1[-7] + param_2[10] * pfVar1[-8] + param_2[0xb] * pfVar1[-9] +
              param_2[0xc] * pfVar1[-10] + param_2[0xd] * pfVar1[-0xb] + param_2[0xe] * pfVar1[-0xc]
             + pfVar1[-0xd] * param_2[0xf]);
        *(float *)((int64_t)pfVar1 + lVar2 + 0x10) =
             pfVar1[4] -
             (*param_2 * pfVar1[3] + pfVar1[2] * param_2[1] + param_2[2] * pfVar1[1] +
              *pfVar1 * param_2[3] + param_2[4] * pfVar1[-1] + param_2[5] * pfVar1[-2] +
              param_2[6] * pfVar1[-3] + param_2[7] * pfVar1[-4] + param_2[8] * pfVar1[-5] +
              param_2[9] * pfVar1[-6] + param_2[10] * pfVar1[-7] + param_2[0xb] * pfVar1[-8] +
              param_2[0xc] * pfVar1[-9] + param_2[0xd] * pfVar1[-10] + param_2[0xe] * pfVar1[-0xb] +
             param_2[0xf] * pfVar1[-0xc]);
        *(float *)((int64_t)pfVar1 + lVar2 + 0x14) =
             pfVar1[5] -
             (*param_2 * pfVar1[4] + pfVar1[3] * param_2[1] + param_2[2] * pfVar1[2] +
              param_2[3] * pfVar1[1] + *pfVar1 * param_2[4] + param_2[5] * pfVar1[-1] +
              param_2[6] * pfVar1[-2] + param_2[7] * pfVar1[-3] + param_2[8] * pfVar1[-4] +
              param_2[9] * pfVar1[-5] + param_2[10] * pfVar1[-6] + param_2[0xb] * pfVar1[-7] +
              param_2[0xc] * pfVar1[-8] + param_2[0xd] * pfVar1[-9] + param_2[0xe] * pfVar1[-10] +
             param_2[0xf] * pfVar1[-0xb]);
        *(float *)((int64_t)pfVar1 + lVar2 + 0x18) =
             pfVar1[6] -
             (*param_2 * pfVar1[5] + pfVar1[4] * param_2[1] + param_2[2] * pfVar1[3] +
              param_2[3] * pfVar1[2] + param_2[4] * pfVar1[1] + *pfVar1 * param_2[5] +
              param_2[6] * pfVar1[-1] + param_2[7] * pfVar1[-2] + param_2[8] * pfVar1[-3] +
              param_2[9] * pfVar1[-4] + param_2[10] * pfVar1[-5] + param_2[0xb] * pfVar1[-6] +
              param_2[0xc] * pfVar1[-7] + param_2[0xd] * pfVar1[-8] + param_2[0xe] * pfVar1[-9] +
             param_2[0xf] * pfVar1[-10]);
        pfVar1 = pfVar1 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar4 < lVar5) {
      pfVar1 = (float *)(param_3 + -0xc + lVar4 * 4);
      lVar5 = lVar5 - lVar4;
      do {
        *(float *)((int64_t)pfVar1 + (param_1 - param_3) + 0xc) =
             pfVar1[3] -
             (pfVar1[2] * *param_2 + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
              pfVar1[-1] * param_2[3] + pfVar1[-2] * param_2[4] + pfVar1[-3] * param_2[5] +
              pfVar1[-4] * param_2[6] + pfVar1[-5] * param_2[7] + pfVar1[-6] * param_2[8] +
              pfVar1[-7] * param_2[9] + pfVar1[-8] * param_2[10] + pfVar1[-9] * param_2[0xb] +
              pfVar1[-10] * param_2[0xc] + pfVar1[-0xb] * param_2[0xd] + pfVar1[-0xc] * param_2[0xe]
             + pfVar1[-0xd] * param_2[0xf]);
        pfVar1 = pfVar1 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}
// 函数: void function_72da09(float *param_1,float *param_2)
void function_72da09(float *param_1,float *param_2)
{
  float *pfVar1;
  int64_t unaff_RBX;
  int64_t lVar2;
  int64_t lVar3;
  int64_t in_R10;
  int64_t lVar4;
  int64_t in_R11;
  lVar2 = in_R11 - unaff_RBX;
  lVar3 = (in_R10 - 0x14U >> 2) + 1;
  lVar4 = lVar3 * 4 + 0x10;
  do {
    *(float *)((int64_t)param_1 + lVar2 + 0xc) =
         param_1[3] -
         (*param_2 * param_1[2] + param_1[1] * param_2[1] + *param_1 * param_2[2] +
          param_2[3] * param_1[-1] + param_2[4] * param_1[-2] + param_2[5] * param_1[-3] +
          param_2[6] * param_1[-4] + param_2[7] * param_1[-5] + param_2[8] * param_1[-6] +
          param_2[9] * param_1[-7] + param_2[10] * param_1[-8] + param_2[0xb] * param_1[-9] +
          param_2[0xc] * param_1[-10] + param_2[0xd] * param_1[-0xb] + param_2[0xe] * param_1[-0xc]
         + param_1[-0xd] * param_2[0xf]);
    *(float *)((int64_t)param_1 + lVar2 + 0x10) =
         param_1[4] -
         (*param_2 * param_1[3] + param_1[2] * param_2[1] + param_2[2] * param_1[1] +
          *param_1 * param_2[3] + param_2[4] * param_1[-1] + param_2[5] * param_1[-2] +
          param_2[6] * param_1[-3] + param_2[7] * param_1[-4] + param_2[8] * param_1[-5] +
          param_2[9] * param_1[-6] + param_2[10] * param_1[-7] + param_2[0xb] * param_1[-8] +
          param_2[0xc] * param_1[-9] + param_2[0xd] * param_1[-10] + param_2[0xe] * param_1[-0xb] +
         param_2[0xf] * param_1[-0xc]);
    *(float *)((int64_t)param_1 + lVar2 + 0x14) =
         param_1[5] -
         (*param_2 * param_1[4] + param_1[3] * param_2[1] + param_2[2] * param_1[2] +
          param_2[3] * param_1[1] + *param_1 * param_2[4] + param_2[5] * param_1[-1] +
          param_2[6] * param_1[-2] + param_2[7] * param_1[-3] + param_2[8] * param_1[-4] +
          param_2[9] * param_1[-5] + param_2[10] * param_1[-6] + param_2[0xb] * param_1[-7] +
          param_2[0xc] * param_1[-8] + param_2[0xd] * param_1[-9] + param_2[0xe] * param_1[-10] +
         param_2[0xf] * param_1[-0xb]);
    *(float *)((int64_t)param_1 + lVar2 + 0x18) =
         param_1[6] -
         (*param_2 * param_1[5] + param_1[4] * param_2[1] + param_2[2] * param_1[3] +
          param_2[3] * param_1[2] + param_2[4] * param_1[1] + *param_1 * param_2[5] +
          param_2[6] * param_1[-1] + param_2[7] * param_1[-2] + param_2[8] * param_1[-3] +
          param_2[9] * param_1[-4] + param_2[10] * param_1[-5] + param_2[0xb] * param_1[-6] +
          param_2[0xc] * param_1[-7] + param_2[0xd] * param_1[-8] + param_2[0xe] * param_1[-9] +
         param_2[0xf] * param_1[-10]);
    param_1 = param_1 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (lVar4 < in_R10) {
    pfVar1 = (float *)(unaff_RBX + -0xc + lVar4 * 4);
    lVar4 = in_R10 - lVar4;
    do {
      *(float *)((int64_t)pfVar1 + (in_R11 - unaff_RBX) + 0xc) =
           pfVar1[3] -
           (pfVar1[2] * *param_2 + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
            pfVar1[-1] * param_2[3] + pfVar1[-2] * param_2[4] + pfVar1[-3] * param_2[5] +
            pfVar1[-4] * param_2[6] + pfVar1[-5] * param_2[7] + pfVar1[-6] * param_2[8] +
            pfVar1[-7] * param_2[9] + pfVar1[-8] * param_2[10] + pfVar1[-9] * param_2[0xb] +
            pfVar1[-10] * param_2[0xc] + pfVar1[-0xb] * param_2[0xd] + pfVar1[-0xc] * param_2[0xe] +
           pfVar1[-0xd] * param_2[0xf]);
      pfVar1 = pfVar1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}
// 函数: void function_72dde7(uint64_t param_1,float *param_2,uint64_t param_3,int64_t param_4)
void function_72dde7(uint64_t param_1,float *param_2,uint64_t param_3,int64_t param_4)
{
  float *pfVar1;
  int64_t unaff_RBX;
  int64_t in_R10;
  int64_t in_R11;
  if (param_4 < in_R10) {
    pfVar1 = (float *)(unaff_RBX + -0xc + param_4 * 4);
    param_4 = in_R10 - param_4;
    do {
      *(float *)((int64_t)pfVar1 + (in_R11 - unaff_RBX) + 0xc) =
           pfVar1[3] -
           (pfVar1[2] * *param_2 + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
            pfVar1[-1] * param_2[3] + pfVar1[-2] * param_2[4] + pfVar1[-3] * param_2[5] +
            pfVar1[-4] * param_2[6] + pfVar1[-5] * param_2[7] + pfVar1[-6] * param_2[8] +
            pfVar1[-7] * param_2[9] + pfVar1[-8] * param_2[10] + pfVar1[-9] * param_2[0xb] +
            pfVar1[-10] * param_2[0xc] + pfVar1[-0xb] * param_2[0xd] + pfVar1[-0xc] * param_2[0xe] +
           pfVar1[-0xd] * param_2[0xf]);
      pfVar1 = pfVar1 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}
// 函数: void function_72df00(int64_t param_1,float *param_2,int64_t param_3,int param_4)
void function_72df00(int64_t param_1,float *param_2,int64_t param_3,int param_4)
{
  float *pfVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  lVar5 = (int64_t)param_4;
  if (6 < lVar5) {
    lVar4 = 6;
    if (9 < lVar5) {
      pfVar1 = (float *)(param_3 + 0xc);
      lVar2 = param_1 - param_3;
      lVar3 = (lVar5 - 10U >> 2) + 1;
      lVar4 = lVar3 * 4 + 6;
      do {
        *(float *)((int64_t)pfVar1 + lVar2 + 0xc) =
             pfVar1[3] -
             (*param_2 * pfVar1[2] + pfVar1[1] * param_2[1] + param_2[2] * *pfVar1 +
              param_2[3] * pfVar1[-1] + param_2[4] * pfVar1[-2] + pfVar1[-3] * param_2[5]);
        *(float *)((int64_t)pfVar1 + lVar2 + 0x10) =
             pfVar1[4] -
             (*param_2 * pfVar1[3] + pfVar1[2] * param_2[1] + param_2[2] * pfVar1[1] +
              param_2[3] * *pfVar1 + param_2[4] * pfVar1[-1] + param_2[5] * pfVar1[-2]);
        *(float *)((int64_t)pfVar1 + lVar2 + 0x14) =
             pfVar1[5] -
             (pfVar1[4] * *param_2 + pfVar1[3] * param_2[1] + param_2[2] * pfVar1[2] +
              param_2[3] * pfVar1[1] + param_2[4] * *pfVar1 + param_2[5] * pfVar1[-1]);
        *(float *)((int64_t)pfVar1 + lVar2 + 0x18) =
             pfVar1[6] -
             (pfVar1[4] * param_2[1] + *param_2 * pfVar1[5] + param_2[2] * pfVar1[3] +
              param_2[3] * pfVar1[2] + param_2[4] * pfVar1[1] + param_2[5] * *pfVar1);
        pfVar1 = pfVar1 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar4 < lVar5) {
      pfVar1 = (float *)(param_3 + -0xc + lVar4 * 4);
      lVar5 = lVar5 - lVar4;
      do {
        *(float *)((int64_t)pfVar1 + (param_1 - param_3) + 0xc) =
             pfVar1[3] -
             (pfVar1[2] * *param_2 + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
              pfVar1[-1] * param_2[3] + pfVar1[-2] * param_2[4] + pfVar1[-3] * param_2[5]);
        pfVar1 = pfVar1 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}
// 函数: void function_72df29(float *param_1,float *param_2)
void function_72df29(float *param_1,float *param_2)
{
  float *pfVar1;
  int64_t unaff_RBX;
  int64_t lVar2;
  int64_t lVar3;
  int64_t in_R10;
  int64_t lVar4;
  int64_t in_R11;
  lVar2 = in_R11 - unaff_RBX;
  lVar3 = (in_R10 - 10U >> 2) + 1;
  lVar4 = lVar3 * 4 + 6;
  do {
    *(float *)((int64_t)param_1 + lVar2 + 0xc) =
         param_1[3] -
         (*param_2 * param_1[2] + param_1[1] * param_2[1] + param_2[2] * *param_1 +
          param_2[3] * param_1[-1] + param_2[4] * param_1[-2] + param_1[-3] * param_2[5]);
    *(float *)((int64_t)param_1 + lVar2 + 0x10) =
         param_1[4] -
         (*param_2 * param_1[3] + param_1[2] * param_2[1] + param_2[2] * param_1[1] +
          param_2[3] * *param_1 + param_2[4] * param_1[-1] + param_2[5] * param_1[-2]);
    *(float *)((int64_t)param_1 + lVar2 + 0x14) =
         param_1[5] -
         (param_1[4] * *param_2 + param_1[3] * param_2[1] + param_2[2] * param_1[2] +
          param_2[3] * param_1[1] + param_2[4] * *param_1 + param_2[5] * param_1[-1]);
    *(float *)((int64_t)param_1 + lVar2 + 0x18) =
         param_1[6] -
         (param_1[4] * param_2[1] + *param_2 * param_1[5] + param_2[2] * param_1[3] +
          param_2[3] * param_1[2] + param_2[4] * param_1[1] + param_2[5] * *param_1);
    param_1 = param_1 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (lVar4 < in_R10) {
    pfVar1 = (float *)(unaff_RBX + -0xc + lVar4 * 4);
    lVar4 = in_R10 - lVar4;
    do {
      *(float *)((int64_t)pfVar1 + (in_R11 - unaff_RBX) + 0xc) =
           pfVar1[3] -
           (pfVar1[2] * *param_2 + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
            pfVar1[-1] * param_2[3] + pfVar1[-2] * param_2[4] + pfVar1[-3] * param_2[5]);
      pfVar1 = pfVar1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}
// 函数: void function_72e0d7(uint64_t param_1,float *param_2,uint64_t param_3,int64_t param_4)
void function_72e0d7(uint64_t param_1,float *param_2,uint64_t param_3,int64_t param_4)
{
  float *pfVar1;
  int64_t unaff_RBX;
  int64_t in_R10;
  int64_t in_R11;
  if (param_4 < in_R10) {
    pfVar1 = (float *)(unaff_RBX + -0xc + param_4 * 4);
    param_4 = in_R10 - param_4;
    do {
      *(float *)((int64_t)pfVar1 + (in_R11 - unaff_RBX) + 0xc) =
           pfVar1[3] -
           (pfVar1[2] * *param_2 + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
            pfVar1[-1] * param_2[3] + pfVar1[-2] * param_2[4] + pfVar1[-3] * param_2[5]);
      pfVar1 = pfVar1 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}
// 函数: void function_72e160(int64_t param_1,float *param_2,int64_t param_3,int param_4)
void function_72e160(int64_t param_1,float *param_2,int64_t param_3,int param_4)
{
  float *pfVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  lVar5 = (int64_t)param_4;
  if (8 < lVar5) {
    lVar4 = 8;
    if (0xb < lVar5) {
      pfVar1 = (float *)(param_3 + 0x14);
      lVar2 = param_1 - param_3;
      lVar3 = (lVar5 - 0xcU >> 2) + 1;
      lVar4 = lVar3 * 4 + 8;
      do {
        *(float *)(lVar2 + 0xc + (int64_t)pfVar1) =
             pfVar1[3] -
             (*param_2 * pfVar1[2] + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
              param_2[3] * pfVar1[-1] + param_2[4] * pfVar1[-2] + param_2[5] * pfVar1[-3] +
              param_2[6] * pfVar1[-4] + pfVar1[-5] * param_2[7]);
        *(float *)(lVar2 + 0x10 + (int64_t)pfVar1) =
             pfVar1[4] -
             (*param_2 * pfVar1[3] + pfVar1[2] * param_2[1] + param_2[2] * pfVar1[1] +
              *pfVar1 * param_2[3] + param_2[4] * pfVar1[-1] + param_2[5] * pfVar1[-2] +
              param_2[6] * pfVar1[-3] + param_2[7] * pfVar1[-4]);
        *(float *)(lVar2 + 0x14 + (int64_t)pfVar1) =
             pfVar1[5] -
             (*param_2 * pfVar1[4] + pfVar1[3] * param_2[1] + param_2[2] * pfVar1[2] +
              param_2[3] * pfVar1[1] + *pfVar1 * param_2[4] + param_2[5] * pfVar1[-1] +
              param_2[6] * pfVar1[-2] + param_2[7] * pfVar1[-3]);
        *(float *)(lVar2 + 0x18 + (int64_t)pfVar1) =
             pfVar1[6] -
             (*param_2 * pfVar1[5] + pfVar1[4] * param_2[1] + param_2[2] * pfVar1[3] +
              param_2[3] * pfVar1[2] + param_2[4] * pfVar1[1] + *pfVar1 * param_2[5] +
              param_2[6] * pfVar1[-1] + param_2[7] * pfVar1[-2]);
        pfVar1 = pfVar1 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar4 < lVar5) {
      pfVar1 = (float *)(param_3 + -0xc + lVar4 * 4);
      lVar5 = lVar5 - lVar4;
      do {
        *(float *)((param_1 - param_3) + 0xc + (int64_t)pfVar1) =
             pfVar1[3] -
             (pfVar1[2] * *param_2 + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
              pfVar1[-1] * param_2[3] + pfVar1[-2] * param_2[4] + pfVar1[-3] * param_2[5] +
              pfVar1[-4] * param_2[6] + pfVar1[-5] * param_2[7]);
        pfVar1 = pfVar1 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}
// 函数: void function_72e189(float *param_1,float *param_2)
void function_72e189(float *param_1,float *param_2)
{
  float *pfVar1;
  int64_t unaff_RBX;
  int64_t lVar2;
  int64_t lVar3;
  int64_t in_R10;
  int64_t lVar4;
  int64_t in_R11;
  lVar2 = in_R11 - unaff_RBX;
  lVar3 = (in_R10 - 0xcU >> 2) + 1;
  lVar4 = lVar3 * 4 + 8;
  do {
    *(float *)(lVar2 + 0xc + (int64_t)param_1) =
         param_1[3] -
         (*param_2 * param_1[2] + param_1[1] * param_2[1] + *param_1 * param_2[2] +
          param_2[3] * param_1[-1] + param_2[4] * param_1[-2] + param_2[5] * param_1[-3] +
          param_2[6] * param_1[-4] + param_1[-5] * param_2[7]);
    *(float *)(lVar2 + 0x10 + (int64_t)param_1) =
         param_1[4] -
         (*param_2 * param_1[3] + param_1[2] * param_2[1] + param_2[2] * param_1[1] +
          *param_1 * param_2[3] + param_2[4] * param_1[-1] + param_2[5] * param_1[-2] +
          param_2[6] * param_1[-3] + param_2[7] * param_1[-4]);
    *(float *)(lVar2 + 0x14 + (int64_t)param_1) =
         param_1[5] -
         (*param_2 * param_1[4] + param_1[3] * param_2[1] + param_2[2] * param_1[2] +
          param_2[3] * param_1[1] + *param_1 * param_2[4] + param_2[5] * param_1[-1] +
          param_2[6] * param_1[-2] + param_2[7] * param_1[-3]);
    *(float *)(lVar2 + 0x18 + (int64_t)param_1) =
         param_1[6] -
         (*param_2 * param_1[5] + param_1[4] * param_2[1] + param_2[2] * param_1[3] +
          param_2[3] * param_1[2] + param_2[4] * param_1[1] + *param_1 * param_2[5] +
          param_2[6] * param_1[-1] + param_2[7] * param_1[-2]);
    param_1 = param_1 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (lVar4 < in_R10) {
    pfVar1 = (float *)(unaff_RBX + -0xc + lVar4 * 4);
    lVar4 = in_R10 - lVar4;
    do {
      *(float *)((in_R11 - unaff_RBX) + 0xc + (int64_t)pfVar1) =
           pfVar1[3] -
           (pfVar1[2] * *param_2 + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
            pfVar1[-1] * param_2[3] + pfVar1[-2] * param_2[4] + pfVar1[-3] * param_2[5] +
            pfVar1[-4] * param_2[6] + pfVar1[-5] * param_2[7]);
      pfVar1 = pfVar1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}
// 函数: void function_72e3a7(uint64_t param_1,float *param_2,uint64_t param_3,int64_t param_4)
void function_72e3a7(uint64_t param_1,float *param_2,uint64_t param_3,int64_t param_4)
{
  float *pfVar1;
  int64_t unaff_RBX;
  int64_t in_R10;
  int64_t in_R11;
  if (param_4 < in_R10) {
    pfVar1 = (float *)(unaff_RBX + -0xc + param_4 * 4);
    param_4 = in_R10 - param_4;
    do {
      *(float *)((in_R11 - unaff_RBX) + 0xc + (int64_t)pfVar1) =
           pfVar1[3] -
           (pfVar1[2] * *param_2 + pfVar1[1] * param_2[1] + *pfVar1 * param_2[2] +
            pfVar1[-1] * param_2[3] + pfVar1[-2] * param_2[4] + pfVar1[-3] * param_2[5] +
            pfVar1[-4] * param_2[6] + pfVar1[-5] * param_2[7]);
      pfVar1 = pfVar1 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}
// 函数: void function_72e450(uint64_t param_1)
void function_72e450(uint64_t param_1)
{
  int64_t lVar1;
  int local_var_28;
  lVar1 = (int64_t)local_var_28;
  if (local_var_28 == 6) {
    lVar1 = function_72df00();
  }
  else if (local_var_28 == 8) {
    lVar1 = function_72e160();
  }
  else if (local_var_28 == 10) {
    lVar1 = function_72d260();
  }
  else if (local_var_28 == 0xc) {
    lVar1 = function_72d5e0();
  }
  else if (local_var_28 == 0x10) {
    lVar1 = function_72d9e0();
  }
// WARNING: Could not recover jumptable at 0x0001808ffc3b. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  memset(param_1,0,lVar1 << 2);
  return;
}
// 函数: void function_72e4b0(int64_t param_1,int64_t param_2,float param_3,uint param_4)
void function_72e4b0(int64_t param_1,int64_t param_2,float param_3,uint param_4)
{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int64_t lVar11;
  float *pfVar12;
  uint uVar13;
  int64_t lVar14;
  int iVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  iVar15 = 0;
  lVar16 = (int64_t)(int)param_4;
  if ((param_4 & 0xfffc) != 0) {
    lVar18 = param_2 - param_1;
    lVar11 = ((uint64_t)(param_4 & 0xfffc) - 1 >> 2) + 1;
    iVar15 = (int)lVar11 * 4;
    pfVar12 = (float *)(param_1 + 4);
    do {
      pfVar1 = pfVar12 + 4;
      pfVar12[-1] = param_3 * *(float *)(lVar18 + -0x14 + (int64_t)pfVar1);
      *pfVar12 = param_3 * *(float *)(lVar18 + -0x10 + (int64_t)pfVar1);
      pfVar12[1] = param_3 * *(float *)(lVar18 + -0xc + (int64_t)pfVar1);
      pfVar12[2] = param_3 * *(float *)(lVar18 + -8 + (int64_t)pfVar1);
      lVar11 = lVar11 + -1;
      pfVar12 = pfVar1;
    } while (lVar11 != 0);
  }
  if ((iVar15 < (int)param_4) && (0xf < param_4 - iVar15)) {
    lVar11 = (int64_t)iVar15;
    if (((uint64_t)(param_2 + (int64_t)(int)(param_4 - 1) * 4) < (uint64_t)(param_1 + lVar11 * 4)
        ) || ((uint64_t)(param_1 + (int64_t)(int)(param_4 - 1) * 4) <
              (uint64_t)(param_2 + lVar11 * 4))) {
      uVar13 = param_4 - iVar15 & 0x8000000f;
      if ((int)uVar13 < 0) {
        uVar13 = (uVar13 - 1 | 0xfffffff0) + 1;
      }
      lVar18 = param_2 - param_1;
      pfVar12 = (float *)(param_1 + 0x10 + lVar11 * 4);
      do {
        pfVar2 = (float *)(lVar18 + -0x10 + (int64_t)pfVar12);
        fVar3 = pfVar2[1];
        fVar4 = pfVar2[2];
        fVar5 = pfVar2[3];
        iVar15 = iVar15 + 0x10;
        lVar11 = lVar11 + 0x10;
        pfVar1 = (float *)(lVar18 + (int64_t)pfVar12);
        fVar6 = *pfVar1;
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        pfVar1 = pfVar12 + 0x10;
        pfVar12[-4] = *pfVar2 * param_3;
        pfVar12[-3] = fVar3 * param_3;
        pfVar12[-2] = fVar4 * param_3;
        pfVar12[-1] = fVar5 * param_3;
        pfVar2 = (float *)(lVar18 + -0x30 + (int64_t)pfVar1);
        fVar3 = *pfVar2;
        fVar4 = pfVar2[1];
        fVar5 = pfVar2[2];
        fVar10 = pfVar2[3];
        *pfVar12 = fVar6 * param_3;
        pfVar12[1] = fVar7 * param_3;
        pfVar12[2] = fVar8 * param_3;
        pfVar12[3] = fVar9 * param_3;
        pfVar2 = (float *)(lVar18 + -0x20 + (int64_t)pfVar1);
        fVar6 = *pfVar2;
        fVar7 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        pfVar12[4] = fVar3 * param_3;
        pfVar12[5] = fVar4 * param_3;
        pfVar12[6] = fVar5 * param_3;
        pfVar12[7] = fVar10 * param_3;
        pfVar12[8] = fVar6 * param_3;
        pfVar12[9] = fVar7 * param_3;
        pfVar12[10] = fVar8 * param_3;
        pfVar12[0xb] = fVar9 * param_3;
        pfVar12 = pfVar1;
      } while (lVar11 < (int)(param_4 - uVar13));
    }
  }
  lVar11 = (int64_t)iVar15;
  if (lVar11 < lVar16) {
    if (3 < lVar16 - lVar11) {
      lVar18 = lVar11 * 4;
      lVar14 = param_2 - param_1;
      lVar17 = ((lVar16 - lVar11) - 4U >> 2) + 1;
      lVar11 = lVar11 + lVar17 * 4;
      pfVar12 = (float *)(param_1 + 4 + lVar18);
      do {
        pfVar1 = pfVar12 + 4;
        pfVar12[-1] = param_3 * *(float *)(lVar14 + -0x14 + (int64_t)pfVar1);
        *pfVar12 = param_3 * *(float *)(lVar14 + -0x10 + (int64_t)pfVar1);
        pfVar12[1] = param_3 * *(float *)(lVar14 + -0xc + (int64_t)pfVar1);
        pfVar12[2] = param_3 * *(float *)(lVar14 + -8 + (int64_t)pfVar1);
        lVar17 = lVar17 + -1;
        pfVar12 = pfVar1;
      } while (lVar17 != 0);
    }
    if (lVar11 < lVar16) {
      lVar16 = lVar16 - lVar11;
      pfVar12 = (float *)(param_1 + lVar11 * 4);
      do {
        *pfVar12 = param_3 * *(float *)((param_2 - param_1) + -4 + (int64_t)(pfVar12 + 1));
        lVar16 = lVar16 + -1;
        pfVar12 = pfVar12 + 1;
      } while (lVar16 != 0);
    }
  }
  return;
}