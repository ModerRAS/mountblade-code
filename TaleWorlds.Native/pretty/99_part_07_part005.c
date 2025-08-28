#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part005.c - 4 个函数

// 函数: void FUN_1803feb90(longlong param_1,longlong param_2)
void FUN_1803feb90(longlong param_1,longlong param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  void *puVar9;
  int8_t auStack_188 [32];
  int32_t uStack_168;
  longlong *plStack_160;
  longlong *plStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_134 [8];
  uint64_t uStack_12c;
  int16_t uStack_124;
  int8_t uStack_122;
  int32_t uStack_121;
  int16_t uStack_11d;
  int32_t uStack_118;
  int8_t uStack_114;
  void *puStack_e8;
  int8_t *puStack_e0;
  uint uStack_d8;
  int8_t auStack_d0 [136];
  ulonglong uStack_48;
  longlong lVar8;
  
  uStack_150 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_188;
  uStack_168 = 0;
  uVar1 = *(int32_t *)(param_2 + 0x3588);
  *(int32_t *)(param_1 + 0x460) = uVar1;
  uVar2 = *(int32_t *)(param_2 + 0x358c);
  *(int32_t *)(param_1 + 0x464) = uVar2;
  auStack_134 = (int8_t  [8])0x0;
  uStack_12c = 0x3f80000000000000;
  uStack_124 = 0x100;
  uStack_121 = 0;
  uStack_11d = 0;
  uStack_118 = 0xffffffff;
  uStack_114 = 0;
  uStack_148 = (void *)CONCAT44(uVar2,uVar1);
  puStack_140 = (int8_t *)0x100000001;
  uStack_138 = 0x1e;
  uStack_122 = 1;
  puStack_e8 = &unknown_var_3432_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = *(uint *)(param_1 + 0x20);
  puVar9 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    puVar9 = *(void **)(param_1 + 0x18);
  }
  strcpy_s(auStack_d0,0x80,puVar9);
  uVar5 = (ulonglong)uStack_d8;
  uVar6 = uStack_d8 + 1;
  if (uVar6 < 0x7f) {
    *(int16_t *)(puStack_e0 + uVar5) = 0x5f;
    uVar5 = (ulonglong)uVar6;
    uStack_d8 = uVar6;
  }
  lVar7 = -1;
  puVar9 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
    puVar9 = *(void **)(param_2 + 0x3528);
  }
  do {
    lVar8 = lVar7;
    lVar7 = lVar8 + 1;
  } while (puVar9[lVar7] != '\0');
  if ((0 < (int)lVar7) && ((uint)((int)uVar5 + (int)lVar7) < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_e0 + uVar5,puVar9,(longlong)((int)lVar8 + 2));
  }
  puVar3 = (uint64_t *)FUN_1800b1230(_DAT_180c86930,&plStack_158,&puStack_e8,&uStack_148);
  uStack_168 = 1;
  uVar4 = *puVar3;
  *puVar3 = 0;
  plStack_160 = *(longlong **)(param_1 + 0x428);
  *(uint64_t *)(param_1 + 0x428) = uVar4;
  if (plStack_160 != (longlong *)0x0) {
    (**(code **)(*plStack_160 + 0x38))();
  }
  uStack_168 = 0;
  if (plStack_158 != (longlong *)0x0) {
    (**(code **)(*plStack_158 + 0x38))();
  }
  *(int *)(param_1 + 0x480) =
       (int)(longlong)((double)*(int *)(param_2 + 0x3588) * *(double *)(param_1 + 0x58));
  *(int *)(param_1 + 0x484) =
       (int)(longlong)((double)*(int *)(param_2 + 0x358c) * *(double *)(param_1 + 0x60));
  *(int *)(param_1 + 0x478) =
       (int)(longlong)((double)*(int *)(param_2 + 0x3590) * *(double *)(param_1 + 0x58));
  *(int *)(param_1 + 0x47c) =
       (int)(longlong)((double)*(int *)(param_2 + 0x3594) * *(double *)(param_1 + 0x60));
  uVar4 = *(uint64_t *)(param_1 + 0x30);
  uStack_148 = &unknown_var_3480_ptr;
  puStack_140 = auStack_134 + 4;
  auStack_134[4] = 0;
  uStack_138 = 0xd;
  strcpy_s(auStack_134 + 4,0x40,&unknown_var_3112_ptr);
  uVar4 = FUN_180240430(uVar4,&uStack_148,1);
  *(uint64_t *)(param_1 + 0x4d0) = uVar4;
  uStack_148 = &unknown_var_720_ptr;
  puStack_e8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803fee70(longlong *param_1,uint64_t param_2,longlong param_3,int32_t param_4,
void FUN_1803fee70(longlong *param_1,uint64_t param_2,longlong param_3,int32_t param_4,
                  int32_t param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int8_t auStack_148 [32];
  int32_t uStack_128;
  int32_t uStack_120;
  longlong lStack_118;
  void **ppuStack_108;
  int8_t auStack_100 [4];
  int8_t auStack_fc [4];
  int8_t auStack_f8 [32];
  uint64_t uStack_d8;
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [72];
  ulonglong uStack_68;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_148;
  FUN_1802c22a0(auStack_100,&unknown_var_5904_ptr);
  puVar4 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar4 = (void *)param_1[3];
  }
  ppuStack_108 = &puStack_c8;
  lVar3 = 0;
  puStack_c8 = &unknown_var_3480_ptr;
  puStack_c0 = auStack_b0;
  uStack_b8 = 0;
  auStack_b0[0] = 0;
  if (puVar4 != (void *)0x0) {
    FUN_180049bf0(&puStack_c8);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_c8);
  }
  if ((int)param_1[9] < 1) {
    *(int *)(param_1 + 0x8e) =
         (int)(longlong)((double)(int)*(float *)(param_3 + 0x11c20) * (double)param_1[0xb]);
    *(int *)((longlong)param_1 + 0x474) =
         (int)(longlong)((double)(int)*(float *)(param_3 + 0x11c24) * (double)param_1[0xc]);
    (**(code **)(*param_1 + 0x10))(param_1,auStack_f8,auStack_fc);
    fVar6 = (float)*(uint *)(param_1 + 0x8e);
    fVar7 = (float)*(uint *)((longlong)param_1 + 0x474);
    fVar8 = 1.0 / (float)*(uint *)(param_1 + 0x8f);
    *(float *)(param_1 + 0x99) = fVar8 * fVar6 - fVar8;
    fVar9 = 1.0 / (float)*(uint *)((longlong)param_1 + 0x47c);
    *(float *)((longlong)param_1 + 0x4cc) = fVar9 * fVar7 - fVar9;
    *(float *)(param_1 + 0x91) = (1.0 / (float)*(uint *)(param_1 + 0x90)) * fVar6;
    fVar5 = 1.0 / (float)*(uint *)((longlong)param_1 + 0x484);
    *(float *)((longlong)param_1 + 0x48c) = fVar5 * fVar7;
    *(float *)(param_1 + 0x92) = fVar6 * 0.5 * (1.0 / (float)*(uint *)(param_1 + 0x90)) - 0.5;
    *(float *)((longlong)param_1 + 0x494) = fVar7 * 0.5 * fVar5 - 0.5;
    *(float *)(param_1 + 0x93) = fVar8;
    *(float *)((longlong)param_1 + 0x49c) = fVar9;
    *(float *)(param_1 + 0x94) = fVar8;
    *(float *)((longlong)param_1 + 0x4a4) = -fVar9;
    *(float *)(param_1 + 0x95) = -fVar8;
    *(float *)((longlong)param_1 + 0x4ac) = fVar9 + fVar9;
    *(float *)(param_1 + 0x96) = fVar8;
    *(float *)((longlong)param_1 + 0x4b4) = fVar9 + fVar9;
    *(int32_t *)(param_1 + 0x97) = 0;
    ppuStack_108 = (void **)CONCAT44(ppuStack_108._4_4_,fVar9 * 4.0);
    *(float *)((longlong)param_1 + 0x4bc) = fVar9 * 4.0;
    param_1[0x98] = 0;
    lVar2 = _DAT_180c86938;
    *(uint64_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83b8) = 0;
    *(uint64_t *)(*(longlong *)(lVar2 + 0x1cd8) + 0x83c0) = 0;
    *(uint64_t *)(*(longlong *)(lVar2 + 0x1cd8) + 0x83c8) = 0;
    *(uint64_t *)(*(longlong *)(lVar2 + 0x1cd8) + 0x83d0) = 0;
    *(uint64_t *)(*(longlong *)(lVar2 + 0x1cd8) + 0x83d8) = 0;
    *(uint64_t *)(*(longlong *)(lVar2 + 0x1cd8) + 0x83e0) = 0;
    *(uint64_t *)(*(longlong *)(lVar2 + 0x1cd8) + 0x83e8) = 0;
    FUN_18029de40(*(uint64_t *)(lVar2 + 0x1cd8),7);
    lVar2 = param_1[0x8c];
    iVar1 = *(int *)((longlong)param_1 + 0x464);
    *(float *)(param_3 + 0x11c18) = (float)(int)*(float *)(param_3 + 0x11c18);
    *(float *)(param_3 + 0x11c1c) = (float)(int)*(float *)(param_3 + 0x11c1c);
    *(float *)(param_3 + 0x11c20) = (float)(int)lVar2;
    *(float *)(param_3 + 0x11c24) = (float)iVar1;
    *(uint64_t *)(param_3 + 0x11c28) = 0x3f80000000000000;
    if (*(char *)((longlong)*(int *)(_DAT_180c86938 + 0x1d40) * 0xd0 + 0xca +
                 *(longlong *)(_DAT_180c86938 + 0x1d20)) != '\0') {
      lVar3 = param_1[0x9a];
    }
    uStack_120 = param_5;
    uStack_128 = param_4;
    lStack_118 = lVar3;
    (**(code **)(*param_1 + 0x50))(param_1,param_3,0x10);
    *(uint64_t *)(param_3 + 0x3598) = 0x3f8000003f800000;
    *(uint64_t *)(param_3 + 0x35a0) = 0x3f8000003f800000;
    *(uint64_t *)(param_3 + 0x35a8) = 0x3f8000003f800000;
    *(uint64_t *)(param_3 + 0x35b0) = 0x3f8000003f800000;
    lVar3 = _DAT_180c86938;
    *(uint64_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1790) = 0x3f8000003f800000;
    ppuStack_108 = (void **)0x3f8000003f800000;
    *(uint64_t *)(*(longlong *)(lVar3 + 0x1cd8) + 0x17c0) = 0x3f8000003f800000;
    lVar3 = FUN_180244ff0(param_3);
    *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x17c8) =
         0.5 / (float)*(ushort *)(lVar3 + 0x32c);
    lVar3 = FUN_180244ff0(param_3);
    *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x17cc) =
         0.5 / (float)*(ushort *)(lVar3 + 0x32e);
    (**(code **)(*param_1 + 0x10))(param_1,auStack_f8,auStack_fc);
    FUN_18029fc10(*(longlong *)(_DAT_180c86938 + 0x1cd8),*(uint64_t *)(_DAT_180c86938 + 0x1c70),
                  *(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1100,0x6d0);
  }
  else {
    *(int *)(param_1 + 9) = (int)param_1[9] + -1;
  }
  FUN_1802c2ac0(&puStack_c8);
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_148);
}



longlong FUN_1803ff450(longlong param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(longlong **)(param_1 + 0x458) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x458) + 0x38))();
  }
  FUN_1801f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x4c0,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803ff5c0(longlong param_1,longlong param_2)
void FUN_1803ff5c0(longlong param_1,longlong param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  void *puVar9;
  int8_t auStack_188 [32];
  int32_t uStack_168;
  longlong *plStack_160;
  longlong *plStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint *puStack_140;
  int32_t uStack_138;
  int32_t uStack_134;
  uint auStack_130 [3];
  int16_t uStack_124;
  int8_t uStack_122;
  int32_t uStack_121;
  int16_t uStack_11d;
  int32_t uStack_118;
  int8_t uStack_114;
  void *puStack_e8;
  int8_t *puStack_e0;
  uint uStack_d8;
  int8_t auStack_d0 [136];
  ulonglong uStack_48;
  longlong lVar8;
  
  uStack_150 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_188;
  uStack_168 = 0;
  uVar1 = *(int32_t *)(param_2 + 0x3588);
  *(int32_t *)(param_1 + 0x460) = uVar1;
  uVar2 = *(int32_t *)(param_2 + 0x358c);
  *(int32_t *)(param_1 + 0x464) = uVar2;
  uStack_134 = 0;
  auStack_130[0] = 0;
  auStack_130[1] = 0;
  auStack_130[2] = 0x3f800000;
  uStack_124 = 0x100;
  uStack_121 = 0;
  uStack_11d = 0;
  uStack_118 = 0xffffffff;
  uStack_114 = 0;
  uStack_148 = (void *)CONCAT44(uVar2,uVar1);
  puStack_140 = (uint *)0x100000001;
  uStack_138 = 0x1e;
  uStack_122 = 1;
  puStack_e8 = &unknown_var_3432_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = *(uint *)(param_1 + 0x20);
  puVar9 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    puVar9 = *(void **)(param_1 + 0x18);
  }
  strcpy_s(auStack_d0,0x80,puVar9);
  uVar5 = (ulonglong)uStack_d8;
  uVar6 = uStack_d8 + 1;
  if (uVar6 < 0x7f) {
    *(int16_t *)(puStack_e0 + uVar5) = 0x5f;
    uVar5 = (ulonglong)uVar6;
    uStack_d8 = uVar6;
  }
  lVar7 = -1;
  puVar9 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
    puVar9 = *(void **)(param_2 + 0x3528);
  }
  do {
    lVar8 = lVar7;
    lVar7 = lVar8 + 1;
  } while (puVar9[lVar7] != '\0');
  if ((0 < (int)lVar7) && ((uint)((int)uVar5 + (int)lVar7) < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_e0 + uVar5,puVar9,(longlong)((int)lVar8 + 2));
  }
  puVar3 = (uint64_t *)FUN_1800b1230(_DAT_180c86930,&plStack_158,&puStack_e8,&uStack_148);
  uStack_168 = 1;
  uVar4 = *puVar3;
  *puVar3 = 0;
  plStack_160 = *(longlong **)(param_1 + 0x428);
  *(uint64_t *)(param_1 + 0x428) = uVar4;
  if (plStack_160 != (longlong *)0x0) {
    (**(code **)(*plStack_160 + 0x38))();
  }
  uStack_168 = 0;
  if (plStack_158 != (longlong *)0x0) {
    (**(code **)(*plStack_158 + 0x38))();
  }
  uVar4 = *(uint64_t *)(param_1 + 0x30);
  uStack_148 = &unknown_var_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = auStack_130[0] & 0xffffff00;
  uStack_138 = 0xd;
  strcpy_s(auStack_130,0x40,&unknown_var_3112_ptr);
  uVar4 = FUN_180240430(uVar4,&uStack_148,1);
  *(uint64_t *)(param_1 + 0x4b8) = uVar4;
  uStack_148 = &unknown_var_720_ptr;
  puStack_e8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803ff820(longlong *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_1803ff820(longlong *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int32_t param_5)

{
  longlong lVar1;
  void *puVar2;
  longlong lVar3;
  float fVar4;
  uint uVar5;
  int8_t auStack_e8 [32];
  int32_t uStack_c8;
  int32_t uStack_c0;
  longlong lStack_b8;
  int8_t auStack_a8 [8];
  void **ppuStack_a0;
  int8_t auStack_98 [4];
  int8_t auStack_94 [4];
  uint64_t uStack_90;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_90 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_e8;
  FUN_1802c22a0(auStack_a8,&unknown_var_6032_ptr);
  puVar2 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar2 = (void *)param_1[3];
  }
  ppuStack_a0 = &puStack_88;
  lVar3 = 0;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  uStack_78 = 0;
  auStack_70[0] = 0;
  if (puVar2 != (void *)0x0) {
    FUN_180049bf0(&puStack_88);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_88);
  }
  if ((int)param_1[9] < 1) {
    (**(code **)(*param_1 + 0x10))(param_1,auStack_94,auStack_98);
    fVar4 = 1.0 - *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1d54);
    fVar4 = fVar4 + fVar4;
    *(float *)(param_1 + 0x8e) = fVar4;
    uVar5 = exp2f(-fVar4);
    *(uint *)((longlong)param_1 + 0x474) = uVar5;
    ppuStack_a0 = (void **)CONCAT44(ppuStack_a0._4_4_,uVar5);
    *(uint *)(param_1 + 0x8f) =
         (((uVar5 & 0x7fffff) >> ((&unknown_var_4368_ptr)[uVar5 >> 0x17] & 0x1f)) +
         (uint)*(ushort *)(&unknown_var_4880_ptr + (ulonglong)(uVar5 >> 0x17) * 2)) * 0x10000 +
         ((uVar5 & 0x7fffff) >> ((&unknown_var_4368_ptr)[uVar5 >> 0x17] & 0x1f)) +
         (uint)*(ushort *)(&unknown_var_4880_ptr + (ulonglong)(uVar5 >> 0x17) * 2);
    *(uint64_t *)((longlong)param_1 + 0x47c) = 0;
    lVar1 = _DAT_180c86938;
    *(uint64_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83b8) = 0;
    *(uint64_t *)(*(longlong *)(lVar1 + 0x1cd8) + 0x83c0) = 0;
    *(uint64_t *)(*(longlong *)(lVar1 + 0x1cd8) + 0x83c8) = 0;
    *(uint64_t *)(*(longlong *)(lVar1 + 0x1cd8) + 0x83d0) = 0;
    *(uint64_t *)(*(longlong *)(lVar1 + 0x1cd8) + 0x83d8) = 0;
    *(uint64_t *)(*(longlong *)(lVar1 + 0x1cd8) + 0x83e0) = 0;
    *(uint64_t *)(*(longlong *)(lVar1 + 0x1cd8) + 0x83e8) = 0;
    FUN_18029de40(*(uint64_t *)(lVar1 + 0x1cd8),7);
    if (*(char *)((longlong)*(int *)(_DAT_180c86938 + 0x1d40) * 0xd0 + 0xca +
                 *(longlong *)(_DAT_180c86938 + 0x1d20)) != '\0') {
      lVar3 = param_1[0x97];
    }
    uStack_c0 = param_5;
    uStack_c8 = param_4;
    lStack_b8 = lVar3;
    (**(code **)(*param_1 + 0x50))(param_1,param_3,0x10);
  }
  else {
    *(int *)(param_1 + 9) = (int)param_1[9] + -1;
  }
  FUN_1802c2ac0(&puStack_88);
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_e8);
}



uint64_t *
FUN_1803ffaf0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_6168_ptr;
  FUN_1801f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x458,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




