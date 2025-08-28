#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part129.c - 16 个函数

// 函数: void FUN_18012e63a(int32_t param_1,float param_2)
void FUN_18012e63a(int32_t param_1,float param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t in_R10;
  int64_t in_R11;
  float in_XMM5_Da;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  int8_t auStackX_20 [8];
  float fStack0000000000000080;
  float fStack0000000000000084;
  
  fStack0000000000000080 = param_2 - unaff_XMM7_Da;
  *(int32_t *)(in_R10 + 0x128) = param_1;
  fStack0000000000000084 = unaff_XMM9_Da - unaff_XMM8_Da;
  func_0x000180124080(fStack0000000000000084,*(int32_t *)(unaff_RSI + -0x10 + unaff_RBX * 8));
  lVar1 = *(int64_t *)(in_R11 + 0x1af8);
  *(uint64_t *)(lVar1 + 0x144) = 0;
  *(int32_t *)(lVar1 + 0x14c) = unaff_XMM6_Da;
  *(int32_t *)(lVar1 + 0x150) = unaff_XMM6_Db;
  *(int32_t *)(lVar1 + 0x154) = unaff_XMM6_Dc;
  *(int32_t *)(lVar1 + 0x158) = unaff_XMM6_Dd;
  lVar2 = *(int64_t *)(in_R11 + 0x1af8);
  if (((((*(float *)(lVar2 + 0x22c) <= unaff_XMM9_Da && unaff_XMM9_Da != *(float *)(lVar2 + 0x22c))
        && (unaff_XMM8_Da < *(float *)(lVar2 + 0x234))) &&
       (*(float *)(lVar2 + 0x228) <= in_XMM5_Da && in_XMM5_Da != *(float *)(lVar2 + 0x228))) &&
      (unaff_XMM7_Da < *(float *)(lVar2 + 0x230))) || (*(char *)(in_R11 + 0x2e38) != '\0')) {
    cVar3 = FUN_180128040(auStackX_20,&stack0x00000028,1);
    if (cVar3 != '\0') {
      *(uint *)(lVar1 + 0x148) = *(uint *)(lVar1 + 0x148) | 1;
    }
  }
  iVar4 = *(int *)(in_R11 + 0x1b2c);
  if (((*(int *)(unaff_RSI + -8 + unaff_RBX * 8) == iVar4) || (*(int *)(in_R11 + 0x1b34) != iVar4))
     || (iVar4 == 0)) {
    if ((*(char *)(unaff_RSI + -4 + unaff_RBX * 8) != '\0') || (*(char *)(in_R11 + 0x1b3f) == '\0'))
    goto LAB_18012e732;
    iVar4 = *(int *)(in_R11 + 0x1b30);
  }
  *(int *)(in_R10 + 0x144) = iVar4;
LAB_18012e732:
  *(int32_t *)(in_R10 + 0x14c) = unaff_XMM6_Da;
  *(int32_t *)(in_R10 + 0x150) = unaff_XMM6_Db;
  *(int32_t *)(in_R10 + 0x154) = unaff_XMM6_Dc;
  *(int32_t *)(in_R10 + 0x158) = unaff_XMM6_Dd;
  *(int *)(in_R10 + 0x1e8) = *(int *)(in_R10 + 0x1e8) + -1;
  return;
}





// 函数: void FUN_18012e6e8(void)
void FUN_18012e6e8(void)

{
  int iVar1;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t in_R10;
  int64_t in_R11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  
  iVar1 = *(int *)(in_R11 + 0x1b2c);
  if (((*(int *)(unaff_RSI + -8 + unaff_RBX * 8) == iVar1) || (*(int *)(in_R11 + 0x1b34) != iVar1))
     || (iVar1 == 0)) {
    if ((*(char *)(unaff_RSI + -4 + unaff_RBX * 8) != '\0') || (*(char *)(in_R11 + 0x1b3f) == '\0'))
    goto LAB_18012e732;
    iVar1 = *(int *)(in_R11 + 0x1b30);
  }
  *(int *)(in_R10 + 0x144) = iVar1;
LAB_18012e732:
  *(int32_t *)(in_R10 + 0x14c) = unaff_XMM6_Da;
  *(int32_t *)(in_R10 + 0x150) = unaff_XMM6_Db;
  *(int32_t *)(in_R10 + 0x154) = unaff_XMM6_Dc;
  *(int32_t *)(in_R10 + 0x158) = unaff_XMM6_Dd;
  *(int *)(in_R10 + 0x1e8) = *(int *)(in_R10 + 0x1e8) + -1;
  return;
}





// 函数: void FUN_18012e706(void)
void FUN_18012e706(void)

{
  int in_EAX;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t in_R10;
  int64_t in_R11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  
  if ((*(int *)(in_R11 + 0x1b34) != in_EAX) || (in_EAX == 0)) {
    if ((*(char *)(unaff_RSI + -4 + unaff_RBX * 8) != '\0') || (*(char *)(in_R11 + 0x1b3f) == '\0'))
    goto LAB_18012e732;
    in_EAX = *(int *)(in_R11 + 0x1b30);
  }
  *(int *)(in_R10 + 0x144) = in_EAX;
LAB_18012e732:
  *(int32_t *)(in_R10 + 0x14c) = unaff_XMM6_Da;
  *(int32_t *)(in_R10 + 0x150) = unaff_XMM6_Db;
  *(int32_t *)(in_R10 + 0x154) = unaff_XMM6_Dc;
  *(int32_t *)(in_R10 + 0x158) = unaff_XMM6_Dd;
  *(int *)(in_R10 + 0x1e8) = *(int *)(in_R10 + 0x1e8) + -1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012e810(void)
void FUN_18012e810(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  int8_t auStack_48 [32];
  int8_t auStack_28 [16];
  uint64_t uStack_18;
  
  lVar4 = SYSTEM_DATA_MANAGER_A;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
  if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1dd1) != '\0') {
    fVar1 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16bc);
    fVar2 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x118);
    fVar3 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x11c);
    *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bfc) = 0;
    *(int32_t *)(lVar4 + 0x1bd0) = 1;
    *(float *)(lVar4 + 0x1bf4) = fVar1 * 16.0 + fVar2;
    *(int8_t *)(lVar4 + 0x1c14) = 1;
    *(float *)(lVar4 + 0x1bf8) = fVar1 * 8.0 + fVar3;
    *(int32_t *)(lVar4 + 0x1be8) = 1;
    *(float *)(lVar4 + 0x1c38) = *(float *)(lVar4 + 0x1714) * 0.6;
    FUN_18012e910(0,1);
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_48);
  }
  FUN_180121200(auStack_28,0x10,&rendering_buffer_2528_ptr,*(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x2dcc));
  FUN_1801299b0(auStack_28,0,0x22c0347);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_48);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012e910(uint64_t param_1,char param_2)
void FUN_18012e910(uint64_t param_1,char param_2)

{
  int *piVar1;
  byte *pbVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint uVar5;
  int8_t auStack_48 [32];
  byte bStack_28;
  byte abStack_27 [15];
  uint64_t uStack_18;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
  FUN_180121200(&bStack_28,0x10,&rendering_buffer_2528_ptr,*(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x2dcc));
  if (param_2 != '\0') {
    uVar5 = 0xffffffff;
    pbVar2 = abStack_27;
    while (bStack_28 != 0) {
      if (((bStack_28 == 0x23) && (*pbVar2 == 0x23)) && (pbVar2[1] == 0x23)) {
        uVar5 = 0xffffffff;
      }
      uVar5 = *(uint *)(&processed_var_6320_ptr + ((uint64_t)(uVar5 & 0xff) ^ (uint64_t)bStack_28) * 4) ^
              uVar5 >> 8;
      bStack_28 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    }
    lVar4 = FUN_180121fa0(SYSTEM_DATA_MANAGER_A + 0x1ae0,~uVar5);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0xaf) != '\0')) {
      *(int8_t *)(lVar4 + 0xb6) = 1;
      *(int32_t *)(lVar4 + 0xd8) = 1;
      piVar1 = (int *)(lVar3 + 0x2dcc);
      *piVar1 = *piVar1 + 1;
      FUN_180121200(&bStack_28,0x10,&rendering_buffer_2528_ptr,*(int32_t *)(lVar3 + 0x2dcc));
    }
  }
  FUN_1801299b0(&bStack_28,0,0x22c0347);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_48);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012ea30(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18012ea30(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  if (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1dd1) == '\0') {
    FUN_18012e910(param_1,1);
  }
  else {
    FUN_18012e810();
  }
  FUN_18010f040(param_1,&uStackX_10);
  FUN_18012cfe0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012eaf0(void)
void FUN_18012eaf0(void)

{
  int *piVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint64_t *puVar11;
  float *pfVar12;
  int iVar13;
  int64_t lVar14;
  int32_t uVar15;
  int8_t auStackX_10 [16];
  int32_t uStack_34;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  lVar5 = SYSTEM_DATA_MANAGER_A;
  iVar8 = FUN_180121250(&rendering_buffer_2696_ptr,0,
                        *(int32_t *)
                         (*(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x220) + -4 +
                         (int64_t)*(int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218) * 4));
  if (*(int *)(lVar5 + 0x1b2c) == iVar8) {
    *(int *)(lVar5 + 0x1b34) = iVar8;
  }
  if (*(int *)(lVar5 + 0x1b30) == iVar8) {
    *(int8_t *)(lVar5 + 0x1b3f) = 1;
  }
  lVar6 = SYSTEM_DATA_MANAGER_A;
  uStack_10 = 0;
  lVar5 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  uVar3 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1a90);
  lVar14 = (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1bc0);
  uVar4 = *(int32_t *)(*(int64_t *)(lVar5 + 0x220) + -4 + (int64_t)*(int *)(lVar5 + 0x218) * 4)
  ;
  iVar9 = iVar8;
  uVar15 = uVar3;
  puVar11 = (uint64_t *)func_0x000180131890(auStackX_10);
  pfVar12 = (float *)(lVar6 + 0x118);
  uStack_18 = *puVar11;
  if ((*pfVar12 <= -256000.0 && *pfVar12 != -256000.0) ||
     (*(float *)(lVar6 + 0x11c) <= -256000.0 && *(float *)(lVar6 + 0x11c) != -256000.0)) {
    pfVar12 = (float *)&uStack_18;
  }
  piVar1 = (int *)(lVar6 + 0x1bb0);
  uStack_10 = CONCAT44(uStack_10._4_4_,*pfVar12);
  iVar13 = (int)lVar14 + 1;
  uStack_10 = *(uint64_t *)pfVar12;
  iVar10 = *piVar1;
  if (iVar10 < iVar13) {
    iVar9 = *(int *)(lVar6 + 0x1bb4);
    if (iVar10 == iVar9) {
      if (iVar9 == 0) {
        iVar9 = 8;
      }
      else {
        iVar9 = iVar9 / 2 + iVar9;
      }
      iVar13 = iVar10 + 1;
      if (iVar10 + 1 < iVar9) {
        iVar13 = iVar9;
      }
      FUN_18013e760(piVar1,iVar13);
      iVar10 = *piVar1;
    }
    lVar14 = (int64_t)iVar10;
    lVar6 = *(int64_t *)(lVar6 + 0x1bb8);
    puVar11 = (uint64_t *)(lVar6 + lVar14 * 0x30);
    *puVar11 = CONCAT44(uStack_34,iVar8);
    puVar11[1] = 0;
    plVar2 = (int64_t *)(lVar6 + 0x10 + lVar14 * 0x30);
    *plVar2 = lVar5;
    plVar2[1] = CONCAT44(uVar4,uVar3);
    puVar11 = (uint64_t *)(lVar6 + 0x20 + lVar14 * 0x30);
    *puVar11 = uStack_18;
    puVar11[1] = uStack_10;
    *piVar1 = *piVar1 + 1;
    return;
  }
  lVar7 = *(int64_t *)(lVar6 + 0x1bb8);
  if ((*(int *)(lVar7 + lVar14 * 0x30) == iVar9) &&
     (*(int *)(lVar7 + 0x18 + lVar14 * 0x30) == *(int *)(lVar6 + 0x1a90) + -1)) {
    *(int32_t *)(lVar7 + 0x18 + lVar14 * 0x30) = uVar15;
  }
  else {
    iVar9 = *(int *)(lVar6 + 0x1bb4);
    if (iVar9 < iVar13) {
      if (iVar9 == 0) {
        iVar9 = 8;
      }
      else {
        iVar9 = iVar9 / 2 + iVar9;
      }
      iVar10 = iVar13;
      if (iVar13 < iVar9) {
        iVar10 = iVar9;
      }
      FUN_18013e760(piVar1,iVar10);
    }
    *piVar1 = iVar13;
    lVar6 = *(int64_t *)(lVar6 + 0x1bb8);
    puVar11 = (uint64_t *)(lVar6 + lVar14 * 0x30);
    *puVar11 = CONCAT44(uStack_34,iVar8);
    puVar11[1] = 0;
    plVar2 = (int64_t *)(lVar6 + 0x10 + lVar14 * 0x30);
    *plVar2 = lVar5;
    plVar2[1] = CONCAT44(uVar4,uVar3);
    puVar11 = (uint64_t *)(lVar6 + 0x20 + lVar14 * 0x30);
    *puVar11 = uStack_18;
    puVar11[1] = uStack_10;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012eb50(int param_1)
void FUN_18012eb50(int param_1)

{
  int *piVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  uint64_t *puVar10;
  float *pfVar11;
  int iVar12;
  int64_t lVar13;
  int32_t uVar14;
  int8_t auStackX_10 [8];
  int32_t uStack_34;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  lVar6 = SYSTEM_DATA_MANAGER_A;
  uStack_10 = 0;
  lVar5 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  uVar3 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1a90);
  lVar13 = (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1bc0);
  uVar4 = *(int32_t *)(*(int64_t *)(lVar5 + 0x220) + -4 + (int64_t)*(int *)(lVar5 + 0x218) * 4)
  ;
  iVar8 = param_1;
  uVar14 = uVar3;
  puVar10 = (uint64_t *)func_0x000180131890(auStackX_10);
  pfVar11 = (float *)(lVar6 + 0x118);
  uStack_18 = *puVar10;
  if ((*pfVar11 <= -256000.0 && *pfVar11 != -256000.0) ||
     (*(float *)(lVar6 + 0x11c) <= -256000.0 && *(float *)(lVar6 + 0x11c) != -256000.0)) {
    pfVar11 = (float *)&uStack_18;
  }
  piVar1 = (int *)(lVar6 + 0x1bb0);
  uStack_10 = CONCAT44(uStack_10._4_4_,*pfVar11);
  iVar12 = (int)lVar13 + 1;
  uStack_10 = *(uint64_t *)pfVar11;
  iVar9 = *piVar1;
  if (iVar9 < iVar12) {
    iVar8 = *(int *)(lVar6 + 0x1bb4);
    if (iVar9 == iVar8) {
      if (iVar8 == 0) {
        iVar8 = 8;
      }
      else {
        iVar8 = iVar8 / 2 + iVar8;
      }
      iVar12 = iVar9 + 1;
      if (iVar9 + 1 < iVar8) {
        iVar12 = iVar8;
      }
      FUN_18013e760(piVar1,iVar12);
      iVar9 = *piVar1;
    }
    lVar13 = (int64_t)iVar9;
    lVar6 = *(int64_t *)(lVar6 + 0x1bb8);
    puVar10 = (uint64_t *)(lVar6 + lVar13 * 0x30);
    *puVar10 = CONCAT44(uStack_34,param_1);
    puVar10[1] = 0;
    plVar2 = (int64_t *)(lVar6 + 0x10 + lVar13 * 0x30);
    *plVar2 = lVar5;
    plVar2[1] = CONCAT44(uVar4,uVar3);
    puVar10 = (uint64_t *)(lVar6 + 0x20 + lVar13 * 0x30);
    *puVar10 = uStack_18;
    puVar10[1] = uStack_10;
    *piVar1 = *piVar1 + 1;
    return;
  }
  lVar7 = *(int64_t *)(lVar6 + 0x1bb8);
  if ((*(int *)(lVar7 + lVar13 * 0x30) == iVar8) &&
     (*(int *)(lVar7 + 0x18 + lVar13 * 0x30) == *(int *)(lVar6 + 0x1a90) + -1)) {
    *(int32_t *)(lVar7 + 0x18 + lVar13 * 0x30) = uVar14;
  }
  else {
    iVar8 = *(int *)(lVar6 + 0x1bb4);
    if (iVar8 < iVar12) {
      if (iVar8 == 0) {
        iVar8 = 8;
      }
      else {
        iVar8 = iVar8 / 2 + iVar8;
      }
      iVar9 = iVar12;
      if (iVar12 < iVar8) {
        iVar9 = iVar8;
      }
      FUN_18013e760(piVar1,iVar9);
    }
    *piVar1 = iVar12;
    lVar6 = *(int64_t *)(lVar6 + 0x1bb8);
    puVar10 = (uint64_t *)(lVar6 + lVar13 * 0x30);
    *puVar10 = CONCAT44(uStack_34,param_1);
    puVar10[1] = 0;
    plVar2 = (int64_t *)(lVar6 + 0x10 + lVar13 * 0x30);
    *plVar2 = lVar5;
    plVar2[1] = CONCAT44(uVar4,uVar3);
    puVar10 = (uint64_t *)(lVar6 + 0x20 + lVar13 * 0x30);
    *puVar10 = uStack_18;
    puVar10[1] = uStack_10;
  }
  return;
}





// 函数: void FUN_18012ec83(int32_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
void FUN_18012ec83(int32_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int iVar3;
  int64_t in_RCX;
  int iVar4;
  int *unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  int32_t in_R10D;
  int in_R11D;
  uint64_t uStackX_20;
  
  if ((*(int *)(in_RCX + param_4 * 0x30) == in_R11D) &&
     (*(int *)(in_RCX + 0x18 + param_4 * 0x30) == *(int *)(unaff_RBP + 0x1a90) + -1)) {
    *(int32_t *)(in_RCX + 0x18 + param_4 * 0x30) = in_R10D;
  }
  else {
    iVar3 = unaff_RBX[1];
    if (iVar3 < unaff_ESI) {
      if (iVar3 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar3 / 2 + iVar3;
      }
      iVar4 = unaff_ESI;
      if (unaff_ESI < iVar3) {
        iVar4 = iVar3;
      }
      FUN_18013e760(param_1,iVar4);
    }
    *unaff_RBX = unaff_ESI;
    lVar2 = *(int64_t *)(unaff_RBP + 0x1bb8);
    puVar1 = (uint64_t *)(lVar2 + param_4 * 0x30);
    *puVar1 = uStackX_20;
    puVar1[1] = param_5;
    puVar1 = (uint64_t *)(lVar2 + 0x10 + param_4 * 0x30);
    *puVar1 = param_6;
    puVar1[1] = param_7;
    puVar1 = (uint64_t *)(lVar2 + 0x20 + param_4 * 0x30);
    *puVar1 = param_8;
    puVar1[1] = param_9;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012ed10(int64_t param_1)
void FUN_18012ed10(int64_t param_1)

{
  int iVar1;
  bool bVar2;
  int64_t lVar3;
  int iVar4;
  int64_t *plVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  iVar4 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1bb0);
  if (iVar4 != 0) {
    iVar6 = 0;
    if ((param_1 != 0) && (iVar6 = 0, 0 < iVar4)) {
      lVar7 = 0;
      plVar9 = (int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bb8) + 8);
      iVar6 = 0;
      do {
        if ((*plVar9 != 0) && ((*(uint *)(*plVar9 + 0xc) & 0x1000000) == 0)) {
          bVar2 = false;
          plVar5 = plVar9;
          lVar8 = lVar7;
          if (iVar4 <= lVar7) break;
          do {
            if (bVar2) goto LAB_18012edb4;
            if ((*plVar5 != 0) && (*(int64_t *)(*plVar5 + 0x3a0) == *(int64_t *)(param_1 + 0x3a0))
               ) {
              bVar2 = true;
            }
            lVar8 = lVar8 + 1;
            plVar5 = plVar5 + 6;
          } while (lVar8 < iVar4);
          if (!bVar2) break;
        }
LAB_18012edb4:
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 1;
        plVar9 = plVar9 + 6;
      } while (iVar6 < iVar4);
    }
    if (iVar6 < iVar4) {
      iVar4 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1bb4);
      if (iVar4 < iVar6) {
        if (iVar4 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar4 / 2 + iVar4;
        }
        iVar1 = iVar6;
        if (iVar6 < iVar4) {
          iVar1 = iVar4;
        }
        FUN_18013e760(SYSTEM_DATA_MANAGER_A + 0x1bb0,iVar1);
      }
      *(int *)(lVar3 + 0x1bb0) = iVar6;
    }
  }
  return;
}





// 函数: void FUN_18012ed32(int64_t param_1)
void FUN_18012ed32(int64_t param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int64_t *plVar4;
  int iVar5;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t unaff_R14;
  
  iVar3 = (int)unaff_RSI;
  iVar5 = 0;
  if ((param_1 != 0) && (iVar5 = 0, 0 < iVar3)) {
    lVar6 = 0;
    plVar8 = (int64_t *)(*(int64_t *)(unaff_R14 + 0x1bb8) + 8);
    iVar5 = 0;
    do {
      if ((*plVar8 != 0) && ((*(uint *)(*plVar8 + 0xc) & 0x1000000) == 0)) {
        bVar2 = false;
        plVar4 = plVar8;
        lVar7 = lVar6;
        if (unaff_RSI <= lVar6) break;
        do {
          if (bVar2) goto LAB_18012edb4;
          if ((*plVar4 != 0) && (*(int64_t *)(*plVar4 + 0x3a0) == *(int64_t *)(unaff_RBP + 0x3a0))
             ) {
            bVar2 = true;
          }
          lVar7 = lVar7 + 1;
          plVar4 = plVar4 + 6;
        } while (lVar7 < unaff_RSI);
        if (!bVar2) break;
      }
LAB_18012edb4:
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 1;
      plVar8 = plVar8 + 6;
    } while (iVar5 < iVar3);
  }
  if (iVar5 < iVar3) {
    iVar3 = *(int *)(unaff_R14 + 0x1bb4);
    if (iVar3 < iVar5) {
      if (iVar3 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar3 / 2 + iVar3;
      }
      iVar1 = iVar5;
      if (iVar5 < iVar3) {
        iVar1 = iVar3;
      }
      FUN_18013e760(unaff_R14 + 0x1bb0,iVar1);
    }
    *(int *)(unaff_R14 + 0x1bb0) = iVar5;
  }
  return;
}





// 函数: void FUN_18012ed58(void)
void FUN_18012ed58(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int64_t *plVar4;
  int unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar5;
  int64_t in_R11;
  int64_t *plVar6;
  int64_t unaff_R14;
  uint uVar7;
  
  plVar6 = (int64_t *)(in_R11 + 8);
  uVar7 = unaff_EBX + 1;
  do {
    if ((*plVar6 != 0) && ((*(uint *)(*plVar6 + 0xc) & 0x1000000) == 0)) {
      uVar2 = 0;
      plVar4 = plVar6;
      lVar5 = unaff_RDI;
      if (unaff_RSI <= unaff_RDI) break;
      do {
        if ((char)uVar2 != '\0') goto LAB_18012edb4;
        if ((*plVar4 != 0) &&
           (uVar2 = uVar2 & 0xff, *(int64_t *)(*plVar4 + 0x3a0) == *(int64_t *)(unaff_RBP + 0x3a0)
           )) {
          uVar2 = uVar7;
        }
        lVar5 = lVar5 + 1;
        plVar4 = plVar4 + 6;
      } while (lVar5 < unaff_RSI);
      if ((char)uVar2 == '\0') break;
    }
LAB_18012edb4:
    unaff_EBX = unaff_EBX + 1;
    unaff_RDI = unaff_RDI + 1;
    plVar6 = plVar6 + 6;
  } while (unaff_EBX < (int)unaff_RSI);
  if (unaff_EBX < (int)unaff_RSI) {
    iVar3 = *(int *)(unaff_R14 + 0x1bb4);
    if (iVar3 < unaff_EBX) {
      if (iVar3 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar3 / 2 + iVar3;
      }
      iVar1 = unaff_EBX;
      if (unaff_EBX < iVar3) {
        iVar1 = iVar3;
      }
      FUN_18013e760(unaff_R14 + 0x1bb0,iVar1);
    }
    *(int *)(unaff_R14 + 0x1bb0) = unaff_EBX;
  }
  return;
}





// 函数: void FUN_18012edc6(void)
void FUN_18012edc6(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_ESI;
  int64_t unaff_R14;
  
  if (unaff_EBX < unaff_ESI) {
    iVar1 = *(int *)(unaff_R14 + 0x1bb4);
    if (iVar1 < unaff_EBX) {
      if (iVar1 == 0) {
        iVar1 = 8;
      }
      else {
        iVar1 = iVar1 / 2 + iVar1;
      }
      iVar2 = unaff_EBX;
      if (unaff_EBX < iVar1) {
        iVar2 = iVar1;
      }
      FUN_18013e760(unaff_R14 + 0x1bb0,iVar2);
    }
    *(int *)(unaff_R14 + 0x1bb0) = unaff_EBX;
  }
  return;
}





// 函数: void FUN_18012ee0d(void)
void FUN_18012ee0d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012ee20(int param_1,char param_2)
void FUN_18012ee20(int param_1,char param_2)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  
  lVar1 = SYSTEM_DATA_MANAGER_A;
  if (param_1 < 1) {
    lVar4 = *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bb8) + 0x10);
  }
  else {
    lVar4 = *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bb8) + -0x28 + (int64_t)param_1 * 0x30)
    ;
  }
  iVar2 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1bb4);
  if (iVar2 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    iVar3 = param_1;
    if (param_1 < iVar2) {
      iVar3 = iVar2;
    }
    FUN_18013e760(SYSTEM_DATA_MANAGER_A + 0x1bb0,iVar3);
  }
  *(int *)(lVar1 + 0x1bb0) = param_1;
  if (param_2 != '\0') {
    if ((*(int *)(lVar1 + 0x1cfc) == 0) && (*(int64_t *)(lVar4 + 0x3c0) != 0)) {
      lVar4 = *(int64_t *)(lVar4 + 0x3c0);
    }
    FUN_18012d2e0(lVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012eee0(uint param_1,uint param_2)
void FUN_18012eee0(uint param_1,uint param_2)

{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  uint64_t uVar4;
  int8_t auStack_48 [32];
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  uint64_t uStack_10;
  
  lVar1 = SYSTEM_DATA_MANAGER_A;
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
  uVar4 = (uint64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1bc0);
  if ((*(int *)(SYSTEM_DATA_MANAGER_A + 0x1bc0) < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1bb0)) &&
     (*(uint *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bb8) + uVar4 * 0x30) == param_1)) {
    if ((param_2 >> 0x1c & 1) == 0) {
      uVar4 = (uint64_t)param_1;
      puVar3 = &rendering_buffer_2544_ptr;
    }
    else {
      puVar3 = &rendering_buffer_2560_ptr;
    }
    FUN_180121200(&uStack_28,0x14,puVar3,uVar4);
    cVar2 = FUN_1801299b0(&uStack_28,0,param_2 | 0x4000000);
    if (cVar2 == '\0') {
      FUN_18012f0c0();
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_48);
  }
  uStack_18 = CONCAT31(uStack_18._1_3_,1);
  uStack_28 = 0;
  uStack_20 = 0;
  *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bec) = 0;
  *(uint64_t *)(lVar1 + 0x1be4) = 0;
  *(uint64_t *)(lVar1 + 0x1bdc) = 0;
  *(uint64_t *)(lVar1 + 0x1bd4) = 0;
  *(int32_t *)(lVar1 + 0x1bd0) = 0;
  *(int32_t *)(lVar1 + 0x1c44) = 0;
  *(int32_t *)(lVar1 + 0x1c48) = 0;
  *(int32_t *)(lVar1 + 0x1c4c) = 0;
  *(int32_t *)(lVar1 + 0x1c50) = 0;
  *(int32_t *)(lVar1 + 0x1c54) = uStack_18;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_48);
}



// WARNING: Removing unreachable block (ram,0x00018012ef2e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18012eff0(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int8_t auStack_48 [32];
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  uint64_t uStack_10;
  
  lVar1 = SYSTEM_DATA_MANAGER_A;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1bb0) <= *(int *)(SYSTEM_DATA_MANAGER_A + 0x1bc0)) {
    uStack_18 = CONCAT31(uStack_18._1_3_,1);
    *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bec) = 0;
    *(uint64_t *)(lVar1 + 0x1be4) = 0;
    *(uint64_t *)(lVar1 + 0x1bdc) = 0;
    *(uint64_t *)(lVar1 + 0x1bd4) = 0;
    *(int32_t *)(lVar1 + 0x1bd0) = 0;
    *(uint64_t *)(lVar1 + 0x1c44) = 0;
    *(uint64_t *)(lVar1 + 0x1c4c) = 0;
    *(int32_t *)(lVar1 + 0x1c54) = uStack_18;
    return (uint64_t)uStack_18._1_3_ << 8;
  }
  iVar3 = FUN_180121250(&rendering_buffer_2696_ptr,0,
                        *(int32_t *)
                         (*(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x220) + -4 +
                         (int64_t)*(int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218) * 4));
  if (*(int *)(lVar1 + 0x1b2c) == iVar3) {
    *(int *)(lVar1 + 0x1b34) = iVar3;
  }
  if (*(int *)(lVar1 + 0x1b30) == iVar3) {
    *(int8_t *)(lVar1 + 0x1b3f) = 1;
  }
  lVar1 = SYSTEM_DATA_MANAGER_A;
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
  if ((*(int *)(SYSTEM_DATA_MANAGER_A + 0x1bc0) < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1bb0)) &&
     (*(int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bb8) +
              (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1bc0) * 0x30) == iVar3)) {
    FUN_180121200(&uStack_28,0x14,&rendering_buffer_2544_ptr,iVar3);
    cVar2 = FUN_1801299b0(&uStack_28,0,0x4200141);
    if (cVar2 == '\0') {
      FUN_18012f0c0();
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_48);
  }
  uStack_18 = CONCAT31(uStack_18._1_3_,1);
  uStack_28 = 0;
  uStack_20 = 0;
  *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bec) = 0;
  *(uint64_t *)(lVar1 + 0x1be4) = 0;
  *(uint64_t *)(lVar1 + 0x1bdc) = 0;
  *(uint64_t *)(lVar1 + 0x1bd4) = 0;
  *(int32_t *)(lVar1 + 0x1bd0) = 0;
  *(int32_t *)(lVar1 + 0x1c44) = 0;
  *(int32_t *)(lVar1 + 0x1c48) = 0;
  *(int32_t *)(lVar1 + 0x1c4c) = 0;
  *(int32_t *)(lVar1 + 0x1c50) = 0;
  *(int32_t *)(lVar1 + 0x1c54) = uStack_18;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_48);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



