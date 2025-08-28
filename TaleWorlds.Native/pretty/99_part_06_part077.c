#include "TaleWorlds.Native.Split.h"

// 99_part_06_part077.c - 17 个函数

// 函数: void FUN_1803f3dd0(uint64_t param_1,ulonglong *param_2,uint64_t *param_3,uint64_t param_4,
void FUN_1803f3dd0(uint64_t param_1,ulonglong *param_2,uint64_t *param_3,uint64_t param_4,
                  uint64_t *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint64_t uVar10;
  int8_t auStack_128 [32];
  uint64_t uStack_108;
  longlong *plStack_100;
  int32_t *puStack_f8;
  uint64_t *puStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int8_t auStack_b8 [16];
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t *puStack_88;
  uint64_t *puStack_80;
  uint64_t *puStack_78;
  int8_t auStack_70 [16];
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  ulonglong *puStack_40;
  ulonglong uStack_38;
  
  uStack_98 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_128;
  uStack_90 = param_1;
  puStack_88 = param_3;
  puStack_40 = param_2;
  FUN_1803f2eb0();
  uStack_c8 = *param_3;
  uStack_c0 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  puStack_80 = &uStack_108;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(int8_t *)param_2 = 0;
  puStack_78 = &uStack_e8;
  puStack_f0 = &uStack_c8;
  uStack_108 = 0;
  plStack_100 = (longlong *)0x0;
  puStack_f8 = &uStack_60;
  uStack_e8._0_4_ = (int32_t)uVar5;
  uStack_e8._4_4_ = (int32_t)(uVar5 >> 0x20);
  uStack_e0._0_4_ = (int32_t)uVar6;
  uStack_e0._4_4_ = (int32_t)(uVar6 >> 0x20);
  uStack_60 = (int32_t)uStack_e8;
  uStack_5c = uStack_e8._4_4_;
  uStack_58 = (int32_t)uStack_e0;
  uStack_54 = uStack_e0._4_4_;
  uStack_d8._0_4_ = (int32_t)uVar7;
  uStack_d8._4_4_ = (int32_t)(uVar7 >> 0x20);
  uStack_d0._0_4_ = (int32_t)uVar8;
  uStack_d0._4_4_ = (int32_t)(uVar8 >> 0x20);
  uStack_50 = (int32_t)uStack_d8;
  uStack_4c = uStack_d8._4_4_;
  uStack_48 = (int32_t)uStack_d0;
  uStack_44 = uStack_d0._4_4_;
  uStack_d8 = 0;
  uStack_d0 = 0xf;
  uStack_e8 = uVar5 & 0xffffffffffffff00;
  uStack_e0 = uVar6;
  FUN_1804726c0(param_1,&uStack_60,&uStack_c8);
  puStack_f0 = (uint64_t *)auStack_70;
  uVar10 = FUN_180472360(auStack_70,*param_5);
  puStack_f8 = (int32_t *)auStack_b8;
  uStack_a8 = 0;
  uStack_a0 = 0xf;
  auStack_b8[0] = 0;
  FUN_1800671b0(auStack_b8,&unknown_var_1024_ptr,0x11);
  FUN_1804726c0(param_1,auStack_b8,uVar10);
  FUN_180067070(&uStack_e8);
  plVar4 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_100)(plStack_100);
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
  FUN_180067070(param_2);
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f3fe0(uint64_t param_1,ulonglong *param_2,uint64_t *param_3,uint64_t param_4,
void FUN_1803f3fe0(uint64_t param_1,ulonglong *param_2,uint64_t *param_3,uint64_t param_4,
                  uint64_t param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint64_t uVar10;
  int8_t auStack_188 [32];
  int32_t *puStack_168;
  uint64_t uStack_158;
  longlong *plStack_150;
  uint64_t *puStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_118;
  uint64_t uStack_110;
  int8_t auStack_108 [16];
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_d8;
  uint64_t *puStack_c8;
  uint64_t *puStack_c0;
  uint64_t *puStack_b8;
  int8_t auStack_b0 [16];
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int8_t auStack_80 [64];
  ulonglong *puStack_40;
  ulonglong uStack_38;
  
  uStack_e8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  uStack_d8 = param_1;
  puStack_c8 = param_3;
  puStack_40 = param_2;
  FUN_1803f2eb0();
  uStack_118 = *param_3;
  uStack_110 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  puStack_c0 = &uStack_158;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(int8_t *)param_2 = 0;
  puStack_b8 = &uStack_140;
  puStack_148 = &uStack_118;
  uStack_158 = 0;
  plStack_150 = (longlong *)0x0;
  puStack_168 = &uStack_a0;
  uStack_140._0_4_ = (int32_t)uVar5;
  uStack_140._4_4_ = (int32_t)(uVar5 >> 0x20);
  uStack_138._0_4_ = (int32_t)uVar6;
  uStack_138._4_4_ = (int32_t)(uVar6 >> 0x20);
  uStack_a0 = (int32_t)uStack_140;
  uStack_9c = uStack_140._4_4_;
  uStack_98 = (int32_t)uStack_138;
  uStack_94 = uStack_138._4_4_;
  uStack_130._0_4_ = (int32_t)uVar7;
  uStack_130._4_4_ = (int32_t)(uVar7 >> 0x20);
  uStack_128._0_4_ = (int32_t)uVar8;
  uStack_128._4_4_ = (int32_t)(uVar8 >> 0x20);
  uStack_90 = (int32_t)uStack_130;
  uStack_8c = uStack_130._4_4_;
  uStack_88 = (int32_t)uStack_128;
  uStack_84 = uStack_128._4_4_;
  uStack_130 = 0;
  uStack_128 = 0xf;
  uStack_140 = uVar5 & 0xffffffffffffff00;
  uStack_138 = uVar6;
  FUN_1804726c0(param_1,&uStack_a0,&uStack_118);
  puStack_148 = (uint64_t *)auStack_b0;
  puStack_168 = (int32_t *)auStack_80;
  FUN_1803f4bd0(auStack_80,param_5);
  uVar10 = FUN_1804724f0(auStack_b0,auStack_80);
  puStack_168 = (int32_t *)auStack_108;
  uStack_f8 = 0;
  uStack_f0 = 0xf;
  auStack_108[0] = 0;
  FUN_1800671b0(auStack_108,&unknown_var_924_ptr,5);
  FUN_1804726c0(param_1,auStack_108,uVar10);
  FUN_180067070(&uStack_140);
  plVar4 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_150)(plStack_150);
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
  FUN_180067070(param_2);
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1803f4210(uint64_t *param_1,uint64_t *param_2)

{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  int32_t uStack_30;
  
  uStack_58 = *param_2;
  *param_2 = 0;
  uStack_50 = param_2[1];
  param_2[1] = 0;
  uStack_48 = param_2[2];
  param_2[2] = 0;
  uStack_40 = *(int32_t *)(param_2 + 3);
  *(int32_t *)(param_2 + 3) = *(int32_t *)(param_2 + 3);
  uStack_38 = param_2[4];
  uStack_30 = *(int32_t *)(param_2 + 5);
  param_1[2] = FUN_1803f4dc0;
  param_1[3] = FUN_1803f4d50;
  puVar5 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,system_allocation_flags,0xfffffffffffffffe);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(int32_t *)(puVar5 + 3) = uStack_40;
  uVar2 = *puVar5;
  *puVar5 = uStack_58;
  uVar3 = puVar5[1];
  puVar5[1] = uStack_50;
  uVar4 = puVar5[2];
  puVar5[2] = uStack_48;
  uVar1 = *(int32_t *)(puVar5 + 3);
  *(int32_t *)(puVar5 + 3) = uStack_40;
  puVar5[4] = uStack_38;
  *(int32_t *)(puVar5 + 5) = uStack_30;
  *param_1 = puVar5;
  uStack_58 = uVar2;
  uStack_50 = uVar3;
  uStack_48 = uVar4;
  uStack_40 = uVar1;
  FUN_18005d580(&uStack_58);
  FUN_18005d580(param_2);
  return param_1;
}






// 函数: void FUN_1803f4370(longlong *param_1,longlong param_2,longlong param_3)
void FUN_1803f4370(longlong *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_1803f3350(param_1,param_3 - param_2 >> 5);
  if (cVar1 != '\0') {
    lVar2 = *param_1;
    for (; lVar3 = lVar2, param_2 != param_3; param_2 = param_2 + 0x20) {
      FUN_18018b350(lVar2,param_2);
      lVar2 = lVar2 + 0x20;
    }
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x20) {
      FUN_180067070(lVar3);
    }
    param_1[1] = lVar2;
  }
  return;
}






// 函数: void FUN_1803f4430(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
void FUN_1803f4430(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  ulonglong uVar2;
  uint64_t *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar5 = (ulonglong)((longlong)param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    if (1 < uVar5) {
      uVar1 = *param_3;
      if ((param_3 < param_1) || (param_1 + (uVar5 - 1) < param_3)) {
        do {
          uVar4 = uVar4 + 2;
        } while (uVar4 != (uVar5 & 0xfffffffffffffffe));
        puVar3 = param_1;
        for (uVar2 = uVar5 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
        }
        param_1 = param_1 + (uVar5 & 0xfffffffffffffffe);
      }
    }
    for (; uVar4 != uVar5; uVar4 = uVar4 + 1) {
      *param_1 = *param_3;
      param_1 = param_1 + 1;
    }
  }
  return;
}






// 函数: void FUN_1803f4472(uint64_t param_1,ulonglong param_2,uint64_t *param_3,ulonglong param_4)
void FUN_1803f4472(uint64_t param_1,ulonglong param_2,uint64_t *param_3,ulonglong param_4)

{
  uint64_t in_RAX;
  ulonglong uVar1;
  uint64_t *puVar2;
  uint64_t *in_R10;
  ulonglong in_R11;
  
  do {
    param_4 = param_4 + 2;
  } while (param_4 != (param_2 & 0xfffffffffffffffe));
  puVar2 = in_R10;
  for (uVar1 = param_2 & 0x1ffffffffffffffe; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = in_RAX;
    puVar2 = puVar2 + 1;
  }
  puVar2 = in_R10 + (param_2 & 0xfffffffffffffffe);
  for (; param_4 != in_R11; param_4 = param_4 + 1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return;
}






// 函数: void FUN_1803f44a5(uint64_t param_1,uint64_t param_2,uint64_t *param_3,longlong param_4)
void FUN_1803f44a5(uint64_t param_1,uint64_t param_2,uint64_t *param_3,longlong param_4)

{
  uint64_t *in_R10;
  longlong in_R11;
  
  if (param_4 != in_R11) {
    do {
      param_4 = param_4 + 1;
      *in_R10 = *param_3;
      in_R10 = in_R10 + 1;
    } while (param_4 != in_R11);
  }
  return;
}






// 函数: void FUN_1803f44d0(int32_t *param_1,int32_t *param_2)
void FUN_1803f44d0(int32_t *param_1,int32_t *param_2)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t uStackX_10;
  int8_t auStack_40 [24];
  
  *(uint64_t *)(param_1 + 0xc) = *(uint64_t *)(param_2 + 0xc);
  *(uint64_t *)(param_1 + 0xe) = *(uint64_t *)(param_2 + 0xe);
  FUN_1803f33b0(param_1 + 2);
  *param_1 = *param_2;
  uStackX_10 = *(uint64_t *)(param_1 + 2);
  FUN_1803f3510(param_1 + 6,*(longlong *)(param_2 + 8) - *(longlong *)(param_2 + 6) >> 3,&uStackX_10
               );
  puVar1 = *(uint64_t **)(param_2 + 2);
  for (puVar6 = (uint64_t *)*puVar1; puVar6 != puVar1; puVar6 = (uint64_t *)*puVar6) {
    lVar2 = **(longlong **)(param_1 + 2);
    puVar3 = *(uint64_t **)(lVar2 + 8);
    uVar4 = FUN_1803f5220();
    lVar5 = *(longlong *)(param_1 + 4);
    if (lVar5 == 0x3fffffffffffffe) {
      lVar5 = __Xlength_error_std__YAXPEBD_Z(&unknown_var_2104_ptr);
    }
    *(longlong *)(param_1 + 4) = lVar5 + 1;
    *(uint64_t *)(lVar2 + 8) = uVar4;
    *puVar3 = uVar4;
    FUN_1803f4f30(param_1,auStack_40,**(longlong **)(param_1 + 2) + 0x10);
  }
  return;
}






// 函数: void FUN_1803f45e0(uint64_t *param_1,ulonglong param_2)
void FUN_1803f45e0(uint64_t *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = param_1[2];
  if (uVar2 <= param_2) {
    uVar3 = param_1[3];
    if (uVar3 != param_2) {
      if (uVar3 < param_2) {
        if (0x7fffffffffffffff - uVar2 < param_2 - uVar2) {
          FUN_1800670f0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = param_2 | 0xf;
        uVar7 = 0x7fffffffffffffff;
        if (((uVar6 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) &&
           (uVar1 = (uVar3 >> 1) + uVar3, uVar7 = uVar6, uVar6 < uVar1)) {
          uVar7 = uVar1;
        }
        uVar5 = FUN_180067110(uVar7 + 1);
        param_1[2] = param_2;
        param_1[3] = uVar7;
        if (uVar3 < 0x10) {
                    // WARNING: Subroutine does not return
          memcpy(uVar5,param_1,uVar2 + 1);
        }
                    // WARNING: Subroutine does not return
        memcpy(uVar5,*param_1,uVar2 + 1);
      }
      if ((param_2 < 0x10) && (0xf < uVar3)) {
                    // WARNING: Subroutine does not return
        memcpy(param_1,*param_1,uVar2 + 1);
      }
    }
  }
  return;
}






// 函数: void FUN_1803f45fc(uint64_t *param_1,ulonglong param_2)
void FUN_1803f45fc(uint64_t *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint64_t uVar4;
  uint64_t *unaff_RBX;
  ulonglong uVar5;
  ulonglong unaff_RDI;
  longlong unaff_R14;
  
  uVar2 = param_1[3];
  if (uVar2 != param_2) {
    if (uVar2 < param_2) {
      if (0x7fffffffffffffffU - unaff_R14 < param_2 - unaff_R14) {
        FUN_1800670f0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_2 = param_2 | 0xf;
      uVar5 = 0x7fffffffffffffff;
      if (((param_2 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
         (uVar1 = (uVar2 >> 1) + uVar2, uVar5 = param_2, param_2 < uVar1)) {
        uVar5 = uVar1;
      }
      uVar4 = FUN_180067110(uVar5 + 1);
      unaff_RBX[2] = unaff_RDI;
      unaff_RBX[3] = uVar5;
      if (uVar2 < 0x10) {
                    // WARNING: Subroutine does not return
        memcpy(uVar4);
      }
                    // WARNING: Subroutine does not return
      memcpy(uVar4,*unaff_RBX,unaff_R14 + 1);
    }
    if ((unaff_RDI < 0x10) && (0xf < uVar2)) {
                    // WARNING: Subroutine does not return
      memcpy(param_1,*param_1,unaff_R14 + 1);
    }
  }
  return;
}






// 函数: void FUN_1803f460e(uint64_t *param_1,ulonglong param_2)
void FUN_1803f460e(uint64_t *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  ulonglong uVar4;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  longlong unaff_R14;
  bool in_CF;
  
  if (!in_CF) {
    if ((unaff_RDI < 0x10) && (0xf < unaff_RSI)) {
                    // WARNING: Subroutine does not return
      memcpy(param_1,*param_1,unaff_R14 + 1);
    }
    return;
  }
  if (0x7fffffffffffffffU - unaff_R14 < param_2 - unaff_R14) {
    FUN_1800670f0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  param_2 = param_2 | 0xf;
  uVar4 = 0x7fffffffffffffff;
  if (((param_2 < 0x8000000000000000) && (unaff_RSI <= 0x7fffffffffffffff - (unaff_RSI >> 1))) &&
     (uVar1 = (unaff_RSI >> 1) + unaff_RSI, uVar4 = param_2, param_2 < uVar1)) {
    uVar4 = uVar1;
  }
  uVar3 = FUN_180067110(uVar4 + 1);
  unaff_RBX[2] = unaff_RDI;
  unaff_RBX[3] = uVar4;
  if (0xf < unaff_RSI) {
                    // WARNING: Subroutine does not return
    memcpy(uVar3,*unaff_RBX,unaff_R14 + 1);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar3);
}






// 函数: void FUN_1803f473c(void)
void FUN_1803f473c(void)

{
  return;
}






// 函数: void FUN_1803f4741(void)
void FUN_1803f4741(void)

{
  return;
}






// 函数: void FUN_1803f474a(void)
void FUN_1803f474a(void)

{
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}






// 函数: void FUN_1803f4760(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803f4760(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1803f33b0(param_1 + 8);
  FUN_1803f3480(param_1,8,param_3,param_4,uVar1);
  return;
}



longlong * FUN_1803f4790(longlong *param_1,uint64_t param_2,ulonglong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int32_t uVar6;
  longlong lVar7;
  longlong *plStack_30;
  char cStack_28;
  
  uVar6 = 0;
  uVar4 = *(ulonglong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
  if (((longlong)uVar4 < 1) || (uVar4 <= param_3)) {
    lVar7 = 0;
  }
  else {
    lVar7 = uVar4 - param_3;
  }
  FUN_1800a1010(&plStack_30,param_1,param_3,(longlong)*(int *)(*param_1 + 4),0);
  if (cStack_28 == '\0') {
    uVar6 = 4;
  }
  else {
    lVar5 = *param_1;
    if ((*(uint *)((longlong)*(int *)(lVar5 + 4) + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        iVar3 = _sputc___basic_streambuf_DU__char_traits_D_std___std__QEAAHD_Z
                          (*(uint64_t *)
                            ((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1),
                           *(int8_t *)
                            ((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1));
        if (iVar3 == -1) {
          uVar6 = 4;
          goto LAB_1803f4840;
        }
      }
      lVar5 = *param_1;
    }
    uVar4 = _sputn___basic_streambuf_DU__char_traits_D_std___std__QEAA_JPEBD_J_Z
                      (*(uint64_t *)((longlong)*(int *)(lVar5 + 4) + 0x48 + (longlong)param_1),
                       param_2,param_3);
    if (uVar4 == param_3) {
LAB_1803f4840:
      do {
        if (lVar7 == 0) goto LAB_1803f4868;
        iVar3 = _sputc___basic_streambuf_DU__char_traits_D_std___std__QEAAHD_Z
                          (*(uint64_t *)
                            ((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1),
                           *(int8_t *)
                            ((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1));
        if (iVar3 == -1) break;
        lVar7 = lVar7 + -1;
      } while( true );
    }
    uVar6 = 4;
LAB_1803f4868:
    *(uint64_t *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
  }
  _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
            ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,uVar6,0);
  cVar2 = _uncaught_exception_std__YA_NXZ();
  if (cVar2 == '\0') {
    __Osfx___basic_ostream_DU__char_traits_D_std___std__QEAAXXZ(plStack_30);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*plStack_30 + 4) + 0x48 + (longlong)plStack_30);
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 0x10) == (code *)&unknown_var_1712_ptr) {
      if (plVar1[0x10] != 0) {
        _unlock_file();
      }
    }
    else {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f4950(uint64_t param_1,int32_t *param_2,uint64_t *param_3,longlong param_4,
void FUN_1803f4950(uint64_t param_1,int32_t *param_2,uint64_t *param_3,longlong param_4,
                  uint64_t *param_5,longlong param_6,int8_t *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  longlong lVar7;
  int8_t auStack_178 [32];
  uint *puStack_158;
  uint *puStack_150;
  uint uStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  uint64_t uStack_138;
  uint64_t uStack_130;
  int8_t *puStack_128;
  uint64_t *puStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int8_t auStack_f8 [16];
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t *puStack_d0;
  uint *puStack_c8;
  int8_t auStack_c0 [16];
  int8_t auStack_b0 [16];
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  uint uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t *puStack_60;
  ulonglong uStack_58;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  puStack_128 = param_7;
  puStack_120 = &uStack_118;
  uStack_118 = *param_3;
  uStack_110 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  puStack_158 = &uStack_a0;
  uStack_a0 = *param_2;
  uStack_9c = param_2[1];
  uStack_98 = param_2[2];
  uStack_94 = param_2[3];
  uStack_90 = param_2[4];
  uStack_8c = param_2[5];
  uStack_88 = param_2[6];
  uStack_84 = param_2[7];
  *(uint64_t *)(param_2 + 4) = 0;
  *(uint64_t *)(param_2 + 6) = 0xf;
  *(int8_t *)param_2 = 0;
  puStack_d0 = param_3;
  puStack_60 = param_2;
  FUN_1804726c0(uStack_a0,&uStack_a0,&uStack_118);
  puStack_158 = (uint *)auStack_c0;
  puVar5 = (uint64_t *)FUN_180472360(auStack_c0,*param_5);
  puStack_150 = &uStack_148;
  uStack_138 = 0;
  uStack_130 = 0xf;
  uStack_148 = uStack_148 & 0xffffff00;
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(param_4 + lVar7) != '\0');
  puStack_120 = puVar5;
  FUN_1800671b0(&uStack_148,param_4);
  puStack_c8 = &uStack_148;
  puStack_150 = (uint *)&uStack_108;
  uStack_108 = *puVar5;
  uStack_100 = puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  puStack_158 = &uStack_80;
  uStack_80 = uStack_148;
  uStack_7c = uStack_144;
  uStack_78 = uStack_140;
  uStack_74 = uStack_13c;
  uStack_70 = (int32_t)uStack_138;
  uStack_6c = uStack_138._4_4_;
  uStack_68 = (int32_t)uStack_130;
  uStack_64 = uStack_130._4_4_;
  uStack_138 = 0;
  uStack_130 = 0xf;
  uStack_148 = uStack_148 & 0xffffff00;
  FUN_1804726c0(param_1,&uStack_80,&uStack_108);
  puStack_150 = (uint *)auStack_b0;
  uVar6 = FUN_1804721d0(auStack_b0,*puStack_128);
  puStack_158 = (uint *)auStack_f8;
  uStack_e8 = 0;
  uStack_e0 = 0xf;
  auStack_f8[0] = 0;
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(param_6 + lVar7) != '\0');
  FUN_1800671b0(auStack_f8,param_6);
  FUN_1804726c0(param_1,auStack_f8,uVar6);
  FUN_180067070(&uStack_148);
  plVar4 = (longlong *)puVar5[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  FUN_180067070(param_2);
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_178);
}



int32_t *
FUN_1803f4bd0(int32_t *param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  *param_1 = *param_2;
  puVar1 = (uint64_t *)(param_1 + 2);
  *puVar1 = 0;
  *(uint64_t *)(param_1 + 4) = 0;
  uVar2 = FUN_1803f4cb0(param_1,0,0,param_4,0xfffffffffffffffe);
  *puVar1 = uVar2;
  uVar2 = *puVar1;
  *puVar1 = *(uint64_t *)(param_2 + 2);
  *(uint64_t *)(param_2 + 2) = uVar2;
  uVar2 = *(uint64_t *)(param_1 + 4);
  *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_2 + 4);
  *(uint64_t *)(param_2 + 4) = uVar2;
  *(uint64_t *)(param_1 + 6) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 10) = 0;
  *(uint64_t *)(param_1 + 6) = *(uint64_t *)(param_2 + 6);
  *(uint64_t *)(param_1 + 8) = *(uint64_t *)(param_2 + 8);
  *(uint64_t *)(param_1 + 10) = *(uint64_t *)(param_2 + 10);
  *(uint64_t *)(param_2 + 6) = 0;
  *(uint64_t *)(param_2 + 8) = 0;
  *(uint64_t *)(param_2 + 10) = 0;
  *(uint64_t *)(param_1 + 0xc) = *(uint64_t *)(param_2 + 0xc);
  *(uint64_t *)(param_1 + 0xe) = *(uint64_t *)(param_2 + 0xe);
  FUN_1803f33b0(param_2 + 2);
  FUN_1803f3480(param_2,8);
  return param_1;
}






// 函数: void FUN_1803f4cb0(uint64_t param_1,longlong *param_2,longlong *param_3)
void FUN_1803f4cb0(uint64_t param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180067110(0x40);
  if (param_2 == (longlong *)0x0) {
    param_2 = plVar1;
    param_3 = plVar1;
  }
  *plVar1 = (longlong)param_2;
  plVar1[1] = (longlong)param_3;
  return;
}






// 函数: void FUN_1803f4d10(longlong *param_1)
void FUN_1803f4d10(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_180067070(lVar2);
  }
  return;
}






