#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part223_sub002_sub002.c - 1 个函数

// 函数: void FUN_180199930(int64_t param_1)
void FUN_180199930(int64_t param_1)

{
  byte bVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  byte *pbVar6;
  int64_t *plVar7;
  uint64_t *******pppppppuVar8;
  int iVar9;
  uint64_t *puVar10;
  uint64_t *******pppppppuVar11;
  int64_t *plVar12;
  uint64_t *******pppppppuVar13;
  int32_t *puVar14;
  uint uVar15;
  uint64_t ******ppppppuVar16;
  byte *pbVar17;
  void *puVar18;
  uint64_t uVar19;
  int iVar20;
  uint *puVar21;
  int64_t lVar22;
  int64_t lVar23;
  int64_t lVar24;
  uint64_t *******pppppppuVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  int64_t *plVar28;
  uint64_t uVar29;
  uint uStackX_18;
  int32_t uStackX_1c;
  int64_t **pplStackX_20;
  void *puStack_268;
  byte *pbStack_260;
  int iStack_258;
  uint64_t uStack_250;
  void *puStack_248;
  byte *pbStack_240;
  int iStack_238;
  uint64_t uStack_230;
  void *puStack_228;
  byte *pbStack_220;
  int iStack_218;
  uint64_t uStack_210;
  void *puStack_208;
  byte *pbStack_200;
  int iStack_1f8;
  uint64_t uStack_1f0;
  void *puStack_1e8;
  byte *pbStack_1e0;
  int iStack_1d8;
  uint64_t uStack_1d0;
  void *puStack_1c8;
  byte *pbStack_1c0;
  int iStack_1b8;
  uint64_t uStack_1b0;
  uint64_t ******ppppppuStack_1a8;
  uint64_t ******ppppppuStack_1a0;
  uint64_t ******ppppppuStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  int32_t uStack_180;
  uint64_t uStack_178;
  uint64_t ******ppppppuStack_170;
  uint64_t ******ppppppuStack_168;
  uint64_t ******ppppppuStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  int32_t uStack_148;
  uint64_t ******ppppppuStack_140;
  uint64_t ******ppppppuStack_138;
  uint64_t ******ppppppuStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  int64_t *plStack_110;
  uint64_t uStack_108;
  int64_t lStack_100;
  int64_t *plStack_f8;
  uint64_t uStack_f0;
  int32_t uStack_e0;
  int32_t uStack_dc;
  int32_t uStack_d8;
  int64_t lStack_d0;
  uint64_t *puStack_c8;
  int64_t *plStack_b8;
  int64_t *plStack_b0;
  uint64_t uStack_a8;
  int32_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  int8_t auStack_70 [8];
  int8_t auStack_68 [8];
  int8_t auStack_60 [8];
  int8_t auStack_58 [8];
  int8_t auStack_50 [16];
  
  uStack_78 = 0xfffffffffffffffe;
  uVar27 = 0;
  (**(code **)(*(int64_t *)(param_1 + 0x60740) + 0x10))
            ((int64_t *)(param_1 + 0x60740),&system_buffer_ptr);
  (**(code **)(*(int64_t *)(param_1 + 0x60760) + 0x10))
            ((int64_t *)(param_1 + 0x60760),&system_buffer_ptr);
  *(int8_t *)(param_1 + 0x607a2) = *(int8_t *)(param_1 + 0x331c);
  uVar26 = uVar27;
  if (*(int *)(param_1 + 0x60c40) != -1) {
    uVar26 = *(uint64_t *)
              (*(int64_t *)(param_1 + 0x60c20) + (int64_t)*(int *)(param_1 + 0x60c40) * 8);
  }
  *(bool *)(param_1 + 0x607a1) = uVar26 != 0;
  uVar26 = *(uint64_t *)(param_1 + 0x60838);
  uStack_118 = 3;
  ppppppuStack_140 = &ppppppuStack_140;
  ppppppuStack_138 = &ppppppuStack_140;
  ppppppuStack_130 = (uint64_t *******)0x0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_148 = 3;
  ppppppuStack_170 = &ppppppuStack_170;
  ppppppuStack_168 = &ppppppuStack_170;
  ppppppuStack_160 = (uint64_t *******)0x0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_180 = 3;
  ppppppuStack_1a8 = &ppppppuStack_1a8;
  ppppppuStack_1a0 = &ppppppuStack_1a8;
  ppppppuStack_198 = (uint64_t *******)0x0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_108 = uVar26;
  FUN_1801c2360(param_1 + 0x60830,&plStack_f8);
  uStack_178 = uStack_f0;
  if (uStack_f0 != uVar26) {
    lStack_100 = CONCAT44(uStack_dc,uStack_e0);
    plVar12 = plStack_f8;
    uVar19 = uStack_f0;
    uVar29 = uVar27;
    do {
      if (*(char *)(lStack_100 + 0x2e5) == '\x04') {
        plStack_b8 = (int64_t *)0x0;
        plStack_b0 = (int64_t *)0x0;
        uStack_a8 = 0;
        uStack_a0 = 3;
        uStack_178 = uVar19;
        FUN_1802e92b0(lStack_100,&plStack_b8,0,0xffffffff);
        pplStackX_20 = (int64_t **)
                       CONCAT44(pplStackX_20._4_4_,
                                (int)uVar27 +
                                (int)((int64_t)plStack_b0 - (int64_t)plStack_b8 >> 3));
        plVar28 = plStack_b8;
        plStack_110 = plStack_b8;
        uVar26 = uStack_108;
        plVar12 = plStack_f8;
        plVar3 = plStack_b8;
        plVar4 = plStack_b8;
        plVar5 = plStack_b0;
        if (plStack_b8 != plStack_b0) {
          do {
            lVar22 = *plVar28;
            puStack_228 = &system_data_buffer_ptr;
            uStack_210 = 0;
            pbStack_220 = (byte *)0x0;
            iStack_218 = 0;
            plStack_110 = plVar28;
            FUN_1806277c0(&puStack_228,*(int32_t *)(lVar22 + 0x20));
            pbVar6 = pbStack_220;
            if (0 < *(int *)(lVar22 + 0x20)) {
              puVar18 = &system_buffer_ptr;
              if (*(void **)(lVar22 + 0x18) != (void *)0x0) {
                puVar18 = *(void **)(lVar22 + 0x18);
              }
                    // WARNING: Subroutine does not return
              memcpy(pbStack_220,puVar18,(int64_t)(*(int *)(lVar22 + 0x20) + 1));
            }
            if ((*(int64_t *)(lVar22 + 0x18) != 0) && (iStack_218 = 0, pbStack_220 != (byte *)0x0))
            {
              *pbStack_220 = 0;
            }
            pppppppuVar8 = &ppppppuStack_140;
            pppppppuVar13 = (uint64_t *******)ppppppuStack_130;
            while (pppppppuVar11 = pppppppuVar8, pppppppuVar13 != (uint64_t *******)0x0) {
              if (iStack_218 == 0) {
                bVar2 = false;
                pppppppuVar25 = (uint64_t *******)pppppppuVar13[1];
              }
              else {
                if (*(int *)(pppppppuVar13 + 6) == 0) {
                  bVar2 = true;
                }
                else {
                  pbVar17 = pbStack_220;
                  do {
                    uVar15 = (uint)pbVar17[(int64_t)pppppppuVar13[5] - (int64_t)pbStack_220];
                    iVar20 = *pbVar17 - uVar15;
                    if (*pbVar17 != uVar15) break;
                    pbVar17 = pbVar17 + 1;
                  } while (uVar15 != 0);
                  bVar2 = 0 < iVar20;
                  if (iVar20 < 1) {
                    pppppppuVar25 = (uint64_t *******)pppppppuVar13[1];
                    goto LAB_180199c3b;
                  }
                }
                pppppppuVar25 = (uint64_t *******)*pppppppuVar13;
              }
LAB_180199c3b:
              pppppppuVar8 = pppppppuVar13;
              pppppppuVar13 = pppppppuVar25;
              if (bVar2) {
                pppppppuVar8 = pppppppuVar11;
              }
            }
            if (pppppppuVar11 == &ppppppuStack_140) {
LAB_180199c8a:
              puVar10 = (uint64_t *)FUN_1800c2ab0(&ppppppuStack_140,auStack_70);
              pppppppuVar11 = (uint64_t *******)*puVar10;
            }
            else if (*(int *)(pppppppuVar11 + 6) != 0) {
              if (iStack_218 != 0) {
                ppppppuVar16 = pppppppuVar11[5];
                lVar22 = (int64_t)pbStack_220 - (int64_t)ppppppuVar16;
                do {
                  bVar1 = *(byte *)ppppppuVar16;
                  uVar15 = (uint)*(byte *)((int64_t)ppppppuVar16 + lVar22);
                  if (bVar1 != uVar15) break;
                  ppppppuVar16 = (uint64_t ******)((int64_t)ppppppuVar16 + 1);
                } while (uVar15 != 0);
                if ((int)(bVar1 - uVar15) < 1) goto LAB_180199caa;
              }
              goto LAB_180199c8a;
            }
LAB_180199caa:
            iVar20 = *(int *)(pppppppuVar11 + 8);
            puStack_228 = &system_data_buffer_ptr;
            if (pbVar6 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(pbVar6);
            }
            pbStack_220 = (byte *)0x0;
            uStack_210 = uStack_210 & 0xffffffff00000000;
            puStack_228 = &system_state_ptr;
            lVar22 = *plVar28;
            puStack_208 = &system_data_buffer_ptr;
            uStack_1f0 = 0;
            pbStack_200 = (byte *)0x0;
            iStack_1f8 = 0;
            FUN_1806277c0(&puStack_208,*(int32_t *)(lVar22 + 0x20));
            pbVar6 = pbStack_200;
            if (0 < *(int *)(lVar22 + 0x20)) {
              puVar18 = &system_buffer_ptr;
              if (*(void **)(lVar22 + 0x18) != (void *)0x0) {
                puVar18 = *(void **)(lVar22 + 0x18);
              }
                    // WARNING: Subroutine does not return
              memcpy(pbStack_200,puVar18,(int64_t)(*(int *)(lVar22 + 0x20) + 1));
            }
            if ((*(int64_t *)(lVar22 + 0x18) != 0) && (iStack_1f8 = 0, pbStack_200 != (byte *)0x0))
            {
              *pbStack_200 = 0;
            }
            pppppppuVar8 = &ppppppuStack_140;
            pppppppuVar13 = (uint64_t *******)ppppppuStack_130;
            while (pppppppuVar11 = pppppppuVar8, pppppppuVar13 != (uint64_t *******)0x0) {
              if (iStack_1f8 == 0) {
                bVar2 = false;
                pppppppuVar25 = (uint64_t *******)pppppppuVar13[1];
              }
              else {
                if (*(int *)(pppppppuVar13 + 6) == 0) {
                  bVar2 = true;
                }
                else {
                  pbVar17 = pbStack_200;
                  do {
                    uVar15 = (uint)pbVar17[(int64_t)pppppppuVar13[5] - (int64_t)pbStack_200];
                    iVar9 = *pbVar17 - uVar15;
                    if (*pbVar17 != uVar15) break;
                    pbVar17 = pbVar17 + 1;
                  } while (uVar15 != 0);
                  bVar2 = 0 < iVar9;
                  if (iVar9 < 1) {
                    pppppppuVar25 = (uint64_t *******)pppppppuVar13[1];
                    goto LAB_180199dab;
                  }
                }
                pppppppuVar25 = (uint64_t *******)*pppppppuVar13;
              }
LAB_180199dab:
              pppppppuVar8 = pppppppuVar13;
              pppppppuVar13 = pppppppuVar25;
              if (bVar2) {
                pppppppuVar8 = pppppppuVar11;
              }
            }
            if (pppppppuVar11 == &ppppppuStack_140) {
LAB_180199dfa:
              puVar10 = (uint64_t *)FUN_1800c2ab0(&ppppppuStack_140,auStack_68);
              pppppppuVar11 = (uint64_t *******)*puVar10;
            }
            else if (*(int *)(pppppppuVar11 + 6) != 0) {
              if (iStack_1f8 != 0) {
                ppppppuVar16 = pppppppuVar11[5];
                lVar22 = (int64_t)pbStack_200 - (int64_t)ppppppuVar16;
                do {
                  bVar1 = *(byte *)ppppppuVar16;
                  uVar15 = (uint)*(byte *)((int64_t)ppppppuVar16 + lVar22);
                  if (bVar1 != uVar15) break;
                  ppppppuVar16 = (uint64_t ******)((int64_t)ppppppuVar16 + 1);
                } while (uVar15 != 0);
                if ((int)(bVar1 - uVar15) < 1) goto LAB_180199e19;
              }
              goto LAB_180199dfa;
            }
LAB_180199e19:
            *(int *)(pppppppuVar11 + 8) = iVar20 + 1;
            puStack_208 = &system_data_buffer_ptr;
            if (pbVar6 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(pbVar6);
            }
            pbStack_200 = (byte *)0x0;
            uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
            puStack_208 = &system_state_ptr;
            lVar22 = *plVar28;
            lVar23 = lVar22;
            if ((*(byte *)(lVar22 + 0xfd) & 0x20) == 0) {
              lVar23 = func_0x000180085de0(*(uint64_t *)(lVar22 + 0x1b0));
            }
            uStackX_18 = (int)uVar29 + *(int *)(lVar23 + 0x1fc);
            lVar22 = *(int64_t *)(lVar22 + 0x1b8);
            puStack_1e8 = &system_data_buffer_ptr;
            uStack_1d0 = 0;
            pbStack_1e0 = (byte *)0x0;
            iStack_1d8 = 0;
            FUN_1806277c0(&puStack_1e8,*(int32_t *)(lVar22 + 0x20));
            pbVar6 = pbStack_1e0;
            if (0 < *(int *)(lVar22 + 0x20)) {
              puVar18 = &system_buffer_ptr;
              if (*(void **)(lVar22 + 0x18) != (void *)0x0) {
                puVar18 = *(void **)(lVar22 + 0x18);
              }
                    // WARNING: Subroutine does not return
              memcpy(pbStack_1e0,puVar18,(int64_t)(*(int *)(lVar22 + 0x20) + 1));
            }
            if ((*(int64_t *)(lVar22 + 0x18) != 0) && (iStack_1d8 = 0, pbStack_1e0 != (byte *)0x0))
            {
              *pbStack_1e0 = 0;
            }
            pppppppuVar8 = &ppppppuStack_170;
            pppppppuVar13 = (uint64_t *******)ppppppuStack_160;
            while (pppppppuVar11 = pppppppuVar8, pppppppuVar13 != (uint64_t *******)0x0) {
              if (iStack_1d8 == 0) {
                bVar2 = false;
                pppppppuVar25 = (uint64_t *******)pppppppuVar13[1];
              }
              else {
                if (*(int *)(pppppppuVar13 + 6) == 0) {
                  bVar2 = true;
                }
                else {
                  pbVar17 = pbStack_1e0;
                  do {
                    uVar15 = (uint)pbVar17[(int64_t)pppppppuVar13[5] - (int64_t)pbStack_1e0];
                    iVar20 = *pbVar17 - uVar15;
                    if (*pbVar17 != uVar15) break;
                    pbVar17 = pbVar17 + 1;
                  } while (uVar15 != 0);
                  bVar2 = 0 < iVar20;
                  if (iVar20 < 1) {
                    pppppppuVar25 = (uint64_t *******)pppppppuVar13[1];
                    goto LAB_180199f4b;
                  }
                }
                pppppppuVar25 = (uint64_t *******)*pppppppuVar13;
              }
LAB_180199f4b:
              pppppppuVar8 = pppppppuVar13;
              pppppppuVar13 = pppppppuVar25;
              if (bVar2) {
                pppppppuVar8 = pppppppuVar11;
              }
            }
            if (pppppppuVar11 == &ppppppuStack_170) {
LAB_180199f9a:
              puVar10 = (uint64_t *)FUN_1800c2ab0(&ppppppuStack_170,auStack_60);
              pppppppuVar11 = (uint64_t *******)*puVar10;
            }
            else if (*(int *)(pppppppuVar11 + 6) != 0) {
              if (iStack_1d8 != 0) {
                ppppppuVar16 = pppppppuVar11[5];
                lVar23 = (int64_t)pbStack_1e0 - (int64_t)ppppppuVar16;
                do {
                  bVar1 = *(byte *)ppppppuVar16;
                  uVar15 = (uint)*(byte *)((int64_t)ppppppuVar16 + lVar23);
                  if (bVar1 != uVar15) break;
                  ppppppuVar16 = (uint64_t ******)((int64_t)ppppppuVar16 + 1);
                } while (uVar15 != 0);
                if ((int)(bVar1 - uVar15) < 1) goto LAB_180199fb9;
              }
              goto LAB_180199f9a;
            }
LAB_180199fb9:
            iVar20 = *(int *)(pppppppuVar11 + 8);
            puStack_1e8 = &system_data_buffer_ptr;
            if (pbVar6 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(pbVar6);
            }
            pbStack_1e0 = (byte *)0x0;
            uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
            puStack_1e8 = &system_state_ptr;
            puStack_1c8 = &system_data_buffer_ptr;
            uStack_1b0 = 0;
            pbStack_1c0 = (byte *)0x0;
            iStack_1b8 = 0;
            FUN_1806277c0(&puStack_1c8,*(int32_t *)(lVar22 + 0x20));
            pbVar6 = pbStack_1c0;
            if (0 < *(int *)(lVar22 + 0x20)) {
              puVar18 = &system_buffer_ptr;
              if (*(void **)(lVar22 + 0x18) != (void *)0x0) {
                puVar18 = *(void **)(lVar22 + 0x18);
              }
                    // WARNING: Subroutine does not return
              memcpy(pbStack_1c0,puVar18,(int64_t)(*(int *)(lVar22 + 0x20) + 1));
            }
            if ((*(int64_t *)(lVar22 + 0x18) != 0) && (iStack_1b8 = 0, pbStack_1c0 != (byte *)0x0))
            {
              *pbStack_1c0 = 0;
            }
            pppppppuVar8 = &ppppppuStack_170;
            pppppppuVar13 = (uint64_t *******)ppppppuStack_160;
            while (pppppppuVar11 = pppppppuVar8, pppppppuVar13 != (uint64_t *******)0x0) {
              if (iStack_1b8 == 0) {
                bVar2 = false;
                pppppppuVar25 = (uint64_t *******)pppppppuVar13[1];
              }
              else {
                if (*(int *)(pppppppuVar13 + 6) == 0) {
                  bVar2 = true;
                }
                else {
                  pbVar17 = pbStack_1c0;
                  do {
                    uVar15 = (uint)pbVar17[(int64_t)pppppppuVar13[5] - (int64_t)pbStack_1c0];
                    iVar9 = *pbVar17 - uVar15;
                    if (*pbVar17 != uVar15) break;
                    pbVar17 = pbVar17 + 1;
                  } while (uVar15 != 0);
                  bVar2 = 0 < iVar9;
                  if (iVar9 < 1) {
                    pppppppuVar25 = (uint64_t *******)pppppppuVar13[1];
                    goto LAB_18019a0bb;
                  }
                }
                pppppppuVar25 = (uint64_t *******)*pppppppuVar13;
              }
LAB_18019a0bb:
              pppppppuVar8 = pppppppuVar13;
              pppppppuVar13 = pppppppuVar25;
              if (bVar2) {
                pppppppuVar8 = pppppppuVar11;
              }
            }
            if (pppppppuVar11 == &ppppppuStack_170) {
LAB_18019a10a:
              puVar10 = (uint64_t *)FUN_1800c2ab0(&ppppppuStack_170,auStack_58);
              pppppppuVar11 = (uint64_t *******)*puVar10;
            }
            else if (*(int *)(pppppppuVar11 + 6) != 0) {
              if (iStack_1b8 != 0) {
                ppppppuVar16 = pppppppuVar11[5];
                lVar23 = (int64_t)pbStack_1c0 - (int64_t)ppppppuVar16;
                do {
                  bVar1 = *(byte *)ppppppuVar16;
                  uVar15 = (uint)*(byte *)((int64_t)ppppppuVar16 + lVar23);
                  if (bVar1 != uVar15) break;
                  ppppppuVar16 = (uint64_t ******)((int64_t)ppppppuVar16 + 1);
                } while (uVar15 != 0);
                if ((int)(bVar1 - uVar15) < 1) goto LAB_18019a129;
              }
              goto LAB_18019a10a;
            }
LAB_18019a129:
            *(int *)(pppppppuVar11 + 8) = iVar20 + 1;
            puStack_1c8 = &system_data_buffer_ptr;
            if (pbVar6 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(pbVar6);
            }
            pbStack_1c0 = (byte *)0x0;
            uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
            puStack_1c8 = &system_state_ptr;
            plVar12 = (int64_t *)(lVar22 + 0xb8);
            lVar22 = 0x10;
            do {
              lVar23 = *plVar12;
              if (lVar23 != 0) {
                puStack_268 = &system_data_buffer_ptr;
                uStack_250 = 0;
                pbStack_260 = (byte *)0x0;
                iStack_258 = 0;
                FUN_1806277c0(&puStack_268,*(int32_t *)(lVar23 + 0x20));
                pbVar6 = pbStack_260;
                if (0 < *(int *)(lVar23 + 0x20)) {
                  puVar18 = &system_buffer_ptr;
                  if (*(void **)(lVar23 + 0x18) != (void *)0x0) {
                    puVar18 = *(void **)(lVar23 + 0x18);
                  }
                    // WARNING: Subroutine does not return
                  memcpy(pbStack_260,puVar18,(int64_t)(*(int *)(lVar23 + 0x20) + 1));
                }
                if ((*(int64_t *)(lVar23 + 0x18) != 0) &&
                   (iStack_258 = 0, pbStack_260 != (byte *)0x0)) {
                  *pbStack_260 = 0;
                }
                pppppppuVar8 = &ppppppuStack_1a8;
                pppppppuVar13 = (uint64_t *******)ppppppuStack_198;
                while (pppppppuVar11 = pppppppuVar8, pppppppuVar13 != (uint64_t *******)0x0) {
                  if (iStack_258 == 0) {
                    bVar2 = false;
                    pppppppuVar25 = (uint64_t *******)pppppppuVar13[1];
                  }
                  else {
                    if (*(int *)(pppppppuVar13 + 6) == 0) {
                      bVar2 = true;
                    }
                    else {
                      pbVar17 = pbStack_260;
                      do {
                        uVar15 = (uint)pbVar17[(int64_t)pppppppuVar13[5] - (int64_t)pbStack_260];
                        iVar20 = *pbVar17 - uVar15;
                        if (*pbVar17 != uVar15) break;
                        pbVar17 = pbVar17 + 1;
                      } while (uVar15 != 0);
                      bVar2 = 0 < iVar20;
                      if (iVar20 < 1) {
                        pppppppuVar25 = (uint64_t *******)pppppppuVar13[1];
                        goto LAB_18019a25b;
                      }
                    }
                    pppppppuVar25 = (uint64_t *******)*pppppppuVar13;
                  }
LAB_18019a25b:
                  pppppppuVar8 = pppppppuVar13;
                  pppppppuVar13 = pppppppuVar25;
                  if (bVar2) {
                    pppppppuVar8 = pppppppuVar11;
                  }
                }
                if (pppppppuVar11 == &ppppppuStack_1a8) {
LAB_18019a2aa:
                  puVar10 = (uint64_t *)FUN_1800c2ab0(&ppppppuStack_1a8,auStack_50);
                  pppppppuVar11 = (uint64_t *******)*puVar10;
                }
                else if (*(int *)(pppppppuVar11 + 6) != 0) {
                  if (iStack_258 != 0) {
                    ppppppuVar16 = pppppppuVar11[5];
                    lVar24 = (int64_t)pbStack_260 - (int64_t)ppppppuVar16;
                    do {
                      bVar1 = *(byte *)ppppppuVar16;
                      uVar15 = (uint)*(byte *)((int64_t)ppppppuVar16 + lVar24);
                      if (bVar1 != uVar15) break;
                      ppppppuVar16 = (uint64_t ******)((int64_t)ppppppuVar16 + 1);
                    } while (uVar15 != 0);
                    if ((int)(bVar1 - uVar15) < 1) goto LAB_18019a2ca;
                  }
                  goto LAB_18019a2aa;
                }
LAB_18019a2ca:
                iVar20 = *(int *)(pppppppuVar11 + 8);
                puStack_268 = &system_data_buffer_ptr;
                if (pbVar6 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900(pbVar6);
                }
                pbStack_260 = (byte *)0x0;
                uStack_250 = uStack_250 & 0xffffffff00000000;
                puStack_268 = &system_state_ptr;
                puStack_248 = &system_data_buffer_ptr;
                uStack_230 = 0;
                pbStack_240 = (byte *)0x0;
                iStack_238 = 0;
                FUN_1806277c0(&puStack_248,*(int32_t *)(lVar23 + 0x20));
                pbVar6 = pbStack_240;
                if (0 < *(int *)(lVar23 + 0x20)) {
                  puVar18 = &system_buffer_ptr;
                  if (*(void **)(lVar23 + 0x18) != (void *)0x0) {
                    puVar18 = *(void **)(lVar23 + 0x18);
                  }
                    // WARNING: Subroutine does not return
                  memcpy(pbStack_240,puVar18,(int64_t)(*(int *)(lVar23 + 0x20) + 1));
                }
                if ((*(int64_t *)(lVar23 + 0x18) != 0) &&
                   (iStack_238 = 0, pbStack_240 != (byte *)0x0)) {
                  *pbStack_240 = 0;
                }
                pppppppuVar8 = &ppppppuStack_1a8;
                pppppppuVar13 = (uint64_t *******)ppppppuStack_198;
                while (pppppppuVar11 = pppppppuVar8, pppppppuVar13 != (uint64_t *******)0x0) {
                  if (iStack_238 == 0) {
                    bVar2 = false;
                    pppppppuVar25 = (uint64_t *******)pppppppuVar13[1];
                  }
                  else {
                    if (*(int *)(pppppppuVar13 + 6) == 0) {
                      bVar2 = true;
                    }
                    else {
                      pbVar17 = pbStack_240;
                      do {
                        uVar15 = (uint)pbVar17[(int64_t)pppppppuVar13[5] - (int64_t)pbStack_240];
                        iVar9 = *pbVar17 - uVar15;
                        if (*pbVar17 != uVar15) break;
                        pbVar17 = pbVar17 + 1;
                      } while (uVar15 != 0);
                      bVar2 = 0 < iVar9;
                      if (iVar9 < 1) {
                        pppppppuVar25 = (uint64_t *******)pppppppuVar13[1];
                        goto LAB_18019a3db;
                      }
                    }
                    pppppppuVar25 = (uint64_t *******)*pppppppuVar13;
                  }
LAB_18019a3db:
                  pppppppuVar8 = pppppppuVar13;
                  pppppppuVar13 = pppppppuVar25;
                  if (bVar2) {
                    pppppppuVar8 = pppppppuVar11;
                  }
                }
                if (pppppppuVar11 == &ppppppuStack_1a8) {
LAB_18019a42a:
                  puVar10 = (uint64_t *)FUN_1800c2ab0(&ppppppuStack_1a8,&lStack_d0);
                  pppppppuVar11 = (uint64_t *******)*puVar10;
                }
                else if (*(int *)(pppppppuVar11 + 6) != 0) {
                  if (iStack_238 != 0) {
                    ppppppuVar16 = pppppppuVar11[5];
                    lVar23 = (int64_t)pbStack_240 - (int64_t)ppppppuVar16;
                    do {
                      bVar1 = *(byte *)ppppppuVar16;
                      uVar15 = (uint)*(byte *)((int64_t)ppppppuVar16 + lVar23);
                      if (bVar1 != uVar15) break;
                      ppppppuVar16 = (uint64_t ******)((int64_t)ppppppuVar16 + 1);
                    } while (uVar15 != 0);
                    if ((int)(bVar1 - uVar15) < 1) goto LAB_18019a44a;
                  }
                  goto LAB_18019a42a;
                }
LAB_18019a44a:
                *(int *)(pppppppuVar11 + 8) = iVar20 + 1;
                puStack_248 = &system_data_buffer_ptr;
                if (pbVar6 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900(pbVar6);
                }
                pbStack_240 = (byte *)0x0;
                uStack_230 = uStack_230 & 0xffffffff00000000;
                puStack_248 = &system_state_ptr;
              }
              plVar12 = plVar12 + 1;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            plStack_110 = plStack_110 + 1;
            uVar29 = (uint64_t)uStackX_18;
            plVar28 = plStack_110;
            uVar26 = uStack_108;
            plVar12 = plStack_f8;
            plVar3 = plStack_b8;
            plVar4 = plStack_b8;
            plVar5 = plStack_b0;
            uVar19 = uStack_178;
          } while (plStack_110 != plStack_b0);
        }
        for (; plVar7 = plStack_b0, plVar28 = plStack_b8, uStack_108 = uVar26, plStack_f8 = plVar12,
            plVar3 != plStack_b0; plVar3 = plVar3 + 1) {
          plStack_b8 = plVar4;
          plStack_b0 = plVar5;
          if ((int64_t *)*plVar3 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar3 + 0x38))();
          }
          uVar26 = uStack_108;
          plVar12 = plStack_f8;
          plVar4 = plStack_b8;
          plVar5 = plStack_b0;
          plStack_b0 = plVar7;
          plStack_b8 = plVar28;
        }
        if (plStack_b8 != (int64_t *)0x0) {
          plStack_b8 = plVar4;
          plStack_b0 = plVar5;
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar28);
        }
        uVar27 = (uint64_t)pplStackX_20 & 0xffffffff;
        plStack_b8 = plVar4;
        plStack_b0 = plVar5;
      }
      lVar22 = *plVar12;
      do {
        uVar19 = uVar19 + 1;
        lVar24 = (uVar19 & 0xffffffff) * 0x10;
        lVar23 = lVar24 + 8 + lVar22;
        if ((*(uint64_t *)(lVar24 + lVar22) & 0xffffffff00000000) == 0) {
          lVar23 = 0;
        }
        if (lVar23 != 0) {
          lStack_100 = *(int64_t *)(lVar22 + 8 + (uVar19 & 0xffffffff) * 0x10);
          break;
        }
      } while (uVar19 != plVar12[1]);
      uStack_178 = uVar19;
    } while (uVar19 != uVar26);
  }
  iVar20 = 0;
  iVar9 = 0;
  pppppppuVar13 = (uint64_t *******)ppppppuStack_1a0;
  if ((uint64_t *******)ppppppuStack_1a0 != &ppppppuStack_1a8) {
    do {
      FUN_180627ae0(&plStack_f8,pppppppuVar13 + 4);
      uStack_d8 = *(int32_t *)(pppppppuVar13 + 8);
      plVar12 = (int64_t *)FUN_1800b08e0(system_resource_state,&uStackX_18,&plStack_f8,0);
      lVar22 = *plVar12;
      if ((int64_t *)CONCAT44(uStackX_1c,uStackX_18) != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)CONCAT44(uStackX_1c,uStackX_18) + 0x38))();
      }
      iVar9 = iVar20;
      if (lVar22 != 0) {
        iVar9 = func_0x0001802a0ec0(*(int32_t *)(lVar22 + 0x324));
        iVar9 = iVar20 + (uint)*(ushort *)(lVar22 + 0x32e) * (uint)*(ushort *)(lVar22 + 0x32c) *
                         ((int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3);
      }
      pplStackX_20 = &plStack_f8;
      plStack_f8 = (int64_t *)&system_data_buffer_ptr;
      if (uStack_f0 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_f0 = 0;
      uStack_e0 = 0;
      plStack_f8 = (int64_t *)&system_state_ptr;
      pppppppuVar13 = (uint64_t *******)func_0x00018066bd70(pppppppuVar13);
      iVar20 = iVar9;
    } while (pppppppuVar13 != &ppppppuStack_1a8);
  }
  *(int *)(param_1 + 0x607b8) = iVar9;
  uStack_98 = 0;
  uStack_90 = 0;
  uVar15 = 0;
  uStack_88 = 0;
  uStack_80 = 3;
  *(int32_t *)(param_1 + 0x60790) = 0;
  if (*(int8_t **)(param_1 + 0x60788) != (int8_t *)0x0) {
    **(int8_t **)(param_1 + 0x60788) = 0;
  }
  puStack_c8 = &uStack_98;
  puStack_248 = &system_data_buffer_ptr;
  uStack_230 = 0;
  pbStack_240 = (byte *)0x0;
  iStack_238 = 0;
  lStack_d0 = param_1;
  puVar14 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar14 = 0;
  uVar26 = (uint64_t)puVar14 & 0xffffffffffc00000;
  if (uVar26 != 0) {
    lVar22 = ((int64_t)puVar14 - uVar26 >> 0x10) * 0x50 + 0x80 + uVar26;
    puVar21 = (uint *)(lVar22 - (uint64_t)*(uint *)(lVar22 + 4));
    if ((*(byte *)((int64_t)puVar21 + 0xe) & 2) == 0) {
      uVar15 = puVar21[7];
      if (0x3ffffff < uVar15) {
        uVar15 = *puVar21 << 0x10;
      }
    }
    else {
      uVar15 = puVar21[7];
      if (uVar15 < 0x4000000) {
        uVar27 = (uint64_t)uVar15;
      }
      else {
        uVar27 = (uint64_t)*puVar21 << 0x10;
      }
      if (0x3ffffff < uVar15) {
        uVar15 = *puVar21 << 0x10;
      }
      uVar15 = uVar15 - (int)(((int64_t)puVar14 -
                              (((int64_t)((int64_t)puVar21 + (-0x80 - uVar26)) / 0x50) * 0x10000 +
                              uVar26)) % uVar27);
    }
  }
  uStack_230 = CONCAT44(uStack_230._4_4_,uVar15);
  *puVar14 = 0x6574614d;
  puVar14[1] = 0x6c616972;
  puVar14[2] = 0x61735520;
  puVar14[3] = 0x736567;
  iStack_238 = 0xf;
  pbStack_240 = (byte *)puVar14;
  FUN_18019aac0(&lStack_d0,&ppppppuStack_170,&puStack_248);
  puStack_248 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar14);
}







