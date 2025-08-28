#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part013.c - 10 个函数

// 函数: void FUN_1801d7420(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801d7420(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  uint64_t uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plStackX_8;
  uint64_t uVar7;
  
  plVar1 = _DAT_180c8aa08;
  uVar7 = 0xfffffffffffffffe;
  plStackX_8 = param_1;
  do {
    lVar6 = 0x19;
    do {
      uVar2 = _DAT_180c82868;
      lVar4 = FUN_18005e890(_DAT_180c82868);
      if (lVar4 == 0) {
LAB_1801d748f:
        Sleep(1);
      }
      else {
        plVar5 = (longlong *)FUN_18005e890(uVar2);
        cVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,0,*(code **)(*plVar5 + 0x20),param_4,uVar7);
        if (cVar3 == '\0') goto LAB_1801d748f;
      }
      uVar2 = _DAT_180c82868;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (*(int *)((longlong)_DAT_180c8aa08 + 0x30c) == 0) {
      plVar5 = (longlong *)plVar1[9];
      if (plVar5 != (longlong *)0x0) {
        plStackX_8 = plVar5;
        (**(code **)(*plVar5 + 0x28))();
        FUN_18005e6a0(uVar2,&plStackX_8,0);
      }
      plVar1 = (longlong *)*plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d7510(longlong param_1)
void FUN_1801d7510(longlong param_1)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  while (uVar1 = _DAT_180c82868, *(int *)(param_1 + 0x30c) != 0) {
    lVar2 = FUN_18005e890(_DAT_180c82868);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_18005e890(uVar1);
      (**(code **)(*plVar3 + 0x20))(plVar3,0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d7560(void)
void FUN_1801d7560(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  int32_t *puVar6;
  void *puVar7;
  int iVar8;
  uint64_t *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  int8_t auStack_318 [32];
  int32_t uStack_2f8;
  void *puStack_2f0;
  int8_t *puStack_2e8;
  uint uStack_2e0;
  ulonglong uStack_2d8;
  void *puStack_2d0;
  longlong lStack_2c8;
  uint uStack_2c0;
  int32_t uStack_2b8;
  uint64_t *puStack_2b0;
  uint64_t *puStack_2a8;
  uint64_t uStack_2a0;
  int32_t uStack_298;
  uint64_t uStack_290;
  void *puStack_288;
  int8_t *puStack_280;
  int iStack_278;
  int8_t auStack_270 [24];
  void *apuStack_258 [68];
  ulonglong uStack_38;
  
  uStack_290 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_318;
  uStack_2f8 = 0;
  lVar11 = -1;
  puStack_288 = &unknown_var_7512_ptr;
  puStack_280 = auStack_270;
  auStack_270[0] = 0;
  iStack_278 = 6;
  strcpy_s(auStack_270,0x10,&unknown_var_2588_ptr);
  uStack_2f8 = 1;
  FUN_1806279c0(&puStack_2d0,&puStack_288);
  uStack_2f8 = 0;
  puStack_288 = &unknown_var_720_ptr;
  iVar8 = uStack_2c0 + 0x10;
  FUN_1806277c0(&puStack_2d0,iVar8);
  puVar6 = (int32_t *)((ulonglong)uStack_2c0 + lStack_2c8);
  *puVar6 = 0x64616853;
  puVar6[1] = 0x2f737265;
  puVar6[2] = 0x72756f53;
  puVar6[3] = 0x2f736563;
  *(int8_t *)(puVar6 + 4) = 0;
  uStack_2c0 = iVar8;
  lVar4 = FUN_180624440(apuStack_258,&puStack_2d0);
  puVar7 = &system_buffer_ptr;
  if (*(void **)(lVar4 + 8) != (void *)0x0) {
    puVar7 = *(void **)(lVar4 + 8);
  }
  (**(code **)(puStack_2d0 + 0x10))(&puStack_2d0,puVar7);
  apuStack_258[0] = &unknown_var_720_ptr;
  puStack_2b0 = (uint64_t *)0x0;
  puStack_2a8 = (uint64_t *)0x0;
  uStack_2a0 = 0;
  uStack_298 = 3;
  FUN_18062d0d0(&puStack_2d0,&puStack_2b0);
  cVar3 = FUN_180624a00(&puStack_2d0);
  puVar2 = puStack_2a8;
  puVar1 = puStack_2b0;
  if (cVar3 != '\0') {
    uVar10 = (longlong)puStack_2a8 - (longlong)puStack_2b0 >> 5;
    iVar8 = 0;
    if (uVar10 != 0) {
      uVar5 = 0;
      do {
        lVar4 = FUN_18062d860(puVar1 + uVar5 * 4);
        if (lVar11 < lVar4) {
          lVar11 = lVar4;
        }
        iVar8 = iVar8 + 1;
        uVar5 = (ulonglong)iVar8;
      } while (uVar5 < uVar10);
    }
  }
  puStack_288 = &unknown_var_7512_ptr;
  puStack_280 = auStack_270;
  auStack_270[0] = 0;
  iStack_278 = 6;
  strcpy_s(auStack_270,0x10,&unknown_var_2588_ptr);
  uStack_2f8 = 2;
  puStack_2f0 = &unknown_var_3456_ptr;
  uStack_2d8 = 0;
  puStack_2e8 = (int8_t *)0x0;
  uStack_2e0 = 0;
  FUN_1806277c0(&puStack_2f0,iStack_278);
  if (0 < iStack_278) {
    puVar7 = &system_buffer_ptr;
    if (puStack_280 != (void *)0x0) {
      puVar7 = puStack_280;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_2e8,puVar7,(longlong)(iStack_278 + 1));
  }
  if ((puStack_280 != (void *)0x0) && (uStack_2e0 = 0, puStack_2e8 != (int8_t *)0x0)) {
    *puStack_2e8 = 0;
  }
  uStack_2f8 = 0;
  puStack_288 = &unknown_var_720_ptr;
  iVar8 = uStack_2e0 + 0x1e;
  FUN_1806277c0(&puStack_2f0,iVar8);
  puVar6 = (int32_t *)(puStack_2e8 + uStack_2e0);
  *puVar6 = 0x64616853;
  puVar6[1] = 0x2f737265;
  puVar6[2] = 0x64616873;
  puVar6[3] = 0x635f7265;
  *(uint64_t *)(puVar6 + 4) = 0x6172756769666e6f;
  puVar6[6] = 0x6e6f6974;
  *(int16_t *)(puVar6 + 7) = 0x682e;
  *(int8_t *)((longlong)puVar6 + 0x1e) = 0;
  uStack_2e0 = iVar8;
  cVar3 = FUN_180624af0(&puStack_2f0);
  if (cVar3 != '\0') {
    FUN_18062d860(&puStack_2f0);
  }
  puStack_2f0 = &unknown_var_3456_ptr;
  if (puStack_2e8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_2e8 = (int8_t *)0x0;
  uStack_2d8 = uStack_2d8 & 0xffffffff00000000;
  puStack_2f0 = &unknown_var_720_ptr;
  for (puVar9 = puVar1; puVar9 != puVar2; puVar9 = puVar9 + 4) {
    (**(code **)*puVar9)(puVar9,0);
  }
  if (puVar1 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  puStack_2d0 = &unknown_var_3456_ptr;
  if (lStack_2c8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_2c8 = 0;
  uStack_2b8 = 0;
  puStack_2d0 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_318);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d7910(uint64_t param_1,uint param_2,ulonglong *param_3,int *param_4,longlong param_5)
void FUN_1801d7910(uint64_t param_1,uint param_2,ulonglong *param_3,int *param_4,longlong param_5)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar8 = 0;
  iVar4 = 1 << ((byte)((longlong)(ulonglong)(uint)(param_4[2] - *param_4) >> 2) & 0x1f);
  if (0 < iVar4) {
    do {
      puVar5 = *(uint **)param_4;
      uVar7 = 0;
      iVar9 = 0;
      uVar10 = *(longlong *)(param_4 + 2) - (longlong)puVar5 >> 2;
      if (uVar10 != 0) {
        uVar1 = 1;
        do {
          if ((uVar8 & uVar1) != 0) {
            uVar7 = uVar7 | *puVar5;
          }
          iVar9 = iVar9 + 1;
          uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
          puVar5 = puVar5 + 1;
        } while ((ulonglong)(longlong)iVar9 < uVar10);
      }
      if (param_5 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = *(uint *)(param_5 + 0x1610);
      }
      uVar1 = (uVar7 | param_2) & uVar1;
      if ((((uVar1 & 0x600) != 0x600) && ((uVar1 & 0x40008000) != 0x40008000)) &&
         (((byte)uVar1 & 0x30) != 0x30)) {
        puVar5 = (uint *)param_3[1];
        if (puVar5 < (uint *)param_3[2]) {
          param_3[1] = (ulonglong)(puVar5 + 1);
          *puVar5 = uVar1;
        }
        else {
          puVar6 = (uint *)*param_3;
          lVar2 = (longlong)puVar5 - (longlong)puVar6 >> 2;
          if (lVar2 == 0) {
            lVar2 = 1;
LAB_1801d7a2f:
            puVar3 = (uint *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 4);
            puVar6 = (uint *)*param_3;
            puVar5 = (uint *)param_3[1];
          }
          else {
            lVar2 = lVar2 * 2;
            if (lVar2 != 0) goto LAB_1801d7a2f;
            puVar3 = (uint *)0x0;
          }
          if (puVar6 != puVar5) {
                    // WARNING: Subroutine does not return
            memmove(puVar3,puVar6,(longlong)puVar5 - (longlong)puVar6);
          }
          *puVar3 = uVar1;
          if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          param_3[2] = (ulonglong)(puVar3 + lVar2);
          *param_3 = (ulonglong)puVar3;
          param_3[1] = (ulonglong)(puVar3 + 1);
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d794b(void)
void FUN_1801d794b(void)

{
  uint uVar1;
  longlong in_RAX;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint64_t unaff_RBX;
  uint unaff_EBP;
  ulonglong *unaff_RSI;
  uint64_t unaff_RDI;
  int iVar7;
  ulonglong uVar8;
  uint in_R10D;
  uint64_t *unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int in_stack_00000060;
  uint in_stack_00000068;
  longlong in_stack_00000080;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  do {
    puVar4 = (uint *)*unaff_R12;
    uVar6 = 0;
    iVar7 = 0;
    uVar8 = unaff_R12[1] - (longlong)puVar4 >> 2;
    if (uVar8 != 0) {
      uVar1 = 1;
      do {
        if ((unaff_EBP & uVar1) != 0) {
          uVar6 = uVar6 | *puVar4;
        }
        iVar7 = iVar7 + 1;
        uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
        puVar4 = puVar4 + 1;
      } while ((ulonglong)(longlong)iVar7 < uVar8);
    }
    if (in_stack_00000080 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *(uint *)(in_stack_00000080 + 0x1610);
    }
    uVar1 = (uVar6 | in_R10D) & uVar1;
    if ((((uVar1 & 0x600) != 0x600) && ((uVar1 & 0x40008000) != 0x40008000)) &&
       (((byte)uVar1 & 0x30) != 0x30)) {
      puVar4 = (uint *)unaff_RSI[1];
      if (puVar4 < (uint *)unaff_RSI[2]) {
        unaff_RSI[1] = (ulonglong)(puVar4 + 1);
        *puVar4 = uVar1;
      }
      else {
        puVar5 = (uint *)*unaff_RSI;
        lVar2 = (longlong)puVar4 - (longlong)puVar5 >> 2;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_1801d7a2f:
          puVar3 = (uint *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 4);
          puVar5 = (uint *)*unaff_RSI;
          puVar4 = (uint *)unaff_RSI[1];
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_1801d7a2f;
          puVar3 = (uint *)0x0;
        }
        if (puVar5 != puVar4) {
                    // WARNING: Subroutine does not return
          memmove(puVar3,puVar5,(longlong)puVar4 - (longlong)puVar5);
        }
        *puVar3 = uVar1;
        if (*unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        unaff_RSI[2] = (ulonglong)(puVar3 + lVar2);
        *unaff_RSI = (ulonglong)puVar3;
        unaff_RSI[1] = (ulonglong)(puVar3 + 1);
        in_R10D = in_stack_00000068;
      }
    }
    unaff_EBP = unaff_EBP + 1;
    if (in_stack_00000060 <= (int)unaff_EBP) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1801d7abe(void)
void FUN_1801d7abe(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d7ad0(uint64_t param_1,ulonglong param_2,ulonglong *param_3,longlong *param_4,
void FUN_1801d7ad0(uint64_t param_1,ulonglong param_2,ulonglong *param_3,longlong *param_4,
                  uint64_t param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  
  puVar8 = (ulonglong *)0x0;
  uVar9 = 1 << ((byte)((longlong)(ulonglong)(uint)((int)param_4[1] - (int)*param_4) >> 3) & 0x1f);
  if (0 < (int)uVar9) {
    uVar12 = (ulonglong)uVar9;
    puVar11 = puVar8;
    do {
      puVar5 = (ulonglong *)*param_4;
      uVar10 = param_4[1] - (longlong)puVar5 >> 3;
      puVar7 = puVar8;
      if (uVar10 != 0) {
        uVar1 = 1;
        puVar6 = puVar8;
        do {
          if ((uVar1 & (ulonglong)puVar11) != 0) {
            puVar7 = (ulonglong *)((ulonglong)puVar7 | *puVar5);
          }
          uVar9 = (int)puVar6 + 1;
          puVar6 = (ulonglong *)(ulonglong)uVar9;
          uVar1 = uVar1 << 1 | (ulonglong)((longlong)uVar1 < 0);
          puVar5 = puVar5 + 1;
        } while ((ulonglong)(longlong)(int)uVar9 < uVar10);
      }
      puVar5 = (ulonglong *)param_3[1];
      if (puVar5 < (ulonglong *)param_3[2]) {
        param_3[1] = (ulonglong)(puVar5 + 1);
        *puVar5 = (ulonglong)puVar7 | param_2;
      }
      else {
        puVar6 = (ulonglong *)*param_3;
        lVar2 = (longlong)puVar5 - (longlong)puVar6 >> 3;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_1801d7bad:
          puVar3 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,(char)param_3[3]);
          puVar6 = (ulonglong *)*param_3;
          puVar5 = (ulonglong *)param_3[1];
        }
        else {
          lVar2 = lVar2 * 2;
          puVar3 = puVar8;
          if (lVar2 != 0) goto LAB_1801d7bad;
        }
        if (puVar6 != puVar5) {
                    // WARNING: Subroutine does not return
          memmove(puVar3,puVar6,(longlong)puVar5 - (longlong)puVar6);
        }
        *puVar3 = (ulonglong)puVar7 | param_2;
        if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        param_3[2] = (ulonglong)(puVar3 + lVar2);
        *param_3 = (ulonglong)puVar3;
        param_3[1] = (ulonglong)(puVar3 + 1);
      }
      puVar11 = (ulonglong *)((longlong)puVar11 + 1);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar12 = FUN_180241250(param_5);
  iVar4 = (int)((longlong)(param_3[1] - *param_3) >> 3);
  if (0 < iVar4) {
    do {
      puVar11 = (ulonglong *)(*param_3 + (longlong)puVar8 * 8);
      *puVar11 = *puVar11 & ~uVar12;
      puVar8 = (ulonglong *)((longlong)puVar8 + 1);
    } while ((longlong)puVar8 < (longlong)iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d7b06(uint64_t param_1,uint64_t param_2,uint param_3,longlong *param_4)
void FUN_1801d7b06(uint64_t param_1,uint64_t param_2,uint param_3,longlong *param_4)

{
  longlong in_RAX;
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint64_t unaff_RBX;
  ulonglong *puVar7;
  ulonglong *unaff_RBP;
  uint64_t unaff_RSI;
  ulonglong *unaff_RDI;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong in_R10;
  uint64_t unaff_R12;
  ulonglong uVar11;
  uint64_t unaff_R13;
  ulonglong uVar12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  ulonglong in_stack_00000068;
  longlong *in_stack_00000078;
  uint64_t in_stack_00000080;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  uVar11 = (ulonglong)unaff_RBP & 0xffffffff;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  uVar12 = (ulonglong)param_3;
  do {
    puVar5 = (ulonglong *)*param_4;
    uVar9 = (ulonglong)unaff_RBP & 0xffffffff;
    uVar10 = param_4[1] - (longlong)puVar5 >> 3;
    puVar7 = unaff_RBP;
    if (uVar10 != 0) {
      uVar1 = 1;
      do {
        if ((uVar1 & uVar11) != 0) {
          puVar7 = (ulonglong *)((ulonglong)puVar7 | *puVar5);
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar1 = uVar1 << 1 | (ulonglong)((longlong)uVar1 < 0);
        puVar5 = puVar5 + 1;
      } while ((ulonglong)(longlong)(int)uVar8 < uVar10);
    }
    puVar5 = (ulonglong *)unaff_RDI[1];
    if (puVar5 < (ulonglong *)unaff_RDI[2]) {
      unaff_RDI[1] = (ulonglong)(puVar5 + 1);
      *puVar5 = (ulonglong)puVar7 | in_R10;
    }
    else {
      puVar6 = (ulonglong *)*unaff_RDI;
      lVar2 = (longlong)puVar5 - (longlong)puVar6 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_1801d7bad:
        puVar3 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,(char)unaff_RDI[3]);
        puVar6 = (ulonglong *)*unaff_RDI;
        puVar5 = (ulonglong *)unaff_RDI[1];
      }
      else {
        lVar2 = lVar2 * 2;
        puVar3 = unaff_RBP;
        if (lVar2 != 0) goto LAB_1801d7bad;
      }
      if (puVar6 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar3,puVar6,(longlong)puVar5 - (longlong)puVar6);
      }
      *puVar3 = (ulonglong)puVar7 | in_R10;
      if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      unaff_RDI[2] = (ulonglong)(puVar3 + lVar2);
      *unaff_RDI = (ulonglong)puVar3;
      unaff_RDI[1] = (ulonglong)(puVar3 + 1);
      in_R10 = in_stack_00000068;
    }
    uVar11 = uVar11 + 1;
    uVar12 = uVar12 - 1;
    param_4 = in_stack_00000078;
    if (uVar12 == 0) {
      uVar11 = FUN_180241250(in_stack_00000080);
      iVar4 = (int)((longlong)(unaff_RDI[1] - *unaff_RDI) >> 3);
      if (0 < iVar4) {
        do {
          puVar5 = (ulonglong *)(*unaff_RDI + (longlong)unaff_RBP * 8);
          *puVar5 = *puVar5 & ~uVar11;
          unaff_RBP = (ulonglong *)((longlong)unaff_RBP + 1);
        } while ((longlong)unaff_RBP < (longlong)iVar4);
      }
      return;
    }
  } while( true );
}






// 函数: void FUN_1801d7c48(void)
void FUN_1801d7c48(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  uint64_t in_stack_00000080;
  
  uVar2 = FUN_180241250(in_stack_00000080);
  iVar3 = (int)(unaff_RDI[1] - *unaff_RDI >> 3);
  if (0 < iVar3) {
    do {
      puVar1 = (ulonglong *)(*unaff_RDI + unaff_RBP * 8);
      *puVar1 = *puVar1 & ~uVar2;
      unaff_RBP = unaff_RBP + 1;
    } while (unaff_RBP < iVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d7c90(uint64_t param_1,ulonglong param_2,ulonglong param_3,ulonglong *param_4,
void FUN_1801d7c90(uint64_t param_1,ulonglong param_2,ulonglong param_3,ulonglong *param_4,
                  longlong *param_5,char param_6)

{
  uint64_t uVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  char cVar6;
  ulonglong uVar7;
  void **ppuVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong **ppuVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  void *puVar19;
  uint uVar20;
  ulonglong *puVar21;
  int8_t auStack_358 [32];
  longlong lStack_338;
  ulonglong uStack_330;
  void **ppuStack_328;
  uint uStack_320;
  ulonglong uStack_318;
  ulonglong *puStack_310;
  uint64_t uStack_308;
  void *puStack_300;
  uint *puStack_2f8;
  int32_t uStack_2f0;
  uint auStack_2e8 [2];
  code *pcStack_2e0;
  char cStack_2d8;
  void *puStack_2c8;
  int8_t *puStack_2c0;
  int32_t uStack_2b8;
  int8_t auStack_2b0 [72];
  ulonglong *puStack_268;
  ulonglong *puStack_260;
  ulonglong *puStack_258;
  ulonglong auStack_250 [64];
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_308 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_358;
  lStack_338 = *(longlong *)(param_2 + 0x1e0);
  ppuVar13 = &puStack_268;
  lVar15 = 4;
  puVar17 = auStack_250;
  do {
    puVar9 = ppuVar13[1];
    *puVar17 = (ulonglong)*ppuVar13;
    puVar17[1] = (ulonglong)puVar9;
    puVar9 = ppuVar13[3];
    puVar17[2] = (ulonglong)ppuVar13[2];
    puVar17[3] = (ulonglong)puVar9;
    puVar9 = ppuVar13[5];
    puVar17[4] = (ulonglong)ppuVar13[4];
    puVar17[5] = (ulonglong)puVar9;
    puVar9 = ppuVar13[7];
    puVar17[6] = (ulonglong)ppuVar13[6];
    puVar17[7] = (ulonglong)puVar9;
    puVar9 = ppuVar13[9];
    puVar17[8] = (ulonglong)ppuVar13[8];
    puVar17[9] = (ulonglong)puVar9;
    puVar9 = ppuVar13[0xb];
    puVar17[10] = (ulonglong)ppuVar13[10];
    puVar17[0xb] = (ulonglong)puVar9;
    uVar3 = *(int32_t *)((longlong)ppuVar13 + 100);
    uVar4 = *(int32_t *)(ppuVar13 + 0xd);
    uVar5 = *(int32_t *)((longlong)ppuVar13 + 0x6c);
    *(int32_t *)(puVar17 + 0xc) = *(int32_t *)(ppuVar13 + 0xc);
    *(int32_t *)((longlong)puVar17 + 100) = uVar3;
    *(int32_t *)(puVar17 + 0xd) = uVar4;
    *(int32_t *)((longlong)puVar17 + 0x6c) = uVar5;
    puVar9 = ppuVar13[0xf];
    puVar17[0xe] = (ulonglong)ppuVar13[0xe];
    puVar17[0xf] = (ulonglong)puVar9;
    ppuVar13 = ppuVar13 + 0x10;
    lVar15 = lVar15 + -1;
    puVar17 = puVar17 + 0x10;
  } while (lVar15 != 0);
  uStack_50 = 0x200;
  puStack_268 = auStack_250;
  puStack_260 = auStack_250;
  puStack_258 = &uStack_50;
  puVar17 = (ulonglong *)0x0;
  lVar15 = *param_5;
  lVar14 = param_5[1] - lVar15;
  lVar2 = lVar14 >> 0x3f;
  uStack_330 = param_2;
  uStack_318 = param_3;
  puStack_310 = param_4;
  if (param_6 == '\0') {
    puVar9 = puVar17;
    if (lVar14 / 0x30 + lVar2 != lVar2) {
      do {
        lVar15 = lVar15 + (longlong)puVar17;
        ppuVar8 = (void **)FUN_180240430(lStack_338,lVar15,0);
        ppuStack_328 = ppuVar8;
        if ((ppuVar8 != (void **)0x0) &&
           (cVar6 = (**(code **)(lVar15 + 0x20))(param_2), cVar6 != '\0')) {
          if (*(char *)(lVar15 + 0x28) == '\0') {
            FUN_1801e7a90(&puStack_268,&ppuStack_328);
          }
          else {
            uStack_318 = uStack_318 | (ulonglong)ppuVar8;
          }
        }
        uVar20 = (int)puVar9 + 1;
        puVar17 = puVar17 + 6;
        lVar15 = *param_5;
        puVar9 = (ulonglong *)(ulonglong)uVar20;
        param_4 = puStack_310;
      } while ((ulonglong)(longlong)(int)uVar20 < (ulonglong)((param_5[1] - lVar15) / 0x30));
    }
  }
  else {
    puVar9 = puVar17;
    puVar21 = puVar17;
    if (lVar14 / 0x30 + lVar2 != lVar2) {
      do {
        lVar15 = lVar15 + (longlong)puVar9;
        FUN_180627ae0(&puStack_300,lVar15);
        pcStack_2e0 = *(code **)(lVar15 + 0x20);
        cStack_2d8 = *(char *)(lVar15 + 0x28);
        uVar7 = FUN_180240430(lStack_338,&puStack_300,0);
        if (((uVar7 != 0) && (cVar6 = (*pcStack_2e0)(param_2), cVar6 != '\0')) &&
           (cStack_2d8 != '\0')) {
          uStack_318 = uStack_318 | uVar7;
        }
        ppuStack_328 = &puStack_300;
        puStack_300 = &unknown_var_3456_ptr;
        if (puStack_2f8 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_2f8 = (uint *)0x0;
        auStack_2e8[0] = 0;
        puStack_300 = &unknown_var_720_ptr;
        uVar20 = (int)puVar21 + 1;
        lVar15 = *param_5;
        puVar9 = puVar9 + 6;
        puVar21 = (ulonglong *)(ulonglong)uVar20;
      } while ((ulonglong)(longlong)(int)uVar20 < (ulonglong)((param_5[1] - lVar15) / 0x30));
    }
    param_4 = puStack_310;
    lVar15 = lStack_338;
    ppuVar8 = (void **)FUN_180240a60(lStack_338);
    uStack_320 = 0;
    puVar19 = *ppuVar8;
    puVar9 = puVar17;
    puVar21 = puVar17;
    ppuStack_328 = ppuVar8;
    if (((longlong)ppuVar8[1] - (longlong)puVar19) / 0x60 != 0) {
      do {
        uVar20 = (uint)puVar9;
        uVar7 = FUN_180240430(lVar15,puVar19 + (longlong)puVar21 * 0x60,0);
        if (uVar7 != 0) {
          if (puStack_260 < puStack_258) {
            *puStack_260 = uVar7;
            puVar9 = puStack_260;
          }
          else {
            lVar15 = (longlong)puStack_260 - (longlong)puStack_268 >> 3;
            if (lVar15 == 0) {
              lVar15 = 1;
LAB_1801d7f36:
              puVar9 = (ulonglong *)((longlong)auStack_250 + uStack_50);
              uStack_50 = uStack_50 + lVar15 * 8;
            }
            else {
              lVar15 = lVar15 * 2;
              puVar9 = puVar17;
              if (lVar15 != 0) goto LAB_1801d7f36;
            }
            if (puStack_268 != puStack_260) {
                    // WARNING: Subroutine does not return
              memmove(puVar9,puStack_268);
            }
            *puVar9 = uVar7;
            puStack_258 = puVar9 + lVar15;
            ppuVar8 = ppuStack_328;
            uVar20 = uStack_320;
            puStack_268 = puVar9;
          }
          puStack_260 = puVar9 + 1;
          lVar15 = lStack_338;
        }
        uStack_320 = uVar20 + 1;
        puVar19 = *ppuVar8;
        puVar9 = (ulonglong *)(ulonglong)uStack_320;
        puVar21 = (ulonglong *)(longlong)(int)uStack_320;
        param_4 = puStack_310;
      } while ((ulonglong *)(longlong)(int)uStack_320 <
               (ulonglong *)(((longlong)ppuVar8[1] - (longlong)puVar19) / 0x60));
    }
  }
  lVar15 = lStack_338;
  puVar17 = (ulonglong *)0x0;
  uVar7 = *(ulonglong *)(lStack_338 + 0x1608);
  if (uVar7 == 0xffffffffffffffff) {
    FUN_180240b30(lStack_338);
    uVar7 = *(ulonglong *)(lVar15 + 0x1608);
  }
  uVar10 = uStack_330;
  if (uVar7 == 0) goto LAB_1801d8153;
  if (puStack_260 < puStack_258) {
    *puStack_260 = uVar7;
    puStack_260 = puStack_260 + 1;
    goto LAB_1801d8153;
  }
  lVar15 = (longlong)puStack_260 - (longlong)puStack_268 >> 3;
  if (lVar15 == 0) {
    lVar15 = 1;
LAB_1801d80f9:
    puVar9 = (ulonglong *)((longlong)auStack_250 + uStack_50);
    uStack_50 = uStack_50 + lVar15 * 8;
  }
  else {
    lVar15 = lVar15 * 2;
    puVar9 = puVar17;
    if (lVar15 != 0) goto LAB_1801d80f9;
  }
  if (puStack_268 != puStack_260) {
                    // WARNING: Subroutine does not return
    memmove(puVar9,puStack_268);
  }
  *puVar9 = uVar7;
  puStack_260 = puVar9 + 1;
  puStack_258 = puVar9 + lVar15;
  puStack_268 = puVar9;
LAB_1801d8153:
  uVar20 = 1 << ((byte)((longlong)puStack_260 - (longlong)puStack_268 >> 3) & 0x1f);
  uVar1 = *(uint64_t *)(uStack_330 + 0x1e0);
  puStack_300 = &unknown_var_672_ptr;
  puStack_2f8 = auStack_2e8;
  auStack_2e8[0] = auStack_2e8[0] & 0xffffff00;
  uStack_2f0 = 0x14;
  strcpy_s(auStack_2e8,0x20,&system_data_d5b8);
  ppuVar8 = (void **)FUN_180240430(uVar1,&puStack_300,0);
  puStack_300 = &unknown_var_720_ptr;
  uVar1 = *(uint64_t *)(uVar10 + 0x1e0);
  puStack_2c8 = &unknown_var_3480_ptr;
  puStack_2c0 = auStack_2b0;
  auStack_2b0[0] = 0;
  uStack_2b8 = 0x25;
  ppuStack_328 = ppuVar8;
  strcpy_s(auStack_2b0,0x40,&system_data_d5d0);
  puVar9 = (ulonglong *)FUN_180240430(uVar1,&puStack_2c8,0);
  puStack_2c8 = &unknown_var_720_ptr;
  puStack_310 = puVar9;
  if (0 < (int)uVar20) {
    uStack_330 = (ulonglong)uVar20;
    puVar21 = puVar17;
    do {
      uVar7 = (longlong)puStack_260 - (longlong)puStack_268 >> 3;
      puVar16 = puVar17;
      if (uVar7 != 0) {
        uVar10 = 1;
        puVar11 = puStack_268;
        puVar18 = puVar17;
        do {
          if (((ulonglong)puVar21 & uVar10) != 0) {
            puVar16 = (ulonglong *)((ulonglong)puVar16 | *puVar11);
          }
          uVar20 = (int)puVar18 + 1;
          puVar18 = (ulonglong *)(ulonglong)uVar20;
          uVar10 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
          puVar11 = puVar11 + 1;
        } while ((ulonglong)(longlong)(int)uVar20 < uVar7);
      }
      if (((ulonglong)ppuVar8 & (ulonglong)puVar16) == 0 ||
          ((ulonglong)puVar9 & (ulonglong)puVar16) == 0) {
        uVar7 = (ulonglong)puVar16 | uStack_318;
        puVar16 = (ulonglong *)param_4[1];
        if (puVar16 < (ulonglong *)param_4[2]) {
          param_4[1] = (ulonglong)(puVar16 + 1);
          *puVar16 = uVar7;
        }
        else {
          puVar9 = (ulonglong *)*param_4;
          lVar15 = (longlong)puVar16 - (longlong)puVar9 >> 3;
          if (lVar15 == 0) {
            lVar15 = 1;
LAB_1801d82f3:
            puVar11 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,lVar15 * 8,(char)param_4[3]);
            puVar16 = (ulonglong *)param_4[1];
            puVar9 = (ulonglong *)*param_4;
          }
          else {
            lVar15 = lVar15 * 2;
            puVar11 = puVar17;
            if (lVar15 != 0) goto LAB_1801d82f3;
          }
          if (puVar9 != puVar16) {
                    // WARNING: Subroutine does not return
            memmove(puVar11,puVar9,(longlong)puVar16 - (longlong)puVar9);
          }
          *puVar11 = uVar7;
          if (*param_4 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *param_4 = (ulonglong)puVar11;
          param_4[1] = (ulonglong)(puVar11 + 1);
          param_4[2] = (ulonglong)(puVar11 + lVar15);
          puVar9 = puStack_310;
          ppuVar8 = ppuStack_328;
        }
      }
      puVar21 = (ulonglong *)((longlong)puVar21 + 1);
      uStack_330 = uStack_330 - 1;
    } while (uStack_330 != 0);
  }
  uVar7 = FUN_180241250(lStack_338);
  iVar12 = (int)((longlong)(param_4[1] - *param_4) >> 3);
  if (0 < iVar12) {
    do {
      puVar9 = (ulonglong *)(*param_4 + (longlong)puVar17 * 8);
      *puVar9 = *puVar9 & ~uVar7;
      puVar17 = (ulonglong *)((longlong)puVar17 + 1);
    } while ((longlong)puVar17 < (longlong)iVar12);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_358);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




