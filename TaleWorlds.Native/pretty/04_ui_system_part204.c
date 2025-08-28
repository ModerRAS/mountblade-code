#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part204.c - 4 个函数

// 函数: void FUN_1807880d0(longlong *param_1,undefined8 param_2,int param_3)
void FUN_1807880d0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)((longlong)param_1 + 0x14) < param_3) {
                    // WARNING: Subroutine does not return
    memset(param_2,0,(longlong)param_3);
  }
  if ((*(int *)((longlong)param_1 + 0x2c) - (int)param_1[5]) * (int)param_1[3] < param_3) {
                    // WARNING: Subroutine does not return
    memset(param_2,0,(longlong)param_3);
  }
  iVar1 = (int)param_1[4] * (int)param_1[3];
  if (*(int *)((longlong)param_1 + 0x14) < iVar1 + param_3) {
                    // WARNING: Subroutine does not return
    memcpy(param_2,(longlong)iVar1 + *param_1,(longlong)(*(int *)((longlong)param_1 + 0x14) - iVar1)
          );
  }
                    // WARNING: Subroutine does not return
  memcpy(param_2,(longlong)iVar1 + *param_1,(longlong)param_3);
}



undefined8 FUN_1807881c0(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int aiStackX_10 [4];
  uint auStackX_20 [2];
  longlong *plVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint *puVar15;
  undefined8 uVar16;
  uint uStack_68;
  uint uStack_64;
  int aiStack_60 [2];
  ulonglong uStack_58;
  longlong alStack_50 [3];
  undefined4 uVar14;
  undefined4 uVar17;
  
  uStack_58 = 0;
  alStack_50[0] = 0;
  auStackX_20[0] = 0;
  uStack_68 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0xa0))
                    (*(longlong **)(param_2 + 0x40),0,&uStack_64,aiStackX_10,0);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x98))
                    (*(longlong **)(param_2 + 0x40),aiStack_60,2);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (uStack_64 == 1) {
    iVar4 = 1;
  }
  else if (uStack_64 == 2) {
    iVar4 = 2;
  }
  else if (uStack_64 == 3) {
    iVar4 = 3;
  }
  else if ((uStack_64 == 4) || (uStack_64 == 5)) {
    iVar4 = 4;
  }
  else {
    iVar4 = 1;
  }
  uVar5 = iVar4 * aiStackX_10[0];
  uVar9 = (ulonglong)
          (((float)param_3 * *(float *)(*(longlong *)(param_2 + 0x40) + 0x6c)) /
          (float)*(int *)(param_2 + 0x1c));
  uVar8 = (uint)uVar9;
  do {
    if (uVar8 == 0) {
LAB_180788506:
      lVar2 = *(longlong *)(param_1 + 0x48);
      if ((*(longlong *)(lVar2 + 0x11838) != 0) && ((*(uint *)(lVar2 + 0x11840) & 0x10000) != 0)) {
        uVar1 = FUN_180743cc0(lVar2,1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar2 = *(longlong *)(param_1 + 0x48);
        (**(code **)(lVar2 + 0x11838))
                  (lVar2,0x10000,*(undefined8 *)(param_2 + 0x40),(longlong)*(int *)(param_2 + 0x34),
                   *(undefined8 *)(lVar2 + 0x11670));
        uVar1 = FUN_180743da0(*(undefined8 *)(param_1 + 0x48));
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      return 0;
    }
    uVar8 = *(uint *)(param_2 + 0x34);
    uVar7 = uVar9 & 0xffffffff;
    if (0x800 < (uint)uVar9) {
      uVar7 = 0x800;
    }
    if (uStack_64 == 1) {
      lVar2 = 8;
LAB_180788319:
      uVar8 = (uint)((ulonglong)uVar8 * lVar2 >> 3);
    }
    else {
      if (uStack_64 == 2) {
        lVar2 = 0x10;
        goto LAB_180788319;
      }
      if (uStack_64 == 3) {
        lVar2 = 0x18;
        goto LAB_180788319;
      }
      if ((uStack_64 == 4) || (uStack_64 == 5)) {
        lVar2 = 0x20;
        goto LAB_180788319;
      }
    }
    iVar4 = uVar8 * aiStackX_10[0];
    iVar6 = (int)uVar7;
    if (uStack_64 == 1) {
      lVar2 = 8;
LAB_18078835d:
      iVar3 = (int)(uVar7 * lVar2 >> 3);
    }
    else {
      if (uStack_64 == 2) {
        lVar2 = 0x10;
        goto LAB_18078835d;
      }
      if (uStack_64 == 3) {
        lVar2 = 0x18;
        goto LAB_18078835d;
      }
      if ((uStack_64 == 4) || (iVar3 = iVar6, uStack_64 == 5)) {
        lVar2 = 0x20;
        goto LAB_18078835d;
      }
    }
    iVar3 = iVar3 * aiStackX_10[0];
    if (*(longlong *)(param_2 + 0x48) == 0) {
      uVar1 = FUN_1807885a0(param_1,param_2,*(undefined8 *)(param_2 + 0x38),uVar7);
    }
    else {
      *(longlong *)(param_1 + 800) = param_2;
      uVar1 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x48))
                        (*(longlong **)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x38),aiStackX_10)
      ;
    }
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    puVar15 = &uStack_68;
    puVar12 = auStackX_20;
    plVar10 = alStack_50;
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x28))
                      (*(longlong **)(param_2 + 0x40),iVar4,iVar3,&uStack_58,plVar10,puVar12,puVar15
                      );
    uVar11 = (undefined4)((ulonglong)plVar10 >> 0x20);
    uVar14 = (undefined4)((ulonglong)puVar12 >> 0x20);
    uVar17 = (undefined4)((ulonglong)puVar15 >> 0x20);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    lVar2 = *(longlong *)(param_2 + 0x38);
    if ((uStack_58 != 0) && (auStackX_20[0] != 0)) {
      uVar16 = CONCAT44(uVar17,1);
      uVar13 = CONCAT44(uVar14,1);
      uVar1 = CONCAT44(uVar11,(auStackX_20[0] / uVar5) * aiStackX_10[0]);
      FUN_1807edf30(uStack_58,lVar2,uStack_64,5,uVar1,uVar13,uVar16,0x3f800000,1);
      uVar11 = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
      lVar2 = lVar2 + (ulonglong)((auStackX_20[0] / uVar5) * aiStackX_10[0]) * 4;
    }
    if ((alStack_50[0] != 0) && (uStack_68 != 0)) {
      uVar1 = CONCAT44(uVar11,(uStack_68 / uVar5) * aiStackX_10[0]);
      FUN_1807edf30(alStack_50[0],lVar2,uStack_64,5,uVar1,CONCAT44(uVar14,1),CONCAT44(uVar17,1),
                    0x3f800000,1);
      uVar11 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x30))
                      (*(longlong **)(param_2 + 0x40),uStack_58,alStack_50[0],auStackX_20[0],
                       CONCAT44(uVar11,uStack_68));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    iVar4 = *(int *)(param_2 + 0x34) + iVar6;
    if ((uStack_68 != 0) || (aiStack_60[0] <= iVar4)) {
      if (*(char *)(param_2 + 0x30) == '\0') {
        *(undefined1 *)(param_2 + 0x31) = 1;
        goto LAB_180788506;
      }
      iVar4 = iVar4 - aiStack_60[0];
      if (iVar4 < 0) {
        iVar4 = 0;
      }
    }
    *(int *)(param_2 + 0x34) = iVar4;
    uVar8 = (uint)uVar9 - iVar6;
    uVar9 = (ulonglong)uVar8;
  } while( true );
}



undefined8 FUN_180788231(int param_1,int param_2)

{
  int in_EAX;
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int iVar4;
  longlong unaff_RDI;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong unaff_R13;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  
  if (param_1 == 1) {
    iVar8 = 1;
  }
  else if (param_1 == 2) {
    iVar8 = 2;
  }
  else if (param_1 == 3) {
    iVar8 = 3;
  }
  else if ((param_1 == 4) || (param_1 == 5)) {
    iVar8 = 4;
  }
  else {
    iVar8 = in_EAX + 1;
  }
  iVar3 = *(int *)(unaff_RBP + 0x6f);
  uVar9 = iVar8 * iVar3;
  uVar12 = (ulonglong)
           (((float)unaff_RDI * *(float *)(*(longlong *)(unaff_RBX + 0x40) + 0x6c)) /
           (float)*(int *)(unaff_RBX + 0x1c));
  if ((int)uVar12 == 0) {
LAB_180788506:
    lVar1 = *(longlong *)(unaff_R13 + 0x48);
    if ((*(longlong *)(lVar1 + 0x11838) != 0) && ((*(uint *)(lVar1 + 0x11840) & 0x10000) != 0)) {
      uVar2 = FUN_180743cc0(lVar1,1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      lVar1 = *(longlong *)(unaff_R13 + 0x48);
      (**(code **)(lVar1 + 0x11838))
                (lVar1,0x10000,*(undefined8 *)(unaff_RBX + 0x40),
                 (longlong)*(int *)(unaff_RBX + 0x34),*(undefined8 *)(lVar1 + 0x11670));
      uVar2 = FUN_180743da0(*(undefined8 *)(unaff_R13 + 0x48));
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    return 0;
  }
  do {
    uVar11 = *(uint *)(unaff_RBX + 0x34);
    uVar10 = uVar12 & 0xffffffff;
    if (0x800 < (uint)uVar12) {
      uVar10 = 0x800;
    }
    if (param_2 == 1) {
      lVar1 = 8;
LAB_180788319:
      uVar11 = (uint)((ulonglong)uVar11 * lVar1 >> 3);
    }
    else {
      if (param_2 == 2) {
        lVar1 = 0x10;
        goto LAB_180788319;
      }
      if (param_2 == 3) {
        lVar1 = 0x18;
        goto LAB_180788319;
      }
      if ((param_2 == 4) || (param_2 == 5)) {
        lVar1 = 0x20;
        goto LAB_180788319;
      }
    }
    iVar8 = (int)uVar10;
    if (param_2 == 1) {
      lVar1 = 8;
LAB_18078835d:
      iVar4 = (int)(uVar10 * lVar1 >> 3);
    }
    else {
      if (param_2 == 2) {
        lVar1 = 0x10;
        goto LAB_18078835d;
      }
      if (param_2 == 3) {
        lVar1 = 0x18;
        goto LAB_18078835d;
      }
      if ((param_2 == 4) || (iVar4 = iVar8, param_2 == 5)) {
        lVar1 = 0x20;
        goto LAB_18078835d;
      }
    }
    if (*(longlong *)(unaff_RBX + 0x48) == 0) {
      uVar2 = FUN_1807885a0();
    }
    else {
      *(longlong *)(unaff_R13 + 800) = unaff_RBX;
      uVar2 = (**(code **)(**(longlong **)(unaff_RBX + 0x48) + 0x48))
                        (*(longlong **)(unaff_RBX + 0x48),*(undefined8 *)(unaff_RBX + 0x38),
                         unaff_RBP + 0x6f);
    }
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar1 = unaff_RBP + 0xf;
    uVar2 = (**(code **)(**(longlong **)(unaff_RBX + 0x40) + 0x28))
                      (*(longlong **)(unaff_RBX + 0x40),uVar11 * iVar3,iVar4 * iVar3,unaff_RBP + 7,
                       lVar1);
    uVar13 = (undefined4)((ulonglong)lVar1 >> 0x20);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar7 = *(longlong *)(unaff_RBP + 7);
    lVar1 = *(longlong *)(unaff_RBX + 0x38);
    uVar11 = *(uint *)(unaff_RBP + 0x7f);
    if ((lVar7 != 0) && (uVar11 != 0)) {
      uVar2 = CONCAT44(uVar13,(uVar11 / uVar9) * *(int *)(unaff_RBP + 0x6f));
      FUN_1807edf30(lVar7,lVar1,*(undefined4 *)(unaff_RBP + -5),5,uVar2);
      uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
      uVar11 = *(uint *)(unaff_RBP + 0x7f);
      lVar7 = *(longlong *)(unaff_RBP + 7);
      lVar1 = lVar1 + (ulonglong)((uVar11 / uVar9) * *(int *)(unaff_RBP + 0x6f)) * 4;
    }
    lVar6 = *(longlong *)(unaff_RBP + 0xf);
    uVar5 = *(uint *)(unaff_RBP + -9);
    if ((lVar6 != 0) && (uVar5 != 0)) {
      uVar2 = CONCAT44(uVar13,(uVar5 / uVar9) * *(int *)(unaff_RBP + 0x6f));
      FUN_1807edf30(lVar6,lVar1,*(undefined4 *)(unaff_RBP + -5),5,uVar2);
      uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
      lVar7 = *(longlong *)(unaff_RBP + 7);
      lVar6 = *(longlong *)(unaff_RBP + 0xf);
      uVar11 = *(uint *)(unaff_RBP + 0x7f);
      uVar5 = *(uint *)(unaff_RBP + -9);
    }
    uVar2 = (**(code **)(**(longlong **)(unaff_RBX + 0x40) + 0x30))
                      (*(longlong **)(unaff_RBX + 0x40),lVar7,lVar6,uVar11,CONCAT44(uVar13,uVar5));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    iVar3 = *(int *)(unaff_RBX + 0x34) + iVar8;
    if ((*(int *)(unaff_RBP + -9) != 0) || (*(int *)(unaff_RBP + -1) <= iVar3)) {
      if (*(char *)(unaff_RBX + 0x30) == '\0') {
        *(undefined1 *)(unaff_RBX + 0x31) = 1;
        goto LAB_180788506;
      }
      iVar3 = iVar3 - *(int *)(unaff_RBP + -1);
      if (iVar3 < 0) {
        iVar3 = 0;
      }
    }
    *(int *)(unaff_RBX + 0x34) = iVar3;
    uVar11 = (uint)uVar12 - iVar8;
    uVar12 = (ulonglong)uVar11;
    if (uVar11 == 0) goto LAB_180788506;
    iVar3 = *(int *)(unaff_RBP + 0x6f);
    param_2 = *(int *)(unaff_RBP + -5);
  } while( true );
}





// 函数: void FUN_180788586(void)
void FUN_180788586(void)

{
  return;
}



undefined8 FUN_1807885a0(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint auStackX_10 [2];
  longlong lStackX_18;
  uint auStackX_20 [2];
  byte **ppbVar15;
  undefined4 uVar16;
  byte **ppbVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  uint *puVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  uint *puVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  byte *pbStack_78;
  byte *pbStack_70;
  longlong lStack_68;
  
  uVar14 = (ulonglong)param_4;
  lVar11 = *(longlong *)(param_2 + 0x58);
  lStackX_18 = lVar11;
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lStackX_18 = param_3;
  }
  if (param_4 != 0) {
    lStack_68 = param_1 + 8;
    if (param_1 == 0) {
      lStack_68 = 0;
    }
    do {
      uVar6 = 0;
      iVar1 = *(int *)(param_2 + 0x18);
      if (iVar1 == 1) {
        uVar12 = 8;
      }
      else if (iVar1 == 2) {
        uVar12 = 0x10;
      }
      else if (iVar1 == 3) {
        uVar12 = 0x18;
      }
      else if ((iVar1 == 4) || (uVar12 = uVar6, iVar1 == 5)) {
        uVar12 = 0x20;
      }
      uVar13 = *(uint *)(param_2 + 0x14);
      if (iVar1 == 1) {
        lVar4 = 8;
LAB_18078869c:
        uVar13 = (uint)((ulonglong)uVar13 * lVar4 >> 3);
      }
      else {
        if (iVar1 == 2) {
          lVar4 = 0x10;
          goto LAB_18078869c;
        }
        if (iVar1 == 3) {
          lVar4 = 0x18;
          goto LAB_18078869c;
        }
        if ((iVar1 == 4) || (iVar1 == 5)) {
          lVar4 = 0x20;
          goto LAB_18078869c;
        }
      }
      if (iVar1 == 1) {
        lVar4 = 8;
LAB_1807886e0:
        iVar7 = (int)(uVar14 * lVar4 >> 3);
      }
      else {
        if (iVar1 == 2) {
          lVar4 = 0x10;
          goto LAB_1807886e0;
        }
        if (iVar1 == 3) {
          lVar4 = 0x18;
          goto LAB_1807886e0;
        }
        if ((iVar1 == 4) || (iVar7 = (int)uVar14, iVar1 == 5)) {
          lVar4 = 0x20;
          goto LAB_1807886e0;
        }
      }
      puVar23 = auStackX_10;
      puVar20 = auStackX_20;
      pbStack_70 = (byte *)0x0;
      ppbVar17 = &pbStack_78;
      pbStack_78 = (byte *)0x0;
      ppbVar15 = &pbStack_70;
      auStackX_20[0] = 0;
      auStackX_10[0] = 0;
      uVar5 = (**(code **)(param_1 + 0x408))
                        (lStack_68,param_2,uVar13 * *(int *)(param_2 + 0x20),
                         *(int *)(param_2 + 0x20) * iVar7,ppbVar15,ppbVar17,puVar20,puVar23);
      uVar16 = (undefined4)((ulonglong)ppbVar15 >> 0x20);
      uVar19 = (undefined4)((ulonglong)ppbVar17 >> 0x20);
      uVar22 = (undefined4)((ulonglong)puVar20 >> 0x20);
      uVar25 = (undefined4)((ulonglong)puVar23 >> 0x20);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar13 = 0;
      if (*(uint *)(param_2 + 0x20) != 0) {
        iVar1 = *(int *)(param_2 + 0x18);
        if (iVar1 == 1) {
          uVar9 = 8;
        }
        else if (iVar1 == 2) {
          uVar9 = 0x10;
        }
        else if (iVar1 == 3) {
          uVar9 = 0x18;
        }
        else {
          if ((iVar1 != 4) && (uVar13 = auStackX_10[0] + auStackX_20[0], iVar1 != 5))
          goto LAB_180788799;
          uVar9 = 0x20;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar9;
        uVar13 = (uint)((SUB168((ZEXT416(auStackX_10[0] + auStackX_20[0]) << 3) / auVar3,0) &
                        0xffffffff) / (ulonglong)*(uint *)(param_2 + 0x20));
      }
LAB_180788799:
      if (*(int *)(param_2 + 0x18) == 1) {
        if ((pbStack_70 != (byte *)0x0) &&
           (uVar9 = uVar6, pbVar10 = pbStack_70, auStackX_20[0] != 0)) {
          do {
            *pbVar10 = *pbVar10 ^ 0x80;
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
            pbVar10 = pbVar10 + 1;
          } while (uVar8 < auStackX_20[0]);
        }
        if ((pbStack_78 != (byte *)0x0) && (pbVar10 = pbStack_78, auStackX_10[0] != 0)) {
          do {
            *pbVar10 = *pbVar10 ^ 0x80;
            uVar8 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar8;
            pbVar10 = pbVar10 + 1;
          } while (uVar8 < auStackX_10[0]);
        }
      }
      if ((pbStack_70 != (byte *)0x0) && (auStackX_20[0] != 0)) {
        uVar6 = (auStackX_20[0] * 8) / uVar12;
        uVar24 = CONCAT44(uVar25,0x3f800000);
        uVar21 = CONCAT44(uVar22,1);
        uVar18 = CONCAT44(uVar19,1);
        uVar5 = CONCAT44(uVar16,(int)uVar6);
        FUN_1807edf30(lStackX_18,pbStack_70,5,*(undefined4 *)(param_2 + 0x18),uVar5,uVar18,uVar21,
                      uVar24,1);
        uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
        uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
        uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
        uVar25 = (undefined4)((ulonglong)uVar24 >> 0x20);
        lStackX_18 = lStackX_18 + uVar6 * 4;
      }
      if ((pbStack_78 != (byte *)0x0) && (auStackX_10[0] != 0)) {
        uVar12 = (auStackX_10[0] * 8) / uVar12;
        uVar18 = CONCAT44(uVar19,1);
        uVar5 = CONCAT44(uVar16,(int)uVar12);
        FUN_1807edf30(lStackX_18,pbStack_78,5,*(undefined4 *)(param_2 + 0x18),uVar5,uVar18,
                      CONCAT44(uVar22,1),CONCAT44(uVar25,0x3f800000),1);
        uVar16 = (undefined4)((ulonglong)uVar5 >> 0x20);
        uVar19 = (undefined4)((ulonglong)uVar18 >> 0x20);
        lStackX_18 = lStackX_18 + uVar12 * 4;
      }
      if ((*(code **)(param_1 + 0x410) != (code *)0x0) &&
         (uVar5 = (**(code **)(param_1 + 0x410))
                            (lStack_68,param_2,pbStack_70,pbStack_78,CONCAT44(uVar16,auStackX_20[0])
                             ,CONCAT44(uVar19,auStackX_10[0])), (int)uVar5 != 0)) {
        return uVar5;
      }
      plVar2 = *(longlong **)(param_2 + 0x50);
      if (plVar2 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar2 + 0x10))(plVar2,lVar11,param_3,uVar13);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        lVar11 = lVar11 + (ulonglong)(*(int *)(*(longlong *)(param_2 + 0x50) + 8) * uVar13) * 4;
        param_3 = param_3 + (ulonglong)(*(int *)(*(longlong *)(param_2 + 0x50) + 0xc) * uVar13) * 4;
      }
      *(uint *)(param_2 + 0x14) = (*(int *)(param_2 + 0x14) + uVar13) % *(uint *)(param_2 + 0x24);
      uVar13 = (int)uVar14 - uVar13;
      uVar14 = (ulonglong)uVar13;
    } while (uVar13 != 0);
  }
  return 0;
}





// 函数: void FUN_180788990(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)
void FUN_180788990(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lStackX_8;
  
  lStackX_8 = 0;
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x58))(param_1,&lStackX_8);
  if (iVar1 == 0) {
    FUN_1807885a0(lStackX_8,*(undefined8 *)(lStackX_8 + 800),param_2,*param_4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1807889e0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uStack_68;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong *puStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(code **)(param_1 + 0x3f0) == (code *)0x0) {
    return 0x42;
  }
  uVar2 = (**(code **)(param_1 + 0x3f0))(param_1 + 8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  puVar6 = (undefined8 *)0x0;
  if (*(int *)(param_2 + 0x20) != *(int *)(*(longlong *)(param_2 + 0x40) + 0x68)) {
    puVar3 = (undefined8 *)
             FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),200,&UNK_18095ac80,0x1da,0);
    puVar5 = puVar6;
    if (puVar3 != (undefined8 *)0x0) {
      puVar5 = puVar3 + 4;
      *puVar3 = &UNK_180957fe8;
      puVar3[5] = puVar5;
      *puVar5 = puVar5;
      puVar3[6] = 0;
      puVar5 = puVar3 + 7;
      puVar3[8] = puVar5;
      *puVar5 = puVar5;
      puVar3[9] = 0;
      puVar3[0xb] = 0;
      *(undefined4 *)(puVar3 + 10) = 0;
      puVar3[0xd] = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      puVar3[0x17] = 0;
      *(undefined4 *)(puVar3 + 0x16) = 0;
      puVar3[3] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar5 = puVar3;
    }
    *(undefined8 **)(param_2 + 0x50) = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
      return 0x26;
    }
    uVar2 = (**(code **)*puVar5)
                      (puVar5,*(undefined8 *)(param_1 + 0x48),0,0,9,*(undefined4 *)(param_2 + 0x20),
                       9,*(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x68),0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar4 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(int *)(param_2 + 0x20) << 0xd,
                          &UNK_18095ac80,0x1e7,0);
    *(longlong *)(param_2 + 0x58) = lVar4;
    if (lVar4 == 0) {
      return 0x26;
    }
  }
  lVar4 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                        *(int *)(*(longlong *)(param_2 + 0x40) + 0x68) << 0xd,&UNK_18095ac80,0x1fa,0
                       );
  *(longlong *)(param_2 + 0x38) = lVar4;
  if (lVar4 == 0) {
    return 0x26;
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if ((float)iVar1 != *(float *)(*(longlong *)(param_2 + 0x40) + 0x6c)) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_5c = 1;
    puVar5 = (undefined8 *)func_0x0001807e5100();
    uStack_58 = *puVar5;
    uStack_50 = puVar5[1];
    uStack_48 = puVar5[2];
    uStack_40 = puVar5[3];
    uStack_30 = *(undefined4 *)(puVar5 + 5);
    uStack_2c = *(undefined4 *)((longlong)puVar5 + 0x2c);
    uStack_28 = puVar5[6];
    uStack_20 = puVar5[7];
    puStack_38 = &uStack_68;
    uStack_68 = CONCAT44(*(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x68),
                         (int)((float)iVar1 * 0.01)) & 0xfffffffffffffff0;
    uStack_60 = 5;
    lVar4 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x2d8,&UNK_18095ac80,0x21a,0);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)FUN_1807e4c10(lVar4);
    }
    *(undefined8 **)(param_2 + 0x48) = puVar6;
    if (puVar6 == (undefined8 *)0x0) {
      return 0x26;
    }
    puVar6[0x15] = *(undefined8 *)(param_1 + 0x48);
    *(longlong *)(*(longlong *)(param_2 + 0x48) + 0xd8) = *(longlong *)(param_1 + 0x48) + 0x11848;
    *(undefined4 *)(*(longlong *)(param_2 + 0x48) + 0xe0) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x116b8);
    FUN_18075a230(*(undefined8 *)(param_2 + 0x48),&uStack_58);
    *(code **)(*(longlong *)(param_2 + 0x48) + 0x298) = FUN_180788990;
    *(undefined4 *)(*(longlong *)(param_2 + 0x48) + 0x230) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x6c);
    func_0x000180762de0(*(undefined8 *)(param_2 + 0x48),param_1);
    (**(code **)(**(longlong **)(param_2 + 0x48) + 0x38))();
    (**(code **)(**(longlong **)(param_2 + 0x48) + 0x28))(*(longlong **)(param_2 + 0x48),0,0,0);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180788a27(void)

{
  int iVar1;
  longlong in_RAX;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined1 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  puVar6 = (undefined8 *)0x0;
  if (*(int *)(unaff_RDI + 0x20) != *(int *)(in_RAX + 0x68)) {
    puVar2 = (undefined8 *)
             FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),200,&UNK_18095ac80,0x1da,0);
    puVar5 = puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      puVar5 = puVar2 + 4;
      *puVar2 = &UNK_180957fe8;
      puVar2[5] = puVar5;
      *puVar5 = puVar5;
      puVar2[6] = 0;
      puVar5 = puVar2 + 7;
      puVar2[8] = puVar5;
      *puVar5 = puVar5;
      puVar2[9] = 0;
      puVar2[0xb] = 0;
      *(undefined4 *)(puVar2 + 10) = 0;
      puVar2[0xd] = 0;
      *(undefined4 *)(puVar2 + 0xc) = 0;
      puVar2[0x17] = 0;
      *(undefined4 *)(puVar2 + 0x16) = 0;
      puVar2[3] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar5 = puVar2;
    }
    *(undefined8 **)(unaff_RDI + 0x50) = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
      return 0x26;
    }
    uVar3 = (**(code **)*puVar5)(puVar5,*(undefined8 *)(unaff_RSI + 0x48),0,0,9);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    lVar4 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(int *)(unaff_RDI + 0x20) << 0xd,
                          &UNK_18095ac80,0x1e7,0);
    *(longlong *)(unaff_RDI + 0x58) = lVar4;
    if (lVar4 == 0) {
      return 0x26;
    }
  }
  lVar4 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                        *(int *)(*(longlong *)(unaff_RDI + 0x40) + 0x68) << 0xd,&UNK_18095ac80,0x1fa
                        ,0);
  *(longlong *)(unaff_RDI + 0x38) = lVar4;
  if (lVar4 == 0) {
    return 0x26;
  }
  iVar1 = *(int *)(unaff_RDI + 0x1c);
  if ((float)iVar1 != *(float *)(*(longlong *)(unaff_RDI + 0x40) + 0x6c)) {
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    uStack000000000000005c = 1;
    puVar5 = (undefined8 *)func_0x0001807e5100();
    in_stack_00000060 = *puVar5;
    in_stack_00000068 = puVar5[1];
    in_stack_00000070 = puVar5[2];
    in_stack_00000078 = puVar5[3];
    in_stack_00000088 = *(undefined4 *)(puVar5 + 5);
    uStack000000000000008c = *(undefined4 *)((longlong)puVar5 + 0x2c);
    in_stack_00000090 = puVar5[6];
    in_stack_00000098 = puVar5[7];
    in_stack_00000080 = &stack0x00000050;
    in_stack_00000050 =
         CONCAT44(*(undefined4 *)(*(longlong *)(unaff_RDI + 0x40) + 0x68),(int)((float)iVar1 * 0.01)
                 ) & 0xfffffffffffffff0;
    in_stack_00000058 = 5;
    lVar4 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x2d8,&UNK_18095ac80,0x21a,0);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)FUN_1807e4c10(lVar4);
    }
    *(undefined8 **)(unaff_RDI + 0x48) = puVar6;
    if (puVar6 == (undefined8 *)0x0) {
      return 0x26;
    }
    puVar6[0x15] = *(undefined8 *)(unaff_RSI + 0x48);
    *(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0xd8) =
         *(longlong *)(unaff_RSI + 0x48) + 0x11848;
    *(undefined4 *)(*(longlong *)(unaff_RDI + 0x48) + 0xe0) =
         *(undefined4 *)(*(longlong *)(unaff_RSI + 0x48) + 0x116b8);
    FUN_18075a230(*(undefined8 *)(unaff_RDI + 0x48),&stack0x00000060);
    *(code **)(*(longlong *)(unaff_RDI + 0x48) + 0x298) = FUN_180788990;
    *(undefined4 *)(*(longlong *)(unaff_RDI + 0x48) + 0x230) =
         *(undefined4 *)(*(longlong *)(unaff_RDI + 0x40) + 0x6c);
    func_0x000180762de0(*(undefined8 *)(unaff_RDI + 0x48));
    (**(code **)(**(longlong **)(unaff_RDI + 0x48) + 0x38))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x48) + 0x28))(*(longlong **)(unaff_RDI + 0x48),0,0,0);
  }
  return 0;
}





// 函数: void FUN_180788d08(void)
void FUN_180788d08(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180788d20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(code **)(param_1 + 0x3f8) == (code *)0x0) {
    return 0x42;
  }
  uVar2 = (**(code **)(param_1 + 0x3f8))(param_1 + 8);
  if ((int)uVar2 == 0) {
    if (*(longlong *)(param_2 + 0x38) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_2 + 0x38),
                    &UNK_18095ac80,0x240,1);
    }
    lVar1 = *(longlong *)(param_2 + 0x48);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x270) != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(lVar1 + 0x270),
                      &UNK_18095ac80,0x243,1);
      }
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar1,&UNK_18095ac80,0x244,1);
      }
    }
    if (*(longlong *)(param_2 + 0x58) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_2 + 0x58),
                    &UNK_18095ac80,0x248,1);
    }
    if (*(longlong **)(param_2 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x50) + 8))();
      *(undefined8 *)(param_2 + 0x50) = 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180788d52(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong unaff_RBX;
  
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_18095ac80,0x240,1);
  }
  lVar1 = *(longlong *)(unaff_RBX + 0x48);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x270) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(lVar1 + 0x270),
                    &UNK_18095ac80,0x243,1);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar1,&UNK_18095ac80,0x244,1);
    }
  }
  if (*(longlong *)(unaff_RBX + 0x58) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RBX + 0x58),
                  &UNK_18095ac80,0x248,1);
  }
  if (*(longlong **)(unaff_RBX + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RBX + 0x50) + 8))();
    *(undefined8 *)(unaff_RBX + 0x50) = 0;
  }
  return 0;
}





