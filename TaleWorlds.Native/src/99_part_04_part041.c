#include "TaleWorlds.Native.Split.h"

// 99_part_04_part041.c - 13 个函数

// 函数: void FUN_1802ad7f0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,int param_5
void FUN_1802ad7f0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,int param_5
                  )

{
  longlong **pplVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong *plStackX_8;
  longlong *plStackX_20;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  
  uVar8 = 0xfffffffffffffffe;
  plVar5 = (longlong *)0x0;
  if (param_4 == 0) {
    plStackX_8 = (longlong *)0x0;
    pplVar1 = &plStackX_8;
    uVar4 = 2;
    uVar7 = 2;
  }
  else {
    pplVar1 = (longlong **)FUN_1801ebcd0(param_4,&plStackX_20,param_3,param_4,0,0xfffffffffffffffe);
    uVar4 = 1;
    uVar7 = 1;
    plVar5 = *pplVar1;
  }
  *pplVar1 = (longlong *)0x0;
  plVar9 = plVar5;
  if ((uVar4 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd;
    uVar7 = uVar4;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  if ((uVar4 & 1) != 0) {
    uVar7 = uVar4 & 0xfffffffe;
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
  }
  if (plVar5 == *(longlong **)(param_1 + 0x48)) goto LAB_1802ad957;
  lVar2 = FUN_18062f5e0(param_2,1,&DAT_180a09dc0);
  if (plVar5 == (longlong *)0x0) {
LAB_1802ad8eb:
    bVar6 = true;
    lVar3 = *(longlong *)(param_1 + 0x48);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x48);
    if ((*(longlong *)(plVar5[2] + 0xc) != *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0xc)) ||
       (*(longlong *)(plVar5[2] + 0x14) != *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x14)))
    goto LAB_1802ad8eb;
    bVar6 = param_4 == 0;
  }
  FUN_1802b5530(lVar3,param_2,lVar2,bVar6,uVar7,uVar8,plVar9);
  if ((*(longlong *)(lVar2 + 0x30) != 0) || (*(longlong *)(lVar2 + 0x40) != 0)) {
    if (param_5 != 0) {
      FUN_180630c80(param_2,lVar2,&UNK_180a16930);
    }
    if (*(longlong *)(param_3 + 0x30) == 0) {
      *(undefined8 *)(lVar2 + 0x50) = 0;
      *(longlong *)(param_3 + 0x30) = lVar2;
    }
    else {
      *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_3 + 0x38);
      *(longlong *)(*(longlong *)(param_3 + 0x38) + 0x58) = lVar2;
    }
    *(longlong *)(param_3 + 0x38) = lVar2;
    *(longlong *)(lVar2 + 0x20) = param_3;
    *(undefined8 *)(lVar2 + 0x58) = 0;
  }
LAB_1802ad957:
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1802ad980(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong **pplVar19;
  longlong *plStackX_8;
  undefined8 *puStackX_10;
  longlong *plStackX_18;
  longlong **pplStackX_20;
  
  puStackX_10 = param_2;
  uVar17 = FUN_18062b1e0(_DAT_180c8ed18,0x168,8,3,0,0xfffffffffffffffe);
  plVar18 = (longlong *)FUN_1802ac390(uVar17);
  plStackX_18 = plVar18;
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0x28))(plVar18);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  uVar4 = *(undefined4 *)(param_1 + 0x5c);
  uVar5 = *(undefined4 *)(param_1 + 0x60);
  uVar6 = *(undefined4 *)(param_1 + 100);
  uVar7 = *(undefined4 *)(param_1 + 0x68);
  uVar8 = *(undefined4 *)(param_1 + 0x6c);
  uVar9 = *(undefined4 *)(param_1 + 0x70);
  uVar10 = *(undefined4 *)(param_1 + 0x74);
  uVar11 = *(undefined4 *)(param_1 + 0x78);
  uVar12 = *(undefined4 *)(param_1 + 0x7c);
  uVar13 = *(undefined4 *)(param_1 + 0x80);
  uVar14 = *(undefined4 *)(param_1 + 0x84);
  uVar15 = *(undefined4 *)(param_1 + 0x88);
  uVar16 = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(plVar18 + 10) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((longlong)plVar18 + 0x54) = uVar2;
  *(undefined4 *)(plVar18 + 0xb) = uVar3;
  *(undefined4 *)((longlong)plVar18 + 0x5c) = uVar4;
  *(undefined4 *)(plVar18 + 0xc) = uVar5;
  *(undefined4 *)((longlong)plVar18 + 100) = uVar6;
  *(undefined4 *)(plVar18 + 0xd) = uVar7;
  *(undefined4 *)((longlong)plVar18 + 0x6c) = uVar8;
  *(undefined4 *)(plVar18 + 0xe) = uVar9;
  *(undefined4 *)((longlong)plVar18 + 0x74) = uVar10;
  *(undefined4 *)(plVar18 + 0xf) = uVar11;
  *(undefined4 *)((longlong)plVar18 + 0x7c) = uVar12;
  *(undefined4 *)(plVar18 + 0x10) = uVar13;
  *(undefined4 *)((longlong)plVar18 + 0x84) = uVar14;
  *(undefined4 *)(plVar18 + 0x11) = uVar15;
  *(undefined4 *)((longlong)plVar18 + 0x8c) = uVar16;
  if (plVar18 + 0x22 != (longlong *)(param_1 + 0x110)) {
    FUN_18017b480(plVar18 + 0x22,*(longlong *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118));
  }
  *(undefined1 *)((longlong)plVar18 + 0x159) = *(undefined1 *)(param_1 + 0x159);
  *(undefined4 *)((longlong)plVar18 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined1 *)((longlong)plVar18 + 0x164) = *(undefined1 *)(param_1 + 0x164);
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    pplStackX_20 = &plStackX_8;
    if ((int)plVar1[0xe] == 0) {
      pplVar19 = (longlong **)FUN_1802b5ac0(plVar1,&plStackX_8);
    }
    else {
      plStackX_8 = plVar1;
      (**(code **)(*plVar1 + 0x28))();
      pplVar19 = &plStackX_8;
    }
    FUN_1802adab0(plVar18,pplVar19);
  }
  *param_2 = plVar18;
  (**(code **)(*plVar18 + 0x28))(plVar18);
  (**(code **)(*plVar18 + 0x38))(plVar18);
  return param_2;
}






// 函数: void FUN_1802adab0(longlong param_1,longlong *param_2)
void FUN_1802adab0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1802ae420();
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x48);
  *(longlong **)(param_1 + 0x48) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x158) = 1;
  if (*(longlong *)(param_1 + 0x130) == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  else {
    FUN_1802adb50(param_1);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802adb50(longlong param_1)
void FUN_1802adb50(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lStackX_18;
  ulonglong uStackX_20;
  undefined4 uVar14;
  float afStack_b0 [2];
  longlong lStack_a8;
  longlong *plStack_a0;
  longlong *plStack_98;
  float fStack_90;
  float *pfStack_88;
  longlong *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  
  uStack_70 = 0xfffffffffffffffe;
  iVar12 = 0;
  uVar14 = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    plVar1 = (longlong *)(param_1 + 0x138);
    lVar13 = *(longlong *)(param_1 + 0x140);
    lVar6 = *plVar1;
    if (lVar6 != lVar13) {
      do {
        FUN_1802c00d0();
        lVar6 = lVar6 + 0x28;
      } while (lVar6 != lVar13);
      lVar6 = *plVar1;
    }
    *(longlong *)(param_1 + 0x140) = lVar6;
    *(undefined4 *)(param_1 + 0x38) = 0;
    iVar9 = *(int *)(param_1 + 0x3c);
    if (iVar9 == -1) {
      iVar9 = *(int *)(_DAT_180c86920 + 0xaf0);
    }
    lVar13 = *(longlong *)(param_1 + 0x48);
    uStackX_20 = (ulonglong)
                 (int)((*(longlong *)(lVar13 + 0x90) - *(longlong *)(lVar13 + 0x88)) / 0x28);
    if ((ulonglong)((*(longlong *)(param_1 + 0x148) - *plVar1) / 0x28) < uStackX_20) {
      FUN_1802be4a0(plVar1,uStackX_20,lVar13,uStackX_20,uVar14);
      lVar13 = *(longlong *)(param_1 + 0x48);
    }
    if (0 < (longlong)uStackX_20) {
      lStackX_18 = 0;
      do {
        lVar6 = 0;
        pfStack_88 = (float *)&lStack_a8;
        lStack_a8 = 0;
        plStack_a0 = (longlong *)0x0;
        plStack_98 = (longlong *)0x0;
        fStack_90 = 4.2039e-45;
        afStack_b0[0] = *(float *)(lStackX_18 + *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x88))
        ;
        afStack_b0[0] = afStack_b0[0] * afStack_b0[0];
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x88);
        if (((ulonglong)(longlong)iVar12 <
             (ulonglong)((*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x90) - lVar13) / 0x28)) &&
           (iVar5 = (int)(*(longlong *)(lStackX_18 + 0x10 + lVar13) -
                          *(longlong *)(lStackX_18 + 8 + lVar13) >> 3), iVar5 != 0)) {
          pfVar7 = (float *)(longlong)iVar5;
          pfStack_88 = pfVar7;
          FUN_1802b7110(&lStack_a8,pfVar7);
          if (0 < (longlong)pfVar7) {
            do {
              plVar1 = *(longlong **)
                        (*(longlong *)
                          (lStackX_18 + 8 + *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x88)) +
                        lVar6 * 8);
              plStack_68 = plVar1;
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x28))(plVar1);
              }
              uVar14 = 0;
              plStack_80 = plVar1;
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x38))(plVar1);
              }
              if ((((char)plVar1[0x10] == -1) || ((char)plVar1[0x10] <= iVar9)) &&
                 ((*(char *)((longlong)plVar1 + 0x81) == -1 ||
                  (iVar9 <= *(char *)((longlong)plVar1 + 0x81))))) {
                uStack_78 = 0;
                if (plStack_a0 < plStack_98) {
                  plStack_80 = plStack_a0;
                  uVar3 = *(undefined8 *)(param_1 + 0x130);
                  plStack_a0[3] = 0;
                  plStack_60 = plStack_a0 + 6;
                  *plStack_60 = 0;
                  plStack_a0[7] = 0;
                  plStack_a0[8] = 0;
                  *(undefined4 *)(plStack_a0 + 9) = 3;
                  plStack_a0[0xb] = 0;
                  *(undefined4 *)(plStack_a0 + 0xc) = 0x41c64e6d;
                  plStack_58 = plStack_a0 + 0xd;
                  *plStack_58 = 0;
                  plStack_a0[0xe] = 0;
                  plStack_a0[0xf] = 0;
                  *(undefined4 *)(plStack_a0 + 0x10) = 0x1a;
                  FUN_1802b1260(plStack_a0,uVar3,plVar1,0);
                  plStack_a0 = plStack_a0 + 0x12;
                }
                else {
                  FUN_1802be7f0(&lStack_a8,param_1 + 0x130,&plStack_80,&uStack_78,uVar14);
                }
                plVar1 = plStack_a0;
                FUN_1802b1620(plStack_a0 + -0x12,param_1 + 0x110);
                lVar13 = plVar1[-0xe];
                puVar11 = &DAT_18098bc73;
                if (*(undefined **)(plVar1[-0xf] + 0x50) != (undefined *)0x0) {
                  puVar11 = *(undefined **)(plVar1[-0xf] + 0x50);
                }
                plVar4 = *(longlong **)(param_1 + 0x48);
                plStack_50 = plVar4;
                if (plVar4 != (longlong *)0x0) {
                  (**(code **)(*plVar4 + 0x28))(plVar4);
                }
                puVar10 = &DAT_18098bc73;
                if ((undefined *)plVar4[10] != (undefined *)0x0) {
                  puVar10 = (undefined *)plVar4[10];
                }
                FUN_180628040(lVar13 + 0x80,&UNK_180a17fe0,puVar10,puVar11,2);
                uVar14 = 0;
                if (plVar4 != (longlong *)0x0) {
                  (**(code **)(*plVar4 + 0x38))(plVar4);
                }
                iVar5 = (int)((plVar1[-0xb] - plVar1[-0xc]) / 0x88);
                lVar13 = (longlong)iVar5;
                if (0 < iVar5) {
                  lVar8 = 0;
                  do {
                    puVar11 = *(undefined **)
                               (*(longlong *)(*(longlong *)(lVar8 + plVar1[-0xc]) + 0x48) + 0x50);
                    puVar10 = &DAT_18098bc73;
                    if (puVar11 != (undefined *)0x0) {
                      puVar10 = puVar11;
                    }
                    puVar11 = &DAT_18098bc73;
                    if (*(undefined **)(plVar1[-0xe] + 0x88) != (undefined *)0x0) {
                      puVar11 = *(undefined **)(plVar1[-0xe] + 0x88);
                    }
                    FUN_180628040(*(longlong *)(lVar8 + plVar1[-0xc]) + 0x80,&UNK_180a17fe0,puVar11,
                                  puVar10,uVar14);
                    lVar8 = lVar8 + 0x88;
                    lVar13 = lVar13 + -1;
                  } while (lVar13 != 0);
                }
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 < (longlong)pfStack_88);
          }
          lVar13 = (longlong)plStack_a0 - lStack_a8 >> 0x3f;
          if (((longlong)plStack_a0 - lStack_a8) / 0x90 + lVar13 != lVar13) {
            pfVar7 = *(float **)(param_1 + 0x140);
            if (pfVar7 < *(float **)(param_1 + 0x148)) {
              *pfVar7 = afStack_b0[0];
              pfStack_88 = pfVar7 + 2;
              pfStack_88[0] = 0.0;
              pfStack_88[1] = 0.0;
              pfVar7[4] = 0.0;
              pfVar7[5] = 0.0;
              pfVar7[6] = 0.0;
              pfVar7[7] = 0.0;
              pfVar7[8] = fStack_90;
              lVar13 = *(longlong *)pfStack_88;
              *(longlong *)pfStack_88 = lStack_a8;
              plVar1 = *(longlong **)(pfVar7 + 4);
              *(longlong **)(pfVar7 + 4) = plStack_a0;
              plVar4 = *(longlong **)(pfVar7 + 6);
              *(longlong **)(pfVar7 + 6) = plStack_98;
              fVar2 = pfVar7[8];
              pfVar7[8] = fStack_90;
              *(longlong *)(param_1 + 0x140) = *(longlong *)(param_1 + 0x140) + 0x28;
              lStack_a8 = lVar13;
              plStack_a0 = plVar1;
              plStack_98 = plVar4;
              fStack_90 = fVar2;
            }
            else {
              FUN_1802be600(param_1 + 0x138,afStack_b0);
            }
          }
        }
        else {
          FUN_1802b72b0(param_1 + 0x138,afStack_b0);
        }
        FUN_1802c00d0(&lStack_a8);
        iVar12 = iVar12 + 1;
        lStackX_18 = lStackX_18 + 0x28;
        uStackX_20 = uStackX_20 - 1;
      } while (uStackX_20 != 0);
      lVar13 = *(longlong *)(param_1 + 0x48);
    }
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar13 + 0x40);
  }
  return;
}






// 函数: void FUN_1802ae070(longlong param_1)
void FUN_1802ae070(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  for (lVar2 = *(longlong *)(param_1 + 8); lVar2 != lVar1; lVar2 = lVar2 + 0x90) {
    FUN_1802b13d0(lVar2);
    if (*(longlong *)(lVar2 + 0x68) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (*(longlong **)(lVar2 + 0x58) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x58) + 0x38))();
    }
    FUN_1802bfac0();
    if (*(longlong **)(lVar2 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x38))();
    }
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1802ae130(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802ae130(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x2e8) < '\0') {
    lVar1 = *(longlong *)(param_1 + 0x48);
    if (*(int *)(lVar1 + 0x70) == 0) {
      plVar2 = *(longlong **)(lVar1 + 0x68);
      plStackX_8 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      uVar4 = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2);
      }
      if ((int)plVar2[0xe] == 1) {
        FUN_1802b5ac0(*(undefined8 *)(param_1 + 0x48),&plStackX_8,param_3,param_4,uVar4,uVar5);
        plVar3 = plStackX_8;
        pplStackX_18 = &plStackX_10;
        plStackX_10 = plVar2;
        (**(code **)(*plVar2 + 0x28))(plVar2);
        FUN_1802c0000(plVar3,&plStackX_10);
        *(undefined4 *)(plStackX_8 + 0xe) = 2;
        uVar5 = *(undefined8 *)(param_1 + 0x48);
        pplStackX_18 = &plStackX_10;
        plStackX_10 = plStackX_8;
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))();
        }
        FUN_1802c0000(uVar5,&plStackX_10);
        pplStackX_18 = &plStackX_10;
        plStackX_10 = plStackX_8;
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))();
        }
        FUN_1802adab0(param_1,&plStackX_10);
      }
      else {
        if ((int)plVar2[0xe] != 2) {
          return;
        }
        plVar2 = (longlong *)plVar2[0xd];
        plStackX_10 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        uVar4 = 0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2);
        }
        FUN_1802b5ac0(*(undefined8 *)(param_1 + 0x48),&plStackX_8,param_3,param_4,uVar4,uVar5);
        plVar3 = plStackX_8;
        pplStackX_18 = &plStackX_10;
        plStackX_10 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        FUN_1802c0000(plVar3,&plStackX_10);
        *(undefined4 *)(plStackX_8 + 0xe) = 2;
        uVar5 = *(undefined8 *)(param_1 + 0x48);
        pplStackX_18 = &plStackX_10;
        plStackX_10 = plStackX_8;
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))();
        }
        FUN_1802c0000(uVar5,&plStackX_10);
        pplStackX_18 = &plStackX_10;
        plStackX_10 = plStackX_8;
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))();
        }
        FUN_1802adab0(param_1,&plStackX_10);
      }
    }
    else {
      if (*(int *)(lVar1 + 0x70) != 2) {
        return;
      }
      plVar2 = *(longlong **)(lVar1 + 0x68);
      plStackX_10 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      uVar4 = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2);
      }
      FUN_1802b5ac0(*(undefined8 *)(param_1 + 0x48),&plStackX_8,param_3,param_4,uVar4,uVar5);
      plVar3 = plStackX_8;
      pplStackX_18 = &plStackX_10;
      plStackX_10 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      FUN_1802c0000(plVar3,&plStackX_10);
      *(undefined4 *)(plStackX_8 + 0xe) = 2;
      pplStackX_18 = &plStackX_10;
      plStackX_10 = plStackX_8;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))();
      }
      FUN_1802adab0(param_1,&plStackX_10);
    }
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
      return;
    }
  }
  else if (*(int *)(*(longlong *)(param_1 + 0x48) + 0x70) == 2) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x70) = 0;
  }
  return;
}



byte FUN_1802ae400(longlong param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x164) != '\0') {
    return 0;
  }
  bVar1 = func_0x0001802ae0a0();
  return bVar1 ^ 1;
}






// 函数: void FUN_1802ae420(longlong param_1)
void FUN_1802ae420(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  *(undefined8 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x160) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x158) = 1;
  *(undefined2 *)(param_1 + 0x15b) = 0;
  plVar1 = *(longlong **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  iVar2 = (int)((*(longlong *)(param_1 + 0x140) - *(longlong *)(param_1 + 0x138)) / 0x28);
  lVar6 = (longlong)iVar2;
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      uVar5 = (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x10 + lVar4) -
              *(longlong *)(*(longlong *)(param_1 + 0x138) + 8 + lVar4)) / 0x90;
      if (0 < (int)uVar5) {
        lVar3 = 0;
        uVar5 = uVar5 & 0xffffffff;
        do {
          FUN_1802b14b0(*(longlong *)(*(longlong *)(param_1 + 0x138) + 8 + lVar4) + lVar3);
          lVar3 = lVar3 + 0x90;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      lVar4 = lVar4 + 0x28;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



int FUN_1802ae580(longlong param_1)

{
  undefined *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  
  if (*(int *)(param_1 + 0x10) == 3) {
    lVar2 = 0;
    while (lVar4 = lVar2, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a15748)[lVar4])
    {
      lVar2 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + -2;
      }
    }
  }
  puVar1 = *(undefined **)(param_1 + 8);
  if ((*(int *)(param_1 + 0x10) == 8) && (iVar3 = strcmp(puVar1,&UNK_180a15728), iVar3 == 0)) {
    return 0;
  }
  puVar5 = &DAT_18098bc73;
  if (puVar1 != (undefined *)0x0) {
    puVar5 = puVar1;
  }
  FUN_180626f80(&UNK_180a17fe8,puVar5);
  return 0;
}



int FUN_1802ae610(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  lVar3 = 0;
  if (iVar1 == 3) {
    lVar5 = lVar3;
    while (lVar6 = lVar5 + 1,
          *(char *)(*(longlong *)(param_1 + 8) + lVar5) == (&UNK_180a157f0)[lVar5]) {
      lVar5 = lVar6;
      if (lVar6 == 4) {
        return 0;
      }
    }
  }
  if (iVar1 == 6) {
    lVar5 = lVar3;
    while (lVar6 = lVar5, *(char *)(*(longlong *)(param_1 + 8) + lVar6) == (&UNK_180a15828)[lVar6])
    {
      lVar5 = lVar6 + 1;
      if (lVar6 + 1 == 7) {
        return (int)lVar6 + -5;
      }
    }
  }
  puVar2 = *(undefined **)(param_1 + 8);
  if (iVar1 == 4) {
    do {
      lVar5 = lVar3;
      if (puVar2[lVar5] != (&UNK_180a15830)[lVar5]) goto LAB_1802ae6b4;
      lVar3 = lVar5 + 1;
    } while (lVar5 + 1 != 5);
    if (puVar2[lVar5] == (&UNK_180a15830)[lVar5]) {
      return (int)lVar5 + -2;
    }
  }
LAB_1802ae6b4:
  puVar4 = &DAT_18098bc73;
  if (puVar2 != (undefined *)0x0) {
    puVar4 = puVar2;
  }
  FUN_180626f80(&UNK_180a18010,puVar4);
  return 0;
}



undefined4 FUN_1802ae6e0(longlong param_1)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if ((((iVar4 == 2) && (pcVar1 = *(char **)(param_1 + 8), *pcVar1 == '2')) && (pcVar1[1] == 'd'))
     && (pcVar1[2] == '\0')) {
    return 2;
  }
  if (iVar4 == 4) {
    lVar5 = 0;
    while (lVar6 = lVar5 + 1,
          *(char *)(*(longlong *)(param_1 + 8) + lVar5) == (&DAT_180a0b57c)[lVar5]) {
      lVar5 = lVar6;
      if (lVar6 == 5) {
        return 0;
      }
    }
  }
  if (((iVar4 != 2) || (pcVar1 = *(char **)(param_1 + 8), *pcVar1 != '3')) ||
     ((pcVar1[1] != 'd' || (pcVar1[2] != '\0')))) {
    if (iVar4 == 0x18) {
      iVar3 = strcmp(*(undefined8 *)(param_1 + 8),&UNK_180a157a8);
      if (iVar3 == 0) {
        return 3;
      }
    }
    puVar2 = *(undefined **)(param_1 + 8);
    if (iVar4 == 0x15) {
      iVar4 = strcmp(puVar2,&UNK_180a157c8);
      if (iVar4 == 0) {
        return 4;
      }
    }
    puVar7 = &DAT_18098bc73;
    if (puVar2 != (undefined *)0x0) {
      puVar7 = puVar2;
    }
    FUN_180626f80(&UNK_180a17fe8,puVar7);
  }
  return 1;
}






// 函数: void FUN_1802ae880(longlong param_1,longlong *param_2)
void FUN_1802ae880(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  FUN_1800b8500(param_1 + 0x110);
  if (param_2[1] - *param_2 >> 3 != 0) {
    FUN_1802bed10(param_1 + 0x110,*(undefined8 *)(param_1 + 0x118));
    iVar1 = (int)((*(longlong *)(param_1 + 0x140) - *(longlong *)(param_1 + 0x138)) / 0x28);
    lVar5 = (longlong)iVar1;
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        uVar4 = (*(longlong *)(lVar3 + 0x10 + *(longlong *)(param_1 + 0x138)) -
                *(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x138))) / 0x90;
        if (0 < (int)uVar4) {
          lVar2 = 0;
          uVar4 = uVar4 & 0xffffffff;
          do {
            FUN_1802b1620(*(longlong *)(lVar3 + 8 + *(longlong *)(param_1 + 0x138)) + lVar2,param_2)
            ;
            lVar2 = lVar2 + 0x90;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        lVar3 = lVar3 + 0x28;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}






// 函数: void FUN_1802ae8c3(void)
void FUN_1802ae8c3(void)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RBP;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  FUN_1802bed10();
  iVar1 = (int)((*(longlong *)(unaff_RBP + 0x140) - *(longlong *)(unaff_RBP + 0x138)) / 0x28);
  lVar5 = (longlong)iVar1;
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      uVar4 = (*(longlong *)(lVar3 + 0x10 + *(longlong *)(unaff_RBP + 0x138)) -
              *(longlong *)(lVar3 + 8 + *(longlong *)(unaff_RBP + 0x138))) / 0x90;
      if (0 < (int)uVar4) {
        lVar2 = 0;
        uVar4 = uVar4 & 0xffffffff;
        do {
          FUN_1802b1620(*(longlong *)(lVar3 + 8 + *(longlong *)(unaff_RBP + 0x138)) + lVar2);
          lVar2 = lVar2 + 0x90;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      lVar3 = lVar3 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}






// 函数: void FUN_1802ae901(void)
void FUN_1802ae901(void)

{
  longlong lVar1;
  longlong unaff_RBP;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_R15;
  
  lVar2 = 0;
  do {
    uVar3 = (*(longlong *)(lVar2 + 0x10 + *(longlong *)(unaff_RBP + 0x138)) -
            *(longlong *)(lVar2 + 8 + *(longlong *)(unaff_RBP + 0x138))) / 0x90;
    if (0 < (int)uVar3) {
      lVar1 = 0;
      uVar3 = uVar3 & 0xffffffff;
      do {
        FUN_1802b1620(*(longlong *)(lVar2 + 8 + *(longlong *)(unaff_RBP + 0x138)) + lVar1);
        lVar1 = lVar1 + 0x90;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar2 = lVar2 + 0x28;
    unaff_R15 = unaff_R15 + -1;
  } while (unaff_R15 != 0);
  return;
}






// 函数: void FUN_1802ae98d(void)
void FUN_1802ae98d(void)

{
  return;
}






// 函数: void FUN_1802ae992(void)
void FUN_1802ae992(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802ae9a0(longlong param_1,longlong param_2)
void FUN_1802ae9a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x48) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) == *(longlong *)(_DAT_180c86970 + 0xd0)))
  {
    *(undefined1 *)(param_1 + 0x159) = 0;
  }
  if (*(longlong *)(param_1 + 0x130) != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x140);
    lVar2 = *(longlong *)(param_1 + 0x138);
    if (lVar2 != lVar1) {
      do {
        FUN_1802c00d0();
        lVar2 = lVar2 + 0x28;
      } while (lVar2 != lVar1);
      lVar2 = *(longlong *)(param_1 + 0x138);
    }
    *(longlong *)(param_1 + 0x140) = lVar2;
    *(longlong *)(param_1 + 0x130) = param_2;
  }
  return;
}






// 函数: void FUN_1802aea80(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802aea80(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong **pplStackX_20;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x48) != *(longlong *)(param_1 + 0x48))) {
    FUN_1802b5ac0(*(longlong *)(param_2 + 0x48),&plStackX_18,param_3,param_4,0xfffffffffffffffe);
    pplStackX_20 = &plStackX_10;
    plStackX_10 = plStackX_18;
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x28))();
    }
    FUN_1802adab0(param_1,&plStackX_10);
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
  }
  return;
}






