#include "TaleWorlds.Native.Split.h"
// 03_rendering_part445_sub002_sub002.c - 1 个函数
// 函数: void NetworkSystem_0e340(int64_t param_1)
void NetworkSystem_0e340(int64_t param_1)
{
  int iVar1;
  int32_t uVar2;
  int64_t lVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t astack_special_x_8 [2];
  int32_t astack_special_x_10 [2];
  int32_t astack_special_x_18 [2];
  int64_t lStackX_20;
  lVar6 = 0;
  uVar8 = 0xffffffff;
  iVar1 = *(int *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e0);
  lVar5 = lVar6;
  uVar7 = uVar8;
  if ((-1 < iVar1) &&
     (lVar5 = (int64_t)iVar1 * 0x1f8 + 8 + *(int64_t *)(param_1 + 0x8f8), lVar5 != 0)) {
    uVar7 = *(int32_t *)(lVar5 + 0xf0);
  }
  astack_special_x_8[0] = 0xffffffff;
  astack_special_x_10[0] = 0xffffffff;
  astack_special_x_18[0] = 0xffffffff;
  lVar3 = lVar6;
  uVar2 = uVar8;
  uVar4 = uVar8;
  if (lVar5 != 0) {
    lVar3 = NetworkSystem_0e440(param_1,lVar5,astack_special_x_10,astack_special_x_18,astack_special_x_8,&lStackX_20,uVar7);
    lVar6 = lStackX_20;
    uVar8 = astack_special_x_8[0];
    uVar2 = astack_special_x_10[0];
    uVar4 = astack_special_x_18[0];
  }
  *(int64_t *)(param_1 + 0x628) = lVar6;
  *(int64_t *)(param_1 + 0x630) = lVar3;
  *(uint64_t *)(param_1 + 0x638) = CONCAT44(uVar4,uVar2);
  *(uint64_t *)(param_1 + 0x640) = CONCAT44(uVar7,uVar8);
  return;
}
uint64_t NetworkSystem_0e440(int64_t param_1,int64_t param_2,int *param_3,int *param_4,int *param_5,
                       int64_t *param_6,int param_7)
{
  int32_t uVar1;
  uint uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int iVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uVar11 = 0;
  if (0 < *(int *)(param_2 + 0x30)) {
    lVar3 = *(int64_t *)(param_2 + 0xd0);
    if (((*(uint *)((int64_t)*(int *)(param_2 + 0xf0) * 0xa0 + 0x50 + lVar3) >> 9 & 1) == 0) ||
       (0 < *(short *)(param_2 + 8))) {
      if (param_7 < 0) {
        param_7 = *(int *)(param_2 + 0xf0);
      }
      lVar9 = (int64_t)param_7 * 0xa0;
      uVar4 = *(uint64_t *)(lVar9 + 0x50 + lVar3);
      if (((byte)uVar4 >> 1 & 1) == 0) {
        *param_6 = param_2;
      }
      else {
        uVar1 = *(int32_t *)(lVar9 + 0x5c + lVar3);
        uVar2 = *(uint *)(lVar9 + 0x60 + lVar3);
        *param_3 = 0;
        *param_4 = 0;
        uVar14 = uVar11;
        uVar15 = uVar11;
        do {
          uVar13 = (uint64_t)uVar2;
          uVar10 = *(int64_t *)(param_1 + 0x8f8) + 8 + uVar14 * 0x1f8;
          iVar12 = (int)uVar11;
          if ((0 < *(int *)(uVar10 + 0x30)) &&
             (((*(uint *)((int64_t)*(int *)(uVar10 + 0xf0) * 0xa0 + 0x50 +
                         *(int64_t *)(uVar10 + 0xd0)) >> 9 & 1) == 0 ||
              (0 < *(short *)(uVar10 + 8))))) {
            if (((uVar4 & 0x100) == 0) || (cVar6 = Function_3278a2f4(uVar10,uVar1), cVar6 == '\0')
               ) {
              cVar6 = '\0';
            }
            else {
              cVar6 = '\x01';
            }
            if (((uVar4 & 0x100) == 0) &&
               (cVar7 = Function_3278a2f4(uVar10,uVar13 & 0xffffffff), cVar7 != '\0')) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if ((cVar6 != '\0') || (bVar5)) {
              sVar8 = Function_1250a6b1(uVar10);
              if (0 < sVar8) {
                if ((*param_5 == -1) || ((*param_3 == 0 && (0 < *(short *)(uVar10 + 8))))) {
                  *param_5 = iVar12;
                  uVar15 = uVar10;
                }
                *param_3 = *param_3 + (int)*(short *)(uVar10 + 8);
                sVar8 = Function_1250a6b1(uVar10);
                *param_4 = *param_4 + (int)sVar8;
              }
              uVar13 = (uint64_t)uVar2;
            }
          }
          uVar11 = *(int64_t *)(param_1 + 0x8f8) + 0x200 + uVar14 * 0x1f8;
          if ((0 < *(int *)(uVar11 + 0x30)) &&
             (((*(uint *)((int64_t)*(int *)(uVar11 + 0xf0) * 0xa0 + 0x50 +
                         *(int64_t *)(uVar11 + 0xd0)) >> 9 & 1) == 0 ||
              (0 < *(short *)(uVar11 + 8))))) {
            if (((uVar4 & 0x100) == 0) || (cVar6 = Function_3278a2f4(uVar11,uVar1), cVar6 == '\0')
               ) {
              cVar6 = '\0';
            }
            else {
              cVar6 = '\x01';
            }
            if (((uVar4 & 0x100) == 0) &&
               (cVar7 = Function_3278a2f4(uVar11,uVar13 & 0xffffffff), cVar7 != '\0')) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if (((cVar6 != '\0') || (bVar5)) && (sVar8 = Function_1250a6b1(uVar11), 0 < sVar8)) {
              if ((*param_5 == -1) || ((*param_3 == 0 && (0 < *(short *)(uVar11 + 8))))) {
                *param_5 = iVar12 + 1;
                uVar15 = uVar11;
              }
              *param_3 = *param_3 + (int)*(short *)(uVar11 + 8);
              sVar8 = Function_1250a6b1(uVar11);
              *param_4 = *param_4 + (int)sVar8;
            }
          }
          uVar11 = *(int64_t *)(param_1 + 0x8f8) + 0x3f8 + uVar14 * 0x1f8;
          if ((0 < *(int *)(uVar11 + 0x30)) &&
             (((*(uint *)((int64_t)*(int *)(uVar11 + 0xf0) * 0xa0 + 0x50 +
                         *(int64_t *)(uVar11 + 0xd0)) >> 9 & 1) == 0 ||
              (0 < *(short *)(uVar11 + 8))))) {
            if (((uVar4 & 0x100) == 0) || (cVar6 = Function_3278a2f4(uVar11,uVar1), cVar6 == '\0')
               ) {
              cVar6 = '\0';
            }
            else {
              cVar6 = '\x01';
            }
            if (((uVar4 & 0x100) == 0) && (cVar7 = Function_3278a2f4(uVar11,uVar2), cVar7 != '\0')
               ) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if (((cVar6 != '\0') || (bVar5)) && (sVar8 = Function_1250a6b1(uVar11), 0 < sVar8)) {
              if ((*param_5 == -1) || ((*param_3 == 0 && (0 < *(short *)(uVar11 + 8))))) {
                *param_5 = iVar12 + 2;
                uVar15 = uVar11;
              }
              *param_3 = *param_3 + (int)*(short *)(uVar11 + 8);
              sVar8 = Function_1250a6b1(uVar11);
              *param_4 = *param_4 + (int)sVar8;
            }
          }
          uVar11 = *(int64_t *)(param_1 + 0x8f8) + 0x5f0 + uVar14 * 0x1f8;
          if ((0 < *(int *)(uVar11 + 0x30)) &&
             (((*(uint *)((int64_t)*(int *)(uVar11 + 0xf0) * 0xa0 + 0x50 +
                         *(int64_t *)(uVar11 + 0xd0)) >> 9 & 1) == 0 ||
              (0 < *(short *)(uVar11 + 8))))) {
            if (((uVar4 & 0x100) == 0) || (cVar6 = Function_3278a2f4(uVar11,uVar1), cVar6 == '\0')
               ) {
              cVar6 = '\0';
            }
            else {
              cVar6 = '\x01';
            }
            if (((uVar4 & 0x100) == 0) && (cVar7 = Function_3278a2f4(uVar11,uVar2), cVar7 != '\0')
               ) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if (((cVar6 != '\0') || (bVar5)) && (sVar8 = Function_1250a6b1(uVar11), 0 < sVar8)) {
              if ((*param_5 == -1) || ((*param_3 == 0 && (0 < *(short *)(uVar11 + 8))))) {
                *param_5 = iVar12 + 3;
                uVar15 = uVar11;
              }
              *param_3 = *param_3 + (int)*(short *)(uVar11 + 8);
              sVar8 = Function_1250a6b1(uVar11);
              *param_4 = *param_4 + (int)sVar8;
            }
          }
          uVar11 = *(int64_t *)(param_1 + 0x8f8) + 0x7e8 + uVar14 * 0x1f8;
          if ((0 < *(int *)(uVar11 + 0x30)) &&
             (((*(uint *)((int64_t)*(int *)(uVar11 + 0xf0) * 0xa0 + 0x50 +
                         *(int64_t *)(uVar11 + 0xd0)) >> 9 & 1) == 0 ||
              (0 < *(short *)(uVar11 + 8))))) {
            if (((uVar4 & 0x100) == 0) || (cVar6 = Function_3278a2f4(uVar11,uVar1), cVar6 == '\0')
               ) {
              cVar6 = '\0';
            }
            else {
              cVar6 = '\x01';
            }
            if (((uVar4 & 0x100) == 0) && (cVar7 = Function_3278a2f4(uVar11,uVar2), cVar7 != '\0')
               ) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if (((cVar6 != '\0') || (bVar5)) && (sVar8 = Function_1250a6b1(uVar11), 0 < sVar8)) {
              if ((*param_5 == -1) || ((*param_3 == 0 && (0 < *(short *)(uVar11 + 8))))) {
                *param_5 = iVar12 + 4;
                uVar15 = uVar11;
              }
              *param_3 = *param_3 + (int)*(short *)(uVar11 + 8);
              sVar8 = Function_1250a6b1(uVar11);
              *param_4 = *param_4 + (int)sVar8;
            }
          }
          uVar11 = (uint64_t)(iVar12 + 5U);
          uVar14 = uVar14 + 5;
        } while ((int)(iVar12 + 5U) < 5);
        *param_6 = param_2;
        uVar11 = uVar15;
      }
    }
    else {
      *param_6 = param_2;
    }
    return uVar11;
  }
  *param_6 = param_2;
  return 0;
}
uint64_t NetworkSystem_0e467(uint64_t param_1,int64_t param_2,int *param_3)
{
  int32_t uVar1;
  uint uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  int64_t in_RAX;
  int64_t lVar9;
  uint64_t unaff_RBX;
  uint64_t uVar10;
  uint64_t uVar11;
  int iVar12;
  int *unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar13;
  int *unaff_R13;
  uint64_t unaff_R15;
  uint64_t uVar14;
  int64_t local_var_70;
  int64_t local_var_78;
  int *local_var_90;
  int64_t *local_var_98;
  int local_var_a0;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBX;
  lVar3 = *(int64_t *)(param_2 + 0xd0);
  *(uint64_t *)(in_RAX + -0x28) = unaff_RDI;
  if (((*(uint *)((int64_t)*(int *)(param_2 + 0xf0) * 0xa0 + 0x50 + lVar3) >> 9 & 1) == 0) ||
     ((short)unaff_R15 < *(short *)(param_2 + 8))) {
    if (local_var_a0 < 0) {
      local_var_a0 = *(int *)(param_2 + 0xf0);
    }
    lVar9 = (int64_t)local_var_a0 * 0xa0;
    uVar4 = *(uint64_t *)(lVar9 + 0x50 + lVar3);
    if (((byte)uVar4 >> 1 & 1) == 0) {
      *local_var_98 = param_2;
    }
    else {
      uVar1 = *(int32_t *)(lVar9 + 0x5c + lVar3);
      uVar2 = *(uint *)(lVar9 + 0x60 + lVar3);
      uVar11 = unaff_R15 & 0xffffffff;
      *param_3 = (int)unaff_R15;
      *unaff_R13 = (int)unaff_R15;
      uVar14 = unaff_R15;
      do {
        uVar13 = (uint64_t)uVar2;
        uVar10 = *(int64_t *)(local_var_70 + 0x8f8) + 8 + unaff_R15 * 0x1f8;
        iVar12 = (int)uVar11;
        if ((0 < *(int *)(uVar10 + 0x30)) &&
           (((*(uint *)((int64_t)*(int *)(uVar10 + 0xf0) * 0xa0 + 0x50 +
                       *(int64_t *)(uVar10 + 0xd0)) >> 9 & 1) == 0 || (0 < *(short *)(uVar10 + 8)))
           )) {
          if (((uVar4 & 0x100) == 0) || (cVar6 = Function_3278a2f4(uVar10,uVar1), cVar6 == '\0'))
          {
            cVar6 = '\0';
          }
          else {
            cVar6 = '\x01';
          }
          if (((uVar4 & 0x100) == 0) &&
             (cVar7 = Function_3278a2f4(uVar10,uVar13 & 0xffffffff), cVar7 != '\0')) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if ((cVar6 != '\0') || (bVar5)) {
            sVar8 = Function_1250a6b1(uVar10);
            if (0 < sVar8) {
              if ((*local_var_90 == -1) || ((*unaff_RSI == 0 && (0 < *(short *)(uVar10 + 8)))))
              {
                *local_var_90 = iVar12;
                uVar14 = uVar10;
              }
              *unaff_RSI = *unaff_RSI + (int)*(short *)(uVar10 + 8);
              sVar8 = Function_1250a6b1(uVar10);
              *unaff_R13 = *unaff_R13 + (int)sVar8;
            }
            uVar13 = (uint64_t)uVar2;
          }
        }
        uVar11 = *(int64_t *)(local_var_70 + 0x8f8) + 0x200 + unaff_R15 * 0x1f8;
        if ((0 < *(int *)(uVar11 + 0x30)) &&
           (((*(uint *)((int64_t)*(int *)(uVar11 + 0xf0) * 0xa0 + 0x50 +
                       *(int64_t *)(uVar11 + 0xd0)) >> 9 & 1) == 0 || (0 < *(short *)(uVar11 + 8)))
           )) {
          if (((uVar4 & 0x100) == 0) || (cVar6 = Function_3278a2f4(uVar11,uVar1), cVar6 == '\0'))
          {
            cVar6 = '\0';
          }
          else {
            cVar6 = '\x01';
          }
          if (((uVar4 & 0x100) == 0) &&
             (cVar7 = Function_3278a2f4(uVar11,uVar13 & 0xffffffff), cVar7 != '\0')) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (((cVar6 != '\0') || (bVar5)) && (sVar8 = Function_1250a6b1(uVar11), 0 < sVar8)) {
            if ((*local_var_90 == -1) || ((*unaff_RSI == 0 && (0 < *(short *)(uVar11 + 8))))) {
              *local_var_90 = iVar12 + 1;
              uVar14 = uVar11;
            }
            *unaff_RSI = *unaff_RSI + (int)*(short *)(uVar11 + 8);
            sVar8 = Function_1250a6b1(uVar11);
            *unaff_R13 = *unaff_R13 + (int)sVar8;
          }
        }
        uVar11 = *(int64_t *)(local_var_70 + 0x8f8) + 0x3f8 + unaff_R15 * 0x1f8;
        if ((0 < *(int *)(uVar11 + 0x30)) &&
           (((*(uint *)((int64_t)*(int *)(uVar11 + 0xf0) * 0xa0 + 0x50 +
                       *(int64_t *)(uVar11 + 0xd0)) >> 9 & 1) == 0 || (0 < *(short *)(uVar11 + 8)))
           )) {
          if (((uVar4 & 0x100) == 0) || (cVar6 = Function_3278a2f4(uVar11,uVar1), cVar6 == '\0'))
          {
            cVar6 = '\0';
          }
          else {
            cVar6 = '\x01';
          }
          if (((uVar4 & 0x100) == 0) && (cVar7 = Function_3278a2f4(uVar11,uVar2), cVar7 != '\0'))
          {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (((cVar6 != '\0') || (bVar5)) && (sVar8 = Function_1250a6b1(uVar11), 0 < sVar8)) {
            if ((*local_var_90 == -1) || ((*unaff_RSI == 0 && (0 < *(short *)(uVar11 + 8))))) {
              *local_var_90 = iVar12 + 2;
              uVar14 = uVar11;
            }
            *unaff_RSI = *unaff_RSI + (int)*(short *)(uVar11 + 8);
            sVar8 = Function_1250a6b1(uVar11);
            *unaff_R13 = *unaff_R13 + (int)sVar8;
          }
        }
        uVar11 = *(int64_t *)(local_var_70 + 0x8f8) + 0x5f0 + unaff_R15 * 0x1f8;
        if ((0 < *(int *)(uVar11 + 0x30)) &&
           (((*(uint *)((int64_t)*(int *)(uVar11 + 0xf0) * 0xa0 + 0x50 +
                       *(int64_t *)(uVar11 + 0xd0)) >> 9 & 1) == 0 || (0 < *(short *)(uVar11 + 8)))
           )) {
          if (((uVar4 & 0x100) == 0) || (cVar6 = Function_3278a2f4(uVar11,uVar1), cVar6 == '\0'))
          {
            cVar6 = '\0';
          }
          else {
            cVar6 = '\x01';
          }
          if (((uVar4 & 0x100) == 0) && (cVar7 = Function_3278a2f4(uVar11,uVar2), cVar7 != '\0'))
          {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (((cVar6 != '\0') || (bVar5)) && (sVar8 = Function_1250a6b1(uVar11), 0 < sVar8)) {
            if ((*local_var_90 == -1) || ((*unaff_RSI == 0 && (0 < *(short *)(uVar11 + 8))))) {
              *local_var_90 = iVar12 + 3;
              uVar14 = uVar11;
            }
            *unaff_RSI = *unaff_RSI + (int)*(short *)(uVar11 + 8);
            sVar8 = Function_1250a6b1(uVar11);
            *unaff_R13 = *unaff_R13 + (int)sVar8;
          }
        }
        uVar11 = *(int64_t *)(local_var_70 + 0x8f8) + 0x7e8 + unaff_R15 * 0x1f8;
        if ((0 < *(int *)(uVar11 + 0x30)) &&
           (((*(uint *)((int64_t)*(int *)(uVar11 + 0xf0) * 0xa0 + 0x50 +
                       *(int64_t *)(uVar11 + 0xd0)) >> 9 & 1) == 0 || (0 < *(short *)(uVar11 + 8)))
           )) {
          if (((uVar4 & 0x100) == 0) || (cVar6 = Function_3278a2f4(uVar11,uVar1), cVar6 == '\0'))
          {
            cVar6 = '\0';
          }
          else {
            cVar6 = '\x01';
          }
          if (((uVar4 & 0x100) == 0) && (cVar7 = Function_3278a2f4(uVar11,uVar2), cVar7 != '\0'))
          {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (((cVar6 != '\0') || (bVar5)) && (sVar8 = Function_1250a6b1(uVar11), 0 < sVar8)) {
            if ((*local_var_90 == -1) || ((*unaff_RSI == 0 && (0 < *(short *)(uVar11 + 8))))) {
              *local_var_90 = iVar12 + 4;
              uVar14 = uVar11;
            }
            *unaff_RSI = *unaff_RSI + (int)*(short *)(uVar11 + 8);
            sVar8 = Function_1250a6b1(uVar11);
            *unaff_R13 = *unaff_R13 + (int)sVar8;
          }
        }
        uVar11 = (uint64_t)(iVar12 + 5U);
        unaff_R15 = unaff_R15 + 5;
      } while ((int)(iVar12 + 5U) < 5);
      *local_var_98 = local_var_78;
      unaff_R15 = uVar14;
    }
  }
  else {
    *local_var_98 = param_2;
  }
  return unaff_R15;
}
uint64_t NetworkSystem_0e4c0(uint64_t param_1,uint64_t param_2,int *param_3)
{
  int32_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  uint64_t uVar9;
  uint64_t uVar10;
  int iVar11;
  int *unaff_RSI;
  int unaff_EDI;
  uint64_t uVar12;
  int *unaff_R13;
  uint64_t unaff_R15;
  uint64_t uVar13;
  int64_t local_var_70;
  uint64_t local_var_78;
  int *local_var_90;
  uint64_t *local_var_98;
  int local_var_a0;
  if (local_var_a0 < 0) {
    local_var_a0 = unaff_EDI;
  }
  lVar8 = (int64_t)local_var_a0 * 0xa0;
  uVar3 = *(uint64_t *)(lVar8 + 0x50 + unaff_RBX);
  if (((byte)uVar3 >> 1 & 1) == 0) {
    *local_var_98 = param_2;
  }
  else {
    uVar1 = *(int32_t *)(lVar8 + 0x5c + unaff_RBX);
    uVar2 = *(uint *)(lVar8 + 0x60 + unaff_RBX);
    uVar10 = unaff_R15 & 0xffffffff;
    *param_3 = (int)unaff_R15;
    *unaff_R13 = (int)unaff_R15;
    uVar13 = unaff_R15;
    do {
      uVar12 = (uint64_t)uVar2;
      uVar9 = *(int64_t *)(local_var_70 + 0x8f8) + 8 + unaff_R15 * 0x1f8;
      iVar11 = (int)uVar10;
      if ((0 < *(int *)(uVar9 + 0x30)) &&
         (((*(uint *)((int64_t)*(int *)(uVar9 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(uVar9 + 0xd0))
            >> 9 & 1) == 0 || (0 < *(short *)(uVar9 + 8))))) {
        if (((uVar3 & 0x100) == 0) || (cVar5 = Function_3278a2f4(uVar9,uVar1), cVar5 == '\0')) {
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
        }
        if (((uVar3 & 0x100) == 0) &&
           (cVar6 = Function_3278a2f4(uVar9,uVar12 & 0xffffffff), cVar6 != '\0')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((cVar5 != '\0') || (bVar4)) {
          sVar7 = Function_1250a6b1(uVar9);
          if (0 < sVar7) {
            if ((*local_var_90 == -1) || ((*unaff_RSI == 0 && (0 < *(short *)(uVar9 + 8))))) {
              *local_var_90 = iVar11;
              uVar13 = uVar9;
            }
            *unaff_RSI = *unaff_RSI + (int)*(short *)(uVar9 + 8);
            sVar7 = Function_1250a6b1(uVar9);
            *unaff_R13 = *unaff_R13 + (int)sVar7;
          }
          uVar12 = (uint64_t)uVar2;
        }
      }
      uVar10 = *(int64_t *)(local_var_70 + 0x8f8) + 0x200 + unaff_R15 * 0x1f8;
      if ((0 < *(int *)(uVar10 + 0x30)) &&
         (((*(uint *)((int64_t)*(int *)(uVar10 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(uVar10 + 0xd0)
                     ) >> 9 & 1) == 0 || (0 < *(short *)(uVar10 + 8))))) {
        if (((uVar3 & 0x100) == 0) || (cVar5 = Function_3278a2f4(uVar10,uVar1), cVar5 == '\0')) {
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
        }
        if (((uVar3 & 0x100) == 0) &&
           (cVar6 = Function_3278a2f4(uVar10,uVar12 & 0xffffffff), cVar6 != '\0')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (((cVar5 != '\0') || (bVar4)) && (sVar7 = Function_1250a6b1(uVar10), 0 < sVar7)) {
          if ((*local_var_90 == -1) || ((*unaff_RSI == 0 && (0 < *(short *)(uVar10 + 8))))) {
            *local_var_90 = iVar11 + 1;
            uVar13 = uVar10;
          }
          *unaff_RSI = *unaff_RSI + (int)*(short *)(uVar10 + 8);
          sVar7 = Function_1250a6b1(uVar10);
          *unaff_R13 = *unaff_R13 + (int)sVar7;
        }
      }
      uVar10 = *(int64_t *)(local_var_70 + 0x8f8) + 0x3f8 + unaff_R15 * 0x1f8;
      if ((0 < *(int *)(uVar10 + 0x30)) &&
         (((*(uint *)((int64_t)*(int *)(uVar10 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(uVar10 + 0xd0)
                     ) >> 9 & 1) == 0 || (0 < *(short *)(uVar10 + 8))))) {
        if (((uVar3 & 0x100) == 0) || (cVar5 = Function_3278a2f4(uVar10,uVar1), cVar5 == '\0')) {
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
        }
        if (((uVar3 & 0x100) == 0) && (cVar6 = Function_3278a2f4(uVar10,uVar2), cVar6 != '\0')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (((cVar5 != '\0') || (bVar4)) && (sVar7 = Function_1250a6b1(uVar10), 0 < sVar7)) {
          if ((*local_var_90 == -1) || ((*unaff_RSI == 0 && (0 < *(short *)(uVar10 + 8))))) {
            *local_var_90 = iVar11 + 2;
            uVar13 = uVar10;
          }
          *unaff_RSI = *unaff_RSI + (int)*(short *)(uVar10 + 8);
          sVar7 = Function_1250a6b1(uVar10);
          *unaff_R13 = *unaff_R13 + (int)sVar7;
        }
      }
      uVar10 = *(int64_t *)(local_var_70 + 0x8f8) + 0x5f0 + unaff_R15 * 0x1f8;
      if ((0 < *(int *)(uVar10 + 0x30)) &&
         (((*(uint *)((int64_t)*(int *)(uVar10 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(uVar10 + 0xd0)
                     ) >> 9 & 1) == 0 || (0 < *(short *)(uVar10 + 8))))) {
        if (((uVar3 & 0x100) == 0) || (cVar5 = Function_3278a2f4(uVar10,uVar1), cVar5 == '\0')) {
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
        }
        if (((uVar3 & 0x100) == 0) && (cVar6 = Function_3278a2f4(uVar10,uVar2), cVar6 != '\0')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (((cVar5 != '\0') || (bVar4)) && (sVar7 = Function_1250a6b1(uVar10), 0 < sVar7)) {
          if ((*local_var_90 == -1) || ((*unaff_RSI == 0 && (0 < *(short *)(uVar10 + 8))))) {
            *local_var_90 = iVar11 + 3;
            uVar13 = uVar10;
          }
          *unaff_RSI = *unaff_RSI + (int)*(short *)(uVar10 + 8);
          sVar7 = Function_1250a6b1(uVar10);
          *unaff_R13 = *unaff_R13 + (int)sVar7;
        }
      }
      uVar10 = *(int64_t *)(local_var_70 + 0x8f8) + 0x7e8 + unaff_R15 * 0x1f8;
      if ((0 < *(int *)(uVar10 + 0x30)) &&
         (((*(uint *)((int64_t)*(int *)(uVar10 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(uVar10 + 0xd0)
                     ) >> 9 & 1) == 0 || (0 < *(short *)(uVar10 + 8))))) {
        if (((uVar3 & 0x100) == 0) || (cVar5 = Function_3278a2f4(uVar10,uVar1), cVar5 == '\0')) {
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
        }
        if (((uVar3 & 0x100) == 0) && (cVar6 = Function_3278a2f4(uVar10,uVar2), cVar6 != '\0')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (((cVar5 != '\0') || (bVar4)) && (sVar7 = Function_1250a6b1(uVar10), 0 < sVar7)) {
          if ((*local_var_90 == -1) || ((*unaff_RSI == 0 && (0 < *(short *)(uVar10 + 8))))) {
            *local_var_90 = iVar11 + 4;
            uVar13 = uVar10;
          }
          *unaff_RSI = *unaff_RSI + (int)*(short *)(uVar10 + 8);
          sVar7 = Function_1250a6b1(uVar10);
          *unaff_R13 = *unaff_R13 + (int)sVar7;
        }
      }
      uVar10 = (uint64_t)(iVar11 + 5U);
      unaff_R15 = unaff_R15 + 5;
    } while ((int)(iVar11 + 5U) < 5);
    *local_var_98 = local_var_78;
    unaff_R15 = uVar13;
  }
  return unaff_R15;
}
uint64_t NetworkSystem_0e4f2(uint64_t param_1,uint64_t param_2,int *param_3)
{
  bool bVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  int *unaff_RSI;
  uint64_t unaff_RDI;
  int32_t uVar10;
  uint64_t in_R11;
  uint64_t uVar11;
  int *unaff_R13;
  uint64_t unaff_R15;
  uint64_t uVar12;
  int64_t local_var_70;
  uint64_t local_var_78;
  int *local_var_90;
  uint64_t *local_var_98;
  uVar7 = unaff_R15 & 0xffffffff;
  *param_3 = (int)unaff_R15;
  uVar5 = (int32_t)param_2;
  uVar10 = (int32_t)in_R11;
  *unaff_R13 = (int)unaff_R15;
  uVar8 = param_2;
  uVar11 = in_R11;
  uVar12 = unaff_R15;
  do {
    uVar6 = *(int64_t *)(local_var_70 + 0x8f8) + 8 + unaff_R15 * 0x1f8;
    iVar9 = (int)uVar7;
    if ((0 < *(int *)(uVar6 + 0x30)) &&
       (((*(uint *)((int64_t)*(int *)(uVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(uVar6 + 0xd0)) >>
          9 & 1) == 0 || (0 < *(short *)(uVar6 + 8))))) {
      if ((unaff_RDI & 0x100) == 0) {
LAB_18050e592:
        cVar2 = '\0';
      }
      else {
        cVar2 = Function_3278a2f4(uVar6,uVar8);
        if (cVar2 == '\0') goto LAB_18050e592;
        cVar2 = '\x01';
      }
      if ((unaff_RDI & 0x100) == 0) {
        cVar3 = Function_3278a2f4(uVar6,uVar11 & 0xffffffff);
        if (cVar3 == '\0') goto LAB_18050e5ad;
        bVar1 = true;
      }
      else {
LAB_18050e5ad:
        bVar1 = false;
      }
      if ((cVar2 != '\0') || (bVar1)) {
        sVar4 = Function_1250a6b1(uVar6);
        if (0 < sVar4) {
          if ((*local_var_90 == -1) || ((*unaff_RSI == 0 && (0 < *(short *)(uVar6 + 8))))) {
            *local_var_90 = iVar9;
            uVar12 = uVar6;
          }
          *unaff_RSI = *unaff_RSI + (int)*(short *)(uVar6 + 8);
          sVar4 = Function_1250a6b1(uVar6);
          *unaff_R13 = *unaff_R13 + (int)sVar4;
        }
        uVar11 = in_R11 & 0xffffffff;
      }
      uVar8 = param_2 & 0xffffffff;
    }
    uVar7 = *(int64_t *)(local_var_70 + 0x8f8) + 0x200 + unaff_R15 * 0x1f8;
    if ((0 < *(int *)(uVar7 + 0x30)) &&
       (((*(uint *)((int64_t)*(int *)(uVar7 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(uVar7 + 0xd0)) >>
          9 & 1) == 0 || (0 < *(short *)(uVar7 + 8))))) {
      if ((unaff_RDI & 0x100) == 0) {
LAB_18050e660:
        cVar2 = '\0';
      }
      else {
        cVar2 = Function_3278a2f4(uVar7,uVar8);
        if (cVar2 == '\0') goto LAB_18050e660;
        cVar2 = '\x01';
      }
      if ((unaff_RDI & 0x100) == 0) {
        cVar3 = Function_3278a2f4(uVar7,uVar11 & 0xffffffff);
        if (cVar3 == '\0') goto LAB_18050e67b;
        bVar1 = true;
      }
      else {
LAB_18050e67b:
        bVar1 = false;
      }
      if ((cVar2 != '\0') || (bVar1)) {
        sVar4 = Function_1250a6b1(uVar7);
        if (0 < sVar4) {
          if ((*local_var_90 == -1) || ((*unaff_RSI == 0 && (0 < *(short *)(uVar7 + 8))))) {
            *local_var_90 = iVar9 + 1;
            uVar12 = uVar7;
          }
          *unaff_RSI = *unaff_RSI + (int)*(short *)(uVar7 + 8);
          sVar4 = Function_1250a6b1(uVar7);
          *unaff_R13 = *unaff_R13 + (int)sVar4;
        }
      }
    }
    uVar8 = *(int64_t *)(local_var_70 + 0x8f8) + 0x3f8 + unaff_R15 * 0x1f8;
    if ((0 < *(int *)(uVar8 + 0x30)) &&
       (((*(uint *)((int64_t)*(int *)(uVar8 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(uVar8 + 0xd0)) >>
          9 & 1) == 0 || (0 < *(short *)(uVar8 + 8))))) {
      if ((unaff_RDI & 0x100) == 0) {
LAB_18050e72c:
        cVar2 = '\0';
      }
      else {
        cVar2 = Function_3278a2f4(uVar8,uVar5);
        if (cVar2 == '\0') goto LAB_18050e72c;
        cVar2 = '\x01';
      }
      if ((unaff_RDI & 0x100) == 0) {
        cVar3 = Function_3278a2f4(uVar8,uVar10);
        if (cVar3 == '\0') goto LAB_18050e748;
        bVar1 = true;
      }
      else {
LAB_18050e748:
        bVar1 = false;
      }
      if ((cVar2 != '\0') || (bVar1)) {
        sVar4 = Function_1250a6b1(uVar8);
        if (0 < sVar4) {
          if ((*local_var_90 == -1) || ((*unaff_RSI == 0 && (0 < *(short *)(uVar8 + 8))))) {
            *local_var_90 = iVar9 + 2;
            uVar12 = uVar8;
          }
          *unaff_RSI = *unaff_RSI + (int)*(short *)(uVar8 + 8);
          sVar4 = Function_1250a6b1(uVar8);
          *unaff_R13 = *unaff_R13 + (int)sVar4;
        }
      }
    }
    uVar8 = *(int64_t *)(local_var_70 + 0x8f8) + 0x5f0 + unaff_R15 * 0x1f8;
    if ((0 < *(int *)(uVar8 + 0x30)) &&
       (((*(uint *)((int64_t)*(int *)(uVar8 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(uVar8 + 0xd0)) >>
          9 & 1) == 0 || (0 < *(short *)(uVar8 + 8))))) {
      if ((unaff_RDI & 0x100) == 0) {
LAB_18050e7f9:
        cVar2 = '\0';
      }
      else {
        cVar2 = Function_3278a2f4(uVar8,uVar5);
        if (cVar2 == '\0') goto LAB_18050e7f9;
        cVar2 = '\x01';
      }
      if ((unaff_RDI & 0x100) == 0) {
        cVar3 = Function_3278a2f4(uVar8,uVar10);
        if (cVar3 == '\0') goto LAB_18050e815;
        bVar1 = true;
      }
      else {
LAB_18050e815:
        bVar1 = false;
      }
      if ((cVar2 != '\0') || (bVar1)) {
        sVar4 = Function_1250a6b1(uVar8);
        if (0 < sVar4) {
          if ((*local_var_90 == -1) || ((*unaff_RSI == 0 && (0 < *(short *)(uVar8 + 8))))) {
            *local_var_90 = iVar9 + 3;
            uVar12 = uVar8;
          }
          *unaff_RSI = *unaff_RSI + (int)*(short *)(uVar8 + 8);
          sVar4 = Function_1250a6b1(uVar8);
          *unaff_R13 = *unaff_R13 + (int)sVar4;
        }
      }
    }
    uVar8 = *(int64_t *)(local_var_70 + 0x8f8) + 0x7e8 + unaff_R15 * 0x1f8;
    if ((0 < *(int *)(uVar8 + 0x30)) &&
       (((*(uint *)((int64_t)*(int *)(uVar8 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(uVar8 + 0xd0)) >>
          9 & 1) == 0 || (0 < *(short *)(uVar8 + 8))))) {
      if ((unaff_RDI & 0x100) == 0) {
LAB_18050e8c6:
        cVar2 = '\0';
      }
      else {
        cVar2 = Function_3278a2f4(uVar8,uVar5);
        if (cVar2 == '\0') goto LAB_18050e8c6;
        cVar2 = '\x01';
      }
      if ((unaff_RDI & 0x100) == 0) {
        cVar3 = Function_3278a2f4(uVar8,uVar10);
        if (cVar3 == '\0') goto LAB_18050e8e2;
        bVar1 = true;
      }
      else {
LAB_18050e8e2:
        bVar1 = false;
      }
      if ((cVar2 != '\0') || (bVar1)) {
        sVar4 = Function_1250a6b1(uVar8);
        if (0 < sVar4) {
          if ((*local_var_90 == -1) || ((*unaff_RSI == 0 && (0 < *(short *)(uVar8 + 8))))) {
            *local_var_90 = iVar9 + 4;
            uVar12 = uVar8;
          }
          *unaff_RSI = *unaff_RSI + (int)*(short *)(uVar8 + 8);
          sVar4 = Function_1250a6b1(uVar8);
          *unaff_R13 = *unaff_R13 + (int)sVar4;
        }
      }
    }
    uVar8 = param_2 & 0xffffffff;
    uVar7 = (uint64_t)(iVar9 + 5U);
    uVar11 = in_R11 & 0xffffffff;
    unaff_R15 = unaff_R15 + 5;
    if (4 < (int)(iVar9 + 5U)) {
      *local_var_98 = local_var_78;
      return uVar12;
    }
  } while( true );
}