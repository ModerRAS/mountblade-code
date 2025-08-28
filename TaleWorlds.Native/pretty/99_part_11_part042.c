#include "TaleWorlds.Native.Split.h"

// 99_part_11_part042.c - 3 个函数

// 函数: void FUN_1807a903c(int32_t param_1,float param_2,int32_t param_3,int32_t param_4)
void FUN_1807a903c(int32_t param_1,float param_2,int32_t param_3,int32_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int64_t lVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  int iVar34;
  int iVar35;
  uint64_t *puVar36;
  float *pfVar37;
  float *pfVar38;
  int64_t unaff_RBX;
  uint64_t *puVar39;
  float *unaff_RDI;
  float *pfVar40;
  int64_t lVar41;
  float *in_R10;
  int64_t unaff_R12;
  char unaff_R13B;
  int unaff_R14D;
  int unaff_R15D;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float unaff_XMM7_Da;
  float fVar46;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  float unaff_XMM15_Da;
  float fStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  uint64_t in_stack_00000170;
  
  fStack0000000000000048 = unaff_XMM10_Da;
  uStack000000000000004c = param_1;
  uStack0000000000000050 = param_3;
  fStack0000000000000054 = unaff_XMM7_Da;
  fStack0000000000000058 = param_2;
  uStack000000000000005c = param_4;
  if (unaff_R15D != 0) {
    iVar34 = *(int *)(unaff_RBX + 0xda0);
    do {
      fVar45 = fStack0000000000000048;
      unaff_R15D = unaff_R15D + -1;
      if (iVar34 == *(int *)(unaff_RBX + 0xd98)) {
        iVar34 = *(int *)(unaff_RBX + 0xd9c);
        fVar46 = unaff_XMM9_Da;
        if (unaff_XMM11_Da <
            (*(float *)(unaff_RBX + 0xd20 + (int64_t)((iVar34 + 0x1d) % 0x1e) * 4) + *in_R10 +
             *(float *)(unaff_RBX + 0xd20 + (int64_t)((iVar34 + 0x1c) % 0x1e) * 4) +
            *(float *)(unaff_RBX + 0xd20 + (int64_t)((iVar34 + 0x1b) % 0x1e) * 4)) /
            (float)(*(int *)(unaff_RBX + 0xd98) * 4)) {
          fVar46 = (float)log10f();
          fVar46 = fVar46 * 10.0;
        }
        fVar46 = fVar46 - 0.691;
        fStack0000000000000054 = fVar46;
        if ((unaff_R14D == 1) && (3 < *(int *)(unaff_RBX + 0xdac))) {
          iVar34 = FUN_1807a8d90();
          if (iVar34 != 0) goto LAB_1807a9a7b;
          uStack000000000000005c =
               FUN_1807a8500(unaff_RBX + 0xdb8,*(int32_t *)(unaff_RBX + 0xdb0),0x41200000);
          if (fVar45 <= fVar46) {
            fStack0000000000000048 = fVar46;
          }
        }
        fVar45 = *(float *)(unaff_RBX + 0xd24);
        fVar46 = *(float *)(unaff_RBX + 0xd20);
        iVar34 = *(int *)(unaff_RBX + 0xd98);
        fVar3 = *(float *)(unaff_RBX + 0xd28);
        fVar4 = *(float *)(unaff_RBX + 0xd2c);
        fVar5 = *(float *)(unaff_RBX + 0xd30);
        fVar6 = *(float *)(unaff_RBX + 0xd34);
        fVar7 = *(float *)(unaff_RBX + 0xd38);
        fVar8 = *(float *)(unaff_RBX + 0xd3c);
        fVar9 = *(float *)(unaff_RBX + 0xd40);
        fVar44 = *(float *)(unaff_RBX + 0xd44);
        fVar10 = *(float *)(unaff_RBX + 0xd48);
        fVar11 = *(float *)(unaff_RBX + 0xd4c);
        fVar42 = *(float *)(unaff_RBX + 0xd50);
        fVar12 = *(float *)(unaff_RBX + 0xd54);
        fVar13 = *(float *)(unaff_RBX + 0xd58);
        fVar14 = *(float *)(unaff_RBX + 0xd5c);
        fVar15 = *(float *)(unaff_RBX + 0xd60);
        fVar16 = *(float *)(unaff_RBX + 0xd64);
        fVar17 = *(float *)(unaff_RBX + 0xd68);
        fVar18 = *(float *)(unaff_RBX + 0xd6c);
        fVar19 = *(float *)(unaff_RBX + 0xd70);
        fVar20 = *(float *)(unaff_RBX + 0xd74);
        fVar21 = *(float *)(unaff_RBX + 0xd78);
        fVar22 = *(float *)(unaff_RBX + 0xd7c);
        fVar23 = *(float *)(unaff_RBX + 0xd80);
        fVar24 = *(float *)(unaff_RBX + 0xd84);
        fVar25 = *(float *)(unaff_RBX + 0xd88);
        fVar26 = *(float *)(unaff_RBX + 0xd8c);
        fVar27 = *(float *)(unaff_RBX + 0xd90);
        fVar28 = *(float *)(unaff_RBX + 0xd94);
        if ((unaff_R14D == 1) && (0x1d < *(int *)(unaff_RBX + 0xdac))) {
          iVar35 = FUN_1807a8d90();
          if (iVar35 != 0) goto LAB_1807a9a7b;
          FUN_1807a8ac0(unaff_RBX + 0xdc8,*(int32_t *)(unaff_RBX + 0xdb4),unaff_XMM15_Da,
                        0x41200000,0x42be0000);
        }
        fVar43 = unaff_XMM9_Da;
        if (unaff_XMM11_Da <
            (fVar45 + fVar46 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7 + fVar8 + fVar9 + fVar44 +
             fVar10 + fVar11 + fVar42 + fVar12 + fVar13 + fVar14 + fVar15 + fVar16 + fVar17 + fVar18
             + fVar19 + fVar20 + fVar21 + fVar22 + fVar23 + fVar24 + fVar25 + fVar26 + fVar27 +
            fVar28) / (float)(iVar34 * 0x1e)) {
          fVar45 = (float)log10f();
          fVar43 = fVar45 * 10.0;
        }
        fStack0000000000000058 = fVar43 - 0.691;
        if (unaff_R14D == 1) {
          FUN_1807a8820(unaff_RBX + 0xdb8,0xc2700000,0x40c00000,0,0x42);
          unaff_R13B = '\x01';
        }
        *(int32_t *)(unaff_RBX + 0xda0) = 0;
        iVar34 = (*(int *)(unaff_RBX + 0xd9c) + 1) % 0x1e;
        *(int *)(unaff_RBX + 0xd9c) = iVar34;
        *(int32_t *)(unaff_RBX + 0xd20 + (int64_t)iVar34 * 4) = 0;
        in_R10 = (float *)(unaff_RBX + ((int64_t)*(int *)(unaff_RBX + 0xd9c) + 0x348) * 4);
        if (*(int *)(unaff_RBX + 0xdac) < 0x1e) {
          *(int *)(unaff_RBX + 0xdac) = *(int *)(unaff_RBX + 0xdac) + 1;
        }
      }
      if (0 < unaff_R12) {
        pfVar40 = (float *)(unaff_RBX + 0xddc);
        pfVar38 = (float *)(unaff_RBX + 0x7c4);
        pfVar37 = (float *)(unaff_RBX + 0x3a4);
        lVar41 = unaff_R12;
        do {
          lVar29 = *(int64_t *)(pfVar37 + 1);
          fVar45 = pfVar37[-1];
          fVar46 = *pfVar37;
          fVar3 = *(float *)(lVar29 + 0x18);
          fVar4 = *(float *)(lVar29 + 0x14);
          fVar44 = (*unaff_RDI - fVar45 * *(float *)(lVar29 + 0x1c)) -
                   fVar46 * *(float *)(lVar29 + 0x20);
          fVar5 = *(float *)(lVar29 + 0x10);
          *pfVar37 = fVar45;
          pfVar37[-1] = fVar44;
          lVar29 = *(int64_t *)(pfVar37 + 5);
          fVar6 = pfVar37[3];
          fVar7 = pfVar37[4];
          fVar8 = *(float *)(lVar29 + 0x18);
          fVar9 = *(float *)(lVar29 + 0x14);
          fVar46 = ((fVar45 * fVar4 + fVar44 * fVar5 + fVar46 * fVar3) -
                   fVar6 * *(float *)(lVar29 + 0x1c)) - fVar7 * *(float *)(lVar29 + 0x20);
          fVar45 = *(float *)(lVar29 + 0x10);
          pfVar37[4] = fVar6;
          pfVar37[3] = fVar46;
          fVar45 = fVar6 * fVar9 + fVar46 * fVar45 + fVar7 * fVar8;
          *in_R10 = fVar45 * fVar45 * *pfVar40 + *in_R10;
          if (unaff_R14D == 1) {
            fVar45 = *unaff_RDI;
            fVar46 = pfVar38[-9];
            fVar3 = pfVar38[-8];
            fVar4 = pfVar38[-7];
            fVar5 = pfVar38[-6];
            fVar6 = pfVar38[-5];
            fVar7 = pfVar38[-4];
            fVar8 = pfVar38[-3];
            fVar9 = pfVar38[-2];
            fVar44 = pfVar38[-1];
            fVar10 = *pfVar38;
            fVar11 = pfVar38[1];
            pfVar38[-8] = fVar46;
            pfVar38[-7] = fVar3;
            pfVar38[-6] = fVar4;
            pfVar38[-5] = fVar5;
            pfVar38[-4] = fVar6;
            pfVar38[-3] = fVar7;
            pfVar38[1] = fVar10;
            *pfVar38 = fVar44;
            pfVar38[-1] = fVar9;
            pfVar38[-2] = fVar8;
            pfVar38[-9] = fVar45;
            fVar42 = ABS((((((((((fVar45 * 0.0017089844 + fVar46 * 0.010986328) - fVar3 * 0.01965332
                                ) + fVar4 * 0.033203125) - fVar5 * 0.059448242) + fVar6 * 0.1373291
                             + fVar7 * 0.97216797) - fVar8 * 0.10229492) + fVar9 * 0.047607422) -
                          fVar44 * 0.026611328) + fVar10 * 0.014892578) - fVar11 * 0.008300781);
            if (unaff_XMM13_Da <= fVar42) {
              unaff_XMM13_Da = fVar42;
            }
            fVar42 = ABS((((((((((fVar46 * 0.029296875 - fVar45 * 0.029174805) - fVar3 * 0.051757813
                                ) + fVar4 * 0.08911133) - fVar5 * 0.1665039) + fVar6 * 0.4650879 +
                             fVar7 * 0.77978516) - fVar8 * 0.20031738) + fVar9 * 0.1015625) -
                          fVar44 * 0.05822754) + fVar10 * 0.033081055) - fVar11 * 0.018920898);
            if (unaff_XMM13_Da <= fVar42) {
              unaff_XMM13_Da = fVar42;
            }
            fVar42 = ABS((((((((((fVar46 * 0.033081055 - fVar45 * 0.018920898) - fVar3 * 0.05822754)
                               + fVar4 * 0.1015625) - fVar5 * 0.20031738) + fVar6 * 0.77978516 +
                             fVar7 * 0.4650879) - fVar8 * 0.1665039) + fVar9 * 0.08911133) -
                          fVar44 * 0.051757813) + fVar10 * 0.029296875) - fVar11 * 0.029174805);
            if (unaff_XMM13_Da <= fVar42) {
              unaff_XMM13_Da = fVar42;
            }
            fVar45 = ABS(((((((((fVar46 * 0.014892578 - fVar45 * 0.008300781) - fVar3 * 0.026611328)
                              + fVar4 * 0.047607422) - fVar5 * 0.10229492) + fVar6 * 0.97216797 +
                            fVar7 * 0.1373291) - fVar8 * 0.059448242) + fVar9 * 0.033203125) -
                         fVar44 * 0.01965332) + fVar10 * 0.010986328 + fVar11 * 0.0017089844);
            if (unaff_XMM13_Da <= fVar45) {
              unaff_XMM13_Da = fVar45;
            }
          }
          unaff_RDI = unaff_RDI + 1;
          pfVar40 = pfVar40 + 1;
          pfVar37 = pfVar37 + 8;
          pfVar38 = pfVar38 + 0xb;
          lVar41 = lVar41 + -1;
        } while (lVar41 != 0);
        unaff_XMM11_Da = 0.0;
        unaff_XMM9_Da = -80.0;
        unaff_XMM15_Da = 20.0;
      }
      *(int *)(unaff_RBX + 0xda0) = *(int *)(unaff_RBX + 0xda0) + 1;
      iVar34 = *(int *)(unaff_RBX + 0xda0);
    } while (unaff_R15D != 0);
  }
  fVar45 = fStack0000000000000048;
  *(float *)(unaff_RBX + 0x218) = fStack0000000000000054;
  *(float *)(unaff_RBX + 0x21c) = fStack0000000000000058;
  *(int32_t *)(unaff_RBX + 0x220) = uStack000000000000005c;
  *(int32_t *)(unaff_RBX + 0x224) = uStack000000000000004c;
  *(int32_t *)(unaff_RBX + 0x228) = uStack0000000000000050;
  if (unaff_XMM11_Da < unaff_XMM13_Da) {
    fVar46 = (float)log10f();
    unaff_XMM9_Da = fVar46 * unaff_XMM15_Da;
  }
  *(float *)(unaff_RBX + 0x334) = unaff_XMM9_Da;
  *(float *)(unaff_RBX + 0x338) = fVar45;
  *(float *)(unaff_RBX + 0xda4) = unaff_XMM13_Da;
  *(float *)(unaff_RBX + 0xda8) = fVar45;
  if (unaff_R13B != '\0') {
    lVar41 = 2;
    puVar36 = (uint64_t *)&stack0x00000060;
    puVar39 = (uint64_t *)(unaff_RBX + 0x22c);
    do {
      puVar1 = puVar39 + 0x10;
      uVar30 = puVar36[1];
      uVar31 = puVar36[2];
      uVar32 = puVar36[3];
      puVar2 = puVar36 + 0x10;
      *puVar39 = *puVar36;
      puVar39[1] = uVar30;
      uVar30 = puVar36[4];
      uVar33 = puVar36[5];
      puVar39[2] = uVar31;
      puVar39[3] = uVar32;
      uVar31 = puVar36[6];
      uVar32 = puVar36[7];
      puVar39[4] = uVar30;
      puVar39[5] = uVar33;
      uVar30 = puVar36[8];
      uVar33 = puVar36[9];
      puVar39[6] = uVar31;
      puVar39[7] = uVar32;
      uVar31 = puVar36[10];
      uVar32 = puVar36[0xb];
      puVar39[8] = uVar30;
      puVar39[9] = uVar33;
      uVar30 = puVar36[0xc];
      uVar33 = puVar36[0xd];
      puVar39[10] = uVar31;
      puVar39[0xb] = uVar32;
      uVar31 = puVar36[0xe];
      uVar32 = puVar36[0xf];
      puVar39[0xc] = uVar30;
      puVar39[0xd] = uVar33;
      puVar39[0xe] = uVar31;
      puVar39[0xf] = uVar32;
      lVar41 = lVar41 + -1;
      puVar36 = puVar2;
      puVar39 = puVar1;
    } while (lVar41 != 0);
    *puVar1 = *puVar2;
  }
LAB_1807a9a7b:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000170 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807a9b00(int64_t param_1)
void FUN_1807a9b00(int64_t param_1)

{
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x21c,0,0x120);
}






// 函数: void FUN_1807a9d70(int64_t param_1)
void FUN_1807a9d70(int64_t param_1)

{
  FUN_1807a7f20(param_1 + 0xdb8);
  FUN_1807a7f20(param_1 + 0xdc8);
  *(uint64_t *)(param_1 + 0xdb0) = 0;
  *(int32_t *)(param_1 + 0x220) = 0xc2a00000;
  *(int32_t *)(param_1 + 0x224) = 0xc2a00000;
  *(int32_t *)(param_1 + 0x228) = 0xc2a00000;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x22c,0,0x108);
}



uint64_t FUN_1807a9e00(int64_t *param_1)

{
  int64_t lVar1;
  int *piVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  
  lVar1 = *param_1;
  iVar4 = 0;
  lVar3 = *(int64_t *)(lVar1 + 0xe8);
  *(int32_t *)(lVar1 + 0x238) = 0;
  if (0 < *(int *)(lVar3 + 0x60)) {
    lVar5 = 0;
    do {
      piVar2 = *(int **)(lVar5 + *(int64_t *)(lVar3 + 0x68));
      if (*piVar2 == 0) {
        func_0x000180762a70(lVar1,iVar4,piVar2[0xe]);
      }
      else if (*piVar2 == 2) {
        func_0x000180762600(lVar1,iVar4,piVar2[0xc] != 0);
      }
      lVar3 = *(int64_t *)(lVar1 + 0xe8);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(lVar3 + 0x60));
  }
  *(int32_t *)(lVar1 + 0x228) = 0;
  *(int8_t *)(lVar1 + 0x22c) = 1;
  return 0;
}



uint64_t FUN_1807a9e25(void)

{
  int iVar1;
  int64_t in_RAX;
  int unaff_EBX;
  int64_t lVar2;
  int64_t unaff_RDI;
  
  lVar2 = 0;
  do {
    iVar1 = **(int **)(lVar2 + *(int64_t *)(in_RAX + 0x68));
    if (iVar1 == 0) {
      func_0x000180762a70();
    }
    else if (iVar1 == 2) {
      func_0x000180762600();
    }
    in_RAX = *(int64_t *)(unaff_RDI + 0xe8);
    unaff_EBX = unaff_EBX + 1;
    lVar2 = lVar2 + 8;
  } while (unaff_EBX < *(int *)(in_RAX + 0x60));
  *(int32_t *)(unaff_RDI + 0x228) = 0;
  *(int8_t *)(unaff_RDI + 0x22c) = 1;
  return 0;
}



uint64_t FUN_1807a9e7d(void)

{
  int64_t unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 0x228) = 0;
  *(int8_t *)(unaff_RDI + 0x22c) = 1;
  return 0;
}



uint64_t FUN_1807a9f00(int64_t *param_1,int param_2,float *param_3,int64_t param_4)

{
  int64_t lVar1;
  float fVar2;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(float *)(lVar1 + 0x230);
    if (param_4 != 0) {
      fVar2 = *(float *)(lVar1 + 0x230);
LAB_1807a9f68:
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_4,0x20,&unknown_var_2048_ptr,(double)fVar2);
    }
  }
  else if (param_2 == 1) {
    *param_3 = *(float *)(lVar1 + 0x234);
    if (param_4 != 0) {
      fVar2 = *(float *)(lVar1 + 0x234);
      goto LAB_1807a9f68;
    }
  }
  else if (param_2 == 2) {
    *param_3 = SQRT(*(float *)(lVar1 + 0x228));
    if (param_4 != 0) {
      fVar2 = *(float *)(lVar1 + 0x228);
      goto LAB_1807a9f68;
    }
  }
  return 0;
}



uint64_t
FUN_1807a9fb0(int64_t *param_1,int param_2,uint64_t *param_3,int32_t *param_4,int64_t param_5
             )

{
  int64_t lVar1;
  void *puVar2;
  
  if (param_2 == 3) {
    lVar1 = *param_1;
    *param_3 = (int *)(lVar1 + 0x238);
    *param_4 = 4;
    if (param_5 != 0) {
      puVar2 = &unknown_var_2336_ptr;
      if (*(int *)(lVar1 + 0x238) != 0) {
        puVar2 = &unknown_var_2328_ptr;
      }
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_5,0x20,&unknown_var_552_ptr,puVar2);
    }
  }
  return 0;
}






