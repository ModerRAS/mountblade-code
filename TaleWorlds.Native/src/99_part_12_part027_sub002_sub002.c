#include "TaleWorlds.Native.Split.h"

// 99_part_12_part027_sub002_sub002.c - 1 个函数

// 函数: void FUN_1807dace0(longlong param_1,longlong *param_2,int param_3,int param_4,uint param_5)
void FUN_1807dace0(longlong param_1,longlong *param_2,int param_3,int param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  uint uVar77;
  uint uVar78;
  ulonglong uVar79;
  uint uVar80;
  
  if (param_3 == 1) {
    if (param_4 == 1) {
                    // WARNING: Subroutine does not return
      memcpy(*param_2,param_1,(ulonglong)param_5 << 2);
    }
    if (param_4 == 2) {
      uVar80 = 0;
      if (param_5 >> 2 != 0) {
        do {
          uVar77 = uVar80 * 4;
          uVar80 = uVar80 + 1;
          pfVar1 = (float *)(param_1 + (ulonglong)uVar77 * 4);
          fVar38 = *pfVar1;
          fVar39 = pfVar1[1];
          fVar40 = pfVar1[2];
          fVar41 = pfVar1[3];
          pfVar1 = (float *)(*param_2 + (ulonglong)uVar77 * 4);
          *pfVar1 = fVar38 * 0.7071;
          pfVar1[1] = fVar39 * 0.7071;
          pfVar1[2] = fVar40 * 0.7071;
          pfVar1[3] = fVar41 * 0.7071;
          pfVar1 = (float *)(param_2[1] + (ulonglong)uVar77 * 4);
          *pfVar1 = fVar38 * 0.7071;
          pfVar1[1] = fVar39 * 0.7071;
          pfVar1[2] = fVar40 * 0.7071;
          pfVar1[3] = fVar41 * 0.7071;
        } while (uVar80 < param_5 >> 2);
        return;
      }
    }
    else if (param_4 == 4) {
      uVar80 = 0;
      if (param_5 >> 2 != 0) {
        do {
          uVar77 = uVar80 * 4;
          uVar80 = uVar80 + 1;
          pfVar1 = (float *)(param_1 + (ulonglong)uVar77 * 4);
          fVar38 = *pfVar1;
          fVar39 = pfVar1[1];
          fVar40 = pfVar1[2];
          fVar41 = pfVar1[3];
          uVar79 = (ulonglong)uVar77;
          pfVar1 = (float *)(*param_2 + uVar79 * 4);
          *pfVar1 = fVar38 * 0.7071;
          pfVar1[1] = fVar39 * 0.7071;
          pfVar1[2] = fVar40 * 0.7071;
          pfVar1[3] = fVar41 * 0.7071;
          pfVar1 = (float *)(param_2[1] + uVar79 * 4);
          *pfVar1 = fVar38 * 0.7071;
          pfVar1[1] = fVar39 * 0.7071;
          pfVar1[2] = fVar40 * 0.7071;
          pfVar1[3] = fVar41 * 0.7071;
          puVar6 = (undefined8 *)(param_2[2] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[3] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
        } while (uVar80 < param_5 >> 2);
        return;
      }
    }
    else if (param_4 == 6) {
      uVar80 = 0;
      if (param_5 >> 2 != 0) {
        do {
          uVar77 = uVar80 * 4;
          uVar80 = uVar80 + 1;
          pfVar1 = (float *)(param_1 + (ulonglong)uVar77 * 4);
          fVar38 = *pfVar1;
          fVar39 = pfVar1[1];
          fVar40 = pfVar1[2];
          fVar41 = pfVar1[3];
          uVar79 = (ulonglong)uVar77;
          pfVar1 = (float *)(*param_2 + uVar79 * 4);
          *pfVar1 = fVar38 * 0.7071;
          pfVar1[1] = fVar39 * 0.7071;
          pfVar1[2] = fVar40 * 0.7071;
          pfVar1[3] = fVar41 * 0.7071;
          pfVar1 = (float *)(param_2[1] + uVar79 * 4);
          *pfVar1 = fVar38 * 0.7071;
          pfVar1[1] = fVar39 * 0.7071;
          pfVar1[2] = fVar40 * 0.7071;
          pfVar1[3] = fVar41 * 0.7071;
          puVar6 = (undefined8 *)(param_2[2] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[3] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[4] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[5] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
        } while (uVar80 < param_5 >> 2);
        return;
      }
    }
    else {
      if (param_4 != 8) goto FUN_1807d90a0;
      uVar80 = 0;
      if (param_5 >> 2 != 0) {
        do {
          uVar77 = uVar80 * 4;
          uVar80 = uVar80 + 1;
          pfVar1 = (float *)(param_1 + (ulonglong)uVar77 * 4);
          fVar38 = *pfVar1;
          fVar39 = pfVar1[1];
          fVar40 = pfVar1[2];
          fVar41 = pfVar1[3];
          uVar79 = (ulonglong)uVar77;
          pfVar1 = (float *)(*param_2 + uVar79 * 4);
          *pfVar1 = fVar38 * 0.7071;
          pfVar1[1] = fVar39 * 0.7071;
          pfVar1[2] = fVar40 * 0.7071;
          pfVar1[3] = fVar41 * 0.7071;
          pfVar1 = (float *)(param_2[1] + uVar79 * 4);
          *pfVar1 = fVar38 * 0.7071;
          pfVar1[1] = fVar39 * 0.7071;
          pfVar1[2] = fVar40 * 0.7071;
          pfVar1[3] = fVar41 * 0.7071;
          puVar6 = (undefined8 *)(param_2[2] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[3] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[4] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[5] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[6] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[7] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
        } while (uVar80 < param_5 >> 2);
        return;
      }
    }
  }
  else if (param_3 == 2) {
    if (param_4 == 1) {
      uVar80 = 0;
      if (param_5 >> 2 != 0) {
        do {
          pfVar1 = (float *)(param_1 + (ulonglong)(uVar80 * 8) * 4);
          fVar38 = pfVar1[2];
          fVar39 = pfVar1[3];
          pfVar2 = (float *)(param_1 + (ulonglong)(uVar80 * 8 + 4) * 4);
          fVar40 = *pfVar2;
          fVar41 = pfVar2[1];
          fVar42 = pfVar2[2];
          fVar43 = pfVar2[3];
          uVar77 = uVar80 * 4;
          uVar80 = uVar80 + 1;
          pfVar2 = (float *)(*param_2 + (ulonglong)uVar77 * 4);
          *pfVar2 = (pfVar1[1] + *pfVar1) * 0.70710677;
          pfVar2[1] = (fVar39 + fVar38) * 0.70710677;
          pfVar2[2] = (fVar41 + fVar40) * 0.70710677;
          pfVar2[3] = (fVar43 + fVar42) * 0.70710677;
        } while (uVar80 < param_5 >> 2);
        return;
      }
    }
    else if (param_4 == 2) {
      uVar80 = 0;
      if (param_5 >> 2 != 0) {
        do {
          puVar3 = (undefined4 *)(param_1 + (ulonglong)(uVar80 * 8) * 4);
          uVar15 = puVar3[1];
          uVar16 = puVar3[2];
          uVar17 = puVar3[3];
          puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar80 * 8 + 4) * 4);
          uVar18 = *puVar4;
          uVar19 = puVar4[1];
          uVar20 = puVar4[2];
          uVar21 = puVar4[3];
          uVar77 = uVar80 * 4;
          uVar80 = uVar80 + 1;
          puVar4 = (undefined4 *)(*param_2 + (ulonglong)uVar77 * 4);
          *puVar4 = *puVar3;
          puVar4[1] = uVar16;
          puVar4[2] = uVar18;
          puVar4[3] = uVar20;
          puVar3 = (undefined4 *)(param_2[1] + (ulonglong)uVar77 * 4);
          *puVar3 = uVar15;
          puVar3[1] = uVar17;
          puVar3[2] = uVar19;
          puVar3[3] = uVar21;
        } while (uVar80 < param_5 >> 2);
        return;
      }
    }
    else if (param_4 == 4) {
      uVar80 = 0;
      if (param_5 >> 2 != 0) {
        do {
          puVar3 = (undefined4 *)(param_1 + (ulonglong)(uVar80 * 8) * 4);
          uVar15 = puVar3[1];
          uVar16 = puVar3[2];
          uVar17 = puVar3[3];
          puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar80 * 8 + 4) * 4);
          uVar18 = *puVar4;
          uVar19 = puVar4[1];
          uVar20 = puVar4[2];
          uVar21 = puVar4[3];
          uVar79 = (ulonglong)(uVar80 * 4);
          uVar80 = uVar80 + 1;
          puVar4 = (undefined4 *)(*param_2 + uVar79 * 4);
          *puVar4 = *puVar3;
          puVar4[1] = uVar16;
          puVar4[2] = uVar18;
          puVar4[3] = uVar20;
          puVar3 = (undefined4 *)(param_2[1] + uVar79 * 4);
          *puVar3 = uVar15;
          puVar3[1] = uVar17;
          puVar3[2] = uVar19;
          puVar3[3] = uVar21;
          puVar6 = (undefined8 *)(param_2[2] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[3] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
        } while (uVar80 < param_5 >> 2);
        return;
      }
    }
    else if (param_4 == 6) {
      uVar80 = 0;
      if (param_5 >> 2 != 0) {
        do {
          puVar3 = (undefined4 *)(param_1 + (ulonglong)(uVar80 * 8) * 4);
          uVar15 = puVar3[1];
          uVar16 = puVar3[2];
          uVar17 = puVar3[3];
          puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar80 * 8 + 4) * 4);
          uVar18 = *puVar4;
          uVar19 = puVar4[1];
          uVar20 = puVar4[2];
          uVar21 = puVar4[3];
          uVar79 = (ulonglong)(uVar80 * 4);
          uVar80 = uVar80 + 1;
          puVar4 = (undefined4 *)(*param_2 + uVar79 * 4);
          *puVar4 = *puVar3;
          puVar4[1] = uVar16;
          puVar4[2] = uVar18;
          puVar4[3] = uVar20;
          puVar3 = (undefined4 *)(param_2[1] + uVar79 * 4);
          *puVar3 = uVar15;
          puVar3[1] = uVar17;
          puVar3[2] = uVar19;
          puVar3[3] = uVar21;
          puVar6 = (undefined8 *)(param_2[2] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[3] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[4] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[5] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
        } while (uVar80 < param_5 >> 2);
        return;
      }
    }
    else {
      if (param_4 != 8) goto FUN_1807d90a0;
      uVar80 = 0;
      if (param_5 >> 2 != 0) {
        do {
          puVar3 = (undefined4 *)(param_1 + (ulonglong)(uVar80 * 8) * 4);
          uVar15 = puVar3[1];
          uVar16 = puVar3[2];
          uVar17 = puVar3[3];
          puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar80 * 8 + 4) * 4);
          uVar18 = *puVar4;
          uVar19 = puVar4[1];
          uVar20 = puVar4[2];
          uVar21 = puVar4[3];
          uVar79 = (ulonglong)(uVar80 * 4);
          uVar80 = uVar80 + 1;
          puVar4 = (undefined4 *)(*param_2 + uVar79 * 4);
          *puVar4 = *puVar3;
          puVar4[1] = uVar16;
          puVar4[2] = uVar18;
          puVar4[3] = uVar20;
          puVar3 = (undefined4 *)(param_2[1] + uVar79 * 4);
          *puVar3 = uVar15;
          puVar3[1] = uVar17;
          puVar3[2] = uVar19;
          puVar3[3] = uVar21;
          puVar6 = (undefined8 *)(param_2[2] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[3] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[4] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[5] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[6] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(param_2[7] + uVar79 * 4);
          *puVar6 = 0;
          puVar6[1] = 0;
        } while (uVar80 < param_5 >> 2);
        return;
      }
    }
  }
  else {
    if (param_3 != 4) {
      if (param_3 == 6) {
        if (param_4 == 1) {
          uVar80 = 0;
          if (param_5 >> 2 != 0) {
            lVar7 = *param_2;
            do {
              uVar77 = uVar80 * 0x18;
              pfVar1 = (float *)(param_1 + (ulonglong)uVar77 * 4);
              pfVar2 = (float *)(param_1 + (ulonglong)(uVar77 + 4) * 4);
              fVar38 = pfVar2[2];
              fVar39 = pfVar2[3];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 8) * 4);
              fVar40 = *pfVar5;
              fVar41 = pfVar5[2];
              fVar42 = pfVar5[3];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0xc) * 4);
              fVar43 = *pfVar5;
              fVar44 = pfVar5[1];
              fVar45 = pfVar5[2];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0x10) * 4);
              fVar46 = *pfVar5;
              fVar47 = pfVar5[1];
              fVar48 = pfVar5[2];
              fVar49 = pfVar5[3];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0x14) * 4);
              fVar50 = *pfVar5;
              fVar51 = pfVar5[2];
              fVar52 = pfVar5[3];
              uVar77 = uVar80 * 4;
              uVar80 = uVar80 + 1;
              pfVar5 = (float *)(lVar7 + (ulonglong)uVar77 * 4);
              *pfVar5 = (pfVar2[1] + *pfVar2 + pfVar1[1] + *pfVar1 + pfVar1[2]) * 0.4472136;
              pfVar5[1] = (fVar42 + fVar41 + fVar39 + fVar38 + fVar40) * 0.4472136;
              pfVar5[2] = (fVar47 + fVar46 + fVar44 + fVar43 + fVar45) * 0.4472136;
              pfVar5[3] = (fVar52 + fVar51 + fVar49 + fVar48 + fVar50) * 0.4472136;
            } while (uVar80 < param_5 >> 2);
          }
          return;
        }
        if (param_4 == 2) {
          uVar80 = 0;
          if (param_5 >> 2 != 0) {
            lVar7 = *param_2;
            lVar8 = param_2[1];
            do {
              uVar77 = uVar80 * 0x18;
              pfVar1 = (float *)(param_1 + (ulonglong)uVar77 * 4);
              fVar38 = pfVar1[1];
              fVar39 = pfVar1[2];
              pfVar2 = (float *)(param_1 + (ulonglong)(uVar77 + 4) * 4);
              fVar40 = pfVar2[1];
              fVar41 = pfVar2[2];
              fVar42 = pfVar2[3];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 8) * 4);
              fVar43 = *pfVar5;
              fVar44 = pfVar5[2];
              fVar45 = pfVar5[3];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0xc) * 4);
              fVar46 = *pfVar5;
              fVar47 = pfVar5[1];
              fVar48 = pfVar5[2];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0x10) * 4);
              fVar49 = *pfVar5;
              fVar50 = pfVar5[1];
              fVar51 = pfVar5[2];
              fVar52 = pfVar5[3];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0x14) * 4);
              fVar53 = *pfVar5;
              fVar54 = pfVar5[2];
              fVar55 = pfVar5[3];
              uVar77 = uVar80 * 4;
              uVar80 = uVar80 + 1;
              pfVar5 = (float *)(lVar7 + (ulonglong)uVar77 * 4);
              *pfVar5 = (*pfVar2 + fVar39) * 0.7071 + *pfVar1;
              pfVar5[1] = (fVar44 + fVar43) * 0.7071 + fVar41;
              pfVar5[2] = (fVar49 + fVar48) * 0.7071 + fVar46;
              pfVar5[3] = (fVar54 + fVar53) * 0.7071 + fVar51;
              pfVar1 = (float *)(lVar8 + (ulonglong)uVar77 * 4);
              *pfVar1 = (fVar40 + fVar39) * 0.7071 + fVar38;
              pfVar1[1] = (fVar45 + fVar43) * 0.7071 + fVar42;
              pfVar1[2] = (fVar50 + fVar48) * 0.7071 + fVar47;
              pfVar1[3] = (fVar55 + fVar53) * 0.7071 + fVar52;
            } while (uVar80 < param_5 >> 2);
          }
          return;
        }
        if (param_4 == 4) {
          uVar80 = 0;
          if (param_5 >> 2 != 0) {
            lVar7 = *param_2;
            lVar8 = param_2[1];
            lVar9 = param_2[3];
            lVar10 = param_2[2];
            do {
              uVar77 = uVar80 * 0x18;
              pfVar1 = (float *)(param_1 + (ulonglong)uVar77 * 4);
              fVar38 = pfVar1[1];
              fVar39 = pfVar1[2];
              puVar3 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 4) * 4);
              uVar15 = *puVar3;
              uVar16 = puVar3[1];
              fVar40 = (float)puVar3[2];
              fVar41 = (float)puVar3[3];
              pfVar2 = (float *)(param_1 + (ulonglong)(uVar77 + 8) * 4);
              fVar42 = *pfVar2;
              fVar43 = pfVar2[2];
              fVar44 = pfVar2[3];
              pfVar2 = (float *)(param_1 + (ulonglong)(uVar77 + 0xc) * 4);
              fVar45 = *pfVar2;
              fVar46 = pfVar2[1];
              fVar47 = pfVar2[2];
              puVar3 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 0x10) * 4);
              uVar17 = *puVar3;
              uVar18 = puVar3[1];
              fVar48 = (float)puVar3[2];
              fVar49 = (float)puVar3[3];
              pfVar2 = (float *)(param_1 + (ulonglong)(uVar77 + 0x14) * 4);
              fVar50 = *pfVar2;
              fVar51 = pfVar2[2];
              fVar52 = pfVar2[3];
              uVar79 = (ulonglong)(uVar80 * 4);
              uVar80 = uVar80 + 1;
              pfVar2 = (float *)(lVar7 + uVar79 * 4);
              *pfVar2 = *pfVar1 + fVar39 * 0.7071;
              pfVar2[1] = fVar40 + fVar42 * 0.7071;
              pfVar2[2] = fVar45 + fVar47 * 0.7071;
              pfVar2[3] = fVar48 + fVar50 * 0.7071;
              pfVar1 = (float *)(lVar8 + uVar79 * 4);
              *pfVar1 = fVar38 + fVar39 * 0.7071;
              pfVar1[1] = fVar41 + fVar42 * 0.7071;
              pfVar1[2] = fVar46 + fVar47 * 0.7071;
              pfVar1[3] = fVar49 + fVar50 * 0.7071;
              puVar3 = (undefined4 *)(lVar10 + uVar79 * 4);
              *puVar3 = uVar15;
              puVar3[1] = fVar43;
              puVar3[2] = uVar17;
              puVar3[3] = fVar51;
              puVar3 = (undefined4 *)(lVar9 + uVar79 * 4);
              *puVar3 = uVar16;
              puVar3[1] = fVar44;
              puVar3[2] = uVar18;
              puVar3[3] = fVar52;
            } while (uVar80 < param_5 >> 2);
          }
          return;
        }
        if (param_4 == 6) {
          uVar80 = 0;
          if (param_5 >> 2 != 0) {
            lVar7 = *param_2;
            lVar8 = param_2[1];
            lVar9 = param_2[4];
            lVar10 = param_2[3];
            lVar11 = param_2[2];
            lVar12 = param_2[5];
            do {
              uVar77 = uVar80 * 0x18;
              puVar3 = (undefined4 *)(param_1 + (ulonglong)uVar77 * 4);
              uVar15 = puVar3[1];
              uVar16 = puVar3[2];
              uVar17 = puVar3[3];
              puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 4) * 4);
              uVar18 = *puVar4;
              uVar19 = puVar4[1];
              uVar20 = puVar4[2];
              uVar21 = puVar4[3];
              puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 8) * 4);
              uVar22 = *puVar4;
              uVar23 = puVar4[1];
              uVar24 = puVar4[2];
              uVar25 = puVar4[3];
              puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 0xc) * 4);
              uVar26 = *puVar4;
              uVar27 = puVar4[1];
              uVar28 = puVar4[2];
              uVar29 = puVar4[3];
              puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 0x10) * 4);
              uVar30 = *puVar4;
              uVar31 = puVar4[1];
              uVar32 = puVar4[2];
              uVar33 = puVar4[3];
              puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 0x14) * 4);
              uVar34 = *puVar4;
              uVar35 = puVar4[1];
              uVar36 = puVar4[2];
              uVar37 = puVar4[3];
              uVar79 = (ulonglong)(uVar80 * 4);
              uVar80 = uVar80 + 1;
              puVar4 = (undefined4 *)(lVar7 + uVar79 * 4);
              *puVar4 = *puVar3;
              puVar4[1] = uVar20;
              puVar4[2] = uVar26;
              puVar4[3] = uVar32;
              puVar3 = (undefined4 *)(lVar8 + uVar79 * 4);
              *puVar3 = uVar15;
              puVar3[1] = uVar21;
              puVar3[2] = uVar27;
              puVar3[3] = uVar33;
              puVar3 = (undefined4 *)(lVar11 + uVar79 * 4);
              *puVar3 = uVar16;
              puVar3[1] = uVar22;
              puVar3[2] = uVar28;
              puVar3[3] = uVar34;
              puVar3 = (undefined4 *)(lVar10 + uVar79 * 4);
              *puVar3 = uVar17;
              puVar3[1] = uVar23;
              puVar3[2] = uVar29;
              puVar3[3] = uVar35;
              puVar3 = (undefined4 *)(lVar9 + uVar79 * 4);
              *puVar3 = uVar18;
              puVar3[1] = uVar24;
              puVar3[2] = uVar30;
              puVar3[3] = uVar36;
              puVar3 = (undefined4 *)(lVar12 + uVar79 * 4);
              *puVar3 = uVar19;
              puVar3[1] = uVar25;
              puVar3[2] = uVar31;
              puVar3[3] = uVar37;
            } while (uVar80 < param_5 >> 2);
          }
          return;
        }
        if (param_4 == 8) {
          uVar80 = 0;
          if (param_5 >> 2 != 0) {
            lVar7 = *param_2;
            lVar8 = param_2[1];
            lVar9 = param_2[4];
            lVar10 = param_2[3];
            lVar11 = param_2[2];
            lVar12 = param_2[7];
            lVar13 = param_2[5];
            lVar14 = param_2[6];
            do {
              uVar77 = uVar80 * 0x18;
              puVar3 = (undefined4 *)(param_1 + (ulonglong)uVar77 * 4);
              uVar15 = puVar3[1];
              uVar16 = puVar3[2];
              uVar17 = puVar3[3];
              pfVar1 = (float *)(param_1 + (ulonglong)(uVar77 + 4) * 4);
              fVar38 = *pfVar1;
              fVar39 = pfVar1[1];
              fVar40 = pfVar1[2];
              fVar41 = pfVar1[3];
              puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 8) * 4);
              uVar18 = *puVar4;
              uVar19 = puVar4[1];
              fVar42 = (float)puVar4[2];
              fVar43 = (float)puVar4[3];
              puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 0xc) * 4);
              uVar20 = *puVar4;
              uVar21 = puVar4[1];
              uVar22 = puVar4[2];
              uVar23 = puVar4[3];
              pfVar1 = (float *)(param_1 + (ulonglong)(uVar77 + 0x10) * 4);
              fVar44 = *pfVar1;
              fVar45 = pfVar1[1];
              fVar46 = pfVar1[2];
              fVar47 = pfVar1[3];
              puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 0x14) * 4);
              uVar24 = *puVar4;
              uVar25 = puVar4[1];
              fVar48 = (float)puVar4[2];
              fVar49 = (float)puVar4[3];
              uVar79 = (ulonglong)(uVar80 * 4);
              uVar80 = uVar80 + 1;
              puVar4 = (undefined4 *)(lVar7 + uVar79 * 4);
              *puVar4 = *puVar3;
              puVar4[1] = fVar40;
              puVar4[2] = uVar20;
              puVar4[3] = fVar46;
              puVar3 = (undefined4 *)(lVar8 + uVar79 * 4);
              *puVar3 = uVar15;
              puVar3[1] = fVar41;
              puVar3[2] = uVar21;
              puVar3[3] = fVar47;
              puVar3 = (undefined4 *)(lVar11 + uVar79 * 4);
              *puVar3 = uVar16;
              puVar3[1] = uVar18;
              puVar3[2] = uVar22;
              puVar3[3] = uVar24;
              puVar3 = (undefined4 *)(lVar10 + uVar79 * 4);
              *puVar3 = uVar17;
              puVar3[1] = uVar19;
              puVar3[2] = uVar23;
              puVar3[3] = uVar25;
              pfVar1 = (float *)(lVar9 + uVar79 * 4);
              *pfVar1 = fVar38 * 0.8828;
              pfVar1[1] = fVar42 * 0.8828;
              pfVar1[2] = fVar44 * 0.8828;
              pfVar1[3] = fVar48 * 0.8828;
              pfVar1 = (float *)(lVar13 + uVar79 * 4);
              *pfVar1 = fVar39 * 0.8828;
              pfVar1[1] = fVar43 * 0.8828;
              pfVar1[2] = fVar45 * 0.8828;
              pfVar1[3] = fVar49 * 0.8828;
              pfVar1 = (float *)(lVar14 + uVar79 * 4);
              *pfVar1 = fVar38 * 0.4697;
              pfVar1[1] = fVar42 * 0.4697;
              pfVar1[2] = fVar44 * 0.4697;
              pfVar1[3] = fVar48 * 0.4697;
              pfVar1 = (float *)(lVar12 + uVar79 * 4);
              *pfVar1 = fVar39 * 0.4697;
              pfVar1[1] = fVar43 * 0.4697;
              pfVar1[2] = fVar45 * 0.4697;
              pfVar1[3] = fVar49 * 0.4697;
            } while (uVar80 < param_5 >> 2);
          }
          return;
        }
      }
      else if (param_3 == 8) {
        if (param_4 == 1) {
          uVar80 = 0;
          if (param_5 >> 2 != 0) {
            lVar7 = *param_2;
            do {
              uVar77 = uVar80 * 0x20;
              pfVar1 = (float *)(param_1 + (ulonglong)uVar77 * 4);
              pfVar2 = (float *)(param_1 + (ulonglong)(uVar77 + 4) * 4);
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 8) * 4);
              fVar38 = *pfVar5;
              fVar39 = pfVar5[1];
              fVar40 = pfVar5[2];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0xc) * 4);
              fVar41 = *pfVar5;
              fVar42 = pfVar5[1];
              fVar43 = pfVar5[2];
              fVar44 = pfVar5[3];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0x10) * 4);
              fVar45 = *pfVar5;
              fVar46 = pfVar5[1];
              fVar47 = pfVar5[2];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0x14) * 4);
              fVar48 = *pfVar5;
              fVar49 = pfVar5[1];
              fVar50 = pfVar5[2];
              fVar51 = pfVar5[3];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0x18) * 4);
              fVar52 = *pfVar5;
              fVar53 = pfVar5[1];
              fVar54 = pfVar5[2];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0x1c) * 4);
              fVar55 = *pfVar5;
              fVar56 = pfVar5[1];
              fVar57 = pfVar5[2];
              fVar58 = pfVar5[3];
              uVar77 = uVar80 * 4;
              uVar80 = uVar80 + 1;
              pfVar5 = (float *)(lVar7 + (ulonglong)uVar77 * 4);
              *pfVar5 = (pfVar1[2] + pfVar2[2] + *pfVar2 + *pfVar1 +
                        pfVar2[1] + pfVar1[1] + pfVar2[3]) * 0.37796447;
              pfVar5[1] = (fVar40 + fVar43 + fVar41 + fVar38 + fVar42 + fVar39 + fVar44) *
                          0.37796447;
              pfVar5[2] = (fVar47 + fVar50 + fVar48 + fVar45 + fVar49 + fVar46 + fVar51) *
                          0.37796447;
              pfVar5[3] = (fVar54 + fVar57 + fVar55 + fVar52 + fVar56 + fVar53 + fVar58) *
                          0.37796447;
            } while (uVar80 < param_5 >> 2);
          }
          return;
        }
        if (param_4 == 2) {
          uVar80 = 0;
          if (param_5 >> 2 != 0) {
            lVar7 = *param_2;
            lVar8 = param_2[1];
            do {
              uVar77 = uVar80 * 0x20;
              pfVar1 = (float *)(param_1 + (ulonglong)uVar77 * 4);
              fVar38 = pfVar1[1];
              fVar39 = pfVar1[2];
              pfVar2 = (float *)(param_1 + (ulonglong)(uVar77 + 4) * 4);
              fVar40 = pfVar2[1];
              fVar41 = pfVar2[3];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 8) * 4);
              fVar42 = *pfVar5;
              fVar43 = pfVar5[1];
              fVar44 = pfVar5[2];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0xc) * 4);
              fVar45 = *pfVar5;
              fVar46 = pfVar5[1];
              fVar47 = pfVar5[2];
              fVar48 = pfVar5[3];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0x10) * 4);
              fVar49 = *pfVar5;
              fVar50 = pfVar5[1];
              fVar51 = pfVar5[2];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0x14) * 4);
              fVar52 = *pfVar5;
              fVar53 = pfVar5[1];
              fVar54 = pfVar5[2];
              fVar55 = pfVar5[3];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0x18) * 4);
              fVar56 = *pfVar5;
              fVar57 = pfVar5[1];
              fVar58 = pfVar5[2];
              pfVar5 = (float *)(param_1 + (ulonglong)(uVar77 + 0x1c) * 4);
              fVar59 = *pfVar5;
              fVar60 = pfVar5[1];
              fVar61 = pfVar5[2];
              fVar62 = pfVar5[3];
              uVar77 = uVar80 * 4;
              uVar80 = uVar80 + 1;
              pfVar5 = (float *)(lVar7 + (ulonglong)uVar77 * 4);
              *pfVar5 = pfVar2[2] * 0.596 + *pfVar1 + (*pfVar2 + fVar39) * 0.7071;
              pfVar5[1] = fVar47 * 0.596 + fVar42 + (fVar45 + fVar44) * 0.7071;
              pfVar5[2] = fVar54 * 0.596 + fVar49 + (fVar52 + fVar51) * 0.7071;
              pfVar5[3] = fVar61 * 0.596 + fVar56 + (fVar59 + fVar58) * 0.7071;
              pfVar1 = (float *)(lVar8 + (ulonglong)uVar77 * 4);
              *pfVar1 = fVar41 * 0.596 + fVar38 + (fVar40 + fVar39) * 0.7071;
              pfVar1[1] = fVar48 * 0.596 + fVar43 + (fVar46 + fVar44) * 0.7071;
              pfVar1[2] = fVar55 * 0.596 + fVar50 + (fVar53 + fVar51) * 0.7071;
              pfVar1[3] = fVar62 * 0.596 + fVar57 + (fVar60 + fVar58) * 0.7071;
            } while (uVar80 < param_5 >> 2);
          }
          return;
        }
        if (param_4 == 4) {
          uVar80 = 0;
          if (param_5 >> 2 != 0) {
            lVar7 = *param_2;
            lVar8 = param_2[1];
            lVar9 = param_2[3];
            lVar10 = param_2[2];
            do {
              uVar77 = uVar80 * 0x20;
              pfVar1 = (float *)(param_1 + (ulonglong)uVar77 * 4);
              fVar38 = *pfVar1;
              fVar39 = pfVar1[1];
              fVar40 = pfVar1[2];
              pfVar1 = (float *)(param_1 + (ulonglong)(uVar77 + 4) * 4);
              fVar41 = *pfVar1;
              fVar42 = pfVar1[1];
              fVar43 = pfVar1[2];
              fVar44 = pfVar1[3];
              pfVar1 = (float *)(param_1 + (ulonglong)(uVar77 + 8) * 4);
              fVar45 = *pfVar1;
              fVar46 = pfVar1[1];
              fVar47 = pfVar1[2];
              pfVar1 = (float *)(param_1 + (ulonglong)(uVar77 + 0xc) * 4);
              fVar48 = *pfVar1;
              fVar49 = pfVar1[1];
              fVar50 = pfVar1[2];
              fVar51 = pfVar1[3];
              pfVar1 = (float *)(param_1 + (ulonglong)(uVar77 + 0x10) * 4);
              fVar52 = *pfVar1;
              fVar53 = pfVar1[1];
              fVar54 = pfVar1[2];
              pfVar1 = (float *)(param_1 + (ulonglong)(uVar77 + 0x14) * 4);
              fVar55 = *pfVar1;
              fVar56 = pfVar1[1];
              fVar57 = pfVar1[2];
              fVar58 = pfVar1[3];
              pfVar1 = (float *)(param_1 + (ulonglong)(uVar77 + 0x18) * 4);
              fVar59 = *pfVar1;
              fVar60 = pfVar1[1];
              fVar61 = pfVar1[2];
              pfVar1 = (float *)(param_1 + (ulonglong)(uVar77 + 0x1c) * 4);
              fVar62 = *pfVar1;
              fVar63 = pfVar1[1];
              fVar64 = pfVar1[2];
              fVar65 = pfVar1[3];
              uVar79 = (ulonglong)(uVar80 * 4);
              uVar80 = uVar80 + 1;
              pfVar1 = (float *)(lVar7 + uVar79 * 4);
              *pfVar1 = fVar39 * 0.2588 + fVar38 * 0.9659 + fVar40 * 0.7071 + fVar41 * 0.7071;
              pfVar1[1] = fVar46 * 0.2588 + fVar45 * 0.9659 + fVar47 * 0.7071 + fVar48 * 0.7071;
              pfVar1[2] = fVar53 * 0.2588 + fVar52 * 0.9659 + fVar54 * 0.7071 + fVar55 * 0.7071;
              pfVar1[3] = fVar60 * 0.2588 + fVar59 * 0.9659 + fVar61 * 0.7071 + fVar62 * 0.7071;
              pfVar1 = (float *)(lVar8 + uVar79 * 4);
              *pfVar1 = fVar38 * 0.2588 + fVar39 * 0.9659 + fVar40 * 0.7071 + fVar42 * 0.7071;
              pfVar1[1] = fVar45 * 0.2588 + fVar46 * 0.9659 + fVar47 * 0.7071 + fVar49 * 0.7071;
              pfVar1[2] = fVar52 * 0.2588 + fVar53 * 0.9659 + fVar54 * 0.7071 + fVar56 * 0.7071;
              pfVar1[3] = fVar59 * 0.2588 + fVar60 * 0.9659 + fVar61 * 0.7071 + fVar63 * 0.7071;
              pfVar1 = (float *)(lVar10 + uVar79 * 4);
              *pfVar1 = fVar44 * 0.2588 + fVar43 * 0.9659 + fVar41 * 0.7071;
              pfVar1[1] = fVar51 * 0.2588 + fVar50 * 0.9659 + fVar48 * 0.7071;
              pfVar1[2] = fVar58 * 0.2588 + fVar57 * 0.9659 + fVar55 * 0.7071;
              pfVar1[3] = fVar65 * 0.2588 + fVar64 * 0.9659 + fVar62 * 0.7071;
              pfVar1 = (float *)(lVar9 + uVar79 * 4);
              *pfVar1 = fVar43 * 0.2588 + fVar44 * 0.9659 + fVar42 * 0.7071;
              pfVar1[1] = fVar50 * 0.2588 + fVar51 * 0.9659 + fVar49 * 0.7071;
              pfVar1[2] = fVar57 * 0.2588 + fVar58 * 0.9659 + fVar56 * 0.7071;
              pfVar1[3] = fVar64 * 0.2588 + fVar65 * 0.9659 + fVar63 * 0.7071;
            } while (uVar80 < param_5 >> 2);
          }
          return;
        }
        if (param_4 == 6) {
          uVar80 = 0;
          if (param_5 >> 2 != 0) {
            lVar7 = *param_2;
            lVar8 = param_2[1];
            lVar9 = param_2[4];
            lVar10 = param_2[3];
            lVar11 = param_2[2];
            lVar12 = param_2[5];
            do {
              uVar77 = uVar80 * 0x20;
              pfVar1 = (float *)(param_1 + (ulonglong)uVar77 * 4);
              fVar38 = pfVar1[1];
              fVar39 = pfVar1[2];
              fVar40 = pfVar1[3];
              pfVar2 = (float *)(param_1 + (ulonglong)(uVar77 + 4) * 4);
              fVar41 = *pfVar2;
              fVar42 = pfVar2[1];
              fVar43 = pfVar2[2];
              fVar44 = pfVar2[3];
              pfVar2 = (float *)(param_1 + (ulonglong)(uVar77 + 8) * 4);
              fVar45 = *pfVar2;
              fVar46 = pfVar2[1];
              fVar47 = pfVar2[2];
              fVar48 = pfVar2[3];
              pfVar2 = (float *)(param_1 + (ulonglong)(uVar77 + 0xc) * 4);
              fVar49 = *pfVar2;
              fVar50 = pfVar2[1];
              fVar51 = pfVar2[2];
              fVar52 = pfVar2[3];
              pfVar2 = (float *)(param_1 + (ulonglong)(uVar77 + 0x10) * 4);
              fVar53 = *pfVar2;
              fVar54 = pfVar2[1];
              fVar55 = pfVar2[2];
              fVar56 = pfVar2[3];
              pfVar2 = (float *)(param_1 + (ulonglong)(uVar77 + 0x14) * 4);
              fVar57 = *pfVar2;
              fVar58 = pfVar2[1];
              fVar59 = pfVar2[2];
              fVar60 = pfVar2[3];
              pfVar2 = (float *)(param_1 + (ulonglong)(uVar77 + 0x18) * 4);
              fVar61 = *pfVar2;
              fVar62 = pfVar2[1];
              fVar63 = pfVar2[2];
              fVar64 = pfVar2[3];
              pfVar2 = (float *)(param_1 + (ulonglong)(uVar77 + 0x1c) * 4);
              fVar65 = *pfVar2;
              fVar66 = pfVar2[1];
              fVar67 = pfVar2[2];
              fVar68 = pfVar2[3];
              uVar79 = (ulonglong)(uVar80 * 4);
              uVar80 = uVar80 + 1;
              pfVar2 = (float *)(lVar7 + uVar79 * 4);
              *pfVar2 = *pfVar1 + fVar41 * 0.3673;
              pfVar2[1] = fVar45 + fVar49 * 0.3673;
              pfVar2[2] = fVar53 + fVar57 * 0.3673;
              pfVar2[3] = fVar61 + fVar65 * 0.3673;
              pfVar1 = (float *)(lVar8 + uVar79 * 4);
              *pfVar1 = fVar38 + fVar42 * 0.3673;
              pfVar1[1] = fVar46 + fVar50 * 0.3673;
              pfVar1[2] = fVar54 + fVar58 * 0.3673;
              pfVar1[3] = fVar62 + fVar66 * 0.3673;
              pfVar1 = (float *)(lVar11 + uVar79 * 4);
              *pfVar1 = fVar39;
              pfVar1[1] = fVar47;
              pfVar1[2] = fVar55;
              pfVar1[3] = fVar63;
              pfVar1 = (float *)(lVar10 + uVar79 * 4);
              *pfVar1 = fVar40;
              pfVar1[1] = fVar48;
              pfVar1[2] = fVar56;
              pfVar1[3] = fVar64;
              pfVar1 = (float *)(lVar9 + uVar79 * 4);
              *pfVar1 = fVar44 * 0.46 + fVar43 * 0.7 + fVar41 * 0.93;
              pfVar1[1] = fVar52 * 0.46 + fVar51 * 0.7 + fVar49 * 0.93;
              pfVar1[2] = fVar60 * 0.46 + fVar59 * 0.7 + fVar57 * 0.93;
              pfVar1[3] = fVar68 * 0.46 + fVar67 * 0.7 + fVar65 * 0.93;
              pfVar1 = (float *)(lVar12 + uVar79 * 4);
              *pfVar1 = fVar43 * 0.46 + fVar44 * 0.7 + fVar42 * 0.93;
              pfVar1[1] = fVar51 * 0.46 + fVar52 * 0.7 + fVar50 * 0.93;
              pfVar1[2] = fVar59 * 0.46 + fVar60 * 0.7 + fVar58 * 0.93;
              pfVar1[3] = fVar67 * 0.46 + fVar68 * 0.7 + fVar66 * 0.93;
            } while (uVar80 < param_5 >> 2);
          }
          return;
        }
        if (param_4 == 8) {
          uVar80 = 0;
          if (param_5 >> 2 != 0) {
            lVar7 = *param_2;
            lVar8 = param_2[1];
            lVar9 = param_2[4];
            lVar10 = param_2[3];
            lVar11 = param_2[2];
            lVar12 = param_2[7];
            lVar13 = param_2[5];
            lVar14 = param_2[6];
            do {
              uVar77 = uVar80 * 0x20;
              puVar3 = (undefined4 *)(param_1 + (ulonglong)uVar77 * 4);
              uVar15 = puVar3[1];
              uVar16 = puVar3[2];
              uVar17 = puVar3[3];
              puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 4) * 4);
              uVar18 = *puVar4;
              uVar19 = puVar4[1];
              uVar20 = puVar4[2];
              uVar21 = puVar4[3];
              puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 8) * 4);
              uVar22 = *puVar4;
              uVar23 = puVar4[1];
              uVar24 = puVar4[2];
              uVar25 = puVar4[3];
              puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 0xc) * 4);
              uVar26 = *puVar4;
              uVar27 = puVar4[1];
              uVar28 = puVar4[2];
              uVar29 = puVar4[3];
              puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 0x10) * 4);
              uVar30 = *puVar4;
              uVar31 = puVar4[1];
              uVar32 = puVar4[2];
              uVar33 = puVar4[3];
              puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 0x14) * 4);
              uVar34 = *puVar4;
              uVar35 = puVar4[1];
              uVar36 = puVar4[2];
              uVar37 = puVar4[3];
              puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 0x18) * 4);
              uVar69 = *puVar4;
              uVar70 = puVar4[1];
              uVar71 = puVar4[2];
              uVar72 = puVar4[3];
              puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 0x1c) * 4);
              uVar73 = *puVar4;
              uVar74 = puVar4[1];
              uVar75 = puVar4[2];
              uVar76 = puVar4[3];
              uVar79 = (ulonglong)(uVar80 * 4);
              uVar80 = uVar80 + 1;
              puVar4 = (undefined4 *)(lVar7 + uVar79 * 4);
              *puVar4 = *puVar3;
              puVar4[1] = uVar22;
              puVar4[2] = uVar30;
              puVar4[3] = uVar69;
              puVar3 = (undefined4 *)(lVar8 + uVar79 * 4);
              *puVar3 = uVar15;
              puVar3[1] = uVar23;
              puVar3[2] = uVar31;
              puVar3[3] = uVar70;
              puVar3 = (undefined4 *)(lVar11 + uVar79 * 4);
              *puVar3 = uVar16;
              puVar3[1] = uVar24;
              puVar3[2] = uVar32;
              puVar3[3] = uVar71;
              puVar3 = (undefined4 *)(lVar10 + uVar79 * 4);
              *puVar3 = uVar17;
              puVar3[1] = uVar25;
              puVar3[2] = uVar33;
              puVar3[3] = uVar72;
              puVar3 = (undefined4 *)(lVar9 + uVar79 * 4);
              *puVar3 = uVar18;
              puVar3[1] = uVar26;
              puVar3[2] = uVar34;
              puVar3[3] = uVar73;
              puVar3 = (undefined4 *)(lVar13 + uVar79 * 4);
              *puVar3 = uVar19;
              puVar3[1] = uVar27;
              puVar3[2] = uVar35;
              puVar3[3] = uVar74;
              puVar3 = (undefined4 *)(lVar14 + uVar79 * 4);
              *puVar3 = uVar20;
              puVar3[1] = uVar28;
              puVar3[2] = uVar36;
              puVar3[3] = uVar75;
              puVar3 = (undefined4 *)(lVar12 + uVar79 * 4);
              *puVar3 = uVar21;
              puVar3[1] = uVar29;
              puVar3[2] = uVar37;
              puVar3[3] = uVar76;
            } while (uVar80 < param_5 >> 2);
          }
          return;
        }
      }
FUN_1807d90a0:
                    // WARNING: Subroutine does not return
      FUN_1808fd200(param_1);
    }
    if (param_4 == 1) {
      uVar80 = 0;
      if (param_5 >> 2 != 0) {
        do {
          uVar77 = uVar80 * 4;
          uVar78 = uVar80 * 0x10;
          uVar80 = uVar80 + 1;
          pfVar1 = (float *)(param_1 + (ulonglong)uVar78 * 4);
          pfVar2 = (float *)(param_1 + (ulonglong)(uVar78 + 4) * 4);
          fVar38 = *pfVar2;
          fVar39 = pfVar2[1];
          fVar40 = pfVar2[2];
          fVar41 = pfVar2[3];
          pfVar2 = (float *)(param_1 + (ulonglong)(uVar78 + 8) * 4);
          fVar42 = *pfVar2;
          fVar43 = pfVar2[1];
          fVar44 = pfVar2[2];
          fVar45 = pfVar2[3];
          pfVar2 = (float *)(param_1 + (ulonglong)(uVar78 + 0xc) * 4);
          fVar46 = *pfVar2;
          fVar47 = pfVar2[1];
          fVar48 = pfVar2[2];
          fVar49 = pfVar2[3];
          pfVar2 = (float *)(*param_2 + (ulonglong)uVar77 * 4);
          *pfVar2 = (pfVar1[2] + pfVar1[3] + *pfVar1 + pfVar1[1]) * 0.5;
          pfVar2[1] = (fVar40 + fVar41 + fVar38 + fVar39) * 0.5;
          pfVar2[2] = (fVar44 + fVar45 + fVar42 + fVar43) * 0.5;
          pfVar2[3] = (fVar48 + fVar49 + fVar46 + fVar47) * 0.5;
        } while (uVar80 < param_5 >> 2);
        return;
      }
    }
    else if (param_4 == 2) {
      uVar80 = 0;
      if (param_5 >> 2 != 0) {
        do {
          uVar77 = uVar80 * 4;
          uVar78 = uVar80 * 0x10;
          uVar80 = uVar80 + 1;
          pfVar1 = (float *)(param_1 + (ulonglong)uVar78 * 4);
          fVar38 = pfVar1[1];
          fVar39 = pfVar1[3];
          pfVar2 = (float *)(param_1 + (ulonglong)(uVar78 + 4) * 4);
          fVar40 = *pfVar2;
          fVar41 = pfVar2[1];
          fVar42 = pfVar2[2];
          fVar43 = pfVar2[3];
          pfVar2 = (float *)(param_1 + (ulonglong)(uVar78 + 8) * 4);
          fVar44 = *pfVar2;
          fVar45 = pfVar2[1];
          fVar46 = pfVar2[2];
          fVar47 = pfVar2[3];
          pfVar2 = (float *)(param_1 + (ulonglong)(uVar78 + 0xc) * 4);
          fVar48 = *pfVar2;
          fVar49 = pfVar2[1];
          fVar50 = pfVar2[2];
          fVar51 = pfVar2[3];
          pfVar2 = (float *)(*param_2 + (ulonglong)uVar77 * 4);
          *pfVar2 = pfVar1[2] * 0.7071 + *pfVar1;
          pfVar2[1] = fVar42 * 0.7071 + fVar40;
          pfVar2[2] = fVar46 * 0.7071 + fVar44;
          pfVar2[3] = fVar50 * 0.7071 + fVar48;
          pfVar1 = (float *)(param_2[1] + (ulonglong)uVar77 * 4);
          *pfVar1 = fVar39 * 0.7071 + fVar38;
          pfVar1[1] = fVar43 * 0.7071 + fVar41;
          pfVar1[2] = fVar47 * 0.7071 + fVar45;
          pfVar1[3] = fVar51 * 0.7071 + fVar49;
        } while (uVar80 < param_5 >> 2);
        return;
      }
    }
    else {
      if (param_4 != 4) {
        if (param_4 == 6) {
          uVar80 = 0;
          if (param_5 >> 2 != 0) {
            lVar7 = *param_2;
            lVar8 = param_2[1];
            lVar9 = param_2[4];
            lVar10 = param_2[3];
            lVar11 = param_2[2];
            lVar12 = param_2[5];
            do {
              uVar77 = uVar80 * 0x10;
              pfVar1 = (float *)(param_1 + (ulonglong)uVar77 * 4);
              fVar38 = *pfVar1;
              fVar39 = pfVar1[1];
              fVar40 = pfVar1[2];
              fVar41 = pfVar1[3];
              pfVar1 = (float *)(param_1 + (ulonglong)(uVar77 + 4) * 4);
              fVar42 = *pfVar1;
              fVar43 = pfVar1[1];
              fVar44 = pfVar1[2];
              fVar45 = pfVar1[3];
              pfVar1 = (float *)(param_1 + (ulonglong)(uVar77 + 8) * 4);
              fVar46 = *pfVar1;
              fVar47 = pfVar1[1];
              fVar48 = pfVar1[2];
              fVar49 = pfVar1[3];
              pfVar1 = (float *)(param_1 + (ulonglong)(uVar77 + 0xc) * 4);
              fVar50 = *pfVar1;
              fVar51 = pfVar1[1];
              fVar52 = pfVar1[2];
              fVar53 = pfVar1[3];
              uVar79 = (ulonglong)(uVar80 * 4);
              uVar80 = uVar80 + 1;
              pfVar1 = (float *)(lVar7 + uVar79 * 4);
              *pfVar1 = fVar38 * 0.9616;
              pfVar1[1] = fVar42 * 0.9616;
              pfVar1[2] = fVar46 * 0.9616;
              pfVar1[3] = fVar50 * 0.9616;
              pfVar1 = (float *)(lVar8 + uVar79 * 4);
              *pfVar1 = fVar39 * 0.9616;
              pfVar1[1] = fVar43 * 0.9616;
              pfVar1[2] = fVar47 * 0.9616;
              pfVar1[3] = fVar51 * 0.9616;
              puVar6 = (undefined8 *)(lVar11 + uVar79 * 4);
              *puVar6 = 0;
              puVar6[1] = 0;
              puVar6 = (undefined8 *)(lVar10 + uVar79 * 4);
              *puVar6 = 0;
              puVar6[1] = 0;
              pfVar1 = (float *)(lVar9 + uVar79 * 4);
              *pfVar1 = fVar40 * 0.9603 + fVar38 * 0.2746 + fVar41 * 0.4226;
              pfVar1[1] = fVar44 * 0.9603 + fVar42 * 0.2746 + fVar45 * 0.4226;
              pfVar1[2] = fVar48 * 0.9603 + fVar46 * 0.2746 + fVar49 * 0.4226;
              pfVar1[3] = fVar52 * 0.9603 + fVar50 * 0.2746 + fVar53 * 0.4226;
              pfVar1 = (float *)(lVar12 + uVar79 * 4);
              *pfVar1 = fVar39 * 0.2746 + fVar40 * 0.4226 + fVar41 * 0.9603;
              pfVar1[1] = fVar43 * 0.2746 + fVar44 * 0.4226 + fVar45 * 0.9603;
              pfVar1[2] = fVar47 * 0.2746 + fVar48 * 0.4226 + fVar49 * 0.9603;
              pfVar1[3] = fVar51 * 0.2746 + fVar52 * 0.4226 + fVar53 * 0.9603;
            } while (uVar80 < param_5 >> 2);
          }
          return;
        }
        if (param_4 == 8) {
          uVar80 = 0;
          if (param_5 >> 2 != 0) {
            lVar7 = *param_2;
            lVar8 = param_2[1];
            lVar9 = param_2[4];
            lVar10 = param_2[3];
            lVar11 = param_2[2];
            lVar12 = param_2[7];
            lVar13 = param_2[5];
            lVar14 = param_2[6];
            do {
              uVar77 = uVar80 * 0x10;
              pfVar1 = (float *)(param_1 + (ulonglong)uVar77 * 4);
              fVar38 = *pfVar1;
              fVar39 = pfVar1[1];
              fVar40 = pfVar1[2];
              fVar41 = pfVar1[3];
              pfVar1 = (float *)(param_1 + (ulonglong)(uVar77 + 4) * 4);
              fVar42 = *pfVar1;
              fVar43 = pfVar1[1];
              fVar44 = pfVar1[2];
              fVar45 = pfVar1[3];
              pfVar1 = (float *)(param_1 + (ulonglong)(uVar77 + 8) * 4);
              fVar46 = *pfVar1;
              fVar47 = pfVar1[1];
              fVar48 = pfVar1[2];
              fVar49 = pfVar1[3];
              pfVar1 = (float *)(param_1 + (ulonglong)(uVar77 + 0xc) * 4);
              fVar50 = *pfVar1;
              fVar51 = pfVar1[1];
              fVar52 = pfVar1[2];
              fVar53 = pfVar1[3];
              uVar79 = (ulonglong)(uVar80 * 4);
              uVar80 = uVar80 + 1;
              pfVar1 = (float *)(lVar7 + uVar79 * 4);
              *pfVar1 = fVar38 * 0.9391;
              pfVar1[1] = fVar42 * 0.9391;
              pfVar1[2] = fVar46 * 0.9391;
              pfVar1[3] = fVar50 * 0.9391;
              pfVar1 = (float *)(lVar8 + uVar79 * 4);
              *pfVar1 = fVar39 * 0.9391;
              pfVar1[1] = fVar43 * 0.9391;
              pfVar1[2] = fVar47 * 0.9391;
              pfVar1[3] = fVar51 * 0.9391;
              puVar6 = (undefined8 *)(lVar11 + uVar79 * 4);
              *puVar6 = 0;
              puVar6[1] = 0;
              puVar6 = (undefined8 *)(lVar10 + uVar79 * 4);
              *puVar6 = 0;
              puVar6[1] = 0;
              pfVar1 = (float *)(lVar9 + uVar79 * 4);
              *pfVar1 = (fVar40 + fVar38) * 0.3437;
              pfVar1[1] = (fVar44 + fVar42) * 0.3437;
              pfVar1[2] = (fVar48 + fVar46) * 0.3437;
              pfVar1[3] = (fVar52 + fVar50) * 0.3437;
              pfVar1 = (float *)(lVar13 + uVar79 * 4);
              *pfVar1 = (fVar41 + fVar39) * 0.3437;
              pfVar1[1] = (fVar45 + fVar43) * 0.3437;
              pfVar1[2] = (fVar49 + fVar47) * 0.3437;
              pfVar1[3] = (fVar53 + fVar51) * 0.3437;
              pfVar1 = (float *)(lVar14 + uVar79 * 4);
              *pfVar1 = fVar40 * 0.9391;
              pfVar1[1] = fVar44 * 0.9391;
              pfVar1[2] = fVar48 * 0.9391;
              pfVar1[3] = fVar52 * 0.9391;
              pfVar1 = (float *)(lVar12 + uVar79 * 4);
              *pfVar1 = fVar41 * 0.9391;
              pfVar1[1] = fVar45 * 0.9391;
              pfVar1[2] = fVar49 * 0.9391;
              pfVar1[3] = fVar53 * 0.9391;
            } while (uVar80 < param_5 >> 2);
          }
          return;
        }
        goto FUN_1807d90a0;
      }
      uVar80 = 0;
      if (param_5 >> 2 != 0) {
        do {
          uVar79 = (ulonglong)(uVar80 * 4);
          uVar77 = uVar80 * 0x10;
          uVar80 = uVar80 + 1;
          puVar3 = (undefined4 *)(param_1 + (ulonglong)uVar77 * 4);
          uVar15 = puVar3[1];
          uVar16 = puVar3[2];
          uVar17 = puVar3[3];
          puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 4) * 4);
          uVar18 = *puVar4;
          uVar19 = puVar4[1];
          uVar20 = puVar4[2];
          uVar21 = puVar4[3];
          puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 8) * 4);
          uVar22 = *puVar4;
          uVar23 = puVar4[1];
          uVar24 = puVar4[2];
          uVar25 = puVar4[3];
          puVar4 = (undefined4 *)(param_1 + (ulonglong)(uVar77 + 0xc) * 4);
          uVar26 = *puVar4;
          uVar27 = puVar4[1];
          uVar28 = puVar4[2];
          uVar29 = puVar4[3];
          puVar4 = (undefined4 *)(*param_2 + uVar79 * 4);
          *puVar4 = *puVar3;
          puVar4[1] = uVar18;
          puVar4[2] = uVar22;
          puVar4[3] = uVar26;
          puVar3 = (undefined4 *)(param_2[1] + uVar79 * 4);
          *puVar3 = uVar15;
          puVar3[1] = uVar19;
          puVar3[2] = uVar23;
          puVar3[3] = uVar27;
          puVar3 = (undefined4 *)(param_2[2] + uVar79 * 4);
          *puVar3 = uVar16;
          puVar3[1] = uVar20;
          puVar3[2] = uVar24;
          puVar3[3] = uVar28;
          puVar3 = (undefined4 *)(param_2[3] + uVar79 * 4);
          *puVar3 = uVar17;
          puVar3[1] = uVar21;
          puVar3[2] = uVar25;
          puVar3[3] = uVar29;
        } while (uVar80 < param_5 >> 2);
        return;
      }
    }
  }
  return;
}








