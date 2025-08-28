#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part256_sub002_sub002.c - 1 个函数

// 函数: void FUN_180810b00(uint64_t param_1,int32_t *param_2,int64_t param_3,int param_4,int *param_5)
void FUN_180810b00(uint64_t param_1,int32_t *param_2,int64_t param_3,int param_4,int *param_5)

{
  byte bVar1;
  int32_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int64_t lVar9;
  int iStackX_20;
  
  lVar3 = 0;
  *param_5 = 0;
  if (param_4 == 0) {
    uVar8 = *(uint *)((uint64_t)*(uint *)(param_3 + 0xc) * 4 + 0x180c45c70);
  }
  else {
    uVar8 = *(uint *)((uint64_t)(*(uint *)(param_3 + 0xc) >> 1) * 4 + 0x180c46470);
  }
  *(uint *)(param_3 + 0x4c) = uVar8 >> 0xf & 1;
  iStackX_20 = 0;
  if (*(int *)(param_3 + 0x10) == 2) {
    lVar3 = 1;
    if (*(int *)(param_3 + 0x14) != 0) {
      lVar3 = 2;
    }
    iStackX_20 = (int)lVar3;
  }
  lVar9 = 4;
  pbVar5 = (byte *)(((uint64_t)(uVar8 >> 0xc & 7) + lVar3 * 6) * 4 + 0x180beb650);
  do {
    iVar7 = 0;
    bVar1 = *pbVar5;
    uVar6 = uVar8 & 7;
    if (uVar6 == 0) {
      if (bVar1 != 0) {
        do {
          *param_2 = 0;
          iVar7 = iVar7 + 1;
          param_2 = param_2 + 1;
        } while (iVar7 < (int)(uint)*pbVar5);
      }
    }
    else {
      if (bVar1 != 0) {
        do {
          uVar2 = func_0x000180815b30(param_1,uVar6);
          *param_2 = uVar2;
          iVar7 = iVar7 + 1;
          bVar1 = *pbVar5;
          param_2 = param_2 + 1;
        } while (iVar7 < (int)(uint)bVar1);
      }
      *param_5 = *param_5 + bVar1 * uVar6;
    }
    pbVar5 = pbVar5 + 1;
    lVar9 = lVar9 + -1;
    uVar8 = uVar8 >> 3;
  } while (lVar9 != 0);
  for (uVar4 = (uint64_t)(iStackX_20 * 2 + 1); uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_2 = 0;
    param_2 = param_2 + 1;
  }
  return;
}



uint64_t FUN_180810c50(int64_t param_1,int32_t *param_2,int param_3,int param_4,int param_5)

{
  int64_t *plVar1;
  uint *puVar2;
  char cVar3;
  int64_t lVar4;
  int32_t uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int32_t *puVar11;
  uint *puVar12;
  int64_t lVar13;
  int64_t lVar14;
  uint *puVar15;
  
  lVar10 = (int64_t)param_3;
  uVar5 = func_0x000180815aa0(param_1,9);
  *param_2 = uVar5;
  uVar9 = 5;
  if (param_3 != 1) {
    uVar9 = 3;
  }
  uVar5 = func_0x000180815b30(param_1,uVar9);
  param_2[1] = uVar5;
  if (0 < param_3) {
    puVar11 = param_2 + 0x20;
    lVar14 = lVar10;
    do {
      puVar11[-0x1e] = 0xffffffff;
      uVar5 = func_0x000180815b30(param_1,4);
      *puVar11 = uVar5;
      puVar11 = puVar11 + 0x3c;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  lVar14 = 0;
  puVar15 = param_2 + 3;
  do {
    lVar13 = 0;
    puVar12 = puVar15;
    if (0 < lVar10) {
      do {
        uVar6 = func_0x000180815aa0(param_1,0xc);
        *puVar12 = uVar6;
        uVar6 = func_0x000180815b30(param_1,9);
        puVar12[1] = uVar6;
        if ((0x120 < uVar6) || (0x1000 < *puVar12)) {
          return 0xd;
        }
        uVar6 = func_0x000180815b30(param_1,8);
        *(uint64_t *)(puVar12 + 0x1b) = (uint64_t)uVar6 * -4 + 0x180c421a0;
        if (param_4 != 0) {
          *(uint64_t *)(puVar12 + 0x1b) = (uint64_t)uVar6 * -4 + 0x180c421a8;
        }
        uVar6 = func_0x000180815b30(param_1,4);
        puVar12[2] = uVar6;
        lVar4 = *(int64_t *)(param_1 + 0x178);
        iVar7 = *(int *)(lVar4 + 0x48a8);
        cVar3 = **(char **)(lVar4 + 0x48b0);
        *(int *)(lVar4 + 0x48a8) = iVar7 + 1;
        plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
        *plVar1 = *plVar1 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
        puVar2 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
        *puVar2 = *puVar2 & 7;
        if ((char)(cVar3 << ((byte)iVar7 & 0x1f)) < '\0') {
          uVar6 = func_0x000180815b30(param_1,2);
          puVar12[3] = uVar6;
          lVar4 = *(int64_t *)(param_1 + 0x178);
          iVar7 = *(int *)(lVar4 + 0x48a8);
          cVar3 = **(char **)(lVar4 + 0x48b0);
          *(int *)(lVar4 + 0x48a8) = iVar7 + 1;
          plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
          *plVar1 = *plVar1 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
          puVar2 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
          *puVar2 = *puVar2 & 7;
          puVar12[4] = (uint)((byte)(cVar3 << ((byte)iVar7 & 0x1f)) >> 7);
          uVar6 = func_0x000180815b30(param_1,5);
          puVar12[5] = uVar6;
          uVar6 = func_0x000180815b30(param_1,5);
          puVar12[6] = uVar6;
          puVar12[7] = 0;
          iVar7 = func_0x000180815b30(param_1,3);
          *(uint64_t *)(puVar12 + 0x15) =
               (uint64_t)(uint)(iVar7 << 3) * 4 + *(int64_t *)(puVar12 + 0x1b);
          iVar7 = func_0x000180815b30(param_1,3);
          *(uint64_t *)(puVar12 + 0x17) =
               (uint64_t)(uint)(iVar7 << 3) * 4 + *(int64_t *)(puVar12 + 0x1b);
          iVar7 = func_0x000180815b30(param_1,3);
          *(uint64_t *)(puVar12 + 0x19) =
               (uint64_t)(uint)(iVar7 << 3) * 4 + *(int64_t *)(puVar12 + 0x1b);
          if (puVar12[3] == 0) {
            return 0xd;
          }
          puVar12[0x10] = 0x12;
          puVar12[0x11] = 0x120;
        }
        else {
          uVar6 = func_0x000180815b30(param_1,5);
          puVar12[5] = uVar6;
          uVar6 = func_0x000180815b30(param_1,5);
          puVar12[6] = uVar6;
          uVar6 = func_0x000180815b30(param_1,5);
          puVar12[7] = uVar6;
          iVar7 = func_0x000180815b30(param_1,4);
          iVar8 = func_0x000180815b30(param_1,3);
          puVar12[0x10] =
               *(int *)(((int64_t)(iVar7 + 1) + (int64_t)param_5 * 0x48) * 4 + 0x180be9220) >> 1;
          if (iVar8 + iVar7 + 2 < 0x17) {
            uVar6 = *(int *)(((int64_t)(iVar8 + iVar7) + (int64_t)param_5 * 0x48) * 4 +
                            0x180be9228) >> 1;
          }
          else {
            uVar6 = 0x120;
          }
          puVar12[0x11] = uVar6;
          puVar12[3] = 0;
          puVar12[4] = 0;
        }
        lVar4 = *(int64_t *)(param_1 + 0x178);
        lVar13 = lVar13 + 1;
        iVar7 = *(int *)(lVar4 + 0x48a8);
        cVar3 = **(char **)(lVar4 + 0x48b0);
        *(int *)(lVar4 + 0x48a8) = iVar7 + 1;
        plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
        *plVar1 = *plVar1 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
        puVar2 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
        *puVar2 = *puVar2 & 7;
        puVar12[0x12] = (uint)((byte)(cVar3 << ((byte)iVar7 & 0x1f)) >> 7);
        lVar4 = *(int64_t *)(param_1 + 0x178);
        iVar7 = *(int *)(lVar4 + 0x48a8);
        cVar3 = **(char **)(lVar4 + 0x48b0);
        *(int *)(lVar4 + 0x48a8) = iVar7 + 1;
        plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
        *plVar1 = *plVar1 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
        puVar2 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
        *puVar2 = *puVar2 & 7;
        puVar12[0x13] = (uint)((byte)(cVar3 << ((byte)iVar7 & 0x1f)) >> 7);
        lVar4 = *(int64_t *)(param_1 + 0x178);
        iVar7 = *(int *)(lVar4 + 0x48a8);
        cVar3 = **(char **)(lVar4 + 0x48b0);
        *(int *)(lVar4 + 0x48a8) = iVar7 + 1;
        plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
        *plVar1 = *plVar1 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
        puVar2 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
        *puVar2 = *puVar2 & 7;
        puVar12[0x14] = (uint)((byte)(cVar3 << ((byte)iVar7 & 0x1f)) >> 7);
        puVar12 = puVar12 + 0x3c;
      } while (lVar13 < lVar10);
    }
    lVar14 = lVar14 + 1;
    puVar15 = puVar15 + 0x1e;
    if (1 < lVar14) {
      return 0;
    }
  } while( true );
}



uint64_t FUN_1808110b0(int64_t param_1,int32_t *param_2,int param_3,int param_4,int param_5)

{
  int64_t *plVar1;
  char cVar2;
  int32_t uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  uint *puVar8;
  int64_t lVar9;
  uint *puVar10;
  int64_t lVar11;
  
  uVar3 = func_0x000180815aa0(param_1,8);
  *param_2 = uVar3;
  if (param_3 == 1) {
    lVar11 = *(int64_t *)(param_1 + 0x178);
    iVar5 = *(int *)(lVar11 + 0x48a8);
    cVar2 = **(char **)(lVar11 + 0x48b0);
    *(int *)(lVar11 + 0x48a8) = iVar5 + 1;
    plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
    *plVar1 = *plVar1 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
    puVar8 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
    *puVar8 = *puVar8 & 7;
    uVar4 = (uint)((byte)(cVar2 << ((byte)iVar5 & 0x1f)) >> 7);
  }
  else {
    uVar4 = func_0x000180815b30(param_1,2);
  }
  param_2[1] = uVar4;
  if (0 < param_3) {
    lVar11 = 0;
    puVar8 = param_2 + 0x16;
    do {
      uVar4 = func_0x000180815aa0(param_1,0xc);
      puVar8[-0x13] = uVar4;
      uVar4 = func_0x000180815b30(param_1,9);
      puVar8[-0x12] = uVar4;
      if (0x120 < uVar4) {
        return 0xd;
      }
      uVar4 = func_0x000180815b30(param_1,8);
      *(uint64_t *)(puVar8 + 8) = (uint64_t)uVar4 * -4 + 0x180c421a0;
      if (param_4 != 0) {
        *(uint64_t *)(puVar8 + 8) = (uint64_t)uVar4 * -4 + 0x180c421a8;
      }
      uVar4 = func_0x000180815aa0(param_1,9);
      puVar8[-0x11] = uVar4;
      lVar9 = *(int64_t *)(param_1 + 0x178);
      iVar5 = *(int *)(lVar9 + 0x48a8);
      cVar2 = **(char **)(lVar9 + 0x48b0);
      *(int *)(lVar9 + 0x48a8) = iVar5 + 1;
      plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
      *plVar1 = *plVar1 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
      puVar10 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
      *puVar10 = *puVar10 & 7;
      if ((char)(cVar2 << ((byte)iVar5 & 0x1f)) < '\0') {
        uVar4 = func_0x000180815b30(param_1,2);
        puVar8[-0x10] = uVar4;
        lVar9 = *(int64_t *)(param_1 + 0x178);
        iVar5 = *(int *)(lVar9 + 0x48a8);
        cVar2 = **(char **)(lVar9 + 0x48b0);
        *(int *)(lVar9 + 0x48a8) = iVar5 + 1;
        plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
        *plVar1 = *plVar1 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
        puVar10 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
        *puVar10 = *puVar10 & 7;
        puVar8[-0xf] = (uint)((byte)(cVar2 << ((byte)iVar5 & 0x1f)) >> 7);
        uVar4 = func_0x000180815b30(param_1,5);
        puVar8[-0xe] = uVar4;
        uVar4 = func_0x000180815b30(param_1,5);
        puVar8[-0xc] = 0;
        puVar8[-0xd] = uVar4;
        lVar9 = 3;
        puVar10 = puVar8;
        do {
          puVar10 = puVar10 + 2;
          iVar5 = func_0x000180815b30(param_1,3);
          *(uint64_t *)puVar10 = (uint64_t)(uint)(iVar5 << 3) * 4 + *(int64_t *)(puVar8 + 8);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        uVar4 = puVar8[-0x10];
        if (uVar4 == 0) {
          return 0xd;
        }
        lVar9 = *(int64_t *)(param_1 + 0x178);
        if ((*(int *)(lVar9 + 0x485c) == 0) || (uVar4 == 2)) {
          if (*(int *)(lVar9 + 0x4860) != 0) goto LAB_180811331;
          puVar8[-3] = 0x12;
          puVar8[-2] = 0x120;
        }
        else if (*(int *)(lVar9 + 0x4860) == 0) {
          puVar8[-3] = 0x1b;
          puVar8[-2] = 0x120;
        }
        else {
LAB_180811331:
          if ((uVar4 != 2) || (lVar9 = 0x180be9238, puVar8[-0xf] != 0)) {
            lVar9 = 0x180be9240;
          }
          lVar7 = (int64_t)param_5 * 0x120;
          puVar8[-3] = *(int *)(lVar7 + lVar9) >> 1;
          puVar8[-2] = *(int *)(lVar7 + 0x180be9278) >> 1;
        }
      }
      else {
        uVar4 = func_0x000180815b30(param_1,5);
        puVar8[-0xe] = uVar4;
        uVar4 = func_0x000180815b30(param_1,5);
        puVar8[-0xd] = uVar4;
        uVar4 = func_0x000180815b30(param_1,5);
        puVar8[-0xc] = uVar4;
        iVar5 = func_0x000180815b30(param_1,4);
        iVar6 = func_0x000180815b30(param_1,3);
        lVar9 = (int64_t)param_5 * 0x48;
        puVar8[-3] = *(int *)(((iVar5 + 1) + lVar9) * 4 + 0x180be9220) >> 1;
        if (iVar6 + iVar5 + 2 < 0x17) {
          uVar4 = *(int *)(((iVar6 + iVar5) + lVar9) * 4 + 0x180be9228) >> 1;
        }
        else {
          uVar4 = 0x120;
        }
        puVar8[-2] = uVar4;
        puVar8[-0x10] = 0;
        puVar8[-0xf] = 0;
      }
      lVar9 = *(int64_t *)(param_1 + 0x178);
      lVar11 = lVar11 + 1;
      iVar5 = *(int *)(lVar9 + 0x48a8);
      cVar2 = **(char **)(lVar9 + 0x48b0);
      *(int *)(lVar9 + 0x48a8) = iVar5 + 1;
      plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
      *plVar1 = *plVar1 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
      puVar10 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
      *puVar10 = *puVar10 & 7;
      *puVar8 = (uint)((byte)(cVar2 << ((byte)iVar5 & 0x1f)) >> 7);
      lVar9 = *(int64_t *)(param_1 + 0x178);
      iVar5 = *(int *)(lVar9 + 0x48a8);
      cVar2 = **(char **)(lVar9 + 0x48b0);
      *(int *)(lVar9 + 0x48a8) = iVar5 + 1;
      plVar1 = (int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48b0);
      *plVar1 = *plVar1 + ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x178) + 0x48a8) >> 3);
      puVar10 = (uint *)(*(int64_t *)(param_1 + 0x178) + 0x48a8);
      *puVar10 = *puVar10 & 7;
      puVar8[1] = (uint)((byte)(cVar2 << ((byte)iVar5 & 0x1f)) >> 7);
      puVar8 = puVar8 + 0x3c;
    } while (lVar11 < param_3);
  }
  return 0;
}



uint64_t
FUN_180811500(int64_t param_1,int64_t param_2,int64_t param_3,int param_4,int64_t param_5)

{
  int iVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int iVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int iVar7;
  int32_t *puVar8;
  int64_t lVar9;
  
  lVar2 = *(int64_t *)(param_1 + 0x178);
  lVar9 = (int64_t)param_4;
  iVar7 = 0;
  iVar1 = *(int *)(lVar2 + 0x48b8 + lVar9 * 4);
  iVar4 = 1 - iVar1;
  *(int *)(lVar2 + 0x48b8 + lVar9 * 4) = iVar4;
  puVar6 = (int32_t *)(lVar2 + 0x2448 + (lVar9 + (int64_t)iVar1 * 2) * 0x900);
  puVar8 = (int32_t *)(lVar2 + 0x2448 + (lVar9 + (int64_t)iVar4 * 2) * 0x900);
  if (*(int *)(param_5 + 0x14) != 0) {
    iVar7 = 2;
    FUN_1808124d0(param_2,puVar6,puVar8,0x180c41920,param_3);
    FUN_1808124d0(param_2 + 0x48,puVar6 + 0x12,puVar8 + 0x12,0x180c41b60,param_3 + 4);
    puVar6 = puVar6 + 0x24;
    puVar8 = puVar8 + 0x24;
    param_3 = param_3 + 8;
  }
  iVar1 = *(int *)(param_5 + 0x10);
  if (iVar7 < *(int *)(param_5 + 0x40)) {
    if (iVar1 == 2) {
      do {
        FUN_180811f40(param_2 + (int64_t)iVar7 * 0x48,puVar6,puVar8,0x180c41a40,param_3);
        FUN_180811f40(param_2 + (int64_t)(iVar7 + 1) * 0x48,puVar6 + 0x12,puVar8 + 0x12,0x180c41c80
                      ,param_3 + 4);
        iVar7 = iVar7 + 2;
        param_3 = param_3 + 8;
        puVar6 = puVar6 + 0x24;
        puVar8 = puVar8 + 0x24;
      } while (iVar7 < *(int *)(param_5 + 0x40));
    }
    else {
      do {
        FUN_1808124d0(param_2 + (int64_t)iVar7 * 0x48,puVar6,puVar8,
                      (int64_t)iVar1 * 0x90 + 0x180c41920,param_3);
        FUN_1808124d0(param_2 + (int64_t)(iVar7 + 1) * 0x48,puVar6 + 0x12,puVar8 + 0x12,
                      (int64_t)iVar1 * 0x90 + 0x180c41b60,param_3 + 4);
        iVar7 = iVar7 + 2;
        param_3 = param_3 + 8;
        puVar6 = puVar6 + 0x24;
        puVar8 = puVar8 + 0x24;
      } while (iVar7 < *(int *)(param_5 + 0x40));
    }
  }
  if (iVar7 < 0x20) {
    uVar5 = (uint64_t)(0x20 - iVar7);
    puVar3 = (int32_t *)(param_3 + 0x100);
    do {
      puVar3[-0x40] = *puVar6;
      *puVar8 = 0;
      puVar3[-0x20] = puVar6[1];
      puVar8[1] = 0;
      *puVar3 = puVar6[2];
      puVar8[2] = 0;
      puVar3[0x20] = puVar6[3];
      puVar8[3] = 0;
      puVar3[0x40] = puVar6[4];
      puVar8[4] = 0;
      puVar3[0x60] = puVar6[5];
      puVar8[5] = 0;
      puVar3[0x80] = puVar6[6];
      puVar8[6] = 0;
      puVar3[0xa0] = puVar6[7];
      puVar8[7] = 0;
      puVar3[0xc0] = puVar6[8];
      puVar8[8] = 0;
      puVar3[0xe0] = puVar6[9];
      puVar8[9] = 0;
      puVar3[0x100] = puVar6[10];
      puVar8[10] = 0;
      puVar3[0x120] = puVar6[0xb];
      puVar8[0xb] = 0;
      puVar3[0x140] = puVar6[0xc];
      puVar8[0xc] = 0;
      puVar3[0x160] = puVar6[0xd];
      puVar8[0xd] = 0;
      puVar3[0x180] = puVar6[0xe];
      puVar8[0xe] = 0;
      puVar3[0x1a0] = puVar6[0xf];
      puVar8[0xf] = 0;
      puVar3[0x1c0] = puVar6[0x10];
      puVar8[0x10] = 0;
      puVar3[0x1e0] = puVar6[0x11];
      puVar8[0x11] = 0;
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 0x12;
      puVar8 = puVar8 + 0x12;
    } while (uVar5 != 0);
  }
  return 0;
}



uint64_t
FUN_180811820(uint64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,int param_5,
             int param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int64_t lVar7;
  float *pfVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int *piVar17;
  int iVar18;
  int64_t lVar19;
  void *puVar20;
  int64_t lVar21;
  void *puVar22;
  bool bVar23;
  int64_t lStackX_20;
  
  lVar10 = (int64_t)param_5 * 0x120;
  lVar11 = lVar10 + 0x180be9220;
  if (param_7 == 0) {
    if (param_6 == 0) {
      puVar20 = &memory_allocator_304_ptr;
      puVar22 = &processed_var_432_ptr;
    }
    else {
      puVar20 = &memory_allocator_368_ptr;
      puVar22 = &processed_var_496_ptr;
    }
  }
  else {
    lVar19 = 0x180c46970;
    lVar21 = 0x180c469f0;
    lVar7 = (uint64_t)(*(uint *)(param_4 + 0xc) & 1) * 0x40;
    if (param_6 == 0) {
      lVar19 = 0x180c46870;
    }
    puVar20 = (void *)(lVar19 + lVar7);
    if (param_6 == 0) {
      lVar21 = 0x180c468f0;
    }
    puVar22 = (void *)(lVar21 + lVar7);
  }
  if (*(int *)(param_4 + 0x10) == 2) {
    iVar13 = 0;
    bVar23 = *(int *)(param_4 + 0x14) != 0;
    piVar17 = (int *)(param_4 + 0x30);
    lStackX_20 = 3;
    do {
      iVar14 = *piVar17;
      uVar15 = (uint64_t)iVar14;
      bVar5 = false;
      if (iVar14 < 4) {
        bVar5 = bVar23;
      }
      bVar23 = bVar5;
      if (iVar14 < 0xc) {
        piVar12 = (int *)(lVar11 + (uVar15 + 0x2d) * 4);
        do {
          iVar14 = *(int *)(param_3 +
                           (uint64_t)(uint)(((int)uVar15 * 3 - *(int *)(param_4 + 0x14)) + iVar13)
                           * 4);
          if (iVar14 != 7) {
            iVar9 = piVar12[0xe];
            iVar18 = *piVar12 + iVar13;
            fVar1 = *(float *)(puVar20 + (int64_t)iVar14 * 4);
            fVar2 = *(float *)(puVar22 + (int64_t)iVar14 * 4);
            if (3 < iVar9) {
              lVar7 = (int64_t)iVar18;
              uVar6 = (iVar9 - 4U >> 2) + 1;
              uVar16 = (uint64_t)uVar6;
              iVar9 = iVar9 + uVar6 * -4;
              iVar18 = iVar18 + uVar6 * 0xc;
              pfVar8 = (float *)(param_2 + (lVar7 + 3) * 4);
              do {
                fVar3 = pfVar8[-3];
                fVar4 = *pfVar8;
                pfVar8[-3] = fVar3 * fVar1;
                pfVar8[0x23d] = fVar3 * fVar2;
                fVar3 = pfVar8[3];
                *pfVar8 = fVar4 * fVar1;
                pfVar8[0x240] = fVar4 * fVar2;
                fVar4 = pfVar8[6];
                pfVar8[3] = fVar3 * fVar1;
                pfVar8[0x243] = fVar3 * fVar2;
                pfVar8[6] = fVar4 * fVar1;
                pfVar8[0x246] = fVar4 * fVar2;
                uVar16 = uVar16 - 1;
                pfVar8 = pfVar8 + 0xc;
              } while (uVar16 != 0);
            }
            if (0 < iVar9) {
              pfVar8 = (float *)(param_2 + (int64_t)iVar18 * 4);
              do {
                fVar3 = *pfVar8;
                iVar9 = iVar9 + -1;
                *pfVar8 = fVar3 * fVar1;
                pfVar8[0x240] = fVar3 * fVar2;
                pfVar8 = pfVar8 + 3;
              } while (0 < iVar9);
            }
          }
          uVar6 = (int)uVar15 + 1;
          uVar15 = (uint64_t)uVar6;
          piVar12 = piVar12 + 1;
        } while ((int)uVar6 < 0xc);
      }
      iVar18 = *(int *)(lVar10 + 0x180be9304) + iVar13;
      iVar14 = *(int *)(lVar10 + 0x180be933c);
      iVar9 = *(int *)(param_3 + (uint64_t)((iVar13 - *(int *)(param_4 + 0x14)) + 0x21) * 4);
      if (iVar9 != 7) {
        fVar1 = *(float *)(puVar20 + (int64_t)iVar9 * 4);
        fVar2 = *(float *)(puVar22 + (int64_t)iVar9 * 4);
        if (3 < iVar14) {
          lVar7 = (int64_t)iVar18;
          uVar6 = (iVar14 - 4U >> 2) + 1;
          uVar15 = (uint64_t)uVar6;
          iVar14 = iVar14 + uVar6 * -4;
          iVar18 = iVar18 + uVar6 * 0xc;
          pfVar8 = (float *)(param_2 + (lVar7 + 3) * 4);
          do {
            fVar3 = pfVar8[-3];
            fVar4 = *pfVar8;
            pfVar8[-3] = fVar3 * fVar1;
            pfVar8[0x23d] = fVar3 * fVar2;
            fVar3 = pfVar8[3];
            *pfVar8 = fVar4 * fVar1;
            pfVar8[0x240] = fVar4 * fVar2;
            fVar4 = pfVar8[6];
            pfVar8[3] = fVar3 * fVar1;
            pfVar8[0x243] = fVar3 * fVar2;
            pfVar8[6] = fVar4 * fVar1;
            pfVar8[0x246] = fVar4 * fVar2;
            uVar15 = uVar15 - 1;
            pfVar8 = pfVar8 + 0xc;
          } while (uVar15 != 0);
        }
        if (0 < iVar14) {
          pfVar8 = (float *)(param_2 + (int64_t)iVar18 * 4);
          do {
            fVar3 = *pfVar8;
            iVar14 = iVar14 + -1;
            *pfVar8 = fVar3 * fVar1;
            pfVar8[0x240] = fVar3 * fVar2;
            pfVar8 = pfVar8 + 3;
          } while (0 < iVar14);
        }
      }
      iVar13 = iVar13 + 1;
      piVar17 = piVar17 + 1;
      lStackX_20 = lStackX_20 + -1;
    } while (lStackX_20 != 0);
    if (bVar23) {
      lVar10 = (int64_t)*(int *)(param_4 + 0x3c);
      iVar13 = *(int *)(lVar11 + lVar10 * 4);
      if (lVar10 < 8) {
        piVar17 = (int *)(param_3 + lVar10 * 4);
        lVar10 = 8 - lVar10;
        do {
          iVar14 = *piVar17;
          iVar9 = *(int *)((int64_t)piVar17 + (lVar11 - param_3) + 0x5c);
          if (iVar14 == 7) {
            iVar13 = iVar13 + iVar9;
          }
          else {
            fVar1 = *(float *)(puVar20 + (int64_t)iVar14 * 4);
            fVar2 = *(float *)(puVar22 + (int64_t)iVar14 * 4);
            if (3 < iVar9) {
              lVar7 = (int64_t)iVar13;
              uVar6 = (iVar9 - 4U >> 2) + 1;
              uVar15 = (uint64_t)uVar6;
              iVar13 = iVar13 + uVar6 * 4;
              iVar9 = iVar9 + uVar6 * -4;
              pfVar8 = (float *)(param_2 + (lVar7 + 1) * 4);
              do {
                fVar3 = pfVar8[-1];
                fVar4 = *pfVar8;
                pfVar8[-1] = fVar3 * fVar1;
                pfVar8[0x23f] = fVar3 * fVar2;
                fVar3 = pfVar8[1];
                *pfVar8 = fVar4 * fVar1;
                pfVar8[0x240] = fVar4 * fVar2;
                fVar4 = pfVar8[2];
                pfVar8[1] = fVar3 * fVar1;
                pfVar8[0x241] = fVar3 * fVar2;
                pfVar8[2] = fVar4 * fVar1;
                pfVar8[0x242] = fVar4 * fVar2;
                uVar15 = uVar15 - 1;
                pfVar8 = pfVar8 + 4;
              } while (uVar15 != 0);
            }
            if (0 < iVar9) {
              lVar7 = (int64_t)iVar13;
              iVar13 = iVar13 + iVar9;
              pfVar8 = (float *)(param_2 + lVar7 * 4);
              do {
                fVar3 = *pfVar8;
                iVar9 = iVar9 + -1;
                *pfVar8 = fVar3 * fVar1;
                pfVar8[0x240] = fVar3 * fVar2;
                pfVar8 = pfVar8 + 1;
              } while (0 < iVar9);
            }
          }
          piVar17 = piVar17 + 1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
  }
  else {
    lVar7 = (int64_t)*(int *)(param_4 + 0x3c);
    iVar13 = *(int *)(lVar11 + lVar7 * 4);
    if (lVar7 < 0x15) {
      piVar17 = (int *)(param_3 + lVar7 * 4);
      lVar7 = 0x15 - lVar7;
      do {
        iVar14 = *piVar17;
        iVar9 = *(int *)((int64_t)piVar17 + (lVar11 - param_3) + 0x5c);
        if (iVar14 == 7) {
          iVar13 = iVar13 + iVar9;
        }
        else {
          fVar1 = *(float *)(puVar20 + (int64_t)iVar14 * 4);
          fVar2 = *(float *)(puVar22 + (int64_t)iVar14 * 4);
          if (3 < iVar9) {
            lVar19 = (int64_t)iVar13;
            uVar6 = (iVar9 - 4U >> 2) + 1;
            uVar15 = (uint64_t)uVar6;
            iVar13 = iVar13 + uVar6 * 4;
            iVar9 = iVar9 + uVar6 * -4;
            pfVar8 = (float *)(param_2 + (lVar19 + 1) * 4);
            do {
              fVar3 = pfVar8[-1];
              fVar4 = *pfVar8;
              pfVar8[-1] = fVar3 * fVar1;
              pfVar8[0x23f] = fVar3 * fVar2;
              fVar3 = pfVar8[1];
              *pfVar8 = fVar4 * fVar1;
              pfVar8[0x240] = fVar4 * fVar2;
              fVar4 = pfVar8[2];
              pfVar8[1] = fVar3 * fVar1;
              pfVar8[0x241] = fVar3 * fVar2;
              pfVar8[2] = fVar4 * fVar1;
              pfVar8[0x242] = fVar4 * fVar2;
              uVar15 = uVar15 - 1;
              pfVar8 = pfVar8 + 4;
            } while (uVar15 != 0);
          }
          if (0 < iVar9) {
            lVar19 = (int64_t)iVar13;
            iVar13 = iVar13 + iVar9;
            pfVar8 = (float *)(param_2 + lVar19 * 4);
            do {
              fVar3 = *pfVar8;
              iVar9 = iVar9 + -1;
              *pfVar8 = fVar3 * fVar1;
              pfVar8[0x240] = fVar3 * fVar2;
              pfVar8 = pfVar8 + 1;
            } while (0 < iVar9);
          }
        }
        piVar17 = piVar17 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if ((iVar13 < 0x240) && (iVar14 = *(int *)(param_3 + 0x50), iVar14 != 7)) {
      iVar9 = *(int *)(lVar10 + 0x180be92d0);
      fVar1 = *(float *)(puVar20 + (int64_t)iVar14 * 4);
      fVar2 = *(float *)(puVar22 + (int64_t)iVar14 * 4);
      if (3 < iVar9) {
        lVar10 = (int64_t)iVar13;
        uVar6 = (iVar9 - 4U >> 2) + 1;
        uVar15 = (uint64_t)uVar6;
        iVar13 = iVar13 + uVar6 * 4;
        iVar9 = iVar9 + uVar6 * -4;
        pfVar8 = (float *)(param_2 + (lVar10 + 1) * 4);
        do {
          fVar3 = pfVar8[-1];
          fVar4 = *pfVar8;
          pfVar8[-1] = fVar3 * fVar1;
          pfVar8[0x23f] = fVar3 * fVar2;
          fVar3 = pfVar8[1];
          *pfVar8 = fVar4 * fVar1;
          pfVar8[0x240] = fVar4 * fVar2;
          fVar4 = pfVar8[2];
          pfVar8[1] = fVar3 * fVar1;
          pfVar8[0x241] = fVar3 * fVar2;
          pfVar8[2] = fVar4 * fVar1;
          pfVar8[0x242] = fVar4 * fVar2;
          uVar15 = uVar15 - 1;
          pfVar8 = pfVar8 + 4;
        } while (uVar15 != 0);
      }
      if (0 < iVar9) {
        pfVar8 = (float *)(param_2 + (int64_t)iVar13 * 4);
        do {
          fVar3 = *pfVar8;
          iVar9 = iVar9 + -1;
          *pfVar8 = fVar3 * fVar1;
          pfVar8[0x240] = fVar3 * fVar2;
          pfVar8 = pfVar8 + 1;
        } while (0 < iVar9);
      }
    }
  }
  return 0;
}



uint64_t FUN_1808118cd(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int64_t lVar7;
  float *pfVar8;
  int iVar9;
  int *piVar10;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar11;
  int iVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int *piVar16;
  int iVar17;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int64_t unaff_R15;
  bool bVar18;
  int64_t in_stack_00000048;
  int64_t lStack0000000000000058;
  
  iVar11 = 0;
  bVar18 = *(int *)(param_4 + 0x14) != 0;
  piVar16 = (int *)(param_4 + 0x30);
  lStack0000000000000058 = 3;
  do {
    iVar12 = *piVar16;
    uVar14 = (uint64_t)iVar12;
    bVar5 = false;
    if (iVar12 < 4) {
      bVar5 = bVar18;
    }
    bVar18 = bVar5;
    if (iVar12 < 0xc) {
      piVar10 = (int *)(param_2 + (uVar14 + 0x2d) * 4);
      do {
        iVar12 = *(int *)(unaff_R12 +
                         (uint64_t)(uint)(((int)uVar14 * 3 - *(int *)(unaff_RBP + 0x14)) + iVar11)
                         * 4);
        if (iVar12 != 7) {
          iVar9 = piVar10[0xe];
          iVar17 = *piVar10 + iVar11;
          fVar1 = *(float *)(unaff_R14 + (int64_t)iVar12 * 4);
          fVar2 = *(float *)(unaff_R15 + (int64_t)iVar12 * 4);
          if (3 < iVar9) {
            lVar13 = (int64_t)iVar17;
            uVar6 = (iVar9 - 4U >> 2) + 1;
            uVar15 = (uint64_t)uVar6;
            iVar9 = iVar9 + uVar6 * -4;
            iVar17 = iVar17 + uVar6 * 0xc;
            pfVar8 = (float *)(unaff_RSI + (lVar13 + 3) * 4);
            do {
              fVar3 = pfVar8[-3];
              fVar4 = *pfVar8;
              pfVar8[-3] = fVar3 * fVar1;
              pfVar8[0x23d] = fVar3 * fVar2;
              fVar3 = pfVar8[3];
              *pfVar8 = fVar4 * fVar1;
              pfVar8[0x240] = fVar4 * fVar2;
              fVar4 = pfVar8[6];
              pfVar8[3] = fVar3 * fVar1;
              pfVar8[0x243] = fVar3 * fVar2;
              pfVar8[6] = fVar4 * fVar1;
              pfVar8[0x246] = fVar4 * fVar2;
              uVar15 = uVar15 - 1;
              pfVar8 = pfVar8 + 0xc;
            } while (uVar15 != 0);
          }
          if (0 < iVar9) {
            pfVar8 = (float *)(unaff_RSI + (int64_t)iVar17 * 4);
            do {
              fVar3 = *pfVar8;
              iVar9 = iVar9 + -1;
              *pfVar8 = fVar3 * fVar1;
              pfVar8[0x240] = fVar3 * fVar2;
              pfVar8 = pfVar8 + 3;
            } while (0 < iVar9);
          }
        }
        uVar6 = (int)uVar14 + 1;
        uVar14 = (uint64_t)uVar6;
        piVar10 = piVar10 + 1;
        param_2 = in_stack_00000048;
      } while ((int)uVar6 < 0xc);
    }
    iVar17 = *(int *)(param_2 + 0xe4) + iVar11;
    iVar12 = *(int *)(param_2 + 0x11c);
    iVar9 = *(int *)(unaff_R12 + (uint64_t)((iVar11 - *(int *)(unaff_RBP + 0x14)) + 0x21) * 4);
    if (iVar9 != 7) {
      fVar1 = *(float *)(unaff_R14 + (int64_t)iVar9 * 4);
      fVar2 = *(float *)(unaff_R15 + (int64_t)iVar9 * 4);
      if (3 < iVar12) {
        lVar13 = (int64_t)iVar17;
        uVar6 = (iVar12 - 4U >> 2) + 1;
        uVar14 = (uint64_t)uVar6;
        iVar12 = iVar12 + uVar6 * -4;
        iVar17 = iVar17 + uVar6 * 0xc;
        pfVar8 = (float *)(unaff_RSI + (lVar13 + 3) * 4);
        do {
          fVar3 = pfVar8[-3];
          fVar4 = *pfVar8;
          pfVar8[-3] = fVar3 * fVar1;
          pfVar8[0x23d] = fVar3 * fVar2;
          fVar3 = pfVar8[3];
          *pfVar8 = fVar4 * fVar1;
          pfVar8[0x240] = fVar4 * fVar2;
          fVar4 = pfVar8[6];
          pfVar8[3] = fVar3 * fVar1;
          pfVar8[0x243] = fVar3 * fVar2;
          pfVar8[6] = fVar4 * fVar1;
          pfVar8[0x246] = fVar4 * fVar2;
          uVar14 = uVar14 - 1;
          param_2 = in_stack_00000048;
          pfVar8 = pfVar8 + 0xc;
        } while (uVar14 != 0);
      }
      if (0 < iVar12) {
        pfVar8 = (float *)(unaff_RSI + (int64_t)iVar17 * 4);
        do {
          fVar3 = *pfVar8;
          iVar12 = iVar12 + -1;
          *pfVar8 = fVar3 * fVar1;
          pfVar8[0x240] = fVar3 * fVar2;
          pfVar8 = pfVar8 + 3;
        } while (0 < iVar12);
      }
    }
    iVar11 = iVar11 + 1;
    piVar16 = piVar16 + 1;
    lStack0000000000000058 = lStack0000000000000058 + -1;
  } while (lStack0000000000000058 != 0);
  if (bVar18) {
    lVar13 = (int64_t)*(int *)(unaff_RBP + 0x3c);
    iVar11 = *(int *)(param_2 + lVar13 * 4);
    if (lVar13 < 8) {
      piVar16 = (int *)(unaff_R12 + lVar13 * 4);
      lVar13 = 8 - lVar13;
      do {
        iVar12 = *piVar16;
        iVar9 = *(int *)((int64_t)piVar16 + (param_2 - unaff_R12) + 0x5c);
        if (iVar12 == 7) {
          iVar11 = iVar11 + iVar9;
        }
        else {
          fVar1 = *(float *)(unaff_R14 + (int64_t)iVar12 * 4);
          fVar2 = *(float *)(unaff_R15 + (int64_t)iVar12 * 4);
          if (3 < iVar9) {
            lVar7 = (int64_t)iVar11;
            uVar6 = (iVar9 - 4U >> 2) + 1;
            uVar14 = (uint64_t)uVar6;
            iVar11 = iVar11 + uVar6 * 4;
            iVar9 = iVar9 + uVar6 * -4;
            pfVar8 = (float *)(unaff_RSI + (lVar7 + 1) * 4);
            do {
              fVar3 = pfVar8[-1];
              fVar4 = *pfVar8;
              pfVar8[-1] = fVar3 * fVar1;
              pfVar8[0x23f] = fVar3 * fVar2;
              fVar3 = pfVar8[1];
              *pfVar8 = fVar4 * fVar1;
              pfVar8[0x240] = fVar4 * fVar2;
              fVar4 = pfVar8[2];
              pfVar8[1] = fVar3 * fVar1;
              pfVar8[0x241] = fVar3 * fVar2;
              pfVar8[2] = fVar4 * fVar1;
              pfVar8[0x242] = fVar4 * fVar2;
              uVar14 = uVar14 - 1;
              pfVar8 = pfVar8 + 4;
            } while (uVar14 != 0);
          }
          if (0 < iVar9) {
            lVar7 = (int64_t)iVar11;
            iVar11 = iVar11 + iVar9;
            pfVar8 = (float *)(unaff_RSI + lVar7 * 4);
            do {
              fVar3 = *pfVar8;
              iVar9 = iVar9 + -1;
              *pfVar8 = fVar3 * fVar1;
              pfVar8[0x240] = fVar3 * fVar2;
              pfVar8 = pfVar8 + 1;
            } while (0 < iVar9);
          }
        }
        piVar16 = piVar16 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  return 0;
}



uint64_t FUN_180811b9d(uint64_t param_1,int64_t param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t lVar8;
  float *pfVar9;
  int iVar10;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar11;
  uint64_t uVar12;
  int *piVar13;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int64_t unaff_R15;
  
  lVar7 = (int64_t)*(int *)(unaff_RBP + 0x3c);
  iVar11 = *(int *)(param_2 + lVar7 * 4);
  if (lVar7 < 8) {
    piVar13 = (int *)(unaff_R12 + lVar7 * 4);
    lVar7 = 8 - lVar7;
    do {
      iVar5 = *piVar13;
      iVar10 = *(int *)((int64_t)piVar13 + (param_2 - unaff_R12) + 0x5c);
      if (iVar5 == 7) {
        iVar11 = iVar11 + iVar10;
      }
      else {
        fVar1 = *(float *)(unaff_R14 + (int64_t)iVar5 * 4);
        fVar2 = *(float *)(unaff_R15 + (int64_t)iVar5 * 4);
        if (3 < iVar10) {
          lVar8 = (int64_t)iVar11;
          uVar6 = (iVar10 - 4U >> 2) + 1;
          uVar12 = (uint64_t)uVar6;
          iVar11 = iVar11 + uVar6 * 4;
          iVar10 = iVar10 + uVar6 * -4;
          pfVar9 = (float *)(unaff_RSI + (lVar8 + 1) * 4);
          do {
            fVar3 = pfVar9[-1];
            fVar4 = *pfVar9;
            pfVar9[-1] = fVar3 * fVar1;
            pfVar9[0x23f] = fVar3 * fVar2;
            fVar3 = pfVar9[1];
            *pfVar9 = fVar4 * fVar1;
            pfVar9[0x240] = fVar4 * fVar2;
            fVar4 = pfVar9[2];
            pfVar9[1] = fVar3 * fVar1;
            pfVar9[0x241] = fVar3 * fVar2;
            pfVar9[2] = fVar4 * fVar1;
            pfVar9[0x242] = fVar4 * fVar2;
            uVar12 = uVar12 - 1;
            pfVar9 = pfVar9 + 4;
          } while (uVar12 != 0);
        }
        if (0 < iVar10) {
          lVar8 = (int64_t)iVar11;
          iVar11 = iVar11 + iVar10;
          pfVar9 = (float *)(unaff_RSI + lVar8 * 4);
          do {
            fVar3 = *pfVar9;
            iVar10 = iVar10 + -1;
            *pfVar9 = fVar3 * fVar1;
            pfVar9[0x240] = fVar3 * fVar2;
            pfVar9 = pfVar9 + 1;
          } while (0 < iVar10);
        }
      }
      piVar13 = piVar13 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





