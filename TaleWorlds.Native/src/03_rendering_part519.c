#include "TaleWorlds.Native.Split.h"

// 03_rendering_part519.c - 11 个函数

// 函数: void FUN_180548ce0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
void FUN_180548ce0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,char param_6,char param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  undefined8 uStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  longlong alStack_e8 [3];
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 uStack_b8;
  undefined1 uStack_b6;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  longlong alStack_a0 [3];
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [48];
  
  uStack_78 = 0xfffffffffffffffe;
  plStackX_10 = param_2;
  plStackX_18 = param_3;
  plStackX_20 = param_4;
  if ((param_1[0x1b] == 0) || (*(longlong **)(param_1[0x1b] + 0x830) == param_1)) {
    FUN_180548c10(param_1[0x20],*param_2);
    FUN_180548c10(param_1[0x21],*param_3);
    FUN_180548c10(param_1[0x22],*param_4);
    FUN_180548c10(param_1[0x23],*param_5);
    plVar4 = (longlong *)*param_2;
    if (plVar4 != (longlong *)0x0) {
      uStackX_8 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    uStackX_8 = (longlong *)param_1[0x20];
    param_1[0x20] = (longlong)plVar4;
    if (uStackX_8 != (longlong *)0x0) {
      (**(code **)(*uStackX_8 + 0x38))();
    }
    plVar4 = (longlong *)*param_3;
    if (plVar4 != (longlong *)0x0) {
      uStackX_8 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    uStackX_8 = (longlong *)param_1[0x21];
    param_1[0x21] = (longlong)plVar4;
    if (uStackX_8 != (longlong *)0x0) {
      (**(code **)(*uStackX_8 + 0x38))();
    }
    plVar4 = (longlong *)*param_4;
    if (plVar4 != (longlong *)0x0) {
      uStackX_8 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    uStackX_8 = (longlong *)param_1[0x22];
    param_1[0x22] = (longlong)plVar4;
    if (uStackX_8 != (longlong *)0x0) {
      (**(code **)(*uStackX_8 + 0x38))();
    }
    plVar4 = (longlong *)*param_5;
    if (plVar4 != (longlong *)0x0) {
      uStackX_8 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    uStackX_8 = (longlong *)param_1[0x23];
    param_1[0x23] = (longlong)plVar4;
    if (uStackX_8 != (longlong *)0x0) {
      (**(code **)(*uStackX_8 + 0x38))();
    }
    FUN_18054a180(param_1);
    lVar5 = param_1[0x1b];
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x8be) != '\0')) {
      uStackX_8 = (longlong *)param_1[0x20];
      if (uStackX_8 != (longlong *)0x0) {
        (**(code **)(*uStackX_8 + 0x28))();
      }
      FUN_180544860(lVar5,0,&uStackX_8);
      lVar5 = param_1[0x1b];
      uStackX_8 = (longlong *)param_1[0x21];
      if (uStackX_8 != (longlong *)0x0) {
        (**(code **)(*uStackX_8 + 0x28))();
      }
      FUN_180544860(lVar5,1,&uStackX_8);
      lVar5 = param_1[0x1b];
      uStackX_8 = (longlong *)param_1[0x22];
      if (uStackX_8 != (longlong *)0x0) {
        (**(code **)(*uStackX_8 + 0x28))();
      }
      FUN_180544860(lVar5,3,&uStackX_8);
      lVar5 = param_1[0x1b];
      uStackX_8 = (longlong *)param_1[0x23];
      if (uStackX_8 != (longlong *)0x0) {
        (**(code **)(*uStackX_8 + 0x28))();
      }
      FUN_180544860(lVar5,2,&uStackX_8);
      lVar5 = param_1[0x31];
      uVar2 = *(undefined4 *)(lVar5 + 0x10);
      uVar3 = *(undefined4 *)(lVar5 + 0x14);
      uVar1 = *(undefined4 *)(lVar5 + 0x53c);
      if ((param_6 != '\0') || (param_7 != '\0')) {
        alStack_e8[0] = 0;
        alStack_e8[1] = 0;
        alStack_e8[2] = 0;
        uStack_d0 = 3;
        if (param_7 != '\0') {
          uVar9 = func_0x0001804bb9d0(uVar2,uVar3,uVar1);
          uStackX_8 = (longlong *)CONCAT44(uStackX_8._4_4_,uVar9);
          puVar10 = (undefined8 *)0x180c95e98;
          puVar6 = _DAT_180c95ea8;
          while (puVar6 != (undefined8 *)0x0) {
            if (*(uint *)(puVar6 + 4) < uVar9) {
              puVar6 = (undefined8 *)*puVar6;
            }
            else {
              puVar10 = puVar6;
              puVar6 = (undefined8 *)puVar6[1];
            }
          }
          if ((puVar10 == (undefined8 *)0x180c95e98) || (uVar9 < *(uint *)(puVar10 + 4))) {
            puVar10 = (undefined8 *)FUN_1804c0610(0x180c95e98,auStack_70);
            puVar10 = (undefined8 *)*puVar10;
          }
          lVar5 = puVar10[5];
          lVar13 = (longlong)*(int *)(lVar5 + 0x298);
          FUN_1800e8140(alStack_e8,lVar13);
          lVar8 = param_1[0x2f];
          param_2 = plStackX_10;
          if (0 < lVar13) {
            lVar12 = 0;
            lVar11 = 0x3c;
            do {
              fVar14 = *(float *)(lVar11 + param_1[0x31]);
              if (((int)lVar8 == 5) &&
                 (*(char *)(lVar12 + 0x51 + *(longlong *)(lVar5 + 0x290)) != '\0')) {
                fVar14 = 0.0;
              }
              lVar7 = *(longlong *)(lVar5 + 0x290);
              fVar14 = (*(float *)(lVar12 + 0x4c + lVar7) - *(float *)(lVar12 + 0x48 + lVar7)) *
                       fVar14 + *(float *)(lVar12 + 0x48 + lVar7);
              if (fVar14 != 0.0) {
                uStackX_8 = (longlong *)CONCAT44(fVar14,*(undefined4 *)(lVar12 + 0x44 + lVar7));
                FUN_18005ea90(alStack_e8,&uStackX_8);
              }
              lVar11 = lVar11 + 4;
              lVar12 = lVar12 + 0xa8;
              lVar13 = lVar13 + -1;
              param_4 = plStackX_20;
              param_2 = plStackX_10;
            } while (lVar13 != 0);
          }
        }
        FUN_1805443d0(param_1[0x1b],uVar2,uVar3,uVar1,alStack_e8);
        if (alStack_e8[0] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      FUN_180544ac0(param_1[0x1b]);
    }
    uStackX_8 = (longlong *)param_1[0x33];
    param_1[0x33] = 0;
    if (uStackX_8 != (longlong *)0x0) {
      (**(code **)(*uStackX_8 + 0x38))();
    }
    *(undefined4 *)((longlong)param_1 + 0x154) = 2;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_bc = 0xffffffff;
    uStack_b8 = 1;
    uStack_b6 = 0;
    uStack_b4 = 0xffffffff;
    uStack_b0 = 1;
    uStack_a8 = 0;
    uStackX_8 = alStack_a0;
    alStack_a0[0] = 0;
    alStack_a0[1] = 0;
    alStack_a0[2] = 0;
    uStack_88 = 3;
    uStack_80 = 0;
    (**(code **)(*param_1 + 0x1a8))(param_1,&uStack_c8);
    uStackX_8 = alStack_a0;
    if (alStack_a0[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x38))();
    }
    if ((longlong *)*param_3 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_3 + 0x38))();
    }
    if ((longlong *)*param_4 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_4 + 0x38))();
    }
    param_5 = (longlong *)*param_5;
  }
  else {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x38))();
    }
    if ((longlong *)*param_3 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_3 + 0x38))();
    }
    if ((longlong *)*param_4 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_4 + 0x38))();
    }
    param_5 = (longlong *)*param_5;
  }
  if (param_5 != (longlong *)0x0) {
    (**(code **)(*param_5 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180549230(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
  plVar3 = (longlong *)FUN_180275090(uVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)param_1[0x20];
  param_1[0x20] = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  (**(code **)(*(longlong *)param_1[0x20] + 0x1e8))
            ((longlong *)param_1[0x20],param_2,*(undefined8 *)(param_3 + 0x6a8));
  if (*(longlong *)(param_3 + 0x6b0) != 0) {
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
    plVar3 = (longlong *)FUN_180275090(uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = (longlong *)param_1[0x22];
    param_1[0x22] = (longlong)plVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    (**(code **)(*(longlong *)param_1[0x22] + 0x1e8))
              ((longlong *)param_1[0x22],param_2,*(undefined8 *)(param_3 + 0x6b0));
  }
  if (*(longlong *)(param_3 + 0x6b8) != 0) {
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
    plVar3 = (longlong *)FUN_180275090(uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = (longlong *)param_1[0x21];
    param_1[0x21] = (longlong)plVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    (**(code **)(*(longlong *)param_1[0x21] + 0x1e8))
              ((longlong *)param_1[0x21],param_2,*(undefined8 *)(param_3 + 0x6b8));
  }
  if (*(longlong *)(param_3 + 0x6c0) != 0) {
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
    plVar3 = (longlong *)FUN_180275090(uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = (longlong *)param_1[0x23];
    param_1[0x23] = (longlong)plVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    (**(code **)(*(longlong *)param_1[0x23] + 0x1e8))
              ((longlong *)param_1[0x23],param_2,*(undefined8 *)(param_3 + 0x6c0));
  }
  if ((undefined *)*param_1 == &UNK_180a34228) {
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
  }
  else {
    (**(code **)((undefined *)*param_1 + 0x28))(param_1);
  }
  (**(code **)(*param_1 + 0x1f0))(param_1,param_2,param_3,0,2);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180549480(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
void FUN_180549480(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  uint param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar12 = 0;
  uVar9 = param_5 >> 1;
  if (((uVar9 & 1) == 0) && ((*(byte *)(param_3 + 0xb0) & 1) == 0)) {
LAB_180549514:
    if ((*(byte *)(param_3 + 0xb0) & 2) != 0) goto LAB_18054951d;
LAB_180549556:
    if ((*(byte *)(param_3 + 0xb0) & 0x10) != 0) goto LAB_18054955f;
LAB_180549598:
    if ((*(byte *)(param_3 + 0xb0) & 4) != 0) goto LAB_1805495a1;
LAB_1805495da:
    if ((*(byte *)(param_3 + 0xb0) & 8) == 0) goto LAB_180549617;
  }
  else {
    (**(code **)(*param_1 + 0x148))(param_1,param_3 + 0xb4);
    lVar6 = *(longlong *)(param_3 + 0xfc);
    param_1[0x24] = *(longlong *)(param_3 + 0xf4);
    param_1[0x25] = lVar6;
    uVar3 = *(undefined4 *)(param_3 + 0x108);
    uVar4 = *(undefined4 *)(param_3 + 0x10c);
    uVar5 = *(undefined4 *)(param_3 + 0x110);
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_3 + 0x104);
    *(undefined4 *)((longlong)param_1 + 0x134) = uVar3;
    *(undefined4 *)(param_1 + 0x27) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x13c) = uVar5;
    uVar3 = *(undefined4 *)(param_3 + 0x118);
    uVar4 = *(undefined4 *)(param_3 + 0x11c);
    uVar5 = *(undefined4 *)(param_3 + 0x120);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x114);
    *(undefined4 *)((longlong)param_1 + 0x144) = uVar3;
    *(undefined4 *)(param_1 + 0x29) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x14c) = uVar5;
    *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_3 + 0x124);
    if ((uVar9 & 1) == 0) goto LAB_180549514;
LAB_18054951d:
    plVar1 = (longlong *)param_1[0x20];
    if (plVar1 != (longlong *)0x0) {
      uVar11 = uVar12;
      if (param_4 != 0) {
        uVar11 = *(undefined8 *)(param_4 + 0x6a8);
      }
      (**(code **)(*plVar1 + 0x1f0))(plVar1,param_2,*(undefined8 *)(param_3 + 0x6a8),uVar11,param_5)
      ;
    }
    if ((uVar9 & 1) == 0) goto LAB_180549556;
LAB_18054955f:
    plVar1 = (longlong *)param_1[0x23];
    if (plVar1 != (longlong *)0x0) {
      uVar11 = uVar12;
      if (param_4 != 0) {
        uVar11 = *(undefined8 *)(param_4 + 0x6c0);
      }
      (**(code **)(*plVar1 + 0x1f0))(plVar1,param_2,*(undefined8 *)(param_3 + 0x6c0),uVar11,param_5)
      ;
    }
    if ((uVar9 & 1) == 0) goto LAB_180549598;
LAB_1805495a1:
    plVar1 = (longlong *)param_1[0x22];
    if (plVar1 != (longlong *)0x0) {
      uVar11 = uVar12;
      if (param_4 != 0) {
        uVar11 = *(undefined8 *)(param_4 + 0x6b0);
      }
      (**(code **)(*plVar1 + 0x1f0))(plVar1,param_2,*(undefined8 *)(param_3 + 0x6b0),uVar11,param_5)
      ;
    }
    if ((uVar9 & 1) == 0) goto LAB_1805495da;
  }
  plVar1 = (longlong *)param_1[0x21];
  if (plVar1 != (longlong *)0x0) {
    if (param_4 != 0) {
      uVar12 = *(undefined8 *)(param_4 + 0x6b8);
    }
    (**(code **)(*plVar1 + 0x1f0))(plVar1,param_2,*(undefined8 *)(param_3 + 0x6b8),uVar12,param_5);
  }
LAB_180549617:
  plVar1 = param_1 + 0x1c;
  FUN_1800b8500(plVar1);
  if ((ulonglong)(param_1[0x1e] - *plVar1 >> 3) < 4) {
    plVar7 = (longlong *)FUN_18062b420(_DAT_180c8ed18,0x20,(char)param_1[0x1f]);
    plVar2 = (longlong *)param_1[0x1d];
    plVar10 = (longlong *)*plVar1;
    plVar8 = plVar7;
    if (plVar10 != plVar2) {
      do {
        *plVar8 = *plVar10;
        plVar8 = plVar8 + 1;
        *plVar10 = 0;
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar2);
      plVar2 = (longlong *)param_1[0x1d];
      plVar10 = (longlong *)*plVar1;
      if (plVar10 != plVar2) {
        do {
          if ((longlong *)*plVar10 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar10 + 0x38))();
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar2);
        plVar10 = (longlong *)*plVar1;
      }
    }
    if (plVar10 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar10);
    }
    *plVar1 = (longlong)plVar7;
    param_1[0x1e] = (longlong)(plVar7 + 4);
    param_1[0x1d] = (longlong)plVar8;
  }
  if (param_1[0x20] != 0) {
    FUN_1800b88d0(plVar1);
  }
  if (param_1[0x23] != 0) {
    FUN_1800b88d0(plVar1);
  }
  if (param_1[0x22] != 0) {
    FUN_1800b88d0(plVar1);
  }
  if (param_1[0x21] != 0) {
    FUN_1800b88d0(plVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180549730(longlong param_1,undefined8 param_2)
void FUN_180549730(longlong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x6d0,8,3);
  lVar6 = FUN_18054b820(uVar5,1);
  *(undefined4 *)(lVar6 + 0xb0) = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(lVar6 + 0xf4) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(lVar6 + 0xfc) = uVar5;
  uVar4 = *(undefined4 *)(param_1 + 0x134);
  uVar2 = *(undefined4 *)(param_1 + 0x138);
  uVar3 = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(lVar6 + 0x104) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(lVar6 + 0x108) = uVar4;
  *(undefined4 *)(lVar6 + 0x10c) = uVar2;
  *(undefined4 *)(lVar6 + 0x110) = uVar3;
  uVar4 = *(undefined4 *)(param_1 + 0x144);
  uVar2 = *(undefined4 *)(param_1 + 0x148);
  uVar3 = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(lVar6 + 0x114) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(lVar6 + 0x118) = uVar4;
  *(undefined4 *)(lVar6 + 0x11c) = uVar2;
  *(undefined4 *)(lVar6 + 0x120) = uVar3;
  *(undefined4 *)(lVar6 + 0x124) = *(undefined4 *)(param_1 + 0x150);
  puVar1 = (undefined *)**(undefined8 **)(param_1 + 0x100);
  if (puVar1 == &UNK_180a169b8) {
    puVar7 = *(undefined8 **)(param_1 + 0x100) + 0x66;
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(puVar1 + 0x158))();
  }
  uVar5 = puVar7[1];
  *(undefined8 *)(lVar6 + 0xb4) = *puVar7;
  *(undefined8 *)(lVar6 + 0xbc) = uVar5;
  uVar5 = puVar7[3];
  *(undefined8 *)(lVar6 + 0xc4) = puVar7[2];
  *(undefined8 *)(lVar6 + 0xcc) = uVar5;
  uVar4 = *(undefined4 *)((longlong)puVar7 + 0x24);
  uVar2 = *(undefined4 *)(puVar7 + 5);
  uVar3 = *(undefined4 *)((longlong)puVar7 + 0x2c);
  *(undefined4 *)(lVar6 + 0xd4) = *(undefined4 *)(puVar7 + 4);
  *(undefined4 *)(lVar6 + 0xd8) = uVar4;
  *(undefined4 *)(lVar6 + 0xdc) = uVar2;
  *(undefined4 *)(lVar6 + 0xe0) = uVar3;
  uVar4 = *(undefined4 *)((longlong)puVar7 + 0x34);
  uVar2 = *(undefined4 *)(puVar7 + 7);
  uVar3 = *(undefined4 *)((longlong)puVar7 + 0x3c);
  *(undefined4 *)(lVar6 + 0xe4) = *(undefined4 *)(puVar7 + 6);
  *(undefined4 *)(lVar6 + 0xe8) = uVar4;
  *(undefined4 *)(lVar6 + 0xec) = uVar2;
  *(undefined4 *)(lVar6 + 0xf0) = uVar3;
  *(undefined4 *)(lVar6 + 0x6a4) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(lVar6 + 0x6a0) = *(undefined4 *)(param_1 + 0x174);
  uVar4 = FUN_18032b4a0(param_2,*(undefined8 *)(param_1 + 0x180));
  *(undefined4 *)(lVar6 + 0x128) = uVar4;
                    // WARNING: Subroutine does not return
  memcpy(lVar6 + 300,*(undefined8 *)(param_1 + 0x188),0x570);
}





// 函数: void FUN_1805498e0(longlong param_1,longlong param_2)
void FUN_1805498e0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_180337990();
  *(undefined4 *)(param_1 + 0xb0) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xb4) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xb8) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xbc) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xc0) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xc4) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 200) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xcc) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xd0) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xd4) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xd8) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xdc) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xe0) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xe4) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xe8) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xec) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xf0) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xf4) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xf8) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0xfc) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0x100) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0x104) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0x108) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0x10c) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0x110) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0x114) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0x118) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0x11c) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0x120) = **(undefined4 **)(param_2 + 8);
  puVar1 = (undefined4 *)(*(longlong *)(param_2 + 8) + 4);
  *(undefined4 **)(param_2 + 8) = puVar1;
  *(undefined4 *)(param_1 + 0x124) = *puVar1;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  *(undefined4 *)(param_1 + 0x128) = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
                    // WARNING: Subroutine does not return
  memcpy(param_1 + 300,*(undefined8 *)(param_2 + 8),0x568);
}





// 函数: void FUN_180549be0(longlong param_1,longlong *param_2)
void FUN_180549be0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  FUN_1803377b0();
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  if ((ulonglong)((param_2[2] - (longlong)puVar2) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  FUN_18063a110(param_2,param_1 + 0xb4);
  FUN_18063aca0(param_1 + 0xf4,param_2);
  puVar2 = (undefined4 *)param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 0x128);
  if ((ulonglong)((param_2[2] - (longlong)puVar2) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (4 - *param_2));
    puVar2 = (undefined4 *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  lVar3 = param_2[1];
  if ((ulonglong)((param_2[2] - lVar3) + *param_2) < 0x569) {
    FUN_180639bf0(param_2,(lVar3 - *param_2) + 0x568);
    lVar3 = param_2[1];
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar3,param_1 + 300,0x568);
}





// 函数: void FUN_180549e70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_180549e70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar2 + *(longlong *)(param_1 + 0xe0));
      (**(code **)(*plVar1 + 0x208))
                (plVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0) >> 3));
  }
  return;
}





// 函数: void FUN_180549ea5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180549ea5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  uint unaff_EDI;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined4 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined1 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined1 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBP;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RSI;
  uVar2 = (ulonglong)unaff_EDI;
  *(undefined8 *)(in_R11 + -0x20) = unaff_R12;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R13;
  *(undefined8 *)(in_R11 + -0x30) = unaff_R14;
  *(undefined8 *)(in_R11 + -0x38) = unaff_R15;
  do {
    uStack0000000000000040 = in_stack_000000d0;
    uStack0000000000000038 = in_stack_000000c8;
    uStack0000000000000030 = in_stack_000000c0;
    plVar1 = *(longlong **)(uVar2 + *(longlong *)(unaff_RBX + 0xe0));
    uStack0000000000000028 = in_stack_000000b8;
    (**(code **)(*plVar1 + 0x208))(plVar1,param_2,param_3,param_4,in_stack_000000b0);
    uVar2 = uVar2 + 8;
    unaff_EDI = unaff_EDI + 1;
    param_2 = in_stack_00000098;
    param_3 = in_stack_000000a0;
    param_4 = in_stack_000000a8;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0xe8) - *(longlong *)(unaff_RBX + 0xe0) >> 3));
  return;
}





// 函数: void FUN_180549f76(void)
void FUN_180549f76(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180549f80(longlong param_1,longlong param_2)
void FUN_180549f80(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  uint auStack_78 [4];
  longlong alStack_68 [4];
  longlong alStack_48 [4];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  cVar1 = func_0x000180285f10(param_1 + 0xb4,param_2 + 0xb4,0x38d1b717);
  if (cVar1 == '\0') {
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | 1;
  }
  cVar1 = func_0x000180274d30(param_1 + 0xf4,param_2 + 0xf4);
  if (cVar1 == '\0') {
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | 1;
  }
  puVar3 = auStack_78;
  alStack_68[0] = *(longlong *)(param_1 + 0x6a8);
  lVar4 = 4;
  lVar2 = 0;
  alStack_68[1] = *(undefined8 *)(param_1 + 0x6b0);
  alStack_68[2] = *(undefined8 *)(param_1 + 0x6b8);
  alStack_68[3] = *(undefined8 *)(param_1 + 0x6c0);
  alStack_48[0] = *(longlong *)(param_2 + 0x6a8);
  alStack_48[1] = *(undefined8 *)(param_2 + 0x6b0);
  alStack_48[2] = *(undefined8 *)(param_2 + 0x6b8);
  alStack_48[3] = *(undefined8 *)(param_2 + 0x6c0);
  auStack_78[0] = 2;
  auStack_78[1] = 4;
  auStack_78[2] = 8;
  auStack_78[3] = 0x10;
  do {
    if (*(longlong **)((longlong)alStack_68 + lVar2) == (longlong *)0x0) {
      if (*(longlong *)((longlong)alStack_48 + lVar2) != 0) {
LAB_18054a0a6:
        *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | *puVar3;
      }
    }
    else if ((*(longlong *)((longlong)alStack_48 + lVar2) == 0) ||
            (cVar1 = (**(code **)(**(longlong **)((longlong)alStack_68 + lVar2) + 0x28))(),
            cVar1 != '\0')) goto LAB_18054a0a6;
    lVar2 = lVar2 + 8;
    puVar3 = puVar3 + 1;
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_98);
    }
  } while( true );
}





// 函数: void FUN_18054a0f0(longlong param_1,undefined8 param_2,undefined8 param_3)
void FUN_18054a0f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  if (*(longlong **)(param_1 + 0x6a8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x6a8) + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x6b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  plVar1 = *(longlong **)(param_1 + 0x6b0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  plVar1 = *(longlong **)(param_1 + 0x6c0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  return;
}





// 函数: void FUN_18054a180(longlong param_1)
void FUN_18054a180(longlong param_1)

{
  FUN_1800b8500(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1800b88d0(param_1 + 0xe0,param_1 + 0x100);
    (**(code **)(**(longlong **)(param_1 + 0x100) + 0x1e0))
              (*(longlong **)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x28));
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1800b88d0(param_1 + 0xe0,param_1 + 0x108);
    (**(code **)(**(longlong **)(param_1 + 0x108) + 0x1e0))
              (*(longlong **)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x28));
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1800b88d0(param_1 + 0xe0,param_1 + 0x110);
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0x1e0))
              (*(longlong **)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x28));
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1800b88d0(param_1 + 0xe0,param_1 + 0x118);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x1e0))
              (*(longlong **)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x28));
  }
  return;
}



undefined8 *
FUN_18054a280(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,9,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined8 *)param_2[1];
  *puVar1 = 0x73656d5f65636146;
  *(undefined2 *)(puVar1 + 1) = 0x68;
  *(undefined4 *)(param_2 + 2) = 9;
  return param_2;
}





