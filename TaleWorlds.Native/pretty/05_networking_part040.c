#include "TaleWorlds.Native.Split.h"

// 05_networking_part040.c - 6 个函数

// 函数: void FUN_180861cd0(void)
void FUN_180861cd0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180861ce0(longlong *param_1,int param_2)

{
  int32_t *puVar1;
  int iVar2;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  void *puVar10;
  longlong lVar11;
  int iVar12;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar7 = 0;
  if (param_2 != 0) {
    if ((0x3ffffffe < param_2 * 0x38 - 1U) ||
       (lVar7 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x38,&UNK_180957f70,
                              0xf4,0,0,1), lVar7 == 0)) {
      return 0x26;
    }
    iVar2 = (int)param_1[1];
    lVar9 = (longlong)iVar2;
    if (iVar2 != 0) {
      iVar12 = 0;
      lVar3 = *param_1;
      if (0 < iVar2) {
        lVar11 = lVar7 + 0x1c;
        lVar8 = lVar3 - lVar7;
        do {
          *(uint64_t *)(lVar11 + -0xc) = 0;
          *(uint64_t *)(lVar11 + -4) = 0;
          *(uint64_t *)(lVar11 + 0x14) = *(uint64_t *)(lVar8 + 0x14 + lVar11);
          puVar1 = (int32_t *)(lVar11 + lVar8 + -0x1c);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          *(int32_t *)(lVar11 + -0x1c) = *puVar1;
          *(int32_t *)(lVar11 + -0x18) = uVar4;
          *(int32_t *)(lVar11 + -0x14) = uVar5;
          *(int32_t *)(lVar11 + -0x10) = uVar6;
          if (*(int *)(lVar8 + -4 + lVar11) < 1) {
            puVar10 = &DAT_18098bc73;
          }
          else {
            puVar10 = *(void **)(lVar8 + -0xc + lVar11);
          }
          FUN_18084e110(lVar11 + -0xc,puVar10);
          *(uint64_t *)(lVar11 + 4) = *(uint64_t *)(lVar8 + 4 + lVar11);
          *(int32_t *)(lVar11 + 0xc) = *(int32_t *)(lVar8 + 0xc + lVar11);
          FUN_180840270((longlong)iVar12 * 0x38 + 0x10 + lVar3);
          iVar12 = iVar12 + 1;
          lVar11 = lVar11 + 0x38;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
    }
  }
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = lVar7;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180861d0b(void)

{
  int32_t *puVar1;
  int iVar2;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  void *puVar10;
  longlong lVar11;
  int unaff_ESI;
  longlong *unaff_RDI;
  int iVar12;
  longlong *in_stack_000000a0;
  int in_stack_000000a8;
  
  lVar7 = 0;
  if (unaff_ESI != 0) {
    if ((0x3ffffffe < unaff_ESI * 0x38 - 1U) ||
       (lVar7 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),unaff_ESI * 0x38,
                              &UNK_180957f70,0xf4,0), lVar7 == 0)) {
      return 0x26;
    }
    iVar2 = (int)unaff_RDI[1];
    lVar9 = (longlong)iVar2;
    if (iVar2 != 0) {
      iVar12 = 0;
      lVar3 = *unaff_RDI;
      if (0 < iVar2) {
        lVar11 = lVar7 + 0x1c;
        lVar8 = lVar3 - lVar7;
        do {
          *(uint64_t *)(lVar11 + -0xc) = 0;
          *(uint64_t *)(lVar11 + -4) = 0;
          *(uint64_t *)(lVar11 + 0x14) = *(uint64_t *)(lVar8 + 0x14 + lVar11);
          puVar1 = (int32_t *)(lVar11 + lVar8 + -0x1c);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          *(int32_t *)(lVar11 + -0x1c) = *puVar1;
          *(int32_t *)(lVar11 + -0x18) = uVar4;
          *(int32_t *)(lVar11 + -0x14) = uVar5;
          *(int32_t *)(lVar11 + -0x10) = uVar6;
          if (*(int *)(lVar8 + -4 + lVar11) < 1) {
            puVar10 = &DAT_18098bc73;
          }
          else {
            puVar10 = *(void **)(lVar8 + -0xc + lVar11);
          }
          FUN_18084e110(lVar11 + -0xc,puVar10);
          *(uint64_t *)(lVar11 + 4) = *(uint64_t *)(lVar8 + 4 + lVar11);
          *(int32_t *)(lVar11 + 0xc) = *(int32_t *)(lVar8 + 0xc + lVar11);
          FUN_180840270((longlong)iVar12 * 0x38 + 0x10 + lVar3);
          iVar12 = iVar12 + 1;
          lVar11 = lVar11 + 0x38;
          lVar9 = lVar9 + -1;
          unaff_RDI = in_stack_000000a0;
          unaff_ESI = in_stack_000000a8;
        } while (lVar9 != 0);
      }
    }
  }
  if ((0 < *(int *)((longlong)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*unaff_RDI,&UNK_180957f70,0x100,1);
  }
  *unaff_RDI = lVar7;
  *(int *)((longlong)unaff_RDI + 0xc) = unaff_ESI;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180861d76(longlong param_1)

{
  int32_t *puVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  longlong in_RAX;
  longlong lVar6;
  void *puVar7;
  longlong lVar8;
  longlong unaff_RBP;
  int32_t unaff_ESI;
  longlong *unaff_RDI;
  int iVar9;
  longlong in_stack_00000040;
  longlong *in_stack_000000a0;
  int32_t in_stack_000000a8;
  
  iVar9 = 0;
  lVar2 = *unaff_RDI;
  if (0 < (int)param_1) {
    lVar8 = in_RAX + 0x1c;
    lVar6 = lVar2 - unaff_RBP;
    do {
      *(uint64_t *)(lVar8 + -0xc) = 0;
      *(uint64_t *)(lVar8 + -4) = 0;
      *(uint64_t *)(lVar8 + 0x14) = *(uint64_t *)(lVar6 + 0x14 + lVar8);
      puVar1 = (int32_t *)(lVar8 + lVar6 + -0x1c);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(int32_t *)(lVar8 + -0x1c) = *puVar1;
      *(int32_t *)(lVar8 + -0x18) = uVar3;
      *(int32_t *)(lVar8 + -0x14) = uVar4;
      *(int32_t *)(lVar8 + -0x10) = uVar5;
      if (*(int *)(lVar6 + -4 + lVar8) < 1) {
        puVar7 = &DAT_18098bc73;
      }
      else {
        puVar7 = *(void **)(lVar6 + -0xc + lVar8);
      }
      FUN_18084e110(lVar8 + -0xc,puVar7);
      *(uint64_t *)(lVar8 + 4) = *(uint64_t *)(lVar6 + 4 + lVar8);
      *(int32_t *)(lVar8 + 0xc) = *(int32_t *)(lVar6 + 0xc + lVar8);
      FUN_180840270((longlong)iVar9 * 0x38 + 0x10 + lVar2);
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 0x38;
      param_1 = param_1 + -1;
      unaff_RBP = in_stack_00000040;
      unaff_RDI = in_stack_000000a0;
      unaff_ESI = in_stack_000000a8;
    } while (param_1 != 0);
  }
  if ((0 < *(int *)((longlong)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*unaff_RDI,&UNK_180957f70,0x100,1);
  }
  *unaff_RDI = unaff_RBP;
  *(int32_t *)((longlong)unaff_RDI + 0xc) = unaff_ESI;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180861d98(uint64_t param_1,uint64_t param_2)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong in_RAX;
  longlong lVar5;
  void *puVar6;
  longlong lVar7;
  longlong unaff_RBP;
  longlong unaff_R13;
  longlong unaff_R14;
  int unaff_R15D;
  longlong in_stack_00000040;
  longlong *in_stack_000000a0;
  int32_t in_stack_000000a8;
  longlong lStack00000000000000b0;
  longlong lStack00000000000000b8;
  
  lVar7 = in_RAX + 0x1c;
  lVar5 = unaff_R13 - unaff_RBP;
  lStack00000000000000b0 = lVar5 + 4;
  lStack00000000000000b8 = lVar5 + 0xc;
  do {
    *(uint64_t *)(lVar7 + -0xc) = param_2;
    *(uint64_t *)(lVar7 + -4) = 0;
    *(uint64_t *)(lVar7 + 0x14) = *(uint64_t *)(lVar5 + 0x14 + lVar7);
    puVar1 = (int32_t *)(lVar7 + lVar5 + -0x1c);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *(int32_t *)(lVar7 + -0x1c) = *puVar1;
    *(int32_t *)(lVar7 + -0x18) = uVar2;
    *(int32_t *)(lVar7 + -0x14) = uVar3;
    *(int32_t *)(lVar7 + -0x10) = uVar4;
    if (*(int *)(lVar5 + -4 + lVar7) < 1) {
      puVar6 = &DAT_18098bc73;
    }
    else {
      puVar6 = *(void **)(lVar5 + -0xc + lVar7);
    }
    FUN_18084e110(lVar7 + -0xc,puVar6);
    *(uint64_t *)(lVar7 + 4) = *(uint64_t *)(lStack00000000000000b0 + lVar7);
    *(int32_t *)(lVar7 + 0xc) = *(int32_t *)(lStack00000000000000b8 + lVar7);
    FUN_180840270((longlong)unaff_R15D * 0x38 + 0x10 + unaff_R13);
    unaff_R15D = unaff_R15D + 1;
    lVar7 = lVar7 + 0x38;
    param_2 = 0;
    unaff_R14 = unaff_R14 + -1;
  } while (unaff_R14 != 0);
  if ((0 < *(int *)((longlong)in_stack_000000a0 + 0xc)) && (*in_stack_000000a0 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*in_stack_000000a0,&UNK_180957f70,0x100,1)
    ;
  }
  *in_stack_000000a0 = in_stack_00000040;
  *(int32_t *)((longlong)in_stack_000000a0 + 0xc) = in_stack_000000a8;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180861e7c(void)

{
  longlong unaff_RBP;
  int32_t unaff_ESI;
  longlong *unaff_RDI;
  
  if ((0 < *(int *)((longlong)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*unaff_RDI,&UNK_180957f70,0x100,1);
  }
  *unaff_RDI = unaff_RBP;
  *(int32_t *)((longlong)unaff_RDI + 0xc) = unaff_ESI;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180861e8b(void)

{
  longlong unaff_RBP;
  int32_t unaff_ESI;
  longlong *unaff_RDI;
  
  if ((0 < *(int *)((longlong)unaff_RDI + 0xc)) && (*unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*unaff_RDI,&UNK_180957f70,0x100,1);
  }
  *unaff_RDI = unaff_RBP;
  *(int32_t *)((longlong)unaff_RDI + 0xc) = unaff_ESI;
  return 0;
}



uint64_t FUN_180861ed5(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180861ef0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int32_t *puVar3;
  longlong lVar4;
  int32_t *puVar5;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar3 = (int32_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 4 - 1U < 0x3fffffff) {
      puVar3 = (int32_t *)
               FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2 * 4,&UNK_180957f70,0xf4
                             ,0,0,1);
      if (puVar3 != (int32_t *)0x0) {
        iVar1 = (int)param_1[1];
        lVar4 = (longlong)iVar1;
        if ((iVar1 != 0) && (lVar2 = *param_1, 0 < iVar1)) {
          puVar5 = puVar3;
          do {
            *puVar5 = *(int32_t *)((lVar2 - (longlong)puVar3) + (longlong)puVar5);
            puVar5 = puVar5 + 1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        goto LAB_180861f94;
      }
    }
    return 0x26;
  }
LAB_180861f94:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = (longlong)puVar3;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180861f14(uint64_t param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int32_t *puVar3;
  longlong lVar4;
  int32_t *puVar5;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  puVar3 = (int32_t *)0x0;
  if (unaff_EDI == 0) {
LAB_180861f94:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = (longlong)puVar3;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 4 - 1U < 0x3fffffff) {
    puVar3 = (int32_t *)
             FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2 * 4,&UNK_180957f70,0xf4,0
                          );
    if (puVar3 != (int32_t *)0x0) {
      iVar1 = (int)unaff_RBX[1];
      lVar4 = (longlong)iVar1;
      if ((iVar1 != 0) && (lVar2 = *unaff_RBX, 0 < iVar1)) {
        puVar5 = puVar3;
        do {
          *puVar5 = *(int32_t *)((lVar2 - (longlong)puVar3) + (longlong)puVar5);
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      goto LAB_180861f94;
    }
  }
  return 0x26;
}



uint64_t FUN_180861fdf(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180862000(longlong param_1,uint64_t param_2,uint64_t param_3)
void FUN_180862000(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  longlong lVar1;
  int8_t auStack_68 [32];
  int8_t auStack_48 [40];
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x458) + 0x128))
                    (*(longlong **)(param_1 + 0x458),param_2,1);
  if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18084b240(param_2,auStack_48);
  }
  FUN_180862080(param_1,lVar1,param_3);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180862080(longlong param_1,longlong *param_2,uint64_t param_3)
void FUN_180862080(longlong param_1,longlong *param_2,uint64_t param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  byte bVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  int8_t auStack_168 [32];
  uint uStack_148;
  uint uStack_140;
  uint uStack_138;
  uint uStack_130;
  uint uStack_128;
  uint uStack_120;
  uint uStack_118;
  uint uStack_110;
  uint uStack_108;
  uint uStack_100;
  int32_t uStack_f8;
  ushort uStack_f4;
  ushort uStack_f2;
  byte bStack_f0;
  byte bStack_ef;
  byte bStack_ee;
  byte bStack_ed;
  byte bStack_ec;
  byte bStack_eb;
  byte bStack_ea;
  byte bStack_e9;
  longlong lStack_e8;
  uint uStack_e0;
  longlong *plStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  int8_t auStack_c0 [80];
  int8_t auStack_70 [40];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  lStack_e8 = param_1;
  plStack_d8 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&uStack_f8);
  plVar1 = (longlong *)(param_1 + 0x490);
  plVar8 = (longlong *)*plVar1;
  plVar7 = plVar8;
  while (plVar8 != plVar1) {
    plVar10 = &lStack_d0;
    (**(code **)(*(longlong *)plVar7[2] + 0x30))();
    if ((lStack_d0 == CONCAT26(uStack_f2,CONCAT24(uStack_f4,uStack_f8))) &&
       (lStack_c8 ==
        CONCAT17(bStack_e9,
                 CONCAT16(bStack_ea,
                          CONCAT15(bStack_eb,
                                   CONCAT14(bStack_ec,
                                            CONCAT13(bStack_ed,
                                                     CONCAT12(bStack_ee,
                                                              CONCAT11(bStack_ef,bStack_f0)))))))))
    {
      if (plVar7 != (longlong *)0x0) goto LAB_180862261;
      break;
    }
    if (plVar7 != plVar1) {
      plVar8 = (longlong *)*plVar7;
      plVar7 = plVar8;
    }
  }
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x458) + 0x128))
                    (*(longlong **)(param_1 + 0x458),&uStack_f8,1);
  if (lVar6 == 0) {
    uStack_100 = (uint)bStack_e9;
    uStack_108 = (uint)bStack_ea;
    uStack_110 = (uint)bStack_eb;
    uStack_118 = (uint)bStack_ec;
    uStack_120 = (uint)bStack_ed;
    uStack_128 = (uint)bStack_ee;
    uStack_130 = (uint)bStack_ef;
    uStack_138 = (uint)bStack_f0;
    uStack_140 = (uint)uStack_f2;
    uStack_148 = (uint)uStack_f4;
                    // WARNING: Subroutine does not return
    FUN_18076b390(auStack_70,0x27,&UNK_180958180,uStack_f8);
  }
  iVar12 = 0;
  uStack_138 = CONCAT31(uStack_138._1_3_,1);
  uStack_140 = uStack_140 & 0xffffff00;
  uStack_148 = 0;
  plVar10 = (longlong *)0x0;
  plVar7 = (longlong *)
           FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x30,&UNK_180984ef0,0x705);
  if (plVar7 == (longlong *)0x0) goto FUN_18086247a;
  *plVar7 = (longlong)plVar7;
  plVar7[1] = (longlong)plVar7;
  plVar7[2] = lVar6;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar8 = (longlong *)*plVar7;
  if (plVar8 == plVar7) {
LAB_18086223e:
    plVar7[1] = *(longlong *)(param_1 + 0x498);
    *plVar7 = (longlong)plVar1;
    *(longlong **)(param_1 + 0x498) = plVar7;
    *(longlong **)plVar7[1] = plVar7;
  }
  else {
    do {
      plVar8 = (longlong *)*plVar8;
      iVar12 = iVar12 + 1;
    } while (plVar8 != plVar7);
    if (iVar12 == 0) goto LAB_18086223e;
  }
  param_1 = lStack_e8;
  if (plVar7 != (longlong *)0x0) {
LAB_180862261:
    uVar2 = *(uint *)((longlong)plVar7 + 0x1c);
    uVar11 = (ulonglong)plVar10 & 0xffffffffffffff00;
    bVar4 = false;
    uStack_e0 = (uint)uVar11;
    if ((int)plStack_d8[0x1a] == 0) {
      if ((uVar2 & 0x81) == 0) {
        (**(code **)(*(longlong *)plVar7[2] + 0x30))((longlong *)plVar7[2],&lStack_d0);
        iVar12 = FUN_1808caa20(param_1 + 0x378 + (ulonglong)(~(uVar2 >> 1) & 1) * 0x80,&lStack_d0);
        if (iVar12 == 0) {
          FUN_18085d7f0(plVar7,&UNK_180984ef0,0x7a5);
        }
        goto FUN_18086247a;
      }
      *(uint *)((longlong)plVar7 + 0x1c) = uVar2 & 0xffffff9f;
    }
    else {
      *(uint *)((longlong)plVar7 + 0x1c) = uVar2 | 0x20;
      cVar5 = FUN_1808b0820(plStack_d8 + 0x19,param_1);
      bVar4 = true;
      uVar11 = (ulonglong)(uStack_e0 & 0xff);
      if (cVar5 != '\0') {
        uVar11 = 1;
      }
    }
    uVar3 = *(uint *)((longlong)plVar7 + 0x1c);
    bVar9 = *(byte *)((longlong)plVar7 + 0x1c) & 1;
    bVar14 = (byte)(uVar3 >> 2) & 1;
    if (((uVar3 >> 2 & 1) == 0) && (bVar9 != 0)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    uVar13 = uVar3 >> 3;
    if (*(int *)(lStack_e8 + 0x2e4) < 3) {
      if ((uVar2 >> 6 & 1) == 0) goto FUN_18086247a;
    }
    else if ((uVar2 >> 6 & 1) == 0) {
      if (((((char)uVar11 != '\0') || (((uVar2 >> 5 & 1) != 0 && (!bVar4)))) &&
          ((*(uint *)((longlong)plVar7 + 0x1c) = uVar3 | 0x40, (uVar2 >> 5 & 1) != 0 || (bVar9 == 0)
           ))) && ((cVar5 != '\0' || ((uVar13 & 1) != 0)))) {
        plStack_d8 = *(longlong **)(plVar7[2] + 0x88);
        FUN_18085bb20(lStack_e8 + 200,auStack_c0,&plStack_d8);
        FUN_1808c7260(auStack_c0,plVar7,cVar5,(byte)uVar13 & 1);
      }
      goto FUN_18086247a;
    }
    if (((char)uVar11 == '\0') && (bVar4)) {
      *(uint *)((longlong)plVar7 + 0x1c) = uVar3 & 0xffffffbf;
      if (cVar5 != '\0') {
        uStack_140 = uStack_140 & 0xffffff00;
        uStack_148 = uStack_148 & 0xffffff00;
        iVar12 = FUN_180863930(lStack_e8,plVar7,param_3,1);
        if (iVar12 != 0) goto FUN_18086247a;
        *(uint *)((longlong)plVar7 + 0x1c) =
             ~((bVar14 ^ 1) << 8) & ((uint)bVar14 << 8 | *(uint *)((longlong)plVar7 + 0x1c));
      }
      if ((uVar13 & 1) != 0) {
        uStack_140 = uStack_140 & 0xffffff00;
        uStack_148 = CONCAT31(uStack_148._1_3_,1);
        iVar12 = FUN_180863930(lStack_e8,plVar7,param_3,1);
        if (iVar12 == 0) {
          *(uint *)((longlong)plVar7 + 0x1c) = *(uint *)((longlong)plVar7 + 0x1c) | 0x200;
        }
      }
    }
  }
FUN_18086247a:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_168);
}





// 函数: void FUN_18086226d(longlong param_1,uint param_2,char param_3)
void FUN_18086226d(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  uint in_EAX;
  int iVar4;
  byte bVar5;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong lVar6;
  byte bVar7;
  longlong unaff_R15;
  
  *(uint *)(unaff_RBP + -0x78) = param_2;
  if (*(int *)(param_1 + 0xd0) == 0) {
    if ((in_EAX & 0x81) == 0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x30))
                (*(longlong **)(unaff_RDI + 0x10),unaff_RBP + -0x68);
      iVar4 = FUN_1808caa20(unaff_R15 + 0x378 + (ulonglong)(~(in_EAX >> 1) & 1) * 0x80,
                            unaff_RBP + -0x68);
      if (iVar4 == 0) {
        FUN_18085d7f0();
      }
      goto LAB_18086246a;
    }
    *(uint *)(unaff_RDI + 0x1c) = in_EAX & 0xffffff9f;
  }
  else {
    *(uint *)(unaff_RDI + 0x1c) = in_EAX | 0x20;
    cVar3 = FUN_1808b0820(param_1 + 200);
    param_2 = *(uint *)(unaff_RBP + -0x78) & 0xff;
    param_3 = '\x01';
    if (cVar3 != '\0') {
      param_2 = 1;
    }
  }
  uVar1 = *(uint *)(unaff_RDI + 0x1c);
  bVar5 = *(byte *)(unaff_RDI + 0x1c) & 1;
  bVar7 = (byte)(uVar1 >> 2) & 1;
  if (((uVar1 >> 2 & 1) == 0) && (bVar5 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  lVar6 = *(longlong *)(unaff_RBP + -0x80);
  if (*(int *)(lVar6 + 0x2e4) < 3) {
    if ((in_EAX >> 6 & 1) == 0) goto LAB_18086246a;
  }
  else if ((in_EAX >> 6 & 1) == 0) {
    if (((((char)param_2 != '\0') || (((in_EAX >> 5 & 1) != 0 && (param_3 == '\0')))) &&
        ((*(uint *)(unaff_RDI + 0x1c) = uVar1 | 0x40, (in_EAX >> 5 & 1) != 0 || (bVar5 == 0)))) &&
       ((bVar2 || ((uVar1 >> 3 & 1) != 0)))) {
      *(uint64_t *)(unaff_RBP + -0x70) = *(uint64_t *)(*(longlong *)(unaff_RDI + 0x10) + 0x88);
      FUN_18085bb20(lVar6 + 200,unaff_RBP + -0x58,unaff_RBP + -0x70);
      FUN_1808c7260(unaff_RBP + -0x58);
    }
    goto LAB_18086246a;
  }
  if (((char)param_2 == '\0') && (param_3 != '\0')) {
    *(uint *)(unaff_RDI + 0x1c) = uVar1 & 0xffffffbf;
    if (bVar2) {
      iVar4 = FUN_180863930(lVar6);
      if (iVar4 != 0) goto LAB_18086246a;
      lVar6 = *(longlong *)(unaff_RBP + -0x80);
      *(uint *)(unaff_RDI + 0x1c) =
           ~((bVar7 ^ 1) << 8) & ((uint)bVar7 << 8 | *(uint *)(unaff_RDI + 0x1c));
    }
    if (((uVar1 >> 3 & 1) != 0) && (iVar4 = FUN_180863930(lVar6), iVar4 == 0)) {
      *(uint *)(unaff_RDI + 0x1c) = *(uint *)(unaff_RDI + 0x1c) | 0x200;
    }
  }
LAB_18086246a:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x20) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18086247a(void)
void FUN_18086247a(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x20) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1808624a0(longlong param_1)
void FUN_1808624a0(longlong param_1)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int32_t *puVar6;
  int32_t uVar7;
  uint auStackX_8 [2];
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x2e4);
  uVar3 = *(uint *)(param_1 + 0x2d8) >> 5;
  if (iVar1 < 3) {
    if ((uVar3 & 1) != 0) {
      uVar2 = *(uint64_t *)(*(longlong *)(param_1 + 0x2b0) + 0x78);
      uStackX_10 = 0;
      iVar4 = FUN_18073f640(uVar2,&uStackX_10);
      if (iVar4 == 0) {
        uStackX_18 = 0;
        iVar4 = FUN_18073c380(uVar2,0xffffffff,&uStackX_18);
        if (iVar4 == 0) {
          uStackX_20 = 0;
          iVar4 = FUN_18073c380(uStackX_10,0xfffffffd,&uStackX_20);
          if ((iVar4 == 0) && (iVar4 = FUN_180740190(uStackX_20,uStackX_18,0), iVar4 == 0)) {
            auStackX_8[0] = 0;
            iVar4 = FUN_18073c8d0(uVar2,auStackX_8);
            if (iVar4 == 0) {
              auStackX_8[0] = auStackX_8[0] | 0x1000000;
              iVar4 = FUN_18073d6e0(uVar2);
              if (iVar4 == 0) {
                *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) & 0xffffffdf;
              }
            }
          }
        }
      }
    }
  }
  else if ((uVar3 & 1) == 0) {
    uVar2 = *(uint64_t *)(*(longlong *)(param_1 + 0x2b0) + 0x78);
    uStackX_10 = 0;
    iVar4 = FUN_18073f640(uVar2,&uStackX_10);
    if (iVar4 == 0) {
      uStackX_18 = 0;
      iVar4 = FUN_18073c380(uVar2,0xffffffff,&uStackX_18);
      if (iVar4 == 0) {
        uStackX_20 = 0;
        iVar4 = FUN_18073c380(uStackX_10,0xfffffffd,&uStackX_20);
        if ((iVar4 == 0) && (iVar4 = FUN_180740030(uStackX_20,uStackX_18,0,0), iVar4 == 0)) {
          auStackX_8[0] = 0;
          iVar4 = FUN_18073c8d0(uVar2,auStackX_8);
          if (iVar4 == 0) {
            auStackX_8[0] = auStackX_8[0] & 0xfeffffff;
            iVar4 = FUN_18073d6e0(uVar2);
            if (iVar4 == 0) {
              *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) | 0x20;
            }
          }
        }
      }
    }
  }
  puVar6 = (int32_t *)(param_1 + 0x318);
  while( true ) {
    if (iVar1 < 3) {
      uVar7 = 0;
    }
    else {
      uVar7 = *puVar6;
    }
    iVar4 = FUN_18073da60(*(uint64_t *)(*(longlong *)(param_1 + 0x2b0) + 0x78),iVar5,uVar7);
    if (iVar4 != 0) break;
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
    if (3 < iVar5) {
      return;
    }
  }
  return;
}



uint64_t FUN_180862670(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  
  iVar2 = FUN_1808605e0();
  if (iVar2 == 2) {
    uVar1 = *(uint *)(param_1 + 0x2d8);
    *(uint *)(param_1 + 0x2d8) = uVar1 | 4;
    if (((uVar1 & 0x80) == 0) && (*(char *)(*(longlong *)(param_1 + 0x2c8) + 0x780) == '\0')) {
      uVar3 = FUN_1808b81c0(*(longlong *)(param_1 + 0x2c8) + 0x3c8,param_1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) | 8;
  }
  return 0;
}



uint64_t FUN_1808626e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  uint64_t uVar6;
  longlong *plVar7;
  uint64_t *puVar8;
  int iVar9;
  longlong *plVar10;
  
  plVar7 = (longlong *)(param_1 + 0x240);
  plVar10 = (longlong *)0x0;
  plVar5 = (longlong *)(*plVar7 + -0x18);
  if (*plVar7 == 0) {
    plVar5 = plVar10;
  }
  plVar2 = plVar10;
  if (plVar5 != (longlong *)0x0) {
    plVar2 = plVar5 + 3;
  }
  while( true ) {
    if (plVar2 == plVar7) {
      return 0x4a;
    }
    plVar5 = plVar2 + -3;
    if (plVar2 == (longlong *)0x0) {
      plVar5 = plVar10;
    }
    if ((*(longlong *)(plVar5[6] + 0x10) == *param_2) &&
       (*(longlong *)(plVar5[6] + 0x18) == param_2[1])) break;
    if (plVar2 == plVar7) {
      return 0x4a;
    }
    plVar5 = (longlong *)(*plVar2 + -0x18);
    if (*plVar2 == 0) {
      plVar5 = plVar10;
    }
    plVar2 = plVar10;
    if (plVar5 != (longlong *)0x0) {
      plVar2 = plVar5 + 3;
    }
  }
  plVar2 = (longlong *)plVar5[7];
  FUN_1808bef40(*(uint64_t *)(param_1 + 0x2c8),plVar5);
  plVar7 = (longlong *)(param_1 + 0x250);
  plVar5 = (longlong *)(*plVar7 + -8);
  if (*plVar7 == 0) {
    plVar5 = plVar10;
  }
  plVar3 = plVar10;
  if (plVar5 != (longlong *)0x0) {
    plVar3 = plVar5 + 1;
  }
  while (plVar3 != plVar7) {
    plVar5 = plVar3 + -1;
    if (plVar3 == (longlong *)0x0) {
      plVar5 = plVar10;
    }
    if (plVar5 == plVar2) goto LAB_180862804;
    if (plVar3 == plVar7) break;
    plVar5 = (longlong *)(*plVar3 + -8);
    if (*plVar3 == 0) {
      plVar5 = plVar10;
    }
    plVar3 = plVar10;
    if (plVar5 != (longlong *)0x0) {
      plVar3 = plVar5 + 1;
    }
  }
  if ((*(byte *)(plVar2[3] + 0x34) & 1) != 0) {
LAB_180862804:
    if ((*(longlong *)(param_1 + 0x80) != 0) &&
       (uVar6 = FUN_180868800(*(longlong *)(param_1 + 0x80),plVar2), (int)uVar6 != 0)) {
      return uVar6;
    }
    iVar1 = *(int *)(param_1 + 0x268);
    if (0 < iVar1) {
      plVar7 = plVar10;
      puVar8 = *(uint64_t **)(param_1 + 0x260);
      do {
        iVar4 = (int)plVar7;
        if ((longlong *)*puVar8 == plVar2) {
          if ((-1 < iVar4) && (iVar4 < iVar1)) {
            iVar9 = (iVar1 - iVar4) + -1;
            if (0 < iVar9) {
              puVar8 = *(uint64_t **)(param_1 + 0x260) + iVar4;
                    // WARNING: Subroutine does not return
              memmove(puVar8,puVar8 + 1,(longlong)iVar9 << 3);
            }
            *(int *)(param_1 + 0x268) = iVar1 + -1;
          }
          break;
        }
        plVar7 = (longlong *)(ulonglong)(iVar4 + 1U);
        puVar8 = puVar8 + 1;
      } while ((int)(iVar4 + 1U) < iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x278);
    if (0 < iVar1) {
      puVar8 = *(uint64_t **)(param_1 + 0x270);
      do {
        iVar4 = (int)plVar10;
        if ((longlong *)*puVar8 == plVar2) {
          if ((-1 < iVar4) && (iVar4 < iVar1)) {
            iVar9 = (iVar1 - iVar4) + -1;
            if (0 < iVar9) {
              puVar8 = *(uint64_t **)(param_1 + 0x270) + iVar4;
                    // WARNING: Subroutine does not return
              memmove(puVar8,puVar8 + 1,(longlong)iVar9 << 3);
            }
            *(int *)(param_1 + 0x278) = iVar1 + -1;
          }
          break;
        }
        plVar10 = (longlong *)(ulonglong)(iVar4 + 1U);
        puVar8 = puVar8 + 1;
      } while ((int)(iVar4 + 1U) < iVar1);
    }
    if ((*(byte *)(plVar2[3] + 0x34) & 1) == 0) {
      func_0x0001808b8390(param_1 + 0x90,plVar2);
    }
  }
  return 0;
}



uint64_t FUN_180862910(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  iVar1 = *(int *)(param_1 + 0x4c8);
  iVar2 = 0;
  if (0 < iVar1) {
    plVar4 = *(longlong **)(param_1 + 0x4c0);
    do {
      if (*plVar4 == param_2) {
        if ((-1 < iVar2) && (iVar2 < iVar1)) {
          iVar3 = (iVar1 - iVar2) + -1;
          if (0 < iVar3) {
            plVar4 = *(longlong **)(param_1 + 0x4c0) + iVar2;
                    // WARNING: Subroutine does not return
            memmove(plVar4,plVar4 + 1,(longlong)iVar3 << 3);
          }
          *(int *)(param_1 + 0x4c8) = iVar1 + -1;
          return 0;
        }
        return 0x1c;
      }
      iVar2 = iVar2 + 1;
      plVar4 = plVar4 + 1;
    } while (iVar2 < iVar1);
  }
  return 0x4a;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



