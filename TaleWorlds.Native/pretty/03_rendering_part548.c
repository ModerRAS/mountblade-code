#include "TaleWorlds.Native.Split.h"

// 03_rendering_part548.c - 6 个函数

// 函数: void FUN_18056cd80(longlong param_1,char param_2)
void FUN_18056cd80(longlong param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    *(int32_t *)(param_1 + 0x4be5c) = 0;
    FUN_180618ce0(param_1 + 0x4b878,param_1 + 0x4b898);
    iVar1 = _Mtx_unlock(param_1 + 0x4c438);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
  }
  else {
    FUN_1805faa20(param_1 + 290000);
  }
  iVar1 = _Mtx_unlock(param_1 + 0x4c4e8);
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x00018056cdfa. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar1);
    return;
  }
  return;
}





// 函数: void FUN_18056cd84(longlong param_1,char param_2)
void FUN_18056cd84(longlong param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    *(int32_t *)(param_1 + 0x4be5c) = 0;
    FUN_180618ce0(param_1 + 0x4b878,param_1 + 0x4b898);
    iVar1 = _Mtx_unlock(param_1 + 0x4c438);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
  }
  else {
    FUN_1805faa20(param_1 + 290000);
  }
  iVar1 = _Mtx_unlock(param_1 + 0x4c4e8);
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x00018056cdfa. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar1);
    return;
  }
  return;
}





// 函数: void FUN_18056cdb6(void)
void FUN_18056cdb6(void)

{
  int iVar1;
  longlong unaff_RDI;
  
  FUN_180618ce0();
  iVar1 = _Mtx_unlock(unaff_RDI + 0x4c438);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  iVar1 = _Mtx_unlock(unaff_RDI + 0x4c4e8);
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x00018056cdfa. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar1);
    return;
  }
  return;
}





// 函数: void FUN_18056cdd6(void)
void FUN_18056cdd6(void)

{
  int32_t in_EAX;
  int iVar1;
  longlong unaff_RDI;
  
  __Throw_C_error_std__YAXH_Z(in_EAX);
  iVar1 = _Mtx_unlock(unaff_RDI + 0x4c4e8);
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x00018056cdfa. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar1);
    return;
  }
  return;
}





// 函数: void FUN_18056cdf4(void)
void FUN_18056cdf4(void)

{
  int32_t in_EAX;
  
                    // WARNING: Could not recover jumptable at 0x00018056cdfa. Too many branches
                    // WARNING: Treating indirect jump as call
  __Throw_C_error_std__YAXH_Z(in_EAX);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_18056ce10(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  char cVar6;
  char cVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  float fVar16;
  int iStackX_8;
  ulonglong uStackX_18;
  ulonglong uStackX_20;
  int aiStack_58 [2];
  uint64_t uStack_50;
  
  uStackX_18 = param_3 & 0xffffffff00000000;
  cVar6 = FUN_18055f260(param_2,&uStackX_18,&UNK_1809f9248);
  if ((*(int *)(param_1 + 0x718) != (int)uStackX_18) && (*(int *)(param_1 + 0x718) != -1)) {
    return cVar6 != '\0';
  }
  *(int *)(param_1 + 0x718) = (int)uStackX_18;
  uStack_50 = 0;
  iStackX_8 = 0;
  if (cVar6 != '\0') {
    uStackX_20 = uStackX_20 & 0xffffffff00000000;
    iStackX_8 = 0;
    uStackX_18 = uStackX_18 & 0xffffffff00000000;
    aiStack_58[0] = 0;
    cVar6 = FUN_180646a60(param_2,*(int32_t *)(param_1 + 0x724),&uStackX_20);
    if ((cVar6 == '\0') || (cVar6 = FUN_18055f260(param_2,aiStack_58,&UNK_1809fb2a0), cVar6 == '\0')
       ) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if (aiStack_58[0] == 0) {
      if (!bVar14) {
LAB_18056cf09:
        bVar14 = false;
        goto LAB_18056cf0b;
      }
      cVar6 = FUN_18055f260(param_2,&uStackX_18,&UNK_1809fb290);
      iStackX_8 = (int)uStackX_18;
      if (cVar6 == '\0') goto LAB_18056cf09;
      bVar14 = true;
      uStack_50 = CONCAT44((int)uStackX_18,(uint)uStackX_20);
      iVar10 = (uint)uStackX_20;
    }
    else {
LAB_18056cf0b:
      uStack_50 = CONCAT44(iStackX_8,(uint)uStackX_20);
      iVar10 = (uint)uStackX_20;
      if (!bVar14) goto LAB_18056cf22;
      bVar14 = true;
    }
  }
  else {
    uStack_50._0_4_ = 0;
    iVar10 = (int)uStack_50;
LAB_18056cf22:
    bVar14 = false;
  }
  uVar1 = uStack_50;
  *(uint64_t *)(param_2 + 0x5a0) = uStack_50;
  if (bVar14) {
    uStackX_20 = uStackX_20 & 0xffffffff00000000;
    uStackX_18 = uStackX_18 & 0xffffffff00000000;
    cVar6 = FUN_180646a60(param_2,*(int32_t *)(param_1 + 0x6b8),&uStackX_20);
    if ((cVar6 == '\0') ||
       (cVar6 = FUN_18055f260(param_2,&uStackX_18,&UNK_1809fb2a0), cVar6 == '\0')) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if ((!bVar14) ||
       (((int)uStackX_18 == 0 &&
        (cVar6 = FUN_18055f260(param_2,&uStackX_18,&UNK_1809fb290), cVar6 == '\0'))))
    goto LAB_18056cf95;
    bVar14 = true;
  }
  else {
LAB_18056cf95:
    bVar14 = false;
  }
  if ((*(int *)(param_1 + 0x724) < iVar10) ||
     ((iVar10 == *(int *)(param_1 + 0x724) && (*(int *)(param_1 + 0x728) < iStackX_8)))) {
    *(uint64_t *)(param_1 + 0x724) = uVar1;
    *(uint64_t *)(param_1 + 0x46c70) = *(uint64_t *)(param_2 + 0x5a8);
  }
  FUN_1805f9ee0();
  cVar6 = (char)uStackX_18;
  cVar7 = '\0';
  if (!bVar14) goto LAB_18056d160;
  do {
    if ((*(int *)(param_1 + 0x4b814) < *(int *)(param_1 + 0x4b808)) &&
       (lVar13 = *(longlong *)
                  (param_1 + 0x46d00 + (longlong)(*(int *)(param_1 + 0x4b814) % 0x960) * 8),
       lVar13 != 0)) {
      *(int32_t *)(lVar13 + 0x5c4) = 0;
      uStackX_18 = CONCAT71(uStackX_18._1_7_,1);
      bVar14 = true;
      do {
        if (*(int *)(lVar13 + 0x5c8) <= *(int *)(lVar13 + 0x5c4)) break;
        if (!bVar14) {
LAB_18056d148:
          bVar14 = false;
          break;
        }
        uStackX_20 = CONCAT44(uStackX_20._4_4_,(uint)(cVar6 != '\0'));
        cVar7 = FUN_18055f260(lVar13,&uStackX_20,&UNK_1809f9238);
        cVar6 = (uint)uStackX_20 != 0;
        if (cVar7 == '\0') goto LAB_18056d148;
        if ((bool)cVar6) {
          _DAT_180c95dc8 = lVar13;
          cVar7 = (**(code **)(_DAT_180c8ece0 + 0x138))();
          bVar14 = cVar7 != '\0';
          _DAT_180c95dc8 = 0;
        }
        else {
          uStackX_20 = CONCAT44(uStackX_20._4_4_,0xffff);
          cVar7 = FUN_18055f260(lVar13,&uStackX_20,&UNK_1809fa540);
          bVar14 = cVar7 != '\0';
          if (0x16 < (ushort)uStackX_20) goto LAB_18056d148;
          uVar11 = (uint)uStackX_20 & 0xffff;
          FUN_1800623b0(_DAT_180c86928,0,0x40000000000,0xc,&UNK_180a363e8,
                        *(uint64_t *)(&UNK_1809f90f0 + (ulonglong)uVar11 * 8));
          lVar12 = (ulonglong)uVar11 * 0x10;
          if ((*(longlong *)(lVar12 + 0x180c95bf8) != 0) ||
             (*(longlong *)(lVar12 + 0x180c95c00) != 0)) {
            (**(code **)(lVar12 + 0x180c95c00))(*(longlong *)(lVar12 + 0x180c95bf8),param_1,lVar13);
          }
        }
      } while (bVar14);
      FUN_1805fa2d0();
      cVar7 = (char)uStackX_18;
      if (bVar14) goto LAB_18056d1c4;
LAB_18056d160:
      bVar14 = false;
    }
    else {
      cVar7 = '\0';
LAB_18056d1c4:
      bVar14 = true;
    }
  } while ((cVar7 != '\0') && (bVar14));
  uStackX_20 = 0;
  if (bVar14) {
    uStackX_18 = uStackX_18 & 0xffffffff00000000;
    cVar6 = FUN_18055f260(param_2,&uStackX_18,&UNK_1809fb2a0);
    if ((int)uStackX_18 == 0) {
      uStackX_18 = uStackX_18 & 0xffffffff00000000;
      if ((cVar6 == '\0') ||
         (cVar6 = FUN_18055f260(param_2,&uStackX_18,&UNK_1809fb258), cVar6 == '\0')) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      uVar8 = (longlong)(int)uStackX_18 * 100;
      if (!bVar14) goto LAB_18056d213;
    }
    else if ((cVar6 == '\0') ||
            (cVar6 = FUN_180646610(param_2,&uStackX_20,&UNK_1809fb268), uVar8 = uStackX_20,
            cVar6 == '\0')) goto LAB_18056d213;
    bVar14 = true;
    if ((longlong)uVar8 < (longlong)*(ulonglong *)(param_1 + 0x46c78)) {
      uVar8 = *(ulonglong *)(param_1 + 0x46c78);
    }
    *(ulonglong *)(param_1 + 0x46c78) = uVar8;
  }
  else {
LAB_18056d213:
    bVar14 = false;
  }
  bVar15 = false;
  if (bVar14) {
    uStackX_18 = uStackX_18 & 0xffffffff00000000;
    cVar6 = FUN_18055f260(param_2,&uStackX_18,&UNK_1809f9238);
    bVar15 = (int)uStackX_18 != 0;
    if (cVar6 == '\0') goto LAB_18056d242;
    bVar14 = true;
  }
  else {
LAB_18056d242:
    bVar14 = false;
  }
  if (bVar15) {
    if ((((((bVar14 == false) ||
           (cVar6 = FUN_180646610(param_2,param_1 + 0x4c4d0,&UNK_1809fb268), cVar6 == '\0')) ||
          (cVar6 = FUN_180646700(param_2,param_1 + 0x4c4a8,&UNK_1809f9218), cVar6 == '\0')) ||
         ((cVar6 = FUN_180646700(param_2,param_1 + 0x4c4ac,&UNK_1809f9218), cVar6 == '\0' ||
          (cVar6 = FUN_180646700(param_2,param_1 + 0x4c4b0,&UNK_1809f9228), cVar6 == '\0')))) ||
        (((cVar6 = FUN_180646700(param_2,param_1 + 0x4c4c8,&UNK_1809f9288), cVar6 == '\0' ||
          ((cVar6 = FUN_180646700(param_2,param_1 + 0x4c4cc,&UNK_1809f9278), cVar6 == '\0' ||
           (cVar6 = FUN_180646700(param_2,param_1 + 0x4c4d8,&UNK_1809f92a8), cVar6 == '\0')))) ||
         (cVar6 = FUN_18055f260(param_2,param_1 + 0x4c4dc,&UNK_1809f9298), cVar6 == '\0')))) ||
       (cVar6 = FUN_18055f260(param_2,param_1 + 0x4c4e0,&UNK_1809f9268), cVar6 == '\0')) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if ((((*(int *)(param_1 + 0x724) == (int)uStack_50) && (*(int *)(param_1 + 0x728) == iStackX_8))
        && (bVar14 != false)) &&
       (((_DAT_180c96070 != 0 && (-1 < *(int *)(_DAT_180c96070 + 0x98d930))) &&
        (lVar13 = _DAT_180c96070 + 0x30a0 + (longlong)*(int *)(_DAT_180c96070 + 0x98d930) * 0xa60,
        lVar13 != 0)))) {
      fVar16 = (float)_DAT_180c8ed38;
      if (*(int *)(lVar13 + 0x564) < 0) {
        FUN_1804ecea0(*(uint64_t *)(lVar13 + 0x8d8),*(int32_t *)(lVar13 + 0x10));
      }
      else {
        FUN_1804ecea0(*(uint64_t *)(lVar13 + 0x8d8));
        iVar10 = *(int *)(lVar13 + 0x564) * 0x10;
        func_0x00018056f300(param_1 + 0x4c488,iVar10 + 3);
        uVar1 = *(uint64_t *)(param_2 + 0x5a0);
        puVar9 = (int32_t *)(((longlong)iVar10 + 2) * 0xe0 + *(longlong *)(param_1 + 0x4c488));
        puVar9[0x36] = fVar16 * 1e-05;
        *(uint64_t *)(puVar9 + 0x34) = uVar1;
        lVar12 = *(longlong *)(lVar13 + 0x20);
        uVar2 = *(int32_t *)(lVar12 + 0xc);
        uVar3 = *(int32_t *)(lVar12 + 0x10);
        uVar4 = *(int32_t *)(lVar12 + 0x14);
        uVar5 = *(int32_t *)(lVar12 + 0x18);
        *(int8_t *)(puVar9 + 0x37) = 0;
        *puVar9 = uVar2;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
      }
      iVar10 = *(int *)(lVar13 + 0x10) * 0x10;
      func_0x00018056f300(param_1 + 0x4c488,iVar10 + 3);
      uVar1 = *(uint64_t *)(param_2 + 0x5a0);
      puVar9 = (int32_t *)(((longlong)iVar10 + 2) * 0xe0 + *(longlong *)(param_1 + 0x4c488));
      puVar9[0x36] = fVar16 * 1e-05;
      *(uint64_t *)(puVar9 + 0x34) = uVar1;
      lVar13 = *(longlong *)(lVar13 + 0x20);
      uVar2 = *(int32_t *)(lVar13 + 0xc);
      uVar3 = *(int32_t *)(lVar13 + 0x10);
      uVar4 = *(int32_t *)(lVar13 + 0x14);
      uVar5 = *(int32_t *)(lVar13 + 0x18);
      *(int8_t *)(puVar9 + 0x37) = 0;
      *puVar9 = uVar2;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
    }
  }
  if (_DAT_180c96070 != 0) {
    if ((bVar14 == false) || (cVar6 = FUN_1805fdc90(param_2,param_1 + 0x4c488), cVar6 == '\0')) {
      bVar15 = false;
LAB_18056d4f8:
      bVar14 = false;
    }
    else {
      uStackX_18 = uStackX_18 & 0xffffffff00000000;
      cVar6 = FUN_18055f260(param_2,&uStackX_18,&UNK_1809f9238);
      bVar15 = (int)uStackX_18 != 0;
      if (cVar6 == '\0') goto LAB_18056d4f8;
      bVar14 = true;
    }
    if (bVar15) {
      if ((bVar14 == false) || (cVar6 = FUN_18056e2c0(param_1,param_2), cVar6 == '\0')) {
        return false;
      }
      bVar14 = true;
      goto LAB_18056d530;
    }
  }
  if (bVar14 == false) {
    return false;
  }
LAB_18056d530:
  *(uint64_t *)(param_1 + 0x700) = *(uint64_t *)(param_2 + 0x5a8);
  return bVar14;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18056ce5f(int32_t param_1,int32_t param_2)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  char in_AL;
  char cVar5;
  char cVar6;
  ulonglong uVar7;
  uint64_t uVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  int iVar11;
  longlong unaff_RBP;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  int iVar15;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  int iVar16;
  bool bVar17;
  bool bVar18;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t extraout_XMM0_Da_09;
  int32_t extraout_XMM0_Da_10;
  int32_t extraout_XMM0_Da_11;
  int32_t extraout_XMM0_Da_12;
  int32_t extraout_XMM0_Da_13;
  int32_t extraout_XMM0_Da_14;
  int32_t extraout_XMM0_Da_15;
  int32_t extraout_XMM0_Da_16;
  int32_t extraout_XMM0_Da_17;
  int32_t extraout_XMM0_Da_18;
  int32_t uVar19;
  int32_t extraout_XMM0_Da_19;
  float fVar20;
  
  iVar15 = (int)unaff_R12;
  *(int32_t *)(unaff_R14 + 0x718) = param_2;
  *(longlong *)(unaff_RBP + -0x30) = unaff_R12;
  *(int *)(unaff_RBP + 0x28) = iVar15;
  iVar11 = iVar15;
  if (in_AL == '\0') {
    iVar16 = *(int *)(unaff_RBP + -0x30);
LAB_18056cf22:
    bVar17 = false;
  }
  else {
    uVar19 = *(int32_t *)(unaff_R14 + 0x724);
    *(int *)(unaff_RBP + 0x40) = iVar15;
    *(int *)(unaff_RBP + 0x28) = iVar15;
    *(int *)(unaff_RBP + 0x38) = iVar15;
    *(int *)(unaff_RBP + -0x38) = iVar15;
    cVar5 = FUN_180646a60(param_1,uVar19,unaff_RBP + 0x40);
    param_1 = extraout_XMM0_Da;
    if ((cVar5 == '\0') ||
       (cVar5 = FUN_18055f260(extraout_XMM0_Da,unaff_RBP + -0x38,&UNK_1809fb2a0),
       param_1 = extraout_XMM0_Da_00, cVar5 == '\0')) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (*(int *)(unaff_RBP + -0x38) == iVar15) {
      if (!bVar17) {
LAB_18056cf09:
        bVar17 = false;
        goto LAB_18056cf0b;
      }
      cVar5 = FUN_18055f260(param_1,unaff_RBP + 0x38,&UNK_1809fb290);
      iVar11 = *(int *)(unaff_RBP + 0x38);
      *(int *)(unaff_RBP + 0x28) = iVar11;
      param_1 = extraout_XMM0_Da_01;
      if (cVar5 == '\0') goto LAB_18056cf09;
      iVar16 = *(int *)(unaff_RBP + 0x40);
      bVar17 = true;
      *(int *)(unaff_RBP + -0x30) = iVar16;
      *(int *)(unaff_RBP + -0x2c) = iVar11;
    }
    else {
LAB_18056cf0b:
      iVar16 = *(int *)(unaff_RBP + 0x40);
      *(int *)(unaff_RBP + -0x30) = iVar16;
      *(int *)(unaff_RBP + -0x2c) = iVar11;
      if (!bVar17) goto LAB_18056cf22;
      bVar17 = true;
    }
  }
  uVar8 = *(uint64_t *)(unaff_RBP + -0x30);
  *(uint64_t *)(unaff_R13 + 0x5a0) = uVar8;
  if (bVar17) {
    uVar19 = *(int32_t *)(unaff_R14 + 0x6b8);
    *(int *)(unaff_RBP + 0x40) = iVar15;
    *(int *)(unaff_RBP + 0x38) = iVar15;
    cVar5 = FUN_180646a60(param_1,uVar19,unaff_RBP + 0x40);
    uVar19 = extraout_XMM0_Da_02;
    if ((cVar5 == '\0') ||
       (cVar5 = FUN_18055f260(extraout_XMM0_Da_02,unaff_RBP + 0x38,&UNK_1809fb2a0),
       uVar19 = extraout_XMM0_Da_03, cVar5 == '\0')) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if ((!bVar17) ||
       ((*(int *)(unaff_RBP + 0x38) == iVar15 &&
        (cVar5 = FUN_18055f260(uVar19,unaff_RBP + 0x38,&UNK_1809fb290), cVar5 == '\0'))))
    goto LAB_18056cf95;
    bVar17 = true;
  }
  else {
LAB_18056cf95:
    bVar17 = false;
  }
  if ((*(int *)(unaff_R14 + 0x724) < iVar16) ||
     ((iVar16 == *(int *)(unaff_R14 + 0x724) && (*(int *)(unaff_R14 + 0x728) < iVar11)))) {
    *(uint64_t *)(unaff_R14 + 0x724) = uVar8;
    *(uint64_t *)(unaff_R14 + 0x46c70) = *(uint64_t *)(unaff_R13 + 0x5a8);
  }
  uVar7 = FUN_1805f9ee0();
  cVar5 = *(char *)(unaff_RBP + 0x38);
  cVar6 = '\0';
  uVar19 = extraout_XMM0_Da_04;
  if (!bVar17) goto LAB_18056d160;
  do {
    if (*(int *)(unaff_R14 + 0x4b814) < *(int *)(unaff_R14 + 0x4b808)) {
      uVar7 = (ulonglong)(*(int *)(unaff_R14 + 0x4b814) % 0x960);
      lVar13 = *(longlong *)(unaff_R14 + 0x46d00 + uVar7 * 8);
      if (lVar13 == 0) goto LAB_18056d1c1;
      *(int *)(lVar13 + 0x5c4) = iVar15;
      *(int8_t *)(unaff_RBP + 0x38) = 1;
      bVar17 = true;
      do {
        if (*(int *)(lVar13 + 0x5c8) <= *(int *)(lVar13 + 0x5c4)) break;
        if (!bVar17) {
LAB_18056d148:
          bVar17 = false;
          break;
        }
        *(uint *)(unaff_RBP + 0x40) = (uint)(cVar5 != '\0');
        cVar6 = FUN_18055f260(lVar13,unaff_RBP + 0x40,&UNK_1809f9238);
        cVar5 = *(int *)(unaff_RBP + 0x40) != iVar15;
        if (cVar6 == '\0') goto LAB_18056d148;
        if ((bool)cVar5) {
          _DAT_180c95dc8 = lVar13;
          cVar6 = (**(code **)(_DAT_180c8ece0 + 0x138))();
          bVar17 = cVar6 != '\0';
          _DAT_180c95dc8 = unaff_R12;
        }
        else {
          *(int32_t *)(unaff_RBP + 0x40) = 0xffff;
          cVar6 = FUN_18055f260(lVar13,unaff_RBP + 0x40,&UNK_1809fa540);
          bVar17 = cVar6 != '\0';
          uVar1 = *(uint *)(unaff_RBP + 0x40);
          if (0x16 < (ushort)uVar1) goto LAB_18056d148;
          FUN_1800623b0(_DAT_180c86928,0,0x40000000000,0xc,&UNK_180a363e8);
          lVar12 = (ulonglong)(uVar1 & 0xffff) * 0x10;
          if ((*(longlong *)(lVar12 + 0x180c95bf8) != 0) ||
             (*(longlong *)(lVar12 + 0x180c95c00) != unaff_R12)) {
            (**(code **)(lVar12 + 0x180c95c00))();
          }
        }
      } while (bVar17);
      uVar7 = FUN_1805fa2d0();
      cVar6 = *(char *)(unaff_RBP + 0x38);
      uVar19 = extraout_XMM0_Da_05;
      if (bVar17) goto LAB_18056d1c4;
LAB_18056d160:
      bVar17 = false;
    }
    else {
LAB_18056d1c1:
      cVar6 = '\0';
LAB_18056d1c4:
      bVar17 = true;
    }
  } while ((cVar6 != '\0') && (bVar17));
  *(longlong *)(unaff_RBP + 0x40) = unaff_R12;
  if (bVar17) {
    *(int *)(unaff_RBP + 0x38) = iVar15;
    uVar8 = FUN_18055f260(uVar19,unaff_RBP + 0x38,&UNK_1809fb2a0);
    bVar17 = (char)uVar8 != '\0';
    uVar7 = CONCAT71((int7)((ulonglong)uVar8 >> 8),bVar17);
    uVar19 = extraout_XMM0_Da_06;
    if (*(int *)(unaff_RBP + 0x38) == iVar15) {
      *(int *)(unaff_RBP + 0x38) = iVar15;
      if ((bVar17) &&
         (cVar5 = FUN_18055f260(extraout_XMM0_Da_06,unaff_RBP + 0x38,&UNK_1809fb258),
         uVar19 = extraout_XMM0_Da_08, cVar5 != '\0')) {
        bVar17 = true;
      }
      else {
        bVar17 = false;
      }
      uVar7 = (ulonglong)*(int *)(unaff_RBP + 0x38);
      uVar9 = uVar7 * 100;
      if (bVar17) goto LAB_18056d1fa;
      goto LAB_18056d213;
    }
    if ((!bVar17) ||
       (uVar7 = FUN_180646610(extraout_XMM0_Da_06,unaff_RBP + 0x40,&UNK_1809fb268),
       uVar19 = extraout_XMM0_Da_07, (char)uVar7 == '\0')) goto LAB_18056d213;
    uVar9 = *(ulonglong *)(unaff_RBP + 0x40);
LAB_18056d1fa:
    uVar7 = *(ulonglong *)(unaff_R14 + 0x46c78);
    bVar17 = true;
    if ((longlong)uVar9 < (longlong)uVar7) {
      uVar9 = uVar7;
    }
    *(ulonglong *)(unaff_R14 + 0x46c78) = uVar9;
  }
  else {
LAB_18056d213:
    bVar17 = false;
  }
  bVar18 = false;
  if (bVar17) {
    *(int *)(unaff_RBP + 0x38) = iVar15;
    uVar7 = FUN_18055f260(uVar19,unaff_RBP + 0x38,&UNK_1809f9238);
    bVar18 = *(int *)(unaff_RBP + 0x38) != iVar15;
    uVar19 = extraout_XMM0_Da_09;
    if ((char)uVar7 == '\0') goto LAB_18056d242;
    bVar14 = 1;
  }
  else {
LAB_18056d242:
    bVar14 = 0;
  }
  if (bVar18) {
    if ((((((bVar14 == 0) ||
           (cVar5 = FUN_180646610(uVar19,unaff_R14 + 0x4c4d0,&UNK_1809fb268),
           uVar19 = extraout_XMM0_Da_10, cVar5 == '\0')) ||
          (cVar5 = FUN_180646700(extraout_XMM0_Da_10,unaff_R14 + 0x4c4a8,&UNK_1809f9218),
          uVar19 = extraout_XMM0_Da_11, cVar5 == '\0')) ||
         ((cVar5 = FUN_180646700(extraout_XMM0_Da_11,unaff_R14 + 0x4c4ac,&UNK_1809f9218),
          uVar19 = extraout_XMM0_Da_12, cVar5 == '\0' ||
          (cVar5 = FUN_180646700(extraout_XMM0_Da_12,unaff_R14 + 0x4c4b0,&UNK_1809f9228),
          uVar19 = extraout_XMM0_Da_13, cVar5 == '\0')))) ||
        (((cVar5 = FUN_180646700(extraout_XMM0_Da_13,unaff_R14 + 0x4c4c8,&UNK_1809f9288),
          uVar19 = extraout_XMM0_Da_14, cVar5 == '\0' ||
          ((cVar5 = FUN_180646700(extraout_XMM0_Da_14,unaff_R14 + 0x4c4cc,&UNK_1809f9278),
           uVar19 = extraout_XMM0_Da_15, cVar5 == '\0' ||
           (cVar5 = FUN_180646700(extraout_XMM0_Da_15,unaff_R14 + 0x4c4d8,&UNK_1809f92a8),
           uVar19 = extraout_XMM0_Da_16, cVar5 == '\0')))) ||
         (cVar5 = FUN_18055f260(extraout_XMM0_Da_16,unaff_R14 + 0x4c4dc,&UNK_1809f9298),
         uVar19 = extraout_XMM0_Da_17, cVar5 == '\0')))) ||
       (cVar5 = FUN_18055f260(extraout_XMM0_Da_17,unaff_R14 + 0x4c4e0,&UNK_1809f9268),
       uVar19 = extraout_XMM0_Da_18, cVar5 == '\0')) {
      bVar14 = 0;
    }
    else {
      bVar14 = 1;
    }
    uVar7 = (ulonglong)*(uint *)(unaff_RBP + -0x30);
    if ((((*(uint *)(unaff_R14 + 0x724) == *(uint *)(unaff_RBP + -0x30)) &&
         (uVar7 = (ulonglong)*(uint *)(unaff_RBP + 0x28),
         *(uint *)(unaff_R14 + 0x728) == *(uint *)(unaff_RBP + 0x28))) && (bVar14 != 0)) &&
       (((_DAT_180c96070 != 0 &&
         (uVar7 = (ulonglong)*(int *)(_DAT_180c96070 + 0x98d930),
         -1 < *(int *)(_DAT_180c96070 + 0x98d930))) &&
        (lVar13 = _DAT_180c96070 + 0x30a0 + uVar7 * 0xa60, lVar13 != 0)))) {
      fVar20 = (float)_DAT_180c8ed38;
      if (*(int *)(lVar13 + 0x564) < 0) {
        FUN_1804ecea0(*(uint64_t *)(lVar13 + 0x8d8),*(int32_t *)(lVar13 + 0x10));
      }
      else {
        FUN_1804ecea0(*(uint64_t *)(lVar13 + 0x8d8));
        iVar11 = *(int *)(lVar13 + 0x564) * 0x10;
        func_0x00018056f300(unaff_R14 + 0x4c488,iVar11 + 3);
        uVar8 = *(uint64_t *)(unaff_R13 + 0x5a0);
        puVar10 = (int32_t *)(((longlong)iVar11 + 2) * 0xe0 + *(longlong *)(unaff_R14 + 0x4c488))
        ;
        puVar10[0x36] = fVar20 * 1e-05;
        *(uint64_t *)(puVar10 + 0x34) = uVar8;
        lVar12 = *(longlong *)(lVar13 + 0x20);
        uVar19 = *(int32_t *)(lVar12 + 0xc);
        uVar2 = *(int32_t *)(lVar12 + 0x10);
        uVar3 = *(int32_t *)(lVar12 + 0x14);
        uVar4 = *(int32_t *)(lVar12 + 0x18);
        *(char *)(puVar10 + 0x37) = (char)unaff_R12;
        *puVar10 = uVar19;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
      }
      iVar11 = *(int *)(lVar13 + 0x10) * 0x10;
      func_0x00018056f300(unaff_R14 + 0x4c488,iVar11 + 3);
      uVar8 = *(uint64_t *)(unaff_R13 + 0x5a0);
      puVar10 = (int32_t *)(((longlong)iVar11 + 2) * 0xe0 + *(longlong *)(unaff_R14 + 0x4c488));
      puVar10[0x36] = fVar20 * 1e-05;
      *(uint64_t *)(puVar10 + 0x34) = uVar8;
      uVar7 = *(ulonglong *)(lVar13 + 0x20);
      uVar19 = *(int32_t *)(uVar7 + 0xc);
      uVar2 = *(int32_t *)(uVar7 + 0x10);
      uVar3 = *(int32_t *)(uVar7 + 0x14);
      uVar4 = *(int32_t *)(uVar7 + 0x18);
      *(char *)(puVar10 + 0x37) = (char)unaff_R12;
      *puVar10 = uVar19;
      puVar10[1] = uVar2;
      puVar10[2] = uVar3;
      puVar10[3] = uVar4;
    }
  }
  if (_DAT_180c96070 == unaff_R12) {
FUN_18056d52b:
    if (bVar14 == 0) goto LAB_18056d53e;
  }
  else {
    if ((bVar14 == 0) || (uVar7 = FUN_1805fdc90(uVar19,unaff_R14 + 0x4c488), (char)uVar7 == '\0')) {
      bVar17 = false;
LAB_18056d4f8:
      bVar14 = 0;
    }
    else {
      *(int *)(unaff_RBP + 0x38) = iVar15;
      uVar7 = FUN_18055f260(extraout_XMM0_Da_19,unaff_RBP + 0x38,&UNK_1809f9238);
      bVar17 = *(int *)(unaff_RBP + 0x38) != iVar15;
      if ((char)uVar7 == '\0') goto LAB_18056d4f8;
      bVar14 = 1;
    }
    if (!bVar17) goto FUN_18056d52b;
    if ((bVar14 == 0) || (uVar7 = FUN_18056e2c0(), (char)uVar7 == '\0')) {
      return uVar7 & 0xffffffffffffff00;
    }
    bVar14 = 1;
  }
  *(uint64_t *)(unaff_R14 + 0x700) = *(uint64_t *)(unaff_R13 + 0x5a8);
LAB_18056d53e:
  return (ulonglong)bVar14;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18056d3c4(uint64_t param_1,int param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  ulonglong uVar7;
  int32_t *puVar8;
  int iVar9;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte unaff_DIL;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  bool bVar10;
  int32_t extraout_XMM0_Da;
  float fVar11;
  
  fVar11 = (float)_DAT_180c8ed38;
  if (param_2 < 0) {
    FUN_1804ecea0(param_1,*(int32_t *)(unaff_RSI + 0x10));
  }
  else {
    FUN_1804ecea0();
    iVar9 = *(int *)(unaff_RSI + 0x564) * 0x10;
    func_0x00018056f300(unaff_R14 + 0x4c488,iVar9 + 3);
    uVar1 = *(uint64_t *)(unaff_R13 + 0x5a0);
    puVar8 = (int32_t *)(((longlong)iVar9 + 2) * 0xe0 + *(longlong *)(unaff_R14 + 0x4c488));
    puVar8[0x36] = fVar11 * 1e-05;
    *(uint64_t *)(puVar8 + 0x34) = uVar1;
    lVar2 = *(longlong *)(unaff_RSI + 0x20);
    uVar3 = *(int32_t *)(lVar2 + 0xc);
    uVar4 = *(int32_t *)(lVar2 + 0x10);
    uVar5 = *(int32_t *)(lVar2 + 0x14);
    uVar6 = *(int32_t *)(lVar2 + 0x18);
    *(char *)(puVar8 + 0x37) = (char)unaff_R12;
    *puVar8 = uVar3;
    puVar8[1] = uVar4;
    puVar8[2] = uVar5;
    puVar8[3] = uVar6;
  }
  iVar9 = *(int *)(unaff_RSI + 0x10) * 0x10;
  func_0x00018056f300(unaff_R14 + 0x4c488,iVar9 + 3);
  uVar1 = *(uint64_t *)(unaff_R13 + 0x5a0);
  puVar8 = (int32_t *)(((longlong)iVar9 + 2) * 0xe0 + *(longlong *)(unaff_R14 + 0x4c488));
  puVar8[0x36] = fVar11 * 1e-05;
  *(uint64_t *)(puVar8 + 0x34) = uVar1;
  uVar7 = *(ulonglong *)(unaff_RSI + 0x20);
  uVar3 = *(int32_t *)(uVar7 + 0xc);
  uVar4 = *(int32_t *)(uVar7 + 0x10);
  uVar5 = *(int32_t *)(uVar7 + 0x14);
  uVar6 = *(int32_t *)(uVar7 + 0x18);
  *(char *)(puVar8 + 0x37) = (char)unaff_R12;
  *puVar8 = uVar3;
  puVar8[1] = uVar4;
  puVar8[2] = uVar5;
  puVar8[3] = uVar6;
  if (_DAT_180c96070 == unaff_R12) {
FUN_18056d52b:
    if (unaff_DIL == 0) goto LAB_18056d53e;
  }
  else {
    if (unaff_DIL == 0) {
LAB_18056d4f6:
      bVar10 = false;
LAB_18056d4f8:
      unaff_DIL = 0;
    }
    else {
      uVar7 = FUN_1805fdc90(uVar3,unaff_R14 + 0x4c488);
      if ((char)uVar7 == '\0') goto LAB_18056d4f6;
      *(int *)(unaff_RBP + 0x38) = (int)unaff_R12;
      uVar7 = FUN_18055f260(extraout_XMM0_Da,unaff_RBP + 0x38,&UNK_1809f9238);
      bVar10 = *(int *)(unaff_RBP + 0x38) != (int)unaff_R12;
      if ((char)uVar7 == '\0') goto LAB_18056d4f8;
      unaff_DIL = 1;
    }
    if (!bVar10) goto FUN_18056d52b;
    if (unaff_DIL == 0) {
LAB_18056d518:
      return uVar7 & 0xffffffffffffff00;
    }
    uVar7 = FUN_18056e2c0();
    if ((char)uVar7 == '\0') goto LAB_18056d518;
    unaff_DIL = 1;
  }
  *(uint64_t *)(unaff_R14 + 0x700) = *(uint64_t *)(unaff_R13 + 0x5a8);
LAB_18056d53e:
  return (ulonglong)unaff_DIL;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18056d49c(void)

{
  ulonglong in_RAX;
  longlong unaff_RBP;
  byte unaff_DIL;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  bool bVar1;
  
  if (_DAT_180c96070 == unaff_R12) {
FUN_18056d52b:
    if (unaff_DIL == 0) goto LAB_18056d53e;
  }
  else {
    if (unaff_DIL == 0) {
LAB_18056d4f6:
      bVar1 = false;
LAB_18056d4f8:
      unaff_DIL = 0;
    }
    else {
      in_RAX = FUN_1805fdc90();
      if ((char)in_RAX == '\0') goto LAB_18056d4f6;
      *(int *)(unaff_RBP + 0x38) = (int)unaff_R12;
      in_RAX = FUN_18055f260();
      bVar1 = *(int *)(unaff_RBP + 0x38) != (int)unaff_R12;
      if ((char)in_RAX == '\0') goto LAB_18056d4f8;
      unaff_DIL = 1;
    }
    if (!bVar1) goto FUN_18056d52b;
    if (unaff_DIL == 0) {
LAB_18056d518:
      return in_RAX & 0xffffffffffffff00;
    }
    in_RAX = FUN_18056e2c0();
    if ((char)in_RAX == '\0') goto LAB_18056d518;
    unaff_DIL = 1;
  }
  *(uint64_t *)(unaff_R14 + 0x700) = *(uint64_t *)(unaff_R13 + 0x5a8);
LAB_18056d53e:
  return (ulonglong)unaff_DIL;
}



ulonglong FUN_18056d4b7(void)

{
  ulonglong in_RAX;
  longlong unaff_RBP;
  char unaff_DIL;
  byte bVar1;
  int unaff_R12D;
  longlong unaff_R13;
  longlong unaff_R14;
  bool bVar2;
  
  if (unaff_DIL == '\0') {
LAB_18056d4f6:
    bVar2 = false;
LAB_18056d4f8:
    bVar1 = 0;
  }
  else {
    in_RAX = FUN_1805fdc90();
    if ((char)in_RAX == '\0') goto LAB_18056d4f6;
    *(int *)(unaff_RBP + 0x38) = unaff_R12D;
    in_RAX = FUN_18055f260();
    bVar2 = *(int *)(unaff_RBP + 0x38) != unaff_R12D;
    if ((char)in_RAX == '\0') goto LAB_18056d4f8;
    bVar1 = 1;
  }
  if (bVar2) {
    if (bVar1 == 0) {
LAB_18056d518:
      return in_RAX & 0xffffffffffffff00;
    }
    in_RAX = FUN_18056e2c0();
    if ((char)in_RAX == '\0') goto LAB_18056d518;
    bVar1 = 1;
  }
  else if (bVar1 == 0) goto LAB_18056d53e;
  *(uint64_t *)(unaff_R14 + 0x700) = *(uint64_t *)(unaff_R13 + 0x5a8);
LAB_18056d53e:
  return (ulonglong)bVar1;
}



char FUN_18056d52b(void)

{
  char unaff_DIL;
  longlong unaff_R13;
  longlong unaff_R14;
  
  if (unaff_DIL != '\0') {
    *(uint64_t *)(unaff_R14 + 0x700) = *(uint64_t *)(unaff_R13 + 0x5a8);
  }
  return unaff_DIL;
}





// 函数: void FUN_18056d547(void)
void FUN_18056d547(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



