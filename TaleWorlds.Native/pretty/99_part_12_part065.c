#include "TaleWorlds.Native.Split.h"

// 99_part_12_part065.c - 2 个函数

// 函数: void FUN_1807f7a30(void)
void FUN_1807f7a30(void)

{
  ulonglong in_stack_00000850;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000850 ^ (ulonglong)&stack0x00000000);
}



undefined4 FUN_1807f7a50(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    return 0x1c;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x12770);
  uVar1 = 0;
  if (lVar2 != 0) {
    lVar2 = FUN_1807d0c90(lVar2,10);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = FUN_1807d1d40(lVar2,*(undefined8 *)(param_1 + 0x1f8));
    }
  }
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  return uVar1;
}



undefined4 FUN_1807f7ac0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  *param_3 = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  uVar2 = 0x12;
  if (*(longlong *)(param_1 + 0x198) == 0) {
    uVar2 = 0x1c;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x12770);
    if ((lVar1 != 0) && (lVar1 = FUN_1807d0c90(lVar1,10), lVar1 != 0)) {
      uVar2 = FUN_1807d2050(lVar1,param_2,param_3,(undefined8 *)(param_1 + 0x1f8));
    }
  }
  return uVar2;
}



int FUN_1807f7b50(longlong param_1,longlong param_2,uint param_3,uint *param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int aiStackX_8 [2];
  
  *param_4 = 0;
  iVar1 = 0xd;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x12770);
    if ((lVar2 != 0) && (lVar2 = FUN_1807d0c90(lVar2,10), lVar2 != 0)) {
      uVar3 = 0;
      if (param_3 != 0) {
        do {
          uVar4 = param_3;
          if (0x10000 < param_3) {
            uVar4 = 0x10000;
          }
          aiStackX_8[0] = 0;
          iVar1 = FUN_1807d2500(lVar2,*(undefined8 *)(param_1 + 0x1f8),(ulonglong)uVar3 + param_2,
                                uVar4,*(undefined4 *)(param_1 + 0x1f0),aiStackX_8);
          *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + aiStackX_8[0];
          param_3 = param_3 - aiStackX_8[0];
          uVar3 = uVar3 + aiStackX_8[0];
        } while ((iVar1 == 0) && (param_3 != 0));
      }
      *param_4 = uVar3;
    }
    return iVar1;
  }
  return 0x1c;
}



int FUN_1807f7ba8(void)

{
  longlong lVar1;
  uint unaff_EBX;
  int unaff_EBP;
  uint uVar2;
  longlong unaff_RDI;
  uint uVar3;
  longlong unaff_R12;
  uint unaff_R13D;
  uint *unaff_R15;
  uint *in_stack_00000088;
  
  lVar1 = FUN_1807d0c90();
  if (lVar1 != 0) {
    uVar2 = unaff_R13D;
    if (unaff_EBX != 0) {
      do {
        uVar3 = unaff_EBX;
        if (0x10000 < unaff_EBX) {
          uVar3 = 0x10000;
        }
        unaff_EBP = FUN_1807d2500(lVar1,*(undefined8 *)(unaff_RDI + 0x1f8),
                                  (ulonglong)uVar2 + unaff_R12,uVar3,
                                  *(undefined4 *)(unaff_RDI + 0x1f0));
        *(int *)(unaff_RDI + 0x1f0) = *(int *)(unaff_RDI + 0x1f0) + unaff_R13D;
        unaff_EBX = unaff_EBX - unaff_R13D;
        uVar2 = uVar2 + unaff_R13D;
        unaff_R15 = in_stack_00000088;
      } while ((unaff_EBP == 0) && (unaff_EBX != 0));
    }
    *unaff_R15 = uVar2;
  }
  return unaff_EBP;
}



int FUN_1807f7bba(void)

{
  int unaff_EBX;
  int unaff_EBP;
  int iVar1;
  longlong unaff_RDI;
  int unaff_R13D;
  int *unaff_R15;
  undefined1 *puStack0000000000000028;
  int iStack0000000000000070;
  int *in_stack_00000088;
  
  iVar1 = unaff_R13D;
  if (unaff_EBX != 0) {
    do {
      puStack0000000000000028 = (undefined1 *)&stack0x00000070;
      iStack0000000000000070 = unaff_R13D;
      unaff_EBP = FUN_1807d2500();
      *(int *)(unaff_RDI + 0x1f0) = *(int *)(unaff_RDI + 0x1f0) + iStack0000000000000070;
      unaff_EBX = unaff_EBX - iStack0000000000000070;
      iVar1 = iVar1 + iStack0000000000000070;
      unaff_R15 = in_stack_00000088;
      if (unaff_EBP != 0) break;
    } while (unaff_EBX != 0);
  }
  *unaff_R15 = iVar1;
  return unaff_EBP;
}



undefined4 FUN_1807f7c30(void)

{
  undefined4 unaff_EBP;
  
  return unaff_EBP;
}



undefined4 FUN_1807f7c35(void)

{
  undefined4 unaff_EBP;
  
  return unaff_EBP;
}



undefined8 * FUN_1807f7c50(undefined8 *param_1)

{
  func_0x00018074fb20();
  *(undefined1 *)((longlong)param_1 + 0xc4) = 1;
  *param_1 = &UNK_18097e5f8;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1807f7cb0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  if (param_1[0x1b] != 0) {
    FUN_1807902d0(param_1[0x1b],param_1);
  }
  lVar5 = param_1[0x1b];
  bVar13 = lVar5 != 0;
  if (bVar13) {
    func_0x000180743c20(lVar5,10);
  }
  if ((*(uint *)(param_1 + 0xb) & 0x20) == 0) {
    if (((((undefined8 *)param_1[0x15] == (undefined8 *)0x0) ||
         (param_1 != (undefined8 *)param_1[0x15])) || (param_1[0x17] == 0)) ||
       ((*(uint *)(param_1[0x17] + 0x58) & 0x20) != 0)) {
      LOCK();
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x20;
      UNLOCK();
      if ((lVar5 != 0) && (bVar13)) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar5,10);
      }
      if ((param_1[0xc] != 0) && (*(longlong *)(param_1[0xc] + 0x170) != 0)) {
        func_0x000180768d40();
      }
      if ((param_1[0x21] != 0) &&
         (((*(int *)(param_1 + 0x22) != 0 && (*(int *)(param_1 + 0x22) != 2)) ||
          (*(char *)((longlong)param_1 + 0x5c) != '\0')))) {
        FUN_180768360(*(undefined8 *)(*(longlong *)(param_1[0x21] + 0x10) + 0x168));
        lVar5 = param_1[0x21];
        plVar9 = (longlong *)(lVar5 + 0x18);
        **(longlong **)(lVar5 + 0x20) = *plVar9;
        *(undefined8 *)(*plVar9 + 8) = *(undefined8 *)(lVar5 + 0x20);
        *(longlong **)(lVar5 + 0x20) = plVar9;
        *plVar9 = (longlong)plVar9;
                    // WARNING: Subroutine does not return
        FUN_180768400(*(undefined8 *)(*(longlong *)(param_1[0x21] + 0x10) + 0x168));
      }
      if ((param_1[0x1b] == 0) || (iVar4 = FUN_1807902d0(param_1[0x1b],param_1), iVar4 == 0)) {
        plVar9 = (longlong *)param_1[0x1e];
        if (plVar9 != (longlong *)0x0) {
          lVar5 = *plVar9;
          if (lVar5 != param_1[0x1f]) {
            do {
              FUN_180750190(param_1,lVar5,1);
              plVar9 = (longlong *)param_1[0x1e];
              lVar5 = *plVar9;
            } while (lVar5 != param_1[0x1f]);
          }
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar9,&UNK_1809583d0,0x210,1);
        }
        uVar11 = 0;
        if (param_1[0x1d] != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1[0x1d],&UNK_1809583d0,0x217,1
                       );
        }
        if (param_1[0x20] != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1[0x20],&UNK_1809583d0,0x21d,1
                       );
        }
        lVar5 = param_1[0xc];
        lVar1 = param_1[0x21];
        cVar3 = (**(code **)*param_1)(param_1);
        if (((cVar3 != '\0') && (param_1[0xc] != 0)) &&
           ((puVar7 = (undefined8 *)param_1[0x17], puVar7 == (undefined8 *)0x0 ||
            ((puVar7 == param_1 || (param_1[0xc] != puVar7[0xc])))))) {
          if ((param_1[0x2f] != 0) &&
             (*(undefined1 *)(param_1[0x2f] + 0x88) = 1, (*(uint *)(param_1 + 0xb) & 4) == 0)) {
            LOCK();
            *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x40;
            UNLOCK();
          }
          if (((*(byte *)(param_1[0x1b] + 0x78) & 1) == 0) &&
             ((puVar7 = param_1 + 0x2c, (undefined8 *)*puVar7 != puVar7 ||
              ((undefined8 *)param_1[0x2d] != puVar7)))) {
            while ((*(uint *)(param_1 + 0xb) & 0x40) == 0) {
              FUN_180768bf0(2);
            }
          }
          func_0x000180743c20(param_1[0x1b],10);
          plVar9 = param_1 + 0x2c;
          *(longlong *)param_1[0x2d] = *plVar9;
          *(undefined8 *)(*plVar9 + 8) = param_1[0x2d];
          param_1[0x2d] = plVar9;
          *plVar9 = (longlong)plVar9;
          param_1[0x2e] = 0;
                    // WARNING: Subroutine does not return
          FUN_180743d60(param_1[0x1b],10);
        }
        iVar4 = *(int *)(param_1 + 0x16);
        if ((iVar4 != 0) && (lVar6 = param_1[0x14], lVar6 != 0)) {
          if ((*(int *)((longlong)param_1 + 0xb4) != 0) && (0 < iVar4)) {
            iVar10 = 1;
            do {
              lVar2 = *(longlong *)(lVar6 + uVar11);
              if (lVar2 != 0) {
                if (*(longlong *)(lVar2 + 0x60) == lVar5) {
                  *(undefined8 *)(lVar2 + 0x60) = 0;
                  lVar6 = param_1[0x14];
                }
                if (*(longlong *)(*(longlong *)(lVar6 + uVar11) + 0x108) == lVar1) {
                  *(undefined8 *)(*(longlong *)(lVar6 + uVar11) + 0x108) = 0;
                  lVar6 = param_1[0x14];
                }
                cVar3 = (**(code **)**(undefined8 **)(lVar6 + uVar11))();
                if ((cVar3 != '\0') &&
                   (*(longlong *)(*(longlong *)(uVar11 + param_1[0x14]) + 0x178) == 0)) {
                  *(undefined8 *)(*(longlong *)(uVar11 + param_1[0x14]) + 0x178) = 0;
                }
                lVar6 = param_1[0x14];
                if ((*(longlong *)(*(longlong *)(lVar6 + uVar11) + 0xa8) != 0) &&
                   (uVar12 = uVar11, iVar4 = iVar10, iVar10 < *(int *)(param_1 + 0x16))) {
                  do {
                    uVar12 = uVar12 + 8;
                    if (*(longlong *)(lVar6 + uVar12) == *(longlong *)(lVar6 + uVar11)) {
                      *(undefined8 *)(lVar6 + uVar12) = 0;
                      lVar6 = param_1[0x14];
                    }
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < *(int *)(param_1 + 0x16));
                }
                (**(code **)(**(longlong **)(lVar6 + uVar11) + 0x18))
                          (*(longlong **)(lVar6 + uVar11),CONCAT71((int7)((ulonglong)lVar6 >> 8),1))
                ;
                *(undefined8 *)(uVar11 + param_1[0x14]) = 0;
                lVar6 = param_1[0x14];
                iVar4 = *(int *)(param_1 + 0x16);
              }
              iVar10 = iVar10 + 1;
              uVar11 = uVar11 + 8;
            } while (iVar10 <= iVar4);
          }
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar6,&UNK_1809583d0,0x29a,1);
        }
        lVar5 = param_1[0xc];
        if ((lVar5 != 0) &&
           (((puVar7 = (undefined8 *)param_1[0x17], puVar7 == (undefined8 *)0x0 ||
             (puVar7 == param_1)) || (lVar5 != puVar7[0xc])))) {
          FUN_180773410(lVar5,1);
          param_1[0xc] = 0;
        }
        cVar3 = (**(code **)*param_1)(param_1);
        if (cVar3 != '\0') {
          if ((param_1[0x17] != 0) && (*(longlong *)(param_1[0x17] + 0x178) == param_1[0x2f])) {
            param_1[0x2f] = 0;
          }
          if (param_1[0x2f] != 0) {
                    // WARNING: Subroutine does not return
            FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1[0x2f],&UNK_1809583d0,0x2bd
                          ,1);
          }
        }
        plVar9 = (longlong *)param_1[0x21];
        if (plVar9 != (longlong *)0x0) {
          if ((param_1[0x17] == 0) || (*(longlong **)(param_1[0x17] + 0x108) != plVar9)) {
            if (*plVar9 == 0) {
                    // WARNING: Subroutine does not return
              FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar9,&UNK_1809583d0,0x2cc,1);
            }
                    // WARNING: Subroutine does not return
            FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar9,&UNK_1809583d0,0x2ca,1);
          }
          param_1[0x21] = 0;
        }
        lVar5 = param_1[0x17];
        if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0xb0))) {
          puVar7 = *(undefined8 **)(lVar5 + 0xa0);
          do {
            if ((*(undefined8 **)(lVar5 + 0xa0) != (undefined8 *)0x0) &&
               ((undefined8 *)*puVar7 == param_1)) {
              FUN_180752820(lVar5,uVar11,0,1);
              break;
            }
            uVar8 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar8;
            puVar7 = puVar7 + 1;
          } while ((int)uVar8 < *(int *)(lVar5 + 0xb0));
        }
        if (param_1[7] == 0) {
          param_1[6] = 0;
          FUN_180768360(*(undefined8 *)(_DAT_180be12f0 + 0x120));
          plVar9 = param_1 + 1;
          *(longlong *)param_1[2] = *plVar9;
          *(undefined8 *)(*plVar9 + 8) = param_1[2];
          param_1[2] = plVar9;
          *plVar9 = (longlong)plVar9;
          plVar9 = param_1 + 0x24;
          *(longlong *)param_1[0x25] = *plVar9;
          *(undefined8 *)(*plVar9 + 8) = param_1[0x25];
          param_1[0x25] = plVar9;
          *plVar9 = (longlong)plVar9;
                    // WARNING: Subroutine does not return
          FUN_180768400(*(undefined8 *)(_DAT_180be12f0 + 0x120));
        }
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1[7],&UNK_1809583d0,0x2e5,1);
      }
    }
    else {
      iVar4 = 0x3e;
    }
  }
  else {
    iVar4 = 0x1e;
  }
  if ((bVar13) && (lVar5 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar5,10);
  }
  return iVar4;
}



undefined8
thunk_FUN_180752300(undefined8 *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if (((((param_3 - 1U & 0xfffffffc) != 0) || (param_3 == 3)) || ((param_5 - 1U & 0xfffffffc) != 0))
     || (param_5 == 3)) {
    return 0x13;
  }
  uVar8 = 0x20;
  uVar7 = param_2;
  if (param_3 != 2) {
    uVar7 = 0;
    if (param_3 == 4) {
      if (*(uint *)(param_1 + 0xd) != 0) {
        iVar1 = *(int *)(param_1 + 5);
        if (iVar1 == 1) {
          uVar6 = 8;
        }
        else if (iVar1 == 2) {
          uVar6 = 0x10;
        }
        else if (iVar1 == 3) {
          uVar6 = 0x18;
        }
        else {
          uVar6 = uVar8;
          if ((iVar1 != 4) && (uVar7 = param_2, iVar1 != 5)) goto LAB_1807523ea;
        }
        uVar7 = (uint)((((ulonglong)param_2 << 3) / uVar6 & 0xffffffff) /
                      (ulonglong)*(uint *)(param_1 + 0xd));
      }
    }
    else if (param_3 == 1) {
      uVar7 = (uint)(longlong)((float)param_2 * 0.001 * *(float *)((longlong)param_1 + 0x6c));
    }
  }
LAB_1807523ea:
  uVar9 = param_4;
  if (param_5 != 2) {
    uVar9 = 0;
    if (param_5 == 4) {
      if (*(uint *)(param_1 + 0xd) != 0) {
        iVar1 = *(int *)(param_1 + 5);
        if (iVar1 == 1) {
          uVar8 = 8;
        }
        else if (iVar1 == 2) {
          uVar8 = 0x10;
        }
        else if (iVar1 == 3) {
          uVar8 = 0x18;
        }
        else if ((iVar1 != 4) && (uVar9 = param_4, iVar1 != 5)) goto LAB_18075246d;
        uVar9 = (uint)((((ulonglong)param_4 << 3) / uVar8 & 0xffffffff) /
                      (ulonglong)*(uint *)(param_1 + 0xd));
      }
    }
    else if (param_5 == 1) {
      uVar9 = (uint)(longlong)((float)param_4 * 0.001 * *(float *)((longlong)param_1 + 0x6c));
    }
  }
LAB_18075246d:
  uVar2 = *(uint *)((longlong)param_1 + 0x44);
  uVar3 = 0;
  if (uVar7 < uVar2) {
    uVar3 = uVar7;
  }
  uVar7 = uVar2 - 1;
  if (uVar9 < uVar2) {
    uVar7 = uVar9;
  }
  uVar9 = uVar2 - 1;
  if (uVar7 != 0) {
    uVar9 = uVar7;
  }
  if (uVar3 < uVar9) {
    *(uint *)((longlong)param_1 + 0x4c) = uVar3;
    *(uint *)(param_1 + 10) = (uVar9 - uVar3) + 1;
    cVar4 = (**(code **)*param_1)(param_1);
    if ((cVar4 != '\0') &&
       (((*(int *)((longlong)param_1 + 0x4c) != 0 ||
         (*(int *)(param_1 + 10) != *(int *)((longlong)param_1 + 0x44))) &&
        ((*(byte *)((longlong)param_1 + 0x2c) & 6) != 0)))) {
      LOCK();
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x10;
      UNLOCK();
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 0x1f;
  }
  return uVar5;
}



undefined8 thunk_FUN_1807524e0(undefined8 *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  
  if ((param_2 & 7) == 0) goto LAB_180752566;
  uVar4 = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffff8;
  *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) != 0) {
      uVar4 = uVar4 | 2;
      goto LAB_18075251c;
    }
    if ((param_2 & 4) != 0) {
      uVar4 = uVar4 | 4;
      goto LAB_18075251c;
    }
  }
  else {
    uVar4 = uVar4 | 1;
LAB_18075251c:
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  }
  cVar3 = (**(code **)*param_1)();
  if (cVar3 != '\0') {
    if (((param_2 & 6) != 0) && (-1 < (char)*(undefined4 *)(param_1 + 0xb))) {
      LOCK();
      *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xffffffb7;
      UNLOCK();
      if (param_1[0x17] != 0) {
        LOCK();
        puVar1 = (uint *)(param_1[0x17] + 0x58);
        *puVar1 = *puVar1 & 0xffffffb7;
        UNLOCK();
      }
    }
    *(uint *)(param_1[0x2f] + 0x38) = *(uint *)(param_1[0x2f] + 0x38) & 0xfffffff8;
    *(uint *)(param_1[0x2f] + 0x38) =
         *(uint *)(param_1[0x2f] + 0x38) | *(uint *)((longlong)param_1 + 0x2c) & 7;
  }
LAB_180752566:
  if ((param_2 >> 0x12 & 1) == 0) {
    if ((param_2 >> 0x13 & 1) != 0) {
      *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffbffff;
      *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x80000;
    }
  }
  else {
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfff7ffff;
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x40000;
  }
  if ((param_2 >> 0x14 & 1) == 0) {
    if ((param_2 >> 0x15 & 1) == 0) {
      if ((param_2 >> 0x16 & 1) == 0) {
        if ((param_2 >> 0x17 & 1) == 0) {
          if ((param_2 >> 0x1a & 1) != 0) {
            *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xff0fffff;
            *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x4000000;
          }
        }
        else {
          *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfb8fffff;
          *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x800000;
        }
      }
      else {
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfb4fffff;
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x400000;
      }
    }
    else {
      *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfb2fffff;
      *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x200000;
    }
  }
  else {
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfb1fffff;
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x100000;
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x2c) | 0x40000000;
  if ((param_2 & 0x40000000) == 0) {
    uVar4 = *(uint *)((longlong)param_1 + 0x2c) & 0xbfffffff;
  }
  uVar2 = uVar4 | 0x80000000;
  if (-1 < (int)param_2) {
    uVar2 = uVar4 & 0x7fffffff;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar2;
  cVar3 = (**(code **)*param_1)(param_1);
  if (cVar3 == '\0') {
    if ((param_2 >> 0x11 & 1) == 0) {
      uVar4 = *(uint *)((longlong)param_1 + 0x2c) & 0xfffdffff;
    }
    else {
      uVar4 = *(uint *)((longlong)param_1 + 0x2c) | 0x20000;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  }
  if ((param_2 & 8) != 0) {
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xffffffef;
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 8;
    return 0;
  }
  if ((param_2 & 0x10) != 0) {
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffff7;
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x10;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807f7db0(short *param_1)
void FUN_1807f7db0(short *param_1)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  
  sVar1 = *param_1;
  psVar2 = param_1;
  while (sVar1 != 0) {
    psVar2 = psVar2 + 1;
    sVar1 = *psVar2;
  }
  lVar3 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                        (int)((longlong)psVar2 - (longlong)param_1 >> 1) * 2 + 2,&UNK_18097e790,0xca
                        ,0,0,1);
  if (lVar3 != 0) {
    lVar3 = lVar3 - (longlong)param_1;
    do {
      sVar1 = *param_1;
      *(short *)(lVar3 + (longlong)param_1) = sVar1;
      param_1 = param_1 + 1;
    } while (sVar1 != 0);
  }
  return;
}






