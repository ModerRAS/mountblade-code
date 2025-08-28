#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part197.c - 7 个函数

// 函数: void FUN_180781cc0(void)
void FUN_180781cc0(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c0fa64,0,0x5c);
}



uint64_t FUN_180782360(longlong param_1,int32_t param_2,int32_t *param_3,longlong param_4)

{
  float fVar1;
  
  switch(param_2) {
  case 0:
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(param_1 + 0x7e8);
    }
    if (param_4 != 0) {
      fVar1 = *(float *)(param_1 + 0x7e8);
code_r0x00018078257c:
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_4,0x20,&system_data_6430,(double)fVar1);
    }
    break;
  case 1:
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(param_1 + 0x7ec);
    }
    if (param_4 != 0) {
      fVar1 = *(float *)(param_1 + 0x7ec);
      goto code_r0x00018078257c;
    }
    break;
  case 2:
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(param_1 + 0x7f0);
    }
    if (param_4 != 0) {
      fVar1 = *(float *)(param_1 + 0x7f0);
      goto code_r0x00018078257c;
    }
    break;
  case 3:
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(param_1 + 0x7f4);
    }
    if (param_4 != 0) {
      fVar1 = *(float *)(param_1 + 0x7f4);
      goto code_r0x00018078257c;
    }
    break;
  case 4:
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(param_1 + 0x7f8);
    }
    if (param_4 != 0) {
      fVar1 = *(float *)(param_1 + 0x7f8);
      goto code_r0x00018078257c;
    }
    break;
  case 5:
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(param_1 + 0x7fc);
    }
    if (param_4 != 0) {
      fVar1 = *(float *)(param_1 + 0x7fc);
      goto code_r0x00018078257c;
    }
    break;
  case 6:
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(param_1 + 0x800);
    }
    if (param_4 != 0) {
      fVar1 = *(float *)(param_1 + 0x800);
      goto code_r0x00018078257c;
    }
    break;
  case 7:
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(param_1 + 0x804);
    }
    if (param_4 != 0) {
      fVar1 = *(float *)(param_1 + 0x804);
      goto code_r0x00018078257c;
    }
    break;
  case 8:
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(param_1 + 0x808);
    }
    if (param_4 != 0) {
      fVar1 = *(float *)(param_1 + 0x808);
      goto code_r0x00018078257c;
    }
    break;
  case 9:
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(param_1 + 0x80c);
    }
    if (param_4 != 0) {
      fVar1 = *(float *)(param_1 + 0x80c);
      goto code_r0x00018078257c;
    }
    break;
  case 10:
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(param_1 + 0x810);
    }
    if (param_4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_4,0x20,&unknown_var_4576_ptr,(int)*(float *)(param_1 + 0x810));
    }
    break;
  case 0xb:
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(param_1 + 0x814);
    }
    if (param_4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18076b390(param_4,0x20,&unknown_var_4576_ptr,(int)*(float *)(param_1 + 0x814));
    }
    break;
  case 0xc:
    if (param_3 != (int32_t *)0x0) {
      *param_3 = *(int32_t *)(param_1 + 0x850);
    }
    if (param_4 != 0) {
      fVar1 = *(float *)(param_1 + 0x850);
      goto code_r0x00018078257c;
    }
    break;
  default:
    return 0x1f;
  }
  return 0;
}



ulonglong FUN_1807825e0(longlong param_1,int32_t param_2,float param_3,char param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int32_t uVar3;
  int8_t *apuStack_18 [2];
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0x820) = param_3;
    break;
  case 1:
    *(float *)(param_1 + 0x824) = param_3;
    break;
  case 2:
    *(float *)(param_1 + 0x828) = param_3;
    break;
  case 3:
    *(float *)(param_1 + 0x82c) = param_3;
    break;
  case 4:
    *(float *)(param_1 + 0x830) = param_3;
    break;
  case 5:
    *(float *)(param_1 + 0x834) = param_3;
    break;
  case 6:
    *(float *)(param_1 + 0x838) = param_3;
    break;
  case 7:
    *(float *)(param_1 + 0x83c) = param_3;
    break;
  case 8:
    *(float *)(param_1 + 0x840) = param_3;
    break;
  case 9:
    *(float *)(param_1 + 0x844) = param_3;
    break;
  case 10:
    *(float *)(param_1 + 0x848) = param_3;
    break;
  case 0xb:
    *(float *)(param_1 + 0x84c) = param_3;
    break;
  case 0xc:
    *(float *)(param_1 + 0x850) = param_3;
    if (-80.0 < param_3) {
      uVar3 = powf(0x41200000,param_3 * 0.05);
    }
    else {
      uVar3 = 0;
    }
    *(int32_t *)(param_1 + 0x854) = uVar3;
    break;
  default:
    return 0x1f;
  }
  if ((param_4 != '\0') &&
     (uVar1 = FUN_180743700(*(uint64_t *)(param_1 + 0xa8),apuStack_18,0x10,1), (int)uVar1 == 0)) {
    *apuStack_18[0] = 7;
    *(longlong *)(apuStack_18[0] + 8) = param_1;
    uVar2 = func_0x000180743b40(*(uint64_t *)(param_1 + 0xa8),apuStack_18[0],1);
    uVar1 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180782790(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t uVar5;
  
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0xa8);
  if (lVar3 != 0) {
    func_0x000180743c20(lVar3,6);
  }
  plVar1 = (longlong *)(lVar2 + 0x370);
  **(longlong **)(lVar2 + 0x378) = *plVar1;
  lVar4 = *plVar1;
  *(uint64_t *)(lVar4 + 8) = *(uint64_t *)(lVar2 + 0x378);
  *(longlong **)(lVar2 + 0x378) = plVar1;
  *plVar1 = (longlong)plVar1;
  if ((lVar3 != 0) && (lVar3 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar3,6);
  }
  if (*(longlong *)(lVar2 + 0x260) == 0) {
    if (*(longlong *)(lVar2 + 0x268) == 0) {
      if (*(longlong *)(lVar2 + 0x270) == 0) {
        uVar5 = 0;
        if ((*(longlong *)(lVar2 + 0x218) != 0) &&
           (uVar5 = FUN_18078a340(*(longlong *)(lVar2 + 0xa8) + 0x720,*(longlong *)(lVar2 + 0x218),
                                  CONCAT71((int7)((ulonglong)lVar4 >> 8),1)), (int)uVar5 == 0)) {
          *(uint64_t *)(lVar2 + 0x218) = 0;
          uVar5 = 0;
        }
      }
      else {
        uVar5 = FUN_1807d4800();
        if ((int)uVar5 == 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar2 + 0x270),
                        &unknown_var_9488_ptr,0x114,1);
        }
      }
    }
    else {
      uVar5 = FUN_1807d4800();
      if ((int)uVar5 == 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar2 + 0x268),
                      &unknown_var_9488_ptr,0x10b,1);
      }
    }
  }
  else {
    uVar5 = FUN_1807d4800();
    if ((int)uVar5 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar2 + 0x260),
                    &unknown_var_9488_ptr,0x102,1);
    }
  }
  return uVar5;
}



uint64_t FUN_180782a70(longlong *param_1,int32_t param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  switch(param_2) {
  case 0:
    if (*(int *)(lVar2 + 0x388) == param_3) {
      return 0;
    }
    *(int *)(lVar2 + 0x388) = param_3;
    break;
  default:
    return 0x1f;
  case 6:
    if (*(int *)(lVar2 + 0x3a4) == param_3) {
      return 0;
    }
    *(int *)(lVar2 + 0x3a4) = param_3;
    break;
  case 9:
    if (*(int *)(lVar2 + 0x3d4) == param_3) {
      return 0;
    }
    *(int *)(lVar2 + 0x3d4) = param_3;
    break;
  case 0xb:
    if (*(int *)(lVar2 + 0x3b4) == param_3) {
      return 0;
    }
    *(int *)(lVar2 + 0x3b4) = param_3;
    break;
  case 0xe:
    if (*(int *)(lVar2 + 0x3c0) == param_3) {
      return 0;
    }
    *(int *)(lVar2 + 0x3c0) = param_3;
    break;
  case 0x12:
    if ((bool)*(char *)(lVar2 + 0x3d0) == (param_3 != 0)) {
      return 0;
    }
    *(bool *)(lVar2 + 0x3d0) = param_3 != 0;
    break;
  case 0x14:
    if (*(int *)(lVar2 + 0x38c) == param_3) {
      return 0;
    }
    *(int *)(lVar2 + 0x38c) = param_3;
  }
  lVar3 = *(longlong *)(lVar2 + 0xa8);
  if (lVar3 != 0) {
    func_0x000180743c20(lVar3,6);
  }
  *(int8_t *)(lVar2 + 0x220) = 1;
  plVar1 = (longlong *)(lVar2 + 0x370);
  **(longlong **)(lVar2 + 0x378) = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(lVar2 + 0x378);
  *(longlong **)(lVar2 + 0x378) = plVar1;
  *plVar1 = (longlong)plVar1;
  lVar4 = *(longlong *)(lVar2 + 0xa8);
  *(uint64_t *)(lVar2 + 0x378) = *(uint64_t *)(lVar4 + 0x10ff8);
  *plVar1 = lVar4 + 0x10ff0;
  *(longlong **)(lVar4 + 0x10ff8) = plVar1;
  **(longlong **)(lVar2 + 0x378) = (longlong)plVar1;
  if ((lVar3 != 0) && (lVar3 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar3,6);
  }
  return 0;
}



uint64_t FUN_180782b42(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBX;
  
  lVar2 = *(longlong *)(unaff_RBX + 0xa8);
  if (lVar2 != 0) {
    func_0x000180743c20(lVar2,6);
  }
  *(int8_t *)(unaff_RBX + 0x220) = 1;
  plVar1 = (longlong *)(unaff_RBX + 0x370);
  **(longlong **)(unaff_RBX + 0x378) = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(unaff_RBX + 0x378);
  *(longlong **)(unaff_RBX + 0x378) = plVar1;
  *plVar1 = (longlong)plVar1;
  lVar3 = *(longlong *)(unaff_RBX + 0xa8);
  *(uint64_t *)(unaff_RBX + 0x378) = *(uint64_t *)(lVar3 + 0x10ff8);
  *plVar1 = lVar3 + 0x10ff0;
  *(longlong **)(lVar3 + 0x10ff8) = plVar1;
  **(longlong **)(unaff_RBX + 0x378) = (longlong)plVar1;
  if ((lVar2 != 0) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar2,6);
  }
  return 0;
}



uint64_t FUN_180782bcd(void)

{
  return 0;
}



uint64_t FUN_180782d10(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = *param_1;
  if (param_2 != 0x17) {
    return 0x1f;
  }
  if ((bool)*(char *)(lVar2 + 0x238) != (param_3 != 0)) {
    *(bool *)(lVar2 + 0x238) = param_3 != 0;
    if (param_3 == 0) {
      fVar6 = *(float *)(lVar2 + 0x22c);
      fVar5 = *(float *)(lVar2 + 0x228);
    }
    else {
      fVar6 = *(float *)(lVar2 + 0x234);
      fVar5 = *(float *)(lVar2 + 0x230);
      if (fVar6 <= *(float *)(lVar2 + 0x230)) {
        fVar5 = fVar6;
      }
    }
    *(float *)(lVar2 + 0x3b8) = fVar5;
    *(float *)(lVar2 + 0x3bc) = fVar6;
    lVar3 = *(longlong *)(lVar2 + 0xa8);
    if (lVar3 != 0) {
      func_0x000180743c20(lVar3,6);
    }
    *(int8_t *)(lVar2 + 0x220) = 1;
    plVar1 = (longlong *)(lVar2 + 0x370);
    **(longlong **)(lVar2 + 0x378) = *plVar1;
    *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(lVar2 + 0x378);
    *(longlong **)(lVar2 + 0x378) = plVar1;
    *plVar1 = (longlong)plVar1;
    lVar4 = *(longlong *)(lVar2 + 0xa8);
    *(uint64_t *)(lVar2 + 0x378) = *(uint64_t *)(lVar4 + 0x10ff8);
    *plVar1 = lVar4 + 0x10ff0;
    *(longlong **)(lVar4 + 0x10ff8) = plVar1;
    **(longlong **)(lVar2 + 0x378) = (longlong)plVar1;
    if ((lVar3 != 0) && (lVar3 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar3,6);
    }
    return 0;
  }
  return 0;
}



uint64_t FUN_180782d38(uint64_t param_1,uint64_t param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int8_t in_AL;
  longlong unaff_RBX;
  float fVar4;
  float fVar5;
  
  *(int8_t *)(unaff_RBX + 0x238) = in_AL;
  if (param_3 == 0) {
    fVar5 = *(float *)(unaff_RBX + 0x22c);
    fVar4 = *(float *)(unaff_RBX + 0x228);
  }
  else {
    fVar5 = *(float *)(unaff_RBX + 0x234);
    fVar4 = *(float *)(unaff_RBX + 0x230);
    if (fVar5 <= *(float *)(unaff_RBX + 0x230)) {
      fVar4 = fVar5;
    }
  }
  *(float *)(unaff_RBX + 0x3b8) = fVar4;
  *(float *)(unaff_RBX + 0x3bc) = fVar5;
  lVar2 = *(longlong *)(unaff_RBX + 0xa8);
  if (lVar2 != 0) {
    func_0x000180743c20(lVar2,6);
  }
  *(int8_t *)(unaff_RBX + 0x220) = 1;
  plVar1 = (longlong *)(unaff_RBX + 0x370);
  **(longlong **)(unaff_RBX + 0x378) = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = *(uint64_t *)(unaff_RBX + 0x378);
  *(longlong **)(unaff_RBX + 0x378) = plVar1;
  *plVar1 = (longlong)plVar1;
  lVar3 = *(longlong *)(unaff_RBX + 0xa8);
  *(uint64_t *)(unaff_RBX + 0x378) = *(uint64_t *)(lVar3 + 0x10ff8);
  *plVar1 = lVar3 + 0x10ff0;
  *(longlong **)(lVar3 + 0x10ff8) = plVar1;
  **(longlong **)(unaff_RBX + 0x378) = (longlong)plVar1;
  if ((lVar2 != 0) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar2,6);
  }
  return 0;
}



uint64_t FUN_180782e0c(void)

{
  return 0x1f;
}



uint64_t
FUN_180782e60(longlong *param_1,int param_2,longlong *param_3,int32_t *param_4,
             int8_t *param_5)

{
  float *pfVar1;
  longlong lVar2;
  
  if (param_2 != 0x13) {
    return 0x1f;
  }
  lVar2 = *param_1;
  pfVar1 = (float *)(lVar2 + 0x23c);
  func_0x0001807d49f0(*(int32_t *)(lVar2 + 0x3b4),*(int32_t *)(lVar2 + 1000),
                      *(int32_t *)(lVar2 + 0x3b8),*(int32_t *)(lVar2 + 0x3bc),pfVar1,
                      *(int32_t *)(*(longlong *)(lVar2 + 0xa8) + 0x11408));
  *pfVar1 = *(float *)(lVar2 + 0x3c8) * *pfVar1 + (1.0 - *(float *)(lVar2 + 0x3c8));
  *param_3 = (longlong)pfVar1;
  *param_4 = 8;
  if (param_5 != (int8_t *)0x0) {
    *param_5 = 0;
  }
  return 0;
}



uint64_t FUN_180782e87(longlong *param_1)

{
  float *pfVar1;
  longlong lVar2;
  int32_t *unaff_RSI;
  longlong *unaff_R14;
  int32_t uStack0000000000000028;
  int8_t *in_stack_00000060;
  
  lVar2 = *param_1;
  pfVar1 = (float *)(lVar2 + 0x23c);
  uStack0000000000000028 = *(int32_t *)(*(longlong *)(lVar2 + 0xa8) + 0x11408);
  func_0x0001807d49f0(*(int32_t *)(lVar2 + 0x3b4),*(int32_t *)(lVar2 + 1000),
                      *(int32_t *)(lVar2 + 0x3b8),*(int32_t *)(lVar2 + 0x3bc),pfVar1);
  *pfVar1 = *(float *)(lVar2 + 0x3c8) * *pfVar1 + (1.0 - *(float *)(lVar2 + 0x3c8));
  *unaff_R14 = (longlong)pfVar1;
  *unaff_RSI = 8;
  if (in_stack_00000060 != (int8_t *)0x0) {
    *in_stack_00000060 = 0;
  }
  return 0;
}



uint64_t FUN_180782f18(void)

{
  int8_t *in_RAX;
  
  *in_RAX = 0;
  return 0;
}



int32_t FUN_180782f30(longlong param_1,uint64_t param_2)

{
  int32_t auStackX_8 [8];
  
  func_0x0001807d49f0(*(int32_t *)(param_1 + 0x2a4),param_2,*(int32_t *)(param_1 + 0x2a8),
                      *(int32_t *)(param_1 + 0x2ac),auStackX_8,
                      *(int32_t *)(*(longlong *)(param_1 + 0xa8) + 0x11408));
  return auStackX_8[0];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180783090(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180783090(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int8_t auStack_b8 [96];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
                    // WARNING: Subroutine does not return
  memset(param_3,0,0xa0);
}





// 函数: void FUN_1807830fc(float param_1,float param_2,float param_3,float param_4)
void FUN_1807830fc(float param_1,float param_2,float param_3,float param_4)

{
  longlong unaff_RSI;
  int32_t *unaff_RDI;
  bool in_ZF;
  float fVar1;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  ulonglong in_stack_00000060;
  
  if ((!in_ZF) || (param_2 != unaff_XMM6_Da)) {
    fVar1 = (float)atan2f();
    unaff_RDI[1] = fVar1 * unaff_XMM7_Da;
    unaff_RDI[4] = SQRT(*(float *)(unaff_RSI + 0xc) * *(float *)(unaff_RSI + 0xc) +
                        *(float *)(unaff_RSI + 4) * *(float *)(unaff_RSI + 4));
  }
  if ((*(float *)(unaff_RSI + 0x1c) != unaff_XMM6_Da) ||
     (unaff_XMM6_Da != *(float *)(unaff_RSI + 0x24))) {
    fVar1 = (float)atan2f(*(float *)(unaff_RSI + 0x1c),*(int32_t *)(unaff_RSI + 0x24));
    unaff_RDI[2] = fVar1 * unaff_XMM7_Da;
  }
  unaff_RDI[3] = SQRT(param_4 + param_1 * param_1 + param_3 * param_2);
  *unaff_RDI = 0x3f800000;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18078318f(void)
void FUN_18078318f(void)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float *pfVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  int aiStackX_20 [2];
  ulonglong in_stack_00000060;
  
  uVar5 = 0;
  if (0 < (int)in_RAX) {
    pfVar6 = (float *)(unaff_RSI + 4);
    uVar7 = uVar5;
    uVar8 = uVar5;
    do {
      fVar10 = SQRT(pfVar6[1] * pfVar6[1] + *pfVar6 * *pfVar6 + pfVar6[2] * pfVar6[2]);
      *(float *)(&stack0x00000040 + uVar7 * 4) = fVar10;
      uVar4 = uVar5;
      uVar3 = uVar7;
      if (3 < (longlong)uVar7) {
        do {
          if (fVar10 < *(float *)(&stack0x00000040 + (longlong)aiStackX_20[uVar4] * 4))
          goto joined_r0x000180783279;
          if (fVar10 < *(float *)(&stack0x00000040 + (longlong)aiStackX_20[uVar4 + 1] * 4)) {
            uVar4 = uVar4 + 1;
            goto joined_r0x000180783279;
          }
          if (fVar10 < *(float *)(&stack0x00000040 +
                                 (longlong)*(int *)(&stack0x00000028 + uVar4 * 4) * 4)) {
            uVar4 = uVar4 + 2;
            goto joined_r0x000180783279;
          }
          if (fVar10 < *(float *)(&stack0x00000040 +
                                 (longlong)*(int *)(&stack0x0000002c + uVar4 * 4) * 4)) {
            uVar4 = uVar4 + 3;
            goto joined_r0x000180783279;
          }
          uVar4 = uVar4 + 4;
        } while ((longlong)uVar4 < (longlong)(uVar7 - 3));
      }
      while (((longlong)uVar4 < (longlong)uVar7 &&
             (*(float *)(&stack0x00000040 + (longlong)aiStackX_20[uVar4] * 4) <= fVar10))) {
        uVar4 = uVar4 + 1;
      }
joined_r0x000180783279:
      while (uVar2 = uVar3 - 1, (longlong)uVar4 <= (longlong)uVar2) {
        aiStackX_20[uVar3] = aiStackX_20[uVar2];
        uVar3 = uVar2;
      }
      aiStackX_20[uVar4] = (int)uVar8;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)((int)uVar8 + 1);
      pfVar6 = pfVar6 + 0xc;
    } while ((longlong)uVar7 < in_RAX);
    pfVar6 = (float *)(unaff_RDI + 0x10);
    do {
      lVar9 = (longlong)aiStackX_20[uVar5];
      fVar10 = *(float *)(unaff_RSI + 4 + lVar9 * 0x30);
      if ((fVar10 != 0.0) || (*(float *)(unaff_RSI + 0xc + lVar9 * 0x30) != 0.0)) {
        fVar10 = (float)atan2f(fVar10,*(int32_t *)(unaff_RSI + 0xc + lVar9 * 0x30));
        pfVar6[-3] = fVar10 * 57.295776;
        fVar10 = *(float *)(unaff_RSI + 4 + lVar9 * 0x30);
        fVar1 = *(float *)(unaff_RSI + 0xc + lVar9 * 0x30);
        *pfVar6 = SQRT(fVar1 * fVar1 + fVar10 * fVar10);
      }
      fVar10 = *(float *)(unaff_RSI + 0x1c + lVar9 * 0x30);
      if ((fVar10 != 0.0) || (*(float *)(unaff_RSI + 0x24 + lVar9 * 0x30) != 0.0)) {
        fVar10 = (float)atan2f(fVar10,*(int32_t *)(unaff_RSI + 0x24 + lVar9 * 0x30));
        pfVar6[-2] = fVar10 * 57.295776;
      }
      uVar5 = uVar5 + 1;
      pfVar6[-1] = *(float *)(&stack0x00000040 + lVar9 * 4);
      pfVar6[-4] = *(float *)(unaff_RSI + 0x184 + lVar9 * 4);
      pfVar6 = pfVar6 + 5;
    } while ((longlong)uVar5 < in_RAX);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1807831af(void)
void FUN_1807831af(void)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float *pfVar5;
  ulonglong uVar6;
  int in_R10D;
  longlong lVar7;
  longlong unaff_R15;
  float fVar8;
  int aiStackX_20 [2];
  ulonglong in_stack_00000060;
  
  pfVar5 = (float *)(unaff_RSI + 4);
  uVar6 = unaff_RBP & 0xffffffff;
  do {
    fVar8 = SQRT(pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5 + pfVar5[2] * pfVar5[2]);
    *(float *)(&stack0x00000040 + uVar6 * 4) = fVar8;
    uVar4 = unaff_RBP;
    uVar3 = uVar6;
    if (3 < (longlong)uVar6) {
      do {
        if (fVar8 < *(float *)(&stack0x00000040 + (longlong)aiStackX_20[uVar4] * 4))
        goto joined_r0x000180783279;
        if (fVar8 < *(float *)(&stack0x00000040 + (longlong)aiStackX_20[uVar4 + 1] * 4)) {
          uVar4 = uVar4 + 1;
          goto joined_r0x000180783279;
        }
        if (fVar8 < *(float *)(&stack0x00000040 +
                              (longlong)*(int *)(&stack0x00000028 + uVar4 * 4) * 4)) {
          uVar4 = uVar4 + 2;
          goto joined_r0x000180783279;
        }
        if (fVar8 < *(float *)(&stack0x00000040 +
                              (longlong)*(int *)(&stack0x0000002c + uVar4 * 4) * 4)) {
          uVar4 = uVar4 + 3;
          goto joined_r0x000180783279;
        }
        uVar4 = uVar4 + 4;
      } while ((longlong)uVar4 < (longlong)(uVar6 - 3));
    }
    while (((longlong)uVar4 < (longlong)uVar6 &&
           (*(float *)(&stack0x00000040 + (longlong)aiStackX_20[uVar4] * 4) <= fVar8))) {
      uVar4 = uVar4 + 1;
    }
joined_r0x000180783279:
    while (uVar2 = uVar3 - 1, (longlong)uVar4 <= (longlong)uVar2) {
      aiStackX_20[uVar3] = aiStackX_20[uVar2];
      uVar3 = uVar2;
    }
    aiStackX_20[uVar4] = in_R10D;
    uVar6 = uVar6 + 1;
    in_R10D = in_R10D + 1;
    pfVar5 = pfVar5 + 0xc;
    if (unaff_R15 <= (longlong)uVar6) {
      pfVar5 = (float *)(unaff_RDI + 0x10);
      do {
        lVar7 = (longlong)aiStackX_20[unaff_RBP];
        fVar8 = *(float *)(unaff_RSI + 4 + lVar7 * 0x30);
        if ((fVar8 != 0.0) || (*(float *)(unaff_RSI + 0xc + lVar7 * 0x30) != 0.0)) {
          fVar8 = (float)atan2f(fVar8,*(int32_t *)(unaff_RSI + 0xc + lVar7 * 0x30));
          pfVar5[-3] = fVar8 * 57.295776;
          fVar8 = *(float *)(unaff_RSI + 4 + lVar7 * 0x30);
          fVar1 = *(float *)(unaff_RSI + 0xc + lVar7 * 0x30);
          *pfVar5 = SQRT(fVar1 * fVar1 + fVar8 * fVar8);
        }
        fVar8 = *(float *)(unaff_RSI + 0x1c + lVar7 * 0x30);
        if ((fVar8 != 0.0) || (*(float *)(unaff_RSI + 0x24 + lVar7 * 0x30) != 0.0)) {
          fVar8 = (float)atan2f(fVar8,*(int32_t *)(unaff_RSI + 0x24 + lVar7 * 0x30));
          pfVar5[-2] = fVar8 * 57.295776;
        }
        unaff_RBP = unaff_RBP + 1;
        pfVar5[-1] = *(float *)(&stack0x00000040 + lVar7 * 4);
        pfVar5[-4] = *(float *)(unaff_RSI + 0x184 + lVar7 * 4);
        pfVar5 = pfVar5 + 5;
      } while ((longlong)unaff_RBP < unaff_R15);
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}





// 函数: void FUN_18078336e(void)
void FUN_18078336e(void)

{
  ulonglong in_stack_00000060;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18078337e(void)
void FUN_18078337e(void)

{
  ulonglong in_stack_00000060;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
}





