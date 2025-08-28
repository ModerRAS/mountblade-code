#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part012.c - 2 个函数

// 函数: void FUN_1802dbc70(char *param_1,int64_t param_2,uint64_t *param_3)
void FUN_1802dbc70(char *param_1,int64_t param_2,uint64_t *param_3)

{
  char cVar1;
  ushort uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  uint *puVar10;
  int64_t lVar11;
  float *pfVar12;
  int iVar13;
  uint64_t *puVar14;
  int32_t *puVar15;
  uint64_t uVar16;
  uint uVar17;
  int64_t lVar18;
  int64_t lVar19;
  int iVar20;
  uint64_t uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint64_t uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int8_t auStack_6c8 [32];
  code *pcStack_6a8;
  int8_t *puStack_6a0;
  uint64_t uStack_698;
  uint64_t uStack_690;
  int8_t uStack_688;
  int8_t uStack_687;
  int8_t auStack_686 [6];
  uint64_t uStack_680;
  int iStack_678;
  int iStack_674;
  uint64_t uStack_670;
  uint64_t uStack_668;
  int32_t uStack_660;
  int16_t uStack_65c;
  uint64_t uStack_658;
  int32_t uStack_650;
  int16_t uStack_64c;
  uint64_t uStack_648;
  int32_t uStack_640;
  int16_t uStack_63c;
  int64_t alStack_638 [16];
  int64_t alStack_5b8 [16];
  int64_t alStack_538 [16];
  int8_t auStack_4b8 [336];
  int8_t auStack_368 [336];
  int8_t auStack_218 [336];
  uint64_t uStack_c8;
  
  uStack_670 = 0xfffffffffffffffe;
  uStack_c8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_6c8;
  uStack_698 = param_3;
  FUN_1802db6d0();
  if (*param_1 == '\0') {
    iStack_674 = (int)*(float *)(param_2 + 0x11c24);
    uVar21 = 0;
    uStack_680 = 0;
    iStack_678 = (int)*(float *)(param_2 + 0x11c20);
    FUN_18029d0a0(*(uint64_t *)(system_message_buffer + 0x1cd8),param_2 + 0x11c18,&uStack_680);
    iVar13 = (int)((*(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 8)) / 0x28);
    iVar20 = 0;
    if (0 < iVar13) {
      FUN_1802c22a0(&uStack_688,&unknown_var_9884_ptr);
      uStack_660 = 0;
      uStack_65c = 0;
      uStack_668 = 0x100000001;
      pcStack_6a8 = FUN_180045af0;
      FUN_1808fc838(alStack_638,8,0x10,&SUB_18005d5f0);
      puStack_6a0 = auStack_4b8;
      FUN_180206da0(puStack_6a0,*(uint64_t *)(*(int64_t *)(param_1 + 0x68) + 0x18),&uStack_668,
                    alStack_638);
      lVar11 = system_message_buffer;
      lVar6 = (int64_t)
              *(int *)(system_message_buffer + 0x7e8 + (int64_t)*(int *)(system_message_buffer + 0x788) * 4);
      puVar9 = *(int32_t **)(alStack_638[*(int *)(system_message_buffer + 0x788)] + 0x10);
      lVar18 = (int64_t)iVar13;
      uVar8 = uVar21;
      if (3 < lVar18) {
        puVar15 = (int32_t *)(*(int64_t *)(param_1 + 8) + 8);
        lVar19 = (lVar18 - 4U >> 2) + 1;
        uVar8 = lVar19 * 4;
        do {
          *puVar9 = puVar15[-2];
          puVar9[1] = puVar15[-1];
          puVar9[2] = *puVar15;
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[2];
          puVar9[1] = puVar15[3];
          puVar9[2] = puVar15[4];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[8];
          puVar9[1] = puVar15[9];
          puVar9[2] = puVar15[10];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[0xc];
          puVar9[1] = puVar15[0xd];
          puVar9[2] = puVar15[0xe];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[0x12];
          puVar9[1] = puVar15[0x13];
          puVar9[2] = puVar15[0x14];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[0x16];
          puVar9[1] = puVar15[0x17];
          puVar9[2] = puVar15[0x18];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[0x1c];
          puVar9[1] = puVar15[0x1d];
          puVar9[2] = puVar15[0x1e];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[0x20];
          puVar9[1] = puVar15[0x21];
          puVar9[2] = puVar15[0x22];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          puVar15 = puVar15 + 0x28;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      if ((int64_t)uVar8 < lVar18) {
        puVar15 = (int32_t *)(*(int64_t *)(param_1 + 8) + uVar8 * 0x28);
        lVar19 = lVar18 - uVar8;
        do {
          *puVar9 = *puVar15;
          puVar9[1] = puVar15[1];
          puVar9[2] = puVar15[2];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[4];
          puVar9[1] = puVar15[5];
          puVar9[2] = puVar15[6];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          puVar15 = puVar15 + 10;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      lVar6 = (int64_t)*(int *)(lVar11 + 0x778);
      uVar7 = (uint64_t)*(int *)(lVar11 + 0x7e8 + lVar6 * 4);
      puVar9 = *(int32_t **)(alStack_638[lVar6] + 0x10);
      uVar8 = uVar7;
      uVar16 = uVar21;
      if (0 < iVar13) {
        do {
          *puVar9 = *(int32_t *)(*(int64_t *)(param_1 + 8) + 0x20 + uVar16);
          uVar17 = *(uint *)(*(int64_t *)(param_1 + 8) + 0x24 + uVar16);
          uVar8 = (uint64_t)uVar17;
          *(uint *)((int64_t)puVar9 + uVar7) = uVar17;
          puVar9 = (int32_t *)((int64_t)((int64_t)puVar9 + uVar7) + uVar7);
          lVar18 = lVar18 + -1;
          uVar16 = uVar16 + 0x28;
        } while (lVar18 != 0);
      }
      FUN_180207110(uVar8,*(uint64_t *)(*(int64_t *)(param_1 + 0x68) + 0x18),alStack_638);
      *(int8_t *)((int64_t)param_3 + 0x17) = 2;
      FUN_18029cdd0(*(uint64_t *)(system_message_buffer + 0x1cd8),param_3);
      lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0x68) + 0x18);
      if (*(int64_t *)(lVar11 + 0x8240) != lVar6) {
        *(int64_t *)(lVar11 + 0x8240) = lVar6;
        puStack_6a0 = (int8_t *)(lVar6 + 0x220);
        pcStack_6a8 = (code *)(lVar6 + 0x260);
        (**(code **)(**(int64_t **)(lVar11 + 0x8400) + 0x90))
                  (*(int64_t **)(lVar11 + 0x8400),0,*(int32_t *)(lVar6 + 0x188),lVar6 + 0x1a0);
      }
      FUN_18029d000(*(uint64_t *)(system_message_buffer + 0x1cd8),2);
      if (system_data_2846 == '\0') {
        plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
        (**(code **)(*plVar3 + 0x68))(plVar3,iVar13 * 2,0);
      }
      FUN_1808fc8a8(alStack_638,8,0x10,FUN_180045af0);
      system_system_data_memory = system_system_data_memory + -1;
      (**(code **)(*system_system_data_memory + 0x20))();
    }
    iVar13 = (int)((*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x28)) / 0x34);
    if (0 < iVar13) {
      FUN_1802c22a0(&uStack_687,&unknown_var_9872_ptr);
      *(int8_t *)((int64_t)param_3 + 0x17) = 4;
      uStack_650 = 0;
      uStack_64c = 0;
      uStack_658 = 0x100000001;
      pcStack_6a8 = FUN_180045af0;
      FUN_1808fc838(alStack_5b8,8,0x10,&SUB_18005d5f0);
      puStack_6a0 = auStack_368;
      FUN_180206da0(puStack_6a0,*(uint64_t *)(*(int64_t *)(param_1 + 0x70) + 0x18),&uStack_658,
                    alStack_5b8);
      lVar11 = system_message_buffer;
      lVar6 = (int64_t)
              *(int *)(system_message_buffer + 0x7e8 + (int64_t)*(int *)(system_message_buffer + 0x788) * 4);
      puVar9 = *(int32_t **)(alStack_5b8[*(int *)(system_message_buffer + 0x788)] + 0x10);
      lVar18 = (int64_t)iVar13;
      uVar8 = uVar21;
      if (3 < lVar18) {
        puVar15 = (int32_t *)(*(int64_t *)(param_1 + 0x28) + 8);
        lVar19 = (lVar18 - 4U >> 2) + 1;
        uVar8 = lVar19 * 4;
        do {
          *puVar9 = puVar15[-2];
          puVar9[1] = puVar15[-1];
          puVar9[2] = *puVar15;
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[2];
          puVar9[1] = puVar15[3];
          puVar9[2] = puVar15[4];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[6];
          puVar9[1] = puVar15[7];
          puVar9[2] = puVar15[8];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[0xb];
          puVar9[1] = puVar15[0xc];
          puVar9[2] = puVar15[0xd];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[0xf];
          puVar9[1] = puVar15[0x10];
          puVar9[2] = puVar15[0x11];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[0x13];
          puVar9[1] = puVar15[0x14];
          puVar9[2] = puVar15[0x15];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[0x18];
          puVar9[1] = puVar15[0x19];
          puVar9[2] = puVar15[0x1a];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[0x1c];
          puVar9[1] = puVar15[0x1d];
          puVar9[2] = puVar15[0x1e];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[0x20];
          puVar9[1] = puVar15[0x21];
          puVar9[2] = puVar15[0x22];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[0x25];
          puVar9[1] = puVar15[0x26];
          puVar9[2] = puVar15[0x27];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[0x29];
          puVar9[1] = puVar15[0x2a];
          puVar9[2] = puVar15[0x2b];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[0x2d];
          puVar9[1] = puVar15[0x2e];
          puVar9[2] = puVar15[0x2f];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          puVar15 = puVar15 + 0x34;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      if ((int64_t)uVar8 < lVar18) {
        puVar15 = (int32_t *)(uVar8 * 0x34 + *(int64_t *)(param_1 + 0x28));
        lVar19 = lVar18 - uVar8;
        do {
          *puVar9 = *puVar15;
          puVar9[1] = puVar15[1];
          puVar9[2] = puVar15[2];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[4];
          puVar9[1] = puVar15[5];
          puVar9[2] = puVar15[6];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          *puVar9 = puVar15[8];
          puVar9[1] = puVar15[9];
          puVar9[2] = puVar15[10];
          puVar9 = (int32_t *)((int64_t)puVar9 + lVar6);
          puVar15 = puVar15 + 0xd;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      lVar6 = (int64_t)*(int *)(lVar11 + 0x778);
      uVar7 = (uint64_t)*(int *)(lVar11 + 0x7e8 + lVar6 * 4);
      puVar9 = *(int32_t **)(alStack_5b8[lVar6] + 0x10);
      uVar8 = uVar7;
      uVar16 = uVar21;
      if (0 < iVar13) {
        do {
          *puVar9 = *(int32_t *)(uVar16 + 0x30 + *(int64_t *)(param_1 + 0x28));
          *(int32_t *)((int64_t)puVar9 + uVar7) =
               *(int32_t *)(uVar16 + 0x30 + *(int64_t *)(param_1 + 0x28));
          puVar10 = (uint *)((int64_t)((int64_t)puVar9 + uVar7) + uVar7);
          uVar17 = *(uint *)(uVar16 + 0x30 + *(int64_t *)(param_1 + 0x28));
          uVar8 = (uint64_t)uVar17;
          *puVar10 = uVar17;
          puVar9 = (int32_t *)((int64_t)puVar10 + uVar7);
          lVar18 = lVar18 + -1;
          uVar16 = uVar16 + 0x34;
        } while (lVar18 != 0);
      }
      FUN_180207110(uVar8,*(uint64_t *)(*(int64_t *)(param_1 + 0x70) + 0x18),alStack_5b8);
      FUN_18029cdd0(*(uint64_t *)(system_message_buffer + 0x1cd8),param_3);
      lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0x70) + 0x18);
      if (*(int64_t *)(lVar11 + 0x8240) != lVar6) {
        *(int64_t *)(lVar11 + 0x8240) = lVar6;
        puStack_6a0 = (int8_t *)(lVar6 + 0x220);
        pcStack_6a8 = (code *)(lVar6 + 0x260);
        (**(code **)(**(int64_t **)(lVar11 + 0x8400) + 0x90))
                  (*(int64_t **)(lVar11 + 0x8400),0,*(int32_t *)(lVar6 + 0x188),lVar6 + 0x1a0);
      }
      if (system_data_2846 == '\0') {
        plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
        (**(code **)(*plVar3 + 0x68))(plVar3,iVar13 * 3,0);
      }
      FUN_1808fc8a8(alStack_5b8,8,0x10,FUN_180045af0);
      system_system_data_memory = system_system_data_memory + -1;
      (**(code **)(*system_system_data_memory + 0x20))();
    }
    lVar11 = (*(int64_t *)(param_1 + 0x50) - *(int64_t *)(param_1 + 0x48)) / 6 +
             (*(int64_t *)(param_1 + 0x50) - *(int64_t *)(param_1 + 0x48) >> 0x3f);
    iVar13 = (int)(lVar11 >> 3) - (int)(lVar11 >> 0x3f);
    if (0 < iVar13) {
      FUN_1802c22a0(auStack_686,&unknown_var_9860_ptr);
      *(int16_t *)(param_3 + 1) = 0x101;
      *(int8_t *)((int64_t)param_3 + 0xb) = 1;
      pcStack_6a8 = FUN_180045af0;
      FUN_1808fc838(alStack_538,8,0x10,&SUB_18005d5f0);
      uStack_640 = 0;
      uStack_63c = 0;
      uStack_648 = 0x100000001;
      puStack_6a0 = auStack_218;
      FUN_180206da0(puStack_6a0,*(uint64_t *)(*(int64_t *)(param_1 + 0x78) + 0x18),&uStack_648,
                    alStack_538);
      lVar11 = (int64_t)
               *(int *)(system_message_buffer + 0x7e8 + (int64_t)*(int *)(system_message_buffer + 0x788) * 4);
      pfVar12 = *(float **)(alStack_538[*(int *)(system_message_buffer + 0x788)] + 0x10);
      puVar9 = *(int32_t **)(alStack_538[*(int *)(system_message_buffer + 0x778)] + 0x10);
      lVar6 = (int64_t)iVar13;
      if (0 < iVar13) {
        lVar18 = (int64_t)
                 *(int *)(system_message_buffer + 0x7e8 + (int64_t)*(int *)(system_message_buffer + 0x778) * 4);
        lVar19 = 0;
        do {
          lVar4 = *(int64_t *)(param_1 + 0x48);
          fVar22 = 1.0 / *(float *)(param_2 + 0x11c20);
          fVar26 = 1.0 / *(float *)(param_2 + 0x11c24);
          fVar31 = fVar26 * 48.0;
          fVar29 = (float)*(int *)(lVar19 + 0x20 + lVar4) * fVar22;
          fVar30 = (fVar29 + fVar29) - 1.0;
          fVar26 = 1.0 - (float)*(int *)(lVar19 + 0x24 + lVar4) * fVar26;
          fVar29 = (fVar26 + fVar26) - 1.0;
          iVar13 = *(int *)(lVar19 + 0x10 + lVar4);
          uVar8 = 0;
          fVar26 = fVar30;
          if (0 < iVar13) {
            do {
              cVar1 = *(char *)(uVar8 + *(int64_t *)(lVar19 + 8 + lVar4));
              if (cVar1 == ';') {
                fVar29 = fVar29 - fVar31;
                fVar28 = fVar30;
              }
              else {
                fVar28 = fVar26;
                if ((byte)(cVar1 - 0x20U) < 0x5f) {
                  fVar28 = fVar26 + fVar22 * 20.0;
                  fVar27 = fVar29 - fVar31;
                  fVar23 = (float)(cVar1 + -0x20) * 0.010526315;
                  *pfVar12 = fVar26;
                  pfVar12[1] = fVar29;
                  fVar24 = fVar23 * 0.5;
                  pfVar12[2] = fVar24;
                  *puVar9 = *(int32_t *)(lVar19 + 0x28 + lVar4);
                  pfVar12 = (float *)((int64_t)pfVar12 + lVar11);
                  *pfVar12 = fVar26;
                  pfVar12[1] = fVar27;
                  fVar24 = fVar24 + 1.0;
                  pfVar12[2] = fVar24;
                  *(int32_t *)((int64_t)puVar9 + lVar18) =
                       *(int32_t *)(lVar19 + 0x28 + lVar4);
                  pfVar12 = (float *)((int64_t)pfVar12 + lVar11);
                  puVar9 = (int32_t *)((int64_t)puVar9 + lVar18 + lVar18);
                  *pfVar12 = fVar28;
                  pfVar12[1] = fVar29;
                  fVar23 = (fVar23 + 0.010526315) * 0.5;
                  pfVar12[2] = fVar23;
                  *puVar9 = *(int32_t *)(lVar19 + 0x28 + lVar4);
                  pfVar12 = (float *)((int64_t)pfVar12 + lVar11);
                  puVar9 = (int32_t *)((int64_t)puVar9 + lVar18);
                  *pfVar12 = fVar28;
                  pfVar12[1] = fVar29;
                  pfVar12[2] = fVar23;
                  *puVar9 = *(int32_t *)(lVar19 + 0x28 + lVar4);
                  pfVar12 = (float *)((int64_t)pfVar12 + lVar11);
                  puVar9 = (int32_t *)((int64_t)puVar9 + lVar18);
                  *pfVar12 = fVar26;
                  pfVar12[1] = fVar27;
                  pfVar12[2] = fVar24;
                  *puVar9 = *(int32_t *)(lVar19 + 0x28 + lVar4);
                  pfVar12 = (float *)((int64_t)pfVar12 + lVar11);
                  puVar9 = (int32_t *)((int64_t)puVar9 + lVar18);
                  *pfVar12 = fVar28;
                  pfVar12[1] = fVar27;
                  pfVar12[2] = fVar23 + 1.0;
                  *puVar9 = *(int32_t *)(lVar19 + 0x28 + lVar4);
                  pfVar12 = (float *)((int64_t)pfVar12 + lVar11);
                  puVar9 = (int32_t *)((int64_t)puVar9 + lVar18);
                  uVar21 = (uint64_t)((int)uVar21 + 2);
                }
              }
              uVar17 = (int)uVar8 + 1;
              uVar8 = (uint64_t)uVar17;
              fVar26 = fVar28;
            } while ((int)uVar17 < iVar13);
          }
          iVar20 = (int)uVar21;
          lVar19 = lVar19 + 0x30;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar11 = system_message_buffer;
      *(int8_t *)((int64_t)uStack_698 + 0x17) = 4;
      uVar25 = FUN_18029cdd0(*(uint64_t *)(lVar11 + 0x1cd8));
      FUN_180207110(uVar25,*(uint64_t *)(*(int64_t *)(param_1 + 0x78) + 0x18),alStack_538);
      lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x18);
      if (*(int64_t *)(lVar11 + 0x8240) != lVar6) {
        *(int64_t *)(lVar11 + 0x8240) = lVar6;
        puStack_6a0 = (int8_t *)(lVar6 + 0x220);
        pcStack_6a8 = (code *)(lVar6 + 0x260);
        (**(code **)(**(int64_t **)(lVar11 + 0x8400) + 0x90))
                  (*(int64_t **)(lVar11 + 0x8400),0,*(int32_t *)(lVar6 + 0x188),lVar6 + 0x1a0);
      }
      lVar11 = FUN_1800bdbb0();
      uVar2 = *(ushort *)(lVar11 + 0x32c);
      lVar11 = FUN_1800bdbb0();
      lVar6 = system_message_buffer;
      fVar22 = 1.0 / (float)uVar2;
      fVar29 = 1.0 / (float)*(ushort *)(lVar11 + 0x32e);
      fVar26 = *(float *)(param_2 + 0x11c24);
      lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
      *(float *)(lVar11 + 0xe0) = 1.0 / *(float *)(param_2 + 0x11c20);
      *(float *)(lVar11 + 0xe4) = 1.0 / fVar26;
      *(int32_t *)(lVar11 + 0xe8) = 0;
      *(int32_t *)(lVar11 + 0xec) = 0;
      lVar11 = *(int64_t *)(lVar6 + 0x1cd8);
      uStack_698 = (uint64_t *)CONCAT44(fVar29,fVar22);
      uStack_690 = 0;
      *(float *)(lVar11 + 0xf0) = fVar22;
      *(float *)(lVar11 + 0xf4) = fVar29;
      *(int32_t *)(lVar11 + 0xf8) = 0;
      *(int32_t *)(lVar11 + 0xfc) = 0;
      FUN_18029fc10(*(int64_t *)(lVar6 + 0x1cd8),*(uint64_t *)(lVar6 + 0x1ca8),
                    *(int64_t *)(lVar6 + 0x1cd8) + 0x80,0x80);
      FUN_18029d000(*(uint64_t *)(system_message_buffer + 0x1cd8),4);
      lVar11 = *(int64_t *)(system_message_buffer + 0x1cd8);
      lVar6 = FUN_1800bdbb0();
      if (*(char *)(lVar6 + 900) == '\0') {
        lVar6 = FUN_1800bd5c0();
      }
      else {
        lVar6 = FUN_1800bdbb0();
      }
      if ((lVar6 == 0) || (lVar6 = FUN_18023a940(), lVar6 == 0)) {
        lVar6 = 0;
      }
      else if ((*(int64_t *)(lVar6 + 8) == 0) && (*(int64_t *)(lVar6 + 0x10) == 0)) {
        lVar6 = 0;
      }
      uVar25 = 0;
      if ((((*(int64_t *)(lVar11 + 0x8438) != lVar6) || (*(int *)(lVar11 + 0x8838) != -1)) ||
          (*(int *)(lVar11 + 0x8a38) != 0x10)) &&
         (((lVar6 == 0 || (*(int64_t *)(lVar6 + 8) != 0)) || (*(int64_t *)(lVar6 + 0x10) != 0))))
      {
        if (lVar6 != 0) {
          uVar25 = *(uint64_t *)(lVar6 + 0x10);
        }
        uStack_698 = (uint64_t *)uVar25;
        (**(code **)(**(int64_t **)(lVar11 + 0x8400) + 0x40))
                  (*(int64_t **)(lVar11 + 0x8400),0,1,&uStack_698);
        *(int64_t *)(lVar11 + 0x8438) = lVar6;
        *(int32_t *)(lVar11 + 0x8838) = 0xffffffff;
        *(int32_t *)(lVar11 + 0x8a38) = 0x10;
        *(int *)(lVar11 + 0x82b4) = *(int *)(lVar11 + 0x82b4) + 1;
      }
      if (system_data_2846 == '\0') {
        plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
        (**(code **)(*plVar3 + 0x68))(plVar3,iVar20 * 3,0);
      }
      FUN_1808fc8a8(alStack_538,8,0x10,FUN_180045af0);
      system_system_data_memory = system_system_data_memory + -1;
      (**(code **)(*system_system_data_memory + 0x20))();
    }
    *(uint64_t *)(param_1 + 0x10) = *(uint64_t *)(param_1 + 8);
    *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_1 + 0x28);
    puVar5 = *(uint64_t **)(param_1 + 0x50);
    puVar14 = *(uint64_t **)(param_1 + 0x48);
    uStack_698 = puVar14;
    if (puVar14 != puVar5) {
      do {
        *puVar14 = &system_data_buffer_ptr;
        if (puVar14[1] != 0) {
          uStack_698 = puVar14;
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puVar14[1] = 0;
        *(int32_t *)(puVar14 + 3) = 0;
        *puVar14 = &system_state_ptr;
        uStack_698 = puVar14 + 6;
        puVar14 = uStack_698;
      } while (uStack_698 != puVar5);
      puVar14 = *(uint64_t **)(param_1 + 0x48);
    }
    *(uint64_t **)(param_1 + 0x50) = puVar14;
  }
  else {
    *param_1 = '\0';
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_c8 ^ (uint64_t)auStack_6c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802dcad0(uint64_t *param_1,int64_t param_2)
void FUN_1802dcad0(uint64_t *param_1,int64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  
  puVar7 = (uint64_t *)param_1[1];
  puVar3 = (uint64_t *)*param_1;
  lVar6 = ((int64_t)puVar7 - (int64_t)puVar3) / 0x30;
  puVar2 = (uint64_t *)0x0;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) goto LAB_1802dcb5e;
  }
  puVar2 = (uint64_t *)
           FUN_18062b420(system_memory_pool_ptr,lVar6 * 0x30,*(int8_t *)(param_1 + 3),puVar3,
                         0xfffffffffffffffe);
  puVar7 = (uint64_t *)param_1[1];
  puVar3 = (uint64_t *)*param_1;
LAB_1802dcb5e:
  puVar5 = puVar2;
  if (puVar3 != puVar7) {
    lVar4 = (int64_t)puVar2 - (int64_t)puVar3;
    puVar3 = puVar3 + 1;
    do {
      *puVar5 = &system_state_ptr;
      *(uint64_t *)(lVar4 + (int64_t)puVar3) = 0;
      *(int32_t *)(lVar4 + 8 + (int64_t)puVar3) = 0;
      *puVar5 = &system_data_buffer_ptr;
      *(int32_t *)((int64_t)puVar3 + lVar4 + 0x10) = 0;
      *(uint64_t *)(lVar4 + (int64_t)puVar3) = 0;
      *(int32_t *)(lVar4 + 8 + (int64_t)puVar3) = 0;
      *(int32_t *)(lVar4 + 0x14 + (int64_t)puVar3) = 0;
      *(int32_t *)(lVar4 + 8 + (int64_t)puVar3) = *(int32_t *)(puVar3 + 1);
      *(uint64_t *)(lVar4 + (int64_t)puVar3) = *puVar3;
      *(int32_t *)(lVar4 + 0x14 + (int64_t)puVar3) = *(int32_t *)((int64_t)puVar3 + 0x14);
      *(int32_t *)((int64_t)puVar3 + lVar4 + 0x10) = *(int32_t *)(puVar3 + 2);
      *(int32_t *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(uint64_t *)((int64_t)puVar3 + lVar4 + 0x18) = puVar3[3];
      *(int32_t *)((int64_t)puVar3 + lVar4 + 0x20) = *(int32_t *)(puVar3 + 4);
      puVar5 = puVar5 + 6;
      puVar1 = puVar3 + 5;
      puVar3 = puVar3 + 6;
    } while (puVar1 != puVar7);
  }
  FUN_180627ae0(puVar5,param_2);
  puVar5[4] = *(uint64_t *)(param_2 + 0x20);
  *(int32_t *)(puVar5 + 5) = *(int32_t *)(param_2 + 0x28);
  puVar7 = (uint64_t *)param_1[1];
  puVar3 = (uint64_t *)*param_1;
  if (puVar3 != puVar7) {
    do {
      *puVar3 = &system_data_buffer_ptr;
      if (puVar3[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar3[1] = 0;
      *(int32_t *)(puVar3 + 3) = 0;
      *puVar3 = &system_state_ptr;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar7);
    puVar3 = (uint64_t *)*param_1;
  }
  if (puVar3 == (uint64_t *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 6;
    param_1[2] = puVar2 + lVar6 * 6;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




