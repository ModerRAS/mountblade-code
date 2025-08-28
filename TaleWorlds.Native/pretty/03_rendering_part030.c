#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part030.c - 4 个函数

// 函数: void FUN_180282110(longlong ******param_1,longlong *******param_2)
void FUN_180282110(longlong ******param_1,longlong *******param_2)

{
  longlong *****ppppplVar1;
  longlong *****ppppplVar2;
  longlong ****pppplVar3;
  longlong ***ppplVar4;
  int32_t uVar5;
  longlong *******ppppppplVar6;
  longlong lVar7;
  longlong *******ppppppplVar8;
  uint64_t uVar9;
  longlong *******ppppppplVar10;
  longlong **pplVar11;
  longlong ******pppppplVar12;
  void *puVar13;
  longlong ***ppplVar14;
  longlong *****ppppplVar15;
  longlong **pplVar16;
  longlong *******ppppppplVar17;
  int iVar18;
  longlong **pplVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  int32_t uVar24;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  longlong *******ppppppplStackX_10;
  longlong *******ppppppplStackX_18;
  longlong *******ppppppplStackX_20;
  longlong lStack_c8;
  longlong *******ppppppplStack_b8;
  int iStack_b0;
  longlong *******ppppppplStack_a8;
  longlong **pplStack_a0;
  longlong *******ppppppplStack_98;
  longlong *******ppppppplStack_90;
  longlong *******ppppppplStack_88;
  longlong *******ppppppplStack_80;
  longlong *******ppppppplStack_78;
  longlong *******ppppppplStack_70;
  uint uStack_68;
  uint64_t uStack_60;
  longlong *******ppppppplStack_58;
  
  uStack_60 = 0xfffffffffffffffe;
  ppppppplVar8 = (longlong *******)param_1[6][4];
  pppppplVar12 = (longlong ******)&system_buffer_ptr;
  if (ppppppplVar8[3] != (longlong ******)0x0) {
    pppppplVar12 = ppppppplVar8[3];
  }
  ppppppplStackX_10 = param_2;
  ppppppplStackX_20 = ppppppplVar8;
  (*(code *)param_1[0x10][2])(param_1 + 0x10,pppppplVar12);
  *(int32_t *)(param_1 + 0xd) = *(int32_t *)(ppppppplVar8 + 1);
  uVar24 = (*(code *)param_1[0x23][2])(param_1 + 0x23);
  *(int32_t *)(param_1[0x79] + 5) = *(int32_t *)(ppppppplVar8 + 0xe);
  if (((ppppppplVar8[6] != (longlong ******)0x0) || (ppppppplVar8[7] != (longlong ******)0x0)) &&
     (lVar7 = FUN_180255f80(param_1[6]), uVar24 = extraout_XMM0_Da, lVar7 != 0)) {
    uVar24 = (*(code *)param_1[0x23][2])(param_1 + 0x23);
  }
  lVar7 = (longlong)param_1[8] - (longlong)param_1[7] >> 4;
  uStack_68 = *(uint *)(param_1 + 10);
  if (lVar7 == 0) {
    ppppppplVar8 = (longlong *******)0x0;
  }
  else {
    ppppppplVar8 = (longlong *******)FUN_18062b420(_DAT_180c8ed18,lVar7 << 4,uStack_68 & 0xff);
    uVar24 = extraout_XMM0_Da_00;
  }
  ppppppplStack_70 = ppppppplVar8 + lVar7 * 2;
  ppppplVar1 = param_1[8];
  ppppplVar2 = param_1[7];
  ppppppplVar17 = ppppppplVar8;
  ppppppplStack_80 = ppppppplVar8;
  ppppppplStack_78 = ppppppplVar8;
  for (ppppplVar15 = ppppplVar2; ppppplVar15 != ppppplVar1; ppppplVar15 = ppppplVar15 + 2) {
    pppppplVar12 = (longlong ******)*ppppplVar15;
    *ppppppplVar17 = pppppplVar12;
    ppppppplStackX_10 = ppppppplVar17;
    if (pppppplVar12 != (longlong ******)0x0) {
      uVar24 = (*(code *)(*pppppplVar12)[5])();
    }
    *(int32_t *)((longlong)ppppplVar15 + (longlong)ppppppplVar8 + (8 - (longlong)ppppplVar2)) =
         *(int32_t *)(ppppplVar15 + 1);
    ppppppplVar17 = ppppppplVar17 + 2;
  }
  ppppppplStack_78 = ppppppplVar17;
  if ((*(char *)((longlong)param_1 + 0x322) != '\0') && (*(char *)param_1[6][0x11][1] == '\0')) {
    iVar18 = 0;
    uVar21 = (longlong)ppppppplVar17 - (longlong)ppppppplVar8 >> 4;
    ppppppplVar10 = ppppppplVar8;
    if (uVar21 != 0) {
      do {
        ppppppplStackX_18 = (longlong *******)&ppppppplStackX_10;
        ppppppplStackX_10 = (longlong *******)*ppppppplVar10;
        if (ppppppplStackX_10 != (longlong *******)0x0) {
          uVar24 = (*(code *)(*ppppppplStackX_10)[5])();
        }
        uVar24 = FUN_1800b55b0(uVar24,&ppppppplStackX_10);
        iVar18 = iVar18 + 1;
        ppppppplVar10 = ppppppplVar10 + 2;
      } while ((ulonglong)(longlong)iVar18 < uVar21);
    }
  }
  FUN_180284500(param_1 + 7);
  *(int32_t *)(param_1 + 0xb) = 0;
  ppppplVar1 = param_1[5];
  if ((ppppplVar1 != (longlong *****)0x0) &&
     (*(short *)(ppppplVar1 + 0x56) = *(short *)(ppppplVar1 + 0x56) + 1,
     ppppplVar1[0x2d] != (longlong ****)0x0)) {
    func_0x0001802eeba0();
  }
  lVar7 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) *
                 SEXT816((longlong)ppppppplStackX_20[9] - (longlong)ppppppplStackX_20[8]),8) +
          ((longlong)ppppppplStackX_20[9] - (longlong)ppppppplStackX_20[8]);
  lVar23 = (longlong)(int)((longlong)ppppppplVar17 - (longlong)ppppppplVar8 >> 4);
  lVar7 = (longlong)((int)((ulonglong)lVar7 >> 8) - (int)(lVar7 >> 0x3f));
  if (0 < lVar7) {
    lStack_c8 = 0;
    ppppppplVar10 = ppppppplStackX_20;
    do {
      pplVar19 = (longlong **)0x0;
      plVar22 = (longlong *)((longlong)ppppppplVar10[8] + lStack_c8);
      if ((char)plVar22[0x2a] != '\0') {
        pplVar11 = pplVar19;
        ppppppplVar10 = ppppppplVar8;
        pplVar16 = (longlong **)0xffffffffffffffff;
        if (0 < lVar23) {
          do {
            if (((*ppppppplVar10)[0x17] == (longlong *****)*plVar22) &&
               (pplVar16 = pplVar11, (*ppppppplVar10)[0x18] == (longlong *****)plVar22[1])) break;
            pplVar11 = (longlong **)((longlong)pplVar11 + 1);
            ppppppplVar10 = ppppppplVar10 + 2;
            pplVar16 = (longlong **)0xffffffffffffffff;
          } while ((longlong)pplVar11 < lVar23);
        }
        ppppppplStackX_18 = (longlong *******)0x0;
        if (pplVar16 == (longlong **)0xffffffffffffffff) {
          uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10);
          ppppppplVar10 = (longlong *******)FUN_180075030(uVar9,0,1);
          if (ppppppplVar10 != (longlong *******)0x0) {
            ppppppplStack_a8 = ppppppplVar10;
            (*(code *)(*ppppppplVar10)[5])(ppppppplVar10);
          }
          ppppppplStack_a8 = (longlong *******)0x0;
          puVar13 = &system_buffer_ptr;
          if ((void *)plVar22[3] != (void *)0x0) {
            puVar13 = (void *)plVar22[3];
          }
          ppppppplStackX_18 = ppppppplVar10;
          (*(code *)ppppppplVar10[2][2])(ppppppplVar10 + 2,puVar13);
          uVar24 = *(int32_t *)((longlong)plVar22 + 4);
          lVar20 = plVar22[1];
          uVar5 = *(int32_t *)((longlong)plVar22 + 0xc);
          *(int *)(ppppppplVar10 + 0x17) = (int)*plVar22;
          *(int32_t *)((longlong)ppppppplVar10 + 0xbc) = uVar24;
          *(int *)(ppppppplVar10 + 0x18) = (int)lVar20;
          *(int32_t *)((longlong)ppppppplVar10 + 0xc4) = uVar5;
          if (*(char *)((longlong)param_1 + 0x322) == '\0') {
            iVar18 = 0;
            lVar20 = 0;
            pppplVar3 = param_1[6][0x16];
            ppplVar4 = pppplVar3[7];
            ppplVar14 = ppplVar4;
            if ((longlong)pppplVar3[8] - (longlong)ppplVar4 >> 4 != 0) {
              do {
                if (((*ppplVar14)[0x17] == (longlong *)*plVar22) &&
                   ((*ppplVar14)[0x18] == (longlong *)plVar22[1])) {
                  pplVar19 = ppplVar4[lVar20 * 2];
                  break;
                }
                iVar18 = iVar18 + 1;
                lVar20 = lVar20 + 1;
                ppplVar14 = ppplVar14 + 2;
              } while ((ulonglong)(longlong)iVar18 <
                       (ulonglong)((longlong)pppplVar3[8] - (longlong)ppplVar4 >> 4));
            }
            pplStack_a0 = pplVar19;
            if (pplVar19 != (longlong **)0x0) {
              (*(code *)(*pplVar19)[5])(pplVar19);
            }
            FUN_180075990(ppppppplVar10,&pplStack_a0);
            if (pplVar19 != (longlong **)0x0) {
              (*(code *)(*pplVar19)[7])(pplVar19);
            }
          }
        }
        else {
          ppppppplVar10 = (longlong *******)ppppppplVar8[(longlong)pplVar16 * 2];
          if (ppppppplVar10 != (longlong *******)0x0) {
            ppppppplStack_98 = ppppppplVar10;
            (*(code *)(*ppppppplVar10)[5])(ppppppplVar10);
          }
          ppppppplStack_98 = (longlong *******)0x0;
          ppppppplStackX_18 = ppppppplVar10;
          FUN_180079520(ppppppplVar10);
        }
        ppppppplVar10[0x15] = (longlong ******)param_1[6];
        lVar20 = _DAT_180c86930;
        if ((*(char *)((longlong)param_1 + 0x322) != '\0') && (*(char *)param_1[6][0x11][1] == '\0')
           ) {
          iVar18 = (*(code *)(*ppppppplVar10)[0xc])(ppppppplVar10);
          *(int8_t *)((longlong)ppppppplVar10 + 0xb2) = 1;
          FUN_1802abe00((longlong)iVar18 * 0x98 + lVar20 + 8,ppppppplVar10);
        }
        FUN_18007bbb0(ppppppplVar10,0,plVar22);
        ppppppplStack_58 = (longlong *******)&ppppppplStackX_10;
        ppppppplStackX_10 = ppppppplVar10;
        (*(code *)(*ppppppplVar10)[5])(ppppppplVar10);
        ppppppplVar6 = ppppppplStackX_10;
        ppppppplStack_88 = (longlong *******)&ppppppplStackX_10;
        lVar20 = plVar22[0x2d];
        ppppppplStack_b8 = (longlong *******)0x0;
        ppppppplStack_90 = ppppppplStackX_10;
        if (ppppppplStackX_10 != (longlong *******)0x0) {
          (*(code *)(*ppppppplStackX_10)[5])(ppppppplStackX_10);
        }
        ppppppplStack_90 = (longlong *******)0x0;
        ppppppplStack_b8 = ppppppplVar6;
        iStack_b0 = 1 << ((byte)(int)lVar20 & 0x1f);
        FUN_1802842e0(param_1 + 7,&ppppppplStack_b8);
        ppppppplStackX_10[0x39] = param_1;
        iVar18 = (int)lVar20 + 1;
        if (*(int *)(param_1 + 0xb) < iVar18) {
          *(int *)(param_1 + 0xb) = iVar18;
        }
        if (ppppppplStack_b8 != (longlong *******)0x0) {
          (*(code *)(*ppppppplStack_b8)[7])();
        }
        if (ppppppplStackX_10 != (longlong *******)0x0) {
          (*(code *)(*ppppppplStackX_10)[7])();
        }
        (*(code *)(*ppppppplVar10)[7])(ppppppplVar10);
        ppppppplVar10 = ppppppplStackX_20;
      }
      lStack_c8 = lStack_c8 + 0x170;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  lVar7 = 0;
  iVar18 = (int)((longlong)param_1[8] - (longlong)param_1[7] >> 4);
  lVar23 = (longlong)iVar18;
  if (0 < iVar18) {
    ppppppplStackX_20 = (longlong *******)&ppppppplStackX_10;
    do {
      ppppppplStack_88 = (longlong *******)&ppppppplStackX_10;
      ppppppplStackX_10 = (longlong *******)0x0;
      ppppppplStackX_18 = *(longlong ********)(*(longlong *)(lVar7 + (longlong)param_1[7]) + 0x118);
      *(uint64_t *)(*(longlong *)(lVar7 + (longlong)param_1[7]) + 0x118) = 0;
      if (ppppppplStackX_18 != (longlong *******)0x0) {
        (*(code *)(*ppppppplStackX_18)[7])();
      }
      if (ppppppplStackX_10 != (longlong *******)0x0) {
        (*(code *)(*ppppppplStackX_10)[7])();
      }
      *(int8_t *)(*(longlong *)(lVar7 + (longlong)param_1[7]) + 0x2e9) = 0;
      *(int8_t *)(*(longlong *)(lVar7 + (longlong)param_1[7]) + 0x2f9) = 0;
      lVar7 = lVar7 + 0x10;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  *(int *)(param_1[0x79] + 2) = *(int *)(param_1[0x79] + 2) + 1;
  FUN_180278270(param_1);
  ppppppplVar10 = ppppppplVar8;
  if ((*param_1)[0x2c] == (longlong ****)&unknown_var_6368_ptr) {
    FUN_180276f30(param_1,(longlong)param_1 + 0x214,0);
  }
  else {
    (*(code *)(*param_1)[0x2c])(param_1);
  }
  for (; ppppppplStackX_10 = ppppppplVar10, ppppppplVar10 != ppppppplVar17;
      ppppppplVar10 = ppppppplVar10 + 2) {
    if (*ppppppplVar10 != (longlong ******)0x0) {
      (*(code *)(**ppppppplVar10)[7])();
    }
  }
  if (ppppppplVar8 == (longlong *******)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(ppppppplVar8);
}



uint64_t FUN_1802828a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar3 = (longlong *)param_1[7];
  iVar4 = 0;
  uVar2 = param_1[8] - (longlong)plVar3 >> 4;
  if (uVar2 != 0) {
    do {
      if (*plVar3 == param_2) {
        *(uint64_t *)(param_2 + 0x1c8) = 0;
        FUN_180284450(param_1 + 7,(longlong)iVar4 * 0x10 + param_1[7]);
        if (*(code **)(*param_1 + 0x160) == (code *)&unknown_var_6368_ptr) {
          FUN_180276f30(param_1,(longlong)param_1 + 0x214,0);
        }
        else {
          (**(code **)(*param_1 + 0x160))(param_1);
        }
        lVar1 = param_1[5];
        if (lVar1 != 0) {
          *(short *)(lVar1 + 0x2b0) = *(short *)(lVar1 + 0x2b0) + 1;
          if (*(longlong *)(lVar1 + 0x168) != 0) {
            func_0x0001802eeba0();
          }
        }
        return 1;
      }
      iVar4 = iVar4 + 1;
      plVar3 = plVar3 + 2;
    } while ((ulonglong)(longlong)iVar4 < uVar2);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802829c0(longlong param_1,longlong *param_2)
void FUN_1802829c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  void *puVar3;
  int32_t uVar4;
  uint uVar5;
  void *puVar6;
  int8_t auStack_1c8 [32];
  uint uStack_1a8;
  longlong *plStack_1a0;
  longlong **pplStack_198;
  uint64_t uStack_190;
  longlong *plStack_188;
  longlong **pplStack_180;
  void *puStack_178;
  void *puStack_170;
  int32_t uStack_168;
  uint8_t auStack_160 [136];
  void *puStack_d8;
  void *puStack_d0;
  int32_t uStack_c8;
  uint8_t auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_190 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1c8;
  uStack_1a8 = 0;
  lVar1 = *(longlong *)(param_1 + 0x3c8);
  pplStack_198 = &plStack_1a0;
  plStack_1a0 = (longlong *)*param_2;
  plStack_188 = param_2;
  if (plStack_1a0 != (longlong *)0x0) {
    (**(code **)(*plStack_1a0 + 0x28))();
  }
  plVar2 = plStack_1a0;
  pplStack_180 = &plStack_1a0;
  if (*(longlong **)(lVar1 + 0x18) != plStack_1a0) {
    pplStack_198 = (longlong **)plStack_1a0;
    if (plStack_1a0 != (longlong *)0x0) {
      (**(code **)(*plStack_1a0 + 0x28))(plStack_1a0);
    }
    pplStack_198 = *(longlong ***)(lVar1 + 0x18);
    *(longlong **)(lVar1 + 0x18) = plVar2;
    if (pplStack_198 != (longlong **)0x0) {
      (*(code *)(*pplStack_198)[7])();
    }
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
  }
  if (plStack_1a0 != (longlong *)0x0) {
    (**(code **)(*plStack_1a0 + 0x38))();
  }
  lVar1 = *param_2;
  if (lVar1 == 0) {
    puStack_178 = &unknown_var_3432_ptr;
    puStack_170 = auStack_160;
    auStack_160[0] = 0;
    uStack_168 = 0;
    strcpy_s(auStack_160,0x80,&system_buffer_ptr);
    uVar5 = 2;
    uStack_1a8 = 2;
    puVar3 = puStack_170;
    uVar4 = uStack_168;
  }
  else {
    puStack_d8 = &unknown_var_3432_ptr;
    puStack_d0 = auStack_c0;
    auStack_c0[0] = 0;
    uStack_c8 = *(int32_t *)(lVar1 + 0x48);
    puVar3 = &system_buffer_ptr;
    if (*(void **)(lVar1 + 0x40) != (void *)0x0) {
      puVar3 = *(void **)(lVar1 + 0x40);
    }
    strcpy_s(auStack_c0,0x80,puVar3);
    uVar5 = 1;
    uStack_1a8 = 1;
    puVar3 = puStack_d0;
    uVar4 = uStack_c8;
  }
  *(int32_t *)(param_1 + 0x90) = uVar4;
  puVar6 = &system_buffer_ptr;
  if (puVar3 != (void *)0x0) {
    puVar6 = puVar3;
  }
  strcpy_s(*(uint64_t *)(param_1 + 0x88),0x80,puVar6);
  if ((uVar5 & 2) != 0) {
    uStack_1a8 = uVar5 & 0xfffffffd;
    puStack_178 = &unknown_var_720_ptr;
    uVar5 = uStack_1a8;
  }
  if ((uVar5 & 1) != 0) {
    uStack_1a8 = uVar5 & 0xfffffffe;
    puStack_d8 = &unknown_var_720_ptr;
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1c8);
}





// 函数: void FUN_180282be0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180282be0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  void **ppuVar4;
  void *puVar5;
  bool bVar6;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  longlong **pplStackX_20;
  int32_t uVar7;
  uint64_t uVar8;
  void *puStack_88;
  longlong lStack_80;
  int32_t uStack_78;
  ulonglong uStack_70;
  void *puStack_68;
  longlong lStack_60;
  int32_t uStack_50;
  
  uVar8 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x3c8);
  pplStackX_18 = &plStackX_8;
  plStackX_8 = (longlong *)*param_2;
  plStackX_10 = param_2;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  plVar3 = plStackX_8;
  pplStackX_20 = &plStackX_8;
  if (*(longlong **)(lVar1 + 0x20) != plStackX_8) {
    pplStackX_18 = (longlong **)plStackX_8;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
    }
    pplStackX_18 = *(longlong ***)(lVar1 + 0x20);
    *(longlong **)(lVar1 + 0x20) = plVar3;
    if (pplStackX_18 != (longlong **)0x0) {
      (*(code *)(*pplStackX_18)[7])();
    }
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
  }
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  bVar6 = *param_2 == 0;
  if (bVar6) {
    puStack_88 = &unknown_var_3456_ptr;
    uStack_70 = 0;
    lStack_80 = 0;
    uStack_78 = 0;
    ppuVar4 = &puStack_88;
    uVar7 = 2;
  }
  else {
    ppuVar4 = (void **)FUN_180627ae0(&puStack_68,*param_2 + 0x1f0);
    uVar7 = 1;
  }
  lVar1 = lStack_80;
  pcVar2 = *(code **)(*(longlong *)(param_1 + 0x118) + 0x10);
  puVar5 = &system_buffer_ptr;
  if (ppuVar4[1] != (void *)0x0) {
    puVar5 = ppuVar4[1];
  }
  (*pcVar2)((longlong *)(param_1 + 0x118),puVar5,pcVar2,param_4,uVar7,uVar8);
  if (bVar6) {
    puStack_88 = &unknown_var_3456_ptr;
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
    lStack_80 = 0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    puStack_88 = &unknown_var_720_ptr;
  }
  if (!bVar6) {
    puStack_68 = &unknown_var_3456_ptr;
    if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_60 = 0;
    uStack_50 = 0;
    puStack_68 = &unknown_var_720_ptr;
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}



uint64_t *
FUN_180282d80(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0x13,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x73656d5f6174656d;
  puVar1[1] = 0x6e6f706d6f635f68;
  *(int32_t *)(puVar1 + 2) = 0x746e65;
  *(int32_t *)(param_2 + 2) = 0x13;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180282e00(longlong param_1,longlong param_2)
void FUN_180282e00(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint64_t uVar8;
  char *pcVar9;
  char *pcVar10;
  uint *puVar11;
  int32_t *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plStackX_8;
  longlong *plStackX_10;
  void *puStack_f8;
  longlong lStack_f0;
  uint uStack_e8;
  uint64_t uStack_e0;
  void *puStack_d8;
  longlong lStack_d0;
  int32_t uStack_c8;
  ulonglong uStack_c0;
  void *puStack_b8;
  longlong lStack_b0;
  int32_t uStack_a8;
  ulonglong uStack_a0;
  uint64_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  ulonglong uStack_70;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_f8 = &unknown_var_3456_ptr;
  uStack_e0 = 0;
  lStack_f0 = 0;
  uStack_e8 = 0;
  uVar2 = **(uint **)(param_2 + 8);
  puVar11 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar11;
  if (uVar2 != 0) {
    FUN_180628f30(&puStack_f8,puVar11,uVar2);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
  }
  lVar5 = FUN_1800b6de0(_DAT_180c86930,&puStack_f8,1);
  uVar2 = uStack_e8;
  if (lVar5 == 0) {
    uVar13 = (ulonglong)uStack_e8;
    if (lStack_f0 != 0) {
      FUN_1806277c0(param_1 + 0x1f0,uVar13);
    }
    if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(param_1 + 0x1f8),lStack_f0,uVar13);
    }
    *(int32_t *)(param_1 + 0x200) = 0;
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      *(int8_t *)(uVar13 + *(longlong *)(param_1 + 0x1f8)) = 0;
    }
    *(int32_t *)(param_1 + 0x20c) = uStack_e0._4_4_;
  }
  else {
    FUN_180275a60(lVar5,param_1,1);
  }
  uVar13 = 0;
  *(int32_t *)(param_1 + 0x324) = **(int32_t **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  puVar12 = (int32_t *)((longlong)&uStack_88 + 4);
  uVar14 = 4;
  pcVar10 = *(char **)(param_2 + 8);
  do {
    pcVar9 = pcVar10;
    puVar12[-1] = *(int32_t *)pcVar9;
    *puVar12 = *(int32_t *)(pcVar9 + 4);
    puVar12[1] = *(int32_t *)(pcVar9 + 8);
    puVar12[2] = *(int32_t *)(pcVar9 + 0xc);
    pcVar10 = pcVar9 + 0x10;
    puVar12 = puVar12 + 4;
    uVar14 = uVar14 - 1;
  } while (uVar14 != 0);
  *(char **)(param_2 + 8) = pcVar10;
  cVar1 = *pcVar10;
  puVar11 = (uint *)(pcVar9 + 0x11);
  *(uint **)(param_2 + 8) = puVar11;
  if (cVar1 != '\0') {
    puStack_d8 = &unknown_var_3456_ptr;
    lStack_d0 = 0;
    uStack_c8 = 0;
    uVar2 = *puVar11;
    *(char **)(param_2 + 8) = pcVar9 + 0x15;
    uStack_c0 = uVar14;
    if (uVar2 != 0) {
      FUN_180628f30(&puStack_d8,pcVar9 + 0x15,uVar2);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
    }
    plVar6 = (longlong *)FUN_1800b30d0(_DAT_180c86930,&plStackX_10,&puStack_d8,1);
    plVar6 = (longlong *)*plVar6;
    if (plVar6 != (longlong *)0x0) {
      plStackX_8 = plVar6;
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    plStackX_8 = *(longlong **)(param_1 + 0x3b8);
    *(longlong **)(param_1 + 0x3b8) = plVar6;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (plStackX_10 != (longlong *)0x0) {
      (**(code **)(*plStackX_10 + 0x38))();
    }
    puStack_d8 = &unknown_var_3456_ptr;
    if (lStack_d0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_d0 = 0;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    puStack_d8 = &unknown_var_720_ptr;
    puVar11 = *(uint **)(param_2 + 8);
  }
  uVar2 = *puVar11;
  lVar5 = (longlong)(int)uVar2;
  *(uint **)(param_2 + 8) = puVar11 + 1;
  uVar14 = uVar13;
  if (0 < (int)uVar2) {
    do {
      if ((ulonglong)(longlong)(int)uVar13 <
          (ulonglong)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 4)) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x38) + uVar14);
      }
      else {
        uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,9);
        lVar7 = FUN_180075030(uVar8,0,1);
      }
      uStack_88 = &unknown_var_3456_ptr;
      uStack_70 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uVar2 = **(uint **)(param_2 + 8);
      puVar11 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar11;
      if (uVar2 != 0) {
        FUN_180628f30(&uStack_88,puVar11,uVar2);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
      }
      puStack_b8 = &unknown_var_3456_ptr;
      uStack_a0 = 0;
      lStack_b0 = 0;
      uStack_a8 = 0;
      uVar2 = **(uint **)(param_2 + 8);
      puVar11 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar11;
      if (uVar2 != 0) {
        FUN_180628f30(&puStack_b8,puVar11,uVar2);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
      }
      uVar8 = FUN_1800b30d0(_DAT_180c86930,&plStackX_8,&puStack_b8,1);
      FUN_180076910(lVar7,uVar8);
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      puVar3 = *(uint64_t **)(param_2 + 8);
      uVar8 = *puVar3;
      uVar4 = puVar3[1];
      *(uint64_t **)(param_2 + 8) = puVar3 + 2;
      *(uint64_t *)(lVar7 + 0x238) = uVar8;
      *(uint64_t *)(lVar7 + 0x240) = uVar4;
      puVar3 = *(uint64_t **)(param_2 + 8);
      uVar8 = *puVar3;
      uVar4 = puVar3[1];
      *(uint64_t **)(param_2 + 8) = puVar3 + 2;
      *(uint64_t *)(lVar7 + 0x238) = uVar8;
      *(uint64_t *)(lVar7 + 0x240) = uVar4;
      puVar3 = *(uint64_t **)(param_2 + 8);
      uVar8 = *puVar3;
      uVar4 = puVar3[1];
      *(uint64_t **)(param_2 + 8) = puVar3 + 2;
      *(uint64_t *)(lVar7 + 0x2a8) = uVar8;
      *(uint64_t *)(lVar7 + 0x2b0) = uVar4;
      puVar3 = *(uint64_t **)(param_2 + 8);
      uVar8 = *puVar3;
      uVar4 = puVar3[1];
      *(uint64_t **)(param_2 + 8) = puVar3 + 2;
      *(uint64_t *)(lVar7 + 0x2b8) = uVar8;
      *(uint64_t *)(lVar7 + 0x2c0) = uVar4;
      puVar12 = *(int32_t **)(param_2 + 8);
      *(int32_t *)(*(longlong *)(lVar7 + 0x268) + 0x10) = *puVar12;
      *(int32_t **)(param_2 + 8) = puVar12 + 1;
      plVar6 = (longlong *)(*(longlong *)(lVar7 + 0x268) + 0x20);
      uVar2 = puVar12[1];
      puVar12 = puVar12 + 2;
      *(int32_t **)(param_2 + 8) = puVar12;
      if (uVar2 != 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6,puVar12,uVar2);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar2;
        puVar12 = *(int32_t **)(param_2 + 8);
      }
      *(int32_t *)(*(longlong *)(lVar7 + 0x268) + 0x44) = *puVar12;
      *(int32_t **)(param_2 + 8) = puVar12 + 1;
      *(int32_t *)(*(longlong *)(lVar7 + 0x268) + 0x48) = puVar12[1];
      *(int32_t **)(param_2 + 8) = puVar12 + 2;
      *(int32_t *)(*(longlong *)(lVar7 + 0x268) + 0x4c) = puVar12[2];
      *(int32_t **)(param_2 + 8) = puVar12 + 3;
      *(int32_t *)(*(longlong *)(lVar7 + 0x268) + 0x54) = puVar12[3];
      *(int32_t **)(param_2 + 8) = puVar12 + 4;
      *(int32_t *)(*(longlong *)(lVar7 + 0x268) + 0x58) = puVar12[4];
      *(int32_t **)(param_2 + 8) = puVar12 + 5;
      *(int32_t *)(*(longlong *)(lVar7 + 0x268) + 0x5c) = puVar12[5];
      *(int32_t **)(param_2 + 8) = puVar12 + 6;
      *(int32_t *)(*(longlong *)(lVar7 + 0x268) + 0x60) = puVar12[6];
      *(int32_t **)(param_2 + 8) = puVar12 + 7;
      *(int32_t *)(*(longlong *)(lVar7 + 0x268) + 100) = puVar12[7];
      *(int32_t **)(param_2 + 8) = puVar12 + 8;
      *(int32_t *)(*(longlong *)(lVar7 + 0x268) + 0x68) = puVar12[8];
      *(int32_t **)(param_2 + 8) = puVar12 + 9;
      *(int32_t *)(*(longlong *)(lVar7 + 0x268) + 0x6c) = puVar12[9];
      *(int32_t **)(param_2 + 8) = puVar12 + 10;
      puStack_b8 = &unknown_var_3456_ptr;
      if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_b0 = 0;
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
      puStack_b8 = &unknown_var_720_ptr;
      uStack_88 = &unknown_var_3456_ptr;
      if (uStack_80 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_80 = 0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      uStack_88 = &unknown_var_720_ptr;
      uVar13 = (ulonglong)((int)uVar13 + 1);
      lVar5 = lVar5 + -1;
      uVar14 = uVar14 + 0x10;
    } while (lVar5 != 0);
  }
  puStack_f8 = &unknown_var_3456_ptr;
  if (lStack_f0 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





