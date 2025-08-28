#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part011.c - 6 个函数

// 函数: void FUN_1801d17f0(int64_t ******param_1)
void FUN_1801d17f0(int64_t ******param_1)

{
  int64_t ****pppplVar1;
  int64_t ****pppplVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int64_t ****pppplVar6;
  int32_t uVar7;
  int32_t uVar8;
  bool bVar9;
  uint64_t *****pppppuVar10;
  int64_t **pplVar11;
  int iVar12;
  int64_t *plVar13;
  int64_t *****ppppplVar14;
  int64_t ******pppppplVar15;
  int64_t ******pppppplVar16;
  int64_t lVar17;
  uint64_t *puVar18;
  int64_t ******pppppplVar19;
  int64_t ***ppplVar20;
  int64_t ******pppppplVar21;
  uint64_t ******ppppppuVar22;
  int64_t ****pppplVar23;
  char *pcVar24;
  uint64_t ******ppppppuVar25;
  uint64_t ******ppppppuVar26;
  int64_t ****pppplVar27;
  int64_t *****ppppplVar28;
  uint64_t ******ppppppuVar29;
  int32_t uVar30;
  int64_t *****ppppplVar31;
  int64_t lVar32;
  uint64_t uVar33;
  uint uVar34;
  uint64_t uVar35;
  int64_t *****ppppplStackX_8;
  uint64_t uStackX_10;
  int64_t *****ppppplStackX_18;
  int iStackX_20;
  int32_t uStackX_24;
  int64_t *****ppppplStack_158;
  int64_t *****ppppplStack_150;
  int64_t *****ppppplStack_148;
  uint64_t uStack_140;
  int64_t lStack_138;
  int32_t uStack_130;
  uint64_t *****pppppuStack_128;
  uint64_t *****pppppuStack_120;
  uint64_t *****pppppuStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  int32_t uStack_100;
  int64_t **pplStack_f8;
  int64_t ****pppplStack_f0;
  int64_t ****pppplStack_e8;
  int64_t ****pppplStack_e0;
  int32_t uStack_d8;
  uint64_t *****pppppuStack_d0;
  uint64_t *****pppppuStack_c8;
  uint64_t *puStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  int64_t *plStack_98;
  uint64_t uStack_90;
  int64_t ****pppplStack_88;
  int64_t ***ppplStack_80;
  int8_t uStack_78;
  uint64_t uStack_70;
  uint64_t *puStack_68;
  int8_t auStack_60 [32];
  
  uStack_70 = 0xfffffffffffffffe;
  ppppplVar14 = (int64_t *****)0x0;
  ppppplVar28 = *param_1 + 0x7d;
  ppppplStackX_8 = (int64_t *****)param_1;
  pppplStack_88 = (int64_t ****)ppppplVar28;
  iVar12 = _Mtx_lock(ppppplVar28);
  if (iVar12 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar12);
  }
  plVar13 = (int64_t *)FUN_1800b31f0(system_resource_state,&plStack_98,param_1[1],0);
  lVar17 = *plVar13;
  if (plStack_98 != (int64_t *)0x0) {
    (**(code **)(*plStack_98 + 0x38))();
  }
  if (lVar17 != 0) {
    pcVar24 = "";
    if (*(char **)(lVar17 + 0x18) != (char *)0x0) {
      pcVar24 = *(char **)(lVar17 + 0x18);
    }
    iVar12 = 0x1505;
    cVar3 = *pcVar24;
    while (cVar3 != '\0') {
      pcVar24 = pcVar24 + 1;
      iVar12 = iVar12 * 0x21 + (int)cVar3;
      cVar3 = *pcVar24;
    }
    uStack_90 = *(uint64_t *)(lVar17 + 0x15b8);
    uStack_130 = 3;
    ppppplStack_158 = (int64_t *****)&ppppplStack_158;
    ppppplStack_150 = (int64_t *****)&ppppplStack_158;
    ppppplStack_148 = (int64_t *****)0x0;
    uStack_140 = 0;
    lStack_138 = 0;
    pppplStack_f0 = (int64_t ****)0x0;
    pppplStack_e8 = (int64_t ****)0x0;
    pppplStack_e0 = (int64_t ****)0x0;
    uStack_d8 = 3;
    pplStack_f8 = (int64_t **)(*param_1)[10][99];
    ppplVar20 = (int64_t ***)((int64_t ***)pplStack_f8)[1];
    if (ppplVar20 == (int64_t ***)pplStack_f8) {
      ppppplVar28 = (int64_t *****)0x0;
    }
    else {
      ppppplVar31 = (int64_t *****)0x0;
      ppppplStackX_18 = (int64_t *****)0x0;
      do {
        pppplVar1 = pppplStack_f0;
        if (iVar12 == *(int *)(ppplVar20 + 4)) {
          if (ppppplVar31 < ppppplVar14) {
            ppppplStackX_18 = (int64_t *****)((int64_t)ppppplVar31 + 0x14);
            pppplStack_e8 = (int64_t ****)ppppplStackX_18;
            uVar30 = *(int32_t *)((int64_t)ppplVar20 + 0x24);
            uVar7 = *(int32_t *)(ppplVar20 + 5);
            uVar8 = *(int32_t *)((int64_t)ppplVar20 + 0x2c);
            *(int32_t *)ppppplVar31 = *(int32_t *)(ppplVar20 + 4);
            *(int32_t *)((int64_t)ppppplVar31 + 4) = uVar30;
            *(int32_t *)(ppppplVar31 + 1) = uVar7;
            *(int32_t *)((int64_t)ppppplVar31 + 0xc) = uVar8;
            *(int32_t *)(ppppplVar31 + 2) = *(int32_t *)(ppplVar20 + 6);
          }
          else {
            lVar32 = (int64_t)ppppplVar31 - (int64_t)pppplStack_f0;
            lVar17 = lVar32 / 0x14;
            if (lVar17 == 0) {
              lVar17 = 1;
LAB_1801d19b6:
              ppppplVar14 = (int64_t *****)FUN_18062b420(system_memory_pool_ptr,lVar17 * 0x14,3);
            }
            else {
              lVar17 = lVar17 * 2;
              if (lVar17 != 0) goto LAB_1801d19b6;
              ppppplVar14 = (int64_t *****)0x0;
            }
            if ((int64_t *****)pppplVar1 != ppppplStackX_18) {
                    // WARNING: Subroutine does not return
              memmove(ppppplVar14,pppplVar1,lVar32);
            }
            uVar30 = *(int32_t *)((int64_t)ppplVar20 + 0x24);
            uVar7 = *(int32_t *)(ppplVar20 + 5);
            uVar8 = *(int32_t *)((int64_t)ppplVar20 + 0x2c);
            *(int32_t *)ppppplVar14 = *(int32_t *)(ppplVar20 + 4);
            *(int32_t *)((int64_t)ppppplVar14 + 4) = uVar30;
            *(int32_t *)(ppppplVar14 + 1) = uVar7;
            *(int32_t *)((int64_t)ppppplVar14 + 0xc) = uVar8;
            *(int32_t *)(ppppplVar14 + 2) = *(int32_t *)(ppplVar20 + 6);
            ppppplStackX_18 = (int64_t *****)((int64_t)ppppplVar14 + 0x14);
            if ((int64_t *****)pppplVar1 != (int64_t *****)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(pppplVar1);
            }
            pppplStack_f0 = (int64_t ****)ppppplVar14;
            pppplStack_e8 = (int64_t ****)ppppplStackX_18;
            ppppplVar14 = (int64_t *****)((int64_t)ppppplVar14 + lVar17 * 0x14);
            pppplStack_e0 = (int64_t ****)ppppplVar14;
          }
          iVar5 = *(int *)((int64_t)ppplVar20 + 0x34);
          bVar4 = *(byte *)((int64_t)ppplVar20 + 0x32);
          uStackX_24 = CONCAT31(uStackX_24._1_3_,bVar4);
          pppppplVar19 = &ppppplStack_158;
          pppppplVar16 = (int64_t ******)ppppplStack_148;
          while (pppppplVar21 = pppppplVar19, pppppplVar16 != (int64_t ******)0x0) {
            if ((*(int *)(pppppplVar16 + 4) < iVar5) ||
               ((*(int *)(pppppplVar16 + 4) <= iVar5 &&
                (*(byte *)((int64_t)pppppplVar16 + 0x24) < bVar4)))) {
              bVar9 = true;
              pppppplVar15 = (int64_t ******)*pppppplVar16;
            }
            else {
              bVar9 = false;
              pppppplVar15 = (int64_t ******)pppppplVar16[1];
            }
            pppppplVar19 = pppppplVar16;
            pppppplVar16 = pppppplVar15;
            if (bVar9) {
              pppppplVar19 = pppppplVar21;
            }
          }
          iStackX_20 = iVar5;
          pppplStack_e8 = (int64_t ****)ppppplStackX_18;
          if (((pppppplVar21 == &ppppplStack_158) || (iVar5 < *(int *)(pppppplVar21 + 4))) ||
             ((iVar5 <= *(int *)(pppppplVar21 + 4) &&
              (bVar4 < *(byte *)((int64_t)pppppplVar21 + 0x24))))) {
            if ((pppppplVar21 == (int64_t ******)ppppplStack_158) ||
               (pppppplVar21 == &ppppplStack_158)) {
              if ((lStack_138 != 0) &&
                 ((pppppplVar21 = (int64_t ******)ppppplStack_158,
                  *(int *)(ppppplStack_158 + 4) < iVar5 ||
                  ((*(int *)(ppppplStack_158 + 4) <= iVar5 &&
                   (*(byte *)((int64_t)ppppplStack_158 + 0x24) < bVar4)))))) {
LAB_1801d1b1a:
                bVar9 = false;
                goto LAB_1801d1b1c;
              }
            }
            else {
              pppppplVar16 = (int64_t ******)func_0x00018066bd70(pppppplVar21);
              if (((*(int *)(pppppplVar21 + 4) < iVar5) ||
                  ((*(int *)(pppppplVar21 + 4) <= iVar5 &&
                   (*(byte *)((int64_t)pppppplVar21 + 0x24) < bVar4)))) &&
                 ((iVar5 < *(int *)(pppppplVar16 + 4) ||
                  ((iVar5 <= *(int *)(pppppplVar16 + 4) &&
                   (bVar4 < *(byte *)((int64_t)pppppplVar16 + 0x24))))))) {
                if (*pppppplVar21 == (int64_t *****)0x0) goto LAB_1801d1b1a;
                bVar9 = true;
                pppppplVar21 = pppppplVar16;
LAB_1801d1b1c:
                if (pppppplVar21 != (int64_t ******)0x0) {
                  if ((((bVar9) || (pppppplVar21 == &ppppplStack_158)) ||
                      (iVar5 < *(int *)(pppppplVar21 + 4))) ||
                     ((iVar5 <= *(int *)(pppppplVar21 + 4) &&
                      (bVar4 < *(byte *)((int64_t)pppppplVar21 + 0x24))))) {
                    uVar30 = 0;
                  }
                  else {
                    uVar30 = 1;
                  }
                  lVar17 = FUN_18062b420(system_memory_pool_ptr,0x58,(int8_t)uStack_130);
                  puStack_68 = (uint64_t *)(lVar17 + 0x20);
                  *puStack_68 = CONCAT44(uStackX_24,iStackX_20);
                  ppplStack_80 = (int64_t ***)(lVar17 + 0x28);
                  *(uint64_t *)(lVar17 + 0x40) = 0;
                  *(int32_t *)(lVar17 + 0x50) = 3;
                  *ppplStack_80 = (int64_t **)ppplStack_80;
                  *(int64_t ****)(lVar17 + 0x30) = ppplStack_80;
                  *(uint64_t *)(lVar17 + 0x38) = 0;
                  *(int8_t *)(lVar17 + 0x40) = 0;
                  *(uint64_t *)(lVar17 + 0x48) = 0;
                    // WARNING: Subroutine does not return
                  FUN_18066bdc0(lVar17,pppppplVar21,&ppppplStack_158,uVar30);
                }
              }
            }
            puVar18 = (uint64_t *)FUN_1801ea5e0(&ppppplStack_158,auStack_60);
            pppppplVar21 = (int64_t ******)*puVar18;
          }
          pppppplVar16 = pppppplVar21 + 5;
          lVar17 = FUN_18062b420(system_memory_pool_ptr,0x38,*(int8_t *)(pppppplVar21 + 10));
          uVar30 = *(int32_t *)((int64_t)ppplVar20 + 0x24);
          uVar7 = *(int32_t *)(ppplVar20 + 5);
          uVar8 = *(int32_t *)((int64_t)ppplVar20 + 0x2c);
          *(int32_t *)(lVar17 + 0x20) = *(int32_t *)(ppplVar20 + 4);
          *(int32_t *)(lVar17 + 0x24) = uVar30;
          *(int32_t *)(lVar17 + 0x28) = uVar7;
          *(int32_t *)(lVar17 + 0x2c) = uVar8;
          *(int32_t *)(lVar17 + 0x30) = *(int32_t *)(ppplVar20 + 6);
          pppppplVar19 = (int64_t ******)FUN_1801ea730(pppppplVar16,&uStackX_10,lVar17 + 0x20);
          if ((char)uStackX_10 != '\0') {
            if (pppppplVar19 != pppppplVar16) {
              if (*(uint *)(pppppplVar19 + 4) <= *(uint *)(lVar17 + 0x20)) {
                if (*(uint *)(lVar17 + 0x20) <= *(uint *)(pppppplVar19 + 4)) {
                  if (*(ushort *)(lVar17 + 0x30) < *(ushort *)(pppppplVar19 + 6))
                  goto LAB_1801d1c87;
                  if (*(ushort *)(lVar17 + 0x30) <= *(ushort *)(pppppplVar19 + 6)) {
                    if (*(uint *)(lVar17 + 0x24) < *(uint *)((int64_t)pppppplVar19 + 0x24))
                    goto LAB_1801d1c87;
                    if (*(uint *)(lVar17 + 0x24) <= *(uint *)((int64_t)pppppplVar19 + 0x24)) {
                      if (*(uint *)(lVar17 + 0x28) < *(uint *)(pppppplVar19 + 5))
                      goto LAB_1801d1c87;
                      if (*(uint *)(lVar17 + 0x28) <= *(uint *)(pppppplVar19 + 5)) {
                        if ((*(uint *)(lVar17 + 0x2c) < *(uint *)((int64_t)pppppplVar19 + 0x2c)) ||
                           ((*(uint *)(lVar17 + 0x2c) <= *(uint *)((int64_t)pppppplVar19 + 0x2c) &&
                            (*(byte *)(lVar17 + 0x32) < *(byte *)((int64_t)pppppplVar19 + 0x32)))))
                        goto LAB_1801d1c87;
                      }
                    }
                  }
                }
                    // WARNING: Subroutine does not return
                FUN_18066bdc0(lVar17,pppppplVar19,pppppplVar16,1);
              }
            }
LAB_1801d1c87:
                    // WARNING: Subroutine does not return
            FUN_18066bdc0(lVar17,pppppplVar19,pppppplVar16,0);
          }
          ppppplVar31 = ppppplStackX_18;
          if (lVar17 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(lVar17);
          }
        }
        ppplVar20 = (int64_t ***)func_0x00018066bd70(ppplVar20);
        ppppplVar28 = ppppplStackX_18;
      } while (ppplVar20 != (int64_t ***)pplStack_f8);
    }
    pplVar11 = pplStack_f8;
    uVar33 = 0;
    uStack_100 = 3;
    pppppuStack_128 = &pppppuStack_128;
    pppppuStack_120 = &pppppuStack_128;
    pppppuStack_118 = (uint64_t ******)0x0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_a8 = 3;
    pppppuStack_d0 = &pppppuStack_d0;
    pppppuStack_c8 = &pppppuStack_d0;
    puStack_c0 = (uint64_t *)0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    ppplVar20 = (int64_t ***)pplStack_f8[1];
    pppppplVar16 = (int64_t ******)ppppplStackX_8;
    pppppplVar19 = (int64_t ******)ppppplStack_150;
    while (ppppplStackX_8 = (int64_t *****)pppppplVar16,
          ppppplStack_150 = (int64_t *****)pppppplVar19, ppplVar20 != (int64_t ***)pplVar11) {
      iVar12 = *(int *)((int64_t)ppplVar20 + 0x34);
      pppppplVar16 = (int64_t ******)ppppplStack_148;
      pppppplVar19 = &ppppplStack_158;
      if ((int64_t ******)ppppplStack_148 != (int64_t ******)0x0) {
        do {
          if ((*(int *)(pppppplVar16 + 4) < iVar12) ||
             ((*(int *)(pppppplVar16 + 4) <= iVar12 &&
              (*(byte *)((int64_t)pppppplVar16 + 0x24) < *(byte *)((int64_t)ppplVar20 + 0x32)))))
          {
            bVar9 = true;
            pppppplVar21 = (int64_t ******)*pppppplVar16;
          }
          else {
            bVar9 = false;
            pppppplVar21 = (int64_t ******)pppppplVar16[1];
          }
          pppppplVar15 = pppppplVar16;
          if (bVar9) {
            pppppplVar15 = pppppplVar19;
          }
          pppppplVar16 = pppppplVar21;
          pppppplVar19 = pppppplVar15;
        } while (pppppplVar21 != (int64_t ******)0x0);
        if ((((pppppplVar15 != &ppppplStack_158) && (*(int *)(pppppplVar15 + 4) <= iVar12)) &&
            ((*(int *)(pppppplVar15 + 4) < iVar12 ||
             (*(byte *)((int64_t)pppppplVar15 + 0x24) <= *(byte *)((int64_t)ppplVar20 + 0x32)))))
           && (puVar18 = (uint64_t *)
                         FUN_1801e6940(pppppplVar15 + 5,&ppppplStackX_18,ppplVar20 + 4),
              (int64_t ******)*puVar18 == pppppplVar15 + 5)) {
          bVar4 = *(byte *)((int64_t)ppplVar20 + 0x32);
          uStackX_10._0_5_ = CONCAT14(bVar4,iVar12);
          bVar9 = true;
          ppppppuVar25 = &pppppuStack_128;
          ppppppuVar22 = (uint64_t ******)pppppuStack_118;
          while (ppppppuVar22 != (uint64_t ******)0x0) {
            ppppppuVar25 = ppppppuVar22;
            if ((iVar12 < *(int *)(ppppppuVar22 + 4)) ||
               ((iVar12 <= *(int *)(ppppppuVar22 + 4) &&
                (bVar4 < *(byte *)((int64_t)ppppppuVar22 + 0x24))))) {
              bVar9 = true;
              ppppppuVar22 = (uint64_t ******)ppppppuVar22[1];
            }
            else {
              bVar9 = false;
              ppppppuVar22 = (uint64_t ******)*ppppppuVar22;
            }
          }
          ppppppuVar22 = ppppppuVar25;
          if (bVar9) {
            if (ppppppuVar25 == (uint64_t ******)pppppuStack_120) goto LAB_1801d1e6c;
            ppppppuVar22 = (uint64_t ******)func_0x00018066b9a0(ppppppuVar25);
          }
          if ((*(int *)(ppppppuVar22 + 4) < iVar12) ||
             ((*(int *)(ppppppuVar22 + 4) <= iVar12 &&
              (*(byte *)((int64_t)ppppppuVar22 + 0x24) < bVar4)))) {
LAB_1801d1e6c:
            lVar17 = FUN_18062b420(system_memory_pool_ptr,0x28,(int8_t)uStack_100);
            *(int64_t *******)(lVar17 + 0x20) = uStackX_10;
            if ((ppppppuVar25 != &pppppuStack_128) &&
               ((*(int *)(ppppppuVar25 + 4) <= iVar12 &&
                ((*(int *)(ppppppuVar25 + 4) < iVar12 ||
                 (*(byte *)((int64_t)ppppppuVar25 + 0x24) <= bVar4)))))) {
              uVar33 = 1;
            }
                    // WARNING: Subroutine does not return
            FUN_18066bdc0(lVar17,ppppppuVar25,&pppppuStack_128,uVar33);
          }
        }
      }
      ppplVar20 = (int64_t ***)func_0x00018066bd70(ppplVar20);
      pppppplVar16 = (int64_t ******)ppppplStackX_8;
      pppppplVar19 = (int64_t ******)ppppplStack_150;
    }
    if (pppppplVar19 != &ppppplStack_158) {
      do {
        if ((uint64_t ******)pppppuStack_118 == (uint64_t ******)0x0) {
LAB_1801d1f67:
          pppplVar6 = (*pppppplVar16)[10];
          bVar4 = *(byte *)((int64_t)pppppplVar19 + 0x24);
          pppplVar1 = pppplVar6 + (uint64_t)bVar4 * 0xe + 0xe;
          uStack_78 = 0;
          ppplStack_80 = (int64_t ***)pppplVar1;
          AcquireSRWLockExclusive(pppplVar1);
          uStack_78 = 1;
          pppplVar2 = pppplVar6 + (uint64_t)bVar4 * 0xe + 8;
          pppplVar23 = (int64_t ****)pppplVar6[(uint64_t)bVar4 * 0xe + 10];
          if (pppplVar23 != (int64_t ****)0x0) {
            pppplVar27 = pppplVar2;
            do {
              if (*(int *)(pppplVar23 + 4) < *(int *)(pppppplVar19 + 4)) {
                pppplVar23 = (int64_t ****)*pppplVar23;
              }
              else {
                pppplVar27 = pppplVar23;
                pppplVar23 = (int64_t ****)pppplVar23[1];
              }
            } while (pppplVar23 != (int64_t ****)0x0);
            if ((pppplVar27 != pppplVar2) &&
               (*(int *)(pppplVar27 + 4) <= *(int *)(pppppplVar19 + 4))) {
              pppplVar6[(uint64_t)bVar4 * 0xe + 0xc] =
                   (int64_t ***)((int64_t)pppplVar6[(uint64_t)bVar4 * 0xe + 0xc] + -1);
              func_0x00018066bd70();
              FUN_18066ba00(pppplVar27,pppplVar2);
                    // WARNING: Subroutine does not return
              FUN_18064e900(pppplVar27);
            }
          }
          ReleaseSRWLockExclusive(pppplVar1);
        }
        else {
          iVar12 = *(int *)(pppppplVar19 + 4);
          ppppppuVar25 = (uint64_t ******)pppppuStack_118;
          ppppppuVar22 = &pppppuStack_128;
          do {
            if ((*(int *)(ppppppuVar25 + 4) < iVar12) ||
               ((*(int *)(ppppppuVar25 + 4) <= iVar12 &&
                (*(byte *)((int64_t)ppppppuVar25 + 0x24) < *(byte *)((int64_t)pppppplVar19 + 0x24)
                )))) {
              bVar9 = true;
              ppppppuVar26 = (uint64_t ******)*ppppppuVar25;
            }
            else {
              bVar9 = false;
              ppppppuVar26 = (uint64_t ******)ppppppuVar25[1];
            }
            ppppppuVar29 = ppppppuVar25;
            if (bVar9) {
              ppppppuVar29 = ppppppuVar22;
            }
            ppppppuVar25 = ppppppuVar26;
            ppppppuVar22 = ppppppuVar29;
          } while (ppppppuVar26 != (uint64_t ******)0x0);
          if (((ppppppuVar29 == &pppppuStack_128) || (iVar12 < *(int *)(ppppppuVar29 + 4))) ||
             ((iVar12 <= *(int *)(ppppppuVar29 + 4) &&
              (*(byte *)((int64_t)pppppplVar19 + 0x24) < *(byte *)((int64_t)ppppppuVar29 + 0x24)))
             )) goto LAB_1801d1f67;
        }
        pppppplVar19 = (int64_t ******)func_0x00018066bd70(pppppplVar19);
      } while (pppppplVar19 != &ppppplStack_158);
    }
    pppplVar1 = pppplStack_f0;
    lVar17 = (int64_t)ppppplVar28 - (int64_t)pppplStack_f0 >> 0x3f;
    lVar32 = ((int64_t)ppppplVar28 - (int64_t)pppplStack_f0) / 0x14 + lVar17;
    uVar35 = uVar33;
    if (lVar32 != lVar17) {
      do {
        pppppplVar19 = (int64_t ******)(*pppppplVar16)[10][99];
        FUN_1801e6940(pppppplVar19,&ppppplStackX_8,
                      (int32_t *)((int64_t)pppplVar1 + uVar33 * 0x14));
        ppppplVar14 = ppppplStackX_8;
        if ((int64_t ******)ppppplStackX_8 != pppppplVar19) {
          pppppplVar19[4] = (int64_t *****)((int64_t)pppppplVar19[4] + -1);
          func_0x00018066bd70(ppppplStackX_8);
          FUN_18066ba00(ppppplVar14,pppppplVar19);
        }
        uVar34 = (int)uVar35 + 1;
        uVar33 = (uint64_t)(int)uVar34;
        uVar35 = (uint64_t)uVar34;
      } while (uVar33 < (uint64_t)(lVar32 - lVar17));
    }
    FUN_18029a5c0(uStack_90);
    puVar18 = puStack_c0;
    pppppuVar10 = pppppuStack_118;
    ppppplVar14 = ppppplStack_148;
    if (puStack_c0 != (uint64_t *)0x0) {
      FUN_18004b790(&pppppuStack_d0,*puStack_c0);
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar18);
    }
    if ((uint64_t ******)pppppuStack_118 != (uint64_t ******)0x0) {
      FUN_18004b790(&pppppuStack_128,*pppppuStack_118);
                    // WARNING: Subroutine does not return
      FUN_18064e900(pppppuVar10);
    }
    if ((int64_t *****)pppplVar1 != (int64_t *****)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(pppplVar1);
    }
    ppppplStackX_8 = ppppplStack_148;
    ppppplVar28 = (int64_t *****)pppplStack_88;
    if ((int64_t ******)ppppplStack_148 != (int64_t ******)0x0) {
      FUN_1801e85e0(&ppppplStack_158,*ppppplStack_148);
      uStackX_10 = (int64_t ******)(ppppplVar14 + 4);
      ppppplStackX_18 = ppppplVar14 + 5;
      FUN_18004b730();
                    // WARNING: Subroutine does not return
      FUN_18064e900(ppppplVar14);
    }
  }
  iVar12 = _Mtx_unlock(ppppplVar28);
  if (iVar12 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar12);
  }
  return;
}






// 函数: void FUN_1801d2190(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801d2190(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1801e85e0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1801d21c0(int64_t param_1)
void FUN_1801d21c0(int64_t param_1)

{
  *(uint64_t *)(param_1 + 8) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 8) = &system_state_ptr;
  return;
}






// 函数: void FUN_1801d2210(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801d2210(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1801e85e0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d2240(uint64_t param_1,uint64_t param_2)
void FUN_1801d2240(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t *puVar2;
  int8_t auStack_c48 [128];
  void *puStack_bc8;
  uint64_t *puStack_bc0;
  int32_t uStack_bb8;
  uint64_t uStack_bb0;
  uint64_t uStack_b78;
  uint64_t uStack_a00;
  int8_t auStack_1e8 [432];
  uint64_t uStack_38;
  
  uStack_a00 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c48;
  puStack_bc8 = &system_data_buffer_ptr;
  uStack_bb0 = 0;
  puStack_bc0 = (uint64_t *)0x0;
  uStack_bb8 = 0;
  uStack_b78 = param_2;
  puVar2 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_bc0 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_bb0 = CONCAT44(uStack_bb0._4_4_,uVar1);
  *puVar2 = 0x746c7561666564;
  uStack_bb8 = 7;
  FUN_1801f21f0(0x746c7561666564,auStack_1e8,&puStack_bc8);
  puStack_bc8 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d5720(int64_t ******param_1,int64_t param_2,uint64_t *******param_3,
void FUN_1801d5720(int64_t ******param_1,int64_t param_2,uint64_t *******param_3,
                  uint64_t param_4)

{
  uint uVar1;
  uint64_t ******ppppppuVar2;
  int64_t *******ppppppplVar3;
  int64_t *******ppppppplVar4;
  char cVar5;
  uint64_t *******pppppppuVar6;
  uint64_t *puVar7;
  uint64_t *******pppppppuVar8;
  uint64_t *******pppppppuVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t ******ppppppuVar12;
  int64_t *plVar13;
  int32_t *puVar14;
  uint64_t *******pppppppuVar15;
  uint64_t *******pppppppuVar16;
  int iVar17;
  void *puVar18;
  int64_t lVar19;
  uint64_t uVar20;
  int iVar21;
  uint64_t *****pppppuVar22;
  uint64_t *****pppppuVar23;
  int64_t lVar24;
  uint64_t *****pppppuVar25;
  uint64_t *****pppppuVar26;
  int64_t *******ppppppplStackX_8;
  uint64_t *******pppppppuStackX_10;
  uint64_t *******pppppppuStackX_18;
  uint64_t uStackX_20;
  void *puStack_1c8;
  int8_t *puStack_1c0;
  uint uStack_1b8;
  uint64_t uStack_1b0;
  void *puStack_1a8;
  int8_t *puStack_1a0;
  uint uStack_198;
  uint64_t uStack_190;
  uint64_t *******pppppppuStack_188;
  uint64_t *******pppppppuStack_180;
  uint64_t *******pppppppuStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  int32_t uStack_160;
  void *puStack_158;
  void *puStack_150;
  int32_t uStack_148;
  uint64_t uStack_140;
  uint64_t *******pppppppuStack_138;
  uint64_t *******pppppppuStack_130;
  uint64_t *******pppppppuStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  int32_t uStack_110;
  int64_t *******ppppppplStack_108;
  int64_t *******ppppppplStack_100;
  int64_t *******ppppppplStack_f8;
  int8_t uStack_f0;
  int32_t uStack_ef;
  int16_t uStack_eb;
  int8_t uStack_e9;
  uint64_t uStack_e8;
  int32_t uStack_e0;
  uint64_t ******ppppppuStack_d8;
  uint64_t *****pppppuStack_d0;
  uint64_t *****pppppuStack_c8;
  uint64_t uStack_c0;
  int32_t uStack_b8;
  int64_t lStack_b0;
  int64_t lStack_a8;
  uint64_t ******ppppppuStack_a0;
  uint64_t uStack_98;
  int8_t auStack_90 [8];
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int32_t uStack_50;
  
  lVar19 = system_global_data_ptr;
  uStack_98 = 0xfffffffffffffffe;
  lStack_a8 = system_global_data_ptr;
  uStack_88 = 0;
  uStack_80 = 0;
  iVar21 = 0;
  uStack_78 = 0;
  uStack_70 = 3;
  puStack_158 = &system_data_buffer_ptr;
  uStack_140 = 0;
  puStack_150 = (void *)0x0;
  uStack_148 = 0;
  pppppuVar23 = (uint64_t *****)&system_buffer_ptr;
  if (param_3[1] != (uint64_t ******)0x0) {
    pppppuVar23 = param_3[1];
  }
  puVar18 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar18 = *(void **)(param_2 + 8);
  }
  ppppppplStackX_8 = (int64_t *******)param_1;
  pppppppuStackX_10 = (uint64_t *******)param_2;
  pppppppuStackX_18 = param_3;
  uStackX_20 = param_4;
  System_DataHandler(&puStack_158,&system_callback2_ptr,puVar18,pppppuVar23);
  puVar18 = &system_buffer_ptr;
  if (puStack_150 != (void *)0x0) {
    puVar18 = puStack_150;
  }
  (**(code **)(system_system_control_memory + 0x10))(&system_data_5208,puVar18);
  plVar13 = system_main_module_state;
  *(int32_t *)(system_main_module_state + 0x40) = 0x3dcccccd;
  *(int8_t *)((int64_t)plVar13 + 0x25) = 0;
  *(int8_t *)(plVar13 + 5) = 0;



