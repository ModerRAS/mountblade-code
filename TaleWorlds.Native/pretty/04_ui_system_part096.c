#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part096.c - 16 个函数

// 函数: void FUN_180724250(short *param_1,uint64_t param_2,int param_3)
void FUN_180724250(short *param_1,uint64_t param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  sVar5 = 0;
  sVar4 = sVar5;
  sVar3 = sVar5;
  if (param_3 < 1) {
LAB_180724308:
    sVar1 = 0;
  }
  else {
    sVar1 = FUN_18070f3e0(param_2,&unknown_var_3872_ptr + (byte)(&unknown_var_4024_ptr)[param_3],8);
    sVar4 = (short)param_3 - sVar1;
    if (sVar1 < 1) goto LAB_180724308;
    sVar2 = FUN_18070f3e0(param_2,&unknown_var_3712_ptr + (byte)(&unknown_var_4024_ptr)[sVar1],8);
    sVar3 = sVar1 - sVar2;
    if (sVar2 < 1) goto LAB_180724308;
    sVar1 = FUN_18070f3e0(param_2,&unknown_var_3552_ptr + (byte)(&unknown_var_4024_ptr)[sVar2],8);
    sVar5 = sVar2 - sVar1;
  }
  if (sVar1 < 1) {
    sVar1 = 0;
    sVar2 = 0;
  }
  else {
    sVar2 = FUN_18070f3e0(param_2,&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[sVar1],8);
    sVar1 = sVar1 - sVar2;
  }
  *param_1 = sVar2;
  param_1[1] = sVar1;
  if (sVar5 < 1) {
    sVar5 = 0;
    sVar1 = 0;
  }
  else {
    sVar1 = FUN_18070f3e0(param_2,&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[sVar5],8);
    sVar5 = sVar5 - sVar1;
  }
  param_1[2] = sVar1;
  param_1[3] = sVar5;
  if (sVar3 < 1) {
    sVar3 = 0;
    sVar5 = 0;
  }
  else {
    sVar5 = FUN_18070f3e0(param_2,&unknown_var_3552_ptr + (byte)(&unknown_var_4024_ptr)[sVar3],8);
    sVar3 = sVar3 - sVar5;
  }
  if (sVar5 < 1) {
    sVar5 = 0;
    sVar1 = 0;
  }
  else {
    sVar1 = FUN_18070f3e0(param_2,&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[sVar5],8);
    sVar5 = sVar5 - sVar1;
  }
  param_1[4] = sVar1;
  param_1[5] = sVar5;
  if (sVar3 < 1) {
    sVar3 = 0;
    sVar5 = 0;
  }
  else {
    sVar5 = FUN_18070f3e0(param_2,&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[sVar3],8);
    sVar3 = sVar3 - sVar5;
  }
  param_1[6] = sVar5;
  param_1[7] = sVar3;
  if (sVar4 < 1) {
    sVar4 = 0;
  }
  else {
    sVar3 = FUN_18070f3e0(param_2,&unknown_var_3712_ptr + (byte)(&unknown_var_4024_ptr)[sVar4],8);
    sVar4 = sVar4 - sVar3;
    if (0 < sVar3) {
      sVar5 = FUN_18070f3e0(param_2,&unknown_var_3552_ptr + (byte)(&unknown_var_4024_ptr)[sVar3],8);
      sVar3 = sVar3 - sVar5;
      goto LAB_180724486;
    }
  }
  sVar3 = 0;
  sVar5 = 0;
LAB_180724486:
  if (sVar5 < 1) {
    sVar5 = 0;
    sVar1 = 0;
  }
  else {
    sVar1 = FUN_18070f3e0(param_2,&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[sVar5],8);
    sVar5 = sVar5 - sVar1;
  }
  param_1[8] = sVar1;
  param_1[9] = sVar5;
  if (sVar3 < 1) {
    sVar3 = 0;
    sVar5 = 0;
  }
  else {
    sVar5 = FUN_18070f3e0(param_2,&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[sVar3],8);
    sVar3 = sVar3 - sVar5;
  }
  param_1[10] = sVar5;
  param_1[0xb] = sVar3;
  if (sVar4 < 1) {
    sVar4 = 0;
    sVar3 = 0;
  }
  else {
    sVar3 = FUN_18070f3e0(param_2,&unknown_var_3552_ptr + (byte)(&unknown_var_4024_ptr)[sVar4],8);
    sVar4 = sVar4 - sVar3;
  }
  if (sVar3 < 1) {
    sVar3 = 0;
    sVar5 = 0;
  }
  else {
    sVar5 = FUN_18070f3e0(param_2,&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[sVar3],8);
    sVar3 = sVar3 - sVar5;
  }
  param_1[0xc] = sVar5;
  param_1[0xd] = sVar3;
  if (sVar4 < 1) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    sVar3 = FUN_18070f3e0(param_2,&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[sVar4],8);
    param_1[0xe] = sVar3;
    param_1[0xf] = sVar4 - sVar3;
  }
  return;
}





// 函数: void FUN_1807245b0(uint64_t param_1,int *param_2)
void FUN_1807245b0(uint64_t param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar6 = param_2[3] + param_2[2];
  iVar12 = param_2[1] + *param_2;
  iVar7 = param_2[7] + param_2[6];
  iVar10 = param_2[5] + param_2[4];
  iVar3 = param_2[9] + param_2[8];
  iVar11 = iVar7 + iVar10 + iVar12 + iVar6;
  iVar9 = param_2[0xb] + param_2[10];
  iVar5 = param_2[0xd] + param_2[0xc];
  iVar1 = iVar9 + iVar3;
  iVar8 = param_2[0xf] + param_2[0xe];
  iVar2 = iVar8 + iVar5;
  iVar4 = iVar2 + iVar1 + iVar11;
  if (0 < iVar4) {
    FUN_1807054a0(param_1,iVar11,&unknown_var_3872_ptr + (byte)(&unknown_var_4024_ptr)[iVar4],8);
  }
  iVar4 = iVar12 + iVar6;
  if (0 < iVar11) {
    FUN_1807054a0(param_1,iVar4,&unknown_var_3712_ptr + (byte)(&unknown_var_4024_ptr)[iVar11],8);
  }
  if (0 < iVar4) {
    FUN_1807054a0(param_1,iVar12,&unknown_var_3552_ptr + (byte)(&unknown_var_4024_ptr)[iVar4],8);
  }
  if (0 < iVar12) {
    FUN_1807054a0(param_1,*param_2,&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[iVar12],8);
  }
  if (0 < iVar6) {
    FUN_1807054a0(param_1,param_2[2],&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[iVar6],8);
  }
  if (0 < iVar7 + iVar10) {
    FUN_1807054a0(param_1,iVar10,&unknown_var_3552_ptr + (byte)(&unknown_var_4024_ptr)[iVar7 + iVar10],8);
  }
  if (0 < iVar10) {
    FUN_1807054a0(param_1,param_2[4],&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[iVar10],8);
  }
  if (0 < iVar7) {
    FUN_1807054a0(param_1,param_2[6],&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[iVar7],8);
  }
  if (0 < iVar2 + iVar1) {
    FUN_1807054a0(param_1,iVar1,&unknown_var_3712_ptr + (byte)(&unknown_var_4024_ptr)[iVar2 + iVar1],8);
  }
  if (0 < iVar1) {
    FUN_1807054a0(param_1,iVar3,&unknown_var_3552_ptr + (byte)(&unknown_var_4024_ptr)[iVar1],8);
  }
  if (0 < iVar3) {
    FUN_1807054a0(param_1,param_2[8],&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[iVar3],8);
  }
  if (0 < iVar9) {
    FUN_1807054a0(param_1,param_2[10],&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[iVar9],8);
  }
  if (0 < iVar2) {
    FUN_1807054a0(param_1,iVar5,&unknown_var_3552_ptr + (byte)(&unknown_var_4024_ptr)[iVar2],8);
  }
  if (0 < iVar5) {
    FUN_1807054a0(param_1,param_2[0xc],&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[iVar5],8);
  }
  if (0 < iVar8) {
    FUN_1807054a0(param_1,param_2[0xe],&unknown_var_3392_ptr + (byte)(&unknown_var_4024_ptr)[iVar8],8);
  }
  return;
}





// 函数: void FUN_1807248c0(short *param_1,longlong param_2,longlong param_3,int param_4)
void FUN_1807248c0(short *param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int8_t *puVar5;
  
  iVar2 = 0;
  pbVar4 = (byte *)((longlong)((*(short *)(param_3 + 2) * param_4) / 2) +
                   *(longlong *)(param_3 + 0x28));
  if (0 < *(short *)(param_3 + 2)) {
    puVar5 = (int8_t *)(param_2 + 1);
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      *param_1 = (ushort)(bVar1 >> 1 & 7) * 9;
      puVar5[-1] = *(int8_t *)
                    ((longlong)(int)((*(short *)(param_3 + 2) + -1) * (bVar1 & 1) + iVar2) +
                    *(longlong *)(param_3 + 0x20));
      param_1[1] = (ushort)(bVar1 >> 5) * 9;
      iVar3 = (bVar1 >> 4 & 1) * (*(short *)(param_3 + 2) + -1) + iVar2;
      iVar2 = iVar2 + 2;
      *puVar5 = *(int8_t *)((longlong)iVar3 + 1 + *(longlong *)(param_3 + 0x20));
      param_1 = param_1 + 2;
      puVar5 = puVar5 + 2;
    } while (iVar2 < *(short *)(param_3 + 2));
  }
  return;
}





// 函数: void FUN_1807249d0(longlong param_1,char *param_2,char *param_3,int param_4,int param_5)
void FUN_1807249d0(longlong param_1,char *param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if (0 < (longlong)param_5) {
    lVar6 = 0;
    do {
      if ((lVar6 == 0) && (param_4 == 0)) {
        cVar1 = (char)(*param_3 + -0x10);
        if (*param_3 + -0x10 < (int)*param_2) {
          cVar1 = *param_2;
        }
      }
      else {
        uVar2 = (int)param_2[lVar6] - 4;
        iVar4 = *param_3 + 8;
        if (iVar4 < (int)uVar2) {
          uVar2 = (uint)(byte)((char)uVar2 * '\x02' - (char)iVar4);
        }
        cVar1 = (char)uVar2 + *param_3;
      }
      if (cVar1 < '@') {
        if (cVar1 < '\0') {
          cVar1 = '\0';
        }
      }
      else {
        cVar1 = '?';
      }
      *param_3 = cVar1;
      iVar5 = (int)((ulonglong)((longlong)cVar1 * 0x1d1c71) >> 0x10) + 0x82a;
      iVar4 = 0xf7f;
      if (iVar5 < 0xf7f) {
        iVar4 = iVar5;
      }
      uVar3 = func_0x00018070b9e0(iVar4);
      *(int32_t *)(param_1 + lVar6 * 4) = uVar3;
      lVar6 = lVar6 + 1;
    } while (lVar6 < param_5);
  }
  return;
}





// 函数: void FUN_1807249fd(void)
void FUN_1807249fd(void)

{
  char cVar1;
  uint uVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int unaff_EBP;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong unaff_R14;
  longlong unaff_R15;
  
  lVar6 = 0;
  do {
    if ((lVar6 == 0) && (unaff_EBP == 0)) {
      cVar1 = (char)(*unaff_RDI + -0x10);
      if (*unaff_RDI + -0x10 < (int)*unaff_RSI) {
        cVar1 = *unaff_RSI;
      }
    }
    else {
      uVar2 = (int)unaff_RSI[lVar6] - 4;
      iVar4 = *unaff_RDI + 8;
      if (iVar4 < (int)uVar2) {
        uVar2 = (uint)(byte)((char)uVar2 * '\x02' - (char)iVar4);
      }
      cVar1 = (char)uVar2 + *unaff_RDI;
    }
    if (cVar1 < '@') {
      if (cVar1 < '\0') {
        cVar1 = '\0';
      }
    }
    else {
      cVar1 = '?';
    }
    *unaff_RDI = cVar1;
    iVar5 = (int)((ulonglong)((longlong)cVar1 * 0x1d1c71) >> 0x10) + 0x82a;
    iVar4 = 0xf7f;
    if (iVar5 < 0xf7f) {
      iVar4 = iVar5;
    }
    uVar3 = func_0x00018070b9e0(iVar4);
    *(int32_t *)(unaff_R15 + lVar6 * 4) = uVar3;
    lVar6 = lVar6 + 1;
  } while (lVar6 < unaff_R14);
  return;
}





// 函数: void FUN_180724aa1(void)
void FUN_180724aa1(void)

{
  return;
}





// 函数: void FUN_180724ac0(char *param_1,longlong param_2,char *param_3,int param_4,int param_5)
void FUN_180724ac0(char *param_1,longlong param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  short sVar2;
  int32_t uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (0 < (longlong)param_5) {
    lVar7 = 0;
    do {
      sVar2 = func_0x00018070b980(*(int32_t *)(param_2 + lVar7 * 4));
      cVar4 = (char)((ulonglong)((longlong)(short)(sVar2 + -0x82a) * 0x8cb) >> 0x10);
      param_1[lVar7] = cVar4;
      if (cVar4 < *param_3) {
        cVar4 = cVar4 + '\x01';
      }
      if (cVar4 < '@') {
        if (cVar4 < '\0') {
          cVar4 = '\0';
        }
      }
      else {
        cVar4 = '?';
      }
      param_1[lVar7] = cVar4;
      if ((lVar7 == 0) && (param_4 == 0)) {
        iVar5 = *param_3 + -4;
        if (iVar5 < 0x40) {
          if (cVar4 < '@') {
            iVar6 = (int)cVar4;
            if (cVar4 < iVar5) {
              iVar6 = iVar5;
            }
            goto LAB_180724b88;
          }
          *param_1 = '?';
          *param_3 = '?';
          cVar4 = '?';
        }
        else {
          iVar6 = iVar5;
          if (iVar5 < cVar4) {
LAB_180724b88:
            cVar4 = (char)iVar6;
            *param_1 = cVar4;
            *param_3 = cVar4;
          }
          else {
            if (cVar4 < '?') {
              cVar4 = '?';
            }
            *param_1 = cVar4;
            *param_3 = cVar4;
          }
        }
      }
      else {
        cVar4 = cVar4 - *param_3;
        param_1[lVar7] = cVar4;
        iVar5 = *param_3 + 8;
        if (iVar5 < cVar4) {
          cVar4 = (char)((cVar4 - iVar5) + 1 >> 1) + (char)iVar5;
          param_1[lVar7] = cVar4;
        }
        if (cVar4 < '%') {
          if (cVar4 < -4) {
            cVar4 = -4;
          }
        }
        else {
          cVar4 = '$';
        }
        param_1[lVar7] = cVar4;
        if (iVar5 < cVar4) {
          cVar1 = (cVar4 * '\x02' - (char)iVar5) + *param_3;
          cVar4 = '?';
          if (cVar1 < '?') {
            cVar4 = cVar1;
          }
        }
        else {
          cVar4 = *param_3 + cVar4;
        }
        *param_3 = cVar4;
        param_1[lVar7] = param_1[lVar7] + '\x04';
        cVar4 = *param_3;
      }
      iVar6 = (int)((ulonglong)((longlong)cVar4 * 0x1d1c71) >> 0x10) + 0x82a;
      iVar5 = 0xf7f;
      if (iVar6 < 0xf7f) {
        iVar5 = iVar6;
      }
      uVar3 = func_0x00018070b9e0(iVar5);
      *(int32_t *)(param_2 + lVar7 * 4) = uVar3;
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_5);
  }
  return;
}





// 函数: void FUN_180724ae6(void)
void FUN_180724ae6(void)

{
  char cVar1;
  short sVar2;
  int32_t uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *unaff_RBX;
  int unaff_EBP;
  char *unaff_RSI;
  longlong lVar7;
  longlong unaff_R14;
  longlong unaff_R15;
  
  lVar7 = 0;
  do {
    sVar2 = func_0x00018070b980(*(int32_t *)(unaff_R15 + lVar7 * 4));
    cVar4 = (char)((ulonglong)((longlong)(short)(sVar2 + -0x82a) * 0x8cb) >> 0x10);
    unaff_RSI[lVar7] = cVar4;
    if (cVar4 < *unaff_RBX) {
      cVar4 = cVar4 + '\x01';
    }
    if (cVar4 < '@') {
      if (cVar4 < '\0') {
        cVar4 = '\0';
      }
    }
    else {
      cVar4 = '?';
    }
    unaff_RSI[lVar7] = cVar4;
    if ((lVar7 == 0) && (unaff_EBP == 0)) {
      iVar5 = *unaff_RBX + -4;
      if (iVar5 < 0x40) {
        if (cVar4 < '@') {
          iVar6 = (int)cVar4;
          if (cVar4 < iVar5) {
            iVar6 = iVar5;
          }
          goto LAB_180724b88;
        }
        *unaff_RSI = '?';
        *unaff_RBX = '?';
        cVar4 = '?';
      }
      else {
        iVar6 = iVar5;
        if (iVar5 < cVar4) {
LAB_180724b88:
          cVar4 = (char)iVar6;
          *unaff_RSI = cVar4;
          *unaff_RBX = cVar4;
        }
        else {
          if (cVar4 < '?') {
            cVar4 = '?';
          }
          *unaff_RSI = cVar4;
          *unaff_RBX = cVar4;
        }
      }
    }
    else {
      cVar4 = cVar4 - *unaff_RBX;
      unaff_RSI[lVar7] = cVar4;
      iVar5 = *unaff_RBX + 8;
      if (iVar5 < cVar4) {
        cVar4 = (char)((cVar4 - iVar5) + 1 >> 1) + (char)iVar5;
        unaff_RSI[lVar7] = cVar4;
      }
      if (cVar4 < '%') {
        if (cVar4 < -4) {
          cVar4 = -4;
        }
      }
      else {
        cVar4 = '$';
      }
      unaff_RSI[lVar7] = cVar4;
      if (iVar5 < cVar4) {
        cVar1 = (cVar4 * '\x02' - (char)iVar5) + *unaff_RBX;
        cVar4 = '?';
        if (cVar1 < '?') {
          cVar4 = cVar1;
        }
      }
      else {
        cVar4 = *unaff_RBX + cVar4;
      }
      *unaff_RBX = cVar4;
      unaff_RSI[lVar7] = unaff_RSI[lVar7] + '\x04';
      cVar4 = *unaff_RBX;
    }
    iVar6 = (int)((ulonglong)((longlong)cVar4 * 0x1d1c71) >> 0x10) + 0x82a;
    iVar5 = 0xf7f;
    if (iVar6 < 0xf7f) {
      iVar5 = iVar6;
    }
    uVar3 = func_0x00018070b9e0(iVar5);
    *(int32_t *)(unaff_R15 + lVar7 * 4) = uVar3;
    lVar7 = lVar7 + 1;
    if (unaff_R14 <= lVar7) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180724c38(void)
void FUN_180724c38(void)

{
  return;
}





// 函数: void FUN_180724c50(int *param_1,int *param_2,int param_3,int param_4)
void FUN_180724c50(int *param_1,int *param_2,int param_3,int param_4)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (3 < param_3) {
    param_1[0] = 0x552b622;
    param_1[1] = 0xaa4fada;
    param_1[2] = 0x552b622;
    param_2[0] = 0x21da4ed;
    param_2[1] = 0x36bdf0a;
    return;
  }
  lVar11 = (longlong)param_3;
  if (0 < param_4) {
    piVar3 = (int *)(&unknown_var_9828_ptr + lVar11 * 0xc);
    lVar12 = (longlong)(short)param_4;
    piVar4 = (int *)(&unknown_var_9832_ptr + lVar11 * 0xc);
    lVar1 = lVar11 + 1;
    piVar5 = (int *)(&unknown_var_9832_ptr + lVar1 * 0xc);
    piVar6 = (int *)(&unknown_var_9888_ptr + lVar11 * 8);
    piVar7 = (int *)(&unknown_var_9828_ptr + lVar1 * 0xc);
    lVar8 = lVar11 * 2 + 2;
    piVar9 = (int *)(&unknown_var_9888_ptr + lVar8 * 4);
    piVar2 = (int *)(&unknown_var_9892_ptr + lVar11 * 8);
    iVar10 = (int)((ulonglong)
                   ((*(int *)(&unknown_var_9824_ptr + lVar1 * 0xc) -
                    *(int *)(&unknown_var_9824_ptr + lVar11 * 0xc)) * lVar12) >> 0x10);
    if (param_4 < 0x8000) {
      *param_1 = *(int *)(&unknown_var_9824_ptr + lVar11 * 0xc) + iVar10;
      param_1[1] = (int)((ulonglong)((*piVar7 - *piVar3) * lVar12) >> 0x10) + *piVar3;
      param_1[2] = (int)((ulonglong)((*piVar5 - *piVar4) * lVar12) >> 0x10) + *piVar4;
      *param_2 = (int)((ulonglong)((*piVar9 - *piVar6) * lVar12) >> 0x10) + *piVar6;
      iVar10 = (int)((ulonglong)((*(int *)(&unknown_var_9892_ptr + lVar8 * 4) - *piVar2) * lVar12) >> 0x10)
               + *piVar2;
    }
    else {
      *param_1 = *(int *)(&unknown_var_9824_ptr + lVar1 * 0xc) + iVar10;
      param_1[1] = (int)((ulonglong)((*piVar7 - *piVar3) * lVar12) >> 0x10) + *piVar7;
      param_1[2] = (int)((ulonglong)((*piVar5 - *piVar4) * lVar12) >> 0x10) + *piVar5;
      *param_2 = (int)((ulonglong)((*piVar9 - *piVar6) * lVar12) >> 0x10) + *piVar9;
      iVar10 = *(int *)(&unknown_var_9892_ptr + lVar8 * 4);
      iVar10 = iVar10 + (int)((ulonglong)((iVar10 - *piVar2) * lVar12) >> 0x10);
    }
    param_2[1] = iVar10;
    return;
  }
  *(uint64_t *)param_1 = *(uint64_t *)(&unknown_var_9824_ptr + lVar11 * 0xc);
  param_1[2] = *(int *)(&unknown_var_9832_ptr + lVar11 * 0xc);
  *(uint64_t *)param_2 = *(uint64_t *)(&unknown_var_9888_ptr + lVar11 * 8);
  return;
}





// 函数: void FUN_180724c7e(uint64_t param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_180724c7e(uint64_t param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  longlong in_RAX;
  int iVar11;
  int iVar12;
  int unaff_EBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  longlong lVar13;
  int *in_R10;
  int *in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x10) = unaff_R12;
  piVar3 = (int *)(param_4 + 0x9536c4 + param_2 * 0xc);
  *(uint64_t *)(in_RAX + -0x18) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  lVar13 = (longlong)(short)unaff_EBX;
  piVar4 = (int *)(param_4 + 0x9536c8 + param_2 * 0xc);
  lVar1 = param_2 + 1;
  iVar12 = *(int *)(param_4 + 0x9536c0 + lVar1 * 0xc);
  piVar5 = (int *)(param_4 + 0x9536c8 + lVar1 * 0xc);
  iVar10 = *(int *)(param_4 + 0x9536c0 + param_2 * 0xc);
  piVar6 = (int *)(param_4 + 0x953700 + param_2 * 8);
  piVar7 = (int *)(param_4 + 0x9536c4 + lVar1 * 0xc);
  lVar1 = param_2 * 2 + 2;
  piVar8 = (int *)(param_4 + 0x953700 + lVar1 * 4);
  piVar9 = (int *)(param_4 + 0x953704 + lVar1 * 4);
  piVar2 = (int *)(param_4 + param_2 * 8 + 0x953704);
  iVar11 = (int)((ulonglong)((iVar12 - iVar10) * lVar13) >> 0x10);
  if (unaff_EBX < 0x8000) {
    *in_R10 = iVar10 + iVar11;
    in_R10[1] = (int)((ulonglong)((*piVar7 - *piVar3) * lVar13) >> 0x10) + *piVar3;
    in_R10[2] = (int)((ulonglong)((*piVar5 - *piVar4) * lVar13) >> 0x10) + *piVar4;
    *in_R11 = (int)((ulonglong)((*piVar8 - *piVar6) * lVar13) >> 0x10) + *piVar6;
    iVar12 = (int)((ulonglong)((*piVar9 - *piVar2) * lVar13) >> 0x10) + *piVar2;
  }
  else {
    *in_R10 = iVar12 + iVar11;
    in_R10[1] = (int)((ulonglong)((*piVar7 - *piVar3) * lVar13) >> 0x10) + *piVar7;
    in_R10[2] = (int)((ulonglong)((*piVar5 - *piVar4) * lVar13) >> 0x10) + *piVar5;
    *in_R11 = (int)((ulonglong)((*piVar8 - *piVar6) * lVar13) >> 0x10) + *piVar8;
    iVar12 = *piVar9;
    iVar12 = iVar12 + (int)((ulonglong)((iVar12 - *piVar2) * lVar13) >> 0x10);
  }
  in_R11[1] = iVar12;
  return;
}





// 函数: void FUN_180724e37(uint64_t *param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_180724e37(uint64_t *param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  uint64_t *in_R11;
  
  *param_1 = *(uint64_t *)(param_4 + 0x9536c0 + param_2 * 0xc);
  *(int32_t *)(param_1 + 1) = *(int32_t *)(param_4 + 0x9536c8 + param_2 * 0xc);
  *in_R11 = *(uint64_t *)(param_4 + 0x953700 + param_2 * 8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180724e90(longlong param_1,uint64_t param_2,int32_t param_3)
void FUN_180724e90(longlong param_1,uint64_t param_2,int32_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int8_t auStack_78 [32];
  uint64_t uStack_58;
  int32_t uStack_50;
  int8_t auStack_48 [8];
  int8_t auStack_40 [16];
  ulonglong uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    iVar4 = iVar1 * -0x400 + 0x40000;
    iVar3 = iVar4 >> 0x10;
    FUN_180724c50(auStack_40,auStack_48,iVar3,iVar4 + iVar3 * -0x10000);
    iVar1 = iVar1 + iVar2;
    iVar2 = 0x100;
    if ((iVar1 < 0x101) && (iVar2 = 0, -1 < iVar1)) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 8) = iVar2;
    uStack_58 = param_2;
    uStack_50 = param_3;
    FUN_18072ad20(param_2,auStack_40,auStack_48,param_1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_78);
}





// 函数: void FUN_180724ebf(longlong param_1,uint64_t param_2,uint64_t param_3,int param_4)
void FUN_180724ebf(longlong param_1,uint64_t param_2,uint64_t param_3,int param_4)

{
  int iVar1;
  int unaff_EBP;
  longlong unaff_RDI;
  int iVar2;
  ulonglong in_stack_00000048;
  
  iVar1 = *(int *)(param_1 + 8);
  param_4 = param_4 + iVar1 * -0x400;
  iVar2 = param_4 >> 0x10;
  FUN_180724c50(&stack0x00000038,&stack0x00000030,iVar2,param_4 + iVar2 * -0x10000);
  iVar1 = iVar1 + unaff_EBP;
  iVar2 = 0x100;
  if ((iVar1 < 0x101) && (iVar2 = 0, -1 < iVar1)) {
    iVar2 = iVar1;
  }
  *(int *)(unaff_RDI + 8) = iVar2;
  FUN_18072ad20();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180724eff(int param_1)
void FUN_180724eff(int param_1)

{
  int iVar1;
  longlong unaff_RDI;
  ulonglong in_stack_00000048;
  
  iVar1 = 0;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  *(int *)(unaff_RDI + 8) = iVar1;
  FUN_18072ad20();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180724f40(longlong param_1,float *param_2,longlong param_3,longlong param_4)
void FUN_180724f40(longlong param_1,float *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int8_t auStack_5e8 [48];
  float fStack_5b8;
  int32_t uStack_5b4;
  longlong lStack_5b0;
  float fStack_5a4;
  float *pfStack_5a0;
  int8_t auStack_4b8 [960];
  ulonglong uStack_f8;
  
  uStack_f8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_5e8;
  lStack_5b0 = param_4 + (longlong)*(int *)(param_1 + 0x11f4) * -4;
  fVar11 = (float)*(int *)(param_1 + 0x1274) * 0.0078125;
  fVar9 = (float)(*(int *)(param_1 + 0x1264) + *(int *)(param_1 + 0x1260)) * 1.5258789e-05;
  param_2[0xae] = fVar9;
  dVar6 = (double)exp((double)((fVar11 - 20.0) * -0.25));
  fVar8 = (float)(1.0 / (dVar6 + 1.0));
  param_2[0xaf] = fVar8;
  if (*(int *)(param_1 + 0x1240) == 0) {
    fVar7 = 1.0 - (float)*(int *)(param_1 + 0x11b0) * 0.00390625;
    fVar11 = fVar11 + (fVar9 * 0.5 + 0.5) * fVar8 * -2.0 * fVar7 * fVar7;
  }
  iVar5 = 0;
  fVar8 = 0.0;
  if (*(char *)(param_1 + 0x12a5) == '\x02') {
    fVar9 = *(float *)(param_1 + 0x275c) + *(float *)(param_1 + 0x275c);
    *(int8_t *)(param_1 + 0x12a6) = 0;
  }
  else {
    fVar7 = 0.0;
    iVar1 = *(int *)(param_1 + 0x11dc) * 2;
    iVar3 = 0;
    iVar4 = (*(short *)(param_1 + 0x11e0) * 5) / 2;
    fVar9 = (6.0 - (float)*(int *)(param_1 + 0x1274) * 0.003125) * (1.0 - fVar9);
    if (0 < iVar4) {
      fVar10 = 0.0;
      do {
        dVar6 = (double)FUN_18072b3a0(param_3,iVar1);
        dVar6 = (double)log10((double)((float)dVar6 + (float)iVar1));
        if (0 < iVar3) {
          fVar7 = fVar7 + ABS((float)(dVar6 * 3.32192809488736) - fVar10);
        }
        param_3 = param_3 + (longlong)iVar1 * 4;
        iVar3 = iVar3 + 1;
        fVar10 = (float)(dVar6 * 3.32192809488736);
      } while (iVar3 < iVar4);
    }
    if (fVar7 <= (float)(iVar4 + -1) * 0.6) {
      *(int8_t *)(param_1 + 0x12a6) = 1;
    }
    else {
      *(int8_t *)(param_1 + 0x12a6) = 0;
    }
  }
  fStack_5a4 = fVar9 + fVar11;
  iVar4 = 1;
  iVar1 = *(int *)(param_1 + 0x11e0);
  fStack_5b8 = 0.0;
  if (iVar1 < 1) {
    dVar6 = (double)pow(0x4000000000000000,(double)(fStack_5a4 * -0.16));
    iVar3 = 0;
    pfVar2 = param_2;
    if (0 < iVar1) {
      do {
        iVar3 = iVar3 + 1;
        *pfVar2 = (float)dVar6 * *pfVar2 + 1.2483306;
        iVar1 = *(int *)(param_1 + 0x11e0);
        pfVar2 = pfVar2 + 1;
      } while (iVar3 < iVar1);
    }
    iVar3 = *(int *)(param_1 + 0x11b0);
    fVar9 = ((float)*(int *)(param_1 + 0x1260) * 2.3841858e-07 + 0.0078125) * (float)iVar3;
    if (*(char *)(param_1 + 0x12a5) == '\x02') {
      iVar4 = 0;
      if (0 < iVar1) {
        pfVar2 = param_2 + 0x9d;
        do {
          iVar4 = iVar4 + 1;
          fVar11 = 3.0 / (float)(int)pfVar2[-100] + 0.2 / (float)*(int *)(param_1 + 0x11dc);
          *pfVar2 = fVar11 - 1.0;
          pfVar2[4] = (1.0 - fVar11) - fVar9 * fVar11;
          pfVar2 = pfVar2 + 1;
          iVar1 = *(int *)(param_1 + 0x11e0);
        } while (iVar4 < iVar1);
        iVar3 = *(int *)(param_1 + 0x11b0);
      }
      fStack_5b8 = -0.25 - (float)iVar3 * 0.0010253906;
    }
    else {
      fVar11 = 1.3 / (float)*(int *)(param_1 + 0x11dc);
      param_2[0x9d] = fVar11 - 1.0;
      param_2[0xa1] = (1.0 - fVar11) - fVar9 * fVar11 * 0.6;
      iVar1 = *(int *)(param_1 + 0x11e0);
      if (1 < iVar1) {
        pfVar2 = param_2 + 0xa2;
        do {
          iVar4 = iVar4 + 1;
          pfVar2[-4] = param_2[0x9d];
          *pfVar2 = param_2[0xa1];
          iVar1 = *(int *)(param_1 + 0x11e0);
          pfVar2 = pfVar2 + 1;
        } while (iVar4 < iVar1);
      }
      fStack_5b8 = -0.25;
    }
    if (*(char *)(param_1 + 0x12a5) == '\x02') {
      fVar8 = SQRT(*(float *)(param_1 + 0x275c)) *
              ((1.0 - (1.0 - param_2[0xaf]) * param_2[0xae]) * 0.2 + 0.3);
    }
    if (0 < iVar1) {
      param_2 = param_2 + 0xa5;
      do {
        iVar5 = iVar5 + 1;
        fVar9 = (fVar8 - *(float *)(param_1 + 0x1c14)) * 0.4 + *(float *)(param_1 + 0x1c14);
        *(float *)(param_1 + 0x1c14) = fVar9;
        param_2[4] = fVar9;
        fVar9 = (fStack_5b8 - *(float *)(param_1 + 0x1c18)) * 0.4 + *(float *)(param_1 + 0x1c18);
        *(float *)(param_1 + 0x1c18) = fVar9;
        *param_2 = fVar9;
        param_2 = param_2 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x11e0));
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_f8 ^ (ulonglong)auStack_5e8);
  }
  uStack_5b4 = 0;
  iVar5 = *(int *)(param_1 + 0x11dc);
  iVar1 = (*(int *)(param_1 + 0x11f8) + iVar5 * -3) / 2;
  pfStack_5a0 = param_2;
  FUN_18072b830(param_2[0xaf] * 0.01,lStack_5b0,1,iVar1);
                    // WARNING: Subroutine does not return
  memcpy(auStack_4b8 + (longlong)iVar1 * 4,lStack_5b0 + (longlong)iVar1 * 4,
         (longlong)(iVar5 * 3) << 2);
}





