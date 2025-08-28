#include "TaleWorlds.Native.Split.h"

// 99_part_09_part003.c - 3 个函数

// 函数: void FUN_1805beae0(longlong param_1)
void FUN_1805beae0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  void *puVar8;
  longlong lVar9;
  void *puVar10;
  float fVar11;
  uint64_t uStack_a8;
  longlong lStack_a0;
  int32_t uStack_98;
  float fStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  uint64_t uStack_88;
  uint64_t uStack_40;
  void *puStack_18;
  double dStack_10;
  
  uStack_98 = *(int32_t *)(param_1 + 0x28);
  fStack_94 = *(float *)(param_1 + 0x2c);
  uStack_90 = *(int32_t *)(param_1 + 0x30);
  uStack_8c = *(int32_t *)(param_1 + 0x34);
  uStack_a8 = *(uint64_t *)(param_1 + 0x18);
  lStack_a0 = *(longlong *)(param_1 + 0x20);
  uStack_88 = *(uint64_t *)(param_1 + 0x38);
  if (fStack_94 < 0.0) {
    FUN_1805d5a50(param_1 + 8);
    uStack_a8 = *(uint64_t *)(param_1 + 0x18);
    lStack_a0 = *(longlong *)(param_1 + 0x20);
    uStack_98 = *(int32_t *)(param_1 + 0x28);
    fStack_94 = *(float *)(param_1 + 0x2c);
    uStack_90 = *(int32_t *)(param_1 + 0x30);
    uStack_8c = *(int32_t *)(param_1 + 0x34);
    uStack_88 = *(uint64_t *)(param_1 + 0x38);
    if (lStack_a0 == 0) {
      cVar4 = '\0';
      if (*(char *)(param_1 + 0x1c30) != '\0') {
        puVar8 = &UNK_180a30c20;
        puStack_18 = &UNK_180a30c20;
        if (*(char *)(param_1 + 0x1c30) != '\0') {
          puVar8 = &UNK_180a30bd8;
        }
        uStack_40 = 0x1805b784a;
        func_0x000180508000(param_1,&UNK_180a37508,&UNK_180a374e0,puVar8);
        *(char *)(param_1 + 0x1c30) = cVar4;
        if (cVar4 == '\0') {
          *(int32_t *)(param_1 + 0x1c0c) = 0xffffffff;
          *(int32_t *)(param_1 + 0x1c14) = 0xffffffff;
          *(int32_t *)(param_1 + 0x1c1c) = 0xffffffff;
          *(int32_t *)(param_1 + 0x1c24) = 0xffffffff;
          *(int32_t *)(param_1 + 0x1c2c) = 0;
          *(int32_t *)(param_1 + 0x200c) = 0;
          *(int8_t *)(param_1 + 0x1c48) = 0;
          *(uint64_t *)(param_1 + 0x1c38) =
               *(uint64_t *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x1c40) * 8);
        }
        else if ((*(char *)(param_1 + 0x1c48) == '\0') &&
                (0.0 < (float)(*(longlong *)
                                (&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x1c40) * 8) -
                              *(longlong *)(param_1 + 0x1c38)) * 1e-05)) {
          if ((*(uint *)(param_1 + 0x209c) >> 0xb & 1) == 0) {
            uStack_40 = 0x1805b78ae;
            FUN_180508220();
          }
          *(int32_t *)(param_1 + 0x1c0c) = 0xffffffff;
          *(int32_t *)(param_1 + 0x1c14) = 0xffffffff;
          *(int32_t *)(param_1 + 0x1c1c) = 0xffffffff;
          *(int32_t *)(param_1 + 0x1c24) = 0xffffffff;
          *(int32_t *)(param_1 + 0x1c2c) = 0;
          *(int32_t *)(param_1 + 0x200c) = 0;
          *(int8_t *)(param_1 + 0x1c48) = 0;
          *(uint64_t *)(param_1 + 0x1c38) =
               *(uint64_t *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x1c40) * 8);
          puVar10 = &DAT_180c8ed30;
          puVar8 = &UNK_180a30c20;
          puStack_18 = (void *)(double)*(float *)(param_1 + 0x13b8);
          if (*(char *)(param_1 + 0x13bc) != '\0') {
            puVar8 = &UNK_180a30bd8;
          }
          dStack_10 = (double)((float)(*(longlong *)
                                        (&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x13b0) * 8)
                                      - *(longlong *)(param_1 + 0x13a8)) * 1e-05);
          uStack_40 = 0x180508086;
          lVar9 = param_1;
          func_0x000180508000(param_1,&UNK_180a30c70,&UNK_180a30be0,puVar8);
          if (*(char *)(param_1 + 0x13bc) == '\0') {
            *(int8_t *)(param_1 + 0x13bc) = 1;
            uVar3 = *(uint *)(param_1 + 0x1390) << 0xd ^ *(uint *)(param_1 + 0x1390);
            uVar3 = uVar3 >> 0x11 ^ uVar3;
            uVar3 = uVar3 << 5 ^ uVar3;
            *(uint *)(lVar9 + 0x1390) = uVar3;
            *(float *)(lVar9 + 0x13b8) = (float)(uVar3 - 1) * 1.3969839e-10 + 0.4;
            *(uint64_t *)(lVar9 + 0x13a8) =
                 *(uint64_t *)(puVar10 + (longlong)*(int *)(lVar9 + 0x13b0) * 8);
          }
          return;
        }
      }
      return;
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x1488);
  iVar5 = 0;
  iVar6 = 0;
  fVar1 = *(float *)(lVar9 + 0x98d9d8);
  lVar2 = *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar9 + 0x87b790) * 8);
  lVar9 = *(longlong *)(lVar9 + 0x87b788);
  if (0 < *(int *)(param_1 + 0x200c)) {
    pfVar7 = (float *)(param_1 + 0x1c58);
    do {
      fVar11 = pfVar7[-1];
      if (fVar11 == 0.0) {
        fVar11 = -1e+30;
      }
      else if ((int)fVar11 < 1) {
LAB_1805becc3:
        fVar11 = 1e+30;
      }
      else if ((int)fVar11 < 4) {
        uVar3 = *(uint *)(param_1 + 0x1390) << 0xd ^ *(uint *)(param_1 + 0x1390);
        uVar3 = uVar3 >> 0x11 ^ uVar3;
        uVar3 = uVar3 << 5 ^ uVar3;
        *(uint *)(param_1 + 0x1390) = uVar3;
        fVar11 = (float)(uVar3 - 1) * 1.8626452e-10 + *pfVar7 + 0.95;
      }
      else if (fVar11 == 5.60519e-45) {
        if (*(int *)(param_1 + 0x14a8) == 2) {
          fVar11 = *pfVar7 + 0.001;
        }
        else {
          fVar11 = *pfVar7 + 0.1;
        }
      }
      else {
        if (fVar11 != 7.00649e-45) goto LAB_1805becc3;
        fVar11 = *pfVar7 + 0.1;
      }
      if ((fVar11 < (float)(lVar2 - lVar9) * 1e-05) &&
         (*(int *)((longlong)(int)pfVar7[-3] * 0xa60 + 0x3608 + *(longlong *)(param_1 + 0x1488)) ==
          1)) {
        FUN_1805b8050(param_1,pfVar7 + -3,&uStack_a8);
        iVar5 = iVar5 + 1;
        if (iVar5 == (0.5 < fVar1) + 1) {
          return;
        }
      }
      iVar6 = iVar6 + 1;
      pfVar7 = pfVar7 + 0xf;
    } while (iVar6 < *(int *)(param_1 + 0x200c));
  }
  return;
}






// 函数: void FUN_1805bebd5(void)
void FUN_1805bebd5(void)

{
  uint uVar1;
  longlong unaff_RBX;
  int unaff_EBP;
  int unaff_ESI;
  float *pfVar2;
  int unaff_R14D;
  float fVar3;
  float unaff_XMM7_Da;
  int8_t auStackX_20 [8];
  
  pfVar2 = (float *)(unaff_RBX + 0x1c58);
  do {
    fVar3 = pfVar2[-1];
    if (fVar3 == 0.0) {
      fVar3 = -1e+30;
    }
    else if ((int)fVar3 < 1) {
LAB_1805becc3:
      fVar3 = 1e+30;
    }
    else if ((int)fVar3 < 4) {
      uVar1 = *(uint *)(unaff_RBX + 0x1390) << 0xd ^ *(uint *)(unaff_RBX + 0x1390);
      uVar1 = uVar1 >> 0x11 ^ uVar1;
      uVar1 = uVar1 << 5 ^ uVar1;
      *(uint *)(unaff_RBX + 0x1390) = uVar1;
      fVar3 = (float)(uVar1 - 1) * 1.8626452e-10 + *pfVar2 + 0.95;
    }
    else if (fVar3 == 5.60519e-45) {
      if (*(int *)(unaff_RBX + 0x14a8) == 2) {
        fVar3 = *pfVar2 + 0.001;
      }
      else {
        fVar3 = *pfVar2 + 0.1;
      }
    }
    else {
      if (fVar3 != 7.00649e-45) goto LAB_1805becc3;
      fVar3 = *pfVar2 + 0.1;
    }
    if ((fVar3 < unaff_XMM7_Da) &&
       (*(int *)((longlong)(int)pfVar2[-3] * 0xa60 + 0x3608 + *(longlong *)(unaff_RBX + 0x1488)) ==
        1)) {
      FUN_1805b8050(fVar3,pfVar2 + -3,auStackX_20);
      unaff_EBP = unaff_EBP + 1;
      if (unaff_EBP == unaff_R14D) {
        return;
      }
    }
    unaff_ESI = unaff_ESI + 1;
    pfVar2 = pfVar2 + 0xf;
    if (*(int *)(unaff_RBX + 0x200c) <= unaff_ESI) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1805bed4c(void)
void FUN_1805bed4c(void)

{
  return;
}



int * FUN_1805bed80(longlong *param_1,int *param_2,float param_3)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  
  iVar6 = *(int *)((longlong)param_1 + 0x14e4);
  param_2[0] = -1;
  param_2[1] = -1;
  if ((iVar6 < 0) || (*(int *)((longlong)param_1 + 0x201c) < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar6 = *(int *)((longlong)param_1 + 0x200c);
  uVar13 = 0;
  bVar4 = false;
  uVar16 = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < iVar6) {
    lVar15 = param_1[0x291];
    piVar7 = (int *)((longlong)param_1 + 0x1c54);
    uVar14 = uVar13;
    do {
      lVar11 = (longlong)piVar7[-2] * 0xa60;
      uVar8 = (uint)uVar14;
      if ((*(int *)(lVar11 + 0x3608 + lVar15) == 1) && (*piVar7 == 3)) {
        lVar2 = *(longlong *)(lVar11 + 0x30c0 + lVar15);
        fVar17 = *(float *)(lVar2 + 0x10) - *(float *)(*(longlong *)(*param_1 + 0x20) + 0x10);
        fVar18 = *(float *)(lVar2 + 0xc) - *(float *)(*(longlong *)(*param_1 + 0x20) + 0xc);
        uVar5 = (uint)uVar16;
        if (param_3 <= fVar17 * fVar17 + fVar18 * fVar18) {
          if (uVar5 == 0xffffffff) {
            uVar16 = uVar14;
          }
        }
        else {
          if ((!bVar3) ||
             (*(int *)((longlong)param_1 + 0x201c) == *(int *)(lVar11 + 0x35a4 + lVar15))) {
            bVar4 = true;
            uVar5 = uVar8;
            break;
          }
          if (!bVar4) {
            bVar4 = true;
            uVar5 = uVar8;
          }
          uVar16 = (ulonglong)uVar5;
        }
      }
      uVar5 = (uint)uVar16;
      uVar14 = (ulonglong)(uVar8 + 1);
      piVar7 = piVar7 + 0xf;
    } while ((int)(uVar8 + 1) < iVar6);
  }
  if (uVar5 != 0xffffffff) {
    uVar8 = uVar5;
    if ((!bVar4) && (*(int *)((longlong)param_1 + 0x1c2c) != 0)) {
      uVar12 = iVar6 - *(int *)((longlong)param_1 + 0x1c2c);
      if ((int)uVar12 < iVar6) {
        lVar15 = (longlong)(int)uVar12;
        piVar7 = (int *)((longlong)param_1 + lVar15 * 0x3c + 0x1c54);
        do {
          uVar8 = uVar5;
          if (((float)piVar7[-1] <=
               *(float *)((longlong)(int)uVar5 * 0x3c + 0x1c50 + (longlong)param_1)) ||
             ((*piVar7 == 3 &&
              (uVar8 = uVar12, *(int *)((longlong)piVar7[-2] * 0xa60 + 0x3608 + param_1[0x291]) == 1
              )))) goto LAB_1805bef4d;
          uVar12 = uVar12 + 1;
          lVar15 = lVar15 + 1;
          piVar7 = piVar7 + 0xf;
        } while (lVar15 < iVar6);
        iVar10 = *(int *)((longlong)(int)uVar5 * 0x3c + 0x1c4c + (longlong)param_1);
        uVar8 = uVar5;
        goto LAB_1805bf26a;
      }
    }
LAB_1805bef4d:
    iVar10 = *(int *)((longlong)(int)uVar8 * 0x3c + 0x1c4c + (longlong)param_1);
    goto LAB_1805bf26a;
  }
  cVar1 = (char)param_1[0x438];
  if (!bVar3) {
    if (cVar1 == '\0') {
      iVar10 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar10 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (-1 < iVar10) {
      lVar15 = param_1[0x291];
      lVar11 = *(longlong *)((longlong)iVar10 * 0xa60 + 0x3778 + lVar15);
      if ((lVar11 != 0) && (*(char *)(lVar11 + 0x8be) != '\0')) {
        if (cVar1 == '\0') {
          iVar10 = *(int *)((longlong)param_1 + 0x14b4);
        }
        else {
          iVar10 = *(int *)((longlong)param_1 + 0x21c4);
        }
        if (*(int *)((longlong)iVar10 * 0xa60 + 0x3608 + lVar15) == 1) {
          if (cVar1 == '\0') {
            iVar10 = *(int *)((longlong)param_1 + 0x14b4);
          }
          else {
            iVar10 = *(int *)((longlong)param_1 + 0x21c4);
          }
          if ((*(byte *)((longlong)iVar10 * 0xa60 + 0x360c + lVar15) & 8) != 0) goto LAB_1805bf18d;
        }
      }
    }
    uVar12 = iVar6 - *(int *)((longlong)param_1 + 0x1c2c);
    iVar9 = -1;
    if ((int)uVar12 < iVar6) {
      lVar15 = (longlong)(int)uVar12;
      piVar7 = (int *)((longlong)param_1 + lVar15 * 0x3c + 0x1c4c);
      uVar8 = uVar12;
      do {
        iVar10 = *piVar7;
        if (*(int *)((longlong)iVar10 * 0xa60 + 0x3608 + param_1[0x291]) == 1) {
          iVar9 = iVar10;
          uVar5 = uVar8;
          if (*(float *)((longlong)(int)uVar8 * 0x3c + 0x1c50 + (longlong)param_1) != -1e+30)
          goto LAB_1805bf26a;
          break;
        }
        uVar8 = uVar8 + 1;
        lVar15 = lVar15 + 1;
        piVar7 = piVar7 + 0xf;
        iVar9 = -1;
      } while (lVar15 < iVar6);
    }
    iVar10 = iVar9;
    uVar8 = uVar5;
    if (0 < (int)uVar12) {
      piVar7 = (int *)((longlong)param_1 + 0x1c4c);
      uVar16 = uVar13;
      do {
        iVar10 = *piVar7;
        if ((-1 < iVar10) &&
           (uVar8 = (uint)uVar13, *(int *)((longlong)iVar10 * 0xa60 + 0x3608 + param_1[0x291]) == 1)
           ) break;
        uVar13 = (ulonglong)((uint)uVar13 + 1);
        uVar16 = uVar16 + 1;
        piVar7 = piVar7 + 0xf;
        iVar10 = iVar9;
        uVar8 = uVar5;
      } while ((longlong)uVar16 < (longlong)(int)uVar12);
    }
    goto LAB_1805bf26a;
  }
  if (cVar1 == '\0') {
    iVar10 = *(int *)((longlong)param_1 + 0x14b4);
  }
  else {
    iVar10 = *(int *)((longlong)param_1 + 0x21c4);
  }
  if (iVar10 < 0) {
LAB_1805bf00e:
    iVar10 = -1;
    if (0 < iVar6) {
      piVar7 = (int *)((longlong)param_1 + 0x1c4c);
      do {
        iVar10 = *piVar7;
        uVar8 = (uint)uVar13;
        if ((*(int *)((longlong)param_1 + 0x201c) ==
             *(int *)((longlong)iVar10 * 0xa60 + 0x35a4 + param_1[0x291])) &&
           (*(int *)((longlong)iVar10 * 0xa60 + 0x3608 + param_1[0x291]) == 1)) {
          uVar5 = uVar8;
          if (uVar8 != 0xffffffff) goto LAB_1805bf26a;
          break;
        }
        uVar13 = (ulonglong)(uVar8 + 1);
        piVar7 = piVar7 + 0xf;
        iVar10 = -1;
      } while ((int)(uVar8 + 1) < iVar6);
    }
    if (cVar1 == '\0') {
      iVar6 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar6 = *(int *)((longlong)param_1 + 0x21c4);
    }
    uVar8 = uVar5;
    if (iVar6 < 0) goto LAB_1805bf26a;
    lVar15 = *(longlong *)((longlong)iVar6 * 0xa60 + 0x3778 + param_1[0x291]);
    if ((lVar15 == 0) || (*(char *)(lVar15 + 0x8be) == '\0')) goto LAB_1805bf26a;
    if (cVar1 == '\0') {
      iVar6 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar6 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (*(int *)((longlong)iVar6 * 0xa60 + 0x3608 + param_1[0x291]) != 1) goto LAB_1805bf26a;
    if (cVar1 != '\0') {
      iVar10 = *(int *)((longlong)param_1 + 0x21c4);
      uVar8 = 0xffffffff;
      goto LAB_1805bf26a;
    }
  }
  else {
    lVar15 = param_1[0x291];
    lVar11 = *(longlong *)((longlong)iVar10 * 0xa60 + 0x3778 + lVar15);
    if ((lVar11 == 0) || (*(char *)(lVar11 + 0x8be) == '\0')) goto LAB_1805bf00e;
    if (cVar1 == '\0') {
      iVar10 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar10 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (*(int *)((longlong)iVar10 * 0xa60 + 0x3608 + lVar15) != 1) goto LAB_1805bf00e;
    if (cVar1 == '\0') {
      iVar10 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar10 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (*(int *)((longlong)param_1 + 0x201c) != *(int *)((longlong)iVar10 * 0xa60 + 0x35a4 + lVar15)
       ) goto LAB_1805bf00e;
LAB_1805bf18d:
    if (cVar1 != '\0') {
      iVar10 = *(int *)((longlong)param_1 + 0x21c4);
      uVar8 = 0xffffffff;
      goto LAB_1805bf26a;
    }
  }
  iVar10 = *(int *)((longlong)param_1 + 0x14b4);
  uVar8 = 0xffffffff;
LAB_1805bf26a:
  uVar5 = 0xffffffff;
  if (-1 < iVar10) {
    uVar5 = uVar8;
  }
  *param_2 = iVar10;
  param_2[1] = uVar5;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




