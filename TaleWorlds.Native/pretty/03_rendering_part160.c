#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part160.c - 14 个函数

// 函数: void FUN_1803685c0(longlong param_1)
void FUN_1803685c0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_1803685e0(longlong param_1)
void FUN_1803685e0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180368620(longlong param_1)
void FUN_180368620(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *puVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int8_t auStack_178 [32];
  uint uStack_158;
  longlong *plStack_150;
  longlong *plStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  longlong *plStack_130;
  ulonglong uStack_128;
  longlong *plStack_120;
  longlong *plStack_118;
  longlong *plStack_110;
  uint uStack_108;
  uint64_t uStack_100;
  void *puStack_f8;
  char *pcStack_f0;
  uint uStack_e8;
  char acStack_e0 [72];
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_100 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
  lVar9 = *(longlong *)(lVar2 + 0x60860) - *(longlong *)(lVar2 + 0x60858) >> 3;
  uStack_108 = *(uint *)(lVar2 + 0x60870);
  plVar12 = (longlong *)0x0;
  plVar4 = plVar12;
  if (lVar9 != 0) {
    plVar4 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar9 * 8,uStack_108 & 0xff);
  }
  plStack_110 = plVar4 + lVar9;
  plVar11 = *(longlong **)(lVar2 + 0x60860);
  plVar13 = plVar4;
  plStack_140 = plVar4;
  plStack_138 = plVar4;
  plStack_120 = plVar4;
  plStack_118 = plVar4;
  for (plVar10 = *(longlong **)(lVar2 + 0x60858); plVar10 != plVar11; plVar10 = plVar10 + 1) {
    plVar3 = (longlong *)*plVar10;
    *plVar13 = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))();
    }
    plVar13 = plVar13 + 1;
  }
  puStack_98 = &unknown_var_3480_ptr;
  puStack_90 = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 9;
  plStack_140 = plVar13;
  plStack_118 = plVar13;
  strcpy_s(auStack_80,0x40,&unknown_var_9584_ptr);
  puStack_f8 = &unknown_var_3480_ptr;
  pcStack_f0 = acStack_e0;
  acStack_e0[0] = '\0';
  uStack_e8 = 6;
  strcpy_s(acStack_e0,0x40,&unknown_var_9640_ptr);
  uStack_158 = 0;
  uVar14 = (longlong)plVar13 - (longlong)plVar4 >> 3;
  plVar11 = plVar4;
  uStack_128 = uVar14;
  if (uVar14 != 0) {
    do {
      uVar8 = (uint)plVar12;
      plVar12 = (longlong *)*plVar4;
      puVar5 = &system_buffer_ptr;
      if ((void *)plVar12[0x52] != (void *)0x0) {
        puVar5 = (void *)plVar12[0x52];
      }
      plStack_148 = plVar4;
      lVar9 = strstr(puVar5);
      if (lVar9 != 0) {
        FUN_180398450(lVar2 + 0x607e0);
      }
      if (uStack_e8 <= *(uint *)(plVar12 + 0x53)) {
        uVar7 = 0;
        if (uStack_e8 != 0) {
          pcVar6 = pcStack_f0;
          do {
            if (pcVar6[plVar12[0x52] - (longlong)pcStack_f0] != *pcVar6) goto LAB_1803689cb;
            uVar7 = uVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar7 < uStack_e8);
        }
        plStack_150 = plVar12;
        (**(code **)(*plVar12 + 0x28))(plVar12);
        plVar11 = *(longlong **)(lVar2 + 0x60d18);
        if (plVar11 < *(longlong **)(lVar2 + 0x60d20)) {
          *(longlong **)(lVar2 + 0x60d18) = plVar11 + 1;
          *plVar11 = (longlong)plVar12;
          plStack_150 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(lVar2 + 0x60d10);
          lVar9 = (longlong)plVar11 - (longlong)plVar4 >> 3;
          if (lVar9 == 0) {
            lVar9 = 1;
LAB_1803688af:
            plStack_130 = (longlong *)
                          FUN_18062b420(_DAT_180c8ed18,lVar9 * 8,*(int8_t *)(lVar2 + 0x60d28));
            plVar11 = *(longlong **)(lVar2 + 0x60d18);
            plVar4 = *(longlong **)(lVar2 + 0x60d10);
            plVar10 = plStack_130;
          }
          else {
            lVar9 = lVar9 * 2;
            if (lVar9 != 0) goto LAB_1803688af;
            plStack_130 = (longlong *)0x0;
            plVar10 = plStack_130;
          }
          for (; plVar4 != plVar11; plVar4 = plVar4 + 1) {
            *plStack_130 = *plVar4;
            *plVar4 = 0;
            plStack_130 = plStack_130 + 1;
          }
          *plStack_130 = (longlong)plVar12;
          plStack_150 = (longlong *)0x0;
          plStack_130 = plStack_130 + 1;
          plVar4 = *(longlong **)(lVar2 + 0x60d18);
          plVar11 = *(longlong **)(lVar2 + 0x60d10);
          if (plVar11 != plVar4) {
            do {
              if ((longlong *)*plVar11 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar11 + 0x38))();
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 != plVar4);
            plVar11 = *(longlong **)(lVar2 + 0x60d10);
          }
          if (plVar11 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar11);
          }
          *(longlong **)(lVar2 + 0x60d10) = plVar10;
          *(longlong **)(lVar2 + 0x60d18) = plStack_130;
          *(longlong **)(lVar2 + 0x60d20) = plVar10 + lVar9;
          uVar14 = uStack_128;
          plVar4 = plStack_148;
          uVar8 = uStack_158;
        }
        *(uint *)((longlong)plVar12 + 0x2ac) = *(uint *)((longlong)plVar12 + 0x2ac) | 0x10000000;
        iVar1 = (int)plVar12[0x57];
        if (((iVar1 != -1) && ((ulonglong)(longlong)iVar1 < *(ulonglong *)(lVar2 + 0x60838))) &&
           ((*(ulonglong *)(*(longlong *)(lVar2 + 0x60830) + (longlong)iVar1 * 0x10) &
            0xffffffff00000000) != 0)) {
          FUN_180398450(lVar2 + 0x607e0,plVar12);
        }
      }
LAB_1803689cb:
      uStack_158 = uVar8 + 1;
      plVar12 = (longlong *)(ulonglong)uStack_158;
      plVar4 = plVar4 + 1;
      plVar13 = plStack_140;
      plVar11 = plStack_138;
      plStack_148 = plVar4;
    } while ((ulonglong)(longlong)(int)uStack_158 < uVar14);
  }
  puStack_f8 = &unknown_var_720_ptr;
  puStack_98 = &unknown_var_720_ptr;
  for (plVar4 = plVar11; plVar4 != plVar13; plVar4 = plVar4 + 1) {
    if ((longlong *)*plVar4 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar4 + 0x38))();
    }
  }
  if (plVar11 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar11);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180368a60(longlong param_1,int param_2)
void FUN_180368a60(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  lVar1 = param_1 + 0x70;
  if (param_2 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x78);
    if (lVar4 != lVar1) {
      do {
        plVar5 = *(longlong **)(lVar4 + 0x30);
        (**(code **)(*plVar5 + 200))(plVar5,0);
        lVar6 = plVar5[7];
        uVar9 = 0;
        uVar11 = 0;
        if (plVar5[8] - lVar6 >> 4 != 0) {
          do {
            lVar6 = *(longlong *)(uVar11 + lVar6);
            if (*(char *)(lVar6 + 0xf9) == '\0') {
              uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0xc0,8,9);
              uVar3 = FUN_180084ea0(uVar3);
              *(uint64_t *)(lVar6 + 0x1d8) = uVar3;
              LOCK();
              *(int8_t *)(lVar6 + 0xf9) = 1;
              UNLOCK();
            }
            lVar6 = plVar5[7];
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
            uVar11 = uVar11 + 0x10;
          } while ((ulonglong)(longlong)(int)uVar8 < (ulonglong)(plVar5[8] - lVar6 >> 4));
        }
        lVar4 = func_0x00018066bd70(lVar4);
      } while (lVar4 != lVar1);
    }
  }
  else {
    uVar9 = 0;
    while( true ) {
      lVar4 = *(longlong *)(param_1 + 0x78);
      uVar11 = 1;
      if (lVar4 == lVar1) break;
      do {
        if ((char)uVar11 == '\0') goto LAB_180368be1;
        lVar6 = *(longlong *)(lVar4 + 0x30);
        lVar7 = *(longlong *)(lVar6 + 0x38);
        uVar10 = uVar9;
        uVar12 = uVar9;
        if (*(longlong *)(lVar6 + 0x40) - lVar7 >> 4 != 0) {
          do {
            if ((char)uVar11 == '\0') break;
            cVar2 = FUN_180076b90(*(uint64_t *)(uVar12 + lVar7));
            lVar7 = *(longlong *)(lVar6 + 0x38);
            if (cVar2 == '\0') {
              uVar11 = uVar9;
            }
            uVar8 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar8;
            uVar12 = uVar12 + 0x10;
          } while ((ulonglong)(longlong)(int)uVar8 <
                   (ulonglong)(*(longlong *)(lVar6 + 0x40) - lVar7 >> 4));
        }
        lVar4 = func_0x00018066bd70(lVar4);
      } while (lVar4 != lVar1);
      if ((char)uVar11 != '\0') {
        return;
      }
LAB_180368be1:
      uVar3 = _DAT_180c82868;
      lVar4 = FUN_18005e890(_DAT_180c82868);
      if (lVar4 != 0) {
        plVar5 = (longlong *)FUN_18005e890(uVar3);
        (**(code **)(*plVar5 + 0x20))(plVar5,0);
      }
    }
  }
  return;
}





// 函数: void FUN_180368c20(longlong param_1)
void FUN_180368c20(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180368c26(longlong param_1)
void FUN_180368c26(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180368c50(void)
void FUN_180368c50(void)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  longlong unaff_R14;
  uint64_t unaff_R15;
  
  do {
    lVar3 = *(longlong *)(unaff_R14 + unaff_RDI * 8);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *(uint64_t *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < *(ulonglong *)(unaff_RBP + 0x10)) &&
     (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180368c86(void)
void FUN_180368c86(void)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  uint64_t unaff_R15;
  
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < unaff_RSI) && (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180368ca4(void)
void FUN_180368ca4(void)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  
  puVar2 = *(uint64_t **)(unaff_RBP + 8);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180368cc0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4)
void FUN_180368cc0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  bool bVar6;
  longlong lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  
  lVar7 = FUN_18062b420(_DAT_180c8ed18,0x38,*(int8_t *)(param_1 + 5),param_4,0xfffffffffffffffe)
  ;
  puVar1 = (ulonglong *)(lVar7 + 0x20);
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  *(int32_t *)puVar1 = *param_4;
  *(int32_t *)(lVar7 + 0x24) = uVar3;
  *(int32_t *)(lVar7 + 0x28) = uVar4;
  *(int32_t *)(lVar7 + 0x2c) = uVar5;
  plVar2 = *(longlong **)(param_4 + 4);
  *(longlong **)(lVar7 + 0x30) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  bVar6 = true;
  puVar9 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    puVar8 = (uint64_t *)param_1[2];
    do {
      puVar9 = puVar8;
      if ((*puVar1 < (ulonglong)puVar9[4]) ||
         ((*puVar1 <= (ulonglong)puVar9[4] && (*(byte *)(lVar7 + 0x28) < *(byte *)(puVar9 + 5))))) {
        bVar6 = true;
        puVar8 = (uint64_t *)puVar9[1];
      }
      else {
        bVar6 = false;
        puVar8 = (uint64_t *)*puVar9;
      }
    } while (puVar8 != (uint64_t *)0x0);
  }
  puVar8 = puVar9;
  if (bVar6) {
    if (puVar9 != (uint64_t *)param_1[1]) {
      puVar8 = (uint64_t *)func_0x00018066b9a0(puVar9);
      goto LAB_180368d81;
    }
  }
  else {
LAB_180368d81:
    if ((*puVar1 <= (ulonglong)puVar8[4]) &&
       ((*puVar1 < (ulonglong)puVar8[4] || (*(byte *)(lVar7 + 0x28) <= *(byte *)(puVar8 + 5))))) {
      if (*(longlong **)(lVar7 + 0x30) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar7 + 0x30) + 0x38))();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar7);
    }
  }
  if (puVar9 != param_1) {
    if (((ulonglong)puVar9[4] <= *puVar1) &&
       (((ulonglong)puVar9[4] < *puVar1 || (*(byte *)(puVar9 + 5) <= *(byte *)(lVar7 + 0x28))))) {
      uVar10 = 1;
      goto LAB_180368ddf;
    }
  }
  uVar10 = 0;
LAB_180368ddf:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,puVar9,param_1,uVar10);
}





// 函数: void FUN_180368e20(longlong param_1,longlong param_2,uint64_t param_3)
void FUN_180368e20(longlong param_1,longlong param_2,uint64_t param_3)

{
  if (param_1 != param_2) {
                    // WARNING: Subroutine does not return
    memmove(param_3,param_1,param_2 - param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180368e80(longlong param_1,longlong param_2)
void FUN_180368e80(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,param_2 * 8 + 8,8,*(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar1,0,param_2 * 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180368f60(uint64_t param_1,uint64_t param_2)
void FUN_180368f60(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  void *puStack_40;
  int32_t *puStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  puVar2 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x88,8,3,0xfffffffffffffffe);
  puVar4 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar4 = &unknown_var_560_ptr;
  *(int32_t *)(puVar4 + 0x10) = 0;
  puStack_40 = &unknown_var_3456_ptr;
  uStack_28 = 0;
  puStack_38 = (int32_t *)0x0;
  uStack_30 = 0;
  puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_38 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_28 = CONCAT44(uStack_28._4_4_,uVar1);
  *puVar3 = 0x65657053;
  *(int16_t *)(puVar3 + 1) = 100;
  uStack_30 = 5;
  FUN_1803460a0(puVar2,&puStack_40,puVar2 + 0x10,2);
  puStack_40 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}





// 函数: void FUN_1803690a0(longlong param_1,float param_2)
void FUN_1803690a0(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  bool bVar30;
  char cVar31;
  int iVar32;
  longlong lVar33;
  longlong lVar34;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int32_t uStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int32_t uStack_c;
  
  lVar33 = *(longlong *)(param_1 + 0x18);
  uStack_48 = *(uint64_t *)(lVar33 + 0x30);
  uStack_40 = *(uint64_t *)(lVar33 + 0x38);
  uStack_38 = *(uint64_t *)(lVar33 + 0x40);
  uStack_30 = *(uint64_t *)(lVar33 + 0x48);
  fStack_28 = *(float *)(lVar33 + 0x50);
  fStack_24 = *(float *)(lVar33 + 0x54);
  fStack_20 = *(float *)(lVar33 + 0x58);
  uStack_1c = *(int32_t *)(lVar33 + 0x5c);
  fStack_18 = *(float *)(lVar33 + 0x60);
  fStack_14 = *(float *)(lVar33 + 100);
  fStack_10 = *(float *)(lVar33 + 0x68);
  uStack_c = *(int32_t *)(lVar33 + 0x6c);
  FUN_180085ac0(&uStack_48,*(float *)(param_1 + 0x80) * 0.01 * param_2);
  if (((((((fStack_18 == *(float *)(lVar33 + 0x60)) && (fStack_14 == *(float *)(lVar33 + 100))) &&
         (fStack_10 == *(float *)(lVar33 + 0x68))) &&
        (((float)uStack_48 == *(float *)(lVar33 + 0x30) &&
         (uStack_48._4_4_ == *(float *)(lVar33 + 0x34))))) &&
       (((float)uStack_40 == *(float *)(lVar33 + 0x38) &&
        (((float)uStack_38 == *(float *)(lVar33 + 0x40) &&
         (uStack_38._4_4_ == *(float *)(lVar33 + 0x44))))))) &&
      ((float)uStack_30 == *(float *)(lVar33 + 0x48))) &&
     (((fStack_28 == *(float *)(lVar33 + 0x50) && (fStack_24 == *(float *)(lVar33 + 0x54))) &&
      (fStack_20 == *(float *)(lVar33 + 0x58))))) {
    return;
  }
  *(uint64_t *)(lVar33 + 0x30) = uStack_48;
  *(uint64_t *)(lVar33 + 0x38) = uStack_40;
  *(uint64_t *)(lVar33 + 0x40) = uStack_38;
  *(uint64_t *)(lVar33 + 0x48) = uStack_30;
  *(float *)(lVar33 + 0x50) = fStack_28;
  *(float *)(lVar33 + 0x54) = fStack_24;
  *(float *)(lVar33 + 0x58) = fStack_20;
  *(int32_t *)(lVar33 + 0x5c) = uStack_1c;
  *(float *)(lVar33 + 0x60) = fStack_18;
  *(float *)(lVar33 + 100) = fStack_14;
  *(float *)(lVar33 + 0x68) = fStack_10;
  *(int32_t *)(lVar33 + 0x6c) = uStack_c;
  FUN_180254610();
  *(byte *)(lVar33 + 0x2e8) = *(byte *)(lVar33 + 0x2e8) | 0x10;
  if (((*(uint *)(lVar33 + 0x2ac) & 0x10000000) == 0) && (*(longlong *)(lVar33 + 0x20) != 0)) {
    FUN_1801b01f0(*(longlong *)(lVar33 + 0x20),lVar33);
  }
  iVar32 = (int)(*(longlong *)(lVar33 + 0x1c8) - *(longlong *)(lVar33 + 0x1c0) >> 3);
  if (0 < iVar32) {
    lVar34 = 0;
    do {
      lVar13 = *(longlong *)(*(longlong *)(lVar33 + 0x1c0) + lVar34 * 8);
      if (((*(longlong *)(lVar33 + 0x20) == 0) ||
          (*(char *)(*(longlong *)(lVar33 + 0x20) + 0x2a62) == '\0')) ||
         ((*(longlong **)(lVar13 + 0x270) == (longlong *)0x0 ||
          ((cVar31 = (**(code **)(**(longlong **)(lVar13 + 0x270) + 0x70))(), cVar31 == '\0' ||
           (cVar31 = (**(code **)(**(longlong **)(lVar13 + 0x270) + 0x78))(), cVar31 == '\0')))))) {
        bVar30 = false;
      }
      else {
        bVar30 = true;
      }
      if (!bVar30) {
        fVar14 = *(float *)(lVar33 + 0x70);
        fVar15 = *(float *)(lVar33 + 0x74);
        fVar16 = *(float *)(lVar33 + 0x78);
        fVar17 = *(float *)(lVar33 + 0x7c);
        fVar18 = *(float *)(lVar33 + 0x80);
        fVar19 = *(float *)(lVar33 + 0x84);
        fVar20 = *(float *)(lVar33 + 0x88);
        fVar21 = *(float *)(lVar33 + 0x8c);
        fVar22 = *(float *)(lVar33 + 0x90);
        fVar23 = *(float *)(lVar33 + 0x94);
        fVar24 = *(float *)(lVar33 + 0x98);
        fVar25 = *(float *)(lVar33 + 0x9c);
        fVar1 = *(float *)(lVar13 + 0x34);
        fVar2 = *(float *)(lVar13 + 0x30);
        fVar3 = *(float *)(lVar13 + 0x38);
        fVar4 = *(float *)(lVar13 + 0x44);
        fVar5 = *(float *)(lVar13 + 0x54);
        fVar6 = *(float *)(lVar13 + 100);
        fVar7 = *(float *)(lVar13 + 0x40);
        fVar8 = *(float *)(lVar13 + 0x48);
        fVar9 = *(float *)(lVar13 + 0x50);
        fVar10 = *(float *)(lVar13 + 0x58);
        fVar11 = *(float *)(lVar13 + 0x60);
        fVar12 = *(float *)(lVar13 + 0x68);
        fVar26 = *(float *)(lVar33 + 0xa0);
        fVar27 = *(float *)(lVar33 + 0xa4);
        fVar28 = *(float *)(lVar33 + 0xa8);
        fVar29 = *(float *)(lVar33 + 0xac);
        *(float *)(lVar13 + 0x70) = fVar1 * fVar18 + fVar2 * fVar14 + fVar3 * fVar22;
        *(float *)(lVar13 + 0x74) = fVar1 * fVar19 + fVar2 * fVar15 + fVar3 * fVar23;
        *(float *)(lVar13 + 0x78) = fVar1 * fVar20 + fVar2 * fVar16 + fVar3 * fVar24;
        *(float *)(lVar13 + 0x7c) = fVar1 * fVar21 + fVar2 * fVar17 + fVar3 * fVar25;
        *(float *)(lVar13 + 0x80) = fVar4 * fVar18 + fVar7 * fVar14 + fVar8 * fVar22;
        *(float *)(lVar13 + 0x84) = fVar4 * fVar19 + fVar7 * fVar15 + fVar8 * fVar23;
        *(float *)(lVar13 + 0x88) = fVar4 * fVar20 + fVar7 * fVar16 + fVar8 * fVar24;
        *(float *)(lVar13 + 0x8c) = fVar4 * fVar21 + fVar7 * fVar17 + fVar8 * fVar25;
        *(float *)(lVar13 + 0x90) = fVar5 * fVar18 + fVar9 * fVar14 + fVar10 * fVar22;
        *(float *)(lVar13 + 0x94) = fVar5 * fVar19 + fVar9 * fVar15 + fVar10 * fVar23;
        *(float *)(lVar13 + 0x98) = fVar5 * fVar20 + fVar9 * fVar16 + fVar10 * fVar24;
        *(float *)(lVar13 + 0x9c) = fVar5 * fVar21 + fVar9 * fVar17 + fVar10 * fVar25;
        *(float *)(lVar13 + 0xa0) = fVar6 * fVar18 + fVar11 * fVar14 + fVar12 * fVar22 + fVar26;
        *(float *)(lVar13 + 0xa4) = fVar6 * fVar19 + fVar11 * fVar15 + fVar12 * fVar23 + fVar27;
        *(float *)(lVar13 + 0xa8) = fVar6 * fVar20 + fVar11 * fVar16 + fVar12 * fVar24 + fVar28;
        *(float *)(lVar13 + 0xac) = fVar6 * fVar21 + fVar11 * fVar17 + fVar12 * fVar25 + fVar29;
        FUN_1802eace0(lVar13);
      }
      lVar34 = lVar34 + 1;
    } while (lVar34 < iVar32);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



