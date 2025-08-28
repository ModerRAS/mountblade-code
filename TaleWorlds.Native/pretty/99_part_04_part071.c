#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part071.c - 13 个函数

// 函数: void FUN_1802c7e40(int64_t param_1,int64_t param_2,uint64_t param_3,float *param_4,
void FUN_1802c7e40(int64_t param_1,int64_t param_2,uint64_t param_3,float *param_4,
                  int64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar6 = (int64_t)(param_3 - 1) >> 1;
  bVar7 = param_2 == lVar6;
  lVar4 = param_2;
  lVar5 = param_2;
  if (param_2 < lVar6) {
    do {
      fVar8 = *(float *)(param_5 + 0x48) - *(float *)(param_1 + 0x28 + lVar4 * 0x20);
      fVar9 = *(float *)(param_5 + 0x44) - *(float *)(param_1 + 0x24 + lVar4 * 0x20);
      fVar10 = *(float *)(param_5 + 0x40) - *(float *)(param_1 + 0x20 + lVar4 * 0x20);
      fVar13 = *(float *)(param_5 + 0x40) - *(float *)(param_1 + 0x10 + lVar4 * 0x20);
      fVar12 = *(float *)(param_5 + 0x44) - *(float *)(param_1 + 0x14 + lVar4 * 0x20);
      fVar11 = *(float *)(param_5 + 0x48) - *(float *)(param_1 + 0x18 + lVar4 * 0x20);
      lVar5 = lVar4 * 2 + 1;
      if (SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11) <=
          SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8)) {
        lVar5 = lVar4 * 2 + 2;
      }
      puVar1 = (uint64_t *)(param_1 + lVar5 * 0x10);
      uVar3 = puVar1[1];
      puVar2 = (uint64_t *)(param_1 + lVar4 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      bVar7 = lVar5 == lVar6;
      lVar4 = lVar5;
    } while (lVar5 < lVar6);
  }
  if ((bVar7) && ((param_3 & 1) == 0)) {
    puVar2 = (uint64_t *)(param_1 + -0x10 + param_3 * 0x10);
    uVar3 = puVar2[1];
    puVar1 = (uint64_t *)(param_1 + lVar5 * 0x10);
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    lVar5 = param_3 - 1;
  }
  while ((param_2 < lVar5 &&
         (lVar4 = lVar5 + -1 >> 1, fVar13 = *(float *)(param_5 + 0x40) - *param_4,
         fVar9 = *(float *)(param_5 + 0x44) - *(float *)(param_1 + 4 + lVar4 * 0x10),
         fVar10 = *(float *)(param_5 + 0x40) - *(float *)(param_1 + lVar4 * 0x10),
         fVar8 = *(float *)(param_5 + 0x48) - *(float *)(param_1 + 8 + lVar4 * 0x10),
         fVar12 = *(float *)(param_5 + 0x44) - param_4[1],
         fVar11 = *(float *)(param_5 + 0x48) - param_4[2],
         SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8) <
         SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11)))) {
    puVar1 = (uint64_t *)(param_1 + lVar4 * 0x10);
    uVar3 = puVar1[1];
    puVar2 = (uint64_t *)(param_1 + lVar5 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    lVar5 = lVar4;
  }
  uVar3 = *(uint64_t *)(param_4 + 2);
  puVar1 = (uint64_t *)(param_1 + lVar5 * 0x10);
  *puVar1 = *(uint64_t *)param_4;
  puVar1[1] = uVar3;
  return;
}






// 函数: void FUN_1802c8010(float *param_1,float *param_2,float *param_3,int64_t param_4)
void FUN_1802c8010(float *param_1,float *param_2,float *param_3,int64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = *(float *)(param_4 + 0x40) - *param_1;
  fVar4 = *(float *)(param_4 + 0x44);
  fVar5 = *(float *)(param_4 + 0x48);
  fVar6 = param_2[1];
  fVar8 = param_2[2];
  fVar7 = *param_2;
  fVar9 = *(float *)(param_4 + 0x40) - fVar7;
  if (SQRT(fVar9 * fVar9 + (fVar4 - fVar6) * (fVar4 - fVar6) + (fVar5 - fVar8) * (fVar5 - fVar8)) <
      SQRT(fVar10 * fVar10 + (fVar4 - param_1[1]) * (fVar4 - param_1[1]) +
           (fVar5 - param_1[2]) * (fVar5 - param_1[2]))) {
    uVar1 = *(uint64_t *)(param_1 + 2);
    uVar2 = *(uint64_t *)param_2;
    uVar3 = *(uint64_t *)(param_2 + 2);
    *(uint64_t *)param_2 = *(uint64_t *)param_1;
    *(uint64_t *)(param_2 + 2) = uVar1;
    *(uint64_t *)param_1 = uVar2;
    *(uint64_t *)(param_1 + 2) = uVar3;
    fVar6 = param_2[1];
    fVar8 = param_2[2];
    fVar4 = *(float *)(param_4 + 0x44);
    fVar5 = *(float *)(param_4 + 0x48);
    fVar7 = *param_2;
  }
  fVar9 = *(float *)(param_4 + 0x40) - *param_3;
  fVar7 = *(float *)(param_4 + 0x40) - fVar7;
  if (SQRT(fVar9 * fVar9 + (fVar4 - param_3[1]) * (fVar4 - param_3[1]) +
           (fVar5 - param_3[2]) * (fVar5 - param_3[2])) <
      SQRT(fVar7 * fVar7 + (fVar4 - fVar6) * (fVar4 - fVar6) + (fVar5 - fVar8) * (fVar5 - fVar8))) {
    uVar1 = *(uint64_t *)(param_2 + 2);
    uVar2 = *(uint64_t *)param_3;
    uVar3 = *(uint64_t *)(param_3 + 2);
    *(uint64_t *)param_3 = *(uint64_t *)param_2;
    *(uint64_t *)(param_3 + 2) = uVar1;
    *(uint64_t *)param_2 = uVar2;
    *(uint64_t *)(param_2 + 2) = uVar3;
    fVar5 = *(float *)(param_4 + 0x44) - param_2[1];
    fVar6 = *(float *)(param_4 + 0x40) - *param_2;
    fVar9 = *(float *)(param_4 + 0x40) - *param_1;
    fVar7 = *(float *)(param_4 + 0x44) - param_1[1];
    fVar4 = *(float *)(param_4 + 0x48) - param_2[2];
    fVar8 = *(float *)(param_4 + 0x48) - param_1[2];
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) <
        SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8)) {
      uVar1 = *(uint64_t *)(param_1 + 2);
      *(uint64_t *)param_2 = *(uint64_t *)param_1;
      *(uint64_t *)(param_2 + 2) = uVar1;
      *(uint64_t *)param_1 = uVar2;
      *(uint64_t *)(param_1 + 2) = uVar3;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c8260(int64_t param_1,int64_t param_2,int32_t param_3)
void FUN_1802c8260(int64_t param_1,int64_t param_2,int32_t param_3)

{
  int64_t *plVar1;
  uint uVar2;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar3;
  
  lVar5 = *(int64_t *)(param_1 + 0x70);
  uVar3 = 0;
  uVar4 = uVar3;
  if (*(int64_t *)(param_1 + 0x78) - lVar5 >> 3 != 0) {
    do {
      if (*(int64_t *)(uVar4 + lVar5) != 0) {
        if (((-0.0001 < *(float *)(param_2 + 0x124d4)) && (*(float *)(param_2 + 0x124d4) < 0.0001))
           || ((*(byte *)(param_1 + 0x98) & 8) == 0)) {
          *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1c5c) = 0;
        }
        else {
          *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1c5c) = 0x3f800000;
        }
        plVar1 = *(int64_t **)(uVar4 + *(int64_t *)(param_1 + 0x70));
        (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
      }
      lVar5 = *(int64_t *)(param_1 + 0x70);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
      uVar4 = uVar4 + 8;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(param_1 + 0x78) - lVar5 >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c82a3(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_1802c82a3(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t unaff_RBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  uint64_t uVar1;
  uint64_t unaff_R14;
  
  uVar1 = unaff_R14 & 0xffffffff;
  do {
    if (*(uint64_t *)(uVar1 + param_3) != unaff_R14) {
      if (((-0.0001 < *(float *)(unaff_RSI + 0x124d4)) && (*(float *)(unaff_RSI + 0x124d4) < 0.0001)
          ) || ((*(byte *)(unaff_RBX + 0x98) & 8) == 0)) {
        *(int *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1c5c) = (int)unaff_R14;
      }
      else {
        *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1c5c) = 0x3f800000;
      }
      (**(code **)(**(int64_t **)(uVar1 + *(int64_t *)(unaff_RBX + 0x70)) + 0x40))();
    }
    param_3 = *(int64_t *)(unaff_RBX + 0x70);
    unaff_EBP = unaff_EBP + 1;
    uVar1 = uVar1 + 8;
  } while ((uint64_t)(int64_t)unaff_EBP <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x78) - param_3 >> 3));
  return;
}






// 函数: void FUN_1802c835a(void)
void FUN_1802c835a(void)

{
  return;
}






// 函数: void FUN_1802c8380(int64_t param_1,uint64_t param_2)
void FUN_1802c8380(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  lVar5 = *(int64_t *)(param_1 + 0x58);
  if (lVar5 - (int64_t)*(int64_t **)(param_1 + 0x50) >> 3 != 0) {
    plVar1 = (int64_t *)**(int64_t **)(param_1 + 0x50);
    if ((int)plVar1[4] == 0x19) {
      iVar2 = strcmp(plVar1[3],&unknown_var_7136_ptr);
      if ((iVar2 == 0) && (plVar1[0x27] == 0)) goto LAB_1802c83fe;
    }
    (**(code **)(*plVar1 + 0x48))(plVar1,0,param_2,0,*(int32_t *)(param_1 + 0x98));
    lVar5 = *(int64_t *)(param_1 + 0x58);
  }
LAB_1802c83fe:
  lVar3 = *(int64_t *)(param_1 + 0x50);
  iVar2 = 1;
  if (1 < (uint64_t)(lVar5 - lVar3 >> 3)) {
    lVar4 = 8;
    do {
      plVar1 = *(int64_t **)(lVar4 + *(int64_t *)(param_1 + 0x50));
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*(uint64_t *)(lVar4 + -8 + *(int64_t *)(param_1 + 0x50)),param_2,0,
                 *(int32_t *)(param_1 + 0x98));
      lVar5 = *(int64_t *)(param_1 + 0x58);
      lVar4 = lVar4 + 8;
      lVar3 = *(int64_t *)(param_1 + 0x50);
      iVar2 = iVar2 + 1;
    } while ((uint64_t)(int64_t)iVar2 < (uint64_t)(lVar5 - lVar3 >> 3));
  }
  iVar2 = 0;
  if (lVar5 - lVar3 >> 3 != 0) {
    lVar5 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar5 + *(int64_t *)(param_1 + 0x50)) + 0x18))();
      lVar5 = lVar5 + 8;
      iVar2 = iVar2 + 1;
    } while ((uint64_t)(int64_t)iVar2 <
             (uint64_t)(*(int64_t *)(param_1 + 0x58) - *(int64_t *)(param_1 + 0x50) >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c84d0(int64_t param_1,int64_t param_2)
void FUN_1802c84d0(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t **pplVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint uVar9;
  int8_t auStack_158 [32];
  uint uStack_138;
  int iStack_134;
  int64_t *plStack_130;
  int64_t *plStack_128;
  int64_t *plStack_120;
  int64_t *plStack_118;
  int64_t *plStack_110;
  int64_t *plStack_108;
  int64_t *plStack_100;
  int64_t *plStack_f8;
  int64_t *plStack_f0;
  int64_t *plStack_e8;
  int64_t *plStack_e0;
  int64_t *plStack_d8;
  int64_t *plStack_d0;
  int64_t *plStack_c8;
  int64_t *plStack_c0;
  int64_t *plStack_b8;
  int64_t *plStack_b0;
  int64_t *plStack_a8;
  int64_t *plStack_a0;
  int64_t *plStack_98;
  int64_t *plStack_90;
  int64_t *plStack_88;
  int64_t *plStack_80;
  uint64_t uStack_78;
  void *puStack_70;
  int8_t *puStack_68;
  int32_t uStack_60;
  int8_t auStack_58 [16];
  uint64_t uStack_48;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  uVar9 = 0;
  uStack_138 = 0;
  iStack_134 = 0;
  lVar7 = *(int64_t *)(param_1 + 0x50);
  if (*(int64_t *)(param_1 + 0x58) - lVar7 >> 3 != 0) {
    lVar8 = 0;
    do {
      plVar1 = *(int64_t **)(lVar7 + lVar8 * 8);
      lVar7 = 0;
      do {
        switch(*(int32_t *)
                (*(int64_t *)(*(int64_t *)(param_1 + 0x50) + lVar8 * 8) + 0x74 + lVar7 * 4)) {
        case 0xffffffe8:
        case 0xfffffffe:
          goto LAB_1802c8b5c;
        case 0xffffffe9:
          plVar6 = *(int64_t **)(param_2 + 0x96f0);
          if (plVar6 != (int64_t *)0x0) {
            plStack_f0 = plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          plVar3 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar6;
          plStack_f0 = plVar3;
          break;
        case 0xffffffea:
          plVar6 = *(int64_t **)(param_2 + 0x9968);
          if (plVar6 == (int64_t *)0x0) {
            plVar6 = (int64_t *)FUN_180245280(param_2);
          }
          if (plVar6 != (int64_t *)0x0) {
            plStack_a0 = plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          plVar3 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar6;
          plStack_a0 = plVar3;
          break;
        case 0xffffffeb:
          plVar6 = *(int64_t **)(param_2 + 0x96f8);
          if (plVar6 != (int64_t *)0x0) {
            plStack_88 = plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          plVar3 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar6;
          plStack_88 = plVar3;
          break;
        case 0xffffffec:
          plVar6 = *(int64_t **)(param_2 + 0x96e0);
          if (plVar6 != (int64_t *)0x0) {
            plStack_e0 = plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          plVar3 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar6;
          plStack_e0 = plVar3;
          break;
        case 0xffffffed:
          plVar6 = *(int64_t **)(param_2 + 0x124b0);
          if (plVar6 != (int64_t *)0x0) {
            plStack_d0 = plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          plVar3 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar6;
          plStack_d0 = plVar3;
          break;
        case 0xffffffee:
          plVar6 = (int64_t *)FUN_180245280(param_2);
          if (plVar6 != (int64_t *)0x0) {
            plStack_98 = plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          plVar3 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar6;
          plStack_98 = plVar3;
          break;
        case 0xffffffef:
          lVar5 = func_0x00018024c020(param_2);
          if ((lVar5 == 0) ||
             (lVar5 = func_0x00018024c020(), uVar9 = uStack_138, *(char *)(lVar5 + 900) == '\0')) {
            plVar6 = (int64_t *)FUN_1800bd890();
          }
          else {
            plVar6 = (int64_t *)func_0x00018024c020(param_2);
            uVar9 = uStack_138;
          }
          if (plVar6 != (int64_t *)0x0) {
            plStack_b0 = plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          plVar3 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar6;
          plStack_b0 = plVar3;
          break;
        case 0xfffffff0:
          plVar6 = (int64_t *)func_0x00018024bfd0(param_2);
          if (plVar6 != (int64_t *)0x0) {
            plStack_c0 = plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          plVar3 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar6;
          plStack_c0 = plVar3;
          break;
        case 0xfffffff1:
          plVar6 = (int64_t *)func_0x00018024bfb0(param_2);
          if (plVar6 != (int64_t *)0x0) {
            plStack_c8 = plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          plVar3 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar6;
          plStack_c8 = plVar3;
          break;
        case 0xfffffff2:
          uVar2 = *(uint64_t *)(param_2 + 0x99c0);
          puStack_70 = &system_config_ptr;
          auStack_58[0] = 0;
          uStack_60 = 0xb;
          puStack_68 = auStack_58;
          strcpy_s(auStack_58,0x10,&unknown_var_4832_ptr);
          lVar5 = FUN_1802c90a0(uVar2,&puStack_70);
          puStack_70 = &system_state_ptr;
          plVar6 = *(int64_t **)(lVar5 + 0x428);
          if (plVar6 != (int64_t *)0x0) {
            plStack_108 = plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          plVar3 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar6;
          plStack_108 = plVar3;
          break;
        case 0xfffffff3:
          plVar6 = *(int64_t **)(param_2 + 0x9698);
          if (plVar6 != (int64_t *)0x0) {
            plStack_110 = plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          plVar3 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar6;
          plStack_110 = plVar3;
          break;
        case 0xfffffff4:
          plVar6 = *(int64_t **)(param_2 + 0x9688);
          if (plVar6 != (int64_t *)0x0) {
            plStack_100 = plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          plVar3 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar6;
          plStack_100 = plVar3;
          break;
        default:
          plVar3 = *(int64_t **)
                    (*(int64_t *)
                      (*(int64_t *)(param_1 + 0x50) +
                      (int64_t)*(int *)((int64_t)plVar1 + lVar7 * 4 + 0x74) * 8) + 0x428 +
                    (int64_t)*(int *)((int64_t)plVar1 + lVar7 * 4 + 0xb4) * 8);
          if (plVar3 != (int64_t *)0x0) {
            plStack_80 = plVar3;
            (**(code **)(*plVar3 + 0x28))(plVar3);
          }
          plStack_80 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar3;
          plVar3 = plStack_80;
          break;
        case 0xfffffff6:
          plVar6 = *(int64_t **)(param_2 + 0x96d0);
          if (plVar6 != (int64_t *)0x0) {
            plStack_90 = plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          plVar3 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar6;
          plStack_90 = plVar3;
          break;
        case 0xfffffff7:
          plVar6 = (int64_t *)FUN_180245280(param_2);
          if (plVar6 != (int64_t *)0x0) {
            plStack_a8 = plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          plVar3 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar6;
          plStack_a8 = plVar3;
          break;
        case 0xfffffff8:
          lVar5 = func_0x00018024bff0(param_2);
          if ((lVar5 == 0) ||
             (lVar5 = func_0x00018024bff0(), uVar9 = uStack_138, *(char *)(lVar5 + 900) == '\0')) {
            plVar6 = (int64_t *)FUN_1800bd890();
          }
          else {
            plVar6 = (int64_t *)func_0x00018024bff0(param_2);
            uVar9 = uStack_138;
          }
          if (plVar6 != (int64_t *)0x0) {
            plStack_b8 = plVar6;
            (**(code **)(*plVar6 + 0x28))(plVar6);
          }
          plVar3 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar6;
          plStack_b8 = plVar3;
          break;
        case 0xfffffff9:
          if ((*(int64_t *)(param_2 + 0x12498) == 0) ||
             (uVar9 = uStack_138, *(char *)(*(int64_t *)(param_2 + 0x12498) + 900) == '\0')) {
            plVar3 = (int64_t *)FUN_1800bdc80();
            plStack_130 = plVar3;
            if (plVar3 != (int64_t *)0x0) {
              (**(code **)(*plVar3 + 0x28))(plVar3);
            }
            pplVar4 = &plStack_130;
            uVar9 = uVar9 | 2;
          }
          else {
            plVar3 = *(int64_t **)(param_2 + 0x12498);
            plStack_128 = plVar3;
            if (plVar3 != (int64_t *)0x0) {
              (**(code **)(*plVar3 + 0x28))(plVar3);
            }
            pplVar4 = &plStack_128;
            uVar9 = uStack_138 | 1;
          }
          *pplVar4 = (int64_t *)0x0;
          plStack_d8 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar3;
          uStack_138 = uVar9;
          if (plStack_d8 != (int64_t *)0x0) {
            (**(code **)(*plStack_d8 + 0x38))();
          }
          if (((uVar9 & 2) != 0) &&
             (uVar9 = uVar9 & 0xfffffffd, uStack_138 = uVar9, plStack_130 != (int64_t *)0x0)) {
            (**(code **)(*plStack_130 + 0x38))();
          }
          if ((uVar9 & 1) != 0) {
            uVar9 = uVar9 & 0xfffffffe;
            plVar3 = plStack_128;
            uStack_138 = uVar9;
            break;
          }
          goto LAB_1802c8b5c;
        case 0xfffffffb:
          plVar3 = *(int64_t **)(param_2 + 0x96d8);
          if (plVar3 != (int64_t *)0x0) {
            plStack_e8 = plVar3;
            (**(code **)(*plVar3 + 0x28))(plVar3);
          }
          plStack_e8 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar3;
          plVar3 = plStack_e8;
          break;
        case 0xfffffffc:
          plVar3 = *(int64_t **)(param_2 + 0x96e8);
          if (plVar3 != (int64_t *)0x0) {
            plStack_f8 = plVar3;
            (**(code **)(*plVar3 + 0x28))(plVar3);
          }
          plStack_f8 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar3;
          plVar3 = plStack_f8;
          break;
        case 0xfffffffd:
          plVar3 = *(int64_t **)(param_2 + 0x96a0);
          if (plVar3 != (int64_t *)0x0) {
            plStack_118 = plVar3;
            (**(code **)(*plVar3 + 0x28))(plVar3);
          }
          plStack_118 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = (int64_t)plVar3;
          plVar3 = plStack_118;
          break;
        case 0xffffffff:
          plStack_120 = (int64_t *)plVar1[lVar7 + 0x27];
          plVar1[lVar7 + 0x27] = 0;
          plVar3 = plStack_120;
        }
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
LAB_1802c8b5c:
        lVar7 = lVar7 + 1;
      } while (lVar7 < 0x10);
      if ((*(char *)((int64_t)plVar1 + 0x4d) != '\0') || ((int)plVar1[0x37] != -1)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
      }
      iStack_134 = iStack_134 + 1;
      lVar8 = lVar8 + 1;
      lVar7 = *(int64_t *)(param_1 + 0x50);
    } while ((uint64_t)(int64_t)iStack_134 <
             (uint64_t)(*(int64_t *)(param_1 + 0x58) - lVar7 >> 3));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802c8c60(int64_t param_1)
void FUN_1802c8c60(int64_t param_1)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  void **ppuVar4;
  int8_t auStack_138 [32];
  void **ppuStack_118;
  void ***pppuStack_110;
  uint64_t uStack_108;
  void **ppuStack_100;
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [128];
  int32_t uStack_60;
  uint64_t uStack_18;
  
  uStack_108 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  uVar1 = func_0x0001801f2a40();
  uVar1 = uVar1 & *(uint *)(param_1 + 0x94);
  uVar2 = uVar1 & 0xfffbf83f;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  if (*(uint *)(param_1 + 0x98) != uVar2) {
    ppuStack_118 = &puStack_f8;
    puStack_f8 = &unknown_var_3432_ptr;
    puStack_f0 = auStack_e0;
    uStack_e8 = 0;
    auStack_e0[0] = 0;
    uStack_60 = 0x28;
    uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
    ppuVar4 = (void **)FUN_18005ce30(uVar3,&puStack_f8);
    ppuStack_100 = ppuVar4;
    if (ppuVar4 != (void **)0x0) {
      (**(code **)(*ppuVar4 + 0x28))(ppuVar4);
    }
    uVar3 = system_context_ptr;
    pppuStack_110 = &ppuStack_118;
    ppuStack_118 = ppuVar4;
    if (ppuVar4 != (void **)0x0) {
      (**(code **)(*ppuVar4 + 0x28))(ppuVar4);
    }
    FUN_18005e370(uVar3,&ppuStack_118);
    if (ppuVar4 != (void **)0x0) {
      (**(code **)(*ppuVar4 + 0x38))(ppuVar4);
    }
    pppuStack_110 = (void ***)&puStack_f8;
    puStack_f8 = &system_state_ptr;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_138);
}



int64_t * FUN_1802c8dc0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int iVar6;
  int32_t uVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  uVar7 = 0;
  iVar6 = 0;
  lVar1 = *(int64_t *)(param_1 + 0x50);
  uVar5 = *(int64_t *)(param_1 + 0x58) - lVar1 >> 3;
  if (uVar5 != 0) {
    lVar4 = 0;
    do {
      if ((*(int *)(*(int64_t *)(lVar4 + lVar1) + 0x20) == 9) &&
         (iVar3 = strcmp(*(uint64_t *)(*(int64_t *)(lVar4 + lVar1) + 0x18),&unknown_var_8600_ptr,param_3
                         ,param_4,uVar7,uVar8), iVar3 == 0)) {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + (int64_t)iVar6 * 8) + 0x428);
        *param_2 = (int64_t)plVar2;
        if (plVar2 == (int64_t *)0x0) {
          return param_2;
        }
        (**(code **)(*plVar2 + 0x28))();
        return param_2;
      }
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 8;
    } while ((uint64_t)(int64_t)iVar6 < uVar5);
  }
  *param_2 = 0;
  return param_2;
}



int64_t * FUN_1802c8e90(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int iVar6;
  int32_t uVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  uVar7 = 0;
  iVar6 = 0;
  lVar1 = *(int64_t *)(param_1 + 0x50);
  uVar5 = *(int64_t *)(param_1 + 0x58) - lVar1 >> 3;
  if (uVar5 != 0) {
    lVar4 = 0;
    do {
      if ((*(int *)(*(int64_t *)(lVar4 + lVar1) + 0x20) == 9) &&
         (iVar3 = strcmp(*(uint64_t *)(*(int64_t *)(lVar4 + lVar1) + 0x18),&unknown_var_8600_ptr,param_3
                         ,param_4,uVar7,uVar8), iVar3 == 0)) {
        lVar1 = *(int64_t *)(lVar1 + (int64_t)iVar6 * 8);
        plVar2 = *(int64_t **)(lVar1 + 0x450 + (int64_t)(1 - *(int *)(lVar1 + 0x460)) * 8);
        *param_2 = (int64_t)plVar2;
        if (plVar2 == (int64_t *)0x0) {
          return param_2;
        }
        (**(code **)(*plVar2 + 0x28))();
        return param_2;
      }
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 8;
    } while ((uint64_t)(int64_t)iVar6 < uVar5);
  }
  *param_2 = 0;
  return param_2;
}






// 函数: void FUN_1802c8f70(int64_t param_1)
void FUN_1802c8f70(int64_t param_1)

{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(int64_t *)(param_1 + 0x58) - *(int64_t *)(param_1 + 0x50) >> 3 != 0) {
    do {
      (**(code **)(**(int64_t **)(uVar1 + *(int64_t *)(param_1 + 0x50)) + 0x18))();
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(param_1 + 0x58) - *(int64_t *)(param_1 + 0x50) >> 3));
  }
  return;
}






// 函数: void FUN_1802c8f90(void)
void FUN_1802c8f90(void)

{
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  
  uVar1 = (uint64_t)unaff_EDI;
  do {
    (**(code **)(**(int64_t **)(uVar1 + *(int64_t *)(unaff_RBX + 0x50)) + 0x18))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x58) - *(int64_t *)(unaff_RBX + 0x50) >> 3));
  return;
}






// 函数: void FUN_1802c8fcd(void)
void FUN_1802c8fcd(void)

{
  return;
}






// 函数: void FUN_1802c8fe0(int64_t param_1,int64_t param_2)
void FUN_1802c8fe0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  iVar1 = *(int *)(param_2 + 0x3590);
  iVar2 = *(int *)(param_2 + 0x3594);
  uVar6 = 0;
  (**(code **)(**(int64_t **)(param_2 + 0x3580) + 0x78))();
  if ((*(int *)(param_1 + 0x38) != iVar1) || (*(int *)(param_1 + 0x3c) != iVar2)) {
    lVar4 = *(int64_t *)(param_1 + 0x70);
    uVar7 = uVar6;
    if (*(int64_t *)(param_1 + 0x78) - lVar4 >> 3 != 0) {
      do {
        plVar3 = *(int64_t **)(uVar7 + lVar4);
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
        }
        lVar4 = *(int64_t *)(param_1 + 0x70);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (uint64_t)uVar5;
        uVar7 = uVar7 + 8;
      } while ((uint64_t)(int64_t)(int)uVar5 <
               (uint64_t)(*(int64_t *)(param_1 + 0x78) - lVar4 >> 3));
    }
    *(int32_t *)(param_1 + 0x40) = 0x40000000;
    *(int *)(param_1 + 0x38) = iVar1;
    *(int *)(param_1 + 0x3c) = iVar2;
    FUN_18005cfc0();
  }
  return;
}






// 函数: void FUN_1802c9036(uint64_t param_1,int64_t param_2)
void FUN_1802c9036(uint64_t param_1,int64_t param_2)

{
  int64_t unaff_RBX;
  uint uVar1;
  uint64_t unaff_RSI;
  uint64_t uVar2;
  int32_t unaff_R14D;
  int32_t unaff_R15D;
  
  uVar2 = unaff_RSI;
  do {
    if (*(int64_t **)(uVar2 + param_2) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(uVar2 + param_2) + 0x38))();
    }
    param_2 = *(int64_t *)(unaff_RBX + 0x70);
    uVar1 = (int)unaff_RSI + 1;
    unaff_RSI = (uint64_t)uVar1;
    uVar2 = uVar2 + 8;
  } while ((uint64_t)(int64_t)(int)uVar1 <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x78) - param_2 >> 3));
  *(int32_t *)(unaff_RBX + 0x40) = 0x40000000;
  *(int32_t *)(unaff_RBX + 0x38) = unaff_R15D;
  *(int32_t *)(unaff_RBX + 0x3c) = unaff_R14D;
  FUN_18005cfc0();
  return;
}






