#define SystemInitializer System_Initializer2  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part500.c - 10 个函数

// 函数: void FUN_180534410(int64_t param_1,uint64_t *param_2)
void FUN_180534410(int64_t param_1,uint64_t *param_2)

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
  int64_t lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int32_t uVar30;
  int32_t uVar31;
  int32_t uVar32;
  uint64_t uVar33;
  bool bVar34;
  char cVar35;
  int iVar36;
  uint64_t *puVar37;
  int64_t lVar38;
  int64_t lVar39;
  
  lVar38 = *(int64_t *)(param_1 + 0x8a8);
  puVar37 = (uint64_t *)(lVar38 + 0x30);
  cVar35 = func_0x000180285980();
  if (cVar35 != '\0') {
    uVar33 = param_2[1];
    *puVar37 = *param_2;
    puVar37[1] = uVar33;
    uVar33 = param_2[3];
    puVar37[2] = param_2[2];
    puVar37[3] = uVar33;
    uVar30 = *(int32_t *)((int64_t)param_2 + 0x24);
    uVar31 = *(int32_t *)(param_2 + 5);
    uVar32 = *(int32_t *)((int64_t)param_2 + 0x2c);
    *(int32_t *)(puVar37 + 4) = *(int32_t *)(param_2 + 4);
    *(int32_t *)((int64_t)puVar37 + 0x24) = uVar30;
    *(int32_t *)(puVar37 + 5) = uVar31;
    *(int32_t *)((int64_t)puVar37 + 0x2c) = uVar32;
    uVar30 = *(int32_t *)((int64_t)param_2 + 0x34);
    uVar31 = *(int32_t *)(param_2 + 7);
    uVar32 = *(int32_t *)((int64_t)param_2 + 0x3c);
    *(int32_t *)(puVar37 + 6) = *(int32_t *)(param_2 + 6);
    *(int32_t *)((int64_t)puVar37 + 0x34) = uVar30;
    *(int32_t *)(puVar37 + 7) = uVar31;
    *(int32_t *)((int64_t)puVar37 + 0x3c) = uVar32;
    FUN_180254610();
    *(byte *)(lVar38 + 0x2e8) = *(byte *)(lVar38 + 0x2e8) | 0x10;
    if (((*(uint *)(lVar38 + 0x2ac) & 0x10000000) == 0) && (*(int64_t *)(lVar38 + 0x20) != 0)) {
      FUN_1801b01f0(*(int64_t *)(lVar38 + 0x20),lVar38);
    }
    iVar36 = (int)(*(int64_t *)(lVar38 + 0x1c8) - *(int64_t *)(lVar38 + 0x1c0) >> 3);
    if (0 < iVar36) {
      lVar39 = 0;
      do {
        lVar13 = *(int64_t *)(*(int64_t *)(lVar38 + 0x1c0) + lVar39 * 8);
        if ((((*(int64_t *)(lVar38 + 0x20) == 0) ||
             (*(char *)(*(int64_t *)(lVar38 + 0x20) + 0x2a62) == '\0')) ||
            (*(int64_t **)(lVar13 + 0x270) == (int64_t *)0x0)) ||
           ((cVar35 = (**(code **)(**(int64_t **)(lVar13 + 0x270) + 0x70))(), cVar35 == '\0' ||
            (cVar35 = (**(code **)(**(int64_t **)(lVar13 + 0x270) + 0x78))(), cVar35 == '\0')))) {
          bVar34 = false;
        }
        else {
          bVar34 = true;
        }
        if (!bVar34) {
          fVar14 = *(float *)(lVar38 + 0x70);
          fVar15 = *(float *)(lVar38 + 0x74);
          fVar16 = *(float *)(lVar38 + 0x78);
          fVar17 = *(float *)(lVar38 + 0x7c);
          fVar18 = *(float *)(lVar38 + 0x80);
          fVar19 = *(float *)(lVar38 + 0x84);
          fVar20 = *(float *)(lVar38 + 0x88);
          fVar21 = *(float *)(lVar38 + 0x8c);
          fVar22 = *(float *)(lVar38 + 0x90);
          fVar23 = *(float *)(lVar38 + 0x94);
          fVar24 = *(float *)(lVar38 + 0x98);
          fVar25 = *(float *)(lVar38 + 0x9c);
          fVar1 = *(float *)(lVar13 + 0x34);
          fVar2 = *(float *)(lVar13 + 0x30);
          fVar3 = *(float *)(lVar13 + 0x38);
          fVar4 = *(float *)(lVar13 + 0x44);
          fVar5 = *(float *)(lVar13 + 0x54);
          fVar6 = *(float *)(lVar13 + 100);
          fVar7 = *(float *)(lVar13 + 0x40);
          fVar8 = *(float *)(lVar13 + 0x48);
          fVar9 = *(float *)(lVar13 + 0x50);
          fVar10 = *(float *)(lVar13 + 0x58);
          fVar11 = *(float *)(lVar13 + 0x60);
          fVar12 = *(float *)(lVar13 + 0x68);
          fVar26 = *(float *)(lVar38 + 0xa0);
          fVar27 = *(float *)(lVar38 + 0xa4);
          fVar28 = *(float *)(lVar38 + 0xa8);
          fVar29 = *(float *)(lVar38 + 0xac);
          *(float *)(lVar13 + 0x70) = fVar1 * fVar18 + fVar2 * fVar14 + fVar3 * fVar22;
          *(float *)(lVar13 + 0x74) = fVar1 * fVar19 + fVar2 * fVar15 + fVar3 * fVar23;
          *(float *)(lVar13 + 0x78) = fVar1 * fVar20 + fVar2 * fVar16 + fVar3 * fVar24;
          *(float *)(lVar13 + 0x7c) = fVar1 * fVar21 + fVar2 * fVar17 + fVar3 * fVar25;
          *(float *)(lVar13 + 0x80) = fVar4 * fVar18 + fVar7 * fVar14 + fVar8 * fVar22;
          *(float *)(lVar13 + 0x84) = fVar4 * fVar19 + fVar7 * fVar15 + fVar8 * fVar23;
          *(float *)(lVar13 + 0x88) = fVar4 * fVar20 + fVar7 * fVar16 + fVar8 * fVar24;
          *(float *)(lVar13 + 0x8c) = fVar4 * fVar21 + fVar7 * fVar17 + fVar8 * fVar25;
          *(float *)(lVar13 + 0x90) = fVar5 * fVar18 + fVar9 * fVar14 + fVar10 * fVar22;
          *(float *)(lVar13 + 0x94) = fVar5 * fVar19 + fVar9 * fVar15 + fVar10 * fVar23;
          *(float *)(lVar13 + 0x98) = fVar5 * fVar20 + fVar9 * fVar16 + fVar10 * fVar24;
          *(float *)(lVar13 + 0x9c) = fVar5 * fVar21 + fVar9 * fVar17 + fVar10 * fVar25;
          *(float *)(lVar13 + 0xa0) = fVar6 * fVar18 + fVar11 * fVar14 + fVar12 * fVar22 + fVar26;
          *(float *)(lVar13 + 0xa4) = fVar6 * fVar19 + fVar11 * fVar15 + fVar12 * fVar23 + fVar27;
          *(float *)(lVar13 + 0xa8) = fVar6 * fVar20 + fVar11 * fVar16 + fVar12 * fVar24 + fVar28;
          *(float *)(lVar13 + 0xac) = fVar6 * fVar21 + fVar11 * fVar17 + fVar12 * fVar25 + fVar29;
          FUN_1802eace0(lVar13);
        }
        lVar39 = lVar39 + 1;
      } while (lVar39 < iVar36);
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1805344c0(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  void *puVar2;
  int64_t lVar3;
  uint64_t uStackX_8;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    lVar3 = render_system_data_config + 0x50;
    uStackX_8 = param_1;
    plVar1 = (int64_t *)FUN_180058080(lVar3,&uStackX_8,param_2);
    if (*plVar1 != lVar3) {
      return *(int32_t *)(*plVar1 + 0x40);
    }
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar2 = *(void **)(param_2 + 8);
    }
    FUN_180627020(&unknown_var_7152_ptr,puVar2);
  }
  return 0xffffffff;
}



int64_t * FUN_180534540(int64_t *param_1)

{
  int64_t *plVar1;
  
  *param_1 = 0;
  plVar1 = (int64_t *)*param_1;
  *param_1 = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(param_1 + 1) = 0;
  return param_1;
}





// 函数: void FUN_180534590(int64_t *param_1)
void FUN_180534590(int64_t *param_1)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)*param_1;
  *param_1 = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1805346e0(void)

{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
              0x48) < render_system_config_config) {
    SystemInitializer(&system_ptr_9128);
    if (render_system_config_config == -1) {
      FUN_18058f390(0x180d48f30);
      FUN_1808fc820(&unknown_var_2656_ptr);
      FUN_1808fcb30(&system_ptr_9128);
      return 0x180d48f30;
    }
  }
  return 0x180d48f30;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180534770(int64_t param_1,uint *param_2,char param_3)
void FUN_180534770(int64_t param_1,uint *param_2,char param_3)

{
  uint uVar1;
  uint *puVar2;
  int8_t auStack_68 [32];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    FUN_1802fac00(param_1,*(int64_t *)(param_1 + 0x10) + 0x70,0xbf800000);
  }
  puVar2 = (uint *)((int64_t)param_3 * 0x100 + *(int64_t *)(param_1 + 0x18));
  do {
    LOCK();
    uVar1 = *puVar2;
    *puVar2 = *puVar2 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uStack_48 = puVar2[1];
  uStack_44 = puVar2[2];
  uStack_40 = puVar2[3];
  uStack_3c = puVar2[4];
  uStack_38 = puVar2[5];
  uStack_34 = puVar2[6];
  uStack_30 = puVar2[7];
  uStack_2c = puVar2[8];
  *puVar2 = 0;
  *param_2 = uStack_48;
  param_2[1] = uStack_44;
  param_2[2] = uStack_40;
  param_2[3] = uStack_3c;
  param_2[4] = uStack_38;
  param_2[5] = uStack_34;
  param_2[6] = uStack_30;
  param_2[7] = uStack_2c;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_68);
}



float * FUN_180534800(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_3[1];
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  fVar4 = *param_3;
  fVar5 = param_3[2];
  fVar6 = param_3[4];
  fVar7 = param_3[5];
  fVar8 = param_1[5];
  fVar9 = param_1[1];
  *param_2 = fVar4 * *param_1 + fVar1 * param_1[1];
  param_2[1] = fVar4 * fVar2 + fVar1 * fVar3;
  param_2[2] = fVar5;
  param_2[3] = 3.4028235e+38;
  fVar1 = param_3[6];
  fVar3 = param_3[8];
  fVar4 = *param_1;
  param_2[4] = fVar6 * *param_1 + fVar7 * fVar9;
  param_2[5] = fVar6 * fVar2 + fVar7 * fVar8;
  param_2[6] = fVar1;
  param_2[7] = 3.4028235e+38;
  fVar1 = param_3[9];
  fVar5 = param_1[5];
  fVar6 = param_3[10];
  param_2[8] = fVar3 * fVar4 + fVar1 * param_1[1];
  param_2[9] = fVar3 * fVar2 + fVar1 * fVar5;
  param_2[10] = fVar6;
  param_2[0xb] = 3.4028235e+38;
  return param_2;
}



float * FUN_180534930(int32_t *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  uStack_98 = *param_1;
  uStack_94 = param_1[1];
  uStack_90 = param_1[2];
  uStack_84 = param_1[5];
  uStack_88 = param_1[4];
  uStack_78 = param_1[8];
  uStack_80 = param_1[6];
  uStack_70 = param_1[10];
  uStack_74 = param_1[9];
  uStack_64 = param_1[0xd];
  uStack_68 = param_1[0xc];
  uStack_60 = param_1[0xe];
  uStack_5c = 0x3f800000;
  uStack_8c = 0;
  uStack_7c = 0;
  uStack_6c = 0;
  FUN_1805351a0(&uStack_98,&fStack_58);
  fVar1 = param_3[2];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  *param_2 = fVar3 * fStack_48 + fVar2 * fStack_58 + fVar1 * fStack_38 + fStack_28;
  param_2[1] = fStack_54 * fVar2 + fStack_44 * fVar3 + fStack_34 * fVar1 + fStack_24;
  param_2[2] = fStack_50 * fVar2 + fStack_40 * fVar3 + fStack_30 * fVar1 + fStack_20;
  param_2[3] = fStack_4c * fVar2 + fStack_3c * fVar3 + fStack_2c * fVar1 + fStack_1c;
  return param_2;
}





// 函数: void FUN_180534b00(void)
void FUN_180534b00(void)

{
  int32_t in_XMM3_Da;
  
                    // WARNING: Subroutine does not return
  AdvancedSystemController(in_XMM3_Da);
}



uint64_t FUN_180534d00(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    iVar1 = _Mtx_lock(param_1 + 0xe0,param_2,param_3,param_4,0xfffffffffffffffe);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
      FUN_1802fac00(param_1,*(int64_t *)(param_1 + 0x10) + 0x70,0xbf800000);
    }
    iVar1 = _Mtx_unlock(param_1 + 0xe0);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
  }
  FUN_1801c15d0(param_1,param_2,param_3 & 0xff);
  return param_2;
}





// 函数: void FUN_180535010(uint64_t param_1,int32_t param_2)
void FUN_180535010(uint64_t param_1,int32_t param_2)

{
                    // WARNING: Subroutine does not return
  AdvancedSystemController(param_2);
}





// 函数: void FUN_1805351a0(float *param_1,float *param_2)
void FUN_1805351a0(float *param_1,float *param_2)

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
  
  fVar10 = param_1[10];
  fVar3 = param_1[1];
  fVar4 = param_1[0xd];
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  fVar1 = param_1[4];
  fVar8 = param_1[0xc];
  fVar5 = fVar3 * fVar10;
  fVar6 = param_1[5] * fVar10;
  fVar2 = *param_1;
  param_2[1] = -fVar5;
  fVar7 = param_1[5];
  *param_2 = fVar6;
  param_2[4] = -(fVar1 * fVar10);
  param_2[5] = fVar2 * fVar10;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  fVar9 = fVar2 * fVar7 - fVar1 * fVar3;
  param_2[0xb] = 0.0;
  fVar7 = -(fVar1 * -(fVar10 * fVar4)) - fVar8 * fVar6;
  param_2[10] = fVar9;
  param_2[0xc] = fVar7;
  fVar8 = fVar8 * fVar5 + fVar2 * -(fVar10 * fVar4);
  fVar4 = param_1[0xe] * fVar3 * fVar1 - param_1[0xe] * param_1[5] * fVar2;
  param_2[0xd] = fVar8;
  fVar10 = fVar2 * *param_2 + fVar1 * param_2[1];
  param_2[0xe] = fVar4;
  fVar3 = fVar2 * fVar6 - fVar1 * fVar5;
  param_2[0xf] = fVar3;
  if (fVar10 != 1.0) {
    fVar10 = 1.0 / fVar10;
    *param_2 = fVar10 * *param_2;
    param_2[1] = fVar10 * param_2[1];
    param_2[5] = fVar10 * param_2[5];
    param_2[4] = fVar10 * param_2[4];
    param_2[10] = fVar9 * fVar10;
    param_2[0xc] = fVar7 * fVar10;
    param_2[0xd] = fVar8 * fVar10;
    param_2[0xe] = fVar4 * fVar10;
    param_2[0xf] = fVar3 * fVar10;
  }
  return;
}





// 函数: void FUN_1805353a0(float *param_1,int32_t *param_2)
void FUN_1805353a0(float *param_1,int32_t *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  uStack_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_54 = param_2[5];
  uStack_58 = param_2[4];
  uStack_48 = param_2[8];
  uStack_50 = param_2[6];
  uStack_40 = param_2[10];
  uStack_44 = param_2[9];
  uStack_34 = param_2[0xd];
  uStack_38 = param_2[0xc];
  uStack_30 = param_2[0xe];
  uStack_2c = 0x3f800000;
  uStack_5c = 0;
  uStack_4c = 0;
  uStack_3c = 0;
  FUN_1805351a0(&uStack_68,&fStack_b8);
  fVar1 = param_1[1];
  fVar2 = *param_1;
  fVar3 = param_1[2];
  param_1[3] = 1.0;
  *param_1 = fVar2 * fStack_b8 + fVar1 * fStack_a8 + fVar3 * fStack_98 + fStack_88;
  param_1[1] = fVar2 * fStack_b4 + fVar1 * fStack_a4 + fVar3 * fStack_94 + fStack_84;
  param_1[2] = fVar2 * fStack_b0 + fVar1 * fStack_a0 + fVar3 * fStack_90 + fStack_80;
  param_1[3] = fVar2 * fStack_ac + fVar1 * fStack_9c + fVar3 * fStack_8c + fStack_7c;
  param_1[7] = 1.0;
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  param_1[4] = fVar1 * fStack_b8 + fVar2 * fStack_a8 + fVar3 * fStack_98 + fStack_88;
  param_1[5] = fVar1 * fStack_b4 + fVar2 * fStack_a4 + fVar3 * fStack_94 + fStack_84;
  param_1[6] = fVar1 * fStack_b0 + fVar2 * fStack_a0 + fVar3 * fStack_90 + fStack_80;
  param_1[7] = fVar1 * fStack_ac + fVar2 * fStack_9c + fVar3 * fStack_8c + fStack_7c;
  return;
}



float * FUN_180535610(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  param_3 = 1.0 / param_3;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[4];
  fVar4 = param_1[5];
  fVar5 = param_1[9];
  fVar6 = param_1[10];
  fVar7 = param_1[2];
  fVar8 = param_1[6];
  param_2[8] = param_3 * param_1[8];
  param_2[9] = param_3 * fVar5;
  param_2[10] = param_3 * fVar6;
  param_2[0xb] = 3.4028235e+38;
  *param_2 = param_3 * fVar1;
  param_2[1] = param_3 * fVar2;
  param_2[2] = param_3 * fVar7;
  param_2[3] = 3.4028235e+38;
  param_2[4] = param_3 * fVar3;
  param_2[5] = param_3 * fVar4;
  param_2[6] = param_3 * fVar8;
  param_2[7] = 3.4028235e+38;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_180535720(int64_t *param_1,int64_t *param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *plVar7;
  
  plVar3 = (int64_t *)0x0;
  uVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x98d9e0,0x10,8,0,0xfffffffffffffffe);
  plVar2 = (int64_t *)FUN_1804f2420(uVar1);
  *param_2 = (int64_t)plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  lVar6 = 1;
  if (*param_1 == 0) {
    plVar2 = (int64_t *)*param_2;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plVar5 = (int64_t *)*param_1;
    *param_1 = (int64_t)plVar2;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x38))();
    }
  }
  plVar2 = (int64_t *)param_1[2];
  if (plVar2 < (int64_t *)param_1[3]) {
    param_1[2] = (int64_t)(plVar2 + 1);
    plVar3 = (int64_t *)*param_2;
    *plVar2 = (int64_t)plVar3;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))();
    }
  }
  else {
    plVar5 = (int64_t *)param_1[1];
    lVar4 = (int64_t)plVar2 - (int64_t)plVar5 >> 3;
    if ((lVar4 == 0) || (lVar6 = lVar4 * 2, plVar7 = plVar3, lVar6 != 0)) {
      plVar3 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,(char)param_1[4]);
      plVar2 = (int64_t *)param_1[2];
      plVar5 = (int64_t *)param_1[1];
      plVar7 = plVar3;
    }
    for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
      *plVar3 = *plVar5;
      *plVar5 = 0;
      plVar3 = plVar3 + 1;
    }
    plVar2 = (int64_t *)*param_2;
    *plVar3 = (int64_t)plVar2;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
    plVar2 = (int64_t *)param_1[2];
    plVar5 = (int64_t *)param_1[1];
    if (plVar5 != plVar2) {
      do {
        if ((int64_t *)*plVar5 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar5 + 0x38))();
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar2);
      plVar5 = (int64_t *)param_1[1];
    }
    if (plVar5 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(plVar5);
    }
    param_1[1] = (int64_t)plVar7;
    param_1[2] = (int64_t)(plVar3 + 1);
    param_1[3] = (int64_t)(plVar7 + lVar6);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805358d0(int64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_1805358d0(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int32_t uVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plStackX_8;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    cVar3 = FUN_18055f260(param_3,&plStackX_8,&unknown_var_3296_ptr);
    FUN_1804fe350(&unknown_var_3952_ptr,cVar3,&unknown_var_4016_ptr,&plStackX_8);
    if ((((cVar3 != '\0') && (-1 < (int)(uint)plStackX_8)) &&
        ((int)(uint)plStackX_8 < *(int *)(lVar5 + 0x87b31c))) &&
       (lVar5 = (uint64_t)((uint)plStackX_8 & 0xf) * 0xbe0 +
                *(int64_t *)
                 (*(int64_t *)(lVar5 + 0x87b340) + (uint64_t)((uint)plStackX_8 >> 4) * 8),
       *(int *)(lVar5 + 8) != 0)) {
      lVar6 = 0;
      if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
        iVar4 = _Mtx_lock(0x180c95528);
        if (iVar4 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar4);
        }
        uVar1 = *(int32_t *)(lVar5 + 0xc);
        cVar3 = FUN_180645c10(0x180c95578,0,&system_param1_ptr);
        if ((cVar3 != '\0') &&
           (cVar3 = FUN_180645c10(0x180c95578,0x13,&unknown_var_3472_ptr), cVar3 != '\0')) {
          FUN_180645c10(0x180c95578,uVar1,&unknown_var_3296_ptr);
        }
        render_system_config = render_system_config & 0xffffffff00000000;
        iVar4 = (int)(render_system_config - render_system_config >> 3);
        lVar5 = render_system_config;
        if (0 < iVar4) {
          do {
            lVar2 = *(int64_t *)(lVar5 + lVar6 * 8);
            if ((lVar2 != 0) && (*(char *)(*(int64_t *)(lVar2 + 0x58f8) + 0x1c) != '\0')) {
              FUN_1805b59d0(lVar2,0x180c95578);
              lVar5 = render_system_config;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < iVar4);
        }
        if (render_system_config != 0) {
          FUN_180567f30(render_system_config,0x180c95578);
        }
        render_system_config = 0;
                    // WARNING: Subroutine does not return
        memset(render_system_config,0,(int64_t)(render_system_config >> 3));
      }
      *(int16_t *)(lVar5 + 0x3d1) = 0;
      if (*(int64_t *)(*(int64_t *)(lVar5 + 0xe0) + 0x20) != 0) {
        FUN_180198980();
      }
      plStackX_8 = *(int64_t **)(lVar5 + 0xe0);
      *(uint64_t *)(lVar5 + 0xe0) = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      *(uint64_t *)(lVar5 + 0xe8) = 0;
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805358ec(void)
void FUN_1805358ec(void)

{
  int32_t uVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t unaff_RDI;
  uint uStack0000000000000030;
  
  cVar3 = FUN_18055f260();
  FUN_1804fe350(&unknown_var_3952_ptr,cVar3,&unknown_var_4016_ptr,&stack0x00000030);
  if ((((cVar3 != '\0') && (-1 < (int)uStack0000000000000030)) &&
      ((int)uStack0000000000000030 < *(int *)(unaff_RDI + 0x87b31c))) &&
     (lVar5 = (uint64_t)(uStack0000000000000030 & 0xf) * 0xbe0 +
              *(int64_t *)
               (*(int64_t *)(unaff_RDI + 0x87b340) + (uint64_t)(uStack0000000000000030 >> 4) * 8),
     *(int *)(lVar5 + 8) != 0)) {
    lVar6 = 0;
    if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
      iVar4 = _Mtx_lock(0x180c95528);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      uVar1 = *(int32_t *)(lVar5 + 0xc);
      cVar3 = FUN_180645c10(0x180c95578,0,&system_param1_ptr);
      if ((cVar3 != '\0') && (cVar3 = FUN_180645c10(0x180c95578,0x13,&unknown_var_3472_ptr), cVar3 != '\0')
         ) {
        FUN_180645c10(0x180c95578,uVar1,&unknown_var_3296_ptr);
      }
      render_system_config = render_system_config & 0xffffffff00000000;
      iVar4 = (int)(render_system_config - render_system_config >> 3);
      lVar5 = render_system_config;
      if (0 < iVar4) {
        do {
          lVar2 = *(int64_t *)(lVar5 + lVar6 * 8);
          if ((lVar2 != 0) && (*(char *)(*(int64_t *)(lVar2 + 0x58f8) + 0x1c) != '\0')) {
            FUN_1805b59d0(lVar2,0x180c95578);
            lVar5 = render_system_config;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar4);
      }
      if (render_system_config != 0) {
        FUN_180567f30(render_system_config,0x180c95578);
      }
      render_system_config = 0;
                    // WARNING: Subroutine does not return
      memset(render_system_config,0,(int64_t)(render_system_config >> 3));
    }
    *(int16_t *)(lVar5 + 0x3d1) = 0;
    if (*(int64_t *)(*(int64_t *)(lVar5 + 0xe0) + 0x20) != 0) {
      FUN_180198980();
    }
    _uStack0000000000000030 = *(int64_t **)(lVar5 + 0xe0);
    *(uint64_t *)(lVar5 + 0xe0) = 0;
    if (_uStack0000000000000030 != (int64_t *)0x0) {
      (**(code **)(*_uStack0000000000000030 + 0x38))();
    }
    *(uint64_t *)(lVar5 + 0xe8) = 0;
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180535925(void)
void FUN_180535925(void)

{
  int32_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t unaff_RDI;
  uint in_stack_00000030;
  
  if (((-1 < (int)in_stack_00000030) && ((int)in_stack_00000030 < *(int *)(unaff_RDI + 0x87b31c)))
     && (lVar6 = (uint64_t)(in_stack_00000030 & 0xf) * 0xbe0 +
                 *(int64_t *)
                  (*(int64_t *)(unaff_RDI + 0x87b340) + (uint64_t)(in_stack_00000030 >> 4) * 8),
        *(int *)(lVar6 + 8) != 0)) {
    lVar7 = 0;
    if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
      iVar5 = _Mtx_lock(0x180c95528);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      uVar1 = *(int32_t *)(lVar6 + 0xc);
      cVar4 = FUN_180645c10(0x180c95578,0,&system_param1_ptr);
      if ((cVar4 != '\0') && (cVar4 = FUN_180645c10(0x180c95578,0x13,&unknown_var_3472_ptr), cVar4 != '\0')
         ) {
        FUN_180645c10(0x180c95578,uVar1,&unknown_var_3296_ptr);
      }
      render_system_config = render_system_config & 0xffffffff00000000;
      iVar5 = (int)(render_system_config - render_system_config >> 3);
      lVar6 = render_system_config;
      if (0 < iVar5) {
        do {
          lVar2 = *(int64_t *)(lVar6 + lVar7 * 8);
          if ((lVar2 != 0) && (*(char *)(*(int64_t *)(lVar2 + 0x58f8) + 0x1c) != '\0')) {
            FUN_1805b59d0(lVar2,0x180c95578);
            lVar6 = render_system_config;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar5);
      }
      if (render_system_config != 0) {
        FUN_180567f30(render_system_config,0x180c95578);
      }
      render_system_config = 0;
                    // WARNING: Subroutine does not return
      memset(render_system_config,0,(int64_t)(render_system_config >> 3));
    }
    *(int16_t *)(lVar6 + 0x3d1) = 0;
    if (*(int64_t *)(*(int64_t *)(lVar6 + 0xe0) + 0x20) != 0) {
      FUN_180198980();
    }
    plVar3 = *(int64_t **)(lVar6 + 0xe0);
    *(uint64_t *)(lVar6 + 0xe0) = 0;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    *(uint64_t *)(lVar6 + 0xe8) = 0;
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



