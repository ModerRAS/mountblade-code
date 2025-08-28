#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part263.c - 2 个函数

// 函数: void FUN_1808184db(void)
void FUN_1808184db(void)

{
  return;
}



ulonglong FUN_1808184f0(uint64_t param_1,longlong *param_2,longlong param_3)

{
  int32_t uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong lStackX_20;
  longlong lStack_b8;
  ulonglong uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  longlong lStack_88;
  int8_t auStack_80 [32];
  int8_t auStack_60 [24];
  longlong lStack_48;
  
  lVar6 = param_2[0x10];
  uVar11 = 0;
  if ((((int)lVar6 < 2) || ((int)param_2[1] == 0)) || (iVar8 = (int)param_2[8], iVar8 < 0)) {
    uVar14 = 0xffffffffffffff7d;
  }
  else {
    uVar14 = uVar11;
    if (0 < iVar8) {
      do {
        lVar4 = FUN_180818bd0(param_2,uVar11);
        uVar14 = uVar14 + lVar4;
        uVar12 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar12;
      } while ((int)uVar12 < iVar8);
    }
  }
  if (1 < (int)lVar6) {
    if ((int)param_2[1] == 0) {
      return 0xffffff76;
    }
    if ((-1 < param_3) && (param_3 <= (longlong)uVar14)) {
      iVar8 = (int)param_2[8] + -1;
      if (-1 < iVar8) {
        lVar6 = (longlong)iVar8;
        plVar13 = (longlong *)(param_2[0xc] + 8 + lVar6 * 0x10);
        do {
          uVar14 = uVar14 - *plVar13;
          if ((longlong)uVar14 <= param_3) break;
          iVar8 = iVar8 + -1;
          plVar13 = plVar13 + -2;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      lStack_88 = (longlong)iVar8;
      uVar11 = *(ulonglong *)(param_2[9] + lStack_88 * 8);
      uVar7 = *(ulonglong *)(param_2[9] + 8 + lStack_88 * 8);
      lStackX_20 = *(longlong *)(param_2[0xc] + (longlong)(iVar8 * 2) * 8);
      lStack_b8 = *(longlong *)(param_2[0xc] + 8 + (longlong)(iVar8 * 2) * 8) + lStackX_20;
      lVar6 = (lStackX_20 - uVar14) + param_3;
      uStack_b0 = uVar11;
      if ((longlong)uVar11 < (longlong)uVar7) {
        do {
          uVar5 = 0;
          uVar9 = uVar11;
          if ((0x2133 < (longlong)(uVar7 - uVar11)) &&
             (uVar9 = (longlong)
                      (((float)(lVar6 - lStackX_20) * (float)(longlong)(uVar7 - uVar11)) /
                      (float)(lStack_b8 - lStackX_20)) + -0x2134 + uVar11,
             (longlong)uVar9 <= (longlong)uVar11)) {
            uVar9 = uVar11 + 1;
          }
          if (*param_2 == 0) {
            uVar5 = 0xffffffffffffff7f;
          }
          else {
            if (((code *)param_2[99] == (code *)0x0) ||
               (iVar3 = (*(code *)param_2[99])(*param_2,uVar9,0), iVar3 == -1)) goto LAB_180818b6f;
            param_2[2] = uVar9;
            func_0x0001808301d0(param_2 + 4);
          }
          if (uVar5 != 0) goto LAB_180818b76;
LAB_1808186d0:
          uVar5 = FUN_18081a120(param_1,param_2,auStack_80,uVar7 - param_2[2]);
          if (uVar5 == 0xffffffffffffff80) goto LAB_180818b76;
          if ((longlong)uVar5 < 0) {
            if ((longlong)uVar9 <= (longlong)(uVar11 + 1)) break;
            if (uVar9 == 0) goto LAB_180818b76;
            uVar10 = uVar11 + 1;
            if ((longlong)uVar11 < (longlong)(uVar9 - 0x2134)) {
              uVar10 = uVar9 - 0x2134;
            }
            if (*param_2 == 0) {
              bVar15 = false;
              uVar9 = 0xffffffffffffff7f;
            }
            else {
              if (((code *)param_2[99] == (code *)0x0) ||
                 (iVar3 = (*(code *)param_2[99])(*param_2,uVar10,0), iVar3 == -1))
              goto LAB_180818b6f;
              param_2[2] = uVar10;
              func_0x0001808301d0(param_2 + 4);
              bVar15 = true;
              uVar9 = 0;
            }
LAB_180818801:
            uVar5 = uVar9;
            uVar9 = uVar10;
            if (!bVar15) goto LAB_180818b76;
LAB_180818807:
            if ((longlong)uVar7 <= (longlong)uVar11) break;
            goto LAB_1808186d0;
          }
          iVar3 = func_0x00018082f880(auStack_80);
          if ((iVar3 != *(int *)(param_2[0xb] + lStack_88 * 4)) ||
             (lVar4 = func_0x00018082f820(auStack_80), lVar4 == -1)) goto LAB_180818807;
          if (lVar4 < lVar6) {
            uVar11 = param_2[2];
            uVar9 = uVar11;
            lStackX_20 = lVar4;
            lVar2 = lStack_b8;
            uStack_b0 = uVar5;
            if (0xac44 < lVar6 - lVar4) goto LAB_1808188ac;
            goto LAB_180818807;
          }
          if ((longlong)uVar9 <= (longlong)(uVar11 + 1)) break;
          bVar15 = uVar7 == param_2[2];
          uVar7 = uVar9;
          lVar2 = lVar4;
          if (bVar15) {
            uVar10 = uVar11 + 1;
            if ((longlong)uVar11 < (longlong)(uVar9 - 0x2134)) {
              uVar10 = uVar9 - 0x2134;
            }
            iVar3 = FUN_18081a6e0(param_2,uVar10);
            bVar15 = iVar3 == 0;
            uVar9 = (longlong)iVar3;
            uVar7 = uVar5;
            goto LAB_180818801;
          }
LAB_1808188ac:
          lStack_b8 = lVar2;
        } while ((longlong)uVar11 < (longlong)uVar7);
      }
      iVar3 = FUN_18081a6e0(param_2,uStack_b0);
      uVar5 = (ulonglong)iVar3;
      param_2[0xf] = -1;
      if ((iVar3 == 0) &&
         (uVar5 = FUN_18081a120(param_1,param_2,&uStack_a8,0xffffffffffffffff), -1 < (longlong)uVar5
         )) {
        if (iVar8 == (int)param_2[0x11]) {
          func_0x0001808311f0(param_2 + 0x42);
          uVar1 = *(int32_t *)((longlong)param_2 + 0x84);
        }
        else {
          FUN_180819940(param_1,param_2);
          *(int *)(param_2 + 0x11) = iVar8;
          uVar1 = *(int32_t *)(param_2[0xb] + (longlong)iVar8 * 4);
          *(int32_t *)((longlong)param_2 + 0x84) = uVar1;
          *(int32_t *)(param_2 + 0x10) = 3;
        }
        func_0x00018082fe60(param_2 + 0x13,uVar1);
        FUN_18082fa20(param_1,param_2 + 0x13,&uStack_a8);
        iVar8 = func_0x00018082fa00(param_2 + 0x13,auStack_60);
        while (iVar8 != 0) {
          if (iVar8 < 0) {
            uVar5 = 0xffffffffffffff78;
            goto LAB_180818b76;
          }
          if (lStack_48 != -1) {
            lStack_48 = lStack_48 -
                        *(longlong *)(param_2[0xc] + (longlong)((int)param_2[0x11] * 2) * 8);
            if (lStack_48 < 0) {
              lStack_48 = 0;
            }
            param_2[0xf] = lStack_48 + uVar14;
            if (((longlong)(lStack_48 + uVar14) <= param_3) &&
               (lVar6 = FUN_180818bd0(param_2,0xffffffff), param_3 <= lVar6)) {
              *(uint64_t *)((longlong)param_2 + 0x8c) = 0;
              return 0;
            }
            goto LAB_180818b53;
          }
          func_0x00018082f9e0(param_2 + 0x13,0);
          iVar8 = func_0x00018082fa00(param_2 + 0x13,auStack_60);
        }
        iVar8 = FUN_18081a6e0(param_2,uStack_b0);
        uVar5 = (ulonglong)iVar8;
        if (-1 < iVar8) {
          uVar5 = param_2[2];
          while (uVar11 = 0xffffffffffffffff, uVar14 = uVar5, uVar5 != 0) {
            do {
              uVar7 = 0;
              if (-1 < (longlong)(uVar14 - 0x2134)) {
                uVar7 = uVar14 - 0x2134;
              }
              if (*param_2 == 0) {
                uVar5 = 0xffffffffffffff7f;
                goto LAB_180818b0c;
              }
              if (((code *)param_2[99] == (code *)0x0) ||
                 (iVar8 = (*(code *)param_2[99])(*param_2,uVar7,0), iVar8 == -1)) {
                uVar5 = 0xffffffffffffff80;
                goto LAB_180818b0c;
              }
              param_2[2] = uVar7;
              func_0x0001808301d0();
              lVar6 = param_2[2];
              while (lVar6 < (longlong)uVar5) {
                uStack_a8 = 0;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                uVar14 = FUN_18081a120(param_1,param_2,&uStack_a8,uVar5 - lVar6);
                if (uVar14 == 0xffffffffffffff80) goto LAB_180818b6f;
                if (uVar14 == 0xffffffffffffff75) {
                  uVar5 = 0xffffffffffffff75;
                  goto LAB_180818b76;
                }
                if ((longlong)uVar14 < 0) break;
                uVar11 = uVar14;
                lVar6 = param_2[2];
              }
              uVar14 = uVar7;
            } while (uVar11 == 0xffffffffffffffff);
            uVar5 = uVar11;
            if ((int)uStack_a0 == 0) {
              iVar8 = FUN_18081a6e0(param_2,uVar11);
              uVar5 = (longlong)iVar8;
              if ((iVar8 == 0) &&
                 (lVar6 = FUN_18081a120(param_1,param_2,&uStack_a8,0x2134), uVar5 = uVar11,
                 lVar6 < 0)) goto LAB_180818b53;
            }
LAB_180818b0c:
            if ((longlong)uVar5 < 0) goto LAB_180818b76;
            iVar8 = func_0x00018082f880(&uStack_a8);
            if ((iVar8 == *(int *)((longlong)param_2 + 0x84)) &&
               ((uVar11 = func_0x00018082f820(&uStack_a8), uVar11 < 0x8000000000000000 ||
                (iVar8 = func_0x00018082f800(&uStack_a8), iVar8 == 0)))) {
              uVar11 = FUN_180818c50(param_1,param_2,uVar5);
              return uVar11;
            }
            param_2[2] = uVar5;
          }
LAB_180818b6f:
          uVar5 = 0xffffffffffffff80;
        }
      }
      goto LAB_180818b76;
    }
  }
  return 0xffffff7d;
LAB_180818b53:
  uVar5 = 0xffffffffffffff7f;
LAB_180818b76:
  param_2[0xf] = -1;
  FUN_180830440(param_1,param_2 + 0x42);
  FUN_180830310(param_1,param_2 + 0x51);
  *(int32_t *)(param_2 + 0x10) = 2;
  return uVar5 & 0xffffffff;
}



ulonglong FUN_180818592(float param_1,uint64_t param_2,uint64_t param_3,longlong param_4,
                       uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                       uint64_t param_9)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *unaff_RBX;
  int unaff_ESI;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong unaff_RDI;
  longlong *plVar9;
  longlong unaff_R15;
  bool bVar10;
  bool in_SF;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  int32_t uVar11;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float extraout_XMM0_Da_13;
  float extraout_XMM0_Da_14;
  float extraout_XMM0_Da_15;
  float extraout_XMM0_Da_16;
  longlong lStackX_20;
  longlong lStack0000000000000050;
  longlong in_stack_00000090;
  int iStack00000000000000e8;
  longlong in_stack_000000f0;
  longlong lStack00000000000000f8;
  
  iStack00000000000000e8 = unaff_ESI;
  if (!in_SF) {
    lVar5 = (longlong)unaff_ESI;
    plVar9 = (longlong *)(unaff_RBX[0xc] + 8 + lVar5 * 0x10);
    do {
      unaff_R15 = unaff_R15 - *plVar9;
      iStack00000000000000e8 = unaff_ESI;
      if (unaff_R15 <= param_4) break;
      unaff_ESI = unaff_ESI + -1;
      plVar9 = plVar9 + -2;
      lVar5 = lVar5 + -1;
      iStack00000000000000e8 = unaff_ESI;
    } while (-1 < lVar5);
  }
  lStack0000000000000050 = (longlong)iStack00000000000000e8;
  uVar4 = *(ulonglong *)(unaff_RBX[9] + lStack0000000000000050 * 8);
  uVar8 = *(ulonglong *)(unaff_RBX[9] + 8 + lStack0000000000000050 * 8);
  lStack00000000000000f8 =
       *(longlong *)(unaff_RBX[0xc] + (longlong)(iStack00000000000000e8 * 2) * 8);
  lStackX_20 = *(longlong *)(unaff_RBX[0xc] + 8 + (longlong)(iStack00000000000000e8 * 2) * 8) +
               lStack00000000000000f8;
  param_4 = (lStack00000000000000f8 - unaff_R15) + param_4;
  param_5 = uVar4;
  if ((longlong)uVar4 < (longlong)uVar8) {
    do {
      uVar6 = uVar4;
      if (0x2133 < (longlong)(uVar8 - uVar4)) {
        param_1 = (float)(lStackX_20 - lStack00000000000000f8);
        uVar6 = (longlong)
                (((float)(param_4 - lStack00000000000000f8) * (float)(longlong)(uVar8 - uVar4)) /
                param_1) + -0x2134 + uVar4;
        if ((longlong)uVar6 <= (longlong)uVar4) {
          uVar6 = uVar4 + 1;
        }
      }
      if (*unaff_RBX == 0) {
        unaff_RDI = 0xffffffffffffff7f;
      }
      else {
        if (((code *)unaff_RBX[99] == (code *)0x0) ||
           (iVar2 = (*(code *)unaff_RBX[99])(*unaff_RBX,uVar6,0), param_1 = extraout_XMM0_Da,
           iVar2 == -1)) goto LAB_180818b6f;
        unaff_RBX[2] = uVar6;
        param_1 = (float)func_0x0001808301d0(unaff_RBX + 4);
      }
      if (unaff_RDI != 0) goto LAB_180818b76;
LAB_1808186d0:
      unaff_RDI = FUN_18081a120();
      param_1 = extraout_XMM0_Da_00;
      if (unaff_RDI == 0xffffffffffffff80) goto LAB_180818b76;
      if ((longlong)unaff_RDI < 0) {
        if ((longlong)uVar6 <= (longlong)(uVar4 + 1)) break;
        if (uVar6 == 0) goto LAB_180818b76;
        uVar7 = uVar4 + 1;
        if ((longlong)uVar4 < (longlong)(uVar6 - 0x2134)) {
          uVar7 = uVar6 - 0x2134;
        }
        if (*unaff_RBX == 0) {
          bVar10 = false;
          uVar6 = 0xffffffffffffff7f;
        }
        else {
          if (((code *)unaff_RBX[99] == (code *)0x0) ||
             (iVar2 = (*(code *)unaff_RBX[99])(*unaff_RBX,uVar7,0), param_1 = extraout_XMM0_Da_01,
             iVar2 == -1)) goto LAB_180818b6f;
          unaff_RBX[2] = uVar7;
          param_1 = (float)func_0x0001808301d0(unaff_RBX + 4);
          bVar10 = true;
          uVar6 = 0;
        }
LAB_180818801:
        unaff_RDI = uVar6;
        uVar6 = uVar7;
        if (!bVar10) goto LAB_180818b76;
LAB_180818807:
        if ((longlong)uVar8 <= (longlong)uVar4) break;
        goto LAB_1808186d0;
      }
      iVar2 = func_0x00018082f880(&stack0x00000058);
      param_1 = extraout_XMM0_Da_02;
      if ((iVar2 != *(int *)(unaff_RBX[0xb] + lStack0000000000000050 * 4)) ||
         (lVar5 = func_0x00018082f820(&stack0x00000058), param_1 = extraout_XMM0_Da_03, lVar5 == -1)
         ) goto LAB_180818807;
      if (lVar5 < param_4) {
        uVar4 = unaff_RBX[2];
        uVar6 = uVar4;
        lVar1 = lStackX_20;
        param_5 = unaff_RDI;
        lStack00000000000000f8 = lVar5;
        if (0xac44 < param_4 - lVar5) goto LAB_1808188ac;
        goto LAB_180818807;
      }
      if ((longlong)uVar6 <= (longlong)(uVar4 + 1)) break;
      bVar10 = uVar8 == unaff_RBX[2];
      uVar8 = uVar6;
      lVar1 = lVar5;
      if (bVar10) {
        uVar7 = uVar4 + 1;
        if ((longlong)uVar4 < (longlong)(uVar6 - 0x2134)) {
          uVar7 = uVar6 - 0x2134;
        }
        iVar2 = FUN_18081a6e0(extraout_XMM0_Da_03,uVar7);
        bVar10 = iVar2 == 0;
        uVar6 = (longlong)iVar2;
        uVar8 = unaff_RDI;
        param_1 = extraout_XMM0_Da_04;
        goto LAB_180818801;
      }
LAB_1808188ac:
      lStackX_20 = lVar1;
      if ((longlong)uVar8 <= (longlong)uVar4) break;
      unaff_RDI = 0;
    } while( true );
  }
  iVar2 = iStack00000000000000e8;
  uVar8 = param_5;
  iVar3 = FUN_18081a6e0(param_1,param_5);
  unaff_RDI = (ulonglong)iVar3;
  unaff_RBX[0xf] = -1;
  param_1 = extraout_XMM0_Da_05;
  if ((iVar3 == 0) &&
     (unaff_RDI = FUN_18081a120(), param_1 = extraout_XMM0_Da_06, -1 < (longlong)unaff_RDI)) {
    if (iVar2 == (int)unaff_RBX[0x11]) {
      func_0x0001808311f0(unaff_RBX + 0x42);
      uVar11 = *(int32_t *)((longlong)unaff_RBX + 0x84);
    }
    else {
      FUN_180819940();
      *(int *)(unaff_RBX + 0x11) = iVar2;
      uVar11 = *(int32_t *)(unaff_RBX[0xb] + (longlong)iVar2 * 4);
      *(int32_t *)((longlong)unaff_RBX + 0x84) = uVar11;
      *(int32_t *)(unaff_RBX + 0x10) = 3;
    }
    uVar11 = func_0x00018082fe60(unaff_RBX + 0x13,uVar11);
    FUN_18082fa20(uVar11,unaff_RBX + 0x13,&param_6);
    iVar2 = func_0x00018082fa00(unaff_RBX + 0x13,&stack0x00000078);
    param_1 = extraout_XMM0_Da_07;
    while (iVar2 != 0) {
      if (iVar2 < 0) {
        unaff_RDI = 0xffffffffffffff78;
        goto LAB_180818b76;
      }
      if (in_stack_00000090 != -1) {
        lVar5 = in_stack_00000090 -
                *(longlong *)(unaff_RBX[0xc] + (longlong)((int)unaff_RBX[0x11] * 2) * 8);
        if (lVar5 < 0) {
          lVar5 = 0;
        }
        unaff_RBX[0xf] = lVar5 + unaff_R15;
        if ((lVar5 + unaff_R15 <= in_stack_000000f0) &&
           (lVar5 = FUN_180818bd0(param_1,0xffffffff), param_1 = extraout_XMM0_Da_14,
           in_stack_000000f0 <= lVar5)) {
          *(uint64_t *)((longlong)unaff_RBX + 0x8c) = 0;
          return 0;
        }
        goto LAB_180818b53;
      }
      func_0x00018082f9e0(unaff_RBX + 0x13,0);
      iVar2 = func_0x00018082fa00(unaff_RBX + 0x13,&stack0x00000078);
      param_1 = extraout_XMM0_Da_08;
    }
    iVar2 = FUN_18081a6e0(param_1,uVar8);
    unaff_RDI = (ulonglong)iVar2;
    param_1 = extraout_XMM0_Da_09;
    if (-1 < iVar2) {
      unaff_RDI = unaff_RBX[2];
      while (uVar8 = 0xffffffffffffffff, uVar4 = unaff_RDI, unaff_RDI != 0) {
        do {
          uVar6 = 0;
          if (-1 < (longlong)(uVar4 - 0x2134)) {
            uVar6 = uVar4 - 0x2134;
          }
          if (*unaff_RBX == 0) {
            unaff_RDI = 0xffffffffffffff7f;
            goto LAB_180818b0c;
          }
          if (((code *)unaff_RBX[99] == (code *)0x0) ||
             (iVar2 = (*(code *)unaff_RBX[99])(*unaff_RBX,uVar6,0), param_1 = extraout_XMM0_Da_10,
             iVar2 == -1)) {
            unaff_RDI = 0xffffffffffffff80;
            goto LAB_180818b0c;
          }
          unaff_RBX[2] = uVar6;
          param_1 = (float)func_0x0001808301d0();
          lVar5 = unaff_RBX[2];
          while (lVar5 < (longlong)unaff_RDI) {
            param_6 = 0;
            param_7 = 0;
            param_8 = 0;
            param_9 = 0;
            uVar4 = FUN_18081a120();
            param_1 = extraout_XMM0_Da_11;
            if (uVar4 == 0xffffffffffffff80) goto LAB_180818b6f;
            if (uVar4 == 0xffffffffffffff75) {
              unaff_RDI = 0xffffffffffffff75;
              goto LAB_180818b76;
            }
            if ((longlong)uVar4 < 0) break;
            uVar8 = uVar4;
            lVar5 = unaff_RBX[2];
          }
          uVar4 = uVar6;
        } while (uVar8 == 0xffffffffffffffff);
        unaff_RDI = uVar8;
        if ((int)param_7 == 0) {
          iVar2 = FUN_18081a6e0(param_1,uVar8);
          unaff_RDI = (longlong)iVar2;
          param_1 = extraout_XMM0_Da_12;
          if ((iVar2 == 0) &&
             (lVar5 = FUN_18081a120(), unaff_RDI = uVar8, param_1 = extraout_XMM0_Da_13, lVar5 < 0))
          goto LAB_180818b53;
        }
LAB_180818b0c:
        if ((longlong)unaff_RDI < 0) goto LAB_180818b76;
        iVar2 = func_0x00018082f880(&param_6);
        param_1 = extraout_XMM0_Da_15;
        if ((iVar2 == *(int *)((longlong)unaff_RBX + 0x84)) &&
           ((uVar8 = func_0x00018082f820(&param_6), uVar8 < 0x8000000000000000 ||
            (iVar2 = func_0x00018082f800(&param_6), param_1 = extraout_XMM0_Da_16, iVar2 == 0)))) {
          uVar8 = FUN_180818c50();
          return uVar8;
        }
        unaff_RBX[2] = unaff_RDI;
      }
LAB_180818b6f:
      unaff_RDI = 0xffffffffffffff80;
    }
  }
LAB_180818b76:
  unaff_RBX[0xf] = -1;
  uVar11 = FUN_180830440(param_1,unaff_RBX + 0x42);
  FUN_180830310(uVar11,unaff_RBX + 0x51);
  *(int32_t *)(unaff_RBX + 0x10) = 2;
  return unaff_RDI & 0xffffffff;
LAB_180818b53:
  unaff_RDI = 0xffffffffffffff7f;
  goto LAB_180818b76;
}



uint64_t FUN_180818af3(void)

{
  longlong unaff_RBX;
  
  *(uint64_t *)(unaff_RBX + 0x78) = 0xffffffffffffffff;
  FUN_180830440();
  FUN_180830310();
  *(int32_t *)(unaff_RBX + 0x80) = 2;
  return 0xffffff78;
}



uint64_t FUN_180818bad(void)

{
  return 0xffffff7d;
}



ulonglong FUN_180818bd0(longlong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (((1 < *(int *)(param_1 + 0x80)) && (*(int *)(param_1 + 8) != 0)) &&
     (param_2 < *(int *)(param_1 + 0x40))) {
    if (param_2 < 0) {
      uVar2 = 0;
      uVar4 = uVar2;
      if (0 < *(int *)(param_1 + 0x40)) {
        do {
          lVar1 = FUN_180818bd0(param_1,uVar4);
          uVar2 = uVar2 + lVar1;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while ((int)uVar3 < *(int *)(param_1 + 0x40));
      }
      return uVar2;
    }
    return *(ulonglong *)(*(longlong *)(param_1 + 0x60) + 8 + (longlong)(param_2 * 2) * 8);
  }
  return 0xffffffffffffff7d;
}



ulonglong FUN_180818bf3(void)

{
  int in_EAX;
  longlong lVar1;
  longlong unaff_RBX;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < in_EAX) {
    do {
      lVar1 = FUN_180818bd0();
      uVar2 = uVar2 + lVar1;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)(unaff_RBX + 0x40));
  }
  return uVar2;
}



uint64_t FUN_180818c2c(uint64_t param_1,int param_2)

{
  longlong unaff_RBX;
  
  return *(uint64_t *)(*(longlong *)(unaff_RBX + 0x60) + 8 + (longlong)(param_2 * 2) * 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180818c50(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_180818c50(uint64_t param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint64_t uVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int8_t auStack_238 [32];
  int iStack_218;
  int iStack_214;
  int8_t auStack_210 [32];
  int8_t auStack_1f0 [24];
  longlong lStack_1d8;
  int8_t auStack_1c8 [384];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  if ((((1 < *(int *)(param_2 + 0x80)) && (*(int *)(param_2 + 8) != 0)) && (-1 < param_3)) &&
     (param_3 <= *(longlong *)(param_2 + 0x18))) {
    *(uint64_t *)(param_2 + 0x78) = 0xffffffffffffffff;
    lVar1 = param_2 + 0x98;
    func_0x00018082fe60(lVar1,*(int32_t *)(param_2 + 0x84));
    func_0x0001808311f0(param_2 + 0x210);
    iVar3 = FUN_18081a6e0(param_2,param_3);
    if (iVar3 == 0) {
      iVar13 = 0;
      bVar2 = false;
      iStack_218 = 0;
      iStack_214 = 0;
      iVar3 = FUN_18082f920(param_1,auStack_1c8,*(int32_t *)(param_2 + 0x84));
      if (-1 < iVar3) {
        func_0x00018082fe10(auStack_1c8);
        iVar3 = 0;
        iVar14 = 0;
LAB_180818dc0:
        do {
          if ((*(int *)(param_2 + 0x80) < 3) ||
             (iVar4 = func_0x00018082f9e0(auStack_1c8,auStack_1f0), iVar4 < 1)) {
LAB_180818e5f:
            if (iVar13 != 0) {
              *(uint64_t *)(param_2 + 0x78) = 0xffffffffffffffff;
              goto LAB_180819016;
            }
            lVar17 = FUN_18081a120(param_1,param_2,auStack_210);
            if (lVar17 < 0) {
              uVar7 = FUN_180818bd0(param_2,0xffffffff);
              *(uint64_t *)(param_2 + 0x78) = uVar7;
              goto LAB_180819016;
            }
            if (*(int *)(param_2 + 0x80) < 3) {
LAB_180818ed4:
              iVar5 = func_0x00018082f880(auStack_210);
              iVar4 = *(int *)(param_2 + 0x40);
              iVar10 = 0;
              lVar11 = 0;
              if (0 < iVar4) {
                piVar8 = *(int **)(param_2 + 0x58);
                do {
                  if (*piVar8 == iVar5) break;
                  iVar10 = iVar10 + 1;
                  lVar11 = lVar11 + 1;
                  piVar8 = piVar8 + 1;
                } while (iVar10 < iVar4);
              }
              iVar3 = iStack_218;
              iVar14 = iStack_214;
              if (iVar10 == iVar4) goto LAB_180818dc0;
              *(int *)(param_2 + 0x88) = iVar10;
              *(int *)(param_2 + 0x84) = iVar5;
              func_0x00018082fe60(lVar1,iVar5);
              func_0x00018082fe60(auStack_1c8,iVar5);
              *(int32_t *)(param_2 + 0x80) = 3;
              bVar2 = lVar17 <= *(longlong *)(*(longlong *)(param_2 + 0x50) + lVar11 * 8);
            }
            else {
              iVar3 = func_0x00018082f880(auStack_210);
              if ((*(int *)(param_2 + 0x84) != iVar3) &&
                 (iVar3 = func_0x00018082f7f0(auStack_210), iVar3 != 0)) {
                FUN_180819940(param_1,param_2);
                FUN_18082f8b0(param_1);
              }
              if (*(int *)(param_2 + 0x80) < 3) goto LAB_180818ed4;
            }
            FUN_18082fa20(param_1,lVar1,auStack_210);
            FUN_18082fa20(param_1,auStack_1c8,auStack_210);
            iStack_214 = func_0x00018082f810(auStack_210);
            iVar3 = iStack_218;
            iVar14 = iStack_214;
            goto LAB_180818dc0;
          }
          if (*(longlong *)
               (*(longlong *)(param_2 + 0x68) + 0x20 + (longlong)*(int *)(param_2 + 0x88) * 0x28) ==
              0) {
            func_0x00018082f9e0(lVar1,0);
            goto LAB_180818e5f;
          }
          iVar4 = FUN_1808317a0(*(longlong *)(param_2 + 0x68) +
                                (longlong)*(int *)(param_2 + 0x88) * 0x28,auStack_1f0);
          if (iVar4 < 0) {
            func_0x00018082f9e0(lVar1,0);
            iVar4 = 0;
          }
          else if ((iVar14 == 0) || (bVar2)) {
            if (iVar13 != 0) {
              iVar3 = iVar3 + (iVar4 + iVar13 >> 2);
              iStack_218 = iVar3;
            }
          }
          else {
            func_0x00018082f9e0(lVar1,0);
          }
          iVar13 = iVar4;
        } while (lStack_1d8 == -1);
        lVar11 = (longlong)*(int *)(param_2 + 0x88);
        lVar1 = *(longlong *)(param_2 + 0x60);
        lStack_1d8 = lStack_1d8 -
                     *(longlong *)(lVar1 + (longlong)(*(int *)(param_2 + 0x88) * 2) * 8);
        lVar17 = 0;
        if (-1 < lStack_1d8) {
          lVar17 = lStack_1d8;
        }
        lVar15 = 0;
        lVar9 = 0;
        lVar16 = 0;
        if (1 < lVar11) {
          plVar6 = (longlong *)(lVar1 + 0x18);
          lVar12 = (lVar11 - 2U >> 1) + 1;
          lVar16 = lVar12 * 2;
          do {
            lVar15 = lVar15 + plVar6[-2];
            lVar9 = lVar9 + *plVar6;
            plVar6 = plVar6 + 4;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        if (lVar16 < lVar11) {
          lVar17 = lVar17 + *(longlong *)(lVar1 + 8 + lVar16 * 0x10);
        }
        lVar17 = lVar15 + (lVar9 - iVar3) + lVar17;
        *(longlong *)(param_2 + 0x78) = lVar17;
        if (lVar17 < 0) {
          *(uint64_t *)(param_2 + 0x78) = 0;
        }
LAB_180819016:
        FUN_18082f8b0(param_1,auStack_1c8);
        *(uint64_t *)(param_2 + 0x8c) = 0;
      }
    }
    else {
      *(uint64_t *)(param_2 + 0x78) = 0xffffffffffffffff;
      FUN_18082f8b0();
      FUN_180819940(param_1,param_2);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_238);
}





