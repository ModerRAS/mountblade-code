#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part047.c - 5 个函数

// 函数: void FUN_180075990(int64_t param_1,int64_t *param_2)
void FUN_180075990(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  uint64_t uStack_40;
  int32_t uStack_38;
  int64_t lStack_30;
  int8_t auStack_28 [8];
  int64_t lStack_20;
  int32_t uStack_18;
  int64_t *plStack_10;
  
  if (*(int64_t *)(param_1 + 0x1b0) != *param_2) {
    if (*param_2 == 0) {
      plStack_10 = (int64_t *)0x0;
      auStack_28[0] = 0;
      uStack_18 = 0;
      lStack_20 = param_1;
      FUN_18007f4c0(auStack_28);
      if ((*(int *)(param_1 + 0x208) != 0) || (*(int *)(param_1 + 0x204) != 0)) {
        uStack_40 = *(uint64_t *)(param_1 + 0x1b0);
        uStack_38 = 0;
        FUN_18007f770(&uStack_40);
        plVar1 = plStack_10;
        FUN_1800860f0(plStack_10 + 2,lStack_30 + 0x10);
        FUN_1800860f0(plVar1 + 7,lStack_30 + 0x38);
        FUN_180086090(plVar1 + 0xc,lStack_30 + 0x60);
        FUN_180085fb0(plVar1 + 0x11,lStack_30 + 0x88);
        FUN_180085ec0(plVar1 + 0x19,lStack_30 + 200);
        FUN_18007f840(&uStack_40);
      }
      FUN_18007f6a0(auStack_28);
      if (plStack_10 != (int64_t *)0x0) {
        (**(code **)(*plStack_10 + 0x38))();
      }
    }
    param_2 = (int64_t *)*param_2;
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x28))(param_2);
    }
    plVar1 = *(int64_t **)(param_1 + 0x1b0);
    *(int64_t **)(param_1 + 0x1b0) = param_2;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  return;
}



int64_t FUN_180075af0(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(param_1 + 0xfd) & 0x20;
  lVar1 = param_1;
  if (bVar3 == 0) {
    lVar1 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
  }
  lVar2 = 2;
  if (0xffff < *(int *)(lVar1 + 0x200)) {
    lVar2 = 4;
  }
  if (bVar3 == 0) {
    param_1 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
  }
  return (*(int *)(param_1 + 0x1fc) * 3) * lVar2;
}



float * FUN_180075b70(float *param_1)

{
  float *pfVar1;
  byte bVar2;
  int64_t *plVar3;
  float *pfVar4;
  char cVar5;
  float *pfVar6;
  uint uVar7;
  uint64_t uVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  int32_t uStack_9c;
  float *pfStack_98;
  int32_t uStack_90;
  int64_t lStack_88;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pfVar6 = param_1;
  if ((*(byte *)((int64_t)param_1 + 0xfd) & 0x20) == 0) {
    pfVar6 = (float *)func_0x000180085de0(*(uint64_t *)(param_1 + 0x6c));
  }
  if ((*(int64_t *)(pfVar6 + 0x84) != 0) && (((uint)param_1[0x40] & 0x80) == 0)) {
    pfVar1 = param_1 + 0x9d;
    pfVar1[0] = 1e+08;
    pfVar1[1] = 1e+08;
    param_1[0x9f] = 1e+08;
    param_1[0xa0] = 3.4028235e+38;
    param_1[0xa1] = -1e+08;
    param_1[0xa2] = -1e+08;
    param_1[0xa3] = -1e+08;
    param_1[0xa4] = 3.4028235e+38;
    uVar7 = 0;
    param_1[0xa9] = 0.0;
    param_1[0xa5] = 0.0;
    param_1[0xa6] = 0.0;
    param_1[0xa7] = 0.0;
    param_1[0xa8] = 3.4028235e+38;
    uStack_90 = 0;
    pfStack_98 = pfVar6;
    FUN_18007f770(&pfStack_98);
    if (*(int *)(lStack_88 + 0x10) != 0) {
      do {
        pfVar6 = (float *)((int64_t)(int)uVar7 * 0x10 + *(int64_t *)(lStack_88 + 0x18));
        fStack_a8 = *pfVar6;
        if (*pfVar1 < fStack_a8) {
          fStack_a8 = *pfVar1;
        }
        fStack_a4 = pfVar6[1];
        if (param_1[0x9e] < fStack_a4) {
          fStack_a4 = param_1[0x9e];
        }
        fStack_a0 = pfVar6[2];
        if (param_1[0x9f] < fStack_a0) {
          fStack_a0 = param_1[0x9f];
        }
        *(uint64_t *)pfVar1 = CONCAT44(fStack_a4,fStack_a8);
        *(uint64_t *)(param_1 + 0x9f) = CONCAT44(uStack_9c,fStack_a0);
        fStack_b8 = *pfVar6;
        if (fStack_b8 < param_1[0xa1]) {
          fStack_b8 = param_1[0xa1];
        }
        fStack_b4 = pfVar6[1];
        if (fStack_b4 < param_1[0xa2]) {
          fStack_b4 = param_1[0xa2];
        }
        fStack_b0 = pfVar6[2];
        if (fStack_b0 < param_1[0xa3]) {
          fStack_b0 = param_1[0xa3];
        }
        *(uint64_t *)(param_1 + 0xa1) = CONCAT44(fStack_b4,fStack_b8);
        *(uint64_t *)(param_1 + 0xa3) = CONCAT44(uStack_ac,fStack_b0);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(lStack_88 + 0x10));
    }
    pfVar6 = *(float **)(param_1 + 0x6e);
    if ((pfVar6 != (float *)0x0) && (((uint)pfVar6[0x4e] & 0x3000) != 0)) {
      uStack_78 = *(uint64_t *)(param_1 + 0x48);
      uStack_70 = *(uint64_t *)(param_1 + 0x4a);
      uStack_68 = *(uint64_t *)(param_1 + 0x4c);
      uStack_60 = *(uint64_t *)(param_1 + 0x4e);
      fStack_58 = param_1[0x50];
      fStack_54 = param_1[0x51];
      fStack_50 = param_1[0x52];
      fStack_4c = param_1[0x53];
      uStack_48 = *(uint64_t *)(param_1 + 0x54);
      uStack_40 = *(uint64_t *)(param_1 + 0x56);
      FUN_180085c10(&uStack_78);
      FUN_18063a240(pfVar1,pfVar1,&uStack_78);
      pfVar6 = *(float **)(param_1 + 0x6e);
      if (((uint)pfVar6[0x4e] & 0x3000) == 0x2000) {
        uStack_78 = *(uint64_t *)(param_1 + 0x48);
        uStack_70 = *(uint64_t *)(param_1 + 0x4a);
        uStack_68 = *(uint64_t *)(param_1 + 0x4c);
        uStack_60 = *(uint64_t *)(param_1 + 0x4e);
        fStack_58 = param_1[0x50];
        fStack_54 = param_1[0x51];
        fStack_50 = param_1[0x52];
        fStack_4c = param_1[0x53];
        uStack_48 = *(uint64_t *)(param_1 + 0x54);
        uStack_40 = *(uint64_t *)(param_1 + 0x56);
        FUN_180085ac0(&uStack_78,0x3fc90fdb);
        FUN_18063a240(pfVar1,pfVar1,&uStack_78);
        uStack_78 = *(uint64_t *)(param_1 + 0x48);
        uStack_70 = *(uint64_t *)(param_1 + 0x4a);
        uStack_68 = *(uint64_t *)(param_1 + 0x4c);
        uStack_60 = *(uint64_t *)(param_1 + 0x4e);
        fStack_58 = param_1[0x50];
        fStack_54 = param_1[0x51];
        fStack_50 = param_1[0x52];
        fStack_4c = param_1[0x53];
        uStack_48 = *(uint64_t *)(param_1 + 0x54);
        uStack_40 = *(uint64_t *)(param_1 + 0x56);
        FUN_180085970(&uStack_78);
        pfVar6 = (float *)FUN_18063a240(pfVar1,pfVar1,&uStack_78);
      }
    }
    pfVar4 = pfStack_98;
    if (param_1[0xa1] < *pfVar1) {
      param_1[0xa9] = 0.0;
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      param_1[0x9f] = 0.0;
      param_1[0xa0] = 0.0;
      param_1[0xa1] = 0.0;
      param_1[0xa2] = 0.0;
      param_1[0xa3] = 0.0;
      param_1[0xa4] = 0.0;
      param_1[0xa5] = 0.0;
      param_1[0xa6] = 0.0;
      param_1[0xa7] = 0.0;
      param_1[0xa8] = 0.0;
    }
    else {
      param_1[0xa5] = (param_1[0xa1] + *pfVar1) * 0.5;
      param_1[0xa6] = (param_1[0xa2] + param_1[0x9e]) * 0.5;
      param_1[0xa7] = (param_1[0xa3] + param_1[0x9f]) * 0.5;
      param_1[0xa8] = 3.4028235e+38;
      fVar10 = 0.0;
      uVar8 = (uint64_t)*(uint *)(lStack_88 + 0x10);
      if (0 < (int)*(uint *)(lStack_88 + 0x10)) {
        pfVar6 = *(float **)(lStack_88 + 0x18);
        fVar11 = fVar10;
        do {
          fVar10 = (*pfVar6 - param_1[0xa5]) * (*pfVar6 - param_1[0xa5]) +
                   (pfVar6[1] - param_1[0xa6]) * (pfVar6[1] - param_1[0xa6]) +
                   (pfVar6[2] - param_1[0xa7]) * (pfVar6[2] - param_1[0xa7]);
          if (fVar10 <= fVar11) {
            fVar10 = fVar11;
          }
          pfVar6 = pfVar6 + 4;
          uVar8 = uVar8 - 1;
          fVar11 = fVar10;
        } while (uVar8 != 0);
      }
      param_1[0xa9] = SQRT(fVar10);
    }
    if (pfStack_98 != (float *)0x0) {
      while( true ) {
        LOCK();
        cVar5 = *(char *)(pfVar4 + 0x3b);
        bVar9 = cVar5 == '\0';
        if (bVar9) {
          *(char *)(pfVar4 + 0x3b) = '\x01';
          cVar5 = '\0';
        }
        UNLOCK();
        if (bVar9) break;
        fVar10 = (float)_Thrd_id();
        if ((pfVar4[0x3c] == fVar10) || (pfVar4[0x3c] != 0.0)) goto LAB_180075f4f;
        Sleep();
      }
      cVar5 = '\0';
LAB_180075f4f:
      LOCK();
      pfVar1 = pfVar4 + 0x3a;
      fVar10 = *pfVar1;
      pfVar6 = (float *)(uint64_t)(uint)fVar10;
      *pfVar1 = (float)((int)*pfVar1 + -1);
      UNLOCK();
      if (cVar5 == '\0') {
        if ((((fVar10 == 1.4013e-45) && (*(int64_t *)(pfStack_98 + 0x84) != 0)) &&
            (pfVar6 = pfStack_98, FUN_1800791a0(pfStack_98), *(char *)(pfVar6 + 0x3f) == '\0')) &&
           ((*(char *)(pfVar6 + 0x3d) == '\0' &&
            (((*(byte *)((int64_t)pfVar6 + 0xfd) & 0x20) == 0 ||
             ((*(byte *)((int64_t)pfVar6 + 0xfe) & 1) == 0)))))) {
          plVar3 = *(int64_t **)(pfVar6 + 0x84);
          pfVar6[0x84] = 0.0;
          pfVar6[0x85] = 0.0;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
        }
        LOCK();
        bVar2 = *(byte *)(pfVar4 + 0x3b);
        *(byte *)(pfVar4 + 0x3b) = 0;
        pfVar6 = (float *)(uint64_t)bVar2;
        UNLOCK();
      }
    }
  }
  return pfVar6;
}





// 函数: void FUN_180075ff0(int64_t *param_1)
void FUN_180075ff0(int64_t *param_1)

{
  ushort uVar1;
  int64_t *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  float fVar8;
  float fVar9;
  int8_t auStack_138 [8];
  int64_t *plStack_130;
  int32_t uStack_128;
  int64_t *plStack_120;
  int64_t *plStack_118;
  int32_t uStack_110;
  int64_t lStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  int8_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_d8;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int8_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a0;
  uint64_t uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  while( true ) {
    if (((int)param_1[0x41] != 0) &&
       ((fVar8 = *(float *)(param_1 + 0x5b) - *(float *)((int64_t)param_1 + 0x2dc), fVar8 <= -0.01
        || (0.01 <= fVar8)))) {
      plVar2 = param_1;
      if ((((*(byte *)((int64_t)param_1 + 0xfd) & 0x40) == 0) || (param_1[0x42] == 0)) &&
         (param_1[0x36] != 0)) {
        plVar2 = (int64_t *)FUN_180085900();
      }
      iVar6 = 0;
      if (plVar2 == param_1) {
        plStack_120 = (int64_t *)0x0;
        auStack_138[0] = 0;
        uStack_128 = 0;
        plStack_130 = plVar2;
        FUN_18007f4c0(auStack_138);
        plVar2 = plStack_120 + 0x16;
        uVar1 = *(ushort *)(plStack_120 + 0x18);
        fVar8 = *(float *)(plStack_120[0x17] + -4 + (uint64_t)uVar1 * 4);
        fVar9 = *(float *)((int64_t)param_1 + 0x2dc);
        if (fVar8 < *(float *)((int64_t)param_1 + 0x2dc)) {
          *(float *)((int64_t)param_1 + 0x2dc) = fVar8;
          uVar1 = *(ushort *)(plStack_120 + 0x18);
          fVar9 = fVar8;
        }
        uVar3 = (uint)uVar1;
        if (uVar1 < 2) {
          iVar6 = uVar3 - 1;
          fVar8 = 0.0;
          iVar5 = iVar6;
        }
        else {
          iVar5 = uVar3 - 1;
          if (0 < (int)(uVar3 - 2)) {
            do {
              iVar4 = iVar5 + iVar6 >> 1;
              if (*(float *)(plStack_120[0x17] + (int64_t)iVar4 * 4) <= fVar9) {
                iVar6 = iVar4;
                iVar4 = iVar5;
              }
              iVar5 = iVar4;
            } while (iVar6 < iVar5 + -1);
          }
          fVar8 = *(float *)(plStack_120[0x17] + (int64_t)iVar6 * 4);
          fVar8 = (fVar9 - fVar8) / (*(float *)(plStack_120[0x17] + (int64_t)iVar5 * 4) - fVar8);
          if (0.0 <= fVar8) {
            if (1.0 <= fVar8) {
              fVar8 = 1.0;
            }
          }
          else {
            fVar8 = 0.0;
          }
        }
        if (-1 < iVar6) {
          (**(code **)(*param_1 + 0x28))(param_1);
          uStack_100 = 0;
          uStack_f8 = 0;
          uStack_d8 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          FUN_18022f2e0(&uStack_100,param_1,0);
          (**(code **)(*param_1 + 0x38))(param_1);
          FUN_18022f9b0(&uStack_100,plVar2,iVar5,iVar6,fVar8);
          FUN_18022f410(&uStack_100);
        }
        FUN_18007f6a0(auStack_138);
        if (plStack_120 != (int64_t *)0x0) {
          (**(code **)(*plStack_120 + 0x38))();
        }
      }
      else {
        uStack_110 = 0;
        plStack_118 = plVar2;
        FUN_18007f770(&plStack_118);
        lVar7 = lStack_108 + 0xb0;
        uVar1 = *(ushort *)(lStack_108 + 0xc0);
        fVar8 = *(float *)(*(int64_t *)(lStack_108 + 0xb8) + -4 + (uint64_t)uVar1 * 4);
        fVar9 = *(float *)((int64_t)param_1 + 0x2dc);
        if (fVar8 < *(float *)((int64_t)param_1 + 0x2dc)) {
          *(float *)((int64_t)param_1 + 0x2dc) = fVar8;
          uVar1 = *(ushort *)(lStack_108 + 0xc0);
          fVar9 = fVar8;
        }
        uVar3 = (uint)uVar1;
        if (uVar1 < 2) {
          iVar6 = uVar3 - 1;
          fVar8 = 0.0;
          iVar5 = iVar6;
        }
        else {
          iVar5 = uVar3 - 1;
          if (0 < (int)(uVar3 - 2)) {
            do {
              iVar4 = iVar5 + iVar6 >> 1;
              if (*(float *)(*(int64_t *)(lStack_108 + 0xb8) + (int64_t)iVar4 * 4) <= fVar9) {
                iVar6 = iVar4;
                iVar4 = iVar5;
              }
              iVar5 = iVar4;
            } while (iVar6 < iVar5 + -1);
          }
          fVar8 = *(float *)(*(int64_t *)(lStack_108 + 0xb8) + (int64_t)iVar6 * 4);
          fVar8 = (fVar9 - fVar8) /
                  (*(float *)(*(int64_t *)(lStack_108 + 0xb8) + (int64_t)iVar5 * 4) - fVar8);
          if (0.0 <= fVar8) {
            if (1.0 <= fVar8) {
              fVar8 = 1.0;
            }
          }
          else {
            fVar8 = 0.0;
          }
        }
        if (-1 < iVar6) {
          (**(code **)(*param_1 + 0x28))(param_1);
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_a0 = 0;
          uStack_b0 = 0;
          uStack_b8 = 0;
          FUN_18022f2e0(&uStack_c8,param_1,0);
          (**(code **)(*param_1 + 0x38))(param_1);
          FUN_18022f9b0(&uStack_c8,lVar7,iVar5,iVar6,fVar8);
          FUN_18022f410(&uStack_c8);
        }
        FUN_18007f840(&plStack_118);
      }
      *(int32_t *)(param_1 + 0x5b) = *(int32_t *)((int64_t)param_1 + 0x2dc);
    }
    if ((*(byte *)((int64_t)param_1 + 0xfd) & 0x20) != 0) break;
    param_1 = (int64_t *)param_1[0x36];
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1800763c0(int64_t *param_1,int64_t *param_2)

{
  byte *pbVar1;
  int32_t uVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  uint64_t uVar18;
  int64_t *plVar19;
  void *puVar20;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int32_t uVar21;
  
  plStackX_10 = param_2;
  uVar18 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x300,0x10,9,0,0xfffffffffffffffe);
  plVar19 = (int64_t *)FUN_180075030(uVar18,0,0);
  *param_2 = (int64_t)plVar19;
  if (plVar19 != (int64_t *)0x0) {
    (**(code **)(*plVar19 + 0x28))(plVar19);
  }
  uVar21 = 1;
  *(byte *)(*param_2 + 0xfd) = *(byte *)(*param_2 + 0xfd) & 0xdf;
  lVar11 = param_1[0x18];
  lVar3 = *param_2;
  *(int64_t *)(lVar3 + 0xb8) = param_1[0x17];
  *(int64_t *)(lVar3 + 0xc0) = lVar11;
  *(byte *)(*param_2 + 0xfd) = *(byte *)(*param_2 + 0xfd) & 0xbf;
  uVar2 = *(int32_t *)((int64_t)param_1 + 0xcc);
  lVar11 = param_1[0x1a];
  uVar4 = *(int32_t *)((int64_t)param_1 + 0xd4);
  lVar12 = param_1[0x1b];
  uVar5 = *(int32_t *)((int64_t)param_1 + 0xdc);
  lVar13 = param_1[0x1c];
  uVar6 = *(int32_t *)((int64_t)param_1 + 0xe4);
  lVar3 = *param_2;
  *(int *)(lVar3 + 200) = (int)param_1[0x19];
  *(int32_t *)(lVar3 + 0xcc) = uVar2;
  *(int *)(lVar3 + 0xd0) = (int)lVar11;
  *(int32_t *)(lVar3 + 0xd4) = uVar4;
  *(int *)(lVar3 + 0xd8) = (int)lVar12;
  *(int32_t *)(lVar3 + 0xdc) = uVar5;
  *(int *)(lVar3 + 0xe0) = (int)lVar13;
  *(int32_t *)(lVar3 + 0xe4) = uVar6;
  if ((*(byte *)((int64_t)param_1 + 0xfd) & 0x20) == 0) {
    FUN_180075990(*param_2,param_1 + 0x36);
  }
  else {
    lVar3 = *param_2;
    plStackX_8 = param_1;
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_180075990(lVar3,&plStackX_8);
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  *(int64_t *)(*param_2 + 0xa8) = param_1[0x15];
  pbVar1 = (byte *)(*param_2 + 0xfd);
  *pbVar1 = *pbVar1 ^ (*(byte *)(*param_2 + 0xfd) ^ *(byte *)((int64_t)param_1 + 0xfd)) & 2;
  *(int *)(*param_2 + 0x100) = (int)param_1[0x20];
  lVar11 = param_1[0x48];
  lVar3 = *param_2;
  *(int64_t *)(lVar3 + 0x238) = param_1[0x47];
  *(int64_t *)(lVar3 + 0x240) = lVar11;
  lVar11 = param_1[0x4a];
  lVar3 = *param_2;
  *(int64_t *)(lVar3 + 0x248) = param_1[0x49];
  *(int64_t *)(lVar3 + 0x250) = lVar11;
  uVar2 = *(int32_t *)((int64_t)param_1 + 0x2ac);
  lVar11 = param_1[0x56];
  uVar4 = *(int32_t *)((int64_t)param_1 + 0x2b4);
  lVar3 = *param_2;
  *(int *)(lVar3 + 0x2a8) = (int)param_1[0x55];
  *(int32_t *)(lVar3 + 0x2ac) = uVar2;
  *(int *)(lVar3 + 0x2b0) = (int)lVar11;
  *(int32_t *)(lVar3 + 0x2b4) = uVar4;
  uVar2 = *(int32_t *)((int64_t)param_1 + 700);
  lVar11 = param_1[0x58];
  uVar4 = *(int32_t *)((int64_t)param_1 + 0x2c4);
  lVar3 = *param_2;
  *(int *)(lVar3 + 0x2b8) = (int)param_1[0x57];
  *(int32_t *)(lVar3 + 700) = uVar2;
  *(int *)(lVar3 + 0x2c0) = (int)lVar11;
  *(int32_t *)(lVar3 + 0x2c4) = uVar4;
  *(int *)(*param_2 + 0x108) = (int)param_1[0x21];
  if ((int64_t *)(*param_2 + 0x218) != param_1 + 0x43) {
    FUN_1800588c0((int64_t *)(*param_2 + 0x218),param_1[0x43],param_1[0x44]);
  }
  puVar20 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar20 = (void *)param_1[3];
  }
  (**(code **)(*(int64_t *)(*param_2 + 0x10) + 0x10))((int64_t *)(*param_2 + 0x10),puVar20);
  *(int8_t *)(*param_2 + 0xf6) = *(int8_t *)((int64_t)param_1 + 0xf6);
  uVar18 = *(uint64_t *)((int64_t)param_1 + 0x27c);
  uVar7 = *(uint64_t *)((int64_t)param_1 + 0x284);
  uVar8 = *(uint64_t *)((int64_t)param_1 + 0x28c);
  uVar9 = *(uint64_t *)((int64_t)param_1 + 0x294);
  uVar10 = *(uint64_t *)((int64_t)param_1 + 0x29c);
  uVar2 = *(int32_t *)((int64_t)param_1 + 0x2a4);
  lVar3 = *param_2;
  *(uint64_t *)(lVar3 + 0x274) = *(uint64_t *)((int64_t)param_1 + 0x274);
  *(uint64_t *)(lVar3 + 0x27c) = uVar18;
  *(uint64_t *)(lVar3 + 0x284) = uVar7;
  *(uint64_t *)(lVar3 + 0x28c) = uVar8;
  *(uint64_t *)(lVar3 + 0x294) = uVar9;
  *(uint64_t *)(lVar3 + 0x29c) = uVar10;
  *(int32_t *)(lVar3 + 0x2a4) = uVar2;
  *(int8_t *)(*param_2 + 0xff) = *(int8_t *)((int64_t)param_1 + 0xff);
  *(int *)(*param_2 + 0x270) = (int)param_1[0x4e];
  lVar11 = param_1[0x25];
  lVar12 = param_1[0x26];
  lVar13 = param_1[0x27];
  lVar14 = param_1[0x28];
  lVar15 = param_1[0x29];
  lVar16 = param_1[0x2a];
  lVar17 = param_1[0x2b];
  lVar3 = *param_2;
  *(int64_t *)(lVar3 + 0x120) = param_1[0x24];
  *(int64_t *)(lVar3 + 0x128) = lVar11;
  *(int64_t *)(lVar3 + 0x130) = lVar12;
  *(int64_t *)(lVar3 + 0x138) = lVar13;
  *(int64_t *)(lVar3 + 0x140) = lVar14;
  *(int64_t *)(lVar3 + 0x148) = lVar15;
  *(int64_t *)(lVar3 + 0x150) = lVar16;
  *(int64_t *)(lVar3 + 0x158) = lVar17;
  lVar11 = param_1[0x2d];
  lVar12 = param_1[0x2e];
  lVar13 = param_1[0x2f];
  lVar14 = param_1[0x30];
  uVar2 = *(int32_t *)((int64_t)param_1 + 0x184);
  lVar15 = param_1[0x31];
  uVar4 = *(int32_t *)((int64_t)param_1 + 0x18c);
  lVar16 = param_1[0x32];
  uVar5 = *(int32_t *)((int64_t)param_1 + 0x194);
  lVar17 = param_1[0x33];
  uVar6 = *(int32_t *)((int64_t)param_1 + 0x19c);
  lVar3 = *param_2;
  *(int64_t *)(lVar3 + 0x160) = param_1[0x2c];
  *(int64_t *)(lVar3 + 0x168) = lVar11;
  *(int64_t *)(lVar3 + 0x170) = lVar12;
  *(int64_t *)(lVar3 + 0x178) = lVar13;
  *(int *)(lVar3 + 0x180) = (int)lVar14;
  *(int32_t *)(lVar3 + 0x184) = uVar2;
  *(int *)(lVar3 + 0x188) = (int)lVar15;
  *(int32_t *)(lVar3 + 0x18c) = uVar4;
  *(int *)(lVar3 + 400) = (int)lVar16;
  *(int32_t *)(lVar3 + 0x194) = uVar5;
  *(int *)(lVar3 + 0x198) = (int)lVar17;
  *(int32_t *)(lVar3 + 0x19c) = uVar6;
  pbVar1 = (byte *)(*param_2 + 0xfd);
  *pbVar1 = *pbVar1 ^ (*(byte *)(*param_2 + 0xfd) ^ *(byte *)((int64_t)param_1 + 0xfd)) & 1;
  *(int8_t *)(*param_2 + 0xf7) = *(int8_t *)((int64_t)param_1 + 0xf7);
  *(int *)(*param_2 + 0x208) = (int)param_1[0x41];
  *(int *)(*param_2 + 0x1f8) = (int)param_1[0x3f];
  *(int32_t *)(*param_2 + 0x1fc) = *(int32_t *)((int64_t)param_1 + 0x1fc);
  *(int *)(*param_2 + 0x200) = (int)param_1[0x40];
  *(int32_t *)(*param_2 + 0x204) = *(int32_t *)((int64_t)param_1 + 0x204);
  *(int *)(*param_2 + 0x2d8) = (int)param_1[0x5b];
  uVar2 = *(int32_t *)((int64_t)param_1 + 0x2dc);
  *(int32_t *)(*param_2 + 0x2dc) = uVar2;
  lVar3 = *param_2;
  plVar19 = (int64_t *)param_1[0x4d];
  if (plVar19 != (int64_t *)0x0) {
    plStackX_8 = plVar19;
    (**(code **)(*plVar19 + 0x28))(plVar19,uVar2,(int)lVar14,(int)lVar16,uVar21);
  }
  plStackX_8 = *(int64_t **)(lVar3 + 0x268);
  *(int64_t **)(lVar3 + 0x268) = plVar19;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  FUN_180076910(*param_2,param_1 + 0x37);
  return param_2;
}





// 函数: void FUN_180076760(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180076760(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plStack_40;
  int64_t *plStack_38;
  int8_t auStack_30 [8];
  uint64_t uStack_28;
  int64_t *plStack_18;
  int16_t uStack_10;
  char cStack_e;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_1[0x42] == 0) {
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    *(int32_t *)(param_1 + 0x41) = 0;
    FUN_180079520();
  }
  else {
    (**(code **)(*param_1 + 0x28))();
    plStack_40 = (int64_t *)0x0;
    plStack_38 = (int64_t *)0x0;
    plStack_18 = (int64_t *)0x0;
    uStack_28 = 0;
    auStack_30[0] = 0;
    FUN_18022f2e0(&plStack_40,param_1,0,param_4,uVar2);
    (**(code **)(*param_1 + 0x38))(param_1);
    plVar1 = plStack_38;
    *(int32_t *)(plStack_38 + 2) = 0;
    *(int32_t *)(plStack_38 + 7) = 0;
    *(int32_t *)(plStack_38 + 0x11) = 0;
    *(int32_t *)(plStack_38 + 0xc) = 0;
    *(int16_t *)(plStack_38 + 0x18) = 0;
    if (plStack_38[0x17] != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plStack_38[0x17] = 0;
    FUN_180085530(plStack_38[0x16]);
    plVar1[0x16] = 0;
    *(int32_t *)(plVar1 + 0x19) = 0;
    uStack_10 = 0x101;
    if ((plStack_40 != (int64_t *)0x0) && (plStack_38 != (int64_t *)0x0)) {
      if (cStack_e != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(auStack_30);
      if ((char)uStack_10 != '\0') {
        FUN_180079520(plStack_40);
      }
      if (uStack_10._1_1_ != '\0') {
        FUN_180079520(plStack_40);
      }
      plVar1 = plStack_38;
      plStack_38 = (int64_t *)0x0;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
    }
    FUN_18007f6a0(auStack_30);
    if (plStack_18 != (int64_t *)0x0) {
      (**(code **)(*plStack_18 + 0x38))();
    }
    if (plStack_38 != (int64_t *)0x0) {
      (**(code **)(*plStack_38 + 0x38))();
    }
    if (plStack_40 != (int64_t *)0x0) {
      (**(code **)(*plStack_40 + 0x38))();
      return;
    }
  }
  return;
}





// 函数: void FUN_180076910(int64_t param_1,int64_t *param_2)
void FUN_180076910(int64_t param_1,int64_t *param_2)

{
  byte bVar1;
  int64_t lVar2;
  int8_t uVar3;
  byte bVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  
  if (*param_2 != *(int64_t *)(param_1 + 0x1b8)) {
    if (*(char *)(param_1 + 0xb1) != '\0') {
                    // WARNING: Subroutine does not return
      FUN_1808fd200();
    }
    RenderingSystem_ResourceAllocator(param_1 + 0x1b8);
    lVar2 = *(int64_t *)(param_1 + 0x1b8);
    if (lVar2 != 0) {
      lVar6 = 0;
      bVar1 = *(byte *)(param_1 + 0xfd);
      bVar4 = (byte)((uint)*(int32_t *)(*(int64_t *)(lVar2 + 0x1e0) + 0x1588) >> 0x1b) << 7;
      *(byte *)(param_1 + 0xfd) = bVar4 | bVar1 & 0x7f;
      uVar5 = *(uint *)(lVar2 + 0x138) & 0x3000;
      if (uVar5 == 0x1000) {
        *(int8_t *)(param_1 + 0xf7) = 1;
      }
      else {
        uVar3 = 0;
        if (uVar5 == 0x2000) {
          uVar3 = 2;
        }
        *(int8_t *)(param_1 + 0xf7) = uVar3;
      }
      bVar4 = bVar4 | bVar1 & 0x77;
      *(byte *)(param_1 + 0xfd) = bVar4;
      plVar7 = (int64_t *)(lVar2 + 0xb8);
      do {
        if (0xf < lVar6) break;
        if ((*plVar7 != 0) && (*(int *)(*plVar7 + 0x36c) != 0)) {
          bVar4 = bVar4 | 8;
          *(byte *)(param_1 + 0xfd) = bVar4;
        }
        lVar6 = lVar6 + 1;
        plVar7 = plVar7 + 1;
      } while ((bVar4 & 8) == 0);
      FUN_1800781e0(param_1);
    }
  }
  return;
}





// 函数: void FUN_180076a20(int64_t param_1)
void FUN_180076a20(int64_t param_1)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(0x180c91910);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  *(char *)(param_1 + 0xfc) = *(char *)(param_1 + 0xfc) + '\x01';
  iVar1 = _Mtx_unlock(0x180c91910);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}





