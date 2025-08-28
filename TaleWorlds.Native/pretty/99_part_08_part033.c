#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_08_part033.c - 1 个函数
// 函数: void function_5a0c50(int64_t *param_1)
void function_5a0c50(int64_t *param_1)
{
  int32_t *puVar1;
  uint uVar2;
  byte bVar3;
  int64_t lVar4;
  uint64_t uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  float *pfVar15;
  int64_t lVar16;
  int8_t uVar17;
  int iVar18;
  uint *puVar19;
  int64_t lVar20;
  int64_t lVar21;
  int64_t lVar22;
  int32_t uVar23;
  uint64_t *puVar24;
  int64_t lVar25;
  int8_t uVar26;
  uint64_t *puVar27;
  int8_t stack_array_2e8 [32];
  uint64_t *plocal_var_2c8;
  uint64_t *plocal_var_2c0;
  int *piStack_2b8;
  uint local_var_2b0;
  int64_t lStack_2a8;
  int64_t lStack_2a0;
  int64_t lStack_298;
  uint64_t *plocal_var_290;
  int8_t local_var_288;
  int64_t lStack_278;
  int64_t *plStack_270;
  int aiStack_268 [2];
  uint64_t local_var_260;
  int iStack_258;
  int64_t lStack_250;
  int64_t lStack_248;
  int8_t local_var_238;
  int8_t local_var_237;
  int8_t local_var_236;
  int8_t local_var_235;
  byte bStack_234;
  int16_t local_var_233;
  int8_t local_var_231;
  bool bStack_230;
  int8_t local_var_22f;
  int16_t local_var_22e;
  int32_t local_var_22c;
  int32_t local_var_228;
  uint64_t local_var_224;
  int8_t local_var_21c;
  int8_t local_var_21b;
  int8_t local_var_21a;
  int32_t local_var_218;
  int32_t local_var_214;
  int8_t local_var_210;
  int32_t local_var_20c;
  int32_t local_var_208;
  int32_t local_var_204;
  int32_t local_var_200;
  int32_t local_var_1fc;
  int32_t local_var_1f8;
  int32_t local_var_1f4;
  int32_t local_var_1f0;
  int32_t local_var_1ec;
  int32_t local_var_1e8;
  int32_t local_var_1e4;
  int32_t local_var_1e0;
  int32_t local_var_1dc;
  uint64_t local_var_1d8;
  int32_t local_var_1d0;
  int32_t local_var_1cc;
  int32_t local_var_1c8;
  int32_t local_var_1c4;
  int32_t local_var_1c0;
  int32_t local_var_1bc;
  int32_t local_var_1b8;
  int32_t local_var_1b4;
  int32_t local_var_1b0;
  int32_t local_var_1ac;
  int32_t local_var_1a8;
  int32_t local_var_1a4;
  int32_t local_var_1a0;
  int32_t local_var_19c;
  uint64_t local_var_198;
  int32_t local_var_190;
  int32_t local_var_18c;
  uint64_t local_var_188;
  int32_t local_var_180;
  int32_t local_var_17c;
  int32_t local_var_178;
  int32_t local_var_174;
  int32_t local_var_170;
  int32_t local_var_16c;
  int8_t local_var_168;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  int32_t local_var_14c;
  uint64_t local_var_148;
  int32_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  uint64_t local_var_110;
  int16_t local_var_108;
  int8_t local_var_100;
  int32_t local_var_fc;
  int32_t local_var_f8;
  int32_t local_var_f4;
  int32_t local_var_f0;
  int32_t local_var_ec;
  int32_t local_var_e8;
  int32_t local_var_e4;
  int32_t local_var_e0;
  int32_t local_var_dc;
  int32_t local_var_d8;
  int iStack_d4;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int8_t local_var_c8;
  uint64_t local_var_c4;
  int32_t local_var_bc;
  uint64_t stack_array_b8 [2];
  uint local_var_a8;
  uint local_var_a4;
  uint local_var_a0;
  uint local_var_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint local_var_8c;
  int8_t stack_array_88 [16];
  uint local_var_78;
  uint local_var_74;
  uint local_var_70;
  uint local_var_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint local_var_5c;
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2e8;
  lVar4 = param_1[4];
  iVar18 = *(int *)(*(int64_t *)(lVar4 + 0x590) + 0x2450 +
                   (int64_t)*(int *)((int64_t)param_1 + 0x3c) * 0x48);
  if ((iVar18 == -1) ||
     ((iVar18 = *(int *)((int64_t)iVar18 * 0x68 + 0x58 + system_system_memory), iVar18 != 0x1c &&
      (iVar18 != 0x1f)))) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  plStack_270 = param_1;
  if ((*(int *)(lVar4 + 0x568) == 1) && (bVar11)) {
    lStack_250 = *(int64_t *)(lVar4 + 0x8d8);
    iVar18 = (int)((param_1[1] - *param_1) / 0xcb0);
    if (0 < iVar18) {
      lVar21 = 0;
      lVar20 = (int64_t)iVar18;
      lStack_248 = 0;
      lStack_278 = lVar20;
LAB_1805a0d60:
      lVar16 = *param_1;
      if (*(char *)(lVar21 + 0xc18 + lVar16) == '\0') {
        lVar25 = 0;
LAB_1805a0d8e:
        if ((((((*(int *)(lVar21 + 0xc20 + lVar16) - 3U < 3) && (lVar25 != 0)) &&
              (lVar20 = *(int64_t *)(*(int64_t *)(lVar25 + 0x8f8) + 0x9f0), lVar20 != 0)) &&
             (0 < *(int *)(lVar20 + 0x30))) &&
            ((uVar5 = *(uint64_t *)
                       ((int64_t)*(int *)(lVar20 + 0xf0) * 0xa0 + 0x50 +
                       *(int64_t *)(lVar20 + 0xd0)), (uVar5 >> 9 & 1) == 0 ||
             (0 < *(short *)(lVar20 + 8))))) && ((uVar5 >> 0x1c & 1) != 0)) {
          uVar26 = 1;
        }
        else {
          uVar26 = 0;
        }
        aiStack_268[0] = -1;
        if ((lVar25 == 0) || (cVar14 = SystemFunction_00018052da70(), cVar14 == '\0')) {
          cVar14 = *(char *)(lVar21 + 0xc18 + lVar16);
          bVar11 = false;
          if (cVar14 == '\0') goto LAB_1805a0e22;
          bVar12 = true;
        }
        else {
          cVar14 = *(char *)(lVar21 + 0xc18 + lVar16);
          bVar11 = true;
LAB_1805a0e22:
          bVar12 = false;
        }
        if (((cVar14 == '\0') && (*(int64_t *)(lVar21 + lVar16) != 0)) &&
           (*(int64_t *)(*(int64_t *)(lVar21 + lVar16) + 0x10) != 0)) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        if ((bVar12) || (bVar13)) {
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        if ((cVar14 == '\0') && (*(int64_t *)(lVar21 + lVar16) != 0)) {
          puVar24 = *(uint64_t **)(*(int64_t *)(lVar21 + lVar16) + 0x10);
LAB_1805a0e7b:
          lVar20 = *(int64_t *)(lVar21 + 0xc10 + lVar16);
          if (lVar20 == 0) goto LAB_1805a0e8e;
          uVar23 = *(int32_t *)(lVar20 + 100);
        }
        else {
          puVar24 = (uint64_t *)0x0;
          if (cVar14 == '\0') goto LAB_1805a0e7b;
LAB_1805a0e8e:
          uVar23 = 0xffffffff;
        }
        cVar14 = *(char *)(lVar21 + 0xca0 + lVar16);
        if (cVar14 == -1) {
          uVar17 = 0xff;
        }
        else {
          uVar17 = *(int8_t *)
                    (*(int64_t *)
                      (*(int64_t *)
                        (*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar25 + 0x6d8) + 0x8a8) + 0x260)
                        + 0x208) + 0x140) + 0x104 + (int64_t)cVar14 * 0x1b0);
        }
        local_var_20c = (int32_t)plStack_270[6];
        local_var_178 = 0xbf800000;
        local_var_174 = 0x80000000;
        local_var_170 = 0x80000000;
        local_var_16c = 0x80000000;
        local_var_168 = 0;
        local_var_233 = 0;
        local_var_231 = 0;
        local_var_22e = 0;
        local_var_1fc = 0xffc00000;
        local_var_1f8 = 0xffc00000;
        local_var_1f4 = 0xffc00000;
        local_var_1f0 = 0xffc00000;
        local_var_1bc = 0x7fc00000;
        local_var_1b8 = 0x7fc00000;
        local_var_1b4 = 0x7fc00000;
        local_var_1b0 = 0x7fc00000;
        local_var_1ac = 0x7fc00000;
        local_var_1a8 = 0x7fc00000;
        local_var_1a4 = 0x7fc00000;
        local_var_1a0 = 0x7fc00000;
        _local_var_237 = CONCAT13((byte)~*(byte *)(lVar21 + 0xca2 + lVar16) >> 7,
                               CONCAT12(*(int8_t *)(lVar21 + 0xc18 + lVar16),
                                        CONCAT11(*(int8_t *)(lVar4 + 0x7e),
                                                 *(int8_t *)(lVar21 + 0xcaa + lVar16))));
        _bStack_230 = CONCAT11(*(int8_t *)(lVar21 + 0xca8 + lVar16),puVar24 != (uint64_t *)0x0
                              );
        local_var_210 = *(int8_t *)(lVar21 + 0xc24 + lVar16);
        _local_var_22c = CONCAT44((int)plStack_270[5],*(int32_t *)(lVar21 + 0xc20 + lVar16));
        local_var_224 = 0x200000001;
        _local_var_21c = CONCAT11(uVar17,*(int8_t *)(lVar21 + 0xca0 + lVar16));
        local_var_21a = *(int8_t *)(lVar21 + 0xca1 + lVar16);
        _local_var_218 = CONCAT44(uVar23,*(int32_t *)(lVar4 + 0x70));
        local_var_208 = *(int32_t *)(lVar21 + 0xc90 + lVar16);
        local_var_204 = *(int32_t *)(lVar21 + 0xc94 + lVar16);
        local_var_200 = *(int32_t *)(lVar21 + 0xc98 + lVar16);
        puVar27 = (uint64_t *)(lVar21 + 0xc48 + lVar16);
        uVar9 = *puVar27;
        uVar10 = puVar27[1];
        local_var_1ec = (int32_t)uVar9;
        local_var_1e8 = (int32_t)((uint64_t)uVar9 >> 0x20);
        local_var_1e4 = (int32_t)uVar10;
        local_var_1e0 = (int32_t)((uint64_t)uVar10 >> 0x20);
        puVar1 = (int32_t *)(lVar21 + 0xc58 + lVar16);
        local_var_1dc = *puVar1;
        local_var_1d8 = *(uint64_t *)(puVar1 + 1);
        local_var_1d0 = puVar1[3];
        puVar27 = (uint64_t *)(lVar16 + 0xc28 + lVar21);
        local_var_19c = 0x7fc00000;
        local_var_198 = 0x7fc000007fc00000;
        local_var_1cc = (int32_t)*puVar27;
        local_var_1c8 = (int32_t)((uint64_t)*puVar27 >> 0x20);
        local_var_1c4 = (int32_t)puVar27[1];
        local_var_1c0 = (int32_t)((uint64_t)puVar27[1] >> 0x20);
        puVar1 = (int32_t *)(lVar21 + 0xc38 + lVar16);
        local_var_188 = *(uint64_t *)(puVar1 + 1);
        _local_var_190 = CONCAT44(*puVar1,0x7fc00000);
        _local_var_180 = CONCAT44(0xbf800000,puVar1[3]);
        local_var_238 = uVar26;
        if (bVar12) {
          local_var_260 = 0xffffffffffffffff;
          iStack_258 = -1;
          if (lVar25 == 0) {
            lVar20 = 0;
          }
          else {
            lVar20 = (int64_t)*(int *)(lVar25 + 0x10) * 0xa60 + lStack_250 + 0x30a0;
          }
          local_var_288 = *(int8_t *)(lVar21 + 0xcab + lVar16);
          plocal_var_2c0 = (uint64_t *)(lVar4 + 0x6c);
          plocal_var_290 = &local_var_260;
          lStack_298 = lVar16 + 0xc78 + lVar21;
          lStack_2a0 = lVar16 + 0xc68 + lVar21;
          lStack_2a8 = CONCAT62(lStack_2a8._2_6_,*(int16_t *)(lVar4 + 0x7c));
          local_var_2b0 = CONCAT31(local_var_2b0._1_3_,*(int8_t *)(lVar21 + 0xca9 + lVar16));
          piStack_2b8 = aiStack_268;
          plocal_var_2c8 = puVar24;
          function_4f91b0(lStack_250,&local_var_238,lVar4,lVar20);
          if (((((int)local_var_260 != -1) || (local_var_260._4_4_ != -1)) || (iStack_258 != -1)) &&
             (lVar25 != 0)) {
            lVar20 = (int64_t)*(int *)(lVar25 + 0x10) * 0xa60 + lStack_250 + 0x30a0;
            puVar19 = (uint *)((int64_t)*(char *)(lVar21 + 0xca0 + lVar16) * 0x100 +
                              *(int64_t *)(*(int64_t *)(lVar20 + 0x658) + 0x18));
            do {
              LOCK();
              uVar2 = *puVar19;
              *puVar19 = *puVar19 | 1;
              UNLOCK();
            } while ((uVar2 & 1) != 0);
            local_var_a8 = puVar19[1];
            local_var_a4 = puVar19[2];
            local_var_a0 = puVar19[3];
            local_var_9c = puVar19[4];
            fVar6 = (float)puVar19[5];
            fVar7 = (float)puVar19[6];
            fVar8 = (float)puVar19[7];
            local_var_8c = puVar19[8];
            *puVar19 = 0;
            lVar22 = lStack_250;
            fStack_98 = fVar6;
            fStack_94 = fVar7;
            fStack_90 = fVar8;
            local_var_78 = local_var_a8;
            local_var_74 = local_var_a4;
            local_var_70 = local_var_a0;
            local_var_6c = local_var_9c;
            fStack_68 = fVar6;
            fStack_64 = fVar7;
            fStack_60 = fVar8;
            local_var_5c = local_var_8c;
            pfVar15 = (float *)SystemCore_CleanupHandler0(*(int64_t *)(*(int64_t *)(lVar20 + 0x6d8) + 0x8a8) +
                                             0x70,stack_array_88,puVar27);
            local_var_14c = 0x7f7fffff;
            fStack_158 = *pfVar15 - fVar6;
            fStack_154 = pfVar15[1] - fVar7;
            fStack_150 = pfVar15[2] - fVar8;
            SystemCore_EventHandler(&local_var_a8,stack_array_b8,&fStack_158);
            local_var_2b0 = local_var_2b0 & 0xffffff00;
            piStack_2b8 = (int *)CONCAT71(piStack_2b8._1_7_,
                                          *(int *)((int64_t)plStack_270 + 0x3c) == 1);
            plocal_var_2c0 = &local_var_260;
            plocal_var_2c8 = stack_array_b8;
            function_5ab940(*(uint64_t *)(lVar22 + 0x98d920),lVar4,lVar20,
                          *(int8_t *)(lVar21 + 0xca0 + lVar16));
          }
        }
        lVar20 = lStack_278;
        param_1 = plStack_270;
        if (!bVar11) {
          function_5a0af0();
          param_1 = plStack_270;
          if (*(int *)(lVar21 + 0xc20 + lVar16) == 1) {
            *(int32_t *)(lVar4 + 0x2a8) = *(int32_t *)(*(int64_t *)(lVar4 + 0x2b8) + 8);
          }
          else {
            iVar18 = *(int *)(*(int64_t *)(lVar4 + 0x2b8) + 4);
            if (iVar18 != -1) {
              if (lVar25 == 0) {
                local_var_cc = 0xffffffff;
              }
              else {
                local_var_cc = *(int32_t *)(lVar25 + 0x10);
              }
              local_var_138 = 0;
              local_var_130 = 0;
              local_var_140 = 0;
              local_var_f8 = *(int32_t *)((int64_t)plStack_270 + 0x3c);
              local_var_128 = 0;
              local_var_c4 = 0;
              local_var_100 = 0;
              local_var_148 = 0xffffffffffffffff;
              local_var_120 = 0;
              local_var_11c = 0x3f800000;
              local_var_118 = 0xbe4ccccd;
              local_var_114 = 0xbe4ccccd;
              local_var_110 = 0x3ecccccd;
              local_var_108 = 0x100;
              local_var_fc = 0x11;
              local_var_f4 = 0;
              local_var_f0 = 0;
              local_var_ec = 0;
              local_var_e8 = 0;
              local_var_e4 = 0;
              local_var_e0 = 0;
              local_var_dc = 0;
              local_var_d8 = 0;
              local_var_c8 = 0xff;
              local_var_d0 = 0xffffffff;
              local_var_bc = 0x3f800000;
              iStack_d4 = iVar18;
              UISystem_InputHandler(lVar4 + 0x28,local_var_f8,&local_var_148,0);
            }
          }
          if ((*(int *)(lVar21 + 0xc20 + lVar16) == 2) &&
             (lVar20 = *(int64_t *)(lVar21 + 0xc88 + lVar16), lVar20 != 0)) {
            if ((int)param_1[5] < 0) {
              lVar22 = 0;
            }
            else {
              lVar22 = *(int64_t *)(lVar4 + 0x8f8) + 8 + (int64_t)(int)param_1[5] * 0x1f8;
            }
            piStack_2b8 = (int *)0x0;
            plocal_var_2c8 = puVar27;
            function_4f8630(*(uint64_t *)(lVar4 + 0x8d8),*(int32_t *)(lVar4 + 0x10),lVar22,
                          *(int32_t *)(lVar20 + 100));
          }
          cVar14 = *(char *)(lVar21 + 0xca9 + lVar16);
          if (((cVar14 != '\0') || (*(int *)(lVar21 + 0xc20 + lVar16) - 3U < 3)) ||
             (-1 < *(char *)(lVar21 + 0xca2 + lVar16))) {
            lStack_2a0 = lVar16 + 0xc78 + lVar21;
            lStack_2a8 = lVar16 + 0xc68 + lVar21;
            local_var_2b0 = *(uint *)(lVar4 + 0x10);
            piStack_2b8 = (int *)0x0;
            plocal_var_2c8 = (uint64_t *)CONCAT44(plocal_var_2c8._4_4_,(int)param_1[5]);
            function_5253f0((int64_t)*(int *)(lVar25 + 0x10) * 0xa60 + lStack_250 + 0x30a0,
                          &local_var_238,cVar14,*(int8_t *)(lVar21 + 0xca2 + lVar16));
          }
          if (aiStack_268[0] == 1) {
            lVar20 = lStack_278;
            if (lVar25 != 0) {
              bVar3 = *(byte *)(lVar4 + 0x68);
              lVar16 = 0;
              if (bVar3 != 0) {
                do {
                  if ((uint)*(ushort *)(lVar4 + 0x28 + lVar16 * 2) == *(uint *)(lVar25 + 0x10)) {
                    iVar18 = 0;
                    lVar16 = 0;
                    goto LAB_1805a1510;
                  }
                  lVar16 = lVar16 + 1;
                } while (lVar16 < (int64_t)(uint64_t)bVar3);
              }
            }
            goto LAB_1805a1543;
          }
          *(int32_t *)(lVar4 + 0x2b4) = 0;
          *(uint64_t *)(lVar4 + 0x2b8) = 0;
          goto label_5a15ae;
        }
      }
      else {
        lVar25 = *(int64_t *)(lVar21 + 0xc08 + lVar16);
        if ((lVar25 == 0) || (*(int *)(lVar25 + 0x568) == 1)) goto LAB_1805a0d8e;
      }
      goto LAB_1805a1543;
    }
  }
label_5a15ae:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_2e8);
  while( true ) {
    iVar18 = iVar18 + 1;
    lVar16 = lVar16 + 1;
    if ((int)(uint)bVar3 <= iVar18) break;
LAB_1805a1510:
    if ((uint)*(ushort *)(lVar4 + 0x28 + lVar16 * 2) == *(uint *)(lVar25 + 0x10)) {
      *(int16_t *)(lVar4 + 0x28 + lVar16 * 2) =
           *(int16_t *)(lVar4 + 0x26 + (uint64_t)bVar3 * 2);
      *(char *)(lVar4 + 0x68) = *(char *)(lVar4 + 0x68) + -1;
      break;
    }
  }
LAB_1805a1543:
  lVar21 = lVar21 + 0xcb0;
  lStack_248 = lStack_248 + 1;
  if (lVar20 <= lStack_248) goto label_5a15ae;
  goto LAB_1805a0d60;
}