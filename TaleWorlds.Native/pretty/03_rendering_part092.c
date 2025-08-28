#include "TaleWorlds.Native.Split.h"

// 03_rendering_part092.c - 12 个函数

// 函数: void FUN_18031ef50(longlong *param_1)
void FUN_18031ef50(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[2] + 0x38))();
    }
    if ((longlong *)param_1[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[1] + 0x38))();
    }
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031efb0(uint64_t param_1,longlong *param_2,int param_3)
void FUN_18031efb0(uint64_t param_1,longlong *param_2,int param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  longlong *plStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  ulonglong uStack_28;
  
  uVar1 = _DAT_180c8a998;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_a8 = 0;
  param_3 = param_3 << 4;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x1c;
  plStack_98 = param_2;
  strcpy_s(auStack_70,0x40,&system_data_fc60);
  FUN_1802037e0();
  puStack_88 = &UNK_18098bcb0;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,param_3,0x10,0x21);
  FUN_18031f2e0(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = uVar2;
  *(int *)(*param_2 + 0x18) = param_3;
  *(int *)(*param_2 + 0x1c) = param_3;
  *(int8_t *)(*param_2 + 0x20) = 0;
  uStack_a8 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_c8);
}





// 函数: void FUN_18031f0e0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_18031f0e0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  byte bVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  uint64_t *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  if (param_1 != param_2) {
    iVar10 = 0;
    lVar9 = param_2 - param_1 >> 5;
    for (lVar4 = lVar9; lVar4 != 0; lVar4 = lVar4 >> 1) {
      iVar10 = iVar10 + 1;
    }
    FUN_18031f460(param_1,param_2,(longlong)(iVar10 + -1) * 2,param_4,0xfffffffffffffffe);
    if (lVar9 < 0x1d) {
      FUN_18031f650(param_1,param_2);
    }
    else {
      lVar4 = param_1 + 0x380;
      FUN_18031f650(param_1,lVar4);
      for (; lVar4 != param_2; lVar4 = lVar4 + 0x20) {
        iVar10 = *(int *)(lVar4 + 0x10);
        lVar9 = *(longlong *)(lVar4 + 8);
        uVar2 = *(int32_t *)(lVar4 + 0x1c);
        uVar3 = *(int32_t *)(lVar4 + 0x18);
        *(int32_t *)(lVar4 + 0x10) = 0;
        *(uint64_t *)(lVar4 + 8) = 0;
        *(uint64_t *)(lVar4 + 0x18) = 0;
        lVar8 = lVar4;
        for (puVar7 = (uint64_t *)(lVar4 + -0x18); *(int *)(puVar7 + 1) != 0; puVar7 = puVar7 + -4
            ) {
          if (iVar10 != 0) {
            pbVar5 = (byte *)*puVar7;
            lVar11 = lVar9 - (longlong)pbVar5;
            do {
              bVar1 = *pbVar5;
              uVar6 = (uint)pbVar5[lVar11];
              if (bVar1 != uVar6) break;
              pbVar5 = pbVar5 + 1;
            } while (uVar6 != 0);
            if ((int)(bVar1 - uVar6) < 1) break;
          }
          if (puVar7[4] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puVar7[6] = 0;
          puVar7[4] = 0;
          *(int32_t *)(puVar7 + 5) = 0;
          *(int32_t *)(puVar7 + 5) = *(int32_t *)(puVar7 + 1);
          puVar7[4] = *puVar7;
          *(int32_t *)((longlong)puVar7 + 0x34) = *(int32_t *)((longlong)puVar7 + 0x14);
          *(int32_t *)(puVar7 + 6) = *(int32_t *)(puVar7 + 2);
          *(int32_t *)(puVar7 + 1) = 0;
          *puVar7 = 0;
          puVar7[2] = 0;
          lVar8 = lVar8 + -0x20;
        }
        if (*(longlong *)(lVar8 + 8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(int *)(lVar8 + 0x10) = iVar10;
        *(longlong *)(lVar8 + 8) = lVar9;
        *(int32_t *)(lVar8 + 0x1c) = uVar2;
        *(int32_t *)(lVar8 + 0x18) = uVar3;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18031f2e0(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_180a1ae60;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_180a1ae60;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}





// 函数: void FUN_18031f460(longlong param_1,longlong param_2,longlong param_3)
void FUN_18031f460(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  longlong lVar9;
  
  uVar3 = param_2 - param_1;
  do {
    if (((longlong)(uVar3 & 0xffffffffffffffe0) < 0x381) || (param_3 < 1)) {
      if (param_3 == 0) {
        FUN_18031f9e0(param_1,param_2,param_2);
      }
      return;
    }
    lVar4 = ((param_2 - param_1 >> 5) - (param_2 - param_1 >> 0x3f) >> 1) * 0x20;
    iVar8 = *(int *)(lVar4 + 0x10 + param_1);
    lVar4 = lVar4 + param_1;
    if (iVar8 == 0) {
FUN_18031f5d4:
      lVar9 = lVar4;
      if ((*(int *)(param_2 + -0x10) != 0) && (lVar9 = param_1, *(int *)(param_1 + 0x10) != 0)) {
        pbVar5 = *(byte **)(param_2 + -0x18);
        pbVar7 = pbVar5;
        do {
          bVar1 = *pbVar7;
          uVar6 = (uint)pbVar7[*(longlong *)(param_1 + 8) - (longlong)pbVar5];
          if (bVar1 != uVar6) break;
          pbVar7 = pbVar7 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) {
          if (iVar8 != 0) {
            lVar9 = *(longlong *)(lVar4 + 8) - (longlong)pbVar5;
            do {
              uVar6 = (uint)pbVar5[lVar9];
              iVar8 = *pbVar5 - uVar6;
              if (*pbVar5 != uVar6) break;
              pbVar5 = pbVar5 + 1;
            } while (uVar6 != 0);
joined_r0x00018031f635:
            lVar9 = lVar4;
            if (iVar8 < 1) goto LAB_18031f56e;
          }
LAB_18031f63b:
          lVar9 = param_2 + -0x20;
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar5 = *(byte **)(lVar4 + 8);
        lVar9 = *(longlong *)(param_1 + 8) - (longlong)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar9];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto FUN_18031f5d4;
      lVar9 = param_1;
      if (*(int *)(param_2 + -0x10) != 0) {
        pbVar5 = *(byte **)(param_2 + -0x18);
        pbVar7 = pbVar5;
        do {
          bVar1 = *pbVar7;
          uVar6 = (uint)pbVar7[*(longlong *)(lVar4 + 8) - (longlong)pbVar5];
          if (bVar1 != uVar6) break;
          pbVar7 = pbVar7 + 1;
        } while (uVar6 != 0);
        lVar9 = lVar4;
        if (0 < (int)(bVar1 - uVar6)) goto LAB_18031f56e;
        if (*(int *)(param_1 + 0x10) != 0) {
          lVar9 = *(longlong *)(param_1 + 8) - (longlong)pbVar5;
          do {
            uVar6 = (uint)pbVar5[lVar9];
            iVar8 = *pbVar5 - uVar6;
            lVar4 = param_1;
            if (*pbVar5 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          goto joined_r0x00018031f635;
        }
        goto LAB_18031f63b;
      }
    }
LAB_18031f56e:
    lVar4 = FUN_18031f830(param_1,param_2,lVar9);
    param_3 = param_3 + -1;
    FUN_18031f460(lVar4,param_2,param_3);
    uVar3 = lVar4 - param_1;
    param_2 = lVar4;
  } while( true );
}





// 函数: void FUN_18031f46d(longlong param_1,longlong param_2,longlong param_3)
void FUN_18031f46d(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  bool bVar2;
  longlong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  longlong lVar9;
  
  uVar3 = in_RAX - param_1;
  do {
    if (((longlong)(uVar3 & 0xffffffffffffffe0) < 0x381) || (param_3 < 1)) {
      if (param_3 == 0) {
        FUN_18031f9e0(param_1,param_2,param_2);
      }
      return;
    }
    lVar4 = ((param_2 - param_1 >> 5) - (param_2 - param_1 >> 0x3f) >> 1) * 0x20;
    iVar8 = *(int *)(lVar4 + 0x10 + param_1);
    lVar4 = lVar4 + param_1;
    if (iVar8 == 0) {
FUN_18031f5d4:
      lVar9 = lVar4;
      if ((*(int *)(param_2 + -0x10) != 0) && (lVar9 = param_1, *(int *)(param_1 + 0x10) != 0)) {
        pbVar5 = *(byte **)(param_2 + -0x18);
        pbVar7 = pbVar5;
        do {
          bVar1 = *pbVar7;
          uVar6 = (uint)pbVar7[*(longlong *)(param_1 + 8) - (longlong)pbVar5];
          if (bVar1 != uVar6) break;
          pbVar7 = pbVar7 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) {
          if (iVar8 != 0) {
            lVar9 = *(longlong *)(lVar4 + 8) - (longlong)pbVar5;
            do {
              uVar6 = (uint)pbVar5[lVar9];
              iVar8 = *pbVar5 - uVar6;
              if (*pbVar5 != uVar6) break;
              pbVar5 = pbVar5 + 1;
            } while (uVar6 != 0);
joined_r0x00018031f635:
            lVar9 = lVar4;
            if (iVar8 < 1) goto LAB_18031f56e;
          }
LAB_18031f63b:
          lVar9 = param_2 + -0x20;
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar5 = *(byte **)(lVar4 + 8);
        lVar9 = *(longlong *)(param_1 + 8) - (longlong)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar9];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar2) goto FUN_18031f5d4;
      lVar9 = param_1;
      if (*(int *)(param_2 + -0x10) != 0) {
        pbVar5 = *(byte **)(param_2 + -0x18);
        pbVar7 = pbVar5;
        do {
          bVar1 = *pbVar7;
          uVar6 = (uint)pbVar7[*(longlong *)(lVar4 + 8) - (longlong)pbVar5];
          if (bVar1 != uVar6) break;
          pbVar7 = pbVar7 + 1;
        } while (uVar6 != 0);
        lVar9 = lVar4;
        if (0 < (int)(bVar1 - uVar6)) goto LAB_18031f56e;
        if (*(int *)(param_1 + 0x10) != 0) {
          lVar9 = *(longlong *)(param_1 + 8) - (longlong)pbVar5;
          do {
            uVar6 = (uint)pbVar5[lVar9];
            iVar8 = *pbVar5 - uVar6;
            lVar4 = param_1;
            if (*pbVar5 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          goto joined_r0x00018031f635;
        }
        goto LAB_18031f63b;
      }
    }
LAB_18031f56e:
    lVar4 = FUN_18031f830(param_1,param_2,lVar9);
    param_3 = param_3 + -1;
    FUN_18031f460(lVar4,param_2,param_3);
    uVar3 = lVar4 - param_1;
    param_2 = lVar4;
  } while( true );
}





// 函数: void FUN_18031f48e(void)
void FUN_18031f48e(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar8;
  longlong unaff_R14;
  
  do {
    if (unaff_R14 < 1) break;
    lVar4 = ((unaff_RSI - unaff_RDI >> 5) - (unaff_RSI - unaff_RDI >> 0x3f) >> 1) * 0x20;
    iVar2 = *(int *)(lVar4 + 0x10 + unaff_RDI);
    lVar4 = lVar4 + unaff_RDI;
    if (iVar2 == 0) {
FUN_18031f5d4:
      if ((*(int *)(unaff_RSI + -0x10) != 0) && (*(int *)(unaff_RDI + 0x10) != 0)) {
        pbVar5 = *(byte **)(unaff_RSI + -0x18);
        pbVar7 = pbVar5;
        do {
          bVar1 = *pbVar7;
          uVar6 = (uint)pbVar7[*(longlong *)(unaff_RDI + 8) - (longlong)pbVar5];
          if (bVar1 != uVar6) break;
          pbVar7 = pbVar7 + 1;
        } while (uVar6 != 0);
        if (((int)(bVar1 - uVar6) < 1) && (iVar2 != 0)) {
          lVar4 = *(longlong *)(lVar4 + 8) - (longlong)pbVar5;
          do {
            pbVar7 = pbVar5 + lVar4;
            if (*pbVar5 != *pbVar7) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar7 != 0);
        }
      }
    }
    else {
      if (*(int *)(unaff_RDI + 0x10) == 0) {
        bVar3 = true;
      }
      else {
        pbVar5 = *(byte **)(lVar4 + 8);
        lVar8 = *(longlong *)(unaff_RDI + 8) - (longlong)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar8];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        bVar3 = 0 < (int)(bVar1 - uVar6);
      }
      if (!bVar3) goto FUN_18031f5d4;
      if (*(int *)(unaff_RSI + -0x10) != 0) {
        pbVar5 = *(byte **)(unaff_RSI + -0x18);
        pbVar7 = pbVar5;
        do {
          bVar1 = *pbVar7;
          uVar6 = (uint)pbVar7[*(longlong *)(lVar4 + 8) - (longlong)pbVar5];
          if (bVar1 != uVar6) break;
          pbVar7 = pbVar7 + 1;
        } while (uVar6 != 0);
        if (((int)(bVar1 - uVar6) < 1) && (*(int *)(unaff_RDI + 0x10) != 0)) {
          lVar4 = *(longlong *)(unaff_RDI + 8) - (longlong)pbVar5;
          do {
            pbVar7 = pbVar5 + lVar4;
            if (*pbVar5 != *pbVar7) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar7 != 0);
        }
      }
    }
    lVar4 = FUN_18031f830();
    unaff_R14 = unaff_R14 + -1;
    FUN_18031f460(lVar4,unaff_RSI,unaff_R14);
    unaff_RSI = lVar4;
  } while (0x380 < (longlong)(lVar4 - unaff_RDI & 0xffffffffffffffe0U));
  if (unaff_R14 == 0) {
    FUN_18031f9e0();
  }
  return;
}





// 函数: void FUN_18031f5b1(void)
void FUN_18031f5b1(void)

{
  longlong unaff_R14;
  
  if (unaff_R14 == 0) {
    FUN_18031f9e0();
  }
  return;
}





// 函数: void FUN_18031f5bb(void)
void FUN_18031f5bb(void)

{
  FUN_18031f9e0();
  return;
}





// 函数: void FUN_18031f5d4(void)
void FUN_18031f5d4(void)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  longlong in_R9;
  longlong unaff_R14;
  
code_r0x00018031f5d4:
  do {
    lVar6 = unaff_RSI;
    if ((*(int *)(unaff_RSI + -0x10) != 0) && (*(int *)(unaff_RDI + 0x10) != 0)) {
      pbVar3 = *(byte **)(unaff_RSI + -0x18);
      pbVar5 = pbVar3;
      do {
        bVar1 = *pbVar5;
        uVar4 = (uint)pbVar5[*(longlong *)(unaff_RDI + 8) - (longlong)pbVar3];
        if (bVar1 != uVar4) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar4 != 0);
      if (((int)(bVar1 - uVar4) < 1) && (unaff_EBX != 0)) {
        lVar7 = *(longlong *)(in_R9 + 8) - (longlong)pbVar3;
        do {
          pbVar5 = pbVar3 + lVar7;
          if (*pbVar3 != *pbVar5) break;
          pbVar3 = pbVar3 + 1;
        } while (*pbVar5 != 0);
      }
    }
LAB_18031f56e:
    unaff_RSI = FUN_18031f830();
    unaff_R14 = unaff_R14 + -1;
    FUN_18031f460(unaff_RSI,lVar6,unaff_R14);
    if (((longlong)(unaff_RSI - unaff_RDI & 0xffffffffffffffe0U) < 0x381) || (unaff_R14 < 1)) {
      if (unaff_R14 == 0) {
        FUN_18031f9e0();
      }
      return;
    }
    in_R9 = ((unaff_RSI - unaff_RDI >> 5) - (unaff_RSI - unaff_RDI >> 0x3f) >> 1) * 0x20;
    unaff_EBX = *(int *)(in_R9 + 0x10 + unaff_RDI);
    in_R9 = in_R9 + unaff_RDI;
  } while (unaff_EBX == 0);
  if (*(int *)(unaff_RDI + 0x10) == 0) {
    bVar2 = true;
  }
  else {
    pbVar3 = *(byte **)(in_R9 + 8);
    lVar6 = *(longlong *)(unaff_RDI + 8) - (longlong)pbVar3;
    do {
      bVar1 = *pbVar3;
      uVar4 = (uint)pbVar3[lVar6];
      if (bVar1 != uVar4) break;
      pbVar3 = pbVar3 + 1;
    } while (uVar4 != 0);
    bVar2 = 0 < (int)(bVar1 - uVar4);
  }
  if (!bVar2) goto code_r0x00018031f5d4;
  lVar6 = unaff_RSI;
  if (*(int *)(unaff_RSI + -0x10) != 0) {
    pbVar3 = *(byte **)(unaff_RSI + -0x18);
    pbVar5 = pbVar3;
    do {
      bVar1 = *pbVar5;
      uVar4 = (uint)pbVar5[*(longlong *)(in_R9 + 8) - (longlong)pbVar3];
      if (bVar1 != uVar4) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0);
    if (((int)(bVar1 - uVar4) < 1) && (*(int *)(unaff_RDI + 0x10) != 0)) {
      lVar7 = *(longlong *)(unaff_RDI + 8) - (longlong)pbVar3;
      do {
        pbVar5 = pbVar3 + lVar7;
        if (*pbVar3 != *pbVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (*pbVar5 != 0);
    }
  }
  goto LAB_18031f56e;
}





// 函数: void FUN_18031f650(longlong param_1,longlong param_2)
void FUN_18031f650(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (param_1 != param_2) {
    for (lVar10 = param_1 + 0x20; lVar10 != param_2; lVar10 = lVar10 + 0x20) {
      iVar2 = *(int *)(lVar10 + 0x10);
      lVar5 = *(longlong *)(lVar10 + 8);
      uVar3 = *(int32_t *)(lVar10 + 0x1c);
      uVar4 = *(int32_t *)(lVar10 + 0x18);
      *(int32_t *)(lVar10 + 0x10) = 0;
      *(uint64_t *)(lVar10 + 8) = 0;
      *(uint64_t *)(lVar10 + 0x18) = 0;
      lVar9 = lVar10;
      lVar6 = lVar10;
      while ((lVar6 != param_1 && (*(int *)(lVar6 + -0x10) != 0))) {
        if (iVar2 != 0) {
          pbVar7 = *(byte **)(lVar6 + -0x18);
          lVar11 = lVar5 - (longlong)pbVar7;
          do {
            bVar1 = *pbVar7;
            uVar8 = (uint)pbVar7[lVar11];
            if (bVar1 != uVar8) break;
            pbVar7 = pbVar7 + 1;
          } while (uVar8 != 0);
          if ((int)(bVar1 - uVar8) < 1) break;
        }
        if (*(longlong *)(lVar9 + 8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)(lVar9 + 0x18) = 0;
        *(uint64_t *)(lVar9 + 8) = 0;
        *(int32_t *)(lVar9 + 0x10) = 0;
        *(int32_t *)(lVar9 + 0x10) = *(int32_t *)(lVar6 + -0x10);
        *(uint64_t *)(lVar9 + 8) = *(uint64_t *)(lVar6 + -0x18);
        *(int32_t *)(lVar9 + 0x1c) = *(int32_t *)(lVar6 + -4);
        *(int32_t *)(lVar9 + 0x18) = *(int32_t *)(lVar6 + -8);
        *(int32_t *)(lVar6 + -0x10) = 0;
        *(uint64_t *)(lVar6 + -0x18) = 0;
        *(uint64_t *)(lVar6 + -8) = 0;
        lVar9 = lVar9 + -0x20;
        lVar6 = lVar6 + -0x20;
      }
      if (*(longlong *)(lVar9 + 8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(int *)(lVar9 + 0x10) = iVar2;
      *(longlong *)(lVar9 + 8) = lVar5;
      *(int32_t *)(lVar9 + 0x1c) = uVar3;
      *(int32_t *)(lVar9 + 0x18) = uVar4;
    }
  }
  return;
}



ulonglong FUN_18031f830(ulonglong param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  byte bVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  byte *pbVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  void *puStack_50;
  byte *pbStack_48;
  int iStack_40;
  
  FUN_180627ae0(&puStack_50,param_3,param_3,param_4,0xfffffffffffffffe);
  do {
    while (iStack_40 == 0) {
LAB_18031f8bd:
      do {
        do {
          uVar8 = param_2;
          param_2 = uVar8 - 0x20;
          if (*(int *)(uVar8 - 0x10) == 0) goto LAB_18031f8f7;
        } while (iStack_40 == 0);
        pbVar6 = *(byte **)(uVar8 - 0x18);
        lVar9 = (longlong)pbStack_48 - (longlong)pbVar6;
        do {
          bVar1 = *pbVar6;
          uVar7 = (uint)pbVar6[lVar9];
          if (bVar1 != uVar7) break;
          pbVar6 = pbVar6 + 1;
        } while (uVar7 != 0);
      } while (0 < (int)(bVar1 - uVar7));
LAB_18031f8f7:
      if (param_2 <= param_1) {
        puStack_50 = &UNK_180a3c3e0;
        if (pbStack_48 == (byte *)0x0) {
          return param_1;
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uVar2 = *(int32_t *)(param_1 + 0x10);
      uVar5 = *(uint64_t *)(param_1 + 8);
      uVar3 = *(int32_t *)(param_1 + 0x1c);
      uVar4 = *(int32_t *)(param_1 + 0x18);
      *(int32_t *)(param_1 + 0x10) = 0;
      *(uint64_t *)(param_1 + 8) = 0;
      *(uint64_t *)(param_1 + 0x18) = 0;
      FUN_18005d190(param_1,param_2);
      if (*(longlong *)(uVar8 - 0x18) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(int32_t *)(uVar8 - 0x10) = uVar2;
      *(uint64_t *)(uVar8 - 0x18) = uVar5;
      *(int32_t *)(uVar8 - 4) = uVar3;
      *(int32_t *)(uVar8 - 8) = uVar4;
      param_1 = param_1 + 0x20;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      pbVar6 = pbStack_48;
      do {
        bVar1 = *pbVar6;
        uVar7 = (uint)pbVar6[*(longlong *)(param_1 + 8) - (longlong)pbStack_48];
        if (bVar1 != uVar7) break;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
      if ((int)(bVar1 - uVar7) < 1) goto LAB_18031f8bd;
    }
    param_1 = param_1 + 0x20;
  } while( true );
}





// 函数: void FUN_18031f9e0(longlong param_1,ulonglong param_2,ulonglong param_3)
void FUN_18031f9e0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong *plVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  void *puStack_60;
  longlong lStack_58;
  int32_t uStack_50;
  longlong lStack_48;
  
  lVar9 = (longlong)(param_2 - param_1) >> 5;
  if (1 < lVar9) {
    lVar6 = (lVar9 + -2 >> 1) + 1;
    plVar7 = (longlong *)(param_1 + 8 + lVar6 * 0x20);
    do {
      lVar6 = lVar6 + -1;
      plVar1 = plVar7 + -4;
      puStack_60 = &UNK_180a3c3e0;
      uStack_50 = (int32_t)plVar7[-3];
      lStack_58 = *plVar1;
      lStack_48 = plVar7[-2];
      *(int32_t *)(plVar7 + -3) = 0;
      *plVar1 = 0;
      plVar7[-2] = 0;
      FUN_18031fd10(param_1,lVar6,lVar9,lVar6,&puStack_60);
      puStack_60 = &UNK_180a3c3e0;
      if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      plVar7 = plVar1;
    } while (lVar6 != 0);
  }
  if (param_2 < param_3) {
    plVar7 = (longlong *)(param_2 + 8);
    lVar6 = ((param_3 - param_2) - 1 >> 5) + 1;
    do {
      if (*(int *)(param_1 + 0x10) == 0) {
        bVar3 = false;
      }
      else if ((int)plVar7[1] == 0) {
        bVar3 = true;
      }
      else {
        pbVar4 = *(byte **)(param_1 + 8);
        lVar8 = *plVar7 - (longlong)pbVar4;
        do {
          bVar2 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar8];
          if (bVar2 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        bVar3 = 0 < (int)(bVar2 - uVar5);
      }
      if (bVar3) {
        puStack_60 = &UNK_180a3c3e0;
        uStack_50 = (int32_t)plVar7[1];
        lStack_58 = *plVar7;
        lStack_48 = plVar7[2];
        *(int32_t *)(plVar7 + 1) = 0;
        *plVar7 = 0;
        plVar7[2] = 0;
        if (*plVar7 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar7[2] = 0;
        *plVar7 = 0;
        *(int32_t *)(plVar7 + 1) = 0;
        *(int32_t *)(plVar7 + 1) = *(int32_t *)(param_1 + 0x10);
        *plVar7 = *(longlong *)(param_1 + 8);
        *(int32_t *)((longlong)plVar7 + 0x14) = *(int32_t *)(param_1 + 0x1c);
        *(int32_t *)(plVar7 + 2) = *(int32_t *)(param_1 + 0x18);
        *(int32_t *)(param_1 + 0x10) = 0;
        *(uint64_t *)(param_1 + 8) = 0;
        *(uint64_t *)(param_1 + 0x18) = 0;
        FUN_18031fd10(param_1,0,lVar9,0,&puStack_60);
        puStack_60 = &UNK_180a3c3e0;
        if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      plVar7 = plVar7 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (1 < lVar9) {
    plVar7 = (longlong *)(param_2 - 0x18);
    do {
      puStack_60 = &UNK_180a3c3e0;
      uStack_50 = (int32_t)plVar7[1];
      lStack_58 = *plVar7;
      lStack_48 = plVar7[2];
      *(int32_t *)(plVar7 + 1) = 0;
      *plVar7 = 0;
      plVar7[2] = 0;
      FUN_18005d190(plVar7 + -1,param_1);
      FUN_18031fd10(param_1,0,lVar9 + -1,0,&puStack_60);
      puStack_60 = &UNK_180a3c3e0;
      if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      plVar7 = plVar7 + -4;
      lVar9 = (0x18 - param_1) + (longlong)plVar7 >> 5;
    } while (1 < lVar9);
  }
  return;
}



longlong FUN_18031fd10(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = param_4 * 2;
  while (lVar6 = lVar5 + 2, lVar6 < param_3) {
    lVar7 = lVar6 * 0x20 + param_1;
    if (*(int *)(lVar6 * 0x20 + -0x10 + param_1) == 0) {
      bVar2 = false;
    }
    else if (*(int *)(lVar7 + 0x10) == 0) {
      bVar2 = true;
    }
    else {
      pbVar3 = *(byte **)(lVar7 + -0x18);
      lVar7 = *(longlong *)(lVar7 + 8) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar4 = (uint)pbVar3[lVar7];
        if (bVar1 != uVar4) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
      bVar2 = 0 < (int)(bVar1 - uVar4);
    }
    lVar7 = lVar5 + 1;
    if (!bVar2) {
      lVar7 = lVar6;
    }
    lVar5 = param_4 * 0x20 + param_1;
    lVar6 = lVar7 * 0x20 + param_1;
    if (*(longlong *)(lVar5 + 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(lVar5 + 0x18) = 0;
    *(uint64_t *)(lVar5 + 8) = 0;
    *(int32_t *)(lVar5 + 0x10) = 0;
    *(int32_t *)(lVar5 + 0x10) = *(int32_t *)(lVar6 + 0x10);
    *(uint64_t *)(lVar5 + 8) = *(uint64_t *)(lVar6 + 8);
    *(int32_t *)(lVar5 + 0x1c) = *(int32_t *)(lVar6 + 0x1c);
    *(int32_t *)(lVar5 + 0x18) = *(int32_t *)(lVar6 + 0x18);
    *(int32_t *)(lVar6 + 0x10) = 0;
    *(uint64_t *)(lVar6 + 8) = 0;
    *(uint64_t *)(lVar6 + 0x18) = 0;
    param_4 = lVar7;
    lVar5 = lVar7 * 2;
  }
  if (lVar6 == param_3) {
    FUN_18005d190(param_4 * 0x20 + param_1,param_1 + -0x20 + lVar6 * 0x20);
    param_4 = lVar5 + 1;
  }
  while (param_2 < param_4) {
    lVar5 = param_4 + -1 >> 1;
    lVar6 = lVar5 * 0x20 + param_1;
    if (*(int *)(param_5 + 0x10) == 0) break;
    if (*(int *)(lVar6 + 0x10) != 0) {
      pbVar3 = *(byte **)(param_5 + 8);
      lVar7 = *(longlong *)(lVar6 + 8) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar4 = (uint)pbVar3[lVar7];
        if (bVar1 != uVar4) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) break;
    }
    lVar7 = param_4 * 0x20 + param_1;
    if (*(longlong *)(lVar7 + 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t *)(lVar7 + 0x18) = 0;
    *(uint64_t *)(lVar7 + 8) = 0;
    *(int32_t *)(lVar7 + 0x10) = 0;
    *(int32_t *)(lVar7 + 0x10) = *(int32_t *)(lVar6 + 0x10);
    *(uint64_t *)(lVar7 + 8) = *(uint64_t *)(lVar6 + 8);
    *(int32_t *)(lVar7 + 0x1c) = *(int32_t *)(lVar6 + 0x1c);
    *(int32_t *)(lVar7 + 0x18) = *(int32_t *)(lVar6 + 0x18);
    *(int32_t *)(lVar6 + 0x10) = 0;
    *(uint64_t *)(lVar6 + 8) = 0;
    *(uint64_t *)(lVar6 + 0x18) = 0;
    param_4 = lVar5;
  }
  param_1 = param_4 * 0x20 + param_1;
  if (*(longlong *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x10) = *(int32_t *)(param_5 + 0x10);
  *(uint64_t *)(param_1 + 8) = *(uint64_t *)(param_5 + 8);
  *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(param_5 + 0x1c);
  *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_5 + 0x18);
  *(int32_t *)(param_5 + 0x10) = 0;
  *(uint64_t *)(param_5 + 8) = 0;
  *(uint64_t *)(param_5 + 0x18) = 0;
  return param_1;
}



longlong FUN_18031ff10(longlong param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *(void **)(param_1 + 0xc0) = &UNK_18098bcb0;
  FUN_180049470(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x1a0,param_3,param_4,uVar1);
  }
  return param_1;
}





// 函数: void FUN_18031ff90(longlong *param_1)
void FUN_18031ff90(longlong *param_1)

{
  if (*param_1 != 0) {
    free();
    *param_1 = 0;
  }
  return;
}



uint64_t *
FUN_18031ffd0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0xe;
  strcpy_s(param_2[1],0x80,&UNK_180a1afd8,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



