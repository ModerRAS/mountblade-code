#include "TaleWorlds.Native.Split.h"

// 99_part_06_part038.c - 1 个函数

// 函数: void FUN_1803ca330(longlong param_1,uint64_t *param_2,uint64_t *param_3,longlong param_4,
void FUN_1803ca330(longlong param_1,uint64_t *param_2,uint64_t *param_3,longlong param_4,
                  short param_5,int32_t param_6,float param_7,float *param_8,uint64_t param_9,
                  uint64_t param_10,float *param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint64_t *puVar9;
  longlong *plVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  longlong lVar13;
  longlong *plVar14;
  float *pfVar15;
  float *pfVar16;
  uint64_t *puVar17;
  float fVar18;
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
  int8_t auStack_1b8 [32];
  void *puStack_198;
  int8_t *puStack_190;
  int8_t auStack_188 [8];
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  int32_t uStack_170;
  int32_t uStack_168;
  int32_t uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  int32_t uStack_158;
  float fStack_154;
  float fStack_150;
  int iStack_148;
  int32_t uStack_144;
  uint uStack_140;
  int32_t uStack_13c;
  uint64_t auStack_138 [2];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint64_t uStack_e8;
  uint64_t *puStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float afStack_c0 [4];
  ulonglong uStack_b0;
  
  uStack_e8 = 0xfffffffffffffffe;
  uStack_b0 = _DAT_180bf00a8 ^ (ulonglong)auStack_1b8;
  uStack_170 = 0;
  pfVar15 = (float *)(param_4 + 0x114);
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_160 = 0x3f800000;
  uStack_15c = 0x7f7fffff;
  pfVar16 = (float *)(param_4 + 0x124);
  puStack_e0 = param_2;
  FUN_180645340(&fStack_128,pfVar15,pfVar16,&uStack_168);
  *param_11 = fStack_128;
  param_11[1] = fStack_124;
  param_11[2] = fStack_120;
  param_11[3] = fStack_11c;
  param_11[4] = fStack_118;
  param_11[5] = fStack_114;
  param_11[6] = fStack_110;
  param_11[7] = fStack_10c;
  param_11[8] = fStack_108;
  param_11[9] = fStack_104;
  param_11[10] = fStack_100;
  param_11[0xb] = fStack_fc;
  param_11[0xc] = fStack_f8;
  param_11[0xd] = fStack_f4;
  param_11[0xe] = fStack_f0;
  param_11[0xf] = fStack_ec;
  fVar1 = *param_8;
  fVar19 = param_8[1];
  fVar21 = param_8[2];
  fVar23 = param_8[3];
  fVar2 = param_8[4];
  fVar3 = param_8[5];
  fVar26 = param_8[6];
  fVar28 = param_8[7];
  fVar5 = param_8[8];
  fVar6 = param_8[9];
  fVar7 = param_8[10];
  fVar24 = param_8[0xb];
  fVar25 = fStack_124 * fVar26;
  fVar27 = fStack_124 * fVar28;
  fStack_11c = fStack_120 * fVar24;
  fVar18 = fStack_128 * fVar19;
  fVar20 = fStack_128 * fVar21;
  fVar22 = fStack_128 * fVar23;
  fStack_128 = fStack_128 * fVar1 + fStack_124 * fVar2 + fStack_120 * fVar5;
  fStack_124 = fVar18 + fStack_124 * fVar3 + fStack_120 * fVar6;
  fStack_120 = fVar20 + fVar25 + fStack_120 * fVar7;
  fStack_11c = fVar22 + fVar27 + fStack_11c;
  fVar25 = fStack_114 * fVar26;
  fVar27 = fStack_114 * fVar28;
  fStack_10c = fStack_110 * fVar24;
  fVar18 = fStack_118 * fVar19;
  fVar20 = fStack_118 * fVar21;
  fVar22 = fStack_118 * fVar23;
  fStack_118 = fStack_118 * fVar1 + fStack_114 * fVar2 + fStack_110 * fVar5;
  fStack_114 = fVar18 + fStack_114 * fVar3 + fStack_110 * fVar6;
  fStack_110 = fVar20 + fVar25 + fStack_110 * fVar7;
  fStack_10c = fVar22 + fVar27 + fStack_10c;
  fVar25 = fStack_104 * fVar26;
  fVar27 = fStack_104 * fVar28;
  fStack_fc = fStack_100 * fVar24;
  fVar18 = fStack_108 * fVar19;
  fVar20 = fStack_108 * fVar21;
  fVar22 = fStack_108 * fVar23;
  fStack_108 = fStack_108 * fVar1 + fStack_104 * fVar2 + fStack_100 * fVar5;
  fStack_104 = fVar18 + fStack_104 * fVar3 + fStack_100 * fVar6;
  fStack_100 = fVar20 + fVar25 + fStack_100 * fVar7;
  fStack_fc = fVar22 + fVar27 + fStack_fc;
  fVar26 = fStack_f4 * fVar26;
  fVar28 = fStack_f4 * fVar28;
  fVar24 = fStack_f0 * fVar24;
  fVar19 = fStack_f8 * fVar19;
  fVar21 = fStack_f8 * fVar21;
  fVar23 = fStack_f8 * fVar23;
  fStack_f8 = fStack_f8 * fVar1 + fStack_f4 * fVar2 + fStack_f0 * fVar5 + param_8[0xc];
  fStack_f4 = fVar19 + fStack_f4 * fVar3 + fStack_f0 * fVar6 + param_8[0xd];
  fStack_f0 = fVar21 + fVar26 + fStack_f0 * fVar7 + param_8[0xe];
  fStack_ec = fVar23 + fVar28 + fVar24 + param_8[0xf];
  FUN_180084ae0(&fStack_128);
  fVar1 = pfVar15[2];
  fVar19 = pfVar16[2];
  fVar21 = pfVar15[1];
  fVar23 = pfVar16[1];
  fVar2 = *pfVar15;
  fVar3 = *pfVar16;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < _DAT_180d49994) && (FUN_1808fcb90(&system_ptr_9994), _DAT_180d49994 == -1)) {
    uStack_d8 = &UNK_1809fdc18;
    uStack_d0 = afStack_c0;
    afStack_c0[0] = (float)((uint)afStack_c0[0] & 0xffffff00);
    fStack_c8 = 7.00649e-45;
    strcpy_s(afStack_c0,0x10,&UNK_180a23c2c);
    lVar13 = _DAT_180c8aa00;
    iVar8 = FUN_180191c00(_DAT_180c8aa00,&uStack_d8);
    if ((iVar8 == -1) ||
       (_DAT_180d49998 = (longlong)iVar8 * 0x68 + *(longlong *)(lVar13 + 0x38), _DAT_180d49998 == 0)
       ) {
      _DAT_180d49998 = *(ulonglong *)(lVar13 + 0x28);
    }
    uStack_d8 = &UNK_18098bcb0;
    FUN_1808fcb30(&system_ptr_9994);
  }
  puVar17 = (uint64_t *)(_DAT_180c8a990 + 0xd8);
  puVar9 = puVar17;
  puVar4 = *(uint64_t **)(_DAT_180c8a990 + 0xe8);
  while (puVar4 != (uint64_t *)0x0) {
    if ((ulonglong)puVar4[4] < _DAT_180d49998) {
      puVar4 = (uint64_t *)*puVar4;
    }
    else {
      puVar9 = puVar4;
      puVar4 = (uint64_t *)puVar4[1];
    }
  }
  if ((puVar9 == puVar17) || (_DAT_180d49998 < (ulonglong)puVar9[4])) {
    puStack_198 = &system_ptr_9998;
    puVar9 = (uint64_t *)FUN_1800fc780(puVar17,&uStack_158,puVar17,puVar9);
    puVar9 = (uint64_t *)*puVar9;
  }
  auStack_138[0] = puVar9[5];
  auStack_188[0] = 1;
  fStack_154 = param_7 * *(float *)(param_4 + 0x134);
  uStack_158 = 2;
  fStack_150 = SQRT((fVar2 - fVar3) * (fVar2 - fVar3) + (fVar21 - fVar23) * (fVar21 - fVar23) +
                    (fVar1 - fVar19) * (fVar1 - fVar19)) * param_7 * 0.5;
  puStack_190 = auStack_188;
  puStack_198 = (void *)CONCAT71(puStack_198._1_7_,1);
  plVar10 = (longlong *)
            (**(code **)(**(longlong **)(param_1 + 200) + 0xb8))
                      (*(longlong **)(param_1 + 200),&uStack_158,auStack_138);
  uStack_13c = 0;
  iStack_148 = (int)param_5;
  uStack_144 = param_6;
  uStack_140 = (uint)*(byte *)(param_1 + 0xb0);
  (**(code **)(*plVar10 + 0xa0))(plVar10,&iStack_148);
  uVar11 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,6);
  uVar12 = FUN_1803c5c50(uVar11,plVar10);
  uVar11 = *(uint64_t *)(param_1 + 200);
  lVar13 = FUN_18063b470(&uStack_168,&fStack_128);
  uStack_d8 = (void *)CONCAT44(uStack_160,uStack_164);
  uStack_d0 = (float *)CONCAT44(uStack_168,uStack_15c);
  fStack_c8 = fStack_f8;
  fStack_c4 = fStack_f4;
  afStack_c0[0] = fStack_f0;
  plVar14 = (longlong *)(**(code **)(lVar13 + 0xa8))(uVar11,&uStack_d8);
  (**(code **)(*plVar14 + 0xa0))(plVar14,plVar10);
  (**(code **)(*plVar14 + 0x120))(plVar14,*(int32_t *)(_DAT_180d49998 + 0x60));
  (**(code **)(*plVar14 + 0x110))(plVar14,*(int32_t *)(_DAT_180d49998 + 0x5c));
  (**(code **)(*plVar14 + 0x150))(plVar14,0x43480000);
  (**(code **)(*plVar14 + 0x1c0))(plVar14,0x3f000000);
  (**(code **)(*plVar14 + 600))(plVar14,0x10,4);
  FUN_1806b7380(plVar14,param_7 * param_7 * param_7 *
                        *(float *)(*(longlong *)(param_4 + 0x180) + 0x58),0,0);
  (**(code **)(*plVar14 + 0x100))(plVar14,&fStack_180);
  fStack_180 = fStack_180 * 4.0;
  fStack_17c = fStack_17c * 4.0;
  fStack_178 = fStack_178 * 4.0;
  (**(code **)(*plVar14 + 0xf8))(plVar14,&fStack_180);
  (**(code **)(*(longlong *)*param_3 + 0x28))((longlong *)*param_3,plVar14,0);
  uVar11 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,6);
  plVar10 = (longlong *)FUN_1803c6190(uVar11,plVar14);
  *param_2 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10);
  }
  uStack_170 = 1;
  (**(code **)(*(longlong *)*param_2 + 0x138))((longlong *)*param_2,uVar12);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b0 ^ (ulonglong)auStack_1b8);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1803ca950(longlong param_1,longlong *param_2)

{
  float fVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint64_t *puVar8;
  longlong *******ppppppplVar9;
  longlong lVar10;
  longlong *******ppppppplVar11;
  longlong ******pppppplVar12;
  int iVar13;
  uint64_t *puVar14;
  float *pfVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  uint64_t *puVar18;
  int iVar19;
  int iVar20;
  float *pfVar21;
  uint64_t uVar22;
  uint64_t *puVar23;
  byte *pbVar24;
  bool bVar25;
  int aiStackX_18 [2];
  float *pfStackX_20;
  longlong *******ppppppplStack_f8;
  longlong *******ppppppplStack_f0;
  longlong *******ppppppplStack_e8;
  uint64_t uStack_e0;
  longlong lStack_d8;
  int32_t uStack_d0;
  byte *pbStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  int32_t uStack_a8;
  int32_t uStack_a0;
  longlong lStack_98;
  int32_t uStack_90;
  int16_t uStack_8c;
  uint64_t *puStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  
  uStack_68 = 0xfffffffffffffffe;
  uVar2 = *(uint *)((longlong)param_2 + 0xc);
  pfVar21 = (float *)*param_2;
  puStack_88 = (uint64_t *)0x0;
  uStack_80 = 0;
  iVar19 = 0;
  uStack_78 = 0;
  uStack_70 = 3;
  uStack_d0 = 3;
  ppppppplStack_f8 = (longlong *******)&ppppppplStack_f8;
  ppppppplStack_f0 = (longlong *******)&ppppppplStack_f8;
  ppppppplStack_e8 = (longlong *******)0x0;
  uStack_e0 = 0;
  lStack_d8 = 0;
  pfStackX_20 = pfVar21;
  FUN_180057340(&puStack_88,param_2[8] - param_2[7] >> 3);
  puVar16 = (ulonglong *)param_2[7];
  puVar23 = puStack_88;
  if (puVar16 != (ulonglong *)param_2[8]) {
    do {
      puVar18 = (uint64_t *)(_DAT_180c8a990 + 0xd8);
      puVar14 = *(uint64_t **)(_DAT_180c8a990 + 0xe8);
      puVar8 = puVar18;
      if (puVar14 != (uint64_t *)0x0) {
        do {
          if ((ulonglong)puVar14[4] < *puVar16) {
            puVar14 = (uint64_t *)*puVar14;
          }
          else {
            puVar8 = puVar14;
            puVar14 = (uint64_t *)puVar14[1];
          }
        } while (puVar14 != (uint64_t *)0x0);
      }
      if ((puVar8 == puVar18) || (*puVar16 < (ulonglong)puVar8[4])) {
        puVar8 = (uint64_t *)FUN_1800fc780(puVar18,aiStackX_18);
        puVar8 = (uint64_t *)*puVar8;
      }
      *puVar23 = puVar8[5];
      ppppppplVar11 = (longlong *******)&ppppppplStack_f8;
      if (ppppppplStack_e8 != (longlong *******)0x0) {
        ppppppplVar9 = ppppppplStack_e8;
        do {
          if (ppppppplVar9[4] < (longlong ******)*puVar16) {
            ppppppplVar9 = (longlong *******)*ppppppplVar9;
          }
          else {
            ppppppplVar11 = ppppppplVar9;
            ppppppplVar9 = (longlong *******)ppppppplVar9[1];
          }
        } while (ppppppplVar9 != (longlong *******)0x0);
      }
      if (((longlong ********)ppppppplVar11 == &ppppppplStack_f8) ||
         ((longlong ******)*puVar16 < ppppppplVar11[4])) {
        if ((ppppppplVar11 == ppppppplStack_f8) ||
           ((longlong ********)ppppppplVar11 == &ppppppplStack_f8)) {
          if ((lStack_d8 != 0) &&
             (pppppplVar12 = (longlong ******)*puVar16, ppppppplVar11 = ppppppplStack_f8,
             ppppppplStack_f8[4] < pppppplVar12)) {
LAB_1803cab25:
            bVar25 = false;
            ppppppplVar9 = ppppppplVar11;
            goto LAB_1803cab27;
          }
LAB_1803cac70:
          ppppppplVar9 = (longlong *******)&ppppppplStack_f8;
          bVar25 = true;
          if (ppppppplStack_e8 != (longlong *******)0x0) {
            ppppppplVar11 = ppppppplStack_e8;
            do {
              ppppppplVar9 = ppppppplVar11;
              bVar25 = (longlong ******)*puVar16 < ppppppplVar9[4];
              if (bVar25) {
                ppppppplVar11 = (longlong *******)ppppppplVar9[1];
              }
              else {
                ppppppplVar11 = (longlong *******)*ppppppplVar9;
              }
            } while (ppppppplVar11 != (longlong *******)0x0);
          }
          ppppppplVar11 = ppppppplVar9;
          if (bVar25) {
            if (ppppppplVar9 != ppppppplStack_f0) {
              ppppppplVar11 = (longlong *******)func_0x00018066b9a0(ppppppplVar9);
              goto LAB_1803cacc5;
            }
            pppppplVar12 = (longlong ******)*puVar16;
          }
          else {
LAB_1803cacc5:
            pppppplVar12 = (longlong ******)*puVar16;
            if (pppppplVar12 <= ppppppplVar11[4]) goto LAB_1803cab7d;
          }
LAB_1803cacd2:
          if (((longlong ********)ppppppplVar9 != &ppppppplStack_f8) &&
             (ppppppplVar9[4] <= pppppplVar12)) {
            uVar22 = 1;
            goto LAB_1803cab3b;
          }
        }
        else {
          ppppppplVar9 = (longlong *******)func_0x00018066bd70();
          pppppplVar12 = (longlong ******)*puVar16;
          if ((pppppplVar12 <= ppppppplVar11[4]) || (ppppppplVar9[4] <= pppppplVar12))
          goto LAB_1803cac70;
          if (*ppppppplVar11 == (longlong ******)0x0) goto LAB_1803cab25;
          bVar25 = true;
LAB_1803cab27:
          if (ppppppplVar9 == (longlong *******)0x0) goto LAB_1803cac70;
          if (!bVar25) goto LAB_1803cacd2;
        }
        uVar22 = 0;
LAB_1803cab3b:
        lVar10 = FUN_18062b420(_DAT_180c8ed18,0x30,(int8_t)uStack_d0);
        *(ulonglong *)(lVar10 + 0x20) = *puVar16;
        *(int32_t *)(lVar10 + 0x28) = 0;
                    // WARNING: Subroutine does not return
        FUN_18066bdc0(lVar10,ppppppplVar9,&ppppppplStack_f8,uVar22);
      }
LAB_1803cab7d:
      *(int *)(ppppppplVar11 + 5) = iVar19;
      iVar19 = iVar19 + 1;
      puVar16 = puVar16 + 1;
      pfVar21 = pfStackX_20;
      puVar23 = puVar23 + 1;
    } while (puVar16 != (ulonglong *)param_2[8]);
  }
  uVar17 = (ulonglong)(int)uVar2;
  lStack_b8 = FUN_1803ceee0((longlong)(int)(uVar2 * uVar2));
  fVar1 = *(float *)(param_1 + 0x230);
  aiStackX_18[0] = 0;
  uStack_b0 = uVar2;
  if (0 < (int)uVar2) {
    lVar10 = uVar17 << 2;
    lStack_c0 = lVar10;
    pbStack_c8 = (byte *)(lStack_b8 + 2);
    do {
      iVar20 = 0;
      pfVar15 = pfVar21;
      pbVar24 = pbStack_c8;
      iVar19 = aiStackX_18[0];
      if (0 < (int)uVar17) {
        do {
          pppppplVar12 = (longlong ******)0x0;
          *(short *)(pbVar24 + -2) = (short)(int)(*pfVar21 * (1.0 / fVar1));
          if ((param_2[4] != 0) && ((param_2[8] - param_2[7] & 0xfffffffffffffff8U) != 0)) {
            iVar7 = *(int *)((longlong)param_2 + 0xc);
            iVar13 = iVar7 * iVar20 + iVar19;
            iVar5 = iVar7 * iVar7 + -1;
            if (iVar13 < iVar7 * iVar7) {
              iVar5 = iVar13;
            }
            iVar7 = 0;
            if (-1 < iVar5) {
              iVar7 = iVar5;
            }
            pppppplVar12 = *(longlong *******)
                            (param_2[7] + (ulonglong)*(byte *)((longlong)iVar7 + param_2[4]) * 8);
          }
          bVar6 = 0;
          if (pppppplVar12 != (longlong ******)0x0) {
            ppppppplVar9 = (longlong *******)&ppppppplStack_f8;
            ppppppplVar11 = ppppppplStack_e8;
            while (ppppppplVar11 != (longlong *******)0x0) {
              if (ppppppplVar11[4] < pppppplVar12) {
                ppppppplVar11 = (longlong *******)*ppppppplVar11;
              }
              else {
                ppppppplVar9 = ppppppplVar11;
                ppppppplVar11 = (longlong *******)ppppppplVar11[1];
              }
            }
            if (((longlong ********)ppppppplVar9 == &ppppppplStack_f8) ||
               (pppppplVar12 < ppppppplVar9[4])) {
              if ((ppppppplVar9 == ppppppplStack_f8) ||
                 ((longlong ********)ppppppplVar9 == &ppppppplStack_f8)) {
                if ((lStack_d8 != 0) && (ppppppplStack_f8[4] < pppppplVar12)) {
                  bVar25 = false;
                  ppppppplVar11 = ppppppplStack_f8;
                  goto LAB_1803cada6;
                }
              }
              else {
                ppppppplVar11 = (longlong *******)func_0x00018066bd70(ppppppplVar9);
                if ((ppppppplVar9[4] < pppppplVar12) && (pppppplVar12 < ppppppplVar11[4])) {
                  if (*ppppppplVar9 == (longlong ******)0x0) {
                    bVar25 = false;
                    ppppppplVar11 = ppppppplVar9;
                  }
                  else {
                    bVar25 = true;
                  }
LAB_1803cada6:
                  if (ppppppplVar11 != (longlong *******)0x0) {
                    if (((bVar25) || ((longlong ********)ppppppplVar11 == &ppppppplStack_f8)) ||
                       (uVar22 = 1, pppppplVar12 < ppppppplVar11[4])) {
                      uVar22 = 0;
                    }
                    goto LAB_1803cae34;
                  }
                }
              }
              bVar25 = true;
              ppppppplVar11 = (longlong *******)&ppppppplStack_f8;
              ppppppplVar9 = ppppppplStack_e8;
              while (ppppppplVar9 != (longlong *******)0x0) {
                bVar25 = pppppplVar12 < ppppppplVar9[4];
                ppppppplVar11 = ppppppplVar9;
                if (bVar25) {
                  ppppppplVar9 = (longlong *******)ppppppplVar9[1];
                }
                else {
                  ppppppplVar9 = (longlong *******)*ppppppplVar9;
                }
              }
              ppppppplVar9 = ppppppplVar11;
              if (bVar25) {
                if (ppppppplVar11 != ppppppplStack_f0) {
                  ppppppplVar9 = (longlong *******)func_0x00018066b9a0(ppppppplVar11);
                  goto LAB_1803cae13;
                }
              }
              else {
LAB_1803cae13:
                if (pppppplVar12 <= ppppppplVar9[4]) {
                  uVar17 = (ulonglong)uVar2;
                  lVar10 = lStack_c0;
                  iVar19 = aiStackX_18[0];
                  goto LAB_1803cae81;
                }
              }
              if (((longlong ********)ppppppplVar11 == &ppppppplStack_f8) ||
                 (pppppplVar12 < ppppppplVar11[4])) {
                uVar22 = 0;
              }
              else {
                uVar22 = 1;
              }
LAB_1803cae34:
              lVar10 = FUN_18062b420(_DAT_180c8ed18,0x30,(int8_t)uStack_d0);
              *(longlong *******)(lVar10 + 0x20) = pppppplVar12;
              *(int32_t *)(lVar10 + 0x28) = 0;
                    // WARNING: Subroutine does not return
              FUN_18066bdc0(lVar10,ppppppplVar11,&ppppppplStack_f8,uVar22);
            }
LAB_1803cae81:
            bVar6 = (byte)*(int32_t *)(ppppppplVar9 + 5);
          }
          pbVar24[1] = bVar6;
          *pbVar24 = bVar6 | 0x80;
          iVar20 = iVar20 + 1;
          pfVar21 = (float *)((longlong)pfVar21 + lVar10);
          pfVar15 = pfStackX_20;
          pbVar24 = pbVar24 + 4;
        } while (iVar20 < (int)uVar17);
      }
      aiStackX_18[0] = iVar19 + 1;
      pbStack_c8 = pbStack_c8 + lVar10;
      pfVar21 = pfVar15 + 1;
      uStack_b0 = (uint)uVar17;
      pfStackX_20 = pfVar21;
    } while (aiStackX_18[0] < (int)uStack_b0);
  }
  lVar10 = lStack_b8;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_a8 = 1;
  uStack_a0 = 4;
  plVar3 = *(longlong **)(_DAT_180c8a990 + 0x28);
  pcVar4 = *(code **)(*plVar3 + 0x60);
  uStack_ac = uStack_b0;
  lStack_98 = lStack_b8;
  uVar22 = (**(code **)(**(longlong **)(_DAT_180c8a990 + 0x20) + 0x120))();
  uVar22 = (*pcVar4)(plVar3,&uStack_b0,uVar22);
  ppppppplVar11 = ppppppplStack_e8;
  if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar10);
  }
  if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_2 = 0;
  if (ppppppplStack_e8 != (longlong *******)0x0) {
    FUN_18004b790(&ppppppplStack_f8,*ppppppplStack_e8);
                    // WARNING: Subroutine does not return
    FUN_18064e900(ppppppplVar11);
  }
  if (puStack_88 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar22;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




