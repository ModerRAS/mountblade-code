/* 函数别名定义: SystemOutputManager */
#define SystemOutputManager SystemOutputManager
#include "SystemOutputManager0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part582.c - 5 个函数
// 函数: void NetworkSystem_89516(uint64_t param_1)
void NetworkSystem_89516(uint64_t param_1)
{
  float fVar1;
  char in_AL;
  byte *pbVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t lVar5;
  int64_t unaff_R12;
  int64_t unaff_R13;
  float fVar6;
  float fVar7;
  float unaff_XMM6_Da;
  float unaff_XMM10_Da;
  float fVar8;
  int8_t local_buffer_40;
  uint64_t local_buffer_70;
  uint64_t local_buffer_78;
  *(uint64_t *)(unaff_RBP + -0x70) = unaff_RSI;
  if (-1 < in_AL) {
    fVar6 = **(float **)(unaff_RBP + 0x100);
    fVar8 = (*(float **)(unaff_RBP + 0x100))[in_AL];
    fVar1 = **(float **)(unaff_RBP + 0xf8);
    fVar7 = (unaff_XMM10_Da - fVar8) * (*(float **)(unaff_RBP + 0xf8))[in_AL] + fVar8;
    *(float *)(unaff_R12 + 0x74) = fVar7;
    if (fVar7 <= unaff_XMM6_Da) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = fVar8 / fVar7;
    }
    fVar7 = fVar7 - ((unaff_XMM10_Da - fVar6) * fVar1 + fVar6);
    if (fVar7 <= unaff_XMM6_Da) {
      fVar7 = unaff_XMM6_Da;
    }
    *(float *)(unaff_R12 + 0x70) = fVar7 * fVar8;
    if (unaff_XMM6_Da < fVar7 * fVar8) {
      lVar4 = (int64_t)*(int *)(unaff_R12 + 0x12b0);
      lVar5 = 0;
      fVar8 = 0.0;
      fVar6 = 0.0;
      if (3 < lVar4) {
        pbVar2 = (byte *)(unaff_R12 + 0x12dc);
        lVar3 = (lVar4 - 4U >> 2) + 1;
        lVar5 = lVar3 * 4;
        do {
          if ((*pbVar2 & 8) != 0) {
            fVar6 = fVar6 + *(float *)(pbVar2 + -0x18);
          }
          if ((pbVar2[0x48] & 8) != 0) {
            fVar6 = fVar6 + *(float *)(pbVar2 + 0x30);
          }
          if ((pbVar2[0x90] & 8) != 0) {
            fVar6 = fVar6 + *(float *)(pbVar2 + 0x78);
          }
          fVar8 = fVar8 + *(float *)(pbVar2 + -0x18) + *(float *)(pbVar2 + 0x30) +
                  *(float *)(pbVar2 + 0x78) + *(float *)(pbVar2 + 0xc0);
          if ((pbVar2[0xd8] & 8) != 0) {
            fVar6 = fVar6 + *(float *)(pbVar2 + 0xc0);
          }
          pbVar2 = pbVar2 + 0x120;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (lVar5 < lVar4) {
        lVar4 = lVar4 - lVar5;
        pbVar2 = (byte *)(unaff_R12 + 0x12dc + lVar5 * 0x48);
        do {
          fVar8 = fVar8 + *(float *)(pbVar2 + -0x18);
          if ((*pbVar2 & 8) != 0) {
            fVar6 = fVar6 + *(float *)(pbVar2 + -0x18);
          }
          pbVar2 = pbVar2 + 0x48;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (fVar6 == unaff_XMM6_Da) {
        *(int32_t *)(unaff_R12 + 0x70) = 0;
      }
      else {
        *(float *)(unaff_R12 + 0x70) = (fVar6 / fVar8) * *(float *)(unaff_R12 + 0x70);
      }
    }
  }
  local_buffer_78 = *(uint64_t *)(unaff_R13 + 0x208);
  local_buffer_40 =
       *(float *)(unaff_R13 + 0x38) <= 0.005 && *(float *)(unaff_R13 + 0x38) != 0.005;
  local_buffer_70 = param_1;
  if (unaff_XMM6_Da < *(float *)(unaff_R12 + 0x1284)) {
// WARNING: Subroutine does not return
    memset(0x3ba3d70a,0,0x1050);
  }
  if (unaff_XMM6_Da < *(float *)(unaff_R12 + 0x2434)) {
// WARNING: Subroutine does not return
    memset(0x3ba3d70a,0,0x1050);
  }
  *(uint64_t *)(unaff_R12 + 0x80) = 0x3f800000;
  *(uint64_t *)(unaff_R12 + 0x88) = 0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x40) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkSystem_896aa(void)
void NetworkSystem_896aa(void)
{
  int64_t unaff_RBP;
  int64_t unaff_R12;
  bool in_CF;
  bool in_ZF;
  float unaff_XMM6_Da;
  int8_t local_buffer_40;
  local_buffer_40 = !in_CF && !in_ZF;
  if (unaff_XMM6_Da < *(float *)(unaff_R12 + 0x1284)) {
// WARNING: Subroutine does not return
    memset();
  }
  if (unaff_XMM6_Da < *(float *)(unaff_R12 + 0x2434)) {
// WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(unaff_R12 + 0x80) = 0x3f800000;
  *(uint64_t *)(unaff_R12 + 0x88) = 0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x40) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkSystem_89b5d(void)
void NetworkSystem_89b5d(void)
{
// WARNING: Subroutine does not return
  memset();
}
// 函数: void NetworkSystem_8a130(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
void NetworkSystem_8a130(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6)
{
  int32_t uVar1;
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 2;
  }
  UISystem_33100(param_1 + 0xf0 + (int64_t)param_2 * 0x11b0,param_3,param_4,param_5,param_6,uVar1,0)
  ;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkSystem_8a190(int64_t *param_1,uint *param_2,uint64_t param_3)
{
  int iVar1;
  char cVar2;
  int iVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint uVar10;
  int *piVar11;
  uint64_t uVar12;
  uint uVar13;
  int64_t lVar14;
  uint64_t *puVar15;
  uint *puVar16;
  uint64_t uVar17;
  int64_t lVar18;
  uint uVar19;
  uint64_t uVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint3 uVar28;
  uVar6 = param_2[1];
  uVar13 = 0;
  uVar19 = uVar6;
  if (((param_2[2] & 0x80000000) == 0) &&
     (lVar18 = (int64_t)*(int *)((int64_t)param_1 + 0xac) * 0xe0 + render_system_config,
     uVar6 != 0xffffffff)) {
    iVar3 = *(int *)(*(int64_t *)(lVar18 + 0x78) + 4 + (int64_t)(int)uVar6 * 8);
    if (iVar3 != -1) {
      puVar15 = (uint64_t *)((int64_t)iVar3 * 0x20 + *(int64_t *)(lVar18 + 0xb8));
      piVar11 = (int *)*puVar15;
      iVar3 = (int)(puVar15[1] - (int64_t)piVar11 >> 2);
      lVar14 = (int64_t)iVar3;
      if (0 < iVar3) {
        do {
          iVar1 = *(int *)(render_system_config +
                          (int64_t)*(int *)(*(int64_t *)(lVar18 + 0x78) + (int64_t)*piVar11 * 8)
                          * 4);
          if (iVar1 == -1) {
            lVar7 = 0;
          }
          else {
            lVar7 = *(int64_t *)(render_system_config + (int64_t)iVar1 * 8);
          }
          piVar11 = piVar11 + 1;
          uVar13 = uVar13 + (uint)((uint64_t)*(uint64_t *)(lVar7 + 0x1d0) >> 0x3c);
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        if (uVar13 != 0) {
          system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
          system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
          system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
          uVar10 = (system_memory_flags - 1) % uVar13;
          if (0 < iVar3) {
            puVar16 = (uint *)*puVar15;
            lVar14 = 0;
            do {
              iVar1 = *(int *)(render_system_config +
                              (int64_t)
                              *(int *)(*(int64_t *)(lVar18 + 0x78) + (int64_t)(int)*puVar16 * 8) *
                              4);
              if (iVar1 == -1) {
                lVar7 = 0;
              }
              else {
                lVar7 = *(int64_t *)(render_system_config + (int64_t)iVar1 * 8);
              }
              uVar13 = uVar13 - (uint)((uint64_t)*(uint64_t *)(lVar7 + 0x1d0) >> 0x3c);
              uVar19 = *puVar16;
              if ((int)uVar13 <= (int)uVar10) break;
              lVar14 = lVar14 + 1;
              puVar16 = puVar16 + 1;
              uVar19 = uVar6;
            } while (lVar14 < iVar3);
          }
        }
      }
    }
  }
  uVar8 = 0;
  fVar26 = (float)param_2[5];
  if (uVar19 == 0xffffffff) {
LAB_18058a3a1:
    uVar20 = 0;
  }
  else {
    uVar6 = param_2[0xb];
    iVar3 = SystemCacheManager(&system_data_5f30,*(int32_t *)((int64_t)param_1 + 0xac),uVar19);
    if ((char)uVar6 == '\0') {
LAB_18058a36c:
      iVar3 = *(int *)(render_system_config + (int64_t)iVar3 * 4);
      if (iVar3 == -1) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint64_t *)(render_system_config + (int64_t)iVar3 * 8);
      }
    }
    else {
      if (iVar3 < 0) {
        iVar3 = SystemCacheManager(&system_data_5f30,*(int32_t *)((int64_t)param_1 + 0xac),uVar19);
        goto LAB_18058a36c;
      }
      uVar8 = NetworkSystem_8d7f0(&system_data_61e0,iVar3,fVar26);
      fVar26 = 0.0;
    }
    if (uVar8 == 0) goto LAB_18058a3a1;
    uVar20 = *(uint64_t *)(uVar8 + 0x1d0);
  }
  uVar12 = 0;
  uVar20 = uVar20 | *(uint64_t *)(param_2 + 2);
  if (((*(char *)((int64_t)param_2 + 0x2a) == '\0') ||
      (uVar19 == *(uint *)(param_1 + (int64_t)(int)*param_2 * 9 + 0x48a))) &&
     ((uVar20 >> 0xf & 1) == 0)) {
    uVar6 = param_2[1];
    uVar13 = *(uint *)(param_1 + (int64_t)(int)*param_2 * 9 + 0x48a);
    lVar18 = (int64_t)(int)*param_2;
    if ((uVar6 == uVar13) ||
       (((uVar6 != 0xffffffff && (uVar13 != 0xffffffff)) &&
        ((lVar18 = *(int64_t *)
                    ((int64_t)*(int *)((int64_t)param_1 + 0xac) * 0xe0 + 0x78 + render_system_config),
         iVar3 = *(int *)(lVar18 + 4 + (int64_t)(int)uVar6 * 8),
         iVar3 == *(int *)(lVar18 + 4 + (int64_t)(int)uVar13 * 8) &&
         (lVar18 = (int64_t)(int)uVar13, iVar3 != -1)))))) {
      return CONCAT71((int7)((uint64_t)lVar18 >> 8),1);
    }
  }
  if ((uVar20 >> 0x1c & 1) == 0) {
    fVar25 = (float)param_2[6];
  }
  else {
    fVar25 = 0.0;
  }
  if ((((char)param_2[10] == '\0') && (*param_2 == 1)) && (uVar19 != 0xffffffff)) {
    uVar9 = uVar12;
    if (param_1[0x48c] != 0) {
      uVar9 = *(uint64_t *)(param_1[0x48c] + 0x1d0);
    }
    if (((param_1[0x48e] | uVar9) & 0x2000000000) != 0) {
      return 0;
    }
  }
  uVar6 = param_2[4];
  fVar27 = fVar26;
  cVar2 = NetworkSystem_8d6b0(param_1 + (int64_t)(int)*param_2 * 9 + 0x48a,uVar19,uVar8,
                        *(uint64_t *)(param_2 + 2),uVar6,fVar25,param_2[7],param_2[8],param_2[9],
                        fVar26,*(int8_t *)((int64_t)param_2 + 0x29),(char)param_2[10]);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar13 = *param_2;
  *(int32_t *)((int64_t)param_1 + (int64_t)(int)uVar13 * 0x48 + 0x2454) = 0xffffffff;
  param_1[(int64_t)(int)uVar13 * 9 + 0x48d] = 0;
  if (uVar8 == 0) {
    fVar26 = (float)param_2[7];
    if (fVar26 == -0.2) {
      fVar26 = 0.4;
    }
    (**(code **)(*param_1 + 0x78))(param_1,*param_2,0,fVar26,uVar6 & 0xffffff00);
    goto LAB_18058a8e1;
  }
  UISystem_043b0(uVar8);
  fVar24 = (float)param_2[7];
  if ((-0.001 < fVar24 - -0.2) && (fVar24 - -0.2 < 0.001)) {
    fVar24 = *(float *)(uVar8 + 0x1e4);
  }
  if (fVar26 <= 0.0) {
    uVar4 = Function_5ca86c28(param_1,*param_2);
    bVar21 = (*(uint *)(uVar8 + 0x1d0) & 0x12208000) == 0;
LAB_18058a7c4:
    fVar26 = 1.0;
    (**(code **)(*param_1 + 0x70))
              (param_1,*param_2,uVar8,param_3,0x3f800000,param_2[4],uVar4,fVar24,fVar25,
               (uint)fVar27 & 0xffffff00,1,!bVar21,*(int8_t *)((int64_t)param_2 + 0x29));
  }
  else {
    iVar3 = SystemCacheManager(&system_data_5f30,*(int32_t *)((int64_t)param_1 + 0xac),uVar19);
    iVar3 = *(int *)(render_system_config + (int64_t)iVar3 * 4);
    uVar9 = uVar12;
    if (iVar3 != -1) {
      uVar9 = *(uint64_t *)(render_system_config + (int64_t)iVar3 * 8);
    }
    uVar4 = *(int32_t *)(uVar9 + 0x1ec);
    iVar3 = SystemCacheManager(&system_data_5f30,*(int32_t *)((int64_t)param_1 + 0xac),uVar4);
    iVar3 = *(int *)(render_system_config + (int64_t)iVar3 * 4);
    if (iVar3 != -1) {
      uVar12 = *(uint64_t *)(render_system_config + (int64_t)iVar3 * 8);
    }
    uVar9 = (uint64_t)((uint)uVar20 & 0x12208000);
    if (uVar8 == uVar12) {
      uVar4 = Function_5ca86c28(param_1,*param_2);
      bVar21 = uVar9 == 0;
      goto LAB_18058a7c4;
    }
    uVar17 = (uint64_t)*param_2;
    fVar23 = *(float *)(uVar8 + 0x188);
    fVar22 = 1.0 - fVar26;
    uVar5 = Function_5ca86c28(param_1,uVar17);
    uVar28 = (uint3)((uint)fVar27 >> 8);
    if (1.0 <= fVar26) {
      fVar26 = 1.0;
      (**(code **)(*param_1 + 0x70))
                (param_1,uVar17 & 0xffffffff,uVar12,param_3,0x3f800000,param_2[4],uVar5,fVar24,
                 fVar25,(uint)uVar28 << 8,1,uVar9 != 0,*(int8_t *)((int64_t)param_2 + 0x29));
    }
    else {
      uVar6 = (uint)uVar28 << 8;
      fVar27 = 1.0 / (fVar23 * fVar22 + fVar26 * *(float *)(uVar12 + 0x188));
      (**(code **)(*param_1 + 0x70))
                (param_1,uVar17 & 0xffffffff,uVar8,param_3,fVar22,param_2[4],uVar5,fVar24,
                 fVar23 * fVar25 * fVar27,uVar6,1,uVar9 != 0);
      uVar5 = Function_5ca86c28(param_1,*param_2);
      (**(code **)(*param_1 + 0x70))
                (param_1,*param_2,uVar12,param_3,fVar26,param_2[4],uVar5,fVar24,
                 fVar25 * *(float *)(uVar12 + 0x188) * fVar27,uVar6 & 0xffffff00,0,uVar9 != 0,
                 *(int8_t *)((int64_t)param_2 + 0x29));
    }
    uVar6 = *param_2;
    *(int32_t *)((int64_t)param_1 + (int64_t)(int)uVar6 * 0x48 + 0x2454) = uVar4;
    param_1[(int64_t)(int)uVar6 * 9 + 0x48d] = uVar12;
  }
  if (((*param_2 == 0) && ((uVar20 & 0x2000000000) != 0)) && ((int)param_1[0x493] != -1)) {
    *(int32_t *)(param_1 + 0x493) = 0xffffffff;
    uVar6 = (int)param_1[0x494] + 1U & 0x8000000f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
    }
    *(uint *)(param_1 + 0x494) = uVar6;
    param_1[0x495] = 0;
    param_1[0x497] = 0;
    *(int32_t *)(param_1 + 0x498) = 0;
    *(int32_t *)((int64_t)param_1 + 0x24c4) = 0x3f800000;
    *(int32_t *)(param_1 + 0x499) = 0xbe4ccccd;
    *(int32_t *)((int64_t)param_1 + 0x24cc) = 0xbe4ccccd;
    param_1[0x49a] = 0x3ecccccd;
    *(int8_t *)(param_1 + 0x49b) = 0;
    *(int32_t *)((int64_t)param_1 + 0x249c) = 0xffffffff;
    param_1[0x496] = 0;
    (**(code **)(*param_1 + 0x78))(param_1,1,0,0x3ecccccd,(uint)fVar26 & 0xffffff00);
  }
LAB_18058a8e1:
  if ((param_1[0x49e] == 0) && (param_1[0x49f] == 0)) {
    return 1;
  }
  (*(code *)param_1[0x49f])(param_1[0x49e],param_1);
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkSystem_8a422(void)
{
  uint uVar1;
  int32_t uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint *unaff_RSI;
  int64_t *unaff_RDI;
  uint64_t uVar7;
  uint64_t uVar8;
  int unaff_R14D;
  uint64_t unaff_R15;
  bool bVar9;
  int32_t extraout_XMM0_Da;
  float fVar10;
  int32_t extraout_XMM0_Da_00;
  int32_t uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fStack0000000000000028;
  uint local_buffer_30;
  float fStack0000000000000038;
  float fStack0000000000000040;
  float fStack0000000000000048;
  int8_t local_buffer_50;
  char cStack0000000000000058;
  uint64_t local_var_100;
  if ((unaff_R15 >> 0x1c & 1) == 0) {
    fVar14 = (float)unaff_RSI[6];
  }
  else {
    fVar14 = 0.0;
  }
  cStack0000000000000058 = (char)unaff_RSI[10];
  if (((cStack0000000000000058 == '\0') && (*unaff_RSI == 1)) && (unaff_R14D != -1)) {
    uVar6 = unaff_RBX;
    if (unaff_RDI[0x48c] != 0) {
      uVar6 = *(uint64_t *)(unaff_RDI[0x48c] + 0x1d0);
    }
    if (((unaff_RDI[0x48e] | uVar6) & 0x2000000000) != 0) {
      return 0;
    }
  }
  local_buffer_50 = *(int8_t *)((int64_t)unaff_RSI + 0x29);
  fStack0000000000000040 = (float)unaff_RSI[9];
  fStack0000000000000038 = (float)unaff_RSI[8];
  local_buffer_30 = unaff_RSI[7];
  uVar5 = unaff_RSI[4];
  fStack0000000000000028 = fVar14;
  fStack0000000000000048 = unaff_XMM8_Da;
  cVar3 = NetworkSystem_8d6b0(unaff_RDI + (int64_t)(int)*unaff_RSI * 9 + 0x48a,unaff_R14D,
                        fStack0000000000000040,fStack0000000000000038,uVar5);
  if (cVar3 == '\0') {
    return 0;
  }
  uVar1 = *unaff_RSI;
  *(int32_t *)((int64_t)unaff_RDI + (int64_t)(int)uVar1 * 0x48 + 0x2454) = 0xffffffff;
  unaff_RDI[(int64_t)(int)uVar1 * 9 + 0x48d] = unaff_RBX;
  if (unaff_RBP == 0) {
    fVar14 = (float)unaff_RSI[7];
    if (fVar14 == -0.2) {
      fVar14 = 0.4;
    }
    (**(code **)(*unaff_RDI + 0x78))(extraout_XMM0_Da,*unaff_RSI,0,fVar14,uVar5 & 0xffffff00);
    goto LAB_18058a8e1;
  }
  UISystem_043b0();
  fVar13 = (float)unaff_RSI[7];
  fVar10 = fVar13 - -0.2;
  if ((-0.001 < fVar10) && (fVar10 < 0.001)) {
    fVar13 = *(float *)(unaff_RBP + 0x1e4);
  }
  if (unaff_XMM8_Da <= unaff_XMM9_Da) {
    local_buffer_30 = Function_5ca86c28(fVar10,*unaff_RSI);
    bVar9 = (*(uint *)(unaff_RBP + 0x1d0) & 0x12208000) == 0;
LAB_18058a7c4:
    cStack0000000000000058 = !bVar9;
    fStack0000000000000028 = (float)unaff_RSI[4];
    local_buffer_50 = 1;
    fStack0000000000000048 = (float)((uint)fStack0000000000000048 & 0xffffff00);
    unaff_XMM8_Da = 1.0;
    fStack0000000000000038 = fVar13;
    fStack0000000000000040 = fVar14;
    uVar11 = (**(code **)(*unaff_RDI + 0x70))(fStack0000000000000028,*unaff_RSI);
  }
  else {
    iVar4 = SystemCacheManager(&system_data_5f30,*(int32_t *)((int64_t)unaff_RDI + 0xac),unaff_R14D);
    iVar4 = *(int *)(render_system_config + (int64_t)iVar4 * 4);
    uVar6 = unaff_RBX;
    if (iVar4 != -1) {
      uVar6 = *(uint64_t *)(render_system_config + (int64_t)iVar4 * 8);
    }
    uVar2 = *(int32_t *)(uVar6 + 0x1ec);
    iVar4 = SystemCacheManager(&system_data_5f30,*(int32_t *)((int64_t)unaff_RDI + 0xac),uVar2);
    iVar4 = *(int *)(render_system_config + (int64_t)iVar4 * 4);
    uVar6 = unaff_RBX;
    if (iVar4 != -1) {
      uVar6 = *(uint64_t *)(render_system_config + (int64_t)iVar4 * 8);
    }
    uVar7 = (uint64_t)((uint)unaff_R15 & 0x12208000);
    if (unaff_RBP == uVar6) {
      local_buffer_30 = Function_5ca86c28(extraout_XMM0_Da_00,*unaff_RSI);
      bVar9 = uVar7 == 0;
      goto LAB_18058a7c4;
    }
    uVar8 = (uint64_t)*unaff_RSI;
    fVar10 = *(float *)(unaff_RBP + 0x188);
    fVar12 = 1.0 - unaff_XMM8_Da;
    local_buffer_30 = Function_5ca86c28(extraout_XMM0_Da_00,uVar8);
    if (1.0 <= unaff_XMM8_Da) {
      fStack0000000000000028 = (float)unaff_RSI[4];
      cStack0000000000000058 = uVar7 != 0;
      local_buffer_50 = 1;
      fStack0000000000000048 = (float)((uint)fStack0000000000000048._1_3_ << 8);
      unaff_XMM8_Da = 1.0;
      fStack0000000000000038 = fVar13;
      fStack0000000000000040 = fVar14;
      uVar11 = (**(code **)(*unaff_RDI + 0x70))
                         (fStack0000000000000028,uVar8 & 0xffffffff,uVar6,local_var_100,
                          0x3f800000);
    }
    else {
      local_buffer_50 = 1;
      fStack0000000000000028 = (float)unaff_RSI[4];
      fStack0000000000000048 = (float)((uint)fStack0000000000000048._1_3_ << 8);
      fVar12 = 1.0 / (fVar10 * fVar12 + unaff_XMM8_Da * *(float *)(uVar6 + 0x188));
      fStack0000000000000040 = fVar10 * fVar14 * fVar12;
      fStack0000000000000038 = fVar13;
      cStack0000000000000058 = uVar7 != 0;
      uVar11 = (**(code **)(*unaff_RDI + 0x70))();
      local_buffer_30 = Function_5ca86c28(uVar11,*unaff_RSI);
      fStack0000000000000028 = (float)unaff_RSI[4];
      local_buffer_50 = 0;
      fStack0000000000000048 = (float)((uint)fStack0000000000000048 & 0xffffff00);
      fStack0000000000000040 = fVar14 * *(float *)(uVar6 + 0x188) * fVar12;
      fStack0000000000000038 = fVar13;
      cStack0000000000000058 = uVar7 != 0;
      uVar11 = (**(code **)(*unaff_RDI + 0x70))
                         (fStack0000000000000028,*unaff_RSI,uVar6,local_var_100);
      unaff_RBX = 0;
    }
    uVar5 = *unaff_RSI;
    *(int32_t *)((int64_t)unaff_RDI + (int64_t)(int)uVar5 * 0x48 + 0x2454) = uVar2;
    unaff_RDI[(int64_t)(int)uVar5 * 9 + 0x48d] = uVar6;
  }
  if (((*unaff_RSI == 0) && ((unaff_R15 & 0x2000000000) != 0)) && ((int)unaff_RDI[0x493] != -1)) {
    *(int32_t *)(unaff_RDI + 0x493) = 0xffffffff;
    uVar5 = (int)unaff_RDI[0x494] + 1U & 0x8000000f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
    }
    *(uint *)(unaff_RDI + 0x494) = uVar5;
    unaff_RDI[0x495] = unaff_RBX;
    unaff_RDI[0x497] = unaff_RBX;
    *(int *)(unaff_RDI + 0x498) = (int)unaff_RBX;
    *(int32_t *)((int64_t)unaff_RDI + 0x24c4) = 0x3f800000;
    *(int32_t *)(unaff_RDI + 0x499) = 0xbe4ccccd;
    *(int32_t *)((int64_t)unaff_RDI + 0x24cc) = 0xbe4ccccd;
    unaff_RDI[0x49a] = 0x3ecccccd;
    *(int8_t *)(unaff_RDI + 0x49b) = 0;
    *(int32_t *)((int64_t)unaff_RDI + 0x249c) = 0xffffffff;
    unaff_RDI[0x496] = unaff_RBX;
    (**(code **)(*unaff_RDI + 0x78))(uVar11,1,0,0x3ecccccd,(uint)unaff_XMM8_Da & 0xffffff00);
  }
LAB_18058a8e1:
  if ((unaff_RDI[0x49e] == 0) && (unaff_RDI[0x49f] == 0)) {
    return 1;
  }
  (*(code *)unaff_RDI[0x49f])();
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t NetworkSystem_8a546(void)
{
  int32_t uVar1;
  int iVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint *unaff_RSI;
  int64_t *unaff_RDI;
  uint64_t uVar5;
  int8_t unaff_R12B;
  int32_t unaff_R14D;
  uint64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t uVar6;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  uint64_t local_var_100;
  UISystem_043b0();
  if (unaff_XMM8_Da <= unaff_XMM9_Da) {
    Function_5ca86c28((float)unaff_RSI[7] - -0.2,*unaff_RSI);
  }
  else {
    iVar2 = SystemCacheManager(&system_data_5f30,*(int32_t *)((int64_t)unaff_RDI + 0xac),unaff_R14D);
    iVar2 = *(int *)(render_system_config + (int64_t)iVar2 * 4);
    lVar4 = unaff_RBX;
    if (iVar2 != -1) {
      lVar4 = *(int64_t *)(render_system_config + (int64_t)iVar2 * 8);
    }
    uVar1 = *(int32_t *)(lVar4 + 0x1ec);
    iVar2 = SystemCacheManager(&system_data_5f30,*(int32_t *)((int64_t)unaff_RDI + 0xac),uVar1);
    iVar2 = *(int *)(render_system_config + (int64_t)iVar2 * 4);
    lVar4 = unaff_RBX;
    if (iVar2 != -1) {
      lVar4 = *(int64_t *)(render_system_config + (int64_t)iVar2 * 8);
    }
    if (unaff_RBP != lVar4) {
      uVar5 = (uint64_t)*unaff_RSI;
      Function_5ca86c28(extraout_XMM0_Da,uVar5);
      if (1.0 <= unaff_XMM8_Da) {
        unaff_XMM8_Da = 1.0;
        uVar6 = (**(code **)(*unaff_RDI + 0x70))
                          (unaff_RSI[4],uVar5 & 0xffffffff,lVar4,local_var_100,0x3f800000);
      }
      else {
        uVar6 = (**(code **)(*unaff_RDI + 0x70))();
        Function_5ca86c28(uVar6,*unaff_RSI);
        uVar6 = (**(code **)(*unaff_RDI + 0x70))(unaff_RSI[4],*unaff_RSI,lVar4,local_var_100);
        unaff_RBX = 0;
      }
      uVar3 = *unaff_RSI;
      *(int32_t *)((int64_t)unaff_RDI + (int64_t)(int)uVar3 * 0x48 + 0x2454) = uVar1;
      unaff_RDI[(int64_t)(int)uVar3 * 9 + 0x48d] = lVar4;
      goto LAB_18058a817;
    }
    Function_5ca86c28(extraout_XMM0_Da,*unaff_RSI);
  }
  unaff_XMM8_Da = 1.0;
  uVar6 = (**(code **)(*unaff_RDI + 0x70))(unaff_RSI[4],*unaff_RSI);
LAB_18058a817:
  if (((*unaff_RSI == 0) && ((unaff_R15 & 0x2000000000) != 0)) && ((int)unaff_RDI[0x493] != -1)) {
    *(int32_t *)(unaff_RDI + 0x493) = 0xffffffff;
    uVar3 = (int)unaff_RDI[0x494] + 1U & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    *(uint *)(unaff_RDI + 0x494) = uVar3;
    unaff_RDI[0x495] = unaff_RBX;
    unaff_RDI[0x497] = unaff_RBX;
    *(int *)(unaff_RDI + 0x498) = (int)unaff_RBX;
    *(int32_t *)((int64_t)unaff_RDI + 0x24c4) = 0x3f800000;
    *(int32_t *)(unaff_RDI + 0x499) = 0xbe4ccccd;
    *(int32_t *)((int64_t)unaff_RDI + 0x24cc) = 0xbe4ccccd;
    unaff_RDI[0x49a] = 0x3ecccccd;
    *(int8_t *)(unaff_RDI + 0x49b) = 0;
    *(int32_t *)((int64_t)unaff_RDI + 0x249c) = 0xffffffff;
    unaff_RDI[0x496] = unaff_RBX;
    (**(code **)(*unaff_RDI + 0x78))(uVar6,1,0,0x3ecccccd,(uint)unaff_XMM8_Da & 0xffffff00);
  }
  if ((unaff_RDI[0x49e] != 0) || (unaff_RDI[0x49f] != 0)) {
    (*(code *)unaff_RDI[0x49f])();
  }
  return unaff_R12B;
}
int8_t NetworkSystem_8a635(void)
{
  int iVar1;
  uint uVar2;
  int64_t unaff_RBX;
  int *unaff_RSI;
  int64_t *unaff_RDI;
  uint64_t in_R10;
  int8_t unaff_R12B;
  int32_t unaff_R13D;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  int32_t uVar3;
  float unaff_XMM8_Da;
  Function_5ca86c28();
  if (1.0 <= unaff_XMM8_Da) {
    unaff_XMM8_Da = 1.0;
    uVar3 = (**(code **)(*unaff_RDI + 0x70))(unaff_RSI[4],in_R10 & 0xffffffff);
  }
  else {
    uVar3 = (**(code **)(*unaff_RDI + 0x70))();
    Function_5ca86c28(uVar3,*unaff_RSI);
    uVar3 = (**(code **)(*unaff_RDI + 0x70))(unaff_RSI[4],*unaff_RSI);
    unaff_RBX = 0;
  }
  iVar1 = *unaff_RSI;
  *(int32_t *)((int64_t)unaff_RDI + (int64_t)iVar1 * 0x48 + 0x2454) = unaff_R13D;
  unaff_RDI[(int64_t)iVar1 * 9 + 0x48d] = unaff_R14;
  if (((*unaff_RSI == 0) && ((unaff_R15 & 0x2000000000) != 0)) && ((int)unaff_RDI[0x493] != -1)) {
    *(int32_t *)(unaff_RDI + 0x493) = 0xffffffff;
    uVar2 = (int)unaff_RDI[0x494] + 1U & 0x8000000f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
    }
    *(uint *)(unaff_RDI + 0x494) = uVar2;
    unaff_RDI[0x495] = unaff_RBX;
    unaff_RDI[0x497] = unaff_RBX;
    *(int *)(unaff_RDI + 0x498) = (int)unaff_RBX;
    *(int32_t *)((int64_t)unaff_RDI + 0x24c4) = 0x3f800000;
    *(int32_t *)(unaff_RDI + 0x499) = 0xbe4ccccd;
    *(int32_t *)((int64_t)unaff_RDI + 0x24cc) = 0xbe4ccccd;
    unaff_RDI[0x49a] = 0x3ecccccd;
    *(int8_t *)(unaff_RDI + 0x49b) = 0;
    *(int32_t *)((int64_t)unaff_RDI + 0x249c) = 0xffffffff;
    unaff_RDI[0x496] = unaff_RBX;
    (**(code **)(*unaff_RDI + 0x78))(uVar3,1,0,0x3ecccccd,(uint)unaff_XMM8_Da & 0xffffff00);
  }
  if ((unaff_RDI[0x49e] != 0) || (unaff_RDI[0x49f] != 0)) {
    (*(code *)unaff_RDI[0x49f])();
  }
  return unaff_R12B;
}
int8_t NetworkSystem_8a7aa(int32_t param_1)
{
  uint uVar1;
  int64_t unaff_RBX;
  int *unaff_RSI;
  int64_t *unaff_RDI;
  int8_t unaff_R12B;
  uint64_t unaff_R15;
  int32_t uVar2;
  uint uVar3;
  Function_5ca86c28(param_1,*unaff_RSI);
  uVar3 = 0x3f800000;
  uVar2 = (**(code **)(*unaff_RDI + 0x70))(unaff_RSI[4],*unaff_RSI);
  if (((*unaff_RSI == 0) && ((unaff_R15 & 0x2000000000) != 0)) && ((int)unaff_RDI[0x493] != -1)) {
    *(int32_t *)(unaff_RDI + 0x493) = 0xffffffff;
    uVar1 = (int)unaff_RDI[0x494] + 1U & 0x8000000f;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
    }
    *(uint *)(unaff_RDI + 0x494) = uVar1;
    unaff_RDI[0x495] = unaff_RBX;
    unaff_RDI[0x497] = unaff_RBX;
    *(int *)(unaff_RDI + 0x498) = (int)unaff_RBX;
    *(int32_t *)((int64_t)unaff_RDI + 0x24c4) = 0x3f800000;
    *(int32_t *)(unaff_RDI + 0x499) = 0xbe4ccccd;
    *(int32_t *)((int64_t)unaff_RDI + 0x24cc) = 0xbe4ccccd;
    unaff_RDI[0x49a] = 0x3ecccccd;
    *(int8_t *)(unaff_RDI + 0x49b) = 0;
    *(int32_t *)((int64_t)unaff_RDI + 0x249c) = 0xffffffff;
    unaff_RDI[0x496] = unaff_RBX;
    (**(code **)(*unaff_RDI + 0x78))(uVar2,1,0,0x3ecccccd,uVar3 & 0xffffff00);
  }
  if ((unaff_RDI[0x49e] != 0) || (unaff_RDI[0x49f] != 0)) {
    (*(code *)unaff_RDI[0x49f])();
  }
  return unaff_R12B;
}
int8_t NetworkSystem_8a828(void)
{
  uint uVar1;
  int64_t unaff_RBX;
  int64_t *unaff_RDI;
  int8_t unaff_R12B;
  uint64_t unaff_R15;
  if (((unaff_R15 & 0x2000000000) != 0) && ((int)unaff_RDI[0x493] != -1)) {
    *(int32_t *)(unaff_RDI + 0x493) = 0xffffffff;
    uVar1 = (int)unaff_RDI[0x494] + 1U & 0x8000000f;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
    }
    *(uint *)(unaff_RDI + 0x494) = uVar1;
    unaff_RDI[0x495] = unaff_RBX;
    unaff_RDI[0x497] = unaff_RBX;
    *(int *)(unaff_RDI + 0x498) = (int)unaff_RBX;
    *(int32_t *)((int64_t)unaff_RDI + 0x24c4) = 0x3f800000;
    *(int32_t *)(unaff_RDI + 0x499) = 0xbe4ccccd;
    *(int32_t *)((int64_t)unaff_RDI + 0x24cc) = 0xbe4ccccd;
    unaff_RDI[0x49a] = 0x3ecccccd;
    *(int8_t *)(unaff_RDI + 0x49b) = 0;
    *(int32_t *)((int64_t)unaff_RDI + 0x249c) = 0xffffffff;
    unaff_RDI[0x496] = unaff_RBX;
    (**(code **)(*unaff_RDI + 0x78))();
  }
  if ((unaff_RDI[0x49e] != 0) || (unaff_RDI[0x49f] != 0)) {
    (*(code *)unaff_RDI[0x49f])();
  }
  return unaff_R12B;
}
// 函数: void NetworkSystem_8a910(void)
void NetworkSystem_8a910(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address