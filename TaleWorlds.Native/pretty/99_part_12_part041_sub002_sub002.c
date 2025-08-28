#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part041_sub002_sub002.c - 1 个函数

// 函数: void FUN_1807e62b9(void)
void FUN_1807e62b9(void)

{
  return;
}



int32_t
FUN_1807e6430(longlong *param_1,uint param_2,uint64_t param_3,longlong param_4,uint64_t param_5,
             int param_6)

{
  int iVar1;
  int32_t uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  float fVar15;
  int iVar16;
  ulonglong uStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  uint uStack_60;
  longlong lStack_58;
  int32_t uStack_50;
  uint uStack_4c;
  int32_t uStack_48;
  uint uStack_44;
  int32_t uStack_40;
  uint uStack_3c;
  longlong lStack_38;
  longlong lStack_30;
  
  uVar13 = (ulonglong)param_2;
  if (param_6 != 1) {
    lStack_30 = param_1[0x44];
    param_6 = 0;
    lStack_58 = **(longlong **)(param_4 + 0x18);
    if (lStack_30 == 0) {
      return 0x1f;
    }
    lStack_38 = *(longlong *)(lStack_30 + 0x160);
    uStack_60 = *(uint *)(lStack_30 + 0x44);
    if (lStack_38 == 0) {
                    // WARNING: Subroutine does not return
      memset(lStack_58,0,(longlong)*(int *)(lStack_30 + 0x68) * uVar13 * 4);
    }
    if ((-2 < *(int *)((longlong)param_1 + 0x25c)) &&
       (*(uint *)((longlong)param_1 + 0x264) < *(uint *)(param_1 + 0x4c))) {
      *(int *)(param_1 + 0x4b) = *(int *)((longlong)param_1 + 0x25c);
      *(int32_t *)((longlong)param_1 + 0x25c) = 0xfffffffe;
      *(uint *)((longlong)param_1 + 0x264) = *(uint *)(param_1 + 0x4c);
    }
    fVar15 = (float)*(uint *)((longlong)param_1 + 0x2c) * 9.536743e-07 * *(float *)(param_1 + 0x45);
    lVar8 = (longlong)((fVar15 / *(float *)(param_1 + 0x46)) * 4.2949673e+09);
    if (lVar8 < 0x101) {
      uVar9 = 0xffffffffffffffff;
    }
    else {
      uVar9 = (ulonglong)((*(float *)(param_1 + 0x46) / fVar15) * 4.2949673e+09);
    }
    if (param_2 == 0) {
      return 0;
    }
    do {
      lVar4 = param_1[0x43];
      uStack_68 = param_1[0x47];
      uVar6 = *(uint *)(lVar4 + 0x38);
      lStack_70 = lVar8;
      if ((int)param_1[0x48] == 1) {
        lStack_70 = -lVar8;
      }
      iVar11 = (int)uVar13;
      bVar14 = false;
      if (0x100 < lVar8) {
        uVar12 = (uint)(uStack_68 >> 0x20);
        if ((int)param_1[0x48] == 1) {
          if ((((uVar6 & 6) == 0) || ((int)param_1[0x4b] == 0)) ||
             (uVar3 = *(uint *)(lVar4 + 0x58), uVar12 < uVar3)) {
            uStack_78 = 0;
            uVar10 = uStack_68 >> 0x20;
          }
          else {
            uStack_50 = 0;
            uStack_78 = uStack_68 - ((ulonglong)uVar3 << 0x20);
            uVar10 = uStack_78 >> 0x20;
            uStack_4c = uVar3;
          }
          uVar7 = uStack_68;
          if (uStack_60 < (uint)uVar10) {
LAB_1807e66ee:
            uStack_78 = uVar7;
            uVar10 = uStack_78 >> 0x20;
          }
        }
        else {
          if (((uVar6 & 6) == 0) || ((int)param_1[0x4b] == 0)) {
            uVar3 = *(uint *)(param_1[0x44] + 0x44);
          }
          else {
            uVar3 = *(int *)(lVar4 + 0x5c) + *(int *)(lVar4 + 0x58);
          }
          iVar5 = 0;
          uStack_78 = (ulonglong)uVar3 << 0x20;
          if (uStack_68 < uStack_78) {
            uStack_78 = uStack_78 - uStack_68;
            iVar5 = (int)(uStack_78 >> 0x20);
          }
          else {
            uStack_78 = 0;
          }
          uVar7 = uStack_78;
          if (iVar5 + uVar12 <= uStack_60) goto LAB_1807e66ee;
          uVar10 = (ulonglong)(uStack_60 - uVar12);
        }
        uVar7 = ((uVar9 & 0xffffffff) * (uStack_78 & 0xffffffff) >> 0x20) +
                ((longlong)uVar9 >> 0x20) * (uStack_78 & 0xffffffff) + 0xffffffff + uVar10 * uVar9;
        bVar14 = false;
        if (uVar7 >> 0x20 <= uVar13) {
          bVar14 = true;
          uVar13 = uVar7 >> 0x20;
        }
      }
      iVar5 = (int)uVar13;
      if (((int)lStack_70 == 0) && ((int)uStack_68 == 0)) {
        iVar16 = *(int *)(param_1[0x44] + 0x68);
        uVar2 = *(int32_t *)(param_1[0x44] + 0x28);
        lVar4 = lStack_58 + (ulonglong)(uint)(iVar16 * param_6) * 4;
LAB_1807e676a:
        FUN_18081da90(lVar4,uVar13,lStack_38,uVar2,&uStack_68,&lStack_70,iVar16);
      }
      else {
        iVar1 = *(int *)((longlong)param_1 + 0x234);
        iVar16 = *(int *)(param_1[0x44] + 0x68);
        uVar2 = *(int32_t *)(param_1[0x44] + 0x28);
        lVar4 = lStack_58 + (ulonglong)(uint)(iVar16 * param_6) * 4;
        if (iVar1 == 1) goto LAB_1807e676a;
        if (iVar1 == 2) {
          FUN_18081e5c0(lVar4,uVar13,lStack_38,uVar2,&uStack_68,&lStack_70,iVar16);
        }
        else if (iVar1 == 3) {
          FUN_18081f420(lVar4,uVar13);
        }
        else if (iVar1 == 4) {
          FUN_180821bb0(lVar4,uVar13);
        }
        else {
          FUN_18081e5c0(lVar4,uVar13,lStack_38,uVar2,&uStack_68,&lStack_70,iVar16);
        }
      }
      uVar12 = iVar11 - iVar5;
      uVar13 = (ulonglong)uVar12;
      param_6 = param_6 + iVar5;
      param_1[0x47] = uStack_68;
      if (bVar14) {
        if (((uVar6 & 4) == 0) || ((int)param_1[0x4b] == 0)) {
          if (((uVar6 & 2) == 0) || (iVar11 = (int)param_1[0x4b], iVar11 == 0)) {
            *(int32_t *)((longlong)param_1 + 0x23c) = *(int32_t *)(lStack_30 + 0x44);
            *(int32_t *)(param_1 + 0x47) = 0;
                    // WARNING: Subroutine does not return
            memset(lStack_58 + (ulonglong)(uint)(*(int *)(param_1[0x44] + 0x68) * param_6) * 4,0,
                   (ulonglong)(*(int *)(param_1[0x44] + 0x68) * uVar12) << 2);
          }
          lVar4 = param_1[0x43];
          if ((int)param_1[0x48] == 1) {
            uVar6 = *(int *)(lVar4 + 0x5c) + *(int *)((longlong)param_1 + 0x23c);
            *(uint *)((longlong)param_1 + 0x23c) = uVar6;
            if (uVar6 < *(uint *)(lVar4 + 0x58)) {
              do {
                uVar6 = uVar6 + *(int *)(lVar4 + 0x5c);
                *(uint *)((longlong)param_1 + 0x23c) = uVar6;
              } while (uVar6 < *(uint *)(lVar4 + 0x58));
            }
          }
          else {
            uVar6 = 0;
            if (*(uint *)(lVar4 + 0x5c) <= *(uint *)((longlong)param_1 + 0x23c)) {
              uVar6 = *(uint *)((longlong)param_1 + 0x23c) - *(int *)(lVar4 + 0x5c);
            }
            *(uint *)((longlong)param_1 + 0x23c) = uVar6;
            iVar5 = *(int *)(lVar4 + 0x5c);
            if ((uint)(*(int *)(lVar4 + 0x58) + iVar5) <= uVar6) {
              do {
                uVar6 = uVar6 - iVar5;
                *(uint *)((longlong)param_1 + 0x23c) = uVar6;
                iVar5 = *(int *)(lVar4 + 0x5c);
              } while ((uint)(*(int *)(lVar4 + 0x58) + iVar5) <= uVar6);
            }
          }
          if (0 < iVar11) {
            *(int *)(param_1 + 0x4b) = iVar11 + -1;
          }
        }
        else {
          lVar4 = param_1[0x43];
          bVar14 = (int)param_1[0x48] != 0;
          if (bVar14) {
            uStack_3c = *(uint *)(lVar4 + 0x58);
            uStack_40 = 0;
            uVar6 = uStack_3c;
          }
          else {
            uStack_44 = *(int *)(lVar4 + 0x5c) + *(int *)(lVar4 + 0x58);
            uStack_48 = 0;
            uVar6 = uStack_44;
          }
          param_1[0x47] = ((ulonglong)uVar6 << 0x21) - uStack_68;
          *(uint *)(param_1 + 0x48) = (uint)!bVar14;
          if (*(int *)((longlong)param_1 + 0x23c) < 0) {
            *(int32_t *)((longlong)param_1 + 0x23c) = 0;
          }
        }
      }
      if (uVar12 == 0) {
        return 0;
      }
    } while( true );
  }
  if (param_4 != 0) {
    **(int32_t **)(param_4 + 8) = *(int32_t *)(param_1[0x44] + 0x68);
    switch(*(int32_t *)(param_1[0x44] + 0x68)) {
    case 1:
      uVar2 = 2;
      break;
    case 2:
      uVar2 = 3;
      break;
    default:
      goto LAB_1807e64c1;
    case 4:
      uVar2 = 4;
      break;
    case 5:
      uVar2 = 5;
      break;
    case 6:
      uVar2 = 6;
      break;
    case 8:
      uVar2 = 7;
      break;
    case 0xc:
      uVar2 = 8;
    }
    *(int32_t *)(param_4 + 0x20) = uVar2;
  }
LAB_1807e64c1:
  if ((*(char *)((longlong)param_1 + 0x31) != '\0') && (param_2 == 0)) {
    *(int8_t *)((longlong)param_1 + 0x31) = 0;
    (**(code **)(*param_1 + 0x28))(param_1,1,0);
    return 0xb;
  }
  return 0;
}



uint64_t FUN_1807e657f(uint64_t param_1,uint64_t param_2,int param_3)

{
  int in_EAX;
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar9;
  int32_t uVar10;
  int iVar11;
  uint64_t in_R10;
  int in_R11D;
  uint unaff_R13D;
  ulonglong uVar12;
  bool bVar13;
  float fVar14;
  longlong lStack0000000000000028;
  int iStack0000000000000030;
  
  if ((-2 < in_EAX) && (*(uint *)(unaff_RSI + 0x264) < *(uint *)(unaff_RSI + 0x260))) {
    *(int *)(unaff_RSI + 600) = in_EAX;
    *(int32_t *)(unaff_RSI + 0x25c) = 0xfffffffe;
    *(uint *)(unaff_RSI + 0x264) = *(uint *)(unaff_RSI + 0x260);
  }
  fVar14 = (float)*(uint *)(unaff_RSI + 0x2c) * 9.536743e-07 * *(float *)(unaff_RSI + 0x228);
  lVar8 = (longlong)((fVar14 / *(float *)(unaff_RSI + 0x230)) * 4.2949673e+09);
  if (lVar8 < 0x101) {
    uVar9 = 0xffffffffffffffff;
  }
  else {
    uVar9 = (ulonglong)((*(float *)(unaff_RSI + 0x230) / fVar14) * 4.2949673e+09);
  }
  if (unaff_R13D == 0) {
    return 0;
  }
  do {
    lVar2 = *(longlong *)(unaff_RSI + 0x218);
    uVar6 = *(ulonglong *)(unaff_RSI + 0x238);
    iVar4 = *(int *)(unaff_RSI + 0x240);
    *(uint64_t *)(unaff_RBP + -0x21) = 0;
    *(uint64_t *)(unaff_RBP + -0x19) = 0;
    uVar5 = *(uint *)(lVar2 + 0x38);
    *(ulonglong *)(unaff_RBP + -0x19) = uVar6;
    *(longlong *)(unaff_RBP + -0x21) = lVar8;
    if (iVar4 == 1) {
      *(longlong *)(unaff_RBP + -0x21) = -lVar8;
    }
    uVar12 = (ulonglong)unaff_R13D;
    if (0x100 < lVar8) {
      uVar1 = (uint)(uVar6 >> 0x20);
      if (iVar4 == 1) {
        if ((((uVar5 & 6) == 0) || (*(int *)(unaff_RSI + 600) == 0)) ||
           (uVar1 < *(uint *)(lVar2 + 0x58))) {
          *(int32_t *)(unaff_RBP + -0x29) = 0;
          uVar7 = uVar6 >> 0x20;
        }
        else {
          *(uint *)(unaff_RBP + 3) = *(uint *)(lVar2 + 0x58);
          *(int32_t *)(unaff_RBP + -1) = 0;
          *(ulonglong *)(unaff_RBP + -0x29) = uVar6 - *(longlong *)(unaff_RBP + -1);
          uVar7 = (ulonglong)*(uint *)(unaff_RBP + -0x25);
        }
        if (*(uint *)(unaff_RBP + -0x11) < (uint)uVar7) {
          *(ulonglong *)(unaff_RBP + -0x29) = uVar6;
LAB_1807e66ee:
          uVar7 = (ulonglong)*(uint *)(unaff_RBP + -0x25);
        }
      }
      else {
        if (((uVar5 & 6) == 0) || (*(int *)(unaff_RSI + 600) == 0)) {
          *(int32_t *)(unaff_RBP + -0x25) =
               *(int32_t *)(*(longlong *)(unaff_RSI + 0x220) + 0x44);
        }
        else {
          *(int *)(unaff_RBP + -0x25) = *(int *)(lVar2 + 0x5c) + *(int *)(lVar2 + 0x58);
        }
        iVar4 = 0;
        *(int32_t *)(unaff_RBP + -0x29) = 0;
        if (uVar6 < *(ulonglong *)(unaff_RBP + -0x29)) {
          lVar2 = *(ulonglong *)(unaff_RBP + -0x29) - uVar6;
          *(longlong *)(unaff_RBP + -0x29) = lVar2;
          iVar4 = (int)((ulonglong)lVar2 >> 0x20);
        }
        else {
          *(uint64_t *)(unaff_RBP + -0x29) = 0;
        }
        if (iVar4 + uVar1 <= *(uint *)(unaff_RBP + -0x11)) goto LAB_1807e66ee;
        uVar7 = (ulonglong)(*(uint *)(unaff_RBP + -0x11) - uVar1);
      }
      uVar6 = ((uVar9 & 0xffffffff) * (ulonglong)*(uint *)(unaff_RBP + -0x29) >> 0x20) +
              ((longlong)uVar9 >> 0x20) * (ulonglong)*(uint *)(unaff_RBP + -0x29) + 0xffffffff +
              uVar7 * uVar9;
      uVar7 = uVar6 >> 0x20;
      *(ulonglong *)(unaff_RBP + -0x29) = uVar7;
      if (uVar7 <= unaff_R13D) {
        param_3 = 2;
        uVar12 = uVar6 >> 0x20;
      }
    }
    if ((*(int *)(unaff_RBP + -0x21) == 0) && (*(int *)(unaff_RBP + -0x19) == 0)) {
      iStack0000000000000030 = *(int *)(*(longlong *)(unaff_RSI + 0x220) + 0x68);
      uVar10 = *(int32_t *)(*(longlong *)(unaff_RSI + 0x220) + 0x28);
      lVar2 = *(longlong *)(unaff_RBP + -9) +
              (ulonglong)(uint)(iStack0000000000000030 * in_R11D) * 4;
LAB_1807e676a:
      lStack0000000000000028 = unaff_RBP + -0x21;
      FUN_18081da90(lVar2,uVar12,in_R10,uVar10,unaff_RBP + -0x19);
    }
    else {
      iVar4 = *(int *)(unaff_RSI + 0x234);
      iStack0000000000000030 = *(int *)(*(longlong *)(unaff_RSI + 0x220) + 0x68);
      uVar10 = *(int32_t *)(*(longlong *)(unaff_RSI + 0x220) + 0x28);
      lVar2 = *(longlong *)(unaff_RBP + -9) +
              (ulonglong)(uint)(iStack0000000000000030 * in_R11D) * 4;
      if (iVar4 == 1) goto LAB_1807e676a;
      lStack0000000000000028 = unaff_RBP + -0x21;
      if (iVar4 == 2) {
        FUN_18081e5c0(lVar2,uVar12,in_R10,uVar10,unaff_RBP + -0x19);
      }
      else if (iVar4 == 3) {
        FUN_18081f420(lVar2,uVar12);
      }
      else if (iVar4 == 4) {
        FUN_180821bb0(lVar2,uVar12);
      }
      else {
        FUN_18081e5c0(lVar2,uVar12,in_R10,uVar10,unaff_RBP + -0x19);
      }
    }
    unaff_R13D = unaff_R13D - (int)uVar12;
    lVar2 = *(longlong *)(unaff_RBP + -0x19);
    in_R11D = *(int *)(unaff_RBP + 0x7f) + (int)uVar12;
    *(longlong *)(unaff_RSI + 0x238) = lVar2;
    *(int *)(unaff_RBP + 0x7f) = in_R11D;
    if (param_3 == 2) {
      if (((uVar5 & 4) == 0) || (*(int *)(unaff_RSI + 600) == 0)) {
        if ((uVar5 & 2) == 0) {
LAB_1807e69e3:
          *(int32_t *)(unaff_RSI + 0x23c) =
               *(int32_t *)(*(longlong *)(unaff_RBP + 0x1f) + 0x44);
          *(int32_t *)(unaff_RSI + 0x238) = 0;
          iVar4 = *(int *)(*(longlong *)(unaff_RSI + 0x220) + 0x68);
                    // WARNING: Subroutine does not return
          memset(*(longlong *)(unaff_RBP + -9) + (ulonglong)(uint)(iVar4 * in_R11D) * 4,0,
                 (ulonglong)(iVar4 * unaff_R13D) << 2);
        }
        iVar4 = *(int *)(unaff_RSI + 600);
        if (iVar4 == 0) {
          in_R11D = *(int *)(unaff_RBP + 0x7f);
          goto LAB_1807e69e3;
        }
        lVar2 = *(longlong *)(unaff_RSI + 0x218);
        if (*(int *)(unaff_RSI + 0x240) == 1) {
          uVar5 = *(int *)(lVar2 + 0x5c) + *(int *)(unaff_RSI + 0x23c);
          *(uint *)(unaff_RSI + 0x23c) = uVar5;
          if (uVar5 < *(uint *)(lVar2 + 0x58)) {
            do {
              uVar5 = uVar5 + *(int *)(lVar2 + 0x5c);
              *(uint *)(unaff_RSI + 0x23c) = uVar5;
            } while (uVar5 < *(uint *)(lVar2 + 0x58));
          }
        }
        else {
          uVar5 = 0;
          if (*(uint *)(lVar2 + 0x5c) <= *(uint *)(unaff_RSI + 0x23c)) {
            uVar5 = *(uint *)(unaff_RSI + 0x23c) - *(int *)(lVar2 + 0x5c);
          }
          *(uint *)(unaff_RSI + 0x23c) = uVar5;
          iVar11 = *(int *)(lVar2 + 0x5c);
          if ((uint)(*(int *)(lVar2 + 0x58) + iVar11) <= uVar5) {
            do {
              uVar5 = uVar5 - iVar11;
              *(uint *)(unaff_RSI + 0x23c) = uVar5;
              iVar11 = *(int *)(lVar2 + 0x5c);
            } while ((uint)(*(int *)(lVar2 + 0x58) + iVar11) <= uVar5);
          }
        }
        if (0 < iVar4) {
          *(int *)(unaff_RSI + 600) = iVar4 + -1;
        }
        in_R11D = *(int *)(unaff_RBP + 0x7f);
      }
      else {
        lVar3 = *(longlong *)(unaff_RSI + 0x218);
        bVar13 = *(int *)(unaff_RSI + 0x240) != 0;
        if (bVar13) {
          *(int32_t *)(unaff_RBP + 0x13) = *(int32_t *)(lVar3 + 0x58);
          *(int32_t *)(unaff_RBP + 0xf) = 0;
          lVar3 = *(longlong *)(unaff_RBP + 0xf);
        }
        else {
          *(int *)(unaff_RBP + 0xb) = *(int *)(lVar3 + 0x5c) + *(int *)(lVar3 + 0x58);
          *(int32_t *)(unaff_RBP + 7) = 0;
          lVar3 = *(longlong *)(unaff_RBP + 7);
        }
        *(longlong *)(unaff_RSI + 0x238) = lVar3 * 2 - lVar2;
        *(uint *)(unaff_RSI + 0x240) = (uint)!bVar13;
        if (*(int *)(unaff_RSI + 0x23c) < 0) {
          *(int32_t *)(unaff_RSI + 0x23c) = 0;
        }
      }
    }
    if (unaff_R13D == 0) {
      return 0;
    }
    in_R10 = *(uint64_t *)(unaff_RBP + 0x17);
    param_3 = 0;
  } while( true );
}



uint64_t FUN_1807e661b(uint64_t param_1,uint64_t param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  int32_t uVar8;
  int iVar9;
  uint64_t in_R10;
  int in_R11D;
  uint unaff_R13D;
  ulonglong uVar10;
  bool bVar11;
  longlong lStack0000000000000028;
  int iStack0000000000000030;
  
  do {
    lVar2 = *(longlong *)(unaff_RSI + 0x218);
    uVar6 = *(ulonglong *)(unaff_RSI + 0x238);
    iVar4 = *(int *)(unaff_RSI + 0x240);
    *(uint64_t *)(unaff_RBP + -0x21) = 0;
    *(uint64_t *)(unaff_RBP + -0x19) = 0;
    uVar5 = *(uint *)(lVar2 + 0x38);
    *(ulonglong *)(unaff_RBP + -0x19) = uVar6;
    *(longlong *)(unaff_RBP + -0x21) = unaff_RBX;
    if (iVar4 == 1) {
      *(longlong *)(unaff_RBP + -0x21) = -unaff_RBX;
    }
    uVar10 = (ulonglong)unaff_R13D;
    if (0x100 < unaff_RBX) {
      uVar1 = (uint)(uVar6 >> 0x20);
      if (iVar4 == 1) {
        if ((((uVar5 & 6) == 0) || (*(int *)(unaff_RSI + 600) == 0)) ||
           (uVar1 < *(uint *)(lVar2 + 0x58))) {
          *(int32_t *)(unaff_RBP + -0x29) = 0;
          uVar7 = uVar6 >> 0x20;
        }
        else {
          *(uint *)(unaff_RBP + 3) = *(uint *)(lVar2 + 0x58);
          *(int32_t *)(unaff_RBP + -1) = 0;
          *(ulonglong *)(unaff_RBP + -0x29) = uVar6 - *(longlong *)(unaff_RBP + -1);
          uVar7 = (ulonglong)*(uint *)(unaff_RBP + -0x25);
        }
        if (*(uint *)(unaff_RBP + -0x11) < (uint)uVar7) {
          *(ulonglong *)(unaff_RBP + -0x29) = uVar6;
LAB_1807e66ee:
          uVar7 = (ulonglong)*(uint *)(unaff_RBP + -0x25);
        }
      }
      else {
        if (((uVar5 & 6) == 0) || (*(int *)(unaff_RSI + 600) == 0)) {
          *(int32_t *)(unaff_RBP + -0x25) =
               *(int32_t *)(*(longlong *)(unaff_RSI + 0x220) + 0x44);
        }
        else {
          *(int *)(unaff_RBP + -0x25) = *(int *)(lVar2 + 0x5c) + *(int *)(lVar2 + 0x58);
        }
        iVar4 = 0;
        *(int32_t *)(unaff_RBP + -0x29) = 0;
        if (uVar6 < *(ulonglong *)(unaff_RBP + -0x29)) {
          lVar2 = *(ulonglong *)(unaff_RBP + -0x29) - uVar6;
          *(longlong *)(unaff_RBP + -0x29) = lVar2;
          iVar4 = (int)((ulonglong)lVar2 >> 0x20);
        }
        else {
          *(uint64_t *)(unaff_RBP + -0x29) = 0;
        }
        if (iVar4 + uVar1 <= *(uint *)(unaff_RBP + -0x11)) goto LAB_1807e66ee;
        uVar7 = (ulonglong)(*(uint *)(unaff_RBP + -0x11) - uVar1);
      }
      uVar6 = ((unaff_RDI & 0xffffffff) * (ulonglong)*(uint *)(unaff_RBP + -0x29) >> 0x20) +
              ((longlong)unaff_RDI >> 0x20) * (ulonglong)*(uint *)(unaff_RBP + -0x29) + 0xffffffff +
              uVar7 * unaff_RDI;
      uVar7 = uVar6 >> 0x20;
      *(ulonglong *)(unaff_RBP + -0x29) = uVar7;
      if (uVar7 <= unaff_R13D) {
        param_3 = 2;
        uVar10 = uVar6 >> 0x20;
      }
    }
    if ((*(int *)(unaff_RBP + -0x21) == 0) && (*(int *)(unaff_RBP + -0x19) == 0)) {
      iStack0000000000000030 = *(int *)(*(longlong *)(unaff_RSI + 0x220) + 0x68);
      uVar8 = *(int32_t *)(*(longlong *)(unaff_RSI + 0x220) + 0x28);
      lVar2 = *(longlong *)(unaff_RBP + -9) +
              (ulonglong)(uint)(iStack0000000000000030 * in_R11D) * 4;
LAB_1807e676a:
      lStack0000000000000028 = unaff_RBP + -0x21;
      FUN_18081da90(lVar2,uVar10,in_R10,uVar8,unaff_RBP + -0x19);
    }
    else {
      iVar4 = *(int *)(unaff_RSI + 0x234);
      iStack0000000000000030 = *(int *)(*(longlong *)(unaff_RSI + 0x220) + 0x68);
      uVar8 = *(int32_t *)(*(longlong *)(unaff_RSI + 0x220) + 0x28);
      lVar2 = *(longlong *)(unaff_RBP + -9) +
              (ulonglong)(uint)(iStack0000000000000030 * in_R11D) * 4;
      if (iVar4 == 1) goto LAB_1807e676a;
      lStack0000000000000028 = unaff_RBP + -0x21;
      if (iVar4 == 2) {
        FUN_18081e5c0(lVar2,uVar10,in_R10,uVar8,unaff_RBP + -0x19);
      }
      else if (iVar4 == 3) {
        FUN_18081f420(lVar2,uVar10);
      }
      else if (iVar4 == 4) {
        FUN_180821bb0(lVar2,uVar10);
      }
      else {
        FUN_18081e5c0(lVar2,uVar10,in_R10,uVar8,unaff_RBP + -0x19);
      }
    }
    unaff_R13D = unaff_R13D - (int)uVar10;
    lVar2 = *(longlong *)(unaff_RBP + -0x19);
    in_R11D = *(int *)(unaff_RBP + 0x7f) + (int)uVar10;
    *(longlong *)(unaff_RSI + 0x238) = lVar2;
    *(int *)(unaff_RBP + 0x7f) = in_R11D;
    if (param_3 == 2) {
      if (((uVar5 & 4) == 0) || (*(int *)(unaff_RSI + 600) == 0)) {
        if ((uVar5 & 2) == 0) {
LAB_1807e69e3:
          *(int32_t *)(unaff_RSI + 0x23c) =
               *(int32_t *)(*(longlong *)(unaff_RBP + 0x1f) + 0x44);
          *(int32_t *)(unaff_RSI + 0x238) = 0;
          iVar4 = *(int *)(*(longlong *)(unaff_RSI + 0x220) + 0x68);
                    // WARNING: Subroutine does not return
          memset(*(longlong *)(unaff_RBP + -9) + (ulonglong)(uint)(iVar4 * in_R11D) * 4,0,
                 (ulonglong)(iVar4 * unaff_R13D) << 2);
        }
        iVar4 = *(int *)(unaff_RSI + 600);
        if (iVar4 == 0) {
          in_R11D = *(int *)(unaff_RBP + 0x7f);
          goto LAB_1807e69e3;
        }
        lVar2 = *(longlong *)(unaff_RSI + 0x218);
        if (*(int *)(unaff_RSI + 0x240) == 1) {
          uVar5 = *(int *)(lVar2 + 0x5c) + *(int *)(unaff_RSI + 0x23c);
          *(uint *)(unaff_RSI + 0x23c) = uVar5;
          if (uVar5 < *(uint *)(lVar2 + 0x58)) {
            do {
              uVar5 = uVar5 + *(int *)(lVar2 + 0x5c);
              *(uint *)(unaff_RSI + 0x23c) = uVar5;
            } while (uVar5 < *(uint *)(lVar2 + 0x58));
          }
        }
        else {
          uVar5 = 0;
          if (*(uint *)(lVar2 + 0x5c) <= *(uint *)(unaff_RSI + 0x23c)) {
            uVar5 = *(uint *)(unaff_RSI + 0x23c) - *(int *)(lVar2 + 0x5c);
          }
          *(uint *)(unaff_RSI + 0x23c) = uVar5;
          iVar9 = *(int *)(lVar2 + 0x5c);
          if ((uint)(*(int *)(lVar2 + 0x58) + iVar9) <= uVar5) {
            do {
              uVar5 = uVar5 - iVar9;
              *(uint *)(unaff_RSI + 0x23c) = uVar5;
              iVar9 = *(int *)(lVar2 + 0x5c);
            } while ((uint)(*(int *)(lVar2 + 0x58) + iVar9) <= uVar5);
          }
        }
        if (0 < iVar4) {
          *(int *)(unaff_RSI + 600) = iVar4 + -1;
        }
        in_R11D = *(int *)(unaff_RBP + 0x7f);
      }
      else {
        lVar3 = *(longlong *)(unaff_RSI + 0x218);
        bVar11 = *(int *)(unaff_RSI + 0x240) != 0;
        if (bVar11) {
          *(int32_t *)(unaff_RBP + 0x13) = *(int32_t *)(lVar3 + 0x58);
          *(int32_t *)(unaff_RBP + 0xf) = 0;
          lVar3 = *(longlong *)(unaff_RBP + 0xf);
        }
        else {
          *(int *)(unaff_RBP + 0xb) = *(int *)(lVar3 + 0x5c) + *(int *)(lVar3 + 0x58);
          *(int32_t *)(unaff_RBP + 7) = 0;
          lVar3 = *(longlong *)(unaff_RBP + 7);
        }
        *(longlong *)(unaff_RSI + 0x238) = lVar3 * 2 - lVar2;
        *(uint *)(unaff_RSI + 0x240) = (uint)!bVar11;
        if (*(int *)(unaff_RSI + 0x23c) < 0) {
          *(int32_t *)(unaff_RSI + 0x23c) = 0;
        }
      }
    }
    if (unaff_R13D == 0) {
      return 0;
    }
    in_R10 = *(uint64_t *)(unaff_RBP + 0x17);
    param_3 = 0;
  } while( true );
}



uint64_t FUN_1807e6a4f(void)

{
  return 0;
}



uint64_t FUN_1807e6a5f(void)

{
  return 0;
}



uint64_t FUN_1807e6b00(longlong param_1,char param_2,char param_3,char param_4)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_2 == '\0') {
    *(int32_t *)(param_1 + 0x22c) = 0xffffffff;
    return 0;
  }
  if (param_3 == '\0') {
    if ((*(int *)(param_1 + 0x22c) + 1U & 0xfffffffe) == 0) {
      if ((*(uint *)(param_1 + 100) >> 8 & 1) != 0) {
        *(int32_t *)(param_1 + 0x22c) = 0;
        return 0;
      }
      *(int *)(param_1 + 0x22c) = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x116e8) + 1;
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0xa8);
    bVar2 = false;
    if ((param_4 == '\0') && (lVar1 != 0)) {
      func_0x000180743c20(lVar1,3);
      bVar2 = true;
    }
    *(int32_t *)(param_1 + 0x22c) = 0;
    if ((bVar2) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar1,3);
    }
  }
  return 0;
}



uint64_t FUN_1807e6b1f(longlong param_1,uint64_t param_2,char param_3,char param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong unaff_RBX;
  
  if (param_3 == '\0') {
    if ((*(int *)(param_1 + 0x22c) + 1U & 0xfffffffe) == 0) {
      if ((*(uint *)(param_1 + 100) >> 8 & 1) != 0) {
        *(int32_t *)(param_1 + 0x22c) = 0;
        return 0;
      }
      *(int *)(param_1 + 0x22c) = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x116e8) + 1;
    }
  }
  else {
    lVar1 = *(longlong *)(unaff_RBX + 0xa8);
    bVar2 = false;
    if ((param_4 == '\0') && (lVar1 != 0)) {
      func_0x000180743c20(lVar1,3);
      bVar2 = true;
    }
    *(int32_t *)(unaff_RBX + 0x22c) = 0;
    if ((bVar2) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar1,3);
    }
  }
  return 0;
}



uint64_t FUN_1807e6b74(longlong param_1)

{
  if ((*(int *)(param_1 + 0x22c) + 1U & 0xfffffffe) == 0) {
    if ((*(uint *)(param_1 + 100) >> 8 & 1) != 0) {
      *(int32_t *)(param_1 + 0x22c) = 0;
      return 0;
    }
    *(int *)(param_1 + 0x22c) = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x116e8) + 1;
  }
  return 0;
}



uint64_t FUN_1807e6ba0(longlong param_1)

{
  *(int *)(param_1 + 0x22c) = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x116e8) + 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807e6c70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = 0;
  (**(code **)(*(longlong *)(*param_1 + 0x220) + 8))(*(longlong *)(*param_1 + 0x220),0xc,0,0,0,0);
  _DAT_180c31140 = _DAT_180c31140 + -1;
  if (_DAT_180c31140 == 0) {
    lVar2 = 0x20;
    do {
      if (*(longlong *)(&system_data_0f40 + lVar1) != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(&system_data_0f40 + lVar1),
                      &unknown_var_2528_ptr,0xdd,1);
      }
      if (*(longlong *)(&system_data_1040 + lVar1) != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(&system_data_1040 + lVar1),
                      &unknown_var_2528_ptr,0xe2,1);
      }
      lVar1 = lVar1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807e6cad(void)

{
  ulonglong uVar1;
  uint unaff_EBP;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)unaff_EBP;
  uVar2 = (ulonglong)(unaff_EBP + 0x20);
  while( true ) {
    if (*(longlong *)(&system_data_0f40 + uVar1) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(&system_data_0f40 + uVar1),
                    &unknown_var_2528_ptr,0xdd,1);
    }
    if (*(longlong *)(&system_data_1040 + uVar1) != 0) break;
    uVar1 = uVar1 + 8;
    uVar2 = uVar2 - 1;
    if (uVar2 == 0) {
      return 0;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(&system_data_1040 + uVar1),
                &unknown_var_2528_ptr,0xe2,1);
}



uint64_t FUN_1807e6d5d(void)

{
  return 0;
}



uint64_t FUN_1807e6d70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x220);
  (**(code **)(lVar2 + 8))(lVar2,0xc,0,0,0,0);
  lVar1 = *(longlong *)(lVar1 + 0x220);
  (**(code **)(lVar1 + 8))(lVar1,0xc,0,1,0,0);
  return 0;
}



uint64_t FUN_1807e6df0(longlong *param_1,int32_t param_2,int32_t param_3)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_180743e10(*(uint64_t *)(lVar1 + 0xa8));
  (**(code **)(*(longlong *)(lVar1 + 0x220) + 0x18))(*(longlong *)(lVar1 + 0x220),param_2,param_3);
  FUN_180743e50(*(uint64_t *)(lVar1 + 0xa8));
  return 0;
}



uint64_t FUN_1807e6e50(longlong *param_1,int32_t param_2,int32_t *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int32_t uVar3;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x220);
  uVar3 = (**(code **)(lVar2 + 0x20))(lVar2);
  *param_3 = uVar3;
  if (param_4 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x220);
    (**(code **)(lVar1 + 8))(lVar1,7,param_2,0,param_4,0);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807e6ed0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int32_t auStackX_8 [2];
  ulonglong in_stack_ffffffffffffffc8;
  ulonglong uVar7;
  uint uVar8;
  
  piVar1 = *(int **)(param_1 + 0x108);
  iVar6 = 0;
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0x56737450)) {
    *(int **)(param_1 + 0x220) = piVar1;
    plVar2 = (longlong *)
             FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x18,&unknown_var_2528_ptr,0x8c,
                           in_stack_ffffffffffffffc8 & 0xffffffff00000000);
    if (plVar2 == (longlong *)0x0) {
      return 0x26;
    }
    plVar2[1] = (longlong)plVar2;
    *plVar2 = (longlong)plVar2;
    plVar2[2] = param_1;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0xa8) + 0x12780);
    lVar3 = *plVar4;
    *plVar2 = lVar3;
    plVar2[1] = (longlong)plVar4;
    *(longlong **)(lVar3 + 8) = plVar2;
    *(longlong **)plVar2[1] = plVar2;
  }
  func_0x000180746360(*(uint64_t *)(param_1 + 0xa8),auStackX_8,0);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x6d0);
  (**(code **)(*(longlong *)(param_1 + 0x220) + 8))(*(longlong *)(param_1 + 0x220),0,0,0,0,0);
  (**(code **)(*(longlong *)(param_1 + 0x220) + 8))
            (*(longlong *)(param_1 + 0x220),10,0,0,0,(float)iVar5);
  (**(code **)(*(longlong *)(param_1 + 0x220) + 8))
            (*(longlong *)(param_1 + 0x220),0xb,0,auStackX_8[0],0,0);
  uVar8 = 0;
  uVar7 = 0;
  (**(code **)(*(longlong *)(param_1 + 0x220) + 8))(*(longlong *)(param_1 + 0x220),0xc,0,1,0,0);
  if (_DAT_180c31140 == 0) {
    plVar2 = (longlong *)&system_data_0f40;
    iVar5 = iVar6;
    do {
      uVar8 = uVar8 & 0xffffff00;
      uVar7 = uVar7 & 0xffffffff00000000;
      lVar3 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x400,&unknown_var_2528_ptr,0xab,uVar7,
                            uVar8,1);
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        return 0x26;
      }
      iVar5 = iVar5 + 1;
      plVar2 = plVar2 + 1;
    } while (iVar5 < 0x20);
    plVar2 = (longlong *)&system_data_1040;
    do {
      uVar8 = uVar8 & 0xffffff00;
      uVar7 = uVar7 & 0xffffffff00000000;
      lVar3 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x400,&unknown_var_2528_ptr,0xb4,uVar7,
                            uVar8,1);
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        return 0x26;
      }
      iVar6 = iVar6 + 1;
      plVar2 = plVar2 + 1;
    } while (iVar6 < 0x20);
  }
  _DAT_180c31140 = _DAT_180c31140 + 1;
  *(int8_t *)(param_1 + 0x218) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807e6f74(void)

{
  longlong lVar1;
  int iVar2;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong *plVar3;
  int32_t in_stack_00000060;
  
  func_0x000180746360();
  (**(code **)(*(longlong *)(unaff_RSI + 0x220) + 8))(*(longlong *)(unaff_RSI + 0x220),0,0,0);
  (**(code **)(*(longlong *)(unaff_RSI + 0x220) + 8))(*(longlong *)(unaff_RSI + 0x220),10,0);
  (**(code **)(*(longlong *)(unaff_RSI + 0x220) + 8))
            (*(longlong *)(unaff_RSI + 0x220),0xb,0,in_stack_00000060);
  (**(code **)(*(longlong *)(unaff_RSI + 0x220) + 8))(*(longlong *)(unaff_RSI + 0x220),0xc,0);
  if (_DAT_180c31140 == 0) {
    plVar3 = (longlong *)&system_data_0f40;
    iVar2 = unaff_EBP;
    do {
      lVar1 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x400,&unknown_var_2528_ptr,0xab,
                            unaff_EBP);
      *plVar3 = lVar1;
      if (lVar1 == 0) {
        return 0x26;
      }
      iVar2 = iVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (iVar2 < 0x20);
    plVar3 = (longlong *)&system_data_1040;
    iVar2 = unaff_EBP;
    do {
      lVar1 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x400,&unknown_var_2528_ptr,0xb4,
                            unaff_EBP);
      *plVar3 = lVar1;
      if (lVar1 == 0) {
        return 0x26;
      }
      iVar2 = iVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (iVar2 < 0x20);
  }
  _DAT_180c31140 = _DAT_180c31140 + 1;
  *(char *)(unaff_RSI + 0x218) = (char)unaff_EBP;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807e7033(void)

{
  longlong lVar1;
  int iVar2;
  int8_t uVar3;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong *plVar4;
  int8_t uStack0000000000000028;
  int8_t uStack0000000000000030;
  
  plVar4 = (longlong *)&system_data_0f40;
  iVar2 = unaff_EBP;
  do {
    uStack0000000000000030 = 1;
    uVar3 = (int8_t)unaff_EBP;
    uStack0000000000000028 = uVar3;
    lVar1 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x400,&unknown_var_2528_ptr,0xab);
    *plVar4 = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    iVar2 = iVar2 + 1;
    plVar4 = plVar4 + 1;
  } while (iVar2 < 0x20);
  plVar4 = (longlong *)&system_data_1040;
  do {
    uStack0000000000000030 = 1;
    uStack0000000000000028 = uVar3;
    lVar1 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x400,&unknown_var_2528_ptr,0xb4);
    *plVar4 = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    unaff_EBP = unaff_EBP + 1;
    plVar4 = plVar4 + 1;
  } while (unaff_EBP < 0x20);
  _DAT_180c31140 = _DAT_180c31140 + 1;
  *(int8_t *)(unaff_RSI + 0x218) = uVar3;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






