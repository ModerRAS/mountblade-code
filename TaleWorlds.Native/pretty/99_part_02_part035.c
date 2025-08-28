#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part035.c - 2 个函数

// 函数: void FUN_1801a82a0(longlong *param_1)
void FUN_1801a82a0(longlong *param_1)

{
  ulonglong ****ppppuVar1;
  uint uVar2;
  ulonglong ***pppuVar3;
  int32_t **ppuVar4;
  ulonglong *****pppppuVar5;
  longlong *plVar6;
  ulonglong **ppuVar7;
  ulonglong **ppuVar8;
  char cVar9;
  ulonglong *puVar10;
  ulonglong ****ppppuVar11;
  uint64_t uVar12;
  ulonglong ****ppppuVar13;
  ulonglong ****ppppuVar14;
  int32_t ***pppuVar15;
  uint64_t *puVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong ****ppppuVar19;
  int iVar20;
  int iVar21;
  ulonglong ****ppppuVar22;
  longlong *plVar23;
  longlong lVar24;
  int32_t ***pppuVar25;
  longlong lVar26;
  longlong lVar27;
  int iStackX_10;
  int32_t uStackX_14;
  ulonglong ****ppppuStackX_18;
  int32_t *****pppppuStackX_20;
  uint64_t uStack_118;
  uint64_t uStack_110;
  int32_t ***pppuStack_108;
  code *pcStack_100;
  ulonglong ****ppppuStack_f8;
  ulonglong ****ppppuStack_f0;
  ulonglong ****ppppuStack_e8;
  int32_t uStack_e0;
  ulonglong *****pppppuStack_d8;
  int32_t ***pppuStack_d0;
  int32_t **ppuStack_c8;
  ulonglong *puStack_c0;
  ulonglong *puStack_b8;
  int32_t uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  uint64_t uStack_98;
  int32_t uStack_90;
  ulonglong ****ppppuStack_88;
  ulonglong ****ppppuStack_80;
  ulonglong ***apppuStack_78 [2];
  code *pcStack_68;
  void *puStack_60;
  uint64_t uStack_58;
  
  uStack_58 = 0xfffffffffffffffe;
  if (*(char *)(*param_1 + 0x48) == '\0') {
    cVar9 = *(char *)(*param_1 + 0x47);
    lStack_a8 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 3;
    FUN_1801a5ea0(param_1[1],&lStack_a8);
    iStackX_10 = 0;
    ppuStack_c8 = (int32_t **)0x0;
    puStack_c0 = (ulonglong *)0x0;
    puStack_b8 = (ulonglong *)0x0;
    uStack_b0 = 3;
    ppppuStack_f8 = (ulonglong ****)0x0;
    ppppuStack_f0 = (ulonglong ****)0x0;
    ppppuStack_e8 = (ulonglong ****)0x0;
    uStack_e0 = 3;
    puVar10 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,0x8000,3);
    if (ppuStack_c8 != (int32_t **)puStack_c0) {
                    // WARNING: Subroutine does not return
      memmove(puVar10,ppuStack_c8,(longlong)puStack_c0 - (longlong)ppuStack_c8);
    }
    if (ppuStack_c8 != (int32_t **)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(ppuStack_c8);
    }
    puStack_b8 = puVar10 + 0x1000;
    ppuStack_c8 = (int32_t **)puVar10;
    puStack_c0 = puVar10;
    if ((ulonglong)(((longlong)ppppuStack_e8 - (longlong)ppppuStack_f8) / 0x18) < 0x1000) {
      ppppuVar11 = (ulonglong ****)FUN_18062b420(_DAT_180c8ed18,0x18000,(int8_t)uStack_e0);
      ppppuVar14 = ppppuStack_f0;
      ppppuVar13 = ppppuStack_f8;
      ppppuVar19 = ppppuVar11;
      if (ppppuStack_f8 != ppppuStack_f0) {
        ppppuVar22 = ppppuStack_f8 + 1;
        do {
          *ppppuVar19 = ppppuVar22[-1];
          ppppuVar19[1] = *ppppuVar22;
          *ppppuVar22 = (ulonglong ***)0x0;
          *(int8_t *)(ppppuVar19 + 2) = *(int8_t *)(ppppuVar22 + 1);
          ppppuVar19 = ppppuVar19 + 3;
          ppppuVar1 = ppppuVar22 + 2;
          ppppuVar22 = ppppuVar22 + 3;
        } while (ppppuVar1 != ppppuStack_f0);
      }
      for (; ppppuStackX_18 = ppppuVar13, ppppuVar13 != ppppuVar14; ppppuVar13 = ppppuVar13 + 3) {
        if (ppppuVar13[1] != (ulonglong ***)0x0) {
          (*(code *)(*ppppuVar13[1])[7])();
        }
      }
      if (ppppuStack_f8 != (ulonglong ****)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(ppppuStack_f8);
      }
      ppppuStack_e8 = ppppuVar11 + 0x3000;
      ppppuStack_f8 = ppppuVar11;
      ppppuStack_f0 = ppppuVar19;
    }
    lVar17 = (lStack_a0 - lStack_a8) / 6 + (lStack_a0 - lStack_a8 >> 0x3f);
    lVar27 = lVar17 >> 2;
    lVar17 = lVar17 >> 0x3f;
    iVar20 = 0;
    if (cVar9 == '\0') {
      if (lVar27 != lVar17) {
        lVar26 = 0;
        do {
          ppppuVar13 = ppppuStack_f0;
          plVar23 = (longlong *)(lStack_a8 + lVar26);
          if ((char)plVar23[2] == '\0') {
            if (ppppuStack_f0 < ppppuStack_e8) {
              ppppuVar14 = ppppuStack_f0 + 3;
              ppppuStackX_18 = ppppuStack_f0;
              *ppppuStack_f0 = (ulonglong ***)*plVar23;
              pppuVar3 = (ulonglong ***)plVar23[1];
              ppppuStack_f0[1] = pppuVar3;
              ppppuStack_f0 = ppppuVar14;
              if (pppuVar3 != (ulonglong ***)0x0) {
                (*(code *)(*pppuVar3)[5])();
              }
              *(char *)(ppppuVar13 + 2) = (char)plVar23[2];
            }
            else {
              FUN_1801bb6c0(&ppppuStack_f8,plVar23);
            }
          }
          iVar20 = iVar20 + 1;
          lVar26 = lVar26 + 0x18;
        } while ((ulonglong)(longlong)iVar20 < (ulonglong)(lVar27 - lVar17));
      }
    }
    else if (lVar27 != lVar17) {
      lVar26 = 0;
      do {
        ppppuVar13 = ppppuStack_f0;
        plVar23 = (longlong *)(lStack_a8 + lVar26);
        if ((char)plVar23[2] == '\0') {
          ppppuVar14 = (ulonglong ****)plVar23[1];
          pppuVar3 = ppppuVar14[0x5d];
          ppppuStackX_18 = ppppuVar14;
          if (((((ulonglong)pppuVar3 & 1) == 0) || (((ulonglong)pppuVar3 & 2) == 0)) ||
             (((ulonglong)pppuVar3 & 8) == 0)) {
            if (ppppuStack_e8 <= ppppuStack_f0) goto LAB_1801a867d;
            ppppuVar14 = ppppuStack_f0 + 3;
            ppppuStackX_18 = ppppuStack_f0;
            *ppppuStack_f0 = (ulonglong ***)*plVar23;
            pppuVar3 = (ulonglong ***)plVar23[1];
            ppppuStack_f0[1] = pppuVar3;
            ppppuStack_f0 = ppppuVar14;
            if (pppuVar3 != (ulonglong ***)0x0) {
              (*(code *)(*pppuVar3)[5])();
            }
            *(char *)(ppppuVar13 + 2) = (char)plVar23[2];
          }
          else {
            if (((*(byte *)((longlong)ppppuVar14 + 0x2e9) & 1) == 0) &&
               ((*(byte *)((longlong)ppppuVar14 + 0x2c4) & 8) == 0)) {
              if (ppppuVar14[0x2d] == (ulonglong ***)0x0) {
                cVar9 = FUN_1802f23a0(ppppuVar14,*(uint64_t *)(param_1[1] + 600));
                cVar9 = cVar9 == '\0';
              }
              else {
                cVar9 = FUN_1802f28a0();
              }
              if (cVar9 != '\0') {
                FUN_1802f2240(ppppuVar14,*(uint64_t *)(param_1[1] + 600));
                iVar21 = FUN_1802ef1b0(ppppuVar14,*(uint64_t *)(param_1[1] + 600));
                iStackX_10 = iStackX_10 + iVar21;
                FUN_18005ea90(&ppuStack_c8,&ppppuStackX_18);
                goto LAB_1801a868a;
              }
            }
            ppppuVar13 = ppppuStack_f0;
            if (ppppuStack_f0 < ppppuStack_e8) {
              ppppuVar14 = ppppuStack_f0 + 3;
              ppppuStackX_18 = ppppuStack_f0;
              *ppppuStack_f0 = (ulonglong ***)*plVar23;
              pppuVar3 = (ulonglong ***)plVar23[1];
              ppppuStack_f0[1] = pppuVar3;
              ppppuStack_f0 = ppppuVar14;
              if (pppuVar3 != (ulonglong ***)0x0) {
                (*(code *)(*pppuVar3)[5])();
              }
              *(char *)(ppppuVar13 + 2) = (char)plVar23[2];
            }
            else {
LAB_1801a867d:
              FUN_1801bb6c0(&ppppuStack_f8,plVar23);
            }
          }
        }
LAB_1801a868a:
        iVar20 = iVar20 + 1;
        lVar26 = lVar26 + 0x18;
      } while ((ulonglong)(longlong)iVar20 < (ulonglong)(lVar27 - lVar17));
    }
    uStack_110 = (int32_t ***)param_1[1];
    uStack_118 = (int32_t *****)&ppuStack_c8;
    pppuStack_108 = (int32_t ***)&iStackX_10;
    pppppuStack_d8 = &ppppuStack_f8;
    pppuStack_d0 = uStack_110;
    uVar12 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
    ppppuStackX_18 = apppuStack_78;
    pcStack_68 = FUN_1801bc5d0;
    puStack_60 = &unknown_var_1040_ptr;
    apppuStack_78[0] = (ulonglong ***)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,system_allocation_flags);
    *(int32_t *)apppuStack_78[0] = (int32_t)uStack_118;
    *(int32_t *)((longlong)apppuStack_78[0] + 4) = uStack_118._4_4_;
    *(int32_t *)((int32_t ***)apppuStack_78[0] + 1) = (int32_t)uStack_110;
    *(int32_t *)((longlong)apppuStack_78[0] + 0xc) = uStack_110._4_4_;
    ((int32_t ***)apppuStack_78[0])[2] = (int32_t **)pppuStack_108;
    ppppuVar13 = (ulonglong ****)FUN_18006b640(uVar12,apppuStack_78);
    ppppuStack_80 = ppppuVar13;
    if (ppppuVar13 != (ulonglong ****)0x0) {
      (*(code *)(*ppppuVar13)[5])(ppppuVar13);
    }
    ppppuVar13[3] = (ulonglong ***)0xfffffffffffffffd;
    uVar12 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
    ppppuStackX_18 = (ulonglong ****)&uStack_118;
    pppuStack_108 = (int32_t ***)&unknown_var_976_ptr;
    pcStack_100 = FUN_1801bc4e0;
    uStack_118 = (int32_t *****)pppppuStack_d8;
    uStack_110 = pppuStack_d0;
    ppppuVar14 = (ulonglong ****)FUN_18006b640(uVar12,&uStack_118);
    ppppuStack_88 = ppppuVar14;
    if (ppppuVar14 != (ulonglong ****)0x0) {
      (*(code *)(*ppppuVar14)[5])(ppppuVar14);
    }
    uVar12 = _DAT_180c82868;
    pppppuStackX_20 = (int32_t *****)&ppppuStackX_18;
    ppppuStackX_18 = ppppuVar13;
    (*(code *)(*ppppuVar13)[5])(ppppuVar13);
    FUN_18005e110(uVar12,&ppppuStackX_18);
    uVar12 = _DAT_180c82868;
    pppppuStack_d8 = (ulonglong *****)&pppppuStackX_20;
    pppppuStackX_20 = (int32_t *****)ppppuVar14;
    if (ppppuVar14 != (ulonglong ****)0x0) {
      (*(code *)(*ppppuVar14)[5])(ppppuVar14);
    }
    FUN_18005e110(uVar12,&pppppuStackX_20);
    uVar12 = _DAT_180c82868;
    pppppuStack_d8 = &ppppuStackX_18;
    ppppuStackX_18 = ppppuVar13;
    (*(code *)(*ppppuVar13)[5])(ppppuVar13);
    FUN_18005e6a0(uVar12,&ppppuStackX_18,0);
    uVar12 = _DAT_180c82868;
    pppppuStack_d8 = (ulonglong *****)&pppppuStackX_20;
    pppppuStackX_20 = (int32_t *****)ppppuVar14;
    if (ppppuVar14 != (ulonglong ****)0x0) {
      (*(code *)(*ppppuVar14)[5])(ppppuVar14);
    }
    FUN_18005e6a0(uVar12,&pppppuStackX_20,0);
    if (*(longlong *)(param_1[1] + 600) != 0) {
      uStack_118 = (int32_t *****)0x0;
      uStack_110 = (int32_t ***)0x0;
      pppuStack_108 = (int32_t ***)0x0;
      pcStack_100 = (code *)CONCAT44(pcStack_100._4_4_,3);
      pppuVar15 = (int32_t ***)FUN_18062b420(_DAT_180c8ed18,0x2000,3);
      if (uStack_118 != (int32_t *****)uStack_110) {
                    // WARNING: Subroutine does not return
        memmove(pppuVar15,uStack_118,(longlong)uStack_110 - (longlong)uStack_118);
      }
      if (uStack_118 != (int32_t *****)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(uStack_118);
      }
      pppuStack_108 = pppuVar15 + 0x400;
      ppppuStackX_18 = (ulonglong ****)((ulonglong)ppppuStackX_18 & 0xffffffff00000000);
      lVar17 = lStack_a0 - lStack_a8 >> 0x3f;
      uStack_118 = (int32_t *****)pppuVar15;
      uStack_110 = pppuVar15;
      if ((lStack_a0 - lStack_a8) / 0x18 + lVar17 != lVar17) {
        lVar17 = 0;
        do {
          ppuVar4 = *(int32_t ***)(lStack_a8 + 8 + lVar17);
          if (uStack_110 < pppuStack_108) {
            *uStack_110 = ppuVar4;
            pppuVar15 = uStack_110;
          }
          else {
            pppuVar15 = (int32_t ***)
                        FUN_18062b420(_DAT_180c8ed18,8,(ulonglong)pcStack_100 & 0xff);
            if (uStack_118 != (int32_t *****)uStack_110) {
                    // WARNING: Subroutine does not return
              memmove(pppuVar15,uStack_118,(longlong)uStack_110 - (longlong)uStack_118);
            }
            *pppuVar15 = ppuVar4;
            if (uStack_118 != (int32_t *****)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            pppuStack_108 = pppuVar15 + 1;
            uStack_118 = (int32_t *****)pppuVar15;
          }
          uStack_110 = pppuVar15 + 1;
          FUN_1802e8c60(ppuVar4,&uStack_118);
          iVar20 = 0;
          pppuVar15 = (int32_t ***)uStack_118;
          if ((longlong)uStack_110 - (longlong)uStack_118 >> 3 != 0) {
            lVar27 = 0;
            pppuVar25 = uStack_110;
            do {
              lVar26 = *(longlong *)((longlong)pppuVar15 + lVar27);
              iVar21 = 0;
              lVar18 = *(longlong *)(lVar26 + 0x200);
              if (*(longlong *)(lVar26 + 0x208) - lVar18 >> 3 != 0) {
                lVar24 = 0;
                do {
                  pppppuVar5 = *(ulonglong ******)(lVar18 + lVar24);
                  pppppuStack_d8 = pppppuVar5;
                  if (pppppuVar5 != (ulonglong *****)0x0) {
                    (*(code *)(*pppppuVar5)[5])(pppppuVar5);
                  }
                  (*(code *)(*pppppuVar5)[0xc])(pppppuVar5);
                  (*(code *)(*pppppuVar5)[7])(pppppuVar5);
                  iVar21 = iVar21 + 1;
                  lVar24 = lVar24 + 8;
                  lVar18 = *(longlong *)(lVar26 + 0x200);
                  pppuVar15 = (int32_t ***)uStack_118;
                  pppuVar25 = uStack_110;
                } while ((ulonglong)(longlong)iVar21 <
                         (ulonglong)(*(longlong *)(lVar26 + 0x208) - lVar18 >> 3));
              }
              iVar20 = iVar20 + 1;
              lVar27 = lVar27 + 8;
            } while ((ulonglong)(longlong)iVar20 <
                     (ulonglong)((longlong)pppuVar25 - (longlong)pppuVar15 >> 3));
          }
          iVar20 = (int)ppppuStackX_18 + 1;
          ppppuStackX_18 = (ulonglong ****)CONCAT44(ppppuStackX_18._4_4_,iVar20);
          lVar17 = lVar17 + 0x18;
          uStack_110 = pppuVar15;
        } while ((ulonglong)(longlong)iVar20 < (ulonglong)((lStack_a0 - lStack_a8) / 0x18));
      }
      lVar17 = *(longlong *)(*(longlong *)(param_1[1] + 600) + 0x58);
      lVar27 = *(longlong *)(lVar17 + 8);
      ppppuVar14 = ppppuStack_88;
      ppppuVar13 = ppppuStack_80;
      while (ppppuStack_88 = ppppuVar14, ppppuStack_80 = ppppuVar13, lVar27 != lVar17) {
        lVar26 = *(longlong *)(lVar27 + 0x20);
        if ((*(longlong *)(lVar26 + 0x20) == param_1[1]) && ((*(byte *)(lVar26 + 0x2c4) & 2) == 0))
        {
          lVar18 = *(longlong *)(lVar27 + 0x28);
          plVar6 = *(longlong **)(lVar18 + 8);
          lVar24 = *plVar6;
          plVar23 = plVar6;
          if (lVar24 == 0) {
            plVar23 = plVar6 + 1;
            lVar24 = *plVar23;
            while (lVar24 == 0) {
              plVar23 = plVar23 + 1;
              lVar24 = *plVar23;
            }
          }
          if (lVar24 != plVar6[*(longlong *)(lVar18 + 0x10)]) {
            pppppuStack_d8 = &ppppuStackX_18;
            do {
              (**(code **)(*(longlong *)**(uint64_t **)(lVar24 + 8) + 0xa8))
                        ((longlong *)**(uint64_t **)(lVar24 + 8),&pppppuStackX_20);
              FUN_180279640(pppppuStackX_20,*(uint64_t *)(lVar24 + 8),0);
              ppppuStackX_18 = (ulonglong ****)pppppuStackX_20;
              if (pppppuStackX_20 != (int32_t *****)0x0) {
                (*(code *)(*pppppuStackX_20)[5])();
              }
              FUN_1802edcd0(lVar26,ppppuStackX_18);
              if (ppppuStackX_18 != (ulonglong ****)0x0) {
                (*(code *)(*ppppuStackX_18)[7])();
              }
              if (pppppuStackX_20 != (int32_t *****)0x0) {
                (*(code *)(*pppppuStackX_20)[7])();
              }
              lVar24 = *(longlong *)(lVar24 + 0x10);
              while (lVar24 == 0) {
                plVar23 = plVar23 + 1;
                lVar24 = *plVar23;
              }
            } while (lVar24 != *(longlong *)
                                (*(longlong *)(lVar18 + 8) + *(longlong *)(lVar18 + 0x10) * 8));
          }
        }
        lVar27 = func_0x00018066bd70(lVar27);
        ppppuVar14 = ppppuStack_88;
        ppppuVar13 = ppppuStack_80;
      }
      ppppuVar19 = *(ulonglong *****)(param_1[1] + 600);
      ppppuStackX_18 = ppppuVar19;
      if (ppppuVar19 != (ulonglong ****)0x0) {
        pppuVar3 = ppppuVar19[0xb];
        ppuVar8 = pppuVar3[2];
        while (ppuVar8 != (ulonglong **)0x0) {
          FUN_1803a0f00(pppuVar3,*ppuVar8);
          ppuVar7 = (ulonglong **)ppuVar8[1];
          pppppuStackX_20 = (int32_t *****)(ppuVar8 + 4);
          ppuVar8 = ppuVar7;
          if (*pppppuStackX_20 != (int32_t ****)0x0) {
            (*(code *)(**pppppuStackX_20)[7])();
          }
        }
        *pppuVar3 = (ulonglong **)pppuVar3;
        pppuVar3[1] = (ulonglong **)pppuVar3;
        pppuVar3[2] = (ulonglong **)0x0;
        *(int8_t *)(pppuVar3 + 3) = 0;
        pppuVar3[4] = (ulonglong **)0x0;
        FUN_1803a0e50(ppppuVar19[0xc]);
        FUN_1803a0e50(ppppuVar19[0xd]);
        pppuVar3 = ppppuVar19[10];
        if (pppuVar3 != (ulonglong ***)0x0) {
          if (*pppuVar3 != (ulonglong **)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *pppuVar3 = (ulonglong **)0x0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(pppuVar3);
        }
        ppppuVar19[10] = (ulonglong ***)0x0;
        _Mtx_destroy_in_situ(ppppuVar19);
                    // WARNING: Subroutine does not return
        FUN_18064e900(ppppuVar19);
      }
      *(uint64_t *)(param_1[1] + 600) = 0;
      if (uStack_118 != (int32_t *****)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      ppppuStackX_18 = (ulonglong ****)0x0;
      uStack_118 = (int32_t *****)0x0;
    }
    if (ppppuVar14 != (ulonglong ****)0x0) {
      (*(code *)(*ppppuVar14)[7])(ppppuVar14);
    }
    (*(code *)(*ppppuVar13)[7])(ppppuVar13);
    ppppuVar14 = ppppuStack_f0;
    lVar17 = lStack_a0;
    for (ppppuVar13 = ppppuStack_f8; lStack_a0 = lVar17, ppppuVar13 != ppppuVar14;
        ppppuVar13 = ppppuVar13 + 3) {
      if (ppppuVar13[1] != (ulonglong ***)0x0) {
        (*(code *)(*ppppuVar13[1])[7])();
      }
      lVar17 = lStack_a0;
    }
    if (ppppuStack_f8 != (ulonglong ****)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (ppuStack_c8 != (int32_t **)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    ppppuStack_f8 = (ulonglong ****)0x0;
    ppuStack_c8 = (int32_t **)0x0;
    for (lVar27 = lStack_a8; lVar27 != lVar17; lVar27 = lVar27 + 0x18) {
      if (*(longlong **)(lVar27 + 8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar27 + 8) + 0x38))();
      }
    }
    if (lStack_a8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  FUN_1801ab4c0(param_1[1]);
  puVar16 = (uint64_t *)FUN_180198890(param_1[1],&iStackX_10,0);
  lVar17 = param_1[1];
  uVar12 = *puVar16;
  *puVar16 = 0;
  plVar23 = *(longlong **)(lVar17 + 0x8208);
  *(uint64_t *)(lVar17 + 0x8208) = uVar12;
  if (plVar23 != (longlong *)0x0) {
    (**(code **)(*plVar23 + 0x38))();
  }
  if ((longlong *)CONCAT44(uStackX_14,iStackX_10) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(uStackX_14,iStackX_10) + 0x38))();
  }
  FUN_180170ac0(*(uint64_t *)(param_1[1] + 0x8208),&unknown_var_3496_ptr);
  lVar17 = *(longlong *)(param_1[1] + 0x8208);
  uVar2 = *(uint *)(lVar17 + 0x2ac);
  *(uint *)(lVar17 + 0x2ac) = uVar2 | 0x20000;
  FUN_1802ee810(lVar17,uVar2);
  FUN_1802ee990(lVar17,uVar2);
  lVar17 = *(longlong *)(param_1[1] + 0x8208);
  uVar2 = *(uint *)(lVar17 + 0x2c4);
  if ((uVar2 & 4) == 0) {
    *(uint *)(lVar17 + 0x2c4) = uVar2 | 4;
    if (((*(longlong *)(lVar17 + 0x20) != 0) &&
        (*(char *)(*(longlong *)(lVar17 + 0x20) + 0x60cb0) == '\0')) && ((uVar2 & 2) != 0)) {
      FUN_1802ee720(lVar17,0);
    }
  }
  FUN_1802ea790(*(uint64_t *)(param_1[1] + 0x8208),&system_data_0300);
  FUN_1803986d0(param_1[1] + 0x607e0);
  if ((*(char *)(*param_1 + 0x46) == '\0') &&
     (plVar23 = *(longlong **)(_DAT_180c86950 + 0x1860), plVar23 != (longlong *)0x0)) {
    (**(code **)(*plVar23 + 0x28))(plVar23,0x3e0f5c29);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801a8f60(longlong *param_1)
void FUN_1801a8f60(longlong *param_1)

{
  if (*(longlong *)*param_1 != ((longlong *)*param_1)[1]) {
    FUN_18024e890(param_1[1] + 0x570);
    FUN_1802511f0(param_1[1] + 0x570,param_1[1],*param_1,*(int32_t *)param_1[2]);
    FUN_1801b9eb0(param_1[1] + 0x5c8);
    FUN_1801b9da0(param_1[1] + 0x5a8);
    FUN_1801b9fc0(param_1[1] + 0x5e8);
    FUN_1801ba230(param_1[1] + 0x608);
    FUN_1801ba230(param_1[1] + 0x628);
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&unknown_var_3456_ptr,
                  ((longlong *)*param_1)[1] - *(longlong *)*param_1 >> 3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




