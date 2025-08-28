/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"

// 99_part_11_part009.c - 10 个函数

// 函数: void FUN_1806dec20(uint64_t *param_1)
void FUN_1806dec20(uint64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  *param_1 = &rendering_buffer_2456_ptr;
  param_1[3] = &rendering_buffer_2904_ptr;
  if ((*(byte *)((int64_t)param_1 + 10) & 1) != 0) {
    lVar1 = param_1[0xd];
    if (lVar1 != 0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    }
    param_1[0xd] = 0;
  }
  param_1[3] = &ui_system_data_1416_ptr;
  *param_1 = &rendering_buffer_2408_ptr;
  return;
}






// 函数: void FUN_1806dec44(int64_t param_1)
void FUN_1806dec44(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t *unaff_RBX;
  
  lVar1 = *(int64_t *)(param_1 + 0x68);
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  unaff_RBX[0xd] = 0;
  unaff_RBX[3] = &ui_system_data_1416_ptr;
  *unaff_RBX = &rendering_buffer_2408_ptr;
  return;
}






// 函数: void FUN_1806dec72(void)
void FUN_1806dec72(void)

{
  uint64_t *unaff_RBX;
  
  unaff_RBX[3] = &ui_system_data_1416_ptr;
  *unaff_RBX = &rendering_buffer_2408_ptr;
  return;
}



int64_t FUN_1806decb0(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  
  FUN_1806dec20();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        return param_1;
      }
    }
    else {
      _guard_check_icall(param_1,0x70);
    }
  }
  return param_1;
}



int64_t FUN_1806ded20(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  
  FUN_1806dec20();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        return param_1;
      }
    }
    else {
      _guard_check_icall(param_1,0x78);
    }
  }
  return param_1;
}



uint64_t * FUN_1806ded90(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &rendering_buffer_2408_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10);
  }
  return param_1;
}






// 函数: void FUN_1806dee40(uint64_t param_1,uint64_t param_2,uint64_t param_3,float *param_4,
void FUN_1806dee40(uint64_t param_1,uint64_t param_2,uint64_t param_3,float *param_4,
                  float *param_5,int32_t *param_6,char param_7)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  int8_t auStack_88 [128];
  
  FUN_1806df310(param_4,param_5,param_1,param_2,param_3);
  if (param_7 != '\0') {
    if (param_5[1] * param_4[1] + *param_5 * *param_4 + param_5[2] * param_4[2] +
        param_5[3] * param_4[3] < 0.0) {
      *param_5 = -*param_5;
      param_5[1] = -param_5[1];
      param_5[2] = -param_5[2];
      param_5[3] = -param_5[3];
    }
  }
  fStack_8c = param_4[3];
  fStack_90 = -param_4[2];
  fStack_98 = -*param_4;
  fStack_94 = -param_4[1];
  fVar10 = (param_5[4] - param_4[4]) + (param_5[4] - param_4[4]);
  fVar9 = (param_5[5] - param_4[5]) + (param_5[5] - param_4[5]);
  fVar13 = (param_5[6] - param_4[6]) + (param_5[6] - param_4[6]);
  fVar8 = fStack_8c * fStack_8c - 0.5;
  fVar7 = fStack_94 * fVar9 + fStack_98 * fVar10 + fStack_90 * fVar13;
  fVar5 = fVar7 * fStack_98;
  fVar12 = (fStack_94 * fVar13 - fStack_90 * fVar9) * fStack_8c;
  fVar6 = fVar7 * fStack_94;
  fVar7 = fVar7 * fStack_90;
  fVar11 = (fStack_90 * fVar10 - fStack_98 * fVar13) * fStack_8c;
  fVar14 = (fStack_98 * fVar9 - fStack_94 * fVar10) * fStack_8c;
  puVar4 = (int32_t *)SystemCore_Initializer(&fStack_98,auStack_88,param_5);
  uVar1 = puVar4[2];
  uVar2 = puVar4[3];
  uVar3 = *puVar4;
  param_6[1] = puVar4[1];
  param_6[2] = uVar1;
  param_6[3] = uVar2;
  *param_6 = uVar3;
  param_6[4] = fVar12 + fVar8 * fVar10 + fVar5;
  param_6[5] = fVar11 + fVar8 * fVar9 + fVar6;
  param_6[6] = fVar14 + fVar8 * fVar13 + fVar7;
  return;
}






// 函数: void FUN_1806df0b0(float *param_1,float *param_2,float *param_3)
void FUN_1806df0b0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar1 = param_3[3];
  fVar2 = param_2[3];
  fVar5 = param_2[1];
  fVar6 = *param_2;
  fVar15 = param_3[1];
  fVar3 = param_3[2];
  fVar7 = *param_3;
  fVar4 = param_2[2];
  fVar12 = fVar7 * fVar2 + fVar6 * fVar1;
  fVar14 = fVar15 * fVar2 + fVar5 * fVar1;
  fVar9 = fVar3 * fVar2 + fVar4 * fVar1;
  fVar11 = fVar15 * fVar5 + fVar7 * fVar6 + fVar3 * fVar4;
  fVar8 = fVar7 * fVar5 + fVar15 * fVar6;
  fVar10 = fVar1 * fVar2 - fVar11;
  fVar13 = fVar7 * fVar4 + fVar3 * fVar6;
  fVar7 = ((fVar6 + fVar6) * fVar7 + fVar10) * 0.5;
  param_1[1] = (fVar8 + fVar9) * 0.5;
  *param_1 = fVar7;
  param_1[2] = (fVar13 - fVar14) * 0.5;
  fVar6 = fVar5 * fVar3 + fVar15 * fVar4;
  fVar5 = ((fVar5 + fVar5) * fVar15 + fVar10) * 0.5;
  param_1[3] = (fVar8 - fVar9) * 0.5;
  param_1[4] = fVar5;
  param_1[5] = (fVar12 + fVar6) * 0.5;
  fVar15 = ((fVar4 + fVar4) * fVar3 + fVar10) * 0.5;
  param_1[6] = (fVar14 + fVar13) * 0.5;
  param_1[7] = (fVar6 - fVar12) * 0.5;
  param_1[8] = fVar15;
  if (fVar11 + fVar1 * fVar2 == 0.0) {
    *param_1 = fVar7 + 1.1920929e-07;
    param_1[4] = fVar5 + 1.1920929e-07;
    param_1[8] = fVar15 + 1.1920929e-07;
  }
  return;
}






// 函数: void FUN_1806df310(int32_t *param_1,uint64_t *param_2,int64_t param_3,float *param_4,
void FUN_1806df310(int32_t *param_1,uint64_t *param_2,int64_t param_3,float *param_4,
                  float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  int32_t *puVar12;
  uint64_t *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int8_t auStack_88 [128];
  
  fVar1 = param_4[3];
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar15 = *(float *)(param_3 + 0x24) + *(float *)(param_3 + 0x24);
  fVar17 = *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x28);
  fVar4 = *param_4;
  fVar16 = fVar1 * fVar1 - 0.5;
  fVar18 = *(float *)(param_3 + 0x20) + *(float *)(param_3 + 0x20);
  fVar14 = fVar4 * fVar18 + fVar2 * fVar15 + fVar3 * fVar17;
  fVar5 = param_4[4];
  fVar6 = param_4[6];
  fVar7 = param_4[5];
  puVar12 = (int32_t *)SystemCore_Initializer(param_4,auStack_88);
  uVar8 = puVar12[2];
  uVar9 = puVar12[3];
  uVar10 = *puVar12;
  param_1[1] = puVar12[1];
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  *param_1 = uVar10;
  param_1[4] = (fVar2 * fVar17 - fVar3 * fVar15) * fVar1 + fVar16 * fVar18 + fVar4 * fVar14 + fVar5;
  param_1[5] = (fVar3 * fVar18 - fVar4 * fVar17) * fVar1 + fVar16 * fVar15 + fVar2 * fVar14 + fVar7;
  param_1[6] = (fVar4 * fVar15 - fVar2 * fVar18) * fVar1 + fVar16 * fVar17 + fVar3 * fVar14 + fVar6;
  fVar18 = *(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x3c);
  fVar15 = *(float *)(param_3 + 0x40) + *(float *)(param_3 + 0x40);
  fVar1 = param_5[3];
  fVar17 = *(float *)(param_3 + 0x44) + *(float *)(param_3 + 0x44);
  fVar2 = param_5[1];
  fVar3 = *param_5;
  fVar4 = param_5[2];
  fVar16 = fVar1 * fVar1 - 0.5;
  fVar14 = fVar3 * fVar18 + fVar2 * fVar15 + fVar4 * fVar17;
  fVar5 = param_5[4];
  fVar6 = param_5[6];
  fVar7 = param_5[5];
  puVar13 = (uint64_t *)SystemCore_Initializer(param_5,auStack_88);
  uVar11 = puVar13[1];
  *param_2 = *puVar13;
  param_2[1] = uVar11;
  *(float *)(param_2 + 2) =
       (fVar2 * fVar17 - fVar4 * fVar15) * fVar1 + fVar16 * fVar18 + fVar3 * fVar14 + fVar5;
  *(float *)((int64_t)param_2 + 0x14) =
       (fVar4 * fVar18 - fVar3 * fVar17) * fVar1 + fVar16 * fVar15 + fVar2 * fVar14 + fVar7;
  *(float *)(param_2 + 3) =
       (fVar3 * fVar15 - fVar2 * fVar18) * fVar1 + fVar16 * fVar17 + fVar4 * fVar14 + fVar6;
  return;
}






// 函数: void FUN_1806df600(void)
void FUN_1806df600(void)

{
  float in_stack_00000028;
  float in_stack_00000030;
  
                    // WARNING: Subroutine does not return
  AdvancedSystemController(in_stack_00000028 * 1.0 + in_stack_00000030 * 0.0);
}






// 函数: void FUN_1806df8b0(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4,
void FUN_1806df8b0(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4,
                  char param_5,char param_6)

{
  bool bVar1;
  bool bVar2;
  int32_t uVar3;
  float fVar4;
  float fVar5;
  
  if (param_5 == '\0') {
    bVar2 = false;
  }
  else {
    fVar4 = (float)atan2f(*(int32_t *)(param_4 + 4),*(float *)(param_4 + 0xc) + 1.0);
    fVar5 = *(float *)(param_2 + 0x11c);
    if ((0.0 < *(float *)(param_2 + 0x118)) || (0.0 < *(float *)(param_2 + 0x114))) {
      fVar5 = 0.0;
    }
    bVar2 = *(float *)(param_2 + 0x124) - fVar5 < fVar4 * 4.0 ||
            fVar4 * 4.0 < fVar5 + *(float *)(param_2 + 0x120);
  }
  if (param_6 == '\0') {
    bVar1 = false;
  }
  else {
    fVar4 = (float)atan2f(*(int32_t *)(param_4 + 8),*(float *)(param_4 + 0xc) + 1.0);
    fVar5 = *(float *)(param_2 + 0x11c);
    if ((0.0 < *(float *)(param_2 + 0x118)) || (0.0 < *(float *)(param_2 + 0x114))) {
      fVar5 = 0.0;
    }
    bVar1 = *(float *)(param_2 + 300) - fVar5 < fVar4 * 4.0 ||
            fVar4 * 4.0 < fVar5 + *(float *)(param_2 + 0x128);
  }
  if ((bVar2) || (uVar3 = 0xff808080, bVar1)) {
    uVar3 = 0xffff0000;
  }
  FUN_1806df600(param_1,param_3,*(int32_t *)(param_2 + 0x120),*(int32_t *)(param_2 + 0x120),
                *(int32_t *)(param_2 + 0x128),*(int32_t *)(param_2 + 300),uVar3);
  FUN_1806df600(param_1,param_3,*(int32_t *)(param_2 + 0x124),*(int32_t *)(param_2 + 0x124),
                *(int32_t *)(param_2 + 0x128),*(int32_t *)(param_2 + 300),uVar3);
  FUN_1806df600(param_1,param_3,*(int32_t *)(param_2 + 0x120),*(int32_t *)(param_2 + 0x124),
                *(int32_t *)(param_2 + 0x128),*(int32_t *)(param_2 + 0x128),uVar3);
  FUN_1806df600(param_1,param_3,*(int32_t *)(param_2 + 0x120),*(int32_t *)(param_2 + 0x124),
                *(int32_t *)(param_2 + 300),*(int32_t *)(param_2 + 300),uVar3);
  return;
}



uint64_t * FUN_1806dfae0(uint64_t *param_1,int64_t param_2,int64_t param_3)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar13 = *(float *)(param_2 + 4);
  fVar1 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_3 + 4);
  fVar4 = *(float *)(param_3 + 8);
  if (fVar6 < fVar4) {
    if (ABS(fVar13) < 1e-06) {
      if (fVar1 <= 0.0) {
        fVar4 = -fVar4;
      }
      *(float *)(param_1 + 1) = fVar4;
      *param_1 = 0;
      return param_1;
    }
  }
  else if (ABS(fVar1) < 1e-06) {
    if (fVar13 <= 0.0) {
      fVar6 = -fVar6;
    }
    *(float *)((int64_t)param_1 + 4) = fVar6;
    *(int32_t *)(param_1 + 1) = 0;
    goto FUN_1806dfd0c;
  }
  uVar2 = 0;
  fVar11 = ABS(fVar13) * fVar6;
  fVar12 = ABS(fVar1) * fVar4;
  fVar15 = fVar4 * fVar4;
  fVar14 = fVar6 * fVar6;
  fVar8 = fVar12 - fVar15;
  fVar3 = fVar11 - fVar14;
  if (fVar8 <= fVar3) {
    fVar8 = fVar3;
  }
  do {
    fVar9 = 1.0 / (fVar14 + fVar8);
    fVar5 = fVar9 * fVar11;
    fVar10 = 1.0 / (fVar15 + fVar8);
    fVar5 = fVar5 * fVar5;
    fVar3 = fVar10 * fVar12;
    fVar3 = fVar3 * fVar3;
    fVar7 = (fVar3 + fVar5) - 1.0;
    if (fVar7 < 0.0001) {
      fVar9 = fVar13 * fVar14 * fVar9;
      fVar10 = fVar1 * fVar15 * fVar10;
      goto LAB_1806dfccf;
    }
    uVar2 = uVar2 + 1;
    fVar8 = fVar8 + fVar7 / (fVar3 * fVar10 * 2.0 + fVar5 * fVar9 * 2.0);
  } while (uVar2 < 0x14);
  fVar9 = fVar13 * fVar14 * fVar9;
  fVar10 = fVar1 * fVar15 * fVar10;
  fVar6 = fVar9 / fVar6;
  fVar4 = fVar10 / fVar4;
  fVar13 = 1.0 / SQRT(fVar4 * fVar4 + fVar6 * fVar6);
  fVar9 = fVar9 * fVar13;
  fVar10 = fVar10 * fVar13;
LAB_1806dfccf:
  *(float *)(param_1 + 1) = fVar10;
  *(float *)((int64_t)param_1 + 4) = fVar9;
FUN_1806dfd0c:
  *(int32_t *)param_1 = 0;
  return param_1;
}



int32_t * FUN_1806dfb76(int32_t *param_1,uint64_t param_2,float param_3,float param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float fVar8;
  float fVar9;
  
  uVar1 = 0;
  fVar9 = in_XMM5_Da * in_XMM5_Da;
  fVar8 = in_XMM4_Da * in_XMM4_Da;
  fVar5 = unaff_XMM11_Da * in_XMM5_Da - fVar9;
  fVar2 = unaff_XMM10_Da * in_XMM4_Da - fVar8;
  if (fVar5 <= fVar2) {
    fVar5 = fVar2;
  }
  do {
    fVar6 = 1.0 / (fVar8 + fVar5);
    fVar3 = fVar6 * unaff_XMM10_Da * in_XMM4_Da;
    fVar7 = 1.0 / (fVar9 + fVar5);
    fVar3 = fVar3 * fVar3;
    fVar2 = fVar7 * unaff_XMM11_Da * in_XMM5_Da;
    fVar2 = fVar2 * fVar2;
    fVar4 = (fVar2 + fVar3) - 1.0;
    if (fVar4 < 0.0001) {
      fVar6 = param_3 * fVar8 * fVar6;
      fVar7 = param_4 * fVar9 * fVar7;
      goto LAB_1806dfccf;
    }
    uVar1 = uVar1 + 1;
    fVar5 = fVar5 + fVar4 / (fVar2 * fVar7 * 2.0 + fVar3 * fVar6 * 2.0);
  } while (uVar1 < 0x14);
  fVar6 = param_3 * fVar8 * fVar6;
  fVar7 = param_4 * fVar9 * fVar7;
  fVar2 = fVar6 / in_XMM4_Da;
  fVar5 = fVar7 / in_XMM5_Da;
  fVar5 = 1.0 / SQRT(fVar5 * fVar5 + fVar2 * fVar2);
  fVar6 = fVar6 * fVar5;
  fVar7 = fVar7 * fVar5;
LAB_1806dfccf:
  param_1[2] = fVar7;
  param_1[1] = fVar6;
  *param_1 = 0;
  return param_1;
}



int32_t * FUN_1806dfd0c(int32_t *param_1)

{
  int32_t in_EAX;
  
  *param_1 = in_EAX;
  return param_1;
}



float * FUN_1806dfd60(uint64_t param_1,float *param_2,int64_t *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int8_t auStack_c8 [192];
  
  if (param_3 == (int64_t *)0x0) {
    param_2[3] = 1.0;
    param_2[4] = 0.0;
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
  }
  else {
    iVar6 = (**(code **)(*param_3 + 0x28))(param_3);
    if ((iVar6 != 1) && (iVar6 = (**(code **)(*param_3 + 0x28))(param_3), iVar6 != 2)) {
      pfVar7 = (float *)(**(code **)(*param_3 + 0x90))(param_3,auStack_c8);
      fVar1 = *pfVar7;
      fVar2 = pfVar7[1];
      fVar3 = pfVar7[2];
      fVar4 = pfVar7[3];
      fVar8 = pfVar7[4];
      fVar9 = pfVar7[5];
      fVar5 = pfVar7[6];
      *param_2 = -fVar1;
      fVar11 = -(fVar8 + fVar8);
      param_2[3] = fVar4;
      fVar12 = fVar4 * fVar4 - 0.5;
      fVar10 = -(fVar9 + fVar9);
      fVar9 = -(fVar5 + fVar5);
      param_2[1] = -fVar2;
      param_2[2] = -fVar3;
      fVar8 = fVar2 * fVar10 + fVar1 * fVar11 + fVar3 * fVar9;
      param_2[6] = (fVar12 * fVar9 - (fVar1 * fVar10 - fVar2 * fVar11) * fVar4) + fVar3 * fVar8;
      param_2[4] = (fVar12 * fVar11 - (fVar2 * fVar9 - fVar3 * fVar10) * fVar4) + fVar1 * fVar8;
      param_2[5] = (fVar12 * fVar10 - (fVar3 * fVar11 - fVar1 * fVar9) * fVar4) + fVar2 * fVar8;
      return param_2;
    }
    (**(code **)(*param_3 + 0xd8))(param_3,param_2);
  }
  return param_2;
}






// 函数: void FUN_1806dfdbd(void)
void FUN_1806dfdbd(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int64_t in_RAX;
  float *pfVar6;
  float *unaff_RBX;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar6 = (float *)(**(code **)(in_RAX + 0x90))();
  fVar1 = *pfVar6;
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  fVar4 = pfVar6[3];
  fVar7 = pfVar6[4];
  fVar8 = pfVar6[5];
  fVar5 = pfVar6[6];
  *unaff_RBX = -fVar1;
  fVar10 = -(fVar7 + fVar7);
  unaff_RBX[3] = fVar4;
  fVar11 = fVar4 * fVar4 - 0.5;
  fVar9 = -(fVar8 + fVar8);
  fVar8 = -(fVar5 + fVar5);
  unaff_RBX[1] = -fVar2;
  unaff_RBX[2] = -fVar3;
  fVar7 = fVar2 * fVar9 + fVar1 * fVar10 + fVar3 * fVar8;
  unaff_RBX[6] = (fVar11 * fVar8 - (fVar1 * fVar9 - fVar2 * fVar10) * fVar4) + fVar3 * fVar7;
  unaff_RBX[4] = (fVar11 * fVar10 - (fVar2 * fVar8 - fVar3 * fVar9) * fVar4) + fVar1 * fVar7;
  unaff_RBX[5] = (fVar11 * fVar9 - (fVar3 * fVar10 - fVar1 * fVar8) * fVar4) + fVar2 * fVar7;
  return;
}






// 函数: void FUN_1806dff9e(void)
void FUN_1806dff9e(void)

{
  int64_t *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0xd8))();
  return;
}



uint64_t FUN_1806dfff0(int64_t param_1,uint64_t param_2)

{
  (**(code **)(**(int64_t **)(param_1 + 0x60) + 0x50))();
  return param_2;
}



bool FUN_1806e0060(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  float extraout_XMM0_Da;
  float fVar7;
  float extraout_XMM0_Da_00;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int32_t uStack_d8;
  float fStack_d4;
  float fStack_d0;
  int32_t uStack_c8;
  float fStack_c4;
  float fStack_c0;
  int8_t auStack_b8 [4];
  float fStack_b4;
  float fStack_b0;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar8 = fVar1 + fVar1;
  fVar3 = param_2[3];
  fVar10 = fVar3 + fVar3;
  fVar4 = param_2[2];
  uStack_c8 = 0;
  fVar6 = (float)atan2f(fVar2,fVar3 + 1.0);
  fStack_c4 = fVar6 * 4.0;
  atan2f(fVar4,fVar3 + 1.0);
  fStack_c0 = extraout_XMM0_Da * 4.0;
  fVar7 = *param_1;
  fVar9 = param_1[1];
  fVar11 = (ABS(fVar6 * 4.0) + param_1[2]) / fVar7;
  fVar6 = (ABS(fStack_c0) + param_1[2]) / fVar9;
  bVar5 = 1.0 < fVar6 * fVar6 + fVar11 * fVar11;
  if (bVar5) {
    uStack_d8 = 0;
    fStack_d4 = fVar7;
    fStack_d0 = fVar9;
    FUN_1806dfae0(auStack_b8,&uStack_c8,&uStack_d8);
    fVar15 = fStack_b4 / (fVar7 * fVar7);
    fVar16 = fStack_b0 / (fVar9 * fVar9);
    fVar7 = (float)tanf(fStack_b4 * 0.25);
    tanf(fStack_b0 * 0.25);
    fVar6 = extraout_XMM0_Da_00 * extraout_XMM0_Da_00 + fVar7 * fVar7;
    fVar13 = extraout_XMM0_Da_00 * fVar16 + fVar7 * fVar15;
    fVar11 = 1.0 - fVar6;
    fVar9 = 1.0 / (fVar6 + 1.0);
    fVar12 = (fVar11 + fVar11) * fVar9 * fVar9;
    fVar9 = (3.0 - fVar6) * fVar13 * -4.0 * fVar9 * fVar9 * fVar9;
    fVar14 = fVar11 * fVar12 - 1.0;
    fVar13 = fVar13 * fVar12 * -2.0 + fVar11 * fVar9;
    fVar16 = (fVar16 + fVar16) * fVar12 + fVar9 * (extraout_XMM0_Da_00 + extraout_XMM0_Da_00);
    fVar6 = fVar7 * -2.0 * fVar12;
    fVar11 = (extraout_XMM0_Da_00 + extraout_XMM0_Da_00) * fVar12;
    fVar12 = fVar15 * -2.0 * fVar12 + fVar9 * fVar7 * -2.0;
    fVar7 = 1.0 / SQRT(fVar16 * fVar16 + fVar13 * fVar13 + fVar12 * fVar12);
    fVar9 = (fVar13 * fVar6 - fVar12 * fVar14) * fVar7;
    param_3[1] = fVar9;
    fVar13 = (fVar16 * fVar14 - fVar13 * fVar11) * fVar7;
    fVar7 = (fVar12 * fVar11 - fVar16 * fVar6) * fVar7;
    param_3[2] = fVar13;
    *param_3 = fVar7;
    *param_4 = ((fVar3 * fVar10 + fVar1 * fVar8) - 1.0) * (fVar13 * fVar11 - fVar9 * fVar6) +
               (fVar7 * fVar6 - fVar13 * fVar14) * (fVar2 * fVar8 + fVar4 * fVar10) +
               (fVar9 * fVar14 - fVar7 * fVar11) * (fVar4 * fVar8 - fVar2 * fVar10);
  }
  return bVar5;
}



bool FUN_1806e00e1(float param_1,float param_2,int32_t param_3,float param_4,uint64_t param_5,
                  int32_t param_6,float param_7,uint64_t param_8,float param_9,
                  uint64_t param_10,float param_11,int32_t param_12,int32_t param_13,
                  int32_t param_14,int32_t param_15,int32_t param_16,int32_t param_17,
                  int32_t param_18,int32_t param_19,uint64_t param_20,uint64_t param_21,
                  int32_t param_22,int32_t param_23)

{
  bool bVar1;
  int8_t in_AL;
  uint8_t in_register_00000001;
  float *in_RCX;
  uint64_t unaff_RBX;
  float *unaff_RSI;
  float *unaff_RDI;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_XMM4_Da;
  float unaff_XMM7_Da;
  float fVar5;
  float unaff_XMM8_Da;
  float fVar6;
  float fVar7;
  float unaff_XMM11_Da;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000034;
  float fStack0000000000000110;
  float fStack0000000000000118;
  
  *(uint64_t *)(CONCAT71(in_register_00000001,in_AL) + 0x18) = unaff_RBX;
  param_5._4_4_ = unaff_XMM8_Da * param_2 - param_1 * param_4;
  param_5._0_4_ = in_XMM4_Da;
  fStack0000000000000110 = unaff_XMM7_Da;
  fStack0000000000000118 = param_4;
  fVar2 = (float)atan2f(param_3,unaff_XMM7_Da + unaff_XMM11_Da);
  param_8._4_4_ = fVar2 * 4.0;
  param_9 = (float)atan2f();
  param_9 = param_9 * 4.0;
  fVar3 = *in_RCX;
  fVar4 = in_RCX[1];
  fVar6 = (ABS(fVar2 * 4.0) + in_RCX[2]) / fVar3;
  fVar2 = (ABS(param_9) + in_RCX[2]) / fVar4;
  bVar1 = unaff_XMM11_Da < fVar2 * fVar2 + fVar6 * fVar6;
  if (bVar1) {
    param_6 = 0;
    fStack0000000000000034 = fVar3;
    param_7 = fVar4;
    FUN_1806dfae0(&param_10,&param_8,&param_6);
    fVar2 = param_11;
    fVar10 = param_10._4_4_ / (fVar3 * fVar3);
    fVar11 = param_11 / (fVar4 * fVar4);
    fVar3 = (float)tanf(param_10._4_4_ * 0.25);
    fVar4 = (float)tanf(fVar2 * 0.25);
    fVar6 = fVar4 * fVar4 + fVar3 * fVar3;
    fVar8 = fVar4 * fVar11 + fVar3 * fVar10;
    fVar5 = unaff_XMM11_Da - fVar6;
    fVar2 = unaff_XMM11_Da / (fVar6 + unaff_XMM11_Da);
    fVar7 = (fVar5 + fVar5) * fVar2 * fVar2;
    fVar2 = (3.0 - fVar6) * fVar8 * -4.0 * fVar2 * fVar2 * fVar2;
    fVar9 = fVar5 * fVar7 - unaff_XMM11_Da;
    fVar8 = fVar8 * fVar7 * -2.0 + fVar5 * fVar2;
    fVar11 = (fVar11 + fVar11) * fVar7 + fVar2 * (fVar4 + fVar4);
    fVar6 = fVar3 * -2.0 * fVar7;
    fVar5 = (fVar4 + fVar4) * fVar7;
    fVar2 = fVar10 * -2.0 * fVar7 + fVar2 * fVar3 * -2.0;
    fVar3 = 1.0 / SQRT(fVar11 * fVar11 + fVar8 * fVar8 + fVar2 * fVar2);
    fVar4 = (fVar8 * fVar6 - fVar2 * fVar9) * fVar3;
    unaff_RDI[1] = fVar4;
    fVar7 = (fVar11 * fVar9 - fVar8 * fVar5) * fVar3;
    fVar3 = (fVar2 * fVar5 - fVar11 * fVar6) * fVar3;
    unaff_RDI[2] = fVar7;
    *unaff_RDI = fVar3;
    *unaff_RSI = ((fStack0000000000000110 * fStack0000000000000118 + fStackX_20 * fStackX_24) - 1.0)
                 * (fVar7 * fVar5 - fVar4 * fVar6) +
                 (fVar3 * fVar6 - fVar7 * fVar9) * (float)param_5 +
                 (fVar4 * fVar9 - fVar3 * fVar5) * param_5._4_4_;
  }
  return bVar1;
}



int8_t thunk_FUN_1806e0451(void)

{
  return 0;
}



int8_t FUN_1806e01a3(void)

{
  float *unaff_RSI;
  float *unaff_RDI;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar5;
  float fVar6;
  float unaff_XMM11_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float fStack000000000000002c;
  int32_t uStack0000000000000030;
  uint64_t in_stack_00000050;
  float in_stack_00000058;
  float in_stack_00000110;
  float in_stack_00000118;
  
  uStack0000000000000030 = 0;
  FUN_1806dfae0(&stack0x00000050,&stack0x00000040,&stack0x00000030);
  fVar2 = in_stack_00000058;
  fVar9 = in_stack_00000050._4_4_ / (unaff_XMM7_Da * unaff_XMM7_Da);
  fVar10 = in_stack_00000058 / (unaff_XMM6_Da * unaff_XMM6_Da);
  fVar1 = (float)tanf(in_stack_00000050._4_4_ * 0.25);
  fVar2 = (float)tanf(fVar2 * 0.25);
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1;
  fVar7 = fVar2 * fVar10 + fVar1 * fVar9;
  fVar5 = unaff_XMM11_Da - fVar4;
  fVar3 = unaff_XMM11_Da / (fVar4 + unaff_XMM11_Da);
  fVar6 = (fVar5 + fVar5) * fVar3 * fVar3;
  fVar3 = (3.0 - fVar4) * fVar7 * -4.0 * fVar3 * fVar3 * fVar3;
  fVar8 = fVar5 * fVar6 - unaff_XMM11_Da;
  fVar7 = fVar7 * fVar6 * -2.0 + fVar5 * fVar3;
  fVar10 = (fVar10 + fVar10) * fVar6 + fVar3 * (fVar2 + fVar2);
  fVar4 = fVar1 * -2.0 * fVar6;
  fVar5 = (fVar2 + fVar2) * fVar6;
  fVar3 = fVar9 * -2.0 * fVar6 + fVar3 * fVar1 * -2.0;
  fVar2 = 1.0 / SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar3 * fVar3);
  fVar1 = (fVar7 * fVar4 - fVar3 * fVar8) * fVar2;
  unaff_RDI[1] = fVar1;
  fVar6 = (fVar10 * fVar8 - fVar7 * fVar5) * fVar2;
  fVar2 = (fVar3 * fVar5 - fVar10 * fVar4) * fVar2;
  unaff_RDI[2] = fVar6;
  *unaff_RDI = fVar2;
  *unaff_RSI = ((in_stack_00000110 * in_stack_00000118 + fStackX_20 * fStackX_24) - 1.0) *
               (fVar6 * fVar5 - fVar1 * fVar4) +
               (fVar2 * fVar4 - fVar6 * fVar8) * fStack0000000000000028 +
               (fVar1 * fVar8 - fVar2 * fVar5) * fStack000000000000002c;
  return 1;
}






