#include "TaleWorlds.Native.Split.h"

// 03_rendering_part430.c - 7 个函数

// 函数: void FUN_180500bd0(longlong *param_1,longlong *param_2,uint64_t param_3,int32_t *param_4)
void FUN_180500bd0(longlong *param_1,longlong *param_2,uint64_t param_3,int32_t *param_4)

{
  code *pcVar1;
  uint64_t uVar2;
  longlong *plVar3;
  void *puStack_38;
  longlong lStack_30;
  int32_t uStack_20;
  
  pcVar1 = *(code **)(*param_1 + 0x78);
  uVar2 = FUN_180627ae0(&puStack_38,(longlong)(int)param_3 * 0x20 + *param_2,param_3,param_4,0,
                        0xfffffffffffffffe);
  FUN_180628a40(&puStack_38);
  plVar3 = (longlong *)(*pcVar1)(param_1,uVar2);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x70))(plVar3,&unknown_var_1532_ptr);
  (**(code **)(*plVar3 + 0x50))(plVar3,*param_4);
  puStack_38 = &unknown_var_3456_ptr;
  if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_30 = 0;
  uStack_20 = 0;
  puStack_38 = &unknown_var_720_ptr;
  if ((ulonglong)(longlong)((int)param_3 + 1) < (ulonglong)(param_2[1] - *param_2 >> 5)) {
    (**(code **)(*param_1 + 0x70))(param_1,&system_temp_buffer);
  }
  return;
}





// 函数: void FUN_180500cf0(longlong *param_1,longlong *param_2,uint64_t param_3,int32_t *param_4,
void FUN_180500cf0(longlong *param_1,longlong *param_2,uint64_t param_3,int32_t *param_4,
                  int8_t *param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  uint64_t uVar3;
  longlong *plVar4;
  int iVar5;
  void *puStack_48;
  longlong lStack_40;
  int32_t uStack_30;
  
  iVar5 = (int)param_3;
  pcVar2 = *(code **)(*param_1 + 0x78);
  uVar3 = FUN_180627ae0(&puStack_48,(longlong)iVar5 * 0x20 + *param_2,param_3,param_4,0,
                        0xfffffffffffffffe);
  FUN_180628a40(&puStack_48);
  plVar4 = (longlong *)(*pcVar2)(param_1,uVar3);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x70))(plVar4,&unknown_var_1532_ptr);
  (**(code **)(*plVar4 + 0x50))(plVar4,*param_4);
  puStack_48 = &unknown_var_3456_ptr;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_40 = 0;
  uStack_30 = 0;
  puStack_48 = &unknown_var_720_ptr;
  uVar1 = (longlong)iVar5 + 1;
  if (uVar1 < (ulonglong)(param_2[1] - *param_2 >> 5)) {
    (**(code **)(*param_1 + 0x70))(param_1,&system_temp_buffer);
    pcVar2 = *(code **)(*param_1 + 0x78);
    uVar3 = FUN_180627ae0(&puStack_48,uVar1 * 0x20 + *param_2);
    FUN_180628a40(&puStack_48);
    plVar4 = (longlong *)(*pcVar2)(param_1,uVar3);
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x70))(plVar4,&unknown_var_1532_ptr);
    (**(code **)(*plVar4 + 0x30))(plVar4,*param_5);
    puStack_48 = &unknown_var_3456_ptr;
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_40 = 0;
    uStack_30 = 0;
    puStack_48 = &unknown_var_720_ptr;
    if ((ulonglong)(longlong)(iVar5 + 2) < (ulonglong)(param_2[1] - *param_2 >> 5)) {
      (**(code **)(*param_1 + 0x70))(param_1,&system_temp_buffer);
    }
  }
  return;
}





// 函数: void FUN_180500ee0(longlong *param_1,longlong *param_2,uint64_t param_3,int32_t *param_4,
void FUN_180500ee0(longlong *param_1,longlong *param_2,uint64_t param_3,int32_t *param_4,
                  char *param_5)

{
  code *pcVar1;
  uint64_t uVar2;
  longlong *plVar3;
  void *puStack_48;
  longlong lStack_40;
  int32_t uStack_30;
  
  pcVar1 = *(code **)(*param_1 + 0x78);
  uVar2 = FUN_180627ae0(&puStack_48,*param_2,param_3,param_4,0,0xfffffffffffffffe);
  FUN_180628a40(&puStack_48);
  plVar3 = (longlong *)(*pcVar1)(param_1,uVar2);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x70))(plVar3,&unknown_var_1532_ptr);
  (**(code **)(*plVar3 + 0x50))(plVar3,*param_4);
  puStack_48 = &unknown_var_3456_ptr;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_40 = 0;
  uStack_30 = 0;
  puStack_48 = &unknown_var_720_ptr;
  if (1 < (ulonglong)(param_2[1] - *param_2 >> 5)) {
    (**(code **)(*param_1 + 0x70))(param_1,&system_temp_buffer);
    pcVar1 = *(code **)(*param_1 + 0x78);
    uVar2 = FUN_180627ae0(&puStack_48,*param_2 + 0x20);
    FUN_180628a40(&puStack_48);
    plVar3 = (longlong *)(*pcVar1)(param_1,uVar2);
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x70))(plVar3,&unknown_var_1532_ptr);
    (**(code **)(*plVar3 + 0x50))(plVar3,(int)*param_5);
    puStack_48 = &unknown_var_3456_ptr;
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_40 = 0;
    uStack_30 = 0;
    puStack_48 = &unknown_var_720_ptr;
    if (2 < (ulonglong)(param_2[1] - *param_2 >> 5)) {
      (**(code **)(*param_1 + 0x70))(param_1,&system_temp_buffer);
    }
  }
  return;
}



uint64_t FUN_180501090(ulonglong *param_1,uint64_t *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  char cVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint64_t uVar18;
  longlong lVar19;
  
  uVar18 = 0xfffffffffffffffe;
  uVar15 = 0;
  uVar11 = *param_1;
  uVar12 = uVar15;
  uVar14 = uVar15;
  uVar16 = uVar15;
  do {
    uVar13 = uVar12;
    uVar17 = uVar16;
    if (uVar11 == 0) break;
    uVar10 = *(longlong *)(uVar11 + 0x20) - *(longlong *)(uVar11 + 0x28);
    if ((ulonglong)(*(longlong *)(uVar11 + 0x28) - *(longlong *)(uVar11 + 0x20)) <
        0x8000000000000001) {
      uVar10 = uVar15;
    }
    if ((uVar10 != 0) && (uVar14 = uVar14 + 1, uVar13 = uVar10, uVar17 = uVar11, uVar10 <= uVar12))
    {
      uVar13 = uVar12;
      uVar17 = uVar16;
    }
    plVar1 = (longlong *)(uVar11 + 8);
    uVar11 = *plVar1 - 8;
    if (*plVar1 == 0) {
      uVar11 = uVar15;
    }
    uVar12 = uVar13;
    uVar16 = uVar17;
  } while (uVar14 < 3);
  if (uVar14 != 0) {
    cVar9 = FUN_180501aa0(uVar17,param_2,uVar11,uVar13,0xfffffffffffffffe);
    if (cVar9 != '\0') {
      return 1;
    }
    uVar11 = *param_1;
    while (uVar11 != 0) {
      if (uVar11 != uVar17) {
        if (*(char *)(uVar11 + 0x48) == '\0') {
          cVar9 = FUN_180503930(uVar11,param_2);
        }
        else {
          if (0x8000000000000000 <
              (ulonglong)
              ((*(longlong *)(uVar11 + 0x30) - *(longlong *)(uVar11 + 0x38)) -
              *(longlong *)(uVar11 + 0x20))) {
            LOCK();
            plVar1 = (longlong *)(uVar11 + 0x30);
            lVar4 = *plVar1;
            *plVar1 = *plVar1 + 1;
            UNLOCK();
            if (0x8000000000000000 <
                (ulonglong)((lVar4 - *(longlong *)(uVar11 + 0x20)) - *(longlong *)(uVar11 + 0x38)))
            {
              LOCK();
              puVar2 = (ulonglong *)(uVar11 + 0x28);
              uVar12 = *puVar2;
              *puVar2 = *puVar2 + 1;
              UNLOCK();
              plVar1 = *(longlong **)(uVar11 + 0x58);
              lVar4 = *(longlong *)
                       (plVar1[2] + 8 +
                       (((uVar12 & 0xffffffffffffffe0) - *(longlong *)(plVar1[2] + plVar1[1] * 0x10)
                        >> 5) + plVar1[1] & *plVar1 - 1U) * 0x10);
              uVar14 = (ulonglong)((uint)uVar12 & 0x1f);
              puVar3 = (uint64_t *)(uVar14 * 0x100 + lVar4);
              uVar8 = puVar3[1];
              *param_2 = *puVar3;
              param_2[1] = uVar8;
              uVar8 = puVar3[3];
              param_2[2] = puVar3[2];
              param_2[3] = uVar8;
              uVar5 = *(int32_t *)((longlong)puVar3 + 0x24);
              uVar6 = *(int32_t *)(puVar3 + 5);
              uVar7 = *(int32_t *)((longlong)puVar3 + 0x2c);
              *(int32_t *)(param_2 + 4) = *(int32_t *)(puVar3 + 4);
              *(int32_t *)((longlong)param_2 + 0x24) = uVar5;
              *(int32_t *)(param_2 + 5) = uVar6;
              *(int32_t *)((longlong)param_2 + 0x2c) = uVar7;
              param_2[6] = puVar3[6];
              lVar19 = lVar4;
              FUN_18033dc50(param_2 + 7,puVar3 + 7);
              FUN_1808fc8a8(puVar3 + 7,0x30,4,FUN_18004a130,uVar18,lVar19,uVar12);
              *(int8_t *)((lVar4 - uVar14) + 0x202f) = 1;
              cVar9 = '\x01';
              goto LAB_18050127e;
            }
            LOCK();
            *(longlong *)(uVar11 + 0x38) = *(longlong *)(uVar11 + 0x38) + 1;
            UNLOCK();
          }
          cVar9 = '\0';
        }
LAB_18050127e:
        if (cVar9 != '\0') {
          return 1;
        }
      }
      plVar1 = (longlong *)(uVar11 + 8);
      uVar11 = *plVar1 - 8;
      if (*plVar1 == 0) {
        uVar11 = uVar15;
      }
    }
  }
  return 0;
}



uint64_t FUN_1805012c0(ulonglong *param_1,uint64_t *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar8 = 0;
  uVar7 = *param_1;
  uVar5 = uVar8;
  uVar10 = uVar8;
  uVar12 = uVar8;
  do {
    uVar9 = uVar5;
    uVar11 = uVar10;
    if (uVar7 == 0) break;
    uVar6 = *(longlong *)(uVar7 + 0x20) - *(longlong *)(uVar7 + 0x28);
    if ((ulonglong)(*(longlong *)(uVar7 + 0x28) - *(longlong *)(uVar7 + 0x20)) < 0x8000000000000001)
    {
      uVar6 = uVar8;
    }
    if ((uVar6 != 0) && (uVar12 = uVar12 + 1, uVar9 = uVar7, uVar11 = uVar6, uVar6 <= uVar10)) {
      uVar9 = uVar5;
      uVar11 = uVar10;
    }
    plVar1 = (longlong *)(uVar7 + 8);
    uVar7 = *plVar1 - 8;
    if (*plVar1 == 0) {
      uVar7 = uVar8;
    }
    uVar5 = uVar9;
    uVar10 = uVar11;
  } while (uVar12 < 3);
  if (uVar12 != 0) {
    cVar4 = FUN_180501bd0(uVar9,param_2,uVar7,uVar11,0xfffffffffffffffe);
    if (cVar4 != '\0') {
      return 1;
    }
    uVar7 = *param_1;
    while (uVar7 != 0) {
      if (uVar7 != uVar9) {
        if (*(char *)(uVar7 + 0x48) == '\0') {
          cVar4 = FUN_180503ba0(uVar7,param_2);
        }
        else {
          if (0x8000000000000000 <
              (ulonglong)
              ((*(longlong *)(uVar7 + 0x30) - *(longlong *)(uVar7 + 0x38)) -
              *(longlong *)(uVar7 + 0x20))) {
            LOCK();
            plVar1 = (longlong *)(uVar7 + 0x30);
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + 1;
            UNLOCK();
            if (0x8000000000000000 <
                (ulonglong)((lVar3 - *(longlong *)(uVar7 + 0x20)) - *(longlong *)(uVar7 + 0x38))) {
              LOCK();
              puVar2 = (ulonglong *)(uVar7 + 0x28);
              uVar5 = *puVar2;
              *puVar2 = *puVar2 + 1;
              UNLOCK();
              plVar1 = *(longlong **)(uVar7 + 0x58);
              lVar3 = *(longlong *)
                       (plVar1[2] + 8 +
                       (((uVar5 & 0xffffffffffffffe0) - *(longlong *)(plVar1[2] + plVar1[1] * 0x10)
                        >> 5) + plVar1[1] & *plVar1 - 1U) * 0x10);
              uVar5 = (ulonglong)((uint)uVar5 & 0x1f);
              *param_2 = *(uint64_t *)(lVar3 + uVar5 * 8);
              *(int8_t *)((lVar3 - uVar5) + 0x12f) = 1;
              cVar4 = '\x01';
              goto LAB_180501441;
            }
            LOCK();
            *(longlong *)(uVar7 + 0x38) = *(longlong *)(uVar7 + 0x38) + 1;
            UNLOCK();
          }
          cVar4 = '\0';
        }
LAB_180501441:
        if (cVar4 != '\0') {
          return 1;
        }
      }
      plVar1 = (longlong *)(uVar7 + 8);
      uVar7 = *plVar1 - 8;
      if (*plVar1 == 0) {
        uVar7 = uVar8;
      }
    }
  }
  return 0;
}





// 函数: void FUN_180501480(longlong param_1,longlong param_2)
void FUN_180501480(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int8_t auStack_ce8 [3280];
  
  if (param_1 != param_2) {
    iVar3 = 0;
    lVar1 = (param_2 - param_1) / 0xcb0;
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = lVar2 >> 1) {
      iVar3 = iVar3 + 1;
    }
    FUN_180504440(param_1,param_2,(longlong)(iVar3 + -1) * 2);
    if (lVar1 < 0x1d) {
      if (param_1 + 0xcb0 != param_2) {
                    // WARNING: Subroutine does not return
        memcpy(auStack_ce8,param_1 + 0xcb0,0xcb0);
      }
    }
    else {
      lVar1 = param_1 + 0x16340;
      if ((param_1 != lVar1) && (param_1 + 0xcb0 != lVar1)) {
                    // WARNING: Subroutine does not return
        memcpy(auStack_ce8,param_1 + 0xcb0,0xcb0);
      }
      if (lVar1 != param_2) {
                    // WARNING: Subroutine does not return
        memcpy(auStack_ce8,lVar1,0xcb0);
      }
    }
  }
  return;
}





// 函数: void FUN_180501495(longlong param_1,longlong param_2)
void FUN_180501495(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int8_t auStackX_20 [8];
  
  iVar3 = 0;
  lVar1 = (param_2 - param_1) / 0xcb0;
  for (lVar2 = lVar1; lVar2 != 0; lVar2 = lVar2 >> 1) {
    iVar3 = iVar3 + 1;
  }
  FUN_180504440(param_1,param_2,(longlong)(iVar3 + -1) * 2);
  if (lVar1 < 0x1d) {
    if (param_1 + 0xcb0 != param_2) {
                    // WARNING: Subroutine does not return
      memcpy(auStackX_20,param_1 + 0xcb0,0xcb0);
    }
  }
  else {
    lVar1 = param_1 + 0x16340;
    if ((param_1 != lVar1) && (param_1 + 0xcb0 != lVar1)) {
                    // WARNING: Subroutine does not return
      memcpy(auStackX_20,param_1 + 0xcb0,0xcb0);
    }
    if (lVar1 != param_2) {
                    // WARNING: Subroutine does not return
      memcpy(auStackX_20,lVar1,0xcb0);
    }
  }
  return;
}





// 函数: void FUN_18050176b(void)
void FUN_18050176b(void)

{
  return;
}



uint64_t FUN_180501770(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if ((uVar1 & 0x1f) != 0) {
    FUN_1805064a0((ulonglong)((uint)uVar1 & 0x1f) * 0x100 + *(longlong *)(param_1 + 0x40));
LAB_1805018a8:
    *(ulonglong *)(param_1 + 0x20) = uVar1 + 1;
    return 1;
  }
  if ((0x8000000000000000 < (*(longlong *)(param_1 + 0x28) - uVar1) - 0x20) &&
     (plVar2 = *(longlong **)(param_1 + 0x60), plVar2 != (longlong *)0x0)) {
    uVar4 = *plVar2 - 1U & plVar2[1] + 1U;
    puVar5 = *(ulonglong **)(plVar2[3] + uVar4 * 8);
    if ((*puVar5 == 1) || (puVar5[1] == 0)) {
      *puVar5 = uVar1;
      plVar2[1] = uVar4;
    }
    else {
      cVar3 = FUN_18005f430(param_1);
      if (cVar3 == '\0') {
        return 0;
      }
      plVar2 = *(longlong **)(param_1 + 0x60);
      uVar4 = *plVar2 - 1U & plVar2[1] + 1U;
      puVar5 = *(ulonglong **)(plVar2[3] + uVar4 * 8);
      *puVar5 = uVar1;
      plVar2[1] = uVar4;
    }
    uVar4 = FUN_180502080(*(uint64_t *)(param_1 + 0x50));
    if (uVar4 != 0) {
      *(uint64_t *)(uVar4 + 0x2008) = 0;
      FUN_1805064a0(uVar4,param_2,param_3,param_4,uVar6);
      puVar5[1] = uVar4;
      *(ulonglong *)(param_1 + 0x40) = uVar4;
      goto LAB_1805018a8;
    }
    plVar2 = *(longlong **)(param_1 + 0x60);
    plVar2[1] = *plVar2 - 1U & plVar2[1] - 1U;
    puVar5[1] = 0;
  }
  return 0;
}





// 函数: void FUN_1805018c0(longlong *param_1,longlong *param_2,uint64_t param_3,int32_t *param_4,
void FUN_1805018c0(longlong *param_1,longlong *param_2,uint64_t param_3,int32_t *param_4,
                  int32_t *param_5)

{
  code *pcVar1;
  uint64_t uVar2;
  longlong *plVar3;
  void *puStack_48;
  longlong lStack_40;
  int32_t uStack_30;
  
  pcVar1 = *(code **)(*param_1 + 0x78);
  uVar2 = FUN_180627ae0(&puStack_48,*param_2 + 0x20);
  FUN_180628a40(&puStack_48);
  plVar3 = (longlong *)(*pcVar1)(param_1,uVar2);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x70))(plVar3,&unknown_var_1532_ptr);
  (**(code **)(*plVar3 + 0x50))(plVar3,*param_4);
  puStack_48 = &unknown_var_3456_ptr;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_40 = 0;
  uStack_30 = 0;
  puStack_48 = &unknown_var_720_ptr;
  if (2 < (ulonglong)(param_2[1] - *param_2 >> 5)) {
    (**(code **)(*param_1 + 0x70))(param_1,&system_temp_buffer);
    pcVar1 = *(code **)(*param_1 + 0x78);
    uVar2 = FUN_180627ae0(&puStack_48,*param_2 + 0x40);
    FUN_180628a40(&puStack_48);
    plVar3 = (longlong *)(*pcVar1)(param_1,uVar2);
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x70))(plVar3,&unknown_var_1532_ptr);
    (**(code **)(*plVar3 + 0x50))(plVar3,*param_5);
    puStack_48 = &unknown_var_3456_ptr;
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_40 = 0;
    uStack_30 = 0;
    puStack_48 = &unknown_var_720_ptr;
    if (3 < (ulonglong)(param_2[1] - *param_2 >> 5)) {
      (**(code **)(*param_1 + 0x70))(param_1,&system_temp_buffer);
      FUN_180504f30(param_1,param_2);
    }
  }
  return;
}



uint64_t FUN_180501aa0(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t uVar7;
  ulonglong uVar8;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    uVar7 = FUN_180503930();
  }
  else {
    if (0x8000000000000000 <
        (ulonglong)
        ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38)) -
        *(longlong *)(param_1 + 0x20))) {
      LOCK();
      plVar1 = (longlong *)(param_1 + 0x30);
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (0x8000000000000000 <
          (ulonglong)((lVar3 - *(longlong *)(param_1 + 0x20)) - *(longlong *)(param_1 + 0x38))) {
        LOCK();
        puVar2 = (ulonglong *)(param_1 + 0x28);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 + 1;
        UNLOCK();
        plVar1 = *(longlong **)(param_1 + 0x58);
        lVar5 = plVar1[2];
        lVar6 = *(longlong *)
                 (lVar5 + 8 +
                 (((uVar4 & 0xffffffffffffffe0) - *(longlong *)(lVar5 + plVar1[1] * 0x10) >> 5) +
                  plVar1[1] & *plVar1 - 1U) * 0x10);
        uVar8 = (ulonglong)((uint)uVar4 & 0x1f);
        lVar3 = uVar8 * 0x100 + lVar6;
        FUN_180506460(param_2,lVar3,plVar1,lVar5,0xfffffffffffffffe,lVar6,uVar4);
        FUN_1808fc8a8(lVar3 + 0x38,0x30,4,FUN_18004a130);
        *(int8_t *)((lVar6 - uVar8) + 0x202f) = 1;
        return 1;
      }
      LOCK();
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
      UNLOCK();
    }
    uVar7 = 0;
  }
  return uVar7;
}



ulonglong FUN_180501bd0(longlong param_1,uint64_t *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  uint64_t uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
    uVar9 = (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38)) -
            *(longlong *)(param_1 + 0x20);
    if (0x8000000000000000 < uVar9) {
      LOCK();
      plVar1 = (longlong *)(param_1 + 0x30);
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      uVar9 = *(ulonglong *)(param_1 + 0x20);
      if (0x8000000000000000 < (lVar5 - uVar9) - *(longlong *)(param_1 + 0x38)) {
        LOCK();
        puVar2 = (ulonglong *)(param_1 + 0x28);
        uVar9 = *puVar2;
        *puVar2 = *puVar2 + 1;
        UNLOCK();
        plVar1 = *(longlong **)(param_1 + 0x58);
        lVar5 = *(longlong *)
                 (plVar1[2] + 8 +
                 (((uVar9 & 0xffffffffffffffe0) - *(longlong *)(plVar1[2] + plVar1[1] * 0x10) >> 5)
                  + plVar1[1] & *plVar1 - 1U) * 0x10);
        uVar9 = (ulonglong)((uint)uVar9 & 0x1f);
        uVar6 = *(uint64_t *)(lVar5 + uVar9 * 8);
        *param_2 = uVar6;
        *(int8_t *)((lVar5 - uVar9) + 0x12f) = 1;
        return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      LOCK();
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
      UNLOCK();
    }
    return uVar9 & 0xffffffffffffff00;
  }
  uVar9 = (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38)) -
          *(longlong *)(param_1 + 0x20);
  if (0x8000000000000000 < uVar9) {
    LOCK();
    plVar1 = (longlong *)(param_1 + 0x30);
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    uVar9 = *(ulonglong *)(param_1 + 0x20);
    if (0x8000000000000000 < (lVar5 - uVar9) - *(longlong *)(param_1 + 0x38)) {
      LOCK();
      puVar2 = (ulonglong *)(param_1 + 0x28);
      uVar9 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(longlong **)(param_1 + 0x60);
      lVar5 = *(longlong *)
               (plVar1[3] +
               (plVar1[1] +
                ((uVar9 & 0xffffffffffffffe0) - **(longlong **)(plVar1[3] + plVar1[1] * 8) >> 5) &
               *plVar1 - 1U) * 8);
      uVar7 = *(ulonglong *)(lVar5 + 8);
      lVar8 = *(longlong *)(param_1 + 0x50);
      *param_2 = *(uint64_t *)(uVar7 + (ulonglong)((uint)uVar9 & 0x1f) * 8);
      LOCK();
      puVar2 = (ulonglong *)(uVar7 + 0x108);
      uVar9 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if (uVar9 == 0x1f) {
        *(uint64_t *)(lVar5 + 8) = 0;
        LOCK();
        puVar3 = (uint *)(uVar7 + 0x130);
        uVar4 = *puVar3;
        *puVar3 = *puVar3 + 0x80000000;
        UNLOCK();
        uVar9 = (ulonglong)uVar4;
        if (uVar4 == 0) {
          uVar11 = *(ulonglong *)(lVar8 + 0x28);
          do {
            *(ulonglong *)(uVar7 + 0x138) = uVar11;
            *(int32_t *)(uVar7 + 0x130) = 1;
            puVar2 = (ulonglong *)(lVar8 + 0x28);
            LOCK();
            uVar10 = *puVar2;
            bVar12 = uVar11 == uVar10;
            if (bVar12) {
              *puVar2 = uVar7;
              uVar10 = uVar11;
            }
            UNLOCK();
            uVar9 = uVar10;
            if (bVar12) break;
            LOCK();
            puVar3 = (uint *)(uVar7 + 0x130);
            uVar4 = *puVar3;
            uVar9 = (ulonglong)uVar4;
            *puVar3 = *puVar3 + 0x7fffffff;
            UNLOCK();
            uVar11 = uVar10;
          } while (uVar4 == 1);
        }
      }
      return CONCAT71((int7)(uVar9 >> 8),1);
    }
    LOCK();
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
    UNLOCK();
  }
  return uVar9 & 0xffffffffffffff00;
}





