#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part157_sub002_sub002.c - 1 个函数

// 函数: void FUN_18075f1e0(longlong param_1,int param_2,undefined4 *param_3,longlong param_4,
void FUN_18075f1e0(longlong param_1,int param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  undefined4 auStack_48 [2];
  undefined1 auStack_40 [32];
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  puVar3 = (undefined1 *)0x0;
  auStack_48[0] = 0;
  if ((((-1 < param_2) && (lVar1 = *(longlong *)(param_1 + 0xe8), lVar1 != 0)) &&
      (param_2 < *(int *)(lVar1 + 0x60))) &&
     ((*(longlong *)(lVar1 + 0x98) != 0 &&
      (**(int **)(*(longlong *)(lVar1 + 0x68) + (longlong)param_2 * 8) == 1)))) {
    auStack_40[0] = 0;
    *(longlong *)(param_1 + 0xb0) = param_1;
    if ((param_4 != 0) || (*(int *)(param_1 + 0x100) == 0)) {
      puVar3 = auStack_40;
    }
    iVar2 = (**(code **)(lVar1 + 0x98))((longlong *)(param_1 + 0xb0),param_2,auStack_48,puVar3);
    if (iVar2 == 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = auStack_48[0];
      }
      if (param_4 != 0) {
        func_0x00018076b450(param_4,puVar3,param_5);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18075f4a0(void)

{
  (**(code **)(_DAT_180c0c6d0 + 8))();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18075f4c0(longlong *param_1,ulonglong param_2,ulonglong param_3,int param_4,
                       longlong *param_5)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint in_stack_fffffffffffffef0;
  uint uStack_f8;
  uint auStack_f4 [3];
  undefined8 uStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 ******ppppppuStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_50;
  undefined8 uStack_48;
  ulonglong uVar12;
  
  if (((*(uint *)(*param_1 + 0x78) & 0x10000) == 0) && (*(char *)(_DAT_180be12f0 + 0x158) == '\0'))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar10 = 0;
  uVar4 = param_2;
  uVar7 = param_3;
  uVar12 = uVar10;
  if (0 < *(int *)((longlong)param_1 + 0xc)) {
    while( true ) {
      lVar1 = *(longlong *)(param_1[4] + uVar10);
      lVar5 = *(longlong *)(lVar1 + 0x60);
      if (!bVar2) goto LAB_18075f551;
      FUN_180768b90(auStack_f4,uVar4);
      while( true ) {
        uVar4 = param_2 & 0xffffffff;
        uVar7 = param_3 & 0xffffffff;
LAB_18075f551:
        iVar3 = FUN_180760d50(lVar5,uVar4,uVar7,param_4);
        if (iVar3 == 0) break;
        uVar4 = FUN_180742e60(*param_1);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      if ((*param_5 == 0) || (iVar3 = FUN_18075f8e0(param_5), iVar3 == 0)) {
        *param_5 = *(longlong *)(lVar5 + 0x138);
        *(undefined4 *)(param_5 + 2) = *(undefined4 *)(lVar5 + 0x148);
        param_5[1] = *(longlong *)(lVar5 + 0x140);
        *(undefined4 *)((longlong)param_5 + 0x14) = *(undefined4 *)(lVar5 + 0x14c);
        *(undefined4 *)(param_5 + 3) = *(undefined4 *)(lVar5 + 0x150);
        *(undefined8 *)(lVar5 + 0x138) = 0;
        *(undefined8 *)(lVar5 + 0x140) = 0;
        *(undefined8 *)(lVar5 + 0x148) = 0;
        *(undefined8 *)(lVar5 + 0x150) = 0;
      }
      if ((bVar2) && (FUN_180768b90(&uStack_f8), auStack_f4[0] <= uStack_f8)) {
        iVar3 = uStack_f8 - auStack_f4[0];
        puVar8 = (undefined8 *)(lVar1 + 0x70);
        *(int *)(lVar5 + 0x1dc) = iVar3;
        for (puVar6 = (undefined8 *)*puVar8; puVar6 != puVar8; puVar6 = (undefined8 *)*puVar6) {
          if ((*(byte *)(puVar6[2] + 0x7c) & 5) == 0) {
            iVar3 = iVar3 + *(int *)(*(longlong *)(puVar6[2] + 0x58) + 0x1e0);
          }
        }
        *(int *)(lVar5 + 0x1e0) = iVar3;
      }
      uVar7 = param_3 & 0xffffffff;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar10 = uVar10 + 8;
      if (*(int *)((longlong)param_1 + 0xc) <= (int)uVar11) break;
      uVar4 = param_2 & 0xffffffff;
    }
  }
  puVar8 = (undefined8 *)0x0;
  if ((*param_5 == 0) &&
     (uVar4 = FUN_18075a100(param_5,*param_1,param_4,uVar7 & 0xffffffff,1), (int)uVar4 != 0)) {
    return uVar4;
  }
  if ((int)param_5[2] == param_4) {
LAB_18075f8b4:
    uVar4 = 0;
  }
  else {
    lVar1 = *param_1;
    ppppppuStack_d8 = &ppppppuStack_e0;
    ppppppuStack_e0 = &ppppppuStack_e0;
    uStack_d0 = 0;
    ppppppuStack_c0 = &ppppppuStack_c8;
    ppppppuStack_c8 = &ppppppuStack_c8;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_e8 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    puVar6 = puVar8;
    if (*(int *)(lVar1 + 0x107b0) < param_4) {
      lVar5 = FUN_180741e10(lVar1 + 0x10bd0,*(int *)(lVar1 + 0x6d8) * param_4 * 4 + 0x40,
                            &DAT_18098bc73,0,0,in_stack_fffffffffffffef0 & 0xffffff00,1);
      if (lVar5 == 0) {
        uVar11 = 0x26;
      }
      else {
        puVar6 = (undefined8 *)(lVar5 + 0x1fU & 0xffffffffffffffe0);
        puVar6[3] = lVar5;
        puVar6[2] = puVar6 + 4;
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = 0;
LAB_18075f771:
        *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        uVar11 = func_0x000180763630(&uStack_e8,*param_1,0x3f800000);
        if (uVar11 == 0) {
          if ((*(int *)((longlong)param_5 + 0x14) == 1) || ((int)param_3 == 1)) {
            uVar9 = 1;
          }
          else {
            uVar9 = 0;
          }
          if (*param_5 != 0) {
            puVar8 = *(undefined8 **)(*param_5 + 0x10);
          }
          uVar11 = FUN_1807636f0(&uStack_e8,puVar6[2],puVar8,uVar9,param_4,(int)param_5[2],
                                 (int)param_2,1);
          if (uVar11 == 0) {
            FUN_18075f8e0(param_5);
            if ((*param_5 == 0) || (iVar3 = FUN_18075f8e0(param_5), iVar3 == 0)) {
              *param_5 = (longlong)puVar6;
              *(int *)(param_5 + 2) = param_4;
              param_5[1] = lVar1;
              *(undefined4 *)((longlong)param_5 + 0x14) = 0;
              *(undefined4 *)(param_5 + 3) = 0xffffffff;
              *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
            }
            iVar3 = *(int *)(puVar6 + 1);
            if (0 < iVar3) {
              iVar3 = iVar3 + -1;
              *(int *)(puVar6 + 1) = iVar3;
            }
            if (iVar3 == 0) {
              if (puVar6[3] != 0) {
                    // WARNING: Subroutine does not return
                FUN_180742250(lVar1 + 0x10bd0,puVar6[3],&DAT_18098bc73,0,1);
              }
              *puVar6 = *(undefined8 *)(lVar1 + 0x107a8);
              *(undefined8 **)(lVar1 + 0x107a8) = puVar6;
            }
            goto LAB_18075f8b4;
          }
        }
      }
    }
    else if ((*(longlong *)(lVar1 + 0x107a8) != 0) || (uVar11 = FUN_180742e60(lVar1), uVar11 == 0))
    {
      puVar6 = *(undefined8 **)(lVar1 + 0x107a8);
      *(undefined8 *)(lVar1 + 0x107a8) = *puVar6;
      goto LAB_18075f771;
    }
    if (puVar6 != (undefined8 *)0x0) {
      iVar3 = *(int *)(puVar6 + 1);
      if (0 < iVar3) {
        iVar3 = iVar3 + -1;
        *(int *)(puVar6 + 1) = iVar3;
      }
      if (iVar3 == 0) {
        if (puVar6[3] != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(lVar1 + 0x10bd0,puVar6[3],&DAT_18098bc73,0,1);
        }
        *puVar6 = *(undefined8 *)(lVar1 + 0x107a8);
        *(undefined8 **)(lVar1 + 0x107a8) = puVar6;
      }
    }
    uVar4 = (ulonglong)uVar11;
  }
  return uVar4;
}



undefined8 FUN_18075f8e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  if (0 < *(int *)(puVar1 + 1)) {
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + -1;
    puVar1 = (undefined8 *)*param_1;
  }
  if (*(int *)(puVar1 + 1) == 0) {
    if (puVar1[3] != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(param_1[1] + 0x10bd0,puVar1[3],&DAT_18098bc73,0,1);
    }
    *puVar1 = *(undefined8 *)(param_1[1] + 0x107a8);
    *(longlong *)(param_1[1] + 0x107a8) = *param_1;
  }
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[2] = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18075f970(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 *apuStackX_8 [2];
  
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    if ((*(uint *)(param_1 + 100) >> 5 & 1) != 0) {
      return 10;
    }
    if ((*(uint *)(param_1 + 100) >> 6 & 1) != 0) {
      return 8;
    }
    if ((*(longlong *)(param_1 + 0xa8) != 0) &&
       (uVar4 = FUN_180743ab0(*(longlong *)(param_1 + 0xa8),param_1), (int)uVar4 != 0)) {
      return uVar4;
    }
    if ((*(uint *)(param_1 + 100) & 0x300) != 0) {
      FUN_180743160(*(undefined8 *)(param_1 + 0xa8),1);
      uVar4 = FUN_18075dcc0(param_1,0,0,1,1,4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      lVar1 = *(longlong *)(param_1 + 0xe8);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
        *(longlong *)(param_1 + 0xb0) = param_1;
        (**(code **)(lVar1 + 0x38))();
      }
      lVar1 = *(longlong *)(param_1 + 0x200);
      if (lVar1 == 0) {
        *(undefined8 *)(param_1 + 0x200) = 0;
        if (((*(longlong *)(param_1 + 0x210) == 0) || (*(longlong *)(param_1 + 0x208) == 0)) ||
           (uVar4 = FUN_18075e410(param_1), (int)uVar4 == 0)) {
          if (*(int *)(param_1 + 0x100) == 0xf) {
            plVar5 = (longlong *)(*(longlong *)(param_1 + 0xa8) + 0x12780);
            plVar6 = (longlong *)*plVar5;
            if (plVar6 != plVar5) goto LAB_18075fba0;
            plVar2 = plVar6;
            if (*(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x12788) != plVar5) {
              while (plVar6 = plVar2, plVar6 != plVar5) {
LAB_18075fba0:
                plVar2 = (longlong *)*plVar6;
                if (plVar6[2] == param_1) {
                  *(longlong **)plVar6[1] = (longlong *)*plVar6;
                  *(longlong *)(*plVar6 + 8) = plVar6[1];
                  plVar6[1] = (longlong)plVar6;
                  *plVar6 = (longlong)plVar6;
                    // WARNING: Subroutine does not return
                  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar6,&UNK_1809589a0,0xb73,
                                1);
                }
              }
            }
          }
          if ((*(uint *)(param_1 + 100) >> 2 & 1) != 0) {
            uVar4 = func_0x000180771c60(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x11418),
                                        *(undefined4 *)(param_1 + 0xfc),apuStackX_8);
            if ((int)uVar4 != 0) {
              return uVar4;
            }
            if (0 < *(int *)(apuStackX_8[0] + 0x44)) {
              *(int *)(apuStackX_8[0] + 0x44) = *(int *)(apuStackX_8[0] + 0x44) + -1;
            }
          }
          if ((*(uint *)(param_1 + 100) >> 1 & 1) != 0) {
                    // WARNING: Subroutine does not return
            FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(undefined8 *)(param_1 + 0xe8),
                          &UNK_1809589a0,0xb8f,1);
          }
          if ((*(uint *)(param_1 + 100) >> 9 & 1) == 0) {
            *(undefined4 *)(param_1 + 0x5c) = 0xdeadbead;
            if (*(longlong *)(param_1 + 0x130) == 0) {
              uVar7 = 0xb9e;
            }
            else {
              uVar7 = 0xb9a;
              param_1 = *(longlong *)(param_1 + 0x130);
            }
                    // WARNING: Subroutine does not return
            FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1,&UNK_1809589a0,uVar7,1);
          }
          uVar4 = 0;
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x1f0) == 0) {
LAB_18075fb15:
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar1,&UNK_1809589a0,0xb53,1);
        }
        uVar4 = FUN_180743cc0(*(undefined8 *)(param_1 + 0xa8),0);
        if ((int)uVar4 == 0) {
          uVar3 = (**(code **)(param_1 + 0x1f0))(param_1,0,lVar1 + 8);
          uVar4 = FUN_180743da0(*(undefined8 *)(param_1 + 0xa8));
          if (((int)uVar4 == 0) && ((uVar3 == 0 || (uVar4 = (ulonglong)uVar3, uVar3 == 0))))
          goto LAB_18075fb15;
        }
      }
      return uVar4;
    }
    uVar4 = FUN_180743700(*(undefined8 *)(param_1 + 0xa8),apuStackX_8,0x18,1);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    LOCK();
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x400;
    UNLOCK();
    *apuStackX_8[0] = 5;
    *(longlong *)(apuStackX_8[0] + 8) = param_1;
    apuStackX_8[0][0x10] = 1;
    apuStackX_8[0][0x11] = 1;
    apuStackX_8[0][0x12] = 1;
    uVar4 = func_0x000180743b40(*(undefined8 *)(param_1 + 0xa8),apuStackX_8[0],1);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18075fa80(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lStackX_8;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
    *(longlong *)(param_1 + 0xb0) = param_1;
    (**(code **)(lVar1 + 0x38))();
  }
  lVar1 = *(longlong *)(param_1 + 0x200);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x200) = 0;
    if (((*(longlong *)(param_1 + 0x210) == 0) || (*(longlong *)(param_1 + 0x208) == 0)) ||
       (uVar4 = FUN_18075e410(param_1), (int)uVar4 == 0)) {
      if (*(int *)(param_1 + 0x100) == 0xf) {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0xa8) + 0x12780);
        plVar6 = (longlong *)*plVar5;
        if (plVar6 != plVar5) goto LAB_18075fba0;
        plVar2 = plVar6;
        if (*(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x12788) != plVar5) {
          while (plVar6 = plVar2, plVar6 != plVar5) {
LAB_18075fba0:
            plVar2 = (longlong *)*plVar6;
            if (plVar6[2] == param_1) {
              *(longlong **)plVar6[1] = (longlong *)*plVar6;
              *(longlong *)(*plVar6 + 8) = plVar6[1];
              plVar6[1] = (longlong)plVar6;
              *plVar6 = (longlong)plVar6;
                    // WARNING: Subroutine does not return
              FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar6,&UNK_1809589a0,0xb73,1);
            }
          }
        }
      }
      if ((*(uint *)(param_1 + 100) >> 2 & 1) != 0) {
        uVar4 = func_0x000180771c60(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x11418),
                                    *(undefined4 *)(param_1 + 0xfc),&lStackX_8);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if (0 < *(int *)(lStackX_8 + 0x44)) {
          *(int *)(lStackX_8 + 0x44) = *(int *)(lStackX_8 + 0x44) + -1;
        }
      }
      if ((*(uint *)(param_1 + 100) >> 1 & 1) != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(undefined8 *)(param_1 + 0xe8),
                      &UNK_1809589a0,0xb8f,1);
      }
      if ((*(uint *)(param_1 + 100) >> 9 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0xdeadbead;
        if (*(longlong *)(param_1 + 0x130) == 0) {
          uVar7 = 0xb9e;
        }
        else {
          uVar7 = 0xb9a;
          param_1 = *(longlong *)(param_1 + 0x130);
        }
                    // WARNING: Subroutine does not return
        FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1,&UNK_1809589a0,uVar7,1);
      }
      uVar4 = 0;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x1f0) == 0) {
LAB_18075fb15:
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar1,&UNK_1809589a0,0xb53,1);
    }
    uVar4 = FUN_180743cc0(*(undefined8 *)(param_1 + 0xa8),0);
    if ((int)uVar4 == 0) {
      uVar3 = (**(code **)(param_1 + 0x1f0))(param_1,0,lVar1 + 8);
      uVar4 = FUN_180743da0(*(undefined8 *)(param_1 + 0xa8));
      if (((int)uVar4 == 0) && ((uVar3 == 0 || (uVar4 = (ulonglong)uVar3, uVar3 == 0))))
      goto LAB_18075fb15;
    }
  }
  return uVar4;
}



// WARNING: Removing unreachable block (ram,0x00018075fecb)
// WARNING: Removing unreachable block (ram,0x00018075feda)
// WARNING: Removing unreachable block (ram,0x00018075ffa3)
// WARNING: Removing unreachable block (ram,0x00018075ffa8)
// WARNING: Removing unreachable block (ram,0x00018075fdd4)
// WARNING: Removing unreachable block (ram,0x0001807601e3)
// WARNING: Removing unreachable block (ram,0x0001807601e8)
// WARNING: Removing unreachable block (ram,0x00018075fe4b)
// WARNING: Removing unreachable block (ram,0x00018075fe07)
// WARNING: Removing unreachable block (ram,0x00018076026e)
// WARNING: Removing unreachable block (ram,0x00018076027d)
// WARNING: Removing unreachable block (ram,0x00018076028d)
// WARNING: Removing unreachable block (ram,0x000180760034)
// WARNING: Removing unreachable block (ram,0x000180760043)
// WARNING: Removing unreachable block (ram,0x00018075ff1a)
// WARNING: Removing unreachable block (ram,0x00018075ff29)
// WARNING: Removing unreachable block (ram,0x0001807600bd)
// WARNING: Removing unreachable block (ram,0x0001807600c2)
// WARNING: Removing unreachable block (ram,0x0001807601f2)
// WARNING: Removing unreachable block (ram,0x0001807601f7)
// WARNING: Removing unreachable block (ram,0x0001807602f4)
// WARNING: Removing unreachable block (ram,0x0001807602f9)
// WARNING: Removing unreachable block (ram,0x00018075ffb2)
// WARNING: Removing unreachable block (ram,0x00018075ffb7)
// WARNING: Removing unreachable block (ram,0x0001807600cc)
// WARNING: Removing unreachable block (ram,0x0001807600d1)
// WARNING: Removing unreachable block (ram,0x000180760303)
// WARNING: Removing unreachable block (ram,0x000180760308)

ulonglong FUN_18075fce0(undefined1 *param_1,longlong param_2,undefined1 param_3)

{
  short sVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 *puStackX_8;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0x1f;
  }
  if ((*(uint *)(param_1 + 100) >> 8 & 1) == 0) {
    uVar4 = FUN_180743700(*(undefined8 *)(param_1 + 0xa8),&puStackX_8,0x18,param_3);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *puStackX_8 = 6;
    *(undefined1 **)(puStackX_8 + 8) = param_1;
    *(longlong *)(puStackX_8 + 0x10) = param_2;
    uVar4 = func_0x000180743b40(*(undefined8 *)(param_1 + 0xa8),puStackX_8,param_3);
    if ((int)uVar4 == 0) {
      return 0;
    }
    return uVar4;
  }
  sVar1 = *(short *)(param_1 + 0x1ae);
  iVar10 = (int)sVar1;
  iVar11 = (int)*(short *)(param_2 + 0x1ac);
  if ((1 < iVar11) && (1 < iVar10)) {
    return 0x1c;
  }
  puStackX_8 = param_1;
  if (*(short *)(param_2 + 0x1ac) != 0) {
    if (1 < iVar11) {
LAB_18075feb6:
      uVar4 = 0;
      if (*(short *)(param_1 + 0x1ae) < 1) {
        uVar5 = 9;
      }
      else {
        plVar13 = *(longlong **)(param_1 + 400);
        if (plVar13 == (longlong *)(param_1 + 400)) {
          uVar5 = 0x1c;
        }
        else {
          lVar14 = plVar13[2];
          uVar8 = *(uint *)(lVar14 + 0x7c) & 5;
          uVar5 = uVar4;
          while ((uVar12 = uVar5, iVar10 = (int)uVar12, iVar10 < 0 || (uVar8 != 0))) {
            plVar13 = (longlong *)*plVar13;
            lVar14 = plVar13[2];
            uVar8 = *(uint *)(lVar14 + 0x7c) & 5;
            uVar5 = (ulonglong)(iVar10 + 1);
            if (uVar8 != 0) {
              uVar5 = uVar12;
            }
          }
          uVar5 = uVar4;
          if (lVar14 != 0) {
            uVar4 = *(ulonglong *)(lVar14 + 0x60);
            uVar5 = 0;
          }
        }
      }
      if (((int)uVar5 != 9) && ((int)uVar5 != 0)) {
        return uVar5;
      }
      if ((uVar4 != 0) && (uVar5 = FUN_18075dcc0(uVar4,param_1,0,1,0,4), (int)uVar5 != 0)) {
        return uVar5;
      }
      iVar10 = 0;
      if (iVar11 < 1) {
        return 0;
      }
      while( true ) {
        uVar6 = 0;
        uVar5 = uVar6;
        uVar12 = uVar6;
        if (*(short *)(param_2 + 0x1ac) < 1) {
          uVar6 = 9;
        }
        else {
          plVar13 = *(longlong **)(param_2 + 0x78);
          if (plVar13 == (longlong *)(param_2 + 0x78)) {
            uVar6 = 0x1c;
          }
          else {
            uVar5 = plVar13[2];
            uVar8 = *(uint *)(uVar5 + 0x7c) & 5;
            uVar7 = uVar6;
            while ((uVar9 = (uint)uVar7, (int)uVar9 < 0 || (uVar8 != 0))) {
              plVar13 = (longlong *)*plVar13;
              uVar5 = plVar13[2];
              uVar8 = *(uint *)(uVar5 + 0x7c) & 5;
              uVar3 = uVar9 + 1;
              if (uVar8 != 0) {
                uVar3 = uVar9;
              }
              uVar7 = (ulonglong)uVar3;
            }
            if (uVar5 != 0) {
              uVar12 = *(ulonglong *)(uVar5 + 0x58);
            }
          }
        }
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        uVar7 = FUN_18075dcc0(param_2,uVar12,uVar5,0,0,4);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        if (uVar4 == 0) {
          uVar5 = FUN_18078a340(*(longlong *)(puStackX_8 + 0xa8) + 0x720,uVar5,
                                (*(uint *)(puStackX_8 + 100) >> 8 & 1) != 0);
        }
        else {
          uVar5 = FUN_180759d80(uVar4,uVar12,0,0,(char)uVar6,uVar5,0);
        }
        if ((int)uVar5 != 0) break;
        iVar10 = iVar10 + 1;
        if (iVar11 <= iVar10) {
          return 0;
        }
      }
      return uVar5;
    }
    if (iVar11 == 1) {
      if (sVar1 == 0) goto LAB_18075feb6;
      goto LAB_18075ff05;
    }
  }
  if (sVar1 == 0) {
    return 0;
  }
LAB_18075ff05:
  uVar4 = 0;
  if (*(short *)(param_2 + 0x1ac) < 1) {
    uVar5 = 9;
  }
  else {
    plVar13 = *(longlong **)(param_2 + 0x78);
    if (plVar13 == (longlong *)(param_2 + 0x78)) {
      uVar5 = 0x1c;
    }
    else {
      lVar14 = plVar13[2];
      uVar8 = *(uint *)(lVar14 + 0x7c) & 5;
      uVar5 = uVar4;
      while ((uVar12 = uVar5, iVar11 = (int)uVar12, iVar11 < 0 || (uVar8 != 0))) {
        plVar13 = (longlong *)*plVar13;
        lVar14 = plVar13[2];
        uVar8 = *(uint *)(lVar14 + 0x7c) & 5;
        uVar5 = (ulonglong)(iVar11 + 1);
        if (uVar8 != 0) {
          uVar5 = uVar12;
        }
      }
      uVar5 = uVar4;
      if (lVar14 != 0) {
        uVar4 = *(ulonglong *)(lVar14 + 0x58);
        uVar5 = 0;
      }
    }
  }
  if (((int)uVar5 != 9) && ((int)uVar5 != 0)) {
    return uVar5;
  }
  if ((uVar4 != 0) && (uVar5 = FUN_18075dcc0(param_2,uVar4,0,1,0,4), (int)uVar5 != 0)) {
    return uVar5;
  }
  iVar11 = 0;
  if (0 < iVar10) {
    do {
      puVar2 = puStackX_8;
      uVar6 = 0;
      uVar5 = uVar6;
      uVar12 = uVar6;
      if (*(short *)(puStackX_8 + 0x1ae) < 1) {
        uVar6 = 9;
      }
      else {
        plVar13 = *(longlong **)(puStackX_8 + 400);
        if (plVar13 == (longlong *)(puStackX_8 + 400)) {
          uVar6 = 0x1c;
        }
        else {
          uVar5 = plVar13[2];
          uVar8 = *(uint *)(uVar5 + 0x7c) & 5;
          uVar7 = uVar6;
          while ((uVar9 = (uint)uVar7, (int)uVar9 < 0 || (uVar8 != 0))) {
            plVar13 = (longlong *)*plVar13;
            uVar5 = plVar13[2];
            uVar8 = *(uint *)(uVar5 + 0x7c) & 5;
            uVar3 = uVar9 + 1;
            if (uVar8 != 0) {
              uVar3 = uVar9;
            }
            uVar7 = (ulonglong)uVar3;
          }
          if (uVar5 != 0) {
            uVar12 = *(ulonglong *)(uVar5 + 0x60);
          }
        }
      }
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      uVar6 = FUN_18075dcc0(uVar12,puStackX_8,uVar5,0,0,4);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      if (uVar4 == 0) {
        uVar5 = FUN_18078a340(*(longlong *)(puVar2 + 0xa8) + 0x720,uVar5,
                              (*(uint *)(puVar2 + 100) >> 8 & 1) != 0);
      }
      else {
        uVar5 = FUN_180759d80(uVar12,uVar4,0,0,(char)uVar6,uVar5,0);
      }
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar10);
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00018075ff1a)
// WARNING: Removing unreachable block (ram,0x00018075ff29)
// WARNING: Removing unreachable block (ram,0x0001807601e3)
// WARNING: Removing unreachable block (ram,0x0001807601e8)
// WARNING: Removing unreachable block (ram,0x00018075fecb)
// WARNING: Removing unreachable block (ram,0x00018075feda)
// WARNING: Removing unreachable block (ram,0x00018075fe4b)
// WARNING: Removing unreachable block (ram,0x00018076026e)
// WARNING: Removing unreachable block (ram,0x00018076027d)
// WARNING: Removing unreachable block (ram,0x00018076028d)
// WARNING: Removing unreachable block (ram,0x000180760034)
// WARNING: Removing unreachable block (ram,0x000180760043)
// WARNING: Removing unreachable block (ram,0x00018075ffa3)
// WARNING: Removing unreachable block (ram,0x00018075ffa8)
// WARNING: Removing unreachable block (ram,0x00018075ffb2)
// WARNING: Removing unreachable block (ram,0x00018075ffb5)
// WARNING: Removing unreachable block (ram,0x00018075ffb7)
// WARNING: Removing unreachable block (ram,0x0001807600bd)
// WARNING: Removing unreachable block (ram,0x0001807600c2)
// WARNING: Removing unreachable block (ram,0x0001807601f2)
// WARNING: Removing unreachable block (ram,0x0001807601f7)
// WARNING: Removing unreachable block (ram,0x0001807602f4)
// WARNING: Removing unreachable block (ram,0x0001807602f9)
// WARNING: Removing unreachable block (ram,0x0001807600cc)
// WARNING: Removing unreachable block (ram,0x0001807600d1)
// WARNING: Removing unreachable block (ram,0x000180760303)
// WARNING: Removing unreachable block (ram,0x000180760308)

ulonglong FUN_18075fdb0(longlong param_1,longlong param_2,char param_3)

{
  short sVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  if (param_3 != '\0') {
    FUN_180743160(*(undefined8 *)(param_1 + 0xa8),1);
    func_0x000180743c20(*(undefined8 *)(param_1 + 0xa8),1);
  }
  sVar1 = *(short *)(param_1 + 0x1ae);
  iVar8 = (int)sVar1;
  if (param_3 != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180743d60(*(undefined8 *)(param_1 + 0xa8),1);
  }
  iVar9 = (int)*(short *)(param_2 + 0x1ac);
  if ((1 < iVar9) && (1 < iVar8)) {
    return 0x1c;
  }
  if (*(short *)(param_2 + 0x1ac) != 0) {
    if (1 < iVar9) {
LAB_18075feb6:
      uVar13 = 0;
      if (*(short *)(param_1 + 0x1ae) < 1) {
        uVar3 = 9;
      }
      else {
        plVar11 = *(longlong **)(param_1 + 400);
        if (plVar11 == (longlong *)(param_1 + 400)) {
          uVar3 = 0x1c;
        }
        else {
          lVar12 = plVar11[2];
          uVar6 = *(uint *)(lVar12 + 0x7c) & 5;
          uVar3 = uVar13;
          while ((uVar10 = uVar3, iVar8 = (int)uVar10, iVar8 < 0 || (uVar6 != 0))) {
            plVar11 = (longlong *)*plVar11;
            lVar12 = plVar11[2];
            uVar6 = *(uint *)(lVar12 + 0x7c) & 5;
            uVar3 = (ulonglong)(iVar8 + 1);
            if (uVar6 != 0) {
              uVar3 = uVar10;
            }
          }
          uVar3 = uVar13;
          if (lVar12 != 0) {
            uVar13 = *(ulonglong *)(lVar12 + 0x60);
            uVar3 = 0;
          }
        }
      }
      if (((int)uVar3 != 9) && ((int)uVar3 != 0)) {
        return uVar3;
      }
      if ((uVar13 != 0) && (uVar3 = FUN_18075dcc0(uVar13,param_1,0,1,0,4), (int)uVar3 != 0)) {
        return uVar3;
      }
      iVar8 = 0;
      if (iVar9 < 1) {
        return 0;
      }
      while( true ) {
        uVar4 = 0;
        uVar3 = uVar4;
        uVar10 = uVar4;
        if (*(short *)(param_2 + 0x1ac) < 1) {
          uVar4 = 9;
        }
        else {
          plVar11 = *(longlong **)(param_2 + 0x78);
          if (plVar11 == (longlong *)(param_2 + 0x78)) {
            uVar4 = 0x1c;
          }
          else {
            uVar3 = plVar11[2];
            uVar6 = *(uint *)(uVar3 + 0x7c) & 5;
            uVar5 = uVar4;
            while ((uVar7 = (uint)uVar5, (int)uVar7 < 0 || (uVar6 != 0))) {
              plVar11 = (longlong *)*plVar11;
              uVar3 = plVar11[2];
              uVar6 = *(uint *)(uVar3 + 0x7c) & 5;
              uVar2 = uVar7 + 1;
              if (uVar6 != 0) {
                uVar2 = uVar7;
              }
              uVar5 = (ulonglong)uVar2;
            }
            if (uVar3 != 0) {
              uVar10 = *(ulonglong *)(uVar3 + 0x58);
            }
          }
        }
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar5 = FUN_18075dcc0(param_2,uVar10,uVar3,0,0,4);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (uVar13 == 0) {
          uVar3 = FUN_18078a340(*(longlong *)(param_1 + 0xa8) + 0x720,uVar3,
                                (*(uint *)(param_1 + 100) >> 8 & 1) != 0);
        }
        else {
          uVar3 = FUN_180759d80(uVar13,uVar10,0,0,(char)uVar4,uVar3,0);
        }
        if ((int)uVar3 != 0) break;
        iVar8 = iVar8 + 1;
        if (iVar9 <= iVar8) {
          return 0;
        }
      }
      return uVar3;
    }
    if (iVar9 == 1) {
      if (sVar1 == 0) goto LAB_18075feb6;
      goto LAB_18075ff05;
    }
  }
  if (sVar1 == 0) {
    return 0;
  }
LAB_18075ff05:
  uVar13 = 0;
  if (*(short *)(param_2 + 0x1ac) < 1) {
    uVar3 = 9;
  }
  else {
    plVar11 = *(longlong **)(param_2 + 0x78);
    if (plVar11 == (longlong *)(param_2 + 0x78)) {
      uVar3 = 0x1c;
    }
    else {
      lVar12 = plVar11[2];
      uVar6 = *(uint *)(lVar12 + 0x7c) & 5;
      uVar3 = uVar13;
      while ((uVar10 = uVar3, iVar9 = (int)uVar10, iVar9 < 0 || (uVar6 != 0))) {
        plVar11 = (longlong *)*plVar11;
        lVar12 = plVar11[2];
        uVar6 = *(uint *)(lVar12 + 0x7c) & 5;
        uVar3 = (ulonglong)(iVar9 + 1);
        if (uVar6 != 0) {
          uVar3 = uVar10;
        }
      }
      uVar3 = uVar13;
      if (lVar12 != 0) {
        uVar13 = *(ulonglong *)(lVar12 + 0x58);
        uVar3 = 0;
      }
    }
  }
  if (((int)uVar3 != 9) && ((int)uVar3 != 0)) {
    return uVar3;
  }
  if ((uVar13 != 0) && (uVar3 = FUN_18075dcc0(param_2,uVar13,0,1,0,4), (int)uVar3 != 0)) {
    return uVar3;
  }
  iVar9 = 0;
  if (0 < iVar8) {
    do {
      uVar4 = 0;
      uVar3 = uVar4;
      uVar10 = uVar4;
      if (*(short *)(param_1 + 0x1ae) < 1) {
        uVar4 = 9;
      }
      else {
        plVar11 = *(longlong **)(param_1 + 400);
        if (plVar11 == (longlong *)(param_1 + 400)) {
          uVar4 = 0x1c;
        }
        else {
          uVar3 = plVar11[2];
          uVar6 = *(uint *)(uVar3 + 0x7c) & 5;
          uVar5 = uVar4;
          while ((uVar7 = (uint)uVar5, (int)uVar7 < 0 || (uVar6 != 0))) {
            plVar11 = (longlong *)*plVar11;
            uVar3 = plVar11[2];
            uVar6 = *(uint *)(uVar3 + 0x7c) & 5;
            uVar2 = uVar7 + 1;
            if (uVar6 != 0) {
              uVar2 = uVar7;
            }
            uVar5 = (ulonglong)uVar2;
          }
          if (uVar3 != 0) {
            uVar10 = *(ulonglong *)(uVar3 + 0x60);
          }
        }
      }
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_18075dcc0(uVar10,param_1,uVar3,0,0,4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (uVar13 == 0) {
        uVar3 = FUN_18078a340(*(longlong *)(param_1 + 0xa8) + 0x720,uVar3,
                              (*(uint *)(param_1 + 100) >> 8 & 1) != 0);
      }
      else {
        uVar3 = FUN_180759d80(uVar10,uVar13,0,0,(char)uVar4,uVar3,0);
      }
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar8);
  }
  return 0;
}



// WARNING: Type propagation algorithm not settling

ulonglong FUN_18075fe77(void)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBX;
  ulonglong uVar7;
  char unaff_BPL;
  int unaff_EDI;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong uVar13;
  bool bVar14;
  longlong in_stack_000000a0;
  int in_stack_000000a8;
  char in_stack_000000b0;
  int in_stack_000000b8;
  
  if (unaff_EDI == 0) {
joined_r0x00018075ff03:
    if (unaff_EBX == 0) {
      return 0;
    }
  }
  else {
    if (1 < unaff_EDI) {
LAB_18075feb6:
      lVar1 = *(longlong *)(unaff_R14 + 0xa8);
      uVar13 = 0;
      bVar14 = false;
      if ((unaff_BPL != '\0') && (FUN_180743160(lVar1,1), lVar1 != 0)) {
        func_0x000180743c20(lVar1,1);
        bVar14 = true;
      }
      if (*(short *)(unaff_R14 + 0x1ae) < 1) {
        uVar3 = 9;
      }
      else {
        plVar10 = *(longlong **)(unaff_R14 + 400);
        if (plVar10 == (longlong *)(unaff_R14 + 400)) {
          uVar3 = 0x1c;
        }
        else {
          lVar11 = plVar10[2];
          uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
          uVar3 = uVar13;
          while ((uVar7 = uVar3, iVar12 = (int)uVar7, iVar12 < 0 || (uVar5 != 0))) {
            plVar10 = (longlong *)*plVar10;
            lVar11 = plVar10[2];
            uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
            uVar3 = (ulonglong)(iVar12 + 1);
            if (uVar5 != 0) {
              uVar3 = uVar7;
            }
          }
          uVar3 = uVar13;
          if (lVar11 != 0) {
            uVar13 = *(ulonglong *)(lVar11 + 0x60);
            uVar3 = 0;
          }
        }
      }
      if ((unaff_BPL == '\0') || (lVar1 == 0)) {
        if (!bVar14) goto LAB_180760204;
        bVar14 = lVar1 == 0;
      }
      else {
        bVar14 = !bVar14;
      }
      if (!bVar14) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar1,1);
      }
LAB_180760204:
      if (((int)uVar3 != 9) && ((int)uVar3 != 0)) {
        return uVar3;
      }
      if ((uVar13 != 0) && (uVar3 = FUN_18075dcc0(uVar13), (int)uVar3 != 0)) {
        return uVar3;
      }
      iVar12 = 0;
      if (in_stack_000000b8 < 1) {
        return 0;
      }
      do {
        uVar3 = 0;
        bVar14 = false;
        lVar1 = *(longlong *)(unaff_R13 + 0xa8);
        if (in_stack_000000b0 != '\0') {
          FUN_180743160(lVar1,1);
          bVar14 = lVar1 != 0;
          if (bVar14) {
            func_0x000180743c20(lVar1,1);
          }
        }
        uVar7 = uVar3;
        uVar8 = uVar3;
        if (*(short *)(unaff_R13 + 0x1ac) < 1) {
          uVar3 = 9;
        }
        else {
          plVar10 = *(longlong **)(unaff_R13 + 0x78);
          if (plVar10 == (longlong *)(unaff_R13 + 0x78)) {
            uVar3 = 0x1c;
          }
          else {
            uVar7 = plVar10[2];
            uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
            uVar4 = uVar3;
            while ((uVar6 = (uint)uVar4, (int)uVar6 < 0 || (uVar5 != 0))) {
              plVar10 = (longlong *)*plVar10;
              uVar7 = plVar10[2];
              uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
              uVar2 = uVar6 + 1;
              if (uVar5 != 0) {
                uVar2 = uVar6;
              }
              uVar4 = (ulonglong)uVar2;
            }
            if (uVar7 != 0) {
              uVar8 = *(ulonglong *)(uVar7 + 0x58);
            }
          }
        }
        if ((in_stack_000000b0 == '\0') || (lVar1 == 0)) {
          if (bVar14) {
            bVar14 = lVar1 == 0;
            goto LAB_180760306;
          }
        }
        else {
          bVar14 = !bVar14;
LAB_180760306:
          if (!bVar14) {
                    // WARNING: Subroutine does not return
            FUN_180743d60(lVar1,1);
          }
        }
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar4 = FUN_18075dcc0();
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if (uVar13 == 0) {
          if ((in_stack_000000b0 == '\0') && ((*(uint *)(in_stack_000000a0 + 100) >> 8 & 1) == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = 1;
          }
          uVar3 = FUN_18078a340(*(longlong *)(in_stack_000000a0 + 0xa8) + 0x720,uVar7,uVar9);
        }
        else {
          uVar3 = FUN_180759d80(uVar13,uVar8,0,0,(char)uVar3);
        }
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        iVar12 = iVar12 + 1;
        if (in_stack_000000b8 <= iVar12) {
          return 0;
        }
      } while( true );
    }
    if (unaff_EDI != 1) goto joined_r0x00018075ff03;
    if (unaff_EBX == 0) goto LAB_18075feb6;
  }
  lVar1 = *(longlong *)(unaff_R13 + 0xa8);
  uVar13 = 0;
  bVar14 = false;
  if ((unaff_BPL != '\0') && (FUN_180743160(lVar1,1), lVar1 != 0)) {
    func_0x000180743c20(lVar1,1);
    bVar14 = true;
  }
  if (*(short *)(unaff_R13 + 0x1ac) < 1) {
    uVar3 = 9;
  }
  else {
    plVar10 = *(longlong **)(unaff_R13 + 0x78);
    if (plVar10 == (longlong *)(unaff_R13 + 0x78)) {
      uVar3 = 0x1c;
    }
    else {
      lVar11 = plVar10[2];
      uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
      uVar3 = uVar13;
      while ((uVar7 = uVar3, iVar12 = (int)uVar7, iVar12 < 0 || (uVar5 != 0))) {
        plVar10 = (longlong *)*plVar10;
        lVar11 = plVar10[2];
        uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
        uVar3 = (ulonglong)(iVar12 + 1);
        if (uVar5 != 0) {
          uVar3 = uVar7;
        }
      }
      uVar3 = uVar13;
      if (lVar11 != 0) {
        uVar13 = *(ulonglong *)(lVar11 + 0x58);
        uVar3 = 0;
      }
    }
  }
  if ((unaff_BPL == '\0') || (lVar1 == 0)) {
    if (!bVar14) goto LAB_18075ffc4;
    bVar14 = lVar1 == 0;
  }
  else {
    bVar14 = !bVar14;
  }
  if (!bVar14) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar1,1);
  }
LAB_18075ffc4:
  if (((int)uVar3 != 9) && ((int)uVar3 != 0)) {
    return uVar3;
  }
  if ((uVar13 != 0) && (uVar3 = FUN_18075dcc0(), (int)uVar3 != 0)) {
    return uVar3;
  }
  iVar12 = 0;
  if (0 < in_stack_000000a8) {
    do {
      uVar3 = 0;
      lVar1 = *(longlong *)(in_stack_000000a0 + 0xa8);
      bVar14 = false;
      if ((in_stack_000000b0 != '\0') && (FUN_180743160(lVar1,1), lVar1 != 0)) {
        func_0x000180743c20(lVar1,1);
        bVar14 = true;
      }
      uVar7 = uVar3;
      uVar8 = uVar3;
      if (*(short *)(in_stack_000000a0 + 0x1ae) < 1) {
        uVar3 = 9;
      }
      else {
        plVar10 = *(longlong **)(in_stack_000000a0 + 400);
        if (plVar10 == (longlong *)(in_stack_000000a0 + 400)) {
          uVar3 = 0x1c;
        }
        else {
          uVar7 = plVar10[2];
          uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
          uVar4 = uVar3;
          while ((uVar6 = (uint)uVar4, (int)uVar6 < 0 || (uVar5 != 0))) {
            plVar10 = (longlong *)*plVar10;
            uVar7 = plVar10[2];
            uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
            uVar2 = uVar6 + 1;
            if (uVar5 != 0) {
              uVar2 = uVar6;
            }
            uVar4 = (ulonglong)uVar2;
          }
          if (uVar7 != 0) {
            uVar8 = *(ulonglong *)(uVar7 + 0x60);
          }
        }
      }
      if ((in_stack_000000b0 == '\0') || (lVar1 == 0)) {
        if (bVar14) {
          bVar14 = lVar1 == 0;
          goto LAB_1807600cf;
        }
      }
      else {
        bVar14 = !bVar14;
LAB_1807600cf:
        if (!bVar14) {
                    // WARNING: Subroutine does not return
          FUN_180743d60(lVar1,1);
        }
      }
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_18075dcc0(uVar8,in_stack_000000a0,uVar7,0,in_stack_000000b0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (uVar13 == 0) {
        if ((in_stack_000000b0 == '\0') && ((*(uint *)(in_stack_000000a0 + 100) >> 8 & 1) == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
        uVar3 = FUN_18078a340(*(longlong *)(in_stack_000000a0 + 0xa8) + 0x720,uVar7,uVar9);
      }
      else {
        uVar3 = FUN_180759d80(uVar8,uVar13,0,0,(char)uVar3);
      }
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < in_stack_000000a8);
  }
  return 0;
}



ulonglong FUN_18075feab(void)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBX;
  ulonglong uVar7;
  char unaff_BPL;
  int unaff_EDI;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong unaff_R13;
  longlong unaff_R14;
  ulonglong uVar13;
  bool bVar14;
  longlong in_stack_000000a0;
  int in_stack_000000a8;
  char in_stack_000000b0;
  int in_stack_000000b8;
  
  if (1 < unaff_EDI) {
LAB_18075feb6:
    lVar1 = *(longlong *)(unaff_R14 + 0xa8);
    uVar13 = 0;
    bVar14 = false;
    if ((unaff_BPL != '\0') && (FUN_180743160(lVar1,1), lVar1 != 0)) {
      func_0x000180743c20(lVar1,1);
      bVar14 = true;
    }
    if (*(short *)(unaff_R14 + 0x1ae) < 1) {
      uVar3 = 9;
    }
    else {
      plVar9 = *(longlong **)(unaff_R14 + 400);
      if (plVar9 == (longlong *)(unaff_R14 + 400)) {
        uVar3 = 0x1c;
      }
      else {
        lVar11 = plVar9[2];
        uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
        uVar3 = uVar13;
        while ((uVar7 = uVar3, iVar12 = (int)uVar7, iVar12 < 0 || (uVar5 != 0))) {
          plVar9 = (longlong *)*plVar9;
          lVar11 = plVar9[2];
          uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
          uVar3 = (ulonglong)(iVar12 + 1);
          if (uVar5 != 0) {
            uVar3 = uVar7;
          }
        }
        uVar3 = uVar13;
        if (lVar11 != 0) {
          uVar13 = *(ulonglong *)(lVar11 + 0x60);
          uVar3 = 0;
        }
      }
    }
    if ((unaff_BPL == '\0') || (lVar1 == 0)) {
      if (!bVar14) goto LAB_180760204;
      bVar14 = lVar1 == 0;
    }
    else {
      bVar14 = !bVar14;
    }
    if (!bVar14) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar1,1);
    }
LAB_180760204:
    if (((int)uVar3 != 9) && ((int)uVar3 != 0)) {
      return uVar3;
    }
    if ((uVar13 != 0) && (uVar3 = FUN_18075dcc0(uVar13), (int)uVar3 != 0)) {
      return uVar3;
    }
    iVar12 = 0;
    if (in_stack_000000b8 < 1) {
      return 0;
    }
    do {
      uVar3 = 0;
      bVar14 = false;
      lVar1 = *(longlong *)(unaff_R13 + 0xa8);
      if (in_stack_000000b0 != '\0') {
        FUN_180743160(lVar1,1);
        bVar14 = lVar1 != 0;
        if (bVar14) {
          func_0x000180743c20(lVar1,1);
        }
      }
      uVar7 = uVar3;
      uVar8 = uVar3;
      if (*(short *)(unaff_R13 + 0x1ac) < 1) {
        uVar3 = 9;
      }
      else {
        plVar9 = *(longlong **)(unaff_R13 + 0x78);
        if (plVar9 == (longlong *)(unaff_R13 + 0x78)) {
          uVar3 = 0x1c;
        }
        else {
          uVar7 = plVar9[2];
          uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
          uVar4 = uVar3;
          while ((uVar6 = (uint)uVar4, (int)uVar6 < 0 || (uVar5 != 0))) {
            plVar9 = (longlong *)*plVar9;
            uVar7 = plVar9[2];
            uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
            uVar2 = uVar6 + 1;
            if (uVar5 != 0) {
              uVar2 = uVar6;
            }
            uVar4 = (ulonglong)uVar2;
          }
          if (uVar7 != 0) {
            uVar8 = *(ulonglong *)(uVar7 + 0x58);
          }
        }
      }
      if ((in_stack_000000b0 == '\0') || (lVar1 == 0)) {
        if (bVar14) {
          bVar14 = lVar1 == 0;
          goto LAB_180760306;
        }
      }
      else {
        bVar14 = !bVar14;
LAB_180760306:
        if (!bVar14) {
                    // WARNING: Subroutine does not return
          FUN_180743d60(lVar1,1);
        }
      }
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar4 = FUN_18075dcc0();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (uVar13 == 0) {
        if ((in_stack_000000b0 == '\0') && ((*(uint *)(in_stack_000000a0 + 100) >> 8 & 1) == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = 1;
        }
        uVar3 = FUN_18078a340(*(longlong *)(in_stack_000000a0 + 0xa8) + 0x720,uVar7,uVar10);
      }
      else {
        uVar3 = FUN_180759d80(uVar13,uVar8,0,0,(char)uVar3);
      }
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar12 = iVar12 + 1;
      if (in_stack_000000b8 <= iVar12) {
        return 0;
      }
    } while( true );
  }
  if (unaff_EDI == 1) {
    if (unaff_EBX == 0) goto LAB_18075feb6;
  }
  else if (unaff_EBX == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(unaff_R13 + 0xa8);
  uVar13 = 0;
  bVar14 = false;
  if ((unaff_BPL != '\0') && (FUN_180743160(lVar1,1), lVar1 != 0)) {
    func_0x000180743c20(lVar1,1);
    bVar14 = true;
  }
  if (*(short *)(unaff_R13 + 0x1ac) < 1) {
    uVar3 = 9;
  }
  else {
    plVar9 = *(longlong **)(unaff_R13 + 0x78);
    if (plVar9 == (longlong *)(unaff_R13 + 0x78)) {
      uVar3 = 0x1c;
    }
    else {
      lVar11 = plVar9[2];
      uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
      uVar3 = uVar13;
      while ((uVar7 = uVar3, iVar12 = (int)uVar7, iVar12 < 0 || (uVar5 != 0))) {
        plVar9 = (longlong *)*plVar9;
        lVar11 = plVar9[2];
        uVar5 = *(uint *)(lVar11 + 0x7c) & 5;
        uVar3 = (ulonglong)(iVar12 + 1);
        if (uVar5 != 0) {
          uVar3 = uVar7;
        }
      }
      uVar3 = uVar13;
      if (lVar11 != 0) {
        uVar13 = *(ulonglong *)(lVar11 + 0x58);
        uVar3 = 0;
      }
    }
  }
  if ((unaff_BPL == '\0') || (lVar1 == 0)) {
    if (!bVar14) goto LAB_18075ffc4;
    bVar14 = lVar1 == 0;
  }
  else {
    bVar14 = !bVar14;
  }
  if (!bVar14) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar1,1);
  }
LAB_18075ffc4:
  if (((int)uVar3 != 9) && ((int)uVar3 != 0)) {
    return uVar3;
  }
  if ((uVar13 != 0) && (uVar3 = FUN_18075dcc0(), (int)uVar3 != 0)) {
    return uVar3;
  }
  iVar12 = 0;
  if (0 < in_stack_000000a8) {
    do {
      uVar3 = 0;
      lVar1 = *(longlong *)(in_stack_000000a0 + 0xa8);
      bVar14 = false;
      if ((in_stack_000000b0 != '\0') && (FUN_180743160(lVar1,1), lVar1 != 0)) {
        func_0x000180743c20(lVar1,1);
        bVar14 = true;
      }
      uVar7 = uVar3;
      uVar8 = uVar3;
      if (*(short *)(in_stack_000000a0 + 0x1ae) < 1) {
        uVar3 = 9;
      }
      else {
        plVar9 = *(longlong **)(in_stack_000000a0 + 400);
        if (plVar9 == (longlong *)(in_stack_000000a0 + 400)) {
          uVar3 = 0x1c;
        }
        else {
          uVar7 = plVar9[2];
          uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
          uVar4 = uVar3;
          while ((uVar6 = (uint)uVar4, (int)uVar6 < 0 || (uVar5 != 0))) {
            plVar9 = (longlong *)*plVar9;
            uVar7 = plVar9[2];
            uVar5 = *(uint *)(uVar7 + 0x7c) & 5;
            uVar2 = uVar6 + 1;
            if (uVar5 != 0) {
              uVar2 = uVar6;
            }
            uVar4 = (ulonglong)uVar2;
          }
          if (uVar7 != 0) {
            uVar8 = *(ulonglong *)(uVar7 + 0x60);
          }
        }
      }
      if ((in_stack_000000b0 == '\0') || (lVar1 == 0)) {
        if (bVar14) {
          bVar14 = lVar1 == 0;
          goto LAB_1807600cf;
        }
      }
      else {
        bVar14 = !bVar14;
LAB_1807600cf:
        if (!bVar14) {
                    // WARNING: Subroutine does not return
          FUN_180743d60(lVar1,1);
        }
      }
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_18075dcc0(uVar8,in_stack_000000a0,uVar7,0,in_stack_000000b0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (uVar13 == 0) {
        if ((in_stack_000000b0 == '\0') && ((*(uint *)(in_stack_000000a0 + 100) >> 8 & 1) == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = 1;
        }
        uVar3 = FUN_18078a340(*(longlong *)(in_stack_000000a0 + 0xa8) + 0x720,uVar7,uVar10);
      }
      else {
        uVar3 = FUN_180759d80(uVar8,uVar13,0,0,(char)uVar3);
      }
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < in_stack_000000a8);
  }
  return 0;
}



ulonglong FUN_1807603e0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puStackX_8;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if ((*(uint *)(param_1 + 100) >> 8 & 1) == 0) {
    uVar3 = FUN_180743700(lVar1,&puStackX_8,0x10,1);
    if ((int)uVar3 == 0) {
      *puStackX_8 = 0x11;
      *(longlong *)(puStackX_8 + 8) = param_1;
      uVar3 = func_0x000180743b40(*(undefined8 *)(param_1 + 0xa8),puStackX_8,1);
    }
    return uVar3;
  }
  if (lVar1 != 0) {
    func_0x000180743c20(lVar1,7);
  }
  uVar3 = *(ulonglong *)(param_1 + 0x210);
  uVar6 = 0;
  if ((uVar3 == 0) || (uVar4 = uVar3, *(char *)(uVar3 + 0x212) == '\0')) {
    uVar4 = uVar6;
  }
  if ((uVar3 == 0) || (uVar5 = uVar3 + 0x214, *(char *)(uVar3 + 0x426) == '\0')) {
    uVar5 = uVar6;
  }
  if (uVar4 != 0) {
    *(undefined4 *)(uVar4 + 0x20c) = 0;
    *(undefined2 *)(uVar4 + 0x210) = 0;
                    // WARNING: Subroutine does not return
    memset(uVar4,0,0x208);
  }
  if (uVar5 != 0) {
    *(undefined4 *)(uVar5 + 0x20c) = 0;
    *(undefined2 *)(uVar5 + 0x210) = 0;
                    // WARNING: Subroutine does not return
    memset(uVar5,0,0x208);
  }
  if ((lVar1 != 0) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar1,7);
  }
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x40) != 0)) {
    *(longlong *)(param_1 + 0xb0) = param_1;
    uVar2 = (**(code **)(lVar1 + 0x40))();
    uVar6 = (ulonglong)uVar2;
  }
  return uVar6;
}



ulonglong FUN_1807603ff(void)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  ulonglong uVar5;
  longlong unaff_RSI;
  ulonglong uVar6;
  
  if (unaff_RSI != 0) {
    func_0x000180743c20();
  }
  uVar1 = *(ulonglong *)(unaff_RBX + 0x210);
  uVar6 = 0;
  if ((uVar1 == 0) || (uVar4 = uVar1, *(char *)(uVar1 + 0x212) == '\0')) {
    uVar4 = uVar6;
  }
  if ((uVar1 == 0) || (uVar5 = uVar1 + 0x214, *(char *)(uVar1 + 0x426) == '\0')) {
    uVar5 = uVar6;
  }
  if (uVar4 != 0) {
    *(undefined4 *)(uVar4 + 0x20c) = 0;
    *(undefined2 *)(uVar4 + 0x210) = 0;
                    // WARNING: Subroutine does not return
    memset(uVar4,0,0x208);
  }
  if (uVar5 != 0) {
    *(undefined4 *)(uVar5 + 0x20c) = 0;
    *(undefined2 *)(uVar5 + 0x210) = 0;
                    // WARNING: Subroutine does not return
    memset(uVar5,0,0x208);
  }
  if ((unaff_RSI != 0) && (unaff_RSI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  lVar2 = *(longlong *)(unaff_RBX + 0xe8);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x40) != 0)) {
    *(longlong *)(unaff_RBX + 0xb0) = unaff_RBX;
    uVar3 = (**(code **)(lVar2 + 0x40))();
    uVar6 = (ulonglong)uVar3;
  }
  return uVar6;
}



ulonglong FUN_1807604ab(void)

{
  longlong lVar1;
  uint uVar2;
  longlong unaff_RBX;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  lVar1 = *(longlong *)(unaff_RBX + 0xe8);
  if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x40) != unaff_RDI)) {
    *(longlong *)(unaff_RBX + 0xb0) = unaff_RBX;
    uVar2 = (**(code **)(lVar1 + 0x40))();
    unaff_RDI = (ulonglong)uVar2;
  }
  return unaff_RDI & 0xffffffff;
}







