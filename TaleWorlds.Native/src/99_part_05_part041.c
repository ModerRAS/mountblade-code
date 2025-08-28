#include "TaleWorlds.Native.Split.h"

// 99_part_05_part041.c - 6 个函数

// 函数: void FUN_1802f2240(longlong param_1,longlong param_2)
void FUN_1802f2240(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lStackX_8;
  longlong lStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  lStack_40 = 0;
  lStack_38 = 0;
  uVar4 = 0;
  uStack_30 = 0;
  uStack_28 = 3;
  FUN_1802e8c60(0,&lStack_40);
  lStackX_8 = param_1;
  FUN_18005ea90(&lStack_40,&lStackX_8);
  lVar1 = lStack_40;
  uVar2 = uVar4;
  uVar6 = uVar4;
  lVar7 = lStack_38;
  if (lStack_38 - lStack_40 >> 3 != 0) {
    do {
      if ((*(byte *)(*(longlong *)(uVar2 + lVar1) + 0x2c4) & 2) != 0) {
        FUN_1802e9fa0(*(longlong *)(uVar2 + lVar1),1,0,0,0);
        lVar1 = lStack_40;
        lVar7 = lStack_38;
      }
      uVar5 = (int)uVar6 + 1;
      uVar2 = uVar2 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)(lVar7 - lVar1 >> 3));
  }
  if (param_2 != 0) {
    uVar5 = *(uint *)(param_1 + 0x2c4) >> 1;
    if ((uVar5 & 1) != 0) {
      FUN_1803a00c0(param_2,param_1);
    }
    uVar2 = uVar4;
    if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
      do {
        FUN_1803a01a0(param_2,*(undefined8 *)(uVar2 + *(longlong *)(param_1 + 0x1c0)),
                      (byte)uVar5 & 1);
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        uVar2 = uVar2 + 8;
      } while ((ulonglong)(longlong)(int)uVar3 <
               (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
    }
  }
  if (lStack_40 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BADSPACEBASE *
FUN_1802f23a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte bVar11;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  undefined4 uStack_28;
  
  if ((*(uint *)(param_1 + 0x2ac) & 0x2000) == 0) {
    bVar11 = 0;
    lStack_40 = 0;
    lStack_38 = 0;
    lStack_30 = 0;
    uStack_28 = 3;
    lVar4 = FUN_18062b420(_DAT_180c8ed18,0x400,3,param_4,0xfffffffffffffffe);
    if (lStack_40 != lStack_38) {
                    // WARNING: Subroutine does not return
      memmove(lVar4,lStack_40,lStack_38 - lStack_40);
    }
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lStack_40);
    }
    lStack_30 = lVar4 + 0x400;
    lStack_40 = lVar4;
    lStack_38 = lVar4;
    FUN_1802e8c60(param_1,&lStack_40);
    uVar8 = lStack_38 - lStack_40 >> 3;
    uVar9 = 0;
    if (uVar8 != 0) {
      do {
        cVar3 = FUN_1802f23a0(*(undefined8 *)(lStack_40 + uVar9 * 8),param_2);
        if (cVar3 != '\0') goto LAB_1802f26b3;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
    }
    if ((((*(char *)(param_1 + 0x2e5) == '\x04') && (*(longlong *)(param_1 + 0x260) == 0)) &&
        ((*(byte *)(param_1 + 0x2e9) & 1) == 0)) &&
       ((((*(uint *)(param_1 + 0x2ac) & 0x20000) == 0 && ((*(byte *)(param_1 + 0x148) & 0x58) == 0))
        && (*(int *)(param_1 + 0xe0) == 0)))) {
      iVar6 = (int)(*(longlong *)(param_1 + 0x208) - *(longlong *)(param_1 + 0x200) >> 3);
      if (0 < iVar6) {
        lVar4 = 0;
        do {
          cVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x200) + lVar4 * 8) + 0x130))
                            ();
          if (cVar3 != '\0') goto LAB_1802f26b3;
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar6);
      }
      uVar8 = *(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3;
      uVar9 = 0;
      if (uVar8 != 0) {
        do {
          cVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xf0) + uVar9 * 8) + 0x1d8))
                            ();
          if (cVar3 == '\0') {
            bVar11 = 1;
            break;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar8);
      }
      if (((param_2 != 0) && (bVar11 == 0)) && (lVar4 = FUN_1803a0010(param_2,param_1), lVar4 != 0))
      {
        plVar1 = *(longlong **)(lVar4 + 8);
        lVar10 = *plVar1;
        plVar7 = plVar1;
        if (lVar10 == 0) {
          plVar7 = plVar1 + 1;
          lVar10 = *plVar7;
          while (lVar10 == 0) {
            plVar7 = plVar7 + 1;
            lVar10 = *plVar7;
          }
        }
        if (lVar10 != plVar1[*(longlong *)(lVar4 + 0x10)]) {
          do {
            plVar1 = (longlong *)**(longlong **)(lVar10 + 8);
            if (*(code **)(*plVar1 + 0x1d8) == (code *)&UNK_18027b560) {
              iVar6 = 0;
              plVar5 = (longlong *)plVar1[7];
              uVar8 = plVar1[8] - (longlong)plVar5 >> 4;
              if (uVar8 != 0) {
                do {
                  lVar2 = *(longlong *)(*plVar5 + 0x1b8);
                  if (((*(char *)(*plVar5 + 0xf7) != '\0') ||
                      (((*(uint *)(lVar2 + 0x138) & 0x3000) - 0x1000 & 0xffffefff) == 0)) ||
                     ((*(uint *)(lVar2 + 0x388) >> 0x19 & 1) != 0)) goto LAB_1802f26b3;
                  iVar6 = iVar6 + 1;
                  plVar5 = plVar5 + 2;
                } while ((ulonglong)(longlong)iVar6 < uVar8);
              }
            }
            else {
              cVar3 = (**(code **)(*plVar1 + 0x1d8))(plVar1);
              if (cVar3 == '\0') goto LAB_1802f26b3;
            }
            lVar10 = *(longlong *)(lVar10 + 0x10);
            while (lVar10 == 0) {
              plVar7 = plVar7 + 1;
              lVar10 = *plVar7;
            }
          } while (lVar10 != *(longlong *)
                              (*(longlong *)(lVar4 + 8) + *(longlong *)(lVar4 + 0x10) * 8));
        }
      }
    }
    else {
LAB_1802f26b3:
      bVar11 = 1;
    }
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    register0x00000020 = (BADSPACEBASE *)(ulonglong)bVar11;
  }
  return register0x00000020;
}






// 函数: void FUN_1802f2700(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802f2700(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plStackX_8;
  
  bVar1 = *(byte *)(param_1 + 0x2e8);
  bVar6 = bVar1 & 0xf7 | param_2 << 3;
  *(byte *)(param_1 + 0x2e8) = bVar6;
  if ((param_2 == '\0') || ((bVar1 & 1) == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x20);
  uVar10 = 0;
  if (lVar7 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    if ((bVar6 & 0xb) == 0xb) {
      if ((*(longlong *)(lVar5 + 0x170) == 0) &&
         (plVar2 = *(longlong **)(param_1 + 0x10), plVar2 != (longlong *)0x0)) {
        plStackX_8 = plVar2;
        (**(code **)(*plVar2 + 0x28))();
        uVar4 = FUN_180389a90(lVar7 + 0x29a0,&plStackX_8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x170) = uVar4;
        lVar7 = *(longlong *)(param_1 + 0x20);
        plVar2 = *(longlong **)(lVar7 + 0x29a8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x18))
                    (plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x170),param_1 + 0x70);
          lVar7 = *(longlong *)(param_1 + 0x20);
        }
        plVar2 = *(longlong **)(lVar7 + 0x29a8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))
                    (plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x170),
                     *(undefined4 *)(param_1 + 0x18));
        }
      }
    }
    else {
      lVar3 = *(longlong *)(lVar5 + 0x170);
      if (lVar3 != 0) {
        plVar2 = *(longlong **)(lVar7 + 0x29a8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,lVar3,lVar3,param_4,0xfffffffffffffffe);
          lVar5 = *(longlong *)(param_1 + 0x28);
        }
        *(undefined8 *)(lVar5 + 0x170) = 0;
      }
    }
  }
  uVar11 = uVar10;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f2700(*(undefined8 *)(uVar11 + *(longlong *)(param_1 + 0x1c0)),uVar8);
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  return;
}



bool FUN_1802f28a0(longlong param_1)

{
  char cVar1;
  
  while (((*(byte *)(param_1 + 0x2e9) & 1) == 0 && ((*(byte *)(param_1 + 0x2c4) & 8) == 0))) {
    param_1 = *(longlong *)(param_1 + 0x168);
    if (param_1 == 0) {
      cVar1 = FUN_1802f23a0();
      return cVar1 == '\0';
    }
  }
  return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f28f0(longlong *param_1,longlong param_2)
void FUN_1802f28f0(longlong *param_1,longlong param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plStackX_8;
  longlong *plStackX_18;
  longlong lStackX_20;
  undefined1 auStack_50 [24];
  
  if ((*(uint *)((longlong)param_1 + 0x2ac) & 0x8000) != 0) {
    return;
  }
  if (param_1[0x22] == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0x318) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x29) & 0x20000) != 0) {
    return;
  }
  plVar12 = param_1 + 0xe;
  puVar8 = (undefined4 *)FUN_180085020(plVar12,auStack_50);
  fVar1 = (float)puVar8[1];
  uVar2 = puVar8[2];
  uVar3 = puVar8[3];
  *(undefined4 *)(param_1 + 0x27) = *puVar8;
  *(float *)((longlong)param_1 + 0x13c) = fVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar3;
  if ((fVar1 <= -1e-06) || (1e-06 <= fVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((-1e-06 < *(float *)(param_1 + 0x28)) && (*(float *)(param_1 + 0x28) < 1e-06)) {
    return;
  }
  if (bVar4) {
    return;
  }
  (**(code **)(**(longlong **)(param_2 + 0x318) + 0xd0))
            (*(longlong **)(param_2 + 0x318),&plStackX_8,0x358637bd,param_1 + 0x4e,plVar12);
  plVar5 = plStackX_8;
  plVar12 = (longlong *)(param_2 + 0x60cb8);
  plStackX_18 = plVar12;
  iVar7 = _Mtx_lock(plVar12);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  puVar13 = *(undefined8 **)(param_2 + 0x78);
  if (puVar13 < *(undefined8 **)(param_2 + 0x80)) {
    *(undefined8 **)(param_2 + 0x78) = puVar13 + 1;
    *puVar13 = plVar5;
    goto LAB_1802f2aba;
  }
  puVar11 = *(undefined8 **)(param_2 + 0x70);
  lVar9 = (longlong)puVar13 - (longlong)puVar11 >> 3;
  if (lVar9 == 0) {
    lVar9 = 1;
LAB_1802f2a4b:
    puVar10 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar9 * 8,*(undefined1 *)(param_2 + 0x88));
    puVar13 = *(undefined8 **)(param_2 + 0x78);
    puVar11 = *(undefined8 **)(param_2 + 0x70);
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 != 0) goto LAB_1802f2a4b;
    puVar10 = (undefined8 *)0x0;
  }
  if (puVar11 != puVar13) {
                    // WARNING: Subroutine does not return
    memmove(puVar10,puVar11,(longlong)puVar13 - (longlong)puVar11);
  }
  *puVar10 = plVar5;
  if (*(longlong *)(param_2 + 0x70) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  *(undefined8 **)(param_2 + 0x78) = puVar10 + 1;
  *(undefined8 **)(param_2 + 0x80) = puVar10 + lVar9;
LAB_1802f2aba:
  iVar7 = _Mtx_unlock(plVar12);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  plVar12 = plStackX_8;
  *(undefined8 *)(param_2 + 0x98) = 0;
  if (plStackX_8 != (longlong *)0x0) {
    plStackX_8[2] = (longlong)param_1;
    plStackX_18 = plStackX_8;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
    }
    plStackX_18 = (longlong *)param_1[0x4e];
    param_1[0x4e] = (longlong)plVar12;
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
      (**(code **)(*plStackX_8 + 0x90))();
    }
    cVar6 = (**(code **)(*plStackX_8 + 0x70))();
    if (cVar6 != '\0') {
      lVar9 = param_2 + 0x80c8;
      plStackX_18 = param_1;
      lStackX_20 = lVar9;
      iVar7 = _Mtx_lock(lVar9);
      if (iVar7 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar7);
      }
      FUN_18005ea90(param_2 + 0x8118,&plStackX_18);
      iVar7 = _Mtx_unlock(lVar9);
      if (iVar7 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar7);
      }
    }
  }
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f2be0(undefined8 param_1,longlong param_2,longlong *param_3)
void FUN_1802f2be0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_4e8 [88];
  undefined *puStack_490;
  longlong lStack_488;
  undefined4 uStack_480;
  ulonglong uStack_478;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  ulonglong uStack_398;
  undefined8 uStack_368;
  undefined1 auStack_278 [544];
  ulonglong uStack_58;
  
  uStack_368 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_4e8;
  pcVar8 = (char *)0x0;
  pcVar6 = "variables";
  do {
    pcVar7 = pcVar6;
    pcVar6 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  puVar5 = *(undefined8 **)(param_2 + 0x30);
  do {
    if (puVar5 == (undefined8 *)0x0) goto LAB_1802f3a4a;
    pcVar6 = (char *)*puVar5;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x180d48d24;
      pcVar2 = pcVar8;
    }
    else {
      pcVar2 = (char *)puVar5[2];
    }
    if (pcVar2 == pcVar7 + -0x180a1950f) {
      pcVar2 = pcVar6 + (longlong)pcVar2;
      if (pcVar2 <= pcVar6) {
LAB_1802f2c88:
        pcVar6 = "variable";
        do {
          pcVar7 = pcVar6;
          pcVar6 = pcVar7 + 1;
        } while (*pcVar6 != '\0');
        for (pcVar6 = (char *)puVar5[6]; pcVar2 = pcVar8, pcVar6 != (char *)0x0;
            pcVar6 = *(char **)(pcVar6 + 0x58)) {
          pcVar3 = *(char **)pcVar6;
          if (pcVar3 == (char *)0x0) {
            pcVar3 = (char *)0x180d48d24;
            pcVar1 = pcVar8;
          }
          else {
            pcVar1 = *(char **)(pcVar6 + 0x10);
          }
          if (pcVar1 == pcVar7 + -0x180a194ff) {
            pcVar1 = pcVar1 + (longlong)pcVar3;
            pcVar2 = pcVar6;
            if (pcVar1 <= pcVar3) break;
            lVar4 = (longlong)&UNK_180a19500 - (longlong)pcVar3;
            while (*pcVar3 == pcVar3[lVar4]) {
              pcVar3 = pcVar3 + 1;
              if (pcVar1 <= pcVar3) goto LAB_1802f2d05;
            }
          }
        }
LAB_1802f2d05:
        puStack_3b0 = &UNK_180a3c3e0;
        uStack_398 = 0;
        uStack_3a8 = 0;
        uStack_3a0 = 0;
        puStack_490 = &UNK_180a3c3e0;
        uStack_478 = 0;
        lStack_488 = 0;
        uStack_480 = 0;
        if (pcVar2 != (char *)0x0) {
          pcVar6 = "name";
          do {
            pcVar7 = pcVar6;
            pcVar6 = pcVar7 + 1;
          } while (*pcVar6 != '\0');
          puVar5 = *(undefined8 **)(pcVar2 + 0x40);
          do {
            if (puVar5 == (undefined8 *)0x0) {
LAB_1802f2de0:
              (**(code **)(*param_3 + 0x140))(param_3,&puStack_490);
                    // WARNING: Subroutine does not return
              memset(auStack_278,0,0x200);
            }
            pcVar6 = (char *)*puVar5;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = (char *)0x180d48d24;
              pcVar2 = pcVar8;
            }
            else {
              pcVar2 = (char *)puVar5[2];
            }
            if (pcVar2 == pcVar7 + -0x180a03a83) {
              pcVar2 = pcVar2 + (longlong)pcVar6;
              if (pcVar2 <= pcVar6) {
LAB_1802f2dc5:
                lVar4 = 0x180d48d24;
                if (puVar5[1] != 0) {
                  lVar4 = puVar5[1];
                }
                FUN_180627c50(&puStack_490,lVar4);
                goto LAB_1802f2de0;
              }
              lVar4 = (longlong)&DAT_180a03a84 - (longlong)pcVar6;
              while (*pcVar6 == pcVar6[lVar4]) {
                pcVar6 = pcVar6 + 1;
                if (pcVar2 <= pcVar6) goto LAB_1802f2dc5;
              }
            }
            puVar5 = (undefined8 *)puVar5[6];
          } while( true );
        }
        (**(code **)(*param_3 + 0xe0))(param_3);
        puStack_490 = &UNK_180a3c3e0;
        if (lStack_488 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_488 = 0;
        uStack_478 = uStack_478 & 0xffffffff00000000;
        puStack_490 = &UNK_18098bcb0;
        uStack_3a8 = 0;
        uStack_398 = uStack_398 & 0xffffffff00000000;
        puStack_3b0 = &UNK_18098bcb0;
LAB_1802f3a4a:
                    // WARNING: Subroutine does not return
        FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_4e8);
      }
      lVar4 = (longlong)&UNK_180a19510 - (longlong)pcVar6;
      while (*pcVar6 == pcVar6[lVar4]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar2 <= pcVar6) goto LAB_1802f2c88;
      }
    }
    puVar5 = (undefined8 *)puVar5[0xb];
  } while( true );
}



int * FUN_1802f3a80(longlong param_1,int param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  ulonglong uVar12;
  char acStackX_8 [4];
  uint uStackX_c;
  int iStackX_10;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  lVar7 = *(longlong *)(param_1 + 0x18);
  iStackX_10 = param_2;
  if (*(longlong *)(param_1 + 0x28) != param_4) {
    lVar7 = FUN_18039fda0(*(undefined8 *)(param_1 + 0x20),param_4);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  plVar4 = *(longlong **)(lVar3 + 0x50);
  LOCK();
  plVar1 = plVar4 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 0x38;
  UNLOCK();
  piVar11 = (int *)0x0;
  uVar9 = lVar2 + 0xfU & 0xfffffffffffffff0;
  piVar10 = piVar11;
  if (uVar9 + 0x28 < 0x2000000) {
    piVar10 = (int *)(*plVar4 + uVar9);
  }
  uVar5 = *(undefined8 *)(lVar3 + 0x50);
  piVar6 = piVar10 + 2;
  uVar12 = (ulonglong)iStackX_10;
  piVar6[0] = 0;
  piVar6[1] = 0;
  piVar10[4] = 0;
  piVar10[5] = 0;
  *(undefined8 *)(piVar10 + 6) = uVar5;
  piVar10[8] = 0;
  piVar10[9] = 0;
  *(int **)piVar6 = piVar6;
  *(int **)(piVar10 + 4) = piVar6;
  *(undefined8 *)piVar10 = param_3;
  uVar9 = uVar12 % (ulonglong)*(uint *)(lVar7 + 0x10);
  piVar6 = *(int **)(*(longlong *)(lVar7 + 8) + uVar9 * 8);
  while( true ) {
    if (piVar6 == (int *)0x0) {
      plVar4 = *(longlong **)(lVar7 + 0x30);
      LOCK();
      plVar1 = plVar4 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + 0x28;
      UNLOCK();
      uVar8 = lVar2 + 0xfU & 0xfffffffffffffff0;
      if (uVar8 + 0x18 < 0x2000000) {
        piVar11 = (int *)(*plVar4 + uVar8);
      }
      iStack_20 = (int)piVar10;
      iStack_1c = (int)((ulonglong)piVar10 >> 0x20);
      *piVar11 = iStackX_10;
      piVar11[1] = iStack_24;
      piVar11[2] = iStack_20;
      piVar11[3] = iStack_1c;
      piVar11[4] = 0;
      piVar11[5] = 0;
      FUN_18066c220(lVar7 + 0x20,acStackX_8,*(undefined4 *)(lVar7 + 0x10),
                    *(undefined4 *)(lVar7 + 0x18),1);
      if (acStackX_8[0] != '\0') {
        uVar9 = uVar12 % (ulonglong)uStackX_c;
        FUN_1802f5a20(lVar7,uStackX_c);
      }
      *(undefined8 *)(piVar11 + 4) = *(undefined8 *)(*(longlong *)(lVar7 + 8) + uVar9 * 8);
      *(int **)(*(longlong *)(lVar7 + 8) + uVar9 * 8) = piVar11;
      *(longlong *)(lVar7 + 0x18) = *(longlong *)(lVar7 + 0x18) + 1;
      return piVar10;
    }
    if (iStackX_10 == *piVar6) break;
    piVar6 = *(int **)(piVar6 + 4);
  }
  return piVar10;
}






// 函数: void FUN_1802f3c20(longlong param_1)
void FUN_1802f3c20(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  lVar4 = *(longlong *)(param_1 + 0xf0);
  uVar5 = 0;
  uVar7 = uVar5;
  uVar6 = uVar5;
  if (*(longlong *)(param_1 + 0xf8) - lVar4 >> 3 != 0) {
    do {
      iVar2 = (**(code **)(**(longlong **)(uVar6 + lVar4) + 0x98))();
      if ((iVar2 == 0) &&
         (lVar4 = *(longlong *)(uVar6 + *(longlong *)(param_1 + 0xf0)), uVar8 = uVar5,
         uVar10 = uVar5, *(longlong *)(lVar4 + 0x40) - *(longlong *)(lVar4 + 0x38) >> 4 != 0)) {
        do {
          uVar9 = (int)uVar10 + 1;
          pbVar1 = (byte *)(*(longlong *)(uVar8 + *(longlong *)(lVar4 + 0x38)) + 0xfd);
          *pbVar1 = *pbVar1 | 1;
          uVar8 = uVar8 + 0x10;
          uVar10 = (ulonglong)uVar9;
        } while ((ulonglong)(longlong)(int)uVar9 <
                 (ulonglong)(*(longlong *)(lVar4 + 0x40) - *(longlong *)(lVar4 + 0x38) >> 4));
      }
      lVar4 = *(longlong *)(param_1 + 0xf0);
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar9;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(param_1 + 0xf8) - lVar4 >> 3));
  }
  lVar4 = *(longlong *)(param_1 + 0x260);
  if ((lVar4 != 0) &&
     (iVar2 = (int)(*(longlong *)(lVar4 + 0x1b0) - *(longlong *)(lVar4 + 0x1a8) >> 3), uVar7 = uVar5
     , 0 < iVar2)) {
    do {
      iVar3 = (**(code **)(**(longlong **)
                             (*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x1a8) + uVar7 * 8) +
                          0x98))();
      if ((iVar3 == 0) &&
         (lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x1a8) + uVar7 * 8),
         uVar6 = uVar5, uVar8 = uVar5,
         *(longlong *)(lVar4 + 0x40) - *(longlong *)(lVar4 + 0x38) >> 4 != 0)) {
        do {
          uVar9 = (int)uVar8 + 1;
          pbVar1 = (byte *)(*(longlong *)(uVar6 + *(longlong *)(lVar4 + 0x38)) + 0xfd);
          *pbVar1 = *pbVar1 | 1;
          uVar6 = uVar6 + 0x10;
          uVar8 = (ulonglong)uVar9;
        } while ((ulonglong)(longlong)(int)uVar9 <
                 (ulonglong)(*(longlong *)(lVar4 + 0x40) - *(longlong *)(lVar4 + 0x38) >> 4));
      }
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)iVar2);
  }
  iVar2 = (int)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3);
  if (0 < iVar2) {
    do {
      FUN_1802f3c20(*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f3df0(longlong param_1,longlong param_2)
void FUN_1802f3df0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  
  lVar6 = *(longlong *)(param_1 + 0x228);
  uVar2 = 0;
  lVar5 = *(longlong *)(param_1 + 0x220);
  uVar4 = uVar2;
  uVar7 = uVar2;
  if (lVar6 - lVar5 >> 3 != 0) {
    do {
      if (*(longlong *)(lVar5 + uVar7) == param_2) {
        *(undefined8 *)(lVar5 + uVar7) = *(undefined8 *)(lVar5 + -8 + (lVar6 - lVar5 >> 3) * 8);
        lVar5 = *(longlong *)(param_1 + 0x228);
        lVar6 = *(longlong *)(param_1 + 0x220);
        uVar9 = lVar5 - lVar6 >> 3;
        uVar8 = uVar9 - 1;
        if (uVar9 < uVar8) {
          if (*(longlong *)(param_1 + 0x230) - lVar5 >> 3 == -1) {
                    // WARNING: Subroutine does not return
            memset(lVar5,0,0xfffffffffffffff8);
          }
          if (uVar9 == 0) {
            uVar9 = 1;
          }
          else {
            uVar9 = uVar9 * 2;
          }
          if (uVar9 < uVar8) {
            uVar9 = uVar8;
          }
          if (uVar9 != 0) {
            uVar2 = FUN_18062b420(_DAT_180c8ed18,uVar9 * 8,*(undefined1 *)(param_1 + 0x238));
            lVar6 = *(longlong *)(param_1 + 0x220);
            lVar5 = *(longlong *)(param_1 + 0x228);
          }
          if (lVar6 != lVar5) {
                    // WARNING: Subroutine does not return
            memmove(uVar2,lVar6,lVar5 - lVar6);
          }
                    // WARNING: Subroutine does not return
          memset(uVar2,0,0xfffffffffffffff8);
        }
        lVar6 = lVar6 + uVar8 * 8;
        *(longlong *)(param_1 + 0x228) = lVar6;
      }
      lVar5 = *(longlong *)(param_1 + 0x220);
      uVar12 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar12;
      uVar7 = uVar7 + 8;
    } while ((ulonglong)(longlong)(int)uVar12 < (ulonglong)(lVar6 - lVar5 >> 3));
  }
  lVar6 = *(longlong *)(param_2 + 0x18);
  lVar5 = *(longlong *)(param_1 + 0x20);
  if ((int)(*(longlong *)(lVar6 + 0x228) - *(longlong *)(lVar6 + 0x220) >> 3) == 0) {
    plVar3 = *(longlong **)(lVar5 + 0x5c98);
    iVar11 = (int)(*(longlong *)(lVar5 + 0x5ca0) - (longlong)plVar3 >> 3);
    if (0 < iVar11) {
      uVar4 = uVar2;
      while (*plVar3 != lVar6) {
        uVar4 = (ulonglong)((int)uVar4 + 1);
        uVar2 = uVar2 + 1;
        plVar3 = plVar3 + 1;
        if ((longlong)iVar11 <= (longlong)uVar2) {
          return;
        }
      }
      plVar3 = (longlong *)(lVar5 + 0x5c98);
      uVar7 = (longlong)iVar11 - 1;
      *(undefined8 *)(*(longlong *)(lVar5 + 0x5c98) + (longlong)(int)uVar4 * 8) =
           *(undefined8 *)(*(longlong *)(lVar5 + 0x5c98) + uVar7 * 8);
      lVar10 = *(longlong *)(lVar5 + 0x5ca0);
      lVar6 = *plVar3;
      uVar4 = lVar10 - lVar6 >> 3;
      if (uVar7 <= uVar4) {
        *(ulonglong *)(lVar5 + 0x5ca0) = lVar6 + uVar7 * 8;
        return;
      }
      uVar2 = uVar7 - uVar4;
      if (uVar2 <= (ulonglong)(*(longlong *)(lVar5 + 0x5ca8) - lVar10 >> 3)) {
        if (uVar2 == 0) {
          *(longlong *)(lVar5 + 0x5ca0) = lVar10;
          return;
        }
                    // WARNING: Subroutine does not return
        memset(lVar10,0,uVar2 * 8);
      }
      uVar8 = uVar4 * 2;
      if (uVar4 == 0) {
        uVar8 = 1;
      }
      if (uVar8 < uVar7) {
        uVar8 = uVar7;
      }
      if (uVar8 == 0) {
        lVar1 = 0;
      }
      else {
        lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar8 * 8,*(undefined1 *)(lVar5 + 0x5cb0));
        lVar6 = *plVar3;
        lVar10 = *(longlong *)(lVar5 + 0x5ca0);
      }
      if (lVar6 == lVar10) {
        if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
          memset(lVar1,0,uVar2 * 8);
        }
        if (*plVar3 == 0) {
          *plVar3 = lVar1;
          *(ulonglong *)(lVar5 + 0x5ca8) = lVar1 + uVar8 * 8;
          *(longlong *)(lVar5 + 0x5ca0) = lVar1;
          return;
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar6,lVar10 - lVar6);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




