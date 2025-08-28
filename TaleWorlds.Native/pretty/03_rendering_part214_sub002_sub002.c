#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part214_sub002_sub002.c - 1 个函数

// 函数: void FUN_18038f1b0(int32_t *param_1,longlong param_2,longlong param_3,char param_4,int param_5,
void FUN_18038f1b0(int32_t *param_1,longlong param_2,longlong param_3,char param_4,int param_5,
                  float *param_6,char param_7,char param_8)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint64_t uVar6;
  bool bVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  char cVar10;
  byte bVar11;
  int32_t uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  int *piVar16;
  longlong *plVar17;
  ulonglong *puVar18;
  longlong *plVar19;
  uint64_t *puVar20;
  uint64_t *puVar21;
  longlong *plVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong *puVar28;
  uint64_t *puVar29;
  uint64_t *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong *plVar33;
  int32_t *puVar34;
  longlong *plVar35;
  uint uVar36;
  ulonglong *puVar37;
  uint uVar38;
  int32_t *puVar39;
  longlong *plVar40;
  longlong *plVar41;
  int iVar42;
  longlong lVar43;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  int32_t uVar56;
  int8_t auVar44 [16];
  int8_t auVar45 [16];
  int8_t auVar46 [16];
  int8_t auVar48 [16];
  int8_t auVar50 [16];
  int8_t auVar51 [16];
  int8_t auVar52 [16];
  int8_t auVar54 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  uint64_t uStackX_8;
  longlong lStackX_10;
  longlong lStackX_18;
  char cStackX_20;
  uint uStack_1e4;
  longlong *plStack_1e0;
  uint64_t uStack_1d0;
  void *puStack_1c8;
  uint64_t *puStack_1c0;
  uint uStack_1b8;
  ulonglong uStack_1b0;
  int iStack_1a8;
  longlong *plStack_1a0;
  uint64_t uStack_198;
  float fStack_190;
  ulonglong *puStack_188;
  ulonglong *puStack_180;
  longlong lStack_178;
  longlong *plStack_170;
  longlong *plStack_168;
  longlong *plStack_160;
  int32_t uStack_158;
  uint64_t *puStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  longlong lStack_138;
  float fStack_130;
  float fStack_12c;
  uint64_t *puStack_128;
  int8_t auStack_120 [8];
  longlong *plStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  int32_t uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int iStack_f0;
  longlong lStack_e8;
  ulonglong uStack_e0;
  int32_t uStack_d8;
  int32_t uStack_d4;
  uint64_t uStack_d0;
  int8_t auVar47 [16];
  int8_t auVar49 [16];
  int8_t auVar53 [16];
  int8_t auVar55 [16];
  
  uStack_d0 = 0xfffffffffffffffe;
  uStackX_8 = param_1;
  lStackX_10 = param_2;
  lStackX_18 = param_3;
  cStackX_20 = param_4;
  cVar10 = func_0x00018023a100(param_6);
  plStack_170 = (longlong *)0x0;
  plStack_168 = (longlong *)0x0;
  plVar35 = (longlong *)0x0;
  plStack_160 = (longlong *)0x0;
  uStack_158 = 3;
  piVar16 = *(int **)(param_2 + 8);
  iVar14 = *piVar16;
  *(int **)(param_2 + 8) = piVar16 + 1;
  iVar42 = piVar16[1];
  uVar24 = (ulonglong)iVar42;
  *(int **)(param_2 + 8) = piVar16 + 2;
  if (iVar42 == 0) {
    puStack_188 = (ulonglong *)0x0;
  }
  else {
    puStack_188 = (ulonglong *)FUN_18062b420(system_memory_pool_ptr,uVar24 * 0x14 + 0x10,0x10);
    *puStack_188 = uVar24 << 0x20 | 0x14;
    puStack_188 = puStack_188 + 2;
    puVar37 = puStack_188;
    plVar15 = plVar35;
    do {
      *puVar37 = 0;
      *(int32_t *)(puVar37 + 1) = 0;
      *(int32_t *)(puVar37 + 2) = 0;
      uVar38 = (int)plVar15 + 1;
      plVar15 = (longlong *)(ulonglong)uVar38;
      puVar37 = (ulonglong *)((longlong)puVar37 + 0x14);
    } while ((ulonglong)(longlong)(int)uVar38 < uVar24);
  }
  puVar37 = puStack_188;
  uStack_198 = puStack_188;
  FUN_18005ea90(param_1 + 0x126,&uStack_198);
  lVar26 = *(longlong *)(uStackX_8 + 0x110);
  lVar27 = *(longlong *)(uStackX_8 + 0x10e);
  uVar31 = (lVar26 - lVar27 >> 3) + uVar24;
  if ((ulonglong)(*(longlong *)(uStackX_8 + 0x112) - lVar27 >> 3) < uVar31) {
    plVar15 = plVar35;
    if (uVar31 != 0) {
      plVar15 = (longlong *)
                FUN_18062b420(system_memory_pool_ptr,uVar31 * 8,*(int8_t *)(uStackX_8 + 0x114));
      lVar26 = *(longlong *)(uStackX_8 + 0x110);
      lVar27 = *(longlong *)(uStackX_8 + 0x10e);
    }
    if (lVar27 != lVar26) {
                    // WARNING: Subroutine does not return
      memmove(plVar15,lVar27,lVar26 - lVar27);
    }
    if (lVar27 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong **)(uStackX_8 + 0x10e) = plVar15;
    *(longlong **)(uStackX_8 + 0x110) = plVar15;
    *(longlong **)(uStackX_8 + 0x112) = plVar15 + uVar31;
    puVar37 = puStack_188;
  }
  lVar26 = lStackX_10;
  puVar39 = uStackX_8;
  plVar15 = plVar35;
  if (0 < (longlong)uVar24) {
    do {
      pfVar1 = (float *)((longlong)puVar37 + (longlong)(int)plVar15 * 0x14);
      puVar29 = *(uint64_t **)(puVar39 + 0x110);
      if (puVar29 < *(uint64_t **)(puVar39 + 0x112)) {
        *(uint64_t **)(puVar39 + 0x110) = puVar29 + 1;
        *puVar29 = pfVar1;
      }
      else {
        puVar20 = *(uint64_t **)(puVar39 + 0x10e);
        lVar26 = (longlong)puVar29 - (longlong)puVar20 >> 3;
        if (lVar26 == 0) {
          lVar26 = 1;
LAB_18038f42c:
          plVar33 = (longlong *)
                    FUN_18062b420(system_memory_pool_ptr,lVar26 * 8,*(int8_t *)(puVar39 + 0x114));
          puVar29 = *(uint64_t **)(uStackX_8 + 0x110);
          puVar20 = *(uint64_t **)(uStackX_8 + 0x10e);
          puVar39 = uStackX_8;
        }
        else {
          lVar26 = lVar26 * 2;
          plVar33 = plVar35;
          if (lVar26 != 0) goto LAB_18038f42c;
        }
        if (puVar20 != puVar29) {
                    // WARNING: Subroutine does not return
          memmove(plVar33,puVar20,(longlong)puVar29 - (longlong)puVar20);
        }
        *plVar33 = (longlong)pfVar1;
        if (*(longlong *)(puVar39 + 0x10e) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(longlong **)(puVar39 + 0x10e) = plVar33;
        *(longlong **)(puVar39 + 0x110) = plVar33 + 1;
        *(longlong **)(puVar39 + 0x112) = plVar33 + lVar26;
        lVar26 = lStackX_10;
      }
      puVar29 = *(uint64_t **)(lVar26 + 8);
      puVar18 = (ulonglong *)*puVar29;
      fStack_190 = *(float *)(puVar29 + 1);
      *(longlong *)(lVar26 + 8) = (longlong)puVar29 + 0xc;
      if (cVar10 == '\0') {
        fVar57 = param_6[1];
        fVar58 = param_6[2];
        fVar59 = param_6[5];
        fVar60 = param_6[6];
        fVar2 = param_6[9];
        fVar3 = param_6[10];
        fVar4 = param_6[0xd];
        fVar5 = param_6[0xe];
        uStack_198._4_4_ = (float)((ulonglong)puVar18 >> 0x20);
        uStack_198._0_4_ = SUB84(puVar18,0);
        *pfVar1 = (float)uStack_198 * *param_6 + uStack_198._4_4_ * param_6[4] +
                  fStack_190 * param_6[8] + param_6[0xc];
        pfVar1[1] = (float)uStack_198 * fVar57 + uStack_198._4_4_ * fVar59 + fStack_190 * fVar2 +
                    fVar4;
        pfVar1[2] = (float)uStack_198 * fVar58 + uStack_198._4_4_ * fVar60 + fStack_190 * fVar3 +
                    fVar5;
      }
      else {
        *(ulonglong **)pfVar1 = puVar18;
        pfVar1[2] = fStack_190;
      }
      if (iVar14 < 0x35474d4f) {
        if (iVar14 == 0x31474d4e) {
          *(longlong *)(lVar26 + 8) = *(longlong *)(lVar26 + 8) + 4;
        }
        else {
          *(longlong *)(lVar26 + 8) = *(longlong *)(lVar26 + 8) + 0x18;
        }
      }
      uVar24 = uVar24 - 1;
      puVar37 = puStack_188;
      plVar15 = (longlong *)(ulonglong)((int)plVar15 + 1);
      uStack_198 = puVar18;
    } while (uVar24 != 0);
  }
  lVar43 = lStackX_10;
  lVar25 = (longlong)**(int **)(lStackX_10 + 8);
  *(int **)(lStackX_10 + 8) = *(int **)(lStackX_10 + 8) + 1;
  lStack_178 = FUN_180396f80();
  lVar26 = *(longlong *)(uStackX_8 + 0x118);
  lVar27 = *(longlong *)(uStackX_8 + 0x116);
  uVar24 = (lVar26 - lVar27 >> 3) + lVar25;
  if ((ulonglong)(*(longlong *)(uStackX_8 + 0x11a) - lVar27 >> 3) < uVar24) {
    plVar15 = plVar35;
    if (uVar24 != 0) {
      plVar15 = (longlong *)
                FUN_18062b420(system_memory_pool_ptr,uVar24 * 8,*(int8_t *)(uStackX_8 + 0x11c));
      lVar26 = *(longlong *)(uStackX_8 + 0x118);
      lVar27 = *(longlong *)(uStackX_8 + 0x116);
    }
    if (lVar27 != lVar26) {
                    // WARNING: Subroutine does not return
      memmove(plVar15,lVar27,lVar26 - lVar27);
    }
    if (lVar27 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong **)(uStackX_8 + 0x116) = plVar15;
    *(longlong **)(uStackX_8 + 0x118) = plVar15;
    *(longlong **)(uStackX_8 + 0x11a) = plVar15 + uVar24;
  }
  puVar37 = puStack_188;
  puVar39 = uStackX_8;
  lVar26 = lStack_178;
  plVar15 = plVar35;
  if (0 < lVar25) {
    do {
      plVar33 = (longlong *)(lVar26 + (longlong)(int)plVar15 * 0x28);
      plVar41 = *(longlong **)(puVar39 + 0x118);
      if (plVar41 < *(longlong **)(puVar39 + 0x11a)) {
        *(longlong **)(puVar39 + 0x118) = plVar41 + 1;
        *plVar41 = (longlong)plVar33;
      }
      else {
        plVar17 = *(longlong **)(puVar39 + 0x116);
        lVar26 = (longlong)plVar41 - (longlong)plVar17 >> 3;
        if (lVar26 == 0) {
          lVar26 = 1;
LAB_18038f6d8:
          plVar19 = (longlong *)
                    FUN_18062b420(system_memory_pool_ptr,lVar26 * 8,*(int8_t *)(puVar39 + 0x11c));
          plVar41 = *(longlong **)(uStackX_8 + 0x118);
          plVar17 = *(longlong **)(uStackX_8 + 0x116);
          puVar39 = uStackX_8;
        }
        else {
          lVar26 = lVar26 * 2;
          plVar19 = plVar35;
          if (lVar26 != 0) goto LAB_18038f6d8;
        }
        if (plVar17 != plVar41) {
                    // WARNING: Subroutine does not return
          memmove(plVar19,plVar17,(longlong)plVar41 - (longlong)plVar17);
        }
        *plVar19 = (longlong)plVar33;
        if (*(longlong *)(puVar39 + 0x116) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(longlong **)(puVar39 + 0x116) = plVar19;
        *(longlong **)(puVar39 + 0x118) = plVar19 + 1;
        *(longlong **)(puVar39 + 0x11a) = plVar19 + lVar26;
        puVar37 = puStack_188;
        lVar26 = lStack_178;
        lVar43 = lStackX_10;
      }
      *(longlong *)(lVar43 + 8) = *(longlong *)(lVar43 + 8) + 4;
      iVar42 = **(int **)(lVar43 + 8);
      *(int **)(lVar43 + 8) = *(int **)(lVar43 + 8) + 1;
      *plVar33 = (longlong)puVar37 + (longlong)iVar42 * 0x14;
      iVar42 = **(int **)(lVar43 + 8);
      *(int **)(lVar43 + 8) = *(int **)(lVar43 + 8) + 1;
      plVar33[1] = (longlong)puVar37 + (longlong)iVar42 * 0x14;
      lVar27 = *(longlong *)(lVar43 + 8);
      piVar16 = (int *)(lVar27 + 8);
      *(int **)(lVar43 + 8) = piVar16;
      if (0x39474d4d < iVar14) {
        iVar42 = *piVar16;
        *(longlong *)(lVar43 + 8) = lVar27 + 0xc;
        if (iVar42 == 1) {
          *(byte *)((longlong)plVar33 + 0x21) = *(byte *)((longlong)plVar33 + 0x21) | 1;
        }
        else {
          *(byte *)((longlong)plVar33 + 0x21) = *(byte *)((longlong)plVar33 + 0x21) & 0xfe;
        }
      }
      lVar25 = lVar25 + -1;
      plVar15 = (longlong *)(ulonglong)((int)plVar15 + 1);
    } while (lVar25 != 0);
  }
  iStack_f0 = **(int **)(lVar43 + 8);
  lVar26 = (longlong)iStack_f0;
  *(int **)(lVar43 + 8) = *(int **)(lVar43 + 8) + 1;
  lStack_e8 = lVar26;
  if (iStack_f0 == 0) {
    plStack_1a0 = (longlong *)0x0;
  }
  else {
    plStack_1a0 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar26 * 8,0x10);
  }
  lStack_138 = FUN_180396ff0(lVar26);
  puVar39 = uStackX_8;
  puVar37 = (ulonglong *)(uStackX_8 + 0x11e);
  uVar24 = *(ulonglong *)(uStackX_8 + 0x120);
  uVar31 = *puVar37;
  uVar32 = ((longlong)(uVar24 - uVar31) >> 3) + lVar26;
  puStack_180 = puVar37;
  if ((ulonglong)((longlong)(*(longlong *)(uStackX_8 + 0x122) - uVar31) >> 3) < uVar32) {
    plVar15 = plVar35;
    if (uVar32 != 0) {
      plVar15 = (longlong *)
                FUN_18062b420(system_memory_pool_ptr,uVar32 * 8,*(int8_t *)(uStackX_8 + 0x124));
      uVar24 = *(ulonglong *)(puVar39 + 0x120);
      uVar31 = *puVar37;
    }
    if (uVar31 != uVar24) {
                    // WARNING: Subroutine does not return
      memmove(plVar15,uVar31,uVar24 - uVar31);
    }
    if (uVar31 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *puVar37 = (ulonglong)plVar15;
    *(longlong **)(puVar39 + 0x120) = plVar15;
    *(longlong **)(puVar39 + 0x122) = plVar15 + uVar32;
    lVar26 = lStack_e8;
  }
  fVar57 = 3.4028235e+38;
  fVar59 = 3.4028235e+38;
  uStack_1d0 = 0x7f7fffff7f7fffff;
  fVar58 = -3.4028235e+38;
  fStack_130 = -3.4028235e+38;
  fVar60 = -3.4028235e+38;
  fStack_12c = -3.4028235e+38;
  uStack_100 = 0x3f800000;
  uStack_fc = 0x40000000;
  uStack_f4 = 3;
  uStack_110 = 1;
  plStack_118 = (longlong *)&system_data_0000;
  uStack_108 = 0;
  uStack_f8 = 0;
  iStack_1a8 = 0;
  uStack_1e4 = 0;
  plStack_1e0 = plStack_168;
  if (0 < lVar26) {
    uStack_198 = (ulonglong *)0x0;
    puStack_150 = (uint64_t *)0x0;
    do {
      plVar15 = (longlong *)0x0;
      lVar26 = (longlong)(int)plVar35 * 0x140 + lStack_138;
      plVar35 = (longlong *)puVar37[1];
      if (plVar35 < (longlong *)puVar37[2]) {
        puVar37[1] = (ulonglong)(plVar35 + 1);
        *plVar35 = lVar26;
      }
      else {
        plVar33 = (longlong *)*puVar37;
        lVar27 = (longlong)plVar35 - (longlong)plVar33 >> 3;
        if (lVar27 == 0) {
          lVar27 = 1;
LAB_18038f9ef:
          plVar41 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar27 * 8,(char)puVar37[3]);
          plVar35 = (longlong *)puVar37[1];
          plVar33 = (longlong *)*puVar37;
        }
        else {
          lVar27 = lVar27 * 2;
          plVar41 = plVar15;
          if (lVar27 != 0) goto LAB_18038f9ef;
        }
        if (plVar33 != plVar35) {
                    // WARNING: Subroutine does not return
          memmove(plVar41,plVar33,(longlong)plVar35 - (longlong)plVar33);
        }
        *plVar41 = lVar26;
        if (*puVar37 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *puVar37 = (ulonglong)plVar41;
        puVar37[1] = (ulonglong)(plVar41 + 1);
        puVar37[2] = (ulonglong)(plVar41 + lVar27);
        lVar43 = lStackX_10;
      }
      puVar37 = puStack_180;
      uVar12 = **(int32_t **)(lVar43 + 8);
      *(int32_t **)(lVar43 + 8) = *(int32_t **)(lVar43 + 8) + 1;
      cVar10 = (char)uVar12;
      *(char *)(lVar26 + 0xa8) = cVar10;
      if (cVar10 == '\0') {
        bVar11 = 0;
      }
      else {
        plVar35 = (longlong *)(lVar26 + 0x80);
        do {
          iVar42 = **(int **)(lVar43 + 8);
          *(int **)(lVar43 + 8) = *(int **)(lVar43 + 8) + 1;
          *plVar35 = (longlong)puStack_188 + (longlong)iVar42 * 0x14;
          uVar38 = (int)plVar15 + 1;
          plVar15 = (longlong *)(ulonglong)uVar38;
          plVar35 = plVar35 + 1;
          bVar11 = *(byte *)(lVar26 + 0xa8);
        } while ((int)uVar38 < (int)(uint)bVar11);
      }
      plVar35 = (longlong *)0x0;
      uVar38 = 0;
      iVar42 = 0;
      if (bVar11 != 0) {
        plVar15 = (longlong *)(lVar26 + 0x60);
        plVar33 = plVar35;
        do {
          lVar27 = (longlong)**(int **)(lVar43 + 8);
          *(int **)(lVar43 + 8) = *(int **)(lVar43 + 8) + 1;
          plVar41 = plVar35;
          do {
            iVar23 = 0;
            if (*(byte *)(lVar26 + 0xa8) == 0) goto LAB_18038fba6;
            plVar17 = (longlong *)(lVar26 + 0x80);
            while (*plVar17 != *(longlong *)(lStack_178 + lVar27 * 0x28 + (longlong)plVar41 * 8)) {
              iVar23 = iVar23 + 1;
              plVar17 = plVar17 + 1;
              if ((int)(uint)*(byte *)(lVar26 + 0xa8) <= iVar23) goto LAB_18038fba6;
            }
            plVar41 = (longlong *)((longlong)plVar41 + 1);
          } while ((longlong)plVar41 < 2);
          lVar27 = lStack_178 + lVar27 * 0x28;
          lVar25 = *plVar15;
          if (lVar25 != 0) {
            if (*(longlong *)(lVar25 + 0x10) == lVar26) {
              *(uint64_t *)(lVar25 + 0x10) = *(uint64_t *)(lVar25 + 0x18);
LAB_18038fb75:
              *(char *)(lVar25 + 0x20) = *(char *)(lVar25 + 0x20) + -1;
              *(uint64_t *)(lVar25 + 0x18) = 0;
            }
            else if (*(longlong *)(lVar25 + 0x18) == lVar26) goto LAB_18038fb75;
            *plVar15 = 0;
          }
          if (((lVar27 != 0) && (*plVar15 = lVar27, *(longlong *)(lVar27 + 0x10) != lVar26)) &&
             (*(longlong *)(lVar27 + 0x18) != lVar26)) {
            *(longlong *)(lVar27 + 0x10 + (ulonglong)*(byte *)(lVar27 + 0x20) * 8) = lVar26;
            *(char *)(lVar27 + 0x20) = *(char *)(lVar27 + 0x20) + '\x01';
          }
          plVar33 = (longlong *)(ulonglong)((int)plVar33 + 1);
          plVar15 = plVar15 + 1;
LAB_18038fba6:
          uVar38 = (uint)plVar33;
          iVar42 = iVar42 + 1;
        } while (iVar42 < (int)(uint)*(byte *)(lVar26 + 0xa8));
      }
      piVar16 = *(int **)(lVar43 + 8);
      iVar42 = *piVar16;
      *(int **)(lVar43 + 8) = piVar16 + 1;
      if (iVar42 < 2) {
        *(int8_t *)(lVar26 + 0x138) = 0;
      }
      else {
        iVar23 = piVar16[1];
        *(int **)(lVar43 + 8) = piVar16 + 2;
        *(char *)(lVar26 + 0x138) = (char)iVar23;
      }
      if (iVar42 < 1) {
        *(int32_t *)(lVar26 + 0x130) = 0;
      }
      else {
        *(int32_t *)(lVar26 + 0x130) = **(int32_t **)(lVar43 + 8);
        *(longlong *)(lVar43 + 8) = *(longlong *)(lVar43 + 8) + 4;
      }
      if (((iVar14 + 0xceb8b2b2U & 0xfcffffff) != 0) || (iVar14 == 0x32474d4e)) {
        puVar39 = *(int32_t **)(lVar43 + 8);
        *(int32_t *)(lVar26 + 0x120) = *puVar39;
        *(int32_t **)(lVar43 + 8) = puVar39 + 1;
      }
      *(int *)(lVar26 + 0x130) = *(int *)(lVar26 + 0x130) + param_5;
      if (iVar14 < 0x36474d4f) {
        if (iVar14 < 0x34474d4e) {
          *(int32_t *)(lVar26 + 0x134) = 0xff;
        }
        else {
          cVar10 = **(char **)(lVar43 + 8);
          *(char **)(lVar43 + 8) = *(char **)(lVar43 + 8) + 1;
          *(int *)(lVar26 + 0x134) = (int)cVar10;
        }
      }
      else {
        *(int32_t *)(lVar26 + 0x134) = **(int32_t **)(lVar43 + 8);
        *(longlong *)(lVar43 + 8) = *(longlong *)(lVar43 + 8) + 4;
      }
      if (0x38474d4d < iVar14) {
        *(longlong *)(lVar43 + 8) = *(longlong *)(lVar43 + 8) + 1;
      }
      if (*(byte *)(lVar26 + 0xa8) != uVar38) {
        FUN_180627020(&unknown_var_5536_ptr,(double)*(float *)(lVar26 + 0xe8),
                      (double)*(float *)(lVar26 + 0xec),(double)*(float *)(lVar26 + 0xf0));
        lVar27 = *(longlong *)(lVar26 + 0x60);
        if (lVar27 != 0) {
          if (*(longlong *)(lVar27 + 0x10) == lVar26) {
            *(uint64_t *)(lVar27 + 0x10) = *(uint64_t *)(lVar27 + 0x18);
LAB_18038fcf7:
            *(char *)(lVar27 + 0x20) = *(char *)(lVar27 + 0x20) + -1;
            *(uint64_t *)(lVar27 + 0x18) = 0;
          }
          else if (*(longlong *)(lVar27 + 0x18) == lVar26) goto LAB_18038fcf7;
          *(uint64_t *)(lVar26 + 0x60) = 0;
        }
        lVar27 = *(longlong *)(lVar26 + 0x68);
        if (lVar27 != 0) {
          if (*(longlong *)(lVar27 + 0x10) == lVar26) {
            *(uint64_t *)(lVar27 + 0x10) = *(uint64_t *)(lVar27 + 0x18);
LAB_18038fd21:
            *(char *)(lVar27 + 0x20) = *(char *)(lVar27 + 0x20) + -1;
            *(uint64_t *)(lVar27 + 0x18) = 0;
          }
          else if (*(longlong *)(lVar27 + 0x18) == lVar26) goto LAB_18038fd21;
          *(uint64_t *)(lVar26 + 0x68) = 0;
        }
        lVar27 = *(longlong *)(lVar26 + 0x70);
        if (lVar27 != 0) {
          if (*(longlong *)(lVar27 + 0x10) == lVar26) {
            *(uint64_t *)(lVar27 + 0x10) = *(uint64_t *)(lVar27 + 0x18);
LAB_18038fd4b:
            *(char *)(lVar27 + 0x20) = *(char *)(lVar27 + 0x20) + -1;
            *(uint64_t *)(lVar27 + 0x18) = 0;
          }
          else if (*(longlong *)(lVar27 + 0x18) == lVar26) goto LAB_18038fd4b;
          *(uint64_t *)(lVar26 + 0x70) = 0;
        }
        lVar27 = *(longlong *)(lVar26 + 0x78);
        if (lVar27 == 0) goto LAB_18038fd80;
        if (*(longlong *)(lVar27 + 0x10) == lVar26) {
          *(uint64_t *)(lVar27 + 0x10) = *(uint64_t *)(lVar27 + 0x18);
LAB_18038fd75:
          *(char *)(lVar27 + 0x20) = *(char *)(lVar27 + 0x20) + -1;
          *(uint64_t *)(lVar27 + 0x18) = 0;
        }
        else if (*(longlong *)(lVar27 + 0x18) == lVar26) goto LAB_18038fd75;
        *(uint64_t *)(lVar26 + 0x78) = 0;
LAB_18038fd80:
        FUN_180397080(lVar26);
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar26);
      }
      uVar38 = *(uint *)(*(longlong *)(uStackX_8 + 0x14a) + 0x60300) & 0xfffffffe;
      if (((uVar38 & *(uint *)(lVar26 + 0x134)) == uVar38) || ((*(uint *)(lVar26 + 0x134) & 1) != 0)
         ) {
        if (param_8 != '\0') {
          puVar37 = (ulonglong *)(lVar26 + 0x60);
          lVar27 = 4;
          plVar15 = plStack_118;
          do {
            uVar24 = *puVar37;
            if (uVar24 != 0) {
              uVar31 = uVar24 % (uStack_110 & 0xffffffff);
              for (puVar18 = (ulonglong *)plVar15[uVar24 % (uStack_110 & 0xffffffff)];
                  (puVar28 = (ulonglong *)plVar15[uStack_110], puVar18 != (ulonglong *)0x0 &&
                  (puVar28 = puVar18, uVar24 != *puVar18)); puVar18 = (ulonglong *)puVar18[2]) {
              }
              if (puVar28 == (ulonglong *)plVar15[uStack_110]) {
                uStack_d8 = (int)uStack_108;
                for (puVar18 = (ulonglong *)plVar15[uVar31]; uStack_e0 = uVar24,
                    puVar18 != (ulonglong *)0x0; puVar18 = (ulonglong *)puVar18[2]) {
                  if (uVar24 == *puVar18) goto LAB_18038ff34;
                }
                puVar18 = (ulonglong *)FUN_18062b420(system_memory_pool_ptr,0x18,(int8_t)uStack_f4);
                *puVar18 = uStack_e0;
                puVar18[1] = CONCAT44(uStack_d4,uStack_d8);
                puVar18[2] = 0;
                FUN_18066c220(&uStack_100,&puStack_128,uStack_110 & 0xffffffff,
                              uStack_108 & 0xffffffff,1);
                if ((char)puStack_128 != '\0') {
                  uVar31 = uVar24 % ((ulonglong)puStack_128 >> 0x20);
                  FUN_18033db70(auStack_120);
                }
                puVar18[2] = plStack_118[uVar31];
                plStack_118[uVar31] = (longlong)puVar18;
                uStack_108 = uStack_108 + 1;
                plVar15 = plStack_118;
              }
            }
LAB_18038ff34:
            puVar37 = puVar37 + 1;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
        }
        FUN_18038af00(lVar26);
        if ((*(float *)(lVar26 + 0xd8) <= 0.0 && *(float *)(lVar26 + 0xd8) != 0.0) ||
           ((3 < *(byte *)(lVar26 + 0xa8) &&
            (*(float *)(lVar26 + 0xe4) <= 0.0 && *(float *)(lVar26 + 0xe4) != 0.0)))) {
          puStack_1c8 = &system_data_buffer_ptr;
          uStack_1b0 = 0;
          puStack_1c0 = (uint64_t *)0x0;
          uStack_1b8 = 0;
          FUN_1806277c0(&puStack_1c8,0x41);
          *puStack_1c0 = 0x697461676976614e;
          puStack_1c0[1] = 0x206873656d206e6f;
          puStack_1c0[2] = 0x7469772065636166;
          puStack_1c0[3] = 0x747265766e692068;
          puStack_1c0[4] = 0x616d726f6e206465;
          puStack_1c0[5] = 0x2e646e756f66206c;
          puStack_1c0[6] = 0x6f7020656361460a;
          puStack_1c0[7] = 0x203a6e6f69746973;
          *(int16_t *)(puStack_1c0 + 8) = 0x28;
          uStack_1b8 = 0x41;
          if (*(byte *)(lVar26 + 0xa8) != 0) {
            uVar24 = (ulonglong)*(byte *)(lVar26 + 0xa8);
            do {
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          FUN_1806284c0(&puStack_1c8);
          uVar38 = uStack_1b8 + 2;
          FUN_1806277c0(&puStack_1c8,uVar38);
          *(int16_t *)((ulonglong)uStack_1b8 + (longlong)puStack_1c0) = 0x202c;
          *(int8_t *)((int16_t *)((ulonglong)uStack_1b8 + (longlong)puStack_1c0) + 1) = 0;
          uStack_1b8 = uVar38;
          FUN_1806284c0(&puStack_1c8);
          uVar38 = uStack_1b8 + 2;
          FUN_1806277c0(&puStack_1c8,uVar38);
          *(int16_t *)((ulonglong)uStack_1b8 + (longlong)puStack_1c0) = 0x202c;
          *(int8_t *)((int16_t *)((ulonglong)uStack_1b8 + (longlong)puStack_1c0) + 1) = 0;
          uStack_1b8 = uVar38;
          FUN_1806284c0(&puStack_1c8);
          iVar42 = uStack_1b8 + 1;
          FUN_1806277c0(&puStack_1c8,iVar42);
          *(int16_t *)((ulonglong)uStack_1b8 + (longlong)puStack_1c0) = 0x29;
          puVar29 = (uint64_t *)&system_buffer_ptr;
          if (puStack_1c0 != (uint64_t *)0x0) {
            puVar29 = puStack_1c0;
          }
          uStack_1b8 = iVar42;
          FUN_180627020(puVar29);
          puStack_1c8 = &system_data_buffer_ptr;
          if (puStack_1c0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_1c0 = (uint64_t *)0x0;
          uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
          puStack_1c8 = &system_state_ptr;
        }
        plStack_1a0[(longlong)puStack_150] = lVar26;
        iStack_1a8 = iStack_1a8 + 1;
        puStack_150 = (uint64_t *)((longlong)puStack_150 + 1);
        uStack_148 = 0;
        uStack_140 = 0;
        FUN_18038cd10(lVar26,&uStack_148,&uStack_140);
        if (uStack_148._4_4_ <= fVar59) {
          fVar59 = uStack_148._4_4_;
        }
        if ((float)uStack_148 <= fVar57) {
          fVar57 = (float)uStack_148;
        }
        uStack_1d0 = CONCAT44(fVar59,fVar57);
        if (fVar60 <= uStack_140._4_4_) {
          fVar60 = uStack_140._4_4_;
        }
        if (fVar58 <= (float)uStack_140) {
          fVar58 = (float)uStack_140;
        }
        puVar37 = puStack_180;
        fStack_130 = fVar58;
        fStack_12c = fVar60;
        if (lStackX_18 != 0) {
          if (plStack_1e0 < plStack_160) {
            plStack_168 = plStack_1e0 + 1;
            *plStack_1e0 = lVar26;
            plStack_1e0 = plStack_168;
          }
          else {
            lVar43 = (longlong)plStack_1e0 - (longlong)plStack_170;
            lVar27 = lVar43 >> 3;
            if (lVar27 == 0) {
              lVar27 = 1;
LAB_18039020f:
              plVar35 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar27 * 8,3);
            }
            else {
              lVar27 = lVar27 * 2;
              if (lVar27 != 0) goto LAB_18039020f;
            }
            if (plStack_170 != plStack_1e0) {
                    // WARNING: Subroutine does not return
              memmove(plVar35,plStack_170,lVar43);
            }
            *plVar35 = lVar26;
            plStack_1e0 = plVar35 + 1;
            if (plStack_170 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            plStack_160 = plVar35 + lVar27;
            puVar37 = puStack_180;
            plStack_170 = plVar35;
            plStack_168 = plStack_1e0;
          }
        }
      }
      else {
        iVar42 = 0;
        if (*(byte *)(lVar26 + 0xa8) != 0) {
          plVar35 = (longlong *)(lVar26 + 0x60);
          do {
            lVar27 = *plVar35;
            if (lVar27 != 0) {
              if (*(longlong *)(lVar27 + 0x10) == lVar26) {
                *(uint64_t *)(lVar27 + 0x10) = *(uint64_t *)(lVar27 + 0x18);
LAB_18038fe04:
                *(char *)(lVar27 + 0x20) = *(char *)(lVar27 + 0x20) + -1;
                *(uint64_t *)(lVar27 + 0x18) = 0;
              }
              else if (*(longlong *)(lVar27 + 0x18) == lVar26) goto LAB_18038fe04;
              *plVar35 = 0;
            }
            iVar42 = iVar42 + 1;
            plVar35 = plVar35 + 1;
          } while (iVar42 < (int)(uint)*(byte *)(lVar26 + 0xa8));
        }
        FUN_180057340(puStack_180,((longlong)(puStack_180[1] - *puStack_180) >> 3) + -1);
      }
      uStack_1e4 = uStack_1e4 + 1;
      plVar35 = (longlong *)(ulonglong)uStack_1e4;
      uStack_198 = (ulonglong *)((longlong)uStack_198 + 1);
      puVar39 = uStackX_8;
      lVar43 = lStackX_10;
    } while ((longlong)uStack_198 < lStack_e8);
  }
  plVar35 = (longlong *)0x0;
  if (param_8 == '\0') {
    FUN_18005ea90(puVar39 + 0x12e,&lStack_178);
    FUN_18005ea90(puVar39 + 0x136,&lStack_138);
  }
  else {
    lVar26 = FUN_180396f80((longlong)(int)uStack_108);
    *(uint64_t *)(puVar39 + 0x118) = *(uint64_t *)(puVar39 + 0x116);
    plVar15 = (longlong *)*plStack_118;
    plVar33 = plStack_118;
    if (plVar15 == (longlong *)0x0) {
      plVar33 = plStack_118 + 1;
      lVar27 = *plVar33;
      while (lVar27 == 0) {
        plVar33 = plVar33 + 1;
        lVar27 = *plVar33;
      }
      plVar15 = (longlong *)*plVar33;
    }
    uStack_198 = (ulonglong *)lVar26;
    if (plVar15 != (longlong *)plStack_118[uStack_110]) {
      do {
        puVar20 = (uint64_t *)*plVar15;
        puVar29 = (uint64_t *)(lVar26 + (longlong)(int)plVar15[1] * 0x28);
        uVar6 = puVar20[1];
        *puVar29 = *puVar20;
        puVar29[1] = uVar6;
        uVar6 = puVar20[3];
        puVar29[2] = puVar20[2];
        puVar29[3] = uVar6;
        puVar29[4] = puVar20[4];
        lVar27 = puVar29[2];
        if (lVar27 != 0) {
          if (*(uint64_t **)(lVar27 + 0x60) == puVar20) {
            *(uint64_t **)(lVar27 + 0x60) = puVar29;
          }
          else if (*(uint64_t **)(lVar27 + 0x68) == puVar20) {
            *(uint64_t **)(lVar27 + 0x68) = puVar29;
          }
          else if (*(uint64_t **)(lVar27 + 0x70) == puVar20) {
            *(uint64_t **)(lVar27 + 0x70) = puVar29;
          }
          else if (*(uint64_t **)(lVar27 + 0x78) == puVar20) {
            *(uint64_t **)(lVar27 + 0x78) = puVar29;
          }
        }
        lVar27 = puVar29[3];
        if (lVar27 != 0) {
          if (*(uint64_t **)(lVar27 + 0x60) == puVar20) {
            *(uint64_t **)(lVar27 + 0x60) = puVar29;
          }
          else if (*(uint64_t **)(lVar27 + 0x68) == puVar20) {
            *(uint64_t **)(lVar27 + 0x68) = puVar29;
          }
          else if (*(uint64_t **)(lVar27 + 0x70) == puVar20) {
            *(uint64_t **)(lVar27 + 0x70) = puVar29;
          }
          else if (*(uint64_t **)(lVar27 + 0x78) == puVar20) {
            *(uint64_t **)(lVar27 + 0x78) = puVar29;
          }
        }
        plVar41 = *(longlong **)(puVar39 + 0x118);
        if (plVar41 < *(longlong **)(puVar39 + 0x11a)) {
          *(longlong **)(puVar39 + 0x118) = plVar41 + 1;
          *plVar41 = (longlong)puVar29;
        }
        else {
          plVar17 = *(longlong **)(puVar39 + 0x116);
          lVar26 = (longlong)plVar41 - (longlong)plVar17 >> 3;
          if (lVar26 == 0) {
            lVar26 = 1;
LAB_180390406:
            plVar19 = (longlong *)
                      FUN_18062b420(system_memory_pool_ptr,lVar26 * 8,*(int8_t *)(puVar39 + 0x11c));
            plVar41 = *(longlong **)(uStackX_8 + 0x118);
            plVar17 = *(longlong **)(uStackX_8 + 0x116);
          }
          else {
            lVar26 = lVar26 * 2;
            plVar19 = plVar35;
            if (lVar26 != 0) goto LAB_180390406;
          }
          if (plVar17 != plVar41) {
                    // WARNING: Subroutine does not return
            memmove(plVar19,plVar17,(longlong)plVar41 - (longlong)plVar17);
          }
          *plVar19 = (longlong)puVar29;
          if (*(longlong *)(uStackX_8 + 0x116) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(longlong **)(uStackX_8 + 0x116) = plVar19;
          *(longlong **)(uStackX_8 + 0x118) = plVar19 + 1;
          *(longlong **)(uStackX_8 + 0x11a) = plVar19 + lVar26;
          lVar26 = (longlong)uStack_198;
          puVar39 = uStackX_8;
        }
        plVar15 = (longlong *)plVar15[2];
        while (plVar15 == (longlong *)0x0) {
          plVar33 = plVar33 + 1;
          plVar15 = (longlong *)*plVar33;
        }
      } while (plVar15 != (longlong *)plStack_118[uStack_110]);
    }
    FUN_18005ea90(puVar39 + 0x12e,&uStack_198);
    if (lStack_178 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lStack_178);
    }
    puVar37 = (ulonglong *)(longlong)iStack_1a8;
    uStack_198 = puVar37;
    puVar20 = (uint64_t *)FUN_180396ff0(puVar37);
    plStack_168 = plStack_170;
    uStack_1e4 = 0;
    plVar15 = plVar35;
    puVar29 = puVar20;
    plVar33 = plStack_170;
    plVar41 = plStack_1a0;
    plVar17 = plStack_1a0;
    puStack_150 = puVar20;
    if (0 < (longlong)puVar37) {
      do {
        plVar19 = plStack_168;
        lVar26 = 2;
        puVar8 = (uint64_t *)*plVar17;
        puVar9 = puVar20;
        do {
          puVar30 = puVar9;
          puVar21 = puVar8;
          uVar6 = puVar21[1];
          *puVar30 = *puVar21;
          puVar30[1] = uVar6;
          uVar6 = puVar21[3];
          puVar30[2] = puVar21[2];
          puVar30[3] = uVar6;
          uVar6 = puVar21[5];
          puVar30[4] = puVar21[4];
          puVar30[5] = uVar6;
          uVar6 = puVar21[7];
          puVar30[6] = puVar21[6];
          puVar30[7] = uVar6;
          uVar6 = puVar21[9];
          puVar30[8] = puVar21[8];
          puVar30[9] = uVar6;
          uVar6 = puVar21[0xb];
          puVar30[10] = puVar21[10];
          puVar30[0xb] = uVar6;
          uVar6 = puVar21[0xd];
          puVar30[0xc] = puVar21[0xc];
          puVar30[0xd] = uVar6;
          uVar6 = puVar21[0xf];
          puVar30[0xe] = puVar21[0xe];
          puVar30[0xf] = uVar6;
          lVar26 = lVar26 + -1;
          puVar8 = puVar21 + 0x10;
          puVar9 = puVar30 + 0x10;
        } while (lVar26 != 0);
        uVar6 = puVar21[0x11];
        puVar30[0x10] = puVar21[0x10];
        puVar30[0x11] = uVar6;
        uVar6 = puVar21[0x13];
        puVar30[0x12] = puVar21[0x12];
        puVar30[0x13] = uVar6;
        uVar6 = puVar21[0x15];
        puVar30[0x14] = puVar21[0x14];
        puVar30[0x15] = uVar6;
        uVar6 = puVar21[0x17];
        puVar30[0x16] = puVar21[0x16];
        puVar30[0x17] = uVar6;
        plVar40 = plVar35;
        if (*(char *)(puVar20 + 0x15) != '\0') {
          lVar26 = 0x60;
          do {
            lVar27 = *(longlong *)((longlong)puVar20 + lVar26);
            if (*(longlong *)(lVar27 + 0x10) == *plVar17) {
              *(uint64_t *)(lVar27 + 0x10) = *(uint64_t *)(lVar27 + 0x18);
LAB_1803905ee:
              *(char *)(lVar27 + 0x20) = *(char *)(lVar27 + 0x20) + -1;
              *(uint64_t *)(lVar27 + 0x18) = 0;
            }
            else if (*(longlong *)(lVar27 + 0x18) == *plVar17) goto LAB_1803905ee;
            *(longlong *)((longlong)puVar20 + lVar26) = lVar27;
            if ((*(uint64_t **)(lVar27 + 0x10) != puVar20) &&
               (*(uint64_t **)(lVar27 + 0x18) != puVar20)) {
              *(uint64_t **)(lVar27 + 0x10 + (ulonglong)*(byte *)(lVar27 + 0x20) * 8) = puVar20;
              *(char *)(lVar27 + 0x20) = *(char *)(lVar27 + 0x20) + '\x01';
            }
            uVar38 = (int)plVar40 + 1;
            plVar40 = (longlong *)(ulonglong)uVar38;
            lVar26 = lVar26 + 8;
          } while ((int)uVar38 < (int)(uint)*(byte *)(puVar20 + 0x15));
        }
        puStack_128 = puVar29 + (longlong)(int)(uint)plVar15 * 0x28;
        *(uint64_t **)((longlong)plVar17 + (*puStack_180 - (longlong)plVar41)) = puStack_128;
        if (plStack_168 < plStack_160) {
          *plStack_168 = (longlong)puStack_128;
          uStack_198 = puVar37;
          plVar22 = plVar33;
          uStack_1e4 = (uint)plVar15;
        }
        else {
          lVar27 = (longlong)plStack_168 - (longlong)plVar33;
          lVar26 = lVar27 >> 3;
          if (lVar26 == 0) {
            lVar26 = 1;
LAB_18039068b:
            plVar22 = (longlong *)
                      FUN_18062b420(system_memory_pool_ptr,lVar26 * 8,
                                    CONCAT71((int7)((ulonglong)plVar40 >> 8),3));
            plVar33 = plStack_170;
          }
          else {
            lVar26 = lVar26 * 2;
            plVar22 = plVar35;
            if (lVar26 != 0) goto LAB_18039068b;
          }
          if (plVar33 != plVar19) {
                    // WARNING: Subroutine does not return
            memmove(plVar22,plVar33,lVar27);
          }
          *plVar22 = (longlong)puStack_128;
          if (plVar33 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar33);
          }
          plStack_160 = plVar22 + lVar26;
          puVar29 = puStack_150;
          plVar41 = plStack_1a0;
          plStack_170 = plVar22;
          plStack_168 = plVar22;
        }
        plStack_168 = plStack_168 + 1;
        uStack_1e4 = uStack_1e4 + 1;
        puVar20 = puVar20 + 0x28;
        puVar37 = (ulonglong *)((longlong)uStack_198 + -1);
        plVar15 = (longlong *)(ulonglong)uStack_1e4;
        plVar33 = plVar22;
        plVar17 = plVar17 + 1;
        uStack_198 = puVar37;
      } while (puVar37 != (ulonglong *)0x0);
      uStack_198 = (ulonglong *)0x0;
      puVar39 = uStackX_8;
    }
    plStack_1e0 = plStack_168;
    FUN_18005ea90(puVar39 + 0x136,&puStack_150);
    FUN_180396c90(lStack_138);
  }
  lVar26 = lStackX_18;
  if (lStackX_18 != 0) {
    if ((param_7 != '\0') && (0 < iStack_f0)) {
      uStackX_8 = (int32_t *)CONCAT44(fStack_12c,fStack_130);
      uVar12 = logf((fStack_130 - (float)uStack_1d0) * 0.2);
      auVar44._8_4_ = (int)extraout_XMM0_Qb;
      auVar44._0_8_ = extraout_XMM0_Qa;
      auVar44._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar45._4_12_ = auVar44._4_12_;
      auVar45._0_4_ = (float)extraout_XMM0_Qa * 1.442695;
      iVar42 = (int)auVar45._0_4_;
      uVar56 = (int32_t)((ulonglong)extraout_XMM0_Qa >> 0x20);
      auVar47._0_8_ = auVar45._0_8_;
      if (auVar45._0_4_ <= 0.0) {
        if ((iVar42 != -0x80000000) && ((float)iVar42 != auVar45._0_4_)) {
          auVar49._8_4_ = uVar56;
          auVar49._0_8_ = auVar47._0_8_;
          auVar49._12_4_ = uVar56;
          auVar48._8_8_ = auVar49._8_8_;
          auVar48._4_4_ = auVar45._0_4_;
          auVar48._0_4_ = auVar45._0_4_;
          uVar38 = movmskps(uVar12,auVar48);
          auVar45 = ZEXT416((uint)(float)(int)(iVar42 + (uVar38 & 1 ^ 1)));
        }
        fVar57 = auVar45._0_4_ - 1e-08;
      }
      else {
        if ((iVar42 != -0x80000000) && ((float)iVar42 != auVar45._0_4_)) {
          auVar47._8_4_ = uVar56;
          auVar47._12_4_ = uVar56;
          auVar46._8_8_ = auVar47._8_8_;
          auVar46._4_4_ = auVar45._0_4_;
          auVar46._0_4_ = auVar45._0_4_;
          uVar38 = movmskps(uVar12,auVar46);
          auVar45 = ZEXT416((uint)(float)(int)(iVar42 + (uVar38 & 1 ^ 1)));
        }
        fVar57 = auVar45._0_4_ + 1e-08;
      }
      iVar23 = (int)fVar57;
      uVar12 = logf((uStackX_8._4_4_ - uStack_1d0._4_4_) * 0.2);
      auVar50._8_4_ = (int)extraout_XMM0_Qb_00;
      auVar50._0_8_ = extraout_XMM0_Qa_00;
      auVar50._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      auVar51._4_12_ = auVar50._4_12_;
      auVar51._0_4_ = (float)extraout_XMM0_Qa_00 * 1.442695;
      iVar42 = (int)auVar51._0_4_;
      uVar56 = (int32_t)((ulonglong)extraout_XMM0_Qa_00 >> 0x20);
      auVar53._0_8_ = auVar51._0_8_;
      if (auVar51._0_4_ <= 0.0) {
        if ((iVar42 != -0x80000000) && ((float)iVar42 != auVar51._0_4_)) {
          auVar55._8_4_ = uVar56;
          auVar55._0_8_ = auVar53._0_8_;
          auVar55._12_4_ = uVar56;
          auVar54._8_8_ = auVar55._8_8_;
          auVar54._4_4_ = auVar51._0_4_;
          auVar54._0_4_ = auVar51._0_4_;
          uVar38 = movmskps(uVar12,auVar54);
          auVar51 = ZEXT416((uint)(float)(int)(iVar42 + (uVar38 & 1 ^ 1)));
        }
        fVar57 = auVar51._0_4_ - 1e-08;
      }
      else {
        if ((iVar42 != -0x80000000) && ((float)iVar42 != auVar51._0_4_)) {
          auVar53._8_4_ = uVar56;
          auVar53._12_4_ = uVar56;
          auVar52._8_8_ = auVar53._8_8_;
          auVar52._4_4_ = auVar51._0_4_;
          auVar52._0_4_ = auVar51._0_4_;
          uVar38 = movmskps(uVar12,auVar52);
          auVar51 = ZEXT416((uint)(float)(int)(iVar42 + (uVar38 & 1 ^ 1)));
        }
        fVar57 = auVar51._0_4_ + 1e-08;
      }
      iVar42 = (int)fVar57;
      if (iVar23 < 2) {
        iVar23 = 2;
      }
      else if (10 < iVar23) {
        iVar23 = 10;
      }
      iVar13 = 2;
      if ((1 < iVar42) && (iVar13 = iVar42, 10 < iVar42)) {
        iVar13 = 10;
      }
      FUN_1801c0df0(lVar26);
      lVar26 = lStackX_18;
      FUN_1801be620(lStackX_18,&uStack_1d0,&uStackX_8,iVar23,iVar13);
    }
    plVar15 = plStack_170;
    uVar24 = (longlong)plStack_1e0 - (longlong)plStack_170 >> 3;
    plVar33 = plStack_170;
    plVar41 = plVar35;
    if (uVar24 != 0) {
      do {
        FUN_180388830(lVar26,*plVar33);
        uVar38 = (int)plVar41 + 1;
        plVar33 = plVar33 + 1;
        plVar41 = (longlong *)(ulonglong)uVar38;
      } while ((ulonglong)(longlong)(int)uVar38 < uVar24);
    }
    plVar33 = plVar35;
    if (uVar24 != 0) {
      do {
        FUN_180388630(lVar26,*plVar15);
        uVar38 = (int)plVar33 + 1;
        plVar15 = plVar15 + 1;
        plVar33 = (longlong *)(ulonglong)uVar38;
      } while ((ulonglong)(longlong)(int)uVar38 < uVar24);
    }
  }
  lVar26 = lStack_e8;
  plVar15 = plStack_1a0;
  if ((cStackX_20 != '\0') && (plVar33 = plVar35, 0 < lStack_e8)) {
    do {
      FUN_18038af00(plVar15[(longlong)plVar33]);
      FUN_18038b160(plVar15[(longlong)plVar33]);
      plVar33 = (longlong *)((longlong)plVar33 + 1);
    } while ((longlong)plVar33 < lVar26);
  }
  lVar26 = lStackX_10;
  if (0x34474d4d < iVar14) {
    uVar38 = **(uint **)(lStackX_10 + 8);
    *(uint **)(lStackX_10 + 8) = *(uint **)(lStackX_10 + 8) + 1;
    uVar36 = 0x20;
    if ((int)uVar38 < 0x20) {
      uVar36 = uVar38;
    }
    if (0 < (int)uVar36) {
      puVar34 = puVar39 + 2;
      uVar24 = (ulonglong)uVar36;
      do {
        iVar14 = **(int **)(lVar26 + 8);
        *(int **)(lVar26 + 8) = *(int **)(lVar26 + 8) + 1;
        FUN_18025ab30(puVar34,(longlong)iVar14);
        puVar34 = puVar34 + 8;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    lVar27 = (longlong)(int)uVar36;
    if (0 < (int)uVar36) {
      plVar15 = (longlong *)(puVar39 + 2);
      do {
        lVar43 = *plVar15;
        plVar33 = plVar35;
        plVar41 = plVar35;
        if (plVar15[1] - lVar43 >> 5 != 0) {
          do {
            iVar14 = **(int **)(lVar26 + 8);
            *(int **)(lVar26 + 8) = *(int **)(lVar26 + 8) + 1;
            *(longlong *)(lVar43 + (longlong)plVar33) = plStack_1a0[iVar14];
            uVar12 = **(int32_t **)(lVar26 + 8);
            *(int32_t **)(lVar26 + 8) = *(int32_t **)(lVar26 + 8) + 1;
            *(int32_t *)(lVar43 + 8 + (longlong)plVar33) = uVar12;
            iVar14 = **(int **)(lVar26 + 8);
            *(int **)(lVar26 + 8) = *(int **)(lVar26 + 8) + 1;
            *(longlong *)(lVar43 + 0x10 + (longlong)plVar33) = plStack_1a0[iVar14];
            uVar12 = **(int32_t **)(lVar26 + 8);
            *(int32_t **)(lVar26 + 8) = *(int32_t **)(lVar26 + 8) + 1;
            *(int32_t *)(lVar43 + 0x18 + (longlong)plVar33) = uVar12;
            uVar38 = (int)plVar41 + 1;
            lVar43 = *plVar15;
            plVar33 = plVar33 + 4;
            plVar41 = (longlong *)(ulonglong)uVar38;
          } while ((ulonglong)(longlong)(int)uVar38 < (ulonglong)(plVar15[1] - lVar43 >> 5));
        }
        plVar15 = plVar15 + 4;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    *puVar39 = 1;
  }
  if (plStack_1a0 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plStack_1a0);
  }
  lVar26 = *(longlong *)(puVar39 + 0x11e);
  plVar15 = plVar35;
  plVar33 = plVar35;
  plVar41 = plVar35;
  if (*(longlong *)(puVar39 + 0x120) - lVar26 >> 3 != 0) {
    do {
      lVar26 = *(longlong *)((longlong)plVar33 + lVar26);
      *(int32_t *)(lVar26 + 0x128) = 0xffffffff;
      bVar11 = *(byte *)(lVar26 + 0x139);
      if (((bVar11 & 1) == 0) || ((bVar11 & 2) != 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      uVar38 = (uint)plVar15 + 1;
      if (!bVar7) {
        uVar38 = (uint)plVar15;
      }
      plVar15 = (longlong *)(ulonglong)uVar38;
      uVar38 = (int)plVar41 + 1;
      lVar26 = *(longlong *)(puVar39 + 0x11e);
      plVar33 = plVar33 + 1;
      plVar41 = (longlong *)(ulonglong)uVar38;
    } while ((ulonglong)(longlong)(int)uVar38 <
             (ulonglong)(*(longlong *)(puVar39 + 0x120) - lVar26 >> 3));
  }
  puVar39[0x14c] = 1;
  uVar38 = (uint)plVar15;
  plStack_1a0 = (longlong *)0x0;
  plVar33 = plVar35;
  plVar41 = plVar35;
  while (0 < (int)uVar38) {
    plVar17 = (longlong *)(*(longlong *)(puVar39 + 0x11e) + (longlong)plVar35 * 8);
    lVar26 = *plVar17;
    while ((plVar33 < (longlong *)
                      (*(longlong *)(puVar39 + 0x120) - *(longlong *)(puVar39 + 0x11e) >> 3) &&
           (((*(int *)(lVar26 + 0x128) != -1 || ((*(byte *)(lVar26 + 0x139) & 1) == 0)) ||
            ((*(byte *)(lVar26 + 0x139) & 2) != 0))))) {
      uVar38 = (int)plVar41 + 1;
      plVar41 = (longlong *)(ulonglong)uVar38;
      plVar35 = (longlong *)((longlong)plVar35 + 1);
      plVar17 = plVar17 + 1;
      plVar33 = (longlong *)(longlong)(int)uVar38;
      lVar26 = *plVar17;
    }
    if (lVar26 == 0) break;
    puVar39[0x14c] = puVar39[0x14c] + 1;
    iVar14 = FUN_18038ee20(plVar17,lVar26,puVar39[0x14c]);
    uVar38 = (int)plVar15 - iVar14;
    plVar15 = (longlong *)(ulonglong)uVar38;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,&unknown_var_5392_ptr,param_8);
}







