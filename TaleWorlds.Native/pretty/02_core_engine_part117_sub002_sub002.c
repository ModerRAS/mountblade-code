#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part117_sub002_sub002.c - 1 个函数

// 函数: void FUN_1801299b0(char *param_1,int8_t *param_2,uint param_3)
void FUN_1801299b0(char *param_1,int8_t *param_2,uint param_3)

{
  char cVar1;
  int16_t uVar2;
  bool bVar3;
  longlong lVar4;
  int8_t *puVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int32_t uVar9;
  int32_t uVar10;
  char *pcVar11;
  longlong lVar12;
  uint64_t uVar13;
  longlong *plVar14;
  float *pfVar15;
  float *pfVar16;
  longlong lVar17;
  uint64_t *puVar18;
  uint64_t uVar19;
  int8_t uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int *piVar24;
  uint64_t *puVar25;
  int iVar26;
  int32_t *puVar27;
  byte bVar28;
  uint uVar29;
  longlong lVar30;
  bool bVar31;
  ulonglong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int8_t auStack_278 [32];
  float *pfStack_258;
  float *pfStack_250;
  float *pfStack_248;
  longlong *plStack_238;
  char cStack_230;
  char cStack_22f;
  char cStack_22e;
  uint64_t uStack_228;
  char cStack_220;
  char acStack_21f [7];
  float fStack_218;
  float fStack_214;
  uint uStack_210;
  uint64_t uStack_208;
  int iStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  uint64_t uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  uint64_t uStack_1c8;
  int32_t uStack_1c0;
  float fStack_1bc;
  int iStack_1b8;
  uint64_t uStack_1b0;
  int32_t uStack_1a8;
  float fStack_1a4;
  uint64_t uStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  uint64_t uStack_168;
  uint64_t uStack_160;
  longlong lStack_158;
  int8_t *puStack_150;
  uint uStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  uint uStack_120;
  float fStack_118;
  float fStack_114;
  int32_t uStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  char *pcStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  ulonglong uStack_e8;
  
  lVar4 = _DAT_180c8a9b0;
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_278;
  puStack_150 = param_2;
  pcStack_100 = param_1;
  plStack_238 = (longlong *)func_0x000180128b60();
  iVar23 = *(int *)(lVar4 + 0x1ad0);
  cStack_22f = plStack_238 == (longlong *)0x0;
  if (plStack_238 == (longlong *)0x0) {
    if (*(int *)(lVar4 + 0x1bd4) == 0) {
      uStack_228 = 0;
      puVar18 = &uStack_228;
    }
    else {
      puVar18 = &uStack_1b0;
      uStack_1b0 = *(longlong *)(lVar4 + 0x1c04);
    }
    plStack_238 = (longlong *)FUN_180128bd0(param_1,*puVar18,param_3);
  }
  iStack_200 = (int)plStack_238[0x50];
  uVar8 = *(uint *)((longlong)plStack_238 + 0xdc);
  uVar29 = param_3 | 6;
  if ((param_3 & 0xc0200) != 0xc0200) {
    uVar29 = param_3;
  }
  iVar26 = *(int *)(lVar4 + 0x1a90);
  cStack_22e = iStack_200 < iVar26 + -1;
  if ((uVar29 >> 0x1a & 1) != 0) {
    piVar24 = (int *)((longlong)*(int *)(lVar4 + 0x1bc0) * 0x30 + *(longlong *)(lVar4 + 0x1bb8));
    cStack_22e = (bool)cStack_22e ||
                 (plStack_238 != *(longlong **)(piVar24 + 2) || (int)plStack_238[0x18] != *piVar24);
  }
  if (((bool)cStack_22e) || (0 < (int)uVar8)) {
    cVar6 = '\x01';
  }
  else {
    cVar6 = '\0';
  }
  *(char *)((longlong)plStack_238 + 0xb5) = cVar6;
  uStack_210 = uVar8;
  iStack_1b8 = iVar26;
  if (cVar6 != '\0') {
    func_0x000180128ae0(plStack_238,8,1);
  }
  if (iStack_200 == iVar26) {
    uVar29 = *(uint *)((longlong)plStack_238 + 0xc);
  }
  else {
    *(int32_t *)(plStack_238 + 2) = *(int32_t *)((longlong)plStack_238 + 0xc);
    *(uint *)((longlong)plStack_238 + 0xc) = uVar29;
    *(int *)(plStack_238 + 0x50) = iVar26;
    *(int16_t *)((longlong)plStack_238 + 0xba) = 0;
    uVar2 = *(int16_t *)(lVar4 + 0x1af0);
    *(int *)(lVar4 + 0x1af0) = *(int *)(lVar4 + 0x1af0) + 1;
    *(int16_t *)((longlong)plStack_238 + 0xbc) = uVar2;
  }
  if (*(int *)(lVar4 + 0x1bf0) != 0) {
    FUN_18013b040(plStack_238,*(int32_t *)(lVar4 + 0x1c40));
  }
  if ((iStack_200 != iVar26) &&
     ((((int)plStack_238[0x83] != 0 || (plStack_238[0x81] != 0)) ||
      ((*(char *)(lVar4 + 0xc2) != '\0' && (((uVar29 & 0x1200001) == 0 && (iVar23 != 0)))))))) {
    FUN_18013b5a0(plStack_238,param_2);
    uVar29 = *(uint *)((longlong)plStack_238 + 0xc);
  }
  if ((*(byte *)((longlong)plStack_238 + 0x432) & 1) == 0) {
    if (*(int *)(lVar4 + 0x1ad0) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(longlong *)
                (*(longlong *)(lVar4 + 0x1ad8) + -8 + (longlong)*(int *)(lVar4 + 0x1ad0) * 8);
    }
  }
  else {
    lVar12 = *(longlong *)(plStack_238[0x81] + 0x68);
  }
  if (iStack_200 == iVar26) {
    lStack_158 = plStack_238[0x73];
  }
  else {
    lStack_158 = 0;
    if ((uVar29 & 0x5000000) != 0) {
      lStack_158 = lVar12;
    }
  }
  FUN_18011d9a0(lVar4 + 0x1ad0,&plStack_238);
  *(uint64_t *)(lVar4 + 0x1af8) = 0;
  func_0x000180128a80(plStack_238,1);
  if ((uVar29 >> 0x1a & 1) != 0) {
    puVar27 = (int32_t *)
              ((longlong)*(int *)(lVar4 + 0x1bc0) * 0x30 + *(longlong *)(lVar4 + 0x1bb8));
    *(longlong **)(puVar27 + 2) = plStack_238;
    FUN_18013df80((int *)(lVar4 + 0x1bc0),puVar27);
    *(int32_t *)(plStack_238 + 0x18) = *puVar27;
  }
  if ((0 < (int)uVar8) && ((uVar29 >> 0x18 & 1) == 0)) {
    *(int32_t *)(plStack_238 + 0x79) = 0;
  }
  bVar31 = false;
  bVar3 = false;
  cStack_230 = '\0';
  if (*(uint *)(lVar4 + 0x1bd0) != 0) {
    uVar8 = *(uint *)(plStack_238 + 0x1c) & *(uint *)(lVar4 + 0x1bd0);
    cStack_230 = uVar8 != 0;
    if ((uVar8 == 0) ||
       (*(float *)(lVar4 + 0x1bfc) * *(float *)(lVar4 + 0x1bfc) +
        *(float *)(lVar4 + 0x1c00) * *(float *)(lVar4 + 0x1c00) <= 1e-05)) {
      func_0x00018012ddc0(plStack_238,lVar4 + 0x1bf4);
    }
    else {
      plStack_238[0x1e] = *(longlong *)(lVar4 + 0x1bf4);
      plStack_238[0x1f] = *(longlong *)(lVar4 + 0x1bfc);
      *(uint *)(plStack_238 + 0x1c) = *(uint *)(plStack_238 + 0x1c) & 0xfffffff1;
    }
  }
  if (*(uint *)(lVar4 + 0x1bd4) != 0) {
    uVar8 = *(uint *)((longlong)plStack_238 + 0xe4) & *(uint *)(lVar4 + 0x1bd4);
    if ((uVar8 == 0) || (*(float *)(lVar4 + 0x1c04) <= 0.0)) {
      bVar31 = false;
    }
    else {
      bVar31 = true;
    }
    if ((uVar8 == 0) || (*(float *)(lVar4 + 0x1c08) <= 0.0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    func_0x00018012de80();
  }
  if (*(int *)(lVar4 + 0x1bd8) == 0) {
    if (iStack_200 != iStack_1b8) {
      plStack_238[0xd] = 0;
    }
  }
  else {
    plStack_238[0xd] = *(longlong *)(lVar4 + 0x1c0c);
    if (*(float *)((longlong)plStack_238 + 0x6c) != 0.0) {
      fVar33 = (float)func_0x00018010e7a0();
      fVar34 = (float)func_0x00018010e760(plStack_238);
      *(float *)((longlong)plStack_238 + 0x6c) =
           fVar33 + fVar34 + *(float *)((longlong)plStack_238 + 0x6c);
    }
  }
  iVar26 = iStack_1b8;
  iVar23 = iStack_200;
  uVar13 = *(uint64_t *)(lVar4 + 0x1c4c);
  *(uint64_t *)((longlong)plStack_238 + 0x14) = *(uint64_t *)(lVar4 + 0x1c44);
  *(uint64_t *)((longlong)plStack_238 + 0x1c) = uVar13;
  *(int32_t *)((longlong)plStack_238 + 0x24) = *(int32_t *)(lVar4 + 0x1c54);
  if (*(uint *)(lVar4 + 0x1bdc) != 0) {
    if ((*(uint *)(lVar4 + 0x1bdc) & *(uint *)(plStack_238 + 0x1d)) != 0) {
      *(int8_t *)((longlong)plStack_238 + 0xb2) = *(int8_t *)(lVar4 + 0x1c15);
      *(uint *)(plStack_238 + 0x1d) = *(uint *)(plStack_238 + 0x1d) & 0xfffffff1;
    }
  }
  if (*(int *)(lVar4 + 0x1be4) != 0) {
    FUN_18012d2e0();
  }
  if (*(char *)((longlong)plStack_238 + 0xb5) != '\0') {
    func_0x000180128ae0(plStack_238,8);
  }
  if (iVar23 == iVar26) {
    func_0x00018012fb50(plStack_238,plStack_238[5]);
    func_0x000180123e50(plStack_238);
    lVar12 = lStack_158;
    goto LAB_18012ce0f;
  }
  fStack_188 = (float)(uVar29 & 0x3000000);
  func_0x000180129900(plStack_238,uVar29,lStack_158);
  uStack_f8 = 0xff7fffffff7fffff;
  uStack_f0 = 0x7f7fffff7f7fffff;
  *(int8_t *)((longlong)plStack_238 + 0xaf) = 1;
  *(bool *)((longlong)plStack_238 + 0xb7) = puStack_150 != (int8_t *)0x0;
  func_0x00018010e540(&fStack_1f8,&uStack_f8);
  plStack_238[0x45] = CONCAT44(fStack_1f4,fStack_1f8);
  plStack_238[0x46] = CONCAT44(fStack_1ec,fStack_1f0);
  FUN_18013dae0(plStack_238 + 0x43,1);
  cVar6 = cStack_22f;
  if (((((plStack_238[5] != 0) && (*(longlong **)(plStack_238[5] + 0x78) == plStack_238)) ||
       ((*(byte *)((longlong)plStack_238 + 0x432) & 1) != 0)) ||
      ((*(longlong *)(lVar4 + 0x1ce8) != 0 &&
       ((*(uint *)((longlong)plStack_238 + 0xc) & 0x80000) == 0)))) && (cStack_22f == '\0')) {
    pcVar11 = pcStack_100;
    do {
      cVar1 = *pcVar11;
      cVar7 = pcVar11[*plStack_238 - (longlong)pcStack_100];
      if (cVar1 != cVar7) break;
      pcVar11 = pcVar11 + 1;
    } while (cVar7 != '\0');
    if (cVar1 != cVar7) {
      uStack_228 = (longlong)(int)plStack_238[0x10];
      lVar12 = FUN_180121130(*plStack_238,&uStack_228,pcStack_100);
      *plStack_238 = lVar12;
      *(float *)(plStack_238 + 0x10) = (float)uStack_228;
    }
  }
  if (*(char *)((longlong)plStack_238 + 0xb2) == '\0') {
    if (((*(char *)((longlong)plStack_238 + 0xb6) == '\0') ||
        (*(int *)((longlong)plStack_238 + 0xdc) != 0)) || ((int)plStack_238[0x1b] < 1)) {
      fVar33 = *(float *)(plStack_238 + 0xd);
      if (fVar33 == 0.0) {
        fVar33 = (*(float *)(plStack_238 + 0x23) - *(float *)(plStack_238 + 8)) +
                 *(float *)((longlong)plStack_238 + 0x8c);
      }
      fVar34 = *(float *)((longlong)plStack_238 + 0x6c);
      if (fVar34 == 0.0) {
        fVar34 = (*(float *)((longlong)plStack_238 + 0x11c) -
                 *(float *)((longlong)plStack_238 + 0x44)) + *(float *)(plStack_238 + 0x12);
      }
      fVar33 = (float)(int)fVar33 + *(float *)(plStack_238 + 0xe);
      fVar34 = (float)(int)fVar34 + *(float *)((longlong)plStack_238 + 0x74);
    }
    else {
      fVar33 = *(float *)(plStack_238 + 0xc);
      fVar34 = *(float *)((longlong)plStack_238 + 100);
    }
  }
  else {
    fVar33 = *(float *)(plStack_238 + 0xc);
    fVar34 = *(float *)((longlong)plStack_238 + 100);
  }
  *(float *)(plStack_238 + 0xc) = fVar33;
  *(float *)((longlong)plStack_238 + 100) = fVar34;
  if (0 < (int)plStack_238[0x1b]) {
    *(int *)(plStack_238 + 0x1b) = (int)plStack_238[0x1b] + -1;
  }
  if (0 < *(int *)((longlong)plStack_238 + 0xdc)) {
    *(int *)((longlong)plStack_238 + 0xdc) = *(int *)((longlong)plStack_238 + 0xdc) + -1;
  }
  if ((cVar6 != '\0') && ((!bVar31 || (!bVar3)))) {
    *(int32_t *)((longlong)plStack_238 + 0xdc) = 1;
  }
  if (((cStack_22e != '\0') && ((uVar29 & 0x6000000) != 0)) &&
     (*(int32_t *)((longlong)plStack_238 + 0xdc) = 1, (uVar29 & 0x40) != 0)) {
    if (!bVar31) {
      *(int32_t *)(plStack_238 + 10) = 0;
      *(int32_t *)(plStack_238 + 9) = 0;
    }
    if (!bVar3) {
      *(int32_t *)((longlong)plStack_238 + 0x54) = 0;
      *(int32_t *)((longlong)plStack_238 + 0x4c) = 0;
    }
    plStack_238[0xc] = 0;
  }
  FUN_180130a80(plStack_238);
  func_0x00018012fb50(plStack_238,plStack_238[5]);
  if ((*(uint *)(lVar4 + 8) & 0x8000) == 0) {
    uVar9 = 0x3f800000;
  }
  else {
    uVar9 = *(int32_t *)(plStack_238[5] + 0x18);
  }
  *(int32_t *)((longlong)plStack_238 + 0x2dc) = uVar9;
  func_0x000180123e50(plStack_238);
  uVar8 = *(uint *)((longlong)plStack_238 + 0xc);
  uVar32 = (ulonglong)uVar8;
  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar8);
  if ((*(byte *)((longlong)plStack_238 + 0x432) & 1) == 0) {
    if ((uVar8 >> 0x18 & 1) == 0) {
      if (((uVar8 & 0x6000000) == 0) || ((uVar8 >> 0x1b & 1) != 0)) {
        uVar9 = *(int32_t *)(lVar4 + 0x1638);
      }
      else {
        uVar9 = *(int32_t *)(lVar4 + 0x1658);
      }
      *(int32_t *)((longlong)plStack_238 + 0x7c) = uVar9;
    }
    else {
      *(int32_t *)((longlong)plStack_238 + 0x7c) = *(int32_t *)(lVar4 + 0x1650);
    }
  }
  else {
    *(int32_t *)((longlong)plStack_238 + 0x7c) = 0;
  }
  if ((((*(byte *)((longlong)plStack_238 + 0x432) & 1) == 0) && ((uVar8 & 0x5010000) == 0x1000000))
     && (*(float *)((longlong)plStack_238 + 0x7c) == 0.0)) {
    if ((uVar8 >> 10 & 1) == 0) {
      *(int32_t *)(plStack_238 + 0xe) = 0;
      *(int32_t *)((longlong)plStack_238 + 0x74) = 0;
    }
    else {
      uVar9 = *(int32_t *)(lVar4 + 0x1630);
      *(int32_t *)(plStack_238 + 0xe) = 0;
      *(int32_t *)((longlong)plStack_238 + 0x74) = uVar9;
    }
  }
  else {
    plStack_238[0xe] = *(longlong *)(lVar4 + 0x162c);
  }
  fVar33 = *(float *)(plStack_238 + 0xe);
  if (*(float *)(plStack_238 + 0xe) <= *(float *)(lVar4 + 0x166c)) {
    fVar33 = *(float *)(lVar4 + 0x166c);
  }
  if (fVar33 <= *(float *)(lVar4 + 0x1c58)) {
    fVar33 = *(float *)(lVar4 + 0x1c58);
  }
  *(float *)(plStack_238 + 0x30) = fVar33;
  *(int32_t *)((longlong)plStack_238 + 0x184) = *(int32_t *)(lVar4 + 0x1c5c);
  if (((uVar8 & 0x21) == 0) && ((*(byte *)((longlong)plStack_238 + 0x432) & 1) == 0)) {
    func_0x000180120c80(plStack_238,&uStack_f8);
    if ((((*(longlong **)(lVar4 + 0x1b00) == plStack_238) && (*(int *)(lVar4 + 0x1b18) == 0)) &&
        (*(int *)(lVar4 + 0x1b20) == 0)) &&
       ((cVar6 = FUN_180128040(&uStack_f8,&uStack_f0,1), cVar6 != '\0' &&
        (*(char *)(lVar4 + 0x415) != '\0')))) {
      *(int8_t *)((longlong)plStack_238 + 0xb3) = 1;
    }
    if (*(char *)((longlong)plStack_238 + 0xb3) != '\0') {
      *(bool *)((longlong)plStack_238 + 0xb2) = *(char *)((longlong)plStack_238 + 0xb2) == '\0';
      if (((*(uint *)((longlong)plStack_238 + 0xc) & 0x100) == 0) &&
         (*(float *)(_DAT_180c8a9b0 + 0x2e04) <= 0.0)) {
        *(int32_t *)(_DAT_180c8a9b0 + 0x2e04) = *(int32_t *)(_DAT_180c8a9b0 + 0x1c);
      }
      FUN_18012d2e0(plStack_238);
    }
  }
  else {
    *(int8_t *)((longlong)plStack_238 + 0xb2) = 0;
  }
  plVar14 = plStack_238;
  lVar12 = _DAT_180c8a9b0;
  *(int8_t *)((longlong)plStack_238 + 0xb3) = 0;
  if ((*(uint *)((longlong)plStack_238 + 0xc) >> 0x19 & 1) == 0) {
    uStack_208 = *(uint64_t *)(lVar12 + 0x163c);
    if ((*(uint *)((longlong)plStack_238 + 0xc) & 0x14000000) != 0) {
      uStack_228 = 0x4080000040800000;
      puVar18 = (uint64_t *)func_0x00018011fc20(&uStack_1d8,&uStack_208,&uStack_228);
      uStack_208 = *puVar18;
    }
    fVar33 = *(float *)(plVar14[5] + 0x10);
    fVar34 = *(float *)(plVar14[5] + 0x14);
    if (*(char *)((longlong)plVar14 + 0xae) != '\0') {
      fVar33 = 3.4028235e+38;
      fVar34 = 3.4028235e+38;
    }
    iVar23 = *(int *)((longlong)plVar14 + 0x3c);
    if ((-1 < iVar23) && (iVar23 < *(int *)(lVar12 + 0x1600))) {
      fVar33 = *(float *)(*(longlong *)(lVar12 + 0x1608) + 0x18 + (longlong)iVar23 * 0x24);
      fVar34 = *(float *)(*(longlong *)(lVar12 + 0x1608) + 0x1c + (longlong)iVar23 * 0x24);
    }
    uStack_228 = CONCAT44(fVar34 - (*(float *)(lVar12 + 0x16b8) + *(float *)(lVar12 + 0x16b8)),
                          fVar33 - (*(float *)(lVar12 + 0x16b4) + *(float *)(lVar12 + 0x16b4)));
    puVar18 = (uint64_t *)func_0x00018011fc50(&uStack_1d8,&uStack_208,&uStack_228);
    FUN_18011fc80(&fStack_218,plVar14 + 0xc,&uStack_208,*puVar18);
    FUN_180128fd0(&fStack_170,plVar14,CONCAT44(fStack_214,fStack_218));
    if (((fStack_170 < *(float *)(plVar14 + 0xc)) && ((*(uint *)((longlong)plVar14 + 0xc) & 8) == 0)
        ) && ((*(uint *)((longlong)plVar14 + 0xc) >> 0xb & 1) != 0)) {
      fStack_214 = fStack_214 + *(float *)(lVar12 + 0x168c);
    }
    lVar17 = _DAT_180c8a9b0;
    fVar34 = fStack_218;
    fVar33 = fStack_214;
    if ((fStack_16c < *(float *)((longlong)plVar14 + 100)) &&
       ((*(byte *)((longlong)plVar14 + 0xc) & 8) == 0)) {
      fStack_218 = fStack_218 + *(float *)(lVar12 + 0x168c);
      fVar34 = fStack_218;
    }
  }
  else {
    lVar17 = lVar12;
    fVar34 = *(float *)(plStack_238 + 0xc);
    fVar33 = *(float *)((longlong)plStack_238 + 100);
  }
  fVar36 = 3.4028235e+38;
  uStack_228 = CONCAT44(fVar33,fVar34);
  fVar38 = 3.4028235e+38;
  if (((uVar8 & 0x40) == 0) || (*(char *)((longlong)plStack_238 + 0xb2) != '\0')) {
    if ((0 < *(int *)((longlong)plStack_238 + 0xc4)) || (0 < (int)plStack_238[0x19])) {
      if ((!bVar31) && (0 < *(int *)((longlong)plStack_238 + 0xc4))) {
        fVar36 = fVar34;
        if ((*(char *)((longlong)plStack_238 + 0xcc) != '\0') &&
           (fVar36 = *(float *)(plStack_238 + 10), *(float *)(plStack_238 + 10) <= fVar34)) {
          fVar36 = fVar34;
        }
        *(float *)(plStack_238 + 10) = fVar36;
      }
      if ((!bVar3) && (0 < (int)plStack_238[0x19])) {
        fVar38 = fVar33;
        if ((*(char *)((longlong)plStack_238 + 0xcc) != '\0') &&
           (fVar38 = *(float *)((longlong)plStack_238 + 0x54),
           *(float *)((longlong)plStack_238 + 0x54) <= fVar33)) {
          fVar38 = fVar33;
        }
        *(float *)((longlong)plStack_238 + 0x54) = fVar38;
      }
      if (((*(char *)((longlong)plStack_238 + 0xb2) == '\0') &&
          ((*(uint *)((longlong)plStack_238 + 0xc) & 0x100) == 0)) &&
         (*(float *)(lVar17 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar17 + 0x2e04) = *(int32_t *)(lVar17 + 0x1c);
      }
    }
  }
  else {
    if (!bVar31) {
      *(float *)(plStack_238 + 10) = fVar34;
      fVar36 = fVar34;
    }
    if (!bVar3) {
      *(float *)((longlong)plStack_238 + 0x54) = fVar33;
      fVar38 = fVar33;
    }
  }
  puVar27 = (int32_t *)FUN_180128fd0(&uStack_1d8,plStack_238,plStack_238[10]);
  uVar9 = puVar27[1];
  *(int32_t *)(plStack_238 + 10) = *puVar27;
  *(int32_t *)((longlong)plStack_238 + 0x54) = uVar9;
  if ((*(char *)((longlong)plStack_238 + 0xb2) == '\0') || ((uVar8 >> 0x18 & 1) != 0)) {
    plVar14 = &uStack_1b0;
    uStack_1b0 = plStack_238[10];
  }
  else {
    uVar13 = func_0x000180120c80(plStack_238,&uStack_f8);
    plVar14 = (longlong *)func_0x00018010e570(uVar13,&uStack_1d8);
  }
  lVar12 = lStack_158;
  cVar1 = cStack_22e;
  cVar6 = cStack_230;
  plStack_238[9] = *plVar14;
  if (*(char *)((longlong)plStack_238 + 0xb2) == '\0') {
    if (fVar36 == 3.4028235e+38) {
      fVar33 = *(float *)(plStack_238 + 0xb);
    }
    else {
      fVar33 = *(float *)(plStack_238 + 10);
    }
    if (fVar38 == 3.4028235e+38) {
      fVar34 = *(float *)((longlong)plStack_238 + 0x5c);
    }
    else {
      fVar34 = *(float *)((longlong)plStack_238 + 0x54);
    }
    if (((uVar8 >> 0xe & 1) != 0) ||
       ((fVar34 < *(float *)((longlong)plStack_238 + 100) && ((uVar8 & 8) == 0)))) {
      cVar7 = '\x01';
    }
    else {
      cVar7 = '\0';
    }
    *(char *)((longlong)plStack_238 + 0xad) = cVar7;
    if ((uVar8 >> 0xf & 1) == 0) {
      if (cVar7 == '\0') {
        fVar36 = 0.0;
      }
      else {
        fVar36 = *(float *)(lVar4 + 0x168c);
      }
      if ((fVar33 - fVar36 < *(float *)(plStack_238 + 0xc)) && ((uVar8 & 0x808) == 0x800))
      goto LAB_18012a70f;
      cVar7 = '\0';
    }
    else {
LAB_18012a70f:
      cVar7 = '\x01';
    }
    *(char *)((longlong)plStack_238 + 0xac) = cVar7;
    if ((cVar7 != '\0') && (*(char *)((longlong)plStack_238 + 0xad) == '\0')) {
      if ((*(float *)((longlong)plStack_238 + 100) <= fVar34 - *(float *)(lVar4 + 0x168c)) ||
         ((uVar8 & 8) != 0)) {
        uVar20 = 0;
      }
      else {
        uVar20 = 1;
      }
      *(int8_t *)((longlong)plStack_238 + 0xad) = uVar20;
    }
    if (*(char *)((longlong)plStack_238 + 0xac) == '\0') {
      uVar9 = 0;
    }
    else {
      uVar9 = *(int32_t *)(lVar4 + 0x168c);
    }
    if (*(char *)((longlong)plStack_238 + 0xad) == '\0') {
      uVar10 = 0;
    }
    else {
      uVar10 = *(int32_t *)(lVar4 + 0x168c);
    }
    *(int32_t *)((longlong)plStack_238 + 0xa4) = uVar10;
    *(int32_t *)(plStack_238 + 0x15) = uVar9;
  }
  uStack_148 = 0xffffffff;
  if (((cStack_22e != '\0') &&
      (*(int32_t *)((longlong)plStack_238 + 0xd4) = 0xffffffff, (uVar8 >> 0x1a & 1) != 0)) &&
     (cStack_230 == '\0')) {
    uVar9 = *(int32_t *)
             (*(longlong *)(lVar4 + 0x1bc8) + -0xc + (longlong)*(int *)(lVar4 + 0x1bc0) * 0x30);
    *(int32_t *)(plStack_238 + 8) =
         *(int32_t *)
          (*(longlong *)(lVar4 + 0x1bc8) + -0x10 + (longlong)*(int *)(lVar4 + 0x1bc0) * 0x30);
    *(int32_t *)((longlong)plStack_238 + 0x44) = uVar9;
  }
  uVar29 = uVar8 & 0x1000000;
  uStack_120 = uVar29;
  if (uVar29 != 0) {
    *(int16_t *)((longlong)plStack_238 + 0xba) = *(int16_t *)(lStack_158 + 0x188);
    FUN_18011d9a0((int16_t *)(lStack_158 + 0x188),&plStack_238);
    if ((((uVar8 >> 0x1a & 1) == 0) && (cVar6 == '\0')) && (fStack_188 != 3.761582e-37)) {
      plStack_238[8] = *(longlong *)(lVar12 + 0x100);
    }
  }
  if ((*(float *)(plStack_238 + 0x1e) == 3.4028235e+38) ||
     (*(int *)((longlong)plStack_238 + 0xdc) != 0)) {
    if ((uVar8 >> 0x1c & 1) == 0) {
      if (((((uVar8 >> 0x1a & 1) != 0) && (cStack_230 == '\0')) && (0 < (int)uStack_210)) ||
         (((cVar6 = cStack_230, (uVar8 >> 0x19 & 1) != 0 && (cStack_230 == '\0')) &&
          (fStack_188 != 3.761582e-37)))) {
        puVar27 = (int32_t *)FUN_18012f6d0(&uStack_1d8,plStack_238);
        uVar9 = puVar27[1];
        *(int32_t *)(plStack_238 + 8) = *puVar27;
        *(int32_t *)((longlong)plStack_238 + 0x44) = uVar9;
        cVar6 = cStack_230;
      }
    }
    else {
      puVar27 = (int32_t *)FUN_18012f6d0(&uStack_1d8,plStack_238);
      uVar9 = puVar27[1];
      *(int32_t *)(plStack_238 + 8) = *puVar27;
      *(int32_t *)((longlong)plStack_238 + 0x44) = uVar9;
    }
  }
  else {
    fVar34 = *(float *)(plStack_238 + 0x1e) -
             *(float *)(plStack_238 + 0x1f) * *(float *)(plStack_238 + 10);
    fVar33 = *(float *)((longlong)plStack_238 + 0xf4) -
             *(float *)((longlong)plStack_238 + 0x54) * *(float *)((longlong)plStack_238 + 0xfc);
    if (fVar34 <= *(float *)(lVar4 + 0x16b4)) {
      fVar34 = *(float *)(lVar4 + 0x16b4);
    }
    if (fVar33 <= *(float *)(lVar4 + 0x16b8)) {
      fVar33 = *(float *)(lVar4 + 0x16b8);
    }
    uStack_208 = CONCAT44(fVar33,fVar34);
    func_0x00018012ddc0(plStack_238,&uStack_208,0);
  }
  if (*(int *)((longlong)plStack_238 + 0x3c) < 0) {
LAB_18012aa37:
    if (*(char *)((longlong)plStack_238 + 0xae) != '\0') goto LAB_18012aa45;
  }
  else {
    if (*(char *)((longlong)plStack_238 + 0xae) == '\0') {
      if (*(char *)(plStack_238[5] + 0x77) == '\0') {
        pfVar15 = (float *)func_0x00018011feb0(plStack_238[5],&uStack_f8);
        pfVar16 = (float *)func_0x00018010e720(plStack_238,&fStack_1f8);
        if (((*pfVar16 <= *pfVar15 && *pfVar15 != *pfVar16) ||
            (pfVar16[1] <= pfVar15[1] && pfVar15[1] != pfVar16[1])) ||
           ((pfVar15[2] < pfVar16[2] || (pfVar15[3] < pfVar16[3])))) {
          pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,4);
          lVar12 = FUN_180130830(plStack_238,(int)plStack_238[1],plStack_238 + 8,plStack_238 + 9);
          plStack_238[5] = lVar12;
          func_0x00018012fb50(plStack_238,lVar12);
          if ((*(uint *)(lVar4 + 8) & 0x8000) == 0) {
            uVar9 = 0x3f800000;
          }
          else {
            uVar9 = *(int32_t *)(plStack_238[5] + 0x18);
          }
          *(int32_t *)((longlong)plStack_238 + 0x2dc) = uVar9;
          func_0x000180123e50(plStack_238);
        }
      }
      goto LAB_18012aa37;
    }
LAB_18012aa45:
    if (*(char *)(plStack_238[5] + 0x49) != '\0') {
      plStack_238[8] = *(longlong *)(plStack_238[5] + 8);
    }
    if (*(char *)(plStack_238[5] + 0x4a) != '\0') {
      lVar12 = *(longlong *)(plStack_238[5] + 0x10);
      plStack_238[10] = lVar12;
      plStack_238[9] = lVar12;
    }
    uVar21 = *(uint *)(plStack_238[5] + 4) & 0xffffffdc;
    uVar22 = uVar21 | 0x20;
    if ((uVar8 & 0x2000000) == 0) {
      uVar22 = uVar21;
    }
    if ((*(char *)(lVar4 + 0xc5) != '\0') || ((uVar8 & 0x16000000) != 0)) {
      uVar22 = uVar22 | 2;
    }
    if ((*(char *)(lVar4 + 0xc6) != '\0') || ((uVar8 & 0x16000000) != 0)) {
      uVar22 = uVar22 | 1;
    }
    iVar23 = (int)plStack_238[3];
    if ((iVar23 == 0) && (iVar23 = 0x11111111, *(char *)(lVar4 + 199) != '\0')) {
      iVar23 = 0;
    }
    *(int *)(plStack_238[5] + 0x28) = iVar23;
    uVar21 = *(uint *)((longlong)plStack_238 + 0x1c);
    if (uVar21 != 0) {
      uVar22 = uVar22 & ~uVar21 | *(uint *)(plStack_238 + 4) & uVar21;
    }
    *(uint *)(plStack_238[5] + 4) = uVar22 | 0x10;
  }
  func_0x00018011feb0(plStack_238[5],&uStack_168);
  if ((((cVar6 == '\0') && (uVar29 == 0)) && (*(int *)((longlong)plStack_238 + 0xc4) < 1)) &&
     ((int)plStack_238[0x19] < 1)) {
    func_0x00018011fc50(&fStack_218,lVar4 + 0x16ac,lVar4 + 0x16b4);
    if (*(char *)((longlong)plStack_238 + 0xae) == '\0') {
      if (0.0 < (float)uStack_160 - (float)uStack_168) {
        if (0.0 < uStack_160._4_4_ - uStack_168._4_4_) {
          pfVar15 = (float *)&uStack_168;
          goto LAB_18012ac57;
        }
      }
    }
    else if (0 < *(int *)(lVar4 + 0x1600)) {
      if (*(short *)(plStack_238[5] + 0x74) == -1) {
        uStack_208 = CONCAT44(*(float *)(lVar4 + 0x16b0) +
                              *(float *)(**(longlong **)(lVar4 + 0x1c70) + 0xc),
                              *(float *)(**(longlong **)(lVar4 + 0x1c70) + 8) +
                              *(float *)(lVar4 + 0x16ac));
        func_0x00018012ddc0(plStack_238,&uStack_208,1);
      }
      else {
        lVar17 = (longlong)*(short *)(plStack_238[5] + 0x74);
        pfVar15 = &fStack_198;
        lVar12 = *(longlong *)(lVar4 + 0x1608);
        fStack_198 = *(float *)(lVar12 + 0x10 + lVar17 * 0x24);
        fStack_194 = *(float *)(lVar12 + 0x14 + lVar17 * 0x24);
        fStack_190 = fStack_198 + *(float *)(lVar12 + 0x18 + lVar17 * 0x24);
        fStack_18c = fStack_194 + *(float *)(lVar12 + 0x1c + lVar17 * 0x24);
LAB_18012ac57:
        func_0x000180129830(plStack_238,pfVar15,&fStack_218);
      }
    }
  }
  *(float *)(plStack_238 + 8) = (float)(int)*(float *)(plStack_238 + 8);
  *(float *)((longlong)plStack_238 + 0x44) = (float)(int)*(float *)((longlong)plStack_238 + 0x44);
  if (uVar29 == 0) {
    if ((uVar8 & 0xc000000) == 0x4000000) {
      uVar9 = *(int32_t *)(lVar4 + 0x1654);
    }
    else {
      uVar9 = *(int32_t *)(lVar4 + 0x1634);
    }
  }
  else {
    uVar9 = *(int32_t *)(lVar4 + 0x164c);
  }
  uVar22 = 0;
  *(int32_t *)(plStack_238 + 0xf) = uVar9;
  if (*(char *)((longlong)plStack_238 + 0xae) != '\0') {
    *(int32_t *)(plStack_238 + 0xf) = 0;
  }
  if (((int)plStack_238[0x80] == 0x7fffffff) || (iVar23 = (int)plStack_238[0x7e], iVar23 == -1)) {
    iVar23 = 0x7fffffff;
  }
  else {
    iVar23 = ((int)plStack_238[0x80] + 1 + iVar23) % (iVar23 + 1);
  }
  *(int *)(plStack_238 + 0x7f) = iVar23;
  if ((*(int *)((longlong)plStack_238 + 0x404) == 0x7fffffff) ||
     (iVar23 = *(int *)((longlong)plStack_238 + 0x3f4), iVar23 == -1)) {
    iVar23 = 0x7fffffff;
  }
  else {
    iVar23 = (*(int *)((longlong)plStack_238 + 0x404) + 1 + iVar23) % (iVar23 + 1);
  }
  *(int *)((longlong)plStack_238 + 0x3fc) = iVar23;
  puVar18 = &uStack_1d8;
  *(int32_t *)((longlong)plStack_238 + 0x3f4) = 0xffffffff;
  *(int32_t *)(plStack_238 + 0x7e) = 0xffffffff;
  *(int32_t *)((longlong)plStack_238 + 0x404) = 0x7fffffff;
  *(int32_t *)(plStack_238 + 0x80) = 0x7fffffff;
  puVar27 = (int32_t *)FUN_1801293e0(puVar18,plStack_238,1);
  plVar14 = plStack_238;
  uStack_210 = (uint)puVar18 & 0xffffff00;
  uVar9 = puVar27[1];
  *(int32_t *)((longlong)plStack_238 + 0x8c) = *puVar27;
  *(int32_t *)(plStack_238 + 0x12) = uVar9;
  *(int32_t *)((longlong)plStack_238 + 0x94) = 0x7f7fffff;
  *(int32_t *)(plStack_238 + 0x13) = 0x7f7fffff;
  lVar12 = _DAT_180c8a9b0;
  if ((cVar1 != '\0') && ((uVar8 >> 0xc & 1) == 0)) {
    if ((uVar8 >> 0x1a & 1) == 0) {
      if (((*(byte *)((longlong)plStack_238 + 0x432) & 1) != 0) || (uVar29 == 0)) {
        uStack_210 = (uint)((uVar8 >> 0x19 & 1) == 0);
      }
    }
    else {
      uVar8 = uStack_210 >> 8;
      uStack_210 = CONCAT31((int3)uVar8,1);
    }
  }
  uStack_f8 = 0;
  uStack_f0 = 0;
  fVar34 = *(float *)(lVar4 + 0x19f8) * 1.35;
  fVar33 = *(float *)(lVar4 + 0x19f8) * 0.2 + *(float *)(plStack_238 + 0xf) + 1.0;
  if (fVar33 <= fVar34) {
    fVar33 = fVar34;
  }
  uStack_1b0 = (ulonglong)(*(char *)(lVar4 + 0xcb) != '\0') + 1;
  fVar33 = (float)(int)fVar33;
  if ((((*(char *)((longlong)plStack_238 + 0xb2) == '\0') &&
       ((*(byte *)((longlong)plStack_238 + 0xc) & 0x42) == 0)) &&
      (*(int *)((longlong)plStack_238 + 0xc4) < 1)) &&
     (((int)plStack_238[0x19] < 1 && ((char)plStack_238[0x16] != '\0')))) {
    fVar36 = *(float *)(_DAT_180c8a9b0 + 0x19f8) * 1.35;
    fVar34 = *(float *)(plStack_238 + 0xf) + 1.0 + *(float *)(_DAT_180c8a9b0 + 0x19f8) * 0.2;
    fStack_170 = (float)(-(uint)(*(char *)(_DAT_180c8a9b0 + 0xcb) != '\0') & 4);
    if (fVar34 <= fVar36) {
      fVar34 = fVar36;
    }
    fVar34 = (float)(int)((float)(int)fVar34 * 0.75);
    if (*(char *)(_DAT_180c8a9b0 + 0xcb) == '\0') {
      fVar36 = 0.0;
    }
    else {
      fVar36 = 4.0;
    }
    uStack_208 = 0x7f7fffff7f7fffff;
    fStack_218 = 3.4028235e+38;
    fStack_214 = 3.4028235e+38;
    FUN_18012e1b0(&UNK_180a064a0);
    lVar17 = uStack_228;
    lVar30 = 0;
    pfVar15 = (float *)0x180bf66e8;
    do {
      uStack_228 = CONCAT44(*(float *)((longlong)plVar14 + 0x4c) +
                            *(float *)((longlong)plVar14 + 0x44),
                            *(float *)(plVar14 + 8) + *(float *)(plVar14 + 9));
      func_0x00018011fcd0(&fStack_140,plVar14 + 8,&uStack_228,pfVar15 + -2);
      fStack_1e0 = fVar34 * *pfVar15 + fStack_140;
      fStack_1dc = fVar34 * pfVar15[1] + fStack_13c;
      fVar37 = fStack_140 - fVar36 * *pfVar15;
      fVar38 = fStack_13c - fVar36 * pfVar15[1];
      fStack_1e8 = fVar37;
      if (fStack_1e0 < fVar37) {
        fStack_1e8 = fStack_1e0;
        fStack_1e0 = fVar37;
      }
      fStack_1e4 = fVar38;
      if (fStack_1dc < fVar38) {
        fStack_1e4 = fStack_1dc;
        fStack_1dc = fVar38;
      }
      uVar9 = func_0x000180123c50(plVar14,(longlong)(int)uVar22);
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,0x2020);
      FUN_18010f170(&fStack_1e8,uVar9,&cStack_230,&cStack_22f);
      if (((cStack_230 == '\0') && (cStack_22f == '\0')) ||
         (*(uint *)(lVar12 + 0x1dcc) = (~uVar22 & 1) + 5, cStack_22f == '\0')) {
LAB_18012b18f:
        if (uVar22 == 0) goto LAB_18012b0c8;
        if (cStack_22f != '\0') goto LAB_18012b0d0;
        if (cStack_230 != '\0') goto LAB_18012b1a3;
      }
      else {
        if ((*(char *)(lVar12 + 0x415) == '\0') || (uVar22 != 0)) {
          fStack_138 = *pfVar15 * -fVar34;
          fStack_134 = pfVar15[1] * -fVar34;
          fStack_130 = fVar36 * *pfVar15;
          fStack_12c = fVar36 * pfVar15[1];
          pfVar16 = (float *)func_0x00018011fcd0(&fStack_108,&fStack_130,&fStack_138,pfVar15 + -2);
          fStack_124 = (*(float *)(lVar12 + 0x11c) - *(float *)(lVar12 + 0x1b4c)) + pfVar16[1];
          fStack_128 = (*(float *)(lVar12 + 0x118) - *(float *)(lVar12 + 0x1b48)) + *pfVar16;
          pfStack_258 = &fStack_218;
          FUN_1801295b0(plVar14,&fStack_128,pfVar15 + -2,&uStack_208);
          goto LAB_18012b18f;
        }
        pfVar16 = (float *)FUN_180128fd0(&uStack_1c8,plVar14,lVar17);
        fStack_218 = *pfVar16;
        fStack_214 = pfVar16[1];
        func_0x000180123e90(0,0);
LAB_18012b0c8:
        if (cStack_22f == '\0') {
LAB_18012b1a3:
          cVar6 = (cStack_230 != '\0') + '\x1e';
        }
        else {
LAB_18012b0d0:
          cVar6 = ' ';
        }
        uVar9 = FUN_180121ed0(cVar6);
        *(int32_t *)((longlong)&uStack_f8 + lVar30 * 4) = uVar9;
      }
      fVar38 = fStack_170;
      uVar22 = uVar22 + 1;
      lVar30 = lVar30 + 1;
      pfVar15 = pfVar15 + 6;
    } while (lVar30 < uStack_1b0);
    uVar32 = uStack_1a0 & 0xffffffff;
    uVar8 = 0;
    if (fStack_170 != 0.0) {
      do {
        pfStack_258._0_4_ = 0x40800000;
        FUN_1801296e0(&fStack_1f8,plVar14,uVar8,fVar34);
        uVar9 = func_0x000180123c50(plVar14,(longlong)(int)(uVar8 + 4));
        pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,0x20);
        FUN_18010f170(&fStack_1f8,uVar9,acStack_21f,&cStack_220);
        if ((((acStack_21f[0] != '\0') && (0.04 < *(float *)(lVar12 + 0x1b24))) ||
            (cStack_220 != '\0')) &&
           (*(uint *)(lVar12 + 0x1dcc) = (uVar8 & 1) + 3, cStack_220 != '\0')) {
          uStack_1a0 = plVar14[8];
          uStack_228 = 0;
          if (uVar8 == 0) {
LAB_18012b293:
            uStack_1a0 = CONCAT44((*(float *)(lVar12 + 0x11c) - *(float *)(lVar12 + 0x1b4c)) + 4.0,
                                  (int)uStack_1a0);
          }
          else if (uVar8 == 1) {
            uStack_228 = 0x3f800000;
LAB_18012b2d2:
            uStack_1a0._4_4_ = (int32_t)(uStack_1a0 >> 0x20);
            uStack_1a0 = CONCAT44(uStack_1a0._4_4_,
                                  (*(float *)(lVar12 + 0x118) - *(float *)(lVar12 + 0x1b48)) + 4.0);
          }
          else {
            if (uVar8 == 2) {
              uStack_228 = 0x3f80000000000000;
              goto LAB_18012b293;
            }
            if (uVar8 == 3) goto LAB_18012b2d2;
          }
          pfStack_258 = &fStack_218;
          uStack_148 = uVar8;
          FUN_1801295b0(plVar14,&uStack_1a0,&uStack_228,&uStack_208);
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)fVar38);
    }
    piVar24 = (int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x218);
    *piVar24 = *piVar24 + -1;
    if ((*(longlong *)(lVar12 + 0x1cd8) != 0) &&
       (*(longlong **)(*(longlong *)(lVar12 + 0x1cd8) + 0x3a0) == plVar14)) {
      iVar23 = *(int *)(lVar12 + 0x1cc0);
      fVar36 = 0.0;
      fVar34 = 0.0;
      if (iVar23 == 3) {
        if (*(char *)(lVar12 + 0x135) == '\0') goto LAB_18012b465;
        pfStack_258 = (float *)((ulonglong)pfStack_258 & 0xffffffff00000000);
        pfVar15 = (float *)FUN_180131aa0(&uStack_1c8,1,0,0);
        fVar34 = *pfVar15;
        fVar36 = pfVar15[1];
        iVar23 = *(int *)(lVar12 + 0x1cc0);
      }
      if (iVar23 == 4) {
        pfStack_258 = (float *)((ulonglong)pfStack_258 & 0xffffffff00000000);
        pfVar15 = (float *)FUN_180131aa0(&fStack_118,2,0,0);
        fVar34 = *pfVar15;
        fVar36 = pfVar15[1];
      }
      if ((fVar34 != 0.0) || (fVar36 != 0.0)) {
        fVar38 = *(float *)(lVar12 + 0xbc);
        if (*(float *)(lVar12 + 0xb8) <= *(float *)(lVar12 + 0xbc)) {
          fVar38 = *(float *)(lVar12 + 0xb8);
        }
        *(int8_t *)(lVar12 + 0x1cf8) = 0;
        *(int8_t *)(lVar12 + 0x1d07) = 1;
        fVar38 = (float)(int)(fVar38 * *(float *)(lVar12 + 0x18) * 600.0);
        uVar9 = FUN_180121ed0(0x20);
        uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar9);
        pfVar15 = (float *)FUN_180128fd0(&uStack_1d8,plVar14,
                                         CONCAT44(fVar36 * fVar38 +
                                                  *(float *)((longlong)plVar14 + 0x54),
                                                  fVar34 * fVar38 + *(float *)(plVar14 + 10)));
        fStack_218 = *pfVar15;
        fStack_214 = pfVar15[1];
      }
    }
LAB_18012b465:
    lVar12 = _DAT_180c8a9b0;
    if ((fStack_218 != 3.4028235e+38) &&
       ((fStack_218 != *(float *)(plVar14 + 10) ||
        (fStack_214 != *(float *)((longlong)plVar14 + 0x54))))) {
      *(float *)(plVar14 + 10) = fStack_218;
      *(float *)((longlong)plVar14 + 0x54) = fStack_214;
      if (((*(uint *)((longlong)plVar14 + 0xc) & 0x100) == 0) &&
         (*(float *)(lVar12 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar12 + 0x2e04) = *(int32_t *)(lVar12 + 0x1c);
      }
    }
    lVar12 = _DAT_180c8a9b0;
    if ((float)uStack_208 != 3.4028235e+38) {
      *(float *)(plVar14 + 8) = (float)(int)(float)uStack_208;
      *(float *)((longlong)plVar14 + 0x44) = (float)(int)uStack_208._4_4_;
      if (((*(uint *)((longlong)plVar14 + 0xc) & 0x100) == 0) &&
         (*(float *)(lVar12 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar12 + 0x2e04) = *(int32_t *)(lVar12 + 0x1c);
      }
    }
    plVar14[9] = plVar14[10];
  }
  uVar29 = (uint)uVar32;
  pfVar15 = (float *)0x180bf66e8;
  if (*(char *)((longlong)plStack_238 + 0xae) != '\0') {
    if (*(char *)(plStack_238[5] + 0x49) == '\0') {
      *(longlong *)(plStack_238[5] + 8) = plStack_238[8];
    }
    if (*(char *)(plStack_238[5] + 0x4a) == '\0') {
      *(longlong *)(plStack_238[5] + 0x10) = plStack_238[9];
    }
    puVar18 = (uint64_t *)func_0x00018011feb0(plStack_238[5]);
    uStack_168 = *puVar18;
    uStack_160 = puVar18[1];
  }
  *(uint64_t *)((longlong)plStack_238 + 0x34) = *(uint64_t *)(plStack_238[5] + 8);
  if ((*(float *)(plStack_238 + 9) <= 0.0) || ((uVar32 & 0x2000040) != 0)) {
    fVar34 = *(float *)(lVar4 + 0x19f8) * 16.0;
  }
  else {
    fVar34 = *(float *)(plStack_238 + 9) * 0.65;
  }
  *(float *)((longlong)plStack_238 + 0x284) = (float)(int)fVar34;
  FUN_180291500(plStack_238[0x5d]);
  *(uint *)(plStack_238[0x5d] + 0x30) =
       -(uint)(*(char *)(lVar4 + 0x16c1) != '\0') & 2 | (uint)(*(char *)(lVar4 + 0x16c0) != '\0');
  lVar12 = plStack_238[0x5d];
  uStack_1c8 = *(uint64_t *)(*(longlong *)(*(longlong *)(lVar4 + 0x19f0) + 0x58) + 8);
  FUN_18011d9a0(lVar12 + 0x70,&uStack_1c8);
  FUN_180291a50(lVar12);
  if (((uVar29 & 0x5000000) == 0x1000000) && (fStack_188 != 3.761582e-37)) {
    puVar18 = (uint64_t *)(lStack_158 + 0x228);
    puVar25 = (uint64_t *)(lStack_158 + 0x230);
  }
  else {
    puVar18 = &uStack_168;
    puVar25 = &uStack_160;
  }
  FUN_180126d10(puVar18,puVar25);
  if ((((uVar29 >> 0x1b & 1) == 0) ||
      (plVar14 = (longlong *)func_0x00018012ea90(), plStack_238 != plVar14)) ||
     (0 < *(int *)((longlong)plStack_238 + 0xdc))) {
    bVar28 = 0;
  }
  else {
    bVar28 = 1;
  }
  lVar12 = *(longlong *)(lVar4 + 0x1ce0);
  if ((lVar12 == 0) ||
     ((plStack_238 != *(longlong **)(lVar12 + 0x3a0) &&
      (((plVar14 = *(longlong **)(lVar4 + 0x1ce8), plVar14 == (longlong *)0x0 ||
        (plStack_238 != plVar14)) || (plVar14[5] == *(longlong *)(lVar12 + 0x28))))))) {
    bVar31 = false;
  }
  else {
    bVar31 = true;
  }
  if ((bVar28 != 0) || (bVar31)) {
    pfVar16 = (float *)(_DAT_180c8a9b0 + 0x1628 + ((ulonglong)bVar28 + 0x3a) * 0x10);
    fStack_1f8 = *pfVar16;
    fStack_1f4 = pfVar16[1];
    fStack_1f0 = pfVar16[2];
    fStack_1ec = pfVar16[3] * *(float *)(lVar4 + 0x1dc8) * *(float *)(_DAT_180c8a9b0 + 0x1628);
    uVar9 = func_0x000180121e20(&fStack_1f8);
    pfStack_250 = (float *)CONCAT44(pfStack_250._4_4_,0xf);
    pfStack_258 = (float *)((ulonglong)pfStack_258 & 0xffffffff00000000);
    FUN_180293f50(plStack_238[0x5d],&uStack_168,&uStack_160,uVar9);
    if ((bVar31) && (plStack_238 == *(longlong **)(lVar4 + 0x1ce0))) {
      func_0x00018010e720(plStack_238,&uStack_1d8);
      func_0x00018010e610(&uStack_1d8);
      if ((float)uStack_1d8 <= (float)uStack_168) {
        if (((uStack_1d8._4_4_ <= uStack_168._4_4_) && ((float)uStack_160 <= fStack_1d0)) &&
           (uStack_160._4_4_ <= fStack_1cc)) goto LAB_18012b82d;
      }
      lVar12 = plStack_238[0x5d];
      uVar9 = *(int32_t *)(lVar4 + 0x1634);
      fStack_1f8 = *(float *)(_DAT_180c8a9b0 + 0x19b8);
      fStack_1f4 = *(float *)(_DAT_180c8a9b0 + 0x19bc);
      fStack_1f0 = *(float *)(_DAT_180c8a9b0 + 0x19c0);
      fStack_1ec = *(float *)(_DAT_180c8a9b0 + 0x19c4) *
                   *(float *)(lVar4 + 0x1cf4) * 0.25 * *(float *)(_DAT_180c8a9b0 + 0x1628);
      uVar10 = func_0x000180121e20(&fStack_1f8);
      pfStack_250 = (float *)CONCAT44(pfStack_250._4_4_,0xf);
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,uVar9);
      FUN_180293f50(lVar12,&uStack_1d8,&fStack_1d0,uVar10);
    }
  }
LAB_18012b82d:
  uVar8 = uStack_210;
  lVar12 = *(longlong *)(lVar4 + 0x1cd8);
  fVar34 = *(float *)(plStack_238 + 0xf);
  fVar36 = *(float *)((longlong)plStack_238 + 0x7c);
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(lVar4 + 0x1c98);
  }
  if (((char)uStack_210 == '\0') &&
     ((lVar12 == 0 ||
      ((plStack_238[0x76] != *(longlong *)(lVar12 + 0x3b0) &&
       ((plStack_238[0x81] == 0 || (plStack_238[0x81] != *(longlong *)(lVar12 + 0x408))))))))) {
    bVar28 = 0;
  }
  else {
    bVar28 = 1;
  }
  func_0x000180120c80(plStack_238,&fStack_180);
  plVar14 = plStack_238;
  if (*(char *)((longlong)plStack_238 + 0xb2) == '\0') {
    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar29) & 0xffffffff00000080;
    if ((uVar32 & 0x80) == 0) {
      bVar31 = false;
      if (((*(char *)(lVar4 + 0x1dd0) != '\0') &&
          (*(int *)(lVar4 + 0x1a90) - *(int *)(lVar4 + 0x1e44) < 2)) &&
         ((*(char *)(lVar4 + 0xc3) != '\0' &&
          (((*(int *)(lVar4 + 0x1df4) != -1 &&
            (iVar23 = strcmp(&UNK_180a06400,lVar4 + 0x1df8), iVar23 == 0)) &&
           (bVar31 = false, (longlong *)**(uint64_t **)(lVar4 + 0x1de0) == plVar14)))))) {
        bVar31 = true;
      }
      if ((uVar32 & 0x6000000) == 0) {
        lVar12 = 0xc0;
        if (uStack_120 != 0) {
          lVar12 = 0xd0;
        }
      }
      else {
        lVar12 = 0xe0;
      }
      pfVar16 = (float *)(lVar12 + 0x1628 + _DAT_180c8a9b0);
      fStack_1f8 = *pfVar16;
      fStack_1f4 = pfVar16[1];
      fStack_1f0 = pfVar16[2];
      fStack_1ec = pfVar16[3] * *(float *)(_DAT_180c8a9b0 + 0x1628);
      uVar8 = func_0x000180121e20(&fStack_1f8);
      if (*(char *)((longlong)plStack_238 + 0xae) == '\0') {
        fVar38 = 1.0;
        if (*(int *)(lVar4 + 0x1be8) != 0) {
          fVar38 = *(float *)(lVar4 + 0x1c38);
        }
        if (bVar31) {
          fVar38 = fVar38 * 0.5;
        }
        if (fVar38 != 1.0) {
          if (0.0 <= fVar38) {
            if (1.0 <= fVar38) {
              fVar38 = 1.0;
            }
          }
          else {
            fVar38 = 0.0;
          }
          uVar8 = (int)(fVar38 * 255.0 + 0.5) << 0x18 | uVar8 & 0xffffff;
        }
      }
      else {
        uVar8 = uVar8 | 0xff000000;
        if (bVar31) {
          *(float *)(plStack_238[5] + 0x6c) = *(float *)(plStack_238[5] + 0x6c) * 0.5;
        }
      }
      fStack_124 = *(float *)((longlong)plStack_238 + 0x4c) +
                   *(float *)((longlong)plStack_238 + 0x44);
      fStack_128 = *(float *)(plStack_238 + 9) + *(float *)(plStack_238 + 8);
      lVar12 = plStack_238[0x5d];
      fStack_12c = (float)func_0x00018010e760(plStack_238);
      fStack_12c = fStack_12c + *(float *)((longlong)plStack_238 + 0x44);
      fStack_130 = *(float *)(plStack_238 + 8);
      uVar9 = 0xc;
      if ((uVar32 & 1) != 0) {
        uVar9 = 0xf;
      }
      pfStack_250 = (float *)CONCAT44(pfStack_250._4_4_,uVar9);
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,fVar34);
      FUN_180293f50(lVar12,&fStack_130,&fStack_128,uVar8);
    }
    bVar31 = false;
    *(int32_t *)(lVar4 + 0x1be8) = 0;
    if (((uVar32 & 1) == 0) && ((*(byte *)((longlong)plStack_238 + 0x432) & 1) == 0)) {
      pfVar16 = (float *)(_DAT_180c8a9b0 + 0x1628 + ((ulonglong)bVar28 + 0x14) * 0x10);
      fStack_1f8 = *pfVar16;
      fStack_1f4 = pfVar16[1];
      fStack_1f0 = pfVar16[2];
      fStack_1ec = pfVar16[3] * *(float *)(_DAT_180c8a9b0 + 0x1628);
      uVar9 = func_0x000180121e20(&fStack_1f8);
      pfStack_250 = (float *)CONCAT44(pfStack_250._4_4_,3);
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,fVar34);
      FUN_180293f50(plStack_238[0x5d],&fStack_180,&fStack_178,uVar9);
    }
    if ((uVar29 >> 10 & 1) != 0) {
      func_0x00018010e7f0(plStack_238,&fStack_198);
      uVar13 = func_0x00018010e720(plStack_238,&uStack_1d8);
      func_0x00018010e690(&fStack_198,uVar13);
      lVar12 = plStack_238[0x5d];
      fVar38 = fVar34;
      if ((uVar32 & 1) == 0) {
        fVar38 = 0.0;
      }
      fStack_1f8 = *(float *)(_DAT_180c8a9b0 + 0x1798);
      fStack_1f4 = *(float *)(_DAT_180c8a9b0 + 0x179c);
      fStack_1f0 = *(float *)(_DAT_180c8a9b0 + 0x17a0);
      fStack_1ec = *(float *)(_DAT_180c8a9b0 + 0x17a4) * *(float *)(_DAT_180c8a9b0 + 0x1628);
      uVar9 = func_0x000180121e20(&fStack_1f8);
      pfStack_250 = (float *)CONCAT44(pfStack_250._4_4_,3);
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,fVar38);
      FUN_180293f50(lVar12,&fStack_198,&fStack_190,uVar9);
      fVar38 = *(float *)(lVar4 + 0x1668);
      if ((0.0 < fVar38) &&
         (fStack_18c <
          *(float *)((longlong)plStack_238 + 0x4c) + *(float *)((longlong)plStack_238 + 0x44))) {
        lVar12 = plStack_238[0x5d];
        fStack_1f8 = *(float *)(_DAT_180c8a9b0 + 0x1718);
        fStack_1f4 = *(float *)(_DAT_180c8a9b0 + 0x171c);
        fStack_1f0 = *(float *)(_DAT_180c8a9b0 + 0x1720);
        fStack_1ec = *(float *)(_DAT_180c8a9b0 + 0x1724) * *(float *)(_DAT_180c8a9b0 + 0x1628);
        uVar9 = func_0x000180121e20(&fStack_1f8);
        uStack_1d8 = CONCAT44(fStack_18c,fStack_190);
        fStack_134 = fStack_18c;
        fStack_138 = fStack_198;
        pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,fVar38);
        FUN_180293d20(lVar12,&fStack_138,&uStack_1d8,uVar9);
      }
    }
    lVar12 = plStack_238[0x81];
    if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0xa0) & 0x40) != 0)) {
      fStack_1f8 = *(float *)(lVar12 + 0x38);
      fStack_1f4 = *(float *)(lVar12 + 0x3c);
      uStack_228 = *(longlong *)(lVar12 + 0x38);
      fVar38 = (float)(int)(*(float *)(lVar4 + 0x19f8) * 0.7);
      fStack_1ec = (float)(int)(*(float *)(lVar4 + 0x19f8) * 0.55);
      fStack_1f0 = fStack_1f8 + fStack_1ec;
      fStack_1ec = fStack_1f4 + fStack_1ec;
      uVar9 = FUN_180123c00(plStack_238,&UNK_180a064c0,0);
      pfStack_258._0_4_ = 0x20;
      cVar6 = FUN_18010f170(&fStack_1f8,uVar9,acStack_21f,&cStack_220);
      if (cVar6 != '\0') {
        *(byte *)(plStack_238[0x81] + 0xa1) = *(byte *)(plStack_238[0x81] + 0xa1) | 0x10;
      }
      if (((cStack_220 == '\0') || (acStack_21f[0] == '\0')) &&
         (((*(byte *)(plStack_238[0x81] + 0xa0) & 8) == 0 || (acStack_21f[0] != '\0')))) {
        lVar12 = (ulonglong)(acStack_21f[0] != '\0') + 0x15;
      }
      else {
        lVar12 = 0x17;
      }
      puVar18 = (uint64_t *)(_DAT_180c8a9b0 + 0x1628 + (lVar12 + 10) * 0x10);
      uStack_1c8 = *puVar18;
      uStack_1c0 = *(int32_t *)(puVar18 + 1);
      fStack_1bc = *(float *)((longlong)puVar18 + 0xc) * *(float *)(_DAT_180c8a9b0 + 0x1628);
      uVar9 = func_0x000180121e20(&uStack_1c8);
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,uVar9);
      fStack_13c = uStack_228._4_4_ + fVar38;
      fStack_140 = (float)uStack_228;
      uStack_208 = CONCAT44(uStack_228._4_4_,(float)uStack_228 + fVar38);
      FUN_1802940f0(plStack_238[0x5d],&uStack_228,&uStack_208,&fStack_140);
    }
    if (*(char *)((longlong)plStack_238 + 0xac) != '\0') {
      FUN_180110540(0);
    }
    if (*(char *)((longlong)plStack_238 + 0xad) != '\0') {
      FUN_180110540(1);
    }
    if ((uVar32 & 2) == 0) {
      lVar12 = 0;
      do {
        fVar38 = *(float *)(plStack_238 + 8);
        fVar37 = *(float *)((longlong)plStack_238 + 0x44);
        fVar38 = ((fVar38 + *(float *)(plStack_238 + 9)) - fVar38) * pfVar15[-2] + fVar38;
        fVar37 = ((fVar37 + *(float *)((longlong)plStack_238 + 0x4c)) - fVar37) * pfVar15[-1] +
                 fVar37;
        if (bVar31) {
          fStack_170 = fVar36;
          fStack_16c = fVar33;
          fVar35 = fVar36;
        }
        else {
          fStack_218 = fVar33;
          fStack_214 = fVar36;
          fVar35 = fVar33;
        }
        pfVar16 = &fStack_214;
        if (bVar31) {
          pfVar16 = &fStack_16c;
        }
        fStack_188 = fVar35 * *pfVar15 + fVar38;
        fStack_184 = *pfVar16 * pfVar15[1] + fVar37;
        FUN_18011d9a0(plStack_238[0x5d] + 0x80,&fStack_188);
        if (bVar31) {
          fStack_108 = fVar33;
          fStack_104 = fVar36;
          fVar35 = fVar33;
        }
        else {
          fStack_1e8 = fVar36;
          fStack_1e4 = fVar33;
          fVar35 = fVar36;
        }
        pfVar16 = &fStack_1e4;
        if (bVar31) {
          pfVar16 = &fStack_104;
        }
        fStack_118 = fVar35 * *pfVar15 + fVar38;
        fStack_114 = *pfVar16 * pfVar15[1] + fVar37;
        FUN_18011d9a0(plStack_238[0x5d] + 0x80,&fStack_118);
        pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,pfVar15[3]);
        uStack_1c8 = CONCAT44((fVar36 + fVar34) * pfVar15[1] + fVar37,
                              (fVar36 + fVar34) * *pfVar15 + fVar38);
        FUN_180293730(plStack_238[0x5d],&uStack_1c8);
        lVar17 = plStack_238[0x5d];
        FUN_180293190(lVar17,*(uint64_t *)(lVar17 + 0x88),*(int32_t *)(lVar17 + 0x80),
                      *(int32_t *)((longlong)&uStack_f8 + lVar12 * 4));
        bVar31 = (bool)(bVar31 ^ 1);
        *(int32_t *)(lVar17 + 0x80) = 0;
        lVar12 = lVar12 + 1;
        pfVar15 = pfVar15 + 6;
      } while (lVar12 < uStack_1b0);
    }
    if ((0.0 < fVar36) && ((int)uStack_1a0 == 0)) {
      lVar12 = plStack_238[0x5d];
      uStack_f8 = *(uint64_t *)(_DAT_180c8a9b0 + 0x1718);
      uStack_f0 = CONCAT44(*(float *)(_DAT_180c8a9b0 + 0x1724) * *(float *)(_DAT_180c8a9b0 + 0x1628)
                           ,*(int32_t *)(_DAT_180c8a9b0 + 0x1720));
      uVar8 = func_0x000180121e20(&uStack_f8);
      fVar38 = *(float *)(plStack_238 + 8) + *(float *)(plStack_238 + 9);
      fVar37 = *(float *)((longlong)plStack_238 + 0x44) + *(float *)((longlong)plStack_238 + 0x4c);
      if ((uVar8 & 0xff000000) != 0) {
        pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,0xf);
        uStack_1c8 = CONCAT44(*(float *)((longlong)plStack_238 + 0x44) + 0.5,
                              *(float *)(plStack_238 + 8) + 0.5);
        if ((*(byte *)(lVar12 + 0x30) & 1) == 0) {
          fVar38 = fVar38 - 0.49;
          fVar37 = fVar37 - 0.49;
        }
        else {
          fVar38 = fVar38 - 0.5;
          fVar37 = fVar37 - 0.5;
        }
        uStack_1b0 = CONCAT44(fVar37,fVar38);
        FUN_1802939e0(lVar12,&uStack_1c8,&uStack_1b0,fVar34);
        FUN_18010e4e0(lVar12,uVar8,1,fVar36);
      }
    }
    if (uStack_148 != 0xffffffff) {
      pfStack_258 = (float *)((ulonglong)pfStack_258 & 0xffffffff00000000);
      FUN_1801296e0(&uStack_1c8,plStack_238,uStack_148,fVar33);
      lVar12 = plStack_238[0x5d];
      uStack_1b0 = *(longlong *)(_DAT_180c8a9b0 + 0x1898);
      uStack_1a8 = *(int32_t *)(_DAT_180c8a9b0 + 0x18a0);
      fStack_1a4 = *(float *)(_DAT_180c8a9b0 + 0x18a4) * *(float *)(_DAT_180c8a9b0 + 0x1628);
      uVar9 = func_0x000180121e20(&uStack_1b0);
      if (fVar36 <= 1.0) {
        fVar36 = 1.0;
      }
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,fVar36);
      FUN_180293d20(lVar12,&uStack_1c8,&uStack_1c0,uVar9);
    }
    fVar33 = *(float *)(lVar4 + 0x1668);
    uVar8 = uStack_210;
    if (((0.0 < fVar33) && ((uVar32 & 1) == 0)) &&
       ((*(byte *)((longlong)plStack_238 + 0x432) & 1) == 0)) {
      lVar12 = plStack_238[0x5d];
      fStack_118 = *(float *)(_DAT_180c8a9b0 + 0x1718);
      fStack_114 = *(float *)(_DAT_180c8a9b0 + 0x171c);
      uStack_110 = *(int32_t *)(_DAT_180c8a9b0 + 0x1720);
      fStack_10c = *(float *)(_DAT_180c8a9b0 + 0x1724) * *(float *)(_DAT_180c8a9b0 + 0x1628);
      uVar9 = func_0x000180121e20(&fStack_118);
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,fVar33);
      uStack_1b0 = CONCAT44(fStack_174 - 1.0,fStack_178 - *(float *)(lVar4 + 0x1638));
      uStack_1c8 = CONCAT44(fStack_174 - 1.0,fStack_180 + *(float *)(lVar4 + 0x1638));
      FUN_180293d20(lVar12,&uStack_1c8,&uStack_1b0,uVar9);
      uVar8 = uStack_210;
    }
  }
  else {
    uVar9 = *(int32_t *)(lVar4 + 0x1668);
    *(int32_t *)(lVar4 + 0x1668) = *(int32_t *)((longlong)plStack_238 + 0x7c);
    if ((bVar28 == 0) || (lVar12 = 0x150, *(char *)(lVar4 + 0x1d06) != '\0')) {
      lVar12 = 0x160;
    }
    puVar18 = (uint64_t *)(lVar12 + 0x1628 + _DAT_180c8a9b0);
    uStack_f8 = *puVar18;
    uStack_f0 = CONCAT44(*(float *)((longlong)puVar18 + 0xc) * *(float *)(_DAT_180c8a9b0 + 0x1628),
                         *(int32_t *)(puVar18 + 1));
    uVar10 = func_0x000180121e20(&uStack_f8);
    pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,fVar34);
    FUN_180122960(CONCAT44(fStack_17c,fStack_180),CONCAT44(fStack_174,fStack_178),uVar10,1);
    *(int32_t *)(lVar4 + 0x1668) = uVar9;
  }
  pfVar15 = (float *)(lVar4 + 0x1668);
  plStack_238[0xb] = plStack_238[10];
  *(float *)(plStack_238 + 0x4e) =
       (*(float *)(plStack_238 + 8) - *(float *)((longlong)plStack_238 + 0x8c)) +
       *(float *)(plStack_238 + 0xe);
  fVar38 = (float)func_0x00018010e760(plStack_238);
  fVar33 = *(float *)((longlong)plStack_238 + 0x44);
  fVar34 = *(float *)(plStack_238 + 0x12);
  fVar36 = *(float *)((longlong)plStack_238 + 0x74);
  fVar37 = (float)func_0x00018010e7a0();
  *(float *)((longlong)plStack_238 + 0x274) = fVar37 + fVar38 + (fVar33 - fVar34) + fVar36;
  fVar33 = *(float *)(plStack_238 + 0xd);
  if (fVar33 == 0.0) {
    fVar33 = *(float *)(plStack_238 + 9) - *(float *)((longlong)plStack_238 + 0xa4);
  }
  *(float *)(plStack_238 + 0x4f) =
       ((*(float *)(plStack_238 + 8) - *(float *)((longlong)plStack_238 + 0x8c)) -
       *(float *)(plStack_238 + 0xe)) + fVar33;
  fVar33 = *(float *)((longlong)plStack_238 + 0x6c);
  if (fVar33 == 0.0) {
    fVar33 = *(float *)((longlong)plStack_238 + 0x4c) - *(float *)(plStack_238 + 0x15);
  }
  *(float *)((longlong)plStack_238 + 0x27c) =
       ((*(float *)((longlong)plStack_238 + 0x44) - *(float *)(plStack_238 + 0x12)) -
       *(float *)((longlong)plStack_238 + 0x74)) + fVar33;
  *(float *)((longlong)plStack_238 + 0x204) =
       *(float *)(plStack_238 + 0xe) - *(float *)((longlong)plStack_238 + 0x8c);
  uVar10 = 0;
  *(int32_t *)(plStack_238 + 0x41) = 0;
  *(int32_t *)((longlong)plStack_238 + 0x20c) = 0;
  func_0x00018010e7a0(plStack_238);
  func_0x00018010e760(plStack_238);
  uVar13 = func_0x00018004ba20(&uStack_1d8,
                               *(float *)((longlong)plStack_238 + 0x20c) +
                               *(float *)((longlong)plStack_238 + 0x204));
  puVar27 = (int32_t *)func_0x00018011fbf0(&uStack_1b0,plStack_238 + 8,uVar13);
  uVar9 = puVar27[1];
  *(int32_t *)(plStack_238 + 0x22) = *puVar27;
  *(int32_t *)((longlong)plStack_238 + 0x114) = uVar9;
  plStack_238[0x20] = plStack_238[0x22];
  plStack_238[0x21] = plStack_238[0x22];
  plStack_238[0x23] = plStack_238[0x22];
  puVar27 = (int32_t *)func_0x00018004ba20(&uStack_1d8);
  uVar9 = puVar27[1];
  *(int32_t *)((longlong)plStack_238 + 300) = *puVar27;
  *(int32_t *)(plStack_238 + 0x26) = uVar9;
  plStack_238[0x24] = *(longlong *)((longlong)plStack_238 + 300);
  *(int32_t *)((longlong)plStack_238 + 0x134) = 0;
  *(int32_t *)(plStack_238 + 0x25) = 0;
  *(int8_t *)((longlong)plStack_238 + 0x17c) = 0;
  fVar33 = (float)func_0x0001801293c0(plStack_238);
  *(bool *)((longlong)plStack_238 + 0x17d) = 0.0 < fVar33;
  *(int *)((longlong)plStack_238 + 0x174) = (int)plStack_238[0x2f];
  *(int32_t *)(plStack_238 + 0x2f) = 0;
  *(int8_t *)((longlong)plStack_238 + 0x17e) = 0;
  *(float *)(plStack_238 + 0x27) = *(float *)((longlong)plStack_238 + 0x104) - 9999.0;
  FUN_18013e200(plStack_238 + 0x31,0);
  lVar12 = lStack_158;
  *(int32_t *)(plStack_238 + 0x34) = 1;
  if (lStack_158 == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = *(int32_t *)(lStack_158 + 0x1a0);
  }
  *(int32_t *)((longlong)plStack_238 + 0x1a4) = uVar9;
  if (lStack_158 != 0) {
    uVar10 = *(int32_t *)(lStack_158 + 0x1a8);
  }
  *(int32_t *)(plStack_238 + 0x35) = uVar10;
  *(int32_t *)((longlong)plStack_238 + 0x1ac) = *(int32_t *)((longlong)plStack_238 + 0x284);
  *(int32_t *)(plStack_238 + 0x36) = 0xbf800000;
  FUN_18013e340(plStack_238 + 0x37,0);
  FUN_18013e2f0(plStack_238 + 0x39,0);
  FUN_18013e2f0(plStack_238 + 0x3b,0);
  plStack_238[0x42] = 0;
  *(int32_t *)((longlong)plStack_238 + 0x13c) = 0;
  *(int32_t *)(plStack_238 + 0x28) = 0;
  plStack_238[0x33] = (longlong)(plStack_238 + 0x57);
  FUN_18013db40(plStack_238 + 0x3d,0);
  func_0x00018011a9d0(plStack_238 + 0x51,3);
  if ((uStack_120 != 0) && ((int)plStack_238[0x35] != *(int *)(lVar12 + 0x1a8))) {
    *(int *)(plStack_238 + 0x35) = *(int *)(lVar12 + 0x1a8);
    FUN_18011d940(plStack_238 + 0x37,plStack_238 + 0x35);
  }
  if (0 < *(int *)((longlong)plStack_238 + 0xc4)) {
    *(int *)((longlong)plStack_238 + 0xc4) = *(int *)((longlong)plStack_238 + 0xc4) + -1;
  }
  if (0 < (int)plStack_238[0x19]) {
    *(int *)(plStack_238 + 0x19) = (int)plStack_238[0x19] + -1;
  }
  if ((char)uVar8 != '\0') {
    FUN_18012d2e0(plStack_238);
    func_0x000180131810(plStack_238,0);
  }
  puVar5 = puStack_150;
  if ((((puStack_150 != (int8_t *)0x0) &&
       (lVar17 = plStack_238[5], *(char *)(lVar17 + 0x48) != '\0')) &&
      (lVar30 = func_0x00018012fae0(), lVar17 != lVar30)) &&
     (((*(byte *)((longlong)plStack_238 + 0x432) & 1) == 0 ||
      ((*(byte *)((longlong)plStack_238 + 0x432) & 2) != 0)))) {
    *(int8_t *)(lVar17 + 0x48) = 0;
    *(int8_t *)(lVar4 + 0x1cf8) = 0;
    *puVar5 = 0;
  }
  if (((uVar32 & 1) == 0) && ((*(byte *)((longlong)plStack_238 + 0x432) & 1) == 0)) {
    uVar8 = *(uint *)(plStack_238 + 0x35);
    *(uint *)(plStack_238 + 0x35) = uVar8 | 0x10;
    *(int32_t *)((longlong)plStack_238 + 0x16c) = 1;
    *(int32_t *)(plStack_238 + 0x2e) = 2;
    if ((uVar32 & 0x20) == 0) {
      plVar14 = plStack_238 + 8;
      uVar9 = FUN_180123c00(plStack_238,&UNK_180a064b0,0);
      cVar6 = FUN_180110000(uVar9,plVar14,0);
      if (cVar6 != '\0') {
        *(int8_t *)((longlong)plStack_238 + 0xb3) = 1;
      }
    }
    if (puStack_150 != (int8_t *)0x0) {
      fVar33 = *(float *)(lVar4 + 0x19f8) * 0.5;
      uVar13 = func_0x00018004ba20(&uStack_1d8,
                                   ((*(float *)(plStack_238 + 9) + *(float *)(plStack_238 + 8)) -
                                   *(float *)(lVar4 + 0x165c)) - fVar33,
                                   *(float *)((longlong)plStack_238 + 0x44) +
                                   *(float *)(lVar4 + 0x1660) + fVar33);
      uVar9 = FUN_180123c00(plStack_238,&UNK_180a064d0,0);
      cVar6 = FUN_18010fd40(uVar9,uVar13);
      if (cVar6 != '\0') {
        *puStack_150 = 0;
      }
    }
    *(int32_t *)((longlong)plStack_238 + 0x16c) = 0;
    *(int32_t *)(plStack_238 + 0x2e) = 1;
    *(uint *)(plStack_238 + 0x35) = uVar8;
    if ((uVar32 & 0x100000) == 0) {
      fVar33 = 0.0;
    }
    else {
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,0xbf800000);
      pfVar16 = (float *)FUN_180127c60(&uStack_1d8,&system_data_df28,0,0);
      fVar33 = *pfVar16;
    }
    uVar13 = func_0x00018004ba20(&uStack_1d8);
    pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,0xbf800000);
    uVar19 = FUN_180127c60(&uStack_1b0,pcStack_100,0,1);
    func_0x00018011fbf0(&uStack_228,uVar19,uVar13);
    puVar5 = puStack_150;
    fStack_1e8 = fStack_180;
    fStack_1e4 = fStack_17c;
    fStack_1e0 = fStack_178;
    fStack_1dc = fStack_174;
    if ((uVar32 & 0x20) == 0) {
      fVar34 = *(float *)(lVar4 + 0x165c);
      fVar36 = fVar34 + *(float *)(lVar4 + 0x19f8) + *(float *)(lVar4 + 0x1674);
    }
    else {
      fVar34 = *(float *)(lVar4 + 0x165c);
      fVar36 = fVar34;
    }
    if (puStack_150 != (int8_t *)0x0) {
      fVar34 = fVar34 + *(float *)(lVar4 + 0x19f8) + *(float *)(lVar4 + 0x1674);
    }
    if (0.0 < *(float *)(lVar4 + 0x1644)) {
      fVar34 = (float)func_0x00018013e9f0();
    }
    fStack_1e8 = fStack_1e8 + fVar36;
    fStack_1e0 = fStack_1e0 - fVar34;
    fStack_198 = fStack_1e8;
    fStack_194 = fStack_1e4;
    fStack_18c = fStack_1dc;
    if (puVar5 == (int8_t *)0x0) {
      fStack_190 = *(float *)(lVar4 + 0x165c);
    }
    else {
      fStack_190 = fStack_1e0;
      fStack_190 = (float)func_0x00018010e5a0(&fStack_180);
      fStack_190 = fStack_190 - 3.0;
    }
    pfStack_248 = &fStack_198;
    pfStack_258 = (float *)&uStack_228;
    fStack_190 = (*(float *)(plStack_238 + 9) + *(float *)(plStack_238 + 8)) - fStack_190;
    pfStack_250 = (float *)(lVar4 + 0x1644);
    FUN_180122890(&fStack_1e8,&fStack_1e0,pcStack_100,0);
    if ((uVar32 & 0x100000) != 0) {
      uVar13 = func_0x00018004ba20(&uStack_1c8,2.0 - fVar33);
      func_0x00018010e590(&fStack_1e8);
      func_0x00018013e900();
      uVar19 = func_0x00018004ba20(&fStack_118);
      func_0x00018011fbf0(&uStack_1d8,uVar19,uVar13);
      func_0x00018004ba20(&uStack_1b0);
      pfVar16 = (float *)func_0x00018004ba20(&uStack_1c8);
      uVar13 = func_0x00018011fbf0(&fStack_118,&fStack_1e0,&uStack_1b0);
      uVar19 = func_0x00018011fbf0(&fStack_108,&uStack_1d8,&uStack_1b0);
      pfStack_248 = &fStack_198;
      pfStack_258 = (float *)0x0;
      pfStack_250 = pfVar16;
      FUN_180122890(uVar19,uVar13,&system_data_df28,0);
    }
  }
  *(int16_t *)((longlong)plStack_238 + 0x26a) = 0;
  *(int16_t *)(plStack_238 + 0x4d) = 0;
  plVar14 = (longlong *)func_0x00018010e720(plStack_238,&uStack_f8);
  lVar17 = plVar14[1];
  plStack_238[0x47] = *plVar14;
  plStack_238[0x48] = lVar17;
  if ((*(byte *)((longlong)plStack_238 + 0x432) & 1) != 0) {
    fVar33 = (float)func_0x00018010e760();
    *(float *)((longlong)plStack_238 + 0x23c) = fVar33 + *(float *)((longlong)plStack_238 + 0x23c);
  }
  func_0x00018010e690(plStack_238 + 0x47,plStack_238 + 0x45);
  *(float *)(plStack_238 + 0x49) = fStack_180 + *(float *)((longlong)plStack_238 + 0x7c);
  if ((uVar29 & 0x401) == 1) {
    pfVar15 = (float *)((longlong)plStack_238 + 0x7c);
  }
  fVar33 = *pfVar15;
  fVar34 = (float)func_0x00018010e7a0();
  *(float *)((longlong)plStack_238 + 0x24c) = fVar34 + fStack_174 + fVar33;
  *(float *)(plStack_238 + 0x4a) =
       ((*(float *)(plStack_238 + 9) + *(float *)(plStack_238 + 8)) -
       *(float *)((longlong)plStack_238 + 0xa4)) - *(float *)((longlong)plStack_238 + 0x7c);
  *(float *)((longlong)plStack_238 + 0x254) =
       ((*(float *)((longlong)plStack_238 + 0x4c) + *(float *)((longlong)plStack_238 + 0x44)) -
       *(float *)(plStack_238 + 0x15)) - *(float *)((longlong)plStack_238 + 0x7c);
  fVar33 = (float)func_0x00018013e900();
  *(float *)(plStack_238 + 0x4b) = (float)(int)(fVar33 + *(float *)(plStack_238 + 0x49) + 0.5);
  *(float *)((longlong)plStack_238 + 0x25c) =
       (float)(int)(*(float *)((longlong)plStack_238 + 0x24c) + 0.5);
  fVar33 = *(float *)(plStack_238 + 0x4a);
  fVar34 = (float)func_0x00018013e900();
  *(float *)(plStack_238 + 0x4c) = (float)(int)((fVar33 + 0.5) - fVar34);
  *(float *)((longlong)plStack_238 + 0x264) =
       (float)(int)(*(float *)((longlong)plStack_238 + 0x254) + 0.5);
  if ((*(byte *)(lVar4 + 8) & 0x40) != 0) {
    if ((*(int *)(lVar4 + 0x1b2c) == *(int *)((longlong)plStack_238 + 0x84)) &&
       (((*(char *)(lVar4 + 0xc1) == '\0' || (*(char *)(lVar4 + 0x135) != '\0')) &&
        ((*(uint *)(plStack_238[0x74] + 0xc) & 0x200004) == 0)))) {
      FUN_18013ba30();
    }
    if ((((*(char *)(lVar4 + 0x1dd0) != '\0') && ((uVar29 >> 0x15 & 1) == 0)) &&
        ((*(longlong *)(lVar4 + 0x1b78) == 0 ||
         (*(longlong **)(*(longlong *)(lVar4 + 0x1b78) + 0x3a0) != plStack_238)))) &&
       ((plStack_238 == (longlong *)plStack_238[0x74] &&
        ((*(uint *)((longlong)plStack_238 + 0xc) & 0x20000000) == 0)))) {
      FUN_18013baf0();
    }
  }
  if ((*(byte *)((longlong)plStack_238 + 0x432) & 1) == 0) {
    *(int32_t *)((longlong)plStack_238 + 0x144) = *(int32_t *)((longlong)plStack_238 + 0x84);
    cVar6 = FUN_180128040(&fStack_180,&fStack_178,0);
    *(uint *)(plStack_238 + 0x29) = (uint)(cVar6 != '\0');
    *(ulonglong *)((longlong)plStack_238 + 0x14c) = CONCAT44(fStack_17c,fStack_180);
    *(ulonglong *)((longlong)plStack_238 + 0x154) = CONCAT44(fStack_174,fStack_178);
    iVar23 = iStack_200;
    iVar26 = iStack_1b8;
  }
  else {
    *(int *)((longlong)plStack_238 + 0x144) = (int)plStack_238[1];
    *(int32_t *)(plStack_238 + 0x29) = *(int32_t *)((longlong)plStack_238 + 0x41c);
    *(longlong *)((longlong)plStack_238 + 0x14c) = plStack_238[0x84];
    *(longlong *)((longlong)plStack_238 + 0x154) = plStack_238[0x85];
    iVar23 = iStack_200;
    iVar26 = iStack_1b8;
  }
LAB_18012ce0f:
  if ((uVar29 >> 0x1d & 1) == 0) {
    FUN_180126d10(plStack_238 + 0x4b,plStack_238 + 0x4c,1);
  }
  if (iVar23 != iVar26) {
    *(int8_t *)((longlong)plStack_238 + 0xb1) = 0;
  }
  *(short *)(plStack_238 + 0x17) = (short)plStack_238[0x17] + 1;
  FUN_18011ff20(lVar4 + 0x1bd0);
  if (((*(byte *)((longlong)plStack_238 + 0x432) & 1) != 0) &&
     ((*(byte *)((longlong)plStack_238 + 0x432) & 2) == 0)) {
    *(int32_t *)(plStack_238 + 0x1b) = 1;
  }
  if ((uVar29 >> 0x18 & 1) != 0) {
    if (((((uVar29 & 0x40) == 0) && (*(int *)((longlong)plStack_238 + 0xc4) < 1)) &&
        ((int)plStack_238[0x19] < 1)) &&
       ((*(float *)(plStack_238 + 0x48) < *(float *)(plStack_238 + 0x47) ||
         *(float *)(plStack_238 + 0x48) == *(float *)(plStack_238 + 0x47) ||
        (*(float *)((longlong)plStack_238 + 0x244) < *(float *)((longlong)plStack_238 + 0x23c) ||
         *(float *)((longlong)plStack_238 + 0x244) == *(float *)((longlong)plStack_238 + 0x23c)))))
    {
      *(int32_t *)(plStack_238 + 0x1b) = 1;
    }
    if ((lVar12 != 0) && ((*(char *)(lVar12 + 0xb2) != '\0' || (*(char *)(lVar12 + 0xb6) != '\0'))))
    {
      *(int32_t *)(plStack_238 + 0x1b) = 1;
    }
  }
  if (*(float *)(lVar4 + 0x1628) <= 0.0) {
    *(int32_t *)(plStack_238 + 0x1b) = 1;
  }
  if (((int)plStack_238[0x1b] < 1) && (*(int *)((longlong)plStack_238 + 0xdc) < 1)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  *(char *)((longlong)plStack_238 + 0xb6) = cVar6;
  if (((((*(char *)((longlong)plStack_238 + 0xb2) == '\0') &&
        (*(char *)((longlong)plStack_238 + 0xaf) != '\0')) && (cVar6 == '\0')) ||
      ((0 < *(int *)((longlong)plStack_238 + 0xc4) || (0 < (int)plStack_238[0x19])))) ||
     (0 < *(int *)((longlong)plStack_238 + 0xdc))) {
    uVar20 = 0;
  }
  else {
    uVar20 = 1;
  }
  *(int8_t *)((longlong)plStack_238 + 0xb4) = uVar20;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_278);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





