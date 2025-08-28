#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part181.c - 3 个函数

// 函数: void FUN_180772100(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_180772100(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint param_5)

{
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  uStack_30 = (uint64_t)param_5;
  uStack_38 = 0x218;
  FUN_180772160(param_1,&uStack_48,param_2,param_3,param_4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180772160(int64_t param_1,int64_t *param_2,uint *param_3,int32_t *param_4,int64_t param_5)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint uVar8;
  int32_t uVar9;
  bool bVar10;
  int64_t *plVar11;
  uint64_t *puVar12;
  uint64_t uVar13;
  int iVar14;
  uint uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint uVar18;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int64_t lStack_40;
  uint64_t uStack_38;
  
  if (param_2 == (int64_t *)0x0) {
    return 0x1f;
  }
  if ((((uint *)*param_2 != (uint *)0x0) && (0x6e < *(uint *)*param_2)) ||
     ((param_3 != (uint *)0x0 && (0x6e < *param_3)))) {
    return 0x38;
  }
  uVar16 = 0;
  plVar11 = (int64_t *)
            SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x80,&unknown_var_2864_ptr,0x37e,0);
  if (plVar11 == (int64_t *)0x0) {
LAB_180772526:
    uVar13 = 0x26;
  }
  else {
    plVar11[0xb] = 0;
    plVar1 = plVar11 + 9;
    plVar11[10] = (int64_t)plVar1;
    plVar2 = plVar11 + 0xc;
    *plVar1 = (int64_t)plVar1;
    plVar11[0xd] = (int64_t)plVar2;
    *plVar2 = (int64_t)plVar2;
    plVar11[0xe] = 0;
    lVar5 = param_2[1];
    *plVar11 = *param_2;
    plVar11[1] = lVar5;
    lVar5 = param_2[3];
    plVar11[2] = param_2[2];
    plVar11[3] = lVar5;
    uVar6 = *(int32_t *)((int64_t)param_2 + 0x24);
    lVar5 = param_2[5];
    uVar7 = *(int32_t *)((int64_t)param_2 + 0x2c);
    *(int *)(plVar11 + 4) = (int)param_2[4];
    *(int32_t *)((int64_t)plVar11 + 0x24) = uVar6;
    *(int *)(plVar11 + 5) = (int)lVar5;
    *(int32_t *)((int64_t)plVar11 + 0x2c) = uVar7;
    uVar6 = *(int32_t *)((int64_t)param_2 + 0x34);
    lVar5 = param_2[7];
    uVar7 = *(int32_t *)((int64_t)param_2 + 0x3c);
    *(int *)(plVar11 + 6) = (int)param_2[6];
    *(int32_t *)((int64_t)plVar11 + 0x34) = uVar6;
    *(int *)(plVar11 + 7) = (int)lVar5;
    *(int32_t *)((int64_t)plVar11 + 0x3c) = uVar7;
    if (param_3 != (uint *)0x0) {
      puVar12 = (uint64_t *)
                SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_3[0x18] * 0x68 + 0xd8,
                              &unknown_var_2864_ptr,0x38d,0);
      if (puVar12 == (uint64_t *)0x0) goto LAB_180772526;
      uVar13 = *(uint64_t *)(param_3 + 2);
      uVar18 = *param_3;
      *puVar12 = *(uint64_t *)param_3;
      puVar12[1] = uVar13;
      uVar13 = *(uint64_t *)(param_3 + 6);
      puVar12[2] = *(uint64_t *)(param_3 + 4);
      puVar12[3] = uVar13;
      uVar13 = *(uint64_t *)(param_3 + 10);
      puVar12[4] = *(uint64_t *)(param_3 + 8);
      puVar12[5] = uVar13;
      uVar13 = *(uint64_t *)(param_3 + 0xe);
      puVar12[6] = *(uint64_t *)(param_3 + 0xc);
      puVar12[7] = uVar13;
      uVar13 = *(uint64_t *)(param_3 + 0x12);
      puVar12[8] = *(uint64_t *)(param_3 + 0x10);
      puVar12[9] = uVar13;
      uVar13 = *(uint64_t *)(param_3 + 0x16);
      puVar12[10] = *(uint64_t *)(param_3 + 0x14);
      puVar12[0xb] = uVar13;
      uVar13 = *(uint64_t *)(param_3 + 0x1a);
      puVar12[0xc] = *(uint64_t *)(param_3 + 0x18);
      puVar12[0xd] = uVar13;
      uVar13 = *(uint64_t *)(param_3 + 0x1e);
      if (uVar18 < 0x6a) {
        puVar12[0xe] = *(uint64_t *)(param_3 + 0x1c);
        puVar12[0xf] = uVar13;
        uVar13 = *(uint64_t *)(param_3 + 0x22);
        puVar12[0x10] = *(uint64_t *)(param_3 + 0x20);
        puVar12[0x11] = uVar13;
        uVar13 = *(uint64_t *)(param_3 + 0x26);
        puVar12[0x12] = *(uint64_t *)(param_3 + 0x24);
        puVar12[0x13] = uVar13;
        uVar18 = param_3[0x29];
        uVar15 = param_3[0x2a];
        uVar8 = param_3[0x2b];
        *(uint *)(puVar12 + 0x14) = param_3[0x28];
        *(uint *)((int64_t)puVar12 + 0xa4) = uVar18;
        *(uint *)(puVar12 + 0x15) = uVar15;
        *(uint *)((int64_t)puVar12 + 0xac) = uVar8;
        uVar18 = param_3[0x2d];
        uVar15 = param_3[0x2e];
        uVar8 = param_3[0x2f];
        *(uint *)(puVar12 + 0x16) = param_3[0x2c];
        *(uint *)((int64_t)puVar12 + 0xb4) = uVar18;
        *(uint *)(puVar12 + 0x17) = uVar15;
        *(uint *)((int64_t)puVar12 + 0xbc) = uVar8;
      }
      else {
        puVar12[0xe] = *(uint64_t *)(param_3 + 0x1c);
        puVar12[0xf] = uVar13;
        uVar13 = *(uint64_t *)(param_3 + 0x22);
        puVar12[0x10] = *(uint64_t *)(param_3 + 0x20);
        puVar12[0x11] = uVar13;
        uVar13 = *(uint64_t *)(param_3 + 0x26);
        puVar12[0x12] = *(uint64_t *)(param_3 + 0x24);
        puVar12[0x13] = uVar13;
        uVar13 = *(uint64_t *)(param_3 + 0x2a);
        puVar12[0x14] = *(uint64_t *)(param_3 + 0x28);
        puVar12[0x15] = uVar13;
        uVar18 = param_3[0x2d];
        uVar15 = param_3[0x2e];
        uVar8 = param_3[0x2f];
        *(uint *)(puVar12 + 0x16) = param_3[0x2c];
        *(uint *)((int64_t)puVar12 + 0xb4) = uVar18;
        *(uint *)(puVar12 + 0x17) = uVar15;
        *(uint *)((int64_t)puVar12 + 0xbc) = uVar8;
        uVar18 = param_3[0x31];
        uVar15 = param_3[0x32];
        uVar8 = param_3[0x33];
        *(uint *)(puVar12 + 0x18) = param_3[0x30];
        *(uint *)((int64_t)puVar12 + 0xc4) = uVar18;
        *(uint *)(puVar12 + 0x19) = uVar15;
        *(uint *)((int64_t)puVar12 + 0xcc) = uVar8;
        puVar12[0x1a] = *(uint64_t *)(param_3 + 0x34);
      }
      puVar12[0xd] = puVar12 + 0x1b;
      uVar18 = param_3[0x18];
      uVar17 = uVar16;
      if (0 < (int)uVar18) {
        do {
          iVar14 = (int)uVar16;
          uVar15 = iVar14 + 1;
          uVar16 = (uint64_t)uVar15;
          *(int64_t *)(uVar17 + puVar12[0xd]) =
               puVar12[0xd] + ((int64_t)(int)uVar18 + (int64_t)iVar14 * 0xc) * 8;
          puVar3 = *(uint64_t **)(uVar17 + *(int64_t *)(param_3 + 0x1a));
          uVar13 = puVar3[1];
          puVar4 = *(uint64_t **)(uVar17 + puVar12[0xd]);
          *puVar4 = *puVar3;
          puVar4[1] = uVar13;
          uVar13 = puVar3[3];
          puVar4[2] = puVar3[2];
          puVar4[3] = uVar13;
          uVar13 = puVar3[5];
          puVar4[4] = puVar3[4];
          puVar4[5] = uVar13;
          uVar13 = puVar3[7];
          puVar4[6] = puVar3[6];
          puVar4[7] = uVar13;
          uVar6 = *(int32_t *)((int64_t)puVar3 + 0x44);
          uVar7 = *(int32_t *)(puVar3 + 9);
          uVar9 = *(int32_t *)((int64_t)puVar3 + 0x4c);
          *(int32_t *)(puVar4 + 8) = *(int32_t *)(puVar3 + 8);
          *(int32_t *)((int64_t)puVar4 + 0x44) = uVar6;
          *(int32_t *)(puVar4 + 9) = uVar7;
          *(int32_t *)((int64_t)puVar4 + 0x4c) = uVar9;
          uVar6 = *(int32_t *)((int64_t)puVar3 + 0x54);
          uVar7 = *(int32_t *)(puVar3 + 0xb);
          uVar9 = *(int32_t *)((int64_t)puVar3 + 0x5c);
          *(int32_t *)(puVar4 + 10) = *(int32_t *)(puVar3 + 10);
          *(int32_t *)((int64_t)puVar4 + 0x54) = uVar6;
          *(int32_t *)(puVar4 + 0xb) = uVar7;
          *(int32_t *)((int64_t)puVar4 + 0x5c) = uVar9;
          uVar18 = param_3[0x18];
          uVar17 = uVar17 + 8;
        } while ((int)uVar15 < (int)uVar18);
      }
      *plVar11 = (int64_t)puVar12;
      *(int8_t *)(plVar11 + 8) = 1;
    }
    if (*(code **)(*plVar11 + 0xc0) != (code *)0x0) {
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_38 = (uint64_t)*(uint *)(*(int64_t *)(param_1 + 0x398) + 0x116b8);
      lStack_40 = *(int64_t *)(param_1 + 0x398) + 0x11848;
      uVar13 = (**(code **)(*plVar11 + 0xc0))(&uStack_68);
      if ((int)uVar13 != 0) {
        return uVar13;
      }
    }
    if (*(int64_t *)(*plVar11 + 0xd0) != 0) {
      lVar5 = *(int64_t *)(param_1 + 0x398);
      bVar10 = false;
      if ((*(char *)(lVar5 + 8) != '\0') && (lVar5 != 0)) {
        func_0x000180743c20(lVar5,3);
        bVar10 = true;
      }
      *(int64_t *)plVar11[0xd] = *plVar2;
      *(int64_t *)(*plVar2 + 8) = plVar11[0xd];
      plVar11[0xd] = (int64_t)plVar2;
      *plVar2 = (int64_t)plVar2;
      plVar11[0xd] = *(int64_t *)(param_1 + 0x168);
      *plVar2 = param_1 + 0x160;
      *(int64_t **)(param_1 + 0x168) = plVar2;
      *(int64_t **)plVar11[0xd] = plVar2;
      plVar11[0xe] = (int64_t)plVar11;
      if ((bVar10) && (lVar5 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar5,3);
      }
    }
    plVar11[0xf] = param_5;
    *(int32_t *)((int64_t)plVar11 + 0x14) = *(int32_t *)(param_1 + 0x3a0);
    *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + 1;
    plVar11[10] = *(int64_t *)(param_1 + 0x150);
    *plVar1 = param_1 + 0x148;
    *(int64_t **)(param_1 + 0x150) = plVar1;
    *(int64_t **)plVar11[10] = plVar1;
    iVar14 = (int)plVar11[3];
    plVar11[0xb] = (int64_t)plVar11;
    if ((iVar14 != 0) && (iVar14 < 0x25)) {
      *(int64_t **)(param_1 + 0x3a8 + (int64_t)iVar14 * 8) = plVar11;
    }
    if (param_4 != (int32_t *)0x0) {
      *param_4 = *(int32_t *)((int64_t)plVar11 + 0x14);
    }
    uVar13 = 0;
  }
  return uVar13;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_180772560(int64_t param_1,int64_t *param_2,int32_t *param_3,int64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int32_t uVar3;
  int64_t *plVar4;
  
  if (param_2 == (int64_t *)0x0) {
    uVar3 = 0x1f;
  }
  else if ((int)*param_2 == 5) {
    plVar4 = (int64_t *)
             SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x110,&unknown_var_2864_ptr,0x3fd,0);
    if (plVar4 == (int64_t *)0x0) {
      uVar3 = 0x26;
    }
    else {
      plVar4[1] = (int64_t)plVar4;
      *plVar4 = (int64_t)plVar4;
      plVar4[2] = 0;
      lVar1 = param_2[1];
      plVar4[3] = *param_2;
      plVar4[4] = lVar1;
      lVar1 = param_2[3];
      plVar4[5] = param_2[2];
      plVar4[6] = lVar1;
      lVar1 = param_2[5];
      plVar4[7] = param_2[4];
      plVar4[8] = lVar1;
      lVar1 = param_2[7];
      plVar4[9] = param_2[6];
      plVar4[10] = lVar1;
      lVar1 = param_2[9];
      plVar4[0xb] = param_2[8];
      plVar4[0xc] = lVar1;
      lVar1 = param_2[0xb];
      plVar4[0xd] = param_2[10];
      plVar4[0xe] = lVar1;
      lVar1 = param_2[0xd];
      plVar4[0xf] = param_2[0xc];
      plVar4[0x10] = lVar1;
      lVar1 = param_2[0xf];
      plVar4[0x11] = param_2[0xe];
      plVar4[0x12] = lVar1;
      lVar1 = param_2[0x11];
      plVar4[0x13] = param_2[0x10];
      plVar4[0x14] = lVar1;
      lVar1 = param_2[0x13];
      plVar4[0x15] = param_2[0x12];
      plVar4[0x16] = lVar1;
      lVar1 = param_2[0x15];
      plVar4[0x17] = param_2[0x14];
      plVar4[0x18] = lVar1;
      lVar1 = param_2[0x17];
      plVar4[0x19] = param_2[0x16];
      plVar4[0x1a] = lVar1;
      lVar1 = param_2[0x19];
      plVar4[0x1b] = param_2[0x18];
      plVar4[0x1c] = lVar1;
      lVar1 = param_2[0x1b];
      plVar4[0x1d] = param_2[0x1a];
      plVar4[0x1e] = lVar1;
      lVar1 = param_2[0x1c];
      lVar2 = param_2[0x1d];
      plVar4[0x21] = param_4;
      plVar4[0x1f] = lVar1;
      plVar4[0x20] = lVar2;
      *(int32_t *)(plVar4 + 0x18) = *(int32_t *)(param_1 + 0x3a0);
      *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + 1;
      plVar4[1] = *(int64_t *)(param_1 + 0x290);
      *plVar4 = param_1 + 0x288;
      *(int64_t **)(param_1 + 0x290) = plVar4;
      *(int64_t **)plVar4[1] = plVar4;
      if (param_3 != (int32_t *)0x0) {
        *param_3 = (int)plVar4[0x18];
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x38;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807726d0(int64_t param_1,int8_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  plVar1 = (int64_t *)(param_1 + 0x180);
  do {
    plVar2 = (int64_t *)*plVar1;
    if ((plVar2 == plVar1) && (*(int64_t **)(param_1 + 0x188) == plVar1)) {
      plVar1 = (int64_t *)(param_1 + 0x148);
      do {
        if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x150) == plVar1)) {
          plVar1 = (int64_t *)(param_1 + 0x288);
          do {
            plVar2 = (int64_t *)*plVar1;
            if ((plVar2 == plVar1) && (*(int64_t **)(param_1 + 0x290) == plVar1)) {
                    // WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&unknown_var_2864_ptr,0x6d,1);
            }
            if (plVar2 == (int64_t *)0x0) {
              return 0x1c;
            }
            uVar4 = FUN_180772870(param_1,*(int32_t *)(plVar2 + 0x18),param_2);
          } while ((int)uVar4 == 0);
          return uVar4;
        }
        lVar3 = ((int64_t *)*plVar1)[2];
        if (lVar3 == 0) {
          return 0x1c;
        }
        uVar4 = FUN_180772870(param_1,*(int32_t *)(lVar3 + 0x14),param_2);
      } while ((int)uVar4 == 0);
      return uVar4;
    }
    if (plVar2 == (int64_t *)0x0) {
      return 0x1c;
    }
    uVar4 = FUN_180772870(param_1,*(int32_t *)(plVar2 + 0x12),param_2);
  } while ((int)uVar4 == 0);
  return uVar4;
}



uint64_t FUN_180772810(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = func_0x00018076b690(param_2);
  if (0xff < iVar1) {
    return 0x1f;
  }
  func_0x00018076b450(param_1,param_2,0x100);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180772870(uint64_t param_1,int param_2,int8_t param_3)

{
  int iVar1;
  int *piVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  piVar2 = (int *)func_0x000180771e50();
  if (piVar2 == (int *)0x0) {
    uVar3 = FUN_180772950(param_1,param_2,param_3);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  else if (param_2 == **(int **)(piVar2 + 2)) {
    lVar4 = (int64_t)(*piVar2 + -1);
    if (-1 < *piVar2 + -1) {
      do {
        iVar1 = *(int *)(*(int64_t *)(piVar2 + 2) + lVar4 * 4);
        if (iVar1 != 0) {
          uVar3 = FUN_180772950(param_1,iVar1,param_3);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          *(int32_t *)(*(int64_t *)(piVar2 + 2) + lVar4 * 4) = 0;
        }
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),piVar2,&unknown_var_2864_ptr,0x269,1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180772950(int64_t param_1,int param_2,char param_3)

{
  int iVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  
  for (plVar7 = *(int64_t **)(param_1 + 0x288); plVar7 != (int64_t *)(param_1 + 0x288);
      plVar7 = (int64_t *)*plVar7) {
    if ((int)plVar7[0x18] == param_2) {
      if (plVar7[0x17] != 0) {
        FUN_1807687d0();
      }
      uVar5 = 0x290;
      *(int64_t *)plVar7[1] = *plVar7;
      *(int64_t *)(*plVar7 + 8) = plVar7[1];
      plVar7[1] = (int64_t)plVar7;
      *plVar7 = (int64_t)plVar7;
      goto LAB_180772bcd;
    }
  }
  for (plVar7 = *(int64_t **)(param_1 + 0x180); plVar7 != (int64_t *)(param_1 + 0x180);
      plVar7 = (int64_t *)*plVar7) {
    if ((int)plVar7[0x12] == param_2) {
      if (plVar7[0x11] != 0) {
        FUN_1807687d0();
      }
      uVar5 = 0x2a1;
      *(int64_t *)plVar7[1] = *plVar7;
      *(int64_t *)(*plVar7 + 8) = plVar7[1];
      plVar7[1] = (int64_t)plVar7;
      *plVar7 = (int64_t)plVar7;
      *(int32_t *)(plVar7 + 3) = 0xffffffff;
      plVar7[2] = 0;
      goto LAB_180772bcd;
    }
  }
  plVar6 = (int64_t *)(param_1 + 0x148);
  plVar4 = (int64_t *)*plVar6;
  if (plVar4 == plVar6) {
    uVar5 = 0;
  }
  else {
    while (plVar7 = (int64_t *)plVar4[2], *(int *)((int64_t)plVar7 + 0x14) != param_2) {
      plVar4 = (int64_t *)*plVar4;
      if (plVar4 == plVar6) {
        return 0;
      }
    }
    if ((*(int *)((int64_t)plVar7 + 0x44) != 0) && (param_3 == '\0')) {
      return 8;
    }
    if ((*(code **)(*plVar7 + 200) == (code *)0x0) ||
       (uVar5 = (**(code **)(*plVar7 + 200))(), (int)uVar5 == 0)) {
      if (*(int64_t *)(*plVar7 + 0xd0) != 0) {
        bVar3 = false;
        lVar2 = *(int64_t *)(param_1 + 0x398);
        if ((*(char *)(lVar2 + 8) != '\0') && (lVar2 != 0)) {
          func_0x000180743c20(lVar2,3);
          bVar3 = true;
        }
        plVar7[0xe] = 0;
        plVar4 = plVar7 + 0xc;
        *(int64_t *)plVar7[0xd] = *plVar4;
        *(int64_t *)(*plVar4 + 8) = plVar7[0xd];
        plVar7[0xd] = (int64_t)plVar4;
        *plVar4 = (int64_t)plVar4;
        if ((bVar3) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_180743d60(lVar2,3);
        }
      }
      iVar1 = (int)plVar7[3];
      if ((iVar1 != 0) && (iVar1 < 0x25)) {
        *(uint64_t *)(param_1 + 0x3a8 + (int64_t)iVar1 * 8) = 0;
      }
      if (plVar7[5] != 0) {
        FUN_1807687d0();
      }
      plVar4 = plVar7 + 9;
      *(int64_t *)plVar7[10] = *plVar4;
      *(int64_t *)(*plVar4 + 8) = plVar7[10];
      plVar7[10] = (int64_t)plVar4;
      *plVar4 = (int64_t)plVar4;
      if ((char)plVar7[8] != '\0') {
                    // WARNING: Subroutine does not return
        SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar7,&unknown_var_2864_ptr,0x2d6,1);
      }
      uVar5 = 0x2d9;
LAB_180772bcd:
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar7,&unknown_var_2864_ptr,uVar5,1);
    }
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180772ae2(void)
void FUN_180772ae2(void)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  bool bVar4;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  
  bVar4 = false;
  lVar3 = *(int64_t *)(unaff_RSI + 0x398);
  if ((*(char *)(lVar3 + 8) != '\0') && (lVar3 != 0)) {
    func_0x000180743c20(lVar3,3);
    bVar4 = true;
  }
  unaff_RBX[0xe] = 0;
  plVar1 = unaff_RBX + 0xc;
  *(int64_t *)unaff_RBX[0xd] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = unaff_RBX[0xd];
  unaff_RBX[0xd] = plVar1;
  *plVar1 = (int64_t)plVar1;
  if ((bVar4) && (lVar3 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar3,3);
  }
  iVar2 = *(int *)(unaff_RBX + 3);
  if ((iVar2 != 0) && (iVar2 < 0x25)) {
    *(uint64_t *)(unaff_RSI + 0x3a8 + (int64_t)iVar2 * 8) = 0;
  }
  if (unaff_RBX[5] != 0) {
    FUN_1807687d0();
  }
  plVar1 = unaff_RBX + 9;
  *(int64_t *)unaff_RBX[10] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = unaff_RBX[10];
  unaff_RBX[10] = plVar1;
  *plVar1 = (int64_t)plVar1;
  if (*(char *)(unaff_RBX + 8) != '\0') {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&unknown_var_2864_ptr,0x2d6,1);
  }
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180772b52(void)
void FUN_180772b52(void)

{
  int64_t *plVar1;
  int iVar2;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  
  iVar2 = *(int *)(unaff_RBX + 3);
  if ((iVar2 != 0) && (iVar2 < 0x25)) {
    *(uint64_t *)(unaff_RSI + 0x3a8 + (int64_t)iVar2 * 8) = 0;
  }
  if (unaff_RBX[5] != 0) {
    FUN_1807687d0();
  }
  plVar1 = unaff_RBX + 9;
  *(int64_t *)unaff_RBX[10] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = unaff_RBX[10];
  unaff_RBX[10] = plVar1;
  *plVar1 = (int64_t)plVar1;
  if (*(char *)(unaff_RBX + 8) != '\0') {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&unknown_var_2864_ptr,0x2d6,1);
  }
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



uint64_t FUN_180772c50(int64_t param_1,char param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    iVar1 = *(int *)(param_1 + 0x34);
    if (param_2 != '\0') {
      if (iVar1 == 0) {
        FUN_180768b90(param_1 + 0xc);
        iVar1 = *(int *)(param_1 + 0x34);
      }
      *(char *)(param_1 + 0x2c) = param_2;
      *(int *)(param_1 + 0x34) = iVar1 + 1;
      return 0;
    }
    *(int *)(param_1 + 0x34) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      FUN_180768b90(param_1 + 0x10);
      if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 0x10)) {
        *(int *)(param_1 + 0x30) =
             *(int *)(param_1 + 0x30) + (*(uint *)(param_1 + 0x10) - *(uint *)(param_1 + 0xc));
      }
    }
    *(int8_t *)(param_1 + 0x2c) = 0;
  }
  return 0;
}



uint64_t FUN_180772c9f(void)

{
  int8_t unaff_SIL;
  int64_t unaff_RDI;
  
  FUN_180768b90();
  if (*(uint *)(unaff_RDI + 0xc) < *(uint *)(unaff_RDI + 0x10)) {
    *(int *)(unaff_RDI + 0x30) =
         *(int *)(unaff_RDI + 0x30) + (*(uint *)(unaff_RDI + 0x10) - *(uint *)(unaff_RDI + 0xc));
  }
  *(int8_t *)(unaff_RDI + 0x2c) = unaff_SIL;
  return 0;
}



uint64_t FUN_180772cb8(int param_1)

{
  int in_EAX;
  int8_t unaff_SIL;
  int64_t unaff_RDI;
  
  *(int *)(unaff_RDI + 0x30) = *(int *)(unaff_RDI + 0x30) + (in_EAX - param_1);
  *(int8_t *)(unaff_RDI + 0x2c) = unaff_SIL;
  return 0;
}



uint64_t FUN_180772cd0(int64_t param_1)

{
  FUN_180768b90();
  *(int8_t *)(param_1 + 0x38) = 1;
  return 0;
}





