#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_09_part021.c - 2 个函数
// 函数: void NetworkSystem_c7cb0(int64_t *param_1,char param_2,char param_3)
void NetworkSystem_c7cb0(int64_t *param_1,char param_2,char param_3)
{
  char cVar1;
  byte bVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint uVar17;
  uint64_t uVar18;
  bool bVar19;
  float fVar20;
  float extraout_XMM0_Da;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint astack_special_x_8 [2];
  char cStackX_10;
  char cStackX_18;
  uint astack_special_x_20 [2];
  uint local_var_e8;
  uint local_var_e4;
  uint local_var_e0;
  uint local_var_dc;
  int iStack_d8;
  uint local_var_d4;
  uint local_var_d0;
  int iStack_cc;
  if ((*(int *)(*(int64_t *)(*param_1 + 0x8f8) + 0x9e0) == 4) &&
     ((*(byte *)((int64_t)param_1 + 0x1484) & 0x38) != 0)) {
    if ((*(uint *)(param_1 + 2) & 0x20) == 0) {
      lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
      param_1[0x15] = lVar6;
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
    }
    else {
      lVar6 = param_1[0x15];
    }
    if ((*(byte *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0)) &
        0x10) != 0) {
      return;
    }
  }
  uVar10 = 0;
  local_var_d4 = *(uint *)(*param_1 + 0x564) >> 0x1f ^ 1;
  fVar21 = 20.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  cStackX_10 = param_2;
  cStackX_18 = param_3;
  if ((param_1[0x41e] == 0) ||
     (((int)param_1[0x295] != 5 && (int)param_1[0x295] != 6 &&
      (((*(byte *)((int64_t)param_1 + 0x209c) & 1) == 0 || ((*(byte *)(param_1 + 0x413) & 1) == 0))
      )))) {
    if ((char)param_1[0x438] == '\0') {
      iVar3 = *(int *)((int64_t)param_1 + 0x14b4);
    }
    else {
      iVar3 = *(int *)((int64_t)param_1 + 0x21c4);
    }
    if (-1 < iVar3) {
      lVar6 = param_1[0x291];
      lVar12 = *(int64_t *)((int64_t)iVar3 * 0xa60 + 0x3778 + lVar6);
      if ((lVar12 != 0) && (*(char *)(lVar12 + 0x8be) != '\0')) {
        if ((char)param_1[0x438] == '\0') {
          iVar3 = *(int *)((int64_t)param_1 + 0x14b4);
        }
        else {
          iVar3 = *(int *)((int64_t)param_1 + 0x21c4);
        }
        lVar12 = (int64_t)iVar3 * 0xa60;
        if ((*(byte *)(lVar12 + 0x360c + lVar6) & 1) == 0) {
          fVar21 = (float)NetworkSystem_c7700(param_1);
          if (100.0 <= fVar21) {
            fVar21 = 100.0;
          }
          if (fVar21 < 0.0) {
            if (((param_2 == '\0') && (param_3 == '\0')) &&
               (lVar4 = SystemFunction_0001805b6e80(param_1 + 1), lVar4 != 0)) {
              lVar4 = SystemFunction_0001805b6e80(param_1 + 1);
              if (((0 < *(int *)(lVar4 + 0x30)) &&
                  (((*(uint *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 +
                              *(int64_t *)(lVar4 + 0xd0)) >> 9 & 1) == 0 ||
                   (0 < *(short *)(lVar4 + 8))))) &&
                 (lVar4 = SystemFunction_0001805b6e80(param_1 + 1),
                 (*(byte *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 +
                           *(int64_t *)(lVar4 + 0xd0)) >> 1 & 1) != 0)) {
                plVar5 = (int64_t *)SystemFunction_0001805b6e80(param_1 + 1);
                if ((*plVar5 == 0) || (*(short *)(*plVar5 + 8) == 0)) goto LAB_1805c7f79;
              }
              uVar8 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
              uVar8 = uVar8 >> 0x11 ^ uVar8;
              uVar8 = uVar8 << 5 ^ uVar8;
              fVar21 = -50000.0 - (float)(uVar8 - 1) * 2.3283064e-05;
              goto LAB_1805c869c;
            }
LAB_1805c7f79:
            pfVar7 = (float *)SecuritySystem_Authenticator(param_1 + 1);
            fVar21 = *pfVar7;
          }
          if (-1 < *(int *)(lVar12 + 0x3604 + lVar6)) {
            uVar10 = 1;
          }
        }
        else {
          if ((*(byte *)(param_1 + 2) & 2) == 0) {
            NetworkSystem_d3550(param_1 + 1);
          }
          fVar21 = *(float *)((int64_t)param_1 + 0x6c);
        }
        fVar22 = (*(float *)(lVar12 + 0x3434 + lVar6) + *(float *)(lVar12 + 0x3430 + lVar6) +
                  *(float *)(lVar12 + 0x3438 + lVar6) + *(float *)(lVar12 + 0x343c + lVar6)) * 0.25;
      }
    }
  }
  else {
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      SystemCore_ThreadManager(param_1 + 1);
    }
    fVar21 = *(float *)(param_1 + 0xd);
  }
  cVar1 = NetworkSystem_b7e80(param_1,fVar21);
  if (cVar1 == '\0') {
    uVar8 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar8 = uVar8 >> 0x11 ^ uVar8;
    uVar8 = uVar8 << 5 ^ uVar8;
    fVar21 = (float)(uVar8 - 1) * 3.4924597e-05 - 200000.0;
LAB_1805c869c:
    *(uint *)(param_1 + 0x272) = uVar8;
    param_1[0x273] =
         *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x274] * 8) - (int64_t)fVar21;
    return;
  }
  uVar8 = 0xffffffff;
  iStack_cc = *(int *)((int64_t)param_1 + 0x215c);
  uVar17 = 0xffffffff;
  uVar11 = 0xffffffff;
  fVar24 = 0.0;
  fVar25 = 0.0;
  uVar16 = 0xffffffff;
  uVar15 = 0xffffffff;
  local_var_e8 = 0xffffffff;
  local_var_dc = 0xffffffff;
  local_var_d0 = 0xffffffff;
  iStack_d8 = -1;
  local_var_e4 = 0xffffffff;
  local_var_e0 = 0xffffffff;
  astack_special_x_8[0] = 0xffffffff;
  astack_special_x_20[0] = 0xffffffff;
  if (cStackX_10 == '\0') {
    fVar20 = (float)RenderingSystem_5C9600(param_1,2,fVar21,uVar10,fVar22,astack_special_x_8,astack_special_x_20);
    if ((fVar20 <= 0.0) ||
       ((((char)local_var_d4 != '\0' &&
         (lVar6 = *(int64_t *)(*param_1 + 0x20),
         4.0 < *(float *)(lVar6 + 0x1fc) * *(float *)(lVar6 + 0x1fc) +
               *(float *)(lVar6 + 0x200) * *(float *)(lVar6 + 0x200) +
               *(float *)(lVar6 + 0x204) * *(float *)(lVar6 + 0x204))) &&
        (fVar25 = fVar20, fVar21 < 5.0)))) {
      uVar15 = (uint64_t)astack_special_x_20[0];
      uVar16 = (uint64_t)astack_special_x_8[0];
    }
    else {
      uVar16 = (uint64_t)(int)astack_special_x_8[0];
      uVar15 = (uint64_t)(int)astack_special_x_20[0];
      if ((*(uint *)((int64_t)param_1 + 0x209c) >> 2 & 1) != 0) {
        lVar6 = *param_1;
        cVar1 = SystemFunction_00018051f640(lVar6);
        fVar20 = extraout_XMM0_Da;
        if ((cVar1 != '\0') &&
           ((*(byte *)(*(int64_t *)(uVar16 * 0x1f8 + 0xd8 + *(int64_t *)(lVar6 + 0x8f8)) + 0x50 +
                      uVar15 * 0xa0) >> 4 & 1) != 0)) {
          fVar25 = 0.011;
          goto LAB_1805c80dc;
        }
      }
      fVar25 = fVar21 * 0.2 * fVar20;
    }
  }
LAB_1805c80dc:
  if (cStackX_18 == '\0') {
    fVar20 = (float)RenderingSystem_5C9600(param_1,3,fVar21,uVar10,fVar22,&local_var_dc,&iStack_d8);
    fVar22 = (float)RenderingSystem_5C9600(param_1,1,fVar21,uVar10,fVar22,&local_var_e4,&local_var_e0);
    uVar14 = (uint64_t)(int)local_var_dc;
    uVar18 = (uint64_t)iStack_d8;
    local_var_e8 = local_var_dc;
    if (0.0 < fVar20) {
      lVar6 = *(int64_t *)(uVar14 * 0x1f8 + 0xd8 + *(int64_t *)(*param_1 + 0x8f8));
      if (((*(byte *)(lVar6 + 0x50 + uVar18 * 0xa0) & 0x40) == 0) ||
         ((*(byte *)((int64_t)*(int *)(lVar6 + 100 + uVar18 * 0xa0) * 0x170 + 0x140 +
                    system_system_config) & 0x10) == 0)) {
        fVar24 = 5.0 / (fVar21 + 0.01);
      }
      else {
        fVar24 = 5.0 / (fVar21 + 0.01) + 10.0;
      }
      fVar24 = fVar24 * fVar20;
    }
    uVar17 = local_var_e4;
    uVar11 = local_var_e0;
    if ((0.0 < fVar22) &&
       ((((lVar6 = SystemFunction_0001805b6e80(param_1 + 1), lVar6 == 0 ||
          (lVar6 = SystemFunction_0001805b6e80(param_1 + 1), *(int *)(lVar6 + 0x30) < 1)) ||
         (((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0))
            >> 9 & 1) != 0 && (*(short *)(lVar6 + 8) < 1)))) ||
        (lVar6 = SystemFunction_0001805b6e80(param_1 + 1), uVar17 = local_var_e4, uVar11 = local_var_e0,
        (*(byte *)((int64_t)
                   *(int *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 100 +
                           *(int64_t *)(lVar6 + 0xd0)) * 0x170 + 0x140 + system_system_config) & 0x10) ==
        0)))) {
      if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
        bVar2 = (byte)((uint)*(int32_t *)(*(int64_t *)param_1[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((int64_t)param_1 + 0x11c) = bVar2;
      }
      else {
        bVar2 = *(byte *)((int64_t)param_1 + 0x11c);
      }
      if ((bVar2 != 0) && (pfVar7 = (float *)UltraHighFreq_RenderingProcessor1(param_1 + 1), 2.0 < *pfVar7)) {
        fVar21 = fVar21 * 1.25;
      }
      fVar23 = (5.0 / (fVar21 + 0.01)) * fVar22;
      uVar17 = local_var_e4;
      uVar11 = local_var_e0;
      goto LAB_1805c8373;
    }
  }
  else {
    uVar18 = (uint64_t)local_var_d0;
LAB_1805c8373:
    uVar14 = (uint64_t)local_var_e8;
  }
  if (fVar25 + fVar24 + fVar23 < 0.01) {
    fVar23 = 1.0;
    uVar17 = 0xffffffff;
    uVar11 = 0xffffffff;
  }
  if ((fVar24 <= fVar23) || (fVar24 <= fVar25)) {
    if (fVar25 <= fVar23) {
      uVar13 = (uint64_t)uVar11;
      uVar14 = (uint64_t)uVar17;
      uVar10 = 1;
    }
    else {
      uVar13 = uVar15 & 0xffffffff;
      uVar14 = uVar16 & 0xffffffff;
      uVar10 = 2;
    }
  }
  else {
    uVar13 = uVar18 & 0xffffffff;
    uVar14 = uVar14 & 0xffffffff;
    uVar10 = 3;
  }
  NetworkSystem_c9310(param_1,uVar10,uVar14,uVar13);
  if (iStack_cc != *(int *)((int64_t)param_1 + 0x215c)) {
    uVar8 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar8 = uVar8 >> 0x11 ^ uVar8;
    uVar8 = uVar8 << 5 ^ uVar8;
    *(uint *)(param_1 + 0x272) = uVar8;
    param_1[0x273] =
         *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x274] * 8) -
         (int64_t)((float)(uVar8 - 1) * 0.00027939677 - 2e+06);
    goto LAB_1805c85d3;
  }
  if (((char)local_var_d4 == '\0') || (*(int *)(*param_1 + 0x1fc) == 1)) {
    uVar9 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar9 = uVar9 >> 0x11 ^ uVar9;
    uVar9 = uVar9 << 5 ^ uVar9;
    fVar21 = (float)(uVar9 - 1) * 4.656613e-05 - 500000.0;
LAB_1805c855d:
    *(uint *)(param_1 + 0x272) = uVar9;
  }
  else {
    pfVar7 = (float *)UltraHighFreq_RenderingProcessor1(param_1 + 1);
    uVar9 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    if (5.0 <= *pfVar7) {
      uVar9 = uVar9 >> 0x11 ^ uVar9;
      uVar9 = uVar9 << 5 ^ uVar9;
      fVar21 = (float)(uVar9 - 1) * 2.4214383e-05 - 259999.98;
      goto LAB_1805c855d;
    }
    fVar21 = *pfVar7 - 2.4;
    uVar9 = uVar9 >> 0x11 ^ uVar9;
    if (fVar21 <= 0.4) {
      fVar21 = 0.4;
    }
    uVar9 = uVar9 << 5 ^ uVar9;
    *(uint *)(param_1 + 0x272) = uVar9;
    fVar21 = fVar21 * -100000.0 - (fVar21 * 0.5 - fVar21) * (float)(uVar9 - 1) * 2.3283064e-05;
  }
  param_1[0x273] =
       *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x274] * 8) - (int64_t)fVar21;
  uVar9 = *(uint *)(*(int64_t *)(*param_1 + 0x8f8) + 0x9e0);
  if (uVar9 != 0xffffffff) {
    uVar8 = *(uint *)(*(int64_t *)(*(int64_t *)(*param_1 + 0x8f8) + 0x9e8) + 0xf0);
  }
  if (*(int *)((int64_t)param_1 + 0x215c) == 1) {
    if (uVar9 != uVar17) goto LAB_1805c85d3;
    bVar19 = uVar8 == uVar11;
  }
  else if (*(int *)((int64_t)param_1 + 0x215c) == 2) {
    if (uVar9 != (uint)uVar16) goto LAB_1805c85d3;
    bVar19 = uVar8 == (uint)uVar15;
  }
  else {
    if (uVar9 != local_var_e8) goto LAB_1805c85d3;
    bVar19 = uVar8 == (uint)uVar18;
  }
  if (bVar19) {
    return;
  }
LAB_1805c85d3:
  *(int32_t *)(param_1 + 0x2f1) = 0;
  param_1[0x2ed] =
       *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ee] * 8) + -0x8000000000000000;
  param_1[0x2e0] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2e1] * 8) + 10000;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_c7d4e(float param_1)
void NetworkSystem_c7d4e(float param_1)
{
  char cVar1;
  byte bVar2;
  int iVar3;
  int64_t in_RAX;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  char unaff_R12B;
  uint64_t uVar14;
  uint64_t uVar15;
  char unaff_R14B;
  uint64_t uVar16;
  bool bVar17;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar18;
  float extraout_XMM0_Da_01;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint local_var_40;
  uint local_buffer_44;
  uint local_buffer_4c;
  char cStack0000000000000054;
  int iStack000000000000005c;
  uVar10 = 0;
  _cStack0000000000000054 = *(uint *)(in_RAX + 0x564) >> 0x1f ^ 1;
  fVar19 = 20.0;
  fVar20 = 0.0;
  fVar21 = 0.0;
  if ((unaff_RBX[0x41e] == 0) ||
     (((int)unaff_RBX[0x295] != 5 && (int)unaff_RBX[0x295] != 6 &&
      (((*(byte *)((int64_t)unaff_RBX + 0x209c) & 1) == 0 ||
       ((*(byte *)(unaff_RBX + 0x413) & 1) == 0)))))) {
    if ((char)unaff_RBX[0x438] == '\0') {
      iVar3 = *(int *)((int64_t)unaff_RBX + 0x14b4);
    }
    else {
      iVar3 = *(int *)((int64_t)unaff_RBX + 0x21c4);
    }
    if (-1 < iVar3) {
      lVar6 = unaff_RBX[0x291];
      lVar11 = *(int64_t *)((int64_t)iVar3 * 0xa60 + 0x3778 + lVar6);
      if ((lVar11 != 0) && (*(char *)(lVar11 + 0x8be) != '\0')) {
        if ((char)unaff_RBX[0x438] == '\0') {
          iVar3 = *(int *)((int64_t)unaff_RBX + 0x14b4);
        }
        else {
          iVar3 = *(int *)((int64_t)unaff_RBX + 0x21c4);
        }
        lVar11 = (int64_t)iVar3 * 0xa60;
        if ((*(byte *)(lVar11 + 0x360c + lVar6) & 1) == 0) {
          param_1 = (float)NetworkSystem_c7700();
          fVar19 = param_1;
          if (100.0 <= param_1) {
            fVar19 = 100.0;
          }
          if (fVar19 < 0.0) {
            if (((unaff_R14B == '\0') && (unaff_R12B == '\0')) &&
               (lVar4 = SystemFunction_0001805b6e80(unaff_RBX + 1), lVar4 != 0)) {
              lVar4 = SystemFunction_0001805b6e80(unaff_RBX + 1);
              if (((0 < *(int *)(lVar4 + 0x30)) &&
                  (((*(uint *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 +
                              *(int64_t *)(lVar4 + 0xd0)) >> 9 & 1) == 0 ||
                   (0 < *(short *)(lVar4 + 8))))) &&
                 (lVar4 = SystemFunction_0001805b6e80(unaff_RBX + 1),
                 (*(byte *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 +
                           *(int64_t *)(lVar4 + 0xd0)) >> 1 & 1) != 0)) {
                plVar5 = (int64_t *)SystemFunction_0001805b6e80(unaff_RBX + 1);
                if ((*plVar5 == 0) || (*(short *)(*plVar5 + 8) == 0)) goto LAB_1805c7f79;
              }
              uVar8 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
              uVar8 = uVar8 >> 0x11 ^ uVar8;
              uVar8 = uVar8 << 5 ^ uVar8;
              fVar19 = -50000.0 - (float)(uVar8 - 1) * 2.3283064e-05;
              goto LAB_1805c869c;
            }
LAB_1805c7f79:
            pfVar7 = (float *)SecuritySystem_Authenticator(unaff_RBX + 1);
            fVar19 = *pfVar7;
            param_1 = extraout_XMM0_Da;
          }
          if (-1 < *(int *)(lVar11 + 0x3604 + lVar6)) {
            uVar10 = 1;
          }
        }
        else {
          if ((*(byte *)(unaff_RBX + 2) & 2) == 0) {
            param_1 = (float)NetworkSystem_d3550(unaff_RBX + 1);
          }
          fVar19 = *(float *)((int64_t)unaff_RBX + 0x6c);
        }
        fVar20 = (*(float *)(lVar11 + 0x3434 + lVar6) + *(float *)(lVar11 + 0x3430 + lVar6) +
                  *(float *)(lVar11 + 0x3438 + lVar6) + *(float *)(lVar11 + 0x343c + lVar6)) * 0.25;
      }
    }
  }
  else {
    if ((*(byte *)(unaff_RBX + 2) & 1) == 0) {
      param_1 = (float)SystemCore_ThreadManager(unaff_RBX + 1);
    }
    fVar19 = *(float *)(unaff_RBX + 0xd);
  }
  cVar1 = NetworkSystem_b7e80(param_1,fVar19);
  if (cVar1 == '\0') {
    uVar8 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar8 = uVar8 >> 0x11 ^ uVar8;
    uVar8 = uVar8 << 5 ^ uVar8;
    fVar19 = (float)(uVar8 - 1) * 3.4924597e-05 - 200000.0;
LAB_1805c869c:
    *(uint *)(unaff_RBX + 0x272) = uVar8;
    unaff_RBX[0x273] =
         *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x274] * 8) - (int64_t)fVar19;
    return;
  }
  iVar3 = -1;
  iStack000000000000005c = *(int *)((int64_t)unaff_RBX + 0x215c);
  uVar8 = 0xffffffff;
  fVar22 = 0.0;
  fVar23 = 0.0;
  uVar15 = 0xffffffff;
  uVar14 = 0xffffffff;
  local_var_40 = 0xffffffff;
  local_buffer_4c = 0xffffffff;
  local_buffer_44 = 0xffffffff;
  *(int32_t *)(unaff_RBP + 0x30) = 0xffffffff;
  *(int32_t *)(unaff_RBP + 0x48) = 0xffffffff;
  fVar18 = extraout_XMM0_Da_00;
  if (*(char *)(unaff_RBP + 0x38) == '\0') {
    fVar18 = (float)RenderingSystem_5C9600(extraout_XMM0_Da_00,2,fVar19,uVar10,fVar20);
    if ((fVar18 <= 0.0) ||
       (((cStack0000000000000054 != '\0' &&
         (lVar6 = *(int64_t *)(*unaff_RBX + 0x20),
         4.0 < *(float *)(lVar6 + 0x1fc) * *(float *)(lVar6 + 0x1fc) +
               *(float *)(lVar6 + 0x200) * *(float *)(lVar6 + 0x200) +
               *(float *)(lVar6 + 0x204) * *(float *)(lVar6 + 0x204))) &&
        (fVar23 = fVar18, fVar19 < 5.0)))) {
      uVar14 = (uint64_t)*(uint *)(unaff_RBP + 0x48);
      uVar15 = (uint64_t)*(uint *)(unaff_RBP + 0x30);
    }
    else {
      uVar15 = (uint64_t)*(int *)(unaff_RBP + 0x30);
      uVar14 = (uint64_t)*(int *)(unaff_RBP + 0x48);
      if ((*(uint *)((int64_t)unaff_RBX + 0x209c) >> 2 & 1) != 0) {
        lVar6 = *unaff_RBX;
        cVar1 = SystemFunction_00018051f640(lVar6);
        fVar18 = extraout_XMM0_Da_01;
        if ((cVar1 != '\0') &&
           ((*(byte *)(*(int64_t *)(uVar15 * 0x1f8 + 0xd8 + *(int64_t *)(lVar6 + 0x8f8)) + 0x50 +
                      uVar14 * 0xa0) >> 4 & 1) != 0)) {
          fVar23 = 0.011;
          goto LAB_1805c80dc;
        }
      }
      fVar23 = fVar19 * 0.2 * fVar18;
    }
  }
LAB_1805c80dc:
  if (*(char *)(unaff_RBP + 0x40) == '\0') {
    fVar18 = (float)RenderingSystem_5C9600(fVar18,3,fVar19,uVar10,fVar20);
    fVar20 = (float)RenderingSystem_5C9600(fVar18,1,fVar19,uVar10,fVar20);
    uVar13 = (uint64_t)(int)local_buffer_4c;
    uVar16 = 0xffffffffffffffff;
    local_var_40 = local_buffer_4c;
    if (0.0 < fVar18) {
      lVar6 = *(int64_t *)(uVar13 * 0x1f8 + 0xd8 + *(int64_t *)(*unaff_RBX + 0x8f8));
      if (((*(byte *)(lVar6 + -0x50) & 0x40) == 0) ||
         ((*(byte *)((int64_t)*(int *)(lVar6 + -0x3c) * 0x170 + 0x140 + system_system_config) & 0x10) ==
          0)) {
        fVar22 = 5.0 / (fVar19 + 0.01);
      }
      else {
        fVar22 = 5.0 / (fVar19 + 0.01) + 10.0;
      }
      fVar22 = fVar22 * fVar18;
    }
    uVar8 = local_buffer_44;
    if ((0.0 < fVar20) &&
       ((((lVar6 = SystemFunction_0001805b6e80(unaff_RBX + 1), lVar6 == 0 ||
          (lVar6 = SystemFunction_0001805b6e80(unaff_RBX + 1), *(int *)(lVar6 + 0x30) < 1)) ||
         (((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0))
            >> 9 & 1) != 0 && (*(short *)(lVar6 + 8) < 1)))) ||
        (lVar6 = SystemFunction_0001805b6e80(unaff_RBX + 1), uVar8 = local_buffer_44,
        (*(byte *)((int64_t)
                   *(int *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 100 +
                           *(int64_t *)(lVar6 + 0xd0)) * 0x170 + 0x140 + system_system_config) & 0x10) ==
        0)))) {
      if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
        bVar2 = (byte)((uint)*(int32_t *)(*(int64_t *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((int64_t)unaff_RBX + 0x11c) = bVar2;
      }
      else {
        bVar2 = *(byte *)((int64_t)unaff_RBX + 0x11c);
      }
      if ((bVar2 != 0) && (pfVar7 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1), 2.0 < *pfVar7)) {
        fVar19 = fVar19 * 1.25;
      }
      fVar21 = (5.0 / (fVar19 + 0.01)) * fVar20;
      uVar8 = local_buffer_44;
      goto LAB_1805c8373;
    }
  }
  else {
    uVar16 = 0xffffffff;
LAB_1805c8373:
    uVar13 = (uint64_t)local_var_40;
  }
  fVar19 = fVar23 + fVar22 + fVar21;
  if (fVar19 < 0.01) {
    fVar21 = 1.0;
    uVar8 = 0xffffffff;
  }
  if ((fVar22 <= fVar21) || (fVar22 <= fVar23)) {
    if (fVar23 <= fVar21) {
      uVar12 = 0xffffffff;
      uVar13 = (uint64_t)uVar8;
      uVar10 = 1;
    }
    else {
      uVar12 = uVar14 & 0xffffffff;
      uVar13 = uVar15 & 0xffffffff;
      uVar10 = 2;
    }
  }
  else {
    uVar12 = uVar16 & 0xffffffff;
    uVar13 = uVar13 & 0xffffffff;
    uVar10 = 3;
  }
  NetworkSystem_c9310(fVar19,uVar10,uVar13,uVar12);
  if (iStack000000000000005c != *(int *)((int64_t)unaff_RBX + 0x215c)) {
    uVar8 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar8 = uVar8 >> 0x11 ^ uVar8;
    uVar8 = uVar8 << 5 ^ uVar8;
    *(uint *)(unaff_RBX + 0x272) = uVar8;
    unaff_RBX[0x273] =
         *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x274] * 8) -
         (int64_t)((float)(uVar8 - 1) * 0.00027939677 - 2e+06);
    goto LAB_1805c85d3;
  }
  if ((cStack0000000000000054 == '\0') || (*(int *)(*unaff_RBX + 0x1fc) == 1)) {
    uVar9 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar9 = uVar9 >> 0x11 ^ uVar9;
    uVar9 = uVar9 << 5 ^ uVar9;
    fVar19 = (float)(uVar9 - 1) * 4.656613e-05 - 500000.0;
LAB_1805c855d:
    *(uint *)(unaff_RBX + 0x272) = uVar9;
  }
  else {
    pfVar7 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1);
    uVar9 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    if (5.0 <= *pfVar7) {
      uVar9 = uVar9 >> 0x11 ^ uVar9;
      uVar9 = uVar9 << 5 ^ uVar9;
      fVar19 = (float)(uVar9 - 1) * 2.4214383e-05 - 259999.98;
      goto LAB_1805c855d;
    }
    fVar19 = *pfVar7 - 2.4;
    uVar9 = uVar9 >> 0x11 ^ uVar9;
    if (fVar19 <= 0.4) {
      fVar19 = 0.4;
    }
    uVar9 = uVar9 << 5 ^ uVar9;
    *(uint *)(unaff_RBX + 0x272) = uVar9;
    fVar19 = fVar19 * -100000.0 - (fVar19 * 0.5 - fVar19) * (float)(uVar9 - 1) * 2.3283064e-05;
  }
  unaff_RBX[0x273] =
       *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x274] * 8) - (int64_t)fVar19;
  uVar9 = *(uint *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e0);
  if (uVar9 != 0xffffffff) {
    iVar3 = *(int *)(*(int64_t *)(*(int64_t *)(*unaff_RBX + 0x8f8) + 0x9e8) + 0xf0);
  }
  if (*(int *)((int64_t)unaff_RBX + 0x215c) == 1) {
    if (uVar9 != uVar8) goto LAB_1805c85d3;
    bVar17 = iVar3 == -1;
  }
  else if (*(int *)((int64_t)unaff_RBX + 0x215c) == 2) {
    if (uVar9 != (uint)uVar15) goto LAB_1805c85d3;
    bVar17 = iVar3 == (int)uVar14;
  }
  else {
    if (uVar9 != local_var_40) goto LAB_1805c85d3;
    bVar17 = iVar3 == (int)uVar16;
  }
  if (bVar17) {
    return;
  }
LAB_1805c85d3:
  *(int32_t *)(unaff_RBX + 0x2f1) = 0;
  unaff_RBX[0x2ed] =
       *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2ee] * 8) + -0x8000000000000000;
  unaff_RBX[0x2e0] = *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2e1] * 8) + 10000;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address