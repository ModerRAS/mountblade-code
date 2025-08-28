#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part086.c - 10 个函数

// 函数: void FUN_1805f6af0(int64_t param_1)
void FUN_1805f6af0(int64_t param_1)

{
  char cVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  byte bVar6;
  int8_t auStack_2a8 [32];
  int8_t *puStack_288;
  int32_t uStack_280;
  int32_t uStack_278;
  int8_t *puStack_270;
  int32_t uStack_268;
  byte bStack_258;
  uint uStack_254;
  int32_t uStack_250;
  int32_t uStack_24c;
  int8_t auStack_248 [4];
  int8_t auStack_244 [4];
  int8_t auStack_240 [4];
  int8_t auStack_23c [4];
  int8_t auStack_238 [8];
  int64_t lStack_230;
  int8_t auStack_228 [16];
  int8_t auStack_218 [48];
  int8_t auStack_1e8 [112];
  int8_t auStack_178 [112];
  int8_t auStack_108 [112];
  int8_t auStack_98 [112];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2a8;
  bVar6 = bStack_258;
  do {
    puVar2 = *(uint64_t **)(param_1 + 0x618);
    uVar4 = *puVar2;
    if ((uVar4 == puVar2[1]) && (puVar2[1] = puVar2[8], uVar4 == puVar2[8])) {
      if (puVar2 == *(uint64_t **)(param_1 + 0x658)) {
                    // WARNING: Subroutine does not return
        SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_2a8);
      }
      puVar2 = *(uint64_t **)(param_1 + 0x618);
      puVar2[1] = puVar2[8];
      uVar4 = *puVar2;
      if (uVar4 != puVar2[8]) goto LAB_1805f6bae;
      puVar2 = (uint64_t *)puVar2[0x10];
      uVar4 = *puVar2;
      puVar2[1] = puVar2[8];
      *(uint64_t **)(param_1 + 0x618) = puVar2;
      lVar5 = *(int64_t *)(puVar2[0x11] + uVar4 * 8);
      *puVar2 = puVar2[0x12] & uVar4 + 1;
    }
    else {
LAB_1805f6bae:
      lVar5 = *(int64_t *)(puVar2[0x11] + uVar4 * 8);
      *puVar2 = puVar2[0x12] & uVar4 + 1;
    }
    uStack_254 = (uint)bVar6;
    *(int32_t *)(lVar5 + 0x5c4) = 0;
    FUN_18055f260(lVar5,&uStack_254,&unknown_var_5512_ptr);
    bVar6 = (byte)uStack_254;
    if ((byte)uStack_254 == 2) {
      cVar1 = FUN_180646890(lVar5,auStack_218,0x28,auStack_248);
      if (cVar1 != '\0') {
        cVar1 = FUN_180646890(lVar5,auStack_98,100,auStack_244);
        if (cVar1 != '\0') {
          cVar1 = FUN_180646890(lVar5,auStack_108,100,auStack_240);
          if (cVar1 != '\0') {
            cVar1 = FUN_180646890(lVar5,auStack_178,100,auStack_23c);
            if (cVar1 != '\0') {
              cVar1 = FUN_180646890(lVar5,auStack_1e8,100,auStack_238);
              if (cVar1 != '\0') {
                cVar1 = FUN_18055f260(lVar5,&uStack_24c,&unknown_var_5528_ptr);
                if (cVar1 != '\0') {
                  cVar1 = FUN_18055f260(lVar5,&uStack_250,&unknown_var_5528_ptr);
                  if (cVar1 != '\0') {
                    lVar3 = inet_ntoa(*(int32_t *)(lVar5 + 0x5e4));
                    if (lVar3 == 0) {
                      auStack_228[0] = 0;
                    }
                    else {
                      strncpy(auStack_228,lVar3,0xf);
                    }
                    uStack_268 = 9999;
                    puStack_270 = auStack_228;
                    uStack_278 = uStack_250;
                    uStack_280 = uStack_24c;
                    puStack_288 = auStack_1e8;
                    (**(code **)(system_system_data_memory + 0x1b8))
                              (auStack_218,auStack_98,auStack_108,auStack_178);
                  }
                }
              }
            }
          }
        }
      }
    }
    lStack_230 = lVar5;
    FUN_1805603c0(param_1 + 0x668,&lStack_230);
  } while( true );
}



int8_t FUN_1805f6f30(void)

{
  FUN_18055e560(&system_counter_25a0);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1805f6f50(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  int iVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  int8_t auVar7 [16];
  int32_t auStackX_20 [2];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int32_t uStack_3c;
  
  cVar2 = FUN_18055f260(param_3,auStackX_20,&unknown_var_6384_ptr);
  if (cVar2 != '\0') {
    cVar2 = FUN_180646700(param_3,&fStack_48,&unknown_var_6400_ptr);
    if (cVar2 != '\0') {
      cVar2 = FUN_180646700(param_3,&fStack_44,&unknown_var_6400_ptr);
      if (cVar2 != '\0') {
        cVar2 = FUN_180646700(param_3,&fStack_40,&unknown_var_6416_ptr);
        if (cVar2 != '\0') {
          if (((param_2 != 0) && (lVar3 = *(int64_t *)(param_2 + 0x58f8), lVar3 != 0)) &&
             (*(int *)(lVar3 + 0x10) == 1)) {
            *(int32_t *)(lVar3 + 0xc) = auStackX_20[0];
            if (((*(int64_t *)(param_2 + 0x58f8) != 0) && (system_system_memory != 0)) &&
               (iVar1 = *(int *)(*(int64_t *)(param_2 + 0x58f8) + 0x18), -1 < iVar1)) {
              lVar3 = (int64_t)iVar1 * 0xa60;
              lVar4 = system_system_memory + 0x30a0 + lVar3;
              if (((lVar4 != 0) && (*(int64_t *)(lVar4 + 0x728) != 0)) &&
                 (*(int *)(lVar4 + 0x568) == 1)) {
                *(int8_t *)(*(int64_t *)(lVar3 + 0x37c8 + system_system_memory) + 0x5b8) = 1;
                *(int64_t *)(*(int64_t *)(lVar4 + 0x728) + 0x5c0) =
                     *(int64_t *)
                      (&system_error_code + (int64_t)*(int *)(*(int64_t *)(lVar4 + 0x728) + 0x5c8) * 8
                      ) + 30000;
                lVar3 = *(int64_t *)(lVar4 + 0x728);
                fVar5 = fStack_44 * fStack_44 + fStack_48 * fStack_48 + fStack_40 * fStack_40;
                auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
                fVar6 = auVar7._0_4_;
                fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
                *(float *)(lVar3 + 0x5d0) = fStack_48 * fVar5;
                *(float *)(lVar3 + 0x5d4) = fStack_44 * fVar5;
                *(float *)(lVar3 + 0x5d8) = fStack_40 * fVar5;
                *(int32_t *)(lVar3 + 0x5dc) = uStack_3c;
              }
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



uint64_t
FUN_1805f707e(float param_1,uint64_t param_2,int64_t param_3,int64_t param_4,uint64_t param_5)

{
  int64_t lVar1;
  int64_t in_RAX;
  float fVar2;
  float fVar3;
  int8_t auVar4 [16];
  float in_XMM4_Da;
  float in_XMM5_Da;
  float fStackX_24;
  
  *(int8_t *)(in_RAX + 0x5b8) = 1;
  *(int64_t *)(*(int64_t *)(param_3 + 0x728) + 0x5c0) =
       *(int64_t *)(param_4 + (int64_t)*(int *)(*(int64_t *)(param_3 + 0x728) + 0x5c8) * 8) +
       30000;
  lVar1 = *(int64_t *)(param_3 + 0x728);
  fVar2 = fStackX_24 * fStackX_24 + param_1 * in_XMM5_Da + (float)param_5 * (float)param_5;
  auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
  fVar3 = auVar4._0_4_;
  fVar2 = in_XMM4_Da * fVar3 * (3.0 - fVar2 * fVar3 * fVar3);
  *(float *)(lVar1 + 0x5d0) = in_XMM5_Da * fVar2;
  *(float *)(lVar1 + 0x5d4) = fStackX_24 * fVar2;
  *(float *)(lVar1 + 0x5d8) = (float)param_5 * fVar2;
  *(int32_t *)(lVar1 + 0x5dc) = param_5._4_4_;
  return CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
}



int8_t FUN_1805f715a(void)

{
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1805f7180(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  int8_t auVar6 [16];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int32_t uStack_3c;
  
  cVar2 = FUN_180646700(param_3,&fStack_48,&unknown_var_6400_ptr);
  if (cVar2 != '\0') {
    cVar2 = FUN_180646700(param_3,&fStack_44,&unknown_var_6400_ptr);
    if (cVar2 != '\0') {
      cVar2 = FUN_180646700(param_3,&fStack_40,&unknown_var_6416_ptr);
      if (cVar2 != '\0') {
        if (((((param_2 != 0) && (lVar3 = *(int64_t *)(param_2 + 0x58f8), lVar3 != 0)) &&
             (*(int *)(lVar3 + 0x10) == 1)) &&
            ((system_system_memory != 0 && (-1 < *(int *)(lVar3 + 0x18))))) &&
           ((lVar3 = system_system_memory + 0x30a0 + (int64_t)*(int *)(lVar3 + 0x18) * 0xa60, lVar3 != 0
            && ((lVar1 = *(int64_t *)(lVar3 + 0x728), lVar1 != 0 && (*(int *)(lVar3 + 0x568) == 1))
               )))) {
          fVar4 = fStack_44 * fStack_44 + fStack_48 * fStack_48 + fStack_40 * fStack_40;
          auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
          fVar5 = auVar6._0_4_;
          fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
          *(float *)(lVar1 + 0x5d0) = fStack_48 * fVar4;
          *(float *)(lVar1 + 0x5d4) = fStack_44 * fVar4;
          *(float *)(lVar1 + 0x5d8) = fStack_40 * fVar4;
          *(int32_t *)(lVar1 + 0x5dc) = uStack_3c;
        }
        return 1;
      }
    }
  }
  return 0;
}



int8_t FUN_1805f7267(int64_t param_1)

{
  float in_XMM0_Da;
  float fVar1;
  float fVar2;
  int8_t auVar3 [16];
  float in_XMM4_Da;
  float in_XMM5_Da;
  float fStackX_24;
  float fStack0000000000000028;
  int32_t uStack000000000000002c;
  
  fVar1 = fStackX_24 * fStackX_24 + in_XMM0_Da * in_XMM5_Da +
          fStack0000000000000028 * fStack0000000000000028;
  auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar2 = auVar3._0_4_;
  fVar1 = in_XMM4_Da * fVar2 * (3.0 - fVar1 * fVar2 * fVar2);
  *(float *)(param_1 + 0x5d0) = in_XMM5_Da * fVar1;
  *(float *)(param_1 + 0x5d4) = fStackX_24 * fVar1;
  *(float *)(param_1 + 0x5d8) = fStack0000000000000028 * fVar1;
  *(int32_t *)(param_1 + 0x5dc) = uStack000000000000002c;
  return 1;
}



int8_t FUN_1805f7310(void)

{
  return 1;
}



uint64_t FUN_1805f7330(uint64_t param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  char cVar2;
  uint auStackX_20 [2];
  
  auStackX_20[0] = 0;
  cVar2 = FUN_180646500(param_3,auStackX_20,&unknown_var_6448_ptr);
  if (cVar2 != '\0') {
    if (((param_2 != 0) && (lVar1 = *(int64_t *)(param_2 + 0x58f8), lVar1 != 0)) &&
       (*(int *)(lVar1 + 0x10) == 1)) {
      *(uint *)(lVar1 + 0x20) = *(uint *)(lVar1 + 0x20) | auStackX_20[0];
    }
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805f7390(int64_t param_1)
void FUN_1805f7390(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  double *pdVar5;
  uint64_t uVar6;
  int64_t lStackX_8;
  
  lVar3 = system_system_data_memory;
  if (system_system_data_memory == 0) {
    QueryPerformanceCounter();
    lVar3 = lStackX_8;
  }
  lVar1 = *(int64_t *)(param_1 + 0x10);
  iVar4 = 0;
  lVar2 = *(int64_t *)(param_1 + 8);
  uVar6 = lVar1 - lVar2 >> 5;
  if (uVar6 != 0) {
    pdVar5 = (double *)(lVar2 + 8);
    while (*pdVar5 + 10.1 < (double)(lVar3 - system_system_data_memory) * system_system_data_memory) {
      iVar4 = iVar4 + 1;
      pdVar5 = pdVar5 + 4;
      if (uVar6 <= (uint64_t)(int64_t)iVar4) {
        return;
      }
    }
    if (iVar4 != 0) {
      lVar3 = (int64_t)iVar4 * 0x20 + lVar2;
      if (lVar2 != lVar3) {
        if (lVar3 != lVar1) {
                    // WARNING: Subroutine does not return
          memmove(lVar2,lVar3,lVar1 - lVar3);
        }
        *(int64_t *)(param_1 + 0x10) = lVar1 + (int64_t)iVar4 * -0x20;
      }
    }
  }
  return;
}






// 函数: void FUN_1805f7417(int param_1,uint64_t param_2,int64_t param_3)
void FUN_1805f7417(int param_1,uint64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t unaff_RDI;
  int64_t in_R10;
  
  lVar1 = (int64_t)param_1 * 0x20 + in_R10;
  if (in_R10 != lVar1) {
    if (lVar1 != param_3) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(int64_t *)(unaff_RDI + 0x10) = param_3 + (int64_t)param_1 * -0x20;
  }
  return;
}






// 函数: void FUN_1805f744c(void)
void FUN_1805f744c(void)

{
  return;
}






// 函数: void FUN_1805f7460(float *param_1)
void FUN_1805f7460(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_1;
  if (fVar2 < -100.0) {
    SystemDataInitializer(&unknown_var_6496_ptr,(double)fVar2,(double)param_1[1],(double)param_1[2],
                  0xc059000000000000);
    fVar2 = -100.0;
    *param_1 = -100.0;
  }
  fVar1 = param_1[1];
  if (fVar1 < -100.0) {
    SystemDataInitializer(&unknown_var_6256_ptr,(double)fVar2,(double)fVar1,(double)param_1[2],0xc059000000000000);
    fVar1 = -100.0;
    param_1[1] = -100.0;
  }
  fVar2 = param_1[2];
  if (fVar2 < -100.0) {
    SystemDataInitializer(&unknown_var_6176_ptr,(double)*param_1,(double)fVar1,(double)fVar2,0xc059000000000000);
    fVar2 = -100.0;
    param_1[2] = -100.0;
  }
  fVar1 = *param_1;
  if (10385.0 < fVar1) {
    SystemDataInitializer(&unknown_var_6416_ptr,(double)fVar1,(double)param_1[1],(double)fVar2,0x40c4488000000000);
    fVar1 = 10385.0;
    *param_1 = 10385.0;
  }
  fVar2 = param_1[1];
  if (10385.0 < fVar2) {
    SystemDataInitializer(&unknown_var_6336_ptr,(double)fVar1,(double)fVar2,(double)param_1[2],0x40c4488000000000);
    fVar2 = 10385.0;
    param_1[1] = 10385.0;
  }
  if (2521.0 < param_1[2]) {
    SystemDataInitializer(&unknown_var_6864_ptr,(double)*param_1,(double)fVar2,(double)param_1[2],
                  0x40a3b20000000000);
    param_1[2] = 2521.0;
  }
  return;
}



uint64_t *
FUN_1805f7640(uint64_t *param_1,uint64_t *param_2,float *param_3,int8_t param_4)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  int8_t auVar7 [16];
  float fVar8;
  int8_t auVar9 [16];
  float fVar10;
  int8_t auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  
  *(int32_t *)param_1 = 0;
  *(uint64_t *)((int64_t)param_1 + 4) = 2;
  *(uint64_t *)((int64_t)param_1 + 0xc) = 2;
  *(uint64_t *)((int64_t)param_1 + 0x14) = 2;
  *(int32_t *)((int64_t)param_1 + 0x1c) = 3;
  param_1[4] = 2;
  *(int32_t *)(param_1 + 5) = 3;
  *(uint64_t *)((int64_t)param_1 + 0x2c) = 2;
  *(int32_t *)((int64_t)param_1 + 0x34) = 1;
  *(int32_t *)(param_1 + 7) = 1;
  *(int8_t *)(param_1 + 9) = param_4;
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  param_1[6] = param_2[6];
  uVar4 = *(uint *)(param_2 + 7);
  *(uint *)(param_1 + 7) = uVar4;
  fVar14 = param_3[2] * 12.5;
  iVar5 = (int)fVar14;
  fVar10 = fVar14;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar14)) {
    auVar11._4_4_ = fVar14;
    auVar11._0_4_ = fVar14;
    auVar11._8_8_ = 0;
    uVar4 = movmskps(uVar4,auVar11);
    uVar4 = uVar4 & 1;
    fVar10 = (float)(int)(iVar5 - uVar4);
  }
  fVar12 = param_3[1] * 12.5;
  iVar5 = (int)fVar12;
  fVar6 = fVar12;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar12)) {
    auVar7._4_4_ = fVar12;
    auVar7._0_4_ = fVar12;
    auVar7._8_8_ = 0;
    uVar4 = movmskps(uVar4,auVar7);
    uVar4 = uVar4 & 1;
    fVar6 = (float)(int)(iVar5 - uVar4);
  }
  fVar13 = *param_3 * 12.5;
  iVar5 = (int)fVar13;
  fVar8 = fVar13;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar13)) {
    auVar9._4_4_ = fVar13;
    auVar9._0_4_ = fVar13;
    auVar9._8_8_ = 0;
    uVar4 = movmskps(uVar4,auVar9);
    fVar8 = (float)(int)(iVar5 - (uVar4 & 1));
  }
  iVar5 = (int)fVar8;
  if (0.5 < fVar13 - fVar8) {
    iVar5 = (int)fVar8 + 1;
  }
  iVar1 = (int)fVar6;
  if (0.5 < fVar12 - fVar6) {
    iVar1 = (int)fVar6 + 1;
  }
  iVar2 = (int)fVar10;
  if (0.5 < fVar14 - fVar10) {
    iVar2 = (int)fVar10 + 1;
  }
  *(uint64_t *)((int64_t)param_1 + 0x3c) = CONCAT44(iVar1,iVar5);
  *(int *)((int64_t)param_1 + 0x44) = iVar2;
  return param_1;
}






// 函数: void FUN_1805f7890(int64_t param_1,uint64_t param_2,float *param_3)
void FUN_1805f7890(int64_t param_1,uint64_t param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fStack_18 = *param_3;
  fStack_14 = param_3[1];
  fStack_10 = param_3[2];
  fStack_c = param_3[3];
  FUN_1805f7460(&fStack_18);
  iVar2 = (int)(fStack_18 * 12.5);
  iVar3 = (int)(fStack_14 * 12.5);
  iVar1 = (int)(fStack_10 * 12.5);
  iStack_28 = iVar2;
  iStack_24 = iVar3;
  iStack_20 = iVar1;
  if (iVar2 < -0x4e3) {
    SystemDataInitializer(&unknown_var_6568_ptr,iVar2,iVar3,iVar1);
  }
  if (iVar3 < -0x4e3) {
    SystemDataInitializer(&unknown_var_6744_ptr,iVar2,iVar3,iVar1);
  }
  if (iVar1 < -0x4e3) {
    SystemDataInitializer(&unknown_var_6688_ptr,iVar2,iVar3,iVar1);
  }
  if (0x1fb15 < iVar2) {
    SystemDataInitializer(&unknown_var_7112_ptr,iVar2,iVar3,iVar1);
  }
  if (0x1fb15 < iVar3) {
    SystemDataInitializer(&unknown_var_7056_ptr,iVar2,iVar3,iVar1);
  }
  if (0x7b19 < iVar1) {
    SystemDataInitializer(&unknown_var_7168_ptr,iVar2,iVar3,iVar1);
  }
  FUN_180645c10(param_2,iVar2,param_1 + 0x18);
  FUN_180645c10(param_2,iVar3,param_1 + 0x24);
  FUN_180645c10(param_2,iVar1,param_1 + 0x30);
  FUN_1805f7a10(param_1,param_2,&fStack_18,&iStack_28);
  return;
}






// 函数: void FUN_1805f7a10(int64_t param_1,int64_t param_2,float *param_3,int *param_4)
void FUN_1805f7a10(int64_t param_1,int64_t param_2,float *param_3,int *param_4)

{
  uint64_t *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  uint uVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  int32_t uStack_38;
  int32_t uStack_34;
  float fStack_30;
  int iStack_2c;
  
  if ((*(char *)(param_1 + 0x48) == '\0') &&
     (lVar8 = (int64_t)(*param_4 - *(int *)(param_1 + 0x3c)),
     lVar6 = (int64_t)(param_4[1] - *(int *)(param_1 + 0x40)),
     lVar10 = (int64_t)(param_4[2] - *(int *)(param_1 + 0x44)),
     lVar6 = lVar10 * lVar10 + lVar6 * lVar6 + lVar8 * lVar8, 250000 < lVar6)) {
    if (lVar6 < 0xf4241) {
      iVar9 = 2;
    }
    else {
      if (4000000 < lVar6) {
        return;
      }
      iVar9 = 1;
    }
  }
  else {
    iVar9 = 3;
  }
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  uStack_38 = 0xbf800000;
  uStack_34 = 0x3f800000;
  fStack_30 = 1.0 / (float)((1 << (sbyte)iVar9) - 1);
  fStack_30 = fStack_30 + fStack_30;
  iStack_2c = iVar9;
  uVar4 = FUN_18055f6f0(&uStack_38,*param_3 * 12.5 - (float)*param_4);
  uVar7 = *(int *)(param_2 + 0x5c4) >> 0x1f & 0x1f;
  iVar5 = *(int *)(param_2 + 0x5c4) + uVar7;
  puVar1 = (uint64_t *)(*(int64_t *)(param_2 + 0x598) + (int64_t)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | (uint64_t)uVar4 << (((byte)iVar5 & 0x1f) - (char)uVar7 & 0x3f);
  *(int *)(param_2 + 0x5c4) = *(int *)(param_2 + 0x5c4) + iVar9;
  *(int *)(param_2 + 0x5c8) = *(int *)(param_2 + 0x5c8) + iVar9;
  uVar4 = FUN_18055f6f0(&uStack_38,fVar2 * 12.5 - (float)param_4[1]);
  uVar7 = *(int *)(param_2 + 0x5c4) >> 0x1f & 0x1f;
  iVar5 = *(int *)(param_2 + 0x5c4) + uVar7;
  puVar1 = (uint64_t *)(*(int64_t *)(param_2 + 0x598) + (int64_t)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | (uint64_t)uVar4 << (((byte)iVar5 & 0x1f) - (char)uVar7 & 0x3f);
  *(int *)(param_2 + 0x5c4) = *(int *)(param_2 + 0x5c4) + iVar9;
  *(int *)(param_2 + 0x5c8) = *(int *)(param_2 + 0x5c8) + iVar9;
  uVar4 = FUN_18055f6f0(&uStack_38,fVar3 * 12.5 - (float)param_4[2]);
  uVar7 = *(int *)(param_2 + 0x5c4) >> 0x1f & 0x1f;
  iVar5 = *(int *)(param_2 + 0x5c4) + uVar7;
  puVar1 = (uint64_t *)(*(int64_t *)(param_2 + 0x598) + (int64_t)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | (uint64_t)uVar4 << (((byte)iVar5 & 0x1f) - (char)uVar7 & 0x3f);
  *(int *)(param_2 + 0x5c4) = *(int *)(param_2 + 0x5c4) + iVar9;
  *(int *)(param_2 + 0x5c8) = *(int *)(param_2 + 0x5c8) + iVar9;
  return;
}






// 函数: void FUN_1805f7aae(uint64_t param_1,float param_2,uint64_t param_3,uint64_t param_4)
void FUN_1805f7aae(uint64_t param_1,float param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBX;
  int64_t unaff_RSI;
  int *unaff_RDI;
  float *in_R11;
  int32_t in_XMM0_Da;
  float fStack0000000000000028;
  
  fVar2 = in_R11[1];
  fVar3 = in_R11[2];
  param_2 = param_2 / (float)((int)param_4 - 1);
  fStack0000000000000028 = param_2 + param_2;
  uVar4 = FUN_18055f6f0(param_1,*in_R11 * 12.5 - (float)*unaff_RDI,param_3,param_4,in_XMM0_Da);
  uVar6 = *(int *)(unaff_RSI + 0x5c4) >> 0x1f & 0x1f;
  iVar5 = *(int *)(unaff_RSI + 0x5c4) + uVar6;
  puVar1 = (uint64_t *)(*(int64_t *)(unaff_RSI + 0x598) + (int64_t)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | (uint64_t)uVar4 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x3f);
  *(int *)(unaff_RSI + 0x5c4) = *(int *)(unaff_RSI + 0x5c4) + unaff_EBX;
  *(int *)(unaff_RSI + 0x5c8) = *(int *)(unaff_RSI + 0x5c8) + unaff_EBX;
  uVar4 = FUN_18055f6f0(&stack0x00000020,fVar2 * 12.5 - (float)unaff_RDI[1]);
  uVar6 = *(int *)(unaff_RSI + 0x5c4) >> 0x1f & 0x1f;
  iVar5 = *(int *)(unaff_RSI + 0x5c4) + uVar6;
  puVar1 = (uint64_t *)(*(int64_t *)(unaff_RSI + 0x598) + (int64_t)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | (uint64_t)uVar4 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x3f);
  *(int *)(unaff_RSI + 0x5c4) = *(int *)(unaff_RSI + 0x5c4) + unaff_EBX;
  *(int *)(unaff_RSI + 0x5c8) = *(int *)(unaff_RSI + 0x5c8) + unaff_EBX;
  uVar4 = FUN_18055f6f0(&stack0x00000020,fVar3 * 12.5 - (float)unaff_RDI[2]);
  uVar6 = *(int *)(unaff_RSI + 0x5c4) >> 0x1f & 0x1f;
  iVar5 = *(int *)(unaff_RSI + 0x5c4) + uVar6;
  puVar1 = (uint64_t *)(*(int64_t *)(unaff_RSI + 0x598) + (int64_t)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | (uint64_t)uVar4 << (((byte)iVar5 & 0x1f) - (char)uVar6 & 0x3f);
  *(int *)(unaff_RSI + 0x5c4) = *(int *)(unaff_RSI + 0x5c4) + unaff_EBX;
  *(int *)(unaff_RSI + 0x5c8) = *(int *)(unaff_RSI + 0x5c8) + unaff_EBX;
  return;
}






// 函数: void FUN_1805f7c11(void)
void FUN_1805f7c11(void)

{
  return;
}



uint64_t FUN_1805f7c30(int64_t param_1,uint64_t param_2,float *param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  char extraout_AL;
  bool bVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  float fVar9;
  float afStackX_8 [2];
  int32_t uStack_28;
  int32_t uStack_24;
  float fStack_20;
  int iStack_1c;
  
  iVar1 = param_4[1];
  iStack_1c = 1;
  if (*(char *)(param_1 + 0x48) == '\0') {
    iVar8 = param_4[2];
    lVar6 = (int64_t)(*param_4 - *(int *)(param_1 + 0x3c));
    lVar5 = (int64_t)(iVar1 - *(int *)(param_1 + 0x40));
    lVar7 = (int64_t)(iVar8 - *(int *)(param_1 + 0x44));
    lVar5 = lVar7 * lVar7 + lVar5 * lVar5 + lVar6 * lVar6;
    if (lVar5 < 0x3d091) {
      iStack_1c = 3;
    }
    else if (lVar5 < 0xf4241) {
      iStack_1c = 2;
    }
    else if (4000000 < lVar5) {
      iStack_1c = 0;
    }
  }
  else {
    iVar8 = param_4[2];
    iStack_1c = 3;
  }
  *param_3 = (float)*param_4 * 0.08;
  param_3[2] = (float)iVar8 * 0.08;
  param_3[1] = (float)iVar1 * 0.08;
  if (iStack_1c == 0) {
    uVar4 = 1;
  }
  else {
    uStack_28 = 0xbf800000;
    uStack_24 = 0x3f800000;
    afStackX_8[0] = 0.0;
    fStack_20 = 1.0 / (float)((1 << (sbyte)iStack_1c) - 1);
    fStack_20 = fStack_20 + fStack_20;
    cVar2 = FUN_180646700(param_2,afStackX_8,&uStack_28);
    fVar9 = afStackX_8[0] * 0.08;
    afStackX_8[0] = 0.0;
    *param_3 = fVar9 + *param_3;
    if ((cVar2 == '\0') || (FUN_180646700(param_2,afStackX_8,&uStack_28), extraout_AL == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    fVar9 = afStackX_8[0] * 0.08;
    afStackX_8[0] = 0.0;
    param_3[1] = fVar9 + param_3[1];
    if ((bVar3) && (cVar2 = FUN_180646700(param_2,afStackX_8,&uStack_28), cVar2 != '\0')) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    param_3[2] = afStackX_8[0] * 0.08 + param_3[2];
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805f7e10(int *param_1,int64_t *param_2,int64_t *param_3)
void FUN_1805f7e10(int *param_1,int64_t *param_2,int64_t *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  float fVar16;
  char acStackX_18 [8];
  int8_t auStackX_20 [8];
  int8_t auStack_d8 [8];
  uint64_t uStack_d0;
  int32_t auStack_c0 [2];
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  int8_t *puStack_98;
  int32_t *puStack_90;
  int64_t *plStack_88;
  char *pcStack_80;
  int64_t *plStack_78;
  uint64_t *puStack_70;
  int8_t *puStack_68;
  uint64_t *puStack_60;
  int64_t *aplStack_58 [2];
  code *pcStack_48;
  void *puStack_40;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  auStackX_20[0] = 1;
  if (0 < (int)((param_3[1] - *param_3) / 0xd08)) {
    acStackX_18[0] = '\0';
    uStack_b8 = 0x7f7fffff7f7fffff;
    uStack_b0 = 0x7f7fffff7f7fffff;
    uStack_a8 = 0xff7fffffff7fffff;
    uStack_a0 = 0x7f7fffffff7fffff;
    auStack_c0[0] = (int32_t)(param_2[1] - *param_2 >> 3);
    auStack_d8[0] = 0;
    uStack_d0 = aplStack_58;
    puStack_98 = auStackX_20;
    puStack_90 = auStack_c0;
    pcStack_80 = acStackX_18;
    puStack_70 = &uStack_a8;
    puStack_68 = auStack_d8;
    puStack_60 = &uStack_b8;
    pcStack_48 = FUN_1805f8910;
    puStack_40 = &unknown_var_1696_ptr;
    plStack_88 = param_2;
    plStack_78 = param_3;
    aplStack_58[0] = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,8,system_allocation_flags);
    *aplStack_58[0] = (int64_t)puStack_98;
    aplStack_58[0][1] = (int64_t)puStack_90;
    aplStack_58[0][2] = (int64_t)plStack_88;
    aplStack_58[0][3] = (int64_t)pcStack_80;
    aplStack_58[0][4] = (int64_t)plStack_78;
    aplStack_58[0][5] = (int64_t)puStack_70;
    aplStack_58[0][6] = (int64_t)puStack_68;
    aplStack_58[0][7] = (int64_t)puStack_60;
    uVar1 = FUN_18015b810();
    if (acStackX_18[0] == '\0') {
      *param_1 = 0;
      iVar3 = 2;
      param_1[1] = 2;
      param_1[2] = 0;
      param_1[3] = 2;
      param_1[4] = 0;
      param_1[5] = 1;
      iVar4 = 2;
      iVar5 = 0;
      iVar9 = 0;
      iVar7 = 1;
      iVar8 = 0;
    }
    else {
      fVar16 = (float)uStack_b8 * 12.5;
      uStack_b8._4_4_ = uStack_b8._4_4_ * 12.5;
      uStack_b0._0_4_ = (float)uStack_b0 * 12.5;
      auVar10._0_4_ = (float)uStack_a8 * 12.5;
      auVar14._0_4_ = uStack_a8._4_4_ * 12.5;
      auVar12._0_4_ = (float)uStack_a0 * 12.5;
      if (fVar16 <= 0.0) {
        fVar16 = fVar16 - 0.9999999;
      }
      iVar5 = (int)fVar16;
      if (uStack_b8._4_4_ <= 0.0) {
        uStack_b8._4_4_ = uStack_b8._4_4_ - 0.9999999;
      }
      iVar9 = (int)uStack_b8._4_4_;
      if ((float)uStack_b0 <= 0.0) {
        uStack_b0._0_4_ = (float)uStack_b0 - 0.9999999;
      }
      iVar8 = (int)(float)uStack_b0;
      iVar3 = (int)auVar10._0_4_;
      if (auVar10._0_4_ <= 0.0) {
        if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar10._0_4_)) {
          auVar11._4_4_ = auVar10._0_4_;
          auVar11._0_4_ = auVar10._0_4_;
          auVar11._8_8_ = 0;
          uVar1 = movmskps(uVar1,auVar11);
          uVar1 = uVar1 & 1 ^ 1;
          auVar10._0_4_ = (float)(int)(iVar3 + uVar1);
        }
        auVar10._0_4_ = auVar10._0_4_ - 1e-08;
      }
      else {
        if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar10._0_4_)) {
          auVar10._4_4_ = auVar10._0_4_;
          auVar10._8_8_ = 0;
          uVar1 = movmskps(uVar1,auVar10);
          uVar1 = uVar1 & 1 ^ 1;
          auVar10._0_4_ = (float)(int)(iVar3 + uVar1);
        }
        auVar10._0_4_ = auVar10._0_4_ + 1e-08;
      }
      iVar3 = (int)auVar14._0_4_;
      if (auVar14._0_4_ <= 0.0) {
        if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar14._0_4_)) {
          auVar15._4_4_ = auVar14._0_4_;
          auVar15._0_4_ = auVar14._0_4_;
          auVar15._8_8_ = 0;
          uVar1 = movmskps(uVar1,auVar15);
          uVar1 = uVar1 & 1 ^ 1;
          auVar14._0_4_ = (float)(int)(iVar3 + uVar1);
        }
        auVar14._0_4_ = auVar14._0_4_ - 1e-08;
      }
      else {
        if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar14._0_4_)) {
          auVar14._4_4_ = auVar14._0_4_;
          auVar14._8_8_ = 0;
          uVar1 = movmskps(uVar1,auVar14);
          uVar1 = uVar1 & 1 ^ 1;
          auVar14._0_4_ = (float)(int)(iVar3 + uVar1);
        }
        auVar14._0_4_ = auVar14._0_4_ + 1e-08;
      }
      iVar3 = (int)auVar12._0_4_;
      if (auVar12._0_4_ <= 0.0) {
        if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar12._0_4_)) {
          auVar13._4_4_ = auVar12._0_4_;
          auVar13._0_4_ = auVar12._0_4_;
          auVar13._8_8_ = 0;
          uVar1 = movmskps(uVar1,auVar13);
          auVar12._0_4_ = (float)(int)(iVar3 + (uVar1 & 1 ^ 1));
        }
        auVar12._0_4_ = auVar12._0_4_ - 1e-08;
      }
      else {
        if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar12._0_4_)) {
          auVar12._4_4_ = auVar12._0_4_;
          auVar12._8_8_ = 0;
          uVar1 = movmskps(uVar1,auVar12);
          auVar12._0_4_ = (float)(int)(iVar3 + (uVar1 & 1 ^ 1));
        }
        auVar12._0_4_ = auVar12._0_4_ + 1e-08;
      }
      iVar2 = 0;
      iVar7 = 0;
      for (iVar3 = (int)auVar10._0_4_ - iVar5; iVar3 != 0; iVar3 = iVar3 >> 1) {
        iVar7 = iVar7 + 1;
      }
      iVar6 = 0;
      for (iVar3 = (int)auVar14._0_4_ - iVar9; iVar3 != 0; iVar3 = iVar3 >> 1) {
        iVar6 = iVar6 + 1;
      }
      for (iVar3 = (int)auVar12._0_4_ - iVar8; iVar3 != 0; iVar3 = iVar3 >> 1) {
        iVar2 = iVar2 + 1;
      }
      *param_1 = iVar5;
      iVar4 = 2;
      if (2 < iVar7) {
        iVar4 = iVar7;
      }
      param_1[1] = iVar4;
      param_1[2] = iVar9;
      iVar3 = 2;
      if (2 < iVar6) {
        iVar3 = iVar6;
      }
      param_1[3] = iVar3;
      param_1[4] = iVar8;
      iVar7 = 1;
      if (1 < iVar2) {
        iVar7 = iVar2;
      }
      param_1[5] = iVar7;
    }
    uStack_d0 = (int64_t **)CONCAT44((1 << ((byte)iVar4 & 0x1f)) + -1 + iVar5,iVar5);
    *(int64_t ***)(param_1 + 6) = uStack_d0;
    param_1[8] = iVar4;
    uStack_d0 = (int64_t **)CONCAT44((1 << ((byte)iVar3 & 0x1f)) + -1 + iVar9,iVar9);
    *(int64_t ***)(param_1 + 9) = uStack_d0;
    param_1[0xb] = iVar3;
    uStack_d0 = (int64_t **)CONCAT44(iVar8 + -1 + (1 << ((byte)iVar7 & 0x1f)),iVar8);
    *(int64_t ***)(param_1 + 0xc) = uStack_d0;
    param_1[0xe] = iVar7;
  }
  return;
}






