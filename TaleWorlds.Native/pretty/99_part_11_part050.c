#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: MathTrigonometryFunction */
#define MathTrigonometryFunction MathTrigonometryFunction
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_11_part050.c - 5 个函数
// 函数: void function_7aecc3(void)
void function_7aecc3(void)
{
  code *pcVar1;
  UltraHighFreq_ThreadManager1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
uint64_t function_7aecd0(uint64_t param_1,uint64_t param_2,uint64_t *param_3,int64_t param_4)
{
  uint64_t uVar1;
  uint astack_special_x_18 [4];
  SystemDataAnalyzer(*(uint64_t *)(param_4 + 0x170),param_2,1,(int)*param_3,astack_special_x_18);
  uVar1 = 0;
  *param_3 = (uint64_t)astack_special_x_18[0];
  if ((uint64_t)astack_special_x_18[0] == 0) {
    uVar1 = 2;
  }
  return uVar1;
}
bool function_7aed20(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int iVar1;
  iVar1 = MathTrigonometryFunction0(*(uint64_t *)(param_3 + 0x170),param_2,0);
  return iVar1 != 0;
}
uint64_t function_7aed50(uint64_t param_1,uint64_t *param_2,int64_t param_3)
{
  int iVar1;
  uint astack_special_x_18 [4];
  iVar1 = SystemFunction_00018076a7d0(*(uint64_t *)(param_3 + 0x170),astack_special_x_18);
  if (iVar1 == 0) {
    *param_2 = (uint64_t)astack_special_x_18[0];
    return 0;
  }
  return 1;
}
uint64_t function_7aed90(uint64_t param_1,uint *param_2,int64_t *param_3,int64_t param_4)
{
  int64_t lVar1;
  uint uVar2;
  int16_t *puVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int iVar7;
  int64_t lVar8;
  puVar3 = *(int16_t **)(param_4 + 0x1b8);
  if (puVar3 != (int16_t *)0x0) {
    uVar2 = *param_2;
    if (0x2000 < *param_2) {
      uVar2 = 0x2000;
    }
    uVar4 = param_2[4];
    lVar5 = (int64_t)(int)uVar2;
    if (uVar4 == 8) {
      if (0 < (int)uVar2) {
        uVar4 = param_2[2];
        lVar8 = 0;
        do {
          iVar7 = 0;
          plVar6 = param_3;
          if (0 < (int)uVar4) {
            do {
              iVar7 = iVar7 + 1;
              *(int8_t *)puVar3 = *(int8_t *)(*plVar6 + lVar8 * 4);
              puVar3 = (int16_t *)((int64_t)puVar3 + 1);
              uVar4 = param_2[2];
              plVar6 = plVar6 + 1;
            } while (iVar7 < (int)uVar4);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar5);
      }
    }
    else if (uVar4 == 0x10) {
      if (0 < (int)uVar2) {
        uVar4 = param_2[2];
        lVar8 = 0;
        do {
          iVar7 = 0;
          plVar6 = param_3;
          if (0 < (int)uVar4) {
            do {
              iVar7 = iVar7 + 1;
              *puVar3 = *(int16_t *)(*plVar6 + lVar8 * 4);
              puVar3 = puVar3 + 1;
              uVar4 = param_2[2];
              plVar6 = plVar6 + 1;
            } while (iVar7 < (int)uVar4);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar5);
      }
    }
    else if ((uVar4 == 0x18) && (0 < (int)uVar2)) {
      uVar4 = param_2[2];
      lVar8 = 0;
      do {
        iVar7 = 0;
        plVar6 = param_3;
        if (0 < (int)uVar4) {
          do {
            lVar1 = *plVar6;
            iVar7 = iVar7 + 1;
            *puVar3 = *(int16_t *)(lVar1 + lVar8 * 4);
            *(int8_t *)(puVar3 + 1) = *(int8_t *)(lVar1 + lVar8 * 4 + 2);
            puVar3 = (int16_t *)((int64_t)puVar3 + 3);
            uVar4 = param_2[2];
            plVar6 = plVar6 + 1;
          } while (iVar7 < (int)uVar4);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar5);
    }
    *(uint *)(param_4 + 0x1d0) = uVar2;
  }
  return 0;
}
uint64_t function_7aedb4(uint param_1,uint *param_2)
{
  int64_t lVar1;
  int16_t *in_RAX;
  uint uVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint uVar4;
  int64_t *unaff_RDI;
  int64_t *plVar5;
  int iVar6;
  int64_t in_R10;
  int64_t lVar7;
  uVar4 = *param_2;
  if (param_1 < *param_2) {
    uVar4 = param_1;
  }
  uVar2 = param_2[4];
  lVar3 = (int64_t)(int)uVar4;
  if (uVar2 == 8) {
    if (0 < (int)uVar4) {
      uVar2 = param_2[2];
      lVar7 = 0;
      do {
        iVar6 = 0;
        plVar5 = unaff_RDI;
        if (0 < (int)uVar2) {
          do {
            iVar6 = iVar6 + 1;
            *(int8_t *)in_RAX = *(int8_t *)(*plVar5 + lVar7 * 4);
            in_RAX = (int16_t *)((int64_t)in_RAX + 1);
            uVar2 = *(uint *)(in_R10 + 8);
            plVar5 = plVar5 + 1;
          } while (iVar6 < (int)uVar2);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar3);
    }
  }
  else if (uVar2 == 0x10) {
    if (0 < (int)uVar4) {
      uVar2 = param_2[2];
      lVar7 = 0;
      do {
        iVar6 = 0;
        plVar5 = unaff_RDI;
        if (0 < (int)uVar2) {
          do {
            iVar6 = iVar6 + 1;
            *in_RAX = *(int16_t *)(*plVar5 + lVar7 * 4);
            in_RAX = in_RAX + 1;
            uVar2 = *(uint *)(in_R10 + 8);
            plVar5 = plVar5 + 1;
          } while (iVar6 < (int)uVar2);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar3);
    }
  }
  else if ((uVar2 == 0x18) && (0 < (int)uVar4)) {
    uVar2 = param_2[2];
    lVar7 = 0;
    do {
      iVar6 = 0;
      plVar5 = unaff_RDI;
      if (0 < (int)uVar2) {
        do {
          lVar1 = *plVar5;
          iVar6 = iVar6 + 1;
          *in_RAX = *(int16_t *)(lVar1 + lVar7 * 4);
          *(int8_t *)(in_RAX + 1) = *(int8_t *)(lVar1 + lVar7 * 4 + 2);
          in_RAX = (int16_t *)((int64_t)in_RAX + 3);
          uVar2 = *(uint *)(in_R10 + 8);
          plVar5 = plVar5 + 1;
        } while (iVar6 < (int)uVar2);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar3);
  }
  *(uint *)(unaff_RBP + 0x1d0) = uVar4;
  return 0;
}
uint64_t function_7aeec4(void)
{
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_7aeed0(int64_t param_1)
{
  if (*(int64_t *)(param_1 + 0x178) != 0) {
    function_807060();
    function_806fd0(*(uint64_t *)(param_1 + 0x178));
    *(uint64_t *)(param_1 + 0x178) = 0;
  }
  if (*(int64_t *)(param_1 + 0x1c0) != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x1c0),
                  &processed_var_9808_ptr,0x1a7,1);
  }
  *(int32_t *)(param_1 + 0x1c8) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_7aeff0(int64_t param_1,char param_2)
{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int iVar5;
  char cStackX_8;
  char cStackX_9;
  char cStackX_a;
  char cStackX_b;
  int aiStackX_20 [2];
  code *pcVar6;
  *(int32_t *)(param_1 + 0x28) = 4;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
  iVar5 = 1;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  uVar3 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),&cStackX_8,1,4,aiStackX_20);
  if ((int)uVar3 == 0) {
    if (aiStackX_20[0] == 4) {
      if ((((cStackX_8 != 'f') || (cStackX_9 != 'L')) || (cStackX_a != 'a')) || (cStackX_b != 'C'))
      {
        return 0x13;
      }
      uVar3 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar4 = function_807360();
      *(int64_t *)(param_1 + 0x178) = lVar4;
      if (((lVar4 != 0) && (iVar2 = SystemFunction_0001808078f0(lVar4,0), iVar2 != 0)) &&
         (iVar2 = SystemFunction_000180807910(*(uint64_t *)(param_1 + 0x178),4), iVar2 != 0)) {
        pcVar6 = function_7aed50;
        iVar2 = function_8072f0(param_1,*(uint64_t *)(param_1 + 0x178),function_7aecd0,function_7aed20,
                              function_7aed50,function_7aeac0,function_7aea80,function_7aed90,function_7aeb00,
                              _guard_check_icall,param_1);
        if (iVar2 == 0) {
          *(uint64_t *)(param_1 + 0x180) = 0;
          *(uint64_t *)(param_1 + 0x188) = 0;
          *(uint64_t *)(param_1 + 400) = 0;
          *(uint64_t *)(param_1 + 0x198) = 0;
          *(uint64_t *)(param_1 + 0x1a0) = 0;
          *(uint64_t *)(param_1 + 0x1a8) = 0;
          *(uint64_t *)(param_1 + 0x1b0) = 0;
          *(uint64_t **)(param_1 + 8) = (uint64_t *)(param_1 + 0x180);
          *(uint64_t *)(param_1 + 0x1cc) = 0;
          function_807740(param_1,*(uint64_t *)(param_1 + 0x178));
          if ((*(int *)(*(int64_t *)(param_1 + 8) + 0x18) != -1) || (param_2 < '\0')) {
            uVar3 = (**(code **)(**(int64_t **)(param_1 + 0x170) + 0x10))
                              (*(int64_t **)(param_1 + 0x170),*(int64_t *)(param_1 + 8) + 0x14);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            *(int32_t *)(param_1 + 0x110) = 0;
            iVar2 = *(int *)(*(int64_t *)(param_1 + 8) + 8);
            iVar1 = *(int *)(*(int64_t *)(param_1 + 8) + 0xc);
            if (iVar2 == 1) {
              iVar5 = 1;
            }
            else if (iVar2 == 2) {
              iVar5 = 2;
            }
            else if (iVar2 == 3) {
              iVar5 = 3;
            }
            else if ((iVar2 == 4) || (iVar2 == 5)) {
              iVar5 = 4;
            }
            *(int32_t *)(param_1 + 0x1c8) = 0x2000;
            lVar4 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                  iVar1 * iVar5 * 0x2000 + 0x10,&processed_var_9808_ptr,0x17e,
                                  (uint64_t)pcVar6 & 0xffffffff00000000);
            *(int64_t *)(param_1 + 0x1c0) = lVar4;
            if (lVar4 == 0) {
              return 0x26;
            }
            *(int32_t *)(param_1 + 0x18) = 0;
            *(uint64_t *)(param_1 + 0x1b8) = lVar4 + 0xfU & 0xfffffffffffffff0;
            return 0;
          }
        }
      }
    }
    uVar3 = 0xd;
  }
  return uVar3;
}
uint64_t function_7af2d0(int64_t param_1,int64_t param_2,int param_3,int *param_4)
{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  int iVar4;
  if (*(int64_t *)(param_1 + 0x178) == 0) {
    return 0x1f;
  }
  iVar4 = *(int *)(*(int64_t *)(param_1 + 8) + 8);
  if (iVar4 == 1) {
    iVar4 = 1;
  }
  else if (iVar4 == 2) {
    iVar4 = 2;
  }
  else if (iVar4 == 3) {
    iVar4 = 3;
  }
  else if ((iVar4 == 4) || (iVar4 == 5)) {
    iVar4 = 4;
  }
  else {
    iVar4 = 1;
  }
  iVar4 = iVar4 * *(int *)(*(int64_t *)(param_1 + 8) + 0xc);
  uVar2 = 0;
  if (param_3 == 0) {
label_7af3e5:
    iVar4 = SystemFunction_0001808072e0(*(uint64_t *)(param_1 + 0x178));
    if (iVar4 == 4) {
      *param_4 = 0;
      uVar2 = 0x10;
    }
    return uVar2;
  }
  uVar3 = *(uint *)(param_1 + 0x1d0);
  if (uVar3 == 0) {
    *(int32_t *)(param_1 + 0x1cc) = 0;
    function_807640(param_1,*(uint64_t *)(param_1 + 0x178));
    uVar3 = *(uint *)(param_1 + 0x1d0);
    if (uVar3 == 0) goto label_7af3e5;
  }
  iVar1 = *(int *)(param_1 + 0x1cc);
  if (uVar3 <= (uint)(iVar1 + param_3)) {
    *(int32_t *)(param_1 + 0x1d0) = 0;
    param_3 = uVar3 - iVar1;
  }
// WARNING: Subroutine does not return
  memcpy((uint64_t)(uint)(*param_4 * iVar4) + param_2,
         (uint64_t)(uint)(iVar1 * iVar4) + *(int64_t *)(param_1 + 0x1b8),param_3 * iVar4);
}
uint64_t function_7af30c(int64_t param_1,uint64_t param_2,int param_3)
{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  int64_t unaff_RBX;
  int unaff_EBP;
  int iVar4;
  int *unaff_R14;
  int64_t unaff_R15;
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 1) {
    iVar4 = 1;
  }
  else if (iVar4 == 2) {
    iVar4 = 2;
  }
  else if (iVar4 == 3) {
    iVar4 = 3;
  }
  else if ((iVar4 == 4) || (iVar4 == 5)) {
    iVar4 = 4;
  }
  else {
    iVar4 = 1;
  }
  iVar4 = iVar4 * *(int *)(param_1 + 0xc);
  uVar2 = 0;
  if (param_3 == 0) {
label_7af3e5:
    iVar4 = SystemFunction_0001808072e0(*(uint64_t *)(unaff_RBX + 0x178));
    if (iVar4 == 4) {
      *unaff_R14 = 0;
      uVar2 = 0x10;
    }
    return uVar2;
  }
  uVar3 = *(uint *)(unaff_RBX + 0x1d0);
  if (uVar3 == 0) {
    *(int32_t *)(unaff_RBX + 0x1cc) = 0;
    function_807640();
    uVar3 = *(uint *)(unaff_RBX + 0x1d0);
    if (uVar3 == 0) goto label_7af3e5;
  }
  iVar1 = *(int *)(unaff_RBX + 0x1cc);
  if (uVar3 <= (uint)(iVar1 + unaff_EBP)) {
    *(int32_t *)(unaff_RBX + 0x1d0) = 0;
    unaff_EBP = uVar3 - iVar1;
  }
// WARNING: Subroutine does not return
  memcpy((uint64_t)(uint)(*unaff_R14 * iVar4) + unaff_R15,
         (uint64_t)(uint)(iVar1 * iVar4) + *(int64_t *)(unaff_RBX + 0x1b8),unaff_EBP * iVar4);
}
int function_7af367(void)
{
  int iVar1;
  uint uVar2;
  int64_t unaff_RBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_R12D;
  int *unaff_R14;
  int64_t unaff_R15;
  uVar2 = *(uint *)(unaff_RBX + 0x1d0);
  if (uVar2 == 0) {
    *(int *)(unaff_RBX + 0x1cc) = unaff_R12D;
    function_807640();
    uVar2 = *(uint *)(unaff_RBX + 0x1d0);
    if (uVar2 == 0) {
      iVar1 = SystemFunction_0001808072e0(*(uint64_t *)(unaff_RBX + 0x178));
      if (iVar1 == 4) {
        *unaff_R14 = unaff_R12D;
        unaff_R12D = 0x10;
      }
      return unaff_R12D;
    }
  }
  iVar1 = *(int *)(unaff_RBX + 0x1cc);
  if (uVar2 <= (uint)(iVar1 + unaff_EBP)) {
    *(int *)(unaff_RBX + 0x1d0) = unaff_R12D;
    unaff_EBP = uVar2 - iVar1;
  }
// WARNING: Subroutine does not return
  memcpy((uint64_t)(uint)(*unaff_R14 * unaff_ESI) + unaff_R15,
         (uint64_t)(uint)(iVar1 * unaff_ESI) + *(int64_t *)(unaff_RBX + 0x1b8),
         unaff_EBP * unaff_ESI);
}
int32_t function_7af3e5(void)
{
  int iVar1;
  int64_t unaff_RBX;
  int32_t unaff_R12D;
  int32_t *unaff_R14;
  iVar1 = SystemFunction_0001808072e0(*(uint64_t *)(unaff_RBX + 0x178));
  if (iVar1 == 4) {
    *unaff_R14 = unaff_R12D;
    unaff_R12D = 0x10;
  }
  return unaff_R12D;
}
uint64_t function_7af3fb(void)
{
  int32_t unaff_R12D;
  int32_t *unaff_R14;
  *unaff_R14 = unaff_R12D;
  return 0x10;
}
uint64_t function_7af420(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  int iVar1;
  if (*(int64_t *)(param_1 + 0x178) == 0) {
    return 0x1f;
  }
  if ((*(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) & 1) != 0) {
    *(uint64_t *)(param_1 + 0x1cc) = 0;
    iVar1 = function_8077b0(param_1,*(uint64_t *)(param_1 + 0x178),param_3);
    if (iVar1 == 0) {
      return 0xe;
    }
  }
  return 0;
}
uint64_t * function_7af480(int64_t param_1,int64_t *param_2)
{
  uint64_t *puVar1;
  puVar1 = (uint64_t *)0x0;
  if ((*param_2 != 0) || (param_2[1] != 0)) {
    if (param_1 != 0) {
      SystemFunction_000180743c20(param_1,0x12);
    }
    for (puVar1 = *(uint64_t **)(param_1 + 0x127d0); puVar1 != (uint64_t *)(param_1 + 0x127d0);
        puVar1 = (uint64_t *)*puVar1) {
      if ((*param_2 == puVar1[2]) && (param_2[1] == puVar1[3])) {
        *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + 1;
        goto LAB_1807af4e1;
      }
    }
    puVar1 = (uint64_t *)0x0;
LAB_1807af4e1:
    if ((param_1 != 0) && (param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemCoreHandler(param_1,0x12);
    }
  }
  return puVar1;
}
uint64_t * function_7af49f(uint64_t param_1,char param_2)
{
  uint64_t *puVar1;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  if (unaff_RSI != 0) {
    SystemFunction_000180743c20(param_1,0x12);
    param_2 = '\x01';
  }
  puVar1 = *(uint64_t **)(unaff_RSI + 0x127d0);
  do {
    if (puVar1 == (uint64_t *)(unaff_RSI + 0x127d0)) {
      puVar1 = (uint64_t *)0x0;
LAB_1807af4e1:
      if ((param_2 != '\0') && (unaff_RSI != 0)) {
// WARNING: Subroutine does not return
        SystemCoreHandler();
      }
      return puVar1;
    }
    if ((*unaff_RDI == puVar1[2]) && (unaff_RDI[1] == puVar1[3])) {
      *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + 1;
      goto LAB_1807af4e1;
    }
    puVar1 = (uint64_t *)*puVar1;
  } while( true );
}
// 函数: void function_7af4ff(void)
void function_7af4ff(void)
{
  return;
}
// 函数: void function_7af50a(uint64_t param_1,char param_2)
void function_7af50a(uint64_t param_1,char param_2)
{
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  *(int *)(unaff_RBX + 0x20) = *(int *)(unaff_RBX + 0x20) + 1;
  if ((param_2 != '\0') && (unaff_RSI != 0)) {
// WARNING: Subroutine does not return
    SystemCoreHandler();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_7af540(int64_t param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  uint uVar3;
  uint64_t uVar4;
  int iVar5;
  byte *pbVar6;
  uint *puVar7;
  int64_t lVar8;
  uint uVar9;
  uint64_t uVar11;
  uint *puVar12;
  bool bVar13;
  uint *plocal_var_28;
  uint64_t uVar10;
  uVar10 = 0;
  if (*(int64_t *)(param_1 + 0x180) != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x180),
                  &processed_var_9968_ptr,0x2fe,1);
  }
  plVar2 = *(int64_t **)(param_1 + 0x178);
  if (plVar2 != (int64_t *)0x0) {
    lVar8 = *(int64_t *)(param_1 + 0x20);
    bVar13 = lVar8 != 0;
    if (bVar13) {
      SystemFunction_000180743c20(lVar8,0x12);
    }
    plVar1 = plVar2 + 4;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      *(int64_t *)plVar2[1] = *plVar2;
      *(int64_t *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (int64_t)plVar2;
      *plVar2 = (int64_t)plVar2;
      if ((bVar13) && (lVar8 != 0)) {
// WARNING: Subroutine does not return
        SystemCoreHandler(lVar8,0x12);
      }
      lVar8 = *(int64_t *)(param_1 + 0x178);
      if ((*(int *)(lVar8 + 0x2c) == 0xf) && (uVar11 = uVar10, 0 < *(int *)(lVar8 + 0x24))) {
        do {
          iVar5 = (int)uVar10;
          if (*(int64_t *)(param_1 + 0x180) != 0) {
            iVar5 = *(int *)(uVar11 + *(int64_t *)(param_1 + 0x180));
          }
          pbVar6 = (byte *)((int64_t)*(int *)(*(int64_t *)(lVar8 + 0x38) + (int64_t)iVar5 * 4) +
                           *(int64_t *)(lVar8 + 0x40));
          puVar7 = (uint *)(pbVar6 + 8);
          puVar12 = plocal_var_28;
          if ((*pbVar6 & 1) != 0) {
            while( true ) {
              uVar9 = *puVar7;
              uVar3 = uVar9 >> 0x19;
              puVar12 = puVar7 + 1;
              if (((uVar3 == 6) || (uVar3 == 9)) || (uVar3 == 0xb)) break;
              if ((uVar3 == 0xf) ||
                 (puVar7 = (uint *)((int64_t)puVar12 + (uint64_t)(uVar9 >> 1 & 0xffffff)),
                 puVar12 = plocal_var_28, (uVar9 & 1) == 0)) break;
            }
          }
          uVar4 = function_7b1250(*puVar12);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar8 = *(int64_t *)(param_1 + 0x178);
          uVar9 = (int)uVar10 + 1;
          uVar10 = (uint64_t)uVar9;
          uVar11 = uVar11 + 4;
          plocal_var_28 = puVar12;
        } while ((int)uVar9 < *(int *)(lVar8 + 0x24));
      }
      if (*(int64_t *)(lVar8 + 0x38) != 0) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(lVar8 + 0x38),
                      &processed_var_9968_ptr,0x313,1);
      }
      if (*(int64_t *)(lVar8 + 0x40) != 0) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(lVar8 + 0x40),
                      &processed_var_9968_ptr,0x314,1);
      }
      if (*(int64_t *)(lVar8 + 0x48) != 0) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(lVar8 + 0x48),
                      &processed_var_9968_ptr,0x315,1);
      }
      if (lVar8 != 0) {
// WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar8,&processed_var_9968_ptr,0x316,1);
      }
    }
    else if ((bVar13) && (lVar8 != 0)) {
// WARNING: Subroutine does not return
      SystemCoreHandler(lVar8,0x12);
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_7af7e0(uint64_t *param_1,uint *param_2,int *param_3,int32_t *param_4,
void function_7af7e0(uint64_t *param_1,uint *param_2,int *param_3,int32_t *param_4,
                  int32_t *param_5,byte *param_6)
{
  uint64_t uVar1;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)&local_var_58;
  uVar1 = *param_1;
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)(uVar1 >> 0x22);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (int)(uVar1 >> 7) << 5;
  }
  if (param_6 != (byte *)0x0) {
    *param_6 = (byte)uVar1 & 1;
  }
  if (param_4 != (int32_t *)0x0) {
    local_var_28 = 0x200000001;
    local_var_20 = 0x800000006;
    *param_4 = *(int32_t *)((int64_t)&local_var_28 + (uint64_t)((uint)(uVar1 >> 5) & 3) * 4);
  }
  if (param_5 != (int32_t *)0x0) {
    local_var_38 = 0xac44;
    local_var_58 = 0x1f4000000fa0;
    local_var_50 = 0x2ee000002af8;
    local_var_34 = 48000;
    local_var_48 = 0x562200003e80;
    local_var_40 = 0x7d0000005dc0;
    local_var_30 = 96000;
    *param_5 = *(int32_t *)((int64_t)&local_var_58 + (uint64_t)((uint)(uVar1 >> 1) & 0xf) * 4);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)&local_var_58);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_7afa40(int64_t param_1,int param_2,int64_t *param_3,int *param_4)
void function_7afa40(int64_t param_1,int param_2,int64_t *param_3,int *param_4)
{
  int32_t uVar1;
  int32_t uVar2;
  uint uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  float fVar7;
  uint64_t *puVar8;
  float *pfVar9;
  int iVar10;
  int8_t stack_array_b8 [32];
  uint64_t local_var_98;
  uint64_t local_var_90;
  int8_t local_var_88;
  float afStack_78 [2];
  uint64_t local_var_70;
  uint64_t local_var_68;
  int8_t stack_array_60 [16];
  uint64_t local_var_50;
  uint64_t local_var_48;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  uint64_t local_var_30;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  if (*(int64_t *)(param_1 + 0x180) != 0) {
    param_2 = *(int *)(*(int64_t *)(param_1 + 0x180) + (int64_t)param_2 * 4);
  }
  lVar4 = *(int64_t *)(param_1 + 0x178);
  local_var_70 = 0x200000001;
  local_var_68 = 0x800000006;
  stack_array_60 = system_system_config;
  local_var_40 = 0xac44;
  local_var_50 = 0x562200003e80;
  local_var_48 = 0x7d0000005dc0;
  puVar8 = (uint64_t *)
           ((int64_t)*(int *)(*(int64_t *)(lVar4 + 0x38) + (int64_t)param_2 * 4) +
           *(int64_t *)(lVar4 + 0x40));
  local_var_3c = 48000;
  local_var_38 = 96000;
  uVar5 = *puVar8;
  puVar8 = puVar8 + 1;
  iVar10 = (int)(uVar5 >> 7);
  uVar1 = *(int32_t *)((int64_t)&local_var_70 + (uint64_t)((uint)(uVar5 >> 5) & 3) * 4);
  uVar2 = *(int32_t *)(stack_array_60 + (uint64_t)((uint)(uVar5 >> 1) & 0xf) * 4);
  if (param_4 != (int *)0x0) {
    *param_4 = *(int *)(lVar4 + 0x30) + iVar10 * 0x20;
  }
  if (param_3 != (int64_t *)0x0) {
    *param_3 = 0;
    *(int32_t *)((int64_t)param_3 + 0x14) = 0;
    *(uint64_t *)((int64_t)param_3 + 0x1c) = 0;
    *(uint64_t *)((int64_t)param_3 + 0x24) = 0;
    *(uint64_t *)((int64_t)param_3 + 0x2c) = 0;
    *(int32_t *)((int64_t)param_3 + 0x34) = 0;
    *(int32_t *)(param_3 + 1) = 2;
    *(int32_t *)((int64_t)param_3 + 0xc) = uVar1;
    *(uint *)(param_3 + 3) = (uint)(uVar5 >> 0x22);
    *(int32_t *)(param_3 + 2) = uVar2;
    if ((uVar5 & 1) != 0) {
      do {
        uVar3 = (uint)*puVar8;
        uVar6 = uVar3 >> 0x19;
        pfVar9 = (float *)((int64_t)puVar8 + 4);
        if (uVar3 >> 0x19 == 0) {
          *(float *)(param_3 + 3) = *pfVar9;
        }
        else if (uVar6 == 0xe) {
          *(float *)((int64_t)param_3 + 0xc) = *pfVar9;
        }
        else if (uVar6 == 1) {
          *(int *)((int64_t)param_3 + 0xc) = (int)(char)*(byte *)pfVar9;
        }
        else if (uVar6 == 2) {
          *(float *)(param_3 + 2) = *pfVar9;
        }
        else if (uVar6 == 3) {
          *(float *)(param_3 + 4) = *pfVar9;
          *(uint *)((int64_t)param_3 + 0x24) = (uint)puVar8[1];
        }
        else if (uVar6 == 8) {
          local_var_70 = 0x400000003;
          local_var_68 = CONCAT44(local_var_68._4_4_,2);
          *(int32_t *)(param_3 + 6) =
               *(int32_t *)((int64_t)&local_var_70 + (uint64_t)*(byte *)pfVar9 * 4);
        }
        else if (uVar6 == 0xd) {
          afStack_78[0] = *pfVar9;
          fVar7 = afStack_78[0];
          if (afStack_78[0] <= 1.1920929e-07) {
            fVar7 = 1.1920929e-07;
          }
          *(float *)((int64_t)param_3 + 0x34) = fVar7;
        }
        puVar8 = (uint64_t *)((int64_t)pfVar9 + (uint64_t)(uVar3 >> 1 & 0xffffff));
      } while ((uVar3 & 1) != 0);
    }
    if (param_2 == *(int *)(*(int64_t *)(param_1 + 0x178) + 0x24) + -1) {
      fVar7 = *(float *)(*(int64_t *)(param_1 + 0x178) + 0x34);
    }
    else {
      local_var_88 = 0;
      local_var_90 = 0;
      local_var_98 = 0;
      function_7af7e0(puVar8,0,afStack_78);
      fVar7 = afStack_78[0];
    }
    *(int *)((int64_t)param_3 + 0x14) = (int)fVar7 + iVar10 * -0x20;
    iVar10 = *(int *)(*(int64_t *)(param_1 + 0x178) + 0x2c);
    if (iVar10 == 7) {
      *(int32_t *)((int64_t)param_3 + 0x1c) = 0x40;
    }
    else if (iVar10 == 0xb) {
      *(int32_t *)((int64_t)param_3 + 0x1c) = 0x480;
    }
    else if (iVar10 == 0xf) {
      *(int32_t *)(param_3 + 1) = 5;
    }
    else if (iVar10 == 0x10) {
      *(int32_t *)((int64_t)param_3 + 0x1c) = 0x100;
    }
    else if (iVar10 == 10) {
      *(int32_t *)((int64_t)param_3 + 0x1c) = 0x200;
    }
    else if (iVar10 == 0x11) {
      *(int32_t *)(param_3 + 1) = 2;
      *(int32_t *)((int64_t)param_3 + 0x1c) = 0x3c0;
    }
    lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x178) + 0x48);
    if (lVar4 != 0) {
      *param_3 = (uint64_t)*(uint *)(lVar4 + (int64_t)param_2 * 4) + lVar4;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address