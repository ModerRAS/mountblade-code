#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 04_ui_system_part411.c - 4 个函数
// 函数: void NetworkProtocol_95360(int64_t param_1,int8_t *param_2,int *param_3)
void NetworkProtocol_95360(int64_t param_1,int8_t *param_2,int *param_3)
{
  byte bVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  float fVar10;
  float fVar11;
  int8_t stack_array_738 [68];
  int32_t local_var_6f4;
  int *piStack_6f0;
  int64_t lStack_6e0;
  int64_t lStack_6b8;
  int64_t alStack_6b0 [13];
  int8_t stack_array_648 [1536];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_738;
  iVar4 = *(int *)(param_1 + 0xac);
  lVar7 = (int64_t)iVar4;
  piStack_6f0 = param_3;
  if (iVar4 < *(int *)(param_1 + 0x20)) {
    lStack_6e0 = *(int64_t *)(param_1 + 0x18);
    lStack_6b8 = lVar7 * 3;
    lVar9 = (int64_t)*(int *)(lStack_6e0 + lVar7 * 0xc) + *(int64_t *)(param_1 + 8);
    cVar3 = *(char *)(lStack_6e0 + 8 + lVar7 * 0xc);
    if (cVar3 == '\x01') {
      iVar8 = *(int *)(param_1 + 0xb0);
      if (iVar4 < iVar8) {
        *(int *)(param_1 + 0xac) = iVar4 + 1;
        goto NetworkProtocol_95b89;
      }
      fVar10 = *(float *)(lVar9 + 0x18);
      fVar11 = fVar10;
      if (iVar8 != -1) {
        fVar11 = *(float *)(param_1 + 0xb4);
        iVar8 = -1;
        *(int32_t *)(param_1 + 0xb0) = 0xffffffff;
        *(int32_t *)(param_1 + 0xb4) = 0xbf800000;
      }
      *(float *)(param_1 + 0xa8) = fVar10;
      lVar7 = 0;
      fVar10 = (float)*(uint *)(param_1 + 0x68) * fVar10;
      if ((9.223372e+18 <= fVar10) && (fVar10 = fVar10 - 9.223372e+18, fVar10 < 9.223372e+18)) {
        lVar7 = -0x8000000000000000;
      }
      lVar2 = *(int64_t *)(param_1 + 0xa0);
      lVar6 = *(int64_t *)(param_1 + 0x98);
      if (lVar6 == 0) {
        fVar11 = (float)*(uint *)(param_1 + 0x68) * fVar11;
        lVar6 = 0;
        if ((9.223372e+18 <= fVar11) && (fVar11 = fVar11 - 9.223372e+18, fVar11 < 9.223372e+18)) {
          lVar6 = -0x8000000000000000;
        }
        lVar6 = lVar2 - ((int64_t)fVar11 + lVar6);
        *(int64_t *)(param_1 + 0x98) = lVar6;
      }
      bVar1 = *(byte *)(param_1 + 0x6c);
      if (*(int64_t *)(param_1 + 0xc0) != 0) {
        uVar5 = NetworkProtocol_95ef0(param_1);
        iVar4 = (**(code **)(param_1 + 0xc0))
                          (uVar5,iVar4,*(int32_t *)(lVar9 + 0x18),*(uint64_t *)(param_1 + 0xb8)
                          );
        if (iVar4 != 0) goto NetworkProtocol_95b89;
      }
      if (((((bVar1 & 2) != 0 || (int64_t)fVar10 + lVar7 < lVar2 - lVar6) &&
           (iVar4 = *piStack_6f0, *piStack_6f0 = iVar4 + 1, iVar4 < 10)) &&
          ((*(uint *)(param_1 + 0x6c) >> 0x18 & 1) == 0)) &&
         (((*(uint *)(param_1 + 0x6c) >> 0x19 & 1) != 0 && (iVar8 == *(int *)(param_1 + 0xb0))))) {
LAB_18089555d:
// WARNING: Subroutine does not return
        memcpy(stack_array_648,lVar9,(int64_t)*(int *)(lVar9 + 8));
      }
    }
    else {
      if (cVar3 == '\x06') {
        cVar3 = SystemFunction_000180881f80(*(uint64_t *)(param_1 + 0x58));
        if (cVar3 == '\0') goto LAB_18089555d;
        *param_2 = 0;
        goto NetworkProtocol_95b89;
      }
      if (cVar3 == '\a') {
        cVar3 = SystemFunction_000180881f80(*(uint64_t *)(param_1 + 0x58));
        if (cVar3 == '\0') {
          if (*(int *)(*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x58) + 0x90) + 0x790) +
                      0x1c8) != 0) {
            *param_2 = 0;
            goto NetworkProtocol_95b89;
          }
          goto LAB_18089555d;
        }
      }
      else {
        if ((cVar3 != '\x02') || ((*(byte *)(param_1 + 0x6c) & 4) != 0)) goto LAB_18089555d;
        local_var_6f4 = *(int32_t *)(lVar9 + 0x20);
        iVar4 = NetworkProtocol_95c60(param_1,iVar4,&local_var_6f4);
        if (iVar4 != 0) goto NetworkProtocol_95b89;
        iVar4 = SystemFunction_00018088c530(local_var_6f4,alStack_6b0);
        if ((iVar4 != 0) || (*(int *)(alStack_6b0[0] + 0x30) != 2)) goto LAB_18089555d;
      }
    }
    *param_2 = 0;
  }
  else {
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfdffffff;
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x4000000;
    *param_2 = 0;
  }
NetworkProtocol_95b89:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_738);
}
// 函数: void NetworkProtocol_953bf(int64_t param_1,uint64_t param_2,int *param_3)
void NetworkProtocol_953bf(int64_t param_1,uint64_t param_2,int *param_3)
{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int64_t in_RAX;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int unaff_EBX;
  int32_t unaff_0000001c;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  char in_R11B;
  int8_t *unaff_R13;
  int64_t lVar8;
  float fVar9;
  float fVar10;
  uint64_t local_var_40;
  int *local_var_48;
  lVar5 = CONCAT44(unaff_0000001c,unaff_EBX) + CONCAT44(unaff_0000001c,unaff_EBX) * 2;
  lVar8 = (int64_t)*(int *)(in_RAX + lVar5 * 4) + *(int64_t *)(param_1 + 8);
  cVar2 = *(char *)(in_RAX + 8 + lVar5 * 4);
  *(int64_t *)(unaff_RBP + -0x80) = lVar5;
  if (cVar2 == in_R11B) {
    iVar4 = *(int *)(param_1 + 0xb0);
    if (unaff_EBX < iVar4) {
      *(int *)(param_1 + 0xac) = unaff_EBX + 1;
      goto LAB_180895b69;
    }
    fVar9 = *(float *)(lVar8 + 0x18);
    fVar10 = fVar9;
    if (iVar4 != -1) {
      fVar10 = *(float *)(param_1 + 0xb4);
      iVar4 = -1;
      *(int32_t *)(param_1 + 0xb0) = 0xffffffff;
      *(int32_t *)(param_1 + 0xb4) = 0xbf800000;
    }
    *(float *)(param_1 + 0xa8) = fVar9;
    lVar5 = 0;
    fVar9 = (float)*(uint *)(param_1 + 0x68) * fVar9;
    if ((9.223372e+18 <= fVar9) && (fVar9 = fVar9 - 9.223372e+18, fVar9 < 9.223372e+18)) {
      lVar5 = -0x8000000000000000;
    }
    lVar1 = *(int64_t *)(param_1 + 0xa0);
    lVar7 = *(int64_t *)(param_1 + 0x98);
    if (lVar7 == 0) {
      fVar10 = (float)*(uint *)(param_1 + 0x68) * fVar10;
      lVar7 = 0;
      if ((9.223372e+18 <= fVar10) && (fVar10 = fVar10 - 9.223372e+18, fVar10 < 9.223372e+18)) {
        lVar7 = -0x8000000000000000;
      }
      lVar7 = lVar1 - ((int64_t)fVar10 + lVar7);
      *(int64_t *)(unaff_RDI + 0x98) = lVar7;
    }
    cVar2 = (int64_t)fVar9 + lVar5 < lVar1 - lVar7;
    if ((*(byte *)(unaff_RDI + 0x6c) & 2) != 0) {
      cVar2 = in_R11B;
    }
    if (*(int64_t *)(unaff_RDI + 0xc0) != 0) {
      uVar6 = NetworkProtocol_95ef0();
      iVar3 = (**(code **)(unaff_RDI + 0xc0))
                        (uVar6,unaff_EBX,*(int32_t *)(lVar8 + 0x18),
                         *(uint64_t *)(unaff_RDI + 0xb8));
      param_3 = local_var_48;
      if (iVar3 != 0) goto LAB_180895b69;
    }
    if ((((cVar2 != '\0') && (iVar3 = *param_3, *param_3 = iVar3 + 1, iVar3 < 10)) &&
        ((*(uint *)(unaff_RDI + 0x6c) >> 0x18 & 1) == 0)) &&
       (((*(uint *)(unaff_RDI + 0x6c) >> 0x19 & 1) != 0 && (iVar4 == *(int *)(unaff_RDI + 0xb0)))))
    {
LAB_18089555d:
// WARNING: Subroutine does not return
      memcpy(unaff_RBP + -0x10,lVar8,(int64_t)*(int *)(lVar8 + 8));
    }
  }
  else {
    if (cVar2 == '\x06') {
      cVar2 = SystemFunction_000180881f80(*(uint64_t *)(param_1 + 0x58));
      if (cVar2 == '\0') goto LAB_18089555d;
      *unaff_R13 = 0;
      goto LAB_180895b69;
    }
    if (cVar2 == '\a') {
      cVar2 = SystemFunction_000180881f80(*(uint64_t *)(param_1 + 0x58));
      if (cVar2 == '\0') {
        if (*(int *)(*(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x58) + 0x90) + 0x790) +
                    0x1c8) != 0) {
          *unaff_R13 = 0;
          goto LAB_180895b69;
        }
        goto LAB_18089555d;
      }
    }
    else {
      if ((cVar2 != '\x02') || ((*(byte *)(param_1 + 0x6c) & 4) != 0)) goto LAB_18089555d;
      local_var_40._4_4_ = *(int32_t *)(lVar8 + 0x20);
      iVar4 = NetworkProtocol_95c60(param_1,unaff_EBX,(int64_t)&local_buffer_00000040 + 4);
      if (iVar4 != 0) goto LAB_180895b69;
      iVar4 = SystemFunction_00018088c530(local_var_40._4_4_,unaff_RBP + -0x78);
      if ((iVar4 != 0) || (*(int *)(*(int64_t *)(unaff_RBP + -0x78) + 0x30) != 2))
      goto LAB_18089555d;
    }
  }
  *unaff_R13 = 0;
LAB_180895b69:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x5f0) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_95b89(void)
void NetworkProtocol_95b89(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x5f0) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_95bb0(int64_t param_1,int param_2,uint64_t *param_3)
void NetworkProtocol_95bb0(int64_t param_1,int param_2,uint64_t *param_3)
{
  uint64_t uVar1;
  int *piVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  *param_3 = 0;
  param_3[1] = 0;
  piVar2 = (int *)(**(code **)(*(int64_t *)
                                ((int64_t)
                                 *(int *)(*(int64_t *)(param_1 + 0x18) + (int64_t)param_2 * 0xc) +
                                *(int64_t *)(param_1 + 8)) + 0x50))();
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  if (param_2 + 1 < *(int *)(param_1 + 0x20)) {
    lVar4 = (int64_t)(param_2 + 1);
    piVar2 = (int *)(*(int64_t *)(param_1 + 0x18) + lVar4 * 0xc);
    while (((char)piVar2[2] != '\x02' ||
           (lVar3 = (int64_t)*piVar2 + *(int64_t *)(param_1 + 8), *(int *)(lVar3 + 0x20) != iVar5)
           )) {
      lVar4 = lVar4 + 1;
      piVar2 = piVar2 + 3;
      if (*(int *)(param_1 + 0x20) <= lVar4) {
        return;
      }
    }
    uVar1 = *(uint64_t *)(lVar3 + 0x18);
    *param_3 = *(uint64_t *)(lVar3 + 0x10);
    param_3[1] = uVar1;
  }
  return;
}
uint64_t NetworkProtocol_95c60(int64_t param_1,int param_2,uint *param_3)
{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int iVar5;
  int32_t stack_special_x_1c;
  if (param_3 != (uint *)0x0) {
    uVar1 = *param_3;
    if (uVar1 != 0) {
      if (((*(int *)(param_1 + 0x94) != 0) && (*(int *)(param_1 + 0x78) != 0)) &&
         (iVar5 = *(int *)(*(int64_t *)(param_1 + 0x70) +
                          (int64_t)(int)(*(int *)(param_1 + 0x78) - 1U & uVar1) * 4), iVar5 != -1))
      {
        lVar2 = *(int64_t *)(param_1 + 0x80);
        do {
          lVar3 = (int64_t)iVar5;
          if (*(uint *)(lVar2 + lVar3 * 0x10) == uVar1) {
            stack_special_x_1c = (uint)((uint64_t)*(uint64_t *)(lVar2 + 8 + lVar3 * 0x10) >> 0x20);
            if (stack_special_x_1c != 0) {
              *param_3 = stack_special_x_1c;
              return 0;
            }
            goto LAB_180895ccb;
          }
          iVar5 = *(int *)(lVar2 + 4 + lVar3 * 0x10);
        } while (iVar5 != -1);
      }
      stack_special_x_1c = 0;
LAB_180895ccb:
      puVar4 = (uint64_t *)
               ((int64_t)*(int *)(*(int64_t *)(param_1 + 0x18) + (int64_t)param_2 * 0xc) +
               *(int64_t *)(param_1 + 8));
      if (puVar4 != (uint64_t *)0x0) {
        (**(code **)*puVar4)();
      }
      *param_3 = stack_special_x_1c;
      return 0;
    }
  }
  return 0x1e;
}
uint64_t NetworkProtocol_95c8b(int64_t param_1,uint64_t param_2,int64_t param_3,uint param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int iVar4;
  int *unaff_RDI;
  int64_t in_R10;
  bool in_ZF;
  int iStack0000000000000044;
  if (((!in_ZF) && (*(int *)(param_1 + 0x78) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(in_R10 + 0x70) +
                      (int64_t)(int)(*(int *)(param_1 + 0x78) - 1U & param_4) * 4), iVar4 != -1)) {
    lVar1 = *(int64_t *)(in_R10 + 0x80);
    do {
      lVar2 = (int64_t)iVar4;
      if (*(uint *)(lVar1 + lVar2 * 0x10) == param_4) {
        iStack0000000000000044 = (int)((uint64_t)*(uint64_t *)(lVar1 + 8 + lVar2 * 0x10) >> 0x20)
        ;
        if (iStack0000000000000044 != 0) {
          *unaff_RDI = iStack0000000000000044;
          return 0;
        }
        goto LAB_180895ccb;
      }
      iVar4 = *(int *)(lVar1 + 4 + lVar2 * 0x10);
    } while (iVar4 != -1);
  }
  iStack0000000000000044 = 0;
LAB_180895ccb:
  puVar3 = (uint64_t *)
           ((int64_t)*(int *)(*(int64_t *)(in_R10 + 0x18) + param_3 * 0xc) +
           *(int64_t *)(in_R10 + 8));
  if (puVar3 != (uint64_t *)0x0) {
    (**(code **)*puVar3)();
  }
  *unaff_RDI = iStack0000000000000044;
  return 0;
}
uint64_t NetworkProtocol_95cf1(int64_t param_1,uint64_t param_2,int64_t param_3)
{
  uint64_t uVar1;
  int64_t in_RAX;
  uint64_t *puVar2;
  int *unaff_RDI;
  int64_t in_R10;
  uint64_t local_buffer_40;
  uVar1 = *(uint64_t *)(param_1 + 8 + in_RAX * 8);
  local_buffer_40._4_4_ = (int)((uint64_t)uVar1 >> 0x20);
  if (local_buffer_40._4_4_ != 0) {
    *unaff_RDI = local_buffer_40._4_4_;
    return 0;
  }
  puVar2 = (uint64_t *)
           ((int64_t)*(int *)(*(int64_t *)(in_R10 + 0x18) + param_3 * 0xc) +
           *(int64_t *)(in_R10 + 8));
  if (puVar2 != (uint64_t *)0x0) {
    local_buffer_40 = uVar1;
    (**(code **)*puVar2)();
  }
  *unaff_RDI = 0;
  return 0;
}
uint64_t NetworkProtocol_95d16(void)
{
  return 0x1e;
}
uint64_t NetworkProtocol_95d30(int64_t *param_1,uint *param_2,uint64_t *param_3)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uVar4 = NetworkProtocol_95210();
  if ((int)uVar4 == 0) {
    if ((int)param_1[1] == 0) {
      return 0x1c;
    }
    uVar1 = *param_2;
    lVar8 = (int64_t)(int)((int)param_1[1] - 1U & uVar1);
    piVar13 = (int *)(*param_1 + lVar8 * 4);
    iVar2 = *(int *)(*param_1 + lVar8 * 4);
    if (iVar2 != -1) {
      lVar8 = param_1[2];
      do {
        lVar9 = (int64_t)iVar2;
        if (*(uint *)(lVar8 + lVar9 * 0x10) == uVar1) {
          *(uint64_t *)(lVar8 + 8 + lVar9 * 0x10) = *param_3;
          return 0;
        }
        iVar2 = *(int *)(lVar8 + 4 + lVar9 * 0x10);
        piVar13 = (int *)(lVar8 + 4 + lVar9 * 0x10);
      } while (iVar2 != -1);
    }
    iVar2 = (int)param_1[4];
    if (iVar2 == -1) {
      uVar4 = *param_3;
      iVar2 = (int)param_1[3];
      iVar7 = iVar2 + 1;
      uVar11 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
      iVar3 = (*(uint *)((int64_t)param_1 + 0x1c) ^ uVar11) - uVar11;
      if (iVar3 < iVar7) {
        iVar12 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar7;
        if (iVar7 <= iVar12) {
          iVar3 = iVar12;
        }
        if (iVar3 < 4) {
          iVar12 = 4;
        }
        else if (iVar12 < iVar7) {
          iVar12 = iVar7;
        }
        uVar5 = SystemCore_SecurityHandler(param_1 + 2,iVar12);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      puVar6 = (uint64_t *)((int64_t)(int)param_1[3] * 0x10 + param_1[2]);
      *puVar6 = CONCAT44(0xffffffff,uVar1);
      puVar6[1] = uVar4;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      puVar10 = (uint *)((int64_t)iVar2 * 0x10 + param_1[2]);
      *(uint *)(param_1 + 4) = puVar10[1];
      puVar10[1] = 0xffffffff;
      *puVar10 = *param_2;
      *(uint64_t *)(puVar10 + 2) = *param_3;
    }
    *piVar13 = iVar2;
    *(int *)((int64_t)param_1 + 0x24) = *(int *)((int64_t)param_1 + 0x24) + 1;
    uVar4 = 0;
  }
  return uVar4;
}
uint64_t NetworkProtocol_95d62(uint64_t param_1,int param_2)
{
  int64_t lVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  int64_t lVar7;
  int32_t *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int64_t *unaff_RDI;
  uint64_t *unaff_R14;
  int32_t *unaff_R15;
  uint64_t local_buffer_28;
  piVar11 = (int *)(*unaff_RDI + (int64_t)in_EAX * 4);
  iVar2 = *(int *)(*unaff_RDI + (int64_t)in_EAX * 4);
  if (iVar2 != -1) {
    lVar1 = unaff_RDI[2];
    do {
      lVar7 = (int64_t)iVar2;
      if (*(int *)(lVar1 + lVar7 * 0x10) == param_2) {
        *(uint64_t *)(lVar1 + 8 + lVar7 * 0x10) = *unaff_R14;
        return 0;
      }
      iVar2 = *(int *)(lVar1 + 4 + lVar7 * 0x10);
      piVar11 = (int *)(lVar1 + 4 + lVar7 * 0x10);
    } while (iVar2 != -1);
  }
  iVar2 = (int)unaff_RDI[4];
  if (iVar2 == -1) {
    local_buffer_28 = *unaff_R14;
    iVar2 = (int)unaff_RDI[3];
    iVar6 = iVar2 + 1;
    uVar9 = (int)*(uint *)((int64_t)unaff_RDI + 0x1c) >> 0x1f;
    iVar3 = (*(uint *)((int64_t)unaff_RDI + 0x1c) ^ uVar9) - uVar9;
    if (iVar3 < iVar6) {
      iVar10 = (int)((float)iVar3 * 1.5);
      iVar3 = iVar6;
      if (iVar6 <= iVar10) {
        iVar3 = iVar10;
      }
      if (iVar3 < 4) {
        iVar10 = 4;
      }
      else if (iVar10 < iVar6) {
        iVar10 = iVar6;
      }
      uVar4 = SystemCore_SecurityHandler(unaff_RDI + 2,iVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    puVar5 = (uint64_t *)((int64_t)(int)unaff_RDI[3] * 0x10 + unaff_RDI[2]);
    *puVar5 = CONCAT44(0xffffffff,param_2);
    puVar5[1] = local_buffer_28;
    *(int *)(unaff_RDI + 3) = (int)unaff_RDI[3] + 1;
  }
  else {
    puVar8 = (int32_t *)((int64_t)iVar2 * 0x10 + unaff_RDI[2]);
    *(int32_t *)(unaff_RDI + 4) = puVar8[1];
    puVar8[1] = 0xffffffff;
    *puVar8 = *unaff_R15;
    *(uint64_t *)(puVar8 + 2) = *unaff_R14;
  }
  *piVar11 = iVar2;
  *(int *)((int64_t)unaff_RDI + 0x24) = *(int *)((int64_t)unaff_RDI + 0x24) + 1;
  return 0;
}
uint64_t NetworkProtocol_95d9c(uint64_t param_1,int32_t param_2)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  int32_t *puVar5;
  uint uVar6;
  int iVar7;
  int *unaff_RBX;
  int iVar8;
  int64_t unaff_RDI;
  uint64_t *unaff_R14;
  int32_t *unaff_R15;
  uint64_t local_buffer_28;
  iVar8 = *(int *)(unaff_RDI + 0x20);
  if (iVar8 == -1) {
    local_buffer_28 = *unaff_R14;
    iVar8 = *(int *)(unaff_RDI + 0x18);
    iVar4 = iVar8 + 1;
    uVar6 = (int)*(uint *)(unaff_RDI + 0x1c) >> 0x1f;
    iVar1 = (*(uint *)(unaff_RDI + 0x1c) ^ uVar6) - uVar6;
    if (iVar1 < iVar4) {
      iVar7 = (int)((float)iVar1 * 1.5);
      iVar1 = iVar4;
      if (iVar4 <= iVar7) {
        iVar1 = iVar7;
      }
      if (iVar1 < 4) {
        iVar7 = 4;
      }
      else if (iVar7 < iVar4) {
        iVar7 = iVar4;
      }
      uVar2 = SystemCore_SecurityHandler(unaff_RDI + 0x10,iVar7);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    puVar3 = (uint64_t *)
             ((int64_t)*(int *)(unaff_RDI + 0x18) * 0x10 + *(int64_t *)(unaff_RDI + 0x10));
    *puVar3 = CONCAT44(0xffffffff,param_2);
    puVar3[1] = local_buffer_28;
    *(int *)(unaff_RDI + 0x18) = *(int *)(unaff_RDI + 0x18) + 1;
  }
  else {
    puVar5 = (int32_t *)((int64_t)iVar8 * 0x10 + *(int64_t *)(unaff_RDI + 0x10));
    *(int32_t *)(unaff_RDI + 0x20) = puVar5[1];
    puVar5[1] = 0xffffffff;
    *puVar5 = *unaff_R15;
    *(uint64_t *)(puVar5 + 2) = *unaff_R14;
  }
  *unaff_RBX = iVar8;
  *(int *)(unaff_RDI + 0x24) = *(int *)(unaff_RDI + 0x24) + 1;
  return 0;
}
uint64_t NetworkProtocol_95e00(int64_t param_1,uint64_t param_2,int64_t param_3)
{
  uint64_t *unaff_R14;
  *(uint64_t *)(param_3 + 8 + param_1 * 8) = *unaff_R14;
  return 0;
}
uint64_t
NetworkProtocol_95e19(int param_1,int param_2,uint64_t param_3,uint64_t param_4,uint64_t param_5)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int32_t *unaff_RBX;
  int32_t unaff_EBP;
  int64_t unaff_RDI;
  uint64_t stack_special_x_20;
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  uVar1 = SystemCore_SecurityHandler(unaff_RDI + 0x10,param_2);
  if ((int)uVar1 == 0) {
    puVar2 = (uint64_t *)
             ((int64_t)*(int *)(unaff_RDI + 0x18) * 0x10 + *(int64_t *)(unaff_RDI + 0x10));
    *puVar2 = stack_special_x_20;
    puVar2[1] = param_5;
    *(int *)(unaff_RDI + 0x18) = *(int *)(unaff_RDI + 0x18) + 1;
    *unaff_RBX = unaff_EBP;
    *(int *)(unaff_RDI + 0x24) = *(int *)(unaff_RDI + 0x24) + 1;
    uVar1 = 0;
  }
  return uVar1;
}