#include "TaleWorlds.Native.Split.h"

// 03_rendering_part277.c - 7 个函数

// 函数: void FUN_18041be90(longlong param_1,ulonglong param_2)
void FUN_18041be90(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iStackX_10;
  undefined4 uStack_e4;
  
  FUN_180419ec0(param_1,param_2,param_1 + 0x28);
  plVar1 = (longlong *)(param_1 + 0x48);
  pfVar4 = (float *)0x0;
  uVar10 = 0;
  pfVar5 = (float *)*plVar1;
  *(float **)(param_1 + 0x50) = pfVar5;
  uVar11 = (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 5) *
           (param_2 & 0xffffffff) + 1;
  pfVar8 = pfVar5;
  pfVar2 = pfVar5;
  if ((ulonglong)((*(longlong *)(param_1 + 0x58) - (longlong)pfVar5) / 0xc) < uVar11) {
    pfVar6 = pfVar5;
    pfVar2 = pfVar4;
    if (uVar11 != 0) {
      pfVar2 = (float *)FUN_18062b420(_DAT_180c8ed18,uVar11 * 0xc,*(undefined1 *)(param_1 + 0x60));
      pfVar5 = (float *)*plVar1;
      pfVar6 = *(float **)(param_1 + 0x50);
    }
    pfVar8 = pfVar2;
    if (pfVar5 != pfVar6) {
      do {
        *(undefined8 *)pfVar8 = *(undefined8 *)pfVar5;
        pfVar3 = pfVar5 + 2;
        pfVar5 = pfVar5 + 3;
        pfVar8[2] = *pfVar3;
        pfVar8 = pfVar8 + 3;
      } while (pfVar5 != pfVar6);
      pfVar5 = (float *)*plVar1;
    }
    if (pfVar5 != (float *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar1 = (longlong)pfVar2;
    *(float **)(param_1 + 0x58) = pfVar2 + uVar11 * 3;
    *(float **)(param_1 + 0x50) = pfVar8;
  }
  lVar7 = *(longlong *)(param_1 + 8);
  iStackX_10 = 0;
  pfVar5 = pfVar4;
  if (*(longlong *)(param_1 + 0x10) - lVar7 >> 5 != 0) {
    do {
      fVar22 = 0.0;
      do {
        fVar14 = *(float *)(lVar7 + 0x14 + (longlong)pfVar5);
        fVar12 = *(float *)(lVar7 + 4 + (longlong)pfVar5);
        fVar21 = 1.0 - fVar22;
        fVar18 = (float)*(int *)(lVar7 + (longlong)pfVar5);
        fVar16 = (float)*(int *)(lVar7 + 0x10 + (longlong)pfVar5);
        fVar13 = fVar16 + *(float *)(lVar7 + 0x18 + (longlong)pfVar5);
        fVar17 = fVar18 + *(float *)(lVar7 + 8 + (longlong)pfVar5);
        fVar19 = fVar14 + *(float *)(lVar7 + 0x1c + (longlong)pfVar5);
        fVar20 = fVar21 * fVar21 * fVar21 * fVar18 + fVar21 * 3.0 * fVar21 * fVar22 * fVar17 +
                 fVar21 * 3.0 * fVar22 * fVar22 * fVar13 + fVar22 * fVar22 * fVar22 * fVar16;
        fVar15 = (4.0 - fVar22 * 3.0) * fVar22 - 1.0;
        fVar13 = (((fVar13 * 3.0 * fVar22 - (fVar13 + fVar13)) - fVar16 * fVar22) * fVar22 +
                 fVar18 * fVar21 * fVar21 + fVar15 * fVar17) * -3.0;
        fVar14 = (((fVar19 * 3.0 * fVar22 - (fVar19 + fVar19)) - fVar14 * fVar22) * fVar22 +
                 fVar12 * fVar21 * fVar21 +
                 (fVar12 + *(float *)(lVar7 + 0xc + (longlong)pfVar5)) * fVar15) * -3.0;
        if (pfVar8 < *(float **)(param_1 + 0x58)) {
          *(float **)(param_1 + 0x50) = pfVar8 + 3;
          *(ulonglong *)pfVar8 = CONCAT44(fVar13,fVar20);
          pfVar8[2] = fVar14;
          pfVar8 = *(float **)(param_1 + 0x50);
          pfVar2 = (float *)*plVar1;
        }
        else {
          pfVar6 = (float *)*plVar1;
          lVar9 = ((longlong)pfVar8 - (longlong)pfVar6) / 0xc;
          if (lVar9 == 0) {
            lVar9 = 1;
LAB_18041a774:
            pfVar3 = (float *)FUN_18062b420(_DAT_180c8ed18,lVar9 * 0xc,
                                            *(undefined1 *)(param_1 + 0x60));
            pfVar6 = (float *)*plVar1;
            pfVar8 = *(float **)(param_1 + 0x50);
            pfVar2 = pfVar3;
          }
          else {
            lVar9 = lVar9 * 2;
            pfVar3 = pfVar4;
            pfVar2 = pfVar4;
            if (lVar9 != 0) goto LAB_18041a774;
          }
          for (; pfVar6 != pfVar8; pfVar6 = pfVar6 + 3) {
            *(undefined8 *)pfVar3 = *(undefined8 *)pfVar6;
            pfVar3[2] = pfVar6[2];
            pfVar3 = pfVar3 + 3;
          }
          pfVar8 = pfVar3 + 3;
          *(ulonglong *)pfVar3 = CONCAT44(fVar13,fVar20);
          pfVar3[2] = fVar14;
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *plVar1 = (longlong)pfVar2;
          *(float **)(param_1 + 0x50) = pfVar8;
          *(float **)(param_1 + 0x58) = pfVar2 + lVar9 * 3;
        }
        fVar22 = fVar22 + 1.0 / (float)(param_2 & 0xffffffff);
      } while (fVar22 <= 1.0);
      iStackX_10 = iStackX_10 + 1;
      lVar7 = *(longlong *)(param_1 + 8);
      pfVar5 = pfVar5 + 8;
    } while ((ulonglong)(longlong)iStackX_10 <
             (ulonglong)(*(longlong *)(param_1 + 0x10) - lVar7 >> 5));
  }
  if (pfVar2 != pfVar8) {
    lVar7 = ((longlong)pfVar8 - (longlong)pfVar2) / 6 +
            ((longlong)pfVar8 - (longlong)pfVar2 >> 0x3f);
    lVar9 = (lVar7 >> 1) - (lVar7 >> 0x3f);
    for (lVar7 = lVar9; lVar7 != 0; lVar7 = lVar7 >> 1) {
      uVar10 = (int)pfVar4 + 1;
      pfVar4 = (float *)(ulonglong)uVar10;
    }
    FUN_18041b6a0(pfVar2,pfVar8,(longlong)(int)(uVar10 - 1) * 2,0);
    if (lVar9 < 0x1d) {
      FUN_18041b450(pfVar2,pfVar8);
    }
    else {
      pfVar5 = pfVar2 + 0x54;
      FUN_18041b450(pfVar2,pfVar5);
      if (pfVar5 != pfVar8) {
        pfVar2 = pfVar5 + -3;
        do {
          fVar22 = *pfVar2;
          fVar12 = (float)*(undefined8 *)pfVar5;
          fVar14 = pfVar5[2];
          uStack_e4 = (undefined4)((ulonglong)*(undefined8 *)pfVar5 >> 0x20);
          pfVar4 = pfVar5;
          if (fVar12 < fVar22) {
            do {
              *pfVar4 = fVar22;
              *(undefined8 *)(pfVar4 + 1) =
                   *(undefined8 *)((longlong)pfVar4 + ((longlong)pfVar2 - (longlong)pfVar5) + 4);
              pfVar4 = pfVar4 + -3;
              fVar22 = *(float *)((longlong)pfVar4 + ((longlong)pfVar2 - (longlong)pfVar5));
            } while (fVar12 < fVar22);
          }
          pfVar5 = pfVar5 + 3;
          pfVar2 = pfVar2 + 3;
          *pfVar4 = fVar12;
          *(ulonglong *)(pfVar4 + 1) = CONCAT44(fVar14,uStack_e4);
        } while (pfVar5 != pfVar8);
      }
    }
  }
  pfVar8 = *(float **)(param_1 + 0x50);
  pfVar5 = (float *)*plVar1;
  if ((pfVar5 != pfVar8) && (pfVar5 + 3 != pfVar8)) {
    pfVar2 = pfVar5 + 3;
    fVar22 = *pfVar5;
    do {
      pfVar4 = pfVar2;
      if (fVar22 == *pfVar4) {
        pfVar2 = pfVar5;
        if (pfVar5 != pfVar8) {
          while (pfVar5 = pfVar5 + 3, pfVar5 != pfVar8) {
            if (*pfVar5 != *pfVar2) {
              pfVar2[3] = *pfVar5;
              *(undefined8 *)(pfVar2 + 4) = *(undefined8 *)(pfVar5 + 1);
              pfVar2 = pfVar2 + 3;
            }
          }
          pfVar8 = pfVar2 + 3;
        }
        break;
      }
      pfVar2 = pfVar4 + 3;
      pfVar5 = pfVar4;
      fVar22 = *pfVar4;
    } while (pfVar4 + 3 != pfVar8);
  }
  pfVar5 = *(float **)(param_1 + 0x50);
  if (pfVar8 != pfVar5) {
    *(float **)(param_1 + 0x50) = pfVar5 + (((longlong)pfVar5 - (longlong)pfVar8) / 0xc) * -3;
  }
  return;
}





// 函数: void FUN_18041bec0(longlong *param_1)
void FUN_18041bec0(longlong *param_1)

{
  FUN_180419c10();
                    // WARNING: Could not recover jumptable at 0x00018041bede. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x20))(param_1,1000);
  return;
}





// 函数: void FUN_18041bf30(longlong *param_1)
void FUN_18041bf30(longlong *param_1)

{
  FUN_1804193f0();
                    // WARNING: Could not recover jumptable at 0x00018041bf57. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x20))(param_1,1000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18041bf60(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  FUN_180049830();
  *param_1 = &UNK_180a27c28;
  FUN_1801eb9b0(param_1 + 0x19);
  LOCK();
  *(int *)(_DAT_180c8aa08 + 0x30c) = *(int *)(_DAT_180c8aa08 + 0x30c) + 1;
  UNLOCK();
  param_1[0x18] = param_2;
  FUN_18029a300(param_1 + 0x19,param_3);
  FUN_180627be0(param_1 + 0x25,param_3 + 0x60);
  FUN_180627be0(param_1 + 0x29,param_3 + 0x80);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_3 + 0xa0);
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)(param_3 + 0xa4);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_3 + 0xa8);
  if (*(char *)(_DAT_180c8aa08 + 9) == '\0') {
    param_1[3] = 0xfffffffffffffffc;
  }
  return param_1;
}



longlong FUN_18041c050(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1801c92a0(param_1 + 200);
  FUN_180049470(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x178,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18041c0b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_c0 [184];
  
  if (*(char *)(_DAT_180c8aa08 + 0x310) != '\0') {
    FUN_1801c9340(auStack_c0,param_1 + 200,param_3,param_4,0xfffffffffffffffe);
    FUN_1801c8b50();
  }
  LOCK();
  piVar1 = (int *)(_DAT_180c8aa08 + 0x30c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18041c120(longlong param_1,longlong param_2,uint *param_3,int *param_4)
void FUN_18041c120(longlong param_1,longlong param_2,uint *param_3,int *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  double dVar8;
  uint uVar9;
  ulonglong uVar10;
  double *pdVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  int *piVar16;
  longlong lVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_138 [32];
  double adStack_118 [4];
  double adStack_f8 [4];
  ulonglong uStack_d8;
  
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  uVar19 = 0;
  uVar20 = 0x406fe000;
  dVar8 = 255.0;
  pdVar11 = adStack_118;
  lVar17 = 4;
  piVar16 = param_4;
  do {
    iVar12 = *piVar16;
    *pdVar11 = 0.0;
    pdVar11[4] = 0.0;
    if (iVar12 != 0) {
      bVar7 = (byte)iVar12;
      dVar18 = (double)(uint)(*(int *)((param_1 - (longlong)param_4) + 0x10 + (longlong)piVar16) <<
                             (8 - bVar7 & 0x1f));
      *pdVar11 = (double)(uint)(*(int *)((param_1 - (longlong)param_4) + (longlong)piVar16) <<
                               (8 - bVar7 & 0x1f));
      pdVar11[4] = dVar18;
      dVar4 = (double)((uint)(longlong)*pdVar11 >> (bVar7 & 0x1f)) + *pdVar11;
      dVar18 = (double)((uint)(longlong)dVar18 >> (bVar7 & 0x1f)) + dVar18;
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      else if (255.0 <= dVar4) {
        dVar4 = dVar8;
      }
      *pdVar11 = dVar4;
      if (dVar18 <= 0.0) {
        dVar18 = 0.0;
      }
      else if (255.0 <= dVar18) {
        dVar18 = 255.0;
      }
      pdVar11[4] = dVar18;
    }
    piVar16 = piVar16 + 1;
    pdVar11 = pdVar11 + 1;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  iVar12 = param_4[3];
  uVar21 = uVar19;
  uVar22 = uVar20;
  if (iVar12 != 0) {
    uVar19 = SUB84(adStack_f8[3],0);
    uVar20 = (undefined4)((ulonglong)adStack_f8[3] >> 0x20);
    uVar21 = SUB84(adStack_118[3],0);
    uVar22 = (int)((ulonglong)adStack_118[3] >> 0x20);
  }
  uVar9 = *param_3;
  dVar18 = (double)log((double)uVar9);
  uVar10 = (ulonglong)(dVar18 * 1.4426950408889634);
  if (uVar9 != 0) {
    pdVar11 = (double *)(param_2 + 0x80);
    uVar13 = (ulonglong)uVar9;
    uVar15 = uVar10 & 0xffffffff;
    do {
      dVar18 = *(double *)(&UNK_1809952a0 + (uVar15 * 0x80 - param_2) + (longlong)pdVar11);
      dVar4 = 1.0 - dVar18;
      dVar5 = dVar4 * adStack_118[0] + dVar18 * adStack_f8[0] + 0.5;
      lVar17 = (longlong)dVar5;
      if ((lVar17 != -0x8000000000000000) && ((double)lVar17 != dVar5)) {
        auVar2._8_4_ = SUB84(dVar5,0);
        auVar2._0_8_ = dVar5;
        auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        uVar9 = movmskpd((int)uVar10,auVar2);
        uVar10 = (ulonglong)(uVar9 & 1);
        dVar5 = (double)(longlong)(lVar17 - uVar10);
      }
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      else if (255.0 <= dVar5) {
        dVar5 = dVar8;
      }
      pdVar11[-0x10] = dVar5;
      dVar5 = dVar4 * adStack_118[1] + dVar18 * adStack_f8[1] + 0.5;
      lVar17 = (longlong)dVar5;
      if ((lVar17 != -0x8000000000000000) && ((double)lVar17 != dVar5)) {
        auVar6._8_4_ = SUB84(dVar5,0);
        auVar6._0_8_ = dVar5;
        auVar6._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        uVar9 = movmskpd((int)uVar10,auVar6);
        uVar10 = (ulonglong)(uVar9 & 1);
        dVar5 = (double)(longlong)(lVar17 - uVar10);
      }
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      else if (255.0 <= dVar5) {
        dVar5 = dVar8;
      }
      *pdVar11 = dVar5;
      dVar18 = dVar4 * adStack_118[2] + dVar18 * adStack_f8[2] + 0.5;
      lVar17 = (longlong)dVar18;
      if ((lVar17 != -0x8000000000000000) && ((double)lVar17 != dVar18)) {
        auVar1._8_4_ = SUB84(dVar18,0);
        auVar1._0_8_ = dVar18;
        auVar1._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        uVar9 = movmskpd((int)uVar10,auVar1);
        uVar10 = (ulonglong)(uVar9 & 1);
        dVar18 = (double)(longlong)(lVar17 - uVar10);
      }
      if (dVar18 <= 0.0) {
        dVar18 = 0.0;
      }
      else if (255.0 <= dVar18) {
        dVar18 = dVar8;
      }
      pdVar11[0x10] = dVar18;
      pdVar11 = pdVar11 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    iVar12 = param_4[3];
  }
  uVar9 = param_3[1];
  uVar13 = (ulonglong)uVar9;
  dVar18 = (double)log((double)uVar13);
  uVar10 = (ulonglong)(dVar18 * 1.4426950408889634);
  if (iVar12 == 0) {
    if (uVar9 != 0) {
      puVar14 = (undefined8 *)(param_2 + 0x180);
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar14 = 0x406fe00000000000;
        puVar14 = puVar14 + 1;
      }
    }
  }
  else if (uVar9 != 0) {
    uVar15 = uVar10 & 0xffffffff;
    pdVar11 = (double *)(param_2 + 0x180);
    do {
      dVar18 = (1.0 - *(double *)
                       (&UNK_180995320 + ((uVar15 - 3) * 0x80 - param_2) + (longlong)pdVar11)) *
               (double)CONCAT44(uVar22,uVar21) +
               (double)CONCAT44(uVar20,uVar19) *
               *(double *)(&UNK_180995320 + ((uVar15 - 3) * 0x80 - param_2) + (longlong)pdVar11) +
               0.5;
      lVar17 = (longlong)dVar18;
      if ((lVar17 != -0x8000000000000000) && ((double)lVar17 != dVar18)) {
        auVar3._8_4_ = SUB84(dVar18,0);
        auVar3._0_8_ = dVar18;
        auVar3._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        uVar9 = movmskpd((int)uVar10,auVar3);
        uVar10 = (ulonglong)(uVar9 & 1);
        dVar18 = (double)(longlong)(lVar17 - uVar10);
      }
      if (dVar18 <= 0.0) {
        dVar18 = 0.0;
      }
      else if (255.0 <= dVar18) {
        dVar18 = dVar8;
      }
      *pdVar11 = dVar18;
      pdVar11 = pdVar11 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_138);
}





// 函数: void FUN_18041c161(longlong param_1,longlong param_2,uint *param_3,int *param_4,double param_5,
void FUN_18041c161(longlong param_1,longlong param_2,uint *param_3,int *param_4,double param_5,
                  double param_6,undefined8 param_7,double param_8,double param_9,double param_10,
                  undefined8 param_11,ulonglong param_12)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  double dVar8;
  uint uVar9;
  ulonglong uVar10;
  double *pdVar11;
  undefined8 unaff_RBP;
  int iVar12;
  double *unaff_RDI;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  int *piVar16;
  longlong in_R11;
  longlong lVar17;
  undefined8 unaff_R14;
  double dVar18;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dStackX_20;
  
  dVar8 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  *(undefined8 *)(in_R11 + 8) = unaff_RBP;
  *(undefined8 *)(in_R11 + 0x18) = unaff_R14;
  lVar17 = 4;
  piVar16 = param_4;
  do {
    iVar12 = *piVar16;
    *unaff_RDI = 0.0;
    unaff_RDI[4] = 0.0;
    if (iVar12 != 0) {
      bVar7 = (byte)iVar12;
      dVar18 = (double)(uint)(*(int *)((param_1 - (longlong)param_4) + 0x10 + (longlong)piVar16) <<
                             (8 - bVar7 & 0x1f));
      *unaff_RDI = (double)(uint)(*(int *)((param_1 - (longlong)param_4) + (longlong)piVar16) <<
                                 (8 - bVar7 & 0x1f));
      unaff_RDI[4] = dVar18;
      dVar4 = (double)((uint)(longlong)*unaff_RDI >> (bVar7 & 0x1f)) + *unaff_RDI;
      dVar18 = (double)((uint)(longlong)dVar18 >> (bVar7 & 0x1f)) + dVar18;
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      else if ((double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) <= dVar4) {
        dVar4 = dVar8;
      }
      *unaff_RDI = dVar4;
      if (dVar18 <= 0.0) {
        dVar18 = 0.0;
      }
      else if ((double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) <= dVar18) {
        dVar18 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
      }
      unaff_RDI[4] = dVar18;
    }
    piVar16 = piVar16 + 1;
    unaff_RDI = unaff_RDI + 1;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  iVar12 = param_4[3];
  uVar19 = unaff_XMM6_Da;
  uVar20 = unaff_XMM6_Db;
  uVar21 = unaff_XMM6_Da;
  uVar22 = unaff_XMM6_Db;
  if (iVar12 != 0) {
    uVar19 = (int)param_11;
    uVar20 = (int)((ulonglong)param_11 >> 0x20);
    uVar21 = (int)param_7;
    uVar22 = (int)((ulonglong)param_7 >> 0x20);
  }
  uVar9 = *param_3;
  dVar18 = (double)log((double)uVar9);
  uVar10 = (ulonglong)(dVar18 * 1.4426950408889634);
  if (uVar9 != 0) {
    pdVar11 = (double *)(param_2 + 0x80);
    uVar13 = (ulonglong)uVar9;
    uVar15 = uVar10 & 0xffffffff;
    do {
      dVar18 = *(double *)(&UNK_1809952a0 + (uVar15 * 0x80 - param_2) + (longlong)pdVar11);
      dVar4 = 1.0 - dVar18;
      dVar5 = dVar4 * dStackX_20 + dVar18 * param_8 + 0.5;
      lVar17 = (longlong)dVar5;
      if ((lVar17 != -0x8000000000000000) && ((double)lVar17 != dVar5)) {
        auVar2._8_4_ = SUB84(dVar5,0);
        auVar2._0_8_ = dVar5;
        auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        uVar9 = movmskpd((int)uVar10,auVar2);
        uVar10 = (ulonglong)(uVar9 & 1);
        dVar5 = (double)(longlong)(lVar17 - uVar10);
      }
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      else if ((double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) <= dVar5) {
        dVar5 = dVar8;
      }
      pdVar11[-0x10] = dVar5;
      dVar5 = dVar4 * param_5 + dVar18 * param_9 + 0.5;
      lVar17 = (longlong)dVar5;
      if ((lVar17 != -0x8000000000000000) && ((double)lVar17 != dVar5)) {
        auVar6._8_4_ = SUB84(dVar5,0);
        auVar6._0_8_ = dVar5;
        auVar6._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        uVar9 = movmskpd((int)uVar10,auVar6);
        uVar10 = (ulonglong)(uVar9 & 1);
        dVar5 = (double)(longlong)(lVar17 - uVar10);
      }
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      else if ((double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) <= dVar5) {
        dVar5 = dVar8;
      }
      *pdVar11 = dVar5;
      dVar18 = dVar4 * param_6 + dVar18 * param_10 + 0.5;
      lVar17 = (longlong)dVar18;
      if ((lVar17 != -0x8000000000000000) && ((double)lVar17 != dVar18)) {
        auVar1._8_4_ = SUB84(dVar18,0);
        auVar1._0_8_ = dVar18;
        auVar1._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        uVar9 = movmskpd((int)uVar10,auVar1);
        uVar10 = (ulonglong)(uVar9 & 1);
        dVar18 = (double)(longlong)(lVar17 - uVar10);
      }
      if (dVar18 <= 0.0) {
        dVar18 = 0.0;
      }
      else if ((double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) <= dVar18) {
        dVar18 = dVar8;
      }
      pdVar11[0x10] = dVar18;
      pdVar11 = pdVar11 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    iVar12 = param_4[3];
  }
  uVar9 = param_3[1];
  uVar13 = (ulonglong)uVar9;
  dVar18 = (double)log((double)uVar13);
  uVar10 = (ulonglong)(dVar18 * 1.4426950408889634);
  if (iVar12 == 0) {
    if (uVar9 != 0) {
      puVar14 = (undefined8 *)(param_2 + 0x180);
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar14 = 0x406fe00000000000;
        puVar14 = puVar14 + 1;
      }
    }
  }
  else if (uVar9 != 0) {
    uVar15 = uVar10 & 0xffffffff;
    pdVar11 = (double *)(param_2 + 0x180);
    do {
      dVar18 = (1.0 - *(double *)
                       (&UNK_180995320 + ((uVar15 - 3) * 0x80 - param_2) + (longlong)pdVar11)) *
               (double)CONCAT44(uVar22,uVar21) +
               (double)CONCAT44(uVar20,uVar19) *
               *(double *)(&UNK_180995320 + ((uVar15 - 3) * 0x80 - param_2) + (longlong)pdVar11) +
               0.5;
      lVar17 = (longlong)dVar18;
      if ((lVar17 != -0x8000000000000000) && ((double)lVar17 != dVar18)) {
        auVar3._8_4_ = SUB84(dVar18,0);
        auVar3._0_8_ = dVar18;
        auVar3._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        uVar9 = movmskpd((int)uVar10,auVar3);
        uVar10 = (ulonglong)(uVar9 & 1);
        dVar18 = (double)(longlong)(lVar17 - uVar10);
      }
      if (dVar18 <= 0.0) {
        dVar18 = 0.0;
      }
      else if ((double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) <= dVar18) {
        dVar18 = dVar8;
      }
      *pdVar11 = dVar18;
      pdVar11 = pdVar11 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(param_12 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18041c2c1(undefined8 param_1,double *param_2,undefined8 param_3,undefined8 param_4,
void FUN_18041c2c1(undefined8 param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,undefined8 param_7,double param_8,double param_9,
                  undefined8 param_10,undefined8 param_11,ulonglong param_12)

{
  int iVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  uint uVar9;
  ulonglong in_RAX;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  double *pdVar13;
  uint unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong unaff_R12;
  longlong unaff_R14;
  longlong unaff_R15;
  double dVar16;
  double in_XMM5_Qa;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  double unaff_XMM8_Qa;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  double dStackX_20;
  
  dVar8 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar14 = (ulonglong)unaff_EBX;
  uVar11 = in_RAX & 0xffffffff;
  do {
    dVar16 = *(double *)((uVar11 * 0x80 - unaff_RSI) + unaff_R12 + -0x80 + (longlong)param_2);
    dVar3 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) - dVar16;
    dVar6 = dVar3 * dStackX_20 + dVar16 * param_8 + unaff_XMM8_Qa;
    lVar10 = (longlong)dVar6;
    if ((lVar10 != unaff_R15) && ((double)lVar10 != dVar6)) {
      auVar4._8_4_ = SUB84(dVar6,0);
      auVar4._0_8_ = dVar6;
      auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      uVar9 = movmskpd((int)in_RAX,auVar4);
      in_RAX = (ulonglong)(uVar9 & 1);
      dVar6 = (double)(longlong)(lVar10 - in_RAX);
    }
    if (dVar6 < (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) ||
        dVar6 == (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da)) {
      dVar6 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
    }
    else if ((double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) <= dVar6) {
      dVar6 = dVar8;
    }
    param_2[-0x10] = dVar6;
    dVar6 = dVar3 * param_5 + dVar16 * param_9 + unaff_XMM8_Qa;
    lVar10 = (longlong)dVar6;
    if ((lVar10 != unaff_R15) && ((double)lVar10 != dVar6)) {
      auVar7._8_4_ = SUB84(dVar6,0);
      auVar7._0_8_ = dVar6;
      auVar7._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      uVar9 = movmskpd((int)in_RAX,auVar7);
      in_RAX = (ulonglong)(uVar9 & 1);
      dVar6 = (double)(longlong)(lVar10 - in_RAX);
    }
    if (dVar6 < (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) ||
        dVar6 == (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da)) {
      dVar6 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
    }
    else if ((double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) <= dVar6) {
      dVar6 = dVar8;
    }
    *param_2 = dVar6;
    dVar16 = dVar3 * param_6 + dVar16 * in_XMM5_Qa + unaff_XMM8_Qa;
    lVar10 = (longlong)dVar16;
    if ((lVar10 != unaff_R15) && ((double)lVar10 != dVar16)) {
      auVar2._8_4_ = SUB84(dVar16,0);
      auVar2._0_8_ = dVar16;
      auVar2._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      uVar9 = movmskpd((int)in_RAX,auVar2);
      in_RAX = (ulonglong)(uVar9 & 1);
      dVar16 = (double)(longlong)(lVar10 - in_RAX);
    }
    if (dVar16 < (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) ||
        dVar16 == (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da)) {
      dVar16 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
    }
    else if ((double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) <= dVar16) {
      dVar16 = dVar8;
    }
    param_2[0x10] = dVar16;
    param_2 = param_2 + 1;
    uVar14 = uVar14 - 1;
  } while (uVar14 != 0);
  iVar1 = *(int *)(unaff_RBP + 0xc);
  uVar9 = *(uint *)(unaff_R14 + 4);
  uVar11 = (ulonglong)uVar9;
  dVar16 = (double)log((double)uVar11);
  uVar14 = (ulonglong)(dVar16 * 1.4426950408889634);
  if (iVar1 == 0) {
    if (uVar9 != 0) {
      puVar15 = (undefined8 *)(unaff_RSI + 0x180);
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar15 = 0x406fe00000000000;
        puVar15 = puVar15 + 1;
      }
    }
  }
  else if (uVar9 != 0) {
    pdVar13 = (double *)(unaff_RSI + 0x180);
    lVar10 = (((uVar14 & 0xffffffff) - 3) * 0x80 - unaff_RSI) + unaff_R12;
    do {
      dVar16 = ((double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) -
               *(double *)(lVar10 + (longlong)pdVar13)) *
               (double)CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da) +
               (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da) *
               *(double *)(lVar10 + (longlong)pdVar13) + unaff_XMM8_Qa;
      lVar12 = (longlong)dVar16;
      if ((lVar12 != unaff_R15) && ((double)lVar12 != dVar16)) {
        auVar5._8_4_ = SUB84(dVar16,0);
        auVar5._0_8_ = dVar16;
        auVar5._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        uVar9 = movmskpd((int)uVar14,auVar5);
        uVar14 = (ulonglong)(uVar9 & 1);
        dVar16 = (double)(longlong)(lVar12 - uVar14);
      }
      if (dVar16 < (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) ||
          dVar16 == (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da)) {
        dVar16 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
      }
      else if ((double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) <= dVar16) {
        dVar16 = dVar8;
      }
      *pdVar13 = dVar16;
      pdVar13 = pdVar13 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(param_12 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18041c479(void)
void FUN_18041c479(void)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  double *pdVar6;
  longlong unaff_RSI;
  int unaff_EDI;
  undefined8 *puVar7;
  longlong lVar8;
  longlong unaff_R12;
  longlong unaff_R14;
  longlong unaff_R15;
  double dVar9;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  double unaff_XMM8_Qa;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  ulonglong in_stack_00000060;
  
  uVar2 = *(uint *)(unaff_R14 + 4);
  uVar4 = (ulonglong)uVar2;
  dVar9 = (double)log((double)uVar4);
  uVar3 = (ulonglong)(dVar9 * 1.4426950408889634);
  if (unaff_EDI == 0) {
    if (uVar2 != 0) {
      puVar7 = (undefined8 *)(unaff_RSI + 0x180);
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = 0x406fe00000000000;
        puVar7 = puVar7 + 1;
      }
    }
  }
  else if (uVar2 != 0) {
    pdVar6 = (double *)(unaff_RSI + 0x180);
    lVar8 = (((uVar3 & 0xffffffff) - 3) * 0x80 - unaff_RSI) + unaff_R12;
    do {
      dVar9 = ((double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) - *(double *)(lVar8 + (longlong)pdVar6)
              ) * (double)CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da) +
              (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da) *
              *(double *)(lVar8 + (longlong)pdVar6) + unaff_XMM8_Qa;
      lVar5 = (longlong)dVar9;
      if ((lVar5 != unaff_R15) && ((double)lVar5 != dVar9)) {
        auVar1._8_4_ = SUB84(dVar9,0);
        auVar1._0_8_ = dVar9;
        auVar1._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        uVar2 = movmskpd((int)uVar3,auVar1);
        uVar3 = (ulonglong)(uVar2 & 1);
        dVar9 = (double)(longlong)(lVar5 - uVar3);
      }
      if (dVar9 < (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) ||
          dVar9 == (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da)) {
        dVar9 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
      }
      else if ((double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) <= dVar9) {
        dVar9 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
      }
      *pdVar6 = dVar9;
      pdVar6 = pdVar6 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
}





