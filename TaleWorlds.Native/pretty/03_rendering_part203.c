#include "TaleWorlds.Native.Split.h"

// 03_rendering_part203.c - 4 个函数

// 函数: void FUN_180386260(longlong param_1,longlong *param_2,longlong param_3,char param_4)
void FUN_180386260(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t *puVar3;
  bool bVar4;
  bool bVar5;
  uint64_t *puVar6;
  longlong lVar7;
  longlong *plStackX_10;
  int8_t auStack_70 [8];
  int8_t auStack_68 [8];
  int8_t auStack_60 [8];
  int8_t auStack_58 [8];
  int8_t auStack_50 [8];
  int8_t auStack_48 [16];
  
  bVar5 = false;
  if (param_2[0xcc] != 0) {
    puVar1 = (uint64_t *)(param_3 + 0x170);
    lVar7 = 0x28;
    do {
      (**(code **)(*param_2 + 0x28))(param_2);
      puVar6 = puVar1;
      puVar3 = *(uint64_t **)(param_3 + 0x180);
      while (puVar3 != (uint64_t *)0x0) {
        if ((longlong *)puVar3[4] < param_2) {
          puVar3 = (uint64_t *)*puVar3;
        }
        else {
          puVar6 = puVar3;
          puVar3 = (uint64_t *)puVar3[1];
        }
      }
      if ((puVar6 == puVar1) || (param_2 < (longlong *)puVar6[4])) {
        puVar6 = (uint64_t *)FUN_180387860(puVar1,auStack_70);
        puVar6 = (uint64_t *)*puVar6;
      }
      if (*(longlong *)(lVar7 + (longlong)puVar6) == 0) {
LAB_1803863b6:
        bVar4 = false;
      }
      else {
        if (param_4 != '\x01') {
          (**(code **)(*param_2 + 0x28))(param_2);
          bVar5 = true;
          puVar6 = puVar1;
          puVar3 = *(uint64_t **)(param_3 + 0x180);
          while (puVar3 != (uint64_t *)0x0) {
            if ((longlong *)puVar3[4] < param_2) {
              puVar3 = (uint64_t *)*puVar3;
            }
            else {
              puVar6 = puVar3;
              puVar3 = (uint64_t *)puVar3[1];
            }
          }
          if ((puVar6 == puVar1) || (param_2 < (longlong *)puVar6[4])) {
            puVar6 = (uint64_t *)FUN_180387860(puVar1,auStack_68);
            puVar6 = (uint64_t *)*puVar6;
          }
          plStackX_10 = param_2;
          if (*(int *)(*(longlong *)(lVar7 + (longlong)puVar6) + 0xc) == 0x40) goto LAB_1803863b6;
        }
        bVar4 = true;
      }
      if ((bVar5) && (bVar5 = false, plStackX_10 != (longlong *)0x0)) {
        (**(code **)(*plStackX_10 + 0x38))(plStackX_10);
      }
      (**(code **)(*param_2 + 0x38))(param_2);
      if (bVar4) {
        (**(code **)(*param_2 + 0x28))(param_2);
        puVar6 = puVar1;
        puVar3 = *(uint64_t **)(param_3 + 0x180);
        while (puVar3 != (uint64_t *)0x0) {
          if ((longlong *)puVar3[4] < param_2) {
            puVar3 = (uint64_t *)*puVar3;
          }
          else {
            puVar6 = puVar3;
            puVar3 = (uint64_t *)puVar3[1];
          }
        }
        if ((puVar6 == puVar1) || (param_2 < (longlong *)puVar6[4])) {
          puVar6 = (uint64_t *)FUN_180387860(puVar1,auStack_60);
          puVar6 = (uint64_t *)*puVar6;
        }
        *(int8_t *)(*(longlong *)(lVar7 + (longlong)puVar6) + 0x2c) = 0;
        (**(code **)(*param_2 + 0x38))(param_2);
        (**(code **)(*param_2 + 0x28))(param_2);
        puVar6 = puVar1;
        puVar3 = *(uint64_t **)(param_3 + 0x180);
        while (puVar3 != (uint64_t *)0x0) {
          if ((longlong *)puVar3[4] < param_2) {
            puVar3 = (uint64_t *)*puVar3;
          }
          else {
            puVar6 = puVar3;
            puVar3 = (uint64_t *)puVar3[1];
          }
        }
        if ((puVar6 == puVar1) || (param_2 < (longlong *)puVar6[4])) {
          puVar6 = (uint64_t *)FUN_180387860(puVar1,auStack_58);
          puVar6 = (uint64_t *)*puVar6;
        }
        *(int32_t *)(*(longlong *)((longlong)puVar6 + lVar7) + 8) = 0;
        (**(code **)(*param_2 + 0x38))(param_2);
        (**(code **)(*param_2 + 0x28))(param_2);
        puVar6 = puVar1;
        puVar3 = *(uint64_t **)(param_3 + 0x180);
        while (puVar3 != (uint64_t *)0x0) {
          if ((longlong *)puVar3[4] < param_2) {
            puVar3 = (uint64_t *)*puVar3;
          }
          else {
            puVar6 = puVar3;
            puVar3 = (uint64_t *)puVar3[1];
          }
        }
        if ((puVar6 == puVar1) || (param_2 < (longlong *)puVar6[4])) {
          puVar6 = (uint64_t *)FUN_180387860(puVar1,auStack_50);
          puVar6 = (uint64_t *)*puVar6;
        }
        iVar2 = *(int *)(*(longlong *)((longlong)puVar6 + lVar7) + 0xc);
        (**(code **)(*param_2 + 0x38))(param_2);
        if (iVar2 == 0x40) {
          *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
        }
        else if (iVar2 == 0x80) {
          *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
        }
        else if (iVar2 == 0x100) {
          *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
        }
        (**(code **)(*param_2 + 0x28))(param_2);
        puVar6 = puVar1;
        puVar3 = *(uint64_t **)(param_3 + 0x180);
        while (puVar3 != (uint64_t *)0x0) {
          if ((longlong *)puVar3[4] < param_2) {
            puVar3 = (uint64_t *)*puVar3;
          }
          else {
            puVar6 = puVar3;
            puVar3 = (uint64_t *)puVar3[1];
          }
        }
        if ((puVar6 == puVar1) || (param_2 < (longlong *)puVar6[4])) {
          puVar6 = (uint64_t *)FUN_180387860(puVar1,auStack_48);
          puVar6 = (uint64_t *)*puVar6;
        }
        *(uint64_t *)((longlong)puVar6 + lVar7) = 0;
        (**(code **)(*param_2 + 0x38))(param_2);
        FUN_1803d07e0(*(uint64_t *)(param_2[0xcc] + 0x10),param_2[0xcc]);
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 < 0x58);
  }
  return;
}



uint64_t FUN_180386640(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  uint64_t *puVar1;
  ulonglong *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t *puVar6;
  longlong lVar7;
  longlong lVar8;
  int8_t auStack_68 [8];
  int8_t auStack_60 [8];
  int8_t auStack_58 [8];
  int8_t auStack_50 [8];
  int8_t auStack_48 [16];
  
  lVar5 = 6;
  if ((*(byte *)(param_3 + 0xc0) & 0x80) != 0) {
    lVar5 = 1;
  }
  lVar8 = 0;
  lVar7 = 0x28;
  do {
    if (param_4 != 0x40) {
      puVar1 = (uint64_t *)(param_3 + 0x170);
      puVar2 = (ulonglong *)(param_2 + 0x3580);
      do {
        uVar3 = FUN_1803d0570(*(uint64_t *)(param_1 + 0x58),param_4);
        puVar6 = *(uint64_t **)(param_3 + 0x180);
        puVar4 = puVar1;
        if (puVar6 != (uint64_t *)0x0) {
          do {
            if ((ulonglong)puVar6[4] < *puVar2) {
              puVar6 = (uint64_t *)*puVar6;
            }
            else {
              puVar4 = puVar6;
              puVar6 = (uint64_t *)puVar6[1];
            }
          } while (puVar6 != (uint64_t *)0x0);
        }
        if ((puVar4 == puVar1) || (*puVar2 < (ulonglong)puVar4[4])) {
          puVar4 = (uint64_t *)FUN_180387860(puVar1,auStack_68);
          puVar4 = (uint64_t *)*puVar4;
        }
        *(uint64_t *)(lVar7 + (longlong)puVar4) = uVar3;
        puVar6 = *(uint64_t **)(param_3 + 0x180);
        puVar4 = puVar1;
        if (puVar6 != (uint64_t *)0x0) {
          do {
            if ((ulonglong)puVar6[4] < *puVar2) {
              puVar6 = (uint64_t *)*puVar6;
            }
            else {
              puVar4 = puVar6;
              puVar6 = (uint64_t *)puVar6[1];
            }
          } while (puVar6 != (uint64_t *)0x0);
        }
        if ((puVar4 == puVar1) || (*puVar2 < (ulonglong)puVar4[4])) {
          puVar4 = (uint64_t *)FUN_180387860(puVar1,auStack_60);
          puVar4 = (uint64_t *)*puVar4;
        }
        if (*(longlong *)(lVar7 + (longlong)puVar4) != 0) goto LAB_1803868bb;
        if (param_4 == 0x40) {
          return 0;
        }
        param_4 = param_4 / 2;
      } while (param_4 != 0x40);
    }
    puVar1 = (uint64_t *)(param_3 + 0x1a0);
    puVar6 = *(uint64_t **)(param_3 + 0x1b0);
    puVar2 = (ulonglong *)(param_2 + 0x3580);
    puVar4 = puVar1;
    if (puVar6 != (uint64_t *)0x0) {
      do {
        if ((ulonglong)puVar6[4] < *puVar2) {
          puVar6 = (uint64_t *)*puVar6;
        }
        else {
          puVar4 = puVar6;
          puVar6 = (uint64_t *)puVar6[1];
        }
      } while (puVar6 != (uint64_t *)0x0);
    }
    if ((puVar4 == puVar1) || (*puVar2 < (ulonglong)puVar4[4])) {
      puVar4 = (uint64_t *)FUN_180387860(puVar1,auStack_58);
      puVar4 = (uint64_t *)*puVar4;
    }
    uVar3 = *(uint64_t *)(lVar7 + (longlong)puVar4);
    puVar1 = (uint64_t *)(param_3 + 0x170);
    puVar6 = *(uint64_t **)(param_3 + 0x180);
    puVar4 = puVar1;
    if (puVar6 != (uint64_t *)0x0) {
      do {
        if ((ulonglong)puVar6[4] < *puVar2) {
          puVar6 = (uint64_t *)*puVar6;
        }
        else {
          puVar4 = puVar6;
          puVar6 = (uint64_t *)puVar6[1];
        }
      } while (puVar6 != (uint64_t *)0x0);
    }
    if ((puVar4 == puVar1) || (*puVar2 < (ulonglong)puVar4[4])) {
      puVar4 = (uint64_t *)FUN_180387860(puVar1,auStack_50);
      puVar4 = (uint64_t *)*puVar4;
    }
    *(uint64_t *)(lVar7 + (longlong)puVar4) = uVar3;
    puVar6 = *(uint64_t **)(param_3 + 0x180);
    puVar4 = puVar1;
    if (puVar6 != (uint64_t *)0x0) {
      do {
        if ((ulonglong)puVar6[4] < *puVar2) {
          puVar6 = (uint64_t *)*puVar6;
        }
        else {
          puVar4 = puVar6;
          puVar6 = (uint64_t *)puVar6[1];
        }
      } while (puVar6 != (uint64_t *)0x0);
    }
    if ((puVar4 == puVar1) || (*puVar2 < (ulonglong)puVar4[4])) {
      puVar4 = (uint64_t *)FUN_180387860(puVar1,auStack_48);
      puVar4 = (uint64_t *)*puVar4;
    }
    if (*(longlong *)(lVar7 + (longlong)puVar4) == 0) {
      return 0;
    }
LAB_1803868bb:
    lVar8 = lVar8 + 1;
    lVar7 = lVar7 + 8;
    if (lVar5 <= lVar8) {
      return 1;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180386900(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
void FUN_180386900(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  int32_t param_5,int32_t param_6)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  char cVar8;
  uint64_t *puVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong *in_stack_00000010;
  uint64_t uStackX_18;
  int8_t auStack_70 [8];
  int8_t auStack_68 [8];
  int8_t auStack_60 [8];
  int8_t auStack_58 [8];
  uint64_t uStack_50;
  int32_t auStack_48 [2];
  int32_t uStack_40;
  
  uStackX_18 = param_3;
  FUN_180383180(param_1,&uStackX_18,param_2);
  *(int32_t *)(param_2 + 0xd0) = *(int32_t *)(_DAT_180c86870 + 0x224);
  if (uStackX_18._6_1_ != '\0') {
    plVar10 = *(longlong **)(param_4 + 0x3580);
    bVar6 = false;
    if (plVar10[0xcc] != 0) {
      puVar1 = (uint64_t *)(param_2 + 0x170);
      lVar13 = 0x28;
      do {
        (**(code **)(*plVar10 + 0x28))(plVar10);
        puVar9 = puVar1;
        puVar2 = *(uint64_t **)(param_2 + 0x180);
        while (puVar2 != (uint64_t *)0x0) {
          if ((longlong *)puVar2[4] < plVar10) {
            puVar2 = (uint64_t *)*puVar2;
          }
          else {
            puVar9 = puVar2;
            puVar2 = (uint64_t *)puVar2[1];
          }
        }
        if ((puVar9 == puVar1) || (plVar10 < (longlong *)puVar9[4])) {
          puVar9 = (uint64_t *)FUN_180387860(puVar1,auStack_70);
          puVar9 = (uint64_t *)*puVar9;
        }
        if (*(longlong *)(lVar13 + (longlong)puVar9) == 0) {
LAB_1803863b6:
          bVar5 = false;
        }
        else {
          (**(code **)(*plVar10 + 0x28))(plVar10);
          bVar6 = true;
          puVar9 = puVar1;
          puVar2 = *(uint64_t **)(param_2 + 0x180);
          while (puVar2 != (uint64_t *)0x0) {
            if ((longlong *)puVar2[4] < plVar10) {
              puVar2 = (uint64_t *)*puVar2;
            }
            else {
              puVar9 = puVar2;
              puVar2 = (uint64_t *)puVar2[1];
            }
          }
          if ((puVar9 == puVar1) || (plVar10 < (longlong *)puVar9[4])) {
            puVar9 = (uint64_t *)FUN_180387860(puVar1,auStack_68);
            puVar9 = (uint64_t *)*puVar9;
          }
          in_stack_00000010 = plVar10;
          if (*(int *)(*(longlong *)(lVar13 + (longlong)puVar9) + 0xc) == 0x40) goto LAB_1803863b6;
          bVar6 = true;
          bVar5 = true;
        }
        if ((bVar6) && (bVar6 = false, in_stack_00000010 != (longlong *)0x0)) {
          (**(code **)(*in_stack_00000010 + 0x38))(in_stack_00000010);
        }
        (**(code **)(*plVar10 + 0x38))(plVar10);
        if (bVar5) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
          puVar9 = puVar1;
          puVar2 = *(uint64_t **)(param_2 + 0x180);
          while (puVar2 != (uint64_t *)0x0) {
            if ((longlong *)puVar2[4] < plVar10) {
              puVar2 = (uint64_t *)*puVar2;
            }
            else {
              puVar9 = puVar2;
              puVar2 = (uint64_t *)puVar2[1];
            }
          }
          if ((puVar9 == puVar1) || (plVar10 < (longlong *)puVar9[4])) {
            puVar9 = (uint64_t *)FUN_180387860(puVar1,auStack_60);
            puVar9 = (uint64_t *)*puVar9;
          }
          *(int8_t *)(*(longlong *)(lVar13 + (longlong)puVar9) + 0x2c) = 0;
          (**(code **)(*plVar10 + 0x38))(plVar10);
          (**(code **)(*plVar10 + 0x28))(plVar10);
          puVar9 = puVar1;
          puVar2 = *(uint64_t **)(param_2 + 0x180);
          while (puVar2 != (uint64_t *)0x0) {
            if ((longlong *)puVar2[4] < plVar10) {
              puVar2 = (uint64_t *)*puVar2;
            }
            else {
              puVar9 = puVar2;
              puVar2 = (uint64_t *)puVar2[1];
            }
          }
          if ((puVar9 == puVar1) || (plVar10 < (longlong *)puVar9[4])) {
            puVar9 = (uint64_t *)FUN_180387860(puVar1,auStack_58);
            puVar9 = (uint64_t *)*puVar9;
          }
          *(int32_t *)(*(longlong *)((longlong)puVar9 + lVar13) + 8) = 0;
          (**(code **)(*plVar10 + 0x38))(plVar10);
          (**(code **)(*plVar10 + 0x28))(plVar10);
          puVar9 = puVar1;
          puVar2 = *(uint64_t **)(param_2 + 0x180);
          while (puVar2 != (uint64_t *)0x0) {
            if ((longlong *)puVar2[4] < plVar10) {
              puVar2 = (uint64_t *)*puVar2;
            }
            else {
              puVar9 = puVar2;
              puVar2 = (uint64_t *)puVar2[1];
            }
          }
          if ((puVar9 == puVar1) || (plVar10 < (longlong *)puVar9[4])) {
            puVar9 = (uint64_t *)FUN_180387860(puVar1,&uStack_50);
            puVar9 = (uint64_t *)*puVar9;
          }
          iVar12 = *(int *)(*(longlong *)((longlong)puVar9 + lVar13) + 0xc);
          (**(code **)(*plVar10 + 0x38))(plVar10);
          if (iVar12 == 0x40) {
            *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
          }
          else if (iVar12 == 0x80) {
            *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
          }
          else if (iVar12 == 0x100) {
            *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
          }
          (**(code **)(*plVar10 + 0x28))(plVar10);
          puVar9 = puVar1;
          puVar2 = *(uint64_t **)(param_2 + 0x180);
          while (puVar2 != (uint64_t *)0x0) {
            if ((longlong *)puVar2[4] < plVar10) {
              puVar2 = (uint64_t *)*puVar2;
            }
            else {
              puVar9 = puVar2;
              puVar2 = (uint64_t *)puVar2[1];
            }
          }
          if ((puVar9 == puVar1) || (plVar10 < (longlong *)puVar9[4])) {
            puVar9 = (uint64_t *)FUN_180387860(puVar1,auStack_48);
            puVar9 = (uint64_t *)*puVar9;
          }
          *(uint64_t *)((longlong)puVar9 + lVar13) = 0;
          (**(code **)(*plVar10 + 0x38))(plVar10);
          FUN_1803d07e0(*(uint64_t *)(plVar10[0xcc] + 0x10),plVar10[0xcc]);
        }
        lVar13 = lVar13 + 8;
      } while (lVar13 < 0x58);
    }
    return;
  }
  if (((uStackX_18._4_1_ == '\0') || (*(char *)(param_1 + 0xb9) != '\0')) ||
     ((*(char *)(param_1 + 0x130) != '\0' && (*(int *)(param_1 + 0x54) != 0)))) goto LAB_180386ae7;
  FUN_180386260(param_1,*(uint64_t *)(param_4 + 0x3580),param_2,0);
  uVar7 = uStackX_18;
  iVar12 = (int)uStackX_18;
  if (iVar12 == 0x40) {
    plVar10 = (longlong *)FUN_180387380(param_2 + 0x1a0,param_4 + 0x3580);
    if ((*plVar10 != 0) &&
       (plVar10 = (longlong *)FUN_180387380(param_2 + 0x1a0,param_4 + 0x3580),
       *(char *)(*plVar10 + 0x2e) == '\0')) goto LAB_180386a1b;
    bVar6 = false;
  }
  else {
LAB_180386a1b:
    bVar6 = true;
  }
  cVar8 = FUN_180386640(param_1,param_4,param_2,uVar7 & 0xffffffff);
  if (cVar8 == '\0') {
    return;
  }
  if (bVar6) {
    if (iVar12 == 0x40) {
      plVar10 = (longlong *)FUN_180387380(param_2 + 0x1a0,param_4 + 0x3580);
      *(int8_t *)(*plVar10 + 0x2e) = 1;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    uVar3 = *(uint64_t *)(param_1 + 0x90);
    uVar4 = *(uint64_t *)(param_1 + 0x80);
    if ((*(byte *)(param_2 + 0xc0) & 0x80) == 0) {
      iVar12 = 0;
      do {
        uStack_40 = 0;
        auStack_48[0] = param_5;
        FUN_1803dd820(param_2,param_4,uVar4,uVar3);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 6);
      *(int *)(_DAT_180c8a9d8 + 0x14) = *(int *)(_DAT_180c8a9d8 + 0x14) + 1;
    }
    else {
      uStack_40 = param_6;
      auStack_48[0] = param_5;
      FUN_1803dd820(param_2,param_4,uVar4,uVar3);
      *(int *)(_DAT_180c8a9d8 + 0x18) = *(int *)(_DAT_180c8a9d8 + 0x18) + 1;
    }
    *(int8_t *)(param_1 + 0x51) = 1;
  }
LAB_180386ae7:
  if (uStackX_18._5_1_ != '\0') {
    if ((*(byte *)(param_2 + 0xc0) & 0x80) == 0) {
      lVar13 = 0;
      do {
        lVar11 = FUN_180387380(param_2 + 0x170,param_4 + 0x3580);
        if (*(longlong *)(lVar11 + lVar13) == 0) {
          return;
        }
        lVar13 = lVar13 + 8;
      } while (lVar13 < 0x30);
    }
    else {
      plVar10 = (longlong *)FUN_180387380(param_2 + 0x170,param_4 + 0x3580);
      if (*plVar10 == 0) {
        return;
      }
    }
    uVar3 = *(uint64_t *)(param_1 + 0x98);
    if ((*(byte *)(param_2 + 0xc0) & 0x80) == 0) {
      iVar12 = 0;
      do {
        uStack_40 = 0;
        auStack_48[0] = param_5;
        uStack_50 = uVar3;
        FUN_1803de3f0(param_2);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 6);
      *(int *)(_DAT_180c8a9d8 + 0x14) = *(int *)(_DAT_180c8a9d8 + 0x14) + 1;
    }
    else {
      uStack_40 = param_6;
      auStack_48[0] = param_5;
      uStack_50 = uVar3;
      FUN_1803de3f0(param_2);
      *(int *)(_DAT_180c8a9d8 + 0x18) = *(int *)(_DAT_180c8a9d8 + 0x18) + 1;
    }
    *(int8_t *)(param_1 + 0x51) = 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180386c10(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_180386c10(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  longlong lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  longlong lVar9;
  uint64_t *puVar10;
  int32_t uVar11;
  int8_t auStack_1a8 [32];
  int iStack_188;
  int32_t uStack_180;
  int32_t uStack_16c;
  int32_t uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  int32_t uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  int32_t uStack_13c;
  int8_t auStack_118 [32];
  int8_t auStack_f8 [144];
  float fStack_68;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  FUN_1803e0e00(param_2,param_3);
  FUN_1803deab0(param_2,param_4);
  iVar1 = *(int *)(param_1 + 0xbc);
  uVar11 = 0xffffffff;
  *(int *)(param_1 + 0xbc) = iVar1 + 1;
  if ((*(byte *)(param_2 + 0xc0) & 0x80) != 0) {
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
    uVar11 = *(int32_t *)(param_1 + 0xc0);
    *(int32_t *)(param_2 + 0x394) = uVar11;
  }
  puVar7 = (uint64_t *)0x0;
  lVar9 = 1;
  if ((*(byte *)(*(longlong *)(param_2 + 0x28) + 0x2e8) & 0xb) == 0xb) {
    uStack_148 = *(uint *)(param_2 + 0x38);
    uStack_16c = 0x7f7fffff;
    uStack_158 = uStack_148 ^ 0x80000000;
    uStack_15c = 0x7f7fffff;
    uStack_13c = 0x7f7fffff;
    uStack_14c = 0x7f7fffff;
    uStack_154 = uStack_158;
    uStack_150 = uStack_158;
    uStack_144 = uStack_148;
    uStack_140 = uStack_148;
    FUN_1800b9f60(&uStack_158);
    FUN_18063ad30(auStack_118,&uStack_158,param_3);
    if (fStack_68 <= 2.0) {
      cVar3 = func_0x0001801be000(param_4 + 0x30,auStack_f8);
      bVar2 = true;
      if (cVar3 == '\0') goto LAB_180386d68;
LAB_180386d6a:
      if (!bVar2) goto LAB_180386d88;
    }
    else {
      iVar4 = FUN_18063c930(param_4 + 0x30,auStack_118);
      if (iVar4 == 0) {
LAB_180386d68:
        bVar2 = false;
        goto LAB_180386d6a;
      }
    }
    iStack_188 = iVar1;
    uStack_180 = uVar11;
    uVar11 = FUN_180386900(param_1,param_2);
  }
  else {
LAB_180386d88:
    uVar11 = FUN_180386260(param_1,*(uint64_t *)(param_4 + 0x3580),param_2,0);
  }
  if (*_DAT_180c8a9d8 != '\0') {
    if ((*(byte *)(param_2 + 0xc0) & 0x80) == 0) {
      *(int *)(_DAT_180c8a9d8 + 4) = *(int *)(_DAT_180c8a9d8 + 4) + 1;
    }
    else {
      *(int *)(_DAT_180c8a9d8 + 8) = *(int *)(_DAT_180c8a9d8 + 8) + 1;
    }
  }
  uVar5 = FUN_1803847d0(uVar11,param_4,param_2);
  puVar10 = *(uint64_t **)(param_1 + 0xd0);
  if (puVar10 < *(uint64_t **)(param_1 + 0xd8)) {
    *(uint64_t **)(param_1 + 0xd0) = puVar10 + 1;
    *puVar10 = uVar5;
  }
  else {
    puVar8 = *(uint64_t **)(param_1 + 200);
    lVar6 = (longlong)puVar10 - (longlong)puVar8 >> 3;
    if ((lVar6 == 0) || (lVar9 = lVar6 * 2, lVar9 != 0)) {
      puVar7 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar9 * 8,*(int8_t *)(param_1 + 0xe0))
      ;
      puVar8 = *(uint64_t **)(param_1 + 200);
      puVar10 = *(uint64_t **)(param_1 + 0xd0);
    }
    if (puVar8 != puVar10) {
                    // WARNING: Subroutine does not return
      memmove(puVar7,puVar8,(longlong)puVar10 - (longlong)puVar8);
    }
    *puVar7 = uVar5;
    if (*(longlong *)(param_1 + 200) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(uint64_t **)(param_1 + 200) = puVar7;
    *(uint64_t **)(param_1 + 0xd8) = puVar7 + lVar9;
    *(uint64_t **)(param_1 + 0xd0) = puVar7 + 1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180386eb0(longlong param_1,longlong param_2)
void FUN_180386eb0(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  int8_t auStack_208 [32];
  int8_t uStack_1e8;
  int8_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  int32_t uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  int32_t uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  int32_t uStack_194;
  float fStack_180;
  int8_t auStack_178 [64];
  int8_t auStack_138 [32];
  int8_t auStack_118 [144];
  float fStack_88;
  ulonglong uStack_78;
  
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_208;
  uVar10 = 0;
  lVar14 = param_1 + 0x100;
  *(int32_t *)(param_1 + 0x54) = 0;
  puVar1 = *(uint64_t **)(param_1 + 0x110);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_18004b790(lVar14,*puVar1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  *(longlong *)lVar14 = lVar14;
  *(longlong *)(param_1 + 0x108) = lVar14;
  *(uint64_t *)(param_1 + 0x110) = 0;
  *(int8_t *)(param_1 + 0x118) = 0;
  *(uint64_t *)(param_1 + 0x120) = 0;
  lVar14 = *(longlong *)(param_1 + 0x60);
  uVar13 = uVar10;
  if (*(longlong *)(param_1 + 0x68) - lVar14 >> 4 != 0) {
    do {
      lVar12 = *(longlong *)(uVar10 + 8 + lVar14);
      FUN_180254b30(lVar12 + 0x10,auStack_178);
      if ((*(byte *)(*(longlong *)(lVar12 + 0x28) + 0x2e8) & 0xb) == 0xb) {
        uStack_1a0 = *(uint *)(lVar12 + 0x30);
        uStack_1b8 = uStack_1a0 ^ 0x80000000;
        uStack_1d0 = CONCAT44(uStack_1a0,uStack_1a0);
        uStack_1c8 = CONCAT44(0x7f7fffff,uStack_1a0);
        uStack_194 = 0x7f7fffff;
        uStack_1c0 = uStack_1a0 ^ 0x80000000;
        uStack_1bc = uStack_1a0 ^ 0x80000000;
        uStack_1b4 = 0x7f7fffff;
        uStack_1b0 = uStack_1a0 ^ 0x80000000;
        uStack_1ac = uStack_1a0 ^ 0x80000000;
        uStack_1a4 = 0x7f7fffff;
        uStack_1a8 = uStack_1b8;
        uStack_19c = uStack_1a0;
        uStack_198 = uStack_1a0;
        FUN_1800b9f60(&uStack_1b0);
        FUN_18063ad30(auStack_138,&uStack_1b0,auStack_178);
        lVar11 = *(longlong *)(param_1 + 0x90);
        if (fStack_88 <= 2.0) {
          cVar4 = func_0x0001801be000(param_2 + 0x30,auStack_118);
          if (cVar4 != '\0') {
            iVar5 = 1;
            goto LAB_18038706d;
          }
LAB_1803870a3:
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_18063c930(param_2 + 0x30,auStack_138);
          if (iVar5 == 0) goto LAB_1803870a3;
          lVar11 = *(longlong *)(param_1 + 0x90);
LAB_18038706d:
          if (((((*(byte *)(param_2 + 0x1bd8) & 2) != 0) &&
               (plVar2 = *(longlong **)(lVar11 + 0x29a8), plVar2 != (longlong *)0x0)) &&
              (fStack_180 <= 100.0)) &&
             (cVar4 = (**(code **)(*plVar2 + 0x28))(plVar2,&uStack_1b0,auStack_178,0), cVar4 == '\0'
             )) goto LAB_1803870a3;
        }
        uVar9 = (uint)(iVar5 != 0);
      }
      else {
        uVar9 = 0;
      }
      uVar9 = *(uint *)(uVar10 + lVar14) & 0x7fffffff | uVar9 << 0x1f;
      *(uint *)(uVar10 + lVar14) = uVar9;
      fVar15 = (float)FUN_1803dd6b0(lVar12,param_2 + 0x30,(int)*(float *)(param_2 + 0x11c20),
                                    (int)*(float *)(param_2 + 0x11c24));
      *(uint *)(uVar10 + lVar14) = ((int)fVar15 ^ uVar9) & 0x7fffffff ^ uVar9;
      if ((*(char *)(param_1 + 0x50) != '\0') && (*(int *)(lVar12 + 200) != 0)) {
        FUN_1803e1720(*(uint64_t *)(uVar10 + 8 + lVar14),param_2);
      }
      lVar14 = *(longlong *)(param_1 + 0x60);
      uVar9 = (int)uVar13 + 1;
      uVar10 = uVar10 + 0x10;
      uVar13 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0x68) - lVar14 >> 4));
  }
  lVar12 = *(longlong *)(param_1 + 0x68);
  lVar11 = lVar12 - lVar14 >> 4;
  if (1 < lVar11) {
    puVar7 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,lVar11 * 0x10,system_allocation_flags);
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    for (puVar8 = puVar7; puVar8 != puVar7 + lVar11 * 4; puVar8 = puVar8 + 4) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
    }
    uStack_1e8 = uStack_1d8;
    iVar5 = FUN_180388370(lVar14,lVar12,puVar7,0);
    if ((iVar5 == 1) && (puVar7 != puVar7 + lVar11 * 4)) {
                    // WARNING: Subroutine does not return
      memmove(lVar14,puVar7,lVar11 * 0x10);
    }
    if (puVar7 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar7);
    }
  }
  iVar5 = *(int *)(_DAT_180c86870 + 0x224);
  iVar6 = (int)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4) + -1;
  lVar14 = (longlong)iVar6;
  if (-1 < iVar6) {
    lVar12 = lVar14 << 4;
    do {
      lVar11 = *(longlong *)(param_1 + 0x60);
      lVar3 = *(longlong *)(lVar12 + 8 + lVar11);
      FUN_180254b30(lVar3 + 0x10,auStack_178);
      if (*(int *)(lVar12 + lVar11) < 0) {
        FUN_180386c10(param_1,lVar3,auStack_178);
      }
      else if (*(int *)(lVar3 + 0xd0) != iVar5) {
        FUN_180386260(param_1,*(uint64_t *)(param_2 + 0x3580),lVar3,0);
      }
      lVar12 = lVar12 + -0x10;
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_208);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



