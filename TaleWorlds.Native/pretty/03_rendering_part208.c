#include "TaleWorlds.Native.Split.h"

// 03_rendering_part208.c - 12 个函数

// 函数: void FUN_18038a7cd(int param_1,uint64_t param_2,uint64_t param_3,float param_4)
void FUN_18038a7cd(int param_1,uint64_t param_2,uint64_t param_3,float param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong unaff_RBP;
  int iVar5;
  int unaff_R14D;
  int iVar6;
  int iVar7;
  float in_XMM0_Da;
  float in_XMM4_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  
  iVar2 = *(int *)(unaff_RBP + 0x28ec);
  iVar6 = (int)(((unaff_XMM9_Da - *(float *)(unaff_RBP + 0x28d4)) - in_XMM0_Da) /
               *(float *)(unaff_RBP + 0x28e4));
  iVar7 = unaff_R14D;
  if ((-1 < iVar6) && (iVar7 = iVar6, iVar2 <= iVar6)) {
    iVar7 = iVar2 + -1;
  }
  iVar5 = (int)(((unaff_XMM7_Da - param_4) - in_XMM0_Da) / in_XMM4_Da);
  iVar6 = unaff_R14D;
  if ((-1 < iVar5) && (iVar6 = iVar5, param_1 <= iVar5)) {
    iVar6 = param_1 + -1;
  }
  iVar4 = (int)(((unaff_XMM8_Da - *(float *)(unaff_RBP + 0x28d4)) - in_XMM0_Da) /
               *(float *)(unaff_RBP + 0x28e4));
  iVar5 = unaff_R14D;
  if ((-1 < iVar4) && (iVar5 = iVar2 + -1, iVar4 < iVar2)) {
    iVar5 = iVar4;
  }
  iVar2 = iVar7;
  if (unaff_R14D <= iVar6) {
    do {
      for (; iVar2 <= iVar5; iVar2 = iVar2 + 1) {
        lVar3 = (longlong)(*(int *)(unaff_RBP + 0x28ec) * unaff_R14D + iVar2);
        lVar1 = *(longlong *)(unaff_RBP + 0x28c8) + lVar3 * 0x28;
        FUN_1800e8140(lVar1 + 8,(longlong)*(int *)(*(longlong *)(unaff_RBP + 0x28c8) + lVar3 * 0x28)
                     );
        FUN_18005ea90(lVar1 + 8,&stack0x00000090);
      }
      unaff_R14D = unaff_R14D + 1;
      iVar2 = iVar7;
    } while (unaff_R14D <= iVar6);
  }
  return;
}





// 函数: void FUN_18038a80e(float param_1,float param_2,float param_3,float param_4)
void FUN_18038a80e(float param_1,float param_2,float param_3,float param_4)

{
  longlong lVar1;
  int in_EAX;
  longlong lVar2;
  int in_ECX;
  int iVar3;
  longlong unaff_RBP;
  int unaff_ESI;
  int iVar4;
  int iVar5;
  int unaff_R14D;
  float in_XMM4_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  
  iVar4 = (int)(((unaff_XMM7_Da - param_4) - param_1) / in_XMM4_Da);
  iVar5 = unaff_R14D;
  if ((-1 < iVar4) && (iVar5 = iVar4, in_ECX <= iVar4)) {
    iVar5 = in_ECX + -1;
  }
  iVar3 = (int)(((unaff_XMM8_Da - param_2) - param_1) / param_3);
  iVar4 = unaff_R14D;
  if ((-1 < iVar3) && (iVar4 = in_EAX + -1, iVar3 < in_EAX)) {
    iVar4 = iVar3;
  }
  if (unaff_ESI <= iVar5) {
    do {
      iVar3 = unaff_R14D;
      if (unaff_R14D <= iVar4) {
        do {
          lVar2 = (longlong)(*(int *)(unaff_RBP + 0x28ec) * unaff_ESI + iVar3);
          lVar1 = *(longlong *)(unaff_RBP + 0x28c8) + lVar2 * 0x28;
          FUN_1800e8140(lVar1 + 8,
                        (longlong)*(int *)(*(longlong *)(unaff_RBP + 0x28c8) + lVar2 * 0x28));
          FUN_18005ea90(lVar1 + 8,&stack0x00000090);
          iVar3 = iVar3 + 1;
        } while (iVar3 <= iVar4);
      }
      unaff_ESI = unaff_ESI + 1;
    } while (unaff_ESI <= iVar5);
  }
  return;
}





// 函数: void FUN_18038a837(float param_1,float param_2,float param_3)
void FUN_18038a837(float param_1,float param_2,float param_3)

{
  longlong lVar1;
  int in_EAX;
  longlong lVar2;
  int iVar3;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_R14D;
  int iVar4;
  int unaff_R15D;
  float unaff_XMM8_Da;
  
  iVar3 = (int)(((unaff_XMM8_Da - param_2) - param_1) / param_3);
  iVar4 = unaff_R14D;
  if ((-1 < iVar3) && (iVar4 = in_EAX + -1, iVar3 < in_EAX)) {
    iVar4 = iVar3;
  }
  if (unaff_ESI <= unaff_R14D) {
    do {
      iVar3 = unaff_R15D;
      if (unaff_R15D <= iVar4) {
        do {
          lVar2 = (longlong)(*(int *)(unaff_RBP + 0x28ec) * unaff_ESI + iVar3);
          lVar1 = *(longlong *)(unaff_RBP + 0x28c8) + lVar2 * 0x28;
          FUN_1800e8140(lVar1 + 8,
                        (longlong)*(int *)(*(longlong *)(unaff_RBP + 0x28c8) + lVar2 * 0x28));
          FUN_18005ea90(lVar1 + 8,&stack0x00000090);
          iVar3 = iVar3 + 1;
        } while (iVar3 <= iVar4);
      }
      unaff_ESI = unaff_ESI + 1;
    } while (unaff_ESI <= unaff_R14D);
  }
  return;
}





// 函数: void FUN_18038a863(int param_1)
void FUN_18038a863(int param_1)

{
  longlong lVar1;
  int in_EAX;
  longlong lVar2;
  longlong unaff_RBP;
  int unaff_ESI;
  int iVar3;
  int unaff_R12D;
  int iVar4;
  int unaff_R15D;
  
  iVar4 = in_EAX + -1;
  if (param_1 < in_EAX) {
    iVar4 = param_1;
  }
  if (unaff_ESI <= unaff_R12D) {
    do {
      iVar3 = unaff_R15D;
      if (unaff_R15D <= iVar4) {
        do {
          lVar2 = (longlong)(*(int *)(unaff_RBP + 0x28ec) * unaff_ESI + iVar3);
          lVar1 = *(longlong *)(unaff_RBP + 0x28c8) + lVar2 * 0x28;
          FUN_1800e8140(lVar1 + 8,
                        (longlong)*(int *)(*(longlong *)(unaff_RBP + 0x28c8) + lVar2 * 0x28));
          FUN_18005ea90(lVar1 + 8,&stack0x00000090);
          iVar3 = iVar3 + 1;
        } while (iVar3 <= iVar4);
      }
      unaff_ESI = unaff_ESI + 1;
    } while (unaff_ESI <= unaff_R12D);
  }
  return;
}





// 函数: void FUN_18038a873(void)
void FUN_18038a873(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RBP;
  int unaff_ESI;
  int iVar3;
  int unaff_R12D;
  int unaff_R14D;
  int unaff_R15D;
  
  do {
    iVar3 = unaff_R15D;
    if (unaff_R15D <= unaff_R14D) {
      do {
        lVar2 = (longlong)(*(int *)(unaff_RBP + 0x28ec) * unaff_ESI + iVar3);
        lVar1 = *(longlong *)(unaff_RBP + 0x28c8) + lVar2 * 0x28;
        FUN_1800e8140(lVar1 + 8,(longlong)*(int *)(*(longlong *)(unaff_RBP + 0x28c8) + lVar2 * 0x28)
                     );
        FUN_18005ea90(lVar1 + 8,&stack0x00000090);
        iVar3 = iVar3 + 1;
      } while (iVar3 <= unaff_R14D);
    }
    unaff_ESI = unaff_ESI + 1;
  } while (unaff_ESI <= unaff_R12D);
  return;
}





// 函数: void FUN_18038a8eb(void)
void FUN_18038a8eb(void)

{
  return;
}



int32_t * FUN_18038a910(int32_t *param_1)

{
  int32_t *puVar1;
  int32_t *puVar2;
  longlong lVar3;
  
  FUN_1808fc838();
  puVar1 = param_1 + 0x102;
  *(uint64_t *)(param_1 + 0x108) = 0;
  param_1[0x10c] = 3;
  *(int32_t **)puVar1 = puVar1;
  *(int32_t **)(param_1 + 0x104) = puVar1;
  *(uint64_t *)(param_1 + 0x106) = 0;
  *(int8_t *)(param_1 + 0x108) = 0;
  *(uint64_t *)(param_1 + 0x10a) = 0;
  *(uint64_t *)(param_1 + 0x10e) = 0;
  *(uint64_t *)(param_1 + 0x110) = 0;
  *(uint64_t *)(param_1 + 0x112) = 0;
  param_1[0x114] = 0x10;
  *(uint64_t *)(param_1 + 0x116) = 0;
  *(uint64_t *)(param_1 + 0x118) = 0;
  *(uint64_t *)(param_1 + 0x11a) = 0;
  param_1[0x11c] = 0x10;
  *(uint64_t *)(param_1 + 0x11e) = 0;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x122) = 0;
  param_1[0x124] = 0x10;
  *(uint64_t *)(param_1 + 0x126) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x12a) = 0;
  param_1[300] = 3;
  *(uint64_t *)(param_1 + 0x12e) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x132) = 0;
  param_1[0x134] = 3;
  *(uint64_t *)(param_1 + 0x136) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x13a) = 0;
  param_1[0x13c] = 3;
  *(uint64_t *)(param_1 + 0x13e) = 0;
  *(uint64_t *)(param_1 + 0x140) = 0;
  *(uint64_t *)(param_1 + 0x142) = 0;
  param_1[0x144] = 3;
  param_1[0x14c] = 1;
  param_1[0x146] = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x14a) = 0;
  *param_1 = 0;
  *(void **)(param_1 + 0x150) = &UNK_180396c80;
  *(code **)(param_1 + 0x14e) = FUN_18038a340;
  *(void **)(param_1 + 0x154) = &UNK_180396c80;
  *(code **)(param_1 + 0x152) = FUN_18038a630;
  *(int8_t *)(param_1 + 0x147) = 1;
  puVar2 = param_1 + 0x156;
  puVar1 = param_1 + 0x15e;
  lVar3 = 8;
  do {
    *puVar2 = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18038aae0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_18038aae0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong alStack_40 [3];
  
  if ((*(longlong *)(param_1 + 0x538) != 0) || (*(longlong *)(param_1 + 0x540) != 0)) {
    (**(code **)(param_1 + 0x540))
              (*(longlong *)(param_1 + 0x538),*(uint64_t *)(param_1 + 0x528),param_2,param_4,
               0xfffffffffffffffe);
  }
  plVar4 = *(longlong **)(param_1 + 0x478);
  uVar8 = *(longlong *)(param_1 + 0x480) - (longlong)plVar4 >> 3;
  uVar7 = 0;
  uVar5 = uVar7;
  if (uVar8 != 0) {
    do {
      if (*plVar4 == param_2) break;
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
      plVar4 = plVar4 + 1;
    } while ((ulonglong)(longlong)(int)uVar6 < uVar8);
  }
  if (*(char *)(param_2 + 0xa8) != '\0') {
    plVar4 = (longlong *)(param_2 + 0x60);
    uVar5 = uVar7;
    do {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        plVar1 = (longlong *)(lVar2 + 0x10);
        lVar3 = *plVar1;
        uVar8 = uVar7;
        if (lVar3 != 0) {
          if (lVar3 != param_2) {
            alStack_40[0] = lVar3;
          }
          *plVar1 = 0;
          uVar8 = (ulonglong)(lVar3 != param_2);
        }
        uVar6 = (uint)uVar8;
        lVar3 = *(longlong *)(lVar2 + 0x18);
        if (lVar3 != 0) {
          if (lVar3 != param_2) {
            alStack_40[uVar8] = lVar3;
            uVar6 = uVar6 + 1;
          }
          *(uint64_t *)(lVar2 + 0x18) = 0;
        }
        *(char *)(lVar2 + 0x20) = (char)uVar6;
        if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(plVar1,alStack_40,(ulonglong)uVar6 << 3);
        }
      }
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
      plVar4 = plVar4 + 1;
    } while ((int)uVar6 < (int)(uint)*(byte *)(param_2 + 0xa8));
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_180a21d50);
}



ulonglong FUN_18038acd0(longlong param_1,uint64_t *param_2,longlong param_3,uint param_4)

{
  int *in_RAX;
  
  if (((*(char *)(param_1 + 0x138) == '\0') ||
      (in_RAX = (int *)func_0x00018038b420(),
      *(longlong *)(param_1 + 0x60 + (longlong)(int)in_RAX * 8) == param_3)) &&
     ((*(uint *)(param_1 + 0x134) & param_4) != 0)) {
    if ((0 < *(int *)(param_1 + 0x130)) && (param_2 != (uint64_t *)0x0)) {
      for (in_RAX = (int *)*param_2; in_RAX != (int *)param_2[1]; in_RAX = in_RAX + 1) {
        if (*in_RAX == *(int *)(param_1 + 0x130)) goto LAB_18038ad50;
      }
    }
    in_RAX = (int *)0x0;
    if (((*(byte *)(param_1 + 0x139) & 1) != 0) && ((*(byte *)(param_1 + 0x139) & 2) == 0)) {
      return 1;
    }
  }
LAB_18038ad50:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



uint64_t * FUN_18038ad70(uint64_t *param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  
  puVar2 = param_1 + 0x1a;
  lVar1 = 2;
  do {
    func_0x000180074f10(puVar2);
    puVar2 = (uint64_t *)((longlong)puVar2 + 0xc);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(int32_t *)(param_1 + 0x22) = 3;
  *(byte *)((longlong)param_1 + 0x139) = *(byte *)((longlong)param_1 + 0x139) & 0xf9;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(int8_t *)(param_1 + 0x15) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x26) = 0;
  *(byte *)((longlong)param_1 + 0x139) = *(byte *)((longlong)param_1 + 0x139) | 1;
  param_1[0x1d] = 0;
  *(int32_t *)(param_1 + 0x1e) = 0;
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  *(int32_t *)(param_1 + 0x1b) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0xdc) = 0;
  *(int32_t *)((longlong)param_1 + 0xe4) = 0x3f800000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(int32_t *)((longlong)param_1 + 0x134) = 0xffffffff;
  param_1[0x25] = 0xffffffffffffffff;
  *(int8_t *)(param_1 + 0x27) = 0;
  param_1[8] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x20] = param_1[0x1f];
  return param_1;
}





// 函数: void FUN_18038af00(longlong param_1)
void FUN_18038af00(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int8_t auVar7 [16];
  float fVar8;
  float fVar9;
  
  pfVar1 = *(float **)(param_1 + 0x80);
  pfVar2 = *(float **)(param_1 + 0x88);
  pfVar3 = *(float **)(param_1 + 0x90);
  fVar9 = (pfVar2[1] - pfVar1[1]) * (pfVar3[2] - pfVar1[2]) -
          (pfVar2[2] - pfVar1[2]) * (pfVar3[1] - pfVar1[1]);
  fVar4 = (pfVar2[2] - pfVar1[2]) * (*pfVar3 - *pfVar1) -
          (*pfVar2 - *pfVar1) * (pfVar3[2] - pfVar1[2]);
  fVar8 = (*pfVar2 - *pfVar1) * (pfVar3[1] - pfVar1[1]) -
          (pfVar2[1] - pfVar1[1]) * (*pfVar3 - *pfVar1);
  fVar5 = fVar4 * fVar4 + fVar9 * fVar9 + fVar8 * fVar8;
  auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
  fVar6 = auVar7._0_4_;
  fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
  *(ulonglong *)(param_1 + 0xd0) = CONCAT44(fVar4 * fVar5,fVar9 * fVar5);
  *(float *)(param_1 + 0xd8) = fVar8 * fVar5;
  if (3 < *(byte *)(param_1 + 0xa8)) {
    pfVar2 = *(float **)(param_1 + 0x98);
    fVar9 = (pfVar3[1] - pfVar1[1]) * (pfVar2[2] - pfVar1[2]) -
            (pfVar3[2] - pfVar1[2]) * (pfVar2[1] - pfVar1[1]);
    fVar8 = (*pfVar3 - *pfVar1) * (pfVar2[1] - pfVar1[1]) -
            (pfVar3[1] - pfVar1[1]) * (*pfVar2 - *pfVar1);
    fVar5 = (pfVar3[2] - pfVar1[2]) * (*pfVar2 - *pfVar1) -
            (*pfVar3 - *pfVar1) * (pfVar2[2] - pfVar1[2]);
    fVar4 = fVar9 * fVar9 + fVar5 * fVar5 + fVar8 * fVar8;
    auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar6 = auVar7._0_4_;
    fVar4 = fVar6 * 0.5 * (3.0 - fVar4 * fVar6 * fVar6);
    *(ulonglong *)(param_1 + 0xdc) = CONCAT44(fVar5 * fVar4,fVar4 * fVar9);
    *(float *)(param_1 + 0xe4) = fVar8 * fVar4;
  }
  return;
}





// 函数: void FUN_18038b160(ulonglong param_1)
void FUN_18038b160(ulonglong param_1)

{
  byte bVar1;
  float *pfVar2;
  ulonglong uVar3;
  undefined7 uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  int iVar8;
  float *pfVar9;
  ulonglong uVar10;
  uint uVar11;
  uint64_t *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  pfVar9 = (float *)(param_1 + 0xe8);
  uVar7 = 0;
  fVar16 = 0.0;
  pfVar9[0] = 0.0;
  pfVar9[1] = 0.0;
  *(int32_t *)(param_1 + 0xf0) = 0;
  bVar1 = *(byte *)(param_1 + 0xa8);
  if (bVar1 != 0) {
    puVar6 = (ulonglong *)(param_1 + 0xb0);
    uVar10 = uVar7;
    do {
      pfVar2 = (float *)puVar6[-6];
      uVar3 = puVar6[-10];
      *puVar6 = 0;
      *pfVar9 = *pfVar2 + *pfVar9;
      *(float *)(param_1 + 0xec) = pfVar2[1] + *(float *)(param_1 + 0xec);
      *(float *)(param_1 + 0xf0) = pfVar2[2] + *(float *)(param_1 + 0xf0);
      if (*(char *)(uVar3 + 0x20) == '\x02') {
        if (*(ulonglong *)(uVar3 + 0x10) == param_1) {
          uVar5 = *(ulonglong *)(uVar3 + 0x18);
        }
        else {
          uVar5 = uVar7;
          if (*(ulonglong *)(uVar3 + 0x18) == param_1) {
            uVar5 = *(ulonglong *)(uVar3 + 0x10);
          }
        }
        *puVar6 = uVar5;
      }
      bVar1 = *(byte *)(param_1 + 0xa8);
      uVar11 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar11;
      puVar6 = puVar6 + 1;
    } while ((int)uVar11 < (int)(uint)bVar1);
  }
  fVar15 = 1.0 / (float)bVar1;
  *pfVar9 = fVar15 * *pfVar9;
  *(float *)(param_1 + 0xec) = fVar15 * *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0xf0) = fVar15 * *(float *)(param_1 + 0xf0);
  bVar1 = *(byte *)(param_1 + 0xa8);
  *(int32_t *)(param_1 + 0xa0) = 0;
  *(int32_t *)(param_1 + 0xa4) = 0x7149f2ca;
  uVar10 = uVar7;
  if (bVar1 != 0) {
    puVar12 = (uint64_t *)(param_1 + 0x80);
    fVar15 = 1e+30;
    do {
      uVar11 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar11;
      fVar13 = ((float *)*puVar12)[1] - pfVar9[1];
      fVar14 = *(float *)*puVar12 - *pfVar9;
      fVar13 = SQRT(fVar13 * fVar13 + fVar14 * fVar14) + 0.012;
      fVar13 = fVar13 * fVar13;
      if (fVar13 <= fVar16) {
        fVar13 = fVar16;
      }
      fVar16 = fVar13;
      *(float *)(param_1 + 0xa0) = fVar16;
      fVar13 = (float)FUN_180645690(*puVar12,*(uint64_t *)
                                              (param_1 + 0x80 +
                                              (longlong)((int)uVar11 % (int)(uint)bVar1) * 8));
      puVar12 = puVar12 + 1;
      fVar13 = (fVar13 - 0.012) * (fVar13 - 0.012);
      if (fVar15 <= fVar13) {
        fVar13 = fVar15;
      }
      fVar15 = fVar13;
      *(float *)(param_1 + 0xa4) = fVar15;
    } while ((int)uVar11 < (int)(uint)bVar1);
  }
  if ((*(longlong *)(param_1 + 0x78) == 0) ||
     (iVar8 = 1, *(char *)(*(longlong *)(param_1 + 0x78) + 0x20) != '\x02')) {
    iVar8 = (int)uVar10;
  }
  uVar4 = (undefined7)(uVar10 >> 8);
  if (((int)CONCAT71(uVar4,*(char *)(*(longlong *)(param_1 + 0x60) + 0x20) == '\x02') +
       (int)CONCAT71(uVar4,*(char *)(*(longlong *)(param_1 + 0x68) + 0x20) == '\x02') + iVar8 +
       (int)CONCAT71(uVar4,*(char *)(*(longlong *)(param_1 + 0x70) + 0x20) == '\x02') != 2) &&
     (*(char *)(param_1 + 0x138) != '\0')) {
    *(int8_t *)(param_1 + 0x138) = 0;
  }
  return;
}





// 函数: void FUN_18038b164(ulonglong param_1)
void FUN_18038b164(ulonglong param_1)

{
  byte bVar1;
  float *pfVar2;
  ulonglong uVar3;
  undefined7 uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  int iVar8;
  float *pfVar9;
  ulonglong uVar10;
  uint uVar11;
  uint64_t *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int32_t uStack0000000000000028;
  
  pfVar9 = (float *)(param_1 + 0xe8);
  uVar7 = 0;
  fVar16 = 0.0;
  uStack0000000000000028 = 0;
  pfVar9[0] = 0.0;
  pfVar9[1] = 0.0;
  *(int32_t *)(param_1 + 0xf0) = 0;
  bVar1 = *(byte *)(param_1 + 0xa8);
  if (bVar1 != 0) {
    puVar6 = (ulonglong *)(param_1 + 0xb0);
    uVar10 = uVar7;
    do {
      pfVar2 = (float *)puVar6[-6];
      uVar3 = puVar6[-10];
      *puVar6 = 0;
      *pfVar9 = *pfVar2 + *pfVar9;
      *(float *)(param_1 + 0xec) = pfVar2[1] + *(float *)(param_1 + 0xec);
      *(float *)(param_1 + 0xf0) = pfVar2[2] + *(float *)(param_1 + 0xf0);
      if (*(char *)(uVar3 + 0x20) == '\x02') {
        if (*(ulonglong *)(uVar3 + 0x10) == param_1) {
          uVar5 = *(ulonglong *)(uVar3 + 0x18);
        }
        else {
          uVar5 = uVar7;
          if (*(ulonglong *)(uVar3 + 0x18) == param_1) {
            uVar5 = *(ulonglong *)(uVar3 + 0x10);
          }
        }
        *puVar6 = uVar5;
      }
      bVar1 = *(byte *)(param_1 + 0xa8);
      uVar11 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar11;
      puVar6 = puVar6 + 1;
    } while ((int)uVar11 < (int)(uint)bVar1);
  }
  fVar15 = 1.0 / (float)bVar1;
  *pfVar9 = fVar15 * *pfVar9;
  *(float *)(param_1 + 0xec) = fVar15 * *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0xf0) = fVar15 * *(float *)(param_1 + 0xf0);
  bVar1 = *(byte *)(param_1 + 0xa8);
  *(int32_t *)(param_1 + 0xa0) = 0;
  *(int32_t *)(param_1 + 0xa4) = 0x7149f2ca;
  uVar10 = uVar7;
  if (bVar1 != 0) {
    puVar12 = (uint64_t *)(param_1 + 0x80);
    fVar15 = 1e+30;
    do {
      uVar11 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar11;
      fVar13 = ((float *)*puVar12)[1] - pfVar9[1];
      fVar14 = *(float *)*puVar12 - *pfVar9;
      fVar13 = SQRT(fVar13 * fVar13 + fVar14 * fVar14) + 0.012;
      fVar13 = fVar13 * fVar13;
      if (fVar13 <= fVar16) {
        fVar13 = fVar16;
      }
      fVar16 = fVar13;
      *(float *)(param_1 + 0xa0) = fVar16;
      fVar13 = (float)FUN_180645690(*puVar12,*(uint64_t *)
                                              (param_1 + 0x80 +
                                              (longlong)((int)uVar11 % (int)(uint)bVar1) * 8));
      puVar12 = puVar12 + 1;
      fVar13 = (fVar13 - 0.012) * (fVar13 - 0.012);
      if (fVar15 <= fVar13) {
        fVar13 = fVar15;
      }
      fVar15 = fVar13;
      *(float *)(param_1 + 0xa4) = fVar15;
    } while ((int)uVar11 < (int)(uint)bVar1);
  }
  if ((*(longlong *)(param_1 + 0x78) == 0) ||
     (iVar8 = 1, *(char *)(*(longlong *)(param_1 + 0x78) + 0x20) != '\x02')) {
    iVar8 = (int)uVar10;
  }
  uVar4 = (undefined7)(uVar10 >> 8);
  if (((int)CONCAT71(uVar4,*(char *)(*(longlong *)(param_1 + 0x60) + 0x20) == '\x02') +
       (int)CONCAT71(uVar4,*(char *)(*(longlong *)(param_1 + 0x68) + 0x20) == '\x02') + iVar8 +
       (int)CONCAT71(uVar4,*(char *)(*(longlong *)(param_1 + 0x70) + 0x20) == '\x02') != 2) &&
     (*(char *)(param_1 + 0x138) != '\0')) {
    *(int8_t *)(param_1 + 0x138) = 0;
  }
  return;
}





// 函数: void FUN_18038b295(uint64_t param_1,uint64_t param_2,float *param_3,longlong param_4)
void FUN_18038b295(uint64_t param_1,uint64_t param_2,float *param_3,longlong param_4)

{
  undefined7 uVar1;
  int unaff_EBX;
  int unaff_EDI;
  int iVar2;
  uint64_t in_R10;
  uint64_t *puVar3;
  float fVar4;
  float fVar5;
  float unaff_XMM6_Da;
  float fVar6;
  
  puVar3 = (uint64_t *)(param_4 + 0x80);
  fVar6 = 1e+30;
  do {
    unaff_EBX = unaff_EBX + 1;
    fVar4 = ((float *)*puVar3)[1] - param_3[1];
    fVar5 = *(float *)*puVar3 - *param_3;
    fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5) + 0.012;
    fVar4 = fVar4 * fVar4;
    if (fVar4 <= unaff_XMM6_Da) {
      fVar4 = unaff_XMM6_Da;
    }
    *(float *)(param_4 + 0xa0) = fVar4;
    fVar5 = (float)FUN_180645690(*puVar3,*(uint64_t *)
                                          (param_4 + 0x80 + (longlong)(unaff_EBX % unaff_EDI) * 8));
    puVar3 = puVar3 + 1;
    fVar5 = (fVar5 - 0.012) * (fVar5 - 0.012);
    if (fVar6 <= fVar5) {
      fVar5 = fVar6;
    }
    *(float *)(param_4 + 0xa4) = fVar5;
    unaff_XMM6_Da = fVar4;
    fVar6 = fVar5;
  } while (unaff_EBX < unaff_EDI);
  if ((*(longlong *)(param_4 + 0x78) == 0) ||
     (iVar2 = 1, *(char *)(*(longlong *)(param_4 + 0x78) + 0x20) != '\x02')) {
    iVar2 = (int)in_R10;
  }
  uVar1 = (undefined7)((ulonglong)in_R10 >> 8);
  if (((int)CONCAT71(uVar1,*(char *)(*(longlong *)(param_4 + 0x60) + 0x20) == '\x02') +
       (int)CONCAT71(uVar1,*(char *)(*(longlong *)(param_4 + 0x68) + 0x20) == '\x02') + iVar2 +
       (int)CONCAT71(uVar1,*(char *)(*(longlong *)(param_4 + 0x70) + 0x20) == '\x02') != 2) &&
     (*(char *)(param_4 + 0x138) != '\0')) {
    *(int8_t *)(param_4 + 0x138) = 0;
  }
  return;
}





// 函数: void FUN_18038b346(void)
void FUN_18038b346(void)

{
  undefined7 uVar1;
  int iVar2;
  longlong in_R9;
  uint64_t in_R10;
  
  if ((*(longlong *)(in_R9 + 0x78) == 0) ||
     (iVar2 = 1, *(char *)(*(longlong *)(in_R9 + 0x78) + 0x20) != '\x02')) {
    iVar2 = (int)in_R10;
  }
  uVar1 = (undefined7)((ulonglong)in_R10 >> 8);
  if (((int)CONCAT71(uVar1,*(char *)(*(longlong *)(in_R9 + 0x60) + 0x20) == '\x02') +
       (int)CONCAT71(uVar1,*(char *)(*(longlong *)(in_R9 + 0x68) + 0x20) == '\x02') + iVar2 +
       (int)CONCAT71(uVar1,*(char *)(*(longlong *)(in_R9 + 0x70) + 0x20) == '\x02') != 2) &&
     (*(char *)(in_R9 + 0x138) != '\0')) {
    *(int8_t *)(in_R9 + 0x138) = 0;
  }
  return;
}





