#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part051_sub002_sub002.c - 1 个函数

// 函数: void FUN_1803daba0(longlong *param_1)
void FUN_1803daba0(longlong *param_1)

{
  ulonglong *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float *pfVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  ulonglong uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong *plVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  uint64_t *puVar30;
  longlong *plVar31;
  int8_t auVar32 [8];
  uint uVar33;
  float *pfVar34;
  longlong *plVar35;
  uint64_t *puVar36;
  int8_t auVar37 [8];
  longlong *plVar38;
  bool bVar39;
  longlong lVar40;
  ulonglong uVar41;
  longlong *plVar42;
  longlong *plVar43;
  longlong lVar44;
  int8_t auVar45 [16];
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
  longlong *plStackX_18;
  uint64_t uStackX_20;
  float fStack_168;
  float fStack_164;
  int8_t auStack_160 [8];
  longlong *plStack_158;
  longlong *plStack_150;
  int32_t uStack_148;
  longlong *plStack_140;
  uint64_t uStack_138;
  longlong *plStack_130;
  int32_t uStack_128;
  longlong *plStack_120;
  longlong *plStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  longlong lStack_100;
  uint64_t uStack_f8;
  
  uStack_f8 = 0xfffffffffffffffe;
  puVar30 = (uint64_t *)param_1[1];
  puVar36 = (uint64_t *)*param_1;
  if ((longlong)puVar30 - (longlong)puVar36 >> 5 != 0) {
    lVar44 = param_1[0xc];
    lVar22 = *(longlong *)(lVar44 + 0x168);
    if (lVar22 == 0) {
      fVar49 = *(float *)(lVar44 + 0x30);
      fVar50 = *(float *)(lVar44 + 0x34);
      fVar51 = *(float *)(lVar44 + 0x38);
      fVar52 = *(float *)(lVar44 + 0x40);
      fVar53 = *(float *)(lVar44 + 0x44);
      fVar54 = *(float *)(lVar44 + 0x48);
      fVar55 = *(float *)(lVar44 + 0x50);
      fVar56 = *(float *)(lVar44 + 0x54);
      fVar57 = *(float *)(lVar44 + 0x58);
      fVar46 = *(float *)(lVar44 + 0x60);
      fVar47 = *(float *)(lVar44 + 100);
      fVar48 = *(float *)(lVar44 + 0x68);
    }
    else {
      fVar4 = *(float *)(lVar22 + 0x70);
      fVar11 = *(float *)(lVar22 + 0x74);
      fVar12 = *(float *)(lVar22 + 0x78);
      fVar13 = *(float *)(lVar22 + 0x80);
      fVar14 = *(float *)(lVar22 + 0x84);
      fVar15 = *(float *)(lVar22 + 0x88);
      fVar16 = *(float *)(lVar22 + 0x90);
      fVar17 = *(float *)(lVar22 + 0x94);
      fVar18 = *(float *)(lVar22 + 0x98);
      fVar51 = *(float *)(lVar44 + 0x34);
      fVar52 = *(float *)(lVar44 + 0x38);
      fVar53 = *(float *)(lVar44 + 0x30);
      fVar49 = fVar53 * fVar4 + fVar51 * fVar13 + fVar52 * fVar16;
      fVar50 = fVar53 * fVar11 + fVar51 * fVar14 + fVar52 * fVar17;
      fVar51 = fVar53 * fVar12 + fVar51 * fVar15 + fVar52 * fVar18;
      fVar54 = *(float *)(lVar44 + 0x44);
      fVar55 = *(float *)(lVar44 + 0x48);
      fVar56 = *(float *)(lVar44 + 0x40);
      fVar52 = fVar56 * fVar4 + fVar54 * fVar13 + fVar55 * fVar16;
      fVar53 = fVar56 * fVar11 + fVar54 * fVar14 + fVar55 * fVar17;
      fVar54 = fVar56 * fVar12 + fVar54 * fVar15 + fVar55 * fVar18;
      fVar57 = *(float *)(lVar44 + 0x54);
      fVar46 = *(float *)(lVar44 + 0x58);
      fVar47 = *(float *)(lVar44 + 0x50);
      fVar55 = fVar47 * fVar4 + fVar57 * fVar13 + fVar46 * fVar16;
      fVar56 = fVar47 * fVar11 + fVar57 * fVar14 + fVar46 * fVar17;
      fVar57 = fVar47 * fVar12 + fVar57 * fVar15 + fVar46 * fVar18;
      fVar48 = *(float *)(lVar44 + 100);
      fVar2 = *(float *)(lVar44 + 0x68);
      fVar3 = *(float *)(lVar44 + 0x60);
      fVar46 = fVar3 * fVar4 + fVar48 * fVar13 + fVar2 * fVar16 + *(float *)(lVar22 + 0xa0);
      fVar47 = fVar3 * fVar11 + fVar48 * fVar14 + fVar2 * fVar17 + *(float *)(lVar22 + 0xa4);
      fVar48 = fVar3 * fVar12 + fVar48 * fVar15 + fVar2 * fVar18 + *(float *)(lVar22 + 0xa8);
    }
    lVar44 = *(longlong *)(lVar44 + 0x20);
    plVar38 = (longlong *)(lVar44 + 0x28c8);
    lStack_100 = lVar44;
    for (; puVar36 != puVar30; puVar36 = puVar36 + 4) {
      FUN_180388a90(plVar38,*puVar36);
    }
    plVar42 = (longlong *)param_1[9];
    plVar25 = (longlong *)param_1[8];
    if (plVar25 != plVar42) {
      pfVar34 = (float *)(plVar25 + 4);
      do {
        if (*(char *)(pfVar34 + 2) == '\0') {
          fVar2 = pfVar34[-1];
          fVar3 = *pfVar34;
          fVar4 = pfVar34[-2];
          pfVar6 = (float *)*plVar25;
          *pfVar6 = fVar4 * fVar49 + fVar2 * fVar52 + fVar3 * fVar55 + fVar46;
          pfVar6[1] = fVar4 * fVar50 + fVar2 * fVar53 + fVar3 * fVar56 + fVar47;
          pfVar6[2] = fVar4 * fVar51 + fVar2 * fVar54 + fVar3 * fVar57 + fVar48;
        }
        plVar25 = plVar25 + 6;
        pfVar34 = pfVar34 + 0xc;
      } while (plVar25 != plVar42);
    }
    plVar42 = (longlong *)param_1[1];
    plVar25 = (longlong *)*param_1;
    plVar26 = (longlong *)0x0;
    if (plVar25 != plVar42) {
      plStack_130 = (longlong *)0x0;
      uStack_128 = 0;
      do {
        lVar22 = *plVar25;
        pfVar34 = (float *)(lVar22 + 0xe8);
        pfVar34[0] = 0.0;
        pfVar34[1] = 0.0;
        *(int32_t *)(lVar22 + 0xf0) = 0;
        bVar5 = *(byte *)(lVar22 + 0xa8);
        if (bVar5 != 0) {
          puVar30 = (uint64_t *)(lVar22 + 0x80);
          plVar43 = plVar26;
          do {
            pfVar6 = (float *)*puVar30;
            *pfVar34 = *pfVar6 + *pfVar34;
            *(float *)(lVar22 + 0xec) = pfVar6[1] + *(float *)(lVar22 + 0xec);
            *(float *)(lVar22 + 0xf0) = pfVar6[2] + *(float *)(lVar22 + 0xf0);
            uVar33 = (int)plVar43 + 1;
            plVar43 = (longlong *)(ulonglong)uVar33;
            puVar30 = puVar30 + 1;
            bVar5 = *(byte *)(lVar22 + 0xa8);
          } while ((int)uVar33 < (int)(uint)bVar5);
        }
        fVar49 = 1.0 / (float)bVar5;
        *pfVar34 = fVar49 * *pfVar34;
        *(float *)(lVar22 + 0xec) = fVar49 * *(float *)(lVar22 + 0xec);
        *(float *)(lVar22 + 0xf0) = fVar49 * *(float *)(lVar22 + 0xf0);
        *(int32_t *)(lVar22 + 0xa0) = 0;
        *(int32_t *)(lVar22 + 0xa4) = 0x7149f2ca;
        bVar5 = *(byte *)(lVar22 + 0xa8);
        if (bVar5 != 0) {
          fVar49 = 0.0;
          fVar50 = 1e+30;
          puVar30 = (uint64_t *)(lVar22 + 0x80);
          plVar43 = plVar26;
          do {
            fVar52 = ((float *)*puVar30)[1] - pfVar34[1];
            fVar51 = *(float *)*puVar30 - *pfVar34;
            fVar51 = SQRT(fVar51 * fVar51 + fVar52 * fVar52) + 0.012;
            fVar51 = fVar51 * fVar51;
            if (fVar49 <= fVar51) {
              fVar49 = fVar51;
            }
            *(float *)(lVar22 + 0xa0) = fVar49;
            uVar33 = (int)plVar43 + 1;
            plVar43 = (longlong *)(ulonglong)uVar33;
            fVar51 = (float)FUN_180645690(*puVar30,*(uint64_t *)
                                                    (lVar22 + 0x80 +
                                                    (longlong)((int)uVar33 % (int)(uint)bVar5) * 8))
            ;
            fVar51 = (fVar51 - 0.012) * (fVar51 - 0.012);
            if (fVar50 <= fVar51) {
              fVar51 = fVar50;
            }
            fVar50 = fVar51;
            *(float *)(lVar22 + 0xa4) = fVar50;
            puVar30 = puVar30 + 1;
          } while ((int)plVar43 < (int)(uint)bVar5);
        }
        FUN_18038af00(*plVar25);
        *(int *)(*plVar25 + 0x124) = *(int *)(*plVar25 + 0x124) + 1;
        FUN_180388630(plVar38,*plVar25);
        plVar25 = plVar25 + 4;
      } while (plVar25 != plVar42);
    }
    puVar30 = (uint64_t *)param_1[9];
    for (puVar36 = (uint64_t *)param_1[8]; puVar36 != puVar30; puVar36 = puVar36 + 6) {
      if ((*(char *)(puVar36 + 1) != '\0') || (*(char *)((longlong)puVar36 + 9) != '\0')) {
        puVar36[2] = 0;
        pfVar34 = (float *)*puVar36;
        iVar20 = (int)(((*pfVar34 - *(float *)(lVar44 + 0x28d0)) - 1e-06) /
                      *(float *)(lVar44 + 0x28e0));
        iVar21 = 0;
        if ((-1 < iVar20) && (iVar21 = iVar20, *(int *)(lVar44 + 0x28e8) <= iVar20)) {
          iVar21 = *(int *)(lVar44 + 0x28e8) + -1;
        }
        iVar20 = *(int *)(lVar44 + 0x28ec);
        iVar28 = (int)(((pfVar34[1] - *(float *)(lVar44 + 0x28d4)) - 1e-06) /
                      *(float *)(lVar44 + 0x28e4));
        iVar29 = 0;
        if ((-1 < iVar28) && (iVar29 = iVar28, iVar20 <= iVar28)) {
          iVar29 = iVar20 + -1;
        }
        lVar22 = (longlong)(iVar21 * iVar20 + iVar29);
        plVar25 = *(longlong **)(*plVar38 + 0x10 + lVar22 * 0x28);
        for (plVar42 = *(longlong **)(*plVar38 + 8 + lVar22 * 0x28); plVar42 != plVar25;
            plVar42 = plVar42 + 1) {
          lVar22 = *plVar42;
          if (((*(byte *)(lVar22 + 0x139) & 4) == 0) &&
             (cVar19 = FUN_18038d0a0(lVar22,pfVar34), cVar19 != '\0')) {
            fVar49 = (float)func_0x00018038d2f0(lVar22,pfVar34);
            if ((pfVar34[2] - fVar49 < 1.0) && (-2.0 < pfVar34[2] - fVar49)) {
              puVar36[2] = lVar22;
              break;
            }
          }
        }
      }
    }
    plStack_150 = (longlong *)0x0;
    uStack_148 = 3;
    plVar38 = (longlong *)param_1[4];
    plVar42 = (longlong *)param_1[5];
    plStack_158 = (longlong *)0x0;
    plStackX_18 = (longlong *)0x0;
    plVar25 = plVar26;
    plVar43 = plStack_158;
    _auStack_160 = ZEXT816(0);
    plStack_140 = plVar42;
    if (plVar38 != plVar42) {
      do {
        if ((char)plVar38[2] != '\0') {
          plStack_120 = *(longlong **)(param_1[8] + 0x10 + (longlong)(int)plVar38[1] * 0x30);
          plStack_118 = *(longlong **)
                         (param_1[8] + 0x10 + (longlong)*(int *)((longlong)plVar38 + 0xc) * 0x30);
          lVar44 = *(longlong *)(*plVar38 + 0x10);
          plVar23 = (longlong *)plVar38[4];
          for (plVar24 = (longlong *)plVar38[3]; plVar24 != plVar23; plVar24 = plVar24 + 1) {
            lVar22 = *plVar24;
            plVar42 = *(longlong **)(lVar22 + 0x100);
            plVar25 = *(longlong **)(lVar22 + 0xf8);
            if (plVar25 != plVar42) {
              do {
                if (*plVar25 == lVar44) {
                  if (plVar25 == plVar42) goto LAB_1803db1f2;
                  plVar43 = plVar25 + 1;
                  plVar35 = (longlong *)
                            ((ulonglong)((longlong)plVar42 + (7 - (longlong)plVar43)) >> 3);
                  if (plVar42 < plVar43) {
                    plVar35 = plVar26;
                  }
                  plVar31 = plVar26;
                  if (plVar35 != (longlong *)0x0) {
                    do {
                      if (*plVar43 != lVar44) {
                        *plVar25 = *plVar43;
                        plVar25 = plVar25 + 1;
                      }
                      plVar43 = plVar43 + 1;
                      plVar31 = (longlong *)((longlong)plVar31 + 1);
                    } while (plVar31 != plVar35);
                  }
                  break;
                }
                plVar25 = plVar25 + 1;
              } while (plVar25 != plVar42);
              if (plVar25 != plVar42) {
                plVar43 = *(longlong **)(lVar22 + 0x100);
                if (plVar42 != plVar43) {
                    // WARNING: Subroutine does not return
                  memmove(plVar25,plVar42,(longlong)plVar43 - (longlong)plVar42);
                }
                *(ulonglong *)(lVar22 + 0x100) =
                     (longlong)plVar43 -
                     ((longlong)plVar42 - (longlong)plVar25 & 0xfffffffffffffff8U);
              }
            }
LAB_1803db1f2:
            plVar25 = plStack_150;
            plVar42 = plStack_140;
            plVar43 = plStackX_18;
          }
          *(uint64_t *)(lVar44 + 0x100) = *(uint64_t *)(lVar44 + 0xf8);
          plVar38[4] = plVar38[3];
          auVar37 = auStack_160;
          plVar23 = plVar26;
          if (plStack_120 == (longlong *)0x0) {
            if (plStack_118 == (longlong *)0x0) {
              if (plVar43 < plVar25) {
                plStackX_18 = plVar43 + 1;
                plStack_158 = plStackX_18;
                *plVar43 = 0;
                plVar43 = plStackX_18;
                goto LAB_1803db645;
              }
              lVar22 = (longlong)plVar43 - (longlong)auStack_160;
              lVar44 = lVar22 >> 3;
              if (lVar44 == 0) {
                lVar44 = 1;
LAB_1803db289:
                plVar42 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar44 * 8,3);
              }
              else {
                lVar44 = lVar44 * 2;
                plVar42 = plVar26;
                if (lVar44 != 0) goto LAB_1803db289;
              }
              if (auVar37 != (int8_t  [8])plStackX_18) {
                    // WARNING: Subroutine does not return
                memmove(plVar42,auVar37,lVar22);
              }
              *plVar42 = 0;
              plStackX_18 = plVar42 + 1;
              if (auVar37 != (int8_t  [8])0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(auVar37);
              }
              plStack_158 = plStackX_18;
              auStack_160 = (int8_t  [8])plVar42;
              plStack_150 = plVar42 + lVar44;
              plVar25 = plStack_150;
              plVar42 = plStack_140;
              plVar43 = plStackX_18;
              goto LAB_1803db645;
            }
            if (plVar43 < plVar25) {
              plStackX_18 = plVar43 + 1;
              plStack_158 = plStackX_18;
              *plVar43 = (longlong)plStack_118;
              goto LAB_1803db465;
            }
            lVar40 = (longlong)plVar43 - (longlong)auStack_160;
            lVar22 = lVar40 >> 3;
            if (lVar22 == 0) {
              lVar22 = 1;
LAB_1803db33e:
              plVar23 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar22 * 8);
            }
            else {
              lVar22 = lVar22 * 2;
              if (lVar22 != 0) goto LAB_1803db33e;
            }
            if (auStack_160 != (int8_t  [8])plStackX_18) {
                    // WARNING: Subroutine does not return
              memmove(plVar23,auStack_160,lVar40);
            }
            *plVar23 = (longlong)plStack_118;
            if (auStack_160 != (int8_t  [8])0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
LAB_1803db452:
            plStackX_18 = plVar23 + 1;
            plStack_150 = plVar23 + lVar22;
            plStack_158 = plStackX_18;
            auStack_160 = (int8_t  [8])plVar23;
          }
          else {
            if (plVar25 <= plVar43) {
              lVar40 = (longlong)plVar43 - (longlong)auStack_160;
              lVar22 = lVar40 >> 3;
              if (lVar22 == 0) {
                lVar22 = 1;
LAB_1803db3f1:
                plVar23 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar22 * 8);
              }
              else {
                lVar22 = lVar22 * 2;
                if (lVar22 != 0) goto LAB_1803db3f1;
              }
              if (auStack_160 != (int8_t  [8])plStackX_18) {
                    // WARNING: Subroutine does not return
                memmove(plVar23,auStack_160,lVar40);
              }
              *plVar23 = (longlong)plStack_120;
              if (auStack_160 != (int8_t  [8])0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              goto LAB_1803db452;
            }
            plStackX_18 = plVar43 + 1;
            plStack_158 = plStackX_18;
            *plVar43 = (longlong)plStack_120;
          }
LAB_1803db465:
          plVar42 = plStack_120;
          plVar43 = plStackX_18;
          if (plStack_120 == plStack_118) {
            puVar30 = *(uint64_t **)(lVar44 + 0x100);
            if (puVar30 < *(uint64_t **)(lVar44 + 0x108)) {
              *(uint64_t **)(lVar44 + 0x100) = puVar30 + 1;
              *puVar30 = plStack_120;
            }
            else {
              puVar36 = *(uint64_t **)(lVar44 + 0xf8);
              lVar22 = (longlong)puVar30 - (longlong)puVar36 >> 3;
              if (lVar22 == 0) {
                lVar22 = 1;
LAB_1803db4c0:
                plVar25 = (longlong *)
                          FUN_18062b420(_DAT_180c8ed18,lVar22 * 8,*(int8_t *)(lVar44 + 0x110));
                puVar30 = *(uint64_t **)(lVar44 + 0x100);
                puVar36 = *(uint64_t **)(lVar44 + 0xf8);
              }
              else {
                lVar22 = lVar22 * 2;
                plVar25 = plVar26;
                if (lVar22 != 0) goto LAB_1803db4c0;
              }
              if (puVar36 != puVar30) {
                    // WARNING: Subroutine does not return
                memmove(plVar25,puVar36,(longlong)puVar30 - (longlong)puVar36);
              }
              *plVar25 = (longlong)plVar42;
              if (*(longlong *)(lVar44 + 0xf8) != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              *(longlong **)(lVar44 + 0xf8) = plVar25;
              *(longlong **)(lVar44 + 0x100) = plVar25 + 1;
              *(longlong **)(lVar44 + 0x108) = plVar25 + lVar22;
            }
            plVar25 = (longlong *)plVar42[0x20];
            if (plVar25 < (longlong *)plVar42[0x21]) {
              plVar42[0x20] = (longlong)(plVar25 + 1);
              *plVar25 = lVar44;
            }
            else {
              plVar23 = (longlong *)plVar42[0x1f];
              lVar22 = (longlong)plVar25 - (longlong)plVar23 >> 3;
              if (lVar22 == 0) {
                lVar22 = 1;
LAB_1803db58f:
                plVar24 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar22 * 8,(char)plVar42[0x22]);
                plVar25 = (longlong *)plVar42[0x20];
                plVar23 = (longlong *)plVar42[0x1f];
              }
              else {
                lVar22 = lVar22 * 2;
                plVar24 = plVar26;
                if (lVar22 != 0) goto LAB_1803db58f;
              }
              if (plVar23 != plVar25) {
                    // WARNING: Subroutine does not return
                memmove(plVar24,plVar23,(longlong)plVar25 - (longlong)plVar23);
              }
              *plVar24 = lVar44;
              if (plVar42[0x1f] != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              plVar42[0x1f] = (longlong)plVar24;
              plVar42[0x20] = (longlong)(plVar24 + 1);
              plVar42[0x21] = (longlong)(plVar24 + lVar22);
            }
            puVar30 = (uint64_t *)plVar38[4];
            if (puVar30 < (uint64_t *)plVar38[5]) {
              plVar38[4] = (longlong)(puVar30 + 1);
              *puVar30 = plVar42;
              plVar25 = plStack_150;
              plVar42 = plStack_140;
            }
            else {
              puVar36 = (uint64_t *)plVar38[3];
              lVar44 = (longlong)puVar30 - (longlong)puVar36 >> 3;
              if (lVar44 == 0) {
                lVar44 = 1;
LAB_1803db702:
                plVar25 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar44 * 8,(char)plVar38[6]);
                puVar30 = (uint64_t *)plVar38[4];
                puVar36 = (uint64_t *)plVar38[3];
              }
              else {
                lVar44 = lVar44 * 2;
                plVar25 = plVar26;
                if (lVar44 != 0) goto LAB_1803db702;
              }
              if (puVar36 != puVar30) {
                    // WARNING: Subroutine does not return
                memmove(plVar25,puVar36,(longlong)puVar30 - (longlong)puVar36);
              }
              *plVar25 = (longlong)plVar42;
              if (plVar38[3] != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              plVar38[3] = (longlong)plVar25;
              plVar38[4] = (longlong)(plVar25 + 1);
              plVar38[5] = (longlong)(plVar25 + lVar44);
              plVar25 = plStack_150;
              plVar42 = plStack_140;
            }
          }
          else {
            uVar7 = **(uint64_t **)*plVar38;
            uVar8 = *(uint64_t *)((uint64_t *)*plVar38)[1];
            uStackX_20._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
            fStack_164 = (float)((ulonglong)uVar7 >> 0x20);
            fVar51 = uStackX_20._4_4_ - fStack_164;
            uStackX_20._0_4_ = (float)uVar8;
            fStack_168 = (float)uVar7;
            fVar53 = (float)uStackX_20 - fStack_168;
            fVar50 = fVar53 * fVar53 + fVar51 * fVar51;
            auVar45 = rsqrtss(ZEXT416((uint)(fVar51 * fVar51)),ZEXT416((uint)fVar50));
            fVar49 = auVar45._0_4_;
            fVar54 = fVar49 * 0.5 * (3.0 - fVar50 * fVar49 * fVar49);
            fVar53 = fVar54 * fVar53;
            fVar54 = fVar54 * fVar51;
            plStack_130 = plStack_118;
            bVar39 = false;
            plVar23 = plStack_120;
            plVar24 = plStack_118;
            plVar35 = plStack_120;
            fVar49 = (float)uStackX_20;
            fVar50 = fStack_164;
            fVar51 = fStack_168;
            fVar52 = uStackX_20._4_4_;
LAB_1803db820:
            while ((uStackX_20 = uVar8, plVar23 == (longlong *)0x0 ||
                   ((plVar23[0x20] - plVar23[0x1f] >> 3 != 0 &&
                    (*(longlong *)(plVar23[0x20] + -8) == lVar44))))) {
              plVar25 = plStack_150;
              plVar42 = plStack_140;
              if (bVar39) goto LAB_1803db645;
              bVar39 = true;
              uVar7 = *(uint64_t *)((uint64_t *)*plVar38)[1];
              uVar8 = **(uint64_t **)*plVar38;
              fVar53 = -fVar53;
              fVar54 = -fVar54;
              fStack_164 = (float)((ulonglong)uVar7 >> 0x20);
              fStack_168 = (float)uVar7;
              uStackX_20._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
              uStackX_20._0_4_ = (float)uVar8;
              plVar23 = plVar24;
              fVar49 = (float)uStackX_20;
              fVar50 = fStack_164;
              fVar51 = fStack_168;
              plStack_130 = plVar35;
              fVar52 = uStackX_20._4_4_;
            }
            puVar30 = *(uint64_t **)(lVar44 + 0x100);
            if (puVar30 < *(uint64_t **)(lVar44 + 0x108)) {
              *(uint64_t **)(lVar44 + 0x100) = puVar30 + 1;
              *puVar30 = plVar23;
            }
            else {
              puVar36 = *(uint64_t **)(lVar44 + 0xf8);
              lVar22 = (longlong)puVar30 - (longlong)puVar36 >> 3;
              if (lVar22 == 0) {
                lVar22 = 1;
LAB_1803db89e:
                plVar42 = (longlong *)
                          FUN_18062b420(_DAT_180c8ed18,lVar22 * 8,*(int8_t *)(lVar44 + 0x110));
                puVar30 = *(uint64_t **)(lVar44 + 0x100);
                puVar36 = *(uint64_t **)(lVar44 + 0xf8);
              }
              else {
                lVar22 = lVar22 * 2;
                plVar42 = plVar26;
                if (lVar22 != 0) goto LAB_1803db89e;
              }
              if (puVar36 != puVar30) {
                    // WARNING: Subroutine does not return
                memmove(plVar42,puVar36,(longlong)puVar30 - (longlong)puVar36);
              }
              *plVar42 = (longlong)plVar23;
              if (*(longlong *)(lVar44 + 0xf8) != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              *(longlong **)(lVar44 + 0xf8) = plVar42;
              *(longlong **)(lVar44 + 0x100) = plVar42 + 1;
              *(longlong **)(lVar44 + 0x108) = plVar42 + lVar22;
            }
            plVar42 = (longlong *)plVar23[0x20];
            if (plVar42 < (longlong *)plVar23[0x21]) {
              plVar23[0x20] = (longlong)(plVar42 + 1);
              *plVar42 = lVar44;
            }
            else {
              plVar25 = (longlong *)plVar23[0x1f];
              lVar22 = (longlong)plVar42 - (longlong)plVar25 >> 3;
              if (lVar22 == 0) {
                lVar22 = 1;
LAB_1803db969:
                plVar24 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar22 * 8,(char)plVar23[0x22]);
                plVar42 = (longlong *)plVar23[0x20];
                plVar25 = (longlong *)plVar23[0x1f];
              }
              else {
                lVar22 = lVar22 * 2;
                plVar24 = plVar26;
                if (lVar22 != 0) goto LAB_1803db969;
              }
              if (plVar25 != plVar42) {
                    // WARNING: Subroutine does not return
                memmove(plVar24,plVar25,(longlong)plVar42 - (longlong)plVar25);
              }
              *plVar24 = lVar44;
              if (plVar23[0x1f] != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              plVar23[0x1f] = (longlong)plVar24;
              plVar23[0x20] = (longlong)(plVar24 + 1);
              plVar23[0x21] = (longlong)(plVar24 + lVar22);
            }
            puVar30 = (uint64_t *)plVar38[4];
            if (puVar30 < (uint64_t *)plVar38[5]) {
              plVar38[4] = (longlong)(puVar30 + 1);
              *puVar30 = plVar23;
            }
            else {
              puVar36 = (uint64_t *)plVar38[3];
              lVar22 = (longlong)puVar30 - (longlong)puVar36 >> 3;
              if (lVar22 == 0) {
                lVar22 = 1;
LAB_1803dba28:
                plVar42 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar22 * 8,(char)plVar38[6]);
                puVar30 = (uint64_t *)plVar38[4];
                puVar36 = (uint64_t *)plVar38[3];
              }
              else {
                lVar22 = lVar22 * 2;
                plVar42 = plVar26;
                if (lVar22 != 0) goto LAB_1803dba28;
              }
              if (puVar36 != puVar30) {
                    // WARNING: Subroutine does not return
                memmove(plVar42,puVar36,(longlong)puVar30 - (longlong)puVar36);
              }
              *plVar42 = (longlong)plVar23;
              if (plVar38[3] != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              plVar38[3] = (longlong)plVar42;
              plVar38[4] = (longlong)(plVar42 + 1);
              plVar38[5] = (longlong)(plVar42 + lVar22);
            }
            plVar25 = plStack_150;
            plVar42 = plStack_140;
            if (plVar23 != plStack_130) {
              bVar10 = true;
              plVar42 = plVar23;
              if ((ulonglong)*(byte *)(plVar23 + 0x15) != 0) {
                plVar25 = plVar23 + 0xc;
                plVar24 = plVar26;
                do {
                  puVar30 = (uint64_t *)*plVar25;
                  uVar7 = uStack_138;
                  if (*(char *)(puVar30 + 4) != '\x01') {
                    uVar7 = *(uint64_t *)*puVar30;
                    fStack_168 = (float)*(uint64_t *)puVar30[1];
                    uStack_138._0_4_ = (float)uVar7;
                    fStack_164 = (float)((ulonglong)*(uint64_t *)puVar30[1] >> 0x20);
                    uStack_138._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
                    fVar56 = fVar49 - fVar51;
                    fVar57 = fVar52 - fVar50;
                    fVar55 = (fStack_164 - uStack_138._4_4_) * fVar56 -
                             (fStack_168 - (float)uStack_138) * fVar57;
                    fVar49 = (float)uStackX_20;
                    if (fVar55 != 0.0) {
                      fVar55 = 1.0 / fVar55;
                      fVar46 = (((float)uStack_138 - fVar51) * (fStack_164 - uStack_138._4_4_) -
                               (uStack_138._4_4_ - fVar50) * (fStack_168 - (float)uStack_138)) *
                               fVar55;
                      fVar55 = (((float)uStack_138 - fVar51) * fVar57 -
                               (uStack_138._4_4_ - fVar50) * fVar56) * fVar55;
                      if ((((-0.001 <= fVar46) && (fVar46 <= 1.001)) && (-0.001 <= fVar55)) &&
                         (fVar55 <= 1.001)) {
                        fVar47 = fVar55;
                        if (fVar46 <= fVar55) {
                          fVar47 = fVar46;
                        }
                        if (fVar47 <= 1.0) {
                          if (fVar55 <= fVar46) {
                            fVar55 = fVar46;
                          }
                          if (0.0 <= fVar55) {
                            fStack_110 = fVar56 * fVar46 + fVar51;
                            fStack_10c = fVar57 * fVar46 + fVar50;
                            uStack_138 = CONCAT44(fStack_10c,fStack_110);
                            plVar42 = (longlong *)puVar30[2];
                            if (plVar42 == plVar23) {
                              plVar42 = (longlong *)puVar30[3];
                            }
                            fVar51 = fVar53 * 0.02 + fStack_110;
                            fVar50 = fVar54 * 0.02 + fStack_10c;
                            bVar10 = false;
                            fStack_108 = fVar51;
                            fStack_104 = fVar50;
                            break;
                          }
                        }
                      }
                    }
                  }
                  uStack_138 = uVar7;
                  plVar24 = (longlong *)((longlong)plVar24 + 1);
                  plVar25 = plVar25 + 1;
                } while ((longlong)plVar24 < (longlong)(ulonglong)*(byte *)(plVar23 + 0x15));
              }
              plVar23 = plVar26;
              plVar24 = plStack_118;
              plVar35 = plStack_120;
              fVar49 = (float)uStackX_20;
              uVar8 = uStackX_20;
              if (!bVar10) {
                plVar23 = plVar42;
              }
              goto LAB_1803db820;
            }
          }
        }
LAB_1803db645:
        plVar38 = plVar38 + 7;
      } while (plVar38 != plVar42);
    }
    puVar1 = (ulonglong *)(param_1 + 0xd);
    plVar38 = (longlong *)param_1[0xe];
    plVar42 = (longlong *)*puVar1;
    lVar44 = (longlong)plVar43 - (longlong)auStack_160;
    uVar41 = lVar44 >> 3;
    if ((longlong)plVar38 - (longlong)plVar42 >> 3 == uVar41) {
      auVar37 = auStack_160;
      if (uVar41 != 0) {
        auVar32 = auStack_160;
        plVar25 = plVar26;
        do {
          iVar21 = -1;
          if (*(longlong *)auVar32 != 0) {
            iVar21 = *(int *)(*(longlong *)auVar32 + 0x128);
          }
          lVar22 = *(longlong *)(((longlong)plVar42 - (longlong)auStack_160) + (longlong)auVar32);
          if (lVar22 == 0) {
            iVar20 = -1;
          }
          else {
            iVar20 = *(int *)(lVar22 + 0x128);
          }
          if (iVar21 != iVar20) goto LAB_1803dbd52;
          uVar33 = (int)plVar25 + 1;
          plVar25 = (longlong *)(ulonglong)uVar33;
          auVar32 = (int8_t  [8])((longlong)auVar32 + 8);
        } while ((ulonglong)(longlong)(int)uVar33 < uVar41);
      }
    }
    else {
LAB_1803dbd52:
      plVar25 = (longlong *)((ulonglong)((longlong)plVar38 + (7 - (longlong)plVar42)) >> 3);
      if (plVar38 < plVar42) {
        plVar25 = plVar26;
      }
      plVar38 = plVar26;
      auVar37 = auStack_160;
      if (plVar25 != (longlong *)0x0) {
        do {
          if ((*plVar42 != 0) && (*(int *)(*plVar42 + 0x128) != -1)) {
            FUN_18038ee20();
          }
          plVar42 = plVar42 + 1;
          plVar38 = (longlong *)((longlong)plVar38 + 1);
        } while (plVar38 != plVar25);
        auVar37 = auStack_160;
      }
      plVar38 = (longlong *)(lVar44 + 7U >> 3);
      if (plStackX_18 < (ulonglong)auVar37) {
        plVar38 = plVar26;
      }
      plVar42 = plVar26;
      if (plVar38 != (longlong *)0x0) {
        do {
          if ((*(longlong *)auVar37 != 0) && (*(int *)(*(longlong *)auVar37 + 0x128) != -1)) {
            FUN_18038ee20();
          }
          auVar37 = (int8_t  [8])((longlong)auVar37 + 8);
          plVar42 = (longlong *)((longlong)plVar42 + 1);
        } while (plVar42 != plVar38);
      }
      plVar42 = (longlong *)param_1[5];
      lVar22 = lStack_100;
      for (plVar25 = (longlong *)param_1[4]; lStack_100 = lVar22, plVar25 != plVar42;
          plVar25 = plVar25 + 7) {
        if (((char)plVar25[2] != '\0') && (*(int *)(*(longlong *)(*plVar25 + 0x10) + 0x128) != -1))
        {
          FUN_18038ee20();
        }
        lVar22 = lStack_100;
      }
      plVar42 = (longlong *)*puVar1;
      plVar25 = (longlong *)((param_1[0xe] - (longlong)plVar42) + 7U >> 3);
      if ((longlong *)param_1[0xe] < plVar42) {
        plVar25 = plVar26;
      }
      plVar43 = plVar26;
      if (plVar25 != (longlong *)0x0) {
        do {
          if ((*plVar42 != 0) && (*(int *)(*plVar42 + 0x128) == -1)) {
            *(int *)(lVar22 + 0x2f98) = *(int *)(lVar22 + 0x2f98) + 1;
            FUN_18038ee20();
          }
          plVar42 = plVar42 + 1;
          plVar43 = (longlong *)((longlong)plVar43 + 1);
        } while (plVar43 != plVar25);
      }
      lVar22 = lStack_100;
      auVar37 = auStack_160;
      plVar42 = plVar26;
      if (plVar38 != (longlong *)0x0) {
        do {
          if ((*(longlong *)auVar37 != 0) && (*(int *)(*(longlong *)auVar37 + 0x128) == -1)) {
            *(int *)(lVar22 + 0x2f98) = *(int *)(lVar22 + 0x2f98) + 1;
            FUN_18038ee20();
          }
          plVar42 = (longlong *)((longlong)plVar42 + 1);
          auVar37 = (int8_t  [8])((longlong)auVar37 + 8);
        } while (plVar42 != plVar38);
        auVar37 = auStack_160;
      }
      plVar38 = (longlong *)param_1[5];
      for (plVar42 = (longlong *)param_1[4]; plVar42 != plVar38; plVar42 = plVar42 + 7) {
        if (((char)plVar42[2] != '\0') && (*(int *)(*(longlong *)(*plVar42 + 0x10) + 0x128) == -1))
        {
          FUN_18038ee20();
        }
      }
      if (puVar1 != (ulonglong *)auStack_160) {
        uVar9 = *puVar1;
        if ((ulonglong)((longlong)(param_1[0xf] - uVar9) >> 3) < uVar41) {
          if (uVar41 != 0) {
            plVar26 = (longlong *)FUN_18062b420(_DAT_180c8ed18,uVar41 * 8,(char)param_1[0x10]);
          }
          if (auVar37 != (int8_t  [8])plStackX_18) {
                    // WARNING: Subroutine does not return
            memmove(plVar26,auVar37,lVar44);
          }
          if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *puVar1 = (ulonglong)plVar26;
          param_1[0xe] = (longlong)(plVar26 + uVar41);
          param_1[0xf] = (longlong)(plVar26 + uVar41);
        }
        else {
          lVar22 = param_1[0xe];
          uVar27 = (longlong)(lVar22 - uVar9) >> 3;
          if (uVar27 < uVar41) {
            plVar38 = (longlong *)((longlong)auVar37 + uVar27 * 8);
            if (auVar37 != (int8_t  [8])plVar38) {
                    // WARNING: Subroutine does not return
              memmove(uVar9,auVar37,(longlong)plVar38 - (longlong)auVar37);
            }
            if (plVar38 != plStackX_18) {
                    // WARNING: Subroutine does not return
              memmove(lVar22,plVar38,(longlong)plStackX_18 - (longlong)plVar38);
            }
            param_1[0xe] = lVar22;
          }
          else {
            if (auVar37 != (int8_t  [8])plStackX_18) {
                    // WARNING: Subroutine does not return
              memmove(uVar9,auVar37,lVar44);
            }
            param_1[0xe] = uVar9;
          }
        }
      }
    }
    if (auVar37 != (int8_t  [8])0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(auVar37);
    }
  }
  return;
}








