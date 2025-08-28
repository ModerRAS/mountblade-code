#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part035.c - 6 个函数

// 函数: void FUN_1803c7730(longlong *param_1,longlong *param_2)
void FUN_1803c7730(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  uint64_t *puVar5;
  longlong **pplVar6;
  char cVar7;
  int iVar8;
  uint64_t *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  void *puVar16;
  ulonglong uVar17;
  void *puVar18;
  longlong *plVar19;
  int32_t uVar20;
  uint uVar21;
  bool bVar22;
  longlong *plStackX_8;
  uint64_t *puStackX_10;
  int8_t uStackX_18;
  longlong *plStackX_20;
  longlong *plStack_120;
  int32_t uStack_118;
  uint uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  uint uStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  int32_t *puStack_e0;
  uint64_t *puStack_d8;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int32_t uStack_c8;
  int32_t uStack_c4;
  uint64_t uStack_c0;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t *apuStack_b0 [2];
  code *pcStack_a0;
  code *pcStack_98;
  longlong *aplStack_90 [2];
  code *pcStack_80;
  void *puStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  
  lVar12 = system_system_data_memory;
  uStack_70 = 0xfffffffffffffffe;
  cVar2 = *(char *)(*param_2 + 0xb1);
  uVar21 = *(uint *)(param_2 + 7) & 0x28;
  bVar22 = uVar21 != 0;
  lStack_f8 = 0;
  plStackX_8 = param_1;
  uStackX_18 = bVar22;
  uStack_108 = uVar21;
  if (((int)param_2[3] != 0) &&
     (iVar8 = FUN_180191c00(system_system_data_memory,param_2 + 1), lStack_f8 = 0, iVar8 != -1)) {
    lStack_f8 = (longlong)iVar8 * 0x68 + *(longlong *)(lVar12 + 0x38);
  }
  puVar9 = (uint64_t *)FUN_1803c7600(param_1,param_2,bVar22,lStack_f8);
  if ((puVar9 == (uint64_t *)0x0) || (cVar2 == '\0')) {
    uStack_10c = 0;
    if (uVar21 == 0) {
      uVar3 = *(uint *)(param_2 + 7);
      if ((uVar3 >> 0xd & 1) == 0) {
        uStack_118 = 1;
        if ((uVar3 & 0x10) != 0) {
          uStack_118 = 0x20;
        }
      }
      else {
        uStack_118 = 0x10;
      }
      uStack_114 = 0;
      if ((uVar3 & 0x40) == 0) {
        uStack_114 = 2;
      }
      if ((uVar3 & 0x8040) == 0) {
        uStack_114 = uStack_114 | 8;
      }
    }
    else {
      uStack_118 = 2;
      uStack_114 = 7;
      if ((*(uint *)(param_2 + 7) >> 5 & 1) == 0) {
        uStack_114 = 0x25;
      }
    }
    uStack_110 = (int32_t)param_2[10];
    puVar9 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x30,8);
    *puVar9 = &unknown_var_8736_ptr;
    *puVar9 = &unknown_var_4744_ptr;
    plVar11 = puVar9 + 1;
    uVar17 = 0;
    *plVar11 = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *(int32_t *)(puVar9 + 4) = 3;
    puVar9[5] = 0;
    plStackX_20 = plVar11;
    if (cVar2 == '\0') {
      plVar13 = *(longlong **)(*param_2 + 0xb8);
      lVar12 = plVar13[1] - *plVar13 >> 0x3f;
      uVar15 = uVar17;
      puStackX_10 = puVar9;
      if ((plVar13[1] - *plVar13) / 0x30 + lVar12 != lVar12) {
        do {
          plVar10 = (longlong *)FUN_1803c6330(param_1,param_2,uVar17 * 0x30 + *plVar13);
          plStackX_8 = plVar10;
          FUN_18005ea90(plVar11,&plStackX_8);
          (**(code **)(*plVar10 + 0xa0))(plVar10,&uStack_118);
          uVar21 = (int)uVar15 + 1;
          uVar17 = (ulonglong)(int)uVar21;
          uVar15 = (ulonglong)uVar21;
        } while (uVar17 < (ulonglong)((plVar13[1] - *plVar13) / 0x30));
      }
      uVar15 = 0;
      uVar17 = uVar15;
      if (plVar13[5] - plVar13[4] >> 5 != 0) {
        do {
          plVar10 = (longlong *)FUN_1803c6880(param_1,param_2,uVar15 * 0x20 + plVar13[4]);
          plStackX_8 = plVar10;
          FUN_18005ea90(plVar11,&plStackX_8);
          (**(code **)(*plVar10 + 0xa0))(plVar10,&uStack_118);
          uVar21 = (int)uVar17 + 1;
          uVar15 = (ulonglong)(int)uVar21;
          uVar17 = (ulonglong)uVar21;
        } while (uVar15 < (ulonglong)(plVar13[5] - plVar13[4] >> 5));
      }
      uVar17 = 0;
      iVar8 = 0;
      lVar12 = plVar13[9] - plVar13[8] >> 0x3f;
      puVar9 = puStackX_10;
      if ((plVar13[9] - plVar13[8]) / 0x88 + lVar12 != lVar12) {
        do {
          plVar10 = (longlong *)
                    FUN_1803c7100(param_1,param_2,uVar17 * 0x88 + plVar13[8],uStackX_18,param_2 + 5)
          ;
          plStackX_8 = plVar10;
          FUN_18005ea90(plVar11,&plStackX_8);
          (**(code **)(*plVar10 + 0xa0))(plVar10,&uStack_118);
          iVar8 = iVar8 + 1;
          uVar17 = (ulonglong)iVar8;
          puVar9 = puStackX_10;
        } while (uVar17 < (ulonglong)((plVar13[9] - plVar13[8]) / 0x88));
      }
    }
    else {
      puStackX_10 = (uint64_t *)((ulonglong)puVar9 & 0xffffffffffffff00);
      puVar5 = puStackX_10;
      puStackX_10._1_7_ = (uint8_t)((ulonglong)puVar9 >> 8);
      puStackX_10 = puVar5;
      if (uVar21 == 0) {
        plVar13 = *(longlong **)(*param_2 + 0xc0);
        if (plVar13 == (longlong *)0x0) {
          plVar13 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x60,8,3);
          plVar13[3] = 0;
          plVar13[4] = 0;
          plVar13[5] = 0;
          plVar13[6] = 0;
          plVar13[7] = 0;
          plVar13[8] = 0;
          plVar13[9] = 0;
          plVar13[10] = 0;
          plVar13[0xb] = 0;
          *plVar13 = 0;
          plVar13[1] = 0;
          plVar13[2] = 0;
          *(int32_t *)(plVar13 + 3) = 3;
          plVar13[4] = 0;
          plVar13[5] = 0;
          plVar13[6] = 0;
          *(int32_t *)(plVar13 + 7) = 3;
          plStackX_20 = plVar13 + 8;
          *plStackX_20 = 0;
          plVar13[9] = 0;
          plVar13[10] = 0;
          *(int32_t *)(plVar13 + 0xb) = 3;
          plVar10 = *(longlong **)(*(longlong *)(*param_2 + 0xa8) + 0x88);
          pcStack_80 = (code *)&unknown_var_3936_ptr;
          puStack_78 = &unknown_var_3920_ptr;
          plStackX_8 = plVar13;
          aplStack_90[0] = plVar13;
          cVar7 = (**(code **)(*plVar10 + 0x60))
                            (plVar10,&system_data_c968,*(longlong *)(*param_2 + 0xa8) + 0xc,0,
                             aplStack_90);
          if (pcStack_80 != (code *)0x0) {
            (*pcStack_80)(aplStack_90,0,0);
          }
          if (cVar7 == '\0') goto LAB_1803c7ed8;
        }
        else {
          puStackX_10 = (uint64_t *)CONCAT71(puStackX_10._1_7_,1);
        }
LAB_1803c7bcf:
        plStackX_8 = (longlong *)((ulonglong)plStackX_8 & 0xffffffff00000000);
        lVar12 = plVar13[1] - *plVar13 >> 0x3f;
        if ((plVar13[1] - *plVar13) / 0x30 + lVar12 != lVar12) {
          uVar17 = 0;
          lStack_100 = 0;
          do {
            plVar10 = (longlong *)FUN_1803c6330(param_1,param_2,uVar17 * 0x30 + *plVar13);
            plStack_120 = plVar10;
            FUN_18005ea90(plVar11,&plStack_120);
            (**(code **)(*plVar10 + 0xa0))(plVar10,&uStack_118);
            puVar9[5] = *(uint64_t *)(lStack_100 + 0x28 + *plVar13);
            iVar8 = (int)plStackX_8 + 1;
            plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,iVar8);
            lStack_100 = lStack_100 + 0x30;
            uVar17 = (ulonglong)iVar8;
          } while (uVar17 < (ulonglong)((plVar13[1] - *plVar13) / 0x30));
        }
        uVar15 = 0;
        plStackX_8 = (longlong *)((ulonglong)plStackX_8 & 0xffffffff00000000);
        uVar17 = uVar15;
        if (plVar13[5] - plVar13[4] >> 5 != 0) {
          do {
            plVar10 = (longlong *)FUN_1803c6880(param_1,param_2,uVar15 * 0x20 + plVar13[4]);
            plStack_120 = plVar10;
            FUN_18005ea90(plVar11,&plStack_120);
            (**(code **)(*plVar10 + 0xa0))(plVar10,&uStack_118);
            puVar9[5] = *(uint64_t *)(uVar17 + 0x18 + plVar13[4]);
            iVar8 = (int)plStackX_8 + 1;
            plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,iVar8);
            uVar15 = (ulonglong)iVar8;
            uVar17 = uVar17 + 0x20;
          } while (uVar15 < (ulonglong)(plVar13[5] - plVar13[4] >> 5));
        }
        plStackX_8 = (longlong *)((ulonglong)plStackX_8 & 0xffffffff00000000);
        lVar12 = plVar13[8];
        if ((plVar13[9] - lVar12) / 0x38 != 0) {
          lStack_100 = 0;
          do {
            lVar12 = lVar12 + lStack_100;
            plVar10 = (longlong *)FUN_1803c6c90(param_1,param_2,lVar12,uStackX_18,param_2 + 5);
            plStack_120 = plVar10;
            FUN_18005ea90(plVar11,&plStack_120);
            puVar5 = *(uint64_t **)(lVar12 + 0x18);
            if (*(int *)(lVar12 + 0x10) == -1) {
              if (*(longlong *)(lVar12 + 0x20) - (longlong)puVar5 >> 3 != 0) {
                puVar9[5] = *puVar5;
              }
            }
            else {
              puVar9[5] = puVar5[*(int *)(lVar12 + 0x10)];
            }
            (**(code **)(*plVar10 + 0xa0))(plVar10,&uStack_118);
            iVar8 = (int)plStackX_8 + 1;
            plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,iVar8);
            lStack_100 = lStack_100 + 0x38;
            lVar12 = plVar13[8];
          } while ((ulonglong)(longlong)iVar8 < (ulonglong)((plVar13[9] - lVar12) / 0x38));
        }
        if ((char)puStackX_10 != '\0') {
          lVar12 = *param_2;
          if (uStack_108 == 0) {
            piVar1 = (int *)(lVar12 + 0x128);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_18014e690(*(uint64_t *)(lVar12 + 0xc0));
              *(uint64_t *)(lVar12 + 0xc0) = 0;
            }
          }
          else {
            iVar8 = 4;
            if (*(float *)(param_2 + 5) <= 0.0 && *(float *)(param_2 + 5) != 0.0) {
              iVar8 = 0;
            }
            iVar14 = 2;
            if (*(float *)((longlong)param_2 + 0x2c) <= 0.0 &&
                *(float *)((longlong)param_2 + 0x2c) != 0.0) {
              iVar14 = 0;
            }
            uVar21 = (uint)(0.0 < *(float *)(param_2 + 6) || *(float *)(param_2 + 6) == 0.0) + iVar8
                     + iVar14;
            piVar1 = (int *)(lVar12 + 0x108 + (ulonglong)uVar21 * 4);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_18014e690(*(uint64_t *)(lVar12 + 200 + (ulonglong)uVar21 * 8));
              *(uint64_t *)(lVar12 + 200 + (ulonglong)uVar21 * 8) = 0;
            }
          }
          goto LAB_1803c811a;
        }
      }
      else {
        iVar8 = 2;
        if (*(float *)((longlong)param_2 + 0x2c) <= 0.0 &&
            *(float *)((longlong)param_2 + 0x2c) != 0.0) {
          iVar8 = 0;
        }
        iVar14 = 4;
        if (*(float *)(param_2 + 5) <= 0.0 && *(float *)(param_2 + 5) != 0.0) {
          iVar14 = 0;
        }
        plVar13 = *(longlong **)
                   (*param_2 + 200 +
                   (ulonglong)
                   (iVar14 + iVar8 + (uint)(0.0 < *(float *)(param_2 + 6) ||
                                           *(float *)(param_2 + 6) == 0.0)) * 8);
        if (plVar13 != (longlong *)0x0) {
          puStackX_10 = (uint64_t *)CONCAT71(puStackX_10._1_7_,1);
          goto LAB_1803c7bcf;
        }
        plVar13 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x60,8,3);
        plVar13[3] = 0;
        plVar13[4] = 0;
        plVar13[5] = 0;
        plVar13[6] = 0;
        plVar13[7] = 0;
        plVar13[8] = 0;
        plVar13[9] = 0;
        plVar13[10] = 0;
        plVar13[0xb] = 0;
        *plVar13 = 0;
        plVar13[1] = 0;
        plVar13[2] = 0;
        *(int32_t *)(plVar13 + 3) = 3;
        plVar13[4] = 0;
        plVar13[5] = 0;
        plVar13[6] = 0;
        *(int32_t *)(plVar13 + 7) = 3;
        plStack_120 = plVar13 + 8;
        *plStack_120 = 0;
        plVar13[9] = 0;
        plVar13[10] = 0;
        *(int32_t *)(plVar13 + 0xb) = 3;
        lVar12 = *param_2;
        uStack_68 = (int32_t)param_2[5];
        uStack_64 = *(int32_t *)((longlong)param_2 + 0x2c);
        uStack_60 = (int32_t)param_2[6];
        uStack_5c = *(int32_t *)((longlong)param_2 + 0x34);
        plStackX_20 = (longlong *)((ulonglong)plVar13 & 0xffffffffffffff00);
        plVar10 = *(longlong **)(*(longlong *)(lVar12 + 0xa8) + 0x88);
        pcVar4 = *(code **)(*plVar10 + 0x60);
        uStack_f0 = &plStackX_20;
        puStack_e0 = &uStack_68;
        pcStack_a0 = FUN_18014f250;
        pcStack_98 = FUN_18014f220;
        uStack_e8 = plVar13;
        apuStack_b0[0] = (int32_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,system_allocation_flags);
        *apuStack_b0[0] = (int32_t)uStack_f0;
        apuStack_b0[0][1] = uStack_f0._4_4_;
        apuStack_b0[0][2] = (int32_t)uStack_e8;
        apuStack_b0[0][3] = uStack_e8._4_4_;
        *(int32_t **)(apuStack_b0[0] + 4) = puStack_e0;
        cVar7 = (*pcVar4)(plVar10,&system_data_c990,*(longlong *)(lVar12 + 0xa8) + 0xc,0,apuStack_b0);
        if (pcStack_a0 != (code *)0x0) {
          (*pcStack_a0)(apuStack_b0,0,0);
        }
        param_1 = plStackX_8;
        if ((cVar7 != '\0') && ((char)plStackX_20 != '\0')) goto LAB_1803c7bcf;
LAB_1803c7ed8:
        puVar18 = &system_buffer_ptr;
        if (*(void **)(*param_2 + 0x18) != (void *)0x0) {
          puVar18 = *(void **)(*param_2 + 0x18);
        }
        puVar16 = &unknown_var_3172_ptr;
        if (uStack_108 != 0) {
          puVar16 = &unknown_var_4592_ptr;
        }
        FUN_180626f80(&unknown_var_3128_ptr,puVar16,puVar18);
      }
      FUN_18014e690(plVar13);
    }
LAB_1803c811a:
    plVar11 = (longlong *)0x0;
    if (cVar2 != '\0') {
      uStack_d0 = (int32_t)param_2[5];
      uStack_cc = *(int32_t *)((longlong)param_2 + 0x2c);
      uStack_c8 = (int32_t)param_2[6];
      uStack_c4 = *(int32_t *)((longlong)param_2 + 0x34);
      uStack_b4 = CONCAT31(uStack_b4._1_3_,uStackX_18);
      uStack_b8 = (int32_t)param_2[10];
      uStack_c0 = lStack_f8;
      plStackX_8 = (longlong *)*param_2;
      plVar10 = plStackX_8;
      puStack_d8 = puVar9;
      FUN_1803cece0(param_1 + 4,&uStack_f0);
      pplVar6 = uStack_f0;
      plVar13 = uStack_f0[2];
      if (plVar13 < uStack_f0[3]) {
        uStack_f0[2] = plVar13 + 5;
        *plVar13 = (longlong)puStack_d8;
        plVar13[1] = CONCAT44(uStack_cc,uStack_d0);
        plVar13[2] = CONCAT44(uStack_c4,uStack_c8);
        plVar13[3] = uStack_c0;
        plVar13[4] = CONCAT44(uStack_b4,uStack_b8);
      }
      else {
        plVar19 = uStack_f0[1];
        lVar12 = ((longlong)plVar13 - (longlong)plVar19) / 0x28;
        if (lVar12 == 0) {
          lVar12 = 1;
LAB_1803c81d7:
          plVar11 = (longlong *)
                    FUN_18062b420(system_memory_pool_ptr,lVar12 * 0x28,*(int8_t *)(uStack_f0 + 4),
                                  plVar19,plVar10);
          plVar13 = pplVar6[2];
          plVar19 = pplVar6[1];
        }
        else {
          lVar12 = lVar12 * 2;
          if (lVar12 != 0) goto LAB_1803c81d7;
        }
        if (plVar19 != plVar13) {
                    // WARNING: Subroutine does not return
          memmove(plVar11,plVar19,(longlong)plVar13 - (longlong)plVar19);
        }
        *plVar11 = (longlong)puStack_d8;
        plVar11[1] = CONCAT44(uStack_cc,uStack_d0);
        *(int32_t *)(plVar11 + 2) = uStack_c8;
        *(int32_t *)((longlong)plVar11 + 0x14) = uStack_c4;
        *(int32_t *)(plVar11 + 3) = (int32_t)uStack_c0;
        *(int32_t *)((longlong)plVar11 + 0x1c) = uStack_c0._4_4_;
        plVar11[4] = CONCAT44(uStack_b4,uStack_b8);
        if (pplVar6[1] != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        pplVar6[1] = plVar11;
        pplVar6[2] = plVar11 + 5;
        pplVar6[3] = plVar11 + lVar12 * 5;
      }
    }
  }
  uVar20 = 1;
  plVar10 = param_1 + 10;
  lVar12 = FUN_18062b420(system_memory_pool_ptr,0x28,(char)param_1[0xf]);
  *(uint64_t **)(lVar12 + 0x20) = puVar9;
  bVar22 = true;
  plVar11 = plVar10;
  plVar13 = (longlong *)param_1[0xc];
  while (plVar13 != (longlong *)0x0) {
    bVar22 = puVar9 < (uint64_t *)plVar13[4];
    plVar11 = plVar13;
    if (bVar22) {
      plVar13 = (longlong *)plVar13[1];
    }
    else {
      plVar13 = (longlong *)*plVar13;
    }
  }
  plVar13 = plVar11;
  if (bVar22) {
    if (plVar11 == (longlong *)param_1[0xb]) goto LAB_1803c82ee;
    plVar13 = (longlong *)func_0x00018066b9a0(plVar11);
  }
  if (*(ulonglong *)(lVar12 + 0x20) <= (ulonglong)plVar13[4]) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar12);
  }
LAB_1803c82ee:
  if ((plVar11 == plVar10) || (*(ulonglong *)(lVar12 + 0x20) < (ulonglong)plVar11[4])) {
    uVar20 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar12,plVar11,plVar10,uVar20);
}






// 函数: void FUN_1803c8340(void)
void FUN_1803c8340(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1803c8377(uint64_t param_1,longlong *param_2,uint64_t param_3,int param_4)
void FUN_1803c8377(uint64_t param_1,longlong *param_2,uint64_t param_3,int param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  ushort uVar4;
  int32_t uVar5;
  longlong *plVar6;
  int32_t uVar7;
  int32_t uVar8;
  int iVar9;
  int32_t uVar10;
  int32_t *puVar11;
  ulonglong uVar12;
  uint64_t uVar13;
  ulonglong uVar14;
  ushort *puVar15;
  longlong unaff_RBP;
  uint uVar16;
  longlong lVar17;
  int32_t *puVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint64_t *unaff_R14;
  int8_t *puVar22;
  
  uVar21 = 0;
  iVar9 = 0;
  if ((-1 < param_4) && (iVar9 = param_4, 0x10 < param_4)) {
    iVar9 = 0x10;
  }
  uVar4 = *(ushort *)((longlong)param_2 + 0x1a);
  lVar20 = param_2[1];
  uVar14 = uVar21;
  if (((uVar4 & 1) == 0) && (**(int **)(*param_2 + 0x10) == -0x14321433)) {
    uVar14 = *(ulonglong *)(*(int **)(*param_2 + 0x10) + 2);
  }
  *(ulonglong *)(unaff_RBP + 0x1dd0) = uVar14;
  uVar12 = uVar21;
  if (((uVar4 & 2) == 0) && (**(int **)(lVar20 + 0x10) == -0x14321433)) {
    uVar12 = *(ulonglong *)(*(int **)(lVar20 + 0x10) + 2);
  }
  *(ulonglong *)(unaff_RBP + 0x1dd8) = uVar12;
  if ((uVar14 != 0) || (uVar12 != 0)) {
    lVar20 = (longlong)iVar9;
    *(int *)(unaff_RBP + 0x1de0) = iVar9;
    if (0 < iVar9) {
      puVar11 = (int32_t *)(unaff_RBP + 0x130);
      puVar15 = (ushort *)((longlong)unaff_R14 + 0x32);
      lVar19 = lVar20;
      do {
        uVar4 = *puVar15;
        if ((uVar4 & 4) == 0) {
          if ((uVar4 & 8) == 0) {
            if ((uVar4 & 0x10) != 0) {
              *puVar11 = 2;
            }
          }
          else {
            *puVar11 = 1;
          }
        }
        else {
          *puVar11 = 0;
        }
        puVar15 = puVar15 + 0x20;
        puVar11 = puVar11 + 0x7a;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      puVar22 = &stack0x00000050;
      do {
        lVar19 = unaff_RBP + 0x1df0;
        lVar17 = 8;
        do {
          func_0x000180074f10(lVar19);
          lVar19 = lVar19 + 0x30;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        iVar9 = 0;
        if (*(char *)((longlong)unaff_R14 + 0x2c) != '\0') {
          iVar9 = FUN_1803cf770(unaff_R14,unaff_RBP + 0x1df0);
        }
        *(int *)(puVar22 + 0x1e4) = iVar9;
        if (0 < iVar9) {
          puVar11 = (int32_t *)(puVar22 + 0x20);
          puVar18 = (int32_t *)(unaff_RBP + 0x1df8);
          uVar14 = uVar21;
          do {
            uVar7 = puVar18[-2];
            uVar8 = puVar18[-1];
            uVar10 = *puVar18;
            uVar1 = puVar18[2];
            plVar6 = (longlong *)*unaff_R14;
            uVar5 = puVar18[5];
            *puVar11 = puVar18[1];
            uVar2 = puVar18[3];
            uVar3 = puVar18[4];
            puVar11[-8] = uVar7;
            puVar11[-7] = uVar8;
            puVar11[-6] = uVar10;
            puVar11[-5] = 0x7f7fffff;
            uVar10 = puVar18[6];
            uVar7 = puVar18[7];
            uVar8 = puVar18[8];
            puVar11[-4] = uVar1;
            puVar11[-3] = uVar2;
            puVar11[-2] = uVar3;
            puVar11[-1] = 0x7f7fffff;
            puVar11[1] = uVar10;
            puVar11[2] = uVar7;
            puVar11[3] = uVar8;
            puVar11[4] = 0x7f7fffff;
            lVar19 = (**(code **)(*plVar6 + 0xd8))(plVar6,uVar5);
            if (lVar19 == 0) {
              uVar10 = 0xffffffff;
            }
            else {
              uVar10 = *(int32_t *)(*(longlong *)(*(longlong *)(lVar19 + 0x10) + 8) + 100);
            }
            plVar6 = (longlong *)unaff_R14[1];
            uVar1 = puVar18[9];
            puVar11[5] = uVar10;
            lVar19 = (**(code **)(*plVar6 + 0xd8))(plVar6,uVar1);
            if (lVar19 == 0) {
              uVar10 = 0xffffffff;
            }
            else {
              uVar10 = *(int32_t *)(*(longlong *)(*(longlong *)(lVar19 + 0x10) + 8) + 100);
            }
            puVar11[6] = uVar10;
            uVar16 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar16;
            puVar11 = puVar11 + 0xf;
            puVar18 = puVar18 + 0xc;
          } while ((int)uVar16 < *(int *)(puVar22 + 0x1e4));
        }
        unaff_R14 = unaff_R14 + 8;
        puVar22 = puVar22 + 0x1e8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      uVar12 = *(ulonglong *)(unaff_RBP + 0x1dd8);
      uVar14 = *(ulonglong *)(unaff_RBP + 0x1dd0);
    }
    if ((uVar14 != 0) && (*(longlong *)(uVar14 + 0x10) != 0)) {
      uVar13 = FUN_1803cf700();
      FUN_1804719f0(uVar13,&stack0x00000050);
      uVar12 = *(ulonglong *)(unaff_RBP + 0x1dd8);
    }
    if ((uVar12 != 0) && (*(longlong *)(uVar12 + 0x10) != 0)) {
      uVar13 = FUN_1803cf700();
      FUN_1804719f0(uVar13,&stack0x00000050);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1f70) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1803c83f6(longlong param_1,uint64_t param_2,uint64_t param_3,int param_4)
void FUN_1803c83f6(longlong param_1,uint64_t param_2,uint64_t param_3,int param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  ushort uVar4;
  int32_t uVar5;
  longlong *plVar6;
  int32_t uVar7;
  int32_t uVar8;
  int iVar9;
  int32_t uVar10;
  longlong in_RAX;
  int *piVar11;
  uint64_t uVar12;
  ushort *puVar13;
  int32_t *puVar14;
  longlong unaff_RBP;
  longlong lVar15;
  int32_t *puVar16;
  longlong lVar17;
  longlong lVar18;
  int unaff_R13D;
  uint64_t *unaff_R14;
  int8_t *puVar19;
  
  lVar18 = (longlong)param_4;
  *(int *)(unaff_RBP + 0x1de0) = param_4;
  if (0 < param_4) {
    piVar11 = (int *)(unaff_RBP + 0x130);
    puVar13 = (ushort *)((longlong)unaff_R14 + 0x32);
    lVar17 = lVar18;
    do {
      uVar4 = *puVar13;
      if ((uVar4 & 4) == 0) {
        if ((uVar4 & 8) == 0) {
          if ((uVar4 & 0x10) != 0) {
            *piVar11 = 2;
          }
        }
        else {
          *piVar11 = 1;
        }
      }
      else {
        *piVar11 = unaff_R13D;
      }
      puVar13 = puVar13 + 0x20;
      piVar11 = piVar11 + 0x7a;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    puVar19 = &stack0x00000050;
    do {
      lVar17 = unaff_RBP + 0x1df0;
      lVar15 = 8;
      do {
        func_0x000180074f10(lVar17);
        lVar17 = lVar17 + 0x30;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      iVar9 = unaff_R13D;
      if (*(char *)((longlong)unaff_R14 + 0x2c) != (char)unaff_R13D) {
        iVar9 = FUN_1803cf770(unaff_R14,unaff_RBP + 0x1df0);
      }
      *(int *)(puVar19 + 0x1e4) = iVar9;
      if (0 < iVar9) {
        puVar14 = (int32_t *)(puVar19 + 0x20);
        puVar16 = (int32_t *)(unaff_RBP + 0x1df8);
        iVar9 = unaff_R13D;
        do {
          uVar7 = puVar16[-2];
          uVar8 = puVar16[-1];
          uVar10 = *puVar16;
          uVar1 = puVar16[2];
          plVar6 = (longlong *)*unaff_R14;
          uVar5 = puVar16[5];
          *puVar14 = puVar16[1];
          uVar2 = puVar16[3];
          uVar3 = puVar16[4];
          puVar14[-8] = uVar7;
          puVar14[-7] = uVar8;
          puVar14[-6] = uVar10;
          puVar14[-5] = 0x7f7fffff;
          uVar10 = puVar16[6];
          uVar7 = puVar16[7];
          uVar8 = puVar16[8];
          puVar14[-4] = uVar1;
          puVar14[-3] = uVar2;
          puVar14[-2] = uVar3;
          puVar14[-1] = 0x7f7fffff;
          puVar14[1] = uVar10;
          puVar14[2] = uVar7;
          puVar14[3] = uVar8;
          puVar14[4] = 0x7f7fffff;
          lVar17 = (**(code **)(*plVar6 + 0xd8))(plVar6,uVar5);
          if (lVar17 == 0) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = *(int32_t *)(*(longlong *)(*(longlong *)(lVar17 + 0x10) + 8) + 100);
          }
          plVar6 = (longlong *)unaff_R14[1];
          uVar1 = puVar16[9];
          puVar14[5] = uVar10;
          lVar17 = (**(code **)(*plVar6 + 0xd8))(plVar6,uVar1);
          if (lVar17 == 0) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = *(int32_t *)(*(longlong *)(*(longlong *)(lVar17 + 0x10) + 8) + 100);
          }
          puVar14[6] = uVar10;
          iVar9 = iVar9 + 1;
          puVar14 = puVar14 + 0xf;
          puVar16 = puVar16 + 0xc;
        } while (iVar9 < *(int *)(puVar19 + 0x1e4));
      }
      unaff_R14 = unaff_R14 + 8;
      puVar19 = puVar19 + 0x1e8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    in_RAX = *(longlong *)(unaff_RBP + 0x1dd8);
    param_1 = *(longlong *)(unaff_RBP + 0x1dd0);
  }
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    uVar12 = FUN_1803cf700();
    FUN_1804719f0(uVar12,&stack0x00000050);
    in_RAX = *(longlong *)(unaff_RBP + 0x1dd8);
  }
  if ((in_RAX != 0) && (*(longlong *)(in_RAX + 0x10) != 0)) {
    uVar12 = FUN_1803cf700();
    FUN_1804719f0(uVar12,&stack0x00000050);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1f70) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1803c8411(void)
void FUN_1803c8411(void)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  ushort uVar4;
  int32_t uVar5;
  longlong *plVar6;
  int32_t uVar7;
  int32_t uVar8;
  int iVar9;
  int32_t uVar10;
  int *piVar11;
  uint64_t uVar12;
  ushort *puVar13;
  int32_t *puVar14;
  longlong unaff_RBP;
  longlong lVar15;
  int32_t *puVar16;
  longlong lVar17;
  longlong unaff_R12;
  int unaff_R13D;
  uint64_t *unaff_R14;
  int8_t *puVar18;
  
  piVar11 = (int *)(unaff_RBP + 0x130);
  puVar13 = (ushort *)((longlong)unaff_R14 + 0x32);
  lVar17 = unaff_R12;
  do {
    uVar4 = *puVar13;
    if ((uVar4 & 4) == 0) {
      if ((uVar4 & 8) == 0) {
        if ((uVar4 & 0x10) != 0) {
          *piVar11 = 2;
        }
      }
      else {
        *piVar11 = 1;
      }
    }
    else {
      *piVar11 = unaff_R13D;
    }
    puVar13 = puVar13 + 0x20;
    piVar11 = piVar11 + 0x7a;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  puVar18 = &stack0x00000050;
  do {
    lVar17 = unaff_RBP + 0x1df0;
    lVar15 = 8;
    do {
      func_0x000180074f10(lVar17);
      lVar17 = lVar17 + 0x30;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    iVar9 = unaff_R13D;
    if (*(char *)((longlong)unaff_R14 + 0x2c) != (char)unaff_R13D) {
      iVar9 = FUN_1803cf770(unaff_R14,unaff_RBP + 0x1df0);
    }
    *(int *)(puVar18 + 0x1e4) = iVar9;
    if (0 < iVar9) {
      puVar14 = (int32_t *)(puVar18 + 0x20);
      puVar16 = (int32_t *)(unaff_RBP + 0x1df8);
      iVar9 = unaff_R13D;
      do {
        uVar7 = puVar16[-2];
        uVar8 = puVar16[-1];
        uVar10 = *puVar16;
        uVar1 = puVar16[2];
        plVar6 = (longlong *)*unaff_R14;
        uVar5 = puVar16[5];
        *puVar14 = puVar16[1];
        uVar2 = puVar16[3];
        uVar3 = puVar16[4];
        puVar14[-8] = uVar7;
        puVar14[-7] = uVar8;
        puVar14[-6] = uVar10;
        puVar14[-5] = 0x7f7fffff;
        uVar10 = puVar16[6];
        uVar7 = puVar16[7];
        uVar8 = puVar16[8];
        puVar14[-4] = uVar1;
        puVar14[-3] = uVar2;
        puVar14[-2] = uVar3;
        puVar14[-1] = 0x7f7fffff;
        puVar14[1] = uVar10;
        puVar14[2] = uVar7;
        puVar14[3] = uVar8;
        puVar14[4] = 0x7f7fffff;
        lVar17 = (**(code **)(*plVar6 + 0xd8))(plVar6,uVar5);
        if (lVar17 == 0) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = *(int32_t *)(*(longlong *)(*(longlong *)(lVar17 + 0x10) + 8) + 100);
        }
        plVar6 = (longlong *)unaff_R14[1];
        uVar1 = puVar16[9];
        puVar14[5] = uVar10;
        lVar17 = (**(code **)(*plVar6 + 0xd8))(plVar6,uVar1);
        if (lVar17 == 0) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = *(int32_t *)(*(longlong *)(*(longlong *)(lVar17 + 0x10) + 8) + 100);
        }
        puVar14[6] = uVar10;
        iVar9 = iVar9 + 1;
        puVar14 = puVar14 + 0xf;
        puVar16 = puVar16 + 0xc;
      } while (iVar9 < *(int *)(puVar18 + 0x1e4));
    }
    unaff_R14 = unaff_R14 + 8;
    puVar18 = puVar18 + 0x1e8;
    unaff_R12 = unaff_R12 + -1;
  } while (unaff_R12 != 0);
  lVar17 = *(longlong *)(unaff_RBP + 0x1dd8);
  if ((*(longlong *)(unaff_RBP + 0x1dd0) != 0) &&
     (*(longlong *)(*(longlong *)(unaff_RBP + 0x1dd0) + 0x10) != 0)) {
    uVar12 = FUN_1803cf700();
    FUN_1804719f0(uVar12,&stack0x00000050);
    lVar17 = *(longlong *)(unaff_RBP + 0x1dd8);
  }
  if ((lVar17 != 0) && (*(longlong *)(lVar17 + 0x10) != 0)) {
    uVar12 = FUN_1803cf700();
    FUN_1804719f0(uVar12,&stack0x00000050);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1f70) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1803c8641(longlong param_1)
void FUN_1803c8641(longlong param_1)

{
  longlong in_RAX;
  uint64_t uVar1;
  longlong unaff_RBP;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    uVar1 = FUN_1803cf700();
    FUN_1804719f0(uVar1,&stack0x00000050);
    in_RAX = *(longlong *)(unaff_RBP + 0x1dd8);
  }
  if ((in_RAX != 0) && (*(longlong *)(in_RAX + 0x10) != 0)) {
    uVar1 = FUN_1803cf700();
    FUN_1804719f0(uVar1,&stack0x00000050);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1f70) ^ (ulonglong)&stack0x00000000);
}






