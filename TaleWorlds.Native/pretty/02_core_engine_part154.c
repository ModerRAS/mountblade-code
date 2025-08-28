#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part154.c - 10 个函数

// 函数: void FUN_18013c800(longlong param_1,char *param_2,char *param_3)
void FUN_18013c800(longlong param_1,char *param_2,char *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  lVar3 = _DAT_180c8a9b0;
  lVar1 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  if ((param_3 == (char *)0x0) && (param_3 = param_2, param_2 != (char *)0xffffffffffffffff)) {
    while (*param_3 != '\0') {
      if (((*param_3 == '#') && (param_3[1] == '#')) ||
         (param_3 = param_3 + 1, param_3 == (char *)0xffffffffffffffff)) break;
    }
  }
  if ((param_1 == 0) || (*(float *)(param_1 + 4) <= *(float *)(lVar1 + 0x138) + 1.0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (param_1 != 0) {
    *(int32_t *)(lVar1 + 0x138) = *(int32_t *)(param_1 + 4);
  }
  iVar4 = *(int *)(lVar3 + 0x2e58);
  iVar9 = *(int *)(lVar1 + 0x13c);
  iVar6 = iVar9;
  if (iVar9 < iVar4) {
    *(int *)(lVar3 + 0x2e58) = iVar9;
    iVar6 = *(int *)(lVar1 + 0x13c);
    iVar4 = iVar9;
  }
  pcVar8 = param_2;
  while( true ) {
    pcVar5 = (char *)memchr(pcVar8,10,(longlong)param_3 - (longlong)pcVar8);
    pcVar7 = param_3;
    if (pcVar5 != (char *)0x0) {
      pcVar7 = pcVar5;
    }
    if ((pcVar7 != param_3) || (pcVar8 != pcVar7)) {
      iVar9 = (int)pcVar7 - (int)pcVar8;
      if ((bVar2) || (pcVar8 != param_2)) {
        FUN_18013c760(&UNK_180a06770,(iVar6 - iVar4) * 4,&DAT_18098bc73,iVar9,pcVar8);
      }
      else {
        FUN_18013c760(&UNK_180a06768,iVar9,pcVar8);
      }
    }
    if (pcVar7 == param_3) break;
    pcVar8 = pcVar7 + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18013c940(byte *param_1)

{
  int32_t *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  int iVar7;
  uint64_t uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint64_t *puVar12;
  uint uVar13;
  undefined5 uStack_15;
  
  lVar6 = _DAT_180c8a9b0;
  uVar8 = _DAT_180c8a9a8;
  iVar3 = *(int *)(_DAT_180c8a9b0 + 0x2e2c);
  iVar9 = *(int *)(_DAT_180c8a9b0 + 0x2e28);
  if (iVar9 == iVar3) {
    if (iVar3 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar3 / 2 + iVar3;
    }
    iVar11 = iVar9 + 1;
    if (iVar9 + 1 < iVar7) {
      iVar11 = iVar7;
    }
    if (iVar3 < iVar11) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      uVar8 = func_0x000180120ce0((longlong)iVar11 * 0x38,uVar8);
      if (*(longlong *)(lVar6 + 0x2e30) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar8,*(longlong *)(lVar6 + 0x2e30),(longlong)*(int *)(lVar6 + 0x2e28) * 0x38);
      }
      iVar9 = *(int *)(lVar6 + 0x2e28);
      *(uint64_t *)(lVar6 + 0x2e30) = uVar8;
      *(int *)(lVar6 + 0x2e2c) = iVar11;
    }
  }
  lVar10 = (longlong)iVar9 * 0x38;
  lVar4 = *(longlong *)(lVar6 + 0x2e30);
  *(uint64_t *)(lVar10 + lVar4) = 0;
  ((uint64_t *)(lVar10 + lVar4))[1] = 0;
  puVar12 = (uint64_t *)(lVar10 + 0x10 + lVar4);
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar1 = (int32_t *)(lVar10 + 0x20 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(ulonglong *)(lVar10 + 0x30 + lVar4) = CONCAT53(uStack_15,0xffff);
  iVar3 = *(int *)(lVar6 + 0x2e28);
  *(int *)(lVar6 + 0x2e28) = iVar3 + 1;
  puVar12 = (uint64_t *)((longlong)iVar3 * 0x38 + *(longlong *)(lVar6 + 0x2e30));
  uVar8 = FUN_1801210b0(param_1);
  *puVar12 = uVar8;
  uVar13 = 0xffffffff;
  bVar2 = *param_1;
  pbVar5 = param_1 + 1;
  while (bVar2 != 0) {
    if (((bVar2 == 0x23) && (*pbVar5 == 0x23)) && (pbVar5[1] == 0x23)) {
      uVar13 = 0xffffffff;
    }
    uVar13 = *(uint *)(&UNK_18098d290 + ((ulonglong)(uVar13 & 0xff) ^ (ulonglong)bVar2) * 4) ^
             uVar13 >> 8;
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  *(uint *)(puVar12 + 1) = ~uVar13;
  return puVar12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18013c94a(byte *param_1)

{
  int32_t *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  int32_t uVar7;
  int iVar8;
  uint64_t in_RAX;
  uint64_t uVar9;
  int iVar10;
  longlong lVar11;
  uint64_t unaff_RBX;
  int iVar12;
  uint64_t *puVar13;
  uint uVar14;
  longlong in_R11;
  uint64_t unaff_R14;
  uint64_t uStackX_20;
  uint64_t in_stack_00000028;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  int32_t in_stack_00000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  uint64_t in_stack_00000050;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  lVar6 = _DAT_180c8a9b0;
  *(uint64_t *)(in_R11 + -0x48) = in_RAX;
  *(uint64_t *)(in_R11 + -0x40) = in_RAX;
  *(uint64_t *)(in_R11 + -0x2c) = in_RAX;
  iVar3 = *(int *)(lVar6 + 0x2e2c);
  *(uint64_t *)(in_R11 + -0x34) = in_RAX;
  uVar7 = (int32_t)in_RAX;
  *(uint64_t *)(in_R11 + -0x20) = in_RAX;
  *(uint64_t *)(in_R11 + 0x18) = unaff_R14;
  uVar9 = _DAT_180c8a9a8;
  iVar10 = *(int *)(lVar6 + 0x2e28);
  uStack0000000000000044 = uVar7;
  if (iVar10 == iVar3) {
    if (iVar3 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar3 / 2 + iVar3;
    }
    iVar12 = iVar10 + 1;
    if (iVar10 + 1 < iVar8) {
      iVar12 = iVar8;
    }
    if (iVar3 < iVar12) {
      *(int *)(lVar6 + 0x3a8) = *(int *)(lVar6 + 0x3a8) + 1;
      uVar9 = func_0x000180120ce0((longlong)iVar12 * 0x38,uVar9);
      if (*(longlong *)(lVar6 + 0x2e30) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar9,*(longlong *)(lVar6 + 0x2e30),(longlong)*(int *)(lVar6 + 0x2e28) * 0x38);
      }
      iVar10 = *(int *)(lVar6 + 0x2e28);
      *(uint64_t *)(lVar6 + 0x2e30) = uVar9;
      *(int *)(lVar6 + 0x2e2c) = iVar12;
    }
  }
  lVar11 = (longlong)iVar10 * 0x38;
  lVar4 = *(longlong *)(lVar6 + 0x2e30);
  *(uint64_t *)(lVar11 + lVar4) = uStackX_20;
  ((uint64_t *)(lVar11 + lVar4))[1] = in_stack_00000028;
  puVar13 = (uint64_t *)(lVar11 + 0x10 + lVar4);
  *puVar13 = CONCAT44(in_stack_00000030._4_4_,uVar7);
  puVar13[1] = in_stack_00000038;
  puVar1 = (int32_t *)(lVar11 + 0x20 + lVar4);
  *puVar1 = in_stack_00000040;
  puVar1[1] = uStack0000000000000044;
  puVar1[2] = uStack0000000000000048;
  puVar1[3] = uStack000000000000004c;
  *(ulonglong *)(lVar11 + 0x30 + lVar4) = CONCAT53(in_stack_00000050._3_5_,0xffff);
  iVar3 = *(int *)(lVar6 + 0x2e28);
  *(int *)(lVar6 + 0x2e28) = iVar3 + 1;
  puVar13 = (uint64_t *)((longlong)iVar3 * 0x38 + *(longlong *)(lVar6 + 0x2e30));
  uVar9 = FUN_1801210b0(param_1);
  *puVar13 = uVar9;
  uVar14 = 0xffffffff;
  bVar2 = *param_1;
  pbVar5 = param_1 + 1;
  while (bVar2 != 0) {
    if (((bVar2 == 0x23) && (*pbVar5 == 0x23)) && (pbVar5[1] == 0x23)) {
      uVar14 = 0xffffffff;
    }
    uVar14 = *(uint *)(&UNK_18098d290 + ((ulonglong)(uVar14 & 0xff) ^ (ulonglong)bVar2) * 4) ^
             uVar14 >> 8;
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  *(uint *)(puVar13 + 1) = ~uVar14;
  return puVar13;
}



uint64_t * FUN_18013c9d9(void)

{
  int32_t *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  uint64_t uVar6;
  longlong lVar7;
  longlong unaff_RBX;
  int32_t unaff_EDI;
  uint64_t *puVar8;
  uint uVar9;
  byte *unaff_R14;
  uint64_t uStackX_20;
  uint64_t in_stack_00000028;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  uint64_t in_stack_00000050;
  
  uVar6 = func_0x000180120ce0();
  if (*(longlong *)(unaff_RBX + 0x2e30) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar6,*(longlong *)(unaff_RBX + 0x2e30),(longlong)*(int *)(unaff_RBX + 0x2e28) * 0x38);
  }
  *(uint64_t *)(unaff_RBX + 0x2e30) = uVar6;
  *(int32_t *)(unaff_RBX + 0x2e2c) = unaff_EDI;
  lVar7 = (longlong)*(int *)(unaff_RBX + 0x2e28) * 0x38;
  lVar4 = *(longlong *)(unaff_RBX + 0x2e30);
  *(uint64_t *)(lVar7 + lVar4) = uStackX_20;
  ((uint64_t *)(lVar7 + lVar4))[1] = in_stack_00000028;
  puVar8 = (uint64_t *)(lVar7 + 0x10 + lVar4);
  *puVar8 = in_stack_00000030;
  puVar8[1] = in_stack_00000038;
  puVar1 = (int32_t *)(lVar7 + 0x20 + lVar4);
  *puVar1 = uStack0000000000000040;
  puVar1[1] = uStack0000000000000044;
  puVar1[2] = uStack0000000000000048;
  puVar1[3] = uStack000000000000004c;
  *(uint64_t *)(lVar7 + 0x30 + lVar4) = in_stack_00000050;
  iVar3 = *(int *)(unaff_RBX + 0x2e28);
  *(int *)(unaff_RBX + 0x2e28) = iVar3 + 1;
  puVar8 = (uint64_t *)((longlong)iVar3 * 0x38 + *(longlong *)(unaff_RBX + 0x2e30));
  uVar6 = FUN_1801210b0();
  *puVar8 = uVar6;
  uVar9 = 0xffffffff;
  bVar2 = *unaff_R14;
  pbVar5 = unaff_R14 + 1;
  while (bVar2 != 0) {
    if (((bVar2 == 0x23) && (*pbVar5 == 0x23)) && (pbVar5[1] == 0x23)) {
      uVar9 = 0xffffffff;
    }
    uVar9 = *(uint *)(&UNK_18098d290 + ((ulonglong)(uVar9 & 0xff) ^ (ulonglong)bVar2) * 4) ^
            uVar9 >> 8;
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  *(uint *)(puVar8 + 1) = ~uVar9;
  return puVar8;
}



uint64_t * FUN_18013ca47(int param_1)

{
  int32_t *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  uint64_t uVar6;
  longlong lVar7;
  longlong unaff_RBX;
  uint64_t *puVar8;
  uint uVar9;
  byte *unaff_R14;
  uint64_t uStackX_20;
  uint64_t in_stack_00000028;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  uint64_t in_stack_00000050;
  
  lVar7 = (longlong)param_1 * 0x38;
  lVar4 = *(longlong *)(unaff_RBX + 0x2e30);
  *(uint64_t *)(lVar7 + lVar4) = uStackX_20;
  ((uint64_t *)(lVar7 + lVar4))[1] = in_stack_00000028;
  puVar8 = (uint64_t *)(lVar7 + 0x10 + lVar4);
  *puVar8 = in_stack_00000030;
  puVar8[1] = in_stack_00000038;
  puVar1 = (int32_t *)(lVar7 + 0x20 + lVar4);
  *puVar1 = uStack0000000000000040;
  puVar1[1] = uStack0000000000000044;
  puVar1[2] = uStack0000000000000048;
  puVar1[3] = uStack000000000000004c;
  *(uint64_t *)(lVar7 + 0x30 + lVar4) = in_stack_00000050;
  iVar3 = *(int *)(unaff_RBX + 0x2e28);
  *(int *)(unaff_RBX + 0x2e28) = iVar3 + 1;
  puVar8 = (uint64_t *)((longlong)iVar3 * 0x38 + *(longlong *)(unaff_RBX + 0x2e30));
  uVar6 = FUN_1801210b0();
  *puVar8 = uVar6;
  uVar9 = 0xffffffff;
  bVar2 = *unaff_R14;
  pbVar5 = unaff_R14 + 1;
  while (bVar2 != 0) {
    if (((bVar2 == 0x23) && (*pbVar5 == 0x23)) && (pbVar5[1] == 0x23)) {
      uVar9 = 0xffffffff;
    }
    uVar9 = *(uint *)(&UNK_18098d290 + ((ulonglong)(uVar9 & 0xff) ^ (ulonglong)bVar2) * 4) ^
            uVar9 >> 8;
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  *(uint *)(puVar8 + 1) = ~uVar9;
  return puVar8;
}





// 函数: void FUN_18013cac6(byte param_1,uint64_t param_2,uint param_3,byte *param_4)
void FUN_18013cac6(byte param_1,uint64_t param_2,uint param_3,byte *param_4)

{
  longlong unaff_RDI;
  uint in_R10D;
  
  do {
    if (((param_1 == 0x23) && (*param_4 == 0x23)) && (param_4[1] == 0x23)) {
      param_3 = in_R10D;
    }
    param_3 = *(uint *)(&UNK_18098d290 + ((ulonglong)(param_3 & 0xff) ^ (ulonglong)param_1) * 4) ^
              param_3 >> 8;
    param_1 = *param_4;
    param_4 = param_4 + 1;
  } while (param_1 != 0);
  *(uint *)(unaff_RDI + 8) = ~param_3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013cb20(longlong param_1,longlong param_2)
void FUN_18013cb20(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  
  if (param_2 == 0) {
    param_2 = -1;
    do {
      param_2 = param_2 + 1;
    } while (*(char *)(param_1 + param_2) != '\0');
  }
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0(param_2 + 1,_DAT_180c8a9a8);
                    // WARNING: Subroutine does not return
  memcpy(uVar1,param_1,param_2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013cb34(longlong param_1,longlong param_2)
void FUN_18013cb34(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong unaff_RBX;
  longlong unaff_R13;
  
  if (param_2 == 0) {
    unaff_RBX = -1;
    do {
      unaff_RBX = unaff_RBX + 1;
    } while (*(char *)(param_1 + unaff_RBX) != '\0');
  }
  if (unaff_R13 != 0) {
    *(int *)(unaff_R13 + 0x3a8) = *(int *)(unaff_R13 + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0(unaff_RBX + 1,_DAT_180c8a9a8);
                    // WARNING: Subroutine does not return
  memcpy(uVar1,param_1,unaff_RBX);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013cbab(void)
void FUN_18013cbab(void)

{
  char *pcVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  int8_t *puVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte *pbVar9;
  char *unaff_RDI;
  byte *pbVar10;
  char *unaff_R12;
  longlong in_stack_00000058;
  
  do {
    for (; (*unaff_RDI == '\n' || (pcVar3 = unaff_RDI, *unaff_RDI == '\r'));
        unaff_RDI = unaff_RDI + 1) {
    }
    for (; ((pcVar3 < unaff_R12 && (*pcVar3 != '\n')) && (*pcVar3 != '\r')); pcVar3 = pcVar3 + 1) {
    }
    *pcVar3 = '\0';
    if (*unaff_RDI != ';') {
      if (((*unaff_RDI == '[') && (unaff_RDI < pcVar3)) && (pcVar1 = pcVar3 + -1, pcVar3[-1] == ']')
         ) {
        pbVar9 = (byte *)(unaff_RDI + 1);
        *pcVar1 = '\0';
        puVar5 = (int8_t *)memchr(pbVar9,0x5d,(longlong)pcVar1 - (longlong)pbVar9);
        if ((puVar5 == (int8_t *)0x0) ||
           (lVar6 = memchr(puVar5 + 1,0x5b,(longlong)pcVar1 - (longlong)(puVar5 + 1)), lVar6 == 0))
        {
          pbVar9 = &UNK_180a06474;
        }
        else {
          *puVar5 = 0;
        }
        uVar4 = 0xffffffff;
        bVar2 = *pbVar9;
        while (bVar2 != 0) {
          pbVar10 = pbVar9 + 1;
          if (((bVar2 == 0x23) && (*pbVar10 == 0x23)) && (pbVar9[2] == 0x23)) {
            uVar4 = 0xffffffff;
          }
          uVar4 = *(uint *)(&UNK_18098d290 + ((ulonglong)(uVar4 & 0xff) ^ (ulonglong)bVar2) * 4) ^
                  uVar4 >> 8;
          pbVar9 = pbVar10;
          bVar2 = *pbVar10;
        }
        iVar7 = 0;
        if (0 < *(int *)(_DAT_180c8a9b0 + 0x2e18)) {
          puVar8 = (uint *)(*(longlong *)(_DAT_180c8a9b0 + 0x2e20) + 8);
          do {
            if (*puVar8 == ~uVar4) {
              unaff_RSI = (longlong)iVar7 * 0x30 + *(longlong *)(_DAT_180c8a9b0 + 0x2e20);
              if (unaff_RSI == 0) goto LAB_18013ccf1;
              unaff_RBP = (**(code **)(unaff_RSI + 0x10))();
              goto LAB_18013cd32;
            }
            iVar7 = iVar7 + 1;
            puVar8 = puVar8 + 0xc;
          } while (iVar7 < *(int *)(_DAT_180c8a9b0 + 0x2e18));
        }
        unaff_RSI = 0;
LAB_18013ccf1:
        unaff_RBP = 0;
      }
      else if ((unaff_RSI != 0) && (unaff_RBP != 0)) {
        (**(code **)(unaff_RSI + 0x18))();
      }
    }
LAB_18013cd32:
    unaff_RDI = pcVar3 + 1;
    if (unaff_R12 <= unaff_RDI) {
      if ((in_stack_00000058 != 0) && (_DAT_180c8a9b0 != 0)) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(in_stack_00000058,_DAT_180c8a9a8);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013cd49(void)
void FUN_18013cd49(void)

{
  longlong unaff_R14;
  
  if ((unaff_R14 != 0) && (_DAT_180c8a9b0 != 0)) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013cd62(void)
void FUN_18013cd62(void)

{
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013cdb3(void)
void FUN_18013cdb3(void)

{
  char *pcVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  int8_t *puVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  longlong unaff_RBP;
  byte *pbVar9;
  longlong unaff_RSI;
  char *unaff_RDI;
  byte *pbVar10;
  char *unaff_R12;
  longlong in_stack_00000058;
  
  do {
    unaff_RDI = unaff_RDI + 1;
    while ((*unaff_RDI != '\n' && (pcVar3 = unaff_RDI, *unaff_RDI != '\r'))) {
      for (; (pcVar3 < unaff_R12 && ((*pcVar3 != '\n' && (*pcVar3 != '\r')))); pcVar3 = pcVar3 + 1)
      {
      }
      *pcVar3 = '\0';
      if (*unaff_RDI != ';') {
        if (((*unaff_RDI == '[') && (unaff_RDI < pcVar3)) &&
           (pcVar1 = pcVar3 + -1, pcVar3[-1] == ']')) {
          pbVar9 = (byte *)(unaff_RDI + 1);
          *pcVar1 = '\0';
          puVar5 = (int8_t *)memchr(pbVar9,0x5d,(longlong)pcVar1 - (longlong)pbVar9);
          if ((puVar5 == (int8_t *)0x0) ||
             (lVar6 = memchr(puVar5 + 1,0x5b,(longlong)pcVar1 - (longlong)(puVar5 + 1)), lVar6 == 0)
             ) {
            pbVar9 = &UNK_180a06474;
          }
          else {
            *puVar5 = 0;
          }
          uVar4 = 0xffffffff;
          bVar2 = *pbVar9;
          while (bVar2 != 0) {
            pbVar10 = pbVar9 + 1;
            if (((bVar2 == 0x23) && (*pbVar10 == 0x23)) && (pbVar9[2] == 0x23)) {
              uVar4 = 0xffffffff;
            }
            uVar4 = *(uint *)(&UNK_18098d290 + ((ulonglong)(uVar4 & 0xff) ^ (ulonglong)bVar2) * 4) ^
                    uVar4 >> 8;
            pbVar9 = pbVar10;
            bVar2 = *pbVar10;
          }
          iVar7 = 0;
          if (0 < *(int *)(_DAT_180c8a9b0 + 0x2e18)) {
            puVar8 = (uint *)(*(longlong *)(_DAT_180c8a9b0 + 0x2e20) + 8);
            do {
              if (*puVar8 == ~uVar4) {
                unaff_RSI = (longlong)iVar7 * 0x30 + *(longlong *)(_DAT_180c8a9b0 + 0x2e20);
                if (unaff_RSI == 0) goto LAB_18013ccf1;
                unaff_RBP = (**(code **)(unaff_RSI + 0x10))();
                goto LAB_18013cd32;
              }
              iVar7 = iVar7 + 1;
              puVar8 = puVar8 + 0xc;
            } while (iVar7 < *(int *)(_DAT_180c8a9b0 + 0x2e18));
          }
          unaff_RSI = 0;
LAB_18013ccf1:
          unaff_RBP = 0;
        }
        else if ((unaff_RSI != 0) && (unaff_RBP != 0)) {
          (**(code **)(unaff_RSI + 0x18))();
        }
      }
LAB_18013cd32:
      unaff_RDI = pcVar3 + 1;
      if (unaff_R12 <= unaff_RDI) {
        if ((in_stack_00000058 != 0) && (_DAT_180c8a9b0 != 0)) {
          *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        FUN_180059ba0(in_stack_00000058,_DAT_180c8a9a8);
      }
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013cdc0(longlong param_1)
void FUN_18013cdc0(longlong param_1)

{
  uint64_t uVar1;
  longlong lVar2;
  uint64_t uStackX_8;
  
  *(int32_t *)(_DAT_180c8a9b0 + 0x2e04) = 0;
  if (param_1 != 0) {
    uStackX_8 = 0;
    uVar1 = FUN_18013ce40(&uStackX_8);
    lVar2 = FUN_180121300(param_1,&UNK_180a06794);
    if (lVar2 != 0) {
      fwrite(uVar1,1,uStackX_8,lVar2);
      fclose(lVar2);
    }
  }
  return;
}





// 函数: void FUN_18013cde7(void)
void FUN_18013cde7(void)

{
  uint64_t uVar1;
  longlong lVar2;
  uint64_t in_stack_00000030;
  
  uVar1 = FUN_18013ce40();
  lVar2 = FUN_180121300();
  if (lVar2 != 0) {
    fwrite(uVar1,1,in_stack_00000030,lVar2);
    fclose(lVar2);
  }
  return;
}





