#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part011.c - 4 个函数

// 函数: void FUN_1802db450(longlong param_1,uint64_t *param_2,int32_t *param_3,int32_t *param_4,
void FUN_1802db450(longlong param_1,uint64_t *param_2,int32_t *param_3,int32_t *param_4,
                  int32_t param_5)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  longlong lVar16;
  int32_t *puVar17;
  int32_t *puVar18;
  
  uVar1 = *(int32_t *)param_2;
  uVar2 = *(int32_t *)((longlong)param_2 + 4);
  uVar13 = *param_2;
  uVar3 = *(int32_t *)(param_2 + 1);
  uVar4 = *(int32_t *)((longlong)param_2 + 0xc);
  uVar14 = param_2[1];
  puVar17 = *(int32_t **)(param_1 + 0x30);
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar9 = *param_4;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  if (puVar17 < *(int32_t **)(param_1 + 0x38)) {
    *(int32_t **)(param_1 + 0x30) = puVar17 + 0xd;
    *puVar17 = uVar1;
    puVar17[1] = uVar2;
    puVar17[2] = uVar3;
    puVar17[3] = uVar4;
    puVar17[4] = uVar5;
    puVar17[5] = uVar6;
    puVar17[6] = uVar7;
    puVar17[7] = uVar8;
    puVar17[8] = uVar9;
    puVar17[9] = uVar10;
    puVar17[10] = uVar11;
    puVar17[0xb] = uVar12;
    puVar17[0xc] = param_5;
    return;
  }
  puVar18 = *(int32_t **)(param_1 + 0x28);
  lVar16 = ((longlong)puVar17 - (longlong)puVar18) / 0x34;
  if (lVar16 == 0) {
    lVar16 = 1;
  }
  else {
    lVar16 = lVar16 * 2;
    if (lVar16 == 0) {
      puVar15 = (uint64_t *)0x0;
      goto LAB_1802db516;
    }
  }
  puVar15 = (uint64_t *)
            FUN_18062b420(_DAT_180c8ed18,lVar16 * 0x34,*(int8_t *)(param_1 + 0x40));
  puVar18 = *(int32_t **)(param_1 + 0x28);
  puVar17 = *(int32_t **)(param_1 + 0x30);
LAB_1802db516:
  if (puVar18 != puVar17) {
                    // WARNING: Subroutine does not return
    memmove(puVar15,puVar18,(longlong)puVar17 - (longlong)puVar18);
  }
  *puVar15 = uVar13;
  puVar15[1] = uVar14;
  *(int32_t *)(puVar15 + 2) = uVar5;
  *(int32_t *)((longlong)puVar15 + 0x14) = uVar6;
  *(int32_t *)(puVar15 + 3) = uVar7;
  *(int32_t *)((longlong)puVar15 + 0x1c) = uVar8;
  *(int32_t *)(puVar15 + 4) = uVar9;
  *(int32_t *)((longlong)puVar15 + 0x24) = uVar10;
  *(int32_t *)(puVar15 + 5) = uVar11;
  *(int32_t *)((longlong)puVar15 + 0x2c) = uVar12;
  *(int32_t *)(puVar15 + 6) = param_5;
  if (*(longlong *)(param_1 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t **)(param_1 + 0x28) = puVar15;
  *(longlong *)(param_1 + 0x38) = lVar16 * 0x34 + (longlong)puVar15;
  *(longlong *)(param_1 + 0x30) = (longlong)puVar15 + 0x34;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802db4bc(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4,
void FUN_1802db4bc(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9)

{
  uint64_t *puVar1;
  longlong unaff_RBX;
  longlong lVar2;
  longlong unaff_RDI;
  int32_t unaff_R14D;
  uint64_t uStackX_20;
  
  if (param_1 / 0x34 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = (param_1 / 0x34) * 2;
    if (lVar2 == 0) {
      puVar1 = (uint64_t *)0x0;
      goto LAB_1802db516;
    }
  }
  puVar1 = (uint64_t *)
           FUN_18062b420(_DAT_180c8ed18,lVar2 * 0x34,*(int8_t *)(unaff_RBX + 0x40));
  param_4 = *(longlong *)(unaff_RBX + 0x28);
  unaff_RDI = *(longlong *)(unaff_RBX + 0x30);
LAB_1802db516:
  if (param_4 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(puVar1,param_4,unaff_RDI - param_4);
  }
  *puVar1 = uStackX_20;
  puVar1[1] = param_5;
  *(int32_t *)(puVar1 + 2) = (int32_t)param_6;
  *(int32_t *)((longlong)puVar1 + 0x14) = param_6._4_4_;
  *(int32_t *)(puVar1 + 3) = (int32_t)param_7;
  *(int32_t *)((longlong)puVar1 + 0x1c) = param_7._4_4_;
  *(int32_t *)(puVar1 + 4) = (int32_t)param_8;
  *(int32_t *)((longlong)puVar1 + 0x24) = param_8._4_4_;
  *(int32_t *)(puVar1 + 5) = (int32_t)param_9;
  *(int32_t *)((longlong)puVar1 + 0x2c) = param_9._4_4_;
  *(int32_t *)(puVar1 + 6) = unaff_R14D;
  if (*(longlong *)(unaff_RBX + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t **)(unaff_RBX + 0x28) = puVar1;
  *(longlong *)(unaff_RBX + 0x38) = lVar2 * 0x34 + (longlong)puVar1;
  *(longlong *)(unaff_RBX + 0x30) = (longlong)puVar1 + 0x34;
  return;
}



void thunk_FUN_18064e900(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1802db5b0(longlong param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void FUN_1802db5b0(longlong param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  void *puVar2;
  void *puStack_60;
  longlong lStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  
  puStack_60 = &unknown_var_3456_ptr;
  uStack_48 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_5 + 8) != (void *)0x0) {
    puVar2 = *(void **)(param_5 + 8);
  }
  FUN_180627c50(&puStack_60,puVar2,FUN_180627c50,param_4,0xfffffffffffffffe);
  param_5 = CONCAT44(param_3,param_2);
  uStack_40 = param_5;
  uVar1 = *(ulonglong *)(param_1 + 0x50);
  uStack_38 = param_4;
  if (uVar1 < *(ulonglong *)(param_1 + 0x58)) {
    *(ulonglong *)(param_1 + 0x50) = uVar1 + 0x30;
    FUN_180627ae0(uVar1);
    *(uint64_t *)(uVar1 + 0x20) = uStack_40;
    *(int32_t *)(uVar1 + 0x28) = uStack_38;
  }
  else {
    FUN_1802dcad0(param_1 + 0x48,&puStack_60);
  }
  puStack_60 = &unknown_var_3456_ptr;
  if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802db6d0(int8_t *param_1)
void FUN_1802db6d0(int8_t *param_1)

{
  uint64_t uVar1;
  longlong **pplVar2;
  longlong *plVar3;
  longlong ***ppplVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int8_t auStack_1d8 [32];
  longlong ***ppplStack_1b8;
  longlong **pplStack_1b0;
  longlong **pplStack_1a8;
  longlong *plStack_1a0;
  longlong *plStack_198;
  longlong *plStack_190;
  longlong ***ppplStack_188;
  longlong **pplStack_180;
  uint64_t uStack_178;
  longlong **pplStack_170;
  longlong *plStack_168;
  void *puStack_158;
  int8_t *puStack_150;
  int32_t uStack_148;
  int8_t auStack_140 [72];
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [72];
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1d8;
  iVar7 = 0x10;
  if ((*(longlong *)(param_1 + 0x68) == 0) ||
     ((ulonglong)(longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) + 0x184) <
      (ulonglong)(((*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8)) / 0x28) * 2))) {
    uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0xa0,8,3);
    pplVar2 = (longlong **)FUN_1800842a0(uVar1);
    pplStack_170 = pplVar2;
    if (pplVar2 != (longlong **)0x0) {
      (*(code *)(*pplVar2)[5])(pplVar2);
    }
    if (*(longlong *)(param_1 + 0x68) == 0) {
      iVar5 = 0x10;
    }
    else {
      iVar5 = (int)((*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8)) / 0x28) * 2;
    }
    *(int *)(pplVar2 + 2) = iVar5 * 2;
    *(int16_t *)((longlong)pplVar2 + 0x14) = 0x104;
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3);
    puStack_158 = &unknown_var_3480_ptr;
    puStack_150 = auStack_140;
    auStack_140[0] = 0;
    uStack_148 = 0x13;
    ppplStack_1b8 = (longlong ***)plVar3;
    strcpy_s(auStack_140,0x40,&unknown_var_9840_ptr);
    *plVar3 = (longlong)&unknown_var_3552_ptr;
    *plVar3 = (longlong)&unknown_var_3696_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&unknown_var_7064_ptr;
    LOCK();
    *(int8_t *)(plVar3 + 2) = 0;
    UNLOCK();
    LOCK();
    *(int32_t *)((longlong)plVar3 + 0x14) = 0;
    UNLOCK();
    plVar3[3] = 0;
    plVar3[4] = 0;
    plStack_198 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    plStack_198 = *(longlong **)(param_1 + 0x68);
    *(longlong **)(param_1 + 0x68) = plVar3;
    if (plStack_198 != (longlong *)0x0) {
      (**(code **)(*plStack_198 + 0x38))();
    }
    puStack_158 = &unknown_var_720_ptr;
    uVar1 = *(uint64_t *)(param_1 + 0x68);
    ppplStack_1b8 = &pplStack_1b0;
    pplStack_1b0 = pplVar2;
    (*(code *)(*pplVar2)[5])(pplVar2);
    FUN_180255880(uVar1,&pplStack_1b0);
    *param_1 = 1;
    (*(code *)(*pplVar2)[7])(pplVar2);
  }
  if ((*(longlong *)(param_1 + 0x70) == 0) ||
     ((ulonglong)(longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x184) <
      (ulonglong)(((*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x28)) / 0x34) * 3))) {
    uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0xa0,8,3);
    pplVar2 = (longlong **)FUN_1800842a0(uVar1);
    pplStack_180 = pplVar2;
    if (pplVar2 != (longlong **)0x0) {
      (*(code *)(*pplVar2)[5])(pplVar2);
    }
    if (*(longlong *)(param_1 + 0x70) == 0) {
      iVar5 = 0x10;
    }
    else {
      iVar5 = (int)((*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x28)) / 0x34) * 2;
    }
    *(int *)(pplVar2 + 2) = iVar5 * 3;
    *(int16_t *)((longlong)pplVar2 + 0x14) = 0x104;
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3);
    puStack_f8 = &unknown_var_3480_ptr;
    puStack_f0 = auStack_e0;
    auStack_e0[0] = 0;
    uStack_e8 = 0x17;
    ppplStack_1b8 = (longlong ***)plVar3;
    strcpy_s(auStack_e0,0x40,&unknown_var_9816_ptr);
    *plVar3 = (longlong)&unknown_var_3552_ptr;
    *plVar3 = (longlong)&unknown_var_3696_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&unknown_var_7064_ptr;
    LOCK();
    *(int8_t *)(plVar3 + 2) = 0;
    UNLOCK();
    LOCK();
    *(int32_t *)((longlong)plVar3 + 0x14) = 0;
    UNLOCK();
    plVar3[3] = 0;
    plVar3[4] = 0;
    plStack_190 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    plStack_190 = *(longlong **)(param_1 + 0x70);
    *(longlong **)(param_1 + 0x70) = plVar3;
    if (plStack_190 != (longlong *)0x0) {
      (**(code **)(*plStack_190 + 0x38))();
    }
    puStack_f8 = &unknown_var_720_ptr;
    uVar1 = *(uint64_t *)(param_1 + 0x70);
    ppplStack_1b8 = &pplStack_1a8;
    pplStack_1a8 = pplVar2;
    (*(code *)(*pplVar2)[5])(pplVar2);
    FUN_180255880(uVar1,&pplStack_1a8);
    *param_1 = 1;
    (*(code *)(*pplVar2)[7])(pplVar2);
  }
  lVar6 = *(longlong *)(param_1 + 0x78);
  if ((lVar6 == 0) ||
     ((ulonglong)(longlong)*(int *)(*(longlong *)(lVar6 + 0x18) + 0x184) <
      (ulonglong)(((*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x48)) / 0x30) * 0x180))
     ) {
    uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0xa0,8,CONCAT71((int7)((ulonglong)lVar6 >> 8),3));
    plVar3 = (longlong *)FUN_1800842a0(uVar1);
    plStack_168 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar6 = (*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x48)) / 6 +
              (*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x48) >> 0x3f);
      iVar7 = ((int)(lVar6 >> 3) - (int)(lVar6 >> 0x3f)) * 0x80;
    }
    *(int *)(plVar3 + 2) = iVar7 * 6;
    *(int16_t *)((longlong)plVar3 + 0x14) = 0x104;
    ppplVar4 = (longlong ***)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3);
    puStack_98 = &unknown_var_3480_ptr;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x13;
    ppplStack_1b8 = ppplVar4;
    strcpy_s(auStack_80,0x40,&unknown_var_9792_ptr);
    *ppplVar4 = (longlong **)&unknown_var_3552_ptr;
    *ppplVar4 = (longlong **)&unknown_var_3696_ptr;
    *(int32_t *)(ppplVar4 + 1) = 0;
    *ppplVar4 = (longlong **)&unknown_var_7064_ptr;
    LOCK();
    *(int8_t *)(ppplVar4 + 2) = 0;
    UNLOCK();
    LOCK();
    *(int32_t *)((longlong)ppplVar4 + 0x14) = 0;
    UNLOCK();
    ppplVar4[3] = (longlong **)0x0;
    ppplVar4[4] = (longlong **)0x0;
    ppplStack_188 = ppplVar4;
    (*(code *)(*ppplVar4)[5])(ppplVar4);
    ppplStack_188 = *(longlong ****)(param_1 + 0x78);
    *(longlong ****)(param_1 + 0x78) = ppplVar4;
    if (ppplStack_188 != (longlong ***)0x0) {
      (**(code **)((longlong)*ppplStack_188 + 0x38))();
    }
    puStack_98 = &unknown_var_720_ptr;
    uVar1 = *(uint64_t *)(param_1 + 0x78);
    pplStack_180 = &plStack_1a0;
    plStack_1a0 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    FUN_180255880(uVar1,&plStack_1a0);
    *param_1 = 1;
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1d8);
}



// WARNING: Removing unreachable block (ram,0x0001802dc922)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




