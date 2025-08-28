#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part376.c - 10 个函数

// 函数: void FUN_180471a46(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_180471a46(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  longlong in_RAX;
  longlong unaff_RBX;
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  uVar3 = uVar1;
  if (in_RAX != 0) {
    do {
      (**(code **)(**(longlong **)(uVar1 + param_3) + 0xd0))();
      param_3 = *(longlong *)(unaff_RBX + 0x200);
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x208) - param_3 >> 3));
  }
  return;
}





// 函数: void FUN_180471a52(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_180471a52(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  longlong unaff_RBX;
  ulonglong uVar1;
  uint unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    (**(code **)(**(longlong **)(uVar1 + param_3) + 0xd0))();
    param_3 = *(longlong *)(unaff_RBX + 0x200);
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x208) - param_3 >> 3));
  return;
}





// 函数: void FUN_180471a98(void)
void FUN_180471a98(void)

{
  return;
}





// 函数: void FUN_180471a9d(void)
void FUN_180471a9d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180471ab0(longlong param_1,float *param_2,longlong param_3)
void FUN_180471ab0(longlong param_1,float *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar14;
  int8_t auVar13 [16];
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
  int8_t auStack_718 [32];
  uint64_t *puStack_6f8;
  int32_t uStack_6f0;
  void **ppuStack_6e8;
  int32_t uStack_6e0;
  int32_t uStack_6d8;
  int32_t uStack_6d0;
  longlong lStack_6c8;
  uint64_t uStack_6b8;
  int32_t uStack_6b0;
  int32_t uStack_6ac;
  float fStack_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  uint64_t uStack_698;
  uint64_t uStack_690;
  float fStack_688;
  float fStack_684;
  float fStack_680;
  float fStack_67c;
  float fStack_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  int32_t uStack_668;
  int32_t uStack_664;
  int32_t uStack_660;
  int32_t uStack_65c;
  int32_t uStack_658;
  float fStack_654;
  float fStack_650;
  float fStack_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float fStack_638;
  float fStack_634;
  float fStack_630;
  uint64_t uStack_628;
  int32_t uStack_620;
  float fStack_618;
  int32_t uStack_614;
  int32_t uStack_610;
  int32_t uStack_60c;
  int32_t uStack_608;
  int32_t uStack_604;
  int32_t uStack_600;
  int32_t uStack_5fc;
  float fStack_5f8;
  float fStack_5f4;
  float fStack_5f0;
  int32_t uStack_5e8;
  int32_t uStack_5e4;
  int32_t uStack_5e0;
  int32_t uStack_5dc;
  int32_t uStack_5d8;
  int32_t uStack_5d4;
  int32_t uStack_5d0;
  void *puStack_5c8;
  longlong *plStack_5c0;
  longlong *plStack_5b8;
  int32_t uStack_5b0;
  int32_t uStack_5ac;
  int8_t uStack_5a8;
  int8_t *puStack_5a0;
  int32_t *puStack_598;
  int8_t auStack_590 [16];
  float fStack_580;
  float fStack_57c;
  float fStack_578;
  longlong alStack_570 [3];
  int32_t uStack_558;
  longlong alStack_550 [3];
  int32_t uStack_538;
  uint64_t uStack_530;
  int8_t auStack_528 [16];
  int8_t auStack_518 [48];
  uint64_t auStack_4e8 [128];
  ulonglong uStack_e8;
  
  uStack_530 = 0xfffffffffffffffe;
  uStack_e8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_718;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))();
  iVar9 = 0x80;
  if (iVar3 < 0x80) {
    iVar9 = iVar3;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb8))
            (*(longlong **)(param_1 + 0x28),auStack_4e8,0x80,0);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))(*(longlong **)(param_1 + 0x28),&fStack_648);
  fVar16 = param_2[4] - *param_2;
  fVar17 = fVar16 * fVar16 + (param_2[5] - param_2[1]) * (param_2[5] - param_2[1]) +
           (param_2[6] - param_2[2]) * (param_2[6] - param_2[2]);
  auVar13 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
  fVar16 = auVar13._0_4_;
  fStack_650 = fVar16 * 0.5 * (3.0 - fVar17 * fVar16 * fVar16) * fVar17 * 0.5;
  fStack_654 = param_2[8];
  uStack_658 = 2;
  fStack_6a8 = 0.0;
  fStack_6a4 = 0.0;
  fStack_6a0 = 1.0;
  fStack_69c = 3.4028235e+38;
  FUN_180645340(&uStack_698,param_2 + 4,param_2,&fStack_6a8);
  fVar18 = fStack_678 * 0.0;
  fVar19 = fStack_674 * 0.0;
  fVar20 = fStack_670 * 0.0;
  fVar21 = fStack_66c * 0.0;
  fVar16 = fStack_678 * 1.0;
  fVar17 = fStack_674 * 1.0;
  fVar14 = fStack_670 * 1.0;
  fVar15 = fStack_66c * 1.0;
  fVar22 = (float)uStack_698 * 0.0;
  fVar23 = uStack_698._4_4_ * 0.0;
  fVar24 = (float)uStack_690 * 0.0;
  fVar25 = uStack_690._4_4_ * 0.0;
  fStack_678 = fVar22 + fStack_688 * 1.0 + fVar18;
  fStack_674 = fVar23 + fStack_684 * 1.0 + fVar19;
  fStack_670 = fVar24 + fStack_680 * 1.0 + fVar20;
  fStack_66c = fVar25 + fStack_67c * 1.0 + fVar21;
  uStack_698 = CONCAT44(uStack_698._4_4_ * -1.0 + fStack_684 * 0.0 + fVar19,
                        (float)uStack_698 * -1.0 + fStack_688 * 0.0 + fVar18);
  uStack_690 = CONCAT44(uStack_690._4_4_ * -1.0 + fStack_67c * 0.0 + fVar21,
                        (float)uStack_690 * -1.0 + fStack_680 * 0.0 + fVar20);
  fStack_688 = fVar22 + fStack_688 * 0.0 + fVar16;
  fStack_684 = fVar23 + fStack_684 * 0.0 + fVar17;
  fStack_680 = fVar24 + fStack_680 * 0.0 + fVar14;
  fStack_67c = fVar25 + fStack_67c * 0.0 + fVar15;
  FUN_18063b470(&uStack_6b8,&uStack_698);
  uStack_5e8 = uStack_6b8._4_4_;
  uStack_5e4 = uStack_6b0;
  uStack_5e0 = uStack_6ac;
  uStack_5dc = (int32_t)uStack_6b8;
  uStack_5d8 = uStack_668;
  uStack_5d4 = uStack_664;
  uStack_5d0 = uStack_660;
  lVar7 = (longlong)iVar9;
  uStack_6b8 = lVar7;
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      plVar1 = (longlong *)auStack_4e8[lVar10];
      (**(code **)(*plVar1 + 0x98))(plVar1,auStack_590);
      alStack_550[0] = 0;
      alStack_550[1] = 0;
      alStack_550[2] = 0;
      uStack_538 = 3;
      alStack_570[0] = 0;
      alStack_570[1] = 0;
      alStack_570[2] = 0;
      uStack_558 = 3;
      puStack_5c8 = &unknown_var_4824_ptr;
      plStack_5c0 = alStack_550;
      plStack_5b8 = alStack_570;
      uStack_5b0 = 0;
      uStack_5ac = 1;
      uStack_5a8 = 0;
      uStack_628 = 0;
      uStack_620 = 0;
      (**(code **)(*plVar1 + 0x48))(plVar1,auStack_518);
      puStack_598 = &uStack_658;
      puStack_5a0 = auStack_518;
      puVar4 = (int32_t *)FUN_1800fcb90(&fStack_648,auStack_528,auStack_590);
      fVar18 = fStack_580 * 2.0;
      fVar14 = fStack_57c * 2.0;
      fVar16 = fStack_578 * 2.0;
      fVar15 = fStack_63c * fStack_63c - 0.5;
      fVar17 = fStack_644 * fVar14 + fStack_648 * fVar18 + fStack_640 * fVar16;
      fStack_5f0 = fStack_630 +
                   (fStack_648 * fVar14 - fStack_644 * fVar18) * fStack_63c + fVar15 * fVar16 +
                   fStack_640 * fVar17;
      fStack_5f4 = fStack_634 +
                   (fStack_640 * fVar18 - fStack_648 * fVar16) * fStack_63c + fVar15 * fVar14 +
                   fStack_644 * fVar17;
      fStack_5f8 = fStack_638 +
                   (fStack_644 * fVar16 - fStack_640 * fVar14) * fStack_63c + fVar15 * fVar18 +
                   fStack_648 * fVar17;
      uStack_608 = *puVar4;
      uStack_604 = puVar4[1];
      uStack_600 = puVar4[2];
      uStack_5fc = puVar4[3];
      lStack_6c8 = render_system_data_memory + 0x48;
      uStack_6d0 = 0x3f800000;
      uStack_6d8 = 0x3dcccccd;
      uStack_6e0 = 0x3dcccccd;
      ppuStack_6e8 = &puStack_5c8;
      uStack_6f0 = 1;
      puStack_6f8 = &uStack_628;
      PxGenerateContacts(&puStack_598,&puStack_5a0,&uStack_5e8,&uStack_608);
      plVar6 = plStack_5b8;
      uVar12 = uVar8;
      if (plStack_5b8[1] - *plStack_5b8 >> 6 != 0) {
        do {
          lVar2 = *plVar6;
          if (*(float *)(uVar8 + 0xc + lVar2) <= 0.0) {
            lVar7 = uStack_6b8;
            if (0x7f < *(int *)(param_3 + 0x2000)) break;
            fStack_6a0 = *(float *)(uVar8 + 0x18 + lVar2);
            fStack_6a4 = *(float *)(uVar8 + 0x14 + lVar2);
            fStack_6a8 = *(float *)(uVar8 + 0x10 + lVar2);
            fStack_69c = 3.4028235e+38;
            uStack_610 = *(int32_t *)(uVar8 + 8 + lVar2);
            uStack_614 = *(int32_t *)(uVar8 + 4 + lVar2);
            fStack_618 = *(float *)(uVar8 + lVar2);
            uStack_60c = 0x7f7fffff;
            fStack_680 = 0.0;
            uStack_698 = *(uint64_t *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) + 8);
            lVar7 = (**(code **)(*plVar1 + 0xd8))(plVar1,*(int32_t *)(uVar8 + 0x34 + lVar2));
            if (lVar7 == 0) {
              uStack_690 = 0;
            }
            else {
              uStack_690 = *(uint64_t *)(*(longlong *)(lVar7 + 0x10) + 8);
            }
            fVar16 = *(float *)(uVar8 + 0xc + lVar2);
            fStack_66c = fStack_618;
            uStack_668 = uStack_614;
            uStack_664 = uStack_610;
            uStack_660 = uStack_60c;
            fStack_678 = fStack_6a4;
            fStack_674 = fStack_6a0;
            fStack_670 = fStack_69c;
            puVar5 = (uint64_t *)((longlong)*(int *)(param_3 + 0x2000) * 0x40 + param_3);
            *puVar5 = uStack_698;
            puVar5[1] = uStack_690;
            fStack_688 = -fVar16;
            fStack_684 = 0.0;
            fStack_67c = fStack_6a8;
            *(float *)(puVar5 + 2) = -fVar16;
            *(int32_t *)((longlong)puVar5 + 0x14) = 0;
            *(float *)(puVar5 + 3) = fStack_680;
            *(float *)((longlong)puVar5 + 0x1c) = fStack_6a8;
            puVar5[4] = CONCAT44(fStack_6a0,fStack_6a4);
            puVar5[5] = CONCAT44(fStack_618,fStack_69c);
            puVar5[6] = CONCAT44(uStack_610,uStack_614);
            puVar5[7] = CONCAT44(uStack_65c,uStack_60c);
            *(int *)(param_3 + 0x2000) = *(int *)(param_3 + 0x2000) + 1;
            plVar6 = plStack_5b8;
          }
          uVar11 = (int)uVar12 + 1;
          uVar8 = uVar8 + 0x40;
          lVar7 = uStack_6b8;
          uVar12 = (ulonglong)uVar11;
        } while ((ulonglong)(longlong)(int)uVar11 < (ulonglong)(plVar6[1] - *plVar6 >> 6));
      }
      puStack_5c8 = &unknown_var_4848_ptr;
      if (alStack_570[0] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      if (alStack_550[0] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar7);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_718);
}



uint64_t * FUN_1804721a0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_4320_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1804721d0(uint64_t *param_1,char param_2)

{
  longlong lVar1;
  uint64_t *puVar2;
  
  puVar2 = (uint64_t *)&system_data_2480;
  if (param_2 != '\0') {
    puVar2 = (uint64_t *)&system_data_2490;
  }
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = render_system_memory;
  if (param_2 != '\0') {
    lVar1 = render_system_memory;
  }
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_1 = *puVar2;
  lVar1 = render_system_memory;
  if (param_2 != '\0') {
    lVar1 = render_system_memory;
  }
  param_1[1] = lVar1;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180472240(uint64_t *param_1,uint64_t *param_2)
void FUN_180472240(uint64_t *param_1,uint64_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int8_t auStack_78 [32];
  int32_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t *puStack_38;
  uint64_t *puStack_30;
  uint64_t *puStack_28;
  uint64_t *puStack_20;
  ulonglong uStack_18;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_78;
  uStack_58 = 0;
  puStack_38 = param_1;
  puStack_20 = param_2;
  puStack_30 = (uint64_t *)FUN_1808fc418(0x38);
  *(int32_t *)(puStack_30 + 1) = 1;
  *(int32_t *)((longlong)puStack_30 + 0xc) = 1;
  *puStack_30 = &unknown_var_3984_ptr;
  puStack_28 = puStack_30 + 2;
  *puStack_28 = &unknown_var_4320_ptr;
  *puStack_28 = &unknown_var_4272_ptr;
  puStack_30[5] = 0;
  puStack_30[6] = 0;
  uVar4 = param_2[1];
  puStack_30[3] = *param_2;
  puStack_30[4] = uVar4;
  uVar1 = *(int32_t *)((longlong)param_2 + 0x14);
  uVar2 = *(int32_t *)(param_2 + 3);
  uVar3 = *(int32_t *)((longlong)param_2 + 0x1c);
  *(int32_t *)(puStack_30 + 5) = *(int32_t *)(param_2 + 2);
  *(int32_t *)((longlong)puStack_30 + 0x2c) = uVar1;
  *(int32_t *)(puStack_30 + 6) = uVar2;
  *(int32_t *)((longlong)puStack_30 + 0x34) = uVar3;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(int8_t *)param_2 = 0;
  *param_1 = puStack_28;
  param_1[1] = puStack_30;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  FUN_180067070(param_2);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_78);
}



uint64_t FUN_180472360(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  int8_t auStack_30 [16];
  uint64_t uStack_20;
  uint64_t uStack_18;
  
  uStack_20 = 0;
  uStack_18 = 0xf;
  auStack_30[0] = 0;
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  FUN_1800671b0(auStack_30);
  FUN_180472240(param_1,auStack_30);
  return param_1;
}



uint64_t * FUN_1804723d0(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar2 = (uint64_t *)FUN_1808fc418(0x30);
  *(int32_t *)(puVar2 + 1) = 1;
  *(int32_t *)((longlong)puVar2 + 0xc) = 1;
  *puVar2 = &unknown_var_4040_ptr;
  puVar1 = puVar2 + 2;
  *puVar1 = &unknown_var_4320_ptr;
  *puVar1 = &unknown_var_4080_ptr;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[3] = *param_2;
  puVar2[4] = param_2[1];
  puVar2[5] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_1 = puVar1;
  param_1[1] = puVar2;
  FUN_180477750(param_2);
  return param_1;
}





// 函数: void FUN_1804724d0(void)
void FUN_1804724d0(void)

{
  FUN_180477750();
  return;
}



uint64_t *
FUN_1804724f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  puVar2 = (uint64_t *)FUN_1808fc418(0x58);
  *(int32_t *)(puVar2 + 1) = 1;
  *(int32_t *)((longlong)puVar2 + 0xc) = 1;
  *puVar2 = &unknown_var_4480_ptr;
  puVar1 = puVar2 + 2;
  *puVar1 = &unknown_var_4320_ptr;
  *puVar1 = &unknown_var_4296_ptr;
  FUN_1803f4bd0(puVar2 + 3,param_2,param_3,param_4,uVar3,uVar4,puVar2 + 3);
  *param_1 = puVar1;
  param_1[1] = puVar2;
  FUN_1803e8470(param_2);
  return param_1;
}



longlong * FUN_1804725e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 8))(param_1,0x180d48ef8);
    lVar2 = 0x180d49d90;
    if (lVar1 != 0) {
      lVar2 = lVar1;
    }
    *param_2 = lVar2;
    return param_2;
  }
  *param_2 = 0x180d49d90;
  return param_2;
}



uint64_t FUN_180472640(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  param_1 = (longlong *)*param_1;
  lVar2 = 0x180d49d50;
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 8))(param_1,0x180d48ef0,param_3,param_4,0,0xfffffffffffffffe);
    if (lVar1 != 0) {
      lVar2 = lVar1;
    }
  }
  FUN_180472900(lVar2,param_2,param_3);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804726c0(longlong param_1,uint64_t *param_2,uint64_t *param_3)
void FUN_1804726c0(longlong param_1,uint64_t *param_2,uint64_t *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  uint64_t *puVar5;
  longlong *plVar6;
  code *pcVar7;
  uint64_t uVar8;
  int8_t auStack_b8 [32];
  int32_t uStack_98;
  uint64_t *puStack_90;
  uint64_t uStack_88;
  uint64_t *puStack_80;
  int8_t auStack_78 [16];
  uint64_t *puStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  longlong *plStack_38;
  ulonglong uStack_30;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b8;
  uStack_60 = *param_2;
  uStack_58 = param_2[1];
  uStack_50 = param_2[2];
  uStack_48 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(int8_t *)param_2 = 0;
  puStack_90 = &uStack_40;
  uStack_40 = *param_3;
  plStack_38 = (longlong *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  uStack_98 = 1;
  lVar4 = **(longlong **)(param_1 + 8);
  puVar5 = *(uint64_t **)(lVar4 + 8);
  puStack_80 = param_3;
  puStack_68 = param_2;
  uVar8 = FUN_180478200(0,lVar4,puVar5,&uStack_60);
  if (*(longlong *)(param_1 + 0x10) == 0x3fffffffffffffe) {
    __Xlength_error_std__YAXPEBD_Z(&unknown_var_2104_ptr);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
  *(uint64_t *)(lVar4 + 8) = uVar8;
  *puVar5 = uVar8;
  FUN_1803f4f30(param_1,auStack_78,**(longlong **)(param_1 + 8) + 0x10);
  plVar6 = plStack_38;
  uStack_98 = 0;
  puStack_90 = &uStack_40;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  FUN_180067070(&uStack_60);
  FUN_180067070(param_2);
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_b8);
}





// 函数: void FUN_180472880(longlong param_1)
void FUN_180472880(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  FUN_180067070(param_1);
  return;
}



uint64_t * FUN_180472900(longlong param_1,uint64_t *param_2,uint64_t *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint64_t *puVar4;
  int iVar5;
  longlong lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint64_t *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int32_t uVar16;
  uint uVar17;
  uint64_t uVar18;
  uint64_t uStack_58;
  longlong *plStack_50;
  uint64_t uStack_48;
  longlong *plStack_40;
  
  uVar18 = 0xfffffffffffffffe;
  uVar16 = 0;
  uVar2 = param_3[2];
  uVar15 = param_3[3];
  puVar8 = param_3;
  if (0xf < uVar15) {
    puVar8 = (uint64_t *)*param_3;
  }
  uVar12 = 0xcbf29ce484222325;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      uVar12 = (uVar12 ^ *(byte *)(uVar10 + (longlong)puVar8)) * 0x100000001b3;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar2);
  }
  lVar6 = (*(ulonglong *)(param_1 + 0x30) & uVar12) * 0x10;
  lVar3 = *(longlong *)(param_1 + 0x18);
  puVar8 = *(uint64_t **)(lVar6 + lVar3);
  puVar4 = *(uint64_t **)(param_1 + 8);
  puVar13 = puVar8;
  do {
    puVar7 = puVar4;
    if (puVar8 != puVar4) {
      puVar7 = (uint64_t *)**(uint64_t **)(lVar6 + 8 + lVar3);
    }
    if (puVar13 == puVar7) goto LAB_180472a44;
    plVar14 = puVar13 + 2;
    puVar7 = param_3;
    if (0xf < uVar15) {
      puVar7 = (uint64_t *)*param_3;
    }
    uVar10 = puVar13[4];
    plVar11 = plVar14;
    if (0xf < (ulonglong)puVar13[5]) {
      plVar11 = (longlong *)*plVar14;
    }
    if (uVar10 == uVar2) {
      iVar5 = memcmp(plVar11,puVar7,uVar10,uVar15,uVar16,uVar18);
      if (iVar5 == 0) {
        if (0xf < (ulonglong)puVar13[5]) {
          plVar14 = (longlong *)*plVar14;
        }
        if (0xf < (ulonglong)param_3[3]) {
          param_3 = (uint64_t *)*param_3;
        }
        if ((uVar2 != uVar10) || (iVar5 = memcmp(param_3,plVar14), iVar5 != 0)) {
LAB_180472a44:
          puVar13 = puVar4;
        }
        if (puVar13 == puVar4) {
          uStack_48 = 0;
          plStack_40 = (longlong *)0x0;
          puVar8 = &uStack_48;
          uVar9 = 1;
          uVar17 = 1;
        }
        else {
          plStack_50 = (longlong *)puVar13[7];
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
            UNLOCK();
            plStack_50 = (longlong *)puVar13[7];
          }
          uStack_58 = puVar13[6];
          puVar8 = &uStack_58;
          uVar9 = 2;
          uVar17 = 2;
        }
        plVar14 = plStack_50;
        *param_2 = 0;
        param_2[1] = 0;
        lVar3 = puVar8[1];
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          uVar9 = uVar17;
        }
        *param_2 = *puVar8;
        param_2[1] = lVar3;
        if (((uVar9 & 2) != 0) && (uVar9 = uVar9 & 0xfffffffd, plStack_50 != (longlong *)0x0)) {
          LOCK();
          plVar11 = plStack_50 + 1;
          lVar3 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plStack_50 + 8))();
            }
          }
        }
        plVar14 = plStack_40;
        if (((uVar9 & 1) != 0) && (plStack_40 != (longlong *)0x0)) {
          LOCK();
          plVar11 = plStack_40 + 1;
          lVar3 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plStack_40)(plStack_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plStack_40 + 8))();
            }
          }
        }
        return param_2;
      }
      uVar15 = param_3[3];
    }
    puVar13 = (uint64_t *)*puVar13;
  } while( true );
}



uint64_t * FUN_180472b70(uint64_t *param_1,uint64_t *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_180477750(param_2);
  return param_1;
}



uint64_t * FUN_180472bd0(longlong *param_1,uint64_t *param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  bool bVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uint64_t uStack_28;
  longlong *plStack_20;
  uint64_t uStack_18;
  longlong *plStack_10;
  
  uVar9 = 0;
  lVar4 = *param_1;
  if (param_3 < (ulonglong)(param_1[1] - lVar4 >> 4)) {
    plStack_20 = *(longlong **)(lVar4 + 8 + param_3 * 0x10);
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
      plStack_20 = *(longlong **)(lVar4 + 8 + param_3 * 0x10);
    }
    uVar9 = *(uint64_t *)(lVar4 + param_3 * 0x10);
    puVar8 = &uStack_28;
    bVar7 = true;
    bVar5 = false;
    uStack_28 = uVar9;
  }
  else {
    uStack_18 = 0;
    plStack_10 = (longlong *)0x0;
    puVar8 = &uStack_18;
    bVar7 = false;
    bVar5 = true;
  }
  *param_2 = uVar9;
  param_2[1] = puVar8[1];
  *puVar8 = 0;
  puVar8[1] = 0;
  plVar6 = plStack_10;
  if ((bVar5) && (plStack_10 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_10 + 8))();
      }
    }
  }
  plVar6 = plStack_20;
  if ((bVar7) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_20 + 8))();
      }
    }
  }
  return param_2;
}





// 函数: void FUN_180472d20(longlong param_1)
void FUN_180472d20(longlong param_1)

{
  int iVar1;
  
  iVar1 = isspace((int)**(char **)(param_1 + 8));
  while (iVar1 != 0) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    iVar1 = isspace((int)**(char **)(param_1 + 8));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



