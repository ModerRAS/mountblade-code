#include "TaleWorlds.Native.Split.h"

// 01_initialization_part060.c - 18 个函数

// 函数: void FUN_18007e080(longlong param_1,ulonglong param_2,longlong *param_3,longlong *param_4)
void FUN_18007e080(longlong param_1,ulonglong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lStack_70;
  int32_t uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  
  lVar5 = (param_2 & 0xff) * 0x1c0 + _DAT_180c86938;
  iVar4 = *(int *)(lVar5 + 0x70);
  lVar1 = (longlong)iVar4;
  if (0 < iVar4) {
    uStack_68 = 0;
    lStack_70 = param_1;
    FUN_18007f770(&lStack_70);
    if (lStack_60 != 0) {
      iVar3 = 0;
      iVar6 = -1;
      if (0 < iVar4) {
        piVar2 = (int *)(lVar5 + 0x128);
        lVar5 = lStack_60;
        iVar4 = iVar6;
        do {
          switch(*piVar2) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
            FUN_18007cbb0((longlong)*piVar2,lVar5,*param_3 + 0x18 + (longlong)iVar3 * 8);
            lVar5 = lStack_60;
            break;
          case 8:
            iVar6 = iVar3;
            break;
          case 9:
            iVar4 = iVar3;
          }
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 3;
          lVar1 = lVar1 + -1;
        } while (lVar1 != 0);
        if (iVar6 != -1) {
          lStack_58 = param_1;
          if ((((*(byte *)(param_1 + 0xfd) & 0x40) == 0) || (*(longlong *)(param_1 + 0x210) == 0))
             && (*(longlong *)(param_1 + 0x1b0) != 0)) {
            lStack_58 = FUN_180085900();
          }
          uStack_50 = 0;
          FUN_18007f770(&lStack_58);
          FUN_18007cbb0(8,uStack_48,*param_3 + 0x18 + (longlong)iVar6 * 8);
          FUN_18007cbb0(9,uStack_48,*param_3 + 0x18 + (longlong)iVar4 * 8);
          FUN_18007f840(&lStack_58);
        }
      }
      if ((*(byte *)(param_1 + 0xfd) & 0x20) == 0) {
        param_1 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
      }
      FUN_18007df50(lStack_60,*param_4 + 0x20,0xffff < *(int *)(param_1 + 0x200));
    }
    FUN_18007f840(&lStack_70);
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x38))();
  }
  if ((longlong *)*param_4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_4 + 0x38))();
  }
  return;
}





// 函数: void FUN_18007e2b0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_18007e2b0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_180080650(param_1 + 0x10);
  FUN_180080650(param_1 + 0x38,param_2);
  *(int8_t *)(param_1 + 0x80) = *(int8_t *)(param_2 + 0x1a);
  *(int32_t *)(param_1 + 0x60) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  iVar1 = *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 100);
  if (iVar2 < iVar1) {
    if (iVar1 == 0) {
      if (iVar2 < 2) {
        *(int32_t *)(param_1 + 100) = 8;
      }
      else {
        *(int *)(param_1 + 100) = (iVar2 >> 1) + iVar2;
      }
    }
    else {
      *(int *)(param_1 + 100) = iVar1;
    }
    FUN_180086010(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x60) = iVar1;
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(param_1 + 0x68),*(uint64_t *)(param_2 + 8),(longlong)(iVar1 * 0x5c),
         param_4,uVar3);
}





// 函数: void FUN_18007e5b0(longlong param_1,longlong *param_2)
void FUN_18007e5b0(longlong param_1,longlong *param_2)

{
  int32_t uVar1;
  int *piVar2;
  int32_t *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  FUN_1800806e0(param_1 + 0x10);
  FUN_1800806e0(param_1 + 0x38,param_2);
  iVar6 = *(int *)(param_1 + 0x60);
  uVar9 = (longlong)iVar6 * 0x5c + 4;
  lVar7 = param_2[2];
  piVar2 = (int *)param_2[1];
  lVar4 = *param_2;
  if ((ulonglong)((lVar4 - (longlong)piVar2) + lVar7) <= uVar9) {
    FUN_180639bf0(param_2,(longlong)piVar2 + (uVar9 - lVar4),lVar7,uVar9,uVar10);
    iVar6 = *(int *)(param_1 + 0x60);
    lVar7 = param_2[2];
    piVar2 = (int *)param_2[1];
    lVar4 = *param_2;
  }
  if ((ulonglong)((lVar4 - (longlong)piVar2) + lVar7) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar2 + (4 - lVar4));
    piVar2 = (int *)param_2[1];
  }
  *piVar2 = iVar6;
  param_2[1] = param_2[1] + 4;
  puVar3 = (int32_t *)param_2[1];
  iVar5 = 0;
  iVar6 = iVar5;
  if (0 < *(int *)(param_1 + 0x60)) {
    do {
      FUN_180078c70((longlong)iVar6 * 0x5c + *(longlong *)(param_1 + 0x68),param_2);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x60));
    puVar3 = (int32_t *)param_2[1];
  }
  uVar1 = *(int32_t *)(param_1 + 0x88);
  if ((ulonglong)((*param_2 - (longlong)puVar3) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar3 + (4 - *param_2));
    puVar3 = (int32_t *)param_2[1];
  }
  *puVar3 = uVar1;
  param_2[1] = param_2[1] + 4;
  FUN_18063a180(param_2,*(uint64_t *)(param_1 + 0x90),(longlong)*(int *)(param_1 + 0x88) * 0xc);
  uVar8 = (ulonglong)*(ushort *)(param_1 + 0xc0);
  uVar9 = uVar8 * 4 + 4;
  lVar7 = param_2[2];
  puVar3 = (int32_t *)param_2[1];
  lVar4 = *param_2;
  if ((ulonglong)((lVar4 - (longlong)puVar3) + lVar7) <= uVar9) {
    FUN_180639bf0(param_2,(longlong)puVar3 + (uVar9 - lVar4));
    uVar8 = (ulonglong)*(ushort *)(param_1 + 0xc0);
    lVar7 = param_2[2];
    puVar3 = (int32_t *)param_2[1];
    lVar4 = *param_2;
  }
  if ((ulonglong)((lVar4 - (longlong)puVar3) + lVar7) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar3 + (4 - lVar4));
    puVar3 = (int32_t *)param_2[1];
  }
  *puVar3 = (int)uVar8;
  param_2[1] = param_2[1] + 4;
  FUN_18063a180(param_2,*(uint64_t *)(param_1 + 0xb8),(ulonglong)*(ushort *)(param_1 + 0xc0) << 2)
  ;
  if (*(short *)(param_1 + 0xc0) != 0) {
    do {
      lVar7 = (longlong)iVar5 * 0x50 + *(longlong *)(param_1 + 0xb0);
      FUN_1800806e0(lVar7,param_2);
      FUN_1800806e0(lVar7 + 0x28,param_2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 0xc0));
  }
  uVar1 = *(int32_t *)(param_1 + 200);
  puVar3 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar3) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar3 + (4 - *param_2));
    puVar3 = (int32_t *)param_2[1];
  }
  *puVar3 = uVar1;
  param_2[1] = param_2[1] + 4;
  FUN_18063a180(param_2,*(uint64_t *)(param_1 + 0xd0),(longlong)*(int *)(param_1 + 200) * 0x14);
  puVar3 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar3) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar3 + (4 - *param_2));
    puVar3 = (int32_t *)param_2[1];
  }
  *puVar3 = 0;
  param_2[1] = param_2[1] + 4;
  FUN_18063a180(param_2,0,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007e880(longlong param_1,char param_2,uint64_t param_3)
void FUN_18007e880(longlong param_1,char param_2,uint64_t param_3)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong lVar3;
  
  *(int *)(*(longlong *)(param_1 + 600) + 0x18) = (int)param_2;
  FUN_18007e990(param_1,*(int *)(*(longlong *)(param_1 + 600) + 0x1c) +
                        *(int *)(*(longlong *)(param_1 + 600) + 0x18));
  lVar1 = *(longlong *)(param_1 + 600);
  if (*(longlong *)(lVar1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uVar2 = 0;
  lVar3 = (longlong)param_2;
  *(uint64_t *)(lVar1 + 0x10) = 0;
  if (lVar3 != 0) {
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,lVar3,0x10,CONCAT71((int7)((ulonglong)lVar1 >> 8),3));
  }
  *(uint64_t *)(*(longlong *)(param_1 + 600) + 0x10) = uVar2;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy(*(uint64_t *)(*(longlong *)(param_1 + 600) + 0x10),param_3,lVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007e930(longlong param_1)
void FUN_18007e930(longlong param_1)

{
  uint64_t uVar1;
  
  if (*(longlong *)(param_1 + 0x2c8) == 0) {
    *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | 8;
    uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0xd0,4,9);
                    // WARNING: Subroutine does not return
    memset(uVar1,0,0xd0);
  }
  return;
}





// 函数: void FUN_18007e95f(void)
void FUN_18007e95f(void)

{
  uint64_t uVar1;
  
  uVar1 = FUN_18062b1e0();
                    // WARNING: Subroutine does not return
  memset(uVar1,0,0xd0);
}





// 函数: void FUN_18007e988(void)
void FUN_18007e988(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007e990(longlong param_1,int param_2)
void FUN_18007e990(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint64_t uVar2;
  
  plVar1 = *(longlong **)(param_1 + 600);
  if ((int)plVar1[1] != param_2) {
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uVar2 = 0;
    *plVar1 = 0;
    if (param_2 != 0) {
      uVar2 = FUN_18062b1e0(_DAT_180c8ed18,(longlong)param_2 << 6,0x10,4);
    }
    **(uint64_t **)(param_1 + 600) = uVar2;
    *(int *)(*(longlong *)(param_1 + 600) + 8) = param_2;
  }
  return;
}





// 函数: void FUN_18007ea10(longlong param_1,char param_2)
void FUN_18007ea10(longlong param_1,char param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  int8_t auStack_40 [8];
  longlong lStack_38;
  int32_t uStack_30;
  longlong *plStack_28;
  
  if (*(char *)(param_1 + 0xf4) == param_2) {
    return;
  }
  lVar2 = 0;
  if ((*(byte *)(param_1 + 0xfd) & 0x20) != 0) {
    FUN_18007baa0();
    do {
      *(char *)(*(longlong *)(param_1 + 0x1e0) + 0x14 + lVar2) = param_2;
      lVar2 = lVar2 + 0x18;
    } while (lVar2 < 0x180);
  }
  plStack_28 = (longlong *)0x0;
  auStack_40[0] = 0;
  uStack_30 = 1;
  lStack_38 = param_1;
  FUN_18007f4c0(auStack_40);
  if (plStack_28 == (longlong *)0x0) goto LAB_18007eb55;
  plVar3 = plStack_28;
  if (param_2 != '\0') {
    if ((param_2 != '\x01') || ((*(byte *)(param_1 + 0xfd) & 0x20) == 0)) goto LAB_18007eb55;
    lVar2 = *(longlong *)(param_1 + 0x1b8);
    bVar1 = *(byte *)(lVar2 + 0x38c);
    if (bVar1 == 9) {
      bVar1 = func_0x00018022d300();
      *(byte *)(lVar2 + 0x38c) = bVar1;
    }
    plVar3 = plStack_28;
    if ((*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x15 + (ulonglong)bVar1 * 0x18) != '\x03') &&
       (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x15 + (ulonglong)bVar1 * 0x18) != '\x02'))
    goto LAB_18007eb55;
  }
  plStack_28 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
LAB_18007eb55:
  *(char *)(param_1 + 0xf4) = param_2;
  FUN_18007f6a0(auStack_40);
  if (plStack_28 != (longlong *)0x0) {
    (**(code **)(*plStack_28 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

code * FUN_18007eb80(longlong param_1,char param_2)

{
  longlong *plVar1;
  code *in_RAX;
  uint64_t uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lStack_30;
  int32_t uStack_28;
  code *pcStack_20;
  code *pcStack_18;
  
  pcVar3 = (code *)(param_1 + 0x210);
  if (*(longlong *)pcVar3 == 0) {
    if ((*(byte *)(param_1 + 0xfd) & 0x20) == 0) {
      lStack_30 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
      if (lStack_30 != param_1) {
        uStack_28 = 0;
        FUN_18007f770(&lStack_30);
        uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xf0,8,3);
        uVar2 = FUN_18007f2f0(uVar2);
        FUN_180056f10(pcVar3,uVar2);
        FUN_1800860f0(*(longlong *)pcVar3 + 0x10,(longlong)pcStack_20 + 0x10);
        FUN_1800860f0(*(longlong *)pcVar3 + 0x38,(longlong)pcStack_20 + 0x38);
        FUN_180086090(*(longlong *)pcVar3 + 0x60,(longlong)pcStack_20 + 0x60);
        FUN_180085fb0(*(longlong *)pcVar3 + 0x88,(longlong)pcStack_20 + 0x88);
        if (param_2 != '\0') {
          *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 0x40;
          FUN_180085ec0(*(longlong *)pcVar3 + 200,(longlong)pcStack_20 + 200);
          FUN_180085680(*(longlong *)pcVar3 + 0xb0,(longlong)pcStack_20 + 0xb0);
        }
        pcVar3 = (code *)FUN_18007f840(&lStack_30);
        return pcVar3;
      }
    }
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      if ((*(byte *)(param_1 + 0xfd) & 4) != 0) {
        uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xf0,8,3);
        plVar4 = (longlong *)FUN_18007f2f0(uVar2);
        pcStack_18 = (code *)0xfffffffffffffffe;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4);
        }
        plVar1 = *(longlong **)pcVar3;
        *(longlong **)pcVar3 = plVar4;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
        return pcVar3;
      }
      FUN_1806272a0(&UNK_1809ffbe0);
      in_RAX = (code *)FUN_180626f80(&UNK_1809ffab0);
    }
    else {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x88);
      pcStack_20 = (code *)&UNK_180083070;
      pcStack_18 = FUN_180082fd0;
      lStack_30 = param_1;
      (**(code **)(*plVar4 + 0x60))(plVar4,&system_data_c740,param_1 + 0xb8,0,&lStack_30);
      in_RAX = pcStack_20;
      if (pcStack_20 != (code *)0x0) {
        pcVar3 = (code *)(*pcStack_20)(&lStack_30,0,0);
        return pcVar3;
      }
    }
  }
  return in_RAX;
}





// 函数: void FUN_18007edd0(longlong param_1,char param_2)
void FUN_18007edd0(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FUN_1800791a0();
    if (param_2 != '\0') {
      *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 0x20;
      *(byte *)(param_1 + 0xfe) = *(byte *)(param_1 + 0xfe) | 1;
      FUN_18007baa0(param_1);
    }
    if (((*(char *)(param_1 + 0xfc) == '\0') && (*(char *)(param_1 + 0xf4) == '\0')) &&
       (((*(byte *)(param_1 + 0xfd) & 0x20) == 0 || ((*(byte *)(param_1 + 0xfe) & 1) == 0)))) {
      plVar1 = *(longlong **)(param_1 + 0x210);
      *(uint64_t *)(param_1 + 0x210) = 0;
      if (plVar1 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018007ee5b. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(*plVar1 + 0x38))();
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007ee70(longlong param_1)
void FUN_18007ee70(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint64_t *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  lVar10 = *(longlong *)(param_1 + 0x2d0);
  iVar1 = *(int *)(_DAT_180c86870 + 0x224);
  if (*(int *)(lVar10 + 0xc) != iVar1) {
    if (*(int *)(lVar10 + 8) < 1) {
      if (*(int *)(lVar10 + 0xc) == iVar1 + -1) {
        uVar6 = *(int *)(_DAT_180c86890 + 0x9c8) + 1U & 0x80000001;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
        }
        lVar15 = (longlong)(int)uVar6 * 0x488 + _DAT_180c86890 + 0xb8;
        lVar9 = (longlong)*(int *)(_DAT_180c86890 + 0x9c8) * 0x488 + _DAT_180c86890 + 0xb8;
        uVar14 = FUN_180080480(lVar9,*(int32_t *)(lVar10 + 0x14));
        iVar7 = (int)uVar14;
        uVar11 = uVar14 & 0xffffffff;
        if (-1 < iVar7) {
          uVar13 = uVar14 >> 0xb & 0x1fffff;
          uVar6 = *(uint *)(*(longlong *)(param_1 + 0x2d0) + 0x14);
          uVar14 = (ulonglong)uVar6;
          uVar2 = *(uint *)(*(longlong *)(param_1 + 0x2d0) + 0x18);
          uVar5 = (uint)uVar13;
          if (uVar5 == uVar6 + iVar7 >> 0xb) {
            uVar8 = uVar2 >> 0xb;
            if (uVar8 == uVar2 + uVar6 >> 0xb) {
                    // WARNING: Subroutine does not return
              memcpy(*(longlong *)(lVar9 + 8 + uVar13 * 8) + (ulonglong)(iVar7 + uVar5 * -0x800) * 8
                     ,*(longlong *)(lVar15 + 8 + (ulonglong)uVar8 * 8) +
                      (ulonglong)(uVar2 + uVar8 * -0x800) * 8,(longlong)(int)uVar6 << 3);
            }
          }
          if (0 < (int)uVar6) {
            do {
              iVar4 = (int)uVar11;
              uVar5 = (uVar2 - iVar7) + iVar4;
              uVar6 = uVar5 >> 0xb;
              uVar13 = uVar11 >> 0xb;
              uVar11 = (ulonglong)(iVar4 + 1);
              *(uint64_t *)
               (*(longlong *)(lVar9 + 8 + uVar13 * 8) +
               (ulonglong)(uint)(iVar4 + (int)uVar13 * -0x800) * 8) =
                   *(uint64_t *)
                    (*(longlong *)(lVar15 + 8 + (ulonglong)uVar6 * 8) +
                    (ulonglong)(uVar5 + uVar6 * -0x800) * 8);
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          *(int *)(*(longlong *)(param_1 + 0x2d0) + 0x18) = iVar7;
          *(int *)(*(longlong *)(param_1 + 0x2d0) + 0xc) = iVar1;
        }
      }
      else {
        *(int32_t *)(lVar10 + 0x14) = 0;
      }
    }
    else {
      lVar10 = (longlong)*(int *)(_DAT_180c86890 + 0x9c8) * 0x488 + _DAT_180c86890 + 0xb8;
      uVar5 = FUN_180080480(lVar10);
      uVar2 = uVar5 >> 0xb;
      uVar6 = *(uint *)(*(uint64_t **)(param_1 + 0x2d0) + 1);
      uVar14 = (ulonglong)uVar6;
      puVar12 = (uint64_t *)**(uint64_t **)(param_1 + 0x2d0);
      if (uVar2 == uVar6 + uVar5 >> 0xb) {
                    // WARNING: Subroutine does not return
        memcpy(*(longlong *)(lVar10 + 8 + (ulonglong)uVar2 * 8) +
               (ulonglong)(uVar5 + uVar2 * -0x800) * 8,puVar12,(ulonglong)uVar6 << 3);
      }
      uVar2 = uVar5;
      if (uVar6 != 0) {
        do {
          uVar3 = *puVar12;
          puVar12 = puVar12 + 1;
          *(uint64_t *)
           (*(longlong *)(lVar10 + 8 + (ulonglong)(uVar2 >> 0xb) * 8) +
           (ulonglong)(uVar2 + (uVar2 >> 0xb) * -0x800) * 8) = uVar3;
          uVar14 = uVar14 - 1;
          uVar2 = uVar2 + 1;
        } while (uVar14 != 0);
      }
      *(int32_t *)(*(longlong *)(param_1 + 0x2d0) + 0x14) =
           *(int32_t *)(*(longlong *)(param_1 + 0x2d0) + 8);
      *(uint *)(*(longlong *)(param_1 + 0x2d0) + 0x18) = uVar5;
      *(int *)(*(longlong *)(param_1 + 0x2d0) + 0xc) = iVar1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007eea1(longlong param_1,int param_2,int param_3)
void FUN_18007eea1(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong unaff_RBX;
  int unaff_EBP;
  longlong lVar8;
  ulonglong uVar9;
  uint64_t *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  if (param_2 < 1) {
    if (param_3 == unaff_EBP + -1) {
      uVar5 = *(int *)(_DAT_180c86890 + 0x9c8) + 1U & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      lVar13 = (longlong)(int)uVar5 * 0x488 + _DAT_180c86890 + 0xb8;
      lVar8 = (longlong)*(int *)(_DAT_180c86890 + 0x9c8) * 0x488 + _DAT_180c86890 + 0xb8;
      uVar12 = FUN_180080480(lVar8,*(int32_t *)(param_1 + 0x14));
      iVar6 = (int)uVar12;
      uVar9 = uVar12 & 0xffffffff;
      if (-1 < iVar6) {
        uVar11 = uVar12 >> 0xb & 0x1fffff;
        uVar5 = *(uint *)(*(longlong *)(unaff_RBX + 0x2d0) + 0x14);
        uVar12 = (ulonglong)uVar5;
        uVar1 = *(uint *)(*(longlong *)(unaff_RBX + 0x2d0) + 0x18);
        uVar4 = (uint)uVar11;
        if (uVar4 == uVar5 + iVar6 >> 0xb) {
          uVar7 = uVar1 >> 0xb;
          if (uVar7 == uVar1 + uVar5 >> 0xb) {
                    // WARNING: Subroutine does not return
            memcpy(*(longlong *)(lVar8 + 8 + uVar11 * 8) + (ulonglong)(iVar6 + uVar4 * -0x800) * 8,
                   *(longlong *)(lVar13 + 8 + (ulonglong)uVar7 * 8) +
                   (ulonglong)(uVar1 + uVar7 * -0x800) * 8,(longlong)(int)uVar5 << 3);
          }
        }
        if (0 < (int)uVar5) {
          do {
            iVar3 = (int)uVar9;
            uVar4 = (uVar1 - iVar6) + iVar3;
            uVar5 = uVar4 >> 0xb;
            uVar11 = uVar9 >> 0xb;
            uVar9 = (ulonglong)(iVar3 + 1);
            *(uint64_t *)
             (*(longlong *)(lVar8 + 8 + uVar11 * 8) +
             (ulonglong)(uint)(iVar3 + (int)uVar11 * -0x800) * 8) =
                 *(uint64_t *)
                  (*(longlong *)(lVar13 + 8 + (ulonglong)uVar5 * 8) +
                  (ulonglong)(uVar4 + uVar5 * -0x800) * 8);
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        *(int *)(*(longlong *)(unaff_RBX + 0x2d0) + 0x18) = iVar6;
        *(int *)(*(longlong *)(unaff_RBX + 0x2d0) + 0xc) = unaff_EBP;
      }
    }
    else {
      *(int32_t *)(param_1 + 0x14) = 0;
    }
  }
  else {
    lVar8 = (longlong)*(int *)(_DAT_180c86890 + 0x9c8) * 0x488 + _DAT_180c86890 + 0xb8;
    uVar4 = FUN_180080480(lVar8);
    uVar1 = uVar4 >> 0xb;
    uVar5 = *(uint *)(*(uint64_t **)(unaff_RBX + 0x2d0) + 1);
    uVar12 = (ulonglong)uVar5;
    puVar10 = (uint64_t *)**(uint64_t **)(unaff_RBX + 0x2d0);
    if (uVar1 == uVar5 + uVar4 >> 0xb) {
                    // WARNING: Subroutine does not return
      memcpy(*(longlong *)(lVar8 + 8 + (ulonglong)uVar1 * 8) +
             (ulonglong)(uVar4 + uVar1 * -0x800) * 8,puVar10,(ulonglong)uVar5 << 3);
    }
    uVar1 = uVar4;
    if (uVar5 != 0) {
      do {
        uVar2 = *puVar10;
        puVar10 = puVar10 + 1;
        *(uint64_t *)
         (*(longlong *)(lVar8 + 8 + (ulonglong)(uVar1 >> 0xb) * 8) +
         (ulonglong)(uVar1 + (uVar1 >> 0xb) * -0x800) * 8) = uVar2;
        uVar12 = uVar12 - 1;
        uVar1 = uVar1 + 1;
      } while (uVar12 != 0);
    }
    *(int32_t *)(*(longlong *)(unaff_RBX + 0x2d0) + 0x14) =
         *(int32_t *)(*(longlong *)(unaff_RBX + 0x2d0) + 8);
    *(uint *)(*(longlong *)(unaff_RBX + 0x2d0) + 0x18) = uVar4;
    *(int *)(*(longlong *)(unaff_RBX + 0x2d0) + 0xc) = unaff_EBP;
  }
  return;
}





// 函数: void FUN_18007ef9a(longlong param_1,longlong param_2)
void FUN_18007ef9a(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong unaff_RBX;
  int32_t unaff_EBP;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar3 = *(int *)(param_2 + 0x910) + 1U & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  lVar10 = (longlong)(int)uVar3 * 0x488 + param_2;
  param_2 = (longlong)*(int *)(param_2 + 0x910) * 0x488 + param_2;
  uVar5 = FUN_180080480(param_2,*(int32_t *)(param_1 + 0x14));
  iVar4 = (int)uVar5;
  uVar8 = uVar5 & 0xffffffff;
  if (-1 < iVar4) {
    uVar9 = uVar5 >> 0xb & 0x1fffff;
    uVar3 = *(uint *)(*(longlong *)(unaff_RBX + 0x2d0) + 0x14);
    uVar5 = (ulonglong)uVar3;
    uVar1 = *(uint *)(*(longlong *)(unaff_RBX + 0x2d0) + 0x18);
    uVar7 = (uint)uVar9;
    if (uVar7 == uVar3 + iVar4 >> 0xb) {
      uVar6 = uVar1 >> 0xb;
      if (uVar6 == uVar1 + uVar3 >> 0xb) {
                    // WARNING: Subroutine does not return
        memcpy(*(longlong *)(param_2 + 8 + uVar9 * 8) + (ulonglong)(iVar4 + uVar7 * -0x800) * 8,
               *(longlong *)(lVar10 + 8 + (ulonglong)uVar6 * 8) +
               (ulonglong)(uVar1 + uVar6 * -0x800) * 8,(longlong)(int)uVar3 << 3);
      }
    }
    if (0 < (int)uVar3) {
      do {
        iVar2 = (int)uVar8;
        uVar7 = (uVar1 - iVar4) + iVar2;
        uVar3 = uVar7 >> 0xb;
        uVar9 = uVar8 >> 0xb;
        uVar8 = (ulonglong)(iVar2 + 1);
        *(uint64_t *)
         (*(longlong *)(param_2 + 8 + uVar9 * 8) +
         (ulonglong)(uint)(iVar2 + (int)uVar9 * -0x800) * 8) =
             *(uint64_t *)
              (*(longlong *)(lVar10 + 8 + (ulonglong)uVar3 * 8) +
              (ulonglong)(uVar7 + uVar3 * -0x800) * 8);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    *(int *)(*(longlong *)(unaff_RBX + 0x2d0) + 0x18) = iVar4;
    *(int32_t *)(*(longlong *)(unaff_RBX + 0x2d0) + 0xc) = unaff_EBP;
  }
  return;
}





// 函数: void FUN_18007f0b5(void)
void FUN_18007f0b5(void)

{
  return;
}





// 函数: void FUN_18007f0bf(void)
void FUN_18007f0bf(void)

{
  return;
}





// 函数: void FUN_18007f0ca(longlong param_1)
void FUN_18007f0ca(longlong param_1)

{
  *(int32_t *)(param_1 + 0x14) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007f0e0(longlong param_1,longlong param_2,int param_3)
void FUN_18007f0e0(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint uVar5;
  int *piVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint64_t *puVar6;
  
  uVar9 = (ulonglong)param_3;
  if (**(longlong **)(param_1 + 0x2d0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar4 = (uint64_t *)0x0;
  **(longlong **)(param_1 + 0x2d0) = 0;
  if (0 < param_3) {
    puVar2 = puVar4;
    if (param_3 != 0) {
      puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,uVar9 * 8,3);
      puVar3 = puVar2;
      puVar6 = puVar4;
      do {
        uVar5 = (int)puVar6 + 1;
        puVar6 = (uint64_t *)(ulonglong)uVar5;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      } while ((ulonglong)(longlong)(int)uVar5 < uVar9);
    }
    **(uint64_t **)(param_1 + 0x2d0) = puVar2;
    if (3 < (longlong)uVar9) {
      lVar10 = -8 - param_2;
      lVar8 = (uVar9 - 4 >> 2) + 1;
      puVar4 = (uint64_t *)(lVar8 * 4);
      piVar7 = (int *)(param_2 + 8);
      do {
        piVar1 = piVar7 + 8;
        *(float *)((longlong)piVar7 + **(longlong **)(param_1 + 0x2d0) + lVar10) = (float)piVar7[-2]
        ;
        *(int *)((longlong)piVar7 + **(longlong **)(param_1 + 0x2d0) + 4 + lVar10) = piVar7[-1];
        *(float *)((longlong)piVar7 + **(longlong **)(param_1 + 0x2d0) + 8 + lVar10) =
             (float)*piVar7;
        *(int *)((longlong)piVar7 + **(longlong **)(param_1 + 0x2d0) + 0xc + lVar10) = piVar7[1];
        *(float *)((**(longlong **)(param_1 + 0x2d0) - param_2) + -0x18 + (longlong)piVar1) =
             (float)piVar7[2];
        *(int *)((longlong)piVar7 + **(longlong **)(param_1 + 0x2d0) + 0x14 + lVar10) = piVar7[3];
        *(float *)((**(longlong **)(param_1 + 0x2d0) - param_2) + -0x10 + (longlong)piVar1) =
             (float)piVar7[4];
        *(int *)((longlong)piVar7 + **(longlong **)(param_1 + 0x2d0) + 0x1c + lVar10) = piVar7[5];
        lVar8 = lVar8 + -1;
        piVar7 = piVar1;
      } while (lVar8 != 0);
    }
    for (; (longlong)puVar4 < (longlong)uVar9; puVar4 = (uint64_t *)((longlong)puVar4 + 1)) {
      *(float *)(**(longlong **)(param_1 + 0x2d0) + (longlong)puVar4 * 8) =
           (float)*(int *)(param_2 + (longlong)puVar4 * 8);
      *(int32_t *)(**(longlong **)(param_1 + 0x2d0) + 4 + (longlong)puVar4 * 8) =
           *(int32_t *)(param_2 + 4 + (longlong)puVar4 * 8);
    }
    *(int *)(*(longlong *)(param_1 + 0x2d0) + 8) = param_3;
    return;
  }
  *(int *)(*(longlong *)(param_1 + 0x2d0) + 8) = param_3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007f11f(void)
void FUN_18007f11f(void)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  uint uVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong unaff_R14;
  longlong lVar8;
  bool in_ZF;
  
  if (in_ZF) {
    puVar2 = (ulonglong *)(unaff_RBX & 0xffffffff);
  }
  else {
    puVar2 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,unaff_R14 * 8,3);
    uVar5 = unaff_RBX & 0xffffffff;
    puVar3 = puVar2;
    do {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      *puVar3 = unaff_RBX;
      puVar3 = puVar3 + 1;
    } while ((ulonglong)(longlong)(int)uVar4 < unaff_R14);
  }
  **(longlong **)(unaff_RDI + 0x2d0) = (longlong)puVar2;
  if (3 < (longlong)unaff_R14) {
    lVar8 = -8 - unaff_RBP;
    lVar7 = (unaff_R14 - 4 >> 2) + 1;
    unaff_RBX = lVar7 * 4;
    piVar6 = (int *)(unaff_RBP + 8);
    do {
      piVar1 = piVar6 + 8;
      *(float *)((longlong)piVar6 + **(longlong **)(unaff_RDI + 0x2d0) + lVar8) = (float)piVar6[-2];
      *(int *)((longlong)piVar6 + **(longlong **)(unaff_RDI + 0x2d0) + 4 + lVar8) = piVar6[-1];
      *(float *)((longlong)piVar6 + **(longlong **)(unaff_RDI + 0x2d0) + 8 + lVar8) = (float)*piVar6
      ;
      *(int *)((longlong)piVar6 + **(longlong **)(unaff_RDI + 0x2d0) + 0xc + lVar8) = piVar6[1];
      *(float *)((**(longlong **)(unaff_RDI + 0x2d0) - unaff_RBP) + -0x18 + (longlong)piVar1) =
           (float)piVar6[2];
      *(int *)((longlong)piVar6 + **(longlong **)(unaff_RDI + 0x2d0) + 0x14 + lVar8) = piVar6[3];
      *(float *)((**(longlong **)(unaff_RDI + 0x2d0) - unaff_RBP) + -0x10 + (longlong)piVar1) =
           (float)piVar6[4];
      *(int *)((longlong)piVar6 + **(longlong **)(unaff_RDI + 0x2d0) + 0x1c + lVar8) = piVar6[5];
      lVar7 = lVar7 + -1;
      piVar6 = piVar1;
    } while (lVar7 != 0);
  }
  for (; (longlong)unaff_RBX < (longlong)unaff_R14; unaff_RBX = unaff_RBX + 1) {
    *(float *)(**(longlong **)(unaff_RDI + 0x2d0) + unaff_RBX * 8) =
         (float)*(int *)(unaff_RBP + unaff_RBX * 8);
    *(int32_t *)(**(longlong **)(unaff_RDI + 0x2d0) + 4 + unaff_RBX * 8) =
         *(int32_t *)(unaff_RBP + 4 + unaff_RBX * 8);
  }
  *(int *)(*(longlong *)(unaff_RDI + 0x2d0) + 8) = (int)unaff_R14;
  return;
}





