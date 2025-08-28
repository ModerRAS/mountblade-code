#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part082.c - 6 个函数

// 函数: void FUN_1802d38cc(int32_t param_1)
void FUN_1802d38cc(int32_t param_1)

{
  uint64_t *puVar1;
  byte bVar2;
  int64_t lVar3;
  bool bVar4;
  byte *pbVar5;
  uint64_t *puVar6;
  int32_t *in_RCX;
  int32_t *puVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  uint uVar9;
  uint64_t uVar10;
  int iVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  int *unaff_R12;
  int64_t unaff_R15;
  
  puVar1 = (uint64_t *)(in_RCX + 8);
  *in_RCX = param_1;
  RenderingSystem_CameraSystem(puVar1,*(uint64_t *)(in_RCX + 0xc));
  uVar10 = 0;
  *puVar1 = puVar1;
  *(uint64_t **)(in_RCX + 10) = puVar1;
  puVar7 = (int32_t *)(unaff_R15 + 4);
  *(uint64_t *)(in_RCX + 0xc) = 0;
  *(int8_t *)(in_RCX + 0xe) = 0;
  *(uint64_t *)(in_RCX + 0x10) = 0;
  lVar8 = 6;
  *(uint64_t *)(unaff_R15 + 0x50) = 0;
  do {
    *puVar7 = *(int32_t *)((unaff_RBX - unaff_R15) + 0x1cc + (int64_t)puVar7);
    puVar7 = puVar7 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar11 = *unaff_R12;
  *(int *)(unaff_R15 + 0x50) = iVar11;
  if (0 < iVar11) {
    do {
      lVar8 = *(int64_t *)
               (*(int64_t *)(unaff_R12 + (uVar10 >> 10) * 2 + 2) +
               (uint64_t)(uint)((int)uVar10 + (int)(uVar10 >> 10) * -0x400) * 8);
      puVar6 = puVar1;
      if (*(uint64_t **)(in_RCX + 0xc) != (uint64_t *)0x0) {
        puVar12 = *(uint64_t **)(in_RCX + 0xc);
        do {
          if (*(int *)(lVar8 + 0x90) == 0) {
            puVar13 = (uint64_t *)puVar12[1];
            bVar4 = false;
          }
          else {
            if (*(int *)(puVar12 + 6) == 0) {
              bVar4 = true;
            }
            else {
              pbVar5 = *(byte **)(lVar8 + 0x88);
              lVar14 = puVar12[5] - (int64_t)pbVar5;
              do {
                uVar9 = (uint)pbVar5[lVar14];
                iVar11 = *pbVar5 - uVar9;
                if (*pbVar5 != uVar9) break;
                pbVar5 = pbVar5 + 1;
              } while (uVar9 != 0);
              bVar4 = 0 < iVar11;
              if (iVar11 < 1) {
                puVar13 = (uint64_t *)puVar12[1];
                goto LAB_1802d39cc;
              }
            }
            puVar13 = (uint64_t *)*puVar12;
          }
LAB_1802d39cc:
          if (bVar4) {
            puVar12 = puVar6;
          }
          puVar6 = puVar12;
          puVar12 = puVar13;
        } while (puVar13 != (uint64_t *)0x0);
      }
      if (puVar6 == puVar1) {
LAB_1802d3a1a:
        puVar6 = (uint64_t *)FUN_1802d8990(puVar1,&stack0x00000060);
        puVar6 = (uint64_t *)*puVar6;
      }
      else if (*(int *)(puVar6 + 6) != 0) {
        if (*(int *)(lVar8 + 0x90) != 0) {
          pbVar5 = (byte *)puVar6[5];
          lVar14 = *(int64_t *)(lVar8 + 0x88) - (int64_t)pbVar5;
          do {
            bVar2 = *pbVar5;
            uVar9 = (uint)pbVar5[lVar14];
            if (bVar2 != uVar9) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar9 != 0);
          if ((int)(bVar2 - uVar9) < 1) goto LAB_1802d3a32;
        }
        goto LAB_1802d3a1a;
      }
LAB_1802d3a32:
      lVar14 = *(int64_t *)(lVar8 + 0x60);
      lVar3 = *(int64_t *)(lVar8 + 0x58);
      *(int *)(puVar6 + 8) = *(int *)(puVar6 + 8) + 1;
      *(int *)(puVar6 + 9) = *(int *)(puVar6 + 9) + (int)((lVar14 - lVar3) / 0x70);
      *(byte *)(puVar6 + 10) = *(byte *)(*(int64_t *)(lVar8 + 0x48) + 0x21) & 1;
      if (*(int64_t *)(lVar8 + 0x120) != 0) {
        *(int32_t *)((int64_t)puVar6 + 0x54) =
             *(int32_t *)(*(int64_t *)(lVar8 + 0x120) + 0x140);
      }
      if (*(char *)(lVar8 + 0x78) != '\0') {
        lVar14 = *(int64_t *)(lVar8 + 0x60);
        lVar8 = *(int64_t *)(lVar8 + 0x58);
        *(int *)((int64_t)puVar6 + 0x44) = *(int *)((int64_t)puVar6 + 0x44) + 1;
        *(int *)((int64_t)puVar6 + 0x4c) =
             *(int *)((int64_t)puVar6 + 0x4c) + (int)((lVar14 - lVar8) / 0x70);
        *(int *)(unaff_R15 + 0x54) = *(int *)(unaff_R15 + 0x54) + 1;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar9;
    } while ((int)uVar9 < *(int *)(unaff_R15 + 0x50));
  }
  return;
}






// 函数: void FUN_1802d3933(void)
void FUN_1802d3933(void)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  byte *pbVar5;
  uint64_t *puVar6;
  uint uVar7;
  uint unaff_ESI;
  int iVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t unaff_R12;
  uint64_t *unaff_R14;
  int64_t unaff_R15;
  
  do {
    lVar2 = *(int64_t *)
             (*(int64_t *)(unaff_R12 + 8 + (uint64_t)(unaff_ESI >> 10) * 8) +
             (uint64_t)(unaff_ESI + (unaff_ESI >> 10) * -0x400) * 8);
    puVar6 = unaff_R14;
    if ((uint64_t *)unaff_R14[2] != (uint64_t *)0x0) {
      puVar9 = (uint64_t *)unaff_R14[2];
      do {
        if (*(int *)(lVar2 + 0x90) == 0) {
          puVar10 = (uint64_t *)puVar9[1];
          bVar4 = false;
        }
        else {
          if (*(int *)(puVar9 + 6) == 0) {
            bVar4 = true;
          }
          else {
            pbVar5 = *(byte **)(lVar2 + 0x88);
            lVar11 = puVar9[5] - (int64_t)pbVar5;
            do {
              uVar7 = (uint)pbVar5[lVar11];
              iVar8 = *pbVar5 - uVar7;
              if (*pbVar5 != uVar7) break;
              pbVar5 = pbVar5 + 1;
            } while (uVar7 != 0);
            bVar4 = 0 < iVar8;
            if (iVar8 < 1) {
              puVar10 = (uint64_t *)puVar9[1];
              goto LAB_1802d39cc;
            }
          }
          puVar10 = (uint64_t *)*puVar9;
        }
LAB_1802d39cc:
        if (bVar4) {
          puVar9 = puVar6;
        }
        puVar6 = puVar9;
        puVar9 = puVar10;
      } while (puVar10 != (uint64_t *)0x0);
    }
    if (puVar6 == unaff_R14) {
LAB_1802d3a1a:
      puVar6 = (uint64_t *)FUN_1802d8990();
      puVar6 = (uint64_t *)*puVar6;
    }
    else if (*(int *)(puVar6 + 6) != 0) {
      if (*(int *)(lVar2 + 0x90) != 0) {
        pbVar5 = (byte *)puVar6[5];
        lVar11 = *(int64_t *)(lVar2 + 0x88) - (int64_t)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar7 = (uint)pbVar5[lVar11];
          if (bVar1 != uVar7) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar7 != 0);
        if ((int)(bVar1 - uVar7) < 1) goto LAB_1802d3a32;
      }
      goto LAB_1802d3a1a;
    }
LAB_1802d3a32:
    lVar11 = *(int64_t *)(lVar2 + 0x60);
    lVar3 = *(int64_t *)(lVar2 + 0x58);
    *(int *)(puVar6 + 8) = *(int *)(puVar6 + 8) + 1;
    *(int *)(puVar6 + 9) = *(int *)(puVar6 + 9) + (int)((lVar11 - lVar3) / 0x70);
    *(byte *)(puVar6 + 10) = *(byte *)(*(int64_t *)(lVar2 + 0x48) + 0x21) & 1;
    if (*(int64_t *)(lVar2 + 0x120) != 0) {
      *(int32_t *)((int64_t)puVar6 + 0x54) =
           *(int32_t *)(*(int64_t *)(lVar2 + 0x120) + 0x140);
    }
    if (*(char *)(lVar2 + 0x78) != '\0') {
      lVar11 = *(int64_t *)(lVar2 + 0x60);
      lVar2 = *(int64_t *)(lVar2 + 0x58);
      *(int *)((int64_t)puVar6 + 0x44) = *(int *)((int64_t)puVar6 + 0x44) + 1;
      *(int *)((int64_t)puVar6 + 0x4c) =
           *(int *)((int64_t)puVar6 + 0x4c) + (int)((lVar11 - lVar2) / 0x70);
      *(int *)(unaff_R15 + 0x54) = *(int *)(unaff_R15 + 0x54) + 1;
    }
    unaff_ESI = unaff_ESI + 1;
    if (*(int *)(unaff_R15 + 0x50) <= (int)unaff_ESI) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1802d3abe(void)
void FUN_1802d3abe(void)

{
  return;
}






// 函数: void FUN_1802d3ac8(void)
void FUN_1802d3ac8(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802d3af0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802d3af0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int iVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int8_t auStack_458 [32];
  uint64_t uStack_438;
  uint64_t *puStack_430;
  char acStack_428 [1024];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_458;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar3 = (uint64_t *)func_0x00018004b9a0();
  uStack_438 = 0;
  puStack_430 = &uStackX_18;
  __stdio_common_vsprintf(*puVar3 | 1,acStack_428,0x400,param_2);
  lVar1 = -1;
  do {
    lVar4 = lVar1;
    lVar1 = lVar4 + 1;
  } while (acStack_428[lVar4 + 1] != '\0');
  iVar2 = (int)(lVar4 + 1);
  if ((0 < iVar2) && (*(uint *)(param_1 + 0x10) + iVar2 < 0x3ff)) {
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8),acStack_428,
           (int64_t)((int)lVar4 + 2));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_458);
}






// 函数: void FUN_1802d3bb0(int64_t param_1,int64_t param_2,int param_3,float *param_4)
void FUN_1802d3bb0(int64_t param_1,int64_t param_2,int param_3,float *param_4)

{
  float *pfVar1;
  int64_t *plVar2;
  short sVar3;
  uint uVar4;
  float fVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int64_t lVar18;
  uint64_t uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int64_t lVar23;
  uint64_t uVar24;
  uint uVar25;
  uint uVar26;
  uint64_t uVar27;
  uint64_t *puVar28;
  int64_t lVar29;
  uint64_t *puVar30;
  uint64_t *puVar31;
  uint uVar32;
  float *pfVar33;
  uint uVar34;
  uint64_t uVar35;
  int iVar36;
  uint64_t *puVar37;
  uint64_t *puVar38;
  uint64_t *puVar39;
  float *pfVar40;
  int64_t lVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  int iStackX_18;
  uint64_t uStack_110;
  
  lVar6 = *(int64_t *)(param_2 + 0x48);
  lVar29 = *(int64_t *)(*(int64_t *)(param_1 + 0x310) + 0x10);
  uVar4 = *(uint *)(lVar6 + 0x68);
  if ((*(int *)(lVar6 + 0xfc4) < 1) || (*(int *)(lVar6 + 0xfc8) < 1)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  lVar41 = (int64_t)(int)((*(int64_t *)(param_2 + 0x60) - *(int64_t *)(param_2 + 0x58)) / 0x70);
  plVar2 = (int64_t *)(param_2 + 0xf8);
  FUN_1802ab620(plVar2,lVar41);
  lVar23 = *(int64_t *)(param_2 + 0x138) - *(int64_t *)(param_2 + 0x130);
  lVar18 = lVar23 >> 0x3f;
  if (lVar23 / 0xc + lVar18 == lVar18) {
    uVar19 = 0;
    uVar24 = uVar19;
    uVar27 = uVar19;
    if (3 < lVar41) {
      iVar36 = 2;
      uVar35 = uVar19;
      do {
        *(int *)(*plVar2 + uVar24 * 8) = (int)uVar27;
        uVar27 = (uint64_t)((int)uVar27 + 4);
        lVar18 = *(int64_t *)(param_2 + 0x58);
        fVar50 = *(float *)(uVar35 + 4 + lVar18) - param_4[1];
        fVar44 = *(float *)(uVar35 + lVar18) - *param_4;
        fVar42 = *(float *)(uVar35 + 8 + lVar18) - param_4[2];
        *(float *)(*plVar2 + 4 + uVar24 * 8) = fVar50 * fVar50 + fVar44 * fVar44 + fVar42 * fVar42;
        *(int *)(*plVar2 + 8 + uVar24 * 8) = iVar36 + -1;
        iVar16 = iVar36 + 1;
        lVar18 = *(int64_t *)(param_2 + 0x58);
        fVar50 = *(float *)(uVar35 + 0x74 + lVar18) - param_4[1];
        fVar44 = *(float *)(uVar35 + 0x70 + lVar18) - *param_4;
        fVar42 = *(float *)(uVar35 + 0x78 + lVar18) - param_4[2];
        *(float *)(*plVar2 + 0xc + uVar24 * 8) = fVar50 * fVar50 + fVar44 * fVar44 + fVar42 * fVar42
        ;
        *(int *)(*plVar2 + 0x10 + uVar24 * 8) = iVar36;
        iVar36 = iVar36 + 4;
        lVar18 = *(int64_t *)(param_2 + 0x58);
        fVar50 = *(float *)(uVar35 + 0xe4 + lVar18) - param_4[1];
        fVar44 = *(float *)(uVar35 + 0xe0 + lVar18) - *param_4;
        fVar42 = *(float *)(uVar35 + 0xe8 + lVar18) - param_4[2];
        *(float *)(*plVar2 + 0x14 + uVar24 * 8) =
             fVar50 * fVar50 + fVar44 * fVar44 + fVar42 * fVar42;
        *(int *)(*plVar2 + 0x18 + uVar24 * 8) = iVar16;
        lVar8 = *(int64_t *)(param_2 + 0x58);
        lVar18 = uVar35 + 0x150;
        fVar50 = *(float *)(uVar35 + 0x154 + lVar8) - param_4[1];
        lVar23 = uVar35 + 0x158;
        uVar35 = uVar35 + 0x1c0;
        fVar44 = *(float *)(lVar18 + lVar8) - *param_4;
        fVar42 = *(float *)(lVar23 + lVar8) - param_4[2];
        *(float *)(*plVar2 + 0x1c + uVar24 * 8) =
             fVar50 * fVar50 + fVar44 * fVar44 + fVar42 * fVar42;
        uVar24 = uVar24 + 4;
      } while ((int64_t)uVar24 < lVar41 + -3);
    }
    if ((int64_t)uVar24 < lVar41) {
      lVar18 = uVar24 * 0x70;
      do {
        *(int *)(*plVar2 + uVar24 * 8) = (int)uVar27;
        uVar27 = (uint64_t)((int)uVar27 + 1);
        lVar8 = *(int64_t *)(param_2 + 0x58);
        pfVar33 = (float *)(lVar18 + lVar8);
        fVar50 = *(float *)(lVar18 + 4 + lVar8) - param_4[1];
        lVar23 = lVar18 + 8;
        lVar18 = lVar18 + 0x70;
        fVar44 = *pfVar33 - *param_4;
        fVar42 = *(float *)(lVar23 + lVar8) - param_4[2];
        *(float *)(*plVar2 + 4 + uVar24 * 8) = fVar50 * fVar50 + fVar44 * fVar44 + fVar42 * fVar42;
        uVar24 = uVar24 + 1;
      } while ((int64_t)uVar24 < lVar41);
    }
    puVar9 = *(uint64_t **)(param_2 + 0x100);
    puVar38 = (uint64_t *)*plVar2;
    if (puVar38 != puVar9) {
      uVar25 = 0;
      lVar23 = (int64_t)puVar9 - (int64_t)puVar38 >> 3;
      for (lVar18 = lVar23; lVar18 != 0; lVar18 = lVar18 >> 1) {
        uVar25 = (int)uVar19 + 1;
        uVar19 = (uint64_t)uVar25;
      }
      FUN_1802da5e0(puVar38,puVar9,(int64_t)(int)(uVar25 - 1) * 2,0);
      if (lVar23 < 0x1d) {
        func_0x0001802d9f80(puVar38,puVar9);
      }
      else {
        puVar31 = puVar38 + 0x1c;
        func_0x0001802d9f80(puVar38,puVar31);
        if (puVar31 != puVar9) {
          puVar38 = puVar38 + 0x1b;
          do {
            uVar10 = *puVar31;
            pfVar33 = (float *)((int64_t)puVar38 + 4);
            uStack_110._4_4_ = (float)((uint64_t)uVar10 >> 0x20);
            puVar28 = puVar31;
            if (*pfVar33 <= uStack_110._4_4_ && uStack_110._4_4_ != *pfVar33) {
              do {
                pfVar33 = pfVar33 + -2;
                *puVar28 = *(uint64_t *)
                            (((int64_t)puVar38 - (int64_t)puVar31) + (int64_t)puVar28);
                puVar28 = puVar28 + -1;
              } while (*pfVar33 <= uStack_110._4_4_ && uStack_110._4_4_ != *pfVar33);
            }
            puVar31 = puVar31 + 1;
            *puVar28 = uVar10;
            puVar38 = puVar38 + 1;
          } while (puVar31 != puVar9);
        }
      }
    }
  }
  else {
    uVar19 = 0;
    uVar24 = uVar19;
    uVar27 = uVar19;
    if (0 < lVar41) {
      do {
        *(int *)(*plVar2 + uVar24 * 8) = (int)uVar27;
        uVar24 = uVar24 + 1;
        uVar27 = (uint64_t)((int)uVar27 + 1);
      } while ((int64_t)uVar24 < lVar41);
    }
    puVar7 = *(uint64_t **)(param_2 + 0x100);
    puVar37 = (uint64_t *)*plVar2;
    if (puVar37 != puVar7) {
      uVar25 = 0;
      lVar23 = (int64_t)puVar7 - (int64_t)puVar37 >> 3;
      for (lVar18 = lVar23; lVar18 != 0; lVar18 = lVar18 >> 1) {
        uVar25 = (int)uVar19 + 1;
        uVar19 = (uint64_t)uVar25;
      }
      FUN_1802da450(puVar37,puVar7,(int64_t)(int)(uVar25 - 1) * 2,param_2);
      if (lVar23 < 0x1d) {
        FUN_1802d9ee0(puVar37,puVar7,param_2);
      }
      else {
        puVar30 = puVar37 + 0x1c;
        FUN_1802d9ee0(puVar37,puVar30,param_2);
        for (; puVar30 != puVar7; puVar30 = puVar30 + 1) {
          puVar37 = puVar30 + -1;
          uVar19 = *puVar30;
          puVar39 = puVar30;
          if (*(short *)((uVar19 & 0xffffffff) * 0x70 + 0x30 + *(int64_t *)(param_2 + 0x58)) <
              *(short *)((uint64_t)(uint)puVar30[-1] * 0x70 + 0x30 + *(int64_t *)(param_2 + 0x58))
             ) {
            do {
              uVar24 = *puVar37;
              puVar37 = puVar37 + -1;
              *puVar39 = uVar24;
              puVar39 = puVar39 + -1;
            } while (*(short *)(*(int64_t *)(param_2 + 0x58) + 0x30 + (uVar19 & 0xffffffff) * 0x70)
                     < *(short *)((uint64_t)(uint)*puVar37 * 0x70 + 0x30 +
                                 *(int64_t *)(param_2 + 0x58)));
          }
          *puVar39 = uVar19;
        }
      }
    }
  }
  uVar25 = *(uint *)(param_2 + 0x44);
  iVar36 = *(int *)(param_2 + 0xa4);
  fVar42 = *(float *)(lVar6 + 0x1054);
  if (*(float *)(lVar6 + 0x1054) <= *(float *)(lVar6 + 0x1050)) {
    fVar42 = *(float *)(lVar6 + 0x1050);
  }
  if (0 < lVar41) {
    pfVar33 = (float *)(lVar29 + ((int64_t)param_3 * 9 + 1) * 8);
    uStack_110 = 0;
    iStackX_18 = param_3;
    do {
      fVar44 = 49.0;
      pfVar1 = pfVar33 + -2;
      pfVar40 = (float *)((int64_t)*(int *)(*(int64_t *)(param_2 + 0xf8) + uStack_110 * 8) * 0x70
                         + *(int64_t *)(param_2 + 0x58));
      if (*(char *)(param_2 + 0xa1) == '\0') {
        *pfVar1 = *pfVar40;
        pfVar33[-1] = pfVar40[1];
        *pfVar33 = pfVar40[2];
      }
      else {
        fVar48 = *(float *)(param_2 + 0xc4);
        fVar49 = *(float *)(param_2 + 200);
        fVar50 = pfVar40[1];
        fVar46 = *(float *)(param_2 + 0xb4);
        fVar5 = *(float *)(param_2 + 0xb8);
        fVar45 = *pfVar40;
        fVar47 = pfVar40[2];
        fVar43 = *(float *)(param_2 + 0xd4);
        fVar11 = *(float *)(param_2 + 0xd8);
        fVar12 = *(float *)(param_2 + 0xe4);
        fVar13 = *(float *)(param_2 + 0xe8);
        *pfVar1 = *(float *)(param_2 + 0xc0) * fVar50 + *(float *)(param_2 + 0xb0) * fVar45 +
                  *(float *)(param_2 + 0xd0) * fVar47 + *(float *)(param_2 + 0xe0);
        *pfVar33 = fVar49 * fVar50 + fVar5 * fVar45 + fVar11 * fVar47 + fVar13;
        pfVar33[-1] = fVar48 * fVar50 + fVar46 * fVar45 + fVar43 * fVar47 + fVar12;
      }
      pfVar33[0xe] = pfVar40[0x17];
      pfVar33[1] = pfVar40[3];
      pfVar33[4] = pfVar40[0xb];
      pfVar33[0xb] = pfVar40[0x18];
      pfVar33[0xc] = pfVar40[0x19];
      pfVar33[0xd] = pfVar40[0x1a];
      fVar50 = pfVar40[0xd];
      pfVar33[7] = fVar50;
      fVar45 = pfVar40[0xe];
      pfVar33[8] = fVar45;
      pfVar33[9] = pfVar40[0xf] * 60.0;
      pfVar33[7] = fVar50 * 60.0;
      pfVar33[8] = fVar45 * 60.0;
      fVar50 = pfVar40[9];
      fVar45 = pfVar40[8];
      FUN_1802cf260(param_1 + 0x58,iStackX_18,pfVar1,fVar42 * pfVar40[0xb],
                    ((uint64_t)uVar25 << 0x10 | (int64_t)iVar36) << 0x20,pfVar40 + 0x14,
                    (ushort *)((int64_t)pfVar40 + 0x52),pfVar40 + 0x15);
      fVar44 = fVar50 * fVar44;
      pfVar33[10] = (float)(((uint)*(byte *)(pfVar40 + 0x15) << 0xc |
                            *(ushort *)(pfVar40 + 0x14) & 0xfff) << 0xc |
                           *(ushort *)((int64_t)pfVar40 + 0x52) & 0xfff);
      pfVar33[5] = *(float *)(param_2 + 0xa4);
      iVar16 = 0;
      if (*(int *)(lVar6 + 0x10c) == 0) {
        iVar15 = (int)fVar44;
        iVar20 = (int)(fVar44 + 1.0);
        fVar44 = fVar44 - (float)iVar15;
        iVar21 = iVar16;
        if ((-1 < iVar20) && (iVar21 = iVar20, 0x31 < iVar20)) {
          iVar21 = 0x31;
        }
        lVar29 = (int64_t)iVar21;
        if ((-1 < iVar15) && (iVar16 = iVar15, 0x31 < iVar15)) {
          iVar16 = 0x31;
        }
        fVar5 = pfVar40[0x11];
        lVar18 = (int64_t)iVar16;
        fVar47 = *(float *)(lVar6 + 0xbf0 + lVar18 * 0x10);
        fVar48 = *(float *)(lVar6 + 0xbf4 + lVar18 * 0x10);
        fVar47 = (*(float *)(lVar6 + 0xbf0 + lVar29 * 0x10) - fVar47) * fVar44 + fVar47;
        fVar49 = *(float *)(lVar6 + 0xbf8 + lVar18 * 0x10);
        fVar48 = (*(float *)(lVar6 + 0xbf4 + lVar29 * 0x10) - fVar48) * fVar44 + fVar48;
        fVar46 = *(float *)(lVar6 + 0xbfc + lVar18 * 0x10);
        fVar49 = (*(float *)(lVar6 + 0xbf8 + lVar29 * 0x10) - fVar49) * fVar44 + fVar49;
        fVar46 = (*(float *)(lVar6 + 0xbfc + lVar29 * 0x10) - fVar46) * fVar44 + fVar46;
        if (fVar5 != -NAN) {
          fVar44 = (float)((uint)fVar5 >> 0x10 & 0xff);
          fVar43 = (float)((uint)fVar5 >> 8 & 0xff);
          fVar49 = (float)((uint)fVar5 & 0xff) * (float)((uint)fVar5 & 0xff) * 1.5378702e-05 *
                   fVar49;
          fVar47 = fVar44 * fVar44 * 1.5378702e-05 * fVar47;
          fVar48 = fVar43 * fVar43 * 1.5378702e-05 * fVar48;
        }
      }
      else {
        fVar49 = pfVar40[0x11];
        iVar20 = (int)(fVar44 + 1.0);
        fVar47 = (float)((uint)fVar49 >> 0x10 & 0xff) * 0.003921569;
        iVar15 = (int)fVar44;
        fVar48 = (float)((uint)fVar49 >> 8 & 0xff) * 0.003921569;
        fVar49 = (float)((uint)fVar49 & 0xff) * 0.003921569;
        iVar21 = iVar16;
        if ((-1 < iVar20) && (iVar21 = iVar20, 0x31 < iVar20)) {
          iVar21 = 0x31;
        }
        if ((-1 < iVar15) && (iVar16 = iVar15, 0x31 < iVar15)) {
          iVar16 = 0x31;
        }
        fVar46 = *(float *)(lVar6 + 0xbfc + (int64_t)iVar16 * 0x10);
        fVar46 = (*(float *)(lVar6 + 0xbfc + (int64_t)iVar21 * 0x10) - fVar46) *
                 (fVar44 - (float)iVar15) + fVar46;
      }
      pfVar33[0xf] = pfVar40[0x1b];
      uVar17 = (uint)(int64_t)(fVar46 * 255.9);
      uVar34 = 0xff;
      if (uVar17 < 0xff) {
        uVar34 = uVar17;
      }
      uVar22 = (uint)(int64_t)(fVar47 * 255.9);
      uVar17 = 0xff;
      if (uVar22 < 0xff) {
        uVar17 = uVar22;
      }
      uVar26 = (uint)(int64_t)(fVar48 * 255.9);
      uVar22 = 0xff;
      if (uVar26 < 0xff) {
        uVar22 = uVar26;
      }
      uVar32 = (uint)(int64_t)(fVar49 * 255.9);
      uVar26 = 0xff;
      if (uVar32 < 0xff) {
        uVar26 = uVar32;
      }
      pfVar33[6] = (float)(((uVar34 << 8 | uVar17) << 8 | uVar22) << 8 | uVar26);
      if (((uVar4 >> 4 & 1) == 0) || (!bVar14)) {
        if (((uVar4 >> 0xb & 1) == 0) || (!bVar14)) {
          pfVar33[2] = 0.0;
          fVar44 = 0.0;
        }
        else {
          iVar16 = *(int *)(lVar6 + 0xfc4);
          sVar3 = *(short *)((int64_t)pfVar40 + 0x32);
          iVar21 = *(int *)(lVar6 + 0xfc8);
          pfVar33[2] = (float)((int)sVar3 % iVar16) / (float)iVar16;
          fVar44 = (float)((int)sVar3 / iVar16) / (float)iVar21;
        }
      }
      else {
        uVar34 = *(uint *)(lVar6 + 0xfcc);
        uVar19 = (uint64_t)uVar34;
        fVar50 = fVar45 * fVar50 * *(float *)(lVar6 + 0xfd0) +
                 (float)(int)*(short *)((int64_t)pfVar40 + 0x32);
        if ((uVar4 >> 0x16 & 1) == 0) {
          uVar24 = (uint64_t)fVar50;
          if ((uVar4 >> 3 & 1) == 0) {
            uVar19 = (uint64_t)(uVar34 - 1);
            if ((uint)uVar24 < uVar34 - 1) {
              uVar19 = uVar24 & 0xffffffff;
            }
          }
          else {
            uVar19 = (uVar24 & 0xffffffff) % uVar19;
          }
          uVar34 = *(uint *)(lVar6 + 0xfc4);
          fVar44 = (float)(uVar19 / uVar34) / (float)*(int *)(lVar6 + 0xfc8);
          pfVar33[2] = (float)(uVar19 % (uint64_t)uVar34) / (float)(int)uVar34;
        }
        else if ((uVar4 >> 3 & 1) == 0) {
          fVar44 = 0.0;
          fVar45 = (float)(uVar34 - 1);
          if (fVar50 <= (float)(uVar34 - 1)) {
            fVar45 = fVar50;
          }
          pfVar33[2] = fVar45;
        }
        else {
          fVar50 = (float)fmodf(uVar19,(float)uVar19);
          fVar44 = 0.0;
          pfVar33[2] = fVar50;
        }
      }
      pfVar33[3] = fVar44;
      pfVar33 = pfVar33 + 0x12;
      iStackX_18 = iStackX_18 + 1;
      uStack_110 = uStack_110 + 1;
    } while (uStack_110 < lVar41);
  }
  return;
}






