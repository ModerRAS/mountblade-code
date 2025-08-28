/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 05_networking_part050.c - 8 个函数
// 函数: void NetworkProtocol_689a5(void)
void NetworkProtocol_689a5(void)
{
  int iVar1;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  int unaff_ESI;
  int32_t unaff_00000034;
  uint64_t local_buffer_40;
  local_buffer_40 = 0;
  iVar1 = RenderingSystemOptimizer();
  if (((iVar1 == 0) && (-1 < unaff_ESI)) && (unaff_ESI < *(int *)(unaff_RBX + 0x28))) {
    *(uint64_t *)
     (*(int64_t *)(unaff_RBX + 0x20) + 8 +
     (CONCAT44(unaff_00000034,unaff_ESI) + CONCAT44(unaff_00000034,unaff_ESI) * 2) * 8) = unaff_RBP;
  }
// WARNING: Subroutine does not return
  NetworkProtocol_8c790(&local_buffer_00000040);
}
uint64_t NetworkProtocol_689f2(void)
{
  return 0x1e;
}
uint64_t NetworkProtocol_68a00(int64_t *param_1,int param_2)
{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uVar3 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  if ((param_2 <= (int)((*(uint *)((int64_t)param_1 + 0xc) ^ uVar3) - uVar3)) ||
     (uVar2 = NetworkProtocol_68700(param_1,param_2), (int)uVar2 == 0)) {
    iVar1 = (int)param_1[1];
    if (iVar1 < param_2) {
      lVar4 = *param_1 + (int64_t)iVar1 * 0x18;
      if (0 < param_2 - iVar1) {
        uVar5 = (uint64_t)(uint)(param_2 - iVar1);
        do {
          Function_1959e7fa(lVar4);
          lVar4 = lVar4 + 0x18;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    *(int *)(param_1 + 1) = param_2;
    uVar2 = 0;
  }
  return uVar2;
}
uint64_t NetworkProtocol_68a33(int64_t param_1)
{
  int in_EAX;
  int64_t lVar1;
  int unaff_ESI;
  uint64_t uVar2;
  int64_t *unaff_R14;
  lVar1 = *unaff_R14 + param_1 * 8;
  if (0 < unaff_ESI - in_EAX) {
    uVar2 = (uint64_t)(uint)(unaff_ESI - in_EAX);
    do {
      Function_1959e7fa(lVar1);
      lVar1 = lVar1 + 0x18;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(int *)(unaff_R14 + 1) = unaff_ESI;
  return 0;
}
uint64_t NetworkProtocol_68a47(uint64_t param_1,uint param_2)
{
  int64_t unaff_RBX;
  int32_t unaff_ESI;
  uint64_t uVar1;
  int64_t unaff_R14;
  uVar1 = (uint64_t)param_2;
  do {
    Function_1959e7fa(unaff_RBX);
    unaff_RBX = unaff_RBX + 0x18;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  *(int32_t *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}
uint64_t NetworkProtocol_68a67(void)
{
  int32_t unaff_ESI;
  int64_t unaff_R14;
  *(int32_t *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}
uint64_t NetworkProtocol_68a6c(void)
{
  int32_t unaff_ESI;
  int64_t unaff_R14;
  *(int32_t *)(unaff_R14 + 8) = unaff_ESI;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_68a80(char param_1,uint64_t param_2,int64_t *param_3,int64_t *param_4)
void NetworkProtocol_68a80(char param_1,uint64_t param_2,int64_t *param_3,int64_t *param_4)
{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int64_t *plVar11;
  float fVar12;
  int32_t uVar13;
  int8_t stack_array_b8 [32];
  char cStack_98;
  char cStack_97;
  char cStack_96;
  int64_t lStack_90;
  uint64_t local_var_88;
  int64_t *plStack_80;
  int8_t stack_array_78 [40];
  uint64_t local_var_50;
  local_var_50 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  iVar10 = 0;
  cStack_96 = param_1;
  local_var_88 = param_2;
  plStack_80 = param_3;
  do {
    if ((iVar10 < 0) || ((int)plStack_80[1] <= iVar10)) {
LAB_180868ceb:
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_50 ^ (uint64_t)stack_array_b8);
    }
    cVar8 = '\0';
    cVar9 = '\0';
    lStack_90 = *(int64_t *)(*plStack_80 + (int64_t)iVar10 * 8);
    plVar6 = *(int64_t **)(lStack_90 + 0x20);
    fVar1 = *(float *)(lStack_90 + 0x90);
    plVar11 = (int64_t *)(lStack_90 + 0x20);
    if (plVar6 != plVar11) {
LAB_180868b10:
      if ((int)plVar6[8] != 0) break;
      if (plVar6 != (int64_t *)0x0) {
        cStack_98 = (int)plVar6[5] != 0;
        cStack_97 = (int)plVar6[3] != 0;
        cVar9 = cStack_97;
        cVar8 = cStack_98;
        if ((int)plVar6[5] != 0) {
          lVar2 = (**(code **)(*param_4 + 0x260))(param_4,plVar6 + 6,1);
          if (lVar2 == 0) {
// WARNING: Subroutine does not return
            SystemController(plVar6 + 6,stack_array_78);
          }
          lVar4 = plVar6[4];
          lVar3 = (**(code **)(*param_4 + 0x298))(param_4,lVar4,1);
          if (lVar3 == 0) {
// WARNING: Subroutine does not return
            SystemController(lVar4,stack_array_78);
          }
          lVar4 = NetworkProtocol_69a50(param_4,lVar3 + 0x30);
          if (lVar4 != 0) {
            for (uVar7 = *(uint64_t *)(lVar4 + 0x30);
                (*(uint64_t *)(lVar4 + 0x30) <= uVar7 &&
                (uVar7 < *(uint64_t *)(lVar4 + 0x30) + (int64_t)*(int *)(lVar4 + 0x38) * 0x18));
                uVar7 = uVar7 + 0x18) {
              fVar12 = (float)MathSystem_ScaleFactor(lVar2,*(int32_t *)(uVar7 + 4));
              uVar13 = Function_95f8394e(lVar2,fVar12 + fVar1);
              *(int32_t *)(uVar7 + 4) = uVar13;
            }
            puVar5 = (uint64_t *)Function_357ff8fd(param_2,plVar6[4]);
            cVar9 = cStack_97;
            cVar8 = cStack_98;
            if (puVar5 != (uint64_t *)0x0) {
              for (plVar11 = (int64_t *)*puVar5;
                  (param_2 = local_var_88, cVar9 = cStack_97, cVar8 = cStack_98,
                  (int64_t *)*puVar5 <= plVar11 && (plVar11 < (int64_t *)*puVar5 + (int)puVar5[1])
                  ); plVar11 = plVar11 + 1) {
                lVar4 = *plVar11;
                for (uVar7 = *(uint64_t *)(lVar4 + 0x30);
                    (*(uint64_t *)(lVar4 + 0x30) <= uVar7 &&
                    (uVar7 < *(uint64_t *)(lVar4 + 0x30) + (int64_t)*(int *)(lVar4 + 0x38) * 0x18)
                    ); uVar7 = uVar7 + 0x18) {
                  fVar12 = (float)MathSystem_ScaleFactor(lVar2,*(int32_t *)(uVar7 + 4));
                  uVar13 = Function_95f8394e(lVar2,fVar12 + fVar1);
                  *(int32_t *)(uVar7 + 4) = uVar13;
                }
              }
            }
            goto LAB_180868c96;
          }
          goto LAB_180868ceb;
        }
      }
    }
LAB_180868c96:
    if ((cStack_96 != '\0') || ((cVar8 == '\0' && (cVar9 != '\0')))) {
      *(float *)(lStack_90 + 0x90) = fVar1 + fVar1;
    }
    iVar10 = iVar10 + 1;
  } while( true );
  if ((plVar6 == plVar11) || (plVar6 = (int64_t *)*plVar6, plVar6 == plVar11)) goto LAB_180868c96;
  goto LAB_180868b10;
}
uint64_t NetworkProtocol_68d20(code *param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  int iVar2;
  for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_2 + 0xe8))); iVar2 = iVar2 + 1) {
    uVar1 = (*param_1)(*(uint64_t *)(*(int64_t *)(param_2 + 0xe0) + (int64_t)iVar2 * 8),param_3)
    ;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
uint64_t NetworkProtocol_68d80(code *param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  int iVar2;
  for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_2 + 0x1a8))); iVar2 = iVar2 + 1) {
    uVar1 = (*param_1)(*(uint64_t *)(*(int64_t *)(param_2 + 0x1a0) + (int64_t)iVar2 * 8),param_3
                      );
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
uint64_t NetworkProtocol_68de0(code *param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  int iVar2;
  for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_2 + 0x48))); iVar2 = iVar2 + 1) {
    uVar1 = (*param_1)(*(uint64_t *)(*(int64_t *)(param_2 + 0x40) + (int64_t)iVar2 * 8),param_3)
    ;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
uint64_t NetworkProtocol_68e40(code *param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  int iVar2;
  for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_2 + 0x38))); iVar2 = iVar2 + 1) {
    uVar1 = (*param_1)(*(uint64_t *)(*(int64_t *)(param_2 + 0x30) + (int64_t)iVar2 * 8),param_3)
    ;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
uint64_t NetworkProtocol_68ea0(code *param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  int iVar2;
  for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_2 + 0x68))); iVar2 = iVar2 + 1) {
    uVar1 = (*param_1)(*(uint64_t *)(*(int64_t *)(param_2 + 0x60) + (int64_t)iVar2 * 8),param_3)
    ;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
uint64_t NetworkProtocol_68f00(code *param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  int iVar2;
  for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_2 + 0x198))); iVar2 = iVar2 + 1) {
    uVar1 = (*param_1)(*(uint64_t *)(*(int64_t *)(param_2 + 400) + (int64_t)iVar2 * 8),param_3);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
uint64_t NetworkProtocol_68f60(code *param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  int iVar2;
  for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_2 + 0x178))); iVar2 = iVar2 + 1) {
    uVar1 = (*param_1)(*(uint64_t *)(*(int64_t *)(param_2 + 0x170) + (int64_t)iVar2 * 8),param_3
                      );
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
uint64_t NetworkProtocol_68fc0(code *param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  int iVar2;
  for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_2 + 0x58))); iVar2 = iVar2 + 1) {
    uVar1 = (*param_1)(*(uint64_t *)(*(int64_t *)(param_2 + 0x50) + (int64_t)iVar2 * 8),param_3)
    ;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
uint64_t NetworkProtocol_69020(code *param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  int iVar2;
  for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_2 + 0x168))); iVar2 = iVar2 + 1) {
    uVar1 = (*param_1)(*(uint64_t *)(*(int64_t *)(param_2 + 0x160) + (int64_t)iVar2 * 8),param_3
                      );
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
uint64_t NetworkProtocol_69080(code *param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  int iVar2;
  for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_2 + 0xf8))); iVar2 = iVar2 + 1) {
    uVar1 = (*param_1)(*(uint64_t *)(*(int64_t *)(param_2 + 0xf0) + (int64_t)iVar2 * 8),param_3)
    ;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
uint64_t
NetworkProtocol_690e0(code *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4,uint64_t param_5
             )
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint64_t local_var_40;
  int aiStack_38 [4];
  local_var_40 = 0xffffffffffffffff;
  aiStack_38[0] = -1;
  SystemResource_Manager(param_2,&local_var_40,aiStack_38);
  iVar5 = 0;
  if (aiStack_38[0] != -1) {
    iVar6 = aiStack_38[0];
    iVar4 = (int)local_var_40;
    do {
      do {
        lVar3 = *(int64_t *)(param_2[2] + 0x18 + (int64_t)iVar6 * 0x20);
        if ((-1 < *(short *)(lVar3 + 0xe)) &&
           (((param_3 == 0 || (lVar1 = CoreSystem_SynchronizationManager0(param_3 + 0x40,lVar3 + 0x10), lVar1 == 0)) &&
            (uVar2 = (*param_1)(lVar3,param_4,param_5), (int)uVar2 != 0)))) {
          return uVar2;
        }
      } while ((iVar6 != -1) &&
              (iVar6 = *(int *)(param_2[2] + 0x10 + (int64_t)iVar6 * 0x20), iVar6 != -1));
      iVar6 = iVar4 + 1;
      bVar7 = iVar4 != -1;
      iVar4 = 0;
      if (bVar7) {
        iVar4 = iVar6;
      }
      if (iVar4 != (int)param_2[1]) {
        lVar3 = (int64_t)iVar4;
        do {
          if (*(int *)(*param_2 + lVar3 * 4) != -1) {
            iVar6 = *(int *)(*param_2 + (int64_t)iVar4 * 4);
            goto LAB_1808691e9;
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 1;
        } while (lVar3 != (int)param_2[1]);
      }
      iVar6 = -1;
      iVar4 = iVar6;
LAB_1808691e9:
    } while (iVar6 != -1);
  }
  if (param_3 != 0) {
    for (; (-1 < iVar5 && (iVar5 < *(int *)(param_3 + 0x48))); iVar5 = iVar5 + 1) {
      lVar3 = *(int64_t *)(*(int64_t *)(param_3 + 0x40) + (int64_t)iVar5 * 8);
      if ((-1 < *(short *)(lVar3 + 0xe)) &&
         (uVar2 = (*param_1)(lVar3,param_4,param_5), (int)uVar2 != 0)) {
        return uVar2;
      }
    }
  }
  return 0;
}
uint64_t
NetworkProtocol_69270(code *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4,uint64_t param_5
             )
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint64_t local_var_40;
  int aiStack_38 [4];
  local_var_40 = 0xffffffffffffffff;
  aiStack_38[0] = -1;
  SystemResource_Manager(param_2,&local_var_40,aiStack_38);
  iVar5 = 0;
  if (aiStack_38[0] != -1) {
    iVar6 = aiStack_38[0];
    iVar4 = (int)local_var_40;
    do {
      do {
        lVar3 = *(int64_t *)(param_2[2] + 0x18 + (int64_t)iVar6 * 0x20);
        if ((-1 < *(short *)(lVar3 + 0xe)) &&
           (((param_3 == 0 || (lVar1 = CoreSystem_SynchronizationManager0(param_3 + 0x30,lVar3 + 0x10), lVar1 == 0)) &&
            (uVar2 = (*param_1)(lVar3,param_4,param_5), (int)uVar2 != 0)))) {
          return uVar2;
        }
      } while ((iVar6 != -1) &&
              (iVar6 = *(int *)(param_2[2] + 0x10 + (int64_t)iVar6 * 0x20), iVar6 != -1));
      iVar6 = iVar4 + 1;
      bVar7 = iVar4 != -1;
      iVar4 = 0;
      if (bVar7) {
        iVar4 = iVar6;
      }
      if (iVar4 != (int)param_2[1]) {
        lVar3 = (int64_t)iVar4;
        do {
          if (*(int *)(*param_2 + lVar3 * 4) != -1) {
            iVar6 = *(int *)(*param_2 + (int64_t)iVar4 * 4);
            goto LAB_180869379;
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 1;
        } while (lVar3 != (int)param_2[1]);
      }
      iVar6 = -1;
      iVar4 = iVar6;
LAB_180869379:
    } while (iVar6 != -1);
  }
  if (param_3 != 0) {
    for (; (-1 < iVar5 && (iVar5 < *(int *)(param_3 + 0x38))); iVar5 = iVar5 + 1) {
      lVar3 = *(int64_t *)(*(int64_t *)(param_3 + 0x30) + (int64_t)iVar5 * 8);
      if ((-1 < *(short *)(lVar3 + 0xe)) &&
         (uVar2 = (*param_1)(lVar3,param_4,param_5), (int)uVar2 != 0)) {
        return uVar2;
      }
    }
  }
  return 0;
}
uint64_t
NetworkProtocol_69400(code *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4,uint64_t param_5
             )
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint64_t local_var_40;
  int aiStack_38 [4];
  local_var_40 = 0xffffffffffffffff;
  aiStack_38[0] = -1;
  SystemResource_Manager(param_2,&local_var_40,aiStack_38);
  iVar5 = 0;
  if (aiStack_38[0] != -1) {
    iVar6 = aiStack_38[0];
    iVar4 = (int)local_var_40;
    do {
      do {
        lVar3 = *(int64_t *)(param_2[2] + 0x18 + (int64_t)iVar6 * 0x20);
        if ((-1 < *(short *)(lVar3 + 0xe)) &&
           (((param_3 == 0 || (lVar1 = CoreSystem_SynchronizationManager0(param_3 + 0x60,lVar3 + 0x10), lVar1 == 0)) &&
            (uVar2 = (*param_1)(lVar3,param_4,param_5), (int)uVar2 != 0)))) {
          return uVar2;
        }
      } while ((iVar6 != -1) &&
              (iVar6 = *(int *)(param_2[2] + 0x10 + (int64_t)iVar6 * 0x20), iVar6 != -1));
      iVar6 = iVar4 + 1;
      bVar7 = iVar4 != -1;
      iVar4 = 0;
      if (bVar7) {
        iVar4 = iVar6;
      }
      if (iVar4 != (int)param_2[1]) {
        lVar3 = (int64_t)iVar4;
        do {
          if (*(int *)(*param_2 + lVar3 * 4) != -1) {
            iVar6 = *(int *)(*param_2 + (int64_t)iVar4 * 4);
            goto LAB_180869509;
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 1;
        } while (lVar3 != (int)param_2[1]);
      }
      iVar6 = -1;
      iVar4 = iVar6;
LAB_180869509:
    } while (iVar6 != -1);
  }
  if (param_3 != 0) {
    for (; (-1 < iVar5 && (iVar5 < *(int *)(param_3 + 0x68))); iVar5 = iVar5 + 1) {
      lVar3 = *(int64_t *)(*(int64_t *)(param_3 + 0x60) + (int64_t)iVar5 * 8);
      if ((-1 < *(short *)(lVar3 + 0xe)) &&
         (uVar2 = (*param_1)(lVar3,param_4,param_5), (int)uVar2 != 0)) {
        return uVar2;
      }
    }
  }
  return 0;
}
uint64_t
NetworkProtocol_69590(code *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4,uint64_t param_5
             )
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint64_t local_var_40;
  int aiStack_38 [4];
  local_var_40 = 0xffffffffffffffff;
  aiStack_38[0] = -1;
  SystemResource_Manager(param_2,&local_var_40,aiStack_38);
  iVar5 = 0;
  if (aiStack_38[0] != -1) {
    iVar6 = aiStack_38[0];
    iVar4 = (int)local_var_40;
    do {
      do {
        lVar3 = *(int64_t *)(param_2[2] + 0x18 + (int64_t)iVar6 * 0x20);
        if ((-1 < *(short *)(lVar3 + 0xe)) &&
           (((param_3 == 0 || (lVar1 = CoreSystem_SynchronizationManager0(param_3 + 0x70,lVar3 + 0x10), lVar1 == 0)) &&
            (uVar2 = (*param_1)(lVar3,param_4,param_5), (int)uVar2 != 0)))) {
          return uVar2;
        }
      } while ((iVar6 != -1) &&
              (iVar6 = *(int *)(param_2[2] + 0x10 + (int64_t)iVar6 * 0x20), iVar6 != -1));
      iVar6 = iVar4 + 1;
      bVar7 = iVar4 != -1;
      iVar4 = 0;
      if (bVar7) {
        iVar4 = iVar6;
      }
      if (iVar4 != (int)param_2[1]) {
        lVar3 = (int64_t)iVar4;
        do {
          if (*(int *)(*param_2 + lVar3 * 4) != -1) {
            iVar6 = *(int *)(*param_2 + (int64_t)iVar4 * 4);
            goto LAB_180869699;
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 1;
        } while (lVar3 != (int)param_2[1]);
      }
      iVar6 = -1;
      iVar4 = iVar6;
LAB_180869699:
    } while (iVar6 != -1);
  }
  if (param_3 != 0) {
    for (; (-1 < iVar5 && (iVar5 < *(int *)(param_3 + 0x78))); iVar5 = iVar5 + 1) {
      lVar3 = *(int64_t *)(*(int64_t *)(param_3 + 0x70) + (int64_t)iVar5 * 8);
      if ((-1 < *(short *)(lVar3 + 0xe)) &&
         (uVar2 = (*param_1)(lVar3,param_4,param_5), (int)uVar2 != 0)) {
        return uVar2;
      }
    }
  }
  return 0;
}
uint64_t
NetworkProtocol_69720(code *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4,uint64_t param_5
             )
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint64_t local_var_40;
  int aiStack_38 [4];
  local_var_40 = 0xffffffffffffffff;
  aiStack_38[0] = -1;
  SystemResource_Manager(param_2,&local_var_40,aiStack_38);
  iVar5 = 0;
  if (aiStack_38[0] != -1) {
    iVar6 = aiStack_38[0];
    iVar4 = (int)local_var_40;
    do {
      do {
        lVar3 = *(int64_t *)(param_2[2] + 0x18 + (int64_t)iVar6 * 0x20);
        if ((-1 < *(short *)(lVar3 + 0xe)) &&
           (((param_3 == 0 || (lVar1 = CoreSystem_SynchronizationManager0(param_3 + 0x50,lVar3 + 0x10), lVar1 == 0)) &&
            (uVar2 = (*param_1)(lVar3,param_4,param_5), (int)uVar2 != 0)))) {
          return uVar2;
        }
      } while ((iVar6 != -1) &&
              (iVar6 = *(int *)(param_2[2] + 0x10 + (int64_t)iVar6 * 0x20), iVar6 != -1));
      iVar6 = iVar4 + 1;
      bVar7 = iVar4 != -1;
      iVar4 = 0;
      if (bVar7) {
        iVar4 = iVar6;
      }
      if (iVar4 != (int)param_2[1]) {
        lVar3 = (int64_t)iVar4;
        do {
          if (*(int *)(*param_2 + lVar3 * 4) != -1) {
            iVar6 = *(int *)(*param_2 + (int64_t)iVar4 * 4);
            goto LAB_180869829;
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 1;
        } while (lVar3 != (int)param_2[1]);
      }
      iVar6 = -1;
      iVar4 = iVar6;
LAB_180869829:
    } while (iVar6 != -1);
  }
  if (param_3 != 0) {
    for (; (-1 < iVar5 && (iVar5 < *(int *)(param_3 + 0x58))); iVar5 = iVar5 + 1) {
      lVar3 = *(int64_t *)(*(int64_t *)(param_3 + 0x50) + (int64_t)iVar5 * 8);
      if ((-1 < *(short *)(lVar3 + 0xe)) &&
         (uVar2 = (*param_1)(lVar3,param_4,param_5), (int)uVar2 != 0)) {
        return uVar2;
      }
    }
  }
  return 0;
}
uint64_t
NetworkProtocol_698b0(code *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4,uint64_t param_5
             )
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint64_t local_var_40;
  int aiStack_38 [4];
  local_var_40 = 0xffffffffffffffff;
  aiStack_38[0] = -1;
  SystemResource_Manager(param_2,&local_var_40,aiStack_38);
  iVar5 = 0;
  if (aiStack_38[0] != -1) {
    iVar6 = aiStack_38[0];
    iVar4 = (int)local_var_40;
    do {
      do {
        lVar3 = *(int64_t *)(param_2[2] + 0x18 + (int64_t)iVar6 * 0x20);
        if ((-1 < *(short *)(lVar3 + 0xe)) &&
           (((param_3 == 0 || (lVar1 = CoreSystem_SynchronizationManager0(param_3 + 0xc0,lVar3 + 0x10), lVar1 == 0)) &&
            (uVar2 = (*param_1)(lVar3,param_4,param_5), (int)uVar2 != 0)))) {
          return uVar2;
        }
      } while ((iVar6 != -1) &&
              (iVar6 = *(int *)(param_2[2] + 0x10 + (int64_t)iVar6 * 0x20), iVar6 != -1));
      iVar6 = iVar4 + 1;
      bVar7 = iVar4 != -1;
      iVar4 = 0;
      if (bVar7) {
        iVar4 = iVar6;
      }
      if (iVar4 != (int)param_2[1]) {
        lVar3 = (int64_t)iVar4;
        do {
          if (*(int *)(*param_2 + lVar3 * 4) != -1) {
            iVar6 = *(int *)(*param_2 + (int64_t)iVar4 * 4);
            goto LAB_1808699bc;
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 1;
        } while (lVar3 != (int)param_2[1]);
      }
      iVar6 = -1;
      iVar4 = iVar6;
LAB_1808699bc:
    } while (iVar6 != -1);
  }
  if (param_3 != 0) {
    for (; (-1 < iVar5 && (iVar5 < *(int *)(param_3 + 200))); iVar5 = iVar5 + 1) {
      lVar3 = *(int64_t *)(*(int64_t *)(param_3 + 0xc0) + (int64_t)iVar5 * 8);
      if ((-1 < *(short *)(lVar3 + 0xe)) &&
         (uVar2 = (*param_1)(lVar3,param_4,param_5), (int)uVar2 != 0)) {
        return uVar2;
      }
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_69a50(int64_t *param_1,uint64_t param_2)
void NetworkProtocol_69a50(int64_t *param_1,uint64_t param_2)
{
  int64_t lVar1;
  int8_t stack_array_58 [32];
  int8_t stack_array_38 [40];
  uint64_t local_var_10;
  local_var_10 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_58;
  lVar1 = (**(code **)(*param_1 + 0x268))(param_1,param_2,1);
  if (lVar1 == 0) {
// WARNING: Subroutine does not return
    SystemController(param_2,stack_array_38);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_10 ^ (uint64_t)stack_array_58);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_69ab0(int64_t *param_1,uint64_t param_2)
void NetworkProtocol_69ab0(int64_t *param_1,uint64_t param_2)
{
  int64_t lVar1;
  int8_t stack_array_58 [32];
  int8_t stack_array_38 [40];
  uint64_t local_var_10;
  local_var_10 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_58;
  lVar1 = (**(code **)(*param_1 + 0x260))(param_1,param_2,1);
  if (lVar1 == 0) {
// WARNING: Subroutine does not return
    SystemController(param_2,stack_array_38);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_10 ^ (uint64_t)stack_array_58);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_69b10(int64_t param_1,uint64_t *param_2)
void NetworkProtocol_69b10(int64_t param_1,uint64_t *param_2)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int8_t stack_array_98 [32];
  uint64_t *plocal_var_78;
  int8_t stack_array_70 [40];
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_98;
  plocal_var_78 = param_2;
  lVar3 = (**(code **)(*(int64_t *)*param_2 + 0x70))((int64_t *)*param_2,0);
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar6 = *(int *)(param_1 + 0x148);
    if (0 < iVar6) {
      lVar3 = 0;
      do {
        lVar1 = *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x140));
        if (lVar1 == 0) {
LAB_180869c7a:
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            iVar2 = (iVar6 - iVar5) + -1;
            if (0 < iVar2) {
              lVar3 = *(int64_t *)(param_1 + 0x140) + (int64_t)iVar5 * 8;
// WARNING: Subroutine does not return
              memmove(lVar3,lVar3 + 8,(int64_t)iVar2 << 3);
            }
            iVar6 = iVar6 + -1;
            *(int *)(param_1 + 0x148) = iVar6;
          }
        }
        else {
          lVar1 = lVar1 + 0x10;
          lVar4 = (**(code **)(*(int64_t *)*param_2 + 0x2a0))((int64_t *)*param_2,lVar1,1);
          if (lVar4 == 0) {
// WARNING: Subroutine does not return
            SystemController(lVar1,stack_array_70);
          }
          iVar6 = *(int *)(param_1 + 0x148);
          if (lVar4 == 0) goto LAB_180869c7a;
          if ((-1 < iVar5) && (iVar5 < iVar6)) {
            if (iVar5 != 0) {
              iVar2 = memcmp(*(int64_t *)(lVar3 + -8 + *(int64_t *)(param_1 + 0x140)) + 0x10,
                             lVar4 + 0x10,0x10);
              if (-1 < iVar2) goto LAB_180869c72;
            }
            if (iVar5 == iVar6 + -1) {
LAB_180869c61:
              *(int64_t *)(lVar3 + *(int64_t *)(param_1 + 0x140)) = lVar4;
              iVar6 = *(int *)(param_1 + 0x148);
            }
            else {
              lVar1 = *(int64_t *)(lVar3 + 8 + *(int64_t *)(param_1 + 0x140));
              iVar2 = memcmp(lVar1 + 0x10,lVar4 + 0x10,0x10);
              if (-1 < iVar2) {
                iVar2 = memcmp(lVar4 + 0x10,lVar1 + 0x10,0x10);
                if (iVar2 < 0) goto LAB_180869c61;
              }
            }
          }
LAB_180869c72:
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        }
        param_2 = plocal_var_78;
      } while (iVar5 < iVar6);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_98);
}
// 函数: void NetworkProtocol_69b4f(void)
void NetworkProtocol_69b4f(void)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int iVar4;
  int iVar5;
  uint64_t *unaff_R14;
  int64_t lVar6;
  uint64_t *pstack_special_x_20;
  uint64_t local_buffer_50;
  iVar4 = 0;
  iVar5 = *(int *)(unaff_RBP + 0x148);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x140));
      if (lVar1 == 0) {
LAB_180869c7a:
        if ((-1 < iVar4) && (iVar4 < iVar5)) {
          iVar2 = (iVar5 - iVar4) + -1;
          if (0 < iVar2) {
            lVar6 = *(int64_t *)(unaff_RBP + 0x140) + (int64_t)iVar4 * 8;
// WARNING: Subroutine does not return
            memmove(lVar6,lVar6 + 8,(int64_t)iVar2 << 3);
          }
          iVar5 = iVar5 + -1;
          *(int *)(unaff_RBP + 0x148) = iVar5;
        }
      }
      else {
        lVar1 = lVar1 + 0x10;
        lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x2a0))((int64_t *)*unaff_R14,lVar1,1);
        if (lVar3 == 0) {
// WARNING: Subroutine does not return
          SystemController(lVar1,&local_buffer_00000028);
        }
        iVar5 = *(int *)(unaff_RBP + 0x148);
        if (lVar3 == 0) goto LAB_180869c7a;
        if (((-1 < iVar4) && (iVar4 < iVar5)) &&
           ((iVar4 == 0 ||
            (iVar2 = memcmp(*(int64_t *)(lVar6 + -8 + *(int64_t *)(unaff_RBP + 0x140)) + 0x10,
                            lVar3 + 0x10,0x10), iVar2 < 0)))) {
          if (iVar4 != iVar5 + -1) {
            lVar1 = *(int64_t *)(lVar6 + 8 + *(int64_t *)(unaff_RBP + 0x140));
            iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
            if ((iVar2 < 0) || (iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10), -1 < iVar2))
            goto LAB_180869c72;
          }
          *(int64_t *)(lVar6 + *(int64_t *)(unaff_RBP + 0x140)) = lVar3;
          iVar5 = *(int *)(unaff_RBP + 0x148);
        }
LAB_180869c72:
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 8;
      }
      unaff_R14 = pstack_special_x_20;
    } while (iVar4 < iVar5);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkProtocol_69b6c(void)
void NetworkProtocol_69b6c(void)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *unaff_R14;
  int64_t lVar4;
  uint64_t *pstack_special_x_20;
  uint64_t local_buffer_50;
  lVar4 = 0;
  do {
    lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x140));
    if (lVar1 == 0) {
LAB_180869c7a:
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        iVar2 = (unaff_EDI - unaff_ESI) + -1;
        if (0 < iVar2) {
          lVar4 = *(int64_t *)(unaff_RBP + 0x140) + (int64_t)unaff_ESI * 8;
// WARNING: Subroutine does not return
          memmove(lVar4,lVar4 + 8,(int64_t)iVar2 << 3);
        }
        unaff_EDI = unaff_EDI + -1;
        *(int *)(unaff_RBP + 0x148) = unaff_EDI;
      }
    }
    else {
      lVar1 = lVar1 + 0x10;
      lVar3 = (**(code **)(*(int64_t *)*unaff_R14 + 0x2a0))((int64_t *)*unaff_R14,lVar1,1);
      if (lVar3 == 0) {
// WARNING: Subroutine does not return
        SystemController(lVar1,&local_buffer_00000028);
      }
      unaff_EDI = *(int *)(unaff_RBP + 0x148);
      if (lVar3 == 0) goto LAB_180869c7a;
      if ((-1 < unaff_ESI) && (unaff_ESI < unaff_EDI)) {
        if (unaff_ESI != 0) {
          iVar2 = memcmp(*(int64_t *)(lVar4 + -8 + *(int64_t *)(unaff_RBP + 0x140)) + 0x10,
                         lVar3 + 0x10,0x10);
          if (-1 < iVar2) goto LAB_180869c72;
        }
        if (unaff_ESI == unaff_EDI + -1) {
LAB_180869c61:
          *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x140)) = lVar3;
          unaff_EDI = *(int *)(unaff_RBP + 0x148);
        }
        else {
          lVar1 = *(int64_t *)(lVar4 + 8 + *(int64_t *)(unaff_RBP + 0x140));
          iVar2 = memcmp(lVar1 + 0x10,lVar3 + 0x10,0x10);
          if (-1 < iVar2) {
            iVar2 = memcmp(lVar3 + 0x10,lVar1 + 0x10,0x10);
            if (iVar2 < 0) goto LAB_180869c61;
          }
        }
      }
LAB_180869c72:
      unaff_ESI = unaff_ESI + 1;
      lVar4 = lVar4 + 8;
    }
    unaff_R14 = pstack_special_x_20;
    if (unaff_EDI <= unaff_ESI) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
    }
  } while( true );
}
// 函数: void NetworkProtocol_69cdf(void)
void NetworkProtocol_69cdf(void)
{
  uint64_t local_buffer_50;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}