#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part094.c - 9 个函数
// 函数: void SystemCore_2292c(int64_t param_1,uint64_t param_2,int param_3,int param_4)
void SystemCore_2292c(int64_t param_1,uint64_t param_2,int param_3,int param_4)
{
  int8_t uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  short *psVar7;
  int8_t *puVar8;
  char *pcVar9;
  int iVar10;
  int8_t astack_special_x_20 [8];
  uint64_t local_buffer_50;
  int local_buffer_c0;
  if ((param_4 == 0) && (*(int *)(param_1 + 0x970 + (int64_t)param_3 * 4) == 0)) {
    iVar4 = SystemCore_Processor(param_2,&processed_var_9612_ptr,8);
  }
  else {
    iVar4 = SystemCore_Processor(param_2,&processed_var_9608_ptr,8);
    iVar4 = iVar4 + 2;
  }
  cVar2 = (char)(iVar4 >> 1);
  *(char *)(param_1 + 0xae5) = cVar2;
  *(byte *)(param_1 + 0xae6) = (byte)iVar4 & 1;
  if (local_buffer_c0 == 2) {
    uVar1 = SystemCore_Processor(param_2,&processed_var_4120_ptr,8);
    *(int8_t *)(param_1 + 0xac8) = uVar1;
  }
  else {
    cVar2 = SystemCore_Processor(param_2,&processed_var_4096_ptr + (int64_t)cVar2 * 8,8);
    *(char *)(param_1 + 0xac8) = cVar2 << 3;
    cVar2 = SystemCore_Processor(param_2,&processed_var_9592_ptr,8);
    *(char *)(param_1 + 0xac8) = *(char *)(param_1 + 0xac8) + cVar2;
  }
  iVar4 = 1;
  if (1 < *(int *)(param_1 + 0x914)) {
    puVar8 = (int8_t *)(param_1 + 0xac9);
    do {
      uVar1 = SystemCore_Processor(param_2,&processed_var_4120_ptr,8);
      *puVar8 = uVar1;
      puVar8 = puVar8 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x914));
  }
  cVar2 = SystemCore_Processor(param_2,(int64_t)
                                (((int)*(char *)(param_1 + 0xae5) >> 1) *
                                (int)**(short **)(param_1 + 0xac0)) +
                                *(int64_t *)(*(short **)(param_1 + 0xac0) + 0xc),8);
  *(char *)(param_1 + 0xad0) = cVar2;
  SystemCore_248c0(&local_buffer_00000030,astack_special_x_20,*(uint64_t *)(param_1 + 0xac0),(int)cVar2);
  lVar6 = *(int64_t *)(param_1 + 0xac0);
  iVar10 = 0;
  iVar4 = 0;
  if (0 < *(short *)(lVar6 + 2)) {
    psVar7 = (short *)&local_buffer_00000030;
    pcVar9 = (char *)(param_1 + 0xad1);
    do {
      iVar5 = SystemCore_Processor(param_2,(int64_t)*psVar7 + *(int64_t *)(lVar6 + 0x30),8);
      if (iVar5 == 0) {
        iVar5 = SystemCore_Processor(param_2,&processed_var_9580_ptr,8);
        iVar5 = -iVar5;
      }
      else if (iVar5 == 8) {
        iVar5 = SystemCore_Processor(param_2,&processed_var_9580_ptr,8);
        iVar5 = iVar5 + 8;
      }
      iVar4 = iVar4 + 1;
      *pcVar9 = (char)iVar5 + -4;
      psVar7 = psVar7 + 1;
      lVar6 = *(int64_t *)(param_1 + 0xac0);
      pcVar9 = pcVar9 + 1;
    } while (iVar4 < *(short *)(lVar6 + 2));
  }
  if (*(int *)(param_1 + 0x914) == 4) {
    uVar1 = SystemCore_Processor(param_2,&processed_var_9696_ptr,8);
  }
  else {
    uVar1 = 4;
  }
  *(int8_t *)(param_1 + 0xae7) = uVar1;
  if (*(char *)(param_1 + 0xae5) == '\x02') {
    if (((local_buffer_c0 == 2) && (*(int *)(param_1 + 0x968) == 2)) &&
       (sVar3 = SystemCore_Processor(param_2,&processed_var_4200_ptr,8), 0 < sVar3)) {
      sVar3 = *(short *)(param_1 + 0x96c) + -9 + sVar3;
      *(short *)(param_1 + 0xae2) = sVar3;
    }
    else {
      sVar3 = SystemCore_Processor(param_2,&processed_var_4168_ptr,8);
      *(short *)(param_1 + 0xae2) = sVar3 * (short)(*(int *)(param_1 + 0x90c) >> 1);
      sVar3 = SystemCore_Processor(param_2,*(uint64_t *)(param_1 + 0x950),8);
      *(short *)(param_1 + 0xae2) = *(short *)(param_1 + 0xae2) + sVar3;
      sVar3 = *(short *)(param_1 + 0xae2);
    }
    *(short *)(param_1 + 0x96c) = sVar3;
    uVar1 = SystemCore_Processor(param_2,*(uint64_t *)(param_1 + 0x958),8);
    *(int8_t *)(param_1 + 0xae4) = uVar1;
    uVar1 = SystemCore_Processor(param_2,&processed_var_4304_ptr,8);
    *(int8_t *)(param_1 + 0xae8) = uVar1;
    if (0 < *(int *)(param_1 + 0x914)) {
      puVar8 = (int8_t *)(param_1 + 0xacc);
      do {
        uVar1 = SystemCore_Processor(param_2,*(uint64_t *)
                                       (&processed_var_4312_ptr + (int64_t)*(char *)(param_1 + 0xae8) * 8),8
                             );
        *puVar8 = uVar1;
        puVar8 = puVar8 + 1;
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0x914));
    }
    if (local_buffer_c0 == 0) {
      uVar1 = SystemCore_Processor(param_2,&processed_var_9588_ptr,8);
      *(int8_t *)(param_1 + 0xae9) = uVar1;
    }
    else {
      *(int8_t *)(param_1 + 0xae9) = 0;
    }
  }
  *(int *)(param_1 + 0x968) = (int)*(char *)(param_1 + 0xae5);
  uVar1 = SystemCore_Processor(param_2,&processed_var_9560_ptr,8);
  *(int8_t *)(param_1 + 0xaea) = uVar1;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_22aa9(void)
void SystemCore_22aa9(void)
{
  int8_t uVar1;
  short sVar2;
  int iVar3;
  int64_t unaff_RBX;
  int unaff_EBP;
  int8_t *puVar4;
  int unaff_R12D;
  char *pcVar5;
  int unaff_R15D;
  uint64_t local_buffer_50;
  pcVar5 = (char *)(unaff_RBX + 0xad1);
  do {
    iVar3 = SystemCore_Processor();
    if (iVar3 == 0) {
      iVar3 = SystemCore_Processor();
      iVar3 = -iVar3;
    }
    else if (iVar3 == 8) {
      iVar3 = SystemCore_Processor();
      iVar3 = iVar3 + 8;
    }
    unaff_EBP = unaff_EBP + 1;
    *pcVar5 = (char)iVar3 + -4;
    pcVar5 = pcVar5 + 1;
  } while (unaff_EBP < *(short *)(*(int64_t *)(unaff_RBX + 0xac0) + 2));
  if (*(int *)(unaff_RBX + 0x914) == 4) {
    uVar1 = SystemCore_Processor();
  }
  else {
    uVar1 = 4;
  }
  *(int8_t *)(unaff_RBX + 0xae7) = uVar1;
  if (*(char *)(unaff_RBX + 0xae5) != '\x02') goto LAB_180722ca8;
  if ((unaff_R12D == 2) && (*(int *)(unaff_RBX + 0x968) == 2)) {
    sVar2 = SystemCore_Processor();
    if (sVar2 < 1) goto LAB_180722ba9;
    sVar2 = *(short *)(unaff_RBX + 0x96c) + -9 + sVar2;
    *(short *)(unaff_RBX + 0xae2) = sVar2;
  }
  else {
LAB_180722ba9:
    sVar2 = SystemCore_Processor();
    *(short *)(unaff_RBX + 0xae2) = sVar2 * (short)(*(int *)(unaff_RBX + 0x90c) >> 1);
    sVar2 = SystemCore_Processor();
    *(short *)(unaff_RBX + 0xae2) = *(short *)(unaff_RBX + 0xae2) + sVar2;
    sVar2 = *(short *)(unaff_RBX + 0xae2);
  }
  *(short *)(unaff_RBX + 0x96c) = sVar2;
  uVar1 = SystemCore_Processor();
  *(int8_t *)(unaff_RBX + 0xae4) = uVar1;
  uVar1 = SystemCore_Processor();
  *(int8_t *)(unaff_RBX + 0xae8) = uVar1;
  if (unaff_R15D < *(int *)(unaff_RBX + 0x914)) {
    puVar4 = (int8_t *)(unaff_RBX + 0xacc);
    do {
      uVar1 = SystemCore_Processor();
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
      unaff_R15D = unaff_R15D + 1;
    } while (unaff_R15D < *(int *)(unaff_RBX + 0x914));
  }
  if (unaff_R12D == 0) {
    uVar1 = SystemCore_Processor();
    *(int8_t *)(unaff_RBX + 0xae9) = uVar1;
  }
  else {
    *(int8_t *)(unaff_RBX + 0xae9) = 0;
  }
LAB_180722ca8:
  *(int *)(unaff_RBX + 0x968) = (int)*(char *)(unaff_RBX + 0xae5);
  uVar1 = SystemCore_Processor();
  *(int8_t *)(unaff_RBX + 0xaea) = uVar1;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_22b2d(void)
void SystemCore_22b2d(void)
{
  int8_t uVar1;
  short sVar2;
  int64_t unaff_RBX;
  int8_t *puVar3;
  int unaff_R12D;
  int unaff_R15D;
  uint64_t local_buffer_50;
  if (*(int *)(unaff_RBX + 0x914) == 4) {
    uVar1 = SystemCore_Processor();
  }
  else {
    uVar1 = 4;
  }
  *(int8_t *)(unaff_RBX + 0xae7) = uVar1;
  if (*(char *)(unaff_RBX + 0xae5) != '\x02') goto LAB_180722ca8;
  if ((unaff_R12D == 2) && (*(int *)(unaff_RBX + 0x968) == 2)) {
    sVar2 = SystemCore_Processor();
    if (sVar2 < 1) goto LAB_180722ba9;
    sVar2 = *(short *)(unaff_RBX + 0x96c) + -9 + sVar2;
    *(short *)(unaff_RBX + 0xae2) = sVar2;
  }
  else {
LAB_180722ba9:
    sVar2 = SystemCore_Processor();
    *(short *)(unaff_RBX + 0xae2) = sVar2 * (short)(*(int *)(unaff_RBX + 0x90c) >> 1);
    sVar2 = SystemCore_Processor();
    *(short *)(unaff_RBX + 0xae2) = *(short *)(unaff_RBX + 0xae2) + sVar2;
    sVar2 = *(short *)(unaff_RBX + 0xae2);
  }
  *(short *)(unaff_RBX + 0x96c) = sVar2;
  uVar1 = SystemCore_Processor();
  *(int8_t *)(unaff_RBX + 0xae4) = uVar1;
  uVar1 = SystemCore_Processor();
  *(int8_t *)(unaff_RBX + 0xae8) = uVar1;
  if (unaff_R15D < *(int *)(unaff_RBX + 0x914)) {
    puVar3 = (int8_t *)(unaff_RBX + 0xacc);
    do {
      uVar1 = SystemCore_Processor();
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
      unaff_R15D = unaff_R15D + 1;
    } while (unaff_R15D < *(int *)(unaff_RBX + 0x914));
  }
  if (unaff_R12D == 0) {
    uVar1 = SystemCore_Processor();
    *(int8_t *)(unaff_RBX + 0xae9) = uVar1;
  }
  else {
    *(int8_t *)(unaff_RBX + 0xae9) = 0;
  }
LAB_180722ca8:
  *(int *)(unaff_RBX + 0x968) = (int)*(char *)(unaff_RBX + 0xae5);
  uVar1 = SystemCore_Processor();
  *(int8_t *)(unaff_RBX + 0xaea) = uVar1;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_22b3e(void)
void SystemCore_22b3e(void)
{
  int8_t uVar1;
  short sVar2;
  int64_t unaff_RBX;
  int8_t *puVar3;
  int unaff_R12D;
  int unaff_R15D;
  uint64_t local_buffer_50;
  uVar1 = SystemCore_Processor();
  *(int8_t *)(unaff_RBX + 0xae7) = uVar1;
  if (*(char *)(unaff_RBX + 0xae5) != '\x02') goto LAB_180722ca8;
  if ((unaff_R12D == 2) && (*(int *)(unaff_RBX + 0x968) == 2)) {
    sVar2 = SystemCore_Processor();
    if (sVar2 < 1) goto LAB_180722ba9;
    sVar2 = *(short *)(unaff_RBX + 0x96c) + -9 + sVar2;
    *(short *)(unaff_RBX + 0xae2) = sVar2;
  }
  else {
LAB_180722ba9:
    sVar2 = SystemCore_Processor();
    *(short *)(unaff_RBX + 0xae2) = sVar2 * (short)(*(int *)(unaff_RBX + 0x90c) >> 1);
    sVar2 = SystemCore_Processor();
    *(short *)(unaff_RBX + 0xae2) = *(short *)(unaff_RBX + 0xae2) + sVar2;
    sVar2 = *(short *)(unaff_RBX + 0xae2);
  }
  *(short *)(unaff_RBX + 0x96c) = sVar2;
  uVar1 = SystemCore_Processor();
  *(int8_t *)(unaff_RBX + 0xae4) = uVar1;
  uVar1 = SystemCore_Processor();
  *(int8_t *)(unaff_RBX + 0xae8) = uVar1;
  if (unaff_R15D < *(int *)(unaff_RBX + 0x914)) {
    puVar3 = (int8_t *)(unaff_RBX + 0xacc);
    do {
      uVar1 = SystemCore_Processor();
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
      unaff_R15D = unaff_R15D + 1;
    } while (unaff_R15D < *(int *)(unaff_RBX + 0x914));
  }
  if (unaff_R12D == 0) {
    uVar1 = SystemCore_Processor();
    *(int8_t *)(unaff_RBX + 0xae9) = uVar1;
  }
  else {
    *(int8_t *)(unaff_RBX + 0xae9) = 0;
  }
LAB_180722ca8:
  *(int *)(unaff_RBX + 0x968) = (int)*(char *)(unaff_RBX + 0xae5);
  uVar1 = SystemCore_Processor();
  *(int8_t *)(unaff_RBX + 0xaea) = uVar1;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_50 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_22cf0(uint64_t param_1,int64_t param_2,int param_3,int32_t param_4,int param_5)
void SystemCore_22cf0(uint64_t param_1,int64_t param_2,int param_3,int32_t param_4,int param_5)
{
  uint64_t *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint *puVar11;
  int64_t lVar12;
  uint uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int8_t stack_array_148 [32];
  int32_t local_var_128;
  uint *plocal_var_120;
  uint local_var_118;
  int32_t local_var_114;
  int iStack_110;
  int64_t lStack_108;
  uint stack_array_f8 [20];
  uint stack_array_a8 [20];
  uint64_t local_var_58;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  uVar5 = param_5 >> 4;
  uVar13 = uVar5 + 1;
  if (param_5 <= (int)(uVar5 * 0x10)) {
    uVar13 = uVar5;
  }
  uVar15 = (uint64_t)uVar13;
  local_var_118 = uVar13;
  local_var_114 = param_4;
  iStack_110 = param_3;
  lStack_108 = param_2;
  iVar3 = SystemCore_Processor(param_1,&memory_allocator_3176_ptr + ((int64_t)param_3 >> 1) * 9,8);
  uVar14 = 0;
  uVar8 = uVar15;
  uVar10 = uVar14;
  if (0 < (int)uVar13) {
    do {
      *(int32_t *)((int64_t)stack_array_a8 + uVar10) = 0;
      iVar4 = SystemCore_Processor(param_1,&rendering_buffer_2992_ptr + (int64_t)iVar3 * 0x12,8);
      *(int *)((int64_t)stack_array_f8 + uVar10) = iVar4;
      uVar7 = uVar14;
      if (iVar4 == 0x11) {
        do {
          uVar5 = (int)uVar7 + 1;
          iVar4 = SystemCore_Processor(param_1,&memory_allocator_3154_ptr + (uVar5 == 10),8);
          *(int *)((int64_t)stack_array_f8 + uVar10) = iVar4;
          uVar7 = (uint64_t)uVar5;
        } while (iVar4 == 0x11);
        *(uint *)((int64_t)stack_array_a8 + uVar10) = uVar5;
      }
      uVar8 = uVar8 - 1;
      param_2 = lStack_108;
      uVar10 = uVar10 + 4;
    } while (uVar8 != 0);
  }
  if (0 < (int)uVar13) {
    puVar11 = stack_array_f8;
    uVar8 = uVar14;
    do {
      puVar1 = (uint64_t *)(param_2 + (int64_t)((int)(short)uVar8 << 4) * 2);
      if ((int)*puVar11 < 1) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      else {
        SystemCore_24250(puVar1,param_1);
      }
      uVar5 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar5;
      puVar11 = puVar11 + 1;
    } while ((int)uVar5 < (int)uVar13);
    if (0 < (int)uVar13) {
      lVar12 = 0;
      do {
        uVar13 = *(uint *)((int64_t)stack_array_a8 + lVar12);
        if (0 < (int)uVar13) {
          param_2 = param_2 + (int64_t)((int)(short)uVar14 << 4) * 2;
          lVar9 = 0;
          do {
            sVar6 = *(short *)(param_2 + lVar9 * 2);
            uVar8 = (uint64_t)uVar13;
            if (0 < (int)uVar13) {
              do {
                sVar2 = SystemCore_Processor(param_1,&system_string1_ptr,8);
                sVar6 = sVar2 + sVar6 * 2;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            *(short *)(param_2 + lVar9 * 2) = sVar6;
            lVar9 = lVar9 + 1;
          } while (lVar9 < 0x10);
          uVar15 = (uint64_t)local_var_118;
          *(uint *)((int64_t)stack_array_f8 + lVar12) =
               *(uint *)((int64_t)stack_array_f8 + lVar12) | uVar13 << 5;
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (uint64_t)uVar13;
        lVar12 = lVar12 + 4;
        param_2 = lStack_108;
      } while ((int)uVar13 < (int)uVar15);
    }
  }
  plocal_var_120 = stack_array_f8;
  local_var_128 = local_var_114;
  SystemCore_24090(param_1,lStack_108,param_5,iStack_110);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_148);
}
int SystemCore_22f80(uint64_t param_1,uint param_2,int param_3)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  iVar4 = 0;
  uVar1 = Function_ac2a6d9e(param_1,0xf);
  uVar3 = 0;
  if (param_2 <= uVar1) {
    iVar4 = 1;
    uVar3 = (0x7fe0 - param_2) * (0x4000 - param_3);
    uVar5 = param_2;
    while (param_2 = (uVar3 >> 0xf) + 1, 1 < param_2) {
      uVar2 = param_2 * 2 + uVar5;
      if (uVar1 < uVar2) {
        if (1 < param_2) goto LAB_18072300a;
        break;
      }
      iVar4 = iVar4 + 1;
      uVar5 = uVar2;
      uVar3 = (param_2 * 2 + -2) * param_3;
    }
    uVar3 = uVar1 - uVar5 >> 1;
    iVar4 = iVar4 + uVar3;
    uVar5 = uVar5 + uVar3 * 2;
LAB_18072300a:
    uVar3 = uVar5 + param_2;
    if (uVar1 < uVar3) {
      iVar4 = -iVar4;
      uVar3 = uVar5;
    }
  }
  uVar1 = 0x8000;
  if (uVar3 + param_2 < 0x8000) {
    uVar1 = uVar3 + param_2;
  }
  Function_2eaeae5c(param_1,uVar3,uVar1,0x8000);
  return iVar4;
}
// 函数: void SystemCore_23060(int64_t *param_1,uint *param_2,uint param_3,int param_4)
void SystemCore_23060(int64_t *param_1,uint *param_2,uint param_3,int param_4)
{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uVar8 = *param_2;
  iVar3 = 0;
  if (uVar8 != 0) {
    uVar5 = (int)uVar8 >> 0x1f;
    iVar4 = 1;
    uVar9 = uVar5 + uVar8 ^ uVar5;
    uVar6 = (0x7fe0 - param_3) * (0x4000 - param_4);
    uVar7 = uVar6 >> 0xf;
    uVar8 = param_3;
    if (uVar6 >> 0xf != 0) {
      do {
        uVar8 = param_3;
        if ((int)uVar9 <= iVar4) break;
        param_3 = param_3 + 2 + uVar7 * 2;
        iVar4 = iVar4 + 1;
        uVar6 = uVar7 * 2 * param_4;
        uVar7 = uVar6 >> 0xf;
        uVar8 = param_3;
      } while (uVar6 >> 0xf != 0);
      if (uVar7 != 0) {
        param_3 = uVar7 + 1;
        iVar3 = uVar8 + (~uVar5 & param_3);
        goto SystemCore_23131;
      }
    }
    iVar10 = uVar9 - iVar4;
    iVar3 = ((int)((0x8000 - uVar5) - uVar8) >> 1) + -1;
    if (iVar3 <= iVar10) {
      iVar10 = iVar3;
    }
    iVar3 = uVar8 + uVar5 + 1 + iVar10 * 2;
    param_3 = 0x8000 - iVar3;
    if (1 < param_3) {
      param_3 = 1;
    }
    *param_2 = iVar10 + iVar4 + uVar5 ^ uVar5;
  }
SystemCore_23131:
  uVar8 = *(uint *)(param_1 + 4);
  uVar5 = uVar8 >> 0xf;
  if (iVar3 == 0) {
    *(uint *)(param_1 + 4) = uVar8 - (0x8000 - (param_3 + iVar3)) * uVar5;
  }
  else {
    *(int *)((int64_t)param_1 + 0x24) =
         *(int *)((int64_t)param_1 + 0x24) + (uVar8 - (0x8000 - iVar3) * uVar5);
    *(uint *)(param_1 + 4) = ((param_3 + iVar3) - iVar3) * uVar5;
  }
  if (*(uint *)(param_1 + 4) < 0x800001) {
    uVar8 = *(uint *)((int64_t)param_1 + 0x24);
    do {
      if (uVar8 >> 0x17 == 0xff) {
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
      }
      else {
        cVar2 = (char)((int)uVar8 >> 0x1f);
        if (-1 < *(int *)((int64_t)param_1 + 0x2c)) {
          if (*(int *)((int64_t)param_1 + 0xc) + *(uint *)((int64_t)param_1 + 0x1c) <
              *(uint *)(param_1 + 1)) {
            *(char *)((uint64_t)*(uint *)((int64_t)param_1 + 0x1c) + *param_1) =
                 (char)*(int *)((int64_t)param_1 + 0x2c) - cVar2;
            *(int *)((int64_t)param_1 + 0x1c) = *(int *)((int64_t)param_1 + 0x1c) + 1;
            uVar5 = 0;
          }
          else {
            uVar5 = 0xffffffff;
          }
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar5;
        }
        if ((int)param_1[5] != 0) {
          uVar5 = *(uint *)((int64_t)param_1 + 0x1c);
          do {
            if (*(int *)((int64_t)param_1 + 0xc) + uVar5 < *(uint *)(param_1 + 1)) {
              *(char *)((uint64_t)uVar5 + *param_1) = -1 - cVar2;
              *(int *)((int64_t)param_1 + 0x1c) = *(int *)((int64_t)param_1 + 0x1c) + 1;
              uVar5 = *(uint *)((int64_t)param_1 + 0x1c);
              uVar6 = 0;
            }
            else {
              uVar6 = 0xffffffff;
            }
            *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar6;
            plVar1 = param_1 + 5;
            *(int *)plVar1 = (int)*plVar1 + -1;
          } while ((int)*plVar1 != 0);
        }
        *(uint *)((int64_t)param_1 + 0x2c) = uVar8 >> 0x17 & 0xff;
      }
      *(int *)(param_1 + 4) = (int)param_1[4] << 8;
      *(int *)(param_1 + 3) = (int)param_1[3] + 8;
      uVar8 = (*(uint *)((int64_t)param_1 + 0x24) & 0x7fffff) << 8;
      *(uint *)((int64_t)param_1 + 0x24) = uVar8;
    } while (*(uint *)(param_1 + 4) < 0x800001);
  }
  return;
}
// 函数: void SystemCore_23082(uint64_t param_1,uint64_t param_2,int param_3)
void SystemCore_23082(uint64_t param_1,uint64_t param_2,int param_3)
{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  uint *unaff_RBX;
  int64_t *unaff_RDI;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int in_R10D;
  int in_R11D;
  uVar3 = in_R10D >> 0x1f;
  iVar5 = 1;
  uVar8 = uVar3 + in_EAX ^ uVar3;
  uVar6 = (0x7fe0 - param_3) * (0x4000 - in_R11D);
  uVar7 = uVar6 >> 0xf;
  if (uVar6 >> 0xf != 0) {
    do {
      if ((int)uVar8 <= iVar5) break;
      param_3 = param_3 + 2 + uVar7 * 2;
      iVar5 = iVar5 + 1;
      uVar6 = uVar7 * 2 * in_R11D;
      uVar7 = uVar6 >> 0xf;
    } while (uVar6 >> 0xf != 0);
    if (uVar7 != 0) {
      uVar7 = uVar7 + 1;
      param_3 = param_3 + (~uVar3 & uVar7);
      goto LAB_18072312c;
    }
  }
  iVar9 = uVar8 - iVar5;
  iVar4 = ((int)((0x8000 - uVar3) - param_3) >> 1) + -1;
  if (iVar4 <= iVar9) {
    iVar9 = iVar4;
  }
  param_3 = param_3 + uVar3 + 1 + iVar9 * 2;
  uVar7 = 0x8000U - param_3;
  if (1 < 0x8000U - param_3) {
    uVar7 = 1;
  }
  *unaff_RBX = iVar9 + iVar5 + uVar3 ^ uVar3;
LAB_18072312c:
  uVar3 = *(uint *)(unaff_RDI + 4);
  uVar6 = uVar3 >> 0xf;
  if (param_3 == 0) {
    *(uint *)(unaff_RDI + 4) = uVar3 - (0x8000 - (uVar7 + param_3)) * uVar6;
  }
  else {
    *(int *)((int64_t)unaff_RDI + 0x24) =
         *(int *)((int64_t)unaff_RDI + 0x24) + (uVar3 - (0x8000 - param_3) * uVar6);
    *(uint *)(unaff_RDI + 4) = ((uVar7 + param_3) - param_3) * uVar6;
  }
  if (*(uint *)(unaff_RDI + 4) < 0x800001) {
    uVar7 = *(uint *)((int64_t)unaff_RDI + 0x24);
    do {
      if (uVar7 >> 0x17 == 0xff) {
        *(int *)(unaff_RDI + 5) = (int)unaff_RDI[5] + 1;
      }
      else {
        cVar2 = (char)((int)uVar7 >> 0x1f);
        if (-1 < *(int *)((int64_t)unaff_RDI + 0x2c)) {
          if (*(int *)((int64_t)unaff_RDI + 0xc) + *(uint *)((int64_t)unaff_RDI + 0x1c) <
              *(uint *)(unaff_RDI + 1)) {
            *(char *)((uint64_t)*(uint *)((int64_t)unaff_RDI + 0x1c) + *unaff_RDI) =
                 (char)*(int *)((int64_t)unaff_RDI + 0x2c) - cVar2;
            *(int *)((int64_t)unaff_RDI + 0x1c) = *(int *)((int64_t)unaff_RDI + 0x1c) + 1;
            uVar3 = 0;
          }
          else {
            uVar3 = 0xffffffff;
          }
          *(uint *)(unaff_RDI + 6) = *(uint *)(unaff_RDI + 6) | uVar3;
        }
        if ((int)unaff_RDI[5] != 0) {
          uVar3 = *(uint *)((int64_t)unaff_RDI + 0x1c);
          do {
            if (*(int *)((int64_t)unaff_RDI + 0xc) + uVar3 < *(uint *)(unaff_RDI + 1)) {
              *(char *)((uint64_t)uVar3 + *unaff_RDI) = -1 - cVar2;
              *(int *)((int64_t)unaff_RDI + 0x1c) = *(int *)((int64_t)unaff_RDI + 0x1c) + 1;
              uVar3 = *(uint *)((int64_t)unaff_RDI + 0x1c);
              uVar6 = 0;
            }
            else {
              uVar6 = 0xffffffff;
            }
            *(uint *)(unaff_RDI + 6) = *(uint *)(unaff_RDI + 6) | uVar6;
            plVar1 = unaff_RDI + 5;
            *(int *)plVar1 = (int)*plVar1 + -1;
          } while ((int)*plVar1 != 0);
        }
        *(uint *)((int64_t)unaff_RDI + 0x2c) = uVar7 >> 0x17 & 0xff;
      }
      *(int *)(unaff_RDI + 4) = (int)unaff_RDI[4] << 8;
      *(int *)(unaff_RDI + 3) = (int)unaff_RDI[3] + 8;
      uVar7 = (*(uint *)((int64_t)unaff_RDI + 0x24) & 0x7fffff) << 8;
      *(uint *)((int64_t)unaff_RDI + 0x24) = uVar7;
    } while (*(uint *)(unaff_RDI + 4) < 0x800001);
  }
  return;
}
// 函数: void SystemCore_23131(uint64_t param_1,int param_2,int param_3)
void SystemCore_23131(uint64_t param_1,int param_2,int param_3)
{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int64_t *unaff_RDI;
  uint uVar5;
  uVar5 = *(uint *)(unaff_RDI + 4);
  uVar4 = uVar5 >> 0xf;
  if (param_2 == 0) {
    *(uint *)(unaff_RDI + 4) = uVar5 - (0x8000 - (param_3 + param_2)) * uVar4;
  }
  else {
    *(int *)((int64_t)unaff_RDI + 0x24) =
         *(int *)((int64_t)unaff_RDI + 0x24) + (uVar5 - (0x8000 - param_2) * uVar4);
    *(uint *)(unaff_RDI + 4) = ((param_3 + param_2) - param_2) * uVar4;
  }
  if (*(uint *)(unaff_RDI + 4) < 0x800001) {
    uVar5 = *(uint *)((int64_t)unaff_RDI + 0x24);
    do {
      if (uVar5 >> 0x17 == 0xff) {
        *(int *)(unaff_RDI + 5) = (int)unaff_RDI[5] + 1;
      }
      else {
        cVar2 = (char)((int)uVar5 >> 0x1f);
        if (-1 < *(int *)((int64_t)unaff_RDI + 0x2c)) {
          if (*(int *)((int64_t)unaff_RDI + 0xc) + *(uint *)((int64_t)unaff_RDI + 0x1c) <
              *(uint *)(unaff_RDI + 1)) {
            *(char *)((uint64_t)*(uint *)((int64_t)unaff_RDI + 0x1c) + *unaff_RDI) =
                 (char)*(int *)((int64_t)unaff_RDI + 0x2c) - cVar2;
            *(int *)((int64_t)unaff_RDI + 0x1c) = *(int *)((int64_t)unaff_RDI + 0x1c) + 1;
            uVar4 = 0;
          }
          else {
            uVar4 = 0xffffffff;
          }
          *(uint *)(unaff_RDI + 6) = *(uint *)(unaff_RDI + 6) | uVar4;
        }
        if ((int)unaff_RDI[5] != 0) {
          uVar4 = *(uint *)((int64_t)unaff_RDI + 0x1c);
          do {
            if (*(int *)((int64_t)unaff_RDI + 0xc) + uVar4 < *(uint *)(unaff_RDI + 1)) {
              *(char *)((uint64_t)uVar4 + *unaff_RDI) = -1 - cVar2;
              *(int *)((int64_t)unaff_RDI + 0x1c) = *(int *)((int64_t)unaff_RDI + 0x1c) + 1;
              uVar4 = *(uint *)((int64_t)unaff_RDI + 0x1c);
              uVar3 = 0;
            }
            else {
              uVar3 = 0xffffffff;
            }
            *(uint *)(unaff_RDI + 6) = *(uint *)(unaff_RDI + 6) | uVar3;
            plVar1 = unaff_RDI + 5;
            *(int *)plVar1 = (int)*plVar1 + -1;
          } while ((int)*plVar1 != 0);
        }
        *(uint *)((int64_t)unaff_RDI + 0x2c) = uVar5 >> 0x17 & 0xff;
      }
      *(int *)(unaff_RDI + 4) = (int)unaff_RDI[4] << 8;
      *(int *)(unaff_RDI + 3) = (int)unaff_RDI[3] + 8;
      uVar5 = (*(uint *)((int64_t)unaff_RDI + 0x24) & 0x7fffff) << 8;
      *(uint *)((int64_t)unaff_RDI + 0x24) = uVar5;
    } while (*(uint *)(unaff_RDI + 4) < 0x800001);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_23150(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void SystemCore_23150(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
{
  int32_t stack_array_48 [2];
  uint64_t local_var_40;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_48;
  stack_array_48[0] = param_4;
  local_var_40 = param_1;
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address