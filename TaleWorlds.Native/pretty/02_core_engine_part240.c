#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part240.c - 3 个函数

// 函数: void FUN_180209470(longlong *param_1)
void FUN_180209470(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint uVar6;
  uint64_t *puVar7;
  int iVar8;
  longlong *plStackX_8;
  void *puStack_50;
  longlong lStack_48;
  uint uStack_40;
  
  FUN_180627ae0(&puStack_50,*param_1 + 0x1f0);
  while (0 < (int)uStack_40) {
    lVar2 = strstr(lStack_48,&DAT_180a0ff10);
    if (lVar2 == 0) break;
    iVar8 = 6;
    iVar1 = (int)lVar2 - (int)lStack_48;
    if (uStack_40 < iVar1 + 6U) {
      iVar8 = uStack_40 - iVar1;
    }
    uVar6 = iVar1 + iVar8;
    if (uVar6 < uStack_40) {
      lVar2 = (longlong)(int)uVar6;
      do {
        *(int8_t *)((lVar2 - iVar8) + lStack_48) = *(int8_t *)(lVar2 + lStack_48);
        uVar6 = uVar6 + 1;
        lVar2 = lVar2 + 1;
      } while (uVar6 < uStack_40);
    }
    uStack_40 = uStack_40 - iVar8;
    *(int8_t *)((ulonglong)uStack_40 + lStack_48) = 0;
  }
  lVar2 = FUN_1800b6de0(_DAT_180c86930,&puStack_50,0);
  if (lVar2 != 0) {
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 0x1b0) == 0) {
        lVar3 = lVar3 + 0x10;
      }
      else {
        lVar3 = func_0x000180079240();
      }
      FUN_1800b32c0(_DAT_180c86930,&plStackX_8,lVar3,0,0);
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
    }
    iVar1 = 0;
    if (*(longlong *)(lVar2 + 0x40) - *(longlong *)(lVar2 + 0x38) >> 4 != 0) {
      puVar5 = (uint64_t *)param_1[0xc];
      do {
        if (puVar5 < (uint64_t *)param_1[0xd]) {
          *puVar5 = 0xffffffffffffffff;
          *(int32_t *)(puVar5 + 1) = 0xffffffff;
          param_1[0xc] = param_1[0xc] + 0xc;
          puVar5 = (uint64_t *)param_1[0xc];
        }
        else {
          puVar7 = (uint64_t *)param_1[0xb];
          lVar3 = ((longlong)puVar5 - (longlong)puVar7) / 0xc;
          if (lVar3 == 0) {
            lVar3 = 1;
LAB_180209615:
            puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar3 * 0xc,(char)param_1[0xe]);
            puVar5 = (uint64_t *)param_1[0xc];
            puVar7 = (uint64_t *)param_1[0xb];
          }
          else {
            lVar3 = lVar3 * 2;
            if (lVar3 != 0) goto LAB_180209615;
            puVar4 = (uint64_t *)0x0;
          }
          if (puVar7 != puVar5) {
                    // WARNING: Subroutine does not return
            memmove(puVar4,puVar7,(longlong)puVar5 - (longlong)puVar7);
          }
          *puVar4 = 0xffffffffffffffff;
          *(int32_t *)(puVar4 + 1) = 0xffffffff;
          puVar5 = (uint64_t *)((longlong)puVar4 + 0xc);
          if (param_1[0xb] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          param_1[0xb] = (longlong)puVar4;
          param_1[0xc] = (longlong)puVar5;
          param_1[0xd] = (longlong)puVar4 + lVar3 * 0xc;
        }
        iVar1 = iVar1 + 1;
      } while ((ulonglong)(longlong)iVar1 <
               (ulonglong)(*(longlong *)(lVar2 + 0x40) - *(longlong *)(lVar2 + 0x38) >> 4));
    }
  }
  puStack_50 = &UNK_180a3c3e0;
  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180209720(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plStackX_8;
  
  plVar6 = (longlong *)param_1[1];
  if (plVar6 < (longlong *)param_1[2]) {
    param_1[1] = (longlong)(plVar6 + 0xf);
    plVar2 = (longlong *)*param_2;
    *plVar6 = (longlong)plVar2;
    plStackX_8 = plVar6;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
    plVar6[1] = param_2[1];
    plVar2 = (longlong *)param_2[2];
    plVar6[2] = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))();
    }
    lVar8 = param_2[4];
    plVar6[3] = param_2[3];
    plVar6[4] = lVar8;
    lVar8 = param_2[6];
    plVar6[5] = param_2[5];
    plVar6[6] = lVar8;
    uVar3 = *(int32_t *)((longlong)param_2 + 0x3c);
    lVar8 = param_2[8];
    uVar4 = *(int32_t *)((longlong)param_2 + 0x44);
    *(int *)(plVar6 + 7) = (int)param_2[7];
    *(int32_t *)((longlong)plVar6 + 0x3c) = uVar3;
    *(int *)(plVar6 + 8) = (int)lVar8;
    *(int32_t *)((longlong)plVar6 + 0x44) = uVar4;
    uVar3 = *(int32_t *)((longlong)param_2 + 0x4c);
    lVar8 = param_2[10];
    uVar4 = *(int32_t *)((longlong)param_2 + 0x54);
    *(int *)(plVar6 + 9) = (int)param_2[9];
    *(int32_t *)((longlong)plVar6 + 0x4c) = uVar3;
    *(int *)(plVar6 + 10) = (int)lVar8;
    *(int32_t *)((longlong)plVar6 + 0x54) = uVar4;
    lVar8 = (param_2[0xc] - param_2[0xb]) / 6 + (param_2[0xc] - param_2[0xb] >> 0x3f);
    lVar8 = (lVar8 >> 1) - (lVar8 >> 0x3f);
    uVar1 = *(uint *)(param_2 + 0xe);
    *(uint *)(plVar6 + 0xe) = uVar1;
    if (lVar8 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_18062b420(_DAT_180c8ed18,lVar8 * 0xc,uVar1 & 0xff);
    }
    plVar6[0xb] = lVar7;
    plVar6[0xc] = lVar7;
    plVar6[0xd] = lVar7 + lVar8 * 0xc;
    lVar8 = plVar6[0xb];
    lVar7 = param_2[0xb];
    if (lVar7 != param_2[0xc]) {
                    // WARNING: Subroutine does not return
      memmove(lVar8,lVar7,param_2[0xc] - lVar7);
    }
    plVar6[0xc] = lVar8;
    return plVar6;
  }
  lVar8 = *param_1;
  lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)plVar6 - lVar8),8) +
          ((longlong)plVar6 - lVar8);
  lVar7 = (lVar7 >> 6) - (lVar7 >> 0x3f);
  if (lVar7 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 == 0) {
      lVar5 = 0;
      goto LAB_1802097bc;
    }
  }
  lVar5 = FUN_18062b420(_DAT_180c8ed18,lVar7 * 0x78,(char)param_1[3]);
  plVar6 = (longlong *)param_1[1];
  lVar8 = *param_1;
LAB_1802097bc:
  FUN_180209980(&plStackX_8,lVar8,plVar6,lVar5);
  FUN_180209840(plStackX_8,param_2);
  lVar8 = param_1[1];
  lVar9 = *param_1;
  if (lVar9 != lVar8) {
    do {
      FUN_180207ea0(lVar9);
      lVar9 = lVar9 + 0x78;
    } while (lVar9 != lVar8);
    lVar9 = *param_1;
  }
  if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar9);
  }
  plVar6 = (longlong *)(lVar7 * 0x78 + lVar5);
  *param_1 = lVar5;
  param_1[1] = (longlong)(plStackX_8 + 0xf);
  param_1[2] = (longlong)plVar6;
  return plVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020975a(uint64_t param_1,uint64_t param_2,longlong param_3)
void FUN_18020975a(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong in_R10;
  longlong in_stack_00000050;
  
  lVar4 = SUB168(SEXT816(in_RAX) * SEXT816(param_3 - in_R10),8) + (param_3 - in_R10);
  lVar4 = (lVar4 >> 6) - (lVar4 >> 0x3f);
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 == 0) {
      lVar3 = 0;
      goto LAB_1802097bc;
    }
  }
  lVar3 = FUN_18062b420(_DAT_180c8ed18,lVar4 * 0x78,(char)unaff_RDI[3]);
  param_3 = unaff_RDI[1];
  in_R10 = *unaff_RDI;
LAB_1802097bc:
  FUN_180209980(&stack0x00000050,in_R10,param_3,lVar3);
  lVar2 = in_stack_00000050;
  FUN_180209840(in_stack_00000050);
  lVar1 = unaff_RDI[1];
  lVar5 = *unaff_RDI;
  if (lVar5 != lVar1) {
    do {
      FUN_180207ea0(lVar5);
      lVar5 = lVar5 + 0x78;
    } while (lVar5 != lVar1);
    lVar5 = *unaff_RDI;
  }
  if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar5);
  }
  *unaff_RDI = lVar3;
  unaff_RDI[1] = lVar2 + 0x78;
  unaff_RDI[2] = lVar4 * 0x78 + lVar3;
  return;
}





// 函数: void FUN_18020980e(void)
void FUN_18020980e(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180209840(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  longlong *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  param_1[1] = param_2[1];
  plVar2 = (longlong *)param_2[2];
  param_1[2] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  lVar6 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = lVar6;
  lVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = lVar6;
  uVar3 = *(int32_t *)((longlong)param_2 + 0x3c);
  lVar6 = param_2[8];
  uVar4 = *(int32_t *)((longlong)param_2 + 0x44);
  *(int *)(param_1 + 7) = (int)param_2[7];
  *(int32_t *)((longlong)param_1 + 0x3c) = uVar3;
  *(int *)(param_1 + 8) = (int)lVar6;
  *(int32_t *)((longlong)param_1 + 0x44) = uVar4;
  uVar3 = *(int32_t *)((longlong)param_2 + 0x4c);
  lVar6 = param_2[10];
  uVar4 = *(int32_t *)((longlong)param_2 + 0x54);
  *(int *)(param_1 + 9) = (int)param_2[9];
  *(int32_t *)((longlong)param_1 + 0x4c) = uVar3;
  *(int *)(param_1 + 10) = (int)lVar6;
  *(int32_t *)((longlong)param_1 + 0x54) = uVar4;
  lVar6 = (param_2[0xc] - param_2[0xb]) / 6 + (param_2[0xc] - param_2[0xb] >> 0x3f);
  lVar6 = (lVar6 >> 1) - (lVar6 >> 0x3f);
  uVar1 = *(uint *)(param_2 + 0xe);
  *(uint *)(param_1 + 0xe) = uVar1;
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_18062b420(_DAT_180c8ed18,lVar6 * 0xc,uVar1 & 0xff,param_4,uVar7);
  }
  param_1[0xb] = lVar5;
  param_1[0xc] = lVar5;
  param_1[0xd] = lVar5 + lVar6 * 0xc;
  lVar6 = param_1[0xb];
  lVar5 = param_2[0xb];
  if (lVar5 != param_2[0xc]) {
                    // WARNING: Subroutine does not return
    memmove(lVar6,lVar5,param_2[0xc] - lVar5);
  }
  param_1[0xc] = lVar6;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180209980(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  longlong *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  *param_1 = (longlong)param_4;
  if (param_2 != param_3) {
    plVar7 = param_2 + 0xc;
    do {
      plVar2 = (longlong *)plVar7[-0xc];
      *param_4 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
      }
      param_4[1] = plVar7[-0xb];
      plVar2 = (longlong *)plVar7[-10];
      param_4[2] = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
      }
      lVar6 = plVar7[-8];
      param_4[3] = plVar7[-9];
      param_4[4] = lVar6;
      lVar6 = plVar7[-6];
      param_4[5] = plVar7[-7];
      param_4[6] = lVar6;
      uVar3 = *(int32_t *)((longlong)plVar7 + -0x24);
      lVar6 = plVar7[-4];
      uVar4 = *(int32_t *)((longlong)plVar7 + -0x1c);
      *(int *)(param_4 + 7) = (int)plVar7[-5];
      *(int32_t *)((longlong)param_4 + 0x3c) = uVar3;
      *(int *)(param_4 + 8) = (int)lVar6;
      *(int32_t *)((longlong)param_4 + 0x44) = uVar4;
      uVar3 = *(int32_t *)((longlong)plVar7 + -0x14);
      lVar6 = plVar7[-2];
      uVar4 = *(int32_t *)((longlong)plVar7 + -0xc);
      *(int *)(param_4 + 9) = (int)plVar7[-3];
      *(int32_t *)((longlong)param_4 + 0x4c) = uVar3;
      *(int *)(param_4 + 10) = (int)lVar6;
      *(int32_t *)((longlong)param_4 + 0x54) = uVar4;
      lVar6 = (*plVar7 - plVar7[-1]) / 6 + (*plVar7 - plVar7[-1] >> 0x3f);
      lVar6 = (lVar6 >> 1) - (lVar6 >> 0x3f);
      uVar1 = *(uint *)(plVar7 + 2);
      *(uint *)(param_4 + 0xe) = uVar1;
      if (lVar6 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_18062b420(_DAT_180c8ed18,lVar6 * 0xc,uVar1 & 0xff);
      }
      param_4[0xb] = lVar5;
      param_4[0xc] = lVar5;
      param_4[0xd] = lVar5 + lVar6 * 0xc;
      lVar6 = param_4[0xb];
      lVar5 = plVar7[-1];
      if (lVar5 != *plVar7) {
                    // WARNING: Subroutine does not return
        memmove(lVar6,lVar5,*plVar7 - lVar5);
      }
      param_4[0xc] = lVar6;
      *param_1 = *param_1 + 0x78;
      param_4 = (longlong *)*param_1;
      plVar2 = plVar7 + 3;
      plVar7 = plVar7 + 0xf;
    } while (plVar2 != param_3);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



