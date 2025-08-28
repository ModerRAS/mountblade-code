/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part050.c - 4 个函数

// 函数: void FUN_1800d6790(uint64_t param_1,int64_t param_2,char *param_3,char param_4,char param_5,
void FUN_1800d6790(uint64_t param_1,int64_t param_2,char *param_3,char param_4,char param_5,
                  char param_6)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  uint64_t uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int64_t lVar20;
  int64_t lVar21;
  uint64_t *puVar22;
  int iVar23;
  char *pcVar24;
  uint uVar25;
  int64_t lVar26;
  int iVar27;
  int32_t *puVar28;
  int iVar29;
  float fVar30;
  int8_t auStack_248 [32];
  int32_t uStack_228;
  uint64_t uStack_218;
  float fStack_210;
  int32_t uStack_20c;
  uint64_t uStack_208;
  uint64_t uStack_1f8;
  int16_t uStack_1f0;
  int8_t uStack_1ee;
  int8_t uStack_1ed;
  int32_t uStack_1ec;
  int16_t uStack_1e8;
  char cStack_1e6;
  char cStack_1e5;
  int8_t uStack_1e4;
  int8_t uStack_1e3;
  int8_t uStack_1e2;
  int8_t uStack_1e1;
  int32_t uStack_1e0;
  uint64_t uStack_1dc;
  uint64_t uStack_1d4;
  uint64_t uStack_1cc;
  int32_t uStack_1c4;
  int16_t uStack_1c0;
  int8_t uStack_1be;
  int8_t uStack_1bd;
  uint uStack_1bc;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t uStack_19c;
  void *puStack_180;
  int8_t *puStack_178;
  int32_t uStack_170;
  int8_t auStack_168 [32];
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  
  uStack_208 = 0xfffffffffffffffe;
  uStack_88 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  uStack_1e8 = 0xff;
  uStack_1e0 = 0;
  uStack_1dc = 0;
  uStack_1d4 = 0;
  uStack_1cc = 0;
  uStack_1c4 = 0;
  uStack_1bc = 0;
  cStack_1e5 = param_3[0x51];
  cStack_1e6 = param_3[0x50];
  if ((*(char *)(param_2 + 0x1c62) != '\0') || (uStack_1e3 = 3, *param_3 != '\0')) {
    uStack_1e3 = 0;
  }
  uStack_1e4 = 0;
  uStack_1e2 = 0;
  if (*(int *)(param_3 + 0x44) == -1) {
    if ((param_5 == '\0') && (param_6 != '\0')) {
      uStack_1f0 = 0x100;
LAB_1800d6883:
      if (param_6 != '\0') {
        uStack_1ee = 2;
        goto LAB_1800d68be;
      }
    }
    else {
      uStack_1f0 = 0;
      if (param_5 == '\0') goto LAB_1800d6883;
    }
    if (((((*(byte *)(param_2 + 0x1bd8) & 0x20) == 0) && ((*(byte *)(param_2 + 0x1bd9) & 2) == 0))
        || (*(int *)(system_system_data_memory + 0xa10) == 0)) ||
       (uStack_1ee = 6, *(char *)(param_2 + 0x130) == '\0')) {
      uStack_1ee = 3;
    }
  }
  else {
    uStack_1f0 = 0x101;
    uStack_1ee = 7;
  }
LAB_1800d68be:
  if ((param_5 != '\0') || (uStack_1ed = 1, param_6 == '\0')) {
    uStack_1ed = 0;
  }
  uStack_1ec = 0x83000207;
  if (((*(uint *)(param_2 + 0x178) < 0x80000000) || (*(char *)(param_2 + 0x20) != '\0')) ||
     ((*(char *)(param_2 + 0x21) != '\0' ||
      (((*(char *)(param_2 + 0x23) != '\0' || (*(char *)(param_2 + 0x24) != '\0')) ||
       (*(int *)(param_3 + 0x44) != -1)))))) {
    uStack_1ed = 1;
  }
  uStack_1c0 = 0x900;
  uStack_1f8 = *(uint64_t *)(param_3 + 0x58);
  if (param_5 == '\0') {
    if (*(int *)(param_2 + 8) == -1) {
      uVar25 = 0;
    }
    else {
      uVar25 = *(uint *)(param_2 + 0x18);
    }
    if ((uVar25 & 1) == 0) {
      uStack_1be = 0;
      bVar17 = false;
      goto LAB_1800d6939;
    }
  }
  uStack_1be = 1;
  bVar17 = true;
LAB_1800d6939:
  uStack_1bd = 1;
  if (param_4 == '\x01') {
    uStack_1bc = (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a;
    uStack_1dc = CONCAT44(*(int32_t *)(*(int64_t *)(param_2 + 0x96e0) + 0x324),
                          *(int32_t *)(*(int64_t *)(param_2 + 0x96d8) + 0x324));
    uStack_1d4 = CONCAT44(*(int32_t *)(*(int64_t *)(param_2 + 0x96f0) + 0x324),
                          *(int32_t *)(*(int64_t *)(param_2 + 0x96e8) + 0x324));
    uStack_1cc = CONCAT44(*(int32_t *)(*(int64_t *)(param_2 + 0x96f8) + 0x324),
                          *(int32_t *)(*(int64_t *)(param_2 + 0x96d0) + 0x324));
  }
  else {
    lVar20 = FUN_180244ff0(param_2);
    if ((lVar20 != 0) && (!bVar17)) {
      lVar20 = FUN_180244ff0(param_2);
      uStack_1dc = CONCAT44(uStack_1dc._4_4_,*(int32_t *)(lVar20 + 0x324));
      uStack_1bc = 1;
      iVar23 = 0;
      lVar20 = *(int64_t *)(param_2 + 0x96b0);
      lVar21 = *(int64_t *)(param_2 + 0x96b8);
      lVar26 = 0;
      puVar28 = (int32_t *)((int64_t)&uStack_1dc + 4);
      do {
        if ((uint64_t)(lVar21 - lVar20 >> 3) <= (uint64_t)(int64_t)iVar23) break;
        lVar2 = *(int64_t *)(lVar26 + lVar20);
        if (lVar2 != 0) {
          *puVar28 = *(int32_t *)(lVar2 + 0x324);
          uStack_1bc = uStack_1bc + 1;
        }
        iVar23 = iVar23 + 1;
        puVar28 = puVar28 + 1;
        lVar26 = lVar26 + 8;
      } while (iVar23 < 4);
    }
  }
  lVar20 = FUN_180245280(param_2);
  if (lVar20 != 0) {
    lVar20 = FUN_180245280(param_2);
    uStack_1e0 = *(int32_t *)(lVar20 + 0x324);
  }
  uStack_1e1 = 5;
  FUN_18029d000(*(uint64_t *)(system_message_buffer + 0x1cd8),5);
  FUN_18029cdd0(*(uint64_t *)(system_message_buffer + 0x1cd8),&uStack_1f8);
  FUN_1800d82a0();
  lVar21 = system_message_buffer;
  lVar20 = *(int64_t *)(system_message_buffer + 0x1cd8);
  pcVar24 = param_3 + 0xd0;
  lVar26 = 4;
  puVar22 = (uint64_t *)(lVar20 + 0x19e0);
  do {
    uVar16 = *(uint64_t *)(pcVar24 + 8);
    *puVar22 = *(uint64_t *)pcVar24;
    puVar22[1] = uVar16;
    uVar16 = *(uint64_t *)(pcVar24 + 0x18);
    puVar22[2] = *(uint64_t *)(pcVar24 + 0x10);
    puVar22[3] = uVar16;
    uVar16 = *(uint64_t *)(pcVar24 + 0x28);
    puVar22[4] = *(uint64_t *)(pcVar24 + 0x20);
    puVar22[5] = uVar16;
    uVar16 = *(uint64_t *)(pcVar24 + 0x38);
    puVar22[6] = *(uint64_t *)(pcVar24 + 0x30);
    puVar22[7] = uVar16;
    uVar16 = *(uint64_t *)(pcVar24 + 0x48);
    puVar22[8] = *(uint64_t *)(pcVar24 + 0x40);
    puVar22[9] = uVar16;
    uVar16 = *(uint64_t *)(pcVar24 + 0x58);
    puVar22[10] = *(uint64_t *)(pcVar24 + 0x50);
    puVar22[0xb] = uVar16;
    uVar16 = *(uint64_t *)(pcVar24 + 0x68);
    puVar22[0xc] = *(uint64_t *)(pcVar24 + 0x60);
    puVar22[0xd] = uVar16;
    uVar16 = *(uint64_t *)(pcVar24 + 0x78);
    puVar22[0xe] = *(uint64_t *)(pcVar24 + 0x70);
    puVar22[0xf] = uVar16;
    pcVar24 = pcVar24 + 0x80;
    lVar26 = lVar26 + -1;
    puVar22 = puVar22 + 0x10;
  } while (lVar26 != 0);
  uVar16 = *(uint64_t *)(param_2 + 0x12b48);
  uVar4 = *(int32_t *)(param_2 + 0x12b50);
  uVar5 = *(int32_t *)(param_2 + 0x12b54);
  uVar6 = *(int32_t *)(param_2 + 0x12b58);
  uVar7 = *(int32_t *)(param_2 + 0x12b5c);
  uVar8 = *(int32_t *)(param_2 + 0x12b60);
  uVar9 = *(int32_t *)(param_2 + 0x12b64);
  uVar10 = *(int32_t *)(param_2 + 0x12b68);
  uVar11 = *(int32_t *)(param_2 + 0x12b6c);
  uVar12 = *(int32_t *)(param_2 + 0x12b70);
  uVar13 = *(int32_t *)(param_2 + 0x12b74);
  uVar14 = *(int32_t *)(param_2 + 0x12b78);
  uVar15 = *(int32_t *)(param_2 + 0x12b7c);
  lVar26 = *(int64_t *)(lVar21 + 0x1cd8);
  *(uint64_t *)(lVar26 + 0x80) = *(uint64_t *)(param_2 + 0x12b40);
  *(uint64_t *)(lVar26 + 0x88) = uVar16;
  *(int32_t *)(lVar26 + 0x90) = uVar4;
  *(int32_t *)(lVar26 + 0x94) = uVar5;
  *(int32_t *)(lVar26 + 0x98) = uVar6;
  *(int32_t *)(lVar26 + 0x9c) = uVar7;
  *(int32_t *)(lVar26 + 0xa0) = uVar8;
  *(int32_t *)(lVar26 + 0xa4) = uVar9;
  *(int32_t *)(lVar26 + 0xa8) = uVar10;
  *(int32_t *)(lVar26 + 0xac) = uVar11;
  *(int32_t *)(lVar26 + 0xb0) = uVar12;
  *(int32_t *)(lVar26 + 0xb4) = uVar13;
  *(int32_t *)(lVar26 + 0xb8) = uVar14;
  *(int32_t *)(lVar26 + 0xbc) = uVar15;
  *(float *)(*(int64_t *)(lVar21 + 0x1cd8) + 0xc0) = (float)*(int *)(param_3 + 0x44);
  lVar26 = *(int64_t *)(param_3 + 0x90);
  if (lVar26 != 0) {
    FUN_1802e4ca0(lVar26);
    uStack_1b8 = &processed_var_672_ptr;
    uStack_1b0 = &fStack_1a0;
    fStack_1a0 = (float)((uint)fStack_1a0 & 0xffffff00);
    fStack_1a8 = 1.82169e-44;
    strcpy_s(&fStack_1a0,0x20,&memory_allocator_3344_ptr);
    lVar21 = FUN_1802e4d10(lVar26,&uStack_1b8);
    (**(code **)(**(int64_t **)(lVar21 + 0x20) + 0x80))(*(int64_t **)(lVar21 + 0x20),lVar21,0);
    uStack_1b8 = &system_state_ptr;
    uVar16 = *(uint64_t *)(lVar26 + 0xd0);
    *(uint64_t *)(lVar20 + 0x1a80) = *(uint64_t *)(lVar26 + 200);
    *(uint64_t *)(lVar20 + 0x1a88) = uVar16;
    uVar16 = *(uint64_t *)(lVar26 + 0xe0);
    *(uint64_t *)(lVar20 + 0x1a90) = *(uint64_t *)(lVar26 + 0xd8);
    *(uint64_t *)(lVar20 + 0x1a98) = uVar16;
    uVar16 = *(uint64_t *)(lVar26 + 0xf0);
    *(uint64_t *)(lVar20 + 0x1aa0) = *(uint64_t *)(lVar26 + 0xe8);
    *(uint64_t *)(lVar20 + 0x1aa8) = uVar16;
    uVar16 = *(uint64_t *)(lVar26 + 0x100);
    *(uint64_t *)(lVar20 + 0x1ab0) = *(uint64_t *)(lVar26 + 0xf8);
    *(uint64_t *)(lVar20 + 0x1ab8) = uVar16;
    uVar16 = *(uint64_t *)(lVar26 + 0x110);
    *(uint64_t *)(lVar20 + 0x1ac0) = *(uint64_t *)(lVar26 + 0x108);
    *(uint64_t *)(lVar20 + 0x1ac8) = uVar16;
    uVar16 = *(uint64_t *)(lVar26 + 0x120);
    *(uint64_t *)(lVar20 + 0x1ad0) = *(uint64_t *)(lVar26 + 0x118);
    *(uint64_t *)(lVar20 + 0x1ad8) = uVar16;
    uVar16 = *(uint64_t *)(lVar26 + 0x130);
    *(uint64_t *)(lVar20 + 0x1ae0) = *(uint64_t *)(lVar26 + 0x128);
    *(uint64_t *)(lVar20 + 0x1ae8) = uVar16;
    uVar4 = *(int32_t *)(lVar26 + 0x13c);
    uVar5 = *(int32_t *)(lVar26 + 0x140);
    uVar6 = *(int32_t *)(lVar26 + 0x144);
    *(int32_t *)(lVar20 + 0x1af0) = *(int32_t *)(lVar26 + 0x138);
    *(int32_t *)(lVar20 + 0x1af4) = uVar4;
    *(int32_t *)(lVar20 + 0x1af8) = uVar5;
    *(int32_t *)(lVar20 + 0x1afc) = uVar6;
    puStack_180 = &processed_var_672_ptr;
    puStack_178 = auStack_168;
    auStack_168[0] = 0;
    uStack_170 = 0xd;
    strcpy_s(auStack_168,0x20,&memory_allocator_3344_ptr);
    puVar22 = (uint64_t *)FUN_1802e4d10(lVar26,&puStack_180);
    uVar16 = puVar22[1];
    *(uint64_t *)(lVar20 + 0x1b00) = *puVar22;
    *(uint64_t *)(lVar20 + 0x1b08) = uVar16;
    uVar4 = *(int32_t *)((int64_t)puVar22 + 0x14);
    uVar5 = *(int32_t *)(puVar22 + 3);
    uVar6 = *(int32_t *)((int64_t)puVar22 + 0x1c);
    *(int32_t *)(lVar20 + 0x1b10) = *(int32_t *)(puVar22 + 2);
    *(int32_t *)(lVar20 + 0x1b14) = uVar4;
    *(int32_t *)(lVar20 + 0x1b18) = uVar5;
    *(int32_t *)(lVar20 + 0x1b1c) = uVar6;
    puStack_180 = &system_state_ptr;
    lVar21 = system_message_buffer;
  }
  FUN_18029fc10(*(int64_t *)(lVar21 + 0x1cd8),*(uint64_t *)(lVar21 + 0x1ca8),
                *(int64_t *)(lVar21 + 0x1cd8) + 0x80,0x80);
  fVar30 = *(float *)(param_3 + 0x130) * *(float *)(param_3 + 0x118);
  for (iVar23 = 1; (64.0 < fVar30 && (iVar23 < 8)); iVar23 = iVar23 * 2) {
    fVar30 = fVar30 * 0.5;
  }
  uStack_148 = *(uint64_t *)(param_2 + 0x30);
  uStack_140 = *(uint64_t *)(param_2 + 0x38);
  uStack_138 = *(uint64_t *)(param_2 + 0x40);
  uStack_130 = *(uint64_t *)(param_2 + 0x48);
  uStack_128 = *(uint64_t *)(param_2 + 0x50);
  uStack_120 = *(uint64_t *)(param_2 + 0x58);
  uStack_118 = *(uint64_t *)(param_2 + 0x60);
  uStack_110 = *(uint64_t *)(param_2 + 0x68);
  uStack_108 = *(uint64_t *)(param_2 + 0x70);
  uStack_100 = *(uint64_t *)(param_2 + 0x78);
  uStack_f8 = *(uint64_t *)(param_2 + 0x80);
  uStack_f0 = *(uint64_t *)(param_2 + 0x88);
  uStack_e8 = *(uint64_t *)(param_2 + 0x90);
  uStack_e0 = *(uint64_t *)(param_2 + 0x98);
  uStack_d8 = *(uint64_t *)(param_2 + 0xa0);
  uStack_d0 = *(uint64_t *)(param_2 + 0xa8);
  uStack_c8 = *(uint64_t *)(param_2 + 0xb0);
  uStack_c0 = *(uint64_t *)(param_2 + 0xb8);
  uStack_b8 = *(uint64_t *)(param_2 + 0xc0);
  uStack_b0 = *(uint64_t *)(param_2 + 200);
  uStack_a8 = *(uint64_t *)(param_2 + 0xd0);
  uStack_a0 = *(uint64_t *)(param_2 + 0xd8);
  uStack_98 = *(uint64_t *)(param_2 + 0xe0);
  uStack_90 = *(uint64_t *)(param_2 + 0xe8);
  fVar30 = (*(float *)(param_3 + 0x130) * *(float *)(param_3 + 0x118)) / (float)iVar23;
  iVar29 = 0;
  if (0 < iVar23) {
    do {
      if (0 < iVar23) {
        uStack_20c = 0x7f7fffff;
        iVar27 = 0;
        do {
          iVar1 = iVar27 + 1;
          fStack_1a8 = (float)iVar1 * fVar30 + *(float *)(param_3 + 0x100);
          fStack_1a4 = *(float *)(param_3 + 0x104) + (float)(iVar29 + 1) * fVar30;
          fStack_210 = *(float *)(param_3 + 0x108) + *(float *)(param_3 + 0x144);
          uStack_1b8 = (void *)
                       CONCAT44(*(float *)(param_3 + 0x104) + (float)iVar29 * fVar30,
                                (float)iVar27 * fVar30 + *(float *)(param_3 + 0x100));
          uStack_1b0 = (float *)CONCAT44(0x7f7fffff,
                                         *(float *)(param_3 + 0x108) + *(float *)(param_3 + 0x140));
          uStack_218 = CONCAT44(fStack_1a4,fStack_1a8);
          uStack_19c = uStack_20c;
          fStack_1a0 = fStack_210;
          FUN_1800b9f60(&uStack_1b8);
          iVar18 = FUN_18063c230(&uStack_148,&uStack_1b8);
          lVar20 = system_message_buffer;
          if (iVar18 != 0) {
            iVar18 = *(int *)(param_3 + 0x30);
            iVar19 = (int)((int64_t)iVar18 / (int64_t)iVar23);
            uVar25 = iVar19 * iVar29 * 0x10000 | iVar19 * iVar27 * 2;
            *(uint *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1a64) = uVar25;
            FUN_18029d000(*(uint64_t *)(lVar20 + 0x1cd8),CONCAT71((uint7)(uint3)(uVar25 >> 8),5));
            FUN_18029cdd0(*(uint64_t *)(system_message_buffer + 0x1cd8),&uStack_1f8);
            FUN_18029fc10(*(int64_t *)(system_message_buffer + 0x1cd8),
                          *(uint64_t *)(system_message_buffer + 0x1c80),
                          *(int64_t *)(system_message_buffer + 0x1cd8) + 0x19e0,0x200);
            if (system_data_2846 == '\0') {
              plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
              uStack_228 = 0;
              (**(code **)(*plVar3 + 0xa8))
                        (plVar3,iVar19 * 2 + 2,(int64_t)iVar18 / (int64_t)iVar23 & 0xffffffff,0);
            }
          }
          iVar27 = iVar1;
        } while (iVar1 < iVar23);
      }
      iVar29 = iVar29 + 1;
    } while (iVar29 < iVar23);
  }
  if (*(int64_t *)(param_3 + 0x90) != 0) {
    uStack_218 = 0;
    plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    (**(code **)(*plVar3 + 0x40))(plVar3,0x2f,1,&uStack_218);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_88 ^ (uint64_t)auStack_248);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800d7010(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void FUN_1800d7010(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t lStackX_8;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  int32_t uVar14;
  uint64_t uStack_50;
  int iStack_48;
  int iStack_44;
  
  uVar2 = *(uint64_t *)(param_2 + 0x96d8);
  uVar3 = *(uint64_t *)(param_2 + 0x96e0);
  uStackX_10 = *(uint64_t *)(param_2 + 0x96e8);
  uStackX_18 = *(uint64_t *)(param_2 + 0x96d0);
  lStackX_8 = param_1;
  lVar9 = FUN_180245280(param_2);
  uVar4 = *(uint64_t *)(param_2 + 0x12408);
  uVar5 = *(uint64_t *)(param_2 + 0x12410);
  uVar6 = *(uint64_t *)(param_2 + 0x96f0);
  FUN_180244ff0(param_2);
  iStack_44 = (int)*(float *)(param_2 + 0x11c24);
  lVar11 = 0;
  uStack_50 = 0;
  iStack_48 = (int)*(float *)(param_2 + 0x11c20);
  FUN_18029d0a0(*(uint64_t *)(system_message_buffer + 0x1cd8),param_2 + 0x11c18,&uStack_50);
  lVar12 = system_main_module_state;
  if (param_3 == 0) {
    lVar10 = FUN_180244ff0(param_2);
    lVar12 = lVar11;
    if (lVar10 != 0) {
      lVar10 = FUN_180244ff0(param_2);
      iVar1 = *(int *)(param_2 + 0x3578);
      if (*(int64_t *)(lVar10 + 0x1d8) != 0) {
        if (system_main_module_state != 0) {
          *(int64_t *)(lVar10 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
        }
        lVar12 = (int64_t)(int)((uint)*(byte *)(lVar10 + 0x335) * iVar1) * 0x10 +
                 *(int64_t *)(lVar10 + 0x1d8);
      }
    }
    FUN_18029ad30(*(uint64_t *)(system_message_buffer + 0x1cd8),0,lVar12);
    if ((lVar9 == 0) || (plVar13 = *(int64_t **)(lVar9 + 0x1e0), plVar13 == (int64_t *)0x0)) {
      plVar13 = (int64_t *)0x0;
    }
    else if (system_main_module_state != 0) {
      *(int64_t *)(lVar9 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
  }
  else {
    if ((param_4 == 0) || (plVar13 = *(int64_t **)(param_4 + 0x1e0), plVar13 == (int64_t *)0x0)) {
      plVar13 = (int64_t *)0x0;
    }
    else if (system_main_module_state != 0) {
      *(int64_t *)(param_4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    uVar7 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    lVar10 = lVar11;
    if ((*(int64_t *)(param_3 + 0x1d8) == 0) ||
       (lVar10 = *(int64_t *)(param_3 + 0x1d8), lVar12 == 0)) {
      FUN_18029ad30(uVar7,0,lVar10);
    }
    else {
      *(int64_t *)(param_3 + 0x340) = (int64_t)*(int *)(lVar12 + 0x224);
      FUN_18029ad30(uVar7,0);
    }
  }
  plVar8 = *(int64_t **)(system_message_buffer + 0x1cd8);
  if ((plVar13 != (int64_t *)0x0) && (*plVar13 != 0)) {
    (**(code **)(*plVar8 + 0x70))(plVar8,*plVar13,2);
  }
  lVar12 = system_message_buffer;
  plVar8[0x107e] = (int64_t)plVar13;
  FUN_18029de40(*(uint64_t *)(lVar12 + 0x1cd8),1);
  if (*(int *)(lVar9 + 0x160) == 5) {
    uVar14 = *(int32_t *)(param_2 + 0x357c);
  }
  else {
    uVar14 = 0xffffffff;
  }
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x10,lVar9,0x10,uVar14);
  lVar12 = *(int64_t *)(system_message_buffer + 0x1cd8);
  *(int64_t *)(lVar9 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
  lVar10 = lVar9 + 0x1a0;
  if (((*(int64_t *)(lVar12 + 0x8540) != lVar10) || (*(int *)(lVar12 + 0x88bc) != -1)) ||
     (*(int *)(lVar12 + 0x8abc) != 0x10)) {
    if (lVar10 != 0) {
      if ((*(int64_t *)(lVar9 + 0x1a8) == 0) && (*(int64_t *)(lVar9 + 0x1b0) == 0))
      goto LAB_1800d733a;
      if (lVar10 != 0) {
        lVar11 = *(int64_t *)(lVar9 + 0x1b0);
      }
    }
    lStackX_8 = lVar11;
    (**(code **)(**(int64_t **)(lVar12 + 0x8400) + 0x40))
              (*(int64_t **)(lVar12 + 0x8400),0x21,1,&lStackX_8);
    *(int64_t *)(lVar12 + 0x8540) = lVar10;
    *(int32_t *)(lVar12 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar12 + 0x8abc) = 0x10;
    *(int *)(lVar12 + 0x82b4) = *(int *)(lVar12 + 0x82b4) + 1;
  }
LAB_1800d733a:
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,uStackX_10,0x10,0xffffffff);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),2,uVar3,0x10,0xffffffff);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),3,uVar2,0x10,0xffffffff);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),4,uStackX_18,0x10,0xffffffff);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),6,uVar6,0x10,0xffffffff);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x28,uVar4,0x11,0xffffffff);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x29,uVar5,0x11,0xffffffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800d7036(uint64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void FUN_1800d7036(uint64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t in_RAX;
  int64_t lVar7;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t unaff_R14;
  int64_t *plVar11;
  uint64_t unaff_R15;
  int32_t uVar12;
  uint64_t in_stack_00000048;
  int in_stack_00000050;
  int iStack0000000000000054;
  int64_t in_stack_000000a0;
  uint64_t uStack00000000000000a8;
  uint64_t uStack00000000000000b0;
  
  *(uint64_t *)(in_RAX + 0x20) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  uStack00000000000000a8 = *(uint64_t *)(param_2 + 0x96e8);
  uStack00000000000000b0 = *(uint64_t *)(param_2 + 0x96d0);
  lVar7 = FUN_180245280();
  uVar2 = *(uint64_t *)(unaff_RBX + 0x12408);
  uVar3 = *(uint64_t *)(unaff_RBX + 0x12410);
  uVar4 = *(uint64_t *)(unaff_RBX + 0x96f0);
  FUN_180244ff0();
  iStack0000000000000054 = (int)*(float *)(unaff_RBX + 0x11c24);
  lVar9 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = (int)*(float *)(unaff_RBX + 0x11c20);
  FUN_18029d0a0(*(uint64_t *)(system_message_buffer + 0x1cd8),unaff_RBX + 0x11c18,&stack0x00000048);
  lVar10 = system_main_module_state;
  if (param_3 == 0) {
    lVar8 = FUN_180244ff0();
    lVar10 = lVar9;
    if (lVar8 != 0) {
      lVar8 = FUN_180244ff0();
      iVar1 = *(int *)(unaff_RBX + 0x3578);
      if (*(int64_t *)(lVar8 + 0x1d8) != 0) {
        if (system_main_module_state != 0) {
          *(int64_t *)(lVar8 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
        }
        lVar10 = (int64_t)(int)((uint)*(byte *)(lVar8 + 0x335) * iVar1) * 0x10 +
                 *(int64_t *)(lVar8 + 0x1d8);
      }
    }
    FUN_18029ad30(*(uint64_t *)(system_message_buffer + 0x1cd8),0,lVar10);
    if ((lVar7 == 0) || (plVar11 = *(int64_t **)(lVar7 + 0x1e0), plVar11 == (int64_t *)0x0)) {
      plVar11 = (int64_t *)0x0;
    }
    else if (system_main_module_state != 0) {
      *(int64_t *)(lVar7 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
  }
  else {
    if ((param_4 == 0) || (plVar11 = *(int64_t **)(param_4 + 0x1e0), plVar11 == (int64_t *)0x0)) {
      plVar11 = (int64_t *)0x0;
    }
    else if (system_main_module_state != 0) {
      *(int64_t *)(param_4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    uVar5 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    lVar8 = lVar9;
    if ((*(int64_t *)(param_3 + 0x1d8) == 0) ||
       (lVar8 = *(int64_t *)(param_3 + 0x1d8), lVar10 == 0)) {
      FUN_18029ad30(uVar5,0,lVar8);
    }
    else {
      *(int64_t *)(param_3 + 0x340) = (int64_t)*(int *)(lVar10 + 0x224);
      FUN_18029ad30(uVar5,0);
    }
  }
  plVar6 = *(int64_t **)(system_message_buffer + 0x1cd8);
  if ((plVar11 != (int64_t *)0x0) && (*plVar11 != 0)) {
    (**(code **)(*plVar6 + 0x70))(plVar6,*plVar11,2);
  }
  lVar10 = system_message_buffer;
  plVar6[0x107e] = (int64_t)plVar11;
  FUN_18029de40(*(uint64_t *)(lVar10 + 0x1cd8),1);
  if (*(int *)(lVar7 + 0x160) == 5) {
    uVar12 = *(int32_t *)(unaff_RBX + 0x357c);
  }
  else {
    uVar12 = 0xffffffff;
  }
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x10,lVar7,0x10,uVar12);
  lVar10 = *(int64_t *)(system_message_buffer + 0x1cd8);
  *(int64_t *)(lVar7 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
  lVar8 = lVar7 + 0x1a0;
  if (((*(int64_t *)(lVar10 + 0x8540) != lVar8) || (*(int *)(lVar10 + 0x88bc) != -1)) ||
     (*(int *)(lVar10 + 0x8abc) != 0x10)) {
    if (lVar8 != 0) {
      if ((*(int64_t *)(lVar7 + 0x1a8) == 0) && (*(int64_t *)(lVar7 + 0x1b0) == 0))
      goto LAB_1800d733a;
      if (lVar8 != 0) {
        lVar9 = *(int64_t *)(lVar7 + 0x1b0);
      }
    }
    in_stack_000000a0 = lVar9;
    (**(code **)(**(int64_t **)(lVar10 + 0x8400) + 0x40))
              (*(int64_t **)(lVar10 + 0x8400),0x21,1,&stack0x000000a0);
    *(int64_t *)(lVar10 + 0x8540) = lVar8;
    *(int32_t *)(lVar10 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar10 + 0x8abc) = 0x10;
    *(int *)(lVar10 + 0x82b4) = *(int *)(lVar10 + 0x82b4) + 1;
  }
LAB_1800d733a:
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,uStack00000000000000a8,0x10,0xffffffff);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),2);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),3);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),4,uStack00000000000000b0,0x10,0xffffffff);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),6,uVar4,0x10,0xffffffff);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x28,uVar2,0x11,0xffffffff);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x29,uVar3,0x11,0xffffffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800d727a(void)
void FUN_1800d727a(void)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t lVar2;
  int64_t unaff_RDI;
  int32_t uVar3;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000040;
  int64_t in_stack_000000a0;
  uint64_t in_stack_000000a8;
  uint64_t in_stack_000000b0;
  
  uVar3 = *(int32_t *)(unaff_RBX + 0x357c);
  RenderingEngineCore0();
  lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
  *(int64_t *)(unaff_RSI + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
  lVar2 = unaff_RSI + 0x1a0;
  if (((*(int64_t *)(lVar1 + 0x8540) != lVar2) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
     (*(int *)(lVar1 + 0x8abc) != 0x10)) {
    if (lVar2 != 0) {
      if ((*(int64_t *)(unaff_RSI + 0x1a8) == unaff_RDI) &&
         (*(int64_t *)(unaff_RSI + 0x1b0) == unaff_RDI)) goto LAB_1800d733a;
      if (lVar2 != 0) {
        unaff_RDI = *(int64_t *)(unaff_RSI + 0x1b0);
      }
    }
    in_stack_000000a0 = unaff_RDI;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),0x21,1,&stack0x000000a0,uVar3);
    *(int64_t *)(lVar1 + 0x8540) = lVar2;
    *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8abc) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
LAB_1800d733a:
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,in_stack_000000a8,0x10,0xffffffff);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),2);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),3);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),4,in_stack_000000b0,0x10,0xffffffff);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),6,in_stack_00000030,0x10,0xffffffff);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x28,in_stack_00000038,0x11,0xffffffff);
  RenderingEngineCore0(*(uint64_t *)(system_message_buffer + 0x1cd8),0x29,in_stack_00000040,0x11,0xffffffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




