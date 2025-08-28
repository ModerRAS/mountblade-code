#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_14_part011.c - 9 个函数

// 函数: void FUN_1808f0ed0(uint64_t param_1,uint64_t *param_2)
void FUN_1808f0ed0(uint64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1808f1770();
  *(int16_t *)(lVar2 + 0x18) = 0;
  *(uint64_t *)(lVar2 + 0x30) = 0;
  *(uint64_t *)(lVar2 + 0x38) = 0;
  uVar1 = param_2[1];
  *(uint64_t *)(lVar2 + 0x20) = *param_2;
  *(uint64_t *)(lVar2 + 0x28) = uVar1;
  uVar1 = param_2[3];
  *(uint64_t *)(lVar2 + 0x30) = param_2[2];
  *(uint64_t *)(lVar2 + 0x38) = uVar1;
  param_2[2] = 0;
  param_2[3] = 7;
  *(int16_t *)param_2 = 0;
  return;
}



uint64_t *
FUN_1808f0f30(longlong *param_1,uint64_t *param_2,char param_3,uint64_t *param_4,
             uint64_t param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong *plVar5;
  uint64_t *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (0x3fffffffffffffd < (ulonglong)param_1[1]) {
    __Xlength_error_std__YAXPEBD_Z(&unknown_var_9176_ptr);
    pcVar4 = (code *)swi(3);
    puVar6 = (uint64_t *)(*pcVar4)();
    return puVar6;
  }
  plVar5 = (longlong *)FUN_1808f0ed0(param_1,param_5);
  param_1[1] = param_1[1] + 1;
  plVar5[1] = (longlong)param_4;
  if (param_4 == (uint64_t *)*param_1) {
    ((uint64_t *)*param_1)[1] = plVar5;
    *(longlong **)*param_1 = plVar5;
    *(longlong **)(*param_1 + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(uint64_t **)(*param_1 + 0x10)) {
      *(longlong **)(*param_1 + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(uint64_t **)*param_1) {
      *(longlong **)*param_1 = plVar5;
    }
  }
  cVar1 = *(char *)(plVar5[1] + 0x18);
  plVar11 = plVar5;
  do {
    if (cVar1 != '\0') {
      lVar8 = *(longlong *)(*param_1 + 8);
      *param_2 = plVar5;
      *(int8_t *)(lVar8 + 0x18) = 1;
      return param_2;
    }
    plVar2 = (longlong *)plVar11[1];
    plVar9 = plVar11 + 1;
    plVar10 = plVar2 + 1;
    lVar8 = *(longlong *)plVar2[1];
    if (plVar2 == (longlong *)lVar8) {
      lVar8 = ((longlong *)plVar2[1])[2];
      if (*(char *)(lVar8 + 0x18) != '\0') {
        plVar3 = (longlong *)plVar2[2];
        plVar7 = plVar2;
        if (plVar11 == plVar3) {
          plVar2[2] = *plVar3;
          if (*(char *)(*plVar3 + 0x19) == '\0') {
            *(longlong **)(*plVar3 + 8) = plVar2;
          }
          plVar3[1] = *plVar10;
          plVar7 = plVar3;
          plVar9 = plVar10;
          if (plVar2 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar3;
            *plVar3 = (longlong)plVar2;
            *plVar10 = (longlong)plVar3;
            plVar11 = plVar2;
          }
          else {
            plVar11 = (longlong *)*plVar10;
            if (plVar2 == (longlong *)*plVar11) {
              *plVar11 = (longlong)plVar3;
              *plVar3 = (longlong)plVar2;
              *plVar10 = (longlong)plVar3;
              plVar11 = plVar2;
            }
            else {
              plVar11[2] = (longlong)plVar3;
              *plVar3 = (longlong)plVar2;
              *plVar10 = (longlong)plVar3;
              plVar11 = plVar2;
            }
          }
        }
        *(int8_t *)(plVar7 + 3) = 1;
        *(int8_t *)(*(longlong *)(*plVar9 + 8) + 0x18) = 0;
        plVar9 = *(longlong **)(*plVar9 + 8);
        plVar10 = (longlong *)*plVar9;
        *plVar9 = plVar10[2];
        if (*(char *)(plVar10[2] + 0x19) == '\0') {
          *(longlong **)(plVar10[2] + 8) = plVar9;
        }
        plVar10[1] = plVar9[1];
        if (plVar9 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar10;
          plVar10[2] = (longlong)plVar9;
        }
        else {
          plVar2 = (longlong *)plVar9[1];
          if (plVar9 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar10;
            plVar10[2] = (longlong)plVar9;
          }
          else {
            *plVar2 = (longlong)plVar10;
            plVar10[2] = (longlong)plVar9;
          }
        }
        goto LAB_1808f1175;
      }
LAB_1808f10e6:
      *(int8_t *)(plVar2 + 3) = 1;
      *(int8_t *)(lVar8 + 0x18) = 1;
      *(int8_t *)(*(longlong *)(*plVar9 + 8) + 0x18) = 0;
      plVar11 = *(longlong **)(*plVar9 + 8);
    }
    else {
      if (*(char *)(lVar8 + 0x18) == '\0') goto LAB_1808f10e6;
      if (plVar11 == (longlong *)*plVar2) {
        func_0x0001808f1c90(param_1,plVar2);
        plVar11 = plVar2;
      }
      *(int8_t *)(plVar11[1] + 0x18) = 1;
      *(int8_t *)(*(longlong *)(plVar11[1] + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(plVar11[1] + 8);
      plVar10 = (longlong *)plVar9[2];
      plVar9[2] = *plVar10;
      if (*(char *)(*plVar10 + 0x19) == '\0') {
        *(longlong **)(*plVar10 + 8) = plVar9;
      }
      plVar10[1] = plVar9[1];
      if (plVar9 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar10;
      }
      else {
        puVar6 = (uint64_t *)plVar9[1];
        if (plVar9 == (longlong *)*puVar6) {
          *puVar6 = plVar10;
        }
        else {
          puVar6[2] = plVar10;
        }
      }
      *plVar10 = (longlong)plVar9;
LAB_1808f1175:
      plVar9[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar11[1] + 0x18);
  } while( true );
}






// 函数: void FUN_1808f0f6b(void)
void FUN_1808f0f6b(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint64_t *unaff_RBX;
  longlong *plVar10;
  char unaff_SIL;
  longlong *unaff_RDI;
  uint64_t *unaff_R14;
  
  plVar5 = (longlong *)FUN_1808f0ed0();
  unaff_RDI[1] = unaff_RDI[1] + 1;
  plVar5[1] = (longlong)unaff_RBX;
  if (unaff_RBX == (uint64_t *)*unaff_RDI) {
    ((uint64_t *)*unaff_RDI)[1] = plVar5;
    *(longlong **)*unaff_RDI = plVar5;
    *(longlong **)(*unaff_RDI + 0x10) = plVar5;
  }
  else if (unaff_SIL == '\0') {
    unaff_RBX[2] = plVar5;
    if (unaff_RBX == *(uint64_t **)(*unaff_RDI + 0x10)) {
      *(longlong **)(*unaff_RDI + 0x10) = plVar5;
    }
  }
  else {
    *unaff_RBX = plVar5;
    if (unaff_RBX == *(uint64_t **)*unaff_RDI) {
      *(longlong **)*unaff_RDI = plVar5;
    }
  }
  cVar1 = *(char *)(plVar5[1] + 0x18);
  plVar10 = plVar5;
  do {
    if (cVar1 != '\0') {
      lVar7 = *(longlong *)(*unaff_RDI + 8);
      *unaff_R14 = plVar5;
      *(int8_t *)(lVar7 + 0x18) = 1;
      return;
    }
    plVar2 = (longlong *)plVar10[1];
    plVar8 = plVar10 + 1;
    plVar9 = plVar2 + 1;
    lVar7 = *(longlong *)plVar2[1];
    if (plVar2 == (longlong *)lVar7) {
      lVar7 = ((longlong *)plVar2[1])[2];
      if (*(char *)(lVar7 + 0x18) != '\0') {
        plVar3 = (longlong *)plVar2[2];
        plVar6 = plVar2;
        if (plVar10 == plVar3) {
          plVar2[2] = *plVar3;
          if (*(char *)(*plVar3 + 0x19) == '\0') {
            *(longlong **)(*plVar3 + 8) = plVar2;
          }
          plVar3[1] = *plVar9;
          plVar6 = plVar3;
          plVar8 = plVar9;
          if (plVar2 == (longlong *)*(longlong *)(*unaff_RDI + 8)) {
            *(longlong **)(*unaff_RDI + 8) = plVar3;
            *plVar3 = (longlong)plVar2;
            *plVar9 = (longlong)plVar3;
            plVar10 = plVar2;
          }
          else {
            plVar10 = (longlong *)*plVar9;
            if (plVar2 == (longlong *)*plVar10) {
              *plVar10 = (longlong)plVar3;
              *plVar3 = (longlong)plVar2;
              *plVar9 = (longlong)plVar3;
              plVar10 = plVar2;
            }
            else {
              plVar10[2] = (longlong)plVar3;
              *plVar3 = (longlong)plVar2;
              *plVar9 = (longlong)plVar3;
              plVar10 = plVar2;
            }
          }
        }
        *(int8_t *)(plVar6 + 3) = 1;
        *(int8_t *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
        plVar8 = *(longlong **)(*plVar8 + 8);
        plVar9 = (longlong *)*plVar8;
        *plVar8 = plVar9[2];
        if (*(char *)(plVar9[2] + 0x19) == '\0') {
          *(longlong **)(plVar9[2] + 8) = plVar8;
        }
        plVar9[1] = plVar8[1];
        if (plVar8 == *(longlong **)(*unaff_RDI + 8)) {
          *(longlong **)(*unaff_RDI + 8) = plVar9;
          plVar9[2] = (longlong)plVar8;
        }
        else {
          plVar2 = (longlong *)plVar8[1];
          if (plVar8 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar9;
            plVar9[2] = (longlong)plVar8;
          }
          else {
            *plVar2 = (longlong)plVar9;
            plVar9[2] = (longlong)plVar8;
          }
        }
        goto LAB_1808f1175;
      }
LAB_1808f10e6:
      *(int8_t *)(plVar2 + 3) = 1;
      *(int8_t *)(lVar7 + 0x18) = 1;
      *(int8_t *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar10 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar7 + 0x18) == '\0') goto LAB_1808f10e6;
      if (plVar10 == (longlong *)*plVar2) {
        func_0x0001808f1c90();
        plVar10 = plVar2;
      }
      *(int8_t *)(plVar10[1] + 0x18) = 1;
      *(int8_t *)(*(longlong *)(plVar10[1] + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(plVar10[1] + 8);
      plVar9 = (longlong *)plVar8[2];
      plVar8[2] = *plVar9;
      if (*(char *)(*plVar9 + 0x19) == '\0') {
        *(longlong **)(*plVar9 + 8) = plVar8;
      }
      plVar9[1] = plVar8[1];
      if (plVar8 == *(longlong **)(*unaff_RDI + 8)) {
        *(longlong **)(*unaff_RDI + 8) = plVar9;
      }
      else {
        puVar4 = (uint64_t *)plVar8[1];
        if (plVar8 == (longlong *)*puVar4) {
          *puVar4 = plVar9;
        }
        else {
          puVar4[2] = plVar9;
        }
      }
      *plVar9 = (longlong)plVar8;
LAB_1808f1175:
      plVar8[1] = (longlong)plVar9;
    }
    cVar1 = *(char *)(plVar10[1] + 0x18);
  } while( true );
}






// 函数: void FUN_1808f11b3(void)
void FUN_1808f11b3(void)

{
  code *pcVar1;
  
  __Xlength_error_std__YAXPEBD_Z(&unknown_var_9176_ptr);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



uint64_t *
FUN_1808f11c0(uint64_t *param_1,uint64_t *param_2,char param_3,ushort *param_4,
             int8_t param_5)

{
  ushort *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  ushort *puVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint64_t *puStackX_8;
  uint64_t uVar12;
  int8_t auStack_30 [8];
  
  uVar12 = 0xfffffffffffffffe;
  puVar1 = (ushort *)*param_1;
  uVar9 = 1;
  cVar4 = *(char *)((longlong)*(ushort **)(puVar1 + 4) + 0x19);
  puVar5 = puVar1;
  puVar8 = *(ushort **)(puVar1 + 4);
  puVar10 = param_4;
  do {
    if (cVar4 != '\0') {
      puVar8 = puVar5;
      puStackX_8 = param_1;
      if ((char)uVar9 != '\0') {
        if (puVar5 == *(ushort **)puVar1) {
          puVar6 = (uint64_t *)
                   FUN_1808f0f30(param_1,&puStackX_8,1,puVar5,param_4,param_5,0xfffffffffffffffe);
          *param_2 = *puVar6;
          *(int8_t *)(param_2 + 1) = 1;
          return param_2;
        }
        if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
          puVar8 = *(ushort **)puVar5;
          if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
            cVar4 = *(char *)((longlong)*(ushort **)(puVar8 + 8) + 0x19);
            puVar1 = *(ushort **)(puVar8 + 8);
            while (cVar4 == '\0') {
              cVar4 = *(char *)((longlong)*(ushort **)(puVar1 + 8) + 0x19);
              puVar8 = puVar1;
              puVar1 = *(ushort **)(puVar1 + 8);
            }
          }
          else {
            cVar4 = *(char *)((longlong)*(ushort **)(puVar5 + 4) + 0x19);
            puVar1 = *(ushort **)(puVar5 + 4);
            puVar8 = puVar5;
            while ((puVar11 = puVar1, cVar4 == '\0' &&
                   (puVar10 = puVar11, puVar8 == *(ushort **)puVar11))) {
              cVar4 = *(char *)((longlong)*(ushort **)(puVar11 + 4) + 0x19);
              puVar1 = *(ushort **)(puVar11 + 4);
              puVar8 = puVar11;
            }
            if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
              puVar8 = puVar11;
            }
          }
        }
        else {
          puVar8 = *(ushort **)(puVar5 + 8);
        }
      }
      cVar4 = func_0x0001808f1690(param_1,puVar8 + 0x10,param_4,puVar10);
      if (cVar4 == '\0') {
        *param_2 = puVar8;
        *(int8_t *)(param_2 + 1) = 0;
      }
      else {
        puVar6 = (uint64_t *)
                 FUN_1808f0f30(puStackX_8,auStack_30,uVar9,puVar5,param_4,param_5,uVar12);
        *param_2 = *puVar6;
        *(int8_t *)(param_2 + 1) = 1;
      }
      return param_2;
    }
    if (param_3 == '\0') {
      puVar5 = puVar8 + 0x10;
      if (7 < *(ulonglong *)(puVar8 + 0x1c)) {
        puVar5 = *(ushort **)(puVar8 + 0x10);
      }
      puVar10 = param_4;
      if (7 < *(ulonglong *)(param_4 + 0xc)) {
        puVar10 = *(ushort **)param_4;
      }
      uVar2 = *(ulonglong *)(puVar8 + 0x18);
      uVar3 = *(ulonglong *)(param_4 + 8);
      uVar7 = uVar3;
      if (uVar2 < uVar3) {
        uVar7 = uVar2;
      }
      if (uVar7 != 0) {
        puVar10 = (ushort *)((longlong)puVar10 - (longlong)puVar5);
        do {
          if (*(ushort *)((longlong)puVar5 + (longlong)puVar10) != *puVar5) {
            uVar9 = 0;
            if (*(ushort *)((longlong)puVar5 + (longlong)puVar10) < *puVar5) {
              uVar9 = 0xffffffff;
            }
            goto LAB_1808f1341;
          }
          puVar5 = puVar5 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      uVar9 = 0xffffffff;
      if (uVar2 <= uVar3) {
        uVar9 = 0;
      }
LAB_1808f1341:
      uVar9 = uVar9 >> 0x1f;
    }
    else {
      puVar5 = param_4;
      if (7 < *(ulonglong *)(param_4 + 0xc)) {
        puVar5 = *(ushort **)param_4;
      }
      puVar10 = puVar8 + 0x10;
      if (7 < *(ulonglong *)(puVar8 + 0x1c)) {
        puVar10 = *(ushort **)(puVar8 + 0x10);
      }
      uVar2 = *(ulonglong *)(param_4 + 8);
      uVar3 = *(ulonglong *)(puVar8 + 0x18);
      uVar7 = uVar3;
      if (uVar2 < uVar3) {
        uVar7 = uVar2;
      }
      if (uVar7 != 0) {
        puVar10 = (ushort *)((longlong)puVar10 - (longlong)puVar5);
        do {
          if (*(ushort *)((longlong)puVar5 + (longlong)puVar10) != *puVar5) {
            uVar9 = 0;
            if (*(ushort *)((longlong)puVar5 + (longlong)puVar10) < *puVar5) {
              uVar9 = 0xffffffff;
            }
            uVar9 = uVar9 >> 0x1f ^ 1;
            goto LAB_1808f1344;
          }
          puVar5 = puVar5 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (uVar3 < uVar2) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
LAB_1808f1344:
    if ((char)uVar9 == '\0') {
      puVar11 = *(ushort **)(puVar8 + 8);
    }
    else {
      puVar11 = *(ushort **)puVar8;
    }
    cVar4 = *(char *)((longlong)puVar11 + 0x19);
    puVar5 = puVar8;
    puVar8 = puVar11;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f14a0(uint64_t *param_1,longlong param_2)
void FUN_1808f14a0(uint64_t *param_1,longlong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  
  param_1[3] = 7;
  param_1[2] = 0;
  *(int16_t *)param_1 = 0;
  uVar5 = 0xffffffffffffffff;
  do {
    uVar5 = uVar5 + 1;
  } while (*(short *)(param_2 + uVar5 * 2) != 0);
  uVar1 = param_1[3];
  if (uVar5 <= uVar1) {
    puVar6 = param_1;
    if (7 < uVar1) {
      puVar6 = (uint64_t *)*param_1;
    }
    param_1[2] = uVar5;
                    // WARNING: Subroutine does not return
    memmove(puVar6,param_2,uVar5 * 2);
  }
  if (uVar5 < 0x7fffffffffffffff) {
    uVar4 = uVar5 | 7;
    uVar7 = 0x7ffffffffffffffe;
    if (((uVar4 < 0x7fffffffffffffff) && (uVar1 <= 0x7ffffffffffffffe - (uVar1 >> 1))) &&
       (uVar1 = (uVar1 >> 1) + uVar1, uVar7 = uVar4, uVar4 < uVar1)) {
      uVar7 = uVar1;
    }
    if (_DAT_180c69e18 == (code *)0x0) {
      uVar3 = malloc(uVar7 * 2 + 2);
    }
    else {
      uVar3 = (*_DAT_180c69e18)();
    }
    param_1[2] = uVar5;
    param_1[3] = uVar7;
                    // WARNING: Subroutine does not return
    memcpy(uVar3,param_2,uVar5 * 2);
  }
  FUN_1808f1cf0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f152a(ulonglong param_1)
void FUN_1808f152a(ulonglong param_1)

{
  ulonglong uVar1;
  uint64_t uVar2;
  uint64_t unaff_RBX;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_R15;
  
  param_1 = param_1 | 7;
  if (((param_1 <= unaff_RSI) && (unaff_R15 <= unaff_RSI - (unaff_R15 >> 1))) &&
     (uVar1 = (unaff_R15 >> 1) + unaff_R15, unaff_RSI = param_1, param_1 < uVar1)) {
    unaff_RSI = uVar1;
  }
  if (_DAT_180c69e18 == (code *)0x0) {
    uVar2 = malloc(unaff_RSI * 2 + 2);
  }
  else {
    uVar2 = (*_DAT_180c69e18)();
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBX;
  *(ulonglong *)(unaff_RDI + 0x18) = unaff_RSI;
                    // WARNING: Subroutine does not return
  memcpy(uVar2);
}






// 函数: void FUN_1808f15c2(void)
void FUN_1808f15c2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f15f0(longlong *param_1)
void FUN_1808f15f0(longlong *param_1)

{
  if ((7 < (ulonglong)param_1[3]) && (*param_1 != 0)) {
    if (_DAT_180c69e10 == (code *)0x0) {
      free();
    }
    else {
      (*_DAT_180c69e10)();
    }
  }
  param_1[2] = 0;
  param_1[3] = 7;
  *(int16_t *)param_1 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f1640(longlong *param_1)
void FUN_1808f1640(longlong *param_1)

{
  int8_t auStackX_8 [32];
  
  FUN_1808f4510(param_1,auStackX_8,*(uint64_t *)*param_1,(uint64_t *)*param_1,0xfffffffffffffffe
               );
  if (*param_1 != 0) {
    if (_DAT_180c69e10 == (code *)0x0) {
      free();
    }
    else {
      (*_DAT_180c69e10)();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808f1720(void)
void FUN_1808f1720(void)

{
  longlong lVar1;
  
  if (_DAT_180c69e18 == (code *)0x0) {
    lVar1 = malloc(0x40);
  }
  else {
    lVar1 = (*_DAT_180c69e18)();
  }
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(int16_t *)(lVar1 + 0x18) = 0x101;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1808f1770(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  if (_DAT_180c69e18 == (code *)0x0) {
    puVar1 = (uint64_t *)malloc(0x40);
  }
  else {
    puVar1 = (uint64_t *)(*_DAT_180c69e18)();
  }
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




