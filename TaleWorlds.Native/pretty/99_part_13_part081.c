#include "TaleWorlds.Native.Split.h"

// 99_part_13_part081.c - 4 个函数

// 函数: void FUN_1808e1020(longlong param_1)
void FUN_1808e1020(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x1c4);
  while (cVar1 == '\0') {
    iVar2 = FUN_180768940(*(undefined8 *)(param_1 + 0x58));
    if (iVar2 == 0) {
      FUN_1808e1060(param_1);
    }
    cVar1 = *(char *)(param_1 + 0x1c4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808e1060(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  if (((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x28) == plVar1)) {
    uVar8 = 0;
  }
  else {
    cVar2 = *(char *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if (cVar2 != '\0') {
      FUN_180768360(uVar3);
    }
    plVar7 = (longlong *)0x0;
    plVar12 = plVar7;
    if ((longlong *)*plVar1 != plVar1) {
      plVar12 = (longlong *)*plVar1;
    }
    *(longlong **)(param_1 + 0x30) = plVar12;
    *(longlong *)plVar12[1] = *plVar12;
    *(longlong *)(*plVar12 + 8) = plVar12[1];
    plVar12[1] = (longlong)plVar12;
    *plVar12 = (longlong)plVar12;
    lVar14 = *(longlong *)(param_1 + 0x30);
    plVar12 = *(longlong **)(lVar14 + 0x18);
    plVar1 = (longlong *)(lVar14 + 0x18);
    if ((plVar12 == plVar1) && (*(longlong **)(lVar14 + 0x20) == plVar1)) {
      bVar5 = false;
    }
    else {
      plVar15 = plVar12 + -6;
      if (plVar12 == (longlong *)0x0) {
        plVar15 = plVar7;
      }
      plVar12 = plVar15 + 6;
      if (plVar15 == (longlong *)0x0) {
        plVar12 = plVar7;
      }
      if (plVar12 != plVar1) {
        do {
          plVar7 = plVar12 + -6;
          if (plVar12 == (longlong *)0x0) {
            plVar7 = (longlong *)0x0;
          }
          iVar9 = *(int *)(param_1 + 0x40) + 1;
          uVar10 = (int)*(uint *)(param_1 + 0x44) >> 0x1f;
          iVar6 = (*(uint *)(param_1 + 0x44) ^ uVar10) - uVar10;
          if (iVar6 < iVar9) {
            iVar11 = (int)((float)iVar6 * 1.5);
            iVar6 = iVar9;
            if (iVar9 <= iVar11) {
              iVar6 = iVar11;
            }
            if (iVar6 < 8) {
              iVar11 = 8;
            }
            else if (iVar11 < iVar9) {
              iVar11 = iVar9;
            }
            uVar10 = FUN_180747f10(param_1 + 0x38,iVar11);
            if (uVar10 != 0) {
              if (cVar2 == '\0') {
                return (ulonglong)uVar10;
              }
                    // WARNING: Subroutine does not return
              FUN_180768400(uVar3);
            }
          }
          plVar15 = (longlong *)0x0;
          *(longlong **)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x40) * 8) =
               plVar7;
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
          lVar4 = *plVar12;
          lVar14 = lVar4 + -0x30;
          if (lVar4 == 0) {
            lVar14 = 0;
          }
          if (lVar14 != 0) {
            plVar15 = (longlong *)(lVar14 + 0x30);
          }
          *(longlong *)plVar12[1] = lVar4;
          *(longlong *)(*plVar12 + 8) = plVar12[1];
          plVar12[1] = (longlong)plVar12;
          *plVar12 = (longlong)plVar12;
          plVar12 = plVar15;
        } while (plVar15 != plVar1);
        lVar14 = *(longlong *)(param_1 + 0x30);
      }
      bVar5 = true;
      iVar6 = *(int *)(param_1 + 0x40);
      if (*(longlong *)(lVar14 + 0x10) != 0) {
        qsort(*(undefined8 *)(param_1 + 0x38),(longlong)iVar6,8,FUN_1808e1cd0);
      }
      uVar13 = 0;
      uVar8 = uVar13;
      if (0 < iVar6) {
        do {
          LOCK();
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + uVar13 * 8) + 0x48) = 2;
          UNLOCK();
          lVar14 = uVar13 * 8;
          uVar13 = uVar13 + 1;
          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar14) + 0x4c) = (int)uVar8;
          uVar8 = (ulonglong)((int)uVar8 + 1);
        } while ((longlong)uVar13 < (longlong)iVar6);
      }
    }
    if (cVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_180768400(uVar3);
    }
    if ((!bVar5) || (uVar8 = FUN_1808e0d80(param_1), (int)uVar8 == 0)) {
      if (*(char *)(param_1 + 0x10) != '\0') {
        FUN_180768360(*(undefined8 *)(param_1 + 0x18));
      }
      plVar1 = *(longlong **)(param_1 + 0x30);
      func_0x0001808e0bc0(plVar1 + 3);
      *(longlong *)plVar1[1] = *plVar1;
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      plVar1[1] = (longlong)plVar1;
      *plVar1 = (longlong)plVar1;
      *(longlong **)plVar1[1] = plVar1;
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      plVar1[1] = (longlong)plVar1;
      *plVar1 = (longlong)plVar1;
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar1,&UNK_180988c50,0x1cb,1);
    }
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808e1420(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    FUN_180768360(uVar2);
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x1c0)) {
      do {
        iVar3 = FUN_180768910(*(undefined8 *)(param_1 + 0x58));
        if (iVar3 != 0) {
                    // WARNING: Subroutine does not return
          FUN_180768400(uVar2);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x1c0));
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
                    // WARNING: Subroutine does not return
    FUN_180768400(uVar2);
  }
  puVar6 = (undefined8 *)0x0;
  plVar1 = (longlong *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  while (((longlong *)*plVar1 != plVar1 || (*(longlong **)(param_1 + 0x28) != plVar1))) {
    uVar4 = FUN_1808e1060(param_1);
    if (uVar4 != 0) {
LAB_1808e1495:
      if (uVar4 == 0) {
LAB_1808e14d1:
        uVar5 = FUN_1808e1610(param_1,0);
        if ((int)uVar5 == 0) {
          puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + -0x30);
          if (*(longlong *)(param_1 + 0x48) == 0) {
            puVar7 = puVar6;
          }
          puVar9 = puVar6;
          if (puVar7 != (undefined8 *)0x0) {
            puVar9 = puVar7 + 6;
          }
          if (puVar9 == (undefined8 *)(param_1 + 0x48)) {
            *(undefined1 *)(param_1 + 0x1c4) = 1;
            if ((*(char *)(param_1 + 0x10) == '\0') ||
               ((((uVar5 = FUN_180768910(*(undefined8 *)(param_1 + 0x58)), (int)uVar5 == 0 &&
                  (uVar5 = FUN_180767ad0(param_1 + 0x70), (int)uVar5 == 0)) &&
                 (uVar5 = FUN_180768380(*(undefined8 *)(param_1 + 0x18),0), (int)uVar5 == 0)) &&
                (((uVar5 = FUN_1807688f0(*(undefined8 *)(param_1 + 0x58)), (int)uVar5 == 0 &&
                  (uVar5 = FUN_1807688f0(*(undefined8 *)(param_1 + 0x60)), (int)uVar5 == 0)) &&
                 (uVar5 = FUN_1807688f0(*(undefined8 *)(param_1 + 0x68)), (int)uVar5 == 0)))))) {
              uVar5 = 0;
            }
          }
          else {
            puVar7 = puVar9 + -6;
            if (puVar9 == (undefined8 *)0x0) {
              puVar7 = puVar6;
            }
            uVar5 = FUN_1808e1d30(param_1,puVar7);
            if ((int)uVar5 == 0) {
              (**(code **)*puVar7)(puVar7,0);
                    // WARNING: Subroutine does not return
              FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar7,&UNK_180988c50,0x4c,1);
            }
          }
        }
      }
      else {
        uVar5 = (ulonglong)uVar4;
      }
      return uVar5;
    }
  }
  uVar4 = FUN_1808e1fb0(param_1);
  if (uVar4 == 0) goto LAB_1808e14d1;
  goto LAB_1808e1495;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808e1610(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    FUN_180768360(uVar2);
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x1c0)) {
      do {
        iVar4 = FUN_180768910(*(undefined8 *)(param_1 + 0x58));
        if (iVar4 != 0) {
                    // WARNING: Subroutine does not return
          FUN_180768400(uVar2);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0x1c0));
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
                    // WARNING: Subroutine does not return
    FUN_180768400(uVar2);
  }
  plVar9 = (longlong *)0x0;
  plVar6 = (longlong *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  do {
    if (((longlong *)*plVar6 == plVar6) && (*(longlong **)(param_1 + 0x28) == plVar6)) {
      uVar5 = FUN_1808e1fb0(param_1);
      if (uVar5 == 0) goto LAB_1808e16c1;
      break;
    }
    uVar5 = FUN_1808e1060(param_1);
  } while (uVar5 == 0);
  if (uVar5 != 0) {
    return (ulonglong)uVar5;
  }
LAB_1808e16c1:
  do {
    cVar1 = *(char *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    if (cVar1 != '\0') {
      FUN_180768360(uVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    if (param_2 == 0) {
      if (((lVar3 == 0) && (plVar6 = (longlong *)(param_1 + 0x20), (longlong *)*plVar6 == plVar6))
         && (*(longlong **)(param_1 + 0x28) == plVar6)) goto LAB_1808e1718;
    }
    else if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x10) != param_2)) {
      plVar6 = *(longlong **)(param_1 + 0x20);
      if (plVar6 != (longlong *)(param_1 + 0x20)) {
        do {
          if (plVar6[2] == param_2) {
            plVar11 = plVar6 + 3;
            if (((longlong *)*plVar11 != plVar11) || ((longlong *)plVar6[4] != plVar11))
            goto LAB_1808e1757;
            plVar6[2] = 0;
          }
          plVar6 = (longlong *)*plVar6;
          if (plVar6 == (longlong *)(param_1 + 0x20)) break;
        } while( true );
      }
LAB_1808e1718:
      if (cVar1 != '\0') {
                    // WARNING: Subroutine does not return
        FUN_180768400(uVar2);
      }
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x48) + -0x30);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        plVar6 = plVar9;
      }
      plVar11 = plVar9;
      if (plVar6 != (longlong *)0x0) {
        plVar11 = plVar6 + 6;
      }
      do {
        if (plVar11 == (longlong *)(param_1 + 0x48)) {
          return 0;
        }
        plVar6 = plVar11 + -6;
        if (plVar11 == (longlong *)0x0) {
          plVar6 = plVar9;
        }
        if (plVar11 != (longlong *)(param_1 + 0x48)) {
          plVar7 = (longlong *)(*plVar11 + -0x30);
          if (*plVar11 == 0) {
            plVar7 = plVar9;
          }
          plVar11 = plVar9;
          if (plVar7 != (longlong *)0x0) {
            plVar11 = plVar7 + 6;
          }
        }
        plVar7 = (longlong *)(**(code **)(*(longlong *)plVar6[1] + 8))();
      } while ((param_2 != 0) && ((plVar7 == (longlong *)0x0 || (*plVar7 != param_2))));
      uVar8 = FUN_1808e1d30(param_1,plVar6);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      (**(code **)*plVar6)(plVar6,0);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar6,&UNK_180988c50,0x2b8,1);
    }
LAB_1808e1757:
    *(undefined1 *)(param_1 + 0x1c5) = 1;
    if (cVar1 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_180768400(uVar2);
    }
    uVar8 = FUN_180768940(*(undefined8 *)(param_1 + 0x68));
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  } while( true );
}



int FUN_1808e1840(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int aiStackX_10 [6];
  
  if (((param_2 != 0) && (iVar1 = FUN_18073e110(param_2,aiStackX_10,8), iVar1 == 0)) &&
     (aiStackX_10[0] != -1)) {
    return aiStackX_10[0];
  }
  return 0;
}



undefined8
FUN_1808e1880(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,char param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  *(char *)(param_1 + 2) = param_5;
  iVar1 = 0;
  if (0 < param_4) {
    iVar1 = param_4;
  }
  param_1[1] = param_3;
  *(int *)((longlong)param_1 + 0x1d4) = iVar1;
  if (param_5 != '\0') {
    uVar2 = FUN_1807682e0(param_1 + 3,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_1807688b0(param_1 + 0xb);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_1807688b0(param_1 + 0xc);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_1807688b0(param_1 + 0xd);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_180767c00(param_1 + 0xe,&UNK_180988c28,FUN_1808e1020,param_1,10,0,1,*param_1,
                          (char)uVar2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808e1930(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  cVar3 = *(char *)(param_1 + 0x10);
  if (cVar3 != '\0') {
    FUN_180768360(uVar4);
  }
  LOCK();
  *(undefined4 *)(param_2 + 0x48) = 1;
  UNLOCK();
  puVar5 = (ulonglong *)(**(code **)(**(longlong **)(param_2 + 8) + 8))();
  uVar11 = 0;
  uVar7 = uVar11;
  if ((puVar5 != (ulonglong *)0x0) &&
     (((int)puVar5[1] == -1 || (uVar7 = *puVar5, *(int *)((longlong)puVar5 + 0xc) == -1)))) {
    LOCK();
    *(undefined4 *)(param_2 + 0x48) = 6;
    UNLOCK();
    goto LAB_1808e1ae4;
  }
  plVar6 = *(longlong **)(param_1 + 0x20);
  plVar1 = (longlong *)(param_1 + 0x20);
  if (plVar6 != plVar1) {
    while (plVar6[2] != uVar7) {
      if ((plVar6 == plVar1) || (plVar6 = (longlong *)*plVar6, plVar6 == plVar1))
      goto LAB_1808e19f4;
    }
    if (plVar6 != (longlong *)0x0) goto LAB_1808e1a9f;
  }
LAB_1808e19f4:
  LOCK();
  *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + 1;
  UNLOCK();
  plVar6 = (longlong *)
           FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x28,&UNK_180988c50,0xae,0,0,1);
  if (plVar6 == (longlong *)0x0) {
    uVar11 = 0x26;
    goto LAB_1808e1ae4;
  }
  *plVar6 = (longlong)plVar6;
  plVar6[1] = (longlong)plVar6;
  plVar6[2] = 0;
  plVar8 = plVar6 + 3;
  plVar6[4] = 0;
  *plVar8 = (longlong)plVar8;
  plVar6[4] = (longlong)plVar8;
  uVar7 = uVar11;
  if (puVar5 != (ulonglong *)0x0) {
    uVar7 = *puVar5;
  }
  plVar6[2] = uVar7;
  plVar8 = (longlong *)*plVar6;
  uVar7 = uVar11;
  if (plVar8 == plVar6) {
LAB_1808e1a82:
    plVar6[1] = *(longlong *)(param_1 + 0x28);
    *plVar6 = (longlong)plVar1;
    *(longlong **)(param_1 + 0x28) = plVar6;
    *(longlong **)plVar6[1] = plVar6;
    *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
LAB_1808e1a9f:
    puVar2 = (undefined8 *)(param_2 + 0x30);
    if (puVar2 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*puVar2;
      uVar7 = uVar11;
      if (puVar9 != puVar2) {
        do {
          puVar9 = (undefined8 *)*puVar9;
          uVar10 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar10;
        } while (puVar9 != puVar2);
        if (uVar10 != 0) goto LAB_1808e1adf;
      }
      *(longlong *)(param_2 + 0x38) = plVar6[4];
      *puVar2 = plVar6 + 3;
      plVar6[4] = (longlong)puVar2;
      **(undefined8 **)(param_2 + 0x38) = puVar2;
      goto LAB_1808e1ae4;
    }
  }
  else {
    do {
      plVar8 = (longlong *)*plVar8;
      uVar10 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar10;
    } while (plVar8 != plVar6);
    if (uVar10 == 0) goto LAB_1808e1a82;
  }
LAB_1808e1adf:
  uVar11 = 0x1c;
LAB_1808e1ae4:
  if (cVar3 != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400(uVar4);
  }
  return uVar11;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808e193c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  
  cVar3 = *(char *)(param_1 + 0x10);
  if (cVar3 != '\0') {
    FUN_180768360();
  }
  LOCK();
  *(undefined4 *)(param_2 + 0x48) = 1;
  UNLOCK();
  puVar4 = (ulonglong *)(**(code **)(**(longlong **)(param_2 + 8) + 8))();
  uVar10 = 0;
  uVar6 = uVar10;
  if ((puVar4 != (ulonglong *)0x0) &&
     (((int)puVar4[1] == -1 || (uVar6 = *puVar4, *(int *)((longlong)puVar4 + 0xc) == -1)))) {
    LOCK();
    *(undefined4 *)(param_2 + 0x48) = 6;
    UNLOCK();
    goto LAB_1808e1ae4;
  }
  plVar5 = *(longlong **)(param_1 + 0x20);
  plVar1 = (longlong *)(param_1 + 0x20);
  if (plVar5 != plVar1) {
    while (plVar5[2] != uVar6) {
      if ((plVar5 == plVar1) || (plVar5 = (longlong *)*plVar5, plVar5 == plVar1))
      goto LAB_1808e19f4;
    }
    if (plVar5 != (longlong *)0x0) goto LAB_1808e1a9f;
  }
LAB_1808e19f4:
  LOCK();
  *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + 1;
  UNLOCK();
  plVar5 = (longlong *)
           FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x28,&UNK_180988c50,0xae,0);
  if (plVar5 == (longlong *)0x0) {
    uVar10 = 0x26;
    goto LAB_1808e1ae4;
  }
  *plVar5 = (longlong)plVar5;
  plVar5[1] = (longlong)plVar5;
  plVar5[2] = 0;
  plVar7 = plVar5 + 3;
  plVar5[4] = 0;
  *plVar7 = (longlong)plVar7;
  plVar5[4] = (longlong)plVar7;
  uVar6 = uVar10;
  if (puVar4 != (ulonglong *)0x0) {
    uVar6 = *puVar4;
  }
  plVar5[2] = uVar6;
  plVar7 = (longlong *)*plVar5;
  uVar6 = uVar10;
  if (plVar7 == plVar5) {
LAB_1808e1a82:
    plVar5[1] = *(longlong *)(param_1 + 0x28);
    *plVar5 = (longlong)plVar1;
    *(longlong **)(param_1 + 0x28) = plVar5;
    *(longlong **)plVar5[1] = plVar5;
    *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
LAB_1808e1a9f:
    puVar2 = (undefined8 *)(param_2 + 0x30);
    if (puVar2 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)*puVar2;
      uVar6 = uVar10;
      if (puVar8 != puVar2) {
        do {
          puVar8 = (undefined8 *)*puVar8;
          uVar9 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar9;
        } while (puVar8 != puVar2);
        if (uVar9 != 0) goto LAB_1808e1adf;
      }
      *(longlong *)(param_2 + 0x38) = plVar5[4];
      *puVar2 = plVar5 + 3;
      plVar5[4] = (longlong)puVar2;
      **(undefined8 **)(param_2 + 0x38) = puVar2;
      goto LAB_1808e1ae4;
    }
  }
  else {
    do {
      plVar7 = (longlong *)*plVar7;
      uVar9 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar9;
    } while (plVar7 != plVar5);
    if (uVar9 == 0) goto LAB_1808e1a82;
  }
LAB_1808e1adf:
  uVar10 = 0x1c;
LAB_1808e1ae4:
  if (cVar3 != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  return uVar10;
}






// 函数: void FUN_1808e1b0a(void)
void FUN_1808e1b0a(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808e1b70(longlong param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int aiStackX_18 [2];
  
  bVar3 = false;
  if (param_3 != '\0') {
    cVar1 = *(char *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    if (cVar1 != '\0') {
      FUN_180768360(uVar2);
    }
    if (param_2[8] != 0) {
      iVar4 = FUN_18073e110(param_2[8],aiStackX_18,8);
      if ((iVar4 != 0) || (iVar4 = aiStackX_18[0], aiStackX_18[0] == -1)) {
        iVar4 = 0;
      }
      if (iVar4 <= *(int *)(param_1 + 0x1d4)) {
        uVar5 = func_0x0001808e1b20(param_1 + 0x48,param_2);
        if (uVar5 != 0) {
          if (cVar1 == '\0') {
            return (ulonglong)uVar5;
          }
                    // WARNING: Subroutine does not return
          FUN_180768400(uVar2);
        }
        *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) - iVar4;
        *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + iVar4;
        bVar3 = true;
        LOCK();
        *(undefined4 *)(param_2 + 9) = 7;
        UNLOCK();
      }
    }
    if (cVar1 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_180768400(uVar2);
    }
    if (bVar3) {
      uVar6 = FUN_1808e1fb0(param_1);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      return 0;
    }
  }
  uVar6 = FUN_1808e1d30(param_1,param_2);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  (**(code **)*param_2)(param_2,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_180988c50,0x12e,1);
}






// 函数: void FUN_1808e1ca0(undefined8 param_1,undefined8 param_2)
void FUN_1808e1ca0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1808e1d30();
  if (iVar1 == 0) {
    FUN_1808e1930(param_1,param_2);
  }
  return;
}



int FUN_1808e1cd0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  lVar2 = (**(code **)(**(longlong **)(*param_1 + 8) + 8))();
  lVar3 = (**(code **)(**(longlong **)(lVar3 + 8) + 8))();
  if ((lVar2 == 0) || (lVar3 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(lVar2 + 8) - *(int *)(lVar3 + 8);
    if (iVar1 == 0) {
      return *(int *)(lVar2 + 0xc) - *(int *)(lVar3 + 0xc);
    }
  }
  return iVar1;
}



int FUN_1808e1d30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  cVar2 = *(char *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (cVar2 != '\0') {
    FUN_180768360(uVar3);
  }
  iVar6 = *(int *)(param_2 + 0x48);
  iVar7 = 0;
  iVar5 = iVar7;
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      plVar1 = (longlong *)(param_2 + 0x30);
      **(longlong **)(param_2 + 0x38) = *plVar1;
      *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(param_2 + 0x38);
      *(longlong **)(param_2 + 0x38) = plVar1;
      *plVar1 = (longlong)plVar1;
      LOCK();
      *(undefined4 *)(param_2 + 0x48) = 0;
      UNLOCK();
    }
    else if (iVar6 == 2) {
      LOCK();
      *(undefined4 *)(param_2 + 0x48) = 0;
      UNLOCK();
      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_2 + 0x4c) * 8) = 0;
    }
    else if (iVar6 == 3) {
      LOCK();
      *(undefined4 *)(param_2 + 0x48) = 4;
      UNLOCK();
      if (*(char *)(param_1 + 0x10) != '\0') {
                    // WARNING: Subroutine does not return
        FUN_180768400(uVar3);
      }
      iVar5 = FUN_180768940(*(undefined8 *)(param_1 + 0x60));
      if (iVar5 == 0) {
        iVar5 = iVar7;
      }
    }
    else {
      if (iVar6 != 5) {
        if (iVar6 == 6) {
          LOCK();
          *(undefined4 *)(param_2 + 0x48) = 0;
          UNLOCK();
        }
        else {
          if (iVar6 != 7) {
            if (cVar2 == '\0') {
              return 0;
            }
                    // WARNING: Subroutine does not return
            FUN_180768400(uVar3);
          }
          iVar6 = FUN_1808e1840(param_1,*(undefined8 *)(param_2 + 0x40));
          *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) - iVar6;
          plVar1 = (longlong *)(param_2 + 0x30);
          **(longlong **)(param_2 + 0x38) = *plVar1;
          *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(param_2 + 0x38);
          *(longlong **)(param_2 + 0x38) = plVar1;
          *plVar1 = (longlong)plVar1;
          uVar4 = *(undefined8 *)(param_2 + 0x40);
          LOCK();
          *(undefined4 *)(param_2 + 0x48) = 0;
          UNLOCK();
          LOCK();
          *(undefined8 *)(param_2 + 0x40) = 0;
          UNLOCK();
          iVar7 = FUN_18073ebd0(uVar4);
          if (iVar7 == 0) {
            iVar7 = 0;
          }
        }
        goto LAB_1808e1dae;
      }
      iVar6 = FUN_1808e1840(param_1,*(undefined8 *)(param_2 + 0x40));
      *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) - iVar6;
      uVar4 = *(undefined8 *)(param_2 + 0x40);
      LOCK();
      *(undefined4 *)(param_2 + 0x48) = 0;
      UNLOCK();
      LOCK();
      *(undefined8 *)(param_2 + 0x40) = 0;
      UNLOCK();
      iVar5 = FUN_18073ebd0(uVar4);
      if (iVar5 == 0) goto LAB_1808e1dae;
    }
  }
  iVar7 = iVar5;
LAB_1808e1dae:
  if (cVar2 == '\0') {
    return iVar7;
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar3);
}






// 函数: void FUN_1808e1ef0(longlong param_1,char param_2)
void FUN_1808e1ef0(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    FUN_180768360(uVar2);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x1c0)) {
      do {
        iVar3 = FUN_180768910(*(undefined8 *)(param_1 + 0x58));
        if (iVar3 != 0) {
                    // WARNING: Subroutine does not return
          FUN_180768400(uVar2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x1c0));
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
                    // WARNING: Subroutine does not return
    FUN_180768400(uVar2);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  plVar1 = (longlong *)(param_1 + 0x20);
  do {
    if (((longlong *)*plVar1 == plVar1) && (*(longlong **)(param_1 + 0x28) == plVar1)) break;
    iVar4 = FUN_1808e1060(param_1);
    if (iVar4 != 0) {
      return;
    }
  } while (param_2 != '\0');
  FUN_1808e1fb0(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808e1fb0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + -0x30);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    puVar2 = puVar4;
  }
  puVar3 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2 + 6;
  }
  if (puVar3 != (undefined8 *)(param_1 + 0x48)) {
    puVar2 = puVar3 + -6;
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = puVar4;
    }
    if (*(int *)(param_1 + 0x1d4) < *(int *)(param_1 + 0x1d0)) {
      uVar1 = FUN_1808e1d30(param_1,puVar2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar2,&UNK_180988c50,0x2cb,1);
    }
  }
  return 0;
}



undefined8 * FUN_1808e20a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18097cf70;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




