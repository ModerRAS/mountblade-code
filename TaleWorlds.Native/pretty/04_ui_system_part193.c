/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part193.c - 2 个函数

// 函数: void FUN_18077d1a0(int64_t param_1,uint64_t param_2,float param_3)
void FUN_18077d1a0(int64_t param_1,uint64_t param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (param_3 * 6.2831855) / (float)*(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0);
  fVar1 = (float)cosf(fVar3);
  fVar2 = (fVar1 + 1.0) * 0.5;
  *(float *)(param_1 + 0x434) = -(fVar1 + 1.0);
  *(float *)(param_1 + 0x430) = fVar2;
  *(float *)(param_1 + 0x438) = fVar2;
                    // WARNING: Subroutine does not return
  AdvancedSystemController(fVar3);
}



uint64_t FUN_18077d2b0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar1 = *param_1;
  iVar4 = 0;
  lVar2 = *(int64_t *)(lVar1 + 0xe8);
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar5 = 0;
    do {
      uVar3 = func_0x000180762a70(lVar1,iVar4,
                                  *(int32_t *)
                                   (*(int64_t *)(*(int64_t *)(lVar2 + 0x68) + lVar5) + 0x38));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar2 = *(int64_t *)(lVar1 + 0xe8);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(lVar2 + 0x60));
  }
  func_0x00018077dda0(lVar1);
  *(int32_t *)(lVar1 + 0x218) = *(int32_t *)(lVar1 + 800);
  func_0x00018077de90(lVar1);
  return 0;
}



uint64_t FUN_18077d380(int64_t *param_1,int param_2,int32_t *param_3,int64_t param_4)

{
  int64_t lVar1;
  
  if (param_2 == 0) {
    lVar1 = *param_1;
    *param_3 = *(int32_t *)(lVar1 + 800);
    if (param_4 != 0) {
                    // WARNING: Subroutine does not return
      SystemValidationProcessor(param_4,0x20,&unknown_var_2048_ptr,(double)*(float *)(lVar1 + 800));
    }
  }
  return 0;
}





// 函数: void FUN_18077d3d0(void)
void FUN_18077d3d0(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c0dc14,0,0x5c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18077d4a0(int64_t param_1,float *param_2,float *param_3,uint param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStackX_10;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  
  uVar8 = (uint64_t)param_4;
  if (param_2 != (float *)0x0) {
    if (*(float *)(param_1 + 800) != *(float *)(param_1 + 0x218)) {
      *(float *)(param_1 + 0x218) = *(float *)(param_1 + 800);
      func_0x00018077de90();
    }
    if (*(float *)(param_1 + 0x31c) == 1.0) {
                    // WARNING: Subroutine does not return
      memcpy(param_3,param_2,uVar8 * (int64_t)(int)param_5 * 4);
    }
    if (*(float *)(param_1 + 0x31c) == 0.0) {
                    // WARNING: Subroutine does not return
      memset(param_3,0,uVar8 * (int64_t)(int)param_5 * 4);
    }
    if (param_5 == 1) {
      fVar16 = *(float *)(param_1 + 0x21c);
      fVar12 = *(float *)(param_1 + 0x29c);
      if (param_4 != 0) {
        lVar6 = (int64_t)param_2 - (int64_t)param_3;
        fVar17 = fVar16;
        do {
          fVar16 = *(float *)((int64_t)param_3 + lVar6);
          fVar12 = fVar16 + fVar12 + ui_system_buffer_config;
          ui_system_buffer_config = -ui_system_buffer_config;
          fVar12 = (fVar12 - fVar17) * *(float *)(param_1 + 0x31c);
          *param_3 = fVar12;
          param_3 = param_3 + 1;
          uVar7 = (int)uVar8 - 1;
          uVar8 = (uint64_t)uVar7;
          fVar17 = fVar16;
        } while (uVar7 != 0);
      }
      *(float *)(param_1 + 0x21c) = fVar16;
      *(float *)(param_1 + 0x29c) = fVar12;
    }
    else if (param_5 == 2) {
      fVar16 = *(float *)(param_1 + 0x21c);
      fVar12 = *(float *)(param_1 + 0x220);
      fVar17 = *(float *)(param_1 + 0x29c);
      fVar19 = *(float *)(param_1 + 0x2a0);
      fVar11 = fVar16;
      fVar13 = fVar12;
      if (param_4 != 0) {
        do {
          fVar11 = *param_2;
          fVar13 = param_2[1];
          param_2 = param_2 + 2;
          fVar17 = fVar11 + fVar17 + ui_system_buffer_config;
          fVar19 = fVar13 + fVar19 + ui_system_buffer_config;
          ui_system_buffer_config = -ui_system_buffer_config;
          fVar17 = (fVar17 - fVar16) * *(float *)(param_1 + 0x31c);
          fVar19 = (fVar19 - fVar12) * *(float *)(param_1 + 0x31c);
          *param_3 = fVar17;
          param_3[1] = fVar19;
          param_3 = param_3 + 2;
          uVar7 = (int)uVar8 - 1;
          uVar8 = (uint64_t)uVar7;
          fVar16 = fVar11;
          fVar12 = fVar13;
        } while (uVar7 != 0);
      }
      *(float *)(param_1 + 0x21c) = fVar11;
      *(float *)(param_1 + 0x220) = fVar13;
      *(float *)(param_1 + 0x29c) = fVar17;
      *(float *)(param_1 + 0x2a0) = fVar19;
    }
    else if (param_5 == 6) {
      fVar16 = *(float *)(param_1 + 0x220);
      fVar12 = *(float *)(param_1 + 0x22c);
      fVar17 = *(float *)(param_1 + 0x230);
      fVar19 = *(float *)(param_1 + 0x21c);
      fVar11 = *(float *)(param_1 + 0x224);
      fVar13 = *(float *)(param_1 + 0x228);
      fVar20 = *(float *)(param_1 + 0x29c);
      fVar21 = *(float *)(param_1 + 0x2a0);
      fVar23 = *(float *)(param_1 + 0x2a4);
      fVar24 = *(float *)(param_1 + 0x2a8);
      fVar25 = *(float *)(param_1 + 0x2ac);
      fVar26 = *(float *)(param_1 + 0x2b0);
      if (param_4 != 0) {
        pfVar4 = param_3 + 2;
        pfVar3 = param_2 + 2;
        fVar10 = fVar11;
        fVar22 = fVar13;
        fVar14 = fVar19;
        fStackX_10 = fVar16;
        fStack_d8 = fVar12;
        fStack_d4 = fVar17;
        do {
          fVar15 = *(float *)(param_1 + 0x31c);
          fVar11 = *pfVar3;
          fVar13 = pfVar3[1];
          fVar19 = pfVar3[-2];
          fVar16 = pfVar3[-1];
          fVar20 = ((fVar19 + fVar20 + ui_system_buffer_config) - fVar14) * fVar15;
          fVar21 = ((fVar16 + fVar21 + ui_system_buffer_config) - fStackX_10) * fVar15;
          fVar17 = pfVar3[3];
          fVar12 = pfVar3[2];
          fVar23 = ((fVar11 + fVar23 + ui_system_buffer_config) - fVar10) * fVar15;
          *(float *)((int64_t)param_3 + (-8 - (int64_t)param_2) + (int64_t)pfVar3) = fVar20;
          pfVar4[-1] = fVar21;
          pfVar3 = pfVar3 + 6;
          fVar24 = ((fVar13 + fVar24 + ui_system_buffer_config) - fVar22) * fVar15;
          *pfVar4 = fVar23;
          fVar25 = fVar12 + fVar25 + ui_system_buffer_config;
          pfVar4[1] = fVar24;
          fVar26 = fVar17 + fVar26 + ui_system_buffer_config;
          ui_system_buffer_config = -ui_system_buffer_config;
          fVar25 = (fVar25 - fStack_d8) * fVar15;
          pfVar4[2] = fVar25;
          fVar26 = (fVar26 - fStack_d4) * fVar15;
          pfVar4[3] = fVar26;
          pfVar4 = pfVar4 + 6;
          uVar7 = (int)uVar8 - 1;
          uVar8 = (uint64_t)uVar7;
          fVar10 = fVar11;
          fVar22 = fVar13;
          fVar14 = fVar19;
          fStackX_10 = fVar16;
          fStack_d8 = fVar12;
          fStack_d4 = fVar17;
        } while (uVar7 != 0);
      }
      *(float *)(param_1 + 0x21c) = fVar19;
      *(float *)(param_1 + 0x220) = fVar16;
      *(float *)(param_1 + 0x224) = fVar11;
      *(float *)(param_1 + 0x228) = fVar13;
      *(float *)(param_1 + 0x22c) = fVar12;
      *(float *)(param_1 + 0x230) = fVar17;
      *(float *)(param_1 + 0x29c) = fVar20;
      *(float *)(param_1 + 0x2a0) = fVar21;
      *(float *)(param_1 + 0x2a4) = fVar23;
      *(float *)(param_1 + 0x2a8) = fVar24;
      *(float *)(param_1 + 0x2ac) = fVar25;
      *(float *)(param_1 + 0x2b0) = fVar26;
    }
    else if (param_5 == 8) {
      fVar16 = *(float *)(param_1 + 0x228);
      fVar12 = *(float *)(param_1 + 0x22c);
      fVar17 = *(float *)(param_1 + 0x230);
      fVar19 = *(float *)(param_1 + 0x234);
      fVar11 = *(float *)(param_1 + 0x21c);
      fVar13 = *(float *)(param_1 + 0x220);
      fVar20 = *(float *)(param_1 + 0x224);
      fVar21 = *(float *)(param_1 + 0x29c);
      fVar23 = *(float *)(param_1 + 0x2a0);
      fVar24 = *(float *)(param_1 + 0x2a4);
      fVar25 = *(float *)(param_1 + 0x2a8);
      fVar26 = *(float *)(param_1 + 0x2ac);
      fVar10 = *(float *)(param_1 + 0x2b0);
      fVar22 = *(float *)(param_1 + 0x2b8);
      fStackX_10 = *(float *)(param_1 + 0x2b4);
      fStack_d8 = *(float *)(param_1 + 0x238);
      if (param_4 != 0) {
        pfVar4 = param_3 + 2;
        pfVar3 = param_2 + 2;
        fVar14 = fVar11;
        fVar15 = fVar13;
        fVar18 = fVar20;
        fStack_d4 = fVar17;
        fStack_d0 = fVar12;
        fStack_cc = fVar16;
        fStack_c8 = fVar19;
        do {
          fVar1 = *(float *)(param_1 + 0x31c);
          fVar13 = pfVar3[-1];
          fVar20 = *pfVar3;
          fVar11 = pfVar3[-2];
          fVar12 = pfVar3[2];
          fVar17 = pfVar3[3];
          fVar16 = pfVar3[1];
          fVar23 = ((fVar13 + fVar23 + ui_system_buffer_config) - fVar15) * fVar1;
          fVar21 = ((fVar21 + fVar11 + ui_system_buffer_config) - fVar14) * fVar1;
          fVar24 = ((fVar20 + fVar24 + ui_system_buffer_config) - fVar18) * fVar1;
          fVar19 = pfVar3[4];
          fVar25 = ((fVar16 + fVar25 + ui_system_buffer_config) - fStack_cc) * fVar1;
          fVar26 = ((fVar12 + fVar26 + ui_system_buffer_config) - fStack_d0) * fVar1;
          fVar10 = ((fVar17 + fVar10 + ui_system_buffer_config) - fStack_d4) * fVar1;
          fStackX_10 = ((fVar19 + fStackX_10 + ui_system_buffer_config) - fStack_c8) * fVar1;
          fVar2 = pfVar3[5];
          *(float *)((int64_t)pfVar3 + (int64_t)param_3 + (-8 - (int64_t)param_2)) = fVar21;
          pfVar4[-1] = fVar23;
          pfVar3 = pfVar3 + 8;
          *pfVar4 = fVar24;
          pfVar4[1] = fVar25;
          pfVar4[2] = fVar26;
          fVar22 = fVar22 + fVar2 + ui_system_buffer_config;
          pfVar4[3] = fVar10;
          ui_system_buffer_config = -ui_system_buffer_config;
          pfVar4[4] = fStackX_10;
          fVar22 = (fVar22 - fStack_d8) * fVar1;
          pfVar4[5] = fVar22;
          pfVar4 = pfVar4 + 8;
          uVar7 = (int)uVar8 - 1;
          uVar8 = (uint64_t)uVar7;
          fVar14 = fVar11;
          fVar15 = fVar13;
          fVar18 = fVar20;
          fStack_d8 = fVar2;
          fStack_d4 = fVar17;
          fStack_d0 = fVar12;
          fStack_cc = fVar16;
          fStack_c8 = fVar19;
        } while (uVar7 != 0);
      }
      *(float *)(param_1 + 0x21c) = fVar11;
      *(float *)(param_1 + 0x238) = fStack_d8;
      *(float *)(param_1 + 0x220) = fVar13;
      *(float *)(param_1 + 0x224) = fVar20;
      *(float *)(param_1 + 0x228) = fVar16;
      *(float *)(param_1 + 0x22c) = fVar12;
      *(float *)(param_1 + 0x230) = fVar17;
      *(float *)(param_1 + 0x234) = fVar19;
      *(float *)(param_1 + 0x29c) = fVar21;
      *(float *)(param_1 + 0x2a0) = fVar23;
      *(float *)(param_1 + 0x2a4) = fVar24;
      *(float *)(param_1 + 0x2a8) = fVar25;
      *(float *)(param_1 + 0x2ac) = fVar26;
      *(float *)(param_1 + 0x2b0) = fVar10;
      *(float *)(param_1 + 0x2b4) = fStackX_10;
      *(float *)(param_1 + 0x2b8) = fVar22;
    }
    else if (0 < (int)param_5) {
      pfVar4 = (float *)(param_1 + 0x29c);
      lVar6 = (int64_t)param_3 - (int64_t)param_2;
      uVar9 = (uint64_t)param_5;
      fVar16 = ui_system_buffer_config;
      do {
        fVar12 = pfVar4[-0x20];
        fVar17 = *pfVar4;
        pfVar3 = param_2;
        uVar5 = uVar8;
        fVar19 = fVar12;
        if (param_4 != 0) {
          do {
            fVar19 = *pfVar3;
            fVar17 = fVar19 + fVar17 + fVar16;
            fVar16 = -fVar16;
            fVar17 = (fVar17 - fVar12) * *(float *)(param_1 + 0x31c);
            *(float *)(lVar6 + (int64_t)pfVar3) = fVar17;
            uVar7 = (int)uVar5 - 1;
            pfVar3 = pfVar3 + (int)param_5;
            uVar5 = (uint64_t)uVar7;
            fVar12 = fVar19;
            ui_system_buffer_config = fVar16;
          } while (uVar7 != 0);
        }
        pfVar4[-0x20] = fVar19;
        param_2 = param_2 + 1;
        *pfVar4 = fVar17;
        pfVar4 = pfVar4 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18077d60f(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int64_t unaff_RBX;
  float *unaff_RBP;
  int unaff_ESI;
  float *unaff_RDI;
  int64_t lVar6;
  uint64_t in_R9;
  uint64_t uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  float fVar23;
  float fVar24;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000108;
  
  iVar5 = (int)in_R9;
  if (iVar5 == 2) {
    fVar14 = *(float *)(unaff_RBX + 0x21c);
    fVar12 = *(float *)(unaff_RBX + 0x220);
    fVar15 = *(float *)(unaff_RBX + 0x29c);
    fVar17 = *(float *)(unaff_RBX + 0x2a0);
    fVar9 = fVar14;
    fVar10 = fVar12;
    if (unaff_ESI != 0) {
      do {
        fVar9 = *unaff_RBP;
        fVar10 = unaff_RBP[1];
        unaff_RBP = unaff_RBP + 2;
        fVar15 = fVar9 + fVar15 + ui_system_buffer_config;
        fVar17 = fVar10 + fVar17 + ui_system_buffer_config;
        ui_system_buffer_config = -ui_system_buffer_config;
        fVar15 = (fVar15 - fVar14) * *(float *)(unaff_RBX + 0x31c);
        fVar17 = (fVar17 - fVar12) * *(float *)(unaff_RBX + 0x31c);
        *unaff_RDI = fVar15;
        unaff_RDI[1] = fVar17;
        unaff_RDI = unaff_RDI + 2;
        unaff_ESI = unaff_ESI + -1;
        fVar14 = fVar9;
        fVar12 = fVar10;
      } while (unaff_ESI != 0);
    }
    *(float *)(unaff_RBX + 0x21c) = fVar9;
    *(float *)(unaff_RBX + 0x220) = fVar10;
    *(float *)(unaff_RBX + 0x29c) = fVar15;
    *(float *)(unaff_RBX + 0x2a0) = fVar17;
  }
  else if (iVar5 == 6) {
    fVar14 = *(float *)(unaff_RBX + 0x220);
    fVar12 = *(float *)(unaff_RBX + 0x22c);
    fVar15 = *(float *)(unaff_RBX + 0x230);
    fVar17 = *(float *)(unaff_RBX + 0x21c);
    fVar9 = *(float *)(unaff_RBX + 0x224);
    fVar10 = *(float *)(unaff_RBX + 0x228);
    fVar18 = *(float *)(unaff_RBX + 0x29c);
    fVar19 = *(float *)(unaff_RBX + 0x2a0);
    fVar21 = *(float *)(unaff_RBX + 0x2a4);
    fVar22 = *(float *)(unaff_RBX + 0x2a8);
    fVar23 = *(float *)(unaff_RBX + 0x2ac);
    fVar24 = *(float *)(unaff_RBX + 0x2b0);
    if (unaff_ESI != 0) {
      pfVar4 = unaff_RDI + 2;
      pfVar3 = unaff_RBP + 2;
      fVar8 = fVar9;
      fVar20 = fVar10;
      fVar11 = fVar17;
      fStackX_20 = fVar12;
      fStackX_24 = fVar15;
      fStack0000000000000108 = fVar14;
      do {
        fVar13 = *(float *)(unaff_RBX + 0x31c);
        fVar9 = *pfVar3;
        fVar10 = pfVar3[1];
        fVar17 = pfVar3[-2];
        fVar14 = pfVar3[-1];
        fVar18 = ((fVar17 + fVar18 + ui_system_buffer_config) - fVar11) * fVar13;
        fVar19 = ((fVar14 + fVar19 + ui_system_buffer_config) - fStack0000000000000108) * fVar13;
        fVar15 = pfVar3[3];
        fVar12 = pfVar3[2];
        fVar21 = ((fVar9 + fVar21 + ui_system_buffer_config) - fVar8) * fVar13;
        *(float *)((int64_t)unaff_RDI + (-8 - (int64_t)unaff_RBP) + (int64_t)pfVar3) = fVar18;
        pfVar4[-1] = fVar19;
        pfVar3 = pfVar3 + 6;
        fVar22 = ((fVar10 + fVar22 + ui_system_buffer_config) - fVar20) * fVar13;
        *pfVar4 = fVar21;
        fVar23 = fVar12 + fVar23 + ui_system_buffer_config;
        pfVar4[1] = fVar22;
        fVar24 = fVar15 + fVar24 + ui_system_buffer_config;
        ui_system_buffer_config = -ui_system_buffer_config;
        fVar23 = (fVar23 - fStackX_20) * fVar13;
        pfVar4[2] = fVar23;
        fVar24 = (fVar24 - fStackX_24) * fVar13;
        pfVar4[3] = fVar24;
        pfVar4 = pfVar4 + 6;
        unaff_ESI = unaff_ESI + -1;
        fVar8 = fVar9;
        fVar20 = fVar10;
        fVar11 = fVar17;
        fStackX_20 = fVar12;
        fStackX_24 = fVar15;
        fStack0000000000000108 = fVar14;
      } while (unaff_ESI != 0);
    }
    *(float *)(unaff_RBX + 0x21c) = fVar17;
    *(float *)(unaff_RBX + 0x220) = fVar14;
    *(float *)(unaff_RBX + 0x224) = fVar9;
    *(float *)(unaff_RBX + 0x228) = fVar10;
    *(float *)(unaff_RBX + 0x22c) = fVar12;
    *(float *)(unaff_RBX + 0x230) = fVar15;
    *(float *)(unaff_RBX + 0x29c) = fVar18;
    *(float *)(unaff_RBX + 0x2a0) = fVar19;
    *(float *)(unaff_RBX + 0x2a4) = fVar21;
    *(float *)(unaff_RBX + 0x2a8) = fVar22;
    *(float *)(unaff_RBX + 0x2ac) = fVar23;
    *(float *)(unaff_RBX + 0x2b0) = fVar24;
  }
  else if (iVar5 == 8) {
    fVar14 = *(float *)(unaff_RBX + 0x228);
    fVar12 = *(float *)(unaff_RBX + 0x22c);
    fVar15 = *(float *)(unaff_RBX + 0x230);
    fVar17 = *(float *)(unaff_RBX + 0x234);
    fVar9 = *(float *)(unaff_RBX + 0x21c);
    fVar10 = *(float *)(unaff_RBX + 0x220);
    fVar18 = *(float *)(unaff_RBX + 0x224);
    fVar19 = *(float *)(unaff_RBX + 0x29c);
    fVar21 = *(float *)(unaff_RBX + 0x2a0);
    fVar22 = *(float *)(unaff_RBX + 0x2a4);
    fVar23 = *(float *)(unaff_RBX + 0x2a8);
    fVar24 = *(float *)(unaff_RBX + 0x2ac);
    fVar8 = *(float *)(unaff_RBX + 0x2b0);
    fVar20 = *(float *)(unaff_RBX + 0x2b8);
    fStack0000000000000108 = *(float *)(unaff_RBX + 0x2b4);
    fStackX_20 = *(float *)(unaff_RBX + 0x238);
    if (unaff_ESI != 0) {
      pfVar4 = unaff_RDI + 2;
      pfVar3 = unaff_RBP + 2;
      fVar11 = fVar9;
      fVar13 = fVar10;
      fVar16 = fVar18;
      fStackX_24 = fVar15;
      fStack0000000000000028 = fVar12;
      fStack000000000000002c = fVar14;
      fStack0000000000000030 = fVar17;
      do {
        fVar1 = *(float *)(unaff_RBX + 0x31c);
        fVar10 = pfVar3[-1];
        fVar18 = *pfVar3;
        fVar9 = pfVar3[-2];
        fVar12 = pfVar3[2];
        fVar15 = pfVar3[3];
        fVar14 = pfVar3[1];
        fVar21 = ((fVar10 + fVar21 + ui_system_buffer_config) - fVar13) * fVar1;
        fVar19 = ((fVar19 + fVar9 + ui_system_buffer_config) - fVar11) * fVar1;
        fVar22 = ((fVar18 + fVar22 + ui_system_buffer_config) - fVar16) * fVar1;
        fVar17 = pfVar3[4];
        fVar23 = ((fVar14 + fVar23 + ui_system_buffer_config) - fStack000000000000002c) * fVar1;
        fVar24 = ((fVar12 + fVar24 + ui_system_buffer_config) - fStack0000000000000028) * fVar1;
        fVar8 = ((fVar15 + fVar8 + ui_system_buffer_config) - fStackX_24) * fVar1;
        fStack0000000000000108 =
             ((fVar17 + fStack0000000000000108 + ui_system_buffer_config) - fStack0000000000000030) * fVar1;
        fVar2 = pfVar3[5];
        *(float *)((int64_t)pfVar3 + (int64_t)unaff_RDI + (-8 - (int64_t)unaff_RBP)) = fVar19;
        pfVar4[-1] = fVar21;
        pfVar3 = pfVar3 + 8;
        *pfVar4 = fVar22;
        pfVar4[1] = fVar23;
        pfVar4[2] = fVar24;
        fVar20 = fVar20 + fVar2 + ui_system_buffer_config;
        pfVar4[3] = fVar8;
        ui_system_buffer_config = -ui_system_buffer_config;
        pfVar4[4] = fStack0000000000000108;
        fVar20 = (fVar20 - fStackX_20) * fVar1;
        pfVar4[5] = fVar20;
        pfVar4 = pfVar4 + 8;
        unaff_ESI = unaff_ESI + -1;
        fVar11 = fVar9;
        fVar13 = fVar10;
        fVar16 = fVar18;
        fStackX_20 = fVar2;
        fStackX_24 = fVar15;
        fStack0000000000000028 = fVar12;
        fStack000000000000002c = fVar14;
        fStack0000000000000030 = fVar17;
      } while (unaff_ESI != 0);
    }
    *(float *)(unaff_RBX + 0x21c) = fVar9;
    *(float *)(unaff_RBX + 0x238) = fStackX_20;
    *(float *)(unaff_RBX + 0x220) = fVar10;
    *(float *)(unaff_RBX + 0x224) = fVar18;
    *(float *)(unaff_RBX + 0x228) = fVar14;
    *(float *)(unaff_RBX + 0x22c) = fVar12;
    *(float *)(unaff_RBX + 0x230) = fVar15;
    *(float *)(unaff_RBX + 0x234) = fVar17;
    *(float *)(unaff_RBX + 0x29c) = fVar19;
    *(float *)(unaff_RBX + 0x2a0) = fVar21;
    *(float *)(unaff_RBX + 0x2a4) = fVar22;
    *(float *)(unaff_RBX + 0x2a8) = fVar23;
    *(float *)(unaff_RBX + 0x2ac) = fVar24;
    *(float *)(unaff_RBX + 0x2b0) = fVar8;
    *(float *)(unaff_RBX + 0x2b4) = fStack0000000000000108;
    *(float *)(unaff_RBX + 0x2b8) = fVar20;
  }
  else if (0 < iVar5) {
    pfVar4 = (float *)(unaff_RBX + 0x29c);
    lVar6 = (int64_t)unaff_RDI - (int64_t)unaff_RBP;
    uVar7 = in_R9 & 0xffffffff;
    fVar14 = ui_system_buffer_config;
    do {
      fVar12 = pfVar4[-0x20];
      fVar15 = *pfVar4;
      pfVar3 = unaff_RBP;
      fVar17 = fVar12;
      iVar5 = unaff_ESI;
      if (unaff_ESI != 0) {
        do {
          fVar17 = *pfVar3;
          fVar15 = fVar17 + fVar15 + fVar14;
          fVar14 = -fVar14;
          fVar15 = (fVar15 - fVar12) * *(float *)(unaff_RBX + 0x31c);
          *(float *)(lVar6 + (int64_t)pfVar3) = fVar15;
          iVar5 = iVar5 + -1;
          pfVar3 = pfVar3 + in_R9;
          fVar12 = fVar17;
          ui_system_buffer_config = fVar14;
        } while (iVar5 != 0);
      }
      pfVar4[-0x20] = fVar17;
      unaff_RBP = unaff_RBP + 1;
      *pfVar4 = fVar15;
      pfVar4 = pfVar4 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18077d6ff(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int64_t unaff_RBX;
  float *unaff_RBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  int64_t lVar6;
  uint64_t in_R9;
  uint64_t uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  float fVar23;
  float fVar24;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000108;
  
  iVar5 = (int)in_R9;
  if (iVar5 == 6) {
    fVar15 = *(float *)(unaff_RBX + 0x220);
    fVar13 = *(float *)(unaff_RBX + 0x22c);
    fVar12 = *(float *)(unaff_RBX + 0x230);
    fVar17 = *(float *)(unaff_RBX + 0x21c);
    fVar9 = *(float *)(unaff_RBX + 0x224);
    fVar10 = *(float *)(unaff_RBX + 0x228);
    fVar18 = *(float *)(unaff_RBX + 0x29c);
    fVar19 = *(float *)(unaff_RBX + 0x2a0);
    fVar21 = *(float *)(unaff_RBX + 0x2a4);
    fVar22 = *(float *)(unaff_RBX + 0x2a8);
    fVar23 = *(float *)(unaff_RBX + 0x2ac);
    fVar24 = *(float *)(unaff_RBX + 0x2b0);
    if (unaff_ESI != 0) {
      pfVar4 = (float *)(unaff_RDI + 8);
      pfVar3 = unaff_RBP + 2;
      fVar8 = fVar9;
      fVar20 = fVar10;
      fVar11 = fVar17;
      fStackX_20 = fVar13;
      fStackX_24 = fVar12;
      fStack0000000000000108 = fVar15;
      do {
        fVar14 = *(float *)(unaff_RBX + 0x31c);
        fVar9 = *pfVar3;
        fVar10 = pfVar3[1];
        fVar17 = pfVar3[-2];
        fVar15 = pfVar3[-1];
        fVar18 = ((fVar17 + fVar18 + ui_system_buffer_config) - fVar11) * fVar14;
        fVar19 = ((fVar15 + fVar19 + ui_system_buffer_config) - fStack0000000000000108) * fVar14;
        fVar12 = pfVar3[3];
        fVar13 = pfVar3[2];
        fVar21 = ((fVar9 + fVar21 + ui_system_buffer_config) - fVar8) * fVar14;
        *(float *)((unaff_RDI - (int64_t)unaff_RBP) + -8 + (int64_t)pfVar3) = fVar18;
        pfVar4[-1] = fVar19;
        pfVar3 = pfVar3 + 6;
        fVar22 = ((fVar10 + fVar22 + ui_system_buffer_config) - fVar20) * fVar14;
        *pfVar4 = fVar21;
        fVar23 = fVar13 + fVar23 + ui_system_buffer_config;
        pfVar4[1] = fVar22;
        fVar24 = fVar12 + fVar24 + ui_system_buffer_config;
        ui_system_buffer_config = -ui_system_buffer_config;
        fVar23 = (fVar23 - fStackX_20) * fVar14;
        pfVar4[2] = fVar23;
        fVar24 = (fVar24 - fStackX_24) * fVar14;
        pfVar4[3] = fVar24;
        pfVar4 = pfVar4 + 6;
        unaff_ESI = unaff_ESI + -1;
        fVar8 = fVar9;
        fVar20 = fVar10;
        fVar11 = fVar17;
        fStackX_20 = fVar13;
        fStackX_24 = fVar12;
        fStack0000000000000108 = fVar15;
      } while (unaff_ESI != 0);
    }
    *(float *)(unaff_RBX + 0x21c) = fVar17;
    *(float *)(unaff_RBX + 0x220) = fVar15;
    *(float *)(unaff_RBX + 0x224) = fVar9;
    *(float *)(unaff_RBX + 0x228) = fVar10;
    *(float *)(unaff_RBX + 0x22c) = fVar13;
    *(float *)(unaff_RBX + 0x230) = fVar12;
    *(float *)(unaff_RBX + 0x29c) = fVar18;
    *(float *)(unaff_RBX + 0x2a0) = fVar19;
    *(float *)(unaff_RBX + 0x2a4) = fVar21;
    *(float *)(unaff_RBX + 0x2a8) = fVar22;
    *(float *)(unaff_RBX + 0x2ac) = fVar23;
    *(float *)(unaff_RBX + 0x2b0) = fVar24;
  }
  else if (iVar5 == 8) {
    fVar15 = *(float *)(unaff_RBX + 0x228);
    fVar13 = *(float *)(unaff_RBX + 0x22c);
    fVar12 = *(float *)(unaff_RBX + 0x230);
    fVar17 = *(float *)(unaff_RBX + 0x234);
    fVar9 = *(float *)(unaff_RBX + 0x21c);
    fVar10 = *(float *)(unaff_RBX + 0x220);
    fVar18 = *(float *)(unaff_RBX + 0x224);
    fVar19 = *(float *)(unaff_RBX + 0x29c);
    fVar21 = *(float *)(unaff_RBX + 0x2a0);
    fVar22 = *(float *)(unaff_RBX + 0x2a4);
    fVar23 = *(float *)(unaff_RBX + 0x2a8);
    fVar24 = *(float *)(unaff_RBX + 0x2ac);
    fVar8 = *(float *)(unaff_RBX + 0x2b0);
    fVar20 = *(float *)(unaff_RBX + 0x2b8);
    fStack0000000000000108 = *(float *)(unaff_RBX + 0x2b4);
    fStackX_20 = *(float *)(unaff_RBX + 0x238);
    if (unaff_ESI != 0) {
      pfVar4 = (float *)(unaff_RDI + 8);
      pfVar3 = unaff_RBP + 2;
      fVar11 = fVar9;
      fVar14 = fVar10;
      fVar16 = fVar18;
      fStackX_24 = fVar12;
      fStack0000000000000028 = fVar13;
      fStack000000000000002c = fVar15;
      fStack0000000000000030 = fVar17;
      do {
        fVar1 = *(float *)(unaff_RBX + 0x31c);
        fVar10 = pfVar3[-1];
        fVar18 = *pfVar3;
        fVar9 = pfVar3[-2];
        fVar13 = pfVar3[2];
        fVar12 = pfVar3[3];
        fVar15 = pfVar3[1];
        fVar21 = ((fVar10 + fVar21 + ui_system_buffer_config) - fVar14) * fVar1;
        fVar19 = ((fVar19 + fVar9 + ui_system_buffer_config) - fVar11) * fVar1;
        fVar22 = ((fVar18 + fVar22 + ui_system_buffer_config) - fVar16) * fVar1;
        fVar17 = pfVar3[4];
        fVar23 = ((fVar15 + fVar23 + ui_system_buffer_config) - fStack000000000000002c) * fVar1;
        fVar24 = ((fVar13 + fVar24 + ui_system_buffer_config) - fStack0000000000000028) * fVar1;
        fVar8 = ((fVar12 + fVar8 + ui_system_buffer_config) - fStackX_24) * fVar1;
        fStack0000000000000108 =
             ((fVar17 + fStack0000000000000108 + ui_system_buffer_config) - fStack0000000000000030) * fVar1;
        fVar2 = pfVar3[5];
        *(float *)((int64_t)pfVar3 + (unaff_RDI - (int64_t)unaff_RBP) + -8) = fVar19;
        pfVar4[-1] = fVar21;
        pfVar3 = pfVar3 + 8;
        *pfVar4 = fVar22;
        pfVar4[1] = fVar23;
        pfVar4[2] = fVar24;
        fVar20 = fVar20 + fVar2 + ui_system_buffer_config;
        pfVar4[3] = fVar8;
        ui_system_buffer_config = -ui_system_buffer_config;
        pfVar4[4] = fStack0000000000000108;
        fVar20 = (fVar20 - fStackX_20) * fVar1;
        pfVar4[5] = fVar20;
        pfVar4 = pfVar4 + 8;
        unaff_ESI = unaff_ESI + -1;
        fVar11 = fVar9;
        fVar14 = fVar10;
        fVar16 = fVar18;
        fStackX_20 = fVar2;
        fStackX_24 = fVar12;
        fStack0000000000000028 = fVar13;
        fStack000000000000002c = fVar15;
        fStack0000000000000030 = fVar17;
      } while (unaff_ESI != 0);
    }
    *(float *)(unaff_RBX + 0x21c) = fVar9;
    *(float *)(unaff_RBX + 0x238) = fStackX_20;
    *(float *)(unaff_RBX + 0x220) = fVar10;
    *(float *)(unaff_RBX + 0x224) = fVar18;
    *(float *)(unaff_RBX + 0x228) = fVar15;
    *(float *)(unaff_RBX + 0x22c) = fVar13;
    *(float *)(unaff_RBX + 0x230) = fVar12;
    *(float *)(unaff_RBX + 0x234) = fVar17;
    *(float *)(unaff_RBX + 0x29c) = fVar19;
    *(float *)(unaff_RBX + 0x2a0) = fVar21;
    *(float *)(unaff_RBX + 0x2a4) = fVar22;
    *(float *)(unaff_RBX + 0x2a8) = fVar23;
    *(float *)(unaff_RBX + 0x2ac) = fVar24;
    *(float *)(unaff_RBX + 0x2b0) = fVar8;
    *(float *)(unaff_RBX + 0x2b4) = fStack0000000000000108;
    *(float *)(unaff_RBX + 0x2b8) = fVar20;
  }
  else if (0 < iVar5) {
    pfVar4 = (float *)(unaff_RBX + 0x29c);
    lVar6 = unaff_RDI - (int64_t)unaff_RBP;
    uVar7 = in_R9 & 0xffffffff;
    fVar15 = ui_system_buffer_config;
    do {
      fVar13 = pfVar4[-0x20];
      fVar12 = *pfVar4;
      pfVar3 = unaff_RBP;
      fVar17 = fVar13;
      iVar5 = unaff_ESI;
      if (unaff_ESI != 0) {
        do {
          fVar17 = *pfVar3;
          fVar12 = fVar17 + fVar12 + fVar15;
          fVar15 = -fVar15;
          fVar12 = (fVar12 - fVar13) * *(float *)(unaff_RBX + 0x31c);
          *(float *)(lVar6 + (int64_t)pfVar3) = fVar12;
          iVar5 = iVar5 + -1;
          pfVar3 = pfVar3 + in_R9;
          fVar13 = fVar17;
          ui_system_buffer_config = fVar15;
        } while (iVar5 != 0);
      }
      pfVar4[-0x20] = fVar17;
      unaff_RBP = unaff_RBP + 1;
      *pfVar4 = fVar12;
      pfVar4 = pfVar4 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return 0;
}



uint64_t FUN_18077dd3b(void)

{
  return 0;
}



uint64_t FUN_18077dd5d(void)

{
  return 0;
}





