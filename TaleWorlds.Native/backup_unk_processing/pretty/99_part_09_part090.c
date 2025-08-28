#include "TaleWorlds.Native.Split.h"

// 99_part_09_part090.c - 7 个函数

// 函数: void FUN_1805faa50(longlong param_1)
void FUN_1805faa50(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int8_t *puVar7;
  int unaff_EBP;
  longlong unaff_RDI;
  int iVar8;
  
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_1805fa870();
  lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 8) + -8);
  *(int *)(lVar2 + 0x5c4) = *(int *)(lVar2 + 0x5c4) - (unaff_EBP - iVar5);
  FUN_180646200(*(uint64_t *)(unaff_RDI + 0x20),lVar2,unaff_EBP - iVar5);
  *(int *)(lVar2 + 0x5c8) = iVar5;
  iVar4 = *(int *)(lVar2 + 0x5c4);
  if (iVar5 < *(int *)(lVar2 + 0x5c4)) {
    *(int *)(lVar2 + 0x5c4) = iVar5;
    iVar4 = iVar5;
  }
  lVar3 = *(longlong *)(lVar2 + 0x598);
  uVar6 = iVar4 >> 0x1f & 7;
  iVar4 = iVar4 + uVar6;
  iVar8 = iVar4 >> 3;
  iVar5 = iVar8 + 1;
  pbVar1 = (byte *)(iVar8 + lVar3);
  *pbVar1 = *pbVar1 & ~(-1 << (((byte)iVar4 & 7) - (char)uVar6 & 0x1f));
  if (iVar5 < *(int *)(lVar2 + 0x590) >> 3) {
    puVar7 = (int8_t *)(iVar5 + lVar3);
    do {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar2 + 0x590) >> 3);
  }
  *(int32_t *)(*(longlong *)(*(longlong *)(unaff_RDI + 8) + -8) + 0x5c4) = 0;
  iVar5 = _Mtx_unlock(unaff_RDI + 0x4b58);
  if (iVar5 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001805fab2e. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar5);
    return;
  }
  return;
}






// 函数: void FUN_1805faa55(longlong param_1)
void FUN_1805faa55(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int8_t *puVar7;
  int unaff_EBP;
  longlong unaff_RDI;
  int iVar8;
  
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_1805fa870();
  lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 8) + -8);
  *(int *)(lVar2 + 0x5c4) = *(int *)(lVar2 + 0x5c4) - (unaff_EBP - iVar5);
  FUN_180646200(*(uint64_t *)(unaff_RDI + 0x20),lVar2,unaff_EBP - iVar5);
  *(int *)(lVar2 + 0x5c8) = iVar5;
  iVar4 = *(int *)(lVar2 + 0x5c4);
  if (iVar5 < *(int *)(lVar2 + 0x5c4)) {
    *(int *)(lVar2 + 0x5c4) = iVar5;
    iVar4 = iVar5;
  }
  lVar3 = *(longlong *)(lVar2 + 0x598);
  uVar6 = iVar4 >> 0x1f & 7;
  iVar4 = iVar4 + uVar6;
  iVar8 = iVar4 >> 3;
  iVar5 = iVar8 + 1;
  pbVar1 = (byte *)(iVar8 + lVar3);
  *pbVar1 = *pbVar1 & ~(-1 << (((byte)iVar4 & 7) - (char)uVar6 & 0x1f));
  if (iVar5 < *(int *)(lVar2 + 0x590) >> 3) {
    puVar7 = (int8_t *)(iVar5 + lVar3);
    do {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar2 + 0x590) >> 3);
  }
  *(int32_t *)(*(longlong *)(*(longlong *)(unaff_RDI + 8) + -8) + 0x5c4) = 0;
  iVar5 = _Mtx_unlock(unaff_RDI + 0x4b58);
  if (iVar5 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001805fab2e. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar5);
    return;
  }
  return;
}






// 函数: void FUN_1805faada(void)
void FUN_1805faada(void)

{
  int in_EAX;
  int iVar1;
  int8_t *puVar2;
  longlong unaff_RBX;
  longlong unaff_RDI;
  longlong in_R10;
  
  puVar2 = (int8_t *)(in_EAX + in_R10);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    in_EAX = in_EAX + 1;
  } while (in_EAX < *(int *)(unaff_RBX + 0x590) >> 3);
  *(int32_t *)(*(longlong *)(*(longlong *)(unaff_RDI + 8) + -8) + 0x5c4) = 0;
  iVar1 = _Mtx_unlock(unaff_RDI + 0x4b58);
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001805fab2e. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar1);
    return;
  }
  return;
}






// 函数: void FUN_1805fab0d(void)
void FUN_1805fab0d(void)

{
  int iVar1;
  longlong unaff_RDI;
  
  iVar1 = _Mtx_unlock(unaff_RDI + 0x4b58);
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001805fab2e. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar1);
    return;
  }
  return;
}






// 函数: void FUN_1805fab28(void)
void FUN_1805fab28(void)

{
  int32_t in_EAX;
  
                    // WARNING: Could not recover jumptable at 0x0001805fab2e. Too many branches
                    // WARNING: Treating indirect jump as call
  __Throw_C_error_std__YAXH_Z(in_EAX);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805fab40(void)
void FUN_1805fab40(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x5d0,8,3);
  *(uint64_t *)(lVar1 + 0x598) = 0;
  *(int32_t *)(lVar1 + 0x590) = 0;
  *(uint64_t *)(lVar1 + 0x5a0) = 0;
  *(uint64_t *)(lVar1 + 0x588) = 0;
  *(uint64_t *)(lVar1 + 0x5a0) = _DAT_180c966e8;
  *(uint64_t *)(lVar1 + 0x5c0) = 0;
  *(longlong *)(lVar1 + 0x598) = lVar1;
  *(int32_t *)(lVar1 + 0x590) = 0x2c40;
  *(int32_t *)(lVar1 + 0x5c8) = 0;
                    // WARNING: Subroutine does not return
  memset(lVar1,0,0x588);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805fabe0(int param_1,int param_2,longlong param_3,uint64_t *param_4)
void FUN_1805fabe0(int param_1,int param_2,longlong param_3,uint64_t *param_4)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint64_t *puVar12;
  float fVar13;
  int32_t uVar14;
  float fVar15;
  int8_t auStack_d8 [32];
  uint64_t *puStack_b8;
  int iStack_b0;
  uint64_t uStack_ac;
  uint64_t uStack_a4;
  int32_t uStack_9c;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  ulonglong uStack_68;
  
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  lVar7 = (longlong)param_1;
  if (param_2 == 0) {
LAB_1805fac53:
    iVar4 = *(int *)(_DAT_180c95ef8 + lVar7 * 0x14);
  }
  else if (param_2 == 1) {
    iVar4 = *(int *)(_DAT_180c95ef8 + 4 + lVar7 * 0x14);
  }
  else if (param_2 == 2) {
    iVar4 = *(int *)(_DAT_180c95ef8 + 8 + lVar7 * 0x14);
  }
  else if (param_2 == 3) {
    iVar4 = *(int *)(_DAT_180c95ef8 + 0xc + lVar7 * 0x14);
  }
  else {
    if (param_2 != 4) goto LAB_1805fac53;
    iVar4 = *(int *)(_DAT_180c95ef8 + 0x10 + lVar7 * 0x14);
  }
  puStack_b8 = param_4;
  if (iVar4 != -1) {
    uVar10 = 0;
    if (param_2 - 1U < 3) {
      puVar12 = *(uint64_t **)(param_3 + 0x210);
      lVar7 = puVar12[0x4b2];
      lVar3 = *(longlong *)
               (*(longlong *)(lVar7 + 0xc78) +
               ((longlong)*(int *)(lVar7 + 0xc84) + (longlong)*(int *)(lVar7 + 0x10) * 6) * 8);
      uStack_78 = *(uint64_t *)(lVar3 + 0x6c);
      uStack_70 = *(uint64_t *)(lVar3 + 0x74);
      if ((param_2 == 1) && (1 < *(int *)(lVar7 + 0x10) - 4U)) {
        iVar4 = func_0x0001805fd450(&system_data_5ef8,param_1,2);
      }
      fVar15 = *(float *)((longlong)puVar12 + 0x9c);
      if ((void *)*puVar12 == &UNK_180a36bf8) {
        fVar13 = *(float *)(lVar7 + 0x40);
        puVar12 = param_4;
      }
      else {
        fVar13 = (float)(**(code **)((void *)*puVar12 + 0x158))(puVar12);
        puVar12 = param_4;
      }
    }
    else {
      if (param_2 != 0) goto LAB_1805faebf;
      plVar2 = *(longlong **)(param_3 + 0x210);
      fVar15 = *(float *)((longlong)plVar2 + 0x9c);
      if ((void *)*plVar2 == &UNK_180a36a78) {
        fVar13 = *(float *)(plVar2 + 0x693);
      }
      else {
        fVar13 = (float)(**(code **)((void *)*plVar2 + 0x158))(plVar2);
      }
      if ((int)plVar2[0x698] < 1) {
        uStack_78 = 0xbf800000bf800000;
        uStack_70 = 0xbf800000bf800000;
      }
      else {
        uStack_78 = *(uint64_t *)
                     (*(longlong *)(plVar2[(longlong)(int)plVar2[0x698] * 0x26b + 0x679] + 8) + 0x6c
                     );
        uStack_70 = *(uint64_t *)
                     (*(longlong *)(plVar2[(longlong)(int)plVar2[0x698] * 0x26b + 0x679] + 8) + 0x74
                     );
      }
      iVar11 = 1;
      puVar8 = (ulonglong *)(plVar2 + 0x497);
      do {
        uVar6 = uVar10;
        if (puVar8[-2] != 0) {
          uVar6 = *(ulonglong *)(puVar8[-2] + 0x1d0);
        }
        if ((((*puVar8 | uVar6) & 0x3000000000) != 0) &&
           (lVar7 = (**(code **)(*plVar2 + 0x128))(plVar2,iVar11), lVar7 != 0)) {
          if ((*(uint *)(lVar7 + 0x1d0) >> 0x11 & 1) == 0) goto LAB_1805faebf;
          fVar15 = *(float *)(plVar2[(longlong)iVar11 * 0x236 + 0x1f] + 0x30);
          fVar13 = (float)(**(code **)(*plVar2 + 0x90))(plVar2,iVar11);
          uStack_78 = *(uint64_t *)(lVar7 + 0x6c);
          uStack_70 = *(uint64_t *)(lVar7 + 0x74);
          puVar12 = puStack_b8;
          break;
        }
        puVar8 = puVar8 + -9;
        iVar11 = iVar11 + -1;
        puVar12 = puStack_b8;
      } while (-1 < iVar11);
    }
    pfVar5 = (float *)&uStack_78;
    do {
      fVar1 = *pfVar5;
      if (fVar15 <= fVar13) {
        if ((fVar15 <= fVar1) && (fVar1 < fVar13)) goto LAB_1805fae54;
      }
      else if ((fVar15 < fVar1) || ((fVar1 < fVar13 && (0.0 <= fVar1)))) {
LAB_1805fae54:
        uStack_9c = 1;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_ac = *puVar12;
        uStack_a4 = puVar12[1];
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_84 = 0x3f800000;
        iStack_b0 = iVar4;
        if (-1 < iVar4) {
          FUN_180545140(&system_data_6110,&iStack_b0,0,0);
        }
        break;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      pfVar5 = pfVar5 + 1;
    } while ((int)uVar9 < 4);
  }
  plVar2 = *(longlong **)(param_3 + 0x210);
  uVar14 = (**(code **)(*plVar2 + 0x158))(plVar2);
  *(int32_t *)((longlong)plVar2 + 0x9c) = uVar14;
LAB_1805faebf:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_d8);
}



uint64_t * FUN_1805faf50(uint64_t *param_1)

{
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  param_1[4] = &UNK_18098bcb0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  param_1[4] = &UNK_180a3c3e0;
  param_1[7] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  param_1[8] = &UNK_18098bcb0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  param_1[8] = &UNK_180a3c3e0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  param_1[0xc] = &UNK_18098bcb0;
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xe) = 0;
  param_1[0xc] = &UNK_180a3c3e0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xe) = 0;
  param_1[0x10] = &UNK_18098bcb0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  param_1[0x10] = &UNK_180a3c3e0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  return param_1;
}



longlong FUN_1805fb030(longlong param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4,
                      uint64_t *param_5,uint64_t *param_6)

{
  FUN_180627ae0();
  FUN_180627ae0(param_1 + 0x20,param_3);
  FUN_180627ae0(param_1 + 0x40,param_4);
  FUN_180627ae0(param_1 + 0x60,param_5);
  FUN_180627ae0(param_1 + 0x80,param_6);
  *param_2 = &UNK_180a3c3e0;
  if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[1] = 0;
  *(int32_t *)(param_2 + 3) = 0;
  *param_2 = &UNK_18098bcb0;
  *param_3 = &UNK_180a3c3e0;
  if (param_3[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_3[1] = 0;
  *(int32_t *)(param_3 + 3) = 0;
  *param_3 = &UNK_18098bcb0;
  *param_4 = &UNK_180a3c3e0;
  if (param_4[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_4[1] = 0;
  *(int32_t *)(param_4 + 3) = 0;
  *param_4 = &UNK_18098bcb0;
  *param_5 = &UNK_180a3c3e0;
  if (param_5[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_5[1] = 0;
  *(int32_t *)(param_5 + 3) = 0;
  *param_5 = &UNK_18098bcb0;
  *param_6 = &UNK_180a3c3e0;
  if (param_6[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_6[1] = 0;
  *(int32_t *)(param_6 + 3) = 0;
  *param_6 = &UNK_18098bcb0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




