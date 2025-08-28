#include "TaleWorlds.Native.Split.h"

// 01_initialization_part053.c - 2 个函数

// 函数: void FUN_180079270(longlong param_1,longlong param_2)
void FUN_180079270(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 uVar15;
  char cVar16;
  longlong lVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined4 uVar32;
  longlong lVar33;
  longlong *plVar34;
  longlong lVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  ulonglong uVar40;
  char *pcVar41;
  uint *puVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  undefined4 *puVar46;
  uint *puVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  bool bVar50;
  
  lVar17 = _DAT_180c86890;
  lVar33 = param_1;
  if ((*(byte *)(param_1 + 0xfd) & 0x20) == 0) {
    lVar33 = func_0x000180085de0(*(undefined8 *)(param_1 + 0x1b0));
  }
  LOCK();
  piVar2 = (int *)(lVar17 + 0xed8);
  iVar43 = *piVar2;
  *piVar2 = *piVar2 + *(int *)(lVar33 + 0x200);
  UNLOCK();
  lVar17 = *(longlong *)(param_1 + 600);
  uVar15 = *(undefined1 *)(param_2 + 0x24);
  uVar32 = *(undefined4 *)(param_2 + 0x20);
  cVar16 = *(char *)(param_2 + 0xd);
  *(undefined4 *)(lVar17 + 0x48) = *(undefined4 *)(lVar17 + 0x2c);
  *(undefined4 *)(lVar17 + 0x50) = *(undefined4 *)(lVar17 + 0x4c);
  *(int *)(lVar17 + 0x4c) = iVar43;
  *(undefined1 *)(lVar17 + 0x44) = uVar15;
  *(undefined4 *)(lVar17 + 0x2c) = uVar32;
  if (cVar16 != -1) {
    uVar38 = (int)*(char *)(param_2 + 0xd) + *(int *)(param_2 + 0x18);
    pfVar18 = (float *)**(longlong **)(param_1 + 600);
    uVar36 = uVar38 >> 0xd;
    lVar17 = *(longlong *)
              ((longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc30 +
              (ulonglong)uVar36 * 8);
    lVar33 = (ulonglong)(uVar38 + uVar36 * -0x2000) * 0x40;
    uVar31 = ((undefined8 *)(lVar17 + lVar33))[1];
    *(undefined8 *)pfVar18 = *(undefined8 *)(lVar17 + lVar33);
    *(undefined8 *)(pfVar18 + 2) = uVar31;
    puVar5 = (undefined8 *)(lVar17 + 0x10 + lVar33);
    uVar31 = puVar5[1];
    *(undefined8 *)(pfVar18 + 4) = *puVar5;
    *(undefined8 *)(pfVar18 + 6) = uVar31;
    puVar5 = (undefined8 *)(lVar17 + 0x20 + lVar33);
    uVar31 = puVar5[1];
    *(undefined8 *)(pfVar18 + 8) = *puVar5;
    *(undefined8 *)(pfVar18 + 10) = uVar31;
    puVar5 = (undefined8 *)(lVar17 + 0x30 + lVar33);
    uVar31 = puVar5[1];
    *(undefined8 *)(pfVar18 + 0xc) = *puVar5;
    *(undefined8 *)(pfVar18 + 0xe) = uVar31;
    lVar17 = *(longlong *)(param_2 + 0x10);
    fVar19 = pfVar18[8];
    fVar20 = pfVar18[9];
    fVar21 = pfVar18[10];
    fVar22 = pfVar18[0xb];
    fVar23 = *pfVar18;
    fVar24 = pfVar18[1];
    fVar25 = pfVar18[2];
    fVar26 = pfVar18[3];
    fVar27 = pfVar18[4];
    fVar28 = pfVar18[5];
    fVar29 = pfVar18[6];
    fVar30 = pfVar18[7];
    fVar6 = *(float *)(lVar17 + 0x374);
    fVar7 = *(float *)(lVar17 + 0x370);
    fVar8 = *(float *)(lVar17 + 0x378);
    fVar9 = *(float *)(lVar17 + 900);
    fVar10 = *(float *)(lVar17 + 0x394);
    fVar11 = *(float *)(lVar17 + 0x380);
    fVar12 = *(float *)(lVar17 + 0x388);
    fVar13 = *(float *)(lVar17 + 0x390);
    fVar14 = *(float *)(lVar17 + 0x398);
    *pfVar18 = fVar6 * fVar27 + fVar7 * fVar23 + fVar8 * fVar19;
    pfVar18[1] = fVar6 * fVar28 + fVar7 * fVar24 + fVar8 * fVar20;
    pfVar18[2] = fVar6 * fVar29 + fVar7 * fVar25 + fVar8 * fVar21;
    pfVar18[3] = fVar6 * fVar30 + fVar7 * fVar26 + fVar8 * fVar22;
    pfVar18[4] = fVar9 * fVar27 + fVar11 * fVar23 + fVar12 * fVar19;
    pfVar18[5] = fVar9 * fVar28 + fVar11 * fVar24 + fVar12 * fVar20;
    pfVar18[6] = fVar9 * fVar29 + fVar11 * fVar25 + fVar12 * fVar21;
    pfVar18[7] = fVar9 * fVar30 + fVar11 * fVar26 + fVar12 * fVar22;
    pfVar18[8] = fVar10 * fVar27 + fVar13 * fVar23 + fVar14 * fVar19;
    pfVar18[9] = fVar10 * fVar28 + fVar13 * fVar24 + fVar14 * fVar20;
    pfVar18[10] = fVar10 * fVar29 + fVar13 * fVar25 + fVar14 * fVar21;
    pfVar18[0xb] = fVar10 * fVar30 + fVar13 * fVar26 + fVar14 * fVar22;
  }
  lVar17 = *(longlong *)(param_1 + 600);
  if (*(int *)(lVar17 + 0x28) != *(int *)(_DAT_180c86870 + 0x224)) {
    iVar43 = *(int *)(lVar17 + 0x1c) + *(int *)(lVar17 + 0x18);
    *(int *)(lVar17 + 0x28) = *(int *)(_DAT_180c86870 + 0x224);
    if (0 < iVar43) {
      lVar33 = (longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc28;
      uVar32 = FUN_180080380(lVar33,iVar43);
      *(undefined4 *)(lVar17 + 0x30) = uVar32;
      FUN_1800802e0(lVar33,uVar32);
      if (*(longlong *)(lVar17 + 0x10) == 0) {
        if (*(int *)(lVar17 + 0x18) != 0) {
          *(undefined4 *)(lVar17 + 0x2c) = *(undefined4 *)(lVar17 + 0x30);
          return;
        }
      }
      else {
        cVar16 = *(char *)(lVar17 + 0x44);
        uVar40 = (ulonglong)cVar16;
        plVar1 = (longlong *)(lVar17 + 0x38);
        iVar43 = (int)cVar16;
        if (*(int *)(lVar17 + 0x40) == (int)cVar16) {
          plVar34 = (longlong *)*plVar1;
        }
        else {
          *(int *)(lVar17 + 0x40) = iVar43;
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *plVar1 = 0;
          if (cVar16 == '\0') {
            plVar34 = (longlong *)0x0;
            *plVar1 = 0;
          }
          else {
            plVar34 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,(longlong)cVar16 * 4);
            *plVar1 = (longlong)plVar34;
          }
        }
        if (plVar34 != (longlong *)0x0) {
          iVar44 = 0;
          uVar36 = (uint)cVar16;
          iVar45 = iVar44;
          if ((0 < iVar43) && (0xf < uVar36)) {
            iVar39 = *(int *)(lVar17 + 0x2c);
            plVar3 = (longlong *)((longlong)plVar34 + (longlong)(cVar16 + -1) * 4);
            if ((((longlong *)(lVar17 + 0x2c) < plVar34) || (plVar3 < (longlong *)(lVar17 + 0x2c)))
               && ((plVar1 < plVar34 || (iVar45 = 0, plVar3 < plVar1)))) {
              uVar38 = uVar36 & 0x8000000f;
              if ((int)uVar38 < 0) {
                uVar38 = (uVar38 - 1 | 0xfffffff0) + 1;
              }
              plVar34 = plVar34 + 4;
              iVar37 = 8;
              do {
                *(int *)(plVar34 + -4) = iVar44 + iVar39;
                *(int *)((longlong)plVar34 + -0x1c) = iVar44 + 1 + iVar39;
                *(int *)(plVar34 + -3) = iVar44 + 2 + iVar39;
                *(int *)((longlong)plVar34 + -0x14) = iVar44 + 3 + iVar39;
                iVar44 = iVar44 + 0x10;
                *(int *)(plVar34 + -2) = iVar37 + -4 + iVar39;
                *(int *)((longlong)plVar34 + -0xc) = iVar37 + -3 + iVar39;
                *(int *)(plVar34 + -1) = iVar37 + -2 + iVar39;
                *(int *)((longlong)plVar34 + -4) = iVar37 + -1 + iVar39;
                *(int *)plVar34 = iVar37 + iVar39;
                *(int *)((longlong)plVar34 + 4) = iVar37 + 1 + iVar39;
                *(int *)(plVar34 + 1) = iVar37 + 2 + iVar39;
                *(int *)((longlong)plVar34 + 0xc) = iVar37 + 3 + iVar39;
                *(int *)(plVar34 + 2) = iVar37 + 4 + iVar39;
                *(int *)((longlong)plVar34 + 0x14) = iVar37 + 5 + iVar39;
                *(int *)(plVar34 + 3) = iVar37 + 6 + iVar39;
                *(int *)((longlong)plVar34 + 0x1c) = iVar37 + 7 + iVar39;
                plVar34 = plVar34 + 8;
                iVar37 = iVar37 + 0x10;
                iVar45 = iVar44;
              } while (iVar44 < (int)(uVar36 - uVar38));
            }
          }
          for (lVar33 = (longlong)iVar45; lVar33 < (longlong)uVar40; lVar33 = lVar33 + 1) {
            iVar44 = *(int *)(lVar17 + 0x2c) + iVar45;
            iVar45 = iVar45 + 1;
            *(int *)(*plVar1 + lVar33 * 4) = iVar44;
          }
          iVar45 = *(int *)(lVar17 + 0x18);
          iVar44 = 0;
          if (0 < (longlong)iVar45) {
            lVar33 = 0;
            do {
              iVar39 = *(int *)(lVar17 + 0x30) + iVar44;
              iVar44 = iVar44 + 1;
              pbVar4 = (byte *)(*(longlong *)(lVar17 + 0x10) + lVar33);
              lVar33 = lVar33 + 1;
              *(int *)(*plVar1 + (ulonglong)*pbVar4 * 4) = iVar39;
            } while (lVar33 < iVar45);
          }
        }
        puVar42 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 +
                          _DAT_180c86890 + 0x9d0);
        if (iVar43 == 0) {
          uVar36 = (int)cVar16 - 1;
        }
        else {
          LOCK();
          uVar36 = *puVar42;
          *puVar42 = *puVar42 + (int)cVar16;
          UNLOCK();
          uVar48 = (ulonglong)(uVar36 >> 0xb);
          uVar49 = (ulonglong)(cVar16 + -1 + uVar36 >> 0xb);
          if (uVar48 <= uVar49) {
            pcVar41 = (char *)((longlong)puVar42 + uVar48 + 0x108);
            lVar33 = (uVar49 - uVar48) + 1;
            puVar47 = puVar42 + uVar48 * 2 + 2;
            do {
              iVar45 = (int)uVar48;
              if (*(longlong *)puVar47 == 0) {
                lVar35 = FUN_18062b420(_DAT_180c8ed18,0x2000,0x25);
                LOCK();
                bVar50 = *(longlong *)(puVar42 + (longlong)iVar45 * 2 + 2) == 0;
                if (bVar50) {
                  *(longlong *)(puVar42 + (longlong)iVar45 * 2 + 2) = lVar35;
                }
                UNLOCK();
                if (bVar50) {
                  LOCK();
                  *(undefined1 *)((longlong)iVar45 + 0x108 + (longlong)puVar42) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar35 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  do {
                  } while (*pcVar41 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar41 != '\0');
              }
              uVar48 = (ulonglong)(iVar45 + 1);
              puVar47 = puVar47 + 2;
              pcVar41 = pcVar41 + 1;
              lVar33 = lVar33 + -1;
            } while (lVar33 != 0);
          }
        }
        puVar46 = *(undefined4 **)(lVar17 + 0x38);
        uVar38 = uVar36 >> 0xb;
        *(uint *)(lVar17 + 0x2c) = uVar36;
        if (uVar38 == (int)cVar16 + uVar36 >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(puVar42 + (ulonglong)uVar38 * 2 + 2) +
                 (ulonglong)(uVar36 + uVar38 * -0x800) * 4,puVar46,(uVar40 & 0xffffffff) << 2);
        }
        if (iVar43 != 0) {
          uVar40 = uVar40 & 0xffffffff;
          do {
            uVar32 = *puVar46;
            puVar46 = puVar46 + 1;
            *(undefined4 *)
             (*(longlong *)(puVar42 + (ulonglong)(uVar36 >> 0xb) * 2 + 2) +
             (ulonglong)(uVar36 + (uVar36 >> 0xb) * -0x800) * 4) = uVar32;
            uVar40 = uVar40 - 1;
            uVar36 = uVar36 + 1;
          } while (uVar40 != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180079284(longlong param_1)
void FUN_180079284(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 uVar15;
  char cVar16;
  longlong lVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined4 uVar32;
  longlong lVar33;
  longlong *plVar34;
  longlong lVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  ulonglong uVar40;
  char *pcVar41;
  uint *puVar42;
  int iVar43;
  longlong unaff_RDI;
  int iVar44;
  int iVar45;
  undefined4 *puVar46;
  uint *puVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  bool in_ZF;
  bool bVar50;
  
  lVar17 = _DAT_180c86890;
  lVar33 = param_1;
  if (in_ZF) {
    lVar33 = func_0x000180085de0(*(undefined8 *)(param_1 + 0x1b0));
  }
  LOCK();
  piVar2 = (int *)(lVar17 + 0xed8);
  iVar43 = *piVar2;
  *piVar2 = *piVar2 + *(int *)(lVar33 + 0x200);
  UNLOCK();
  lVar17 = *(longlong *)(param_1 + 600);
  uVar15 = *(undefined1 *)(unaff_RDI + 0x24);
  uVar32 = *(undefined4 *)(unaff_RDI + 0x20);
  cVar16 = *(char *)(unaff_RDI + 0xd);
  *(undefined4 *)(lVar17 + 0x48) = *(undefined4 *)(lVar17 + 0x2c);
  *(undefined4 *)(lVar17 + 0x50) = *(undefined4 *)(lVar17 + 0x4c);
  *(int *)(lVar17 + 0x4c) = iVar43;
  *(undefined1 *)(lVar17 + 0x44) = uVar15;
  *(undefined4 *)(lVar17 + 0x2c) = uVar32;
  if (cVar16 != -1) {
    uVar38 = (int)*(char *)(unaff_RDI + 0xd) + *(int *)(unaff_RDI + 0x18);
    pfVar18 = (float *)**(longlong **)(param_1 + 600);
    uVar36 = uVar38 >> 0xd;
    lVar17 = *(longlong *)
              ((longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc30 +
              (ulonglong)uVar36 * 8);
    lVar33 = (ulonglong)(uVar38 + uVar36 * -0x2000) * 0x40;
    uVar31 = ((undefined8 *)(lVar17 + lVar33))[1];
    *(undefined8 *)pfVar18 = *(undefined8 *)(lVar17 + lVar33);
    *(undefined8 *)(pfVar18 + 2) = uVar31;
    puVar5 = (undefined8 *)(lVar17 + 0x10 + lVar33);
    uVar31 = puVar5[1];
    *(undefined8 *)(pfVar18 + 4) = *puVar5;
    *(undefined8 *)(pfVar18 + 6) = uVar31;
    puVar5 = (undefined8 *)(lVar17 + 0x20 + lVar33);
    uVar31 = puVar5[1];
    *(undefined8 *)(pfVar18 + 8) = *puVar5;
    *(undefined8 *)(pfVar18 + 10) = uVar31;
    puVar5 = (undefined8 *)(lVar17 + 0x30 + lVar33);
    uVar31 = puVar5[1];
    *(undefined8 *)(pfVar18 + 0xc) = *puVar5;
    *(undefined8 *)(pfVar18 + 0xe) = uVar31;
    lVar17 = *(longlong *)(unaff_RDI + 0x10);
    fVar19 = pfVar18[8];
    fVar20 = pfVar18[9];
    fVar21 = pfVar18[10];
    fVar22 = pfVar18[0xb];
    fVar23 = *pfVar18;
    fVar24 = pfVar18[1];
    fVar25 = pfVar18[2];
    fVar26 = pfVar18[3];
    fVar27 = pfVar18[4];
    fVar28 = pfVar18[5];
    fVar29 = pfVar18[6];
    fVar30 = pfVar18[7];
    fVar6 = *(float *)(lVar17 + 0x374);
    fVar7 = *(float *)(lVar17 + 0x370);
    fVar8 = *(float *)(lVar17 + 0x378);
    fVar9 = *(float *)(lVar17 + 900);
    fVar10 = *(float *)(lVar17 + 0x394);
    fVar11 = *(float *)(lVar17 + 0x380);
    fVar12 = *(float *)(lVar17 + 0x388);
    fVar13 = *(float *)(lVar17 + 0x390);
    fVar14 = *(float *)(lVar17 + 0x398);
    *pfVar18 = fVar6 * fVar27 + fVar7 * fVar23 + fVar8 * fVar19;
    pfVar18[1] = fVar6 * fVar28 + fVar7 * fVar24 + fVar8 * fVar20;
    pfVar18[2] = fVar6 * fVar29 + fVar7 * fVar25 + fVar8 * fVar21;
    pfVar18[3] = fVar6 * fVar30 + fVar7 * fVar26 + fVar8 * fVar22;
    pfVar18[4] = fVar9 * fVar27 + fVar11 * fVar23 + fVar12 * fVar19;
    pfVar18[5] = fVar9 * fVar28 + fVar11 * fVar24 + fVar12 * fVar20;
    pfVar18[6] = fVar9 * fVar29 + fVar11 * fVar25 + fVar12 * fVar21;
    pfVar18[7] = fVar9 * fVar30 + fVar11 * fVar26 + fVar12 * fVar22;
    pfVar18[8] = fVar10 * fVar27 + fVar13 * fVar23 + fVar14 * fVar19;
    pfVar18[9] = fVar10 * fVar28 + fVar13 * fVar24 + fVar14 * fVar20;
    pfVar18[10] = fVar10 * fVar29 + fVar13 * fVar25 + fVar14 * fVar21;
    pfVar18[0xb] = fVar10 * fVar30 + fVar13 * fVar26 + fVar14 * fVar22;
  }
  lVar17 = *(longlong *)(param_1 + 600);
  if (*(int *)(lVar17 + 0x28) != *(int *)(_DAT_180c86870 + 0x224)) {
    iVar43 = *(int *)(lVar17 + 0x1c) + *(int *)(lVar17 + 0x18);
    *(int *)(lVar17 + 0x28) = *(int *)(_DAT_180c86870 + 0x224);
    if (0 < iVar43) {
      lVar33 = (longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc28;
      uVar32 = FUN_180080380(lVar33,iVar43);
      *(undefined4 *)(lVar17 + 0x30) = uVar32;
      FUN_1800802e0(lVar33,uVar32);
      if (*(longlong *)(lVar17 + 0x10) == 0) {
        if (*(int *)(lVar17 + 0x18) != 0) {
          *(undefined4 *)(lVar17 + 0x2c) = *(undefined4 *)(lVar17 + 0x30);
          return;
        }
      }
      else {
        cVar16 = *(char *)(lVar17 + 0x44);
        uVar40 = (ulonglong)cVar16;
        plVar1 = (longlong *)(lVar17 + 0x38);
        iVar43 = (int)cVar16;
        if (*(int *)(lVar17 + 0x40) == (int)cVar16) {
          plVar34 = (longlong *)*plVar1;
        }
        else {
          *(int *)(lVar17 + 0x40) = iVar43;
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *plVar1 = 0;
          if (cVar16 == '\0') {
            plVar34 = (longlong *)0x0;
            *plVar1 = 0;
          }
          else {
            plVar34 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,(longlong)cVar16 * 4);
            *plVar1 = (longlong)plVar34;
          }
        }
        if (plVar34 != (longlong *)0x0) {
          iVar44 = 0;
          uVar36 = (uint)cVar16;
          iVar45 = iVar44;
          if ((0 < iVar43) && (0xf < uVar36)) {
            iVar39 = *(int *)(lVar17 + 0x2c);
            plVar3 = (longlong *)((longlong)plVar34 + (longlong)(cVar16 + -1) * 4);
            if ((((longlong *)(lVar17 + 0x2c) < plVar34) || (plVar3 < (longlong *)(lVar17 + 0x2c)))
               && ((plVar1 < plVar34 || (iVar45 = 0, plVar3 < plVar1)))) {
              uVar38 = uVar36 & 0x8000000f;
              if ((int)uVar38 < 0) {
                uVar38 = (uVar38 - 1 | 0xfffffff0) + 1;
              }
              plVar34 = plVar34 + 4;
              iVar37 = 8;
              do {
                *(int *)(plVar34 + -4) = iVar44 + iVar39;
                *(int *)((longlong)plVar34 + -0x1c) = iVar44 + 1 + iVar39;
                *(int *)(plVar34 + -3) = iVar44 + 2 + iVar39;
                *(int *)((longlong)plVar34 + -0x14) = iVar44 + 3 + iVar39;
                iVar44 = iVar44 + 0x10;
                *(int *)(plVar34 + -2) = iVar37 + -4 + iVar39;
                *(int *)((longlong)plVar34 + -0xc) = iVar37 + -3 + iVar39;
                *(int *)(plVar34 + -1) = iVar37 + -2 + iVar39;
                *(int *)((longlong)plVar34 + -4) = iVar37 + -1 + iVar39;
                *(int *)plVar34 = iVar37 + iVar39;
                *(int *)((longlong)plVar34 + 4) = iVar37 + 1 + iVar39;
                *(int *)(plVar34 + 1) = iVar37 + 2 + iVar39;
                *(int *)((longlong)plVar34 + 0xc) = iVar37 + 3 + iVar39;
                *(int *)(plVar34 + 2) = iVar37 + 4 + iVar39;
                *(int *)((longlong)plVar34 + 0x14) = iVar37 + 5 + iVar39;
                *(int *)(plVar34 + 3) = iVar37 + 6 + iVar39;
                *(int *)((longlong)plVar34 + 0x1c) = iVar37 + 7 + iVar39;
                plVar34 = plVar34 + 8;
                iVar37 = iVar37 + 0x10;
                iVar45 = iVar44;
              } while (iVar44 < (int)(uVar36 - uVar38));
            }
          }
          for (lVar33 = (longlong)iVar45; lVar33 < (longlong)uVar40; lVar33 = lVar33 + 1) {
            iVar44 = *(int *)(lVar17 + 0x2c) + iVar45;
            iVar45 = iVar45 + 1;
            *(int *)(*plVar1 + lVar33 * 4) = iVar44;
          }
          iVar45 = *(int *)(lVar17 + 0x18);
          iVar44 = 0;
          if (0 < (longlong)iVar45) {
            lVar33 = 0;
            do {
              iVar39 = *(int *)(lVar17 + 0x30) + iVar44;
              iVar44 = iVar44 + 1;
              pbVar4 = (byte *)(*(longlong *)(lVar17 + 0x10) + lVar33);
              lVar33 = lVar33 + 1;
              *(int *)(*plVar1 + (ulonglong)*pbVar4 * 4) = iVar39;
            } while (lVar33 < iVar45);
          }
        }
        puVar42 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 +
                          _DAT_180c86890 + 0x9d0);
        if (iVar43 == 0) {
          uVar36 = (int)cVar16 - 1;
        }
        else {
          LOCK();
          uVar36 = *puVar42;
          *puVar42 = *puVar42 + (int)cVar16;
          UNLOCK();
          uVar48 = (ulonglong)(uVar36 >> 0xb);
          uVar49 = (ulonglong)(cVar16 + -1 + uVar36 >> 0xb);
          if (uVar48 <= uVar49) {
            pcVar41 = (char *)((longlong)puVar42 + uVar48 + 0x108);
            lVar33 = (uVar49 - uVar48) + 1;
            puVar47 = puVar42 + uVar48 * 2 + 2;
            do {
              iVar45 = (int)uVar48;
              if (*(longlong *)puVar47 == 0) {
                lVar35 = FUN_18062b420(_DAT_180c8ed18,0x2000,0x25);
                LOCK();
                bVar50 = *(longlong *)(puVar42 + (longlong)iVar45 * 2 + 2) == 0;
                if (bVar50) {
                  *(longlong *)(puVar42 + (longlong)iVar45 * 2 + 2) = lVar35;
                }
                UNLOCK();
                if (bVar50) {
                  LOCK();
                  *(undefined1 *)((longlong)iVar45 + 0x108 + (longlong)puVar42) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar35 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  do {
                  } while (*pcVar41 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar41 != '\0');
              }
              uVar48 = (ulonglong)(iVar45 + 1);
              puVar47 = puVar47 + 2;
              pcVar41 = pcVar41 + 1;
              lVar33 = lVar33 + -1;
            } while (lVar33 != 0);
          }
        }
        puVar46 = *(undefined4 **)(lVar17 + 0x38);
        uVar38 = uVar36 >> 0xb;
        *(uint *)(lVar17 + 0x2c) = uVar36;
        if (uVar38 == (int)cVar16 + uVar36 >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(puVar42 + (ulonglong)uVar38 * 2 + 2) +
                 (ulonglong)(uVar36 + uVar38 * -0x800) * 4,puVar46,(uVar40 & 0xffffffff) << 2);
        }
        if (iVar43 != 0) {
          uVar40 = uVar40 & 0xffffffff;
          do {
            uVar32 = *puVar46;
            puVar46 = puVar46 + 1;
            *(undefined4 *)
             (*(longlong *)(puVar42 + (ulonglong)(uVar36 >> 0xb) * 2 + 2) +
             (ulonglong)(uVar36 + (uVar36 >> 0xb) * -0x800) * 4) = uVar32;
            uVar40 = uVar40 - 1;
            uVar36 = uVar36 + 1;
          } while (uVar40 != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



