#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part054.c - 6 个函数
// 函数: void function_29777a(int32_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
void function_29777a(int32_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
                  uint64_t param_5,float param_6)
{
  int *piVar1;
  float fVar2;
  char cVar3;
  ushort uVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  int64_t lVar7;
  char *unaff_RBX;
  uint64_t uVar8;
  char *unaff_RBP;
  float *pfVar9;
  char *unaff_RDI;
  float *unaff_R12;
  short sVar10;
  int iVar11;
  int64_t unaff_R13;
  int64_t unaff_R14;
  short *psVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar17;
  float unaff_XMM10_Da;
  float fVar18;
  float fVar19;
  float unaff_XMM11_Da;
  float fVar20;
  float unaff_XMM12_Da;
  float fVar21;
  float unaff_XMM14_Da;
  int iStack0000000000000034;
  float local_var_130;
  int *local_var_138;
  float local_var_140;
  float local_var_150;
  uint local_var_158;
  char local_var_168;
  float local_var_170;
  char local_var_178;
  iStack0000000000000034 = in_EAX + param_3 * 6;
  NetworkSystem_PacketSerializer(param_1,param_3 * 6,param_3 * 4);
  pfVar9 = *(float **)(unaff_R13 + 0x50);
  psVar12 = *(short **)(unaff_R13 + 0x58);
  iVar11 = *(int *)(unaff_R13 + 0x48);
  fVar18 = unaff_XMM10_Da;
  if (unaff_RBX < unaff_RDI) {
    do {
      if (local_var_168 == '\0') {
LAB_180297858:
        local_var_158 = (uint)*unaff_RBX;
        if (local_var_158 < 0x80) {
          unaff_RBX = unaff_RBX + 1;
        }
        else {
          iVar5 = function_121550(&local_buffer_00000158,unaff_RBX);
          unaff_RBX = unaff_RBX + iVar5;
          if (local_var_158 == 0) break;
        }
        if (local_var_158 < 0x20) {
          if (local_var_158 == 10) {
            unaff_XMM14_Da = unaff_XMM14_Da + unaff_XMM8_Da;
            unaff_XMM10_Da = fVar18;
            if (unaff_R12[3] <= unaff_XMM14_Da && unaff_XMM14_Da != unaff_R12[3]) break;
          }
          else if (local_var_158 != 0xd) goto LAB_1802978c4;
        }
        else {
LAB_1802978c4:
          if ((int)(local_var_158 & 0xffff) < *(int *)(unaff_R14 + 0x30)) {
            uVar4 = *(ushort *)
                     (*(int64_t *)(unaff_R14 + 0x38) + (uint64_t)(local_var_158 & 0xffff) * 2)
            ;
            if (uVar4 == 0xffff) {
              lVar7 = *(int64_t *)(unaff_R14 + 0x40);
            }
            else {
              lVar7 = *(int64_t *)(unaff_R14 + 0x18) + (uint64_t)uVar4 * 0x28;
            }
          }
          else {
            lVar7 = *(int64_t *)(unaff_R14 + 0x40);
          }
          if (((lVar7 != 0) &&
              (unaff_XMM11_Da = unaff_XMM9_Da * *(float *)(lVar7 + 4), local_var_158 != 0x20))
             && (local_var_158 != 9)) {
            fVar18 = unaff_R12[2];
            fVar16 = unaff_XMM9_Da * *(float *)(lVar7 + 8) + unaff_XMM10_Da;
            fVar13 = unaff_XMM9_Da * *(float *)(lVar7 + 0x10) + unaff_XMM10_Da;
            fVar15 = unaff_XMM9_Da * *(float *)(lVar7 + 0xc) + unaff_XMM14_Da;
            fVar14 = unaff_XMM9_Da * *(float *)(lVar7 + 0x14) + unaff_XMM14_Da;
            if ((fVar16 <= fVar18) && (fVar2 = *unaff_R12, fVar2 <= fVar13)) {
              fVar20 = *(float *)(lVar7 + 0x18);
              fVar21 = *(float *)(lVar7 + 0x1c);
              fVar17 = *(float *)(lVar7 + 0x20);
              fVar19 = *(float *)(lVar7 + 0x24);
              if (local_var_178 != '\0') {
                if (fVar16 < fVar2) {
                  fVar20 = fVar20 + (1.0 - (fVar13 - fVar2) / (fVar13 - fVar16)) * (fVar17 - fVar20)
                  ;
                  fVar16 = fVar2;
                }
                fVar2 = unaff_R12[1];
                if (fVar15 < fVar2) {
                  fVar21 = fVar21 + (1.0 - (fVar14 - fVar2) / (fVar14 - fVar15)) * (fVar19 - fVar21)
                  ;
                  fVar15 = fVar2;
                }
                if (fVar18 < fVar13) {
                  fVar17 = ((fVar18 - fVar16) / (fVar13 - fVar16)) * (fVar17 - fVar20) + fVar20;
                  fVar13 = fVar18;
                }
                fVar18 = unaff_R12[3];
                if (fVar18 < fVar14) {
                  fVar19 = ((fVar18 - fVar15) / (fVar14 - fVar15)) * (fVar19 - fVar21) + fVar21;
                  fVar14 = fVar18;
                }
                if (fVar14 <= fVar15) goto LAB_180297b2c;
              }
              sVar10 = (short)iVar11;
              *psVar12 = sVar10;
              psVar12[1] = sVar10 + 1;
              psVar12[2] = sVar10 + 2;
              psVar12[4] = sVar10 + 2;
              psVar12[5] = sVar10 + 3;
              psVar12[3] = sVar10;
              iVar11 = iVar11 + 4;
              pfVar9[4] = local_var_150;
              pfVar9[9] = local_var_150;
              pfVar9[0xe] = local_var_150;
              pfVar9[0x13] = local_var_150;
              *pfVar9 = fVar16;
              pfVar9[1] = fVar15;
              pfVar9[2] = fVar20;
              pfVar9[3] = fVar21;
              pfVar9[5] = fVar13;
              pfVar9[6] = fVar15;
              pfVar9[7] = fVar17;
              pfVar9[8] = fVar21;
              pfVar9[10] = fVar13;
              pfVar9[0xb] = fVar14;
              pfVar9[0xc] = fVar17;
              pfVar9[0xd] = fVar19;
              pfVar9[0xf] = fVar16;
              pfVar9[0x10] = fVar14;
              pfVar9[0x11] = fVar20;
              pfVar9[0x12] = fVar19;
              pfVar9 = pfVar9 + 0x14;
              psVar12 = psVar12 + 6;
            }
          }
LAB_180297b2c:
          unaff_XMM8_Da = local_var_130;
          unaff_XMM10_Da = unaff_XMM10_Da + unaff_XMM11_Da;
        }
      }
      else {
        if ((unaff_RBP == (char *)0x0) &&
           (unaff_RBP = (char *)function_2971b0(unaff_XMM12_Da - (unaff_XMM10_Da - fVar18),
                                              unaff_XMM9_Da,unaff_RBX), unaff_RBP == unaff_RBX)) {
          unaff_RBP = unaff_RBP + 1;
        }
        if (unaff_RBX < unaff_RBP) goto LAB_180297858;
        unaff_RBP = (char *)0x0;
        unaff_XMM14_Da = unaff_XMM14_Da + unaff_XMM8_Da;
        while( true ) {
          if (unaff_RDI <= unaff_RBX) goto label_297b6f;
          cVar3 = *unaff_RBX;
          if ((cVar3 != ' ') && (cVar3 != '\t')) break;
          unaff_RBX = unaff_RBX + 1;
        }
        unaff_XMM10_Da = fVar18;
        if (cVar3 == '\n') {
          unaff_RBX = unaff_RBX + 1;
        }
      }
      unaff_XMM11_Da = 0.0;
      unaff_XMM9_Da = local_var_140;
      fVar18 = param_6;
      unaff_XMM12_Da = local_var_170;
    } while (unaff_RBX < unaff_RDI);
  }
label_297b6f:
  function_13e800(local_var_138 + 8,
                ((int64_t)pfVar9 - *(int64_t *)(local_var_138 + 10)) / 0x14);
  iVar11 = local_var_138[5];
  uVar8 = (int64_t)psVar12 - *(int64_t *)(local_var_138 + 6) >> 1;
  iVar5 = (int)uVar8;
  if (iVar11 < iVar5) {
    if (iVar11 == 0) {
      uVar6 = 8;
    }
    else {
      uVar6 = iVar11 / 2 + iVar11;
    }
    uVar8 = uVar8 & 0xffffffff;
    if (iVar5 < (int)uVar6) {
      uVar8 = (uint64_t)uVar6;
    }
    Memory_CacheManager(local_var_138 + 4,uVar8);
  }
  local_var_138[4] = iVar5;
  piVar1 = (int *)(*(int64_t *)(local_var_138 + 2) + -0x30 +
                  (int64_t)*local_var_138 * 0x30);
  *piVar1 = *piVar1 + (iVar5 - iStack0000000000000034);
  *(float **)(local_var_138 + 0x14) = pfVar9;
  *(short **)(local_var_138 + 0x16) = psVar12;
  local_var_138[0x12] = local_var_138[8];
  return;
}
// 函数: void function_2977bb(void)
void function_2977bb(void)
{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int64_t lVar8;
  int iVar9;
  char *unaff_RBX;
  uint64_t uVar10;
  char *unaff_RBP;
  float *unaff_RSI;
  char *unaff_RDI;
  float *unaff_R12;
  short unaff_R13W;
  int64_t unaff_R14;
  short *unaff_R15;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar15;
  float unaff_XMM10_Da;
  float fVar16;
  float unaff_XMM11_Da;
  float fVar17;
  float unaff_XMM12_Da;
  float fVar18;
  float unaff_XMM14_Da;
  float fVar19;
  float fStack0000000000000030;
  int iStack0000000000000034;
  float local_var_130;
  int *local_var_138;
  float local_var_140;
  float local_var_150;
  uint local_var_158;
  char local_var_168;
  float local_var_170;
  char local_var_178;
  fVar19 = unaff_XMM10_Da;
  do {
    if (local_var_168 == '\0') {
LAB_180297858:
      local_var_158 = (uint)*unaff_RBX;
      if (local_var_158 < 0x80) {
        unaff_RBX = unaff_RBX + 1;
      }
      else {
        iVar6 = function_121550(&local_buffer_00000158,unaff_RBX);
        unaff_RBX = unaff_RBX + iVar6;
        if (local_var_158 == 0) break;
      }
      if (local_var_158 < 0x20) {
        if (local_var_158 == 10) {
          unaff_XMM14_Da = unaff_XMM14_Da + unaff_XMM8_Da;
          fVar19 = unaff_XMM10_Da;
          if (unaff_R12[3] <= unaff_XMM14_Da && unaff_XMM14_Da != unaff_R12[3]) break;
        }
        else if (local_var_158 != 0xd) goto LAB_1802978c4;
      }
      else {
LAB_1802978c4:
        if ((int)(local_var_158 & 0xffff) < *(int *)(unaff_R14 + 0x30)) {
          uVar5 = *(ushort *)
                   (*(int64_t *)(unaff_R14 + 0x38) + (uint64_t)(local_var_158 & 0xffff) * 2);
          if (uVar5 == 0xffff) {
            lVar8 = *(int64_t *)(unaff_R14 + 0x40);
          }
          else {
            lVar8 = *(int64_t *)(unaff_R14 + 0x18) + (uint64_t)uVar5 * 0x28;
          }
        }
        else {
          lVar8 = *(int64_t *)(unaff_R14 + 0x40);
        }
        if (((lVar8 != 0) &&
            (unaff_XMM11_Da = unaff_XMM9_Da * *(float *)(lVar8 + 4), local_var_158 != 0x20)) &&
           (local_var_158 != 9)) {
          fVar2 = unaff_R12[2];
          fVar14 = unaff_XMM9_Da * *(float *)(lVar8 + 8) + fVar19;
          fVar11 = unaff_XMM9_Da * *(float *)(lVar8 + 0x10) + fVar19;
          fVar13 = unaff_XMM9_Da * *(float *)(lVar8 + 0xc) + unaff_XMM14_Da;
          fVar12 = unaff_XMM9_Da * *(float *)(lVar8 + 0x14) + unaff_XMM14_Da;
          if ((fVar14 <= fVar2) && (fVar3 = *unaff_R12, fVar3 <= fVar11)) {
            fVar17 = *(float *)(lVar8 + 0x18);
            fVar18 = *(float *)(lVar8 + 0x1c);
            fVar15 = *(float *)(lVar8 + 0x20);
            fVar16 = *(float *)(lVar8 + 0x24);
            if (local_var_178 != '\0') {
              if (fVar14 < fVar3) {
                fVar17 = fVar17 + (1.0 - (fVar11 - fVar3) / (fVar11 - fVar14)) * (fVar15 - fVar17);
                fVar14 = fVar3;
              }
              fVar3 = unaff_R12[1];
              if (fVar13 < fVar3) {
                fVar18 = fVar18 + (1.0 - (fVar12 - fVar3) / (fVar12 - fVar13)) * (fVar16 - fVar18);
                fVar13 = fVar3;
              }
              if (fVar2 < fVar11) {
                fVar15 = ((fVar2 - fVar14) / (fVar11 - fVar14)) * (fVar15 - fVar17) + fVar17;
                fVar11 = fVar2;
              }
              fVar2 = unaff_R12[3];
              if (fVar2 < fVar12) {
                fVar16 = ((fVar2 - fVar13) / (fVar12 - fVar13)) * (fVar16 - fVar18) + fVar18;
                fVar12 = fVar2;
              }
              if (fVar12 <= fVar13) goto LAB_180297b2c;
            }
            *unaff_R15 = unaff_R13W;
            unaff_R15[1] = unaff_R13W + 1;
            unaff_R15[2] = unaff_R13W + 2;
            unaff_R15[4] = unaff_R13W + 2;
            unaff_R15[5] = unaff_R13W + 3;
            unaff_R15[3] = unaff_R13W;
            unaff_R13W = unaff_R13W + 4;
            unaff_RSI[4] = local_var_150;
            unaff_RSI[9] = local_var_150;
            unaff_RSI[0xe] = local_var_150;
            unaff_RSI[0x13] = local_var_150;
            *unaff_RSI = fVar14;
            unaff_RSI[1] = fVar13;
            unaff_RSI[2] = fVar17;
            unaff_RSI[3] = fVar18;
            unaff_RSI[5] = fVar11;
            unaff_RSI[6] = fVar13;
            unaff_RSI[7] = fVar15;
            unaff_RSI[8] = fVar18;
            unaff_RSI[10] = fVar11;
            unaff_RSI[0xb] = fVar12;
            unaff_RSI[0xc] = fVar15;
            unaff_RSI[0xd] = fVar16;
            unaff_RSI[0xf] = fVar14;
            unaff_RSI[0x10] = fVar12;
            unaff_RSI[0x11] = fVar17;
            unaff_RSI[0x12] = fVar16;
            unaff_RSI = unaff_RSI + 0x14;
            unaff_R15 = unaff_R15 + 6;
          }
        }
LAB_180297b2c:
        unaff_XMM8_Da = local_var_130;
        fVar19 = fVar19 + unaff_XMM11_Da;
      }
    }
    else {
      if ((unaff_RBP == (char *)0x0) &&
         (unaff_RBP = (char *)function_2971b0(unaff_XMM12_Da - (fVar19 - unaff_XMM10_Da),unaff_XMM9_Da
                                            ,unaff_RBX), unaff_RBP == unaff_RBX)) {
        unaff_RBP = unaff_RBP + 1;
      }
      if (unaff_RBX < unaff_RBP) goto LAB_180297858;
      unaff_RBP = (char *)0x0;
      unaff_XMM14_Da = unaff_XMM14_Da + unaff_XMM8_Da;
      while( true ) {
        if (unaff_RDI <= unaff_RBX) goto LAB_180297b63;
        cVar4 = *unaff_RBX;
        if ((cVar4 != ' ') && (cVar4 != '\t')) break;
        unaff_RBX = unaff_RBX + 1;
      }
      fVar19 = unaff_XMM10_Da;
      if (cVar4 == '\n') {
        unaff_RBX = unaff_RBX + 1;
      }
    }
    unaff_XMM11_Da = 0.0;
    unaff_XMM9_Da = local_var_140;
    unaff_XMM10_Da = fStack0000000000000030;
    unaff_XMM12_Da = local_var_170;
  } while (unaff_RBX < unaff_RDI);
LAB_180297b63:
  function_13e800(local_var_138 + 8,
                ((int64_t)unaff_RSI - *(int64_t *)(local_var_138 + 10)) / 0x14);
  iVar6 = local_var_138[5];
  uVar10 = (int64_t)unaff_R15 - *(int64_t *)(local_var_138 + 6) >> 1;
  iVar9 = (int)uVar10;
  if (iVar6 < iVar9) {
    if (iVar6 == 0) {
      uVar7 = 8;
    }
    else {
      uVar7 = iVar6 / 2 + iVar6;
    }
    uVar10 = uVar10 & 0xffffffff;
    if (iVar9 < (int)uVar7) {
      uVar10 = (uint64_t)uVar7;
    }
    Memory_CacheManager(local_var_138 + 4,uVar10);
  }
  local_var_138[4] = iVar9;
  piVar1 = (int *)(*(int64_t *)(local_var_138 + 2) + -0x30 +
                  (int64_t)*local_var_138 * 0x30);
  *piVar1 = *piVar1 + (iVar9 - iStack0000000000000034);
  *(float **)(local_var_138 + 0x14) = unaff_RSI;
  *(short **)(local_var_138 + 0x16) = unaff_R15;
  local_var_138[0x12] = local_var_138[8];
  return;
}
// 函数: void function_297b6f(void)
void function_297b6f(void)
{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t unaff_RSI;
  int64_t unaff_R15;
  uint64_t local_var_30;
  int *local_var_138;
  function_13e800(local_var_138 + 8,(unaff_RSI - *(int64_t *)(local_var_138 + 10)) / 0x14);
  iVar2 = local_var_138[5];
  uVar5 = unaff_R15 - *(int64_t *)(local_var_138 + 6) >> 1;
  iVar4 = (int)uVar5;
  if (iVar2 < iVar4) {
    if (iVar2 == 0) {
      uVar3 = 8;
    }
    else {
      uVar3 = iVar2 / 2 + iVar2;
    }
    uVar5 = uVar5 & 0xffffffff;
    if (iVar4 < (int)uVar3) {
      uVar5 = (uint64_t)uVar3;
    }
    Memory_CacheManager(local_var_138 + 4,uVar5);
  }
  local_var_138[4] = iVar4;
  piVar1 = (int *)(*(int64_t *)(local_var_138 + 2) + -0x30 +
                  (int64_t)*local_var_138 * 0x30);
  *piVar1 = *piVar1 + (iVar4 - local_var_30._4_4_);
  *(int64_t *)(local_var_138 + 0x14) = unaff_RSI;
  *(int64_t *)(local_var_138 + 0x16) = unaff_R15;
  local_var_138[0x12] = local_var_138[8];
  return;
}
// 函数: void function_297c0f(void)
void function_297c0f(void)
{
  return;
}
// 函数: void function_297c3d(void)
void function_297c3d(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_297c60(uint64_t param_1,float param_2,uint param_3)
void function_297c60(uint64_t param_1,float param_2,uint param_3)
{
  float fVar1;
  float fVar2;
  bool bVar3;
  int64_t lVar4;
  float *pfVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int8_t stack_array_148 [32];
  float *pfStack_128;
  int32_t local_var_120;
  uint64_t local_var_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint64_t local_var_c0;
  lVar4 = SYSTEM_DATA_MANAGER_A;
  local_var_c0 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  lVar6 = (int64_t)(int)param_3;
  local_var_118 = param_1;
  if (param_3 != 0xffffffff) {
    pfVar5 = &fStack_e0;
    lVar7 = 4;
    lVar9 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0xa0);
    do {
      SystemFunction_00018005d390(pfVar5);
      pfVar5 = pfVar5 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if ((param_3 < 8) && ((*(byte *)(lVar9 + 4) & 2) == 0)) {
      fVar12 = local_var_118._4_4_ - *(float *)(lVar6 * 0x18 + 0x180bf9104);
      fVar13 = (float)local_var_118 - *(float *)(lVar6 * 0x18 + 0x180bf9100);
      lVar7 = (int64_t)*(int *)(lVar9 + 0x70) * 0x20 + *(int64_t *)(lVar9 + 0x58);
      fVar1 = *(float *)(lVar6 * 0x18 + 0x180bf90f8);
      fVar2 = *(float *)(lVar6 * 0x18 + 0x180bf90fc);
      local_var_118 = CONCAT44(fVar12,fVar13);
      fVar11 = (float)*(ushort *)(lVar7 + 8) + *(float *)(lVar6 * 0x18 + 0x180bf90f0);
      fStack_e0 = fVar11 * *(float *)(lVar9 + 0x30);
      fVar10 = (float)*(ushort *)(lVar7 + 10) + *(float *)(lVar6 * 0x18 + 0x180bf90f4);
      fStack_dc = fVar10 * *(float *)(lVar9 + 0x34);
      fStack_d4 = (fVar2 + fVar10) * *(float *)(lVar9 + 0x34);
      fStack_d8 = (fVar11 + fVar1) * *(float *)(lVar9 + 0x30);
      fStack_d0 = (fVar11 + 109.0) * *(float *)(lVar9 + 0x30);
      fStack_cc = fVar10 * *(float *)(lVar9 + 0x34);
      fStack_c8 = (fVar11 + 109.0 + fVar1) * *(float *)(lVar9 + 0x30);
      fStack_c4 = (fVar2 + fVar10) * *(float *)(lVar9 + 0x34);
      lVar6 = *(int64_t *)(lVar9 + 8);
      iVar8 = 0;
      if (0 < *(int *)(lVar4 + 0x1c68)) {
        lVar9 = 0;
        do {
          lVar7 = *(int64_t *)(lVar9 + *(int64_t *)(lVar4 + 0x1c70));
          if ((((fVar12 < *(float *)(lVar7 + 0xc) + *(float *)(lVar7 + 0x14)) &&
               (*(float *)(lVar7 + 0xc) < (fVar2 + 2.0) * param_2 + fVar12)) &&
              (fVar13 < *(float *)(lVar7 + 8) + *(float *)(lVar7 + 0x10))) &&
             (*(float *)(lVar7 + 8) < (fVar1 + 2.0) * param_2 + fVar13)) {
            lVar7 = function_1247c0();
            RenderingSystem_TextureLoader(lVar7,lVar6);
            fVar11 = fVar2 * param_2;
            fStack_108 = fVar13 + param_2;
            fVar10 = fVar1 * param_2;
            fStack_10c = fVar11 + fVar12;
            fStack_110 = fStack_108 + fVar10;
            fStack_104 = fVar12;
            if ((*(int *)(lVar7 + 0x70) == 0) ||
               (lVar6 != *(int64_t *)
                          (*(int64_t *)(lVar7 + 0x78) + -8 + (int64_t)*(int *)(lVar7 + 0x70) * 8))
               ) {
              bVar3 = true;
              RenderingSystem_TextureLoader(lVar7,lVar6);
            }
            else {
              bVar3 = false;
            }
            NetworkSystem_PacketSerializer(lVar7,6,4);
            pfStack_128 = &fStack_c8;
            local_var_120 = 0x30000000;
            function_292290(lVar7,&fStack_108,&fStack_110,&fStack_d0);
            if (bVar3) {
              *(int *)(lVar7 + 0x70) = *(int *)(lVar7 + 0x70) + -1;
              SystemCore_Initialize(lVar7);
            }
            fStack_fc = fVar12 + fVar11;
            fStack_f8 = param_2 + param_2 + fVar13;
            fStack_100 = fStack_f8 + fVar10;
            fStack_f4 = fVar12;
            if ((*(int *)(lVar7 + 0x70) == 0) ||
               (lVar6 != *(int64_t *)
                          (*(int64_t *)(lVar7 + 0x78) + -8 + (int64_t)*(int *)(lVar7 + 0x70) * 8))
               ) {
              bVar3 = true;
              RenderingSystem_TextureLoader(lVar7,lVar6);
            }
            else {
              bVar3 = false;
            }
            NetworkSystem_PacketSerializer(lVar7,6,4);
            pfStack_128 = &fStack_c8;
            local_var_120 = 0x30000000;
            function_292290(lVar7,&fStack_f8,&fStack_100,&fStack_d0);
            if (bVar3) {
              *(int *)(lVar7 + 0x70) = *(int *)(lVar7 + 0x70) + -1;
              SystemCore_Initialize(lVar7);
            }
            fVar10 = fVar10 + fVar13;
            fVar11 = fVar11 + fVar12;
            fStack_f0 = fVar10;
            fStack_ec = fVar11;
            if ((*(int *)(lVar7 + 0x70) == 0) ||
               (lVar6 != *(int64_t *)
                          (*(int64_t *)(lVar7 + 0x78) + -8 + (int64_t)*(int *)(lVar7 + 0x70) * 8))
               ) {
              bVar3 = true;
              RenderingSystem_TextureLoader(lVar7,lVar6);
            }
            else {
              bVar3 = false;
            }
            NetworkSystem_PacketSerializer(lVar7,6,4);
            pfStack_128 = &fStack_c8;
            local_var_120 = 0xff000000;
            function_292290(lVar7,&local_var_118,&fStack_f0,&fStack_d0);
            if (bVar3) {
              *(int *)(lVar7 + 0x70) = *(int *)(lVar7 + 0x70) + -1;
              SystemCore_Initialize(lVar7);
            }
            fStack_e8 = fVar10;
            fStack_e4 = fVar11;
            if ((*(int *)(lVar7 + 0x70) == 0) ||
               (lVar6 != *(int64_t *)
                          (*(int64_t *)(lVar7 + 0x78) + -8 + (int64_t)*(int *)(lVar7 + 0x70) * 8))
               ) {
              bVar3 = true;
              RenderingSystem_TextureLoader(lVar7,lVar6);
            }
            else {
              bVar3 = false;
            }
            NetworkSystem_PacketSerializer(lVar7,6,4);
            pfStack_128 = &fStack_d8;
            local_var_120 = 0xffffffff;
            function_292290(lVar7,&local_var_118,&fStack_e8,&fStack_e0);
            if (bVar3) {
              *(int *)(lVar7 + 0x70) = *(int *)(lVar7 + 0x70) + -1;
              SystemCore_Initialize(lVar7);
            }
            *(int *)(lVar7 + 0x70) = *(int *)(lVar7 + 0x70) + -1;
            SystemCore_Initialize(lVar7);
          }
          iVar8 = iVar8 + 1;
          lVar9 = lVar9 + 8;
        } while (iVar8 < *(int *)(lVar4 + 0x1c68));
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_c0 ^ (uint64_t)stack_array_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address