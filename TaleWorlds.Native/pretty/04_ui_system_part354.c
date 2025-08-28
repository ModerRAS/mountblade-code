/* 函数别名定义: RenderingTextureManager */
#define RenderingTextureManager RenderingTextureManager
#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part354.c - 6 个函数
// 函数: void NetworkProtocol_5ec78(void)
void NetworkProtocol_5ec78(void)
{
  return;
}
uint64_t NetworkProtocol_5ec90(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  uVar4 = (int)*(uint *)(param_1 + 0x4cc) >> 0x1f;
  iVar3 = *(int *)(param_1 + 0x4c8) + 1;
  iVar1 = (*(uint *)(param_1 + 0x4cc) ^ uVar4) - uVar4;
  if (iVar1 < iVar3) {
    iVar1 = (int)((float)iVar1 * 1.5);
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    if (iVar3 < 8) {
      iVar3 = 8;
    }
    uVar2 = RenderingTextureManager0((int64_t *)(param_1 + 0x4c0),iVar3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  *(uint64_t *)(*(int64_t *)(param_1 + 0x4c0) + (int64_t)*(int *)(param_1 + 0x4c8) * 8) =
       param_2;
  *(int *)(param_1 + 0x4c8) = *(int *)(param_1 + 0x4c8) + 1;
  return 0;
}
uint64_t
NetworkProtocol_5ed00(uint64_t param_1,uint64_t param_2,uint64_t param_3,byte param_4,
             uint64_t param_5,char param_6,byte param_7)
{
  uint64_t uVar1;
  uint uVar2;
  int64_t alStack_18 [2];
  alStack_18[0] = 0;
  uVar1 = NetworkProtocol_60480(param_1,param_2,alStack_18,1);
  if ((int)uVar1 == 0) {
    *(uint *)(alStack_18[0] + 0x1c) = *(uint *)(alStack_18[0] + 0x1c) | 1;
    uVar2 = ((uint)param_7 << 4 | *(uint *)(alStack_18[0] + 0x1c)) & ~((param_7 ^ 1) << 4);
    *(uint *)(alStack_18[0] + 0x1c) = uVar2;
    if (param_6 == '\0') {
      if ((((uVar2 >> 5 & 1) == 0) || ((uVar2 >> 6 & 1) != 0)) &&
         (uVar1 = NetworkProtocol_63930(param_1,alStack_18[0],0,0,0,1), (int)uVar1 != 0)) {
        return uVar1;
      }
    }
    else {
      *(uint *)(alStack_18[0] + 0x1c) = ((uint)param_4 * 2 | uVar2 | 4) & ~((param_4 ^ 1) * 2);
      *(uint64_t *)(alStack_18[0] + 0x20) = param_5;
      uVar2 = *(uint *)(alStack_18[0] + 0x1c);
      if (((((uVar2 >> 5 & 1) == 0) || ((uVar2 >> 6 & 1) != 0)) &&
          (((uVar2 >> 2 & 1) != 0 || ((uVar2 >> 3 & 1) != 0)))) &&
         (uVar1 = NetworkProtocol_c7260(param_3,alStack_18[0],(byte)(uVar2 >> 2) & 1,(byte)(uVar2 >> 3) & 1)
         , (int)uVar1 != 0)) {
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}
uint64_t NetworkProtocol_5ee30(int64_t param_1,float param_2,int *param_3,float *param_4)
{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t alStackX_18 [2];
  if (*param_3 == 0) {
    return 0x1c;
  }
  lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x30);
  iVar1 = UISystem_WidgetController(param_1 + 200);
  lVar3 = iVar1 + lVar3;
  alStackX_18[0] = 0;
  uVar2 = NetworkProtocol_592c0(param_1 + 200,(int)(param_2 + 0.5) + lVar3,param_3,alStackX_18);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
    *param_4 = (float)(alStackX_18[0] - lVar3);
  }
  return uVar2;
}
uint64_t NetworkProtocol_5ee5e(int64_t param_1)
{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  float *unaff_R14;
  float unaff_XMM6_Da;
  lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x30);
  iVar1 = UISystem_WidgetController(param_1 + 200);
  lVar3 = iVar1 + lVar3;
  uVar2 = NetworkProtocol_592c0(param_1 + 200,(int)(unaff_XMM6_Da + 0.5) + lVar3);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
    *unaff_R14 = (float)-lVar3;
  }
  return uVar2;
}
uint64_t NetworkProtocol_5eec6(void)
{
  int64_t unaff_RDI;
  float *unaff_R14;
  int64_t local_var_60;
  *unaff_R14 = (float)(local_var_60 - unaff_RDI);
  return 0;
}
uint64_t NetworkProtocol_5ef10(int64_t param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  iVar3 = SystemCore_StateController();
  if (iVar3 != 2) {
    uVar4 = NetworkProtocol_4efe0(*(uint64_t *)(param_1 + 0x2b0),param_1 + 0x338);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    Function_af981d09(param_1 + 0x378,*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x30));
    Function_af981d09(param_1 + 0x3f8,*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x30));
    plVar6 = (int64_t *)0x0;
    plVar1 = (int64_t *)(param_1 + 0x380);
    plVar5 = (int64_t *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar5 = plVar6;
    }
    plVar2 = plVar6;
    if (plVar5 != (int64_t *)0x0) {
      plVar2 = plVar5 + 4;
    }
    while (plVar2 != plVar1) {
      plVar5 = plVar2 + -4;
      if (plVar2 == (int64_t *)0x0) {
        plVar5 = plVar6;
      }
      uVar4 = (**(code **)(*plVar5 + 0x80))();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (plVar2 == plVar1) break;
      plVar5 = (int64_t *)(*plVar2 + -0x20);
      if (*plVar2 == 0) {
        plVar5 = plVar6;
      }
      plVar2 = plVar6;
      if (plVar5 != (int64_t *)0x0) {
        plVar2 = plVar5 + 4;
      }
    }
    plVar1 = (int64_t *)(param_1 + 0x400);
    plVar5 = (int64_t *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar5 = plVar6;
    }
    plVar2 = plVar6;
    if (plVar5 != (int64_t *)0x0) {
      plVar2 = plVar5 + 4;
    }
    while (plVar2 != plVar1) {
      plVar5 = plVar2 + -4;
      if (plVar2 == (int64_t *)0x0) {
        plVar5 = plVar6;
      }
      uVar4 = (**(code **)(*plVar5 + 0x80))();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (plVar2 == plVar1) {
        return 0;
      }
      plVar5 = (int64_t *)(*plVar2 + -0x20);
      if (*plVar2 == 0) {
        plVar5 = plVar6;
      }
      plVar2 = plVar6;
      if (plVar5 != (int64_t *)0x0) {
        plVar2 = plVar5 + 4;
      }
    }
  }
  return 0;
}
uint64_t NetworkProtocol_5f080(int64_t param_1)
{
  char cVar1;
  uint64_t uVar2;
  if ((0.0 < *(float *)(param_1 + 0x2f0) || *(float *)(param_1 + 0x2f0) == 0.0) &&
     (*(char *)(param_1 + 0x5c) == '\0')) {
    cVar1 = Function_c1c11e65(*(uint64_t *)(param_1 + 0x2c8));
    if (cVar1 == '\0') {
      return (uint64_t)*(uint *)(param_1 + 0x2f0);
    }
  }
  uVar2 = NetworkProtocol_d2430(param_1 + 0x28,*(uint64_t *)(param_1 + 0x2c8));
  *(int *)(param_1 + 0x2f0) = (int)uVar2;
  return uVar2;
}
uint64_t NetworkProtocol_5f0e0(int64_t param_1,char param_2)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uVar4 = Physics_CollisionDetector(param_1 + 0x378);
  if (((int)uVar4 == 0) && (uVar4 = Physics_CollisionDetector(param_1 + 0x3f8), (int)uVar4 == 0)) {
    puVar5 = (uint64_t *)(param_1 + 0x490);
    for (puVar1 = (uint64_t *)*puVar5; puVar1 != puVar5; puVar1 = (uint64_t *)*puVar1) {
      *(uint *)((int64_t)puVar1 + 0x1c) = *(uint *)((int64_t)puVar1 + 0x1c) & 0x33;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(int32_t *)(puVar1 + 3) = 0;
      if (puVar1 == puVar5) break;
    }
    uVar4 = NetworkProtocol_5f670(param_1);
    if ((int)uVar4 == 0) {
      for (puVar5 = *(uint64_t **)(param_1 + 0x4d0);
          (*(uint64_t **)(param_1 + 0x4d0) <= puVar5 &&
          (puVar5 < *(uint64_t **)(param_1 + 0x4d0) + *(int *)(param_1 + 0x4d8)));
          puVar5 = puVar5 + 1) {
        Function_9d1c9268(*puVar5);
      }
      uVar4 = NetworkProtocol_53980(*(uint64_t *)(param_1 + 0x2b0));
      if ((((int)uVar4 == 0) &&
          ((*(int64_t *)(param_1 + 0x478) == 0 ||
           (uVar4 = NetworkProtocol_d9380(*(int64_t *)(param_1 + 0x478),0), (int)uVar4 == 0)))) &&
         ((1 < *(int *)(param_1 + 0x2e4) - 1U ||
          (uVar4 = SystemCore_StateController(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),
                                 *(uint *)(param_1 + 0x2d8) >> 0xc & 0xffffff01), (int)uVar4 == 0)))
         ) {
        *(int32_t *)(param_1 + 0x2e4) = 0;
        *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) & 0xffff7eff;
        uVar4 = NetworkProtocol_624a0(param_1);
        if (((int)uVar4 == 0) &&
           ((*(int64_t *)(param_1 + 0x2d0) == 0 ||
            (uVar4 = Function_908e31fe(*(int64_t *)(param_1 + 0x2d0),param_1,
                                         *(uint64_t *)(param_1 + 0x2c8)), (int)uVar4 == 0)))) {
          lVar2 = *(int64_t *)(param_1 + 0x80);
          if (lVar2 != 0) {
            uVar3 = SystemCore_StateController(param_1);
            *(int32_t *)(lVar2 + 0x80) = uVar3;
          }
          if ((param_2 != '\0') ||
             (((puVar5 = *(uint64_t **)(param_1 + 0x480), puVar5 == (uint64_t *)0x0 ||
               (uVar4 = (**(code **)*puVar5)(puVar5,param_1,0x20), (int)uVar4 == 0)) &&
              (((*(uint *)(param_1 + 0x2d8) >> 3 & 1) == 0 ||
               (uVar4 = NetworkProtocol_5fb30(param_1), (int)uVar4 == 0)))))) {
            *(int32_t *)(param_1 + 0x488) = 0;
            uVar4 = 0;
          }
        }
      }
    }
  }
  return uVar4;
}
uint64_t NetworkProtocol_5f11f(uint64_t *param_1)
{
  int64_t lVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int64_t unaff_RBX;
  char unaff_SIL;
  for (puVar4 = (uint64_t *)*param_1; puVar4 != param_1; puVar4 = (uint64_t *)*puVar4) {
    *(uint *)((int64_t)puVar4 + 0x1c) = *(uint *)((int64_t)puVar4 + 0x1c) & 0x33;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(int32_t *)(puVar4 + 3) = 0;
    if (puVar4 == param_1) break;
  }
  uVar3 = NetworkProtocol_5f670();
  if ((int)uVar3 == 0) {
    for (puVar4 = *(uint64_t **)(unaff_RBX + 0x4d0);
        (*(uint64_t **)(unaff_RBX + 0x4d0) <= puVar4 &&
        (puVar4 < *(uint64_t **)(unaff_RBX + 0x4d0) + *(int *)(unaff_RBX + 0x4d8)));
        puVar4 = puVar4 + 1) {
      Function_9d1c9268(*puVar4);
    }
    uVar3 = NetworkProtocol_53980(*(uint64_t *)(unaff_RBX + 0x2b0));
    if ((((int)uVar3 == 0) &&
        ((*(int64_t *)(unaff_RBX + 0x478) == 0 ||
         (uVar3 = NetworkProtocol_d9380(*(int64_t *)(unaff_RBX + 0x478),0), (int)uVar3 == 0)))) &&
       ((1 < *(int *)(unaff_RBX + 0x2e4) - 1U ||
        (uVar3 = SystemCore_StateController(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0x2b0) + 0x78),
                               *(uint *)(unaff_RBX + 0x2d8) >> 0xc & 0xffffff01), (int)uVar3 == 0)))
       ) {
      *(int32_t *)(unaff_RBX + 0x2e4) = 0;
      *(uint *)(unaff_RBX + 0x2d8) = *(uint *)(unaff_RBX + 0x2d8) & 0xffff7eff;
      uVar3 = NetworkProtocol_624a0();
      if (((int)uVar3 == 0) &&
         ((*(int64_t *)(unaff_RBX + 0x2d0) == 0 || (uVar3 = Function_908e31fe(), (int)uVar3 == 0)
          ))) {
        lVar1 = *(int64_t *)(unaff_RBX + 0x80);
        if (lVar1 != 0) {
          uVar2 = SystemCore_StateController();
          *(int32_t *)(lVar1 + 0x80) = uVar2;
        }
        if ((unaff_SIL != '\0') ||
           (((*(uint64_t **)(unaff_RBX + 0x480) == (uint64_t *)0x0 ||
             (uVar3 = (**(code **)**(uint64_t **)(unaff_RBX + 0x480))(), (int)uVar3 == 0)) &&
            (((*(uint *)(unaff_RBX + 0x2d8) >> 3 & 1) == 0 ||
             (uVar3 = NetworkProtocol_5fb30(), (int)uVar3 == 0)))))) {
          *(int32_t *)(unaff_RBX + 0x488) = 0;
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}
uint64_t NetworkProtocol_5f163(uint64_t *param_1)
{
  int64_t lVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  char unaff_SIL;
  for (; (*(uint64_t **)(unaff_RBX + 0x4d0) <= param_1 &&
         (param_1 < *(uint64_t **)(unaff_RBX + 0x4d0) + *(int *)(unaff_RBX + 0x4d8)));
      param_1 = param_1 + 1) {
    Function_9d1c9268(*param_1);
  }
  uVar3 = NetworkProtocol_53980(*(uint64_t *)(unaff_RBX + 0x2b0));
  if ((int)uVar3 == 0) {
    if ((*(int64_t *)(unaff_RBX + 0x478) != 0) &&
       (uVar3 = NetworkProtocol_d9380(*(int64_t *)(unaff_RBX + 0x478),0), (int)uVar3 != 0)) {
      return uVar3;
    }
    if ((*(int *)(unaff_RBX + 0x2e4) - 1U < 2) &&
       (uVar3 = SystemCore_StateController(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0x2b0) + 0x78),
                              *(uint *)(unaff_RBX + 0x2d8) >> 0xc & 0xffffff01), (int)uVar3 != 0)) {
      return uVar3;
    }
    *(int32_t *)(unaff_RBX + 0x2e4) = unaff_EBP;
    *(uint *)(unaff_RBX + 0x2d8) = *(uint *)(unaff_RBX + 0x2d8) & 0xffff7eff;
    uVar3 = NetworkProtocol_624a0();
    if ((int)uVar3 == 0) {
      if ((*(int64_t *)(unaff_RBX + 0x2d0) != 0) &&
         (uVar3 = Function_908e31fe(), (int)uVar3 != 0)) {
        return uVar3;
      }
      lVar1 = *(int64_t *)(unaff_RBX + 0x80);
      if (lVar1 != 0) {
        uVar2 = SystemCore_StateController();
        *(int32_t *)(lVar1 + 0x80) = uVar2;
      }
      if (unaff_SIL == '\0') {
        if ((*(uint64_t **)(unaff_RBX + 0x480) != (uint64_t *)0x0) &&
           (uVar3 = (**(code **)**(uint64_t **)(unaff_RBX + 0x480))(), (int)uVar3 != 0)) {
          return uVar3;
        }
        if (((*(uint *)(unaff_RBX + 0x2d8) >> 3 & 1) != 0) &&
           (uVar3 = NetworkProtocol_5fb30(), (int)uVar3 != 0)) {
          return uVar3;
        }
      }
      *(int32_t *)(unaff_RBX + 0x488) = unaff_EBP;
      uVar3 = 0;
    }
  }
  return uVar3;
}
// 函数: void NetworkProtocol_5f294(void)
void NetworkProtocol_5f294(void)
{
  return;
}
// 函数: void NetworkProtocol_5f299(void)
void NetworkProtocol_5f299(void)
{
  return;
}
uint64_t NetworkProtocol_5f2b0(int64_t param_1)
{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uVar2 = NetworkProtocol_5ef10();
  if ((int)uVar2 == 0) {
    lVar3 = (uint64_t)*(uint *)(*(int64_t *)(param_1 + 0x2c8) + 0x778) +
            *(int64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x30);
    *(int64_t *)(param_1 + 0x328) = lVar3;
    NetworkProtocol_d0490(param_1 + 0x378,lVar3,1);
    NetworkProtocol_d0490(param_1 + 0x3f8,*(uint64_t *)(param_1 + 0x328),1);
    lVar3 = *(int64_t *)(param_1 + 0x80);
    *(int32_t *)(param_1 + 0x2e4) = 5;
    if (lVar3 != 0) {
      uVar1 = SystemCore_StateController(param_1);
      *(int32_t *)(lVar3 + 0x80) = uVar1;
    }
    uVar2 = 0;
  }
  return uVar2;
}
uint64_t NetworkProtocol_5f2d3(void)
{
  int64_t lVar1;
  int32_t uVar2;
  int64_t in_RAX;
  int64_t unaff_RBX;
  *(uint64_t *)(unaff_RBX + 0x328) =
       (uint64_t)*(uint *)(in_RAX + 0x778) + *(int64_t *)(*(int64_t *)(unaff_RBX + 0x2b0) + 0x30)
  ;
  NetworkProtocol_d0490();
  NetworkProtocol_d0490(unaff_RBX + 0x3f8,*(uint64_t *)(unaff_RBX + 0x328),1);
  lVar1 = *(int64_t *)(unaff_RBX + 0x80);
  *(int32_t *)(unaff_RBX + 0x2e4) = 5;
  if (lVar1 != 0) {
    uVar2 = SystemCore_StateController();
    *(int32_t *)(lVar1 + 0x80) = uVar2;
  }
  return 0;
}
// 函数: void NetworkProtocol_5f336(void)
void NetworkProtocol_5f336(void)
{
  return;
}
uint64_t NetworkProtocol_5f340(int64_t param_1)
{
  int64_t lVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uVar3 = NetworkProtocol_5ef10();
  if ((int)uVar3 == 0) {
    uVar3 = NetworkProtocol_d5480(param_1 + 0x280,*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x30));
    if ((int)uVar3 == 0) {
      lVar1 = *(int64_t *)(param_1 + 0x80);
      *(int32_t *)(param_1 + 0x2e4) = 4;
      if (lVar1 != 0) {
        uVar2 = SystemCore_StateController(param_1);
        *(int32_t *)(lVar1 + 0x80) = uVar2;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}
uint64_t NetworkProtocol_5f36d(void)
{
  int64_t lVar1;
  int32_t uVar2;
  int64_t unaff_RBX;
  lVar1 = *(int64_t *)(unaff_RBX + 0x80);
  *(int32_t *)(unaff_RBX + 0x2e4) = 4;
  if (lVar1 != 0) {
    uVar2 = SystemCore_StateController();
    *(int32_t *)(lVar1 + 0x80) = uVar2;
  }
  return 0;
}
// 函数: void NetworkProtocol_5f39d(void)
void NetworkProtocol_5f39d(void)
{
  return;
}
uint64_t NetworkProtocol_5f440(int64_t param_1)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  for (puVar2 = *(uint64_t **)(param_1 + 0x4c0);
      (*(uint64_t **)(param_1 + 0x4c0) <= puVar2 &&
      (puVar2 < *(uint64_t **)(param_1 + 0x4c0) + *(int *)(param_1 + 0x4c8))); puVar2 = puVar2 + 1
      ) {
    uVar1 = NetworkProtocol_b42b0(*puVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
uint NetworkProtocol_5f500(int64_t param_1,int64_t param_2)
{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int32_t uVar4;
  float fVar5;
  if ((*(float *)(param_1 + 0x2f0) <= 0.0 && *(float *)(param_1 + 0x2f0) != 0.0) ||
     (*(char *)(param_1 + 0x5c) != '\0')) {
LAB_18085f53c:
    uVar4 = NetworkProtocol_d2430(param_1 + 0x28,*(uint64_t *)(param_1 + 0x2c8));
    *(int32_t *)(param_1 + 0x2f0) = uVar4;
  }
  else {
    cVar1 = Function_c1c11e65(*(uint64_t *)(param_1 + 0x2c8));
    if (cVar1 != '\0') goto LAB_18085f53c;
  }
  fVar5 = *(float *)(param_1 + 0x2f0);
  if ((0.0 < *(float *)(param_2 + 0x2f0) || *(float *)(param_2 + 0x2f0) == 0.0) &&
     (*(char *)(param_2 + 0x5c) == '\0')) {
    cVar1 = Function_c1c11e65(*(uint64_t *)(param_2 + 0x2c8));
    if (cVar1 == '\0') goto LAB_18085f593;
  }
  uVar4 = NetworkProtocol_d2430(param_2 + 0x28,*(uint64_t *)(param_2 + 0x2c8));
  *(int32_t *)(param_2 + 0x2f0) = uVar4;
LAB_18085f593:
  fVar5 = fVar5 - *(float *)(param_2 + 0x2f0);
  uVar3 = (uint)(0.0 < fVar5) - (uint)(fVar5 < 0.0);
  uVar2 = (int)(uVar3 * -0x80000000) >> 0x1f;
  return (*(int *)(param_2 + 0x2e8) - *(int *)(param_1 + 0x2e8) >> 0x1e & 0xfffffffeU) + 1 & ~uVar2
         | uVar2 & uVar3;
}
uint64_t
NetworkProtocol_5f5f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5,uint64_t param_6)
{
  int64_t *plVar1;
  uint64_t uVar2;
  plVar1 = *(int64_t **)(param_1 + 0x480);
  if ((plVar1 != (int64_t *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1,param_3,param_4,param_5,param_6),
     (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}
uint64_t
NetworkProtocol_5f630(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)
{
  int64_t *plVar1;
  uint64_t uVar2;
  plVar1 = *(int64_t **)(param_1 + 0x480);
  if ((plVar1 != (int64_t *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1,param_2,param_3,param_4,param_5),
     (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}
// 函数: void NetworkProtocol_5f670(int64_t param_1)
void NetworkProtocol_5f670(int64_t param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  plVar5 = (int64_t *)0x0;
  plVar1 = (int64_t *)(param_1 + 0x240);
  plVar4 = (int64_t *)(*plVar1 + -0x18);
  if (*plVar1 == 0) {
    plVar4 = plVar5;
  }
  plVar2 = plVar5;
  if (plVar4 != (int64_t *)0x0) {
    plVar2 = plVar4 + 3;
  }
  while (plVar2 != plVar1) {
    plVar4 = plVar2 + -3;
    if (plVar2 == (int64_t *)0x0) {
      plVar4 = plVar5;
    }
    iVar3 = NetworkProtocol_d5ee0(plVar4);
    if (iVar3 != 0) {
      return;
    }
    if (plVar2 == plVar1) break;
    plVar4 = (int64_t *)(*plVar2 + -0x18);
    if (*plVar2 == 0) {
      plVar4 = plVar5;
    }
    plVar2 = plVar5;
    if (plVar4 != (int64_t *)0x0) {
      plVar2 = plVar4 + 3;
    }
  }
  plVar1 = (int64_t *)(param_1 + 0x250);
  plVar4 = (int64_t *)(*plVar1 + -8);
  if (*plVar1 == 0) {
    plVar4 = plVar5;
  }
  plVar2 = plVar5;
  if (plVar4 != (int64_t *)0x0) {
    plVar2 = plVar4 + 1;
  }
  while (plVar2 != plVar1) {
    plVar4 = plVar2 + -1;
    if (plVar2 == (int64_t *)0x0) {
      plVar4 = plVar5;
    }
    NetworkProtocol_d71b0(plVar4,0);
    if (plVar2 == plVar1) break;
    plVar4 = (int64_t *)(*plVar2 + -8);
    if (*plVar2 == 0) {
      plVar4 = plVar5;
    }
    plVar2 = plVar5;
    if (plVar4 != (int64_t *)0x0) {
      plVar2 = plVar4 + 1;
    }
  }
  NetworkProtocol_5a980(param_1 + 200);
  return;
}
uint64_t
NetworkProtocol_5f790(int64_t param_1,uint64_t param_2,uint64_t param_3,char param_4,char param_5,
             byte param_6)
{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  int8_t stack_array_28 [16];
  lVar3 = NetworkProtocol_5fea0();
  if (lVar3 == 0) {
    return 0x1c;
  }
  uVar1 = (uint)param_6 * 4 + 4;
  if ((param_5 != '\0') && ((*(uint *)(lVar3 + 0x1c) & uVar1) == 0)) {
    return 0;
  }
  if ((param_4 == '\0') && (*(int64_t *)(lVar3 + 0x20 + (uint64_t)param_6 * 8) != 0)) {
    return 0x1c;
  }
  *(uint64_t *)(lVar3 + 0x20 + (uint64_t)param_6 * 8) = 0;
  uVar1 = ~uVar1 & *(uint *)(lVar3 + 0x1c);
  *(uint *)(lVar3 + 0x1c) = uVar1;
  uVar5 = (param_6 + 1) * 0x100;
  if ((((uVar1 >> 5 & 1) == 0) || ((uVar1 >> 6 & 1) != 0)) || (param_4 != '\0')) {
    uVar4 = NetworkProtocol_63930(param_1,lVar3,param_3,0,param_6,1);
    iVar2 = (int)uVar4;
  }
  else {
    if ((uVar5 & uVar1) == 0) goto LAB_18085f8b2;
    (**(code **)(**(int64_t **)(lVar3 + 0x10) + 0x30))(*(int64_t **)(lVar3 + 0x10),stack_array_28);
    uVar4 = NetworkProtocol_ca4f0(param_1 + 0x378 + (uint64_t)(~(uVar1 >> 1) & 1) * 0x80,stack_array_28,param_3
                          ,param_6);
    iVar2 = (int)uVar4;
  }
  if (iVar2 != 0) {
    return uVar4;
  }
LAB_18085f8b2:
  *(uint *)(lVar3 + 0x1c) = *(uint *)(lVar3 + 0x1c) & ~uVar5;
  return 0;
}
uint64_t NetworkProtocol_5f812(void)
{
  uint in_EAX;
  int iVar1;
  uint64_t uVar2;
  int unaff_ESI;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  char unaff_R15B;
  *(uint *)(unaff_RDI + 0x1c) = in_EAX;
  if ((((in_EAX >> 5 & 1) == 0) || ((in_EAX >> 6 & 1) != 0)) || (unaff_R15B != '\0')) {
    uVar2 = NetworkProtocol_63930();
    iVar1 = (int)uVar2;
  }
  else {
    if ((unaff_ESI << 8 & in_EAX) == 0) goto LAB_18085f8b2;
    (**(code **)(**(int64_t **)(unaff_RDI + 0x10) + 0x30))
              (*(int64_t **)(unaff_RDI + 0x10),&local_buffer_00000030);
    uVar2 = NetworkProtocol_ca4f0(unaff_R12 + 0x378 + (uint64_t)(~(in_EAX >> 1) & 1) * 0x80,
                          &local_buffer_00000030);
    iVar1 = (int)uVar2;
  }
  if (iVar1 != 0) {
    return uVar2;
  }
LAB_18085f8b2:
  *(uint *)(unaff_RDI + 0x1c) = *(uint *)(unaff_RDI + 0x1c) & ~(unaff_ESI << 8);
  return 0;
}