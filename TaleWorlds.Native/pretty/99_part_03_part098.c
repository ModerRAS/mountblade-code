#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part098.c - 8 个函数

// 函数: void FUN_1802548c9(uint64_t param_1,uint64_t *param_2)
void FUN_1802548c9(uint64_t param_1,uint64_t *param_2)

{
  uint64_t in_RAX;
  int32_t *puVar1;
  int64_t unaff_RBX;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t unaff_R14;
  int32_t uStackX_20;
  int32_t uStackX_24;
  
  puVar1 = (int32_t *)0x0;
  puVar2 = *(uint64_t **)(unaff_RBX + 0x188);
  lVar3 = (int64_t)puVar2 - (int64_t)param_2 >> 4;
  if (puVar2 < *(uint64_t **)(unaff_RBX + 400)) {
    *(uint64_t **)(unaff_RBX + 0x188) = puVar2 + 2;
    *puVar2 = in_RAX;
    puVar2[1] = unaff_R14;
    return;
  }
  if (lVar3 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = lVar3 * 2;
    if (lVar3 == 0) goto LAB_180254953;
  }
  puVar1 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar3 << 4,*(int8_t *)(unaff_RBX + 0x198))
  ;
  param_2 = *(uint64_t **)(unaff_RBX + 0x180);
  puVar2 = *(uint64_t **)(unaff_RBX + 0x188);
LAB_180254953:
  if (param_2 != puVar2) {
                    // WARNING: Subroutine does not return
    memmove(puVar1,param_2,(int64_t)puVar2 - (int64_t)param_2);
  }
  uStackX_20 = (int32_t)in_RAX;
  uStackX_24 = (int32_t)((uint64_t)in_RAX >> 0x20);
  *puVar1 = uStackX_20;
  puVar1[1] = uStackX_24;
  puVar1[2] = (int)unaff_R14;
  puVar1[3] = (int)((uint64_t)unaff_R14 >> 0x20);
  if (*(int64_t *)(unaff_RBX + 0x180) == 0) {
    *(int32_t **)(unaff_RBX + 0x180) = puVar1;
    *(int32_t **)(unaff_RBX + 400) = puVar1 + lVar3 * 4;
    *(int32_t **)(unaff_RBX + 0x188) = puVar1 + 4;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_1802549ba(void)
void FUN_1802549ba(void)

{
  return;
}






// 函数: void FUN_1802549d0(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802549d0(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  iVar2 = (**(code **)(*param_1 + 0x98))();
  if (iVar2 == 1) {
    FUN_180384720(param_2 + 0x120,param_1,param_3,param_4,uVar7);
  }
  else if (iVar2 == 2) {
    iVar2 = (int)(param_1[7] - param_1[6] >> 3);
    if (0 < iVar2) {
      lVar6 = 0;
      do {
        plVar1 = *(int64_t **)(param_1[6] + lVar6 * 8);
        iVar3 = (**(code **)(*plVar1 + 0x98))(plVar1);
        if (iVar3 == 1) {
          FUN_180384720(param_2 + 0x120,plVar1,param_3,param_4,uVar7);
        }
        else if (iVar3 == 4) {
          lVar4 = plVar1[0x28];
          lVar5 = plVar1[0x27];
          if (lVar5 != lVar4) {
            do {
              FUN_1802c00d0();
              lVar5 = lVar5 + 0x28;
            } while (lVar5 != lVar4);
            lVar5 = plVar1[0x27];
          }
          plVar1[0x28] = lVar5;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar2);
    }
  }
  else if (iVar2 == 4) {
    lVar6 = param_1[0x28];
    lVar4 = param_1[0x27];
    if (lVar4 != lVar6) {
      do {
        FUN_1802c00d0();
        lVar4 = lVar4 + 0x28;
      } while (lVar4 != lVar6);
      lVar4 = param_1[0x27];
    }
    param_1[0x28] = lVar4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180254b30(int *param_1,float *param_2)
void FUN_180254b30(int *param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  uint64_t *puVar3;
  uint *puVar4;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint64_t uVar20;
  float *pfVar21;
  int64_t lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int8_t auStack_d8 [32];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  iVar2 = *param_1;
  if (iVar2 == 0) {
    puVar4 = *(uint **)(param_1 + 2);
    lVar22 = *(int64_t *)(*(int64_t *)(param_1 + 4) + 0x10);
    do {
      LOCK();
      uVar1 = *puVar4;
      *puVar4 = *puVar4 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStack_88 = puVar4[1];
    uStack_84 = puVar4[2];
    uStack_80 = puVar4[3];
    uStack_7c = puVar4[4];
    fVar5 = (float)puVar4[5];
    fVar6 = (float)puVar4[6];
    fVar7 = (float)puVar4[7];
    uStack_6c = puVar4[8];
    *puVar4 = 0;
    fStack_78 = fVar5;
    fStack_74 = fVar6;
    fStack_70 = fVar7;
    uStack_68 = uStack_88;
    uStack_64 = uStack_84;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    fStack_58 = fVar5;
    fStack_54 = fVar6;
    fStack_50 = fVar7;
    uStack_4c = uStack_6c;
    SystemSecurityManager(&fStack_b8,&uStack_88);
    fVar8 = *(float *)(lVar22 + 0x70);
    fVar9 = *(float *)(lVar22 + 0x74);
    fVar10 = *(float *)(lVar22 + 0x78);
    fVar11 = *(float *)(lVar22 + 0x7c);
    fVar12 = *(float *)(lVar22 + 0x80);
    fVar13 = *(float *)(lVar22 + 0x84);
    fVar14 = *(float *)(lVar22 + 0x88);
    fVar15 = *(float *)(lVar22 + 0x8c);
    fVar16 = *(float *)(lVar22 + 0x90);
    fVar17 = *(float *)(lVar22 + 0x94);
    fVar18 = *(float *)(lVar22 + 0x98);
    fVar19 = *(float *)(lVar22 + 0x9c);
    fVar23 = *(float *)(lVar22 + 0xa0);
    fVar24 = *(float *)(lVar22 + 0xa4);
    fVar25 = *(float *)(lVar22 + 0xa8);
    fVar26 = *(float *)(lVar22 + 0xac);
    *param_2 = fStack_b4 * fVar12 + fStack_b8 * fVar8 + fStack_b0 * fVar16;
    param_2[1] = fStack_b4 * fVar13 + fStack_b8 * fVar9 + fStack_b0 * fVar17;
    param_2[2] = fStack_b4 * fVar14 + fStack_b8 * fVar10 + fStack_b0 * fVar18;
    param_2[3] = fStack_b4 * fVar15 + fStack_b8 * fVar11 + fStack_b0 * fVar19;
    param_2[4] = fStack_a4 * fVar12 + fStack_a8 * fVar8 + fStack_a0 * fVar16;
    param_2[5] = fStack_a4 * fVar13 + fStack_a8 * fVar9 + fStack_a0 * fVar17;
    param_2[6] = fStack_a4 * fVar14 + fStack_a8 * fVar10 + fStack_a0 * fVar18;
    param_2[7] = fStack_a4 * fVar15 + fStack_a8 * fVar11 + fStack_a0 * fVar19;
    param_2[8] = fStack_94 * fVar12 + fStack_98 * fVar8 + fStack_90 * fVar16;
    param_2[9] = fStack_94 * fVar13 + fStack_98 * fVar9 + fStack_90 * fVar17;
    param_2[10] = fStack_94 * fVar14 + fStack_98 * fVar10 + fStack_90 * fVar18;
    param_2[0xb] = fStack_94 * fVar15 + fStack_98 * fVar11 + fStack_90 * fVar19;
    fVar23 = fVar6 * fVar12 + fVar5 * fVar8 + fVar7 * fVar16 + fVar23;
    fVar24 = fVar6 * fVar13 + fVar5 * fVar9 + fVar7 * fVar17 + fVar24;
    fVar25 = fVar6 * fVar14 + fVar5 * fVar10 + fVar7 * fVar18 + fVar25;
    fVar26 = fVar6 * fVar15 + fVar5 * fVar11 + fVar7 * fVar19 + fVar26;
  }
  else if (iVar2 == 1) {
    lVar22 = *(int64_t *)(*(int64_t *)(param_1 + 2) + 0x10);
    uVar20 = *(uint64_t *)(lVar22 + 0x78);
    *(uint64_t *)param_2 = *(uint64_t *)(lVar22 + 0x70);
    *(uint64_t *)(param_2 + 2) = uVar20;
    uVar20 = *(uint64_t *)(lVar22 + 0x88);
    *(uint64_t *)(param_2 + 4) = *(uint64_t *)(lVar22 + 0x80);
    *(uint64_t *)(param_2 + 6) = uVar20;
    fVar23 = *(float *)(lVar22 + 0x94);
    fVar24 = *(float *)(lVar22 + 0x98);
    fVar25 = *(float *)(lVar22 + 0x9c);
    param_2[8] = *(float *)(lVar22 + 0x90);
    param_2[9] = fVar23;
    param_2[10] = fVar24;
    param_2[0xb] = fVar25;
    fVar23 = *(float *)(lVar22 + 0xa0);
    fVar24 = *(float *)(lVar22 + 0xa4);
    fVar25 = *(float *)(lVar22 + 0xa8);
    fVar26 = *(float *)(lVar22 + 0xac);
  }
  else {
    if (iVar2 == 2) {
      puVar3 = *(uint64_t **)(param_1 + 2);
      lVar22 = puVar3[5];
      if ((void *)*puVar3 == &processed_var_7336_ptr) {
        pfVar21 = (float *)((int64_t)puVar3 + 0xac);
      }
      else {
        pfVar21 = (float *)(**(code **)((void *)*puVar3 + 0x158))();
      }
      fVar26 = *(float *)(lVar22 + 0x70);
      fVar5 = *(float *)(lVar22 + 0x74);
      fVar6 = *(float *)(lVar22 + 0x78);
      fVar7 = *(float *)(lVar22 + 0x7c);
      fVar8 = *(float *)(lVar22 + 0x80);
      fVar9 = *(float *)(lVar22 + 0x84);
      fVar10 = *(float *)(lVar22 + 0x88);
      fVar11 = *(float *)(lVar22 + 0x8c);
      fVar12 = *(float *)(lVar22 + 0x90);
      fVar13 = *(float *)(lVar22 + 0x94);
      fVar14 = *(float *)(lVar22 + 0x98);
      fVar15 = *(float *)(lVar22 + 0x9c);
      fVar16 = *(float *)(lVar22 + 0xa0);
      fVar17 = *(float *)(lVar22 + 0xa4);
      fVar18 = *(float *)(lVar22 + 0xa8);
      fVar19 = *(float *)(lVar22 + 0xac);
      fVar23 = pfVar21[1];
      fVar24 = *pfVar21;
      fVar25 = pfVar21[2];
      *param_2 = fVar23 * fVar8 + fVar24 * fVar26 + fVar25 * fVar12;
      param_2[1] = fVar23 * fVar9 + fVar24 * fVar5 + fVar25 * fVar13;
      param_2[2] = fVar23 * fVar10 + fVar24 * fVar6 + fVar25 * fVar14;
      param_2[3] = fVar23 * fVar11 + fVar24 * fVar7 + fVar25 * fVar15;
      fVar23 = pfVar21[5];
      fVar24 = pfVar21[4];
      fVar25 = pfVar21[6];
      param_2[4] = fVar23 * fVar8 + fVar24 * fVar26 + fVar25 * fVar12;
      param_2[5] = fVar23 * fVar9 + fVar24 * fVar5 + fVar25 * fVar13;
      param_2[6] = fVar23 * fVar10 + fVar24 * fVar6 + fVar25 * fVar14;
      param_2[7] = fVar23 * fVar11 + fVar24 * fVar7 + fVar25 * fVar15;
      fVar23 = pfVar21[9];
      fVar24 = pfVar21[8];
      fVar25 = pfVar21[10];
      param_2[8] = fVar23 * fVar8 + fVar24 * fVar26 + fVar25 * fVar12;
      param_2[9] = fVar23 * fVar9 + fVar24 * fVar5 + fVar25 * fVar13;
      param_2[10] = fVar23 * fVar10 + fVar24 * fVar6 + fVar25 * fVar14;
      param_2[0xb] = fVar23 * fVar11 + fVar24 * fVar7 + fVar25 * fVar15;
      fVar23 = pfVar21[0xd];
      fVar24 = pfVar21[0xc];
      fVar25 = pfVar21[0xe];
      param_2[0xc] = fVar23 * fVar8 + fVar24 * fVar26 + fVar25 * fVar12 + fVar16;
      param_2[0xd] = fVar23 * fVar9 + fVar24 * fVar5 + fVar25 * fVar13 + fVar17;
      param_2[0xe] = fVar23 * fVar10 + fVar24 * fVar6 + fVar25 * fVar14 + fVar18;
      param_2[0xf] = fVar23 * fVar11 + fVar24 * fVar7 + fVar25 * fVar15 + fVar19;
      goto LAB_180254e51;
    }
    if (iVar2 == 3) {
      lVar22 = *(int64_t *)(param_1 + 2);
      uVar20 = *(uint64_t *)(lVar22 + 0x78);
      *(uint64_t *)param_2 = *(uint64_t *)(lVar22 + 0x70);
      *(uint64_t *)(param_2 + 2) = uVar20;
      uVar20 = *(uint64_t *)(lVar22 + 0x88);
      *(uint64_t *)(param_2 + 4) = *(uint64_t *)(lVar22 + 0x80);
      *(uint64_t *)(param_2 + 6) = uVar20;
      fVar23 = *(float *)(lVar22 + 0x94);
      fVar24 = *(float *)(lVar22 + 0x98);
      fVar25 = *(float *)(lVar22 + 0x9c);
      param_2[8] = *(float *)(lVar22 + 0x90);
      param_2[9] = fVar23;
      param_2[10] = fVar24;
      param_2[0xb] = fVar25;
      fVar23 = *(float *)(lVar22 + 0xa0);
      fVar24 = *(float *)(lVar22 + 0xa4);
      fVar25 = *(float *)(lVar22 + 0xa8);
      fVar26 = *(float *)(lVar22 + 0xac);
    }
    else {
      param_2[0] = 1.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = 0.0;
      param_2[4] = 0.0;
      param_2[5] = 1.0;
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      param_2[8] = 0.0;
      param_2[9] = 0.0;
      param_2[10] = 1.0;
      param_2[0xb] = 0.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      fVar25 = 0.0;
      fVar26 = 1.0;
    }
  }
  param_2[0xc] = fVar23;
  param_2[0xd] = fVar24;
  param_2[0xe] = fVar25;
  param_2[0xf] = fVar26;
LAB_180254e51:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_d8);
}






// 函数: void FUN_180254bd9(int64_t *param_1,int64_t param_2)
void FUN_180254bd9(int64_t *param_1,int64_t param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float *pfVar21;
  float *unaff_RBX;
  uint64_t in_stack_00000090;
  
  lVar4 = param_1[5];
  if (*param_1 == param_2) {
    pfVar21 = (float *)((int64_t)param_1 + 0xac);
  }
  else {
    pfVar21 = (float *)(**(code **)(*param_1 + 0x158))();
  }
  fVar5 = *(float *)(lVar4 + 0x70);
  fVar6 = *(float *)(lVar4 + 0x74);
  fVar7 = *(float *)(lVar4 + 0x78);
  fVar8 = *(float *)(lVar4 + 0x7c);
  fVar9 = *(float *)(lVar4 + 0x80);
  fVar10 = *(float *)(lVar4 + 0x84);
  fVar11 = *(float *)(lVar4 + 0x88);
  fVar12 = *(float *)(lVar4 + 0x8c);
  fVar13 = *(float *)(lVar4 + 0x90);
  fVar14 = *(float *)(lVar4 + 0x94);
  fVar15 = *(float *)(lVar4 + 0x98);
  fVar16 = *(float *)(lVar4 + 0x9c);
  fVar17 = *(float *)(lVar4 + 0xa0);
  fVar18 = *(float *)(lVar4 + 0xa4);
  fVar19 = *(float *)(lVar4 + 0xa8);
  fVar20 = *(float *)(lVar4 + 0xac);
  fVar1 = pfVar21[1];
  fVar2 = *pfVar21;
  fVar3 = pfVar21[2];
  *unaff_RBX = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13;
  unaff_RBX[1] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14;
  unaff_RBX[2] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15;
  unaff_RBX[3] = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar16;
  fVar1 = pfVar21[5];
  fVar2 = pfVar21[4];
  fVar3 = pfVar21[6];
  unaff_RBX[4] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13;
  unaff_RBX[5] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14;
  unaff_RBX[6] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15;
  unaff_RBX[7] = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar16;
  fVar1 = pfVar21[9];
  fVar2 = pfVar21[8];
  fVar3 = pfVar21[10];
  unaff_RBX[8] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13;
  unaff_RBX[9] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14;
  unaff_RBX[10] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15;
  unaff_RBX[0xb] = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar16;
  fVar1 = pfVar21[0xd];
  fVar2 = pfVar21[0xc];
  fVar3 = pfVar21[0xe];
  unaff_RBX[0xc] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13 + fVar17;
  unaff_RBX[0xd] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14 + fVar18;
  unaff_RBX[0xe] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15 + fVar19;
  unaff_RBX[0xf] = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar16 + fVar20;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_180254cd7(int64_t param_1)
void FUN_180254cd7(int64_t param_1)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t *unaff_RBX;
  uint64_t in_stack_00000090;
  
  lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x10);
  uVar5 = *(uint64_t *)(lVar1 + 0x78);
  *unaff_RBX = *(uint64_t *)(lVar1 + 0x70);
  unaff_RBX[1] = uVar5;
  uVar5 = *(uint64_t *)(lVar1 + 0x88);
  unaff_RBX[2] = *(uint64_t *)(lVar1 + 0x80);
  unaff_RBX[3] = uVar5;
  uVar2 = *(int32_t *)(lVar1 + 0x94);
  uVar3 = *(int32_t *)(lVar1 + 0x98);
  uVar4 = *(int32_t *)(lVar1 + 0x9c);
  *(int32_t *)(unaff_RBX + 4) = *(int32_t *)(lVar1 + 0x90);
  *(int32_t *)((int64_t)unaff_RBX + 0x24) = uVar2;
  *(int32_t *)(unaff_RBX + 5) = uVar3;
  *(int32_t *)((int64_t)unaff_RBX + 0x2c) = uVar4;
  uVar2 = *(int32_t *)(lVar1 + 0xa4);
  uVar3 = *(int32_t *)(lVar1 + 0xa8);
  uVar4 = *(int32_t *)(lVar1 + 0xac);
  *(int32_t *)(unaff_RBX + 6) = *(int32_t *)(lVar1 + 0xa0);
  *(int32_t *)((int64_t)unaff_RBX + 0x34) = uVar2;
  *(int32_t *)(unaff_RBX + 7) = uVar3;
  *(int32_t *)((int64_t)unaff_RBX + 0x3c) = uVar4;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_180254d10(uint64_t param_1,uint *param_2,uint64_t param_3,uint64_t param_4,
void FUN_180254d10(uint64_t param_1,uint *param_2,uint64_t param_3,uint64_t param_4,
                  float param_5,uint64_t param_6,float param_7,uint64_t param_8,float param_9)

{
  uint uVar1;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int64_t in_RAX;
  float *unaff_RBX;
  int64_t lVar21;
  float fStackX_20;
  float fStackX_24;
  uint uStack0000000000000050;
  uint uStack0000000000000054;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  uint uStack000000000000006c;
  uint uStack0000000000000070;
  uint uStack0000000000000074;
  uint uStack0000000000000078;
  uint uStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  uint uStack000000000000008c;
  uint64_t in_stack_00000090;
  
  lVar21 = *(int64_t *)(in_RAX + 0x10);
  do {
    LOCK();
    uVar1 = *param_2;
    *param_2 = *param_2 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uStack0000000000000050 = param_2[1];
  uStack0000000000000054 = param_2[2];
  uStack0000000000000058 = param_2[3];
  uStack000000000000005c = param_2[4];
  fVar2 = (float)param_2[5];
  fVar3 = (float)param_2[6];
  fVar4 = (float)param_2[7];
  uStack000000000000006c = param_2[8];
  *param_2 = 0;
  fStack0000000000000060 = fVar2;
  fStack0000000000000064 = fVar3;
  fStack0000000000000068 = fVar4;
  uStack0000000000000070 = uStack0000000000000050;
  uStack0000000000000074 = uStack0000000000000054;
  uStack0000000000000078 = uStack0000000000000058;
  uStack000000000000007c = uStack000000000000005c;
  fStack0000000000000080 = fVar2;
  fStack0000000000000084 = fVar3;
  fStack0000000000000088 = fVar4;
  uStack000000000000008c = uStack000000000000006c;
  SystemSecurityManager(&fStackX_20,&stack0x00000050);
  fVar5 = *(float *)(lVar21 + 0x70);
  fVar6 = *(float *)(lVar21 + 0x74);
  fVar7 = *(float *)(lVar21 + 0x78);
  fVar8 = *(float *)(lVar21 + 0x7c);
  fVar9 = *(float *)(lVar21 + 0x80);
  fVar10 = *(float *)(lVar21 + 0x84);
  fVar11 = *(float *)(lVar21 + 0x88);
  fVar12 = *(float *)(lVar21 + 0x8c);
  fVar13 = *(float *)(lVar21 + 0x90);
  fVar14 = *(float *)(lVar21 + 0x94);
  fVar15 = *(float *)(lVar21 + 0x98);
  fVar16 = *(float *)(lVar21 + 0x9c);
  fVar17 = *(float *)(lVar21 + 0xa0);
  fVar18 = *(float *)(lVar21 + 0xa4);
  fVar19 = *(float *)(lVar21 + 0xa8);
  fVar20 = *(float *)(lVar21 + 0xac);
  *unaff_RBX = fStackX_24 * fVar9 + fStackX_20 * fVar5 + param_5 * fVar13;
  unaff_RBX[1] = fStackX_24 * fVar10 + fStackX_20 * fVar6 + param_5 * fVar14;
  unaff_RBX[2] = fStackX_24 * fVar11 + fStackX_20 * fVar7 + param_5 * fVar15;
  unaff_RBX[3] = fStackX_24 * fVar12 + fStackX_20 * fVar8 + param_5 * fVar16;
  unaff_RBX[4] = param_6._4_4_ * fVar9 + (float)param_6 * fVar5 + param_7 * fVar13;
  unaff_RBX[5] = param_6._4_4_ * fVar10 + (float)param_6 * fVar6 + param_7 * fVar14;
  unaff_RBX[6] = param_6._4_4_ * fVar11 + (float)param_6 * fVar7 + param_7 * fVar15;
  unaff_RBX[7] = param_6._4_4_ * fVar12 + (float)param_6 * fVar8 + param_7 * fVar16;
  unaff_RBX[8] = param_8._4_4_ * fVar9 + (float)param_8 * fVar5 + param_9 * fVar13;
  unaff_RBX[9] = param_8._4_4_ * fVar10 + (float)param_8 * fVar6 + param_9 * fVar14;
  unaff_RBX[10] = param_8._4_4_ * fVar11 + (float)param_8 * fVar7 + param_9 * fVar15;
  unaff_RBX[0xb] = param_8._4_4_ * fVar12 + (float)param_8 * fVar8 + param_9 * fVar16;
  unaff_RBX[0xc] = fVar3 * fVar9 + fVar2 * fVar5 + fVar4 * fVar13 + fVar17;
  unaff_RBX[0xd] = fVar3 * fVar10 + fVar2 * fVar6 + fVar4 * fVar14 + fVar18;
  unaff_RBX[0xe] = fVar3 * fVar11 + fVar2 * fVar7 + fVar4 * fVar15 + fVar19;
  unaff_RBX[0xf] = fVar3 * fVar12 + fVar2 * fVar8 + fVar4 * fVar16 + fVar20;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_180254e4d(uint64_t param_1,uint64_t param_2)
void FUN_180254e4d(uint64_t param_1,uint64_t param_2)

{
  int64_t unaff_RBX;
  uint64_t in_XMM1_Qb;
  uint64_t in_stack_00000090;
  
  *(uint64_t *)(unaff_RBX + 0x30) = param_2;
  *(uint64_t *)(unaff_RBX + 0x38) = in_XMM1_Qb;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
}






