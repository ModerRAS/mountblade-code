#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part388.c - 3 个函数

// 函数: void FUN_1808787d0(longlong param_1,longlong *param_2,uint64_t *param_3,longlong param_4,
void FUN_1808787d0(longlong param_1,longlong *param_2,uint64_t *param_3,longlong param_4,
                  longlong *param_5,longlong param_6,longlong param_7)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint uVar18;
  uint64_t *puVar19;
  int32_t uVar20;
  bool bVar21;
  int8_t auStack_138 [32];
  longlong lStack_118;
  uint uStack_110;
  uint uStack_108;
  uint uStack_100;
  uint uStack_f8;
  uint uStack_f0;
  uint uStack_e8;
  uint uStack_e0;
  uint uStack_d8;
  uint uStack_d0;
  int iStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  int aiStack_b0 [2];
  uint uStack_a8;
  uint64_t *puStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  int8_t auStack_80 [40];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  lStack_98 = param_7;
  puStack_a0 = param_3;
  lStack_90 = param_4;
  lStack_88 = param_1;
  if (param_6 != 0) {
    if (*(char *)(param_1 + 0x2f8) != '\0') {
      uStack_b8 = 0xffffffffffffffff;
      aiStack_b0[0] = -1;
      uStack_c0 = param_2;
      FUN_1808741f0(param_2,&uStack_b8,aiStack_b0);
      plVar1 = uStack_c0;
      if (aiStack_b0[0] != -1) {
        iVar8 = aiStack_b0[0];
        iVar13 = (int)uStack_b8;
        do {
          do {
            iVar7 = FUN_180877030(*(uint64_t *)((longlong)iVar8 * 0x20 + 0x18 + plVar1[2]),param_5
                                  ,param_6);
            if (iVar7 != 0) goto FUN_18087920b;
          } while ((iVar8 != -1) &&
                  (iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x10 + plVar1[2]), iVar8 != -1));
          iVar8 = iVar13 + 1;
          bVar21 = iVar13 != -1;
          iVar13 = 0;
          if (bVar21) {
            iVar13 = iVar8;
          }
          if (iVar13 != (int)plVar1[1]) {
            piVar11 = (int *)(*plVar1 + (longlong)iVar13 * 4);
            do {
              if (*piVar11 != -1) {
                iVar8 = *(int *)(*plVar1 + (longlong)iVar13 * 4);
                goto LAB_1808788de;
              }
              iVar13 = iVar13 + 1;
              piVar11 = piVar11 + 1;
            } while (iVar13 != (int)plVar1[1]);
          }
          iVar8 = -1;
          iVar13 = iVar8;
LAB_1808788de:
        } while (iVar8 != -1);
      }
    }
    iVar8 = FUN_180877030(param_1,param_5,param_6);
    if (iVar8 != 0) goto FUN_18087920b;
  }
  uVar18 = *(uint *)(param_1 + 0x218);
  uVar10 = 0;
  uVar20 = 0;
  uStack_a8 = uVar18;
  if (uVar18 < 0x41) {
    uVar12 = uVar10;
    uVar15 = uVar10;
    uVar17 = uVar10;
    if (0 < *(int *)(param_1 + 0x1a8)) {
      do {
        cVar6 = FUN_1808c84b0(*(uint64_t *)(uVar17 + *(longlong *)(param_1 + 0x1a0)),param_5);
        if (cVar6 == '\0') {
          uVar15 = (ulonglong)((int)uVar15 + 1);
        }
        uVar20 = (int32_t)uVar15;
        uVar14 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar14;
        uVar17 = uVar17 + 8;
      } while ((int)uVar14 < *(int *)(param_1 + 0x1a8));
    }
    *(int32_t *)(param_1 + 0x2f4) = uVar20;
  }
  uVar12 = uVar10;
  if (uVar18 < 0x46) {
    while ((iVar8 = (int)uVar12, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 0xf8)))) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar8 * 8);
      lVar9 = (**(code **)(*param_5 + 0x120))(param_5,lVar3 + 0xdc,1);
      if ((lVar9 != 0) && (*(int *)(lVar9 + 0x28) == 3)) {
        *(int32_t *)(lVar9 + 0x28) = *(int32_t *)(lVar3 + 0xd8);
      }
      uVar12 = (ulonglong)(iVar8 + 1);
    }
  }
  uVar12 = uVar10;
  if (uVar18 < 0x50) {
    while ((iVar8 = (int)uVar12, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 0xe8)))) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar8 * 8);
      if (((*(int *)(lVar3 + 0x70) != 0) ||
          (((*(int *)(lVar3 + 0x74) != 0 || (*(int *)(lVar3 + 0x78) != 0)) ||
           (*(int *)(lVar3 + 0x7c) != 0)))) &&
         (((lVar9 = (**(code **)(*param_5 + 0x278))(param_5,lVar3 + 0x70,1), lVar9 != 0 &&
           (0.0 < *(float *)(lVar9 + 0x38))) && (0.0 < *(float *)(lVar3 + 0xa8))))) {
        *(float *)(lVar3 + 0xac) = *(float *)(lVar9 + 0x38) / *(float *)(lVar3 + 0xa8);
      }
      uVar12 = (ulonglong)(iVar8 + 1);
    }
    iVar8 = FUN_180869080(FUN_180876fb0,param_1,param_5);
    uVar12 = uVar10;
    if (iVar8 != 0) goto FUN_18087920b;
    while ((iVar8 = (int)uVar12, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 0x158)))) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar8 * 8);
      if ((*(int *)(lVar3 + 0x70) != 0) ||
         (((*(int *)(lVar3 + 0x74) != 0 || (*(int *)(lVar3 + 0x78) != 0)) ||
          (*(int *)(lVar3 + 0x7c) != 0)))) {
        lVar9 = (**(code **)(*param_5 + 0x278))(param_5,lVar3 + 0x70,1);
        if (((lVar9 != 0) && (0.0 < *(float *)(lVar9 + 0x38))) && (0.0 < *(float *)(lVar3 + 0xa8)))
        {
          *(float *)(lVar3 + 0xac) = *(float *)(lVar9 + 0x38) / *(float *)(lVar3 + 0xa8);
        }
      }
      uVar12 = (ulonglong)(iVar8 + 1);
    }
    iVar8 = FUN_180869020(FUN_180876fb0,param_1,param_5);
    if ((iVar8 != 0) || (iVar8 = FUN_180868f60(FUN_180876fb0,param_1,param_5), iVar8 != 0))
    goto FUN_18087920b;
  }
  if ((0x52 < uVar18) || (iVar8 = FUN_1808782a0(param_1,puStack_a0,param_5), iVar8 == 0)) {
    if (uVar18 < 0x54) {
      while ((iStack_c8 = (int)uVar10, uVar18 = uStack_a8, -1 < iStack_c8 &&
             (iStack_c8 < *(int *)(param_1 + 0xd8)))) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + (longlong)iStack_c8 * 8);
        for (uVar10 = *(ulonglong *)(lVar3 + 0x48);
            (uVar12 = *(ulonglong *)(lVar3 + 0x48), uVar12 <= uVar10 &&
            (uVar10 < uVar12 + (longlong)*(int *)(lVar3 + 0x50) * 0x18)); uVar10 = uVar10 + 0x18) {
          lVar9 = (**(code **)(*param_5 + 0x128))(param_5,uVar10,CONCAT71((int7)(uVar12 >> 8),1));
          if (lVar9 != 0) {
            *(int32_t *)(lVar9 + 0xb0) = 0xffffffff;
          }
        }
        plVar1 = (longlong *)(lVar3 + 0x68);
        plVar16 = *(longlong **)(lVar3 + 0x68);
        if (plVar16 != plVar1) {
          lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
          do {
            if ((*(int *)(lVar3 + 0x48) < _DAT_180c4ea98) &&
               (FUN_1808fcb90(&DAT_180c4ea98), _DAT_180c4ea98 == -1)) {
              _DAT_180c4ea94 = 0;
              FUN_1808fcb30(&DAT_180c4ea98);
            }
            if ((int)plVar16[0x14] != _DAT_180c4ea94) {
              for (uVar10 = plVar16[0x10];
                  (uVar12 = plVar16[0x10], uVar12 <= uVar10 &&
                  (uVar10 < uVar12 + (longlong)(int)plVar16[0x11] * 0x18)); uVar10 = uVar10 + 0x18)
              {
                lVar9 = (**(code **)(*param_5 + 0x128))
                                  (param_5,uVar10,CONCAT71((int7)(uVar12 >> 8),1));
                if (lVar9 != 0) {
                  *(int32_t *)(lVar9 + 0xb0) = 0xffffffff;
                }
              }
            }
            param_1 = lStack_88;
          } while ((plVar16 != plVar1) && (plVar16 = (longlong *)*plVar16, plVar16 != plVar1));
        }
        uVar10 = (ulonglong)(iStack_c8 + 1);
      }
    }
    uVar10 = 0;
    if ((((0x54 < uVar18) || (iVar8 = FUN_180868f00(FUN_1808780d0,param_1,param_5), iVar8 == 0)) &&
        ((0x55 < uVar18 || (iVar8 = FUN_180877970(param_1,param_5), iVar8 == 0)))) &&
       ((0x56 < uVar18 || (iVar8 = FUN_180868f00(FUN_180876d70,param_1,param_5), iVar8 == 0)))) {
      uVar12 = uVar10;
      if (uVar18 < 0x58) {
        while ((iVar8 = (int)uVar12, uVar12 = uVar10, -1 < iVar8 &&
               (iVar8 < *(int *)(param_1 + 0x158)))) {
          iVar13 = FUN_180879270(*(uint64_t *)
                                  (*(longlong *)(param_1 + 0x150) + (longlong)iVar8 * 8),param_5);
          if (iVar13 != 0) goto FUN_18087920b;
          uVar12 = (ulonglong)(iVar8 + 1);
        }
        while ((iVar8 = (int)uVar12, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 0x168)))) {
          iVar13 = FUN_180879270(*(uint64_t *)
                                  (*(longlong *)(param_1 + 0x160) + (longlong)iVar8 * 8),param_5);
          if (iVar13 != 0) goto FUN_18087920b;
          uVar12 = (ulonglong)(iVar8 + 1);
        }
      }
      uVar12 = uVar10;
      if (uVar18 < 0x59) {
        while ((iVar8 = (int)uVar12, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 0x88)))) {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar8 * 8);
          if (*(int *)(lVar3 + 0x60) == 0x1e) {
            *(int8_t *)(lVar3 + 0x40) = 1;
          }
          uVar12 = (ulonglong)(iVar8 + 1);
        }
      }
      if ((0x5a < uVar18) ||
         ((((iVar8 = FUN_180868e40(FUN_1808777c0,param_1,param_5), iVar8 == 0 &&
            (iVar8 = FUN_180868de0(FUN_1808777c0,param_1,param_5), iVar8 == 0)) &&
           (iVar8 = FUN_180868fc0(FUN_1808777c0,param_1,param_5), iVar8 == 0)) &&
          (iVar8 = FUN_180868ea0(FUN_1808777c0,param_1,param_5), iVar8 == 0)))) {
        if (uVar18 < 0x61) {
          uVar20 = 0;
          uVar12 = uVar10;
          uVar15 = uVar10;
          uVar17 = uVar10;
          if (0 < *(int *)(param_1 + 0x1a8)) {
            do {
              cVar6 = FUN_1808c84b0(*(uint64_t *)(uVar12 + *(longlong *)(param_1 + 0x1a0)),param_5
                                   );
              if (cVar6 == '\0') {
                puVar2 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + uVar12) + 0xf8);
                *puVar2 = *puVar2 | 1;
                uVar15 = (ulonglong)((int)uVar15 + 1);
              }
              uVar20 = (int32_t)uVar15;
              uVar14 = (int)uVar17 + 1;
              uVar12 = uVar12 + 8;
              uVar17 = (ulonglong)uVar14;
            } while ((int)uVar14 < *(int *)(param_1 + 0x1a8));
          }
          *(int32_t *)(param_1 + 0x2f4) = uVar20;
        }
        if ((uVar18 < 100) && (uVar12 = uVar10, uVar15 = uVar10, 0 < *(int *)(param_1 + 0x1a8))) {
          do {
            lVar3 = *(longlong *)(uVar15 + *(longlong *)(param_1 + 0x1a0));
            if (((*(int *)(lVar3 + 0x60) != 0) ||
                ((*(int *)(lVar3 + 100) != 0 || (*(int *)(lVar3 + 0x68) != 0)))) ||
               (*(int *)(lVar3 + 0x6c) != 0)) {
              *(uint *)(lVar3 + 0xf8) = *(uint *)(lVar3 + 0xf8) | 2;
            }
            uVar14 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar14;
            uVar15 = uVar15 + 8;
          } while ((int)uVar14 < *(int *)(param_1 + 0x1a8));
        }
        if ((0x6a < uVar18) || (iVar8 = FUN_1808df350(param_1), iVar8 == 0)) {
          if (uVar18 < 0x6c) {
            lStack_118 = lStack_98;
            iVar8 = FUN_1808698b0(FUN_180879510,lStack_90,param_1,param_5);
            if (iVar8 != 0) goto FUN_18087920b;
          }
          if ((((0x6d < uVar18) || (iVar8 = FUN_1808df2b0(param_1), iVar8 == 0)) &&
              ((0x6e < uVar18 || (iVar8 = FUN_1808deff0(param_1), iVar8 == 0)))) &&
             ((((0x71 < uVar18 || (iVar8 = FUN_1808df570(param_1), iVar8 == 0)) &&
               ((0x73 < uVar18 || (iVar8 = FUN_180868f00(FUN_180876d90,param_1,param_5), iVar8 == 0)
                ))) && ((0x74 < uVar18 ||
                        (iVar8 = FUN_180868f00(&UNK_180876e90,param_1,param_5), iVar8 == 0)))))) {
            if (uVar18 < 99) {
              iVar8 = FUN_180868d20(FUN_1808794d0,param_1,param_5);
              if ((((iVar8 != 0) ||
                   (iVar8 = FUN_180869080(FUN_1808794d0,param_1,param_5), iVar8 != 0)) ||
                  (iVar8 = FUN_180869020(FUN_1808794d0,param_1,param_5), iVar8 != 0)) ||
                 (iVar8 = FUN_180868f60(FUN_1808794d0,param_1,param_5), uVar12 = uVar10, iVar8 != 0)
                 ) goto FUN_18087920b;
              while ((iVar8 = (int)uVar12, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 0x108)))) {
                uVar4 = *(uint64_t *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar8 * 8);
                FUN_1808b0660(uVar4,5);
                FUN_1808b0660(uVar4,6);
                FUN_1808b0660(uVar4,7);
                uVar12 = (ulonglong)(iVar8 + 1);
              }
            }
            if (((0x85 < uVar18) ||
                (iVar8 = FUN_180868d80(FUN_180877f00,param_1,param_5), iVar8 == 0)) &&
               ((0x75 < uVar18 || (iVar8 = FUN_180868d80(FUN_180877810,param_1,param_5), iVar8 == 0)
                ))) {
              if (uVar18 < 0x82) {
                while ((iStack_c8 = (int)uVar10, uVar18 = uStack_a8, -1 < iStack_c8 &&
                       (iStack_c8 < *(int *)(param_1 + 0x1c8)))) {
                  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (longlong)iStack_c8 * 8);
                  puVar19 = *(uint64_t **)(lVar3 + 0x48);
                  lStack_98 = lVar3;
                  while ((puVar5 = *(uint64_t **)(lVar3 + 0x48), puStack_a0 = puVar19,
                         puVar5 <= puVar19 &&
                         (puVar19 < (uint64_t *)
                                    ((longlong)*(int *)(lVar3 + 0x50) * 0x1c + (longlong)puVar5))))
                  {
                    uStack_c0 = (longlong *)*puVar19;
                    uStack_b8 = puVar19[1];
                    lStack_90 = (**(code **)(*param_5 + 0x128))
                                          (param_5,&uStack_c0,
                                           CONCAT71((int7)((ulonglong)puVar19 >> 8),1));
                    if (lStack_90 == 0) {
                      uStack_d0 = (uint)uStack_b8._7_1_;
                      uStack_d8 = (uint)uStack_b8._6_1_;
                      uStack_e0 = (uint)uStack_b8._5_1_;
                      uStack_e8 = (uint)uStack_b8._4_1_;
                      uStack_f0 = (uint)uStack_b8._3_1_;
                      uStack_f8 = (uint)uStack_b8._2_1_;
                      uStack_100 = (uint)uStack_b8._1_1_;
                      uStack_108 = (uint)(byte)uStack_b8;
                      uStack_110 = (uint)uStack_c0._6_2_;
                      lStack_118 = CONCAT44(lStack_118._4_4_,(uint)uStack_c0._4_2_);
                    // WARNING: Subroutine does not return
                      FUN_18076b390(auStack_80,0x27,&UNK_180958180,(ulonglong)uStack_c0 & 0xffffffff
                                   );
                    }
                    lStack_118 = CONCAT71(lStack_118._1_7_,*(int8_t *)(puVar19 + 3));
                    FUN_1808b06c0(lStack_90 + 200,lStack_98 + 0x38,*(int32_t *)(puVar19 + 2),
                                  *(int32_t *)((longlong)puVar19 + 0x14));
                    puVar19 = (uint64_t *)((longlong)puStack_a0 + 0x1c);
                  }
                  FUN_180874670((uint64_t *)(lVar3 + 0x48),puVar5,puVar19);
                  param_1 = lStack_88;
                  uVar10 = (ulonglong)(iStack_c8 + 1);
                }
              }
              iVar8 = 0;
              if (((0x88 < uVar18) ||
                  (iVar13 = FUN_180868d80(FUN_180876eb0,param_1,param_5), iVar13 == 0)) &&
                 (uVar18 < 0x8d)) {
                for (; (-1 < iVar8 && (iVar8 < *(int *)(param_1 + 0x1b8))); iVar8 = iVar8 + 1) {
                  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar8 * 8);
                  if (*(int *)(lVar3 + 0x68) != 0) {
                    puVar2 = (uint *)(lVar3 + 0x34);
                    *puVar2 = *puVar2 | 0x20;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
FUN_18087920b:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808789b7(float param_1)
void FUN_1808789b7(float param_1)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong unaff_RBP;
  int32_t uVar15;
  uint uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong unaff_R12;
  uint unaff_R13D;
  int32_t *puVar19;
  ulonglong unaff_R14;
  longlong *unaff_R15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar20;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  
  if (unaff_R13D < 0x50) {
    uVar13 = unaff_R14 & 0xffffffff;
    while ((iVar10 = (int)uVar13, -1 < iVar10 && (iVar10 < *(int *)(unaff_R12 + 0xe8)))) {
      lVar3 = *(longlong *)(*(longlong *)(unaff_R12 + 0xe0) + (longlong)iVar10 * 8);
      if (((*(int *)(lVar3 + 0x70) != 0) ||
          (((*(int *)(lVar3 + 0x74) != 0 || (*(int *)(lVar3 + 0x78) != 0)) ||
           (*(int *)(lVar3 + 0x7c) != 0)))) &&
         (((lVar12 = (**(code **)(*unaff_R15 + 0x278))(param_1,lVar3 + 0x70,1),
           param_1 = extraout_XMM0_Da, lVar12 != 0 &&
           (param_1 = *(float *)(lVar12 + 0x38), 0.0 < param_1)) && (0.0 < *(float *)(lVar3 + 0xa8))
          ))) {
        param_1 = param_1 / *(float *)(lVar3 + 0xa8);
        *(float *)(lVar3 + 0xac) = param_1;
      }
      uVar13 = (ulonglong)(iVar10 + 1);
    }
    iVar10 = FUN_180869080(FUN_180876fb0);
    if (iVar10 != 0) goto LAB_180879203;
    uVar13 = unaff_R14 & 0xffffffff;
    fVar20 = extraout_XMM0_Da_00;
    while ((iVar10 = (int)uVar13, -1 < iVar10 && (iVar10 < *(int *)(unaff_R12 + 0x158)))) {
      lVar3 = *(longlong *)(*(longlong *)(unaff_R12 + 0x150) + (longlong)iVar10 * 8);
      if ((*(int *)(lVar3 + 0x70) != 0) ||
         (((*(int *)(lVar3 + 0x74) != 0 || (*(int *)(lVar3 + 0x78) != 0)) ||
          (*(int *)(lVar3 + 0x7c) != 0)))) {
        lVar12 = (**(code **)(*unaff_R15 + 0x278))(fVar20,lVar3 + 0x70,1);
        fVar20 = extraout_XMM0_Da_01;
        if (((lVar12 != 0) && (fVar20 = *(float *)(lVar12 + 0x38), 0.0 < fVar20)) &&
           (0.0 < *(float *)(lVar3 + 0xa8))) {
          fVar20 = fVar20 / *(float *)(lVar3 + 0xa8);
          *(float *)(lVar3 + 0xac) = fVar20;
        }
      }
      uVar13 = (ulonglong)(iVar10 + 1);
    }
    iVar10 = FUN_180869020(FUN_180876fb0);
    if ((iVar10 != 0) ||
       (iVar10 = FUN_180868f60(FUN_180876fb0), param_1 = extraout_XMM0_Da_02, iVar10 != 0))
    goto LAB_180879203;
  }
  if ((0x52 < unaff_R13D) ||
     (iVar10 = FUN_1808782a0(param_1,*(uint64_t *)(unaff_RBP + -0x59)),
     param_1 = extraout_XMM0_Da_03, iVar10 == 0)) {
    if (unaff_R13D < 0x54) {
      uVar13 = unaff_R14 & 0xffffffff;
      while ((iVar10 = (int)uVar13, -1 < iVar10 && (iVar10 < *(int *)(unaff_R12 + 0xd8)))) {
        lVar3 = *(longlong *)(*(longlong *)(unaff_R12 + 0xd0) + (longlong)iVar10 * 8);
        for (uVar13 = *(ulonglong *)(lVar3 + 0x48);
            (uVar14 = *(ulonglong *)(lVar3 + 0x48), uVar14 <= uVar13 &&
            (uVar13 < uVar14 + (longlong)*(int *)(lVar3 + 0x50) * 0x18)); uVar13 = uVar13 + 0x18) {
          lVar12 = (**(code **)(*unaff_R15 + 0x128))(param_1,uVar13,CONCAT71((int7)(uVar14 >> 8),1))
          ;
          if (lVar12 != 0) {
            *(int32_t *)(lVar12 + 0xb0) = 0xffffffff;
          }
          param_1 = extraout_XMM0_Da_04;
        }
        plVar1 = (longlong *)(lVar3 + 0x68);
        plVar17 = *(longlong **)(lVar3 + 0x68);
        if (plVar17 != plVar1) {
          lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
          do {
            if ((*(int *)(lVar3 + 0x48) < _DAT_180c4ea98) &&
               (param_1 = (float)FUN_1808fcb90(&DAT_180c4ea98), _DAT_180c4ea98 == -1)) {
              _DAT_180c4ea94 = 0;
              param_1 = (float)FUN_1808fcb30(&DAT_180c4ea98);
            }
            if ((int)plVar17[0x14] != _DAT_180c4ea94) {
              for (uVar13 = plVar17[0x10];
                  (uVar14 = plVar17[0x10], uVar14 <= uVar13 &&
                  (uVar13 < uVar14 + (longlong)(int)plVar17[0x11] * 0x18)); uVar13 = uVar13 + 0x18)
              {
                lVar12 = (**(code **)(*unaff_R15 + 0x128))
                                   (param_1,uVar13,CONCAT71((int7)(uVar14 >> 8),1));
                if (lVar12 != 0) {
                  *(int32_t *)(lVar12 + 0xb0) = 0xffffffff;
                }
                param_1 = extraout_XMM0_Da_05;
              }
            }
          } while ((plVar17 != plVar1) && (plVar17 = (longlong *)*plVar17, plVar17 != plVar1));
          unaff_R12 = *(longlong *)(unaff_RBP + -0x41);
        }
        uVar13 = (ulonglong)(iVar10 + 1);
      }
      unaff_R13D = *(uint *)(unaff_RBP + -0x61);
      unaff_R14 = 0;
    }
    if ((((0x54 < unaff_R13D) || (iVar10 = FUN_180868f00(FUN_1808780d0,unaff_R12), iVar10 == 0)) &&
        ((0x55 < unaff_R13D || (iVar10 = FUN_180877970(unaff_R12), iVar10 == 0)))) &&
       ((0x56 < unaff_R13D || (iVar10 = FUN_180868f00(FUN_180876d70,unaff_R12), iVar10 == 0)))) {
      if (unaff_R13D < 0x58) {
        uVar13 = unaff_R14 & 0xffffffff;
        while ((iVar10 = (int)uVar13, -1 < iVar10 && (iVar10 < *(int *)(unaff_R12 + 0x158)))) {
          iVar11 = FUN_180879270(*(uint64_t *)
                                  (*(longlong *)(unaff_R12 + 0x150) + (longlong)iVar10 * 8));
          if (iVar11 != 0) goto LAB_180879203;
          uVar13 = (ulonglong)(iVar10 + 1);
        }
        uVar13 = unaff_R14 & 0xffffffff;
        while ((iVar10 = (int)uVar13, -1 < iVar10 && (iVar10 < *(int *)(unaff_R12 + 0x168)))) {
          iVar11 = FUN_180879270(*(uint64_t *)
                                  (*(longlong *)(unaff_R12 + 0x160) + (longlong)iVar10 * 8));
          if (iVar11 != 0) goto LAB_180879203;
          uVar13 = (ulonglong)(iVar10 + 1);
        }
      }
      if (unaff_R13D < 0x59) {
        uVar13 = unaff_R14 & 0xffffffff;
        while ((iVar10 = (int)uVar13, -1 < iVar10 && (iVar10 < *(int *)(unaff_R12 + 0x88)))) {
          lVar3 = *(longlong *)(*(longlong *)(unaff_R12 + 0x80) + (longlong)iVar10 * 8);
          if (*(int *)(lVar3 + 0x60) == 0x1e) {
            *(int8_t *)(lVar3 + 0x40) = 1;
          }
          uVar13 = (ulonglong)(iVar10 + 1);
        }
      }
      if ((0x5a < unaff_R13D) ||
         ((((iVar10 = FUN_180868e40(FUN_1808777c0,unaff_R12), iVar10 == 0 &&
            (iVar10 = FUN_180868de0(FUN_1808777c0,unaff_R12), iVar10 == 0)) &&
           (iVar10 = FUN_180868fc0(FUN_1808777c0,unaff_R12), iVar10 == 0)) &&
          (iVar10 = FUN_180868ea0(FUN_1808777c0,unaff_R12), iVar10 == 0)))) {
        if (unaff_R13D < 0x61) {
          uVar14 = unaff_R14 & 0xffffffff;
          uVar15 = (int32_t)unaff_R14;
          uVar18 = unaff_R14 & 0xffffffff;
          uVar13 = unaff_R14;
          if (0 < *(int *)(unaff_R12 + 0x1a8)) {
            do {
              cVar9 = FUN_1808c84b0(*(uint64_t *)(uVar13 + *(longlong *)(unaff_R12 + 0x1a0)));
              if (cVar9 == '\0') {
                puVar2 = (uint *)(*(longlong *)(*(longlong *)(unaff_R12 + 0x1a0) + uVar13) + 0xf8);
                *puVar2 = *puVar2 | 1;
                uVar14 = (ulonglong)((int)uVar14 + 1);
              }
              uVar15 = (int32_t)uVar14;
              uVar16 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar16;
              uVar13 = uVar13 + 8;
            } while ((int)uVar16 < *(int *)(unaff_R12 + 0x1a8));
          }
          *(int32_t *)(unaff_R12 + 0x2f4) = uVar15;
        }
        if ((unaff_R13D < 100) &&
           (uVar14 = unaff_R14 & 0xffffffff, uVar13 = unaff_R14, 0 < *(int *)(unaff_R12 + 0x1a8))) {
          do {
            lVar3 = *(longlong *)(uVar13 + *(longlong *)(unaff_R12 + 0x1a0));
            if (((*(int *)(lVar3 + 0x60) != 0) ||
                ((*(int *)(lVar3 + 100) != 0 || (*(int *)(lVar3 + 0x68) != 0)))) ||
               (*(int *)(lVar3 + 0x6c) != 0)) {
              *(uint *)(lVar3 + 0xf8) = *(uint *)(lVar3 + 0xf8) | 2;
            }
            uVar16 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar16;
            uVar13 = uVar13 + 8;
          } while ((int)uVar16 < *(int *)(unaff_R12 + 0x1a8));
        }
        if ((0x6a < unaff_R13D) || (iVar10 = FUN_1808df350(unaff_R12), iVar10 == 0)) {
          if (unaff_R13D < 0x6c) {
            iVar10 = FUN_1808698b0(FUN_180879510,*(uint64_t *)(unaff_RBP + -0x49),unaff_R12);
            if (iVar10 != 0) goto LAB_180879203;
          }
          if ((((((0x6d < unaff_R13D) || (iVar10 = FUN_1808df2b0(unaff_R12), iVar10 == 0)) &&
                ((0x6e < unaff_R13D || (iVar10 = FUN_1808deff0(unaff_R12), iVar10 == 0)))) &&
               ((0x71 < unaff_R13D || (iVar10 = FUN_1808df570(unaff_R12), iVar10 == 0)))) &&
              ((0x73 < unaff_R13D || (iVar10 = FUN_180868f00(FUN_180876d90,unaff_R12), iVar10 == 0))
              )) && ((0x74 < unaff_R13D ||
                     (iVar10 = FUN_180868f00(&UNK_180876e90,unaff_R12), iVar10 == 0)))) {
            if (unaff_R13D < 99) {
              iVar10 = FUN_180868d20(FUN_1808794d0,unaff_R12);
              if ((((iVar10 != 0) || (iVar10 = FUN_180869080(FUN_1808794d0,unaff_R12), iVar10 != 0))
                  || (iVar10 = FUN_180869020(FUN_1808794d0,unaff_R12), iVar10 != 0)) ||
                 (iVar10 = FUN_180868f60(FUN_1808794d0,unaff_R12), iVar10 != 0)) goto LAB_180879203;
              uVar13 = unaff_R14 & 0xffffffff;
              while ((iVar10 = (int)uVar13, -1 < iVar10 && (iVar10 < *(int *)(unaff_R12 + 0x108))))
              {
                uVar4 = *(uint64_t *)(*(longlong *)(unaff_R12 + 0x100) + (longlong)iVar10 * 8);
                FUN_1808b0660(uVar4,5);
                FUN_1808b0660(uVar4,6);
                FUN_1808b0660(uVar4,7);
                uVar13 = (ulonglong)(iVar10 + 1);
              }
            }
            if (((0x85 < unaff_R13D) ||
                (iVar10 = FUN_180868d80(FUN_180877f00,unaff_R12), iVar10 == 0)) &&
               ((0x75 < unaff_R13D || (iVar10 = FUN_180868d80(FUN_180877810,unaff_R12), iVar10 == 0)
                ))) {
              if (unaff_R13D < 0x82) {
                uVar13 = unaff_R14 & 0xffffffff;
                while ((iVar10 = (int)uVar13, -1 < iVar10 && (iVar10 < *(int *)(unaff_R12 + 0x1c8)))
                      ) {
                  lVar3 = *(longlong *)(*(longlong *)(unaff_R12 + 0x1c0) + (longlong)iVar10 * 8);
                  puVar19 = *(int32_t **)(lVar3 + 0x48);
                  *(longlong *)(unaff_RBP + -0x51) = lVar3;
                  while( true ) {
                    puVar5 = *(int32_t **)(lVar3 + 0x48);
                    *(int32_t **)(unaff_RBP + -0x59) = puVar19;
                    if ((puVar19 < puVar5) ||
                       (puVar5 + (longlong)*(int *)(lVar3 + 0x50) * 7 <= puVar19)) break;
                    uVar15 = *puVar19;
                    uVar6 = puVar19[1];
                    uVar7 = puVar19[2];
                    uVar8 = puVar19[3];
                    lVar12 = *unaff_R15;
                    *(int32_t *)(unaff_RBP + -0x79) = uVar15;
                    *(int32_t *)(unaff_RBP + -0x75) = uVar6;
                    *(int32_t *)(unaff_RBP + -0x71) = uVar7;
                    *(int32_t *)(unaff_RBP + -0x6d) = uVar8;
                    lVar12 = (**(code **)(lVar12 + 0x128))
                                       (uVar15,unaff_RBP + -0x79,
                                        CONCAT71((int7)((ulonglong)puVar19 >> 8),1));
                    *(longlong *)(unaff_RBP + -0x49) = lVar12;
                    if (lVar12 == 0) {
                    // WARNING: Subroutine does not return
                      FUN_18076b390(unaff_RBP + -0x39,0x27,&UNK_180958180,
                                    *(int32_t *)(unaff_RBP + -0x79),
                                    *(int16_t *)(unaff_RBP + -0x75));
                    }
                    FUN_1808b06c0(lVar12 + 200,*(longlong *)(unaff_RBP + -0x51) + 0x38,puVar19[4],
                                  puVar19[5],*(int8_t *)(puVar19 + 6));
                    puVar19 = (int32_t *)(*(longlong *)(unaff_RBP + -0x59) + 0x1c);
                  }
                  FUN_180874670((ulonglong *)(lVar3 + 0x48),puVar5,puVar19);
                  unaff_R12 = *(longlong *)(unaff_RBP + -0x41);
                  uVar13 = (ulonglong)(iVar10 + 1);
                }
                unaff_R13D = *(uint *)(unaff_RBP + -0x61);
                unaff_R14 = 0;
              }
              if (((0x88 < unaff_R13D) ||
                  (iVar10 = FUN_180868d80(FUN_180876eb0,unaff_R12), iVar10 == 0)) &&
                 (unaff_R13D < 0x8d)) {
                while ((iVar10 = (int)unaff_R14, -1 < iVar10 &&
                       (iVar10 < *(int *)(unaff_R12 + 0x1b8)))) {
                  lVar3 = *(longlong *)(*(longlong *)(unaff_R12 + 0x1b0) + (longlong)iVar10 * 8);
                  if (*(int *)(lVar3 + 0x68) != 0) {
                    puVar2 = (uint *)(lVar3 + 0x34);
                    *puVar2 = *puVar2 | 0x20;
                  }
                  unaff_R14 = (ulonglong)(iVar10 + 1);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_180879203:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x11) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18087920b(void)
void FUN_18087920b(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x11) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



