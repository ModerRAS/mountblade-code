#include "TaleWorlds.Native.Split.h"

// 03_rendering_part134.c - 16 个函数

// 函数: void FUN_180348d90(longlong param_1)
void FUN_180348d90(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  longlong lStackX_8;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lStackX_8 = 0;
  uStack_18 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_180348e60(0,lVar1,&lStackX_8,&uStack_48);
  if (lStackX_8 != 0) {
    uStack_58 = 0x7f7fffff;
    uStack_54 = 0x7f7fffff;
    uStack_50 = 0x7f7fffff;
    uStack_4c = 0x7f7fffff;
    uStack_68 = 0xff7fffff;
    uStack_64 = 0xff7fffff;
    uStack_60 = 0xff7fffff;
    uStack_5c = 0x7f7fffff;
    FUN_180347ca0(param_1,lVar1,&uStack_48,&uStack_58,&uStack_68);
    return;
  }
  puVar2 = &DAT_18098bc73;
  if (*(undefined **)(lVar1 + 0x290) != (undefined *)0x0) {
    puVar2 = *(undefined **)(lVar1 + 0x290);
  }
  FUN_180627020(&UNK_180a1cf60,puVar2);
  return;
}





// 函数: void FUN_180348e60(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 *param_4)
void FUN_180348e60(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong *plStack_d0;
  longlong *plStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  
  if (*(longlong *)(param_2 + 0x110) == 0) {
    plStack_d0 = (longlong *)0x0;
    plStack_c8 = (longlong *)0x0;
    uVar8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 3;
    FUN_180347ab0(param_2,&plStack_d0,param_3,(char)param_4,0xfffffffffffffffe);
    fVar15 = 3.4028235e+38;
    fVar13 = 3.4028235e+38;
    fVar14 = 3.4028235e+38;
    fVar10 = 1.1754944e-38;
    fVar11 = 1.1754944e-38;
    fVar12 = 1.1754944e-38;
    if ((longlong)plStack_c8 - (longlong)plStack_d0 >> 3 != 0) {
      fVar12 = 1.1754944e-38;
      fVar11 = 1.1754944e-38;
      fVar10 = 1.1754944e-38;
      plVar6 = plStack_d0;
      uVar9 = uVar8;
      do {
        lVar1 = *(longlong *)(uVar9 + (longlong)plVar6);
        cVar4 = FUN_1802eee20(lVar1,&UNK_180a1cf28);
        if (cVar4 == '\0') {
          *param_3 = lVar1;
          FUN_1802f4040(lVar1,&fStack_b0,1);
          if (fStack_b0 <= fVar15) {
            fVar15 = fStack_b0;
          }
          if (fStack_ac <= fVar13) {
            fVar13 = fStack_ac;
          }
          if (fStack_a8 <= fVar14) {
            fVar14 = fStack_a8;
          }
          if (fVar10 <= fStack_a0) {
            fVar10 = fStack_a0;
          }
          if (fVar11 <= fStack_9c) {
            fVar11 = fStack_9c;
          }
          plVar6 = plStack_d0;
          if (fVar12 <= fStack_98) {
            fVar12 = fStack_98;
          }
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar9 = uVar9 + 8;
      } while ((ulonglong)(longlong)(int)uVar7 <
               (ulonglong)((longlong)plStack_c8 - (longlong)plVar6 >> 3));
    }
    uStack_94 = 0x7f7fffff;
    uStack_a4 = 0x7f7fffff;
    fStack_b0 = fVar15;
    fStack_ac = fVar13;
    fStack_a8 = fVar14;
    fStack_a0 = fVar10;
    fStack_9c = fVar11;
    fStack_98 = fVar12;
    FUN_1800b9f60(&fStack_b0);
    plVar3 = plStack_c8;
    *param_4 = CONCAT44(fStack_ac,fStack_b0);
    param_4[1] = CONCAT44(uStack_a4,fStack_a8);
    param_4[2] = CONCAT44(fStack_9c,fStack_a0);
    param_4[3] = CONCAT44(uStack_94,fStack_98);
    *(undefined4 *)(param_4 + 4) = uStack_90;
    *(undefined4 *)((longlong)param_4 + 0x24) = uStack_8c;
    *(undefined4 *)(param_4 + 5) = uStack_88;
    *(undefined4 *)((longlong)param_4 + 0x2c) = uStack_84;
    *(undefined4 *)(param_4 + 6) = uStack_80;
    for (plVar6 = plStack_d0; plVar6 != plVar3; plVar6 = plVar6 + 1) {
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x38))();
      }
    }
    if (plStack_d0 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    *param_3 = param_2;
    puVar5 = (undefined8 *)FUN_1802f4040(param_2,&fStack_b0,1);
    uVar2 = puVar5[1];
    *param_4 = *puVar5;
    param_4[1] = uVar2;
    uVar2 = puVar5[3];
    param_4[2] = puVar5[2];
    param_4[3] = uVar2;
    uVar2 = puVar5[5];
    param_4[4] = puVar5[4];
    param_4[5] = uVar2;
    *(undefined4 *)(param_4 + 6) = *(undefined4 *)(puVar5 + 6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803490e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_1803490e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined *puVar10;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  undefined8 uVar11;
  undefined *puStack_80;
  undefined4 *puStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  ulonglong uVar9;
  
  uVar11 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x1b8);
  plStackX_10 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uVar9 = 0;
  puStack_80 = &UNK_180a3c3e0;
  uStack_68 = 0;
  puStack_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x11,0x13,param_4,uVar11);
  *(undefined1 *)puVar4 = 0;
  puStack_78 = puVar4;
  uVar3 = FUN_18064e990(puVar4);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar3);
  *puVar4 = 0x5f657375;
  puVar4[1] = 0x6873656d;
  puVar4[2] = 0x6e65625f;
  puVar4[3] = 0x676e6964;
  *(undefined1 *)(puVar4 + 4) = 0;
  uStack_70 = 0x10;
  lVar5 = FUN_180240430(plVar1[0x3c],&puStack_80,0);
  if (lVar5 != 0) {
    uVar6 = FUN_180240430(plVar1[0x3c],&puStack_80,0);
    if ((plVar1[0x28] & uVar6) == 0) {
      puVar7 = (undefined8 *)FUN_18022cb40(plVar1,&plStackX_20);
      plVar2 = (longlong *)*puVar7;
      *puVar7 = 0;
      plStackX_10 = plVar2;
      plStackX_18 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      uVar6 = FUN_180240430(plVar2[0x3c],&puStack_80,1);
      if (uVar6 == 0) {
        puVar10 = &DAT_18098bc73;
        if ((undefined *)plVar2[3] != (undefined *)0x0) {
          puVar10 = (undefined *)plVar2[3];
        }
        FUN_1806272a0(&UNK_180a13bd8,puVar4,puVar10);
      }
      else {
        plVar2[0x28] = plVar2[0x28] | uVar6;
        FUN_18022dd60(plVar2);
      }
      FUN_180076910(param_2,&plStackX_10);
      lStack_60 = 0;
      lStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 3;
      FUN_1802e8c60(*(undefined8 *)(param_1 + 0x18),&lStack_60);
      FUN_1802ec150(*(undefined8 *)(param_1 + 0x18),1);
      uVar6 = uVar9;
      if (lStack_58 - lStack_60 >> 3 != 0) {
        do {
          FUN_1802ec150(*(undefined8 *)(uVar6 + lStack_60),1);
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          uVar6 = uVar6 + 8;
        } while ((ulonglong)(longlong)(int)uVar8 < (ulonglong)(lStack_58 - lStack_60 >> 3));
      }
      if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
  }
  puStack_80 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180349330(longlong param_1)
void FUN_180349330(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_188 [32];
  longlong lStack_168;
  longlong *plStack_160;
  longlong *plStack_158;
  longlong *plStack_150;
  longlong lStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  longlong *plStack_120;
  longlong *plStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [72];
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_100 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  uVar7 = 0;
  plStack_120 = (longlong *)0x0;
  plStack_118 = (longlong *)0x0;
  uStack_110 = 0;
  uStack_108 = 3;
  lStack_168 = param_1;
  FUN_1802e92b0(*(undefined8 *)(param_1 + 0x18),&plStack_120,1,0xffffffff);
  uVar11 = (longlong)plStack_118 - (longlong)plStack_120 >> 3;
  uVar10 = uVar7;
  plVar12 = plStack_120;
  if (uVar11 != 0) {
    do {
      lVar2 = *plVar12;
      if (lVar2 != 0) {
        plVar6 = *(longlong **)(lVar2 + 0x1b8);
        plStack_150 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x28))(plVar6);
        }
        lVar3 = plVar6[0x3c];
        puStack_f8 = &UNK_1809fcc58;
        puStack_f0 = auStack_e0;
        auStack_e0[0] = 0;
        uStack_e8 = 0x10;
        strcpy_s(auStack_e0,0x40,&DAT_180a0d580);
        lVar3 = FUN_180240430(lVar3,&puStack_f8,0);
        puStack_f8 = &UNK_18098bcb0;
        plVar8 = plVar6;
        if (lVar3 != 0) {
          puVar4 = (undefined8 *)FUN_18022cb40(plVar6,&plStack_158);
          plVar8 = (longlong *)*puVar4;
          *puVar4 = 0;
          plStack_160 = plVar6;
          plStack_150 = plVar8;
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x38))();
          }
          if (plStack_158 != (longlong *)0x0) {
            (**(code **)(*plStack_158 + 0x38))();
          }
          puStack_98 = &UNK_1809fcc58;
          puStack_90 = auStack_80;
          auStack_80[0] = 0;
          uStack_88 = 0x10;
          strcpy_s(auStack_80,0x40,&DAT_180a0d580);
          uVar5 = FUN_180240430(plVar8[0x3c],&puStack_98,1);
          plVar8[0x28] = plVar8[0x28] & ~uVar5;
          FUN_18022dd60(plVar8);
          puStack_98 = &UNK_18098bcb0;
          FUN_180076910(lVar2,&plStack_150);
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8);
        }
      }
      uVar9 = (int)uVar10 + 1;
      param_1 = lStack_168;
      uVar10 = (ulonglong)uVar9;
      plVar12 = plVar12 + 1;
    } while ((ulonglong)(longlong)(int)uVar9 < uVar11);
  }
  plVar12 = plStack_118;
  lStack_148 = 0;
  lStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 3;
  FUN_1802e8c60(*(undefined8 *)(param_1 + 0x18),&lStack_148);
  lStack_168 = *(longlong *)(param_1 + 0x18);
  uVar13 = FUN_18005ea90(&lStack_148,&lStack_168);
  uVar10 = uVar7;
  if (lStack_140 - lStack_148 >> 3 != 0) {
    do {
      lVar2 = *(longlong *)(uVar10 + lStack_148);
      *(undefined1 *)(lVar2 + 0x2d8) = 0;
      if (*(longlong *)(lVar2 + 0x110) != 0) {
        plVar6 = (longlong *)FUN_1800b3430(uVar13,&lStack_168,*(longlong *)(lVar2 + 0x110) + 0x10,1)
        ;
        uVar13 = extraout_XMM0_Da;
        plStack_160 = plVar6;
        if (*plVar6 != *(longlong *)(lVar2 + 0x110)) {
          uVar13 = FUN_1802ecfb0(lVar2,*plVar6,*(undefined4 *)(lVar2 + 0x148));
        }
        if ((longlong *)*plVar6 != (longlong *)0x0) {
          uVar13 = (**(code **)(*(longlong *)*plVar6 + 0x38))();
        }
        lVar3 = *(longlong *)(lVar2 + 0x20);
        if (lVar3 != 0) {
          if (*(longlong *)(lVar2 + 0x270) != 0) {
            FUN_1802e8910(lVar2);
            *(undefined1 *)(lVar2 + 0x278) = 0;
            lVar3 = *(longlong *)(lVar2 + 0x20);
          }
          uVar13 = FUN_1802f28f0(lVar2,lVar3);
        }
      }
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        uVar1 = *(undefined4 *)(lVar2 + 0x18);
        puVar4 = (undefined8 *)
                 FUN_1800b3430(uVar13,&plStack_158,*(longlong *)(lVar2 + 0x10) + 0x10,1);
        uVar13 = FUN_1802ed050(lVar2,*puVar4,uVar1);
        if (plStack_158 != (longlong *)0x0) {
          uVar13 = (**(code **)(*plStack_158 + 0x38))();
        }
      }
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar9;
      uVar10 = uVar10 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 < (ulonglong)(lStack_140 - lStack_148 >> 3));
  }
  plVar6 = plStack_120;
  if (lStack_148 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_148 = 0;
  for (plVar8 = plStack_120; plVar8 != plVar12; plVar8 = plVar8 + 1) {
    if ((longlong *)*plVar8 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar8 + 0x38))();
    }
  }
  if (plVar6 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar6);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_188);
}



undefined8 *
FUN_180349730(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a1d230;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x80,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180349780(undefined8 *param_1)
void FUN_180349780(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  
  uVar3 = 0xfffffffffffffffe;
  puVar2 = param_1;
  FUN_1803456e0();
  *puVar2 = &UNK_180a1d230;
  puVar2[0xe] = 0;
  *(undefined4 *)(puVar2 + 0xf) = 0x3f800000;
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_88 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
  *puVar2 = 0x6c6169726574614d;
  *(undefined1 *)(puVar2 + 1) = 0;
  uStack_80 = 8;
  FUN_1803460a0(param_1,&puStack_90,param_1 + 0xe,10,uVar3);
  puStack_90 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}





// 函数: void FUN_1803499b0(longlong param_1)
void FUN_1803499b0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    uVar2 = 0;
    uVar4 = uVar2;
    if (*(longlong *)(lVar1 + 0xf8) - *(longlong *)(lVar1 + 0xf0) >> 3 != 0) {
      do {
        (**(code **)(**(longlong **)(uVar2 + *(longlong *)(lVar1 + 0xf0)) + 0x98))();
        uVar2 = uVar2 + 8;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while ((ulonglong)(longlong)(int)uVar3 <
               (ulonglong)(*(longlong *)(lVar1 + 0xf8) - *(longlong *)(lVar1 + 0xf0) >> 3));
    }
  }
  return;
}





// 函数: void FUN_1803499bb(longlong param_1)
void FUN_1803499bb(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(longlong *)(lVar1 + 0xf8) - *(longlong *)(lVar1 + 0xf0) >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar2 + *(longlong *)(lVar1 + 0xf0)) + 0x98))();
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(lVar1 + 0xf8) - *(longlong *)(lVar1 + 0xf0) >> 3));
  }
  return;
}





// 函数: void FUN_1803499e2(void)
void FUN_1803499e2(void)

{
  longlong unaff_RBX;
  ulonglong uVar1;
  uint unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    (**(code **)(**(longlong **)(uVar1 + *(longlong *)(unaff_RBX + 0xf0)) + 0x98))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0xf8) - *(longlong *)(unaff_RBX + 0xf0) >> 3));
  return;
}





// 函数: void FUN_180349a29(void)
void FUN_180349a29(void)

{
  return;
}





// 函数: void FUN_180349a33(void)
void FUN_180349a33(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180349a50(undefined8 param_1)
void FUN_180349a50(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined4 uStack_1c8;
  undefined **appuStack_1c0 [2];
  undefined8 uStack_1b0;
  undefined *apuStack_1a8 [11];
  undefined4 uStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_130 [72];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [72];
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_1b0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  uStack_1c8 = 0;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 8;
  strcpy_s(auStack_130,0x40,&DAT_180a00410);
  FUN_1800b8300(apuStack_1a8,&puStack_148);
  uStack_150 = 10;
  uStack_1c8 = 1;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 6;
  strcpy_s(auStack_d0,0x40,&DAT_180a1d218);
  FUN_1800b8300(apuStack_1a8,&puStack_e8);
  uStack_150 = 2;
  uStack_1c8 = 2;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 7;
  strcpy_s(auStack_70,0x40,&DAT_180a1d220);
  FUN_1800b8300(apuStack_1a8,&puStack_88);
  uStack_150 = 2;
  uStack_1c8 = 4;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &UNK_18098bcb0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_1e8);
}





// 函数: void FUN_180349c70(undefined8 param_1,longlong param_2)
void FUN_180349c70(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x10) == 8) {
    iVar1 = _stricmp(*(undefined8 *)(param_2 + 8),&DAT_180a00410);
    if (iVar1 == 0) {
      FUN_1803499b0(param_1);
    }
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 6) {
    _stricmp(*(undefined8 *)(param_2 + 8),&DAT_180a1d218);
    iVar1 = *(int *)(param_2 + 0x10);
  }
  if (iVar1 == 7) {
    _stricmp(*(undefined8 *)(param_2 + 8),&DAT_180a1d220);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180349ce0(undefined8 *param_1,longlong param_2)
void FUN_180349ce0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_168 [32];
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  undefined4 uStack_128;
  undefined1 auStack_120 [16];
  undefined *puStack_110;
  undefined1 *puStack_108;
  undefined4 uStack_100;
  undefined1 auStack_f8 [32];
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [32];
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [32];
  ulonglong uStack_30;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  puVar1 = param_1;
  puStack_140 = param_1;
  FUN_1803456e0();
  *puVar1 = &UNK_180a1d3f0;
  *(undefined2 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x92) = 0;
  *(bool *)((longlong)puVar1 + 0x93) = *(char *)(param_2 + 0x2e5) == '\0';
  *(undefined4 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x94) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x8c) = 0x3f800000;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0x41a00000;
  puStack_138 = &UNK_1809fdc18;
  puStack_130 = auStack_120;
  auStack_120[0] = 0;
  uStack_128 = 8;
  strcpy_s(auStack_120,0x10,&UNK_180a18cc8);
  FUN_1803460a0(param_1,&puStack_138,param_1 + 0x12,3);
  puStack_138 = &UNK_18098bcb0;
  puStack_110 = &UNK_18098bc80;
  puStack_108 = auStack_f8;
  auStack_f8[0] = 0;
  uStack_100 = 0x13;
  strcpy_s(auStack_f8,0x20,&UNK_180a1d3d0);
  FUN_1803460a0(param_1,&puStack_110,(longlong)param_1 + 0x92,3);
  puStack_110 = &UNK_18098bcb0;
  puStack_d8 = &UNK_18098bc80;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0x11;
  strcpy_s(auStack_c0,0x20,&UNK_180a1d3b8);
  FUN_1803460a0(param_1,&puStack_d8,(longlong)param_1 + 0x8c,2);
  puStack_d8 = &UNK_18098bcb0;
  puStack_a0 = &UNK_18098bc80;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xf;
  strcpy_s(auStack_88,0x20,&UNK_180a1d3a8);
  FUN_1803460a0(param_1,&puStack_a0,param_1 + 0x11,2);
  puStack_a0 = &UNK_18098bcb0;
  puStack_68 = &UNK_18098bc80;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 9;
  strcpy_s(auStack_50,0x20,&UNK_180a1d398);
  FUN_1803460a0(param_1,&puStack_68,param_1 + 0xf,5);
  puStack_68 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_168);
}



undefined8 FUN_180349fb0(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xe0,param_3,param_4,uVar1);
  }
  return param_1;
}





// 函数: void FUN_18034a000(longlong param_1)
void FUN_18034a000(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x93) == '\0') {
    uVar5 = FUN_1803191b0(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x60c10);
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    FUN_18031b950(uVar5,*(longlong *)(param_1 + 0x18) + 0x70,1);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0x144) = *(undefined4 *)(param_1 + 0x8c);
    uVar4 = 0x14;
    if (*(int *)(lVar1 + 0x4c) != 0x18) {
      uVar4 = 0;
    }
    *(undefined4 *)(lVar1 + 0x4c) = uVar4;
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)(param_1 + 0x88);
    *(undefined1 *)(lVar1 + 0x50) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x148) = *(undefined1 *)(param_1 + 0x90);
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x149) = *(undefined1 *)(param_1 + 0x92);
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x14a) = *(undefined1 *)(param_1 + 0x91);
    lVar1 = *(longlong *)(param_1 + 0x70);
    uVar4 = *(undefined4 *)(param_1 + 0x7c);
    uVar2 = *(undefined4 *)(param_1 + 0x80);
    uVar3 = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(lVar1 + 0xe4) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(lVar1 + 0xe8) = uVar4;
    *(undefined4 *)(lVar1 + 0xec) = uVar2;
    *(undefined4 *)(lVar1 + 0xf0) = uVar3;
    FUN_18031bc40();
    lVar1 = *(longlong *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(param_1 + 0xa4) = uVar5;
    uVar5 = *(undefined8 *)(lVar1 + 0x88);
    *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(param_1 + 0xb4) = uVar5;
    uVar5 = *(undefined8 *)(lVar1 + 0x98);
    *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(lVar1 + 0x90);
    *(undefined8 *)(param_1 + 0xc4) = uVar5;
    uVar5 = *(undefined8 *)(lVar1 + 0xa8);
    *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(lVar1 + 0xa0);
    *(undefined8 *)(param_1 + 0xd4) = uVar5;
  }
  return;
}





// 函数: void FUN_18034a100(undefined8 *param_1)
void FUN_18034a100(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if ((undefined *)*param_1 == &UNK_180a1d3f0) {
    if (*(char *)((longlong)param_1 + 0x93) == '\0') {
      uVar5 = FUN_1803191b0(*(longlong *)(param_1[3] + 0x20) + 0x60c10);
      param_1[0xe] = uVar5;
      FUN_18031b950(uVar5,param_1[3] + 0x70,1);
      lVar1 = param_1[0xe];
      *(undefined4 *)(lVar1 + 0x144) = *(undefined4 *)((longlong)param_1 + 0x8c);
      uVar4 = 0x14;
      if (*(int *)(lVar1 + 0x4c) != 0x18) {
        uVar4 = 0;
      }
      *(undefined4 *)(lVar1 + 0x4c) = uVar4;
      lVar1 = param_1[0xe];
      *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)(param_1 + 0x11);
      *(undefined1 *)(lVar1 + 0x50) = 1;
      *(undefined1 *)(param_1[0xe] + 0x148) = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1[0xe] + 0x149) = *(undefined1 *)((longlong)param_1 + 0x92);
      *(undefined1 *)(param_1[0xe] + 0x14a) = *(undefined1 *)((longlong)param_1 + 0x91);
      lVar1 = param_1[0xe];
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x7c);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x84);
      *(undefined4 *)(lVar1 + 0xe4) = *(undefined4 *)(param_1 + 0xf);
      *(undefined4 *)(lVar1 + 0xe8) = uVar4;
      *(undefined4 *)(lVar1 + 0xec) = uVar2;
      *(undefined4 *)(lVar1 + 0xf0) = uVar3;
      FUN_18031bc40();
      lVar1 = param_1[3];
      uVar5 = *(undefined8 *)(lVar1 + 0x78);
      *(undefined8 *)((longlong)param_1 + 0x9c) = *(undefined8 *)(lVar1 + 0x70);
      *(undefined8 *)((longlong)param_1 + 0xa4) = uVar5;
      uVar5 = *(undefined8 *)(lVar1 + 0x88);
      *(undefined8 *)((longlong)param_1 + 0xac) = *(undefined8 *)(lVar1 + 0x80);
      *(undefined8 *)((longlong)param_1 + 0xb4) = uVar5;
      uVar5 = *(undefined8 *)(lVar1 + 0x98);
      *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)(lVar1 + 0x90);
      *(undefined8 *)((longlong)param_1 + 0xc4) = uVar5;
      uVar5 = *(undefined8 *)(lVar1 + 0xa8);
      *(undefined8 *)((longlong)param_1 + 0xcc) = *(undefined8 *)(lVar1 + 0xa0);
      *(undefined8 *)((longlong)param_1 + 0xd4) = uVar5;
    }
  }
  else {
    (**(code **)((undefined *)*param_1 + 0x70))(param_1);
  }
  lVar1 = param_1[3];
  uVar5 = *(undefined8 *)(lVar1 + 0x78);
  *(undefined8 *)((longlong)param_1 + 0x9c) = *(undefined8 *)(lVar1 + 0x70);
  *(undefined8 *)((longlong)param_1 + 0xa4) = uVar5;
  uVar5 = *(undefined8 *)(lVar1 + 0x88);
  *(undefined8 *)((longlong)param_1 + 0xac) = *(undefined8 *)(lVar1 + 0x80);
  *(undefined8 *)((longlong)param_1 + 0xb4) = uVar5;
  uVar5 = *(undefined8 *)(lVar1 + 0x98);
  *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)(lVar1 + 0x90);
  *(undefined8 *)((longlong)param_1 + 0xc4) = uVar5;
  uVar5 = *(undefined8 *)(lVar1 + 0xa8);
  *(undefined8 *)((longlong)param_1 + 0xcc) = *(undefined8 *)(lVar1 + 0xa0);
  *(undefined8 *)((longlong)param_1 + 0xd4) = uVar5;
  return;
}





// 函数: void FUN_18034a260(longlong param_1,float param_2)
void FUN_18034a260(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  if (*(char *)(param_1 + 0x93) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x18);
    cVar3 = func_0x000180285f10(param_1 + 0x9c,lVar1 + 0x70,0x3c23d70a);
    if (cVar3 == '\0') {
      *(undefined4 *)(param_1 + 0x98) = 0x40000000;
      if (*(int *)(*(longlong *)(param_1 + 0x70) + 0x4c) != 0) {
        *(undefined1 *)(param_1 + 0x94) = 1;
      }
      FUN_18031b950(*(longlong *)(param_1 + 0x70),lVar1 + 0x70,0);
    }
    else {
      *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x98) - param_2;
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(param_1 + 0xa4) = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0x88);
    *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(param_1 + 0xb4) = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0x98);
    *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(lVar1 + 0x90);
    *(undefined8 *)(param_1 + 0xc4) = uVar2;
    uVar2 = *(undefined8 *)(lVar1 + 0xa8);
    *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(lVar1 + 0xa0);
    *(undefined8 *)(param_1 + 0xd4) = uVar2;
    if ((*(char *)(param_1 + 0x94) != '\0') &&
       (*(float *)(param_1 + 0x98) <= 0.0 && *(float *)(param_1 + 0x98) != 0.0)) {
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x4c) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x50) = 1;
    }
  }
  return;
}





