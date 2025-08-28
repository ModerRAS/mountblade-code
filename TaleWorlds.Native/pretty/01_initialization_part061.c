#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part061.c - 11 个函数

// 函数: void FUN_18007f176(void)
void FUN_18007f176(void)

{
  int *piVar1;
  longlong lVar2;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int *piVar3;
  longlong lVar4;
  longlong unaff_R14;
  longlong lVar5;
  
  lVar5 = -8 - unaff_RBP;
  lVar4 = (unaff_R14 - 4U >> 2) + 1;
  lVar2 = lVar4 * 4;
  piVar3 = (int *)(unaff_RBP + 8);
  do {
    piVar1 = piVar3 + 8;
    *(float *)((longlong)piVar3 + **(longlong **)(unaff_RDI + 0x2d0) + lVar5) = (float)piVar3[-2];
    *(int *)((longlong)piVar3 + **(longlong **)(unaff_RDI + 0x2d0) + 4 + lVar5) = piVar3[-1];
    *(float *)((longlong)piVar3 + **(longlong **)(unaff_RDI + 0x2d0) + 8 + lVar5) = (float)*piVar3;
    *(int *)((longlong)piVar3 + **(longlong **)(unaff_RDI + 0x2d0) + 0xc + lVar5) = piVar3[1];
    *(float *)((**(longlong **)(unaff_RDI + 0x2d0) - unaff_RBP) + -0x18 + (longlong)piVar1) =
         (float)piVar3[2];
    *(int *)((longlong)piVar3 + **(longlong **)(unaff_RDI + 0x2d0) + 0x14 + lVar5) = piVar3[3];
    *(float *)((**(longlong **)(unaff_RDI + 0x2d0) - unaff_RBP) + -0x10 + (longlong)piVar1) =
         (float)piVar3[4];
    *(int *)((longlong)piVar3 + **(longlong **)(unaff_RDI + 0x2d0) + 0x1c + lVar5) = piVar3[5];
    lVar4 = lVar4 + -1;
    piVar3 = piVar1;
  } while (lVar4 != 0);
  for (; lVar2 < unaff_R14; lVar2 = lVar2 + 1) {
    *(float *)(**(longlong **)(unaff_RDI + 0x2d0) + lVar2 * 8) =
         (float)*(int *)(unaff_RBP + lVar2 * 8);
    *(int32_t *)(**(longlong **)(unaff_RDI + 0x2d0) + 4 + lVar2 * 8) =
         *(int32_t *)(unaff_RBP + 4 + lVar2 * 8);
  }
  *(int *)(*(longlong *)(unaff_RDI + 0x2d0) + 8) = (int)unaff_R14;
  return;
}





// 函数: void FUN_18007f27a(void)
void FUN_18007f27a(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  if (unaff_RBX < unaff_R14) {
    do {
      *(float *)(**(longlong **)(unaff_RDI + 0x2d0) + unaff_RBX * 8) =
           (float)*(int *)(unaff_RBP + unaff_RBX * 8);
      *(int32_t *)(**(longlong **)(unaff_RDI + 0x2d0) + 4 + unaff_RBX * 8) =
           *(int32_t *)(unaff_RBP + 4 + unaff_RBX * 8);
      unaff_RBX = unaff_RBX + 1;
    } while (unaff_RBX < unaff_R14);
  }
  *(int *)(*(longlong *)(unaff_RDI + 0x2d0) + 8) = (int)unaff_R14;
  return;
}





// 函数: void FUN_18007f2cf(void)
void FUN_18007f2cf(void)

{
  longlong unaff_RDI;
  int32_t unaff_R14D;
  
  *(int32_t *)(*(longlong *)(unaff_RDI + 0x2d0) + 8) = unaff_R14D;
  return;
}



uint64_t * FUN_18007f2f0(uint64_t *param_1)

{
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_6648_ptr;
  param_1[2] = 0;
  param_1[3] = 0;
  *(int8_t *)(param_1 + 6) = 3;
  param_1[7] = 0;
  param_1[8] = 0;
  *(int8_t *)(param_1 + 0xb) = 3;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(int8_t *)(param_1 + 0x10) = 3;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(int8_t *)(param_1 + 0x15) = 3;
  *(int16_t *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(int8_t *)(param_1 + 0x1d) = 3;
  *(int8_t *)(param_1 + 6) = 0xf;
  *(int8_t *)(param_1 + 0xb) = 0xf;
  *(int8_t *)(param_1 + 0x10) = 0xf;
  *(int8_t *)(param_1 + 0x15) = 0xf;
  *(int8_t *)(param_1 + 0x1d) = 0xf;
  return param_1;
}



uint64_t * FUN_18007f3b0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_6648_ptr;
  if (param_1[0x1a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180085530(param_1[0x16]);
  param_1[0x16] = 0;
  if (param_1[0x17] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x17] = 0;
  if (param_1[0x12] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[3] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xf0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007f4c0(int8_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18007f4c0(int8_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int32_t uVar6;
  longlong lVar7;
  void *puVar8;
  bool bVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  bVar9 = false;
  if ((*(byte *)(*(longlong *)(param_1 + 8) + 0xfd) & 0x20) != 0) {
    FUN_18007baa0();
    lVar7 = 0;
    do {
      cVar4 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1e0) + 0x15 + lVar7 * 0x18);
      if (cVar4 == '\x01') {
        Sleep(0);
        bVar9 = true;
      }
      lVar1 = lVar7 + 1;
      lVar7 = 0;
      if (cVar4 != '\x01') {
        lVar7 = lVar1;
      }
    } while (lVar7 < 0x10);
    if ((bVar9) &&
       ((lVar7 = *(longlong *)(param_1 + 8), *(char *)(lVar7 + 0xfa) == '\0' ||
        (*(char *)(lVar7 + 0xfb) == '\0')))) {
      puVar8 = &system_buffer_ptr;
      if (*(void **)(lVar7 + 0x18) != (void *)0x0) {
        puVar8 = *(void **)(lVar7 + 0x18);
      }
                    // WARNING: Subroutine does not return
      FUN_180062300(system_message_context,&unknown_var_5720_ptr,puVar8,param_4,uVar10);
    }
  }
  lVar7 = *(longlong *)(param_1 + 8);
  while( true ) {
    LOCK();
    cVar4 = *(char *)(lVar7 + 0xec);
    bVar9 = cVar4 == '\0';
    if (bVar9) {
      *(char *)(lVar7 + 0xec) = '\x01';
      cVar4 = '\0';
    }
    UNLOCK();
    if (bVar9) break;
    iVar5 = _Thrd_id();
    if (*(int *)(lVar7 + 0xf0) == iVar5) goto LAB_18007f5cb;
    Sleep();
  }
  cVar4 = '\0';
LAB_18007f5cb:
  uVar6 = _Thrd_id();
  *(int32_t *)(lVar7 + 0xf0) = uVar6;
  if (cVar4 == '\0') {
    *param_1 = 1;
  }
  while (*(int *)(lVar7 + 0xe8) != 0) {
    Sleep(0);
  }
  if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
    FUN_18007eb80(*(uint64_t *)(param_1 + 8),(byte)(*(uint *)(param_1 + 0x10) >> 2) & 1);
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x210);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  *(longlong **)(param_1 + 0x18) = plVar2;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  return;
}





// 函数: void FUN_18007f660(longlong param_1)
void FUN_18007f660(longlong param_1)

{
  FUN_18007f6a0();
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
  }
  return;
}





// 函数: void FUN_18007f6a0(char *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18007f6a0(char *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plVar3 = *(longlong **)(lVar1 + 0x210);
    *(longlong **)(lVar1 + 0x210) = plVar2;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    lVar1 = *(longlong *)(param_1 + 8);
    if (*param_1 != '\0') {
      lVar4 = lVar1;
      if ((param_1[0x10] & 2U) == 0) {
        FUN_180079520(lVar1);
        FUN_180079520(*(uint64_t *)(param_1 + 8));
        lVar4 = *(longlong *)(param_1 + 8);
      }
      FUN_18007edd0(lVar4,1,param_3,param_4,uVar5);
      *(int32_t *)(lVar1 + 0xf0) = 0;
      LOCK();
      *(int8_t *)(lVar1 + 0xec) = 0;
      UNLOCK();
    }
  }
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  plVar2 = *(longlong **)(param_1 + 0x18);
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return;
}





// 函数: void FUN_18007f770(longlong *param_1)
void FUN_18007f770(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  lVar1 = *param_1;
  iVar3 = _Thrd_id();
  while( true ) {
    LOCK();
    cVar2 = *(char *)(lVar1 + 0xec);
    bVar4 = cVar2 == '\0';
    if (bVar4) {
      *(char *)(lVar1 + 0xec) = '\x01';
      cVar2 = '\0';
    }
    UNLOCK();
    if (bVar4) break;
    if (*(int *)(lVar1 + 0xf0) == iVar3) goto LAB_18007f7cf;
    Sleep(0);
  }
  cVar2 = '\0';
LAB_18007f7cf:
  LOCK();
  *(int *)(lVar1 + 0xe8) = *(int *)(lVar1 + 0xe8) + 1;
  UNLOCK();
  if ((*(uint *)(param_1 + 1) & 1) == 0) {
    FUN_18007eb80(*param_1,(byte)(*(uint *)(param_1 + 1) >> 2) & 1);
  }
  if (cVar2 == '\0') {
    LOCK();
    *(int8_t *)(lVar1 + 0xec) = 0;
    UNLOCK();
  }
  param_1[2] = *(longlong *)(*param_1 + 0x210);
  return;
}





// 函数: void FUN_18007f820(void)
void FUN_18007f820(void)

{
  FUN_18007f840();
  return;
}





// 函数: void FUN_18007f840(longlong *param_1)
void FUN_18007f840(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    while( true ) {
      LOCK();
      cVar3 = *(char *)(lVar2 + 0xec);
      bVar5 = cVar3 == '\0';
      if (bVar5) {
        *(char *)(lVar2 + 0xec) = '\x01';
        cVar3 = '\0';
      }
      UNLOCK();
      if (bVar5) break;
      iVar4 = _Thrd_id();
      if ((*(int *)(lVar2 + 0xf0) == iVar4) || (*(int *)(lVar2 + 0xf0) != 0)) goto LAB_18007f89f;
      Sleep();
    }
    cVar3 = '\0';
LAB_18007f89f:
    LOCK();
    piVar1 = (int *)(lVar2 + 0xe8);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (cVar3 == '\0') {
      if (iVar4 == 1) {
        FUN_18007edd0(*param_1,0);
      }
      LOCK();
      *(int8_t *)(lVar2 + 0xec) = 0;
      UNLOCK();
    }
    *param_1 = 0;
  }
  return;
}



uint FUN_18007f859(void)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong unaff_RBX;
  uint64_t *unaff_RSI;
  bool bVar6;
  
  while( true ) {
    LOCK();
    cVar3 = *(char *)(unaff_RBX + 0xec);
    bVar6 = cVar3 == '\0';
    if (bVar6) {
      *(char *)(unaff_RBX + 0xec) = '\x01';
      cVar3 = '\0';
    }
    UNLOCK();
    if (bVar6) break;
    iVar4 = _Thrd_id();
    if ((*(int *)(unaff_RBX + 0xf0) == iVar4) || (*(int *)(unaff_RBX + 0xf0) != 0))
    goto LAB_18007f89f;
    Sleep();
  }
  cVar3 = '\0';
LAB_18007f89f:
  LOCK();
  puVar1 = (uint *)(unaff_RBX + 0xe8);
  uVar5 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (cVar3 == '\0') {
    if (uVar5 == 1) {
      FUN_18007edd0(*unaff_RSI,0);
    }
    LOCK();
    bVar2 = *(byte *)(unaff_RBX + 0xec);
    *(byte *)(unaff_RBX + 0xec) = 0;
    uVar5 = (uint)bVar2;
    UNLOCK();
  }
  *unaff_RSI = 0;
  return uVar5;
}



int8_t FUN_18007f8bb(void)

{
  int8_t uVar1;
  int in_EAX;
  longlong unaff_RBX;
  uint64_t *unaff_RSI;
  
  if (in_EAX == 1) {
    FUN_18007edd0(*unaff_RSI,0);
  }
  LOCK();
  uVar1 = *(int8_t *)(unaff_RBX + 0xec);
  *(int8_t *)(unaff_RBX + 0xec) = 0;
  UNLOCK();
  *unaff_RSI = 0;
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007f8f0(longlong param_1)
void FUN_18007f8f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  char cVar4;
  int32_t uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int32_t *puVar19;
  uint *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  
  if (*(int *)(param_1 + 0x28) != *(int *)(system_main_module_state + 0x224)) {
    iVar15 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x28) = *(int *)(system_main_module_state + 0x224);
    if (0 < iVar15) {
      lVar11 = (longlong)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28;
      uVar5 = FUN_180080380(lVar11,iVar15);
      *(int32_t *)(param_1 + 0x30) = uVar5;
      FUN_1800802e0(lVar11,uVar5);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        if (*(int *)(param_1 + 0x18) != 0) {
          *(int32_t *)(param_1 + 0x2c) = *(int32_t *)(param_1 + 0x30);
          return;
        }
      }
      else {
        cVar4 = *(char *)(param_1 + 0x44);
        uVar12 = (ulonglong)cVar4;
        plVar1 = (longlong *)(param_1 + 0x38);
        iVar15 = (int)cVar4;
        if (*(int *)(param_1 + 0x40) == (int)cVar4) {
          plVar7 = (longlong *)*plVar1;
        }
        else {
          *(int *)(param_1 + 0x40) = iVar15;
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *plVar1 = 0;
          if (cVar4 == '\0') {
            plVar7 = (longlong *)0x0;
            *plVar1 = 0;
          }
          else {
            plVar7 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,(longlong)cVar4 * 4);
            *plVar1 = (longlong)plVar7;
          }
        }
        if (plVar7 != (longlong *)0x0) {
          iVar17 = 0;
          uVar16 = (uint)cVar4;
          iVar18 = iVar17;
          if ((0 < iVar15) && (0xf < uVar16)) {
            iVar10 = *(int *)(param_1 + 0x2c);
            plVar2 = (longlong *)((longlong)plVar7 + (longlong)(cVar4 + -1) * 4);
            if ((((longlong *)(param_1 + 0x2c) < plVar7) || (plVar2 < (longlong *)(param_1 + 0x2c)))
               && ((plVar1 < plVar7 || (iVar18 = 0, plVar2 < plVar1)))) {
              uVar6 = uVar16 & 0x8000000f;
              if ((int)uVar6 < 0) {
                uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
              }
              plVar7 = plVar7 + 4;
              iVar9 = 8;
              do {
                *(int *)(plVar7 + -4) = iVar17 + iVar10;
                *(int *)((longlong)plVar7 + -0x1c) = iVar17 + 1 + iVar10;
                *(int *)(plVar7 + -3) = iVar17 + 2 + iVar10;
                *(int *)((longlong)plVar7 + -0x14) = iVar17 + 3 + iVar10;
                iVar17 = iVar17 + 0x10;
                *(int *)(plVar7 + -2) = iVar9 + -4 + iVar10;
                *(int *)((longlong)plVar7 + -0xc) = iVar9 + -3 + iVar10;
                *(int *)(plVar7 + -1) = iVar9 + -2 + iVar10;
                *(int *)((longlong)plVar7 + -4) = iVar9 + -1 + iVar10;
                *(int *)plVar7 = iVar9 + iVar10;
                *(int *)((longlong)plVar7 + 4) = iVar9 + 1 + iVar10;
                *(int *)(plVar7 + 1) = iVar9 + 2 + iVar10;
                *(int *)((longlong)plVar7 + 0xc) = iVar9 + 3 + iVar10;
                *(int *)(plVar7 + 2) = iVar9 + 4 + iVar10;
                *(int *)((longlong)plVar7 + 0x14) = iVar9 + 5 + iVar10;
                *(int *)(plVar7 + 3) = iVar9 + 6 + iVar10;
                *(int *)((longlong)plVar7 + 0x1c) = iVar9 + 7 + iVar10;
                plVar7 = plVar7 + 8;
                iVar9 = iVar9 + 0x10;
                iVar18 = iVar17;
              } while (iVar17 < (int)(uVar16 - uVar6));
            }
          }
          for (lVar11 = (longlong)iVar18; lVar11 < (longlong)uVar12; lVar11 = lVar11 + 1) {
            iVar17 = *(int *)(param_1 + 0x2c) + iVar18;
            iVar18 = iVar18 + 1;
            *(int *)(*plVar1 + lVar11 * 4) = iVar17;
          }
          iVar18 = *(int *)(param_1 + 0x18);
          iVar17 = 0;
          if (0 < (longlong)iVar18) {
            lVar11 = 0;
            do {
              iVar10 = *(int *)(param_1 + 0x30) + iVar17;
              iVar17 = iVar17 + 1;
              pbVar3 = (byte *)(*(longlong *)(param_1 + 0x10) + lVar11);
              lVar11 = lVar11 + 1;
              *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar10;
            } while (lVar11 < iVar18);
          }
        }
        puVar14 = (uint *)((longlong)*(int *)(system_parameter_buffer + 0xc20) * 0x128 +
                          system_parameter_buffer + 0x9d0);
        if (iVar15 == 0) {
          uVar16 = (int)cVar4 - 1;
        }
        else {
          LOCK();
          uVar16 = *puVar14;
          *puVar14 = *puVar14 + (int)cVar4;
          UNLOCK();
          uVar21 = (ulonglong)(uVar16 >> 0xb);
          uVar22 = (ulonglong)(cVar4 + -1 + uVar16 >> 0xb);
          if (uVar21 <= uVar22) {
            pcVar13 = (char *)((longlong)puVar14 + uVar21 + 0x108);
            lVar11 = (uVar22 - uVar21) + 1;
            puVar20 = puVar14 + uVar21 * 2 + 2;
            do {
              iVar18 = (int)uVar21;
              if (*(longlong *)puVar20 == 0) {
                lVar8 = FUN_18062b420(system_memory_pool_ptr,0x2000,0x25);
                LOCK();
                bVar23 = *(longlong *)(puVar14 + (longlong)iVar18 * 2 + 2) == 0;
                if (bVar23) {
                  *(longlong *)(puVar14 + (longlong)iVar18 * 2 + 2) = lVar8;
                }
                UNLOCK();
                if (bVar23) {
                  LOCK();
                  *(int8_t *)((longlong)iVar18 + 0x108 + (longlong)puVar14) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  do {
                  } while (*pcVar13 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar13 != '\0');
              }
              uVar21 = (ulonglong)(iVar18 + 1);
              puVar20 = puVar20 + 2;
              pcVar13 = pcVar13 + 1;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
        }
        puVar19 = *(int32_t **)(param_1 + 0x38);
        uVar6 = uVar16 >> 0xb;
        *(uint *)(param_1 + 0x2c) = uVar16;
        if (uVar6 == (int)cVar4 + uVar16 >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(puVar14 + (ulonglong)uVar6 * 2 + 2) +
                 (ulonglong)(uVar16 + uVar6 * -0x800) * 4,puVar19,(uVar12 & 0xffffffff) << 2);
        }
        if (iVar15 != 0) {
          uVar12 = uVar12 & 0xffffffff;
          do {
            uVar5 = *puVar19;
            puVar19 = puVar19 + 1;
            *(int32_t *)
             (*(longlong *)(puVar14 + (ulonglong)(uVar16 >> 0xb) * 2 + 2) +
             (ulonglong)(uVar16 + (uVar16 >> 0xb) * -0x800) * 4) = uVar5;
            uVar12 = uVar12 - 1;
            uVar16 = uVar16 + 1;
          } while (uVar12 != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007f90f(int32_t param_1)
void FUN_18007f90f(int32_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  char cVar4;
  int32_t uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  longlong unaff_RDI;
  int iVar17;
  int iVar18;
  int32_t *puVar19;
  uint *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  
  iVar15 = *(int *)(unaff_RDI + 0x1c) + *(int *)(unaff_RDI + 0x18);
  *(int32_t *)(unaff_RDI + 0x28) = param_1;
  if (0 < iVar15) {
    lVar11 = (longlong)*(int *)(system_parameter_buffer + 0xe78) * 0x128 + system_parameter_buffer + 0xc28;
    uVar5 = FUN_180080380(lVar11,iVar15);
    *(int32_t *)(unaff_RDI + 0x30) = uVar5;
    FUN_1800802e0(lVar11,uVar5);
    if (*(longlong *)(unaff_RDI + 0x10) == 0) {
      if (*(int *)(unaff_RDI + 0x18) != 0) {
        *(int32_t *)(unaff_RDI + 0x2c) = *(int32_t *)(unaff_RDI + 0x30);
        return;
      }
    }
    else {
      cVar4 = *(char *)(unaff_RDI + 0x44);
      uVar12 = (ulonglong)cVar4;
      plVar1 = (longlong *)(unaff_RDI + 0x38);
      iVar15 = (int)cVar4;
      if (*(int *)(unaff_RDI + 0x40) == (int)cVar4) {
        plVar7 = (longlong *)*plVar1;
      }
      else {
        *(int *)(unaff_RDI + 0x40) = iVar15;
        if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *plVar1 = 0;
        if (cVar4 == '\0') {
          plVar7 = (longlong *)0x0;
          *plVar1 = 0;
        }
        else {
          plVar7 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,(longlong)cVar4 * 4);
          *plVar1 = (longlong)plVar7;
        }
      }
      if (plVar7 != (longlong *)0x0) {
        iVar17 = 0;
        uVar16 = (uint)cVar4;
        iVar18 = iVar17;
        if ((0 < iVar15) && (0xf < uVar16)) {
          iVar10 = *(int *)(unaff_RDI + 0x2c);
          plVar2 = (longlong *)((longlong)plVar7 + (longlong)(cVar4 + -1) * 4);
          if ((((longlong *)(unaff_RDI + 0x2c) < plVar7) ||
              (plVar2 < (longlong *)(unaff_RDI + 0x2c))) &&
             ((plVar1 < plVar7 || (iVar18 = 0, plVar2 < plVar1)))) {
            uVar6 = uVar16 & 0x8000000f;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
            }
            plVar7 = plVar7 + 4;
            iVar9 = 8;
            do {
              *(int *)(plVar7 + -4) = iVar17 + iVar10;
              *(int *)((longlong)plVar7 + -0x1c) = iVar17 + 1 + iVar10;
              *(int *)(plVar7 + -3) = iVar17 + 2 + iVar10;
              *(int *)((longlong)plVar7 + -0x14) = iVar17 + 3 + iVar10;
              iVar17 = iVar17 + 0x10;
              *(int *)(plVar7 + -2) = iVar9 + -4 + iVar10;
              *(int *)((longlong)plVar7 + -0xc) = iVar9 + -3 + iVar10;
              *(int *)(plVar7 + -1) = iVar9 + -2 + iVar10;
              *(int *)((longlong)plVar7 + -4) = iVar9 + -1 + iVar10;
              *(int *)plVar7 = iVar9 + iVar10;
              *(int *)((longlong)plVar7 + 4) = iVar9 + 1 + iVar10;
              *(int *)(plVar7 + 1) = iVar9 + 2 + iVar10;
              *(int *)((longlong)plVar7 + 0xc) = iVar9 + 3 + iVar10;
              *(int *)(plVar7 + 2) = iVar9 + 4 + iVar10;
              *(int *)((longlong)plVar7 + 0x14) = iVar9 + 5 + iVar10;
              *(int *)(plVar7 + 3) = iVar9 + 6 + iVar10;
              *(int *)((longlong)plVar7 + 0x1c) = iVar9 + 7 + iVar10;
              plVar7 = plVar7 + 8;
              iVar9 = iVar9 + 0x10;
              iVar18 = iVar17;
            } while (iVar17 < (int)(uVar16 - uVar6));
          }
        }
        for (lVar11 = (longlong)iVar18; lVar11 < (longlong)uVar12; lVar11 = lVar11 + 1) {
          iVar17 = *(int *)(unaff_RDI + 0x2c) + iVar18;
          iVar18 = iVar18 + 1;
          *(int *)(*plVar1 + lVar11 * 4) = iVar17;
        }
        iVar18 = *(int *)(unaff_RDI + 0x18);
        iVar17 = 0;
        if (0 < (longlong)iVar18) {
          lVar11 = 0;
          do {
            iVar10 = *(int *)(unaff_RDI + 0x30) + iVar17;
            iVar17 = iVar17 + 1;
            pbVar3 = (byte *)(*(longlong *)(unaff_RDI + 0x10) + lVar11);
            lVar11 = lVar11 + 1;
            *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar10;
          } while (lVar11 < iVar18);
        }
      }
      puVar14 = (uint *)((longlong)*(int *)(system_parameter_buffer + 0xc20) * 0x128 + system_parameter_buffer + 0x9d0
                        );
      if (iVar15 == 0) {
        uVar16 = (int)cVar4 - 1;
      }
      else {
        LOCK();
        uVar16 = *puVar14;
        *puVar14 = *puVar14 + (int)cVar4;
        UNLOCK();
        uVar21 = (ulonglong)(uVar16 >> 0xb);
        uVar22 = (ulonglong)(cVar4 + -1 + uVar16 >> 0xb);
        if (uVar21 <= uVar22) {
          pcVar13 = (char *)((longlong)puVar14 + uVar21 + 0x108);
          lVar11 = (uVar22 - uVar21) + 1;
          puVar20 = puVar14 + uVar21 * 2 + 2;
          do {
            iVar18 = (int)uVar21;
            if (*(longlong *)puVar20 == 0) {
              lVar8 = FUN_18062b420(system_memory_pool_ptr,0x2000,0x25);
              LOCK();
              bVar23 = *(longlong *)(puVar14 + (longlong)iVar18 * 2 + 2) == 0;
              if (bVar23) {
                *(longlong *)(puVar14 + (longlong)iVar18 * 2 + 2) = lVar8;
              }
              UNLOCK();
              if (bVar23) {
                LOCK();
                *(int8_t *)((longlong)iVar18 + 0x108 + (longlong)puVar14) = 0;
                UNLOCK();
              }
              else {
                if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                do {
                } while (*pcVar13 != '\0');
              }
            }
            else {
              do {
              } while (*pcVar13 != '\0');
            }
            uVar21 = (ulonglong)(iVar18 + 1);
            puVar20 = puVar20 + 2;
            pcVar13 = pcVar13 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
      }
      puVar19 = *(int32_t **)(unaff_RDI + 0x38);
      uVar6 = uVar16 >> 0xb;
      *(uint *)(unaff_RDI + 0x2c) = uVar16;
      if (uVar6 == (int)cVar4 + uVar16 >> 0xb) {
                    // WARNING: Subroutine does not return
        memcpy(*(longlong *)(puVar14 + (ulonglong)uVar6 * 2 + 2) +
               (ulonglong)(uVar16 + uVar6 * -0x800) * 4,puVar19,(uVar12 & 0xffffffff) << 2);
      }
      if (iVar15 != 0) {
        uVar12 = uVar12 & 0xffffffff;
        do {
          uVar5 = *puVar19;
          puVar19 = puVar19 + 1;
          *(int32_t *)
           (*(longlong *)(puVar14 + (ulonglong)(uVar16 >> 0xb) * 2 + 2) +
           (ulonglong)(uVar16 + (uVar16 >> 0xb) * -0x800) * 4) = uVar5;
          uVar12 = uVar12 - 1;
          uVar16 = uVar16 + 1;
        } while (uVar12 != 0);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



