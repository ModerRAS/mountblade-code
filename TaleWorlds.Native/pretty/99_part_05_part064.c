/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_05_part064.c - 8 个函数
// 函数: void function_3a028c(void)
void function_3a028c(void)
{
  return;
}
// WARNING: Removing unreachable block (ram,0x0001803a04e5)
uint64_t * function_3a02b0(int64_t param_1,uint64_t *param_2,uint64_t *param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  int8_t stack_array_48 [32];
  for (puVar3 = (uint64_t *)param_3[1]; puVar3 != param_3 + 1; puVar3 = (uint64_t *)*puVar3) {
    if (((*(int *)puVar3[2] - 1U & 0xfffffffa) == 0) && (*(int *)puVar3[2] != 6)) {
      lVar4 = *(int64_t *)(param_1 + 0x68);
      lVar1 = *(int64_t *)(lVar4 + 8);
      plVar6 = *(int64_t **)(lVar1 + ((uint64_t)param_3 % (uint64_t)*(uint *)(lVar4 + 0x10)) * 8)
      ;
      goto joined_r0x0001803a0325;
    }
  }
  lVar4 = *(int64_t *)(param_1 + 0x60);
  plVar6 = (int64_t *)*param_3;
  lVar1 = *(int64_t *)(lVar4 + 8);
  puVar3 = *(uint64_t **)(lVar1 + ((uint64_t)plVar6 % (uint64_t)*(uint *)(lVar4 + 0x10)) * 8);
  do {
    if (puVar3 == (uint64_t *)0x0) {
      lVar5 = *(int64_t *)(lVar4 + 0x10);
      puVar3 = *(uint64_t **)(lVar1 + lVar5 * 8);
LAB_1803a0436:
      if (puVar3 == *(uint64_t **)(lVar1 + lVar5 * 8)) {
        (**(code **)(*plVar6 + 0xa8))(plVar6,&plStackX_20,plVar6,lVar4,0,0xfffffffffffffffe);
        plVar6 = plStackX_20;
        uVar2 = *(uint64_t *)(param_1 + 0x60);
        if (plStackX_20 != (int64_t *)0x0) {
          (**(code **)(*plStackX_20 + 0x28))();
        }
        function_3a0f80(uVar2,stack_array_48);
        if (plVar6 != (int64_t *)0x0) {
          (**(code **)(*plVar6 + 0x38))();
        }
        *param_2 = (uint64_t)plStackX_20;
        return param_2;
      }
      plVar6 = (int64_t *)puVar3[1];
      *param_2 = (uint64_t)plVar6;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x28))();
      }
      return param_2;
    }
    if (plVar6 == (int64_t *)*puVar3) {
      lVar5 = *(int64_t *)(lVar4 + 0x10);
      goto LAB_1803a0436;
    }
    puVar3 = (uint64_t *)puVar3[2];
  } while( true );
joined_r0x0001803a0325:
  if (plVar6 == (int64_t *)0x0) {
    lVar4 = *(int64_t *)(lVar4 + 0x10);
    plVar6 = *(int64_t **)(lVar1 + lVar4 * 8);
LAB_1803a033d:
    if (plVar6 == *(int64_t **)(lVar1 + lVar4 * 8)) {
      (**(code **)(*(int64_t *)*param_3 + 0xa8))((int64_t *)*param_3,&plStackX_18);
      plVar6 = plStackX_18;
      uVar2 = *(uint64_t *)(param_1 + 0x68);
      if (plStackX_18 != (int64_t *)0x0) {
        (**(code **)(*plStackX_18 + 0x28))();
      }
      function_3a0f80(uVar2,stack_array_48);
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x38))();
      }
      function_279640(plStackX_18,param_3,0);
      *param_2 = (uint64_t)plStackX_18;
      return param_2;
    }
    plVar6 = (int64_t *)plVar6[1];
    *param_2 = (uint64_t)plVar6;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x28))();
    }
    return param_2;
  }
  if (param_3 == (uint64_t *)*plVar6) {
    lVar4 = *(int64_t *)(lVar4 + 0x10);
    goto LAB_1803a033d;
  }
  plVar6 = (int64_t *)plVar6[2];
  goto joined_r0x0001803a0325;
}
uint64_t function_3a0500(int64_t *param_1)
{
  int8_t auVar1 [16];
  int64_t *plVar2;
  int *piVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int8_t auVar7 [11];
  uVar4 = *(uint64_t *)(*(int64_t *)(*param_1 + 0x30) + 0x14);
  uVar6 = *(uint64_t *)(*(int64_t *)(*param_1 + 0x30) + 0xc);
  uVar4 = ((((((((uVar4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar4 >> 8 & 0xff) *
                0x100000001b3 ^ uVar4 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x18 & 0xff) *
              0x100000001b3 ^ uVar4 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x28 & 0xff) *
            0x100000001b3 ^ uVar4 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x38) *
          0x7ba81627b075296b;
  uVar4 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  uVar5 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  uVar4 = (((((((((uVar6 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar6 >> 8 & 0xff) *
                 0x100000001b3 ^ uVar6 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x18 & 0xff) *
               0x100000001b3 ^ uVar6 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x28 & 0xff) *
             0x100000001b3 ^ uVar6 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x38) * 0x100000001b3
          ^ uVar5) * -0x622015f714c7d297;
  uVar4 = (uVar4 >> 0x2f ^ uVar4 ^ uVar5) * -0x622015f714c7d297;
  plVar2 = (int64_t *)param_1[1];
  uVar4 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  do {
    if (plVar2 == param_1 + 1) {
      return uVar4;
    }
    piVar3 = (int *)plVar2[2];
    if (*piVar3 == 1) {
      auVar1 = *(int8_t (*) [16])(*(int64_t *)(*(int64_t *)(piVar3 + 2) + 0xa8) + 0xc);
      auVar7 = auVar1._0_11_;
      uVar6 = ((((((((((uint64_t)auVar1[8] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (uint64_t)(auVar1._9_4_ & 0xff)) * 0x100000001b3 ^
                    (uint64_t)(auVar1._10_4_ & 0xff)) * 0x100000001b3 ^
                   (uint64_t)(auVar1._11_4_ & 0xff)) * 0x100000001b3 ^
                  (uint64_t)(auVar1._12_4_ & 0xff)) * 0x100000001b3 ^
                 (uint64_t)(auVar1._12_4_ >> 8 & 0xff)) * 0x100000001b3 ^
                (uint64_t)(auVar1._14_2_ & 0xff)) * 0x100000001b3 ^ (uint64_t)auVar1[0xf]) *
               0x100000001b3 ^ uVar4) * -0x622015f714c7d297;
      uVar4 = (uVar6 >> 0x2f ^ uVar6 ^ uVar4) * -0x622015f714c7d297;
      uVar4 = uVar4 >> 0x2f ^ uVar4;
LAB_1803a0ccf:
      uVar6 = ((((((((((uint64_t)auVar7[0] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (uint64_t)(auVar7._1_4_ & 0xff)) * 0x100000001b3 ^
                    (uint64_t)(auVar7._2_4_ & 0xff)) * 0x100000001b3 ^
                   (uint64_t)(auVar7._3_4_ & 0xff)) * 0x100000001b3 ^
                  (uint64_t)(auVar7._4_4_ & 0xff)) * 0x100000001b3 ^
                 (uint64_t)(auVar7._5_4_ & 0xff)) * 0x100000001b3 ^
                (uint64_t)(auVar7._6_4_ & 0xff)) * 0x100000001b3 ^ (uint64_t)(auVar7._7_4_ & 0xff)
               ) * 0x100000001b3 ^ uVar4 * -0x622015f714c7d297) * -0x622015f714c7d297;
      uVar4 = (uVar6 >> 0x2f ^ uVar6 ^ uVar4 * -0x622015f714c7d297) * -0x622015f714c7d297;
      uVar4 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    }
    else if (*piVar3 == 5) {
      uVar6 = ((((((((((uint64_t)*(byte *)(piVar3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (uint64_t)*(byte *)((int64_t)piVar3 + 9)) * 0x100000001b3 ^
                    (uint64_t)*(byte *)((int64_t)piVar3 + 10)) * 0x100000001b3 ^
                   (uint64_t)*(byte *)((int64_t)piVar3 + 0xb)) * 0x100000001b3 ^
                  (uint64_t)*(byte *)(piVar3 + 3)) * 0x100000001b3 ^
                 (uint64_t)*(byte *)((int64_t)piVar3 + 0xd)) * 0x100000001b3 ^
                (uint64_t)*(byte *)((int64_t)piVar3 + 0xe)) * 0x100000001b3 ^
               (uint64_t)*(byte *)((int64_t)piVar3 + 0xf)) * 0x100000001b3 ^ uVar4) *
              -0x622015f714c7d297;
      uVar4 = (uVar6 >> 0x2f ^ uVar6 ^ uVar4) * -0x622015f714c7d297;
      uVar6 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
      uVar4 = ((((((((((uint64_t)*(byte *)(piVar3 + 4) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (uint64_t)*(byte *)((int64_t)piVar3 + 0x11)) * 0x100000001b3 ^
                    (uint64_t)*(byte *)((int64_t)piVar3 + 0x12)) * 0x100000001b3 ^
                   (uint64_t)*(byte *)((int64_t)piVar3 + 0x13)) * 0x100000001b3 ^
                  (uint64_t)*(byte *)(piVar3 + 5)) * 0x100000001b3 ^
                 (uint64_t)*(byte *)((int64_t)piVar3 + 0x15)) * 0x100000001b3 ^
                (uint64_t)*(byte *)((int64_t)piVar3 + 0x16)) * 0x100000001b3 ^
               (uint64_t)*(byte *)((int64_t)piVar3 + 0x17)) * 0x100000001b3 ^ uVar6) *
              -0x622015f714c7d297;
      uVar4 = (uVar4 >> 0x2f ^ uVar4 ^ uVar6) * -0x622015f714c7d297;
      uVar6 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
      uVar4 = ((((((((((uint64_t)*(byte *)(piVar3 + 6) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (uint64_t)*(byte *)((int64_t)piVar3 + 0x19)) * 0x100000001b3 ^
                    (uint64_t)*(byte *)((int64_t)piVar3 + 0x1a)) * 0x100000001b3 ^
                   (uint64_t)*(byte *)((int64_t)piVar3 + 0x1b)) * 0x100000001b3 ^
                  (uint64_t)*(byte *)(piVar3 + 7)) * 0x100000001b3 ^
                 (uint64_t)*(byte *)((int64_t)piVar3 + 0x1d)) * 0x100000001b3 ^
                (uint64_t)*(byte *)((int64_t)piVar3 + 0x1e)) * 0x100000001b3 ^
               (uint64_t)*(byte *)((int64_t)piVar3 + 0x1f)) * 0x100000001b3 ^ uVar6) *
              -0x622015f714c7d297;
      uVar4 = (uVar4 >> 0x2f ^ uVar4 ^ uVar6) * -0x622015f714c7d297;
      uVar6 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
      uVar4 = ((((((((((uint64_t)*(byte *)(piVar3 + 8) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (uint64_t)*(byte *)((int64_t)piVar3 + 0x21)) * 0x100000001b3 ^
                    (uint64_t)*(byte *)((int64_t)piVar3 + 0x22)) * 0x100000001b3 ^
                   (uint64_t)*(byte *)((int64_t)piVar3 + 0x23)) * 0x100000001b3 ^
                  (uint64_t)*(byte *)(piVar3 + 9)) * 0x100000001b3 ^
                 (uint64_t)*(byte *)((int64_t)piVar3 + 0x25)) * 0x100000001b3 ^
                (uint64_t)*(byte *)((int64_t)piVar3 + 0x26)) * 0x100000001b3 ^
               (uint64_t)*(byte *)((int64_t)piVar3 + 0x27)) * 0x100000001b3 ^ uVar6) *
              -0x622015f714c7d297;
      uVar4 = (uVar4 >> 0x2f ^ uVar4 ^ uVar6) * -0x622015f714c7d297;
      uVar6 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
      uVar4 = ((((((((((uint64_t)*(byte *)(piVar3 + 10) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (uint64_t)*(byte *)((int64_t)piVar3 + 0x29)) * 0x100000001b3 ^
                    (uint64_t)*(byte *)((int64_t)piVar3 + 0x2a)) * 0x100000001b3 ^
                   (uint64_t)*(byte *)((int64_t)piVar3 + 0x2b)) * 0x100000001b3 ^
                  (uint64_t)*(byte *)(piVar3 + 0xb)) * 0x100000001b3 ^
                 (uint64_t)*(byte *)((int64_t)piVar3 + 0x2d)) * 0x100000001b3 ^
                (uint64_t)*(byte *)((int64_t)piVar3 + 0x2e)) * 0x100000001b3 ^
               (uint64_t)*(byte *)((int64_t)piVar3 + 0x2f)) * 0x100000001b3 ^ uVar6) *
              -0x622015f714c7d297;
      uVar4 = (uVar4 >> 0x2f ^ uVar4 ^ uVar6) * -0x622015f714c7d297;
      uVar6 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
      uVar4 = ((((((((((uint64_t)*(byte *)(piVar3 + 0xc) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (uint64_t)*(byte *)((int64_t)piVar3 + 0x31)) * 0x100000001b3 ^
                    (uint64_t)*(byte *)((int64_t)piVar3 + 0x32)) * 0x100000001b3 ^
                   (uint64_t)*(byte *)((int64_t)piVar3 + 0x33)) * 0x100000001b3 ^
                  (uint64_t)*(byte *)(piVar3 + 0xd)) * 0x100000001b3 ^
                 (uint64_t)*(byte *)((int64_t)piVar3 + 0x35)) * 0x100000001b3 ^
                (uint64_t)*(byte *)((int64_t)piVar3 + 0x36)) * 0x100000001b3 ^
               (uint64_t)*(byte *)((int64_t)piVar3 + 0x37)) * 0x100000001b3 ^ uVar6) *
              -0x622015f714c7d297;
      uVar4 = (uVar4 >> 0x2f ^ uVar4 ^ uVar6) * -0x622015f714c7d297;
      uVar6 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
      uVar4 = ((((((((((uint64_t)*(byte *)(piVar3 + 0xe) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (uint64_t)*(byte *)((int64_t)piVar3 + 0x39)) * 0x100000001b3 ^
                    (uint64_t)*(byte *)((int64_t)piVar3 + 0x3a)) * 0x100000001b3 ^
                   (uint64_t)*(byte *)((int64_t)piVar3 + 0x3b)) * 0x100000001b3 ^
                  (uint64_t)*(byte *)(piVar3 + 0xf)) * 0x100000001b3 ^
                 (uint64_t)*(byte *)((int64_t)piVar3 + 0x3d)) * 0x100000001b3 ^
                (uint64_t)*(byte *)((int64_t)piVar3 + 0x3e)) * 0x100000001b3 ^
               (uint64_t)*(byte *)((int64_t)piVar3 + 0x3f)) * 0x100000001b3 ^ uVar6) *
              -0x622015f714c7d297;
      uVar4 = (uVar4 >> 0x2f ^ uVar4 ^ uVar6) * -0x622015f714c7d297;
      uVar6 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
      uVar4 = ((((((((((uint64_t)*(byte *)(piVar3 + 0x10) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (uint64_t)*(byte *)((int64_t)piVar3 + 0x41)) * 0x100000001b3 ^
                    (uint64_t)*(byte *)((int64_t)piVar3 + 0x42)) * 0x100000001b3 ^
                   (uint64_t)*(byte *)((int64_t)piVar3 + 0x43)) * 0x100000001b3 ^
                  (uint64_t)*(byte *)(piVar3 + 0x11)) * 0x100000001b3 ^
                 (uint64_t)*(byte *)((int64_t)piVar3 + 0x45)) * 0x100000001b3 ^
                (uint64_t)*(byte *)((int64_t)piVar3 + 0x46)) * 0x100000001b3 ^
               (uint64_t)*(byte *)((int64_t)piVar3 + 0x47)) * 0x100000001b3 ^ uVar6) *
              -0x622015f714c7d297;
      uVar4 = (uVar4 >> 0x2f ^ uVar4 ^ uVar6) * -0x622015f714c7d297;
      uVar6 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
      auVar1 = *(int8_t (*) [16])(*(int64_t *)(*(int64_t *)(piVar3 + 0x42) + 0xa8) + 0xc);
      auVar7 = auVar1._0_11_;
      uVar4 = ((((((((((uint64_t)auVar1[8] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (uint64_t)(auVar1._9_4_ & 0xff)) * 0x100000001b3 ^
                    (uint64_t)(auVar1._10_4_ & 0xff)) * 0x100000001b3 ^
                   (uint64_t)(auVar1._11_4_ & 0xff)) * 0x100000001b3 ^
                  (uint64_t)(auVar1._12_4_ & 0xff)) * 0x100000001b3 ^
                 (uint64_t)(auVar1._12_4_ >> 8 & 0xff)) * 0x100000001b3 ^
                (uint64_t)(auVar1._14_2_ & 0xff)) * 0x100000001b3 ^ (uint64_t)auVar1[0xf]) *
               0x100000001b3 ^ uVar6) * -0x622015f714c7d297;
      uVar4 = (uVar4 >> 0x2f ^ uVar4 ^ uVar6) * -0x622015f714c7d297;
      uVar4 = uVar4 >> 0x2f ^ uVar4;
      goto LAB_1803a0ccf;
    }
    plVar2 = (int64_t *)*plVar2;
  } while( true );
}
// 函数: void function_3a0dd0(int64_t param_1)
void function_3a0dd0(int64_t param_1)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uVar2 = *(uint64_t *)(param_1 + 0x10);
  lVar3 = *(int64_t *)(param_1 + 8);
  uVar6 = 0;
  if (uVar2 == 0) {
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  else {
    do {
      lVar5 = *(int64_t *)(lVar3 + uVar6 * 8);
      while (lVar5 != 0) {
        lVar4 = *(int64_t *)(lVar5 + 0x10);
        plVar1 = (int64_t *)(lVar5 + 8);
        lVar5 = lVar4;
        if ((int64_t *)*plVar1 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar1 + 0x38))();
        }
      }
      *(uint64_t *)(lVar3 + uVar6 * 8) = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  return;
}
// 函数: void function_3a0df0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_3a0df0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_3a0f00(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_3a0e20(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_3a0e20(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_3a0f00(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_3a0e50(int64_t param_1)
void function_3a0e50(int64_t param_1)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uVar2 = *(uint64_t *)(param_1 + 0x10);
  lVar3 = *(int64_t *)(param_1 + 8);
  uVar6 = 0;
  if (uVar2 == 0) {
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  else {
    do {
      lVar5 = *(int64_t *)(lVar3 + uVar6 * 8);
      while (lVar5 != 0) {
        lVar4 = *(int64_t *)(lVar5 + 0x10);
        plVar1 = (int64_t *)(lVar5 + 8);
        lVar5 = lVar4;
        if ((int64_t *)*plVar1 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar1 + 0x38))();
        }
      }
      *(uint64_t *)(lVar3 + uVar6 * 8) = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  return;
}
// 函数: void function_3a0f00(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_3a0f00(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  if (param_2 != (uint64_t *)0x0) {
    uVar2 = 0xfffffffffffffffe;
    do {
      function_3a0f00(param_1,*param_2,param_3,param_4,uVar2);
      puVar1 = (uint64_t *)param_2[1];
      if ((int64_t *)param_2[4] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_2[4] + 0x38))();
      }
      param_2 = puVar1;
    } while (puVar1 != (uint64_t *)0x0);
  }
  return;
}
uint64_t *
function_3a0f80(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t *param_4)
{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t *pstack_special_x_8;
  plVar2 = *(int64_t **)(param_1 + 0x30);
  LOCK();
  plVar1 = plVar2 + 1;
  lVar5 = *plVar1;
  *plVar1 = *plVar1 + 0x28;
  UNLOCK();
  uVar6 = lVar5 + 0xfU & 0xfffffffffffffff0;
  puVar7 = (uint64_t *)0x0;
  puVar9 = puVar7;
  if (uVar6 + 0x18 < 0x2000000) {
    puVar9 = (uint64_t *)(*plVar2 + uVar6);
  }
  *puVar9 = *param_4;
  puVar9[1] = param_4[1];
  param_4[1] = 0;
  puVar9[2] = 0;
  uVar6 = *puVar9;
  uVar8 = uVar6 % (uint64_t)*(uint *)(param_1 + 0x10);
  puVar3 = *(uint64_t **)(*(int64_t *)(param_1 + 8) + uVar8 * 8);
  while( true ) {
    if (puVar3 == (uint64_t *)0x0) {
      RenderingShaderProcessor0(param_1 + 0x20,&pstack_special_x_8,(uint64_t)*(uint *)(param_1 + 0x10),
                    *(int32_t *)(param_1 + 0x18),1);
      if ((char)pstack_special_x_8 == '\0') {
        lVar5 = *(int64_t *)(param_1 + 8);
      }
      else {
        uVar4 = (uint64_t)pstack_special_x_8 >> 0x20;
        uVar8 = uVar6 % uVar4;
        lVar5 = function_2f5aa0(param_1);
        if (*(int64_t *)(param_1 + 0x10) != 0) {
          do {
            puVar3 = *(uint64_t **)(*(int64_t *)(param_1 + 8) + (int64_t)puVar7 * 8);
            while (puVar3 != (uint64_t *)0x0) {
              uVar6 = *puVar3;
              *(uint64_t *)(*(int64_t *)(param_1 + 8) + (int64_t)puVar7 * 8) = puVar3[2];
              puVar3[2] = *(uint64_t *)(lVar5 + (uVar6 % uVar4) * 8);
              *(uint64_t **)(lVar5 + (uVar6 % uVar4) * 8) = puVar3;
              puVar3 = *(uint64_t **)(*(int64_t *)(param_1 + 8) + (int64_t)puVar7 * 8);
            }
            puVar7 = (uint64_t *)((int64_t)puVar7 + 1);
          } while (puVar7 < *(uint64_t **)(param_1 + 0x10));
        }
        *(uint64_t *)(param_1 + 0x10) = uVar4;
        *(int64_t *)(param_1 + 8) = lVar5;
      }
      puVar9[2] = *(uint64_t *)(lVar5 + uVar8 * 8);
      *(uint64_t **)(*(int64_t *)(param_1 + 8) + uVar8 * 8) = puVar9;
      *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
      lVar5 = *(int64_t *)(param_1 + 8);
      *param_2 = puVar9;
      param_2[1] = lVar5 + uVar8 * 8;
      *(int8_t *)(param_2 + 2) = 1;
      return param_2;
    }
    if (uVar6 == *puVar3) break;
    puVar3 = (uint64_t *)puVar3[2];
  }
  if ((int64_t *)puVar9[1] != (int64_t *)0x0) {
    pstack_special_x_8 = puVar9;
    (**(code **)(*(int64_t *)puVar9[1] + 0x38))();
  }
  lVar5 = *(int64_t *)(param_1 + 8);
  *param_2 = puVar3;
  param_2[1] = lVar5 + uVar8 * 8;
  *(int8_t *)(param_2 + 2) = 0;
  return param_2;
}
uint64_t function_3a1150(uint64_t param_1,uint64_t param_2)
{
  function_3a1190();
  if ((param_2 & 1) != 0) {
    free(param_1,0x880);
  }
  return param_1;
}
// 函数: void function_3a1190(uint64_t *param_1)
void function_3a1190(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  *param_1 = &processed_var_8576_ptr;
  puVar3 = param_1 + 0xf2;
  lVar2 = 0x10;
  do {
    plVar1 = (int64_t *)puVar3[-0x10];
    if (plVar1 != (int64_t *)0x0) {
      if (*(char *)((int64_t)plVar1 + 0x11) == '\0') {
        if (((char)plVar1[2] == '\0') && (*plVar1 != 0)) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int8_t *)(plVar1 + 2) = 0;
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar1);
    }
    puVar3[-0x10] = 0;
    plVar1 = (int64_t *)*puVar3;
    if (plVar1 != (int64_t *)0x0) {
      if (*(char *)((int64_t)plVar1 + 0x11) == '\0') {
        if (((char)plVar1[2] == '\0') && (*plVar1 != 0)) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int8_t *)(plVar1 + 2) = 0;
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar1);
    }
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  plVar1 = (int64_t *)param_1[0x103];
  if (plVar1 != (int64_t *)0x0) {
    if (*(char *)((int64_t)plVar1 + 0x11) == '\0') {
      if (((char)plVar1[2] == '\0') && (*plVar1 != 0)) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int8_t *)(plVar1 + 2) = 0;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar1);
  }
  param_1[0x103] = 0;
  plVar1 = (int64_t *)param_1[0x102];
  if (plVar1 != (int64_t *)0x0) {
    if (*(char *)((int64_t)plVar1 + 0x11) == '\0') {
      if (((char)plVar1[2] == '\0') && (*plVar1 != 0)) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int8_t *)(plVar1 + 2) = 0;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar1);
  }
  param_1[0x102] = 0;
  if (param_1[0x10e] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x10e] = 0;
  if (param_1[0x10f] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x10f] = 0;
  function_0ed380(param_1 + 0x104);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  function_0ed380(param_1 + 0xa8);
  param_1[0xd1] = &system_data_buffer_ptr;
  if (param_1[0xd2] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xd2] = 0;
  *(int32_t *)(param_1 + 0xd4) = 0;
  param_1[0xd1] = &system_state_ptr;
  param_1[0xcd] = &system_data_buffer_ptr;
  if (param_1[0xce] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xce] = 0;
  *(int32_t *)(param_1 + 0xd0) = 0;
  param_1[0xcd] = &system_state_ptr;
  UtilitiesSystem_Processor();
  UtilitiesSystem_Processor();
  function_0ed380(param_1 + 0xa8);
  DataTransformer0();
  if ((int64_t *)param_1[0x38] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x38] + 0x38))();
  }
  if ((int64_t *)param_1[0x27] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x27] + 0x38))();
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x0001803a150d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3a1330(int64_t param_1,int64_t param_2,uint64_t param_3,int32_t param_4)
void function_3a1330(int64_t param_1,int64_t param_2,uint64_t param_3,int32_t param_4)
{
  int64_t lVar1;
  char cVar2;
  int32_t uVar3;
  int8_t *puVar4;
  uint64_t uVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  int iVar9;
  int8_t stack_array_118 [32];
  int32_t local_var_f8;
  int64_t lStack_f0;
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  uint64_t local_var_d0;
  void *plocal_var_c8;
  int64_t lStack_c0;
  uint local_var_b8;
  int32_t local_var_b0;
  int64_t *plStack_a8;
  uint64_t local_var_a0;
  char acStack_98 [64];
  uint64_t local_var_58;
  local_var_a0 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_118;
  local_var_f8 = param_4;
  lStack_f0 = param_2;
  if (*(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x68) + 0x60b14) == 0) {
    function_3a2b10();
  }
  else {
    function_3a25c0(param_1,acStack_98,param_3,param_3 & 0xffffffff);
  }
  local_var_f8 = param_4;
  function_0634b0(acStack_98,0x40,&processed_var_7944_ptr,param_3 & 0xffffffff);
  CoreEngineDataTransformer(&plocal_var_c8,param_2);
  uVar6 = local_var_b8 + 1;
  CoreEngineDataBufferProcessor(&plocal_var_c8,uVar6);
  *(int16_t *)((uint64_t)local_var_b8 + lStack_c0) = 0x2f;
  lVar1 = -1;
  do {
    lVar8 = lVar1;
    lVar1 = lVar8 + 1;
  } while (acStack_98[lVar8 + 1] != '\0');
  iVar9 = (int)(lVar8 + 1);
  local_var_b8 = uVar6;
  if (iVar9 < 1) {
    cVar2 = RenderingSystem_RenderQueue(&plocal_var_c8);
    if (cVar2 == '\0') {
      if ((0 < *(int *)(param_2 + 0x10)) &&
         (*(char *)(*(int64_t *)(param_1 + 0x10) + 0x30) != '\0')) {
        *(int8_t *)(*(int64_t *)(param_1 + 0x10) + 0x30) = 0;
        SystemCore_Allocator(&processed_var_7912_ptr);
      }
    }
    else {
      plocal_var_e8 = &system_data_buffer_ptr;
      local_var_d0 = 0;
      plocal_var_e0 = (int8_t *)0x0;
      local_var_d8 = 0;
      lVar1 = -1;
      do {
        lVar8 = lVar1;
        lVar1 = lVar8 + 1;
      } while (acStack_98[lVar8 + 1] != '\0');
      if ((int)(lVar8 + 1) != 0) {
        iVar7 = (int)lVar8 + 2;
        iVar9 = iVar7;
        if (iVar7 < 0x10) {
          iVar9 = 0x10;
        }
        puVar4 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar9,0x13);
        *puVar4 = 0;
        plocal_var_e0 = puVar4;
        uVar3 = CoreEngineSystemCleanup(puVar4);
        local_var_d0 = CONCAT44(local_var_d0._4_4_,uVar3);
// WARNING: Subroutine does not return
        memcpy(puVar4,acStack_98,iVar7);
      }
      local_var_d8 = 0;
      uVar5 = function_0b2cd0();
      function_3a3b90(param_1,uVar5);
      if (plStack_a8 != (int64_t *)0x0) {
        (**(code **)(*plStack_a8 + 0x38))();
      }
      plocal_var_e0 = (int8_t *)0x0;
      local_var_d0 = local_var_d0 & 0xffffffff00000000;
      plocal_var_e8 = &system_state_ptr;
    }
    plocal_var_c8 = &system_data_buffer_ptr;
    if (lStack_c0 == 0) {
      lStack_c0 = 0;
      local_var_b0 = 0;
      plocal_var_c8 = &system_state_ptr;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_118);
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  CoreEngineDataBufferProcessor(&plocal_var_c8,uVar6 + iVar9);
// WARNING: Subroutine does not return
  memcpy((uint64_t)local_var_b8 + lStack_c0,acStack_98,(int64_t)((int)lVar8 + 2));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address