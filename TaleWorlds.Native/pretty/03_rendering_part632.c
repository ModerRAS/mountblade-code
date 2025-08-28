#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part632.c - 6 个函数

// 函数: void FUN_18061dc3a(int64_t param_1)
void FUN_18061dc3a(int64_t param_1)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  char cVar12;
  int64_t lVar13;
  int32_t *puVar14;
  int64_t *plVar15;
  int64_t unaff_RBX;
  uint64_t uVar16;
  int64_t lVar17;
  int64_t unaff_RDI;
  uint unaff_R15D;
  int64_t *plStackX_20;
  uint64_t in_stack_00000078;
  
  if (unaff_RBX == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,unaff_RBX * 8,*(int8_t *)(unaff_RDI + 0x160));
    param_1 = *(int64_t *)(unaff_RDI + 0x148);
  }
  if (param_1 == *(int64_t *)(unaff_RDI + 0x150)) {
    if (param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(int64_t *)(unaff_RDI + 0x148) = lVar13;
    *(int64_t *)(unaff_RDI + 0x158) = lVar13 + unaff_RBX * 8;
    *(int64_t *)(unaff_RDI + 0x150) = lVar13;
    if (unaff_R15D != 0) {
      uVar16 = (uint64_t)unaff_R15D;
      lVar13 = 0;
      lVar17 = 0;
      do {
        plVar3 = *(int64_t **)(lVar13 + *(int64_t *)(unaff_RDI + 0x48));
        cVar12 = (**(code **)(*plVar3 + 0x20))(plVar3,&unknown_var_2112_ptr);
        plVar15 = (int64_t *)0x0;
        if (cVar12 != '\0') {
          plVar15 = plVar3;
        }
        (**(code **)(*plVar15 + 0xb8))(plVar15,&plStackX_20,1);
        *(int64_t **)(lVar13 + *(int64_t *)(unaff_RDI + 0x128)) = plStackX_20;
        puVar14 = (int32_t *)(**(code **)(*plStackX_20 + 0x48))(plStackX_20,&stack0x00000048);
        lVar13 = lVar13 + 8;
        uVar5 = puVar14[1];
        uVar6 = puVar14[2];
        uVar7 = puVar14[3];
        uVar8 = *(uint64_t *)(puVar14 + 4);
        uVar9 = *(uint64_t *)(puVar14 + 6);
        uVar10 = *(uint64_t *)(puVar14 + 8);
        uVar11 = *(uint64_t *)(puVar14 + 10);
        lVar4 = *(int64_t *)(unaff_RDI + 0x108);
        puVar1 = (int32_t *)(lVar17 + lVar4);
        *puVar1 = *puVar14;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        puVar2 = (uint64_t *)(lVar17 + 0x10 + lVar4);
        *puVar2 = uVar8;
        puVar2[1] = uVar9;
        puVar2 = (uint64_t *)(lVar17 + 0x20 + lVar4);
        *puVar2 = uVar10;
        puVar2[1] = uVar11;
        uVar16 = uVar16 - 1;
        lVar17 = lVar17 + 0x30;
      } while (uVar16 != 0);
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(in_stack_00000078 ^ (uint64_t)&stack0x00000000);
  }
                    // WARNING: Subroutine does not return
  memmove(lVar13,param_1,*(int64_t *)(unaff_RDI + 0x150) - param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18061dd90(int64_t param_1,int64_t *param_2)
void FUN_18061dd90(int64_t param_1,int64_t *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int8_t auStack_278 [32];
  uint uStack_258;
  uint uStack_250;
  int32_t uStack_248;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  int32_t uStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  int32_t uStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  int32_t uStack_20c;
  int8_t auStack_208 [28];
  int iStack_1ec;
  int32_t uStack_1e8;
  float fStack_1e4;
  uint64_t auStack_1b8 [32];
  uint64_t uStack_b8;
  
  uStack_b8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_278;
  uVar4 = (**(code **)(*param_2 + 0xb0))(param_2);
  uVar7 = (uint64_t)uVar4;
  (**(code **)(*param_2 + 0xb8))(param_2,auStack_1b8,uVar4,0);
  if (uVar4 != 0) {
    puVar6 = auStack_1b8;
    do {
      pfVar5 = (float *)FUN_1800fc980(auStack_208,*puVar6,param_2);
      fVar11 = pfVar5[1];
      fVar8 = pfVar5[2];
      fVar1 = pfVar5[5];
      fVar9 = *pfVar5 + *pfVar5;
      fVar2 = pfVar5[6];
      fVar10 = fVar9 * fVar8 - (fVar11 + fVar11) * pfVar5[3];
      fVar3 = pfVar5[4];
      fVar12 = (1.0 - (fVar11 + fVar11) * fVar11) - (fVar8 + fVar8) * fVar8;
      fVar11 = (fVar8 + fVar8) * pfVar5[3] + fVar9 * fVar11;
      (**(code **)(*(int64_t *)*puVar6 + 0x48))((int64_t *)*puVar6,&iStack_1ec);
      if (iStack_1ec == 0) {
        uStack_250 = 0;
        uStack_258 = uStack_258 & 0xffffff00;
        uStack_20c = 0x7f7fffff;
        fStack_218 = fVar3;
        fStack_214 = fVar1;
        fStack_210 = fVar2;
        FUN_1806345f0(param_1 + 0x11a50,&fStack_218,uStack_1e8,0xffff00ff);
      }
      else if (iStack_1ec == 2) {
        uStack_248 = 0;
        fVar8 = -fStack_1e4;
        uStack_250 = uStack_250 & 0xffffff00;
        uStack_22c = 0x7f7fffff;
        uStack_21c = 0x7f7fffff;
        uStack_258 = 0xffff00ff;
        fStack_238 = fVar8 * fVar12 + fVar3;
        fStack_234 = fVar8 * fVar11 + fVar1;
        fStack_230 = fVar8 * fVar10 + fVar2;
        fStack_228 = fStack_1e4 * fVar12 + fVar3;
        fStack_220 = fStack_1e4 * fVar10 + fVar2;
        fStack_224 = fStack_1e4 * fVar11 + fVar1;
        FUN_1806336a0(param_1 + 0x11a50,&fStack_228,&fStack_238,uStack_1e8);
      }
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_b8 ^ (uint64_t)auStack_278);
}





// 函数: void FUN_18061ddec(void)
void FUN_18061ddec(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  uint64_t *puVar6;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint in_stack_00000020;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  int32_t uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  int32_t uStack000000000000006c;
  
  puVar6 = (uint64_t *)(unaff_RBP + -0x40);
  do {
    pfVar5 = (float *)FUN_1800fc980(&stack0x00000070,*puVar6);
    fVar9 = pfVar5[1];
    fVar1 = pfVar5[2];
    fVar2 = pfVar5[5];
    fVar7 = *pfVar5 + *pfVar5;
    fVar3 = pfVar5[6];
    fVar8 = fVar7 * fVar1 - (fVar9 + fVar9) * pfVar5[3];
    fVar4 = pfVar5[4];
    fVar10 = (1.0 - (fVar9 + fVar9) * fVar9) - (fVar1 + fVar1) * fVar1;
    fVar9 = (fVar1 + fVar1) * pfVar5[3] + fVar7 * fVar9;
    (**(code **)(*(int64_t *)*puVar6 + 0x48))((int64_t *)*puVar6,unaff_RBP + -0x74);
    if (*(int *)(unaff_RBP + -0x74) == 0) {
      in_stack_00000020 = in_stack_00000020 & 0xffffff00;
      uStack000000000000006c = 0x7f7fffff;
      fStack0000000000000060 = fVar4;
      fStack0000000000000064 = fVar2;
      fStack0000000000000068 = fVar3;
      FUN_1806345f0(unaff_RSI + 0x11a50,&stack0x00000060,*(int32_t *)(unaff_RBP + -0x70),
                    0xffff00ff,in_stack_00000020);
    }
    else if (*(int *)(unaff_RBP + -0x74) == 2) {
      fVar1 = *(float *)(unaff_RBP + -0x6c);
      fVar7 = -fVar1;
      uStack000000000000004c = 0x7f7fffff;
      uStack000000000000005c = 0x7f7fffff;
      in_stack_00000020 = 0xffff00ff;
      fStack0000000000000040 = fVar7 * fVar10 + fVar4;
      fStack0000000000000044 = fVar7 * fVar9 + fVar2;
      fStack0000000000000048 = fVar7 * fVar8 + fVar3;
      fStack0000000000000050 = fVar1 * fVar10 + fVar4;
      fStack0000000000000058 = fVar1 * fVar8 + fVar3;
      fStack0000000000000054 = fVar1 * fVar9 + fVar2;
      FUN_1806336a0(unaff_RSI + 0x11a50,&stack0x00000050,&stack0x00000040,
                    *(int32_t *)(unaff_RBP + -0x70),0xffff00ff);
    }
    puVar6 = puVar6 + 1;
    unaff_RDI = unaff_RDI + -1;
  } while (unaff_RDI != 0);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0xc0) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18061e061(void)
void FUN_18061e061(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0xc0) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18061e100(int64_t param_1,int64_t param_2)
void FUN_18061e100(int64_t param_1,int64_t param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int64_t *plVar5;
  float *pfVar6;
  int64_t lVar7;
  float *pfVar8;
  uint64_t uVar9;
  uint uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int64_t *plStack_1d8;
  int64_t *plStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  int32_t uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  int32_t uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int32_t uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int32_t uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  int32_t uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int32_t uStack_15c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int32_t uStack_13c;
  int8_t auStack_128 [28];
  int8_t auStack_10c [16];
  int8_t auStack_fc [16];
  int8_t auStack_ec [196];
  
  if (*(int *)(system_parameter_buffer + 0x1358) - 7U < 2) {
    uVar12 = 0;
    uVar9 = uVar12;
    uVar11 = uVar12;
    if (*(int64_t *)(param_1 + 0x50) - *(int64_t *)(param_1 + 0x48) >> 3 != 0) {
      do {
        FUN_18061dd90(param_2,*(uint64_t *)(*(int64_t *)(param_1 + 0x48) + uVar9));
        uVar10 = (int)uVar11 + 1;
        uVar9 = uVar9 + 8;
        uVar11 = (uint64_t)uVar10;
      } while ((uint64_t)(int64_t)(int)uVar10 <
               (uint64_t)(*(int64_t *)(param_1 + 0x50) - *(int64_t *)(param_1 + 0x48) >> 3));
    }
    if ((*(int *)(system_parameter_buffer + 0x1358) == 8) &&
       (lVar7 = *(int64_t *)(param_1 + 0x1c0), uVar9 = uVar12,
       *(int64_t *)(param_1 + 0x1c8) - lVar7 >> 3 != 0)) {
      do {
        (**(code **)(**(int64_t **)(lVar7 + uVar9) + 0x30))
                  (*(int64_t **)(lVar7 + uVar9),&plStack_1d8,&plStack_1d0);
        pfVar6 = (float *)(**(code **)(*plStack_1d8 + 0x90))(plStack_1d8,&fStack_148);
        plVar5 = *(int64_t **)(uVar9 + *(int64_t *)(param_1 + 0x1c0));
        lVar7 = (**(code **)(*plVar5 + 0x40))(plVar5,auStack_128,0);
        pfVar8 = (float *)FUN_1800fcb90(pfVar6,auStack_10c,lVar7);
        fVar1 = pfVar6[3];
        fVar13 = pfVar6[1];
        fVar14 = *pfVar6;
        fVar18 = pfVar6[2];
        fVar21 = *(float *)(lVar7 + 0x10) + *(float *)(lVar7 + 0x10);
        fVar17 = *(float *)(lVar7 + 0x14) + *(float *)(lVar7 + 0x14);
        fVar2 = *pfVar8;
        fVar20 = *(float *)(lVar7 + 0x18) + *(float *)(lVar7 + 0x18);
        fVar3 = pfVar8[2];
        fVar4 = pfVar8[3];
        fVar19 = fVar1 * fVar1 - 0.5;
        fVar16 = fVar14 * fVar21 + fVar13 * fVar17 + fVar18 * fVar20;
        fVar15 = (fVar13 * fVar20 - fVar18 * fVar17) * fVar1 + fVar19 * fVar21 + fVar14 * fVar16 +
                 pfVar6[4];
        fVar22 = (fVar14 * fVar17 - fVar13 * fVar21) * fVar1 + fVar19 * fVar20 + fVar18 * fVar16 +
                 pfVar6[6];
        fStack_194 = (fVar18 * fVar21 - fVar14 * fVar20) * fVar1 + fVar19 * fVar17 + fVar13 * fVar16
                     + pfVar6[5];
        fVar1 = pfVar8[1];
        fVar14 = fVar3 + fVar3;
        fVar18 = fVar2 * (fVar2 + fVar2);
        uStack_18c = 0x7f7fffff;
        fStack_1a4 = fVar4 * (fVar2 + fVar2);
        fVar13 = fVar1 + fVar1;
        fStack_1c8 = 1.0 - (fVar3 * fVar14 + fVar1 * fVar13);
        fStack_1c4 = fVar4 * fVar14 + fVar13 * fVar2;
        fStack_1b8 = fVar13 * fVar2 - fVar4 * fVar14;
        fStack_1c0 = fVar14 * fVar2 - fVar4 * fVar13;
        fStack_1b0 = fStack_1a4 + fVar1 * fVar14;
        fStack_1a8 = fVar4 * fVar13 + fVar14 * fVar2;
        fStack_1a4 = fVar1 * fVar14 - fStack_1a4;
        fStack_1b4 = 1.0 - (fVar3 * fVar14 + fVar18);
        fStack_1a0 = 1.0 - (fVar1 * fVar13 + fVar18);
        fStack_198 = fVar15;
        fStack_190 = fVar22;
        if (*(char *)(param_2 + 0x11aa0) != '\0') {
          FUN_180635c40(param_2 + 0x11a50,&fStack_1c8,0x3ccccccd,fStack_1a8,fVar15,fVar22);
        }
        pfVar6 = (float *)(**(code **)(*plStack_1d0 + 0x90))(plStack_1d0,auStack_128);
        plVar5 = *(int64_t **)(uVar9 + *(int64_t *)(param_1 + 0x1c0));
        lVar7 = (**(code **)(*plVar5 + 0x40))(plVar5,auStack_ec,1);
        pfVar8 = (float *)FUN_1800fcb90(pfVar6,auStack_fc,lVar7);
        fVar1 = pfVar6[3];
        fVar13 = pfVar6[1];
        fVar14 = *pfVar6;
        fVar18 = pfVar6[2];
        fVar21 = *(float *)(lVar7 + 0x10) + *(float *)(lVar7 + 0x10);
        fVar17 = *(float *)(lVar7 + 0x14) + *(float *)(lVar7 + 0x14);
        fVar2 = *pfVar8;
        fVar20 = *(float *)(lVar7 + 0x18) + *(float *)(lVar7 + 0x18);
        fVar3 = pfVar8[1];
        fVar4 = pfVar8[2];
        fVar19 = fVar1 * fVar1 - 0.5;
        fVar16 = fVar14 * fVar21 + fVar13 * fVar17 + fVar18 * fVar20;
        fStack_198 = (fVar13 * fVar20 - fVar18 * fVar17) * fVar1 + fVar19 * fVar21 + fVar14 * fVar16
                     + pfVar6[4];
        fStack_194 = (fVar18 * fVar21 - fVar14 * fVar20) * fVar1 + fVar19 * fVar17 + fVar13 * fVar16
                     + pfVar6[5];
        fStack_190 = (fVar14 * fVar17 - fVar13 * fVar21) * fVar1 + fVar19 * fVar20 + fVar18 * fVar16
                     + pfVar6[6];
        uStack_13c = 0x7f7fffff;
        fVar1 = pfVar8[3];
        fVar13 = fVar4 + fVar4;
        fVar18 = fVar3 + fVar3;
        fStack_1a4 = (fVar2 + fVar2) * fVar1;
        fStack_1c0 = fVar13 * fVar2 - fVar18 * fVar1;
        fVar14 = (fVar2 + fVar2) * fVar2;
        fStack_1a8 = fVar18 * fVar1 + fVar13 * fVar2;
        fStack_1c4 = fVar13 * fVar1 + fVar18 * fVar2;
        fStack_1c8 = 1.0 - (fVar13 * fVar4 + fVar18 * fVar3);
        fStack_1b8 = fVar18 * fVar2 - fVar13 * fVar1;
        fStack_1b4 = 1.0 - (fVar13 * fVar4 + fVar14);
        fStack_1b0 = fStack_1a4 + fVar13 * fVar3;
        fStack_1a4 = fVar13 * fVar3 - fStack_1a4;
        uStack_1bc = uStack_17c;
        fStack_1a0 = 1.0 - (fVar18 * fVar3 + fVar14);
        uStack_1ac = uStack_16c;
        uStack_19c = uStack_15c;
        uStack_18c = 0x7f7fffff;
        fStack_188 = fStack_1c8;
        fStack_184 = fStack_1c4;
        fStack_180 = fStack_1c0;
        fStack_178 = fStack_1b8;
        fStack_174 = fStack_1b4;
        fStack_170 = fStack_1b0;
        fStack_168 = fStack_1a8;
        fStack_164 = fStack_1a4;
        fStack_160 = fStack_1a0;
        fStack_148 = fStack_198;
        fStack_144 = fStack_194;
        fStack_140 = fStack_190;
        if (*(char *)(param_2 + 0x11aa0) != '\0') {
          FUN_180635c40(param_2 + 0x11a50,&fStack_1c8,0x3c8f5c29,fStack_1c4,fVar15,fVar22,fStack_198
                        ,fStack_190);
        }
        lVar7 = *(int64_t *)(param_1 + 0x1c0);
        uVar10 = (int)uVar12 + 1;
        uVar12 = (uint64_t)uVar10;
        uVar9 = uVar9 + 8;
      } while ((uint64_t)(int64_t)(int)uVar10 <
               (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - lVar7 >> 3));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18061e13c(int64_t param_1)
void FUN_18061e13c(int64_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int64_t *plVar7;
  int64_t in_RAX;
  float *pfVar8;
  int64_t lVar9;
  float *pfVar10;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint uVar11;
  uint64_t unaff_RDI;
  uint64_t uVar12;
  int64_t in_R11;
  int64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t uVar13;
  uint64_t uVar14;
  int32_t in_XMM0_Da;
  float fVar15;
  float fVar16;
  float fVar17;
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
  int32_t uStack000000000000002c;
  int32_t uStack000000000000003c;
  int64_t *in_stack_00000040;
  int64_t *in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  int32_t uStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  int32_t uStack000000000000007c;
  int32_t in_stack_00000150;
  int32_t in_stack_00000158;
  int32_t in_stack_00000160;
  int32_t in_stack_00000168;
  int32_t in_stack_00000170;
  int32_t in_stack_00000178;
  int32_t in_stack_00000180;
  int32_t in_stack_00000188;
  int32_t in_stack_00000190;
  int32_t in_stack_00000198;
  int32_t in_stack_000001a0;
  int32_t in_stack_000001a8;
  int32_t in_stack_000001b0;
  int32_t in_stack_000001b8;
  int32_t in_stack_000001c0;
  int32_t in_stack_000001c8;
  int32_t in_stack_000001d0;
  int32_t in_stack_000001d8;
  int32_t in_stack_000001e0;
  int32_t in_stack_000001e8;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  uVar13 = 0;
  uVar14 = uVar13;
  uVar12 = uVar13;
  if (in_RAX >> 3 != 0) {
    do {
      in_XMM0_Da = FUN_18061dd90(in_XMM0_Da,
                                 *(uint64_t *)(*(int64_t *)(unaff_RSI + 0x48) + uVar14));
      uVar11 = (int)uVar12 + 1;
      param_1 = system_parameter_buffer;
      uVar14 = uVar14 + 8;
      uVar12 = (uint64_t)uVar11;
    } while ((uint64_t)(int64_t)(int)uVar11 <
             (uint64_t)(*(int64_t *)(unaff_RSI + 0x50) - *(int64_t *)(unaff_RSI + 0x48) >> 3));
  }
  if ((*(int *)(param_1 + 0x1358) == 8) &&
     (lVar9 = *(int64_t *)(unaff_RSI + 0x1c0), *(int64_t *)(unaff_RSI + 0x1c8) - lVar9 >> 3 != 0))
  {
    uStack000000000000002c = 0x7f7fffff;
    uStack000000000000003c = 0x7f7fffff;
    uVar14 = uVar13;
    do {
      (**(code **)(**(int64_t **)(lVar9 + uVar14) + 0x30))
                (*(int64_t **)(lVar9 + uVar14),&stack0x00000040,&stack0x00000048);
      pfVar8 = (float *)(**(code **)(*in_stack_00000040 + 0x90))
                                  (in_stack_00000040,unaff_RBP + -0x30);
      plVar7 = *(int64_t **)(uVar14 + *(int64_t *)(unaff_RSI + 0x1c0));
      lVar9 = (**(code **)(*plVar7 + 0x40))(plVar7,unaff_RBP + -0x10,0);
      pfVar10 = (float *)FUN_1800fcb90(pfVar8,unaff_RBP + 0xc,lVar9);
      fVar15 = pfVar8[3];
      fVar20 = pfVar8[1];
      fVar23 = *pfVar8;
      fVar27 = pfVar8[2];
      fVar26 = *(float *)(lVar9 + 0x10) + *(float *)(lVar9 + 0x10);
      fVar21 = *(float *)(lVar9 + 0x14) + *(float *)(lVar9 + 0x14);
      fVar1 = *pfVar10;
      fVar25 = *(float *)(lVar9 + 0x18) + *(float *)(lVar9 + 0x18);
      fVar2 = pfVar10[2];
      fVar3 = pfVar10[3];
      fVar24 = fVar15 * fVar15 - 0.5;
      fVar18 = fVar23 * fVar26 + fVar20 * fVar21 + fVar27 * fVar25;
      fVar17 = (fVar20 * fVar25 - fVar27 * fVar21) * fVar15 + fVar24 * fVar26 + fVar23 * fVar18 +
               pfVar8[4];
      fVar4 = pfVar8[6];
      fVar5 = pfVar8[5];
      cVar6 = *(char *)(unaff_R12 + 0x11aa0);
      fVar19 = pfVar10[1];
      fVar16 = fVar2 + fVar2;
      fVar22 = fVar1 * (fVar1 + fVar1);
      *(float *)(unaff_RBP + -0x80) = fVar17;
      *(float *)(unaff_RBP + -0x7c) =
           (fVar27 * fVar26 - fVar23 * fVar25) * fVar15 + fVar24 * fVar21 + fVar20 * fVar18 + fVar5;
      *(float *)(unaff_RBP + -0x78) =
           (fVar23 * fVar21 - fVar20 * fVar26) * fVar15 + fVar24 * fVar25 + fVar27 * fVar18 + fVar4;
      *(int32_t *)(unaff_RBP + -0x74) = uStack000000000000002c;
      fStack0000000000000074 = fVar3 * (fVar1 + fVar1);
      fVar15 = fVar19 + fVar19;
      fStack0000000000000050 = 1.0 - (fVar2 * fVar16 + fVar19 * fVar15);
      fStack0000000000000054 = fVar3 * fVar16 + fVar15 * fVar1;
      fStack0000000000000060 = fVar15 * fVar1 - fVar3 * fVar16;
      fStack0000000000000058 = fVar16 * fVar1 - fVar3 * fVar15;
      fStack0000000000000068 = fStack0000000000000074 + fVar19 * fVar16;
      fStack0000000000000070 = fVar3 * fVar15 + fVar16 * fVar1;
      fStack0000000000000074 = fVar19 * fVar16 - fStack0000000000000074;
      fStack0000000000000064 = 1.0 - (fVar2 * fVar16 + fVar22);
      fStack0000000000000078 = 1.0 - (fVar19 * fVar15 + fVar22);
      if (cVar6 != '\0') {
        FUN_180635c40(unaff_R12 + 0x11a50,&stack0x00000050,0x3ccccccd,fStack0000000000000070,fVar17)
        ;
      }
      pfVar8 = (float *)(**(code **)(*in_stack_00000048 + 0x90))
                                  (in_stack_00000048,unaff_RBP + -0x10);
      plVar7 = *(int64_t **)(uVar14 + *(int64_t *)(unaff_RSI + 0x1c0));
      lVar9 = (**(code **)(*plVar7 + 0x40))(plVar7,unaff_RBP + 0x2c,1);
      pfVar10 = (float *)FUN_1800fcb90(pfVar8,unaff_RBP + 0x1c,lVar9);
      fVar15 = pfVar8[3];
      fVar20 = pfVar8[1];
      fVar23 = *pfVar8;
      fVar27 = pfVar8[2];
      fVar22 = *(float *)(lVar9 + 0x10) + *(float *)(lVar9 + 0x10);
      fVar16 = *(float *)(lVar9 + 0x14) + *(float *)(lVar9 + 0x14);
      fVar1 = *pfVar10;
      fVar21 = *(float *)(lVar9 + 0x18) + *(float *)(lVar9 + 0x18);
      fVar2 = pfVar10[1];
      fVar3 = pfVar10[2];
      fVar18 = fVar15 * fVar15 - 0.5;
      fVar19 = fVar23 * fVar22 + fVar20 * fVar16 + fVar27 * fVar21;
      fVar4 = pfVar8[5];
      fVar5 = pfVar8[6];
      cVar6 = *(char *)(unaff_R12 + 0x11aa0);
      *(float *)(unaff_RBP + -0x30) =
           (fVar20 * fVar21 - fVar27 * fVar16) * fVar15 + fVar18 * fVar22 + fVar23 * fVar19 +
           pfVar8[4];
      *(float *)(unaff_RBP + -0x2c) =
           (fVar27 * fVar22 - fVar23 * fVar21) * fVar15 + fVar18 * fVar16 + fVar20 * fVar19 + fVar4;
      *(float *)(unaff_RBP + -0x28) =
           (fVar23 * fVar16 - fVar20 * fVar22) * fVar15 + fVar18 * fVar21 + fVar27 * fVar19 + fVar5;
      *(int32_t *)(unaff_RBP + -0x24) = uStack000000000000003c;
      fVar15 = pfVar10[3];
      fVar20 = fVar3 + fVar3;
      fVar27 = fVar2 + fVar2;
      fStack0000000000000074 = (fVar1 + fVar1) * fVar15;
      fStack0000000000000058 = fVar20 * fVar1 - fVar27 * fVar15;
      fVar23 = (fVar1 + fVar1) * fVar1;
      fStack0000000000000070 = fVar27 * fVar15 + fVar20 * fVar1;
      fStack0000000000000054 = fVar20 * fVar15 + fVar27 * fVar1;
      fStack0000000000000050 = 1.0 - (fVar20 * fVar3 + fVar27 * fVar2);
      uStack000000000000005c = *(int32_t *)(unaff_RBP + -100);
      fStack0000000000000060 = fVar27 * fVar1 - fVar20 * fVar15;
      fStack0000000000000064 = 1.0 - (fVar20 * fVar3 + fVar23);
      fStack0000000000000068 = fStack0000000000000074 + fVar20 * fVar2;
      uStack000000000000006c = *(int32_t *)(unaff_RBP + -0x54);
      fStack0000000000000074 = fVar20 * fVar2 - fStack0000000000000074;
      *(float *)(unaff_RBP + -0x70) = fStack0000000000000050;
      *(float *)(unaff_RBP + -0x6c) = fStack0000000000000054;
      *(float *)(unaff_RBP + -0x68) = fStack0000000000000058;
      *(int32_t *)(unaff_RBP + -100) = uStack000000000000005c;
      fStack0000000000000078 = 1.0 - (fVar27 * fVar2 + fVar23);
      uStack000000000000007c = *(int32_t *)(unaff_RBP + -0x44);
      *(float *)(unaff_RBP + -0x60) = fStack0000000000000060;
      *(float *)(unaff_RBP + -0x5c) = fStack0000000000000064;
      *(float *)(unaff_RBP + -0x58) = fStack0000000000000068;
      *(int32_t *)(unaff_RBP + -0x54) = uStack000000000000006c;
      *(float *)(unaff_RBP + -0x50) = fStack0000000000000070;
      *(float *)(unaff_RBP + -0x4c) = fStack0000000000000074;
      *(float *)(unaff_RBP + -0x48) = fStack0000000000000078;
      *(int32_t *)(unaff_RBP + -0x44) = uStack000000000000007c;
      *(int32_t *)(unaff_RBP + -0x80) = *(int32_t *)(unaff_RBP + -0x30);
      *(int32_t *)(unaff_RBP + -0x7c) = *(int32_t *)(unaff_RBP + -0x2c);
      *(int32_t *)(unaff_RBP + -0x78) = *(int32_t *)(unaff_RBP + -0x28);
      *(int32_t *)(unaff_RBP + -0x74) = *(int32_t *)(unaff_RBP + -0x24);
      if (cVar6 != '\0') {
        FUN_180635c40(unaff_R12 + 0x11a50,&stack0x00000050,0x3c8f5c29,fStack0000000000000054,fVar17)
        ;
      }
      lVar9 = *(int64_t *)(unaff_RSI + 0x1c0);
      uVar11 = (int)uVar13 + 1;
      uVar13 = (uint64_t)uVar11;
      uVar14 = uVar14 + 8;
    } while ((uint64_t)(int64_t)(int)uVar11 <
             (uint64_t)(*(int64_t *)(unaff_RSI + 0x1c8) - lVar9 >> 3));
  }
  return;
}





