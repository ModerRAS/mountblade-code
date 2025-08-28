#include "TaleWorlds.Native.Split.h"

// 99_part_09_part052.c - 12 个函数

// 函数: void FUN_1805d4f37(uint64_t param_1,uint64_t param_2,uint param_3)
void FUN_1805d4f37(uint64_t param_1,uint64_t param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint64_t *unaff_RBX;
  int32_t unaff_XMM7_Da;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)*unaff_RBX + 0x8f8) + 0x9e8);
  unaff_RBX[0x14] = lVar1;
  *(uint *)(unaff_RBX + 1) = param_3 | 0x20;
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x30))) {
    uVar2 = *(ulonglong *)
             ((longlong)*(int *)(lVar1 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar1 + 0xd0));
    if ((((uVar2 >> 9 & 1) == 0) || (0 < *(short *)(lVar1 + 8))) && ((uVar2 >> 1 & 1) != 0)) {
      unaff_XMM7_Da =
           FUN_1805bda40(*unaff_RBX,lVar1,(longlong)*(int *)(lVar1 + 0xf0),unaff_RBX + 0x21);
      goto LAB_1805d4fbe;
    }
  }
  *(int32_t *)(unaff_RBX + 0x21) = 0x3f800000;
LAB_1805d4fbe:
  *(int32_t *)((longlong)unaff_RBX + 0x104) = unaff_XMM7_Da;
  *(uint *)(unaff_RBX + 1) = *(uint *)(unaff_RBX + 1) | 0x1000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d4fe0(longlong *param_1)
void FUN_1805d4fe0(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  int8_t auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int8_t auStack_198 [32];
  uint64_t uStack_178;
  float fStack_170;
  int32_t uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int32_t uStack_15c;
  void *puStack_158;
  int32_t uStack_150;
  int32_t uStack_14c;
  int8_t uStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  int32_t uStack_134;
  uint64_t uStack_130;
  uint64_t uStack_128;
  int32_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  int32_t uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  int8_t uStack_ec;
  void **ppuStack_e8;
  longlong alStack_d8 [3];
  int iStack_c0;
  int iStack_98;
  ulonglong uStack_88;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_88 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  *(int32_t *)(param_1 + 0x22) = 0;
  lVar2 = *param_1;
  if ((*(longlong *)(lVar2 + 0x20f0) != 0) &&
     ((*(int *)(lVar2 + 0x14a8) - 5U < 2 ||
      (((*(byte *)(lVar2 + 0x209c) & 1) != 0 && ((*(byte *)(lVar2 + 0x2098) & 1) != 0)))))) {
    if (((*(uint *)(param_1 + 1) >> 0xc & 1) == 0) &&
       (FUN_1805d4df0(param_1), (*(uint *)(param_1 + 1) >> 0xc & 1) == 0)) {
      FUN_1805d4df0(param_1);
    }
    if (*(float *)((longlong)param_1 + 0x10c) < *(float *)((longlong)param_1 + 0x104)) {
      plVar3 = (longlong *)*param_1;
      lVar2 = *plVar3;
      uStack_178 = plVar3[0x41f];
      fVar8 = (*(float *)(*(longlong *)(plVar3[0x41e] + 0x28) + 0x110) -
              *(float *)(*(longlong *)(plVar3[0x41e] + 0x28) + 0x100)) * 0.5;
      fVar1 = *(float *)(*(longlong *)(lVar2 + 0x6d8) + 0x908);
      fStack_170 = (float)plVar3[0x420];
      if (fVar1 < fVar8) {
        fVar8 = fVar1;
      }
      fVar8 = fStack_170 + fVar8;
      _fStack_170 = CONCAT44((int)((ulonglong)plVar3[0x420] >> 0x20),fVar8);
      FUN_180528530(lVar2,&fStack_168,&puStack_158,&uStack_178);
      fVar5 = fStack_160;
      fVar4 = fStack_164;
      fVar1 = fStack_168;
      fVar8 = fVar8 - fStack_160;
      fVar13 = uStack_178._4_4_ - fStack_164;
      fVar12 = (float)uStack_178 - fStack_168;
      uStack_15c = 0x7f7fffff;
      fVar11 = fVar13 * fVar13 + fVar12 * fVar12;
      fStack_168 = fVar12;
      fStack_164 = fVar13;
      fStack_160 = fVar8;
      if (((*(uint *)(param_1 + 1) >> 0xc & 1) == 0) &&
         (FUN_1805d4df0(param_1), (*(uint *)(param_1 + 1) >> 0xc & 1) == 0)) {
        FUN_1805d4df0(param_1);
      }
      if (fVar11 < *(float *)((longlong)param_1 + 0x104) * *(float *)((longlong)param_1 + 0x104)) {
        iStack_98 = 0;
        puStack_158 = &UNK_180a0c240;
        uStack_150 = 2;
        uStack_148 = 0;
        uStack_14c = 0x31b789;
        lVar6 = *(longlong *)(lVar2 + 0x8d8);
        fVar11 = fVar8 * fVar8 + fVar11;
        auVar9 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
        fVar10 = auVar9._0_4_;
        fVar10 = fVar10 * 0.5 * (3.0 - fVar11 * fVar10 * fVar10);
        fVar11 = *(float *)(*(longlong *)(lVar2 + 0x20) + 0x1d0);
        fVar13 = fVar10 * fVar13 * fVar11;
        fStack_138 = fVar5 - fVar10 * fVar8 * fVar11;
        fStack_13c = fVar4 - fVar13;
        fStack_140 = fVar1 - fVar12 * fVar10 * fVar11;
        _fStack_170 = CONCAT44(0x7f7fffff,fStack_170);
        uStack_134 = 0x7f7fffff;
        uStack_130 = CONCAT44(fStack_164,fStack_168);
        uStack_128 = CONCAT44(uStack_15c,fStack_160);
        uStack_120 = func_0x00018023a1e0(&uStack_130,fVar13);
        uStack_110 = CONCAT44(fStack_13c,fStack_140);
        uStack_108 = CONCAT44(uStack_134,fStack_138);
        uStack_100 = (int32_t)uStack_130;
        uStack_fc = uStack_130._4_4_;
        uStack_f8 = (int32_t)uStack_128;
        uStack_f4 = uStack_128._4_4_;
        uStack_ec = 0;
        ppuStack_e8 = &puStack_158;
        plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(lVar6 + 0x18) + 0x28f8) + 0x318);
        uStack_f0 = uStack_120;
        (**(code **)(*plVar3 + 0x118))(plVar3,&uStack_110,alStack_d8);
        bVar7 = iStack_98 < 1;
        if ((0 < iStack_98) && (alStack_d8[0] != 0)) {
          for (lVar2 = *(longlong *)(alStack_d8[0] + 0x10); lVar2 != 0;
              lVar2 = *(longlong *)(lVar2 + 0x168)) {
            if (bVar7) goto LAB_1805d5331;
            bVar7 = lVar2 == *(longlong *)(*param_1 + 0x20f0);
          }
        }
        if (bVar7) {
LAB_1805d5331:
          *(int32_t *)(param_1 + 0x22) = 3;
        }
        else {
          *(uint *)(param_1 + 0x22) = (iStack_c0 == 3) + 1;
        }
        iStack_98 = 0;
      }
    }
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x2000;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_88 ^ (ulonglong)auStack_198);
}






// 函数: void FUN_1805d53a0(longlong *param_1)
void FUN_1805d53a0(longlong *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  float *pfVar10;
  uint64_t uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  cVar2 = *(char *)((longlong)param_1 + 0xbb);
  *(int8_t *)((longlong)param_1 + 0xbb) = 0;
  if ((*(byte *)(param_1 + 1) & 0x80) == 0) {
    FUN_1805d4440();
  }
  if (*(char *)((longlong)param_1 + 0xcd) == '\0') {
    if ((*(byte *)(param_1 + 1) & 0x80) == 0) {
      FUN_1805d4440(param_1);
    }
    if (*(float *)(param_1 + 0x1a) != 0.0) goto LAB_1805d5448;
    uVar12 = *(uint *)(param_1 + 1);
    if ((uVar12 & 2) == 0) {
      FUN_1805d3550(param_1);
      uVar12 = *(uint *)(param_1 + 1);
    }
    if ((uVar12 >> 0x19 & 1) == 0) {
      fVar13 = *(float *)(*(longlong *)*param_1 + 0x7dc);
      *(float *)((longlong)param_1 + 0xac) = fVar13;
      *(uint *)(param_1 + 1) = uVar12 | 0x2000000;
    }
    else {
      fVar13 = *(float *)((longlong)param_1 + 0xac);
    }
    fVar13 = fVar13 * 1.1 + 0.25;
    if (*(float *)((longlong)param_1 + 100) <= fVar13 &&
        fVar13 != *(float *)((longlong)param_1 + 100)) goto LAB_1805d5448;
    bVar5 = false;
  }
  else {
LAB_1805d5448:
    bVar5 = true;
  }
  if ((*(uint *)(param_1 + 1) & 0x200) == 0) {
    func_0x0001805d4cd0(param_1);
  }
  lVar4 = param_1[0x1d];
  if (((((lVar4 != 0) &&
        ((*(byte *)((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar4 + 0xd0)) >>
          1 & 1) != 0)) && (pcVar6 = (char *)func_0x0001805b71d0(param_1), *pcVar6 == '\0')) &&
      ((pcVar6 = (char *)FUN_1805b7080(param_1), *pcVar6 == '\0' && (!bVar5)))) &&
     (lVar7 = func_0x0001805b7270(param_1), lVar7 != 0)) {
    lVar7 = *(longlong *)*param_1;
    lVar8 = FUN_1805b74c0(param_1);
    piVar9 = (int *)FUN_1805b7660(param_1);
    if ((*piVar9 == 1) || (piVar9 = (int *)FUN_1805b7660(param_1), *piVar9 == 2)) {
      if (*(int *)(lVar8 + 0x570) != 1) {
        FUN_1805b6920(param_1);
                    // WARNING: Subroutine does not return
        FUN_1808fd400(*(int32_t *)(lVar8 + 0x4ac));
      }
      if ((*(int *)(lVar8 + 0x50c) == *(int *)(lVar7 + 0x10)) &&
         (fVar13 = *(float *)(lVar8 + 0x4f8), pfVar10 = (float *)FUN_1805b6980(param_1),
         *pfVar10 <= fVar13 && fVar13 != *pfVar10)) {
        iVar3 = *(int *)((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x70 +
                        *(longlong *)(lVar4 + 0xd0));
        fVar13 = *(float *)(lVar8 + 0x3b8);
        pfVar10 = (float *)FUN_1805b6980(param_1);
        fVar1 = *pfVar10;
        uVar11 = FUN_1805a0610(lVar7 + 0x28,5);
        piVar9 = (int *)FUN_1805b7660(param_1);
        if (*piVar9 == 1) {
          fVar15 = 0.5;
        }
        else {
          fVar15 = 1.0;
        }
        fVar14 = (float)FUN_1805b2b20(*(longlong *)*param_1 + 0x138,uVar11);
        if (fVar14 * fVar15 < fVar1 / ((float)iVar3 * fVar13)) {
          if (cVar2 == '\0') {
            lVar4 = *param_1;
            fVar13 = *(float *)(lVar7 + 0x358);
            uVar12 = *(int *)(lVar4 + 0x1390) << 0xd ^ *(uint *)(lVar4 + 0x1390);
            uVar12 = uVar12 >> 0x11 ^ uVar12;
            uVar12 = uVar12 << 5 ^ uVar12;
            *(uint *)(lVar4 + 0x1390) = uVar12;
            if (fVar13 <= (float)(uVar12 - 1) * 2.3283064e-10) goto FUN_1805d566b;
          }
          *(int8_t *)((longlong)param_1 + 0xbb) = 1;
        }
      }
    }
  }
FUN_1805d566b:
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x4000;
  return;
}






// 函数: void FUN_1805d54d2(void)
void FUN_1805d54d2(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong *in_RAX;
  longlong lVar5;
  int *piVar6;
  float *pfVar7;
  uint64_t uVar8;
  uint uVar9;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  char unaff_R15B;
  float fVar10;
  float fVar11;
  
  lVar4 = *in_RAX;
  lVar5 = FUN_1805b74c0();
  piVar6 = (int *)FUN_1805b7660();
  if ((*piVar6 == 1) || (piVar6 = (int *)FUN_1805b7660(), *piVar6 == 2)) {
    if (*(int *)(lVar5 + 0x570) != 1) {
      FUN_1805b6920();
                    // WARNING: Subroutine does not return
      FUN_1808fd400(*(int32_t *)(lVar5 + 0x4ac));
    }
    if ((*(int *)(lVar5 + 0x50c) == *(int *)(lVar4 + 0x10)) &&
       (fVar1 = *(float *)(lVar5 + 0x4f8), pfVar7 = (float *)FUN_1805b6980(),
       *pfVar7 <= fVar1 && fVar1 != *pfVar7)) {
      iVar3 = *(int *)((longlong)*(int *)(unaff_RBP + 0xf0) * 0xa0 + 0x70 +
                      *(longlong *)(unaff_RBP + 0xd0));
      fVar1 = *(float *)(lVar5 + 0x3b8);
      pfVar7 = (float *)FUN_1805b6980();
      fVar2 = *pfVar7;
      uVar8 = FUN_1805a0610(lVar4 + 0x28,5);
      piVar6 = (int *)FUN_1805b7660();
      if (*piVar6 == 1) {
        fVar11 = 0.5;
      }
      else {
        fVar11 = 1.0;
      }
      fVar10 = (float)FUN_1805b2b20(*(longlong *)*unaff_RDI + 0x138,uVar8);
      if (fVar10 * fVar11 < fVar2 / ((float)iVar3 * fVar1)) {
        if (unaff_R15B == '\0') {
          lVar5 = *unaff_RDI;
          fVar1 = *(float *)(lVar4 + 0x358);
          uVar9 = *(int *)(lVar5 + 0x1390) << 0xd ^ *(uint *)(lVar5 + 0x1390);
          uVar9 = uVar9 >> 0x11 ^ uVar9;
          uVar9 = uVar9 << 5 ^ uVar9;
          *(uint *)(lVar5 + 0x1390) = uVar9;
          if (fVar1 <= (float)(uVar9 - 1) * 2.3283064e-10) goto FUN_1805d5661;
        }
        *(int8_t *)((longlong)unaff_RDI + 0xbb) = 1;
      }
    }
  }
FUN_1805d5661:
  *(uint *)(unaff_RDI + 1) = *(uint *)(unaff_RDI + 1) | 0x4000;
  return;
}






// 函数: void FUN_1805d5559(void)
void FUN_1805d5559(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  uint64_t uVar6;
  int *piVar7;
  uint uVar8;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong unaff_R14;
  char unaff_R15B;
  float fVar9;
  float fVar10;
  
  fVar1 = *(float *)(unaff_RSI + 0x4f8);
  pfVar5 = (float *)FUN_1805b6980();
  if (*pfVar5 <= fVar1 && fVar1 != *pfVar5) {
    iVar3 = *(int *)((longlong)*(int *)(unaff_RBP + 0xf0) * 0xa0 + 0x70 +
                    *(longlong *)(unaff_RBP + 0xd0));
    fVar1 = *(float *)(unaff_RSI + 0x3b8);
    pfVar5 = (float *)FUN_1805b6980();
    fVar2 = *pfVar5;
    uVar6 = FUN_1805a0610(unaff_R14 + 0x28,5);
    piVar7 = (int *)FUN_1805b7660();
    if (*piVar7 == 1) {
      fVar10 = 0.5;
    }
    else {
      fVar10 = 1.0;
    }
    fVar9 = (float)FUN_1805b2b20(*(longlong *)*unaff_RDI + 0x138,uVar6);
    if (fVar9 * fVar10 < fVar2 / ((float)iVar3 * fVar1)) {
      if (unaff_R15B == '\0') {
        lVar4 = *unaff_RDI;
        fVar1 = *(float *)(unaff_R14 + 0x358);
        uVar8 = *(int *)(lVar4 + 0x1390) << 0xd ^ *(uint *)(lVar4 + 0x1390);
        uVar8 = uVar8 >> 0x11 ^ uVar8;
        uVar8 = uVar8 << 5 ^ uVar8;
        *(uint *)(lVar4 + 0x1390) = uVar8;
        if (fVar1 <= (float)(uVar8 - 1) * 2.3283064e-10) goto LAB_1805d565c;
      }
      *(int8_t *)((longlong)unaff_RDI + 0xbb) = 1;
    }
  }
LAB_1805d565c:
  *(uint *)(unaff_RDI + 1) = *(uint *)(unaff_RDI + 1) | 0x4000;
  return;
}






// 函数: void FUN_1805d557e(void)
void FUN_1805d557e(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong in_RAX;
  float *pfVar5;
  uint64_t uVar6;
  int *piVar7;
  uint uVar8;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong unaff_R14;
  char unaff_R15B;
  float fVar9;
  float fVar10;
  
  iVar3 = *(int *)(in_RAX * 0xa0 + 0x70 + *(longlong *)(unaff_RBP + 0xd0));
  fVar1 = *(float *)(unaff_RSI + 0x3b8);
  pfVar5 = (float *)FUN_1805b6980();
  fVar2 = *pfVar5;
  uVar6 = FUN_1805a0610(unaff_R14 + 0x28,5);
  piVar7 = (int *)FUN_1805b7660();
  if (*piVar7 == 1) {
    fVar10 = 0.5;
  }
  else {
    fVar10 = 1.0;
  }
  fVar9 = (float)FUN_1805b2b20(*(longlong *)*unaff_RDI + 0x138,uVar6);
  if (fVar9 * fVar10 < fVar2 / ((float)iVar3 * fVar1)) {
    if (unaff_R15B == '\0') {
      lVar4 = *unaff_RDI;
      fVar1 = *(float *)(unaff_R14 + 0x358);
      uVar8 = *(int *)(lVar4 + 0x1390) << 0xd ^ *(uint *)(lVar4 + 0x1390);
      uVar8 = uVar8 >> 0x11 ^ uVar8;
      uVar8 = uVar8 << 5 ^ uVar8;
      *(uint *)(lVar4 + 0x1390) = uVar8;
      if (fVar1 <= (float)(uVar8 - 1) * 2.3283064e-10) goto LAB_1805d565c;
    }
    *(int8_t *)((longlong)unaff_RDI + 0xbb) = 1;
  }
LAB_1805d565c:
  *(uint *)(unaff_RDI + 1) = *(uint *)(unaff_RDI + 1) | 0x4000;
  return;
}






// 函数: void FUN_1805d5606(void)
void FUN_1805d5606(void)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  longlong *unaff_RDI;
  longlong unaff_R14;
  char unaff_R15B;
  
  if (unaff_R15B == '\0') {
    lVar2 = *unaff_RDI;
    fVar1 = *(float *)(unaff_R14 + 0x358);
    uVar3 = *(int *)(lVar2 + 0x1390) << 0xd ^ *(uint *)(lVar2 + 0x1390);
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    uVar3 = uVar3 << 5 ^ uVar3;
    *(uint *)(lVar2 + 0x1390) = uVar3;
    if (fVar1 <= (float)(uVar3 - 1) * 2.3283064e-10) goto LAB_1805d565c;
  }
  *(int8_t *)((longlong)unaff_RDI + 0xbb) = 1;
LAB_1805d565c:
  *(uint *)(unaff_RDI + 1) = *(uint *)(unaff_RDI + 1) | 0x4000;
  return;
}






// 函数: void FUN_1805d5661(void)
void FUN_1805d5661(void)

{
  longlong unaff_RDI;
  
  *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x4000;
  return;
}






// 函数: void FUN_1805d566b(void)
void FUN_1805d566b(void)

{
  longlong unaff_RDI;
  
  *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x4000;
  return;
}






// 函数: void FUN_1805d5680(longlong *param_1)
void FUN_1805d5680(longlong *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  float fStackX_8;
  float fStackX_c;
  
  iVar9 = 0;
  *(int32_t *)(param_1 + 0x23) = 0;
  *(uint64_t *)((longlong)param_1 + 0x11c) = 0;
  uVar4 = *(uint *)(param_1 + 1);
  if ((uVar4 >> 9 & 1) == 0) {
    func_0x0001805d4cd0();
    uVar4 = *(uint *)(param_1 + 1);
  }
  lVar7 = param_1[0x1c];
  if (lVar7 == 0) {
    iVar8 = -1;
  }
  else {
    if ((uVar4 >> 9 & 1) == 0) {
      func_0x0001805d4cd0(param_1);
      lVar7 = param_1[0x1c];
      uVar4 = *(uint *)(param_1 + 1);
    }
    iVar8 = *(int *)(lVar7 + 0x10);
  }
  if ((uVar4 & 1) == 0) {
    FUN_1805d3210(param_1);
  }
  lVar7 = *param_1;
  bVar11 = false;
  lVar10 = 0x17ac;
  fStackX_c = (float)((ulonglong)param_1[7] >> 0x20);
  iVar3 = *(int *)(lVar7 + 0x13c);
  fStackX_8 = (float)param_1[7];
  if (-1 < iVar3) {
    lVar5 = *(longlong *)((longlong)iVar3 * 0xa60 + 0x30c0 + *(longlong *)(lVar7 + 0x1488));
    iVar6 = 0;
    fVar1 = *(float *)(lVar5 + 0xc);
    fVar2 = *(float *)(lVar5 + 0x10);
    if (0 < *(int *)(lVar7 + 0x1b6c)) {
      lVar5 = 0x17ac;
      do {
        if (*(int *)(lVar5 + lVar7) == iVar3) {
          if (*(float *)(lVar5 + 0x34 + lVar7) <=
              *(float *)((longlong)iVar3 * 0xa60 + 0x387c + *(longlong *)(lVar7 + 0x1488))) {
            *(int *)(param_1 + 0x23) = (int)param_1[0x23] + 1;
            bVar11 = iVar8 == iVar3;
            *(float *)((longlong)param_1 + 0x11c) =
                 (fVar1 - fStackX_8) + *(float *)((longlong)param_1 + 0x11c);
            *(float *)(param_1 + 0x24) = (fVar2 - fStackX_c) + *(float *)(param_1 + 0x24);
          }
          break;
        }
        iVar6 = iVar6 + 1;
        lVar5 = lVar5 + 0x3c;
      } while (iVar6 < *(int *)(lVar7 + 0x1b6c));
    }
  }
  iVar3 = *(int *)(lVar7 + 0x144);
  if (-1 < iVar3) {
    lVar5 = *(longlong *)((longlong)iVar3 * 0xa60 + 0x30c0 + *(longlong *)(lVar7 + 0x1488));
    iVar6 = 0;
    fVar1 = *(float *)(lVar5 + 0xc);
    fVar2 = *(float *)(lVar5 + 0x10);
    if (0 < *(int *)(lVar7 + 0x1b6c)) {
      lVar5 = 0x17ac;
      do {
        if (*(int *)(lVar5 + lVar7) == iVar3) {
          if (*(float *)(lVar5 + 0x34 + lVar7) <=
              *(float *)((longlong)iVar3 * 0xa60 + 0x387c + *(longlong *)(lVar7 + 0x1488))) {
            *(int *)(param_1 + 0x23) = (int)param_1[0x23] + 1;
            if (iVar8 == iVar3) {
              bVar11 = true;
            }
            *(float *)((longlong)param_1 + 0x11c) =
                 (fVar1 - fStackX_8) + *(float *)((longlong)param_1 + 0x11c);
            *(float *)(param_1 + 0x24) = (fVar2 - fStackX_c) + *(float *)(param_1 + 0x24);
          }
          break;
        }
        iVar6 = iVar6 + 1;
        lVar5 = lVar5 + 0x3c;
      } while (iVar6 < *(int *)(lVar7 + 0x1b6c));
    }
  }
  iVar3 = *(int *)(lVar7 + 0x14c);
  if (-1 < iVar3) {
    lVar5 = *(longlong *)((longlong)iVar3 * 0xa60 + 0x30c0 + *(longlong *)(lVar7 + 0x1488));
    iVar6 = 0;
    fVar1 = *(float *)(lVar5 + 0xc);
    fVar2 = *(float *)(lVar5 + 0x10);
    if (0 < *(int *)(lVar7 + 0x1b6c)) {
      lVar5 = 0x17ac;
      do {
        if (*(int *)(lVar5 + lVar7) == iVar3) {
          if (*(float *)(lVar5 + 0x34 + lVar7) <=
              *(float *)((longlong)iVar3 * 0xa60 + 0x387c + *(longlong *)(lVar7 + 0x1488))) {
            *(int *)(param_1 + 0x23) = (int)param_1[0x23] + 1;
            if (iVar8 == iVar3) {
              bVar11 = true;
            }
            *(float *)((longlong)param_1 + 0x11c) =
                 (fVar1 - fStackX_8) + *(float *)((longlong)param_1 + 0x11c);
            *(float *)(param_1 + 0x24) = (fVar2 - fStackX_c) + *(float *)(param_1 + 0x24);
          }
          break;
        }
        iVar6 = iVar6 + 1;
        lVar5 = lVar5 + 0x3c;
      } while (iVar6 < *(int *)(lVar7 + 0x1b6c));
    }
  }
  iVar3 = *(int *)(lVar7 + 0x154);
  if (-1 < iVar3) {
    lVar5 = *(longlong *)((longlong)iVar3 * 0xa60 + 0x30c0 + *(longlong *)(lVar7 + 0x1488));
    fVar1 = *(float *)(lVar5 + 0xc);
    fVar2 = *(float *)(lVar5 + 0x10);
    if (0 < *(int *)(lVar7 + 0x1b6c)) {
      do {
        if (*(int *)(lVar10 + lVar7) == iVar3) {
          if (*(float *)(lVar10 + 0x34 + lVar7) <=
              *(float *)((longlong)iVar3 * 0xa60 + 0x387c + *(longlong *)(lVar7 + 0x1488))) {
            *(int *)(param_1 + 0x23) = (int)param_1[0x23] + 1;
            *(float *)((longlong)param_1 + 0x11c) =
                 (fVar1 - fStackX_8) + *(float *)((longlong)param_1 + 0x11c);
            *(float *)(param_1 + 0x24) = (fVar2 - fStackX_c) + *(float *)(param_1 + 0x24);
            if (iVar8 == iVar3) goto LAB_1805d5a24;
          }
          break;
        }
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 0x3c;
      } while (iVar9 < *(int *)(lVar7 + 0x1b6c));
    }
  }
  if (!bVar11) {
    uVar4 = *(uint *)(param_1 + 1);
    if (-1 < (char)uVar4) {
      FUN_1805d4440(param_1);
      uVar4 = *(uint *)(param_1 + 1);
    }
    if (*(char *)((longlong)param_1 + 0xcd) == '\0') {
      if (-1 < (char)uVar4) {
        FUN_1805d4440(param_1);
        uVar4 = *(uint *)(param_1 + 1);
      }
      if (*(float *)(param_1 + 0x1a) == 0.0) goto LAB_1805d5a24;
    }
    *(int *)(param_1 + 0x23) = (int)param_1[0x23] + 1;
    if ((uVar4 & 1) == 0) {
      FUN_1805d3210(param_1);
    }
    *(float *)(param_1 + 0x24) =
         (*(float *)((longlong)param_1 + 0x4c) - fStackX_c) + *(float *)(param_1 + 0x24);
    *(float *)((longlong)param_1 + 0x11c) =
         (*(float *)(param_1 + 9) - fStackX_8) + *(float *)((longlong)param_1 + 0x11c);
  }
LAB_1805d5a24:
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x10000000;
  return;
}






// 函数: void FUN_1805d56b0(void)
void FUN_1805d56b0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint in_EAX;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *unaff_RBX;
  int iVar8;
  int unaff_EDI;
  longlong lVar9;
  bool bVar10;
  float fStack0000000000000050;
  float fStack0000000000000054;
  
  if ((in_EAX >> 9 & 1) == 0) {
    func_0x0001805d4cd0();
    in_EAX = *(uint *)(unaff_RBX + 1);
  }
  lVar7 = unaff_RBX[0x1c];
  if (lVar7 == 0) {
    iVar8 = -1;
  }
  else {
    if ((in_EAX >> 9 & 1) == 0) {
      func_0x0001805d4cd0();
      lVar7 = unaff_RBX[0x1c];
      in_EAX = *(uint *)(unaff_RBX + 1);
    }
    iVar8 = *(int *)(lVar7 + 0x10);
  }
  if ((in_EAX & 1) == 0) {
    FUN_1805d3210();
  }
  lVar7 = *unaff_RBX;
  bVar10 = false;
  lVar9 = 0x17ac;
  fStack0000000000000054 = (float)((ulonglong)unaff_RBX[7] >> 0x20);
  iVar3 = *(int *)(lVar7 + 0x13c);
  fStack0000000000000050 = (float)unaff_RBX[7];
  if (-1 < iVar3) {
    lVar5 = *(longlong *)((longlong)iVar3 * 0xa60 + 0x30c0 + *(longlong *)(lVar7 + 0x1488));
    fVar1 = *(float *)(lVar5 + 0xc);
    fVar2 = *(float *)(lVar5 + 0x10);
    if (0 < *(int *)(lVar7 + 0x1b6c)) {
      lVar5 = 0x17ac;
      iVar6 = unaff_EDI;
      do {
        if (*(int *)(lVar5 + lVar7) == iVar3) {
          if (*(float *)(lVar5 + 0x34 + lVar7) <=
              *(float *)((longlong)iVar3 * 0xa60 + 0x387c + *(longlong *)(lVar7 + 0x1488))) {
            *(int *)(unaff_RBX + 0x23) = (int)unaff_RBX[0x23] + 1;
            bVar10 = iVar8 == iVar3;
            *(float *)((longlong)unaff_RBX + 0x11c) =
                 (fVar1 - fStack0000000000000050) + *(float *)((longlong)unaff_RBX + 0x11c);
            *(float *)(unaff_RBX + 0x24) =
                 (fVar2 - fStack0000000000000054) + *(float *)(unaff_RBX + 0x24);
          }
          break;
        }
        iVar6 = iVar6 + 1;
        lVar5 = lVar5 + 0x3c;
      } while (iVar6 < *(int *)(lVar7 + 0x1b6c));
    }
  }
  iVar3 = *(int *)(lVar7 + 0x144);
  if (-1 < iVar3) {
    lVar5 = *(longlong *)((longlong)iVar3 * 0xa60 + 0x30c0 + *(longlong *)(lVar7 + 0x1488));
    fVar1 = *(float *)(lVar5 + 0xc);
    fVar2 = *(float *)(lVar5 + 0x10);
    if (0 < *(int *)(lVar7 + 0x1b6c)) {
      lVar5 = 0x17ac;
      iVar6 = unaff_EDI;
      do {
        if (*(int *)(lVar5 + lVar7) == iVar3) {
          if (*(float *)(lVar5 + 0x34 + lVar7) <=
              *(float *)((longlong)iVar3 * 0xa60 + 0x387c + *(longlong *)(lVar7 + 0x1488))) {
            *(int *)(unaff_RBX + 0x23) = (int)unaff_RBX[0x23] + 1;
            if (iVar8 == iVar3) {
              bVar10 = true;
            }
            *(float *)((longlong)unaff_RBX + 0x11c) =
                 (fVar1 - fStack0000000000000050) + *(float *)((longlong)unaff_RBX + 0x11c);
            *(float *)(unaff_RBX + 0x24) =
                 (fVar2 - fStack0000000000000054) + *(float *)(unaff_RBX + 0x24);
          }
          break;
        }
        iVar6 = iVar6 + 1;
        lVar5 = lVar5 + 0x3c;
      } while (iVar6 < *(int *)(lVar7 + 0x1b6c));
    }
  }
  iVar3 = *(int *)(lVar7 + 0x14c);
  if (-1 < iVar3) {
    lVar5 = *(longlong *)((longlong)iVar3 * 0xa60 + 0x30c0 + *(longlong *)(lVar7 + 0x1488));
    fVar1 = *(float *)(lVar5 + 0xc);
    fVar2 = *(float *)(lVar5 + 0x10);
    if (0 < *(int *)(lVar7 + 0x1b6c)) {
      lVar5 = 0x17ac;
      iVar6 = unaff_EDI;
      do {
        if (*(int *)(lVar5 + lVar7) == iVar3) {
          if (*(float *)(lVar5 + 0x34 + lVar7) <=
              *(float *)((longlong)iVar3 * 0xa60 + 0x387c + *(longlong *)(lVar7 + 0x1488))) {
            *(int *)(unaff_RBX + 0x23) = (int)unaff_RBX[0x23] + 1;
            if (iVar8 == iVar3) {
              bVar10 = true;
            }
            *(float *)((longlong)unaff_RBX + 0x11c) =
                 (fVar1 - fStack0000000000000050) + *(float *)((longlong)unaff_RBX + 0x11c);
            *(float *)(unaff_RBX + 0x24) =
                 (fVar2 - fStack0000000000000054) + *(float *)(unaff_RBX + 0x24);
          }
          break;
        }
        iVar6 = iVar6 + 1;
        lVar5 = lVar5 + 0x3c;
      } while (iVar6 < *(int *)(lVar7 + 0x1b6c));
    }
  }
  iVar3 = *(int *)(lVar7 + 0x154);
  if (-1 < iVar3) {
    lVar5 = *(longlong *)((longlong)iVar3 * 0xa60 + 0x30c0 + *(longlong *)(lVar7 + 0x1488));
    fVar1 = *(float *)(lVar5 + 0xc);
    fVar2 = *(float *)(lVar5 + 0x10);
    if (0 < *(int *)(lVar7 + 0x1b6c)) {
      do {
        if (*(int *)(lVar9 + lVar7) == iVar3) {
          if (*(float *)(lVar9 + 0x34 + lVar7) <=
              *(float *)((longlong)iVar3 * 0xa60 + 0x387c + *(longlong *)(lVar7 + 0x1488))) {
            *(int *)(unaff_RBX + 0x23) = (int)unaff_RBX[0x23] + 1;
            *(float *)((longlong)unaff_RBX + 0x11c) =
                 (fVar1 - fStack0000000000000050) + *(float *)((longlong)unaff_RBX + 0x11c);
            *(float *)(unaff_RBX + 0x24) =
                 (fVar2 - fStack0000000000000054) + *(float *)(unaff_RBX + 0x24);
            if (iVar8 == iVar3) goto LAB_1805d5a24;
          }
          break;
        }
        unaff_EDI = unaff_EDI + 1;
        lVar9 = lVar9 + 0x3c;
      } while (unaff_EDI < *(int *)(lVar7 + 0x1b6c));
    }
  }
  if (!bVar10) {
    uVar4 = *(uint *)(unaff_RBX + 1);
    if (-1 < (char)uVar4) {
      FUN_1805d4440();
      uVar4 = *(uint *)(unaff_RBX + 1);
    }
    if (*(char *)((longlong)unaff_RBX + 0xcd) == '\0') {
      if (-1 < (char)uVar4) {
        FUN_1805d4440();
        uVar4 = *(uint *)(unaff_RBX + 1);
      }
      if (*(float *)(unaff_RBX + 0x1a) == 0.0) goto LAB_1805d5a24;
    }
    *(int *)(unaff_RBX + 0x23) = (int)unaff_RBX[0x23] + 1;
    if ((uVar4 & 1) == 0) {
      FUN_1805d3210();
    }
    *(float *)(unaff_RBX + 0x24) =
         (*(float *)((longlong)unaff_RBX + 0x4c) - fStack0000000000000054) +
         *(float *)(unaff_RBX + 0x24);
    *(float *)((longlong)unaff_RBX + 0x11c) =
         (*(float *)(unaff_RBX + 9) - fStack0000000000000050) +
         *(float *)((longlong)unaff_RBX + 0x11c);
  }
LAB_1805d5a24:
  *(uint *)(unaff_RBX + 1) = *(uint *)(unaff_RBX + 1) | 0x10000000;
  return;
}






// 函数: void FUN_1805d5920(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)
void FUN_1805d5920(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong unaff_RBX;
  int unaff_ESI;
  int unaff_EDI;
  int in_R10D;
  int32_t in_register_00000094;
  char in_R11B;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
  lVar5 = CONCAT44(in_register_00000094,in_R10D) * 0xa60;
  lVar3 = *(longlong *)(lVar5 + 0x30c0 + *(longlong *)(param_4 + 0x1488));
  fVar1 = *(float *)(lVar3 + 0xc);
  fVar2 = *(float *)(lVar3 + 0x10);
  if (0 < *(int *)(param_4 + 0x1b6c)) {
    do {
      if (*(int *)(param_3 + param_4) == in_R10D) {
        if (*(float *)(param_3 + 0x34 + param_4) <=
            *(float *)(lVar5 + 0x387c + *(longlong *)(param_4 + 0x1488))) {
          *(int *)(unaff_RBX + 0x118) = *(int *)(unaff_RBX + 0x118) + 1;
          *(float *)(unaff_RBX + 0x11c) = (fVar1 - unaff_XMM7_Da) + *(float *)(unaff_RBX + 0x11c);
          *(float *)(unaff_RBX + 0x120) = (fVar2 - unaff_XMM6_Da) + *(float *)(unaff_RBX + 0x120);
          if (unaff_ESI == in_R10D) goto LAB_1805d5a24;
        }
        break;
      }
      unaff_EDI = unaff_EDI + 1;
      param_3 = param_3 + 0x3c;
    } while (unaff_EDI < *(int *)(param_4 + 0x1b6c));
  }
  if (in_R11B == '\0') {
    uVar4 = *(uint *)(unaff_RBX + 8);
    if (-1 < (char)uVar4) {
      FUN_1805d4440();
      uVar4 = *(uint *)(unaff_RBX + 8);
    }
    if (*(char *)(unaff_RBX + 0xcd) == '\0') {
      if (-1 < (char)uVar4) {
        FUN_1805d4440();
        uVar4 = *(uint *)(unaff_RBX + 8);
      }
      if (*(float *)(unaff_RBX + 0xd0) == 0.0) goto LAB_1805d5a24;
    }
    *(int *)(unaff_RBX + 0x118) = *(int *)(unaff_RBX + 0x118) + 1;
    if ((uVar4 & 1) == 0) {
      FUN_1805d3210();
    }
    *(float *)(unaff_RBX + 0x120) =
         (*(float *)(unaff_RBX + 0x4c) - unaff_XMM6_Da) + *(float *)(unaff_RBX + 0x120);
    *(float *)(unaff_RBX + 0x11c) =
         (*(float *)(unaff_RBX + 0x48) - unaff_XMM7_Da) + *(float *)(unaff_RBX + 0x11c);
  }
LAB_1805d5a24:
  *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x10000000;
  return;
}






