#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part207.c - 5 个函数

// 函数: void FUN_18018a130(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_18018a130(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  longlong lVar2;
  
  lVar2 = FUN_18018a960();
  *(int16_t *)(lVar2 + 0x18) = 0;
  param_3 = (uint64_t *)*param_3;
  *(uint64_t *)(lVar2 + 0x30) = 0;
  *(uint64_t *)(lVar2 + 0x38) = 0;
  uVar1 = param_3[1];
  *(uint64_t *)(lVar2 + 0x20) = *param_3;
  *(uint64_t *)(lVar2 + 0x28) = uVar1;
  uVar1 = param_3[3];
  *(uint64_t *)(lVar2 + 0x30) = param_3[2];
  *(uint64_t *)(lVar2 + 0x38) = uVar1;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(int8_t *)param_3 = 0;
  *(uint64_t *)(lVar2 + 0x50) = 0;
  *(uint64_t *)(lVar2 + 0x58) = 0;
  *(uint64_t *)(lVar2 + 0x50) = 0;
  *(uint64_t *)(lVar2 + 0x58) = 0xf;
  *(int8_t *)(lVar2 + 0x40) = 0;
  return;
}



uint64_t *
FUN_18018a1c0(longlong *param_1,uint64_t *param_2,longlong *param_3,uint64_t *param_4,
             uint64_t param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint64_t *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  ulonglong auStack_38 [2];
  
  if (param_1[1] == 0) {
    FUN_18018aa30(param_1,param_2,1,*param_1);
    return param_2;
  }
  plVar5 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar5) {
    plVar5 = param_3 + 4;
    uVar1 = param_3[6];
    if (0xf < (ulonglong)param_3[7]) {
      plVar5 = (longlong *)*plVar5;
    }
    uVar10 = param_4[2];
    puVar4 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar4 = (uint64_t *)*param_4;
    }
    uVar9 = uVar10;
    if (uVar1 < uVar10) {
      uVar9 = uVar1;
    }
    iVar3 = memcmp(puVar4,plVar5,uVar9);
    if (iVar3 == 0) {
      if (uVar10 < uVar1) {
LAB_18018a278:
        FUN_18018aa30(param_1,param_2,1,param_3);
        return param_2;
      }
    }
    else if (iVar3 < 0) goto LAB_18018a278;
    goto LAB_18018a57c;
  }
  if (param_3 == plVar5) {
    lVar2 = plVar5[2];
    plVar5 = (longlong *)(lVar2 + 0x20);
    uVar1 = param_4[2];
    puVar4 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar4 = (uint64_t *)*param_4;
    }
    uVar10 = *(ulonglong *)(lVar2 + 0x30);
    if (0xf < *(ulonglong *)(lVar2 + 0x38)) {
      plVar5 = (longlong *)*plVar5;
    }
    uVar9 = uVar10;
    if (uVar1 < uVar10) {
      uVar9 = uVar1;
    }
    iVar3 = memcmp(plVar5,puVar4,uVar9);
    if (iVar3 == 0) {
      if (uVar10 < uVar1) {
LAB_18018a2f8:
        FUN_18018aa30(param_1,param_2,0,lVar2);
        return param_2;
      }
    }
    else if (iVar3 < 0) goto LAB_18018a2f8;
    goto LAB_18018a57c;
  }
  plVar5 = param_3 + 4;
  uVar1 = param_3[6];
  if (0xf < (ulonglong)param_3[7]) {
    plVar5 = (longlong *)*plVar5;
  }
  uVar10 = param_4[2];
  uVar9 = param_4[3];
  puVar4 = param_4;
  if (0xf < uVar9) {
    puVar4 = (uint64_t *)*param_4;
  }
  uVar8 = uVar10;
  if (uVar1 < uVar10) {
    uVar8 = uVar1;
  }
  iVar3 = memcmp(puVar4,plVar5,uVar8);
  if (iVar3 == 0) {
    if (uVar10 < uVar1) goto LAB_18018a370;
    if (uVar10 <= uVar1) goto LAB_18018a36e;
  }
  else {
LAB_18018a36e:
    if (iVar3 < 0) {
LAB_18018a370:
      if (*(char *)((longlong)param_3 + 0x19) == '\0') {
        plVar5 = param_3;
        plVar6 = (longlong *)*param_3;
        if (*(char *)(*param_3 + 0x19) == '\0') {
          do {
            plVar7 = plVar6;
            plVar6 = (longlong *)plVar7[2];
          } while (*(char *)(plVar7[2] + 0x19) == '\0');
        }
        else {
          do {
            plVar7 = plVar5;
            plVar5 = (longlong *)plVar7[1];
            if (*(char *)((longlong)plVar5 + 0x19) != '\0') break;
          } while (plVar7 == (longlong *)*plVar5);
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            plVar7 = plVar5;
          }
        }
      }
      else {
        plVar7 = (longlong *)param_3[2];
      }
      plVar5 = plVar7 + 4;
      uVar10 = param_4[2];
      uVar9 = param_4[3];
      puVar4 = param_4;
      if (0xf < uVar9) {
        puVar4 = (uint64_t *)*param_4;
      }
      uVar1 = plVar7[6];
      if (0xf < (ulonglong)plVar7[7]) {
        plVar5 = (longlong *)*plVar5;
      }
      uVar8 = uVar1;
      if (uVar10 < uVar1) {
        uVar8 = uVar10;
      }
      iVar3 = memcmp(plVar5,puVar4,uVar8);
      if (iVar3 == 0) {
        if (uVar1 < uVar10) goto LAB_18018a5c5;
        if (uVar10 < uVar1) goto LAB_18018a3ee;
      }
      if (iVar3 < 0) {
LAB_18018a5c5:
        if (*(char *)(plVar7[2] + 0x19) != '\0') {
          FUN_18018aa30(param_1,param_2,0,plVar7);
          return param_2;
        }
        FUN_18018aa30(param_1,param_2,1,param_3);
        return param_2;
      }
    }
  }
LAB_18018a3ee:
  plVar5 = param_3 + 4;
  puVar4 = param_4;
  if (0xf < uVar9) {
    puVar4 = (uint64_t *)*param_4;
  }
  uVar1 = param_3[6];
  if (0xf < (ulonglong)param_3[7]) {
    plVar5 = (longlong *)*plVar5;
  }
  uVar9 = uVar1;
  if (uVar10 < uVar1) {
    uVar9 = uVar10;
  }
  iVar3 = memcmp(plVar5,puVar4,uVar9);
  if (iVar3 == 0) {
    if (uVar10 <= uVar1) goto LAB_18018a57c;
  }
  else if (-1 < iVar3) goto LAB_18018a57c;
  plVar5 = (longlong *)param_3[2];
  plVar6 = param_3;
  if (*(char *)(param_3[2] + 0x19) == '\0') {
    do {
      plVar7 = plVar5;
      plVar5 = (longlong *)*plVar7;
    } while (*(char *)(*plVar7 + 0x19) == '\0');
  }
  else {
    do {
      plVar7 = (longlong *)plVar6[1];
      if (*(char *)((longlong)plVar7 + 0x19) != '\0') break;
      bVar11 = plVar6 == (longlong *)plVar7[2];
      plVar6 = plVar7;
    } while (bVar11);
  }
  if (plVar7 != (longlong *)*param_1) {
    plVar5 = plVar7 + 4;
    uVar1 = plVar7[6];
    if (0xf < (ulonglong)plVar7[7]) {
      plVar5 = (longlong *)*plVar5;
    }
    uVar10 = param_4[2];
    puVar4 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar4 = (uint64_t *)*param_4;
    }
    uVar9 = uVar10;
    if (uVar1 < uVar10) {
      uVar9 = uVar1;
    }
    auStack_38[0] = uVar10;
    iVar3 = memcmp(puVar4,plVar5,uVar9);
    if (iVar3 == 0) {
      if (uVar10 < uVar1) goto LAB_18018a53f;
    }
    else if (iVar3 < 0) goto LAB_18018a53f;
LAB_18018a57c:
    puVar4 = (uint64_t *)FUN_18018ac60(param_1,auStack_38,0,param_4,param_5);
    *param_2 = *puVar4;
    return param_2;
  }
LAB_18018a53f:
  if (*(char *)(param_3[2] + 0x19) != '\0') {
    FUN_18018aa30(param_1,param_2,0,param_3);
    return param_2;
  }
  FUN_18018aa30(param_1,param_2,1,plVar7);
  return param_2;
}





// 函数: void FUN_18018a610(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_18018a610(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_18018a9f0();
  *(int16_t *)(lVar1 + 0x18) = 0;
  *(int32_t *)(lVar1 + 0x1c) = *(int32_t *)*param_3;
  *(int32_t *)(lVar1 + 0x20) = 0;
  return;
}



uint64_t *
FUN_18018a660(longlong *param_1,uint64_t *param_2,longlong *param_3,int *param_4,
             uint64_t param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint64_t *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  int8_t auStack_20 [24];
  
  if (param_1[1] == 0) {
    FUN_18018af30(param_1,param_2,1,*param_1);
  }
  else {
    plVar3 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar3) {
      if (*param_4 < *(int *)((longlong)param_3 + 0x1c)) {
        FUN_18018af30(param_1,param_2,1,param_3);
        return param_2;
      }
    }
    else if (param_3 == plVar3) {
      if (*(int *)(plVar3[2] + 0x1c) < *param_4) {
        FUN_18018af30(param_1,param_2,0);
        return param_2;
      }
    }
    else {
      iVar1 = *param_4;
      iVar2 = *(int *)((longlong)param_3 + 0x1c);
      bVar8 = SBORROW4(iVar2,iVar1);
      iVar4 = iVar2 - iVar1;
      if (iVar1 < iVar2) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar3 = param_3;
          plVar7 = (longlong *)*param_3;
          if (*(char *)(*param_3 + 0x19) == '\0') {
            do {
              plVar6 = plVar7;
              plVar7 = (longlong *)plVar6[2];
            } while (*(char *)(plVar6[2] + 0x19) == '\0');
          }
          else {
            do {
              plVar6 = plVar3;
              plVar3 = (longlong *)plVar6[1];
              if (*(char *)((longlong)plVar3 + 0x19) != '\0') break;
            } while (plVar6 == (longlong *)*plVar3);
            if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
              plVar6 = plVar3;
            }
          }
        }
        else {
          plVar6 = (longlong *)param_3[2];
        }
        iVar4 = *param_4;
        if (*(int *)((longlong)plVar6 + 0x1c) < iVar4) {
          if (*(char *)(plVar6[2] + 0x19) != '\0') {
            FUN_18018af30(param_1,param_2,0);
            return param_2;
          }
          FUN_18018af30(param_1,param_2,1,param_3);
          return param_2;
        }
        bVar8 = SBORROW4(*(int *)((longlong)param_3 + 0x1c),iVar4);
        iVar4 = *(int *)((longlong)param_3 + 0x1c) - iVar4;
      }
      if (bVar8 != iVar4 < 0) {
        plVar3 = (longlong *)param_3[2];
        plVar7 = param_3;
        if (*(char *)(param_3[2] + 0x19) == '\0') {
          do {
            plVar6 = plVar3;
            plVar3 = (longlong *)*plVar6;
          } while (*(char *)(*plVar6 + 0x19) == '\0');
        }
        else {
          do {
            plVar6 = (longlong *)plVar7[1];
            if (*(char *)((longlong)plVar6 + 0x19) != '\0') break;
            bVar8 = plVar7 == (longlong *)plVar6[2];
            plVar7 = plVar6;
          } while (bVar8);
        }
        if ((plVar6 == (longlong *)*param_1) || (*param_4 < *(int *)((longlong)plVar6 + 0x1c))) {
          if (*(char *)(param_3[2] + 0x19) != '\0') {
            FUN_18018af30(param_1,param_2,0,param_3);
            return param_2;
          }
          FUN_18018af30(param_1,param_2,1);
          return param_2;
        }
      }
    }
    puVar5 = (uint64_t *)FUN_18018b160(param_1,auStack_20,0,param_4,param_5);
    *param_2 = *puVar5;
  }
  return param_2;
}



uint64_t *
FUN_18018a8c0(longlong *param_1,uint64_t *param_2,uint64_t param_3,ulonglong param_4)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  puVar3 = (uint64_t *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (uint64_t *)FUN_18018b2e0(param_1,param_2 + 4,param_3,param_4,0xfffffffffffffffe);
    puVar1[1] = param_3;
    *(int8_t *)(puVar1 + 3) = *(int8_t *)(param_2 + 3);
    if (*(char *)((longlong)puVar3 + 0x19) != '\0') {
      puVar3 = puVar1;
    }
    uVar2 = FUN_18018a8c0(param_1,*param_2,puVar1,param_4 & 0xff);
    *puVar1 = uVar2;
    uVar2 = FUN_18018a8c0(param_1,param_2[2],puVar1,param_4 & 0xff);
    puVar1[2] = uVar2;
  }
  return puVar3;
}





// 函数: void FUN_18018a960(uint64_t *param_1)
void FUN_18018a960(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_180067110(0x60);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}





// 函数: void FUN_18018a9a0(uint64_t param_1,longlong param_2)
void FUN_18018a9a0(uint64_t param_1,longlong param_2)

{
  FUN_180067070(param_2 + 0x40);
  FUN_180067070(param_2 + 0x20);
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_2,0x60);
  return;
}





// 函数: void FUN_18018a9f0(uint64_t *param_1)
void FUN_18018a9f0(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_180067110(0x28);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}



uint64_t *
FUN_18018aa30(longlong *param_1,uint64_t *param_2,char param_3,uint64_t *param_4,
             uint64_t param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (0x2aaaaaaaaaaaaa8 < (ulonglong)param_1[1]) {
    FUN_18018a9a0(0x2aaaaaaaaaaaaa9,param_6);
    __Xlength_error_std__YAXPEBD_Z(&unknown_var_9176_ptr);
    pcVar3 = (code *)swi(3);
    puVar4 = (uint64_t *)(*pcVar3)();
    return puVar4;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (uint64_t *)*param_1) {
    ((uint64_t *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(uint64_t **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_18018aab4;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(uint64_t **)(lVar5 + 0x10)) goto LAB_18018aab4;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18018aab4:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar8 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = plVar8;
      *(int8_t *)(*(longlong *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (longlong *)param_6[1];
    plVar7 = *(longlong **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar5 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar5 + 0x18) == '\0') {
        *(int8_t *)(plVar6 + 3) = 1;
        *(int8_t *)(lVar5 + 0x18) = 1;
        *(int8_t *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
        param_6 = *(longlong **)(param_6[1] + 8);
      }
      else {
        if (param_6 == (longlong *)plVar6[2]) {
          func_0x00018008d2b0(param_1);
          param_6 = plVar6;
        }
        *(int8_t *)(param_6[1] + 0x18) = 1;
        *(int8_t *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(param_6[1] + 8);
        plVar7 = (longlong *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(longlong **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
          plVar7[2] = (longlong)plVar6;
        }
        else {
          plVar2 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
          else {
            *plVar2 = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
        }
LAB_18018ac29:
        plVar6[1] = (longlong)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (param_6 == (longlong *)*plVar6) {
          func_0x00018008d250(param_1);
          param_6 = plVar6;
        }
        *(int8_t *)(param_6[1] + 0x18) = 1;
        *(int8_t *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(param_6[1] + 8);
        plVar7 = (longlong *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(longlong **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar4 = (uint64_t *)plVar6[1];
          if (plVar6 == (longlong *)*puVar4) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        *plVar7 = (longlong)plVar6;
        goto LAB_18018ac29;
      }
      *(int8_t *)(plVar6 + 3) = 1;
      *(int8_t *)(plVar7 + 3) = 1;
      *(int8_t *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
      param_6 = *(longlong **)(param_6[1] + 8);
    }
    cVar1 = *(char *)(param_6[1] + 0x18);
  } while( true );
}



uint64_t *
FUN_18018ac60(longlong *param_1,uint64_t *param_2,char param_3,uint64_t *param_4,
             longlong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plStackX_8;
  ulonglong auStack_70 [3];
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  uint64_t uStack_38;
  
  auStack_70[1] = 0xfffffffffffffffe;
  uVar10 = 1;
  puVar7 = (uint64_t *)((uint64_t *)*param_1)[1];
  puVar8 = (uint64_t *)*param_1;
  plStackX_8 = param_1;
  while (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    if (param_3 == '\0') {
      plVar9 = puVar7 + 4;
      uVar1 = puVar7[6];
      if (0xf < (ulonglong)puVar7[7]) {
        plVar9 = (longlong *)*plVar9;
      }
      uVar2 = param_4[2];
      puVar8 = param_4;
      if (0xf < (ulonglong)param_4[3]) {
        puVar8 = (uint64_t *)*param_4;
      }
      uVar11 = uVar2;
      if (uVar1 < uVar2) {
        uVar11 = uVar1;
      }
      uStack_50 = uVar1;
      uStack_48 = uVar2;
      uVar5 = memcmp(puVar8,plVar9,uVar11);
      if (uVar5 == 0) {
        if (uVar2 < uVar1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar1 < uVar2);
        }
      }
    }
    else {
      plVar9 = puVar7 + 4;
      uVar1 = param_4[2];
      puVar8 = param_4;
      if (0xf < (ulonglong)param_4[3]) {
        puVar8 = (uint64_t *)*param_4;
      }
      uVar2 = puVar7[6];
      if (0xf < (ulonglong)puVar7[7]) {
        plVar9 = (longlong *)*plVar9;
      }
      uVar11 = uVar2;
      if (uVar1 < uVar2) {
        uVar11 = uVar1;
      }
      auStack_70[2] = uVar1;
      uStack_58 = uVar2;
      uVar5 = memcmp(plVar9,puVar8,uVar11);
      if (uVar5 == 0) {
        if (uVar2 < uVar1) {
          uVar5 = 0;
          goto LAB_18018ad63;
        }
        uVar5 = (uint)(uVar1 < uVar2);
      }
      uVar5 = ~uVar5;
    }
LAB_18018ad63:
    uVar10 = uVar5 >> 0x1f;
    puVar8 = puVar7;
    if ((int)uVar5 < 0) {
      puVar7 = (uint64_t *)*puVar7;
    }
    else {
      puVar7 = (uint64_t *)puVar7[2];
    }
  }
  puVar7 = puVar8;
  if ((char)uVar10 != '\0') {
    if (puVar8 == *(uint64_t **)*plStackX_8) {
      puVar7 = (uint64_t *)FUN_18018aa30(plStackX_8,&plStackX_8,1,puVar8);
      *param_2 = *puVar7;
      *(int8_t *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
      puVar4 = (uint64_t *)*puVar8;
      puVar3 = puVar8;
      if (*(char *)((longlong)*puVar8 + 0x19) == '\0') {
        do {
          puVar7 = puVar4;
          puVar4 = (uint64_t *)puVar7[2];
        } while (*(char *)((longlong)puVar7[2] + 0x19) == '\0');
      }
      else {
        do {
          puVar7 = puVar3;
          puVar3 = (uint64_t *)puVar7[1];
          if (*(char *)((longlong)puVar3 + 0x19) != '\0') break;
        } while (puVar7 == (uint64_t *)*puVar3);
        if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
          puVar7 = puVar3;
        }
      }
    }
    else {
      puVar7 = (uint64_t *)puVar8[2];
    }
  }
  plVar9 = puVar7 + 4;
  uVar1 = param_4[2];
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (uint64_t *)*param_4;
  }
  uVar2 = puVar7[6];
  if (0xf < (ulonglong)puVar7[7]) {
    plVar9 = (longlong *)*plVar9;
  }
  uVar11 = uVar2;
  if (uVar1 < uVar2) {
    uVar11 = uVar1;
  }
  auStack_70[0] = uVar2;
  uStack_40 = uVar1;
  iVar6 = memcmp(plVar9,param_4,uVar11);
  if (iVar6 == 0) {
    if (uVar1 <= uVar2) {
LAB_18018aebc:
      plStackX_8 = (longlong *)(param_5 + 0x20);
      FUN_180067070(param_5 + 0x40);
      FUN_180067070((longlong *)(param_5 + 0x20));
      uStack_38 = 0x60;
      free(param_5,0x60);
      *param_2 = puVar7;
      *(int8_t *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  else if (-1 < iVar6) goto LAB_18018aebc;
  puVar7 = (uint64_t *)FUN_18018aa30(plStackX_8,auStack_70,uVar10,puVar8);
  *param_2 = *puVar7;
  *(int8_t *)(param_2 + 1) = 1;
  return param_2;
}



uint64_t *
FUN_18018af30(longlong *param_1,uint64_t *param_2,char param_3,uint64_t *param_4,
             uint64_t param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (0x666666666666664 < (ulonglong)param_1[1]) {
    func_0x000180188610(0x666666666666665,param_6);
    __Xlength_error_std__YAXPEBD_Z(&unknown_var_9176_ptr);
    pcVar3 = (code *)swi(3);
    puVar4 = (uint64_t *)(*pcVar3)();
    return puVar4;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (uint64_t *)*param_1) {
    ((uint64_t *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(uint64_t **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_18018afb4;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(uint64_t **)(lVar5 + 0x10)) goto LAB_18018afb4;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18018afb4:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar8 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = plVar8;
      *(int8_t *)(*(longlong *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (longlong *)param_6[1];
    plVar7 = *(longlong **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar5 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar5 + 0x18) == '\0') {
        *(int8_t *)(plVar6 + 3) = 1;
        *(int8_t *)(lVar5 + 0x18) = 1;
        *(int8_t *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
        param_6 = *(longlong **)(param_6[1] + 8);
      }
      else {
        if (param_6 == (longlong *)plVar6[2]) {
          func_0x00018008d2b0(param_1);
          param_6 = plVar6;
        }
        *(int8_t *)(param_6[1] + 0x18) = 1;
        *(int8_t *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(param_6[1] + 8);
        plVar7 = (longlong *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(longlong **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
          plVar7[2] = (longlong)plVar6;
        }
        else {
          plVar2 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
          else {
            *plVar2 = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
        }
LAB_18018b129:
        plVar6[1] = (longlong)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (param_6 == (longlong *)*plVar6) {
          func_0x00018008d250(param_1);
          param_6 = plVar6;
        }
        *(int8_t *)(param_6[1] + 0x18) = 1;
        *(int8_t *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(param_6[1] + 8);
        plVar7 = (longlong *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(longlong **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar4 = (uint64_t *)plVar6[1];
          if (plVar6 == (longlong *)*puVar4) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        *plVar7 = (longlong)plVar6;
        goto LAB_18018b129;
      }
      *(int8_t *)(plVar6 + 3) = 1;
      *(int8_t *)(plVar7 + 3) = 1;
      *(int8_t *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
      param_6 = *(longlong **)(param_6[1] + 8);
    }
    cVar1 = *(char *)(param_6[1] + 0x18);
  } while( true );
}



uint64_t *
FUN_18018b160(longlong *param_1,uint64_t *param_2,char param_3,int *param_4,uint64_t param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  bool bVar3;
  uint64_t *puVar4;
  int8_t auStackX_8 [8];
  
  puVar1 = (uint64_t *)*param_1;
  bVar3 = true;
  puVar2 = puVar1;
  puVar4 = (uint64_t *)puVar1[1];
  while (*(char *)((longlong)puVar4 + 0x19) == '\0') {
    if (param_3 == '\0') {
      bVar3 = *param_4 < *(int *)((longlong)puVar4 + 0x1c);
    }
    else {
      bVar3 = *param_4 <= *(int *)((longlong)puVar4 + 0x1c);
    }
    puVar2 = puVar4;
    if (bVar3) {
      puVar4 = (uint64_t *)*puVar4;
    }
    else {
      puVar4 = (uint64_t *)puVar4[2];
    }
  }
  if (bVar3) {
    if (puVar2 == (uint64_t *)*puVar1) {
      puVar1 = (uint64_t *)FUN_18018af30(param_1,auStackX_8,1);
      *param_2 = *puVar1;
      *(int8_t *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar2 + 0x19) == '\0') {
      puVar1 = (uint64_t *)*puVar2;
      if (*(char *)((longlong)*puVar2 + 0x19) == '\0') {
        do {
          puVar2 = puVar1;
          puVar1 = (uint64_t *)puVar2[2];
        } while (*(char *)((longlong)puVar2[2] + 0x19) == '\0');
      }
      else {
        do {
          puVar4 = puVar2;
          puVar1 = (uint64_t *)puVar4[1];
          if (*(char *)((longlong)puVar1 + 0x19) != '\0') break;
          puVar2 = puVar1;
        } while (puVar4 == (uint64_t *)*puVar1);
        puVar2 = puVar4;
        if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
          puVar2 = puVar1;
        }
      }
    }
    else {
      puVar2 = (uint64_t *)puVar2[2];
    }
  }
  if (*(int *)((longlong)puVar2 + 0x1c) < *param_4) {
    puVar1 = (uint64_t *)FUN_18018af30(param_1,auStackX_8);
    *param_2 = *puVar1;
    *(int8_t *)(param_2 + 1) = 1;
  }
  else {
    free(param_5,0x28);
    *param_2 = puVar2;
    *(int8_t *)(param_2 + 1) = 0;
  }
  return param_2;
}



longlong FUN_18018b2e0(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  lVar1 = FUN_18018a960();
  *(int16_t *)(lVar1 + 0x18) = 0;
  FUN_18018b350(lVar1 + 0x20,param_2,param_3,param_4,uVar2);
  FUN_18018b350(lVar1 + 0x40,param_2 + 0x20);
  return lVar1;
}



uint64_t * FUN_18018b350(uint64_t *param_1,uint64_t *param_2)

{
  ulonglong uVar1;
  uint64_t uVar2;
  ulonglong uVar3;
  
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  if (uVar1 < 0x10) {
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar1;
    param_1[3] = 0xf;
    return param_1;
  }
  uVar3 = uVar1 | 0xf;
  if (0x7fffffffffffffff < uVar3) {
    uVar3 = 0x7fffffffffffffff;
  }
  uVar2 = FUN_180067110(uVar3 + 1);
  *param_1 = uVar2;
                    // WARNING: Subroutine does not return
  memcpy(uVar2,param_2,uVar1 + 1);
}



uint64_t *
FUN_18018b3f0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_5192_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_18018b430(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_1136_ptr;
  if (param_1[0x16] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x16] = 0;
  param_1[2] = &system_state_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18018b4c0(uint64_t param_1,longlong param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x30,8,3,0xfffffffffffffffe);
  *puVar2 = &unknown_var_5192_ptr;
  *puVar2 = &unknown_var_1240_ptr;
  *(int32_t *)(puVar2 + 1) = 0;
  *(int32_t *)((longlong)puVar2 + 0xc) = 0x539;
  *(int32_t *)((longlong)puVar2 + 0x1c) = 1;
  *(int32_t *)(puVar2 + 4) = 0x3e4ccccd;
  *(int32_t *)(puVar2 + 2) = 8;
  *(int32_t *)((longlong)puVar2 + 0x14) = 8;
  *(int32_t *)(puVar2 + 3) = 8;
  *(int32_t *)((longlong)puVar2 + 0x24) = 8;
  *(int32_t *)(puVar2 + 5) = 8;
  *(int32_t *)((longlong)puVar2 + 0x2c) = 8;
  if (param_2 != 0) {
    *(int32_t *)(puVar2 + 1) = *(int32_t *)(param_2 + 8);
    uVar1 = *(uint64_t *)(param_2 + 0x14);
    *(uint64_t *)((longlong)puVar2 + 0xc) = *(uint64_t *)(param_2 + 0xc);
    *(uint64_t *)((longlong)puVar2 + 0x14) = uVar1;
    *(uint64_t *)((longlong)puVar2 + 0x1c) = *(uint64_t *)(param_2 + 0x1c);
    *(int32_t *)((longlong)puVar2 + 0x24) = *(int32_t *)(param_2 + 0x24);
    *(int32_t *)(puVar2 + 5) = *(int32_t *)(param_2 + 0x28);
    *(int32_t *)((longlong)puVar2 + 0x2c) = *(int32_t *)(param_2 + 0x2c);
  }
  return puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



