#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part221.c - 6 个函数

// 函数: void FUN_180795c00(void)
void FUN_180795c00(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c10d54,0,0x5c);
}



uint64_t
FUN_180795df0(int64_t param_1,int64_t param_2,int64_t param_3,uint param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint64_t uVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *(float *)(param_1 + 0x230);
  fVar2 = *(float *)(param_1 + 0x228);
  fVar3 = *(float *)(param_1 + 0x22c);
  if ((param_2 != 0) && (uVar7 = 0, param_4 != 0)) {
    do {
      fVar9 = *(float *)(param_1 + 0x218) - fVar1;
      *(float *)(param_1 + 0x218) = fVar9;
      if (fVar9 < fVar2) {
        *(float *)(param_1 + 0x218) = fVar2;
        fVar9 = fVar2;
      }
      uVar4 = 0;
      if (3 < param_5) {
        uVar6 = uVar7 * param_5 + 1;
        uVar4 = (param_5 - 4 >> 2) + 1;
        uVar8 = (uint64_t)uVar4;
        uVar4 = uVar4 * 4;
        do {
          fVar10 = ABS(*(float *)(param_2 + (uint64_t)(uVar6 - 1) * 4));
          if (fVar9 < fVar10) {
            *(float *)(param_1 + 0x218) = fVar10;
            fVar9 = fVar10;
          }
          fVar10 = ABS(*(float *)(param_2 + (uint64_t)uVar6 * 4));
          if (fVar9 < fVar10) {
            *(float *)(param_1 + 0x218) = fVar10;
            fVar9 = fVar10;
          }
          fVar10 = ABS(*(float *)(param_2 + (uint64_t)(uVar6 + 1) * 4));
          if (fVar9 < fVar10) {
            *(float *)(param_1 + 0x218) = fVar10;
            fVar9 = fVar10;
          }
          fVar10 = ABS(*(float *)(param_2 + (uint64_t)(uVar6 + 2) * 4));
          if (fVar9 < fVar10) {
            *(float *)(param_1 + 0x218) = fVar10;
            fVar9 = fVar10;
          }
          uVar6 = uVar6 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (uVar4 < param_5) {
        fVar9 = *(float *)(param_1 + 0x218);
        do {
          fVar10 = ABS(*(float *)(param_2 + (uint64_t)(uVar7 * param_5 + uVar4) * 4));
          if (fVar9 < fVar10) {
            *(float *)(param_1 + 0x218) = fVar10;
            fVar9 = fVar10;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_5);
      }
      uVar4 = 0;
      fVar10 = 1.0 / fVar9;
      if (fVar3 <= 1.0 / fVar9) {
        fVar10 = fVar3;
      }
      if (3 < param_5) {
        uVar6 = uVar7 * param_5 + 1;
        uVar4 = (param_5 - 4 >> 2) + 1;
        uVar8 = (uint64_t)uVar4;
        uVar4 = uVar4 * 4;
        do {
          *(float *)(param_3 + (uint64_t)(uVar6 - 1) * 4) =
               fVar10 * *(float *)(param_2 + (uint64_t)(uVar6 - 1) * 4);
          *(float *)(param_3 + (uint64_t)uVar6 * 4) =
               fVar10 * *(float *)(param_2 + (uint64_t)uVar6 * 4);
          *(float *)(param_3 + (uint64_t)(uVar6 + 1) * 4) =
               fVar10 * *(float *)(param_2 + (uint64_t)(uVar6 + 1) * 4);
          uVar5 = uVar6 + 2;
          uVar6 = uVar6 + 4;
          *(float *)(param_3 + (uint64_t)uVar5 * 4) =
               fVar10 * *(float *)(param_2 + (uint64_t)uVar5 * 4);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (uVar4 < param_5) {
        do {
          uVar8 = (uint64_t)(uVar7 * param_5 + uVar4);
          uVar4 = uVar4 + 1;
          *(float *)(param_3 + uVar8 * 4) = fVar10 * *(float *)(param_2 + uVar8 * 4);
        } while (uVar4 < param_5);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_4);
  }
  return 0;
}



uint64_t FUN_180795e31(int64_t param_1,uint64_t param_2,uint64_t param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_EBX;
  uint unaff_EBP;
  uint uVar4;
  int64_t unaff_RDI;
  uint64_t uVar5;
  int64_t in_R11;
  float fVar6;
  float fVar7;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM7_Da;
  
  uVar4 = 0;
  if (param_4 != 0) {
    do {
      fVar6 = *(float *)(param_1 + 0x218) - in_XMM5_Da;
      *(float *)(param_1 + 0x218) = fVar6;
      if (fVar6 < in_XMM4_Da) {
        *(float *)(param_1 + 0x218) = in_XMM4_Da;
        fVar6 = in_XMM4_Da;
      }
      uVar1 = 0;
      if (3 < unaff_EBX) {
        uVar3 = uVar4 * unaff_EBX + 1;
        uVar1 = (unaff_EBX - 4 >> 2) + 1;
        uVar5 = (uint64_t)uVar1;
        uVar1 = uVar1 * 4;
        do {
          fVar7 = ABS(*(float *)(in_R11 + (uint64_t)(uVar3 - 1) * 4));
          if (fVar6 < fVar7) {
            *(float *)(param_1 + 0x218) = fVar7;
            fVar6 = fVar7;
          }
          fVar7 = ABS(*(float *)(in_R11 + (uint64_t)uVar3 * 4));
          if (fVar6 < fVar7) {
            *(float *)(param_1 + 0x218) = fVar7;
            fVar6 = fVar7;
          }
          fVar7 = ABS(*(float *)(in_R11 + (uint64_t)(uVar3 + 1) * 4));
          if (fVar6 < fVar7) {
            *(float *)(param_1 + 0x218) = fVar7;
            fVar6 = fVar7;
          }
          fVar7 = ABS(*(float *)(in_R11 + (uint64_t)(uVar3 + 2) * 4));
          if (fVar6 < fVar7) {
            *(float *)(param_1 + 0x218) = fVar7;
            fVar6 = fVar7;
          }
          uVar3 = uVar3 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uVar1 < unaff_EBX) {
        fVar6 = *(float *)(param_1 + 0x218);
        do {
          fVar7 = ABS(*(float *)(in_R11 + (uint64_t)(uVar4 * unaff_EBX + uVar1) * 4));
          if (fVar6 < fVar7) {
            *(float *)(param_1 + 0x218) = fVar7;
            fVar6 = fVar7;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < unaff_EBX);
      }
      uVar1 = 0;
      fVar7 = 1.0 / fVar6;
      if (unaff_XMM7_Da <= 1.0 / fVar6) {
        fVar7 = unaff_XMM7_Da;
      }
      if (3 < unaff_EBX) {
        uVar3 = uVar4 * unaff_EBX + 1;
        uVar1 = (unaff_EBX - 4 >> 2) + 1;
        uVar5 = (uint64_t)uVar1;
        uVar1 = uVar1 * 4;
        do {
          *(float *)(unaff_RDI + (uint64_t)(uVar3 - 1) * 4) =
               fVar7 * *(float *)(in_R11 + (uint64_t)(uVar3 - 1) * 4);
          *(float *)(unaff_RDI + (uint64_t)uVar3 * 4) =
               fVar7 * *(float *)(in_R11 + (uint64_t)uVar3 * 4);
          *(float *)(unaff_RDI + (uint64_t)(uVar3 + 1) * 4) =
               fVar7 * *(float *)(in_R11 + (uint64_t)(uVar3 + 1) * 4);
          uVar2 = uVar3 + 2;
          uVar3 = uVar3 + 4;
          *(float *)(unaff_RDI + (uint64_t)uVar2 * 4) =
               fVar7 * *(float *)(in_R11 + (uint64_t)uVar2 * 4);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uVar1 < unaff_EBX) {
        do {
          uVar5 = (uint64_t)(uVar4 * unaff_EBX + uVar1);
          uVar1 = uVar1 + 1;
          *(float *)(unaff_RDI + uVar5 * 4) = fVar7 * *(float *)(in_R11 + uVar5 * 4);
        } while (uVar1 < unaff_EBX);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < unaff_EBP);
  }
  return 0;
}



uint64_t FUN_180795e49(int64_t param_1,uint64_t param_2,uint64_t param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_EBX;
  uint unaff_EBP;
  uint unaff_ESI;
  int64_t unaff_RDI;
  uint64_t uVar4;
  int64_t in_R11;
  float fVar5;
  float fVar6;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM7_Da;
  
  do {
    fVar5 = *(float *)(param_1 + 0x218) - in_XMM5_Da;
    *(float *)(param_1 + 0x218) = fVar5;
    if (fVar5 < in_XMM4_Da) {
      *(float *)(param_1 + 0x218) = in_XMM4_Da;
      fVar5 = in_XMM4_Da;
    }
    uVar1 = 0;
    if (3 < unaff_EBX) {
      uVar3 = unaff_ESI * unaff_EBX + 1;
      uVar1 = (unaff_EBX - 4 >> 2) + 1;
      uVar4 = (uint64_t)uVar1;
      uVar1 = uVar1 * 4;
      do {
        fVar6 = (float)(*(uint *)(in_R11 + (uint64_t)(uVar3 - 1) * 4) & param_4);
        if (fVar5 < fVar6) {
          *(float *)(param_1 + 0x218) = fVar6;
          fVar5 = fVar6;
        }
        fVar6 = (float)(*(uint *)(in_R11 + (uint64_t)uVar3 * 4) & param_4);
        if (fVar5 < fVar6) {
          *(float *)(param_1 + 0x218) = fVar6;
          fVar5 = fVar6;
        }
        fVar6 = (float)(*(uint *)(in_R11 + (uint64_t)(uVar3 + 1) * 4) & param_4);
        if (fVar5 < fVar6) {
          *(float *)(param_1 + 0x218) = fVar6;
          fVar5 = fVar6;
        }
        fVar6 = (float)(*(uint *)(in_R11 + (uint64_t)(uVar3 + 2) * 4) & param_4);
        if (fVar5 < fVar6) {
          *(float *)(param_1 + 0x218) = fVar6;
          fVar5 = fVar6;
        }
        uVar3 = uVar3 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (uVar1 < unaff_EBX) {
      fVar5 = *(float *)(param_1 + 0x218);
      do {
        fVar6 = (float)(*(uint *)(in_R11 + (uint64_t)(unaff_ESI * unaff_EBX + uVar1) * 4) & param_4
                       );
        if (fVar5 < fVar6) {
          *(float *)(param_1 + 0x218) = fVar6;
          fVar5 = fVar6;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < unaff_EBX);
    }
    uVar1 = 0;
    fVar6 = 1.0 / fVar5;
    if (unaff_XMM7_Da <= 1.0 / fVar5) {
      fVar6 = unaff_XMM7_Da;
    }
    if (3 < unaff_EBX) {
      uVar3 = unaff_ESI * unaff_EBX + 1;
      uVar1 = (unaff_EBX - 4 >> 2) + 1;
      uVar4 = (uint64_t)uVar1;
      uVar1 = uVar1 * 4;
      do {
        *(float *)(unaff_RDI + (uint64_t)(uVar3 - 1) * 4) =
             fVar6 * *(float *)(in_R11 + (uint64_t)(uVar3 - 1) * 4);
        *(float *)(unaff_RDI + (uint64_t)uVar3 * 4) =
             fVar6 * *(float *)(in_R11 + (uint64_t)uVar3 * 4);
        *(float *)(unaff_RDI + (uint64_t)(uVar3 + 1) * 4) =
             fVar6 * *(float *)(in_R11 + (uint64_t)(uVar3 + 1) * 4);
        uVar2 = uVar3 + 2;
        uVar3 = uVar3 + 4;
        *(float *)(unaff_RDI + (uint64_t)uVar2 * 4) =
             fVar6 * *(float *)(in_R11 + (uint64_t)uVar2 * 4);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (uVar1 < unaff_EBX) {
      do {
        uVar4 = (uint64_t)(unaff_ESI * unaff_EBX + uVar1);
        uVar1 = uVar1 + 1;
        *(float *)(unaff_RDI + uVar4 * 4) = fVar6 * *(float *)(in_R11 + uVar4 * 4);
      } while (uVar1 < unaff_EBX);
    }
    unaff_ESI = unaff_ESI + 1;
  } while (unaff_ESI < unaff_EBP);
  return 0;
}





// 函数: void FUN_180796023(void)
void FUN_180796023(void)

{
  return;
}





// 函数: void FUN_180796028(void)
void FUN_180796028(void)

{
  return;
}



uint64_t FUN_18079603c(void)

{
  return 0;
}



uint64_t FUN_180796040(void)

{
  return 0;
}



uint64_t FUN_180796050(int64_t *param_1)

{
  int64_t lVar1;
  int *piVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int iVar6;
  
  lVar1 = *param_1;
  *(int32_t *)(lVar1 + 0x218) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x21c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x220) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x224) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x228) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x22c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x230) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x234) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x238) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x23c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x240) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x244) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x248) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x24c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x250) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x254) = 0x3f800000;
  *(int32_t *)(lVar1 + 600) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x25c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x260) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x264) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x268) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x26c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x270) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x274) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x278) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x27c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x280) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x284) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x288) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x28c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x290) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x294) = 0x3f800000;
  if ((int32_t *)(lVar1 + 0x298) != (int32_t *)0x0) {
    *(int32_t *)(lVar1 + 0x298) = *(int32_t *)(*(int64_t *)(lVar1 + 0xa8) + 0x6d0);
  }
  lVar3 = *(int64_t *)(lVar1 + 0xe8);
  iVar6 = 0;
  if (0 < *(int *)(lVar3 + 0x60)) {
    lVar5 = 0;
    do {
      piVar2 = *(int **)(lVar5 + *(int64_t *)(lVar3 + 0x68));
      if (*piVar2 == 0) {
        uVar4 = func_0x000180762a70(lVar1,iVar6,piVar2[0xe]);
LAB_180796206:
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      else if (*piVar2 == 2) {
        uVar4 = func_0x000180762600(lVar1,iVar6,piVar2[0xc] != 0);
        goto LAB_180796206;
      }
      lVar3 = *(int64_t *)(lVar1 + 0xe8);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar6 < *(int *)(lVar3 + 0x60));
  }
  return 0;
}



uint64_t FUN_1807961c1(void)

{
  int iVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  int64_t unaff_RBX;
  int64_t lVar3;
  int unaff_EDI;
  
  if (unaff_EDI < *(int *)(in_RAX + 0x60)) {
    lVar3 = 0;
    do {
      iVar1 = **(int **)(lVar3 + *(int64_t *)(in_RAX + 0x68));
      if (iVar1 == 0) {
        uVar2 = func_0x000180762a70();
LAB_180796206:
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
      else if (iVar1 == 2) {
        uVar2 = func_0x000180762600();
        goto LAB_180796206;
      }
      in_RAX = *(int64_t *)(unaff_RBX + 0xe8);
      unaff_EDI = unaff_EDI + 1;
      lVar3 = lVar3 + 8;
    } while (unaff_EDI < *(int *)(in_RAX + 0x60));
  }
  return 0;
}



uint64_t FUN_180796390(int64_t *param_1,int param_2,float param_3)

{
  int64_t lVar1;
  int32_t uVar2;
  float fVar3;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    *(float *)(lVar1 + 0x29c) = param_3;
  }
  else if (param_2 == 1) {
    if (-80.0 < param_3) {
      uVar2 = powf(param_1,param_3 * 0.05);
      *(int32_t *)(lVar1 + 0x2a0) = uVar2;
    }
    else {
      *(int32_t *)(lVar1 + 0x2a0) = 0;
    }
  }
  else {
    if (param_2 != 2) {
      return 0x1f;
    }
    if (-80.0 < param_3) {
      uVar2 = powf(param_1,param_3 * 0.05);
      *(int32_t *)(lVar1 + 0x2a4) = uVar2;
    }
    else {
      *(int32_t *)(lVar1 + 0x2a4) = 0;
    }
  }
  fVar3 = *(float *)(lVar1 + 0x29c) * 0.001;
  *(float *)(lVar1 + 0x2a8) = fVar3 / (1.0 / (float)*(int *)(lVar1 + 0x298) + fVar3);
  return 0;
}



uint64_t FUN_180796470(int64_t *param_1,int param_2,float *param_3,int64_t param_4)

{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(float *)(lVar1 + 0x29c);
    if (param_4 == 0) {
      return 0;
    }
    fVar3 = *(float *)(lVar1 + 0x29c);
  }
  else {
    if (param_2 == 1) {
      if (0.0 < *(float *)(lVar1 + 0x2a0)) {
        fVar2 = (float)log10f();
        fVar2 = fVar2 * 20.0;
      }
      else {
        fVar2 = -80.0;
      }
      *param_3 = fVar2;
      if (param_4 == 0) {
        return 0;
      }
      fVar2 = *(float *)(lVar1 + 0x2a0);
    }
    else {
      if (param_2 != 2) {
        return 0x1f;
      }
      if (0.0 < *(float *)(lVar1 + 0x2a4)) {
        fVar2 = (float)log10f();
        fVar2 = fVar2 * 20.0;
      }
      else {
        fVar2 = -80.0;
      }
      *param_3 = fVar2;
      if (param_4 == 0) {
        return 0;
      }
      fVar2 = *(float *)(lVar1 + 0x2a4);
    }
    fVar3 = -80.0;
    if (0.0 < fVar2) {
      fVar3 = (float)log10f();
      fVar3 = fVar3 * 20.0;
    }
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(param_4,0x20,&rendering_buffer_2048_ptr,(double)fVar3);
}



uint64_t FUN_1807965c0(int64_t *param_1,int param_2,int32_t *param_3,int64_t param_4)

{
  int64_t lVar1;
  void *puVar2;
  
  if (param_2 != 3) {
    return 0x1f;
  }
  lVar1 = *param_1;
  *param_3 = *(int32_t *)(lVar1 + 0x2ac);
  if (param_4 != 0) {
    puVar2 = &processed_var_4024_ptr;
    if (*(int *)(lVar1 + 0x2ac) != 0) {
      puVar2 = &processed_var_8084_ptr;
    }
                    // WARNING: Subroutine does not return
    SystemDataValidator(param_4,0x20,&processed_var_552_ptr,puVar2);
  }
  return 0;
}





// 函数: void FUN_180796620(void)
void FUN_180796620(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c10eb4,0,0x5c);
}



uint64_t
FUN_180796840(int64_t param_1,int64_t param_2,int64_t param_3,uint param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uStackX_8;
  
  fVar1 = *(float *)(param_1 + 0x2a4);
  fVar2 = *(float *)(param_1 + 0x2a0);
  iVar3 = *(int *)(param_1 + 0x2ac);
  if (param_2 == 0) {
    return 0;
  }
  uStackX_8 = 0;
  if (param_4 == 0) {
    return 0;
  }
  do {
    if (iVar3 != 0) {
      *(float *)(param_1 + 0x218) = *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x218);
    }
    uVar5 = 0;
    if (3 < param_5) {
      iVar6 = uStackX_8 * param_5;
      iVar7 = 1;
      do {
        if (iVar3 == 0) {
          *(float *)(param_1 + 0x218 + (int64_t)(int)uVar5 * 4) =
               *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x218 + (int64_t)(int)uVar5 * 4);
          uVar9 = uVar5;
        }
        else {
          uVar9 = 0;
        }
        uVar4 = iVar6 + -1 + iVar7;
        fVar12 = *(float *)(param_2 + (uint64_t)uVar4 * 4);
        fVar10 = ABS(fVar12);
        fVar11 = *(float *)(param_1 + 0x218 + (int64_t)(int)uVar9 * 4);
        if (fVar11 < fVar10) {
          *(float *)(param_1 + 0x218 + (int64_t)(int)uVar9 * 4) = fVar10;
          fVar12 = *(float *)(param_2 + (uint64_t)uVar4 * 4);
          fVar11 = fVar10;
        }
        fVar10 = fVar2 / fVar11;
        if (fVar1 <= fVar2 / fVar11) {
          fVar10 = fVar1;
        }
        *(float *)(param_3 + (uint64_t)uVar4 * 4) = fVar10 * fVar12;
        if (iVar3 == 0) {
          *(float *)(param_1 + 0x218 + (int64_t)iVar7 * 4) =
               *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x218 + (int64_t)iVar7 * 4);
          iVar8 = iVar7;
        }
        else {
          iVar8 = 0;
        }
        uVar9 = iVar6 + iVar7;
        fVar12 = *(float *)(param_2 + (uint64_t)uVar9 * 4);
        fVar10 = ABS(fVar12);
        fVar11 = *(float *)(param_1 + 0x218 + (int64_t)iVar8 * 4);
        if (fVar11 < fVar10) {
          *(float *)(param_1 + 0x218 + (int64_t)iVar8 * 4) = fVar10;
          fVar12 = *(float *)(param_2 + (uint64_t)uVar9 * 4);
          fVar11 = fVar10;
        }
        fVar10 = fVar2 / fVar11;
        if (fVar1 <= fVar2 / fVar11) {
          fVar10 = fVar1;
        }
        *(float *)(param_3 + (uint64_t)uVar9 * 4) = fVar10 * fVar12;
        if (iVar3 == 0) {
          iVar8 = iVar7 + 1;
          *(float *)(param_1 + 0x21c + (int64_t)iVar7 * 4) =
               *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x21c + (int64_t)iVar7 * 4);
        }
        else {
          iVar8 = 0;
        }
        uVar9 = iVar7 + iVar6 + 1;
        fVar12 = *(float *)(param_2 + (uint64_t)uVar9 * 4);
        fVar10 = ABS(fVar12);
        fVar11 = *(float *)(param_1 + 0x218 + (int64_t)iVar8 * 4);
        if (fVar11 < fVar10) {
          *(float *)(param_1 + 0x218 + (int64_t)iVar8 * 4) = fVar10;
          fVar12 = *(float *)(param_2 + (uint64_t)uVar9 * 4);
          fVar11 = fVar10;
        }
        fVar10 = fVar2 / fVar11;
        if (fVar1 <= fVar2 / fVar11) {
          fVar10 = fVar1;
        }
        *(float *)(param_3 + (uint64_t)uVar9 * 4) = fVar10 * fVar12;
        if (iVar3 == 0) {
          iVar8 = iVar7 + 2;
          *(float *)(param_1 + 0x220 + (int64_t)iVar7 * 4) =
               *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x220 + (int64_t)iVar7 * 4);
        }
        else {
          iVar8 = 0;
        }
        uVar9 = iVar6 + 2 + iVar7;
        fVar12 = *(float *)(param_2 + (uint64_t)uVar9 * 4);
        fVar10 = ABS(fVar12);
        fVar11 = *(float *)(param_1 + 0x218 + (int64_t)iVar8 * 4);
        if (fVar11 < fVar10) {
          *(float *)(param_1 + 0x218 + (int64_t)iVar8 * 4) = fVar10;
          fVar12 = *(float *)(param_2 + (uint64_t)uVar9 * 4);
          fVar11 = fVar10;
        }
        uVar5 = uVar5 + 4;
        iVar7 = iVar7 + 4;
        fVar10 = fVar2 / fVar11;
        if (fVar1 <= fVar2 / fVar11) {
          fVar10 = fVar1;
        }
        *(float *)(param_3 + (uint64_t)uVar9 * 4) = fVar10 * fVar12;
      } while (uVar5 < param_5 - 3);
    }
    if (uVar5 < param_5) {
      do {
        if (iVar3 == 0) {
          *(float *)(param_1 + 0x218 + (int64_t)(int)uVar5 * 4) =
               *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x218 + (int64_t)(int)uVar5 * 4);
          uVar9 = uVar5;
        }
        else {
          uVar9 = 0;
        }
        uVar4 = uStackX_8 * param_5 + uVar5;
        fVar11 = ABS(*(float *)(param_2 + (uint64_t)uVar4 * 4));
        fVar12 = *(float *)(param_1 + 0x218 + (int64_t)(int)uVar9 * 4);
        if (fVar12 < fVar11) {
          *(float *)(param_1 + 0x218 + (int64_t)(int)uVar9 * 4) = fVar11;
          fVar12 = fVar11;
        }
        uVar5 = uVar5 + 1;
        fVar11 = fVar2 / fVar12;
        if (fVar1 <= fVar2 / fVar12) {
          fVar11 = fVar1;
        }
        *(float *)(param_3 + (uint64_t)uVar4 * 4) =
             fVar11 * *(float *)(param_2 + (uint64_t)uVar4 * 4);
      } while (uVar5 < param_5);
    }
    uStackX_8 = uStackX_8 + 1;
  } while (uStackX_8 < param_4);
  return 0;
}



uint64_t FUN_180796875(int64_t param_1,uint64_t param_2,uint64_t param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  int unaff_EBX;
  int iVar3;
  int64_t unaff_RDI;
  int iVar4;
  int in_R9D;
  int iVar5;
  uint uVar6;
  int64_t in_R10;
  uint unaff_R14D;
  float fVar7;
  float fVar8;
  float fVar9;
  float in_XMM4_Da;
  uint uStack0000000000000040;
  uint in_stack_00000058;
  uint in_stack_00000060;
  
  uStack0000000000000040 = 0;
  if (in_R9D == 0) {
    return 0;
  }
  do {
    if (unaff_EBX != 0) {
      *(float *)(param_1 + 0x218) = *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x218);
    }
    uVar2 = 0;
    if (3 < in_stack_00000060) {
      iVar3 = uStack0000000000000040 * in_stack_00000060;
      iVar4 = 1;
      do {
        if (unaff_EBX == 0) {
          *(float *)(param_1 + 0x218 + (int64_t)(int)uVar2 * 4) =
               *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x218 + (int64_t)(int)uVar2 * 4);
          uVar6 = uVar2;
        }
        else {
          uVar6 = 0;
        }
        uVar1 = iVar3 + -1 + iVar4;
        fVar9 = *(float *)(in_R10 + (uint64_t)uVar1 * 4);
        fVar7 = ABS(fVar9);
        fVar8 = *(float *)(param_1 + 0x218 + (int64_t)(int)uVar6 * 4);
        if (fVar8 < fVar7) {
          *(float *)(param_1 + 0x218 + (int64_t)(int)uVar6 * 4) = fVar7;
          fVar9 = *(float *)(in_R10 + (uint64_t)uVar1 * 4);
          fVar8 = fVar7;
        }
        fVar7 = in_XMM4_Da / fVar8;
        if (param_4 <= in_XMM4_Da / fVar8) {
          fVar7 = param_4;
        }
        *(float *)(unaff_RDI + (uint64_t)uVar1 * 4) = fVar7 * fVar9;
        if (unaff_EBX == 0) {
          *(float *)(param_1 + 0x218 + (int64_t)iVar4 * 4) =
               *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x218 + (int64_t)iVar4 * 4);
          iVar5 = iVar4;
        }
        else {
          iVar5 = 0;
        }
        uVar6 = iVar3 + iVar4;
        fVar9 = *(float *)(in_R10 + (uint64_t)uVar6 * 4);
        fVar7 = ABS(fVar9);
        fVar8 = *(float *)(param_1 + 0x218 + (int64_t)iVar5 * 4);
        if (fVar8 < fVar7) {
          *(float *)(param_1 + 0x218 + (int64_t)iVar5 * 4) = fVar7;
          fVar9 = *(float *)(in_R10 + (uint64_t)uVar6 * 4);
          fVar8 = fVar7;
        }
        fVar7 = in_XMM4_Da / fVar8;
        if (param_4 <= in_XMM4_Da / fVar8) {
          fVar7 = param_4;
        }
        *(float *)(unaff_RDI + (uint64_t)uVar6 * 4) = fVar7 * fVar9;
        if (unaff_EBX == 0) {
          iVar5 = iVar4 + 1;
          *(float *)(param_1 + 0x21c + (int64_t)iVar4 * 4) =
               *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x21c + (int64_t)iVar4 * 4);
        }
        else {
          iVar5 = 0;
        }
        uVar6 = iVar4 + iVar3 + 1;
        fVar9 = *(float *)(in_R10 + (uint64_t)uVar6 * 4);
        fVar7 = ABS(fVar9);
        fVar8 = *(float *)(param_1 + 0x218 + (int64_t)iVar5 * 4);
        if (fVar8 < fVar7) {
          *(float *)(param_1 + 0x218 + (int64_t)iVar5 * 4) = fVar7;
          fVar9 = *(float *)(in_R10 + (uint64_t)uVar6 * 4);
          fVar8 = fVar7;
        }
        fVar7 = in_XMM4_Da / fVar8;
        if (param_4 <= in_XMM4_Da / fVar8) {
          fVar7 = param_4;
        }
        *(float *)(unaff_RDI + (uint64_t)uVar6 * 4) = fVar7 * fVar9;
        if (unaff_EBX == 0) {
          iVar5 = iVar4 + 2;
          *(float *)(param_1 + 0x220 + (int64_t)iVar4 * 4) =
               *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x220 + (int64_t)iVar4 * 4);
        }
        else {
          iVar5 = 0;
        }
        uVar6 = iVar3 + 2 + iVar4;
        fVar9 = *(float *)(in_R10 + (uint64_t)uVar6 * 4);
        fVar7 = ABS(fVar9);
        fVar8 = *(float *)(param_1 + 0x218 + (int64_t)iVar5 * 4);
        if (fVar8 < fVar7) {
          *(float *)(param_1 + 0x218 + (int64_t)iVar5 * 4) = fVar7;
          fVar9 = *(float *)(in_R10 + (uint64_t)uVar6 * 4);
          fVar8 = fVar7;
        }
        uVar2 = uVar2 + 4;
        iVar4 = iVar4 + 4;
        fVar7 = in_XMM4_Da / fVar8;
        if (param_4 <= in_XMM4_Da / fVar8) {
          fVar7 = param_4;
        }
        *(float *)(unaff_RDI + (uint64_t)uVar6 * 4) = fVar7 * fVar9;
        unaff_R14D = in_stack_00000058;
      } while (uVar2 < in_stack_00000060 - 3);
    }
    if (uVar2 < in_stack_00000060) {
      do {
        if (unaff_EBX == 0) {
          *(float *)(param_1 + 0x218 + (int64_t)(int)uVar2 * 4) =
               *(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x218 + (int64_t)(int)uVar2 * 4);
          uVar6 = uVar2;
        }
        else {
          uVar6 = 0;
        }
        uVar1 = uStack0000000000000040 * in_stack_00000060 + uVar2;
        fVar8 = ABS(*(float *)(in_R10 + (uint64_t)uVar1 * 4));
        fVar9 = *(float *)(param_1 + 0x218 + (int64_t)(int)uVar6 * 4);
        if (fVar9 < fVar8) {
          *(float *)(param_1 + 0x218 + (int64_t)(int)uVar6 * 4) = fVar8;
          fVar9 = fVar8;
        }
        uVar2 = uVar2 + 1;
        fVar8 = in_XMM4_Da / fVar9;
        if (param_4 <= in_XMM4_Da / fVar9) {
          fVar8 = param_4;
        }
        *(float *)(unaff_RDI + (uint64_t)uVar1 * 4) =
             fVar8 * *(float *)(in_R10 + (uint64_t)uVar1 * 4);
      } while (uVar2 < in_stack_00000060);
    }
    uStack0000000000000040 = uStack0000000000000040 + 1;
  } while (uStack0000000000000040 < unaff_R14D);
  return 0;
}



uint64_t FUN_180796b85(void)

{
  return 0;
}



uint64_t FUN_180796b95(void)

{
  return 0;
}



uint64_t
FUN_180796ba0(int64_t *param_1,int param_2,int64_t *param_3,int32_t *param_4,
             int8_t *param_5)

{
  int64_t lVar1;
  float afStackX_10 [2];
  
  lVar1 = *param_1;
  if (param_2 != 7) {
    return 0x1f;
  }
  afStackX_10[0] = 1.0;
  func_0x0001807d49f0(*(int32_t *)(lVar1 + 0x29c),*(int32_t *)(lVar1 + 0x290),
                      *(int32_t *)(lVar1 + 0x2a0),*(int32_t *)(lVar1 + 0x2a4),afStackX_10,
                      *(int32_t *)(*(int64_t *)(lVar1 + 0xa8) + 0x11408));
  *(float *)(lVar1 + 0x220) = afStackX_10[0] * *(float *)(lVar1 + 0x2c0);
  *param_3 = lVar1 + 0x21c;
  *param_4 = 8;
  if (param_5 != (int8_t *)0x0) {
    *param_5 = 0;
  }
  return 0;
}





// 函数: void FUN_180796c70(int64_t *param_1)
void FUN_180796c70(int64_t *param_1)

{
  int64_t lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  lVar1 = *param_1;
  *(int32_t *)(lVar1 + 0x21c) = 0;
  *(int32_t *)(lVar1 + 0x220) = 0x3f800000;
  iVar3 = func_0x00018074a3d0(*(uint64_t *)(lVar1 + 0xa8),0,lVar1 + 0x238);
  if (iVar3 == 0) {
    LOCK();
    *(uint *)(lVar1 + 100) = *(uint *)(lVar1 + 100) | 0x10;
    UNLOCK();
    lVar5 = *(int64_t *)(lVar1 + 0xe8);
    iVar3 = 0;
    if (0 < *(int *)(lVar5 + 0x60)) {
      lVar6 = 0;
      do {
        piVar2 = *(int **)(lVar6 + *(int64_t *)(lVar5 + 0x68));
        iVar4 = *piVar2;
        if (iVar4 == 0) {
          iVar4 = func_0x000180762a70(lVar1,iVar3,piVar2[0xe]);
LAB_180796d1b:
          if (iVar4 != 0) {
            return;
          }
        }
        else {
          if (iVar4 == 1) {
            iVar4 = func_0x000180762af0(lVar1,iVar3,piVar2[0xe]);
            goto LAB_180796d1b;
          }
          if (iVar4 == 2) {
            iVar4 = func_0x000180762600(lVar1,iVar3,piVar2[0xc] != 0);
            goto LAB_180796d1b;
          }
        }
        lVar5 = *(int64_t *)(lVar1 + 0xe8);
        iVar3 = iVar3 + 1;
        lVar6 = lVar6 + 8;
      } while (iVar3 < *(int *)(lVar5 + 0x60));
    }
    *(uint64_t *)(lVar1 + 0x278) = 0;
    FUN_180744780(*(uint64_t *)(lVar1 + 0xa8),lVar1 + 0x280);
  }
  return;
}





// 函数: void FUN_180796caa(void)
void FUN_180796caa(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int64_t lVar3;
  int iVar4;
  
  LOCK();
  *(uint *)(unaff_RBX + 100) = *(uint *)(unaff_RBX + 100) | 0x10;
  UNLOCK();
  lVar2 = *(int64_t *)(unaff_RBX + 0xe8);
  iVar4 = 0;
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar3 = 0;
    do {
      iVar1 = **(int **)(lVar3 + *(int64_t *)(lVar2 + 0x68));
      if (iVar1 == 0) {
        iVar1 = func_0x000180762a70();
LAB_180796d1b:
        if (iVar1 != 0) {
          return;
        }
      }
      else {
        if (iVar1 == 1) {
          iVar1 = func_0x000180762af0();
          goto LAB_180796d1b;
        }
        if (iVar1 == 2) {
          iVar1 = func_0x000180762600();
          goto LAB_180796d1b;
        }
      }
      lVar2 = *(int64_t *)(unaff_RBX + 0xe8);
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar4 < *(int *)(lVar2 + 0x60));
  }
  *(uint64_t *)(unaff_RBX + 0x278) = 0;
  FUN_180744780(*(uint64_t *)(unaff_RBX + 0xa8),unaff_RBX + 0x280);
  return;
}





