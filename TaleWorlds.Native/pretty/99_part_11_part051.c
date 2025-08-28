#include "TaleWorlds.Native.Split.h"

// 99_part_11_part051.c - 6 个函数

// 函数: void FUN_1807afd30(longlong param_1,uint param_2,longlong param_3)
void FUN_1807afd30(longlong param_1,uint param_2,longlong param_3)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  longlong *plVar14;
  uint64_t *puVar15;
  uint uVar16;
  int32_t uVar17;
  bool bVar18;
  int8_t auStack_118 [32];
  ulonglong uStack_f8;
  int8_t uStack_f0;
  int8_t uStack_e8;
  int32_t *puStack_d8;
  int8_t auStack_d0 [12];
  int32_t uStack_c4;
  int32_t uStack_c0;
  int8_t auStack_98 [4];
  int iStack_94;
  int32_t uStack_90;
  int iStack_8c;
  int iStack_88;
  int32_t uStack_84;
  uint uStack_80;
  int iStack_7c;
  byte bStack_78;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  puVar15 = (uint64_t *)0x0;
  *(int32_t *)(param_1 + 0x28) = 5;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
  uVar17 = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  if ((param_3 != 0) && (*(longlong *)(param_3 + 0xd8) != 0)) {
    uVar7 = FUN_1807af480(*(uint64_t *)(param_1 + 0x20));
    *(uint64_t *)(param_1 + 0x178) = uVar7;
  }
  if (*(longlong *)(param_1 + 0x178) == 0) {
    uStack_f8 = 0;
    iVar5 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),auStack_98,1);
    if ((((((iVar5 != 0) || (iVar5 = func_0x00018076b6b0(auStack_98,&UNK_18095d378,4), iVar5 == 0))
          || (iVar5 = func_0x00018076b6b0(auStack_98,&UNK_18095d380), iVar5 != 0)) ||
         (((iStack_94 == 0 || (iStack_94 != 1)) ||
          ((iVar5 = iStack_88 + 0x3c, uStack_80 == 0xf && (iStack_7c != 1)))))) ||
        ((bStack_78 & 2) != 0)) ||
       (((uStack_80 < 0xf && ((0x537aU >> (uStack_80 & 0x1f) & 1) != 0)) ||
        ((0x10 < uStack_80 || ((0x18884U >> (uStack_80 & 0x1f) & 1) == 0)))))) goto LAB_1807b047d;
    lVar10 = CONCAT44(uStack_68,uStack_6c);
    lVar11 = *(longlong *)(param_1 + 0x20);
    lVar12 = CONCAT44(uStack_60,uStack_64);
    uStack_58 = 0;
    uStack_50 = 0;
    if ((lVar10 != 0) || (puVar9 = puVar15, lVar12 != 0)) {
      bVar18 = lVar11 != 0;
      if (bVar18) {
        func_0x000180743c20(lVar11,0x12);
        lVar12 = CONCAT44(uStack_60,uStack_64);
        lVar10 = CONCAT44(uStack_68,uStack_6c);
      }
      for (puVar9 = *(uint64_t **)(lVar11 + 0x127d0); puVar9 != (uint64_t *)(lVar11 + 0x127d0);
          puVar9 = (uint64_t *)*puVar9) {
        if ((lVar10 == puVar9[2]) && (lVar12 == puVar9[3])) {
          *(int *)(puVar9 + 4) = *(int *)(puVar9 + 4) + 1;
          if ((bVar18) && (lVar11 != 0)) {
                    // WARNING: Subroutine does not return
            FUN_180743d60(lVar11,0x12);
          }
          goto LAB_1807aff2e;
        }
      }
      puVar9 = puVar15;
      if ((bVar18) && (lVar11 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar11,0x12);
      }
    }
LAB_1807aff2e:
    *(uint64_t **)(param_1 + 0x178) = puVar9;
    if (puVar9 == (uint64_t *)0x0) {
      uStack_f8 = uStack_f8 & 0xffffffff00000000;
      puVar8 = (uint64_t *)
               FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x50,&UNK_18095d390,0x26d);
      puVar9 = puVar15;
      if (puVar8 != (uint64_t *)0x0) {
        *puVar8 = puVar8;
        puVar8[1] = puVar8;
        puVar9 = puVar8;
      }
      *(uint64_t **)(param_1 + 0x178) = puVar9;
      if (puVar9 == (uint64_t *)0x0) goto LAB_1807b047d;
      iVar6 = FUN_1807b04d0(*(uint64_t *)(param_1 + 0x170),auStack_98,puVar9 + 8,puVar9 + 7);
      if (iVar6 != 0) {
        plVar14 = *(longlong **)(param_1 + 0x178);
        *(longlong *)plVar14[1] = *plVar14;
        *(longlong *)(*plVar14 + 8) = plVar14[1];
        uVar7 = 0x276;
LAB_1807affe3:
        *plVar14 = (longlong)plVar14;
        plVar14[1] = (longlong)plVar14;
        uStack_f8 = CONCAT71(uStack_f8._1_7_,1);
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar14,&UNK_18095d390,uVar7);
      }
      if ((param_2 >> 0x1b & 1) == 0) {
        lVar11 = *(longlong *)(param_1 + 0x178);
        uVar7 = *(uint64_t *)(param_1 + 0x170);
        *(uint64_t *)(lVar11 + 0x48) = 0;
        if (iStack_88 != 0) {
          uStack_e8 = 1;
          uStack_f0 = 0;
          uStack_f8 = uStack_f8 & 0xffffffff00000000;
          lVar10 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),iStack_88,&UNK_18095d390,
                                 0x233);
          if (lVar10 == 0) {
LAB_1807b009b:
            plVar14 = *(longlong **)(param_1 + 0x178);
            uStack_f8 = CONCAT71(uStack_f8._1_7_,1);
            *(longlong *)plVar14[1] = *plVar14;
            *(longlong *)(*plVar14 + 8) = plVar14[1];
            plVar14[1] = (longlong)plVar14;
            *plVar14 = (longlong)plVar14;
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar14,&UNK_18095d390,0x280);
          }
          uStack_f8 = 0;
          iVar6 = FUN_180769ed0(uVar7,lVar10,1,iStack_88);
          if (iVar6 != 0) goto LAB_1807b009b;
          *(longlong *)(lVar11 + 0x48) = lVar10;
        }
      }
      lVar11 = *(longlong *)(param_1 + 0x178);
      *(int32_t *)(lVar11 + 0x10) = uStack_6c;
      *(int32_t *)(lVar11 + 0x14) = uStack_68;
      *(int32_t *)(lVar11 + 0x18) = uStack_64;
      *(int32_t *)(lVar11 + 0x1c) = uStack_60;
      *(int32_t *)(*(longlong *)(param_1 + 0x178) + 0x24) = uStack_90;
      *(byte *)(*(longlong *)(param_1 + 0x178) + 0x28) = bStack_78 & 1;
      *(uint *)(*(longlong *)(param_1 + 0x178) + 0x2c) = uStack_80;
      *(int *)(*(longlong *)(param_1 + 0x178) + 0x30) = iStack_8c + iVar5;
      *(int32_t *)(*(longlong *)(param_1 + 0x178) + 0x34) = uStack_84;
      plVar14 = *(longlong **)(param_1 + 0x178);
      if ((*(int *)((longlong)plVar14 + 0x2c) == 0xf) &&
         (puVar9 = puVar15, 0 < *(int *)((longlong)plVar14 + 0x24))) {
        do {
          iVar5 = FUN_1807afa40(param_1,puVar9,auStack_d0,0);
          if (iVar5 != 0) {
            plVar14 = *(longlong **)(param_1 + 0x178);
            uVar7 = 0x296;
            *(longlong *)plVar14[1] = *plVar14;
            *(longlong *)(*plVar14 + 8) = plVar14[1];
            goto LAB_1807affe3;
          }
          iVar5 = func_0x0001807af9a0(param_1,puVar9,&puStack_d8);
          if (iVar5 != 0) {
            plVar14 = *(longlong **)(param_1 + 0x178);
            uVar7 = 0x29f;
            *(longlong *)plVar14[1] = *plVar14;
            *(longlong *)(*plVar14 + 8) = plVar14[1];
            goto LAB_1807affe3;
          }
          iVar5 = FUN_1807b0b00(uStack_c4,uStack_c0,*puStack_d8);
          plVar14 = *(longlong **)(param_1 + 0x178);
          if (iVar5 != 0) {
            uStack_f8 = CONCAT71(uStack_f8._1_7_,1);
            *(longlong *)plVar14[1] = *plVar14;
            *(longlong *)(*plVar14 + 8) = plVar14[1];
            plVar14[1] = (longlong)plVar14;
            *plVar14 = (longlong)plVar14;
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar14,&UNK_18095d390,0x2a7);
          }
          uVar16 = (int)puVar9 + 1;
          puVar9 = (uint64_t *)(ulonglong)uVar16;
        } while ((int)uVar16 < *(int *)((longlong)plVar14 + 0x24));
      }
      lVar11 = *(longlong *)(param_1 + 0x20);
      if (lVar11 != 0) {
        func_0x000180743c20(lVar11,0x12);
      }
      *(int32_t *)(plVar14 + 4) = 1;
      lVar10 = *(longlong *)(lVar11 + 0x127d0);
      *plVar14 = lVar10;
      plVar14[1] = lVar11 + 0x127d0;
      *(longlong **)(lVar10 + 8) = plVar14;
      *(longlong **)plVar14[1] = plVar14;
      if ((lVar11 != 0) && (lVar11 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar11,0x12);
      }
    }
  }
  if (param_3 != 0) {
    puVar1 = *(int32_t **)(param_3 + 0xd8);
    if (puVar1 != (int32_t *)0x0) {
      lVar11 = *(longlong *)(param_1 + 0x178);
      uVar2 = *(int32_t *)(lVar11 + 0x14);
      uVar3 = *(int32_t *)(lVar11 + 0x18);
      uVar4 = *(int32_t *)(lVar11 + 0x1c);
      *puVar1 = *(int32_t *)(lVar11 + 0x10);
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
    }
    piVar13 = *(int **)(param_3 + 0x28);
    if (((piVar13 != (int *)0x0) && (iVar5 = *(int *)(param_3 + 0x30), iVar5 != 0)) &&
       (*(int *)(param_3 + 0x20) == iVar5)) {
      if (0 < iVar5) {
        do {
          if (*(int *)(*(longlong *)(param_1 + 0x178) + 0x24) <= *piVar13) goto LAB_1807b047d;
          uVar16 = (int)puVar15 + 1;
          puVar15 = (uint64_t *)(ulonglong)uVar16;
          piVar13 = piVar13 + 1;
        } while ((int)uVar16 < iVar5);
      }
      uStack_e8 = 1;
      uStack_f0 = 0;
      uStack_f8 = uStack_f8 & 0xffffffff00000000;
      lVar11 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),iVar5 * 4,&UNK_18095d390,0x2c7)
      ;
      *(longlong *)(param_1 + 0x180) = lVar11;
      if (lVar11 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar11,*(uint64_t *)(param_3 + 0x28),(longlong)(iVar5 * 4));
      }
      goto LAB_1807b047d;
    }
  }
  lVar11 = *(longlong *)(param_1 + 0x178);
  *(int32_t *)(param_1 + 0x18) = *(int32_t *)(lVar11 + 0x24);
  if (*(char *)(lVar11 + 0x28) != '\0') {
    *(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) =
         *(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) | 4;
    lVar11 = *(longlong *)(param_1 + 0x178);
  }
  iVar5 = *(int *)(lVar11 + 0x2c);
  if (iVar5 == 0xb) {
    *(int32_t *)(param_1 + 0xa4) = 3;
  }
  else if (iVar5 == 10) {
    *(int32_t *)(param_1 + 0xa4) = 4;
  }
  else if (iVar5 == 7) {
    *(int32_t *)(param_1 + 0xa4) = 2;
  }
  else if (iVar5 == 0xd) {
    *(int32_t *)(param_1 + 0xa4) = 6;
  }
  else if (iVar5 == 0x10) {
    *(int32_t *)(param_1 + 0xa4) = 7;
  }
  else if (iVar5 == 0xf) {
    *(int32_t *)(param_1 + 0xa4) = 5;
  }
  else {
    if (iVar5 == 0x11) {
      uVar17 = 8;
    }
    *(int32_t *)(param_1 + 0xa4) = uVar17;
  }
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 2;
  *(int32_t *)(param_1 + 0x110) = *(int32_t *)(lVar11 + 0x30);
LAB_1807b047d:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_118);
}



// WARNING: Removing unreachable block (ram,0x0001807b0688)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1807b04d0(uint64_t param_1,longlong param_2,uint64_t *param_3,uint64_t *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint64_t uVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  uint uVar16;
  ulonglong in_stack_ffffffffffffff48;
  ulonglong uVar17;
  
  iVar13 = 0;
  puVar7 = (uint *)FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                                 *(int32_t *)(param_2 + 0xc),&UNK_18095d390,0x16a,
                                 in_stack_ffffffffffffff48 & 0xffffffff00000000,0,1);
  if (puVar7 != (uint *)0x0) {
    uVar17 = 0;
    uVar8 = FUN_180769ed0(param_1,puVar7,1,*(int32_t *)(param_2 + 0xc),0);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    piVar9 = (int *)FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(int *)(param_2 + 8) << 2
                                  ,&UNK_18095d390,0x173,uVar17 & 0xffffffff00000000,0,1);
    if (piVar9 != (int *)0x0) {
      piVar12 = piVar9;
      puVar10 = puVar7;
      if (0 < *(int *)(param_2 + 8)) {
        do {
          *piVar12 = (int)puVar10 - (int)puVar7;
          puVar15 = puVar10 + 2;
          if ((*puVar10 & 1) != 0) {
            do {
              uVar1 = *puVar15;
              uVar16 = uVar1 >> 1 & 0xffffff;
              uVar6 = uVar1 >> 0x19;
              if (((((uVar1 >> 0x19 != 0) && (uVar6 != 0xe)) && (uVar6 != 1)) &&
                  ((uVar6 != 2 && (uVar6 != 3)))) &&
                 ((uVar6 != 4 && ((uVar6 != 5 && (uVar6 == 6)))))) {
                iVar11 = 0;
                uVar6 = uVar16 >> 2;
                lVar14 = 0;
                if ((uVar16 >> 2 != 0) && (3 < uVar6)) {
                  do {
                    puVar10 = puVar15 + lVar14 + 1;
                    uVar2 = *puVar10;
                    uVar3 = puVar10[1];
                    uVar4 = puVar10[2];
                    uVar5 = puVar10[3];
                    iVar11 = iVar11 + 4;
                    puVar10 = puVar15 + lVar14 + 1;
                    *puVar10 = (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 & 0xff00) << 8 |
                               uVar2 << 0x18;
                    puVar10[1] = (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | uVar3 & 0xff00 |
                                 uVar3 & 0xff000000;
                    puVar10[2] = (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8 | uVar4 & 0xff00 |
                                 uVar4 & 0xff000000;
                    puVar10[3] = (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8 | uVar5 & 0xff00 |
                                 uVar5 & 0xff000000;
                    lVar14 = lVar14 + 4;
                  } while (iVar11 < (int)(uVar6 - (uVar6 & 0x80000003)));
                }
                if (iVar11 < (int)uVar6) {
                  uVar17 = (ulonglong)(uVar6 - iVar11);
                  puVar10 = puVar15 + lVar14 + 1;
                  do {
                    uVar6 = *puVar10;
                    *puVar10 = (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 |
                               (uVar6 << 0x10 | uVar6 & 0xff00) << 8;
                    uVar17 = uVar17 - 1;
                    puVar10 = puVar10 + 1;
                  } while (uVar17 != 0);
                }
              }
              puVar15 = (uint *)((longlong)puVar15 + (ulonglong)uVar16 + 4);
            } while ((uVar1 & 1) != 0);
          }
          iVar13 = iVar13 + 1;
          piVar12 = piVar12 + 1;
          puVar10 = puVar15;
        } while (iVar13 < *(int *)(param_2 + 8));
      }
      *param_3 = puVar7;
      *param_4 = piVar9;
      return 0;
    }
  }
  return 0x26;
}



// WARNING: Removing unreachable block (ram,0x0001807b0688)

uint64_t FUN_1807b05a9(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *in_RAX;
  uint *puVar9;
  int iVar10;
  int iVar11;
  longlong unaff_RBP;
  int unaff_EDI;
  longlong lVar12;
  ulonglong uVar13;
  uint *in_R10;
  uint uVar14;
  uint uVar15;
  uint64_t unaff_R14;
  ulonglong uVar16;
  uint64_t in_stack_00000040;
  uint64_t *in_stack_00000048;
  uint64_t *in_stack_00000050;
  
  uVar15 = unaff_EDI + 0x10;
  uVar1 = unaff_EDI + 8;
  iVar2 = unaff_EDI + 0x18;
  do {
    *in_RAX = (int)in_R10 - (int)unaff_R14;
    uVar7 = *in_R10;
    in_R10 = (uint *)((longlong)in_R10 + (ulonglong)uVar1);
    if ((uVar7 & 1) != 0) {
      do {
        uVar7 = *in_R10;
        uVar14 = uVar7 >> 1 & 0xffffff;
        uVar8 = uVar7 >> 0x19;
        if (((((uVar7 >> 0x19 != 0) && (uVar8 != 0xe)) && (uVar8 != 1)) &&
            ((uVar8 != 2 && (uVar8 != 3)))) && ((uVar8 != 4 && ((uVar8 != 5 && (uVar8 == 6)))))) {
          iVar10 = 0;
          uVar8 = uVar14 >> 2;
          lVar12 = 0;
          iVar11 = iVar10;
          if ((uVar14 >> 2 != 0) && (iVar11 = 0, 3 < uVar8)) {
            do {
              puVar9 = in_R10 + lVar12 + 1;
              uVar3 = *puVar9;
              uVar4 = puVar9[1];
              uVar5 = puVar9[2];
              uVar6 = puVar9[3];
              iVar10 = iVar10 + 4;
              uVar16 = (ulonglong)uVar15;
              uVar13 = (ulonglong)uVar1;
              puVar9 = in_R10 + lVar12 + 1;
              *puVar9 = (uVar3 & 0xff0000 | uVar3 >> uVar16) >> uVar13 | (uVar3 & 0xff00) << uVar1 |
                        uVar3 << iVar2 & 0xff000000;
              puVar9[1] = (uVar4 & 0xff0000 | uVar4 >> uVar16) >> uVar13 | uVar4 & 0xff00 |
                          uVar4 & 0xff000000;
              puVar9[2] = (uVar5 & 0xff0000 | uVar5 >> uVar16) >> uVar13 | uVar5 & 0xff00 |
                          uVar5 & 0xff000000;
              puVar9[3] = (uVar6 & 0xff0000 | uVar6 >> uVar16) >> uVar13 | uVar6 & 0xff00 |
                          uVar6 & 0xff000000;
              lVar12 = lVar12 + 4;
              iVar11 = iVar10;
            } while (iVar10 < (int)(uVar8 - (uVar8 & 0x80000003)));
          }
          if (iVar11 < (int)uVar8) {
            uVar13 = (ulonglong)(uVar8 - iVar11);
            puVar9 = in_R10 + lVar12 + 1;
            do {
              uVar8 = *puVar9;
              *puVar9 = (uVar8 & 0xff0000 | uVar8 >> 0x10) >> 8 |
                        (uVar8 << 0x10 | uVar8 & 0xff00) << 8;
              uVar13 = uVar13 - 1;
              puVar9 = puVar9 + 1;
            } while (uVar13 != 0);
          }
        }
        in_R10 = (uint *)((longlong)in_R10 + (ulonglong)uVar14 + 4);
      } while ((uVar7 & 1) != 0);
    }
    unaff_EDI = unaff_EDI + 1;
    in_RAX = in_RAX + 1;
  } while (unaff_EDI < *(int *)(unaff_RBP + 8));
  *in_stack_00000048 = unaff_R14;
  *in_stack_00000050 = in_stack_00000040;
  return 0;
}



uint64_t FUN_1807b07a0(void)

{
  uint64_t *unaff_R12;
  uint64_t *unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  
  *unaff_R12 = unaff_R14;
  *unaff_R13 = unaff_R15;
  return 0;
}



uint64_t FUN_1807b07d0(longlong param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 != 0) {
    *(int32_t *)(lVar1 + 0x158) = 0;
    if (*(longlong *)(lVar1 + 0x140) != 0) {
                    // WARNING: Subroutine does not return
      memset(*(longlong *)(lVar1 + 0x140),0,*(int32_t *)(lVar1 + 0x154));
    }
    if ((*(code **)(lVar1 + 0xb0) != (code *)0x0) &&
       (uVar2 = (**(code **)(lVar1 + 0xb0))(lVar1), (int)uVar2 != 0)) {
      return uVar2;
    }
  }
  return 0;
}



uint64_t FUN_1807b0830(longlong param_1,ulonglong param_2,int param_3,int32_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  int aiStack_18 [4];
  
  uVar2 = FUN_1807afa40(param_1,param_2,0,aiStack_18);
  if ((int)uVar2 == 0) {
    if (*(longlong *)(param_1 + 0x120) == 0) {
      uVar2 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),aiStack_18[0] + param_3,0);
      iVar1 = (int)uVar2;
    }
    else {
      *(int *)(*(longlong *)(param_1 + 0x120) + 0x110) = aiStack_18[0];
      uVar2 = FUN_180773610(*(uint64_t *)(param_1 + 0x120),param_2 & 0xffffffff,param_3,param_4);
      iVar1 = (int)uVar2;
    }
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807b08d0(longlong param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  uint64_t uVar2;
  longlong lVar3;
  byte *pbVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = param_2;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x180) + (longlong)param_2 * 4);
  }
  pbVar4 = (byte *)((longlong)
                    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x178) + 0x38) +
                            (longlong)iVar8 * 4) +
                   *(longlong *)(*(longlong *)(param_1 + 0x178) + 0x40));
  puVar5 = (uint *)(pbVar4 + 8);
  if ((*pbVar4 & 1) != 0) {
    do {
      uVar1 = *puVar5;
      uVar9 = uVar1 >> 1 & 0xffffff;
      puVar6 = puVar5 + 1;
      if (uVar1 >> 0x19 == 4) {
        iVar8 = 0;
        uVar7 = uVar9 / 0x104;
        if (uVar7 != 0) {
          do {
            uVar2 = (**(code **)(*param_3 + 0x108))
                              (param_3,*puVar6,2,puVar5 + (longlong)iVar8 * 0x41 + 2,0,param_2,0);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            iVar8 = iVar8 + 1;
            puVar6 = puVar6 + 0x41;
          } while (iVar8 < (int)uVar7);
        }
LAB_1807b0a45:
        if (uVar7 != 0) {
          if (param_3[0x15] != 0) {
            lVar3 = param_3[0x1d];
            if (lVar3 == 0) {
              lVar3 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                                    *(int *)(param_1 + 0x18) << 2,&UNK_18095d390,0x38c,0);
              param_3[0x1d] = lVar3;
              if (lVar3 == 0) {
                return 0x26;
              }
            }
            *(uint *)(lVar3 + (longlong)param_2 * 4) = uVar7;
          }
          uVar2 = FUN_180752af0(param_3);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
        }
      }
      else if (uVar1 >> 0x19 == 5) {
        lVar3 = 0;
        uVar7 = uVar9 >> 2;
        if (uVar9 >> 2 != 0) {
          do {
            uVar2 = (**(code **)(*param_3 + 0x108))(param_3,puVar6[lVar3],2,0,0,param_2,0);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            lVar3 = lVar3 + 1;
          } while (lVar3 < (longlong)(ulonglong)uVar7);
        }
        goto LAB_1807b0a45;
      }
      puVar5 = (uint *)((longlong)puVar5 + (ulonglong)uVar9 + 4);
    } while ((uVar1 & 1) != 0);
  }
  return 0;
}






// 函数: void FUN_1807b0b00(void)
void FUN_1807b0b00(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807b0ee0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x1a8),
                  &UNK_18097bdf0,200,1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807b0f30(longlong param_1,longlong param_2,int *param_3,int *param_4)
void FUN_1807b0f30(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ushort auStack_88 [4];
  longlong lStack_80;
  int8_t auStack_78 [32];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  lStack_80 = 0;
  iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),auStack_88,1,2,0);
  if (iVar1 == 0) {
    uVar4 = (uint)auStack_88[0];
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x18))
                      (*(longlong **)(param_1 + 0x170),&lStack_80,uVar4);
    if (iVar1 == 0) {
      if (lStack_80 == 0) {
        uVar2 = (ulonglong)uVar4 + 0xb & 0xfffffffffffffff8;
        uVar3 = uVar2 + 0xf;
        if (uVar3 <= uVar2) {
          uVar3 = 0xffffffffffffff0;
        }
                    // WARNING: Subroutine does not return
        FUN_1808fd200(uVar3 & 0xfffffffffffffff0);
      }
      func_0x00018080b970(auStack_78,lStack_80,uVar4);
      iVar1 = FUN_18080c230(*(uint64_t *)(param_1 + 0x1a0),auStack_78,1);
      if ((iVar1 == 0) && (param_2 != 0)) {
        iVar1 = FUN_18080bff0(*(uint64_t *)(param_1 + 0x1a0),
                              param_2 + (ulonglong)
                                        (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0xc) * *param_4
                                              ) * 4,*param_3);
        *param_4 = *param_4 + iVar1;
        *param_3 = *param_3 - iVar1;
        func_0x00018080c1c0(*(uint64_t *)(param_1 + 0x1a0),iVar1);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_88);
}



uint64_t FUN_1807b1190(longlong param_1,longlong param_2,int param_3,int *param_4)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  int aiStackX_8 [2];
  int aiStackX_18 [2];
  
  aiStackX_18[0] = 0;
  *param_4 = 0;
  iVar4 = 0;
  aiStackX_8[0] = param_3;
  if (param_3 != 0) {
    do {
      iVar4 = aiStackX_18[0];
      iVar3 = aiStackX_8[0];
      iVar1 = FUN_18080bff0(*(uint64_t *)(param_1 + 0x1a0),0,0);
      if (iVar1 != 0) {
        iVar1 = FUN_18080bff0(*(uint64_t *)(param_1 + 0x1a0),
                              param_2 + (ulonglong)
                                        (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0xc) * iVar4) *
                                        4,iVar3);
        iVar4 = iVar4 + iVar1;
        iVar3 = iVar3 - iVar1;
        aiStackX_8[0] = iVar3;
        aiStackX_18[0] = iVar4;
        func_0x00018080c1c0(*(uint64_t *)(param_1 + 0x1a0),iVar1);
        if (iVar3 == 0) break;
      }
      uVar2 = FUN_1807b0f30(param_1,param_2,aiStackX_8,aiStackX_18);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      iVar4 = aiStackX_18[0];
    } while (aiStackX_8[0] != 0);
  }
  *param_4 = iVar4;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807b1250(int param_1)
void FUN_1807b1250(int param_1)

{
  int *piVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  uVar2 = *(uint64_t *)(_DAT_180be12f0 + 0x128);
  FUN_180768360(uVar2);
  puVar3 = _DAT_180be4cc8;
  if (_DAT_180be4cc8 != (uint64_t *)&DAT_180be4cc8) {
    do {
      if (*(int *)(puVar3 + 3) == param_1) {
        piVar1 = (int *)((longlong)puVar3 + 0x34);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),puVar3[5],&UNK_18097bdf0,0x18c,1);
        }
        break;
      }
      puVar3 = (uint64_t *)*puVar3;
    } while (puVar3 != (uint64_t *)&DAT_180be4cc8);
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807b1350(longlong param_1,uint64_t param_2,uint param_3)
void FUN_1807b1350(longlong param_1,uint64_t param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int32_t uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int8_t auStack_98 [32];
  uint64_t uStack_78;
  ushort auStack_68 [2];
  int32_t uStack_64;
  int8_t auStack_60 [32];
  ulonglong uStack_40;
  
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  func_0x00018080c1e0(*(uint64_t *)(param_1 + 0x1a0));
  *(int32_t *)(param_1 + 0x1b0) = 0;
  uVar9 = *(uint *)(*(longlong *)(param_1 + 8) + 0x10);
  if (uVar9 < param_3) {
    uVar6 = *(ulonglong *)
             (*(longlong *)(param_1 + 0x1c8) + -8 + (longlong)(int)(param_3 / uVar9) * 8);
    iVar1 = (int)(uVar6 >> 0x20) + *(int *)(param_1 + 0x110);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x110);
    uVar6 = 0;
  }
  FUN_18076a440(*(uint64_t *)(param_1 + 0x170),iVar1,0);
  uVar8 = 0;
  while( true ) {
    uStack_64 = 0;
    uStack_78 = 0;
    iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),auStack_68,1);
    if (iVar1 != 0) break;
    uVar9 = (uint)auStack_68[0];
    uStack_78 = 0;
    iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),&uStack_64,1);
    if ((iVar1 != 0) ||
       (iVar1 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),uVar9 - 4,1), iVar1 != 0)) break;
    func_0x00018080b970(auStack_60,&uStack_64,4);
    uVar5 = FUN_18080c770(param_1 + 0x178,auStack_60);
    iVar1 = (int)uVar5;
    if (-1 < iVar1) {
      iVar7 = (int)uVar8;
      iVar4 = iVar1;
      if (iVar7 != 0) {
        uVar6 = (ulonglong)(uint)((int)uVar6 + (iVar7 + iVar1 >> 2));
        iVar4 = iVar7 + iVar1;
      }
      iVar2 = func_0x00018080b410(param_1 + 0x178,1);
      if ((int)param_3 <= (iVar2 + iVar1 >> 2) + (int)uVar6) {
        iVar1 = iVar4 >> 2;
        if (iVar7 == 0) {
          iVar1 = 0;
        }
        iVar1 = (int)uVar6 - iVar1;
        FUN_18076a440(*(uint64_t *)(param_1 + 0x170),-2 - uVar9,1);
        goto joined_r0x0001807b1542;
      }
      func_0x00018080b970(auStack_60,&uStack_64,4);
      FUN_18080c230(*(uint64_t *)(param_1 + 0x1a0),auStack_60,0);
      uVar3 = FUN_18080bff0(*(uint64_t *)(param_1 + 0x1a0),0,0);
      func_0x00018080c1c0(*(uint64_t *)(param_1 + 0x1a0),uVar3);
      uVar8 = uVar5 & 0xffffffff;
    }
  }
  goto LAB_1807b159c;
  while( true ) {
    iVar7 = param_3 - iVar1;
    iVar4 = FUN_18080bff0(*(uint64_t *)(param_1 + 0x1a0),0,0);
    if (iVar7 < iVar4) {
      iVar4 = iVar7;
    }
    func_0x00018080c1c0(*(uint64_t *)(param_1 + 0x1a0));
    iVar1 = iVar1 + iVar4;
    if ((iVar4 < iVar7) && (iVar4 = FUN_1807b0f30(param_1,0,0,0), iVar4 != 0)) break;
joined_r0x0001807b1542:
    if ((int)param_3 <= iVar1) break;
  }
LAB_1807b159c:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807b15d0(longlong param_1,int32_t param_2,uint64_t param_3,int32_t param_4,
void FUN_1807b15d0(longlong param_1,int32_t param_2,uint64_t param_3,int32_t param_4,
                  int *param_5,longlong param_6)

{
  int32_t uVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t *puVar4;
  
  *(int **)(param_1 + 0x1a0) = param_5;
  param_5 = (int *)0x0;
  iVar3 = (**(code **)(param_6 + 0xf0))(param_6,param_4,&param_5,0);
  if (iVar3 != 0) {
    return;
  }
  uVar1 = *(int32_t *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = *param_5;
  *(int **)(param_1 + 0x1c8) = param_5 + 2;
  *(int *)(param_1 + 0x1b4) = iVar3;
  *(int32_t *)(param_1 + 0x1b0) = 0;
  *(int32_t *)(param_1 + 0x17c) = param_2;
  *(int32_t *)(param_1 + 0x180) = uVar1;
  *(int32_t *)(param_1 + 0x178) = 0;
  uVar2 = *(uint64_t *)(_DAT_180be12f0 + 0x128);
  FUN_180768360(uVar2);
  puVar4 = _DAT_180be4cc8;
  if (_DAT_180be4cc8 != (uint64_t *)&DAT_180be4cc8) {
    do {
      if (*(int *)(puVar4 + 3) == iVar3) break;
      puVar4 = (uint64_t *)*puVar4;
    } while (puVar4 != (uint64_t *)&DAT_180be4cc8);
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




