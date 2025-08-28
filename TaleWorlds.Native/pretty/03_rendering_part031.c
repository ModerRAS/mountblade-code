#include "TaleWorlds.Native.Split.h"

// 03_rendering_part031.c - 16 个函数

// 函数: void FUN_180283420(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180283420(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong uVar1;
  int32_t uVar2;
  longlong lVar3;
  int iVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int *piVar7;
  uint *puVar8;
  void *puVar9;
  int8_t *puVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  void *puStack_60;
  int8_t *puStack_58;
  uint uStack_50;
  uint64_t uStack_48;
  
  uVar5 = (**(code **)(*param_1 + 0x90))(param_1,&puStack_60,param_3,param_4,0xfffffffffffffffe);
  FUN_180639ec0(param_2,uVar5);
  puStack_60 = &UNK_180a3c3e0;
  if (puStack_58 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_58 = (int8_t *)0x0;
  uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
  puStack_60 = &UNK_18098bcb0;
  FUN_180639ec0(param_2,param_1 + 0x3e);
  uVar2 = *(int32_t *)((longlong)param_1 + 0x324);
  puVar6 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar6) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar6 + (4 - *param_2));
    puVar6 = (int32_t *)param_2[1];
  }
  *puVar6 = uVar2;
  puVar6 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar6;
  if ((void *)*param_1 == &UNK_180a169b8) {
    plVar12 = param_1 + 0x66;
  }
  else {
    plVar12 = (longlong *)(**(code **)((void *)*param_1 + 0x158))(param_1);
    puVar6 = (int32_t *)param_2[1];
  }
  lVar15 = 4;
  do {
    lVar11 = 4;
    do {
      lVar3 = *plVar12;
      if ((ulonglong)((*param_2 - (longlong)puVar6) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar6 + (4 - *param_2));
        puVar6 = (int32_t *)param_2[1];
      }
      *puVar6 = (int)lVar3;
      puVar6 = (int32_t *)(param_2[1] + 4);
      param_2[1] = (longlong)puVar6;
      plVar12 = (longlong *)((longlong)plVar12 + 4);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  lVar15 = param_1[0x77];
  if ((ulonglong)((*param_2 - (longlong)puVar6) + param_2[2]) < 2) {
    FUN_180639bf0(param_2,(longlong)puVar6 + (1 - *param_2));
    puVar6 = (int32_t *)param_2[1];
  }
  *(bool *)puVar6 = lVar15 != 0;
  param_2[1] = param_2[1] + 1;
  piVar7 = (int *)param_2[1];
  if (lVar15 != 0) {
    FUN_180639ec0(param_2,param_1[0x77] + 0x10);
    piVar7 = (int *)param_2[1];
  }
  lVar15 = param_1[8];
  lVar11 = param_1[7];
  if ((ulonglong)((*param_2 - (longlong)piVar7) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar7 + (4 - *param_2));
    piVar7 = (int *)param_2[1];
  }
  iVar4 = (int)(lVar15 - lVar11 >> 4);
  *piVar7 = iVar4;
  param_2[1] = param_2[1] + 4;
  if (0 < iVar4) {
    lVar15 = *(longlong *)param_1[7];
    FUN_180639ec0(param_2,lVar15 + 0x10);
    lVar15 = FUN_180079430(lVar15);
    puStack_60 = &UNK_180a3c3e0;
    uStack_48 = 0;
    puStack_58 = (int8_t *)0x0;
    uStack_50 = 0;
    FUN_1806277c0(&puStack_60,*(int32_t *)(lVar15 + 0x10));
    if (*(int *)(lVar15 + 0x10) < 1) {
      if ((*(longlong *)(lVar15 + 8) != 0) && (uStack_50 = 0, puStack_58 != (int8_t *)0x0)) {
        *puStack_58 = 0;
      }
      while ((0 < (int)uStack_50 && (lVar15 = strstr(puStack_58,&system_data_ff10), lVar15 != 0))) {
        iVar14 = 6;
        iVar4 = (int)lVar15 - (int)puStack_58;
        if (uStack_50 < iVar4 + 6U) {
          iVar14 = uStack_50 - iVar4;
        }
        uVar13 = iVar4 + iVar14;
        if (uVar13 < uStack_50) {
          lVar15 = (longlong)(int)uVar13;
          do {
            puStack_58[lVar15 - iVar14] = puStack_58[lVar15];
            uVar13 = uVar13 + 1;
            lVar15 = lVar15 + 1;
          } while (uVar13 < uStack_50);
        }
        uStack_50 = uStack_50 - iVar14;
        puStack_58[uStack_50] = 0;
      }
      uVar13 = uStack_50;
      uVar16 = (ulonglong)uStack_50;
      uVar1 = uVar16 + 4;
      puVar8 = (uint *)param_2[1];
      if ((ulonglong)((*param_2 - (longlong)puVar8) + param_2[2]) <= uVar1) {
        FUN_180639bf0(param_2,(longlong)puVar8 + (uVar1 - *param_2));
        puVar8 = (uint *)param_2[1];
      }
      *puVar8 = uVar13;
      lVar15 = param_2[1];
      param_2[1] = lVar15 + 4;
      puVar10 = &system_buffer_ptr;
      if (puStack_58 != (int8_t *)0x0) {
        puVar10 = puStack_58;
      }
                    // WARNING: Subroutine does not return
      memcpy(lVar15 + 4,puVar10,uVar16);
    }
    puVar9 = &system_buffer_ptr;
    if (*(void **)(lVar15 + 8) != (void *)0x0) {
      puVar9 = *(void **)(lVar15 + 8);
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_58,puVar9,(longlong)(*(int *)(lVar15 + 0x10) + 1));
  }
  return;
}





// 函数: void FUN_180283cb0(longlong param_1,char param_2)
void FUN_180283cb0(longlong param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int8_t auStack_50 [8];
  longlong lStack_48;
  int32_t uStack_40;
  longlong *plStack_38;
  
  iVar3 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 4);
  lVar6 = (longlong)iVar3;
  if (0 < iVar3) {
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x38));
      if (*(char *)(lVar1 + 0xf4) != param_2) {
        if ((*(byte *)(lVar1 + 0xfd) & 0x20) != 0) {
          FUN_18007baa0(lVar1);
          lVar4 = 0;
          do {
            *(char *)(*(longlong *)(lVar1 + 0x1e0) + 0x14 + lVar4) = param_2;
            lVar4 = lVar4 + 0x18;
          } while (lVar4 < 0x180);
        }
        plStack_38 = (longlong *)0x0;
        auStack_50[0] = 0;
        uStack_40 = 1;
        lStack_48 = lVar1;
        FUN_18007f4c0(auStack_50);
        if (plStack_38 != (longlong *)0x0) {
          plVar5 = plStack_38;
          if (param_2 == '\0') {
LAB_180283e1f:
            plStack_38 = (longlong *)0x0;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x38))();
            }
          }
          else if ((param_2 == '\x01') && ((*(byte *)(lVar1 + 0xfd) & 0x20) != 0)) {
            lVar4 = *(longlong *)(lVar1 + 0x1b8);
            bVar2 = *(byte *)(lVar4 + 0x38c);
            if (bVar2 == 9) {
              bVar2 = func_0x00018022d300();
              *(byte *)(lVar4 + 0x38c) = bVar2;
            }
            plVar5 = plStack_38;
            if ((*(char *)(*(longlong *)(lVar1 + 0x1e0) + 0x15 + (ulonglong)bVar2 * 0x18) == '\x03')
               || (*(char *)(*(longlong *)(lVar1 + 0x1e0) + 0x15 + (ulonglong)bVar2 * 0x18) ==
                   '\x02')) goto LAB_180283e1f;
          }
        }
        *(char *)(lVar1 + 0xf4) = param_2;
        FUN_18007f6a0(auStack_50);
        if (plStack_38 != (longlong *)0x0) {
          (**(code **)(*plStack_38 + 0x38))();
        }
      }
      lVar7 = lVar7 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}





// 函数: void FUN_180283e70(longlong param_1)
void FUN_180283e70(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar3 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 4);
  lVar5 = (longlong)iVar3;
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x38));
      iVar3 = _Mtx_lock(0x180c91910);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      pcVar1 = (char *)(lVar2 + 0xfc);
      *pcVar1 = *pcVar1 + '\x01';
      iVar3 = _Mtx_unlock(0x180c91910);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180283f10(longlong param_1,uint param_2,ulonglong *param_3)

{
  uint64_t uVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  
  puVar5 = *(uint64_t **)(param_1 + 0x38);
  if (puVar5 < *(uint64_t **)(param_1 + 0x40)) {
    do {
      if ((*(uint *)(puVar5 + 1) & param_2) != 0) {
        puVar6 = (uint64_t *)param_3[1];
        uVar1 = *puVar5;
        if (puVar6 < (uint64_t *)param_3[2]) {
          param_3[1] = (ulonglong)(puVar6 + 1);
          *puVar6 = uVar1;
        }
        else {
          puVar4 = (uint64_t *)*param_3;
          lVar2 = (longlong)puVar6 - (longlong)puVar4 >> 3;
          if (lVar2 == 0) {
            lVar2 = 1;
LAB_180283f92:
            puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,(char)param_3[3]);
            puVar4 = (uint64_t *)*param_3;
            puVar6 = (uint64_t *)param_3[1];
          }
          else {
            lVar2 = lVar2 * 2;
            if (lVar2 != 0) goto LAB_180283f92;
            puVar3 = (uint64_t *)0x0;
          }
          if (puVar4 != puVar6) {
                    // WARNING: Subroutine does not return
            memmove(puVar3,puVar4,(longlong)puVar6 - (longlong)puVar4);
          }
          *puVar3 = uVar1;
          if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *param_3 = (ulonglong)puVar3;
          param_3[2] = (ulonglong)(puVar3 + lVar2);
          param_3[1] = (ulonglong)(puVar3 + 1);
        }
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 < *(uint64_t **)(param_1 + 0x40));
  }
  return (longlong)(param_3[1] - *param_3) >> 3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180283f32(void)

{
  uint64_t uVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  ulonglong *unaff_RBX;
  uint64_t *unaff_RSI;
  uint64_t *puVar5;
  uint unaff_R12D;
  longlong unaff_R13;
  
  do {
    if ((*(uint *)(unaff_RSI + 1) & unaff_R12D) != 0) {
      puVar5 = (uint64_t *)unaff_RBX[1];
      uVar1 = *unaff_RSI;
      if (puVar5 < (uint64_t *)unaff_RBX[2]) {
        unaff_RBX[1] = (ulonglong)(puVar5 + 1);
        *puVar5 = uVar1;
      }
      else {
        puVar4 = (uint64_t *)*unaff_RBX;
        lVar2 = (longlong)puVar5 - (longlong)puVar4 >> 3;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_180283f92:
          puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,(char)unaff_RBX[3]);
          puVar4 = (uint64_t *)*unaff_RBX;
          puVar5 = (uint64_t *)unaff_RBX[1];
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_180283f92;
          puVar3 = (uint64_t *)0x0;
        }
        if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
          memmove(puVar3,puVar4,(longlong)puVar5 - (longlong)puVar4);
        }
        *puVar3 = uVar1;
        if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *unaff_RBX = (ulonglong)puVar3;
        unaff_RBX[2] = (ulonglong)(puVar3 + lVar2);
        unaff_RBX[1] = (ulonglong)(puVar3 + 1);
      }
    }
    unaff_RSI = unaff_RSI + 2;
    if (*(uint64_t **)(unaff_R13 + 0x40) <= unaff_RSI) {
      return (longlong)(unaff_RBX[1] - *unaff_RBX) >> 3;
    }
  } while( true );
}



longlong FUN_18028401a(void)

{
  longlong *unaff_RBX;
  
  return unaff_RBX[1] - *unaff_RBX >> 3;
}





// 函数: void FUN_180284030(longlong param_1,byte param_2,uint64_t param_3,uint64_t param_4)
void FUN_180284030(longlong param_1,byte param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  uVar11 = *(longlong *)(param_1 + 0x40) - *plVar1 >> 4;
  iVar10 = (int)uVar11;
  lVar7 = (longlong)iVar10;
  if (0 < iVar10) {
    lVar8 = 0;
    lVar12 = lVar7 * 0x10 + -0x10;
    lVar9 = lVar8;
    do {
      puVar2 = (uint *)(lVar9 + 8 + *plVar1);
      *puVar2 = *puVar2 & ~(-1 << (param_2 & 0x1f) & 0xffU);
      lVar3 = *plVar1;
      if (*(int *)(lVar9 + 8 + lVar3) == 0) {
        plVar4 = *(longlong **)(lVar12 + lVar3);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4);
        }
        plVar6 = *(longlong **)(lVar9 + lVar3);
        *(longlong **)(lVar9 + lVar3) = plVar4;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x38))();
        }
        *(int32_t *)(lVar9 + 8 + lVar3) = *(int32_t *)(lVar12 + 8 + lVar3);
        uVar11 = (ulonglong)((int)uVar11 - 1);
        lVar7 = lVar7 + -1;
        lVar12 = lVar12 + -0x10;
      }
      else {
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 0x10;
      }
      iVar10 = (int)uVar11;
    } while (lVar8 < lVar7);
  }
  uVar5 = (ulonglong)iVar10;
  plVar4 = *(longlong **)(param_1 + 0x40);
  lVar7 = *plVar1;
  uVar11 = (longlong)plVar4 - lVar7 >> 4;
  if (uVar11 < uVar5) {
    FUN_180284de0(plVar1,uVar5 - uVar11,param_3,param_4,0xfffffffffffffffe);
  }
  else {
    plVar6 = (longlong *)(lVar7 + uVar5 * 0x10);
    if (plVar6 != plVar4) {
      do {
        if ((longlong *)*plVar6 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar6 + 0x38))();
        }
        plVar6 = plVar6 + 2;
      } while (plVar6 != plVar4);
      lVar7 = *plVar1;
    }
    *(ulonglong *)(param_1 + 0x40) = lVar7 + uVar5 * 0x10;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180284120(longlong *param_1,ulonglong param_2)
void FUN_180284120(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if ((ulonglong)(param_1[2] - lVar2 >> 6) < param_2) {
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_18062b420(_DAT_180c8ed18,param_2 << 6,(char)param_1[3]);
      lVar2 = *param_1;
    }
    if (lVar2 != param_1[1]) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar2,param_1[1] - lVar2);
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = param_2 * 0x40 + lVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180284143(longlong param_1,longlong param_2)
void FUN_180284143(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  longlong unaff_RDI;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,param_2 << 6,(char)unaff_RBX[3]);
    param_1 = *unaff_RBX;
  }
  if (param_1 == unaff_RBX[1]) {
    if (param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *unaff_RBX = lVar1;
    unaff_RBX[1] = lVar1;
    unaff_RBX[2] = unaff_RDI * 0x40 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  memmove(lVar1,param_1,unaff_RBX[1] - param_1);
}





// 函数: void FUN_1802841c0(void)
void FUN_1802841c0(void)

{
  return;
}





// 函数: void FUN_1802841d0(longlong *param_1)
void FUN_1802841d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 2) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180284240(longlong *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)
void FUN_180284240(longlong *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)param_1[1];
  lVar3 = *param_1;
  uVar2 = (longlong)plVar1 - lVar3 >> 4;
  if (uVar2 < param_2) {
    FUN_180284de0(param_1,param_2 - uVar2,param_3,param_4,0xfffffffffffffffe);
  }
  else {
    plVar4 = (longlong *)(lVar3 + param_2 * 0x10);
    if (plVar4 != plVar1) {
      do {
        if ((longlong *)*plVar4 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar4 + 0x38))();
        }
        plVar4 = plVar4 + 2;
      } while (plVar4 != plVar1);
      lVar3 = *param_1;
    }
    param_1[1] = lVar3 + param_2 * 0x10;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802842e0(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802842e0(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar7 = (longlong *)param_1[1];
  if (plVar7 < (longlong *)param_1[2]) {
    param_1[1] = (longlong)(plVar7 + 2);
    plVar4 = (longlong *)*param_2;
    *plVar7 = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))();
    }
    *(int *)(plVar7 + 1) = (int)param_2[1];
    return;
  }
  plVar4 = (longlong *)*param_1;
  lVar5 = (longlong)plVar7 - (longlong)plVar4 >> 4;
  plVar3 = (longlong *)0x0;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) goto LAB_180284385;
  }
  plVar3 = (longlong *)
           FUN_18062b420(_DAT_180c8ed18,lVar5 << 4,(char)param_1[3],param_4,0xfffffffffffffffe);
  plVar7 = (longlong *)param_1[1];
  plVar4 = (longlong *)*param_1;
LAB_180284385:
  plVar6 = plVar3;
  if (plVar4 != plVar7) {
    lVar8 = (longlong)plVar4 - (longlong)plVar3;
    lVar2 = 8 - (longlong)plVar4;
    do {
      *plVar6 = *plVar4;
      *plVar4 = 0;
      puVar1 = (int32_t *)((longlong)plVar3 + lVar2 + (longlong)plVar4);
      *puVar1 = *(int32_t *)((longlong)puVar1 + lVar8);
      plVar4 = plVar4 + 2;
      plVar6 = plVar6 + 2;
    } while (plVar4 != plVar7);
  }
  plVar7 = (longlong *)*param_2;
  *plVar6 = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))();
  }
  *(int *)(plVar6 + 1) = (int)param_2[1];
  plVar7 = (longlong *)param_1[1];
  plVar4 = (longlong *)*param_1;
  if (plVar4 != plVar7) {
    do {
      if ((longlong *)*plVar4 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar4 + 0x38))();
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar7);
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    *param_1 = (longlong)plVar3;
    param_1[1] = (longlong)(plVar6 + 2);
    param_1[2] = (longlong)(plVar3 + lVar5 * 2);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar4);
}



longlong FUN_180284450(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong *plVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  
  puVar4 = (uint64_t *)(param_2 + 0x10);
  puVar3 = *(uint64_t **)(param_1 + 8);
  if ((puVar4 < puVar3) && (lVar5 = (longlong)puVar3 - (longlong)puVar4 >> 4, 0 < lVar5)) {
    do {
      uVar1 = *puVar4;
      *puVar4 = 0;
      plVar2 = (longlong *)puVar4[-2];
      puVar4[-2] = uVar1;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      *(int32_t *)(puVar4 + -1) = *(int32_t *)(puVar4 + 1);
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 2;
    } while (0 < lVar5);
    puVar3 = *(uint64_t **)(param_1 + 8);
  }
  *(uint64_t **)(param_1 + 8) = puVar3 + -2;
  plVar2 = (longlong *)puVar3[-2];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return param_2;
}





// 函数: void FUN_180284500(longlong *param_1)
void FUN_180284500(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    do {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 2;
    } while (plVar2 != plVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = (longlong)plVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180284580(longlong *param_1,ulonglong param_2)
void FUN_180284580(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lStackX_8;
  
  lVar3 = param_1[1];
  lVar4 = *param_1;
  uVar1 = (lVar3 - lVar4) / 0x1a0;
  if (uVar1 < param_2) {
    param_2 = param_2 - uVar1;
    if ((ulonglong)((param_1[2] - lVar3) / 0x1a0) < param_2) {
      uVar5 = uVar1 * 2;
      if (uVar1 == 0) {
        uVar5 = 1;
      }
      if (uVar5 < uVar1 + param_2) {
        uVar5 = uVar1 + param_2;
      }
      if (uVar5 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_18062b420(_DAT_180c8ed18,uVar5 * 0x1a0,(char)param_1[3]);
        lVar4 = *param_1;
        lVar3 = param_1[1];
      }
      FUN_180285440(&lStackX_8,lVar4,lVar3,lVar2);
      FUN_180285190(lStackX_8,param_2);
      lVar4 = param_1[1];
      lVar3 = *param_1;
      if (lVar3 != lVar4) {
        do {
          FUN_180281e80(lVar3);
          lVar3 = lVar3 + 0x1a0;
        } while (lVar3 != lVar4);
        lVar3 = *param_1;
      }
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar3);
      }
      *param_1 = lVar2;
      param_1[1] = param_2 * 0x1a0 + lStackX_8;
      param_1[2] = uVar5 * 0x1a0 + lVar2;
    }
    else {
      FUN_180285190(lVar3,param_2);
      param_1[1] = param_1[1] + param_2 * 0x1a0;
    }
  }
  else {
    lVar2 = param_2 * 0x1a0 + lVar4;
    if (lVar2 != lVar3) {
      do {
        FUN_180281e80(lVar2);
        lVar2 = lVar2 + 0x1a0;
      } while (lVar2 != lVar3);
      lVar4 = *param_1;
    }
    param_1[1] = param_2 * 0x1a0 + lVar4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802845f6(void)
void FUN_1802845f6(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBP;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong in_R9;
  longlong in_R10;
  ulonglong uVar5;
  longlong in_stack_00000050;
  
  uVar5 = in_R9 * 2;
  if (in_R9 == 0) {
    uVar5 = 1;
  }
  if (uVar5 < (ulonglong)(in_R9 + unaff_RBP)) {
    uVar5 = in_R9 + unaff_RBP;
  }
  if (uVar5 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,uVar5 * 0x1a0,(char)unaff_RDI[3]);
    in_R10 = *unaff_RDI;
    unaff_RSI = unaff_RDI[1];
  }
  FUN_180285440(&stack0x00000050,in_R10,unaff_RSI,lVar2);
  FUN_180285190(in_stack_00000050);
  lVar1 = unaff_RDI[1];
  lVar3 = *unaff_RDI;
  lVar4 = unaff_RBP * 0x1a0 + in_stack_00000050;
  if (lVar3 != lVar1) {
    do {
      FUN_180281e80(lVar3);
      lVar3 = lVar3 + 0x1a0;
    } while (lVar3 != lVar1);
    lVar3 = *unaff_RDI;
  }
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar3);
  }
  *unaff_RDI = lVar2;
  unaff_RDI[1] = lVar4;
  unaff_RDI[2] = uVar5 * 0x1a0 + lVar2;
  return;
}





// 函数: void FUN_1802846c0(void)
void FUN_1802846c0(void)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  FUN_180285190();
  *(longlong *)(unaff_RDI + 8) = *(longlong *)(unaff_RDI + 8) + unaff_RBP * 0x1a0;
  return;
}





// 函数: void FUN_180284720(longlong *param_1)
void FUN_180284720(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  if (lVar2 != lVar1) {
    do {
      FUN_180281e80(lVar2);
      lVar2 = lVar2 + 0x1a0;
    } while (lVar2 != lVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = lVar2;
  return;
}





// 函数: void FUN_180284780(longlong param_1)
void FUN_180284780(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        FUN_180285080();
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180284830(longlong param_1,uint64_t *param_2,uint64_t param_3,int *param_4,ulonglong param_5
             )

{
  uint64_t *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  uint64_t uVar5;
  
  uVar3 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  puVar1 = (uint64_t *)(*(longlong *)(param_1 + 8) + uVar3 * 8);
  piVar4 = (int *)*puVar1;
  if (piVar4 != (int *)0x0) {
    do {
      if (*param_4 == *piVar4) {
        *param_2 = piVar4;
        param_2[1] = puVar1;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      piVar4 = *(int **)(piVar4 + 0xe);
    } while (piVar4 != (int *)0x0);
  }
  FUN_18066c220(param_1 + 0x20,&param_5,(ulonglong)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  piVar4 = (int *)FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(param_1 + 0x2c));
  *piVar4 = *param_4;
  piVar4[10] = 0x3f800000;
  piVar4[0xb] = 0x40000000;
  piVar4[0xc] = 0;
  piVar4[0xd] = 3;
  piVar4[6] = 1;
  piVar4[7] = 0;
  *(void **)(piVar4 + 4) = &system_data_0000;
  piVar4[8] = 0;
  piVar4[9] = 0;
  piVar4[0xc] = 0;
  piVar4[0xe] = 0;
  piVar4[0xf] = 0;
  if ((char)param_5 == '\0') {
    *(uint64_t *)(piVar4 + 0xe) = *(uint64_t *)(*(longlong *)(param_1 + 8) + uVar3 * 8);
    *(int **)(*(longlong *)(param_1 + 8) + uVar3 * 8) = piVar4;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
    lVar2 = *(longlong *)(param_1 + 8);
    *param_2 = piVar4;
    param_2[1] = lVar2 + uVar3 * 8;
    *(int8_t *)(param_2 + 2) = 1;
    return param_2;
  }
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)param_5._4_4_ * 8 + 8,8,
                        *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar5,0,(ulonglong)param_5._4_4_ * 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_180284a50(longlong param_1,longlong *param_2,uint64_t param_3,longlong param_4,
             ulonglong param_5)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong lVar6;
  uint64_t uVar7;
  int iVar8;
  longlong lVar9;
  
  uVar4 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + uVar4 * 8);
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    iVar3 = *(int *)(param_4 + 0x10);
    do {
      iVar8 = *(int *)(lVar6 + 0x10);
      if (iVar3 == iVar8) {
        if (iVar3 != 0) {
          pbVar5 = *(byte **)(param_4 + 8);
          lVar9 = *(longlong *)(lVar6 + 8) - (longlong)pbVar5;
          do {
            pbVar2 = pbVar5 + lVar9;
            iVar8 = (uint)*pbVar5 - (uint)*pbVar2;
            if (iVar8 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar2 != 0);
        }
LAB_180284ade:
        if (iVar8 == 0) {
          *param_2 = lVar6;
          param_2[1] = (longlong)plVar1;
          *(int8_t *)(param_2 + 2) = 0;
          return param_2;
        }
      }
      else if (iVar3 == 0) goto LAB_180284ade;
      lVar6 = *(longlong *)(lVar6 + 0x40);
    } while (lVar6 != 0);
  }
  FUN_18066c220(param_1 + 0x20,&param_5,*(uint *)(param_1 + 0x10),*(int32_t *)(param_1 + 0x18),1)
  ;
  lVar6 = FUN_18062b420(_DAT_180c8ed18,0x48,*(int8_t *)(param_1 + 0x2c));
  FUN_180627ae0(lVar6,param_4);
  *(uint64_t *)(lVar6 + 0x20) = 0;
  *(uint64_t *)(lVar6 + 0x28) = 0;
  *(uint64_t *)(lVar6 + 0x30) = 0;
  *(int32_t *)(lVar6 + 0x38) = 3;
  *(uint64_t *)(lVar6 + 0x40) = 0;
  if ((char)param_5 == '\0') {
    *(uint64_t *)(lVar6 + 0x40) = *(uint64_t *)(*(longlong *)(param_1 + 8) + uVar4 * 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + uVar4 * 8) = lVar6;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
    lVar9 = *(longlong *)(param_1 + 8);
    *param_2 = lVar6;
    param_2[1] = lVar9 + uVar4 * 8;
    *(int8_t *)(param_2 + 2) = 1;
    return param_2;
  }
  uVar7 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)param_5._4_4_ * 8 + 8,8,
                        *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar7,0,(ulonglong)param_5._4_4_ * 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



