#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part116_sub001.c - 9 个函数

#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part116.c - 9 个函数


// 函数: void FUN_180737df0(char *param_1,int64_t param_2,int64_t param_3,int64_t param_4,int64_t param_5
void FUN_180737df0(char *param_1,int64_t param_2,int64_t param_3,int64_t param_4,int64_t param_5
                  ,int64_t param_6,short param_7,short param_8,short param_9,short param_10)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int64_t lVar23;
  short sVar24;
  ushort uVar25;
  short sVar26;
  uint uVar27;
  int64_t lVar28;
  int64_t lVar29;
  short sVar30;
  int64_t lVar31;
  short sVar32;
  uint uVar33;
  short sVar34;
  ushort uVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  int64_t lVar40;
  char *pcVar41;
  int8_t auStack_208 [32];
  uint uStack_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint *puStack_1c8;
  int iStack_1c0;
  int iStack_1bc;
  uint uStack_1b8;
  int64_t lStack_1b0;
  uint uStack_1a8;
  int32_t uStack_1a4;
  int64_t lStack_1a0;
  short *psStack_198;
  char *pcStack_190;
  int64_t lStack_188;
  int64_t lStack_180;
  uint auStack_178 [8];
  uint auStack_158 [4];
  uint auStack_148 [7];
  int iStack_12c;
  int aiStack_128 [20];
  int aiStack_d8 [20];
  short asStack_88 [4];
  short asStack_80 [4];
  char acStack_78 [4];
  int32_t auStack_74 [2];
  char acStack_6c [4];
  char acStack_68 [16];
  char acStack_58 [16];
  char acStack_48 [16];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_208;
  iVar20 = -10;
  do {
    sVar34 = (short)iVar20 * 0x400;
    sVar26 = sVar34 + 0x400;
    if (iVar20 < 1) {
      if (iVar20 == 0) {
        sVar26 = sVar34 + 0x39a;
        sVar32 = sVar34;
      }
      else {
        sVar32 = sVar34 + 0x66;
        if (iVar20 != -1) {
          sVar26 = sVar34 + 0x466;
        }
      }
    }
    else {
      sVar26 = sVar34 + 0x39a;
      sVar32 = sVar34 + -0x66;
    }
    iVar37 = iVar20 + 1;
    aiStack_d8[(int64_t)iVar20 + -10] = (int)sVar32 * (int)param_7 >> 0x10;
    aiStack_d8[(int64_t)iVar20 + 10] = (int)sVar26 * (int)param_7 >> 0x10;
    iVar20 = iVar37;
  } while (iVar37 < 10);
  uVar27 = 0;
  iStack_1d8 = param_10 + -1;
  iStack_1dc = 1;
  auStack_178[4] = 0;
  asStack_88[0] = 0;
  uStack_1b8 = 0x7fffffff;
  if (-1 < iStack_1d8) {
    lVar31 = (int64_t)iStack_1d8;
    lStack_180 = param_3 - param_2;
    lStack_1a0 = 1;
    psStack_198 = (short *)(param_2 + lVar31 * 2);
    do {
      lVar40 = *(short *)((int64_t)psStack_198 + (param_5 - param_2)) + param_6;
      sVar26 = *psStack_198;
      if (0 < lStack_1a0) {
        pcVar41 = acStack_78 + lVar31;
        bVar1 = *(byte *)(param_4 + lVar31);
        sVar34 = *(short *)((int64_t)psStack_198 + lStack_180);
        lVar29 = 0;
        do {
          sVar32 = (short)((int)asStack_88[lVar29] * (uint)bVar1 >> 8);
          iVar20 = (int)(short)(sVar26 - sVar32) * (int)param_8 >> 0x10;
          if (iVar20 < 10) {
            if (iVar20 < -10) {
              iVar20 = -10;
            }
          }
          else {
            iVar20 = 9;
          }
          lVar28 = (int64_t)iVar20;
          *pcVar41 = (char)iVar20;
          sVar30 = (short)aiStack_d8[lVar28 + -10] + sVar32;
          sVar32 = (short)aiStack_d8[lVar28 + 10] + sVar32;
          asStack_88[lVar29] = sVar30;
          asStack_88[lVar29 + lStack_1a0] = sVar32;
          if (iVar20 + 1 < 4) {
            if (-4 < iVar20) {
              uVar35 = (ushort)*(byte *)(lVar28 + 5 + lVar40);
              goto LAB_18073802b;
            }
            if (iVar20 == -4) {
              uVar35 = (ushort)*(byte *)(lVar40 + 1);
              uVar25 = 0x118;
            }
            else {
              sVar24 = (short)iVar20 * -0x2b;
              uVar25 = sVar24 + 0x6c;
              uVar35 = sVar24 + 0x41;
            }
          }
          else if (iVar20 + 1 == 4) {
            uVar35 = 0x118;
LAB_18073802b:
            uVar25 = (ushort)*(byte *)(lVar28 + 4 + lVar40);
          }
          else {
            sVar24 = (short)iVar20 * 0x2b;
            uVar25 = sVar24 + 0x6c;
            uVar35 = sVar24 + 0x97;
          }
          uVar27 = auStack_178[lVar29 + 4];
          pcVar41 = pcVar41 + 0x10;
          iVar20 = (int)(short)(sVar26 - sVar30);
          auStack_178[lVar29 + 4] =
               (int)(short)uVar25 * (int)param_9 + uVar27 + iVar20 * iVar20 * (int)sVar34;
          iVar20 = (int)(short)(sVar26 - sVar32);
          lVar28 = lVar29 + 1;
          auStack_178[lVar29 + lStack_1a0 + 4] =
               (int)(short)uVar35 * (int)param_9 + uVar27 + iVar20 * iVar20 * (int)sVar34;
          lVar29 = lVar28;
          uVar27 = auStack_178[4];
        } while (lVar28 < lStack_1a0);
      }
      sVar30 = asStack_88[3];
      sVar32 = asStack_88[2];
      sVar34 = asStack_88[1];
      sVar26 = asStack_88[0];
      uVar8 = auStack_158[3];
      uVar7 = auStack_158[2];
      uVar6 = auStack_158[1];
      uVar22 = auStack_158[0];
      if (iStack_1dc < 3) {
        if (0 < lStack_1a0) {
          pcVar41 = acStack_78 + lVar31;
          lVar40 = lStack_1a0;
          do {
            pcVar41[lStack_1a0 * 0x10] = *pcVar41 + '\x01';
            lVar40 = lVar40 + -1;
            pcVar41 = pcVar41 + 0x10;
          } while (lVar40 != 0);
        }
        iStack_1dc = iStack_1dc * 2;
        lStack_1a0 = (int64_t)iStack_1dc;
        if (lStack_1a0 < 4) {
          lVar29 = lStack_1a0 << 4;
          lVar40 = lStack_1a0;
          do {
            lVar28 = lVar31 + lVar29;
            lVar23 = lVar40 - lStack_1a0;
            lVar40 = lVar40 + 1;
            lVar29 = lVar29 + 0x10;
            acStack_78[lVar28] = acStack_78[lVar23 * 0x10 + lVar31];
          } while (lVar29 < 0x40);
        }
      }
      else {
        if ((int)auStack_158[0] < (int)uVar27) {
          asStack_88[0] = asStack_80[0];
          auStack_148[4] = 4;
          auStack_178[0] = uVar27;
          auStack_178[4] = auStack_158[0];
          auStack_158[0] = uVar27;
          asStack_80[0] = sVar26;
          uVar27 = uVar22;
        }
        else {
          auStack_178[0] = auStack_158[0];
          auStack_148[4] = 0;
        }
        auStack_148[0] = uVar27;
        if ((int)auStack_158[1] < (int)auStack_178[5]) {
          auStack_178[1] = auStack_178[5];
          auStack_158[1] = auStack_178[5];
          asStack_88[1] = asStack_80[1];
          auStack_148[5] = 5;
          auStack_178[5] = uVar6;
          asStack_80[1] = sVar34;
        }
        else {
          auStack_178[1] = auStack_158[1];
          auStack_148[5] = 1;
        }
        auStack_148[1] = auStack_178[5];
        if ((int)auStack_158[2] < (int)auStack_178[6]) {
          auStack_178[2] = auStack_178[6];
          auStack_158[2] = auStack_178[6];
          asStack_88[2] = asStack_80[2];
          auStack_148[6] = 6;
          auStack_178[6] = uVar7;
          asStack_80[2] = sVar32;
        }
        else {
          auStack_178[2] = auStack_158[2];
          auStack_148[6] = 2;
        }
        auStack_148[2] = auStack_178[6];
        if ((int)auStack_158[3] < (int)auStack_178[7]) {
          auStack_178[3] = auStack_178[7];
          auStack_158[3] = auStack_178[7];
          auStack_148[3] = uVar8;
          auStack_178[7] = uVar8;
          asStack_88[3] = asStack_80[3];
          iStack_12c = 7;
          asStack_80[3] = sVar30;
        }
        else {
          auStack_148[3] = auStack_178[7];
          iStack_12c = 3;
          auStack_178[3] = auStack_158[3];
        }
        auStack_178[0] = auStack_158[0];
        auStack_178[1] = auStack_158[1];
        auStack_178[2] = auStack_158[2];
        auStack_178[3] = auStack_158[3];
        auStack_178[7] = auStack_148[3];
        while( true ) {
          lStack_1b0 = 0;
          uStack_1e8 = 0;
          iStack_1bc = 0x7fffffff;
          uStack_1e4 = uStack_1e8;
          uStack_1e0 = uStack_1e8;
          iStack_1c0 = uStack_1e8;
          do {
            iVar20 = *(int *)((int64_t)auStack_178 + lStack_1b0);
            iVar37 = *(int *)((int64_t)auStack_178 + lStack_1b0 + 4);
            iVar2 = *(int *)((int64_t)auStack_148 + lStack_1b0 + 4);
            iVar10 = iVar20;
            if (iStack_1bc <= iVar20) {
              iVar10 = iStack_1bc;
            }
            iVar3 = *(int *)((int64_t)auStack_178 + lStack_1b0 + 8);
            uVar27 = *(int *)((int64_t)auStack_148 + lStack_1b0);
            if (*(int *)((int64_t)auStack_148 + lStack_1b0) <= (int)uStack_1e4) {
              uVar27 = uStack_1e4;
            }
            iVar11 = iVar37;
            if (iVar10 <= iVar37) {
              iVar11 = iVar10;
            }
            iVar4 = *(int *)((int64_t)auStack_148 + lStack_1b0 + 8);
            iVar12 = iVar2;
            if (iVar2 <= (int)uVar27) {
              iVar12 = uVar27;
            }
            iVar5 = *(int *)((int64_t)auStack_178 + lStack_1b0 + 0xc);
            iVar36 = iVar3;
            if (iVar11 <= iVar3) {
              iVar36 = iVar11;
            }
            iVar13 = iVar4;
            if (iVar4 <= iVar12) {
              iVar13 = iVar12;
            }
            uVar22 = uStack_1e8;
            if (iStack_1bc <= iVar20) {
              uVar22 = iStack_1c0;
            }
            iVar20 = uStack_1e8 + 1;
            if (iVar10 <= iVar37) {
              iVar20 = uVar22;
            }
            iVar37 = uStack_1e8 + 2;
            if (iVar11 <= iVar3) {
              iVar37 = iVar20;
            }
            iStack_1bc = iVar5;
            iStack_1c0 = uStack_1e8 + 3;
            if (iVar36 <= iVar5) {
              iStack_1bc = iVar36;
              iStack_1c0 = iVar37;
            }
            uVar22 = uStack_1e8;
            if (*(int *)((int64_t)auStack_148 + lStack_1b0) <= (int)uStack_1e4) {
              uVar22 = uStack_1e0;
            }
            uStack_1e4 = *(int *)((int64_t)auStack_148 + lStack_1b0 + 0xc);
            iVar20 = uStack_1e8 + 1;
            if (iVar2 <= (int)uVar27) {
              iVar20 = uVar22;
            }
            iVar37 = uStack_1e8 + 2;
            if (iVar4 <= iVar12) {
              iVar37 = iVar20;
            }
            uStack_1e0 = uStack_1e8 + 3;
            if ((int)uStack_1e4 <= iVar13) {
              uStack_1e4 = iVar13;
              uStack_1e0 = iVar37;
            }
            uStack_1e8 = uStack_1e8 + 4;
            lStack_1b0 = lStack_1b0 + 0x10;
          } while ((int)uStack_1e8 < 4);
          if ((int)uStack_1e4 <= iStack_1bc) break;
          lVar40 = (int64_t)(int)uStack_1e0;
          lVar29 = (int64_t)iStack_1c0;
          auStack_148[lVar40] = 0;
          uVar27 = auStack_148[lVar29 + 4];
          auStack_178[lVar29] = 0x7fffffff;
          auStack_148[lVar40 + 4] = uVar27 ^ 4;
          auStack_178[lVar40 + 4] = auStack_158[lVar29];
          asStack_88[lVar40] = asStack_80[lVar29];
          uVar17 = auStack_74[lVar29 * 4];
          uVar18 = auStack_74[lVar29 * 4 + 1];
          uVar19 = *(int32_t *)(acStack_68 + lVar29 * 0x10 + -4);
          *(int32_t *)(acStack_78 + lVar40 * 0x10) = *(int32_t *)(acStack_78 + lVar29 * 0x10);
          auStack_74[lVar40 * 4] = uVar17;
          auStack_74[lVar40 * 4 + 1] = uVar18;
          *(int32_t *)(acStack_68 + lVar40 * 0x10 + -4) = uVar19;
        }
        acStack_78[lVar31] = acStack_78[lVar31] + (char)((int)auStack_148[4] >> 2);
        acStack_68[lVar31] = acStack_68[lVar31] + (char)((int)auStack_148[5] >> 2);
        acStack_58[lVar31] = acStack_58[lVar31] + (char)((int)auStack_148[6] >> 2);
        acStack_48[lVar31] = acStack_48[lVar31] + (char)(iStack_12c >> 2);
        uVar27 = auStack_178[4];
      }
      iStack_1d8 = iStack_1d8 + -1;
      psStack_198 = psStack_198 + -1;
      lVar31 = lVar31 + -1;
    } while (-1 < iStack_1d8);
  }
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  puStack_1c8 = auStack_178 + 6;
  uStack_1e8 = 0;
  do {
    uStack_1d0 = puStack_1c8[-1];
    uVar27 = puStack_1c8[2];
    uVar22 = *puStack_1c8;
    uVar6 = puStack_1c8[1];
    uVar7 = puStack_1c8[3];
    uStack_1d4 = puStack_1c8[-2];
    if ((int)uStack_1b8 <= (int)puStack_1c8[-2]) {
      uStack_1d4 = uStack_1b8;
    }
    uVar8 = puStack_1c8[4];
    uVar9 = puStack_1c8[5];
    uStack_1e4 = uStack_1d0;
    if ((int)uStack_1d4 <= (int)uStack_1d0) {
      uStack_1e4 = uStack_1d4;
    }
    uVar14 = uVar22;
    if ((int)uStack_1e4 <= (int)uVar22) {
      uVar14 = uStack_1e4;
    }
    uVar39 = uVar6;
    if ((int)uVar14 <= (int)uVar6) {
      uVar39 = uVar14;
    }
    uVar33 = uVar27;
    if ((int)uVar39 <= (int)uVar27) {
      uVar33 = uVar39;
    }
    uVar38 = uVar7;
    if ((int)uVar33 <= (int)uVar7) {
      uVar38 = uVar33;
    }
    uVar15 = uVar8;
    if ((int)uVar38 <= (int)uVar8) {
      uVar15 = uVar38;
    }
    uStack_1e0 = uVar9;
    if ((int)uVar15 <= (int)uVar9) {
      uStack_1e0 = uVar15;
    }
    uVar16 = uStack_1e8;
    if ((int)uStack_1b8 <= (int)puStack_1c8[-2]) {
      uVar16 = uStack_1a8;
    }
    uVar21 = uStack_1e8 + 1;
    if ((int)uStack_1d4 <= (int)uStack_1d0) {
      uVar21 = uVar16;
    }
    uVar16 = uStack_1e8 + 2;
    if ((int)uStack_1e4 <= (int)uVar22) {
      uVar16 = uVar21;
    }
    uVar22 = uStack_1e8 + 3;
    if ((int)uVar14 <= (int)uVar6) {
      uVar22 = uVar16;
    }
    uVar6 = uStack_1e8 + 4;
    if ((int)uVar39 <= (int)uVar27) {
      uVar6 = uVar22;
    }
    uVar27 = uStack_1e8 + 5;
    if ((int)uVar33 <= (int)uVar7) {
      uVar27 = uVar6;
    }
    uVar22 = uStack_1e8 + 6;
    if ((int)uVar38 <= (int)uVar8) {
      uVar22 = uVar27;
    }
    uStack_1a8 = uStack_1e8 + 7;
    if ((int)uVar15 <= (int)uVar9) {
      uStack_1a8 = uVar22;
    }
    uStack_1e8 = uStack_1e8 + 8;
    puStack_1c8 = puStack_1c8 + 8;
    uStack_1b8 = uStack_1e0;
  } while ((int)uStack_1e8 < 8);
  pcStack_190 = param_1;
  lStack_188 = param_4;
  if (0 < param_10) {
                    // WARNING: Subroutine does not return
    memcpy(param_1,acStack_78 + (uint64_t)(uStack_1a8 & 3) * 0x10);
  }
  *param_1 = *param_1 + (char)((int)uStack_1a8 >> 2);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_208,puStack_1c8,(int64_t)param_10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180738630(int32_t *param_1,int32_t *param_2,int param_3)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0x160;
    do {
      lVar1 = *(int64_t *)(lVar4 + SYSTEM_MAIN_CONTROL_BLOCK);
      if ((lVar1 != 0) && (*(char *)(lVar1 + 8) != '\0')) {
        iVar2 = FUN_180743c40(lVar1);
        lVar3 = 0;
        if ((iVar2 != 0) ||
           ((iVar2 = FUN_180743160(lVar1,1), lVar3 = lVar1, iVar2 != 0 ||
            (iVar2 = FUN_180743660(lVar1), iVar2 != 0)))) {
          if (lVar3 == 0) {
            return iVar2;
          }
          SystemDataProcessor(lVar3);
          return iVar2;
        }
        SystemDataProcessor(lVar1);
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 < 0x1a0);
  }
  if (param_1 != (int32_t *)0x0) {
    *param_1 = *(int32_t *)(*(int64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0) + 0x340);
  }
  if (param_2 != (int32_t *)0x0) {
    *param_2 = *(int32_t *)(*(int64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0) + 0x344);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180738730(int64_t param_1,uint param_2,int64_t param_3,int64_t param_4,int64_t param_5,
             int32_t param_6)

{
  uint uVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  lVar4 = 0;
  plVar2 = (int64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x160);
  do {
    if (*plVar2 != 0) {
      return 0x1b;
    }
    lVar4 = lVar4 + 1;
    plVar2 = plVar2 + 1;
  } while (lVar4 < 8);
  uVar1 = param_2 & 0x800000ff;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffffff00) + 1;
  }
  if (uVar1 == 0) {
    *(int32_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x24) = param_6;
    if (param_2 == 0) {
      if (param_1 == 0) {
        if (param_3 == 0) {
          if ((param_4 == 0) && (param_5 == 0)) {
            lVar4 = *(int64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0);
            *(void **)(lVar4 + 0x358) = &processed_var_528_ptr;
            *(void **)(lVar4 + 0x360) = &processed_var_544_ptr;
            *(void **)(lVar4 + 0x368) = &processed_var_512_ptr;
            return 0;
          }
        }
        else if (param_5 != 0) {
          lVar4 = *(int64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0);
          *(int64_t *)(lVar4 + 0x358) = param_3;
          *(int64_t *)(lVar4 + 0x360) = param_4;
          *(int64_t *)(lVar4 + 0x368) = param_5;
          return 0;
        }
      }
    }
    else if ((((param_1 != 0) && (param_3 == 0)) && (param_4 == 0)) &&
            ((param_5 == 0 && (0xff < (int)param_2)))) {
      uVar3 = FUN_180742460(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,param_2,4,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar4 = *(int64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0);
      *(uint64_t *)(lVar4 + 0x358) = 0;
      *(uint64_t *)(lVar4 + 0x360) = 0;
      *(uint64_t *)(lVar4 + 0x368) = 0;
      return uVar3;
    }
  }
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807388c0(uint64_t *param_1,int param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  
  if (0xff < param_2 - 0x20200U) {
    return 0x14;
  }
  if (param_1 == (uint64_t *)0x0) {
    return 0x1f;
  }
  uVar5 = 0;
  lVar1 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x127f8,&processed_var_4608_ptr,0x91,0);
  uVar2 = uVar5;
  if (lVar1 != 0) {
    uVar2 = FUN_180743e90(lVar1);
  }
  *param_1 = uVar2;
  if (uVar2 == 0) {
    uVar4 = 0x26;
  }
  else {
    plVar3 = (int64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x160);
    uVar7 = uVar5;
    do {
      uVar6 = (uint)uVar7;
      if (*plVar3 == 0) break;
      uVar6 = uVar6 + 1;
      uVar7 = (uint64_t)uVar6;
      uVar5 = uVar5 + 1;
      plVar3 = plVar3 + 1;
    } while ((int64_t)uVar5 < 8);
    if (7 < (int)uVar6) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar2,&processed_var_4608_ptr,0xa3,1);
    }
    uVar4 = FUN_180741c20();
    if ((int)uVar4 == 0) {
      *(uint64_t *)((int64_t)(int)uVar6 * 8 + 0x160 + SYSTEM_MAIN_CONTROL_BLOCK) = uVar2;
      *(uint *)(uVar2 + 0x116b8) = uVar6;
      return 0;
    }
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807388f6(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t *unaff_RSI;
  uint64_t uVar7;
  
  uVar5 = 0;
  lVar1 = SystemCore_TransformationEngine0(*(uint64_t *)(param_1 + 0x1a0),0x127f8,param_3,0x91,0);
  uVar2 = uVar5;
  if (lVar1 != 0) {
    uVar2 = FUN_180743e90(lVar1);
  }
  *unaff_RSI = uVar2;
  if (uVar2 == 0) {
    uVar4 = 0x26;
  }
  else {
    plVar3 = (int64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x160);
    uVar7 = uVar5;
    do {
      uVar6 = (uint)uVar7;
      if (*plVar3 == 0) break;
      uVar6 = uVar6 + 1;
      uVar7 = (uint64_t)uVar6;
      uVar5 = uVar5 + 1;
      plVar3 = plVar3 + 1;
    } while ((int64_t)uVar5 < 8);
    if (7 < (int)uVar6) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar2,&processed_var_4608_ptr,0xa3,1);
    }
    uVar4 = FUN_180741c20();
    if ((int)uVar4 == 0) {
      *(uint64_t *)((int64_t)(int)uVar6 * 8 + 0x160 + SYSTEM_MAIN_CONTROL_BLOCK) = uVar2;
      *(uint *)(uVar2 + 0x116b8) = uVar6;
      return 0;
    }
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807389a0(void)

{
  uint64_t uVar1;
  int unaff_EBX;
  int64_t unaff_RDI;
  
  uVar1 = FUN_180741c20();
  if ((int)uVar1 == 0) {
    *(int64_t *)((int64_t)unaff_EBX * 8 + 0x160 + SYSTEM_MAIN_CONTROL_BLOCK) = unaff_RDI;
    *(int *)(unaff_RDI + 0x116b8) = unaff_EBX;
    return 0;
  }
  return uVar1;
}



uint64_t FUN_1807389d7(void)

{
  return 0x14;
}



int FUN_1807389f0(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                 int32_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                 uint64_t param_9)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00018074b7d0();
  iVar2 = SystemDataProcessor(param_1 + iVar1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_1,param_2 - iVar1,param_4);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b7d0(iVar1 + param_1,param_2 - iVar1,param_5);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074bc50(iVar1 + param_1,param_2 - iVar1,param_6);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b930(iVar1 + param_1,param_2 - iVar1,param_7);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(iVar1 + param_1,param_2 - iVar1,param_8);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = FUN_18074b930(iVar1 + param_1,param_2 - iVar1,param_9);
  return iVar2 + iVar1;
}



int FUN_180738b40(int64_t param_1,int param_2,uint64_t param_3,int32_t param_4,
                 uint64_t param_5,uint64_t param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = SystemDataProcessor();
  iVar2 = SystemDataProcessor(param_1 + iVar1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b800(iVar1 + param_1,param_2 - iVar1,param_4);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(iVar1 + param_1,param_2 - iVar1,param_5);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074bda0(iVar1 + param_1,param_2 - iVar1,param_6);
  return iVar2 + iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180738c00(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_180738c00(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  int8_t param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_188 [32];
  int8_t *puStack_168;
  int64_t lStack_158;
  uint64_t uStack_150;
  int8_t auStack_148 [256];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  lStack_158 = 0;
  iVar1 = FUN_180749e60(param_1,&uStack_150,&lStack_158);
  if (iVar1 == 0) {
    puStack_168 = (int8_t *)CONCAT71(puStack_168._1_7_,param_5);
    iVar1 = FUN_180744920(uStack_150,param_2,param_3,param_4);
    if (iVar1 == 0) goto FUN_180738d3d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(auStack_148,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074be80(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5776_ptr);
  }
FUN_180738d3d:
  if (lStack_158 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180738c1d(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_180738c1d(uint64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t in_stack_00000140;
  int8_t in_stack_000001b0;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R15;
  param_6 = 0;
  iVar1 = FUN_180749e60(param_1,&param_7,&param_6);
  if (iVar1 == 0) {
    iVar1 = FUN_180744920(param_7,param_2,param_3,param_4,in_stack_000001b0);
    if (iVar1 == 0) goto FUN_180738d3d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = func_0x00018074b7d0(&stack0x00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074be80(&stack0x00000040 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5776_ptr,&stack0x00000040);
  }
FUN_180738d3d:
  if (param_6 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_180738c8f(void)
void FUN_180738c8f(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074be80(&stack0x00000040 + iVar1,0x100 - iVar1);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}






// 函数: void FUN_180738d3d(void)
void FUN_180738d3d(void)

{
  int64_t in_stack_00000030;
  uint64_t in_stack_00000140;
  
  if (in_stack_00000030 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_180738d67(void)
void FUN_180738d67(void)

{
  uint64_t in_stack_00000140;
  
  SystemDataProcessor();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180738d90(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180738d90(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  int64_t lStack_148;
  uint64_t uStack_140;
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  lStack_148 = 0;
  iVar1 = FUN_180749e60(param_1,&uStack_140,&lStack_148);
  if (iVar1 == 0) {
    iVar1 = func_0x0001807455d0(uStack_140,param_2,param_3);
    if (iVar1 == 0) goto FUN_180738e7f;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemDataProcessor(auStack_138,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5640_ptr);
  }
FUN_180738e7f:
  if (lStack_148 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180738dad(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180738dad(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t in_R11;
  uint64_t unaff_R14;
  int64_t lStack0000000000000030;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000140;
  
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  lStack0000000000000030 = 0;
  iVar1 = FUN_180749e60(param_1,&stack0x00000038,&stack0x00000030);
  if (iVar1 == 0) {
    iVar1 = func_0x0001807455d0(in_stack_00000038,param_2,param_3);
    if (iVar1 == 0) goto FUN_180738e7f;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar2 = SystemDataProcessor(&stack0x00000040,0x100,param_2);
    iVar3 = SystemDataProcessor(&stack0x00000040 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(&stack0x00000040 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,1,param_1,&processed_var_5640_ptr,&stack0x00000040);
  }
FUN_180738e7f:
  if (lStack0000000000000030 != 0) {
    SystemDataProcessor();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}






