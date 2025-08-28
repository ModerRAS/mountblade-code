#include "TaleWorlds.Native.Split.h"

// 99_part_01_part008.c - 9 个函数

// 函数: void FUN_1800a5810(longlong param_1,longlong *param_2,int param_3,int param_4,longlong param_5)
void FUN_1800a5810(longlong param_1,longlong *param_2,int param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_188 [32];
  longlong *aplStack_168 [2];
  longlong lStack_158;
  longlong *plStack_150;
  undefined4 uStack_148;
  undefined8 uStack_144;
  uint uStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  longlong *plStack_130;
  longlong lStack_128;
  longlong lStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined8 uStack_f8;
  longlong alStack_e8 [2];
  undefined2 uStack_d8;
  undefined1 uStack_d6;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined1 uStack_82;
  undefined5 uStack_81;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  int iStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  LOCK();
  bVar16 = *(char *)(param_5 + 200) == '\x01';
  if (bVar16) {
    *(char *)(param_5 + 200) = '\0';
  }
  UNLOCK();
  if (bVar16) {
    if (*(int *)(param_5 + 0x380) == 0) {
      LOCK();
      *(undefined1 *)(param_5 + 900) = 0;
      UNLOCK();
    }
    *(undefined8 *)(param_5 + 0x168) = 0;
    *(undefined1 *)(param_5 + 0x198) = 0;
    *(undefined8 *)(param_5 + 0x170) = 0;
    *(undefined8 *)(param_5 + 0x178) = 0;
    *(undefined8 *)(param_5 + 0x180) = 0;
    *(undefined4 *)(param_5 + 400) = 0;
    *(undefined8 *)(param_5 + 0x1a0) = 0;
    *(undefined1 *)(param_5 + 0x1d0) = 0;
    *(undefined8 *)(param_5 + 0x1a8) = 0;
    *(undefined8 *)(param_5 + 0x1b0) = 0;
    *(undefined8 *)(param_5 + 0x1b8) = 0;
    *(undefined4 *)(param_5 + 0x1c8) = 0;
    *(undefined8 *)(param_5 + 0x200) = 0;
    *(undefined4 *)(param_5 + 0x1f8) = 0xffffffff;
    *(undefined8 *)(param_5 + 0x208) = 0;
    *(undefined8 *)(param_5 + 0x210) = 0;
  }
  lStack_128 = param_1;
  if (*(int *)((longlong)param_2 + 0x54) == 0) {
    puVar8 = &DAT_18098bc73;
    if (*(undefined **)(param_5 + 0x18) != (undefined *)0x0) {
      puVar8 = *(undefined **)(param_5 + 0x18);
    }
    FUN_180626f80(&UNK_180a01a58,puVar8);
    goto LAB_1800a5a93;
  }
  alStack_e8[0] = 0;
  alStack_e8[1] = 0;
  uStack_d8 = 0;
  uStack_d6 = 3;
  uStack_86 = 0;
  uStack_84 = 0;
  uStack_94 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_82 = 0;
  uStack_d4 = 0;
  uStack_cc = 0;
  uStack_c4 = 0;
  uStack_bc = 0;
  uStack_b4 = 0;
  uStack_ac = 0;
  uStack_a4 = 0;
  uStack_9c = 0;
  iVar2 = func_0x0001800ab000(*(undefined4 *)((longlong)param_2 + 0x54));
  if (iVar2 == 0) {
    uStack_d4 = *(undefined8 *)((longlong)param_2 + 0x14);
    uStack_cc = *(undefined8 *)((longlong)param_2 + 0x1c);
    uStack_c4 = *(undefined8 *)((longlong)param_2 + 0x24);
    uStack_bc = *(undefined8 *)((longlong)param_2 + 0x2c);
    uStack_b4 = *(undefined8 *)((longlong)param_2 + 0x34);
    uStack_ac = *(undefined8 *)((longlong)param_2 + 0x3c);
    uStack_a4 = *(undefined8 *)((longlong)param_2 + 0x44);
    uStack_9c = *(undefined8 *)((longlong)param_2 + 0x4c);
    uStack_94 = *(undefined8 *)((longlong)param_2 + 0x54);
    uStack_8c = *(undefined4 *)((longlong)param_2 + 0x5c);
    uStack_88 = (undefined2)(int)param_2[0xc];
    uStack_86 = (undefined2)((uint)(int)param_2[0xc] >> 0x10);
    uVar14 = *(undefined8 *)((longlong)param_2 + 100);
    uStack_84 = (undefined2)uVar14;
    uStack_82 = (undefined1)((ulonglong)uVar14 >> 0x10);
    uStack_81 = (undefined5)((ulonglong)uVar14 >> 0x18);
    FUN_1802a1bc0(alStack_e8);
                    // WARNING: Subroutine does not return
    memcpy(alStack_e8[0],*param_2,param_2[1]);
  }
  uVar6 = (ulonglong)*(ushort *)((longlong)param_2 + 0x62);
  if (uVar6 == 0) {
    lStack_158 = 0;
  }
  else {
    lStack_158 = FUN_18062b420(_DAT_180c8ed18,uVar6 << 8);
  }
  lVar5 = FUN_1800ad760(uVar6 << 4);
  cVar1 = *(char *)((longlong)param_2 + 100);
  lStack_118 = lVar5;
  if (cVar1 == '\x01') {
LAB_1800a5a39:
    LOCK();
    *(undefined4 *)(param_5 + 0x380) = 3;
    UNLOCK();
LAB_1800a5a44:
    if (lStack_158 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lStack_158);
    }
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar5);
    }
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') goto LAB_1800a5a39;
      goto LAB_1800a5a44;
    }
    iVar2 = param_4;
    if (param_4 != 0) {
      if ((*(byte *)((longlong)param_2 + 0x65) < 8) ||
         ((*(uint *)(param_5 + 0x328) & 0x200002) != 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(byte *)((longlong)param_2 + 0x65) - 7;
        if (param_4 < iVar2) {
          iVar2 = param_4;
        }
      }
    }
    uVar14 = 1;
    if ((((*(uint *)(param_2 + 0xb) & 0x2000) != 0) &&
        (*(short *)((longlong)param_2 + 0x5c) == 0x100)) &&
       (*(short *)((longlong)param_2 + 0x5e) == 0x100)) {
      iVar2 = 1;
    }
    uVar3 = (uint)(*(ushort *)((longlong)param_2 + 0x5c) >> ((byte)iVar2 & 0x1f));
    uVar12 = 1;
    if (1 < uVar3) {
      uVar12 = uVar3;
    }
    uVar4 = (uint)(*(ushort *)((longlong)param_2 + 0x5e) >> ((byte)iVar2 & 0x1f));
    uVar3 = 1;
    if (1 < uVar4) {
      uVar3 = uVar4;
    }
    if ((*(int *)((longlong)param_2 + 0x54) - 0xeU < 5) && (((uVar3 | uVar12) & 3) != 0)) {
      puVar8 = &DAT_18098bc73;
      if (*(undefined **)(param_5 + 0x18) != (undefined *)0x0) {
        puVar8 = *(undefined **)(param_5 + 0x18);
      }
      FUN_180626f80(&UNK_180a01ae0,puVar8);
    }
    else {
      *(int *)(param_5 + 0x360) = iVar2;
      uVar4 = (uint)*(byte *)((longlong)param_2 + 0x65) - iVar2;
      uStack_6c = (uint)*(ushort *)((longlong)param_2 + 0x62);
      uStack_58 = 8;
      uStack_78 = uVar12;
      uStack_68 = func_0x0001800ab000(*(undefined4 *)((longlong)param_2 + 0x54));
      lVar15 = lStack_158;
      uStack_50 = 0;
      if ((*(uint *)(param_2 + 0xb) & 0x2000) != 0) {
        uStack_50 = 4;
      }
      iStack_5c = 0;
      if (param_3 != 0) {
        iStack_5c = (int)uVar14;
        param_3 = param_3 - iStack_5c;
        if (param_3 != 0) {
          if (param_3 == iStack_5c) {
            iStack_5c = 3;
          }
          else {
            bVar16 = param_3 - iStack_5c == iStack_5c;
            iStack_5c = 0;
            if (bVar16) {
              iStack_5c = 2;
            }
          }
        }
      }
      lVar11 = 0;
      uStack_74 = uVar3;
      uStack_70 = uVar4;
      uStack_64 = uVar14;
      if (*param_2 != 0) {
        FUN_1800adfe0(param_2,lVar5);
        uVar12 = 0;
        lVar11 = lVar15;
        if (uStack_6c != 0) {
          lVar13 = 0;
          uVar3 = (uint)*(byte *)((longlong)param_2 + 0x65);
          do {
            if (iVar2 < (int)uVar3) {
              puVar7 = (undefined4 *)(lVar15 + 0xc + lVar13 * 0x10);
              iVar10 = iVar2;
              do {
                uVar6 = (ulonglong)(uVar3 * uVar12 + iVar10);
                *(undefined8 *)(puVar7 + -3) = *(undefined8 *)(lVar5 + uVar6 * 0x18);
                puVar7[-1] = *(undefined4 *)(lVar5 + 0x10 + uVar6 * 0x18);
                *puVar7 = *(undefined4 *)(lVar5 + 0x14 + uVar6 * 0x18);
                lVar13 = lVar13 + 1;
                puVar7 = puVar7 + 4;
                iVar10 = iVar10 + 1;
                uVar3 = (uint)*(byte *)((longlong)param_2 + 0x65);
              } while (iVar10 < (int)uVar3);
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uStack_6c);
        }
      }
      aplStack_168[0] = (longlong *)0x0;
      iVar2 = (**(code **)(**(longlong **)(lStack_128 + 0x1d78) + 0x28))
                        (*(longlong **)(lStack_128 + 0x1d78),&uStack_78,lVar11,aplStack_168);
      if (iVar2 < 0) {
        FUN_180220810(iVar2,&UNK_180a01aa8);
        FUN_180220810(iVar2,&UNK_180a01ba0);
        puVar8 = &DAT_18098bc73;
        if (*(undefined **)(param_5 + 0x18) != (undefined *)0x0) {
          puVar8 = *(undefined **)(param_5 + 0x18);
        }
        FUN_180626f80(&UNK_180a01c50,puVar8,iVar2);
      }
      else {
        uVar14 = 0;
        uStack_13c = uVar4;
        if ((*(uint *)(param_2 + 0xb) & 0x2000) == 0) {
          if (*(ushort *)((longlong)param_2 + 0x62) < 2) {
            uStack_144 = 4;
            if (uVar4 != 0) {
              uVar14 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)uVar4 * 8,3);
            }
            lVar11 = lStack_128;
            uVar9 = 0;
            *(undefined8 *)(param_5 + 0x180) = uVar14;
            *(uint *)(param_5 + 0x188) = uVar4;
            uVar6 = uVar9;
            if (uVar4 != 0) {
              do {
                plStack_130 = (longlong *)0x0;
                uStack_10c = 4;
                uStack_104 = 1;
                uStack_110 = 0;
                iStack_108 = (int)uVar6;
                iVar2 = (**(code **)(**(longlong **)(lVar11 + 0x1d78) + 0x38))
                                  (*(longlong **)(lVar11 + 0x1d78),aplStack_168[0],&uStack_110,
                                   &plStack_130);
                if (iVar2 < 0) {
                  FUN_180220810(iVar2,&UNK_180a01b40);
                  if (aplStack_168[0] != (longlong *)0x0) {
                    (**(code **)(*aplStack_168[0] + 0x10))();
                    aplStack_168[0] = (longlong *)0x0;
                  }
                  if (plStack_130 != (longlong *)0x0) {
                    (**(code **)(*plStack_130 + 0x10))();
                  }
                }
                else {
                  *(longlong **)(uVar9 + *(longlong *)(param_5 + 0x180)) = plStack_130;
                  *(int *)(param_5 + 0x364) = (int)param_2[1];
                }
                uVar12 = (int)uVar6 + 1;
                uVar9 = uVar9 + 8;
                uVar6 = (ulonglong)uVar12;
                lVar5 = lStack_118;
                lVar15 = lStack_158;
              } while (uVar12 < uVar4);
            }
          }
          else {
            uStack_144 = 5;
            uStack_134 = (uint)*(ushort *)((longlong)param_2 + 0x62);
            uStack_138 = 0;
          }
        }
        else {
          uStack_144 = 9;
        }
        uStack_148 = 0;
        plStack_150 = (longlong *)0x0;
        iVar2 = (**(code **)(**(longlong **)(lStack_128 + 0x1d78) + 0x38))
                          (*(longlong **)(lStack_128 + 0x1d78),aplStack_168[0],&uStack_148,
                           &plStack_150);
        if (iVar2 < 0) {
          FUN_180220810(iVar2,&UNK_180a01b40);
          if (aplStack_168[0] != (longlong *)0x0) {
            (**(code **)(*aplStack_168[0] + 0x10))();
            aplStack_168[0] = (longlong *)0x0;
          }
          if (plStack_150 != (longlong *)0x0) {
            (**(code **)(*plStack_150 + 0x10))();
            plStack_150 = (longlong *)0x0;
          }
        }
        else {
          *(longlong **)(param_5 + 0x170) = aplStack_168[0];
          *(longlong **)(param_5 + 0x178) = plStack_150;
          *(int *)(param_5 + 0x364) = (int)param_2[1];
        }
        *(uint *)(param_5 + 0x35c) = uVar4;
      }
      LOCK();
      _DAT_180d48d28 = 0;
      UNLOCK();
      iVar2 = (iVar2 >> 0x1f & 1U) + 2;
      if (iVar2 == 2) {
        *(longlong *)(param_5 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      }
      LOCK();
      *(int *)(param_5 + 0x380) = iVar2;
      UNLOCK();
      if (iVar2 == 2) {
        LOCK();
        *(undefined1 *)(param_5 + 900) = 1;
        UNLOCK();
      }
      if (lVar15 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar15);
      }
      if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar5);
      }
    }
  }
  if (uStack_d8._1_1_ == '\0') {
    if (((char)uStack_d8 == '\0') && (alStack_e8[0] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    alStack_e8[0] = 0;
    alStack_e8[1] = 0;
    uStack_d8 = 0;
  }
LAB_1800a5a93:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}






// 函数: void FUN_1800a5f50(longlong param_1,undefined8 *param_2)
void FUN_1800a5f50(longlong param_1,undefined8 *param_2)

{
  undefined8 uStackX_8;
  undefined8 auStackX_10 [3];
  
  uStackX_8 = 1;
  (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0xc0))
            (*(longlong **)(param_1 + 0x1d78),&uStackX_8,auStackX_10);
  *param_2 = auStackX_10[0];
  return;
}






// 函数: void FUN_1800a5f90(undefined8 param_1,longlong *param_2)
void FUN_1800a5f90(undefined8 param_1,longlong *param_2)

{
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    *param_2 = 0;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800a627a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a5fc0(longlong param_1,longlong param_2,longlong *param_3)
void FUN_1800a5fc0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_a18 [32];
  undefined4 uStack_9f8;
  undefined8 *puStack_9f0;
  char cStack_9e8;
  uint uStack_9e4;
  uint uStack_9e0;
  longlong *plStack_9d8;
  longlong lStack_9d0;
  longlong lStack_9c8;
  undefined8 auStack_9c0 [2];
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined4 uStack_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined4 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined4 uStack_970;
  undefined4 uStack_96c;
  undefined4 uStack_968;
  uint uStack_95c;
  byte bStack_958;
  undefined1 auStack_948 [16];
  uint auStack_938 [572];
  ulonglong uStack_48;
  ulonglong uVar8;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_a18;
  plVar1 = *(longlong **)(param_2 + 8);
  lStack_9c8 = param_1;
  if (((plVar1 != (longlong *)0x0) || (*(longlong *)(param_2 + 0x10) != 0)) &&
     ((**(code **)(*plVar1 + 0x50))(plVar1,&uStack_980), (uStack_95c & 0x20000) == 0)) {
    uStack_9b0 = uStack_980;
    uStack_9a8 = uStack_978;
    uVar8 = 0;
    uStack_9a0 = uStack_970;
    uStack_99c = uStack_96c;
    uStack_998 = uStack_968;
    uStack_994 = 3;
    uStack_990 = 0;
    uStack_98c = 0x20000;
    uStack_988 = 0;
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x28))
                      (*(longlong **)(param_1 + 0x1d78),&uStack_9b0,0,&plStack_9d8);
    if (iVar4 < 0) {
      FUN_180220810(iVar4,&UNK_180a01c00);
    }
    else {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1cd8) + 0x8400);
      (**(code **)(*plVar2 + 0x178))(plVar2,plStack_9d8,plVar1);
      *(undefined2 *)((longlong)param_3 + 0x62) = uStack_9a8._4_2_;
      *(undefined2 *)(param_3 + 0xc) = 1;
      *(undefined4 *)(param_3 + 0xb) = 0;
      uVar12 = uVar8;
      if ((bStack_958 & 4) != 0) {
        uVar12 = 0x2000;
        *(undefined4 *)(param_3 + 0xb) = 0x2000;
      }
      uVar11 = (uint)uVar12;
      uVar5 = func_0x0001800aada0(uStack_9a0);
      *(undefined2 *)((longlong)param_3 + 0x5e) = uStack_9b0._4_2_;
      *(undefined1 *)((longlong)param_3 + 0x65) = (undefined1)uStack_9a8;
      *(undefined2 *)((longlong)param_3 + 0x5c) = (undefined2)uStack_9b0;
      *(undefined4 *)((longlong)param_3 + 0x54) = uVar5;
      *(undefined1 *)((longlong)param_3 + 100) = 2;
      cVar3 = func_0x0001802a1d70(uVar5);
      if (cVar3 != '\0') {
        *(uint *)(param_3 + 0xb) = uVar11 | 0x8000;
      }
      FUN_1802a1bc0(param_3);
      puVar9 = auStack_948;
      lVar10 = 0x60;
      do {
        func_0x0001800adfc0(puVar9);
        puVar9 = puVar9 + 0x18;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      FUN_1800adfe0(param_3,auStack_948);
      lVar10 = *param_3;
      cStack_9e8 = *(int *)((longlong)param_3 + 0x54) - 0xeU < 9;
      uStack_9e0 = 0;
      lStack_9d0 = lVar10;
      if (uStack_9a8._4_4_ != 0) {
        uVar12 = uVar8;
        uVar11 = uStack_9a8._4_4_;
        uVar6 = (uint)uStack_9a8;
        cVar3 = cStack_9e8;
        do {
          uStack_9e4 = 0;
          uVar7 = (uint)uVar8;
          if (uVar6 != 0) {
            uVar11 = uStack_9b0._4_4_ >> 2;
            if (cVar3 == '\0') {
              uVar11 = uStack_9b0._4_4_;
            }
            do {
              puStack_9f0 = auStack_9c0;
              uStack_9f8 = 0;
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1cd8) + 0x8400);
              iVar4 = (**(code **)(*plVar1 + 0x70))(plVar1,plStack_9d8,uVar12,1);
              if (iVar4 < 0) {
                FUN_180220810(iVar4,&UNK_180a01cb0);
              }
              if (uVar11 != 0) {
                    // WARNING: Subroutine does not return
                memcpy(lVar10,auStack_9c0[0],auStack_938[uVar12 * 6]);
              }
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1cd8) + 0x8400);
              (**(code **)(*plVar1 + 0x78))(plVar1,plStack_9d8,uVar12);
              uVar11 = 1;
              uStack_9e4 = uStack_9e4 + 1;
              lVar10 = lStack_9d0 + (ulonglong)auStack_938[uVar12 * 6 + 1];
              uVar12 = (ulonglong)((int)uVar12 + 1);
              lStack_9d0 = lVar10;
            } while (uStack_9e4 < (uint)uStack_9a8);
            uVar11 = uStack_9a8._4_4_;
            uVar6 = (uint)uStack_9a8;
            uVar7 = uStack_9e0;
            cVar3 = cStack_9e8;
          }
          uStack_9e0 = uVar7 + 1;
          uVar8 = (ulonglong)uStack_9e0;
        } while (uStack_9e0 < uVar11);
      }
      if (plStack_9d8 != (longlong *)0x0) {
        (**(code **)(*plStack_9d8 + 0x10))();
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_a18);
}



// WARNING: Removing unreachable block (ram,0x0001800a627a)




// 函数: void FUN_1800a6011(void)
void FUN_1800a6011(void)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  longlong in_RAX;
  uint uVar8;
  longlong lVar10;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong unaff_R14;
  uint uStack0000000000000034;
  uint uStack0000000000000038;
  longlong *in_stack_00000040;
  longlong in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined2 uStack0000000000000068;
  undefined2 uStack000000000000006c;
  undefined1 uStack0000000000000070;
  undefined2 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  ulonglong uVar9;
  
  (**(code **)(in_RAX + 0x50))();
  if ((*(uint *)(unaff_RBP + -0x44) & 0x20000) == 0) {
    _uStack0000000000000068 = *(undefined8 *)(unaff_RBP + -0x68);
    _uStack0000000000000070 = *(undefined8 *)(unaff_RBP + -0x60);
    plVar2 = *(longlong **)(unaff_R14 + 0x1d78);
    uStack0000000000000078 = *(undefined4 *)(unaff_RBP + -0x58);
    uStack000000000000007c = *(undefined4 *)(unaff_RBP + -0x54);
    uStack0000000000000080 = *(undefined4 *)(unaff_RBP + -0x50);
    uStack0000000000000084 = *(undefined4 *)(unaff_RBP + -0x4c);
    uVar9 = 0;
    *(undefined8 *)(unaff_RBP + -0x78) = *(undefined8 *)(unaff_RBP + -0x48);
    *(undefined8 *)(unaff_RBP + -0x7c) = 3;
    *(undefined8 *)(unaff_RBP + -0x74) = 0x20000;
    iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2,&stack0x00000068,0,&stack0x00000040);
    if (iVar4 < 0) {
      FUN_180220810(iVar4,&UNK_180a01c00);
    }
    else {
      plVar2 = *(longlong **)(*(longlong *)(unaff_R14 + 0x1cd8) + 0x8400);
      (**(code **)(*plVar2 + 0x178))(plVar2,in_stack_00000040);
      bVar1 = *(byte *)(unaff_RBP + -0x40);
      *(undefined2 *)((longlong)unaff_RSI + 0x62) = uStack0000000000000074;
      *(undefined2 *)(unaff_RSI + 0xc) = 1;
      *(undefined4 *)(unaff_RSI + 0xb) = 0;
      uVar13 = uVar9;
      if ((bVar1 & 4) != 0) {
        uVar13 = 0x2000;
        *(undefined4 *)(unaff_RSI + 0xb) = 0x2000;
      }
      uVar12 = (uint)uVar13;
      uVar5 = func_0x0001800aada0(uStack0000000000000078);
      *(undefined2 *)((longlong)unaff_RSI + 0x5e) = uStack000000000000006c;
      *(undefined1 *)((longlong)unaff_RSI + 0x65) = uStack0000000000000070;
      *(undefined2 *)((longlong)unaff_RSI + 0x5c) = uStack0000000000000068;
      *(undefined4 *)((longlong)unaff_RSI + 0x54) = uVar5;
      *(undefined1 *)((longlong)unaff_RSI + 100) = 2;
      cVar3 = func_0x0001802a1d70(uVar5);
      if (cVar3 != '\0') {
        *(uint *)(unaff_RSI + 0xb) = uVar12 | 0x8000;
      }
      FUN_1802a1bc0();
      lVar10 = unaff_RBP + -0x30;
      lVar11 = 0x60;
      do {
        uVar5 = func_0x0001800adfc0(lVar10);
        lVar10 = lVar10 + 0x18;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      FUN_1800adfe0(uVar5,unaff_RBP + -0x30);
      iVar4 = *(int *)((longlong)unaff_RSI + 0x54);
      lVar10 = *unaff_RSI;
      uStack0000000000000038 = 0;
      in_stack_00000048 = lVar10;
      if (_uStack0000000000000074 != 0) {
        uVar13 = uVar9;
        uVar12 = _uStack0000000000000074;
        uVar6 = _uStack0000000000000070;
        do {
          uStack0000000000000034 = 0;
          uVar8 = (uint)uVar9;
          if (uVar6 != 0) {
            uVar12 = _uStack000000000000006c >> 2;
            if (8 < iVar4 - 0xeU) {
              uVar12 = _uStack000000000000006c;
            }
            do {
              plVar2 = *(longlong **)(*(longlong *)(unaff_R14 + 0x1cd8) + 0x8400);
              iVar7 = (**(code **)(*plVar2 + 0x70))(plVar2,in_stack_00000040,uVar13,1,0);
              if (iVar7 < 0) {
                FUN_180220810(iVar7,&UNK_180a01cb0);
              }
              if (uVar12 != 0) {
                    // WARNING: Subroutine does not return
                memcpy(lVar10,in_stack_00000058,*(undefined4 *)(unaff_RBP + -0x20 + uVar13 * 0x18));
              }
              plVar2 = *(longlong **)(*(longlong *)(unaff_R14 + 0x1cd8) + 0x8400);
              (**(code **)(*plVar2 + 0x78))(plVar2,in_stack_00000040,uVar13);
              uVar12 = 1;
              uStack0000000000000034 = uStack0000000000000034 + 1;
              lVar10 = in_stack_00000048 + (ulonglong)*(uint *)(unaff_RBP + -0x1c + uVar13 * 0x18);
              uVar13 = (ulonglong)((int)uVar13 + 1);
              in_stack_00000048 = lVar10;
            } while (uStack0000000000000034 < _uStack0000000000000070);
            uVar12 = _uStack0000000000000074;
            uVar6 = _uStack0000000000000070;
            uVar8 = uStack0000000000000038;
          }
          uStack0000000000000038 = uVar8 + 1;
          uVar9 = (ulonglong)uStack0000000000000038;
        } while (uStack0000000000000038 < uVar12);
      }
      if (in_stack_00000040 != (longlong *)0x0) {
        (**(code **)(*in_stack_00000040 + 0x10))();
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x8d0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Removing unreachable block (ram,0x0001800a627a)




// 函数: void FUN_1800a609a(void)
void FUN_1800a609a(void)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong in_RAX;
  longlong lVar10;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  longlong lVar11;
  uint uVar12;
  uint unaff_R12D;
  ulonglong uVar13;
  longlong unaff_R14;
  uint uVar14;
  uint uStack0000000000000034;
  uint uStack0000000000000038;
  longlong *in_stack_00000040;
  longlong lStack0000000000000048;
  undefined8 in_stack_00000058;
  undefined2 uStack0000000000000068;
  undefined2 uStack000000000000006c;
  undefined1 uStack0000000000000070;
  undefined2 uStack0000000000000074;
  undefined4 in_stack_00000078;
  
  uVar6 = _uStack0000000000000074;
  uVar5 = _uStack0000000000000070;
  uVar4 = _uStack000000000000006c;
  (**(code **)(**(longlong **)(in_RAX + 0x8400) + 0x178))();
  bVar1 = *(byte *)(unaff_RBP + -0x40);
  *(undefined2 *)((longlong)unaff_RSI + 0x62) = uStack0000000000000074;
  *(undefined2 *)(unaff_RSI + 0xc) = 1;
  *(uint *)(unaff_RSI + 0xb) = unaff_R12D;
  uVar12 = unaff_R12D;
  if ((bVar1 & 4) != 0) {
    uVar12 = 0x2000;
    *(undefined4 *)(unaff_RSI + 0xb) = 0x2000;
  }
  uVar8 = func_0x0001800aada0(in_stack_00000078);
  *(undefined2 *)((longlong)unaff_RSI + 0x5e) = uStack000000000000006c;
  *(undefined1 *)((longlong)unaff_RSI + 0x65) = uStack0000000000000070;
  *(undefined2 *)((longlong)unaff_RSI + 0x5c) = uStack0000000000000068;
  *(undefined4 *)((longlong)unaff_RSI + 0x54) = uVar8;
  *(undefined1 *)((longlong)unaff_RSI + 100) = 2;
  cVar7 = func_0x0001802a1d70(uVar8);
  if (cVar7 != '\0') {
    *(uint *)(unaff_RSI + 0xb) = uVar12 | 0x8000;
  }
  FUN_1802a1bc0();
  lVar10 = unaff_RBP + -0x30;
  lVar11 = 0x60;
  do {
    func_0x0001800adfc0(lVar10);
    lVar10 = lVar10 + 0x18;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  FUN_1800adfe0();
  iVar2 = *(int *)((longlong)unaff_RSI + 0x54);
  lVar10 = *unaff_RSI;
  uVar13 = (ulonglong)unaff_R12D;
  uStack0000000000000038 = unaff_R12D;
  lStack0000000000000048 = lVar10;
  uStack0000000000000034 = unaff_R12D;
  if (uVar6 != 0) {
    do {
      uVar12 = uStack0000000000000034;
      if (uVar5 != 0) {
        uVar14 = uVar4 >> 2;
        if (8 < iVar2 - 0xeU) {
          uVar14 = uVar4;
        }
        do {
          plVar3 = *(longlong **)(*(longlong *)(unaff_R14 + 0x1cd8) + 0x8400);
          iVar9 = (**(code **)(*plVar3 + 0x70))(plVar3,in_stack_00000040,uVar13,1,uVar12);
          if (iVar9 < 0) {
            FUN_180220810(iVar9,&UNK_180a01cb0);
          }
          if (uVar14 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(lVar10,in_stack_00000058,*(undefined4 *)(unaff_RBP + -0x20 + uVar13 * 0x18));
          }
          plVar3 = *(longlong **)(*(longlong *)(unaff_R14 + 0x1cd8) + 0x8400);
          (**(code **)(*plVar3 + 0x78))(plVar3,in_stack_00000040,uVar13);
          uVar14 = 1;
          uStack0000000000000034 = uStack0000000000000034 + 1;
          lVar10 = lStack0000000000000048 + (ulonglong)*(uint *)(unaff_RBP + -0x1c + uVar13 * 0x18);
          uVar13 = (ulonglong)((int)uVar13 + 1);
          uVar12 = 0;
          lStack0000000000000048 = lVar10;
        } while (uStack0000000000000034 < uVar5);
      }
      uStack0000000000000034 = uVar12;
      uStack0000000000000038 = uStack0000000000000038 + 1;
    } while (uStack0000000000000038 < uVar6);
  }
  if (in_stack_00000040 != (longlong *)0x0) {
    (**(code **)(*in_stack_00000040 + 0x10))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x8d0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Removing unreachable block (ram,0x0001800a627a)




// 函数: void FUN_1800a6184(uint param_1,uint param_2,char param_3,undefined8 param_4,undefined8 param_5,
void FUN_1800a6184(uint param_1,uint param_2,char param_3,undefined8 param_4,undefined8 param_5,
                  char param_6,uint param_7,longlong *param_8,longlong param_9,undefined8 param_10,
                  undefined8 param_11,undefined8 param_12,undefined8 param_13,undefined8 param_14)

{
  longlong *plVar1;
  uint in_EAX;
  int iVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_R12D;
  uint unaff_R13D;
  longlong unaff_R14;
  uint uVar3;
  uint uStack0000000000000034;
  
  do {
    uStack0000000000000034 = unaff_R12D;
    if (in_EAX != 0) {
      uVar3 = param_13._4_4_ >> 2;
      if (param_3 == '\0') {
        uVar3 = param_13._4_4_;
      }
      do {
        plVar1 = *(longlong **)(*(longlong *)(unaff_R14 + 0x1cd8) + 0x8400);
        iVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,param_8,unaff_R13D,1,unaff_R12D);
        if (iVar2 < 0) {
          FUN_180220810(iVar2,&UNK_180a01cb0);
        }
        if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(unaff_RBX,param_11,
                 *(undefined4 *)(unaff_RBP + -0x20 + (ulonglong)unaff_R13D * 0x18));
        }
        plVar1 = *(longlong **)(*(longlong *)(unaff_R14 + 0x1cd8) + 0x8400);
        (**(code **)(*plVar1 + 0x78))(plVar1,param_8,unaff_R13D);
        uVar3 = 1;
        uStack0000000000000034 = uStack0000000000000034 + 1;
        unaff_RBX = param_9 + (ulonglong)*(uint *)(unaff_RBP + -0x1c + (ulonglong)unaff_R13D * 0x18)
        ;
        unaff_R13D = unaff_R13D + 1;
        unaff_R12D = 0;
        in_EAX = (uint)param_14;
        param_1 = param_14._4_4_;
        param_2 = param_7;
        param_9 = unaff_RBX;
        param_3 = param_6;
      } while (uStack0000000000000034 < (uint)param_14);
    }
    param_7 = param_2 + 1;
    param_2 = param_7;
    if (param_1 <= param_7) {
      if (param_8 != (longlong *)0x0) {
        (**(code **)(*param_8 + 0x10))();
      }
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x8d0) ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}






// 函数: void FUN_1800a62cd(void)
void FUN_1800a62cd(void)

{
  longlong unaff_RBP;
  longlong *in_stack_00000040;
  
  if (in_stack_00000040 != (longlong *)0x0) {
    (**(code **)(*in_stack_00000040 + 0x10))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x8d0) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1800a62e7(longlong *param_1)
void FUN_1800a62e7(longlong *param_1)

{
  longlong unaff_RBP;
  
  (**(code **)(*param_1 + 0x10))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x8d0) ^ (ulonglong)&stack0x00000000);
}






