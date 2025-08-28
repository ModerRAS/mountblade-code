#include "TaleWorlds.Native.Split.h"

// 03_rendering_part097.c - 2 个函数

// 函数: void FUN_1803248c0(longlong param_1,longlong *param_2,uint *param_3,longlong *param_4,uint param_5,
void FUN_1803248c0(longlong param_1,longlong *param_2,uint *param_3,longlong *param_4,uint param_5,
                  uint param_6)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined *puVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_1b8 [32];
  longlong lStack_198;
  uint uStack_190;
  longlong lStack_188;
  longlong *plStack_178;
  longlong *plStack_170;
  uint uStack_168;
  uint uStack_164;
  longlong *plStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  longlong *plStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  int iStack_e8;
  undefined1 auStack_e0 [136];
  ulonglong uStack_58;
  
  uStack_108 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_1b8;
  uVar7 = *param_3;
  uStack_164 = (uVar7 | param_5) & ~param_6;
  lVar9 = 0;
  plStack_178 = param_4;
  plStack_110 = param_2;
  if ((uVar7 & 1) != 0) {
    uStack_168 = CONCAT31((uint3)(uStack_164 >> 9),(char)(uStack_164 >> 1)) & 0xffffff01;
    uVar16 = uStack_164 >> 2;
    if ((char)uStack_168 != '\0') {
      uVar3 = param_3[0x11];
      plVar18 = (longlong *)(param_1 + 0x3d8);
      plStack_170 = plVar18;
      iVar6 = _Mtx_lock(plVar18);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x2f0,0x10,3);
      lVar9 = FUN_1802e6b00(uVar8,4);
      plStack_160 = (longlong *)CONCAT44(plStack_160._4_4_,uVar3);
      lStack_158 = lVar9;
      FUN_18033b220(param_1 + 0x3a8,&lStack_150,&plStack_160);
      iVar6 = _Mtx_unlock(plVar18);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      *(char *)(lVar9 + 0x2e5) = (char)param_3[0x13];
      FUN_1802f0940(lVar9,param_3[0x2a]);
      *(uint *)(lVar9 + 0x2cc) = param_3[0x2b];
      puVar15 = &DAT_18098bc73;
      if (*(undefined **)(param_3 + 0x16) != (undefined *)0x0) {
        puVar15 = *(undefined **)(param_3 + 0x16);
      }
      (**(code **)(*(longlong *)(lVar9 + 0x288) + 0x10))((longlong *)(lVar9 + 0x288),puVar15);
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
    }
    uVar3 = uStack_164;
    lVar10 = 0;
    if ((uVar16 & 1) == 0) {
      lVar10 = lVar9;
      if (((char)uStack_168 == '\0') && ((uVar7 & 1) != 0)) {
        lVar10 = FUN_18033b3a0(param_1,param_3[0x11]);
      }
    }
    else {
      plStack_160 = (longlong *)CONCAT44(plStack_160._4_4_,param_3[0x11]);
      lVar9 = FUN_18033b3a0(param_1);
      if (lVar9 != 0) {
        plVar18 = (longlong *)(param_1 + 0x3d8);
        plStack_170 = plVar18;
        iVar6 = _Mtx_lock(plVar18);
        if (iVar6 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar6);
        }
        FUN_18033bc80(param_1 + 0x3a8,&plStack_160);
        iVar6 = _Mtx_unlock(plVar18);
        lVar10 = lVar9;
        if (iVar6 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar6);
        }
      }
    }
    plVar18 = plStack_178;
    if (lVar10 != 0) {
      if (((uVar16 & 1) == 0) && ((uVar3 & 10) != 0)) {
        fVar22 = (float)param_3[1];
        fVar23 = (float)param_3[2];
        fVar24 = (float)param_3[3];
        fVar25 = (float)param_3[4];
        fVar26 = (float)param_3[5];
        fVar27 = (float)param_3[6];
        fVar28 = (float)param_3[7];
        fVar29 = (float)param_3[8];
        fVar30 = (float)param_3[9];
        fVar31 = (float)param_3[10];
        fVar32 = (float)param_3[0xb];
        fVar33 = (float)param_3[0xc];
        fVar34 = (float)param_3[0xd];
        fVar35 = (float)param_3[0xe];
        fVar36 = (float)param_3[0xf];
        fVar37 = (float)param_3[0x10];
        if (plStack_178 != (longlong *)0x0) {
          fVar22 = *(float *)(param_1 + 0x13c);
          lStack_198 = CONCAT44(lStack_198._4_4_,
                                1.0 - (fVar22 - *(float *)(param_1 + 0x144)) / fVar22);
          pfVar11 = (float *)FUN_1803310f0(fVar22,&lStack_150,param_3 + 1,(longlong)plStack_178 + 4)
          ;
          fVar22 = *pfVar11;
          fVar23 = pfVar11[1];
          fVar24 = pfVar11[2];
          fVar25 = pfVar11[3];
          fVar26 = pfVar11[4];
          fVar27 = pfVar11[5];
          fVar28 = pfVar11[6];
          fVar29 = pfVar11[7];
          fVar30 = pfVar11[8];
          fVar31 = pfVar11[9];
          fVar32 = pfVar11[10];
          fVar33 = pfVar11[0xb];
          fVar34 = pfVar11[0xc];
          fVar35 = pfVar11[0xd];
          fVar36 = pfVar11[0xe];
          fVar37 = pfVar11[0xf];
        }
        if ((((((fVar34 != *(float *)(lVar10 + 0x60)) || (fVar35 != *(float *)(lVar10 + 100))) ||
              (fVar36 != *(float *)(lVar10 + 0x68))) ||
             ((fVar22 != *(float *)(lVar10 + 0x30) || (fVar23 != *(float *)(lVar10 + 0x34))))) ||
            ((fVar24 != *(float *)(lVar10 + 0x38) ||
             ((fVar26 != *(float *)(lVar10 + 0x40) || (fVar27 != *(float *)(lVar10 + 0x44))))))) ||
           ((fVar28 != *(float *)(lVar10 + 0x48) ||
            (((fVar30 != *(float *)(lVar10 + 0x50) || (fVar31 != *(float *)(lVar10 + 0x54))) ||
             (fVar32 != *(float *)(lVar10 + 0x58))))))) {
          *(float *)(lVar10 + 0x30) = fVar22;
          *(float *)(lVar10 + 0x34) = fVar23;
          *(float *)(lVar10 + 0x38) = fVar24;
          *(float *)(lVar10 + 0x3c) = fVar25;
          *(float *)(lVar10 + 0x40) = fVar26;
          *(float *)(lVar10 + 0x44) = fVar27;
          *(float *)(lVar10 + 0x48) = fVar28;
          *(float *)(lVar10 + 0x4c) = fVar29;
          *(float *)(lVar10 + 0x50) = fVar30;
          *(float *)(lVar10 + 0x54) = fVar31;
          *(float *)(lVar10 + 0x58) = fVar32;
          *(float *)(lVar10 + 0x5c) = fVar33;
          *(float *)(lVar10 + 0x60) = fVar34;
          *(float *)(lVar10 + 100) = fVar35;
          *(float *)(lVar10 + 0x68) = fVar36;
          *(float *)(lVar10 + 0x6c) = fVar37;
          FUN_180254610(lVar10);
          FUN_1802eace0();
        }
        uVar21 = func_0x0001802eeba0(lVar10);
        FUN_1802ee720(uVar21,(char)param_3[0x2c]);
      }
      plStack_160 = (longlong *)0x0;
      plVar19 = plVar18 + 0x18;
      if (plVar18 == (longlong *)0x0) {
        plVar19 = (longlong *)0x0;
      }
      uStack_190 = param_6;
      lStack_198 = CONCAT44(lStack_198._4_4_,param_5);
      lStack_188 = lVar10;
      uVar7 = FUN_180325220(param_1,&plStack_160,param_3 + 0x30,plVar19);
      plVar5 = plStack_160;
      uVar21 = extraout_XMM0_Da;
      if (plStack_160 != (longlong *)0x0) {
        if ((uVar7 & 2) != 0) {
          FUN_1802eeb00(lVar10,plStack_160);
        }
        if (((uVar7 & 4) != 0) && (plVar5[2] == lVar10)) {
          lStack_150 = 0;
          lStack_148 = 0;
          uStack_140 = 0;
          uStack_138 = 3;
          FUN_1802fdc90(plVar5,&lStack_150,0xffffffff);
          iVar6 = 0;
          if (lStack_148 - lStack_150 >> 3 != 0) {
            lVar9 = 0;
            do {
              FUN_180325830(param_1,*(undefined8 *)(lVar9 + lStack_150));
              iVar6 = iVar6 + 1;
              lVar9 = lVar9 + 8;
            } while ((ulonglong)(longlong)iVar6 < (ulonglong)(lStack_148 - lStack_150 >> 3));
          }
          if (*(longlong *)(lVar10 + 0x260) != 0) {
            FUN_1802ed990(lVar10,1);
            if (*(longlong *)(lVar10 + 0x260) != 0) {
              FUN_1802fc960(*(longlong *)(lVar10 + 0x260),*(undefined8 *)(lVar10 + 0x20));
              FUN_1802fdb10(*(undefined8 *)(lVar10 + 0x260),0);
            }
            FUN_180056f10(lVar10 + 0x260,0);
            *(short *)(lVar10 + 0x2b0) = *(short *)(lVar10 + 0x2b0) + 1;
            if (*(longlong *)(lVar10 + 0x168) != 0) {
              func_0x0001802eeba0();
            }
          }
          plVar18 = plStack_178;
          if (lStack_150 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
        }
        uStack_190 = param_6;
        lStack_198 = CONCAT44(lStack_198._4_4_,param_5);
        uVar21 = FUN_180334b80(param_1,plVar5,param_3 + 0x30,plVar19);
      }
      uVar12 = *(longlong *)(param_3 + 0x66) - *(longlong *)(param_3 + 100) >> 3;
      if ((int)uVar12 != 0) {
        lVar9 = 0;
        plStack_170 = (longlong *)(uVar12 & 0xffffffff);
        do {
          uVar8 = 0;
          plStack_160 = (longlong *)0x0;
          if (plVar18 != (longlong *)0x0) {
            uVar8 = FUN_18032bba0(uVar21,plVar18 + 0x32,
                                  *(undefined8 *)(lVar9 + *(longlong *)(param_3 + 100)));
          }
          lStack_188 = 0;
          uStack_190 = param_6;
          lStack_198 = CONCAT44(lStack_198._4_4_,param_5);
          uVar7 = FUN_180325b10(param_1,&plStack_160,
                                *(undefined8 *)(lVar9 + *(longlong *)(param_3 + 100)),uVar8);
          plVar19 = plStack_160;
          uVar21 = extraout_XMM0_Da_00;
          if (plStack_160 != (longlong *)0x0) {
            if ((uVar7 & 2) != 0) {
              uVar21 = FUN_1802edb40(lVar10,plStack_160);
            }
            if ((uVar7 & 4) != 0) {
              lStack_150 = 0;
              lStack_148 = 0;
              uVar12 = 0;
              uStack_140 = 0;
              uStack_138 = 3;
              (**(code **)(*plVar19 + 0x170))(plVar19,&lStack_150,0xffffffff);
              uVar17 = uVar12;
              if (lStack_148 - lStack_150 >> 3 != 0) {
                do {
                  FUN_180325830(param_1,*(undefined8 *)(uVar12 + lStack_150));
                  uVar7 = (int)uVar17 + 1;
                  uVar17 = (ulonglong)uVar7;
                  uVar12 = uVar12 + 8;
                } while ((ulonglong)(longlong)(int)uVar7 < (ulonglong)(lStack_148 - lStack_150 >> 3)
                        );
              }
              uVar21 = FUN_1802ee610(lVar10,plVar19);
              plVar18 = plStack_178;
              if (lStack_150 != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
            }
          }
          lVar9 = lVar9 + 8;
          plStack_170 = (longlong *)((longlong)plStack_170 + -1);
        } while (plStack_170 != (longlong *)0x0);
      }
      uVar12 = *(longlong *)(param_3 + 0x5e) - *(longlong *)(param_3 + 0x5c) >> 2;
      if ((int)uVar12 != 0) {
        lVar9 = 0;
        uVar12 = uVar12 & 0xffffffff;
        do {
          plStack_170 = (longlong *)0x0;
          uVar8 = FUN_18032ba60(param_1,*(undefined4 *)(lVar9 + *(longlong *)(param_3 + 0x5c)),
                                *(undefined4 *)(param_1 + 0x150));
          uVar13 = FUN_18032ba60(param_1,*(undefined4 *)(lVar9 + *(longlong *)(param_3 + 0x5c)),
                                 *(int *)(param_1 + 0x150) + 1);
          uStack_190 = param_6;
          lStack_198 = CONCAT44(lStack_198._4_4_,param_5);
          uVar21 = FUN_1803248c0(param_1,&plStack_170,uVar8,uVar13);
          plVar18 = plStack_170;
          plStack_178 = plStack_170;
          if (plStack_170 != (longlong *)0x0) {
            (**(code **)(*plStack_170 + 0x28))(plStack_170);
          }
          lStack_198 = param_1;
          FUN_180320fd0(*(undefined8 *)(param_1 + 0x2d8),lVar10,plVar18,uVar21);
          if (plVar18 != (longlong *)0x0) {
            (**(code **)(*plVar18 + 0x38))(plVar18);
          }
          lVar9 = lVar9 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (((char)uStack_168 != '\0') && (0.0 < (float)param_3[0x2e])) {
        plStack_170 = &lStack_150;
        uVar17 = 0;
        puStack_f8 = &UNK_1809fcc28;
        puStack_f0 = auStack_e0;
        auStack_e0[0] = 0;
        iStack_e8 = 0xb;
        strcpy_s(auStack_e0,0x80,&UNK_180a09a40);
        uVar8 = FUN_1806279c0(&lStack_150,&puStack_f8);
        FUN_1803543b0(lVar10,uVar8,0,0);
        puStack_f8 = &UNK_18098bcb0;
        lVar9 = *(longlong *)(lVar10 + 0x200);
        uVar12 = uVar17;
        if (*(longlong *)(lVar10 + 0x208) - lVar9 >> 3 != 0) {
          do {
            lVar9 = *(longlong *)(*(longlong *)(uVar12 + lVar9) + 0x10);
            puStack_f8 = &UNK_1809fcc28;
            puStack_f0 = auStack_e0;
            auStack_e0[0] = 0;
            iStack_e8 = 0xb;
            strcpy_s(auStack_e0,0x80,&UNK_180a09a40);
            iVar6 = *(int *)(lVar9 + 0x18);
            if (iVar6 == iStack_e8) {
              if (iVar6 == 0) {
LAB_18032510e:
                if (iStack_e8 != 0) goto LAB_180325116;
                bVar20 = true;
              }
              else {
                pcVar14 = *(char **)(lVar9 + 0x10);
                lVar9 = (longlong)puStack_f0 - (longlong)pcVar14;
                do {
                  cVar1 = *pcVar14;
                  cVar2 = pcVar14[lVar9];
                  if (cVar1 != cVar2) break;
                  pcVar14 = pcVar14 + 1;
                } while (cVar2 != '\0');
                bVar20 = cVar1 == cVar2;
              }
            }
            else {
              if (iVar6 == 0) goto LAB_18032510e;
LAB_180325116:
              bVar20 = false;
            }
            puStack_f8 = &UNK_18098bcb0;
            if (bVar20) {
              puVar4 = *(undefined8 **)(*(longlong *)(lVar10 + 0x200) + (longlong)(int)uVar17 * 8);
              puVar4[0xf] = (double)(float)param_3[0x2e];
              puVar4[0xe] = (double)(float)param_3[0x2d];
              if ((undefined *)*puVar4 != &UNK_180a1d0b0) {
                (**(code **)((undefined *)*puVar4 + 0x70))(puVar4);
                goto LAB_180325204;
              }
              FUN_180346b50(puVar4,puVar4[3]);
              FUN_18014ccf0();
              if ((*(byte *)(puVar4[3] + 0x2e8) & 1) == 0) {
                *(undefined1 *)((longlong)puVar4 + 0x81) = 1;
                *plStack_110 = lVar10;
              }
              else {
                FUN_180348d90(puVar4);
                *plStack_110 = lVar10;
              }
              goto LAB_1803251e4;
            }
            uVar7 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar7;
            lVar9 = *(longlong *)(lVar10 + 0x200);
            uVar12 = uVar12 + 8;
          } while ((ulonglong)(longlong)(int)uVar7 <
                   (ulonglong)(*(longlong *)(lVar10 + 0x208) - lVar9 >> 3));
          *plStack_110 = lVar10;
          goto LAB_1803251e4;
        }
      }
LAB_180325204:
      *plStack_110 = lVar10;
    }
  }
LAB_1803251e4:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_180325220(longlong param_1,longlong *param_2,uint *param_3,longlong param_4,uint param_5,
                  uint param_6,undefined8 param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  uint auStack_e8 [2];
  ulonglong uStack_e0;
  longlong *plStack_d8;
  uint uStack_d0;
  undefined8 *puStack_c8;
  longlong *plStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  uint auStack_70 [2];
  longlong lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  
  uStack_60 = 0xfffffffffffffffe;
  uVar6 = param_3[2];
  uStack_d0 = (uVar6 | param_5) & ~param_6;
  lVar8 = 0;
  if ((uVar6 & 1) != 0) {
    uVar12 = uStack_d0 >> 1;
    uVar15 = uStack_d0 >> 2;
    if ((uVar12 & 1) != 0) {
      uVar1 = *param_3;
      lVar16 = param_1 + 0x3d8;
      lStack_b8 = lVar16;
      iVar5 = _Mtx_lock(lVar16);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      uVar7 = FUN_18062b1e0(_DAT_180c8ed18,0x240,0x10,3);
      lVar8 = FUN_1802fb490(uVar7);
      auStack_70[0] = uVar1;
      lStack_68 = lVar8;
      FUN_18033b220(param_1 + 0x3a8,auStack_58,auStack_70);
      iVar5 = _Mtx_unlock(lVar16);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      *(ushort *)(lVar8 + 0xa8) = *(ushort *)(lVar8 + 0xa8) | 0x10;
      puVar10 = &DAT_18098bc73;
      if (*(undefined **)(param_3 + 6) != (undefined *)0x0) {
        puVar10 = *(undefined **)(param_3 + 6);
      }
      uVar7 = FUN_1802abc50(_DAT_180c86930 + 0x300,puVar10);
      puVar9 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8);
      *puVar9 = &UNK_180a19ac8;
      *puVar9 = &UNK_180a199c8;
      puVar9[9] = 0;
      puVar9[10] = 0;
      *puVar9 = &UNK_180a19af8;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      puVar9[0xb] = 0;
      puStack_c8 = puVar9;
      FUN_1802f8a10(puVar9,uVar7);
      FUN_1802fa090(lVar8,uVar7,puVar9);
    }
    if ((uVar15 & 1) == 0) {
      if (((uVar12 & 1) == 0) && ((uVar6 & 1) != 0)) {
        lVar8 = FUN_18033b3a0(param_1,*param_3);
      }
    }
    else {
      auStack_e8[0] = *param_3;
      lVar8 = FUN_18033b3a0(param_1);
      if (lVar8 != 0) {
        puVar9 = (undefined8 *)(param_1 + 0x3d8);
        puStack_c8 = puVar9;
        iVar5 = _Mtx_lock(puVar9);
        if (iVar5 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar5);
        }
        FUN_18033bc80(param_1 + 0x3a8,auStack_e8);
        iVar5 = _Mtx_unlock(puVar9);
        if (iVar5 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar5);
        }
      }
    }
    if (lVar8 != 0) {
      FUN_1802fdb10(lVar8,param_7);
      uStack_e0 = *(longlong *)(param_3 + 0x24) - *(longlong *)(param_3 + 0x22) >> 3;
      if ((int)uStack_e0 != 0) {
        lVar16 = 0;
        uVar13 = 0;
        uStack_e0 = uStack_e0 & 0xffffffff;
        do {
          plStack_d8 = (longlong *)0x0;
          if ((param_4 == 0) ||
             ((ulonglong)(*(longlong *)(param_4 + 0x90) - *(longlong *)(param_4 + 0x88) >> 3) <=
              uVar13)) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(lVar16 + *(longlong *)(param_4 + 0x88));
          }
          uVar6 = FUN_180325b10(param_1,&plStack_d8,
                                *(undefined8 *)(lVar16 + *(longlong *)(param_3 + 0x22)),uVar7,
                                param_5,param_6,lVar8);
          plVar3 = plStack_d8;
          if (plStack_d8 != (longlong *)0x0) {
            if ((uVar6 & 2) != 0) {
              FUN_1802fc0f0(lVar8,plStack_d8);
            }
            if ((uVar6 & 4) != 0) {
              lStack_b0 = 0;
              lStack_a8 = 0;
              uStack_a0 = 0;
              uStack_98 = 3;
              (**(code **)(*plVar3 + 0x170))(plVar3,&lStack_b0,0xffffffff);
              iVar5 = 0;
              if (lStack_a8 - lStack_b0 >> 3 != 0) {
                lVar11 = 0;
                do {
                  FUN_180325830(param_1,*(undefined8 *)(lVar11 + lStack_b0));
                  iVar5 = iVar5 + 1;
                  lVar11 = lVar11 + 8;
                } while ((ulonglong)(longlong)iVar5 < (ulonglong)(lStack_a8 - lStack_b0 >> 3));
              }
              uVar4 = FUN_1802fc790(lVar8,plVar3);
              FUN_1802fca80(lVar8,plVar3,uVar4);
              if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
            }
          }
          uVar13 = uVar13 + 1;
          lVar16 = lVar16 + 8;
          uStack_e0 = uStack_e0 - 1;
        } while (uStack_e0 != 0);
      }
      LOCK();
      *(uint *)(lVar8 + 0x168) = param_3[0x2b];
      UNLOCK();
      *(uint *)(lVar8 + 0x170) = param_3[0x2a];
      lStack_b8 = (*(longlong *)(param_3 + 0x1c) - *(longlong *)(param_3 + 0x1a)) / 0xb0;
      auStack_e8[0] = 0;
      if ((int)lStack_b8 != 0) {
        uStack_e0 = 0;
        plStack_d8 = (longlong *)0x0;
        do {
          uVar13 = *(longlong *)((longlong)plStack_d8 + *(longlong *)(param_3 + 0x1a) + 0x90) -
                   *(longlong *)((longlong)plStack_d8 + *(longlong *)(param_3 + 0x1a) + 0x88) >> 3;
          uVar6 = auStack_e8[0];
          if ((int)uVar13 != 0) {
            lVar16 = 0;
            uVar14 = 0;
            puStack_c8 = (undefined8 *)(uVar13 & 0xffffffff);
            do {
              plStack_c0 = (longlong *)0x0;
              if (((param_4 == 0) ||
                  (lVar11 = *(longlong *)(param_4 + 0x68),
                  (ulonglong)((*(longlong *)(param_4 + 0x70) - lVar11) / 0xb0) <= uStack_e0)) ||
                 (lVar2 = *(longlong *)(uStack_e0 * 0xb0 + 0x88 + lVar11),
                 (ulonglong)(*(longlong *)(uStack_e0 * 0xb0 + 0x90 + lVar11) - lVar2 >> 3) <= uVar14
                 )) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(undefined8 *)(lVar16 + lVar2);
              }
              uVar12 = FUN_180325b10(param_1,&plStack_c0,
                                     *(undefined8 *)
                                      (lVar16 + *(longlong *)
                                                 ((longlong)plStack_d8 +
                                                 *(longlong *)(param_3 + 0x1a) + 0x88)),uVar7,
                                     param_5,param_6,lVar8);
              plVar3 = plStack_c0;
              if (plStack_c0 != (longlong *)0x0) {
                if ((uVar12 & 2) != 0) {
                  uVar7 = (**(code **)(*plStack_c0 + 0x158))(plStack_c0);
                  FUN_1802fbf30(lVar8,uVar6 & 0xff,plVar3,uVar7);
                }
                if ((uVar12 & 4) != 0) {
                  lStack_90 = 0;
                  lStack_88 = 0;
                  uStack_80 = 0;
                  uStack_78 = 3;
                  (**(code **)(*plVar3 + 0x170))(plVar3,&lStack_90,0xffffffff);
                  iVar5 = 0;
                  if (lStack_88 - lStack_90 >> 3 != 0) {
                    lVar11 = 0;
                    do {
                      FUN_180325830(param_1,*(undefined8 *)(lVar11 + lStack_90));
                      iVar5 = iVar5 + 1;
                      lVar11 = lVar11 + 8;
                    } while ((ulonglong)(longlong)iVar5 < (ulonglong)(lStack_88 - lStack_90 >> 3));
                  }
                  uVar6 = auStack_e8[0];
                  FUN_1803004f0(lVar8,auStack_e8[0] & 0xff,plVar3);
                  if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                }
              }
              uVar14 = uVar14 + 1;
              lVar16 = lVar16 + 8;
              puStack_c8 = (undefined8 *)((longlong)puStack_c8 - 1);
            } while (puStack_c8 != (undefined8 *)0x0);
          }
          auStack_e8[0] = uVar6 + 1;
          uStack_e0 = uStack_e0 + 1;
          plStack_d8 = plStack_d8 + 0x16;
        } while (auStack_e8[0] < (uint)lStack_b8);
      }
      *param_2 = lVar8;
    }
  }
  return uStack_d0;
}





// 函数: void FUN_180325830(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180325830(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 0x30);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  puVar4 = (undefined8 *)(param_1 + 0x80);
  puVar2 = *(undefined8 **)(param_1 + 0x90);
  puVar3 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      if ((ulonglong)puVar2[4] < param_2) {
        puVar2 = (undefined8 *)*puVar2;
      }
      else {
        puVar3 = puVar2;
        puVar2 = (undefined8 *)puVar2[1];
      }
    } while (puVar2 != (undefined8 *)0x0);
    if ((puVar3 != puVar4) && ((ulonglong)puVar3[4] <= param_2)) goto LAB_1803258ac;
  }
  puVar3 = puVar4;
LAB_1803258ac:
  if (puVar3 != puVar4) {
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + -1;
    func_0x00018066bd70(puVar3);
    FUN_18066ba00(puVar3,puVar4,param_3,param_4,uVar5);
    if (puVar3[5] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (puVar3 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar3);
    }
  }
  iVar1 = _Mtx_unlock(param_1 + 0x30);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



