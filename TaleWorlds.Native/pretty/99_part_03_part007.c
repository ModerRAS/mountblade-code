#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part007.c - 1 个函数

// 函数: void FUN_1801cb3e0(uint64_t param_1,char param_2,longlong param_3)
void FUN_1801cb3e0(uint64_t param_1,char param_2,longlong param_3)

{
  byte bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint64_t *******pppppppuVar5;
  longlong *plVar6;
  uint64_t *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint64_t *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint64_t uVar14;
  uint64_t *******pppppppuVar15;
  byte *pbVar16;
  uint64_t ******ppppppuVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  uint uVar22;
  uint64_t *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong *plVar26;
  int32_t uVar27;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int8_t auStack_418 [96];
  ulonglong uStack_3b8;
  uint64_t *puStack_3b0;
  longlong *plStack_3a0;
  char cStack_398;
  uint uStack_394;
  int iStack_390;
  longlong *plStack_388;
  longlong *plStack_340;
  longlong *plStack_338;
  uint64_t uStack_330;
  int32_t uStack_328;
  int iStack_320;
  uint64_t *******pppppppuStack_318;
  uint64_t *******pppppppuStack_310;
  uint64_t *******pppppppuStack_308;
  uint64_t uStack_300;
  uint64_t uStack_2f8;
  int32_t uStack_2f0;
  uint64_t *******pppppppuStack_2e8;
  uint64_t *******pppppppuStack_2e0;
  uint64_t *******pppppppuStack_2d8;
  uint64_t uStack_2d0;
  uint64_t uStack_2c8;
  int32_t uStack_2c0;
  uint64_t *puStack_2b8;
  uint64_t *puStack_2b0;
  uint64_t *puStack_2a8;
  int32_t uStack_2a0;
  longlong lStack_248;
  longlong lStack_240;
  uint64_t *puStack_238;
  uint64_t uStack_190;
  longlong lStack_188;
  longlong *plStack_180;
  longlong *plStack_178;
  longlong *plStack_170;
  ulonglong uStack_38;
  
  uStack_190 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_418;
  uVar18 = 0;
  uStack_394 = 0;
  cStack_398 = param_2;
  lStack_248 = param_3;
  lStack_188 = param_3;
  if (param_2 == '\0') {
    FUN_180100ff0(param_1,4);
  }
  else {
    iVar9 = *(int *)(param_3 + 0x10);
    if (iVar9 == 7) {
      uVar25 = uVar18;
      do {
        uVar19 = uVar25 + 1;
        if (*(char *)(*(longlong *)(param_3 + 8) + uVar25) != (&unknown_var_9584_ptr)[uVar25])
        goto LAB_1801cb489;
        uVar25 = uVar19;
      } while (uVar19 != 8);
      uVar27 = FUN_180103d30(8,4);
      FUN_180103970(uVar27,0);
    }
    else {
LAB_1801cb489:
      if ((iVar9 == 8) && (iVar8 = strcmp(*(uint64_t *)(param_3 + 8),&unknown_var_9552_ptr), iVar8 == 0))
      {
        uVar27 = FUN_180103d30(extraout_XMM0_Da,7);
        FUN_180103970(uVar27,0);
      }
      else if (iVar9 == 5) {
        uVar25 = uVar18;
        do {
          uVar19 = uVar25;
          if (*(char *)(*(longlong *)(lStack_248 + 8) + uVar19) != (&unknown_var_9540_ptr)[uVar19])
          goto LAB_1801cb4f5;
          uVar25 = uVar19 + 1;
        } while (uVar19 + 1 != 6);
        uVar27 = FUN_180103d30(6,(int)uVar19 + -4);
        FUN_180103970(uVar27,0);
      }
      else {
LAB_1801cb4f5:
        if ((iVar9 == 8) &&
           (iVar9 = strcmp(*(uint64_t *)(lStack_248 + 8),&unknown_var_9776_ptr), iVar9 == 0)) {
          uVar27 = FUN_180103d30(extraout_XMM0_Da_00,3);
          FUN_180103970(uVar27,0);
        }
      }
    }
  }
  uStack_2c0 = 3;
  pppppppuStack_2e8 = &pppppppuStack_2e8;
  pppppppuStack_2e0 = &pppppppuStack_2e8;
  pppppppuStack_2d8 = (uint64_t *******)0x0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  puStack_2b8 = (uint64_t *)0x0;
  puStack_2b0 = (uint64_t *)0x0;
  puStack_2a8 = (uint64_t *)0x0;
  uStack_2a0 = 3;
  lVar24 = _DAT_180c86970 + 0x20;
  lVar13 = *(longlong *)(_DAT_180c86970 + 0x28);
  if (lVar13 != lVar24) {
    do {
      puVar23 = puStack_2b0;
      puVar11 = (uint64_t *)0x0;
      if (puStack_2b0 < puStack_2a8) {
        puStack_2b0 = puStack_2b0 + 4;
        FUN_180627ae0(puVar23,lVar13 + 0x20);
      }
      else {
        lVar20 = (longlong)puStack_2b0 - (longlong)puStack_2b8 >> 5;
        if (lVar20 == 0) {
          lVar20 = 1;
LAB_1801cb5d2:
          puVar11 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar20 << 5,(int8_t)uStack_2a0);
        }
        else {
          lVar20 = lVar20 * 2;
          if (lVar20 != 0) goto LAB_1801cb5d2;
        }
        lVar12 = FUN_180059780(puStack_2b8,puStack_2b0);
        FUN_180627ae0(lVar12,lVar13 + 0x20);
        puVar7 = puStack_2b0;
        for (puVar23 = puStack_2b8; puVar23 != puVar7; puVar23 = puVar23 + 4) {
          (**(code **)*puVar23)(puVar23,0);
        }
        if (puStack_2b8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puStack_2b8);
        }
        puStack_2a8 = puVar11 + lVar20 * 4;
        puStack_2b8 = puVar11;
        puStack_2b0 = (uint64_t *)(lVar12 + 0x20);
      }
      lVar13 = func_0x00018066bd70(lVar13);
    } while (lVar13 != lVar24);
    uVar18 = (ulonglong)uStack_394;
  }
  iStack_390 = 0;
  if ((longlong)puStack_2b0 - (longlong)puStack_2b8 >> 5 != 0) {
    do {
      iVar9 = iStack_390;
      FUN_1800c1520(_DAT_180c86970,&plStack_3a0);
      plStack_340 = (longlong *)0x0;
      plStack_338 = (longlong *)0x0;
      uStack_330 = 0;
      uStack_328 = 3;
      FUN_1802b5c40(plStack_3a0,&plStack_340);
      iStack_320 = 0;
      uVar25 = (longlong)plStack_338 - (longlong)plStack_340 >> 3;
      plVar26 = plStack_340;
      uStack_3b8 = uVar25;
      plVar21 = plStack_340;
      plVar3 = plStack_340;
      plVar4 = plStack_338;
      if (uVar25 != 0) {
        do {
          iVar9 = iStack_320;
          plVar21 = *(longlong **)(*plVar26 + 0x18);
          plStack_388 = plVar26;
          plStack_180 = plVar21;
          if (plVar21 != (longlong *)0x0) {
            (**(code **)(*plVar21 + 0x28))(plVar21);
          }
          uVar22 = (uint)uVar18 & 0xfffffffe;
          uStack_394 = uVar22;
          if (plVar21 != (longlong *)0x0) {
            (**(code **)(*plVar21 + 0x38))(plVar21);
            plVar21 = *(longlong **)(*plVar26 + 0x18);
            plStack_178 = plVar21;
            if (plVar21 != (longlong *)0x0) {
              (**(code **)(*plVar21 + 0x28))(plVar21);
            }
            lVar13 = plVar21[8];
            lVar24 = plVar21[7];
            uVar22 = (uint)uVar18 & 0xfffffffc;
            uStack_394 = uVar22;
            if (plVar21 != (longlong *)0x0) {
              (**(code **)(*plVar21 + 0x38))(plVar21);
            }
            uVar25 = uStack_3b8;
            iVar9 = iStack_320;
            if (lVar13 - lVar24 >> 4 != 0) {
              plVar21 = *(longlong **)(*plVar26 + 0x18);
              plStack_170 = plVar21;
              if (plVar21 != (longlong *)0x0) {
                (**(code **)(*plVar21 + 0x28))(plVar21);
              }
              uStack_394 = uVar22 | 4;
              uVar14 = FUN_180079430(*(uint64_t *)plVar21[7]);
              lVar13 = FUN_18062b420(_DAT_180c8ed18,0x40,(int8_t)uStack_2c0);
              puVar23 = (uint64_t *)(lVar13 + 0x20);
              FUN_1806279c0(puVar23,uVar14);
              lStack_240 = lVar13;
              bVar2 = true;
              pppppppuVar5 = &pppppppuStack_2e8;
              pppppppuVar15 = pppppppuStack_2d8;
              goto joined_r0x0001801cb832;
            }
          }
          uVar18 = (ulonglong)uVar22;
          lVar13 = *(longlong *)(*plVar26 + 0x10);
          if (lVar13 != 0) {
            lVar24 = FUN_18062b420(_DAT_180c8ed18,0x40,(int8_t)uStack_2c0);
            puVar23 = (uint64_t *)(lVar24 + 0x20);
            FUN_1806279c0(puVar23,lVar13 + 0x10);
            lStack_240 = lVar24;
            bVar2 = true;
            pppppppuVar5 = &pppppppuStack_2e8;
            pppppppuVar15 = pppppppuStack_2d8;
            goto joined_r0x0001801cb9fe;
          }
          iStack_320 = iVar9 + 1;
          plStack_388 = plVar26 + 1;
          plVar26 = plStack_388;
          plVar21 = plStack_340;
          plVar3 = plStack_340;
          plVar4 = plStack_338;
          iVar9 = iStack_390;
        } while ((ulonglong)(longlong)iStack_320 < uVar25);
      }
      for (; plVar6 = plStack_338, plVar26 = plStack_340, plVar21 != plStack_338;
          plVar21 = plVar21 + 1) {
        plStack_340 = plVar3;
        plStack_338 = plVar4;
        if ((longlong *)*plVar21 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar21 + 0x38))();
        }
        plVar3 = plStack_340;
        plVar4 = plStack_338;
        plStack_338 = plVar6;
        plStack_340 = plVar26;
      }
      if (plStack_340 != (longlong *)0x0) {
        plStack_340 = plVar3;
        plStack_338 = plVar4;
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar26);
      }
      plStack_340 = plVar3;
      plStack_338 = plVar4;
      if (plStack_3a0 != (longlong *)0x0) {
        (**(code **)(*plStack_3a0 + 0x38))();
      }
      iStack_390 = iVar9 + 1;
    } while ((ulonglong)(longlong)iStack_390 <
             (ulonglong)((longlong)puStack_2b0 - (longlong)puStack_2b8 >> 5));
  }
  uVar25 = 0;
  uStack_2f0 = 3;
  pppppppuStack_308 = (uint64_t *******)0x0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  plStack_340 = (longlong *)0x0;
  plStack_338 = (longlong *)0x0;
  uStack_330 = 0;
  uStack_328 = 3;
  iVar9 = (int)(*(longlong *)(_DAT_180c86978 + 0xd0) - *(longlong *)(_DAT_180c86978 + 200) >> 3);
  uVar18 = uVar25;
  pppppppuStack_318 = &pppppppuStack_318;
  pppppppuStack_310 = &pppppppuStack_318;
  if (0 < iVar9) {
    do {
      iVar8 = (int)uVar18;
      if (iVar8 < 0) {
        iVar10 = 0;
      }
      else {
        uVar18 = *(longlong *)(_DAT_180c86978 + 0xd0) - *(longlong *)(_DAT_180c86978 + 200) >> 3;
        iVar10 = iVar8;
        if (uVar25 == uVar18) {
          iVar10 = (int)uVar18 + -1;
        }
      }
      plVar21 = (longlong *)
                (*(longlong *)(*(longlong *)(_DAT_180c86978 + 200) + (longlong)iVar10 * 8) + 0x68);
      lVar13 = 4;
      do {
        uVar18 = 0;
        lVar24 = *plVar21;
        if ((int)(*(longlong *)(lVar24 + 0x10) - *(longlong *)(lVar24 + 8) >> 3) != 0) {
          do {
            (**(code **)(**(longlong **)
                           (*(longlong *)
                             (*(longlong *)(lVar24 + 8) +
                             (uVar18 % (ulonglong)
                                       (*(longlong *)(lVar24 + 0x10) - *(longlong *)(lVar24 + 8) >>
                                       3)) * 8) + 0x28) + 0x170))();
            uVar22 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar22;
          } while (uVar22 < (uint)(*(longlong *)(lVar24 + 0x10) - *(longlong *)(lVar24 + 8) >> 3));
        }
        plVar21 = plVar21 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      uVar18 = (ulonglong)(iVar8 + 1U);
      uVar25 = uVar25 + 1;
    } while ((int)(iVar8 + 1U) < iVar9);
  }
  uVar14 = 0;
  if ((longlong)plStack_338 - (longlong)plStack_340 >> 3 == 0) {
    lVar13 = FUN_18062b420(_DAT_180c8ed18,0x40,(int8_t)uStack_2f0);
    puVar23 = (uint64_t *)(lVar13 + 0x20);
    FUN_180627910(puVar23,&unknown_var_920_ptr);
    bVar2 = true;
    pppppppuVar5 = &pppppppuStack_318;
    pppppppuVar15 = pppppppuStack_308;
    while (pppppppuVar15 != (uint64_t *******)0x0) {
      pppppppuVar5 = pppppppuVar15;
      if (*(int *)(pppppppuVar15 + 6) == 0) {
        bVar2 = false;
LAB_1801cbf40:
        pppppppuVar15 = (uint64_t *******)*pppppppuVar15;
      }
      else {
        if (*(int *)(lVar13 + 0x30) == 0) {
          bVar2 = true;
        }
        else {
          ppppppuVar17 = pppppppuVar15[5];
          lVar24 = *(longlong *)(lVar13 + 0x28) - (longlong)ppppppuVar17;
          do {
            bVar1 = *(byte *)ppppppuVar17;
            uVar22 = (uint)*(byte *)((longlong)ppppppuVar17 + lVar24);
            if (bVar1 != uVar22) break;
            ppppppuVar17 = (uint64_t ******)((longlong)ppppppuVar17 + 1);
          } while (uVar22 != 0);
          bVar2 = 0 < (int)(bVar1 - uVar22);
        }
        if (!bVar2) goto LAB_1801cbf40;
        pppppppuVar15 = (uint64_t *******)pppppppuVar15[1];
      }
    }
    pppppppuVar15 = pppppppuVar5;
    puStack_3b0 = (uint64_t *)lVar13;
    if (bVar2) {
      if (pppppppuVar5 != pppppppuStack_310) {
        pppppppuVar15 = (uint64_t *******)func_0x00018066b9a0(pppppppuVar5);
        goto LAB_1801cbf60;
      }
    }
    else {
LAB_1801cbf60:
      if (*(int *)(lVar13 + 0x30) == 0) {
LAB_1801cc043:
        *puVar23 = &unknown_var_3456_ptr;
        puStack_3b0 = puVar23;
        if (*(longlong *)(lVar13 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)(lVar13 + 0x28) = 0;
        *(int32_t *)(lVar13 + 0x38) = 0;
        *puVar23 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar13);
      }
      if (*(int *)(pppppppuVar15 + 6) != 0) {
        pbVar16 = *(byte **)(lVar13 + 0x28);
        lVar24 = (longlong)pppppppuVar15[5] - (longlong)pbVar16;
        do {
          bVar1 = *pbVar16;
          uVar22 = (uint)pbVar16[lVar24];
          if (bVar1 != uVar22) break;
          pbVar16 = pbVar16 + 1;
        } while (uVar22 != 0);
        if ((int)(bVar1 - uVar22) < 1) goto LAB_1801cc043;
      }
    }
    if ((uint64_t ********)pppppppuVar5 == &pppppppuStack_318) goto LAB_1801cc020;
    if (*(int *)(pppppppuVar5 + 6) != 0) {
      if (*(int *)(lVar13 + 0x30) == 0) goto LAB_1801cc020;
      ppppppuVar17 = pppppppuVar5[5];
      lVar24 = *(longlong *)(lVar13 + 0x28) - (longlong)ppppppuVar17;
      do {
        bVar1 = *(byte *)ppppppuVar17;
        uVar22 = (uint)*(byte *)((longlong)ppppppuVar17 + lVar24);
        if (bVar1 != uVar22) break;
        ppppppuVar17 = (uint64_t ******)((longlong)ppppppuVar17 + 1);
      } while (uVar22 != 0);
      if (0 < (int)(bVar1 - uVar22)) goto LAB_1801cc020;
    }
    uVar14 = 1;
LAB_1801cc020:
                    // WARNING: Subroutine does not return
    FUN_18066bdc0(lVar13,pppppppuVar5,&pppppppuStack_318,uVar14);
  }
  lVar13 = *(longlong *)(*plStack_340 + 0x1b8);
  lVar24 = FUN_18062b420(_DAT_180c8ed18,0x40,(int8_t)uStack_2f0);
  puVar23 = (uint64_t *)(lVar24 + 0x20);
  FUN_1806279c0(puVar23,lVar13 + 0x10);
  bVar2 = true;
  pppppppuVar5 = &pppppppuStack_318;
  pppppppuVar15 = pppppppuStack_308;
  while (pppppppuVar15 != (uint64_t *******)0x0) {
    pppppppuVar5 = pppppppuVar15;
    if (*(int *)(pppppppuVar15 + 6) == 0) {
      bVar2 = false;
LAB_1801cbda0:
      pppppppuVar15 = (uint64_t *******)*pppppppuVar15;
    }
    else {
      if (*(int *)(lVar24 + 0x30) == 0) {
        bVar2 = true;
      }
      else {
        ppppppuVar17 = pppppppuVar15[5];
        lVar13 = *(longlong *)(lVar24 + 0x28) - (longlong)ppppppuVar17;
        do {
          bVar1 = *(byte *)ppppppuVar17;
          uVar22 = (uint)*(byte *)((longlong)ppppppuVar17 + lVar13);
          if (bVar1 != uVar22) break;
          ppppppuVar17 = (uint64_t ******)((longlong)ppppppuVar17 + 1);
        } while (uVar22 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar22);
      }
      if (!bVar2) goto LAB_1801cbda0;
      pppppppuVar15 = (uint64_t *******)pppppppuVar15[1];
    }
  }
  pppppppuVar15 = pppppppuVar5;
  puStack_3b0 = (uint64_t *)lVar24;
  if (bVar2) {
    if (pppppppuVar5 != pppppppuStack_310) {
      pppppppuVar15 = (uint64_t *******)func_0x00018066b9a0(pppppppuVar5);
      goto LAB_1801cbdc0;
    }
  }
  else {
LAB_1801cbdc0:
    if (*(int *)(lVar24 + 0x30) == 0) {
LAB_1801cbe95:
      *puVar23 = &unknown_var_3456_ptr;
      puStack_238 = puVar23;
      if (*(longlong *)(lVar24 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar24 + 0x28) = 0;
      *(int32_t *)(lVar24 + 0x38) = 0;
      *puVar23 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar24);
    }
    if (*(int *)(pppppppuVar15 + 6) != 0) {
      pbVar16 = *(byte **)(lVar24 + 0x28);
      lVar13 = (longlong)pppppppuVar15[5] - (longlong)pbVar16;
      do {
        bVar1 = *pbVar16;
        uVar22 = (uint)pbVar16[lVar13];
        if (bVar1 != uVar22) break;
        pbVar16 = pbVar16 + 1;
      } while (uVar22 != 0);
      if ((int)(bVar1 - uVar22) < 1) goto LAB_1801cbe95;
    }
  }
  if ((uint64_t ********)pppppppuVar5 == &pppppppuStack_318) goto LAB_1801cbe80;
  if (*(int *)(pppppppuVar5 + 6) != 0) {
    if (*(int *)(lVar24 + 0x30) == 0) goto LAB_1801cbe80;
    ppppppuVar17 = pppppppuVar5[5];
    lVar13 = *(longlong *)(lVar24 + 0x28) - (longlong)ppppppuVar17;
    do {
      bVar1 = *(byte *)ppppppuVar17;
      uVar22 = (uint)*(byte *)((longlong)ppppppuVar17 + lVar13);
      if (bVar1 != uVar22) break;
      ppppppuVar17 = (uint64_t ******)((longlong)ppppppuVar17 + 1);
    } while (uVar22 != 0);
    if (0 < (int)(bVar1 - uVar22)) goto LAB_1801cbe80;
  }
  uVar14 = 1;
LAB_1801cbe80:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar24,pppppppuVar5,&pppppppuStack_318,uVar14);
joined_r0x0001801cb832:
  if (pppppppuVar15 != (uint64_t *******)0x0) {
    pppppppuVar5 = pppppppuVar15;
    if (*(int *)(pppppppuVar15 + 6) == 0) {
      bVar2 = false;
LAB_1801cb850:
      pppppppuVar15 = (uint64_t *******)*pppppppuVar15;
    }
    else {
      if (*(int *)(lVar13 + 0x30) == 0) {
        bVar2 = true;
      }
      else {
        ppppppuVar17 = pppppppuVar15[5];
        lVar24 = *(longlong *)(lVar13 + 0x28) - (longlong)ppppppuVar17;
        do {
          bVar1 = *(byte *)ppppppuVar17;
          uVar22 = (uint)*(byte *)((longlong)ppppppuVar17 + lVar24);
          if (bVar1 != uVar22) break;
          ppppppuVar17 = (uint64_t ******)((longlong)ppppppuVar17 + 1);
        } while (uVar22 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar22);
      }
      if (!bVar2) goto LAB_1801cb850;
      pppppppuVar15 = (uint64_t *******)pppppppuVar15[1];
    }
    goto joined_r0x0001801cb832;
  }
  pppppppuVar15 = pppppppuVar5;
  if (bVar2) {
    if (pppppppuVar5 != pppppppuStack_2e0) {
      pppppppuVar15 = (uint64_t *******)func_0x00018066b9a0(pppppppuVar5);
      goto LAB_1801cb870;
    }
  }
  else {
LAB_1801cb870:
    if (*(int *)(lVar13 + 0x30) == 0) {
LAB_1801cb947:
      *puVar23 = &unknown_var_3456_ptr;
      puStack_238 = puVar23;
      if (*(longlong *)(lVar13 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar13 + 0x28) = 0;
      *(int32_t *)(lVar13 + 0x38) = 0;
      *puVar23 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar13);
    }
    if (*(int *)(pppppppuVar15 + 6) != 0) {
      pbVar16 = *(byte **)(lVar13 + 0x28);
      lVar24 = (longlong)pppppppuVar15[5] - (longlong)pbVar16;
      do {
        bVar1 = *pbVar16;
        uVar22 = (uint)pbVar16[lVar24];
        if (bVar1 != uVar22) break;
        pbVar16 = pbVar16 + 1;
      } while (uVar22 != 0);
      if ((int)(bVar1 - uVar22) < 1) goto LAB_1801cb947;
    }
  }
  if ((uint64_t ********)pppppppuVar5 != &pppppppuStack_2e8) {
    if (*(int *)(pppppppuVar5 + 6) == 0) {
LAB_1801cb8e7:
      uVar14 = 1;
      goto LAB_1801cb932;
    }
    if (*(int *)(lVar13 + 0x30) != 0) {
      ppppppuVar17 = pppppppuVar5[5];
      lVar24 = *(longlong *)(lVar13 + 0x28) - (longlong)ppppppuVar17;
      do {
        bVar1 = *(byte *)ppppppuVar17;
        uVar22 = (uint)*(byte *)((longlong)ppppppuVar17 + lVar24);
        if (bVar1 != uVar22) break;
        ppppppuVar17 = (uint64_t ******)((longlong)ppppppuVar17 + 1);
      } while (uVar22 != 0);
      if ((int)(bVar1 - uVar22) < 1) goto LAB_1801cb8e7;
    }
  }
  uVar14 = 0;
LAB_1801cb932:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar13,pppppppuVar5,&pppppppuStack_2e8,uVar14);
joined_r0x0001801cb9fe:
  if (pppppppuVar15 != (uint64_t *******)0x0) {
    pppppppuVar5 = pppppppuVar15;
    if (*(int *)(pppppppuVar15 + 6) == 0) {
      bVar2 = false;
LAB_1801cba10:
      pppppppuVar15 = (uint64_t *******)*pppppppuVar15;
    }
    else {
      if (*(int *)(lVar24 + 0x30) == 0) {
        bVar2 = true;
      }
      else {
        ppppppuVar17 = pppppppuVar15[5];
        lVar13 = *(longlong *)(lVar24 + 0x28) - (longlong)ppppppuVar17;
        do {
          bVar1 = *(byte *)ppppppuVar17;
          uVar22 = (uint)*(byte *)((longlong)ppppppuVar17 + lVar13);
          if (bVar1 != uVar22) break;
          ppppppuVar17 = (uint64_t ******)((longlong)ppppppuVar17 + 1);
        } while (uVar22 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar22);
      }
      if (!bVar2) goto LAB_1801cba10;
      pppppppuVar15 = (uint64_t *******)pppppppuVar15[1];
    }
    goto joined_r0x0001801cb9fe;
  }
  pppppppuVar15 = pppppppuVar5;
  if (bVar2) {
    if (pppppppuVar5 != pppppppuStack_2e0) {
      pppppppuVar15 = (uint64_t *******)func_0x00018066b9a0(pppppppuVar5);
      goto LAB_1801cba30;
    }
  }
  else {
LAB_1801cba30:
    if (*(int *)(lVar24 + 0x30) == 0) {
LAB_1801cbb07:
      *puVar23 = &unknown_var_3456_ptr;
      puStack_3b0 = puVar23;
      if (*(longlong *)(lVar24 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar24 + 0x28) = 0;
      *(int32_t *)(lVar24 + 0x38) = 0;
      *puVar23 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar24);
    }
    if (*(int *)(pppppppuVar15 + 6) != 0) {
      pbVar16 = *(byte **)(lVar24 + 0x28);
      lVar13 = (longlong)pppppppuVar15[5] - (longlong)pbVar16;
      do {
        bVar1 = *pbVar16;
        uVar22 = (uint)pbVar16[lVar13];
        if (bVar1 != uVar22) break;
        pbVar16 = pbVar16 + 1;
      } while (uVar22 != 0);
      if ((int)(bVar1 - uVar22) < 1) goto LAB_1801cbb07;
    }
  }
  if ((uint64_t ********)pppppppuVar5 != &pppppppuStack_2e8) {
    if (*(int *)(pppppppuVar5 + 6) == 0) {
LAB_1801cbaa7:
      uVar14 = 1;
      goto LAB_1801cbaf2;
    }
    if (*(int *)(lVar24 + 0x30) != 0) {
      ppppppuVar17 = pppppppuVar5[5];
      lVar13 = *(longlong *)(lVar24 + 0x28) - (longlong)ppppppuVar17;
      do {
        bVar1 = *(byte *)ppppppuVar17;
        uVar22 = (uint)*(byte *)((longlong)ppppppuVar17 + lVar13);
        if (bVar1 != uVar22) break;
        ppppppuVar17 = (uint64_t ******)((longlong)ppppppuVar17 + 1);
      } while (uVar22 != 0);
      if ((int)(bVar1 - uVar22) < 1) goto LAB_1801cbaa7;
    }
  }
  uVar14 = 0;
LAB_1801cbaf2:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar24,pppppppuVar5,&pppppppuStack_2e8,uVar14);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




