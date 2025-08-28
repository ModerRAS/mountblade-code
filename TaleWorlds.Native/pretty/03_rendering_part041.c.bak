#include "TaleWorlds.Native.Split.h"

// 03_rendering_part041.c - 9 个函数

// 函数: void FUN_18028d0b0(int *param_1,char param_2,int param_3,int param_4,int param_5,int param_6,
void FUN_18028d0b0(int *param_1,char param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  int iVar1;
  int16_t *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*param_1 != 0) {
    if ((param_1[7] < param_3) || (iVar5 = param_1[7], param_1[1] == 0)) {
      param_1[7] = param_3;
      iVar5 = param_3;
    }
    if ((param_1[9] < param_4) || (iVar3 = param_1[9], param_1[1] == 0)) {
      param_1[9] = param_4;
      iVar3 = param_4;
    }
    if ((param_3 < param_1[6]) || (iVar4 = param_1[6], param_1[1] == 0)) {
      param_1[6] = param_3;
      iVar4 = param_3;
    }
    if ((param_4 < param_1[8]) || (iVar1 = param_1[8], param_1[1] == 0)) {
      param_1[8] = param_4;
      iVar1 = param_4;
    }
    param_1[1] = 1;
    if (param_2 == '\x04') {
      if (iVar5 < param_5) {
        param_1[7] = param_5;
        iVar5 = param_5;
      }
      if (iVar3 < param_6) {
        param_1[9] = param_6;
        iVar3 = param_6;
      }
      if (param_5 < iVar4) {
        param_1[6] = param_5;
        iVar4 = param_5;
      }
      if (param_6 < iVar1) {
        param_1[8] = param_6;
        iVar1 = param_6;
      }
      if (iVar5 < param_7) {
        param_1[7] = param_7;
      }
      if (iVar3 < param_8) {
        param_1[9] = param_8;
      }
      if (param_7 < iVar4) {
        param_1[6] = param_7;
      }
      if (param_8 < iVar1) {
        param_1[8] = param_8;
      }
    }
    param_1[0xc] = param_1[0xc] + 1;
    return;
  }
  iVar5 = param_1[0xc];
  puVar2 = (int16_t *)((longlong)iVar5 * 0xe + *(longlong *)(param_1 + 10));
  puVar2[2] = (int16_t)param_5;
  puVar2[3] = (int16_t)param_6;
  *(char *)(puVar2 + 6) = param_2;
  *puVar2 = (short)param_3;
  puVar2[1] = (short)param_4;
  puVar2[4] = (int16_t)param_7;
  puVar2[5] = (int16_t)param_8;
  param_1[0xc] = iVar5 + 1;
  return;
}





// 函数: void FUN_18028d0c8(longlong param_1,uint64_t param_2,int param_3,int param_4,uint64_t param_5,
void FUN_18028d0c8(longlong param_1,uint64_t param_2,int param_3,int param_4,uint64_t param_5,
                  int param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  char unaff_SIL;
  int iVar3;
  longlong in_R10;
  int in_R11D;
  
  if ((param_3 < in_R11D) || (*(int *)(param_1 + 4) == 0)) {
    *(int *)(param_1 + 0x1c) = in_R11D;
    param_3 = in_R11D;
  }
  if ((*(int *)(param_1 + 0x24) < param_4) ||
     (iVar2 = *(int *)(param_1 + 0x24), *(int *)(param_1 + 4) == 0)) {
    *(int *)(param_1 + 0x24) = param_4;
    iVar2 = param_4;
  }
  if ((in_R11D < *(int *)(param_1 + 0x18)) ||
     (iVar3 = *(int *)(param_1 + 0x18), *(int *)(param_1 + 4) == 0)) {
    *(int *)(param_1 + 0x18) = in_R11D;
    iVar3 = in_R11D;
  }
  if ((param_4 < *(int *)(param_1 + 0x20)) ||
     (iVar1 = *(int *)(param_1 + 0x20), *(int *)(param_1 + 4) == 0)) {
    *(int *)(param_1 + 0x20) = param_4;
    iVar1 = param_4;
  }
  *(int32_t *)(param_1 + 4) = 1;
  if (unaff_SIL == '\x04') {
    if (param_3 < param_6) {
      *(int *)(param_1 + 0x1c) = param_6;
      param_3 = param_6;
    }
    if (iVar2 < param_7) {
      *(int *)(in_R10 + 0x24) = param_7;
      iVar2 = param_7;
    }
    if (param_6 < iVar3) {
      *(int *)(in_R10 + 0x18) = param_6;
      iVar3 = param_6;
    }
    if (param_7 < iVar1) {
      *(int *)(in_R10 + 0x20) = param_7;
      iVar1 = param_7;
    }
    if (param_3 < param_8) {
      *(int *)(in_R10 + 0x1c) = param_8;
    }
    if (iVar2 < param_9) {
      *(int *)(in_R10 + 0x24) = param_9;
    }
    if (param_8 < iVar3) {
      *(int *)(in_R10 + 0x18) = param_8;
    }
    if (param_9 < iVar1) {
      *(int *)(in_R10 + 0x20) = param_9;
    }
  }
  *(int *)(in_R10 + 0x30) = *(int *)(in_R10 + 0x30) + 1;
  return;
}





// 函数: void FUN_18028d19a(longlong param_1,uint64_t param_2,uint64_t param_3,int16_t param_4,
void FUN_18028d19a(longlong param_1,uint64_t param_2,uint64_t param_3,int16_t param_4,
                  uint64_t param_5,int16_t param_6,int16_t param_7,int16_t param_8,
                  int16_t param_9)

{
  int iVar1;
  int16_t *puVar2;
  int8_t unaff_SIL;
  int16_t in_R11W;
  
  iVar1 = *(int *)(param_1 + 0x30);
  puVar2 = (int16_t *)((longlong)iVar1 * 0xe + *(longlong *)(param_1 + 0x28));
  puVar2[2] = param_6;
  puVar2[3] = param_7;
  *(int8_t *)(puVar2 + 6) = unaff_SIL;
  *puVar2 = in_R11W;
  puVar2[1] = param_4;
  puVar2[4] = param_8;
  puVar2[5] = param_9;
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  return;
}





// 函数: void FUN_18028d290(int *param_1,float param_2,float param_3)
void FUN_18028d290(int *param_1,float param_2,float param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  func_0x00018028d1e0();
  param_2 = param_2 + (float)param_1[4];
  param_3 = param_3 + (float)param_1[5];
  param_1[4] = (int)param_2;
  param_1[2] = (int)param_2;
  param_1[5] = (int)param_3;
  param_1[3] = (int)param_3;
  iVar4 = (int)param_3;
  iVar5 = (int)param_2;
  if (*param_1 != 0) {
    if ((param_1[7] < iVar5) || (param_1[1] == 0)) {
      param_1[7] = iVar5;
    }
    if ((param_1[9] < iVar4) || (param_1[1] == 0)) {
      param_1[9] = iVar4;
    }
    if ((iVar5 < param_1[6]) || (param_1[1] == 0)) {
      param_1[6] = iVar5;
    }
    if ((iVar4 < param_1[8]) || (param_1[1] == 0)) {
      param_1[8] = iVar4;
    }
    param_1[0xc] = param_1[0xc] + 1;
    param_1[1] = 1;
    return;
  }
  lVar2 = *(longlong *)(param_1 + 10);
  iVar1 = param_1[0xc];
  lVar3 = (longlong)iVar1 * 0xe;
  *(short *)(lVar3 + 2 + lVar2) = (short)iVar4;
  *(uint64_t *)(lVar3 + 4 + lVar2) = 0;
  *(int8_t *)(lVar3 + 0xc + lVar2) = 1;
  *(short *)(lVar3 + lVar2) = (short)iVar5;
  param_1[0xc] = iVar1 + 1;
  return;
}





// 函数: void FUN_18028d400(longlong param_1,float param_2,float param_3,float param_4,float param_5,
void FUN_18028d400(longlong param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7)

{
  int iVar1;
  
  param_2 = param_2 + *(float *)(param_1 + 0x10);
  param_3 = param_3 + *(float *)(param_1 + 0x14);
  param_4 = param_2 + param_4;
  iVar1 = (int)param_3;
  param_3 = param_3 + param_5;
  param_6 = param_4 + param_6;
  *(float *)(param_1 + 0x10) = param_6;
  param_7 = param_3 + param_7;
  *(float *)(param_1 + 0x14) = param_7;
  FUN_18028d0b0(param_1,CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),4),(int)param_6,(int)param_7,
                (int)param_2,iVar1,(int)param_4,(int)param_3);
  return;
}



uint64_t * FUN_18028d4a0(uint64_t *param_1,longlong param_2,int param_3)

{
  char *pcVar1;
  uint64_t uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  uint64_t *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int8_t auStack_38 [16];
  int8_t auStack_28 [16];
  
  pcVar1 = *(char **)(param_2 + 0x90);
  iVar12 = 0;
  uStack_50._4_4_ = (int)((ulonglong)*(longlong *)(param_2 + 0x98) >> 0x20);
  iVar10 = uStack_50._4_4_;
  if ((*(longlong *)(param_2 + 0x98) < 0) || (iVar10 = 0, uStack_50._4_4_ < 1)) {
    cVar3 = '\0';
  }
  else {
    cVar3 = *pcVar1;
    iVar10 = 1;
  }
  if (cVar3 == '\0') {
    iVar10 = iVar10 + param_3;
    if (((uStack_50._4_4_ < iVar10) || (iVar10 < 0)) || (uStack_50._4_4_ <= iVar10)) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uint)(byte)pcVar1[iVar10];
    }
  }
  else {
    uVar11 = 0xffffffff;
    if (cVar3 == '\x03') {
      if (iVar10 < uStack_50._4_4_) {
        lVar8 = (longlong)iVar10;
        iVar10 = iVar10 + 1;
        cVar3 = pcVar1[lVar8];
      }
      else {
        cVar3 = '\0';
      }
      if (iVar10 < uStack_50._4_4_) {
        lVar8 = (longlong)iVar10;
        iVar10 = iVar10 + 1;
        cVar4 = pcVar1[lVar8];
      }
      else {
        cVar4 = '\0';
      }
      if (iVar10 < uStack_50._4_4_) {
        lVar8 = (longlong)iVar10;
        iVar10 = iVar10 + 1;
        cVar7 = pcVar1[lVar8];
      }
      else {
        cVar7 = '\0';
      }
      if (iVar10 < uStack_50._4_4_) {
        lVar8 = (longlong)iVar10;
        iVar10 = iVar10 + 1;
        cVar5 = pcVar1[lVar8];
      }
      else {
        cVar5 = '\0';
      }
      uVar13 = (uint)CONCAT11(cVar7,cVar5);
      uVar11 = 0xffffffff;
      if (CONCAT11(cVar3,cVar4) != 0) {
        do {
          if (iVar10 < uStack_50._4_4_) {
            lVar8 = (longlong)iVar10;
            iVar10 = iVar10 + 1;
            bVar6 = pcVar1[lVar8];
          }
          else {
            bVar6 = 0;
          }
          if (iVar10 < uStack_50._4_4_) {
            lVar8 = (longlong)iVar10;
            iVar10 = iVar10 + 1;
            cVar7 = pcVar1[lVar8];
          }
          else {
            cVar7 = '\0';
          }
          if (iVar10 < uStack_50._4_4_) {
            lVar8 = (longlong)iVar10;
            iVar10 = iVar10 + 1;
            cVar5 = pcVar1[lVar8];
          }
          else {
            cVar5 = '\0';
          }
        } while (((param_3 < (int)uVar13) ||
                 (uVar11 = (uint)bVar6, (int)(uint)CONCAT11(cVar7,cVar5) <= param_3)) &&
                (iVar12 = iVar12 + 1, uVar13 = (uint)CONCAT11(cVar7,cVar5), uVar11 = 0xffffffff,
                iVar12 < (int)(uint)CONCAT11(cVar3,cVar4)));
      }
    }
  }
  uStack_58 = *(uint64_t *)(param_2 + 0x80);
  uStack_50 = *(uint64_t *)(param_2 + 0x88);
  puVar9 = (uint64_t *)FUN_18028b4c0(auStack_38,&uStack_58,uVar11);
  uStack_48 = *(uint64_t *)(param_2 + 0x40);
  uStack_40 = *(uint64_t *)(param_2 + 0x48);
  uStack_58 = *puVar9;
  uStack_50 = puVar9[1];
  puVar9 = (uint64_t *)FUN_18028b820(auStack_28,&uStack_48,&uStack_58);
  uVar2 = puVar9[1];
  *param_1 = *puVar9;
  param_1[1] = uVar2;
  return param_1;
}





// 函数: void FUN_18028d533(int param_1,uint64_t param_2,int param_3,longlong param_4,uint64_t param_5,
void FUN_18028d533(int param_1,uint64_t param_2,int param_3,longlong param_4,uint64_t param_5,
                  int32_t param_6,int32_t param_7)

{
  uint64_t uVar1;
  int8_t uVar2;
  int8_t uVar3;
  int8_t uVar4;
  byte bVar5;
  int8_t uVar6;
  longlong lVar7;
  uint64_t *puVar8;
  uint unaff_EBP;
  uint uVar9;
  int unaff_EDI;
  int in_R10D;
  uint uVar10;
  longlong unaff_R14;
  uint64_t *unaff_R15;
  int32_t uStack0000000000000034;
  int32_t uStack000000000000003c;
  
  if (param_1 < param_3) {
    lVar7 = (longlong)param_1;
    param_1 = param_1 + 1;
    uVar2 = *(int8_t *)(lVar7 + param_4);
  }
  else {
    uVar2 = 0;
  }
  if (param_1 < param_3) {
    lVar7 = (longlong)param_1;
    param_1 = param_1 + 1;
    uVar3 = *(int8_t *)(lVar7 + param_4);
  }
  else {
    uVar3 = 0;
  }
  if (param_1 < param_3) {
    lVar7 = (longlong)param_1;
    param_1 = param_1 + 1;
    uVar6 = *(int8_t *)(lVar7 + param_4);
  }
  else {
    uVar6 = 0;
  }
  if (param_1 < param_3) {
    lVar7 = (longlong)param_1;
    param_1 = param_1 + 1;
    uVar4 = *(int8_t *)(lVar7 + param_4);
  }
  else {
    uVar4 = 0;
  }
  uVar10 = (uint)CONCAT11(uVar6,uVar4);
  uVar9 = unaff_EBP;
  if (CONCAT11(uVar2,uVar3) != 0) {
    do {
      if (param_1 < param_3) {
        lVar7 = (longlong)param_1;
        param_1 = param_1 + 1;
        bVar5 = *(byte *)(lVar7 + param_4);
      }
      else {
        bVar5 = 0;
      }
      if (param_1 < param_3) {
        lVar7 = (longlong)param_1;
        param_1 = param_1 + 1;
        uVar6 = *(int8_t *)(lVar7 + param_4);
      }
      else {
        uVar6 = 0;
      }
      if (param_1 < param_3) {
        lVar7 = (longlong)param_1;
        param_1 = param_1 + 1;
        uVar4 = *(int8_t *)(lVar7 + param_4);
      }
      else {
        uVar4 = 0;
      }
    } while (((unaff_EDI < (int)uVar10) ||
             (uVar9 = (uint)bVar5, (int)(uint)CONCAT11(uVar6,uVar4) <= unaff_EDI)) &&
            (in_R10D = in_R10D + 1, uVar10 = (uint)CONCAT11(uVar6,uVar4), uVar9 = unaff_EBP,
            in_R10D < (int)(uint)CONCAT11(uVar2,uVar3)));
  }
  param_5._0_4_ = *(int32_t *)(unaff_R14 + 0x88);
  param_5._4_4_ = *(int32_t *)(unaff_R14 + 0x8c);
  lVar7 = FUN_18028b4c0(&stack0x00000040,&stack0x00000020,uVar9,param_4,
                        *(int32_t *)(unaff_R14 + 0x80));
  param_6 = *(int32_t *)(unaff_R14 + 0x40);
  uStack0000000000000034 = *(int32_t *)(unaff_R14 + 0x44);
  param_7 = *(int32_t *)(unaff_R14 + 0x48);
  uStack000000000000003c = *(int32_t *)(unaff_R14 + 0x4c);
  param_5._0_4_ = *(int32_t *)(lVar7 + 8);
  param_5._4_4_ = *(int32_t *)(lVar7 + 0xc);
  puVar8 = (uint64_t *)FUN_18028b820(&stack0x00000050,&param_6,&stack0x00000020);
  uVar1 = puVar8[1];
  *unaff_R15 = *puVar8;
  unaff_R15[1] = uVar1;
  return;
}





// 函数: void FUN_18028d5a4(int param_1,uint64_t param_2,int param_3,longlong param_4,uint64_t param_5,
void FUN_18028d5a4(int param_1,uint64_t param_2,int param_3,longlong param_4,uint64_t param_5,
                  int32_t param_6,int32_t param_7)

{
  uint64_t uVar1;
  byte bVar2;
  int8_t uVar3;
  int8_t uVar4;
  longlong lVar5;
  uint64_t *puVar6;
  int unaff_EBX;
  uint unaff_EBP;
  uint uVar7;
  int unaff_EDI;
  int in_R10D;
  uint in_R11D;
  longlong unaff_R14;
  uint64_t *unaff_R15;
  int32_t uStack0000000000000034;
  int32_t uStack000000000000003c;
  
  do {
    if (param_1 < param_3) {
      lVar5 = (longlong)param_1;
      param_1 = param_1 + 1;
      bVar2 = *(byte *)(lVar5 + param_4);
    }
    else {
      bVar2 = 0;
    }
    if (param_1 < param_3) {
      lVar5 = (longlong)param_1;
      param_1 = param_1 + 1;
      uVar3 = *(int8_t *)(lVar5 + param_4);
    }
    else {
      uVar3 = 0;
    }
    if (param_1 < param_3) {
      lVar5 = (longlong)param_1;
      param_1 = param_1 + 1;
      uVar4 = *(int8_t *)(lVar5 + param_4);
    }
    else {
      uVar4 = 0;
    }
  } while (((unaff_EDI < (int)in_R11D) ||
           (uVar7 = (uint)bVar2, (int)(uint)CONCAT11(uVar3,uVar4) <= unaff_EDI)) &&
          (in_R10D = in_R10D + 1, in_R11D = (uint)CONCAT11(uVar3,uVar4), uVar7 = unaff_EBP,
          in_R10D < unaff_EBX));
  param_5._0_4_ = *(int32_t *)(unaff_R14 + 0x88);
  param_5._4_4_ = *(int32_t *)(unaff_R14 + 0x8c);
  lVar5 = FUN_18028b4c0(&stack0x00000040,&stack0x00000020,uVar7,param_4,
                        *(int32_t *)(unaff_R14 + 0x80));
  param_6 = *(int32_t *)(unaff_R14 + 0x40);
  uStack0000000000000034 = *(int32_t *)(unaff_R14 + 0x44);
  param_7 = *(int32_t *)(unaff_R14 + 0x48);
  uStack000000000000003c = *(int32_t *)(unaff_R14 + 0x4c);
  param_5._0_4_ = *(int32_t *)(lVar5 + 8);
  param_5._4_4_ = *(int32_t *)(lVar5 + 0xc);
  puVar6 = (uint64_t *)FUN_18028b820(&stack0x00000050,&param_6,&stack0x00000020);
  uVar1 = puVar6[1];
  *unaff_R15 = *puVar6;
  unaff_R15[1] = uVar1;
  return;
}





// 函数: void FUN_18028d617(void)
void FUN_18028d617(void)

{
  uint64_t uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  int32_t unaff_EBP;
  uint64_t in_R9;
  longlong unaff_R14;
  uint64_t *unaff_R15;
  int32_t uStack0000000000000028;
  int32_t uStack000000000000002c;
  int32_t in_stack_00000030;
  int32_t uStack0000000000000034;
  int32_t in_stack_00000038;
  int32_t uStack000000000000003c;
  
  uStack0000000000000028 = *(int32_t *)(unaff_R14 + 0x88);
  uStack000000000000002c = *(int32_t *)(unaff_R14 + 0x8c);
  puVar2 = (int32_t *)
           FUN_18028b4c0(&stack0x00000040,&stack0x00000020,unaff_EBP,in_R9,
                         *(int32_t *)(unaff_R14 + 0x80));
  in_stack_00000030 = *(int32_t *)(unaff_R14 + 0x40);
  uStack0000000000000034 = *(int32_t *)(unaff_R14 + 0x44);
  in_stack_00000038 = *(int32_t *)(unaff_R14 + 0x48);
  uStack000000000000003c = *(int32_t *)(unaff_R14 + 0x4c);
  uStack0000000000000028 = puVar2[2];
  uStack000000000000002c = puVar2[3];
  puVar3 = (uint64_t *)
           FUN_18028b820(&stack0x00000050,&stack0x00000030,&stack0x00000020,in_R9,*puVar2);
  uVar1 = puVar3[1];
  *unaff_R15 = *puVar3;
  unaff_R15[1] = uVar1;
  return;
}





// 函数: void FUN_18028d61f(void)
void FUN_18028d61f(void)

{
  uint64_t uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  int32_t unaff_EBP;
  uint64_t in_R9;
  longlong unaff_R14;
  uint64_t *unaff_R15;
  int32_t uStack0000000000000028;
  int32_t uStack000000000000002c;
  int32_t in_stack_00000030;
  int32_t uStack0000000000000034;
  int32_t in_stack_00000038;
  int32_t uStack000000000000003c;
  
  uStack0000000000000028 = *(int32_t *)(unaff_R14 + 0x88);
  uStack000000000000002c = *(int32_t *)(unaff_R14 + 0x8c);
  puVar2 = (int32_t *)
           FUN_18028b4c0(&stack0x00000040,&stack0x00000020,unaff_EBP,in_R9,
                         *(int32_t *)(unaff_R14 + 0x80));
  in_stack_00000030 = *(int32_t *)(unaff_R14 + 0x40);
  uStack0000000000000034 = *(int32_t *)(unaff_R14 + 0x44);
  in_stack_00000038 = *(int32_t *)(unaff_R14 + 0x48);
  uStack000000000000003c = *(int32_t *)(unaff_R14 + 0x4c);
  uStack0000000000000028 = puVar2[2];
  uStack000000000000002c = puVar2[3];
  puVar3 = (uint64_t *)
           FUN_18028b820(&stack0x00000050,&stack0x00000030,&stack0x00000020,in_R9,*puVar2);
  uVar1 = puVar3[1];
  *unaff_R15 = *puVar3;
  unaff_R15[1] = uVar1;
  return;
}



// WARNING: Removing unreachable block (ram,0x00018028d83d)
// WARNING: Removing unreachable block (ram,0x00018028d857)
// WARNING: Removing unreachable block (ram,0x00018028d875)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



