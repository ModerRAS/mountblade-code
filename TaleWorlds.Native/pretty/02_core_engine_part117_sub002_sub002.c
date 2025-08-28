n//  的语义化别名
#define SystemCore_SystemMonitor
n//  的语义化别名
#define SystemCore_DataCompressor
n//  的语义化别名
#define SystemCore_Formatter
n//  的语义化别名
#define SystemCore_InterruptHandler
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathInterpolationCalculator */
#define MathInterpolationCalculator MathInterpolationCalculator
// 02_core_engine_part117_sub002_sub002.c - 1 个函数
// 函数: void CoreSystem_Validator(char *param_1,int8_t *param_2,uint param_3)
void CoreSystem_Validator(char *param_1,int8_t *param_2,uint param_3)
{
  char cVar1;
  int16_t uVar2;
  bool bVar3;
  int64_t lVar4;
  int8_t *puVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int32_t uVar9;
  int32_t uVar10;
  char *pcVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  float *pfVar15;
  float *pfVar16;
  int64_t lVar17;
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
  int64_t lVar30;
  bool bVar31;
  uint64_t uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int8_t stack_array_278 [32];
  float *pfStack_258;
  float *pfStack_250;
  float *pfStack_248;
  int64_t *plStack_238;
  char cStack_230;
  char cStack_22f;
  char cStack_22e;
  uint64_t local_var_228;
  char cStack_220;
  char acStack_21f [7];
  float fStack_218;
  float fStack_214;
  uint local_var_210;
  uint64_t local_var_208;
  int iStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  uint64_t local_var_1d8;
  float fStack_1d0;
  float fStack_1cc;
  uint64_t local_var_1c8;
  int32_t local_var_1c0;
  float fStack_1bc;
  int iStack_1b8;
  uint64_t local_var_1b0;
  int32_t local_var_1a8;
  float fStack_1a4;
  uint64_t local_var_1a0;
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
  uint64_t local_var_168;
  uint64_t local_var_160;
  int64_t lStack_158;
  int8_t *plocal_var_150;
  uint local_var_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  uint local_var_120;
  float fStack_118;
  float fStack_114;
  int32_t local_var_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  char *pcStack_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  lVar4 = SYSTEM_DATA_MANAGER_A;
  local_var_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_278;
  plocal_var_150 = param_2;
  pcStack_100 = param_1;
  plStack_238 = (int64_t *)Function_06d4597e();
  iVar23 = *(int *)(lVar4 + 0x1ad0);
  cStack_22f = plStack_238 == (int64_t *)0x0;
  if (plStack_238 == (int64_t *)0x0) {
    if (*(int *)(lVar4 + 0x1bd4) == 0) {
      local_var_228 = 0;
      puVar18 = &local_var_228;
    }
    else {
      puVar18 = &local_var_1b0;
      local_var_1b0 = *(int64_t *)(lVar4 + 0x1c04);
    }
    plStack_238 = (int64_t *)function_128bd0(param_1,*puVar18,param_3);
  }
  iStack_200 = (int)plStack_238[0x50];
  uVar8 = *(uint *)((int64_t)plStack_238 + 0xdc);
  uVar29 = param_3 | 6;
  if ((param_3 & 0xc0200) != 0xc0200) {
    uVar29 = param_3;
  }
  iVar26 = *(int *)(lVar4 + 0x1a90);
  cStack_22e = iStack_200 < iVar26 + -1;
  if ((uVar29 >> 0x1a & 1) != 0) {
    piVar24 = (int *)((int64_t)*(int *)(lVar4 + 0x1bc0) * 0x30 + *(int64_t *)(lVar4 + 0x1bb8));
    cStack_22e = (bool)cStack_22e ||
                 (plStack_238 != *(int64_t **)(piVar24 + 2) || (int)plStack_238[0x18] != *piVar24);
  }
  if (((bool)cStack_22e) || (0 < (int)uVar8)) {
    cVar6 = '\x01';
  }
  else {
    cVar6 = '\0';
  }
  *(char *)((int64_t)plStack_238 + 0xb5) = cVar6;
  local_var_210 = uVar8;
  iStack_1b8 = iVar26;
  if (cVar6 != '\0') {
    Function_9b36c265(plStack_238,8,1);
  }
  if (iStack_200 == iVar26) {
    uVar29 = *(uint *)((int64_t)plStack_238 + 0xc);
  }
  else {
    *(int32_t *)(plStack_238 + 2) = *(int32_t *)((int64_t)plStack_238 + 0xc);
    *(uint *)((int64_t)plStack_238 + 0xc) = uVar29;
    *(int *)(plStack_238 + 0x50) = iVar26;
    *(int16_t *)((int64_t)plStack_238 + 0xba) = 0;
    uVar2 = *(int16_t *)(lVar4 + 0x1af0);
    *(int *)(lVar4 + 0x1af0) = *(int *)(lVar4 + 0x1af0) + 1;
    *(int16_t *)((int64_t)plStack_238 + 0xbc) = uVar2;
  }
  if (*(int *)(lVar4 + 0x1bf0) != 0) {
    function_13b040(plStack_238,*(int32_t *)(lVar4 + 0x1c40));
  }
  if ((iStack_200 != iVar26) &&
     ((((int)plStack_238[0x83] != 0 || (plStack_238[0x81] != 0)) ||
      ((*(char *)(lVar4 + 0xc2) != '\0' && (((uVar29 & 0x1200001) == 0 && (iVar23 != 0)))))))) {
    function_13b5a0(plStack_238,param_2);
    uVar29 = *(uint *)((int64_t)plStack_238 + 0xc);
  }
  if ((*(byte *)((int64_t)plStack_238 + 0x432) & 1) == 0) {
    if (*(int *)(lVar4 + 0x1ad0) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(int64_t *)
                (*(int64_t *)(lVar4 + 0x1ad8) + -8 + (int64_t)*(int *)(lVar4 + 0x1ad0) * 8);
    }
  }
  else {
    lVar12 = *(int64_t *)(plStack_238[0x81] + 0x68);
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
  SystemCore_InterruptHandler(lVar4 + 0x1ad0,&plStack_238);
  *(uint64_t *)(lVar4 + 0x1af8) = 0;
  Function_490d4cc7(plStack_238,1);
  if ((uVar29 >> 0x1a & 1) != 0) {
    puVar27 = (int32_t *)
              ((int64_t)*(int *)(lVar4 + 0x1bc0) * 0x30 + *(int64_t *)(lVar4 + 0x1bb8));
    *(int64_t **)(puVar27 + 2) = plStack_238;
    function_13df80((int *)(lVar4 + 0x1bc0),puVar27);
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
      Function_f53d87d5(plStack_238,lVar4 + 0x1bf4);
    }
    else {
      plStack_238[0x1e] = *(int64_t *)(lVar4 + 0x1bf4);
      plStack_238[0x1f] = *(int64_t *)(lVar4 + 0x1bfc);
      *(uint *)(plStack_238 + 0x1c) = *(uint *)(plStack_238 + 0x1c) & 0xfffffff1;
    }
  }
  if (*(uint *)(lVar4 + 0x1bd4) != 0) {
    uVar8 = *(uint *)((int64_t)plStack_238 + 0xe4) & *(uint *)(lVar4 + 0x1bd4);
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
    Function_34d2e250();
  }
  if (*(int *)(lVar4 + 0x1bd8) == 0) {
    if (iStack_200 != iStack_1b8) {
      plStack_238[0xd] = 0;
    }
  }
  else {
    plStack_238[0xd] = *(int64_t *)(lVar4 + 0x1c0c);
    if (*(float *)((int64_t)plStack_238 + 0x6c) != 0.0) {
      fVar33 = (float)Function_e8c7ba88();
      fVar34 = (float)Function_71f4712c(plStack_238);
      *(float *)((int64_t)plStack_238 + 0x6c) =
           fVar33 + fVar34 + *(float *)((int64_t)plStack_238 + 0x6c);
    }
  }
  iVar26 = iStack_1b8;
  iVar23 = iStack_200;
  uVar13 = *(uint64_t *)(lVar4 + 0x1c4c);
  *(uint64_t *)((int64_t)plStack_238 + 0x14) = *(uint64_t *)(lVar4 + 0x1c44);
  *(uint64_t *)((int64_t)plStack_238 + 0x1c) = uVar13;
  *(int32_t *)((int64_t)plStack_238 + 0x24) = *(int32_t *)(lVar4 + 0x1c54);
  if (*(uint *)(lVar4 + 0x1bdc) != 0) {
    if ((*(uint *)(lVar4 + 0x1bdc) & *(uint *)(plStack_238 + 0x1d)) != 0) {
      *(int8_t *)((int64_t)plStack_238 + 0xb2) = *(int8_t *)(lVar4 + 0x1c15);
      *(uint *)(plStack_238 + 0x1d) = *(uint *)(plStack_238 + 0x1d) & 0xfffffff1;
    }
  }
  if (*(int *)(lVar4 + 0x1be4) != 0) {
    SystemCore_DataCompressor();
  }
  if (*(char *)((int64_t)plStack_238 + 0xb5) != '\0') {
    Function_9b36c265(plStack_238,8);
  }
  if (iVar23 == iVar26) {
    SystemFunction_00018012fb50(plStack_238,plStack_238[5]);
    Function_9057fde8(plStack_238);
    lVar12 = lStack_158;
    goto LAB_18012ce0f;
  }
  fStack_188 = (float)(uVar29 & 0x3000000);
  Function_ad893c0c(plStack_238,uVar29,lStack_158);
  local_var_f8 = 0xff7fffffff7fffff;
  local_var_f0 = 0x7f7fffff7f7fffff;
  *(int8_t *)((int64_t)plStack_238 + 0xaf) = 1;
  *(bool *)((int64_t)plStack_238 + 0xb7) = plocal_var_150 != (int8_t *)0x0;
  Function_490e6efc(&fStack_1f8,&local_var_f8);
  plStack_238[0x45] = CONCAT44(fStack_1f4,fStack_1f8);
  plStack_238[0x46] = CONCAT44(fStack_1ec,fStack_1f0);
  function_13dae0(plStack_238 + 0x43,1);
  cVar6 = cStack_22f;
  if (((((plStack_238[5] != 0) && (*(int64_t **)(plStack_238[5] + 0x78) == plStack_238)) ||
       ((*(byte *)((int64_t)plStack_238 + 0x432) & 1) != 0)) ||
      ((*(int64_t *)(lVar4 + 0x1ce8) != 0 &&
       ((*(uint *)((int64_t)plStack_238 + 0xc) & 0x80000) == 0)))) && (cStack_22f == '\0')) {
    pcVar11 = pcStack_100;
    do {
      cVar1 = *pcVar11;
      cVar7 = pcVar11[*plStack_238 - (int64_t)pcStack_100];
      if (cVar1 != cVar7) break;
      pcVar11 = pcVar11 + 1;
    } while (cVar7 != '\0');
    if (cVar1 != cVar7) {
      local_var_228 = (int64_t)(int)plStack_238[0x10];
      lVar12 = function_121130(*plStack_238,&local_var_228,pcStack_100);
      *plStack_238 = lVar12;
      *(float *)(plStack_238 + 0x10) = (float)local_var_228;
    }
  }
  if (*(char *)((int64_t)plStack_238 + 0xb2) == '\0') {
    if (((*(char *)((int64_t)plStack_238 + 0xb6) == '\0') ||
        (*(int *)((int64_t)plStack_238 + 0xdc) != 0)) || ((int)plStack_238[0x1b] < 1)) {
      fVar33 = *(float *)(plStack_238 + 0xd);
      if (fVar33 == 0.0) {
        fVar33 = (*(float *)(plStack_238 + 0x23) - *(float *)(plStack_238 + 8)) +
                 *(float *)((int64_t)plStack_238 + 0x8c);
      }
      fVar34 = *(float *)((int64_t)plStack_238 + 0x6c);
      if (fVar34 == 0.0) {
        fVar34 = (*(float *)((int64_t)plStack_238 + 0x11c) -
                 *(float *)((int64_t)plStack_238 + 0x44)) + *(float *)(plStack_238 + 0x12);
      }
      fVar33 = (float)(int)fVar33 + *(float *)(plStack_238 + 0xe);
      fVar34 = (float)(int)fVar34 + *(float *)((int64_t)plStack_238 + 0x74);
    }
    else {
      fVar33 = *(float *)(plStack_238 + 0xc);
      fVar34 = *(float *)((int64_t)plStack_238 + 100);
    }
  }
  else {
    fVar33 = *(float *)(plStack_238 + 0xc);
    fVar34 = *(float *)((int64_t)plStack_238 + 100);
  }
  *(float *)(plStack_238 + 0xc) = fVar33;
  *(float *)((int64_t)plStack_238 + 100) = fVar34;
  if (0 < (int)plStack_238[0x1b]) {
    *(int *)(plStack_238 + 0x1b) = (int)plStack_238[0x1b] + -1;
  }
  if (0 < *(int *)((int64_t)plStack_238 + 0xdc)) {
    *(int *)((int64_t)plStack_238 + 0xdc) = *(int *)((int64_t)plStack_238 + 0xdc) + -1;
  }
  if ((cVar6 != '\0') && ((!bVar31 || (!bVar3)))) {
    *(int32_t *)((int64_t)plStack_238 + 0xdc) = 1;
  }
  if (((cStack_22e != '\0') && ((uVar29 & 0x6000000) != 0)) &&
     (*(int32_t *)((int64_t)plStack_238 + 0xdc) = 1, (uVar29 & 0x40) != 0)) {
    if (!bVar31) {
      *(int32_t *)(plStack_238 + 10) = 0;
      *(int32_t *)(plStack_238 + 9) = 0;
    }
    if (!bVar3) {
      *(int32_t *)((int64_t)plStack_238 + 0x54) = 0;
      *(int32_t *)((int64_t)plStack_238 + 0x4c) = 0;
    }
    plStack_238[0xc] = 0;
  }
  function_130a80(plStack_238);
  SystemFunction_00018012fb50(plStack_238,plStack_238[5]);
  if ((*(uint *)(lVar4 + 8) & 0x8000) == 0) {
    uVar9 = 0x3f800000;
  }
  else {
    uVar9 = *(int32_t *)(plStack_238[5] + 0x18);
  }
  *(int32_t *)((int64_t)plStack_238 + 0x2dc) = uVar9;
  Function_9057fde8(plStack_238);
  uVar8 = *(uint *)((int64_t)plStack_238 + 0xc);
  uVar32 = (uint64_t)uVar8;
  local_var_1a0 = CONCAT44(local_var_1a0._4_4_,uVar8);
  if ((*(byte *)((int64_t)plStack_238 + 0x432) & 1) == 0) {
    if ((uVar8 >> 0x18 & 1) == 0) {
      if (((uVar8 & 0x6000000) == 0) || ((uVar8 >> 0x1b & 1) != 0)) {
        uVar9 = *(int32_t *)(lVar4 + 0x1638);
      }
      else {
        uVar9 = *(int32_t *)(lVar4 + 0x1658);
      }
      *(int32_t *)((int64_t)plStack_238 + 0x7c) = uVar9;
    }
    else {
      *(int32_t *)((int64_t)plStack_238 + 0x7c) = *(int32_t *)(lVar4 + 0x1650);
    }
  }
  else {
    *(int32_t *)((int64_t)plStack_238 + 0x7c) = 0;
  }
  if ((((*(byte *)((int64_t)plStack_238 + 0x432) & 1) == 0) && ((uVar8 & 0x5010000) == 0x1000000))
     && (*(float *)((int64_t)plStack_238 + 0x7c) == 0.0)) {
    if ((uVar8 >> 10 & 1) == 0) {
      *(int32_t *)(plStack_238 + 0xe) = 0;
      *(int32_t *)((int64_t)plStack_238 + 0x74) = 0;
    }
    else {
      uVar9 = *(int32_t *)(lVar4 + 0x1630);
      *(int32_t *)(plStack_238 + 0xe) = 0;
      *(int32_t *)((int64_t)plStack_238 + 0x74) = uVar9;
    }
  }
  else {
    plStack_238[0xe] = *(int64_t *)(lVar4 + 0x162c);
  }
  fVar33 = *(float *)(plStack_238 + 0xe);
  if (*(float *)(plStack_238 + 0xe) <= *(float *)(lVar4 + 0x166c)) {
    fVar33 = *(float *)(lVar4 + 0x166c);
  }
  if (fVar33 <= *(float *)(lVar4 + 0x1c58)) {
    fVar33 = *(float *)(lVar4 + 0x1c58);
  }
  *(float *)(plStack_238 + 0x30) = fVar33;
  *(int32_t *)((int64_t)plStack_238 + 0x184) = *(int32_t *)(lVar4 + 0x1c5c);
  if (((uVar8 & 0x21) == 0) && ((*(byte *)((int64_t)plStack_238 + 0x432) & 1) == 0)) {
    Function_217066b7(plStack_238,&local_var_f8);
    if ((((*(int64_t **)(lVar4 + 0x1b00) == plStack_238) && (*(int *)(lVar4 + 0x1b18) == 0)) &&
        (*(int *)(lVar4 + 0x1b20) == 0)) &&
       ((cVar6 = SystemCore_HashCalculator(&local_var_f8,&local_var_f0,1), cVar6 != '\0' &&
        (*(char *)(lVar4 + 0x415) != '\0')))) {
      *(int8_t *)((int64_t)plStack_238 + 0xb3) = 1;
    }
    if (*(char *)((int64_t)plStack_238 + 0xb3) != '\0') {
      *(bool *)((int64_t)plStack_238 + 0xb2) = *(char *)((int64_t)plStack_238 + 0xb2) == '\0';
      if (((*(uint *)((int64_t)plStack_238 + 0xc) & 0x100) == 0) &&
         (*(float *)(SYSTEM_DATA_MANAGER_A + 0x2e04) <= 0.0)) {
        *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x2e04) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c);
      }
      SystemCore_DataCompressor(plStack_238);
    }
  }
  else {
    *(int8_t *)((int64_t)plStack_238 + 0xb2) = 0;
  }
  plVar14 = plStack_238;
  lVar12 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)((int64_t)plStack_238 + 0xb3) = 0;
  if ((*(uint *)((int64_t)plStack_238 + 0xc) >> 0x19 & 1) == 0) {
    local_var_208 = *(uint64_t *)(lVar12 + 0x163c);
    if ((*(uint *)((int64_t)plStack_238 + 0xc) & 0x14000000) != 0) {
      local_var_228 = 0x4080000040800000;
      puVar18 = (uint64_t *)Function_999485b5(&local_var_1d8,&local_var_208,&local_var_228);
      local_var_208 = *puVar18;
    }
    fVar33 = *(float *)(plVar14[5] + 0x10);
    fVar34 = *(float *)(plVar14[5] + 0x14);
    if (*(char *)((int64_t)plVar14 + 0xae) != '\0') {
      fVar33 = 3.4028235e+38;
      fVar34 = 3.4028235e+38;
    }
    iVar23 = *(int *)((int64_t)plVar14 + 0x3c);
    if ((-1 < iVar23) && (iVar23 < *(int *)(lVar12 + 0x1600))) {
      fVar33 = *(float *)(*(int64_t *)(lVar12 + 0x1608) + 0x18 + (int64_t)iVar23 * 0x24);
      fVar34 = *(float *)(*(int64_t *)(lVar12 + 0x1608) + 0x1c + (int64_t)iVar23 * 0x24);
    }
    local_var_228 = CONCAT44(fVar34 - (*(float *)(lVar12 + 0x16b8) + *(float *)(lVar12 + 0x16b8)),
                          fVar33 - (*(float *)(lVar12 + 0x16b4) + *(float *)(lVar12 + 0x16b4)));
    puVar18 = (uint64_t *)Function_ad00d53c(&local_var_1d8,&local_var_208,&local_var_228);
    function_11fc80(&fStack_218,plVar14 + 0xc,&local_var_208,*puVar18);
    SystemCore_MemoryManager(&fStack_170,plVar14,CONCAT44(fStack_214,fStack_218));
    if (((fStack_170 < *(float *)(plVar14 + 0xc)) && ((*(uint *)((int64_t)plVar14 + 0xc) & 8) == 0)
        ) && ((*(uint *)((int64_t)plVar14 + 0xc) >> 0xb & 1) != 0)) {
      fStack_214 = fStack_214 + *(float *)(lVar12 + 0x168c);
    }
    lVar17 = SYSTEM_DATA_MANAGER_A;
    fVar34 = fStack_218;
    fVar33 = fStack_214;
    if ((fStack_16c < *(float *)((int64_t)plVar14 + 100)) &&
       ((*(byte *)((int64_t)plVar14 + 0xc) & 8) == 0)) {
      fStack_218 = fStack_218 + *(float *)(lVar12 + 0x168c);
      fVar34 = fStack_218;
    }
  }
  else {
    lVar17 = lVar12;
    fVar34 = *(float *)(plStack_238 + 0xc);
    fVar33 = *(float *)((int64_t)plStack_238 + 100);
  }
  fVar36 = 3.4028235e+38;
  local_var_228 = CONCAT44(fVar33,fVar34);
  fVar38 = 3.4028235e+38;
  if (((uVar8 & 0x40) == 0) || (*(char *)((int64_t)plStack_238 + 0xb2) != '\0')) {
    if ((0 < *(int *)((int64_t)plStack_238 + 0xc4)) || (0 < (int)plStack_238[0x19])) {
      if ((!bVar31) && (0 < *(int *)((int64_t)plStack_238 + 0xc4))) {
        fVar36 = fVar34;
        if ((*(char *)((int64_t)plStack_238 + 0xcc) != '\0') &&
           (fVar36 = *(float *)(plStack_238 + 10), *(float *)(plStack_238 + 10) <= fVar34)) {
          fVar36 = fVar34;
        }
        *(float *)(plStack_238 + 10) = fVar36;
      }
      if ((!bVar3) && (0 < (int)plStack_238[0x19])) {
        fVar38 = fVar33;
        if ((*(char *)((int64_t)plStack_238 + 0xcc) != '\0') &&
           (fVar38 = *(float *)((int64_t)plStack_238 + 0x54),
           *(float *)((int64_t)plStack_238 + 0x54) <= fVar33)) {
          fVar38 = fVar33;
        }
        *(float *)((int64_t)plStack_238 + 0x54) = fVar38;
      }
      if (((*(char *)((int64_t)plStack_238 + 0xb2) == '\0') &&
          ((*(uint *)((int64_t)plStack_238 + 0xc) & 0x100) == 0)) &&
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
      *(float *)((int64_t)plStack_238 + 0x54) = fVar33;
      fVar38 = fVar33;
    }
  }
  puVar27 = (int32_t *)SystemCore_MemoryManager(&local_var_1d8,plStack_238,plStack_238[10]);
  uVar9 = puVar27[1];
  *(int32_t *)(plStack_238 + 10) = *puVar27;
  *(int32_t *)((int64_t)plStack_238 + 0x54) = uVar9;
  if ((*(char *)((int64_t)plStack_238 + 0xb2) == '\0') || ((uVar8 >> 0x18 & 1) != 0)) {
    plVar14 = &local_var_1b0;
    local_var_1b0 = plStack_238[10];
  }
  else {
    uVar13 = Function_217066b7(plStack_238,&local_var_f8);
    plVar14 = (int64_t *)Function_254cb530(uVar13,&local_var_1d8);
  }
  lVar12 = lStack_158;
  cVar1 = cStack_22e;
  cVar6 = cStack_230;
  plStack_238[9] = *plVar14;
  if (*(char *)((int64_t)plStack_238 + 0xb2) == '\0') {
    if (fVar36 == 3.4028235e+38) {
      fVar33 = *(float *)(plStack_238 + 0xb);
    }
    else {
      fVar33 = *(float *)(plStack_238 + 10);
    }
    if (fVar38 == 3.4028235e+38) {
      fVar34 = *(float *)((int64_t)plStack_238 + 0x5c);
    }
    else {
      fVar34 = *(float *)((int64_t)plStack_238 + 0x54);
    }
    if (((uVar8 >> 0xe & 1) != 0) ||
       ((fVar34 < *(float *)((int64_t)plStack_238 + 100) && ((uVar8 & 8) == 0)))) {
      cVar7 = '\x01';
    }
    else {
      cVar7 = '\0';
    }
    *(char *)((int64_t)plStack_238 + 0xad) = cVar7;
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
    *(char *)((int64_t)plStack_238 + 0xac) = cVar7;
    if ((cVar7 != '\0') && (*(char *)((int64_t)plStack_238 + 0xad) == '\0')) {
      if ((*(float *)((int64_t)plStack_238 + 100) <= fVar34 - *(float *)(lVar4 + 0x168c)) ||
         ((uVar8 & 8) != 0)) {
        uVar20 = 0;
      }
      else {
        uVar20 = 1;
      }
      *(int8_t *)((int64_t)plStack_238 + 0xad) = uVar20;
    }
    if (*(char *)((int64_t)plStack_238 + 0xac) == '\0') {
      uVar9 = 0;
    }
    else {
      uVar9 = *(int32_t *)(lVar4 + 0x168c);
    }
    if (*(char *)((int64_t)plStack_238 + 0xad) == '\0') {
      uVar10 = 0;
    }
    else {
      uVar10 = *(int32_t *)(lVar4 + 0x168c);
    }
    *(int32_t *)((int64_t)plStack_238 + 0xa4) = uVar10;
    *(int32_t *)(plStack_238 + 0x15) = uVar9;
  }
  local_var_148 = 0xffffffff;
  if (((cStack_22e != '\0') &&
      (*(int32_t *)((int64_t)plStack_238 + 0xd4) = 0xffffffff, (uVar8 >> 0x1a & 1) != 0)) &&
     (cStack_230 == '\0')) {
    uVar9 = *(int32_t *)
             (*(int64_t *)(lVar4 + 0x1bc8) + -0xc + (int64_t)*(int *)(lVar4 + 0x1bc0) * 0x30);
    *(int32_t *)(plStack_238 + 8) =
         *(int32_t *)
          (*(int64_t *)(lVar4 + 0x1bc8) + -0x10 + (int64_t)*(int *)(lVar4 + 0x1bc0) * 0x30);
    *(int32_t *)((int64_t)plStack_238 + 0x44) = uVar9;
  }
  uVar29 = uVar8 & 0x1000000;
  local_var_120 = uVar29;
  if (uVar29 != 0) {
    *(int16_t *)((int64_t)plStack_238 + 0xba) = *(int16_t *)(lStack_158 + 0x188);
    SystemCore_InterruptHandler((int16_t *)(lStack_158 + 0x188),&plStack_238);
    if ((((uVar8 >> 0x1a & 1) == 0) && (cVar6 == '\0')) && (fStack_188 != 3.761582e-37)) {
      plStack_238[8] = *(int64_t *)(lVar12 + 0x100);
    }
  }
  if ((*(float *)(plStack_238 + 0x1e) == 3.4028235e+38) ||
     (*(int *)((int64_t)plStack_238 + 0xdc) != 0)) {
    if ((uVar8 >> 0x1c & 1) == 0) {
      if (((((uVar8 >> 0x1a & 1) != 0) && (cStack_230 == '\0')) && (0 < (int)local_var_210)) ||
         (((cVar6 = cStack_230, (uVar8 >> 0x19 & 1) != 0 && (cStack_230 == '\0')) &&
          (fStack_188 != 3.761582e-37)))) {
        puVar27 = (int32_t *)function_12f6d0(&local_var_1d8,plStack_238);
        uVar9 = puVar27[1];
        *(int32_t *)(plStack_238 + 8) = *puVar27;
        *(int32_t *)((int64_t)plStack_238 + 0x44) = uVar9;
        cVar6 = cStack_230;
      }
    }
    else {
      puVar27 = (int32_t *)function_12f6d0(&local_var_1d8,plStack_238);
      uVar9 = puVar27[1];
      *(int32_t *)(plStack_238 + 8) = *puVar27;
      *(int32_t *)((int64_t)plStack_238 + 0x44) = uVar9;
    }
  }
  else {
    fVar34 = *(float *)(plStack_238 + 0x1e) -
             *(float *)(plStack_238 + 0x1f) * *(float *)(plStack_238 + 10);
    fVar33 = *(float *)((int64_t)plStack_238 + 0xf4) -
             *(float *)((int64_t)plStack_238 + 0x54) * *(float *)((int64_t)plStack_238 + 0xfc);
    if (fVar34 <= *(float *)(lVar4 + 0x16b4)) {
      fVar34 = *(float *)(lVar4 + 0x16b4);
    }
    if (fVar33 <= *(float *)(lVar4 + 0x16b8)) {
      fVar33 = *(float *)(lVar4 + 0x16b8);
    }
    local_var_208 = CONCAT44(fVar33,fVar34);
    Function_f53d87d5(plStack_238,&local_var_208,0);
  }
  if (*(int *)((int64_t)plStack_238 + 0x3c) < 0) {
LAB_18012aa37:
    if (*(char *)((int64_t)plStack_238 + 0xae) != '\0') goto LAB_18012aa45;
  }
  else {
    if (*(char *)((int64_t)plStack_238 + 0xae) == '\0') {
      if (*(char *)(plStack_238[5] + 0x77) == '\0') {
        pfVar15 = (float *)Function_a50fc06d(plStack_238[5],&local_var_f8);
        pfVar16 = (float *)Function_455243f8(plStack_238,&fStack_1f8);
        if (((*pfVar16 <= *pfVar15 && *pfVar15 != *pfVar16) ||
            (pfVar16[1] <= pfVar15[1] && pfVar15[1] != pfVar16[1])) ||
           ((pfVar15[2] < pfVar16[2] || (pfVar15[3] < pfVar16[3])))) {
          pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,4);
          lVar12 = function_130830(plStack_238,(int)plStack_238[1],plStack_238 + 8,plStack_238 + 9);
          plStack_238[5] = lVar12;
          SystemFunction_00018012fb50(plStack_238,lVar12);
          if ((*(uint *)(lVar4 + 8) & 0x8000) == 0) {
            uVar9 = 0x3f800000;
          }
          else {
            uVar9 = *(int32_t *)(plStack_238[5] + 0x18);
          }
          *(int32_t *)((int64_t)plStack_238 + 0x2dc) = uVar9;
          Function_9057fde8(plStack_238);
        }
      }
      goto LAB_18012aa37;
    }
LAB_18012aa45:
    if (*(char *)(plStack_238[5] + 0x49) != '\0') {
      plStack_238[8] = *(int64_t *)(plStack_238[5] + 8);
    }
    if (*(char *)(plStack_238[5] + 0x4a) != '\0') {
      lVar12 = *(int64_t *)(plStack_238[5] + 0x10);
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
    uVar21 = *(uint *)((int64_t)plStack_238 + 0x1c);
    if (uVar21 != 0) {
      uVar22 = uVar22 & ~uVar21 | *(uint *)(plStack_238 + 4) & uVar21;
    }
    *(uint *)(plStack_238[5] + 4) = uVar22 | 0x10;
  }
  Function_a50fc06d(plStack_238[5],&local_var_168);
  if ((((cVar6 == '\0') && (uVar29 == 0)) && (*(int *)((int64_t)plStack_238 + 0xc4) < 1)) &&
     ((int)plStack_238[0x19] < 1)) {
    Function_ad00d53c(&fStack_218,lVar4 + 0x16ac,lVar4 + 0x16b4);
    if (*(char *)((int64_t)plStack_238 + 0xae) == '\0') {
      if (0.0 < (float)local_var_160 - (float)local_var_168) {
        if (0.0 < local_var_160._4_4_ - local_var_168._4_4_) {
          pfVar15 = (float *)&local_var_168;
          goto LAB_18012ac57;
        }
      }
    }
    else if (0 < *(int *)(lVar4 + 0x1600)) {
      if (*(short *)(plStack_238[5] + 0x74) == -1) {
        local_var_208 = CONCAT44(*(float *)(lVar4 + 0x16b0) +
                              *(float *)(**(int64_t **)(lVar4 + 0x1c70) + 0xc),
                              *(float *)(**(int64_t **)(lVar4 + 0x1c70) + 8) +
                              *(float *)(lVar4 + 0x16ac));
        Function_f53d87d5(plStack_238,&local_var_208,1);
      }
      else {
        lVar17 = (int64_t)*(short *)(plStack_238[5] + 0x74);
        pfVar15 = &fStack_198;
        lVar12 = *(int64_t *)(lVar4 + 0x1608);
        fStack_198 = *(float *)(lVar12 + 0x10 + lVar17 * 0x24);
        fStack_194 = *(float *)(lVar12 + 0x14 + lVar17 * 0x24);
        fStack_190 = fStack_198 + *(float *)(lVar12 + 0x18 + lVar17 * 0x24);
        fStack_18c = fStack_194 + *(float *)(lVar12 + 0x1c + lVar17 * 0x24);
LAB_18012ac57:
        Function_9057d51e(plStack_238,pfVar15,&fStack_218);
      }
    }
  }
  *(float *)(plStack_238 + 8) = (float)(int)*(float *)(plStack_238 + 8);
  *(float *)((int64_t)plStack_238 + 0x44) = (float)(int)*(float *)((int64_t)plStack_238 + 0x44);
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
  if (*(char *)((int64_t)plStack_238 + 0xae) != '\0') {
    *(int32_t *)(plStack_238 + 0xf) = 0;
  }
  if (((int)plStack_238[0x80] == 0x7fffffff) || (iVar23 = (int)plStack_238[0x7e], iVar23 == -1)) {
    iVar23 = 0x7fffffff;
  }
  else {
    iVar23 = ((int)plStack_238[0x80] + 1 + iVar23) % (iVar23 + 1);
  }
  *(int *)(plStack_238 + 0x7f) = iVar23;
  if ((*(int *)((int64_t)plStack_238 + 0x404) == 0x7fffffff) ||
     (iVar23 = *(int *)((int64_t)plStack_238 + 0x3f4), iVar23 == -1)) {
    iVar23 = 0x7fffffff;
  }
  else {
    iVar23 = (*(int *)((int64_t)plStack_238 + 0x404) + 1 + iVar23) % (iVar23 + 1);
  }
  *(int *)((int64_t)plStack_238 + 0x3fc) = iVar23;
  puVar18 = &local_var_1d8;
  *(int32_t *)((int64_t)plStack_238 + 0x3f4) = 0xffffffff;
  *(int32_t *)(plStack_238 + 0x7e) = 0xffffffff;
  *(int32_t *)((int64_t)plStack_238 + 0x404) = 0x7fffffff;
  *(int32_t *)(plStack_238 + 0x80) = 0x7fffffff;
  puVar27 = (int32_t *)function_1293e0(puVar18,plStack_238,1);
  plVar14 = plStack_238;
  local_var_210 = (uint)puVar18 & 0xffffff00;
  uVar9 = puVar27[1];
  *(int32_t *)((int64_t)plStack_238 + 0x8c) = *puVar27;
  *(int32_t *)(plStack_238 + 0x12) = uVar9;
  *(int32_t *)((int64_t)plStack_238 + 0x94) = 0x7f7fffff;
  *(int32_t *)(plStack_238 + 0x13) = 0x7f7fffff;
  lVar12 = SYSTEM_DATA_MANAGER_A;
  if ((cVar1 != '\0') && ((uVar8 >> 0xc & 1) == 0)) {
    if ((uVar8 >> 0x1a & 1) == 0) {
      if (((*(byte *)((int64_t)plStack_238 + 0x432) & 1) != 0) || (uVar29 == 0)) {
        local_var_210 = (uint)((uVar8 >> 0x19 & 1) == 0);
      }
    }
    else {
      uVar8 = local_var_210 >> 8;
      local_var_210 = CONCAT31((int3)uVar8,1);
    }
  }
  local_var_f8 = 0;
  local_var_f0 = 0;
  fVar34 = *(float *)(lVar4 + 0x19f8) * 1.35;
  fVar33 = *(float *)(lVar4 + 0x19f8) * 0.2 + *(float *)(plStack_238 + 0xf) + 1.0;
  if (fVar33 <= fVar34) {
    fVar33 = fVar34;
  }
  local_var_1b0 = (uint64_t)(*(char *)(lVar4 + 0xcb) != '\0') + 1;
  fVar33 = (float)(int)fVar33;
  if ((((*(char *)((int64_t)plStack_238 + 0xb2) == '\0') &&
       ((*(byte *)((int64_t)plStack_238 + 0xc) & 0x42) == 0)) &&
      (*(int *)((int64_t)plStack_238 + 0xc4) < 1)) &&
     (((int)plStack_238[0x19] < 1 && ((char)plStack_238[0x16] != '\0')))) {
    fVar36 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) * 1.35;
    fVar34 = *(float *)(plStack_238 + 0xf) + 1.0 + *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) * 0.2;
    fStack_170 = (float)(-(uint)(*(char *)(SYSTEM_DATA_MANAGER_A + 0xcb) != '\0') & 4);
    if (fVar34 <= fVar36) {
      fVar34 = fVar36;
    }
    fVar34 = (float)(int)((float)(int)fVar34 * 0.75);
    if (*(char *)(SYSTEM_DATA_MANAGER_A + 0xcb) == '\0') {
      fVar36 = 0.0;
    }
    else {
      fVar36 = 4.0;
    }
    local_var_208 = 0x7f7fffff7f7fffff;
    fStack_218 = 3.4028235e+38;
    fStack_214 = 3.4028235e+38;
    function_12e1b0(&rendering_buffer_2464_ptr);
    lVar17 = local_var_228;
    lVar30 = 0;
    pfVar15 = (float *)0x180bf66e8;
    do {
      local_var_228 = CONCAT44(*(float *)((int64_t)plVar14 + 0x4c) +
                            *(float *)((int64_t)plVar14 + 0x44),
                            *(float *)(plVar14 + 8) + *(float *)(plVar14 + 9));
      Function_4fa7bf82(&fStack_140,plVar14 + 8,&local_var_228,pfVar15 + -2);
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
      uVar9 = Function_f2822285(plVar14,(int64_t)(int)uVar22);
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,0x2020);
      SystemCore_Formatter(&fStack_1e8,uVar9,&cStack_230,&cStack_22f);
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
          pfVar16 = (float *)Function_4fa7bf82(&fStack_108,&fStack_130,&fStack_138,pfVar15 + -2);
          fStack_124 = (*(float *)(lVar12 + 0x11c) - *(float *)(lVar12 + 0x1b4c)) + pfVar16[1];
          fStack_128 = (*(float *)(lVar12 + 0x118) - *(float *)(lVar12 + 0x1b48)) + *pfVar16;
          pfStack_258 = &fStack_218;
          function_1295b0(plVar14,&fStack_128,pfVar15 + -2,&local_var_208);
          goto LAB_18012b18f;
        }
        pfVar16 = (float *)SystemCore_MemoryManager(&local_var_1c8,plVar14,lVar17);
        fStack_218 = *pfVar16;
        fStack_214 = pfVar16[1];
        Function_1b4012f5(0,0);
LAB_18012b0c8:
        if (cStack_22f == '\0') {
LAB_18012b1a3:
          cVar6 = (cStack_230 != '\0') + '\x1e';
        }
        else {
LAB_18012b0d0:
          cVar6 = ' ';
        }
        uVar9 = function_121ed0(cVar6);
        *(int32_t *)((int64_t)&local_var_f8 + lVar30 * 4) = uVar9;
      }
      fVar38 = fStack_170;
      uVar22 = uVar22 + 1;
      lVar30 = lVar30 + 1;
      pfVar15 = pfVar15 + 6;
    } while (lVar30 < local_var_1b0);
    uVar32 = local_var_1a0 & 0xffffffff;
    uVar8 = 0;
    if (fStack_170 != 0.0) {
      do {
        pfStack_258._0_4_ = 0x40800000;
        function_1296e0(&fStack_1f8,plVar14,uVar8,fVar34);
        uVar9 = Function_f2822285(plVar14,(int64_t)(int)(uVar8 + 4));
        pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,0x20);
        SystemCore_Formatter(&fStack_1f8,uVar9,acStack_21f,&cStack_220);
        if ((((acStack_21f[0] != '\0') && (0.04 < *(float *)(lVar12 + 0x1b24))) ||
            (cStack_220 != '\0')) &&
           (*(uint *)(lVar12 + 0x1dcc) = (uVar8 & 1) + 3, cStack_220 != '\0')) {
          local_var_1a0 = plVar14[8];
          local_var_228 = 0;
          if (uVar8 == 0) {
LAB_18012b293:
            local_var_1a0 = CONCAT44((*(float *)(lVar12 + 0x11c) - *(float *)(lVar12 + 0x1b4c)) + 4.0,
                                  (int)local_var_1a0);
          }
          else if (uVar8 == 1) {
            local_var_228 = 0x3f800000;
LAB_18012b2d2:
            local_var_1a0._4_4_ = (int32_t)(local_var_1a0 >> 0x20);
            local_var_1a0 = CONCAT44(local_var_1a0._4_4_,
                                  (*(float *)(lVar12 + 0x118) - *(float *)(lVar12 + 0x1b48)) + 4.0);
          }
          else {
            if (uVar8 == 2) {
              local_var_228 = 0x3f80000000000000;
              goto LAB_18012b293;
            }
            if (uVar8 == 3) goto LAB_18012b2d2;
          }
          pfStack_258 = &fStack_218;
          local_var_148 = uVar8;
          function_1295b0(plVar14,&local_var_1a0,&local_var_228,&local_var_208);
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)fVar38);
    }
    piVar24 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
    *piVar24 = *piVar24 + -1;
    if ((*(int64_t *)(lVar12 + 0x1cd8) != 0) &&
       (*(int64_t **)(*(int64_t *)(lVar12 + 0x1cd8) + 0x3a0) == plVar14)) {
      iVar23 = *(int *)(lVar12 + 0x1cc0);
      fVar36 = 0.0;
      fVar34 = 0.0;
      if (iVar23 == 3) {
        if (*(char *)(lVar12 + 0x135) == '\0') goto LAB_18012b465;
        pfStack_258 = (float *)((uint64_t)pfStack_258 & 0xffffffff00000000);
        pfVar15 = (float *)SystemCore_ConfigLoader(&local_var_1c8,1,0,0);
        fVar34 = *pfVar15;
        fVar36 = pfVar15[1];
        iVar23 = *(int *)(lVar12 + 0x1cc0);
      }
      if (iVar23 == 4) {
        pfStack_258 = (float *)((uint64_t)pfStack_258 & 0xffffffff00000000);
        pfVar15 = (float *)SystemCore_ConfigLoader(&fStack_118,2,0,0);
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
        uVar9 = function_121ed0(0x20);
        local_var_f8 = CONCAT44(local_var_f8._4_4_,uVar9);
        pfVar15 = (float *)SystemCore_MemoryManager(&local_var_1d8,plVar14,
                                         CONCAT44(fVar36 * fVar38 +
                                                  *(float *)((int64_t)plVar14 + 0x54),
                                                  fVar34 * fVar38 + *(float *)(plVar14 + 10)));
        fStack_218 = *pfVar15;
        fStack_214 = pfVar15[1];
      }
    }
LAB_18012b465:
    lVar12 = SYSTEM_DATA_MANAGER_A;
    if ((fStack_218 != 3.4028235e+38) &&
       ((fStack_218 != *(float *)(plVar14 + 10) ||
        (fStack_214 != *(float *)((int64_t)plVar14 + 0x54))))) {
      *(float *)(plVar14 + 10) = fStack_218;
      *(float *)((int64_t)plVar14 + 0x54) = fStack_214;
      if (((*(uint *)((int64_t)plVar14 + 0xc) & 0x100) == 0) &&
         (*(float *)(lVar12 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar12 + 0x2e04) = *(int32_t *)(lVar12 + 0x1c);
      }
    }
    lVar12 = SYSTEM_DATA_MANAGER_A;
    if ((float)local_var_208 != 3.4028235e+38) {
      *(float *)(plVar14 + 8) = (float)(int)(float)local_var_208;
      *(float *)((int64_t)plVar14 + 0x44) = (float)(int)local_var_208._4_4_;
      if (((*(uint *)((int64_t)plVar14 + 0xc) & 0x100) == 0) &&
         (*(float *)(lVar12 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar12 + 0x2e04) = *(int32_t *)(lVar12 + 0x1c);
      }
    }
    plVar14[9] = plVar14[10];
  }
  uVar29 = (uint)uVar32;
  pfVar15 = (float *)0x180bf66e8;
  if (*(char *)((int64_t)plStack_238 + 0xae) != '\0') {
    if (*(char *)(plStack_238[5] + 0x49) == '\0') {
      *(int64_t *)(plStack_238[5] + 8) = plStack_238[8];
    }
    if (*(char *)(plStack_238[5] + 0x4a) == '\0') {
      *(int64_t *)(plStack_238[5] + 0x10) = plStack_238[9];
    }
    puVar18 = (uint64_t *)Function_a50fc06d(plStack_238[5]);
    local_var_168 = *puVar18;
    local_var_160 = puVar18[1];
  }
  *(uint64_t *)((int64_t)plStack_238 + 0x34) = *(uint64_t *)(plStack_238[5] + 8);
  if ((*(float *)(plStack_238 + 9) <= 0.0) || ((uVar32 & 0x2000040) != 0)) {
    fVar34 = *(float *)(lVar4 + 0x19f8) * 16.0;
  }
  else {
    fVar34 = *(float *)(plStack_238 + 9) * 0.65;
  }
  *(float *)((int64_t)plStack_238 + 0x284) = (float)(int)fVar34;
  function_291500(plStack_238[0x5d]);
  *(uint *)(plStack_238[0x5d] + 0x30) =
       -(uint)(*(char *)(lVar4 + 0x16c1) != '\0') & 2 | (uint)(*(char *)(lVar4 + 0x16c0) != '\0');
  lVar12 = plStack_238[0x5d];
  local_var_1c8 = *(uint64_t *)(*(int64_t *)(*(int64_t *)(lVar4 + 0x19f0) + 0x58) + 8);
  SystemCore_InterruptHandler(lVar12 + 0x70,&local_var_1c8);
  SystemCore_Initialize(lVar12);
  if (((uVar29 & 0x5000000) == 0x1000000) && (fStack_188 != 3.761582e-37)) {
    puVar18 = (uint64_t *)(lStack_158 + 0x228);
    puVar25 = (uint64_t *)(lStack_158 + 0x230);
  }
  else {
    puVar18 = &local_var_168;
    puVar25 = &local_var_160;
  }
  SystemCore_PerformanceMonitor(puVar18,puVar25);
  if ((((uVar29 >> 0x1b & 1) == 0) ||
      (plVar14 = (int64_t *)SystemFunction_00018012ea90(), plStack_238 != plVar14)) ||
     (0 < *(int *)((int64_t)plStack_238 + 0xdc))) {
    bVar28 = 0;
  }
  else {
    bVar28 = 1;
  }
  lVar12 = *(int64_t *)(lVar4 + 0x1ce0);
  if ((lVar12 == 0) ||
     ((plStack_238 != *(int64_t **)(lVar12 + 0x3a0) &&
      (((plVar14 = *(int64_t **)(lVar4 + 0x1ce8), plVar14 == (int64_t *)0x0 ||
        (plStack_238 != plVar14)) || (plVar14[5] == *(int64_t *)(lVar12 + 0x28))))))) {
    bVar31 = false;
  }
  else {
    bVar31 = true;
  }
  if ((bVar28 != 0) || (bVar31)) {
    pfVar16 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + ((uint64_t)bVar28 + 0x3a) * 0x10);
    fStack_1f8 = *pfVar16;
    fStack_1f4 = pfVar16[1];
    fStack_1f0 = pfVar16[2];
    fStack_1ec = pfVar16[3] * *(float *)(lVar4 + 0x1dc8) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    uVar9 = Function_56da4ab5(&fStack_1f8);
    pfStack_250 = (float *)CONCAT44(pfStack_250._4_4_,0xf);
    pfStack_258 = (float *)((uint64_t)pfStack_258 & 0xffffffff00000000);
    MathInterpolationCalculator0(plStack_238[0x5d],&local_var_168,&local_var_160,uVar9);
    if ((bVar31) && (plStack_238 == *(int64_t **)(lVar4 + 0x1ce0))) {
      Function_455243f8(plStack_238,&local_var_1d8);
      Function_1031a748(&local_var_1d8);
      if ((float)local_var_1d8 <= (float)local_var_168) {
        if (((local_var_1d8._4_4_ <= local_var_168._4_4_) && ((float)local_var_160 <= fStack_1d0)) &&
           (local_var_160._4_4_ <= fStack_1cc)) goto LAB_18012b82d;
      }
      lVar12 = plStack_238[0x5d];
      uVar9 = *(int32_t *)(lVar4 + 0x1634);
      fStack_1f8 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19b8);
      fStack_1f4 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19bc);
      fStack_1f0 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c0);
      fStack_1ec = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c4) *
                   *(float *)(lVar4 + 0x1cf4) * 0.25 * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      uVar10 = Function_56da4ab5(&fStack_1f8);
      pfStack_250 = (float *)CONCAT44(pfStack_250._4_4_,0xf);
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,uVar9);
      MathInterpolationCalculator0(lVar12,&local_var_1d8,&fStack_1d0,uVar10);
    }
  }
LAB_18012b82d:
  uVar8 = local_var_210;
  lVar12 = *(int64_t *)(lVar4 + 0x1cd8);
  fVar34 = *(float *)(plStack_238 + 0xf);
  fVar36 = *(float *)((int64_t)plStack_238 + 0x7c);
  if (lVar12 == 0) {
    lVar12 = *(int64_t *)(lVar4 + 0x1c98);
  }
  if (((char)local_var_210 == '\0') &&
     ((lVar12 == 0 ||
      ((plStack_238[0x76] != *(int64_t *)(lVar12 + 0x3b0) &&
       ((plStack_238[0x81] == 0 || (plStack_238[0x81] != *(int64_t *)(lVar12 + 0x408))))))))) {
    bVar28 = 0;
  }
  else {
    bVar28 = 1;
  }
  Function_217066b7(plStack_238,&fStack_180);
  plVar14 = plStack_238;
  if (*(char *)((int64_t)plStack_238 + 0xb2) == '\0') {
    local_var_1a0 = CONCAT44(local_var_1a0._4_4_,uVar29) & 0xffffffff00000080;
    if ((uVar32 & 0x80) == 0) {
      bVar31 = false;
      if (((*(char *)(lVar4 + 0x1dd0) != '\0') &&
          (*(int *)(lVar4 + 0x1a90) - *(int *)(lVar4 + 0x1e44) < 2)) &&
         ((*(char *)(lVar4 + 0xc3) != '\0' &&
          (((*(int *)(lVar4 + 0x1df4) != -1 &&
            (iVar23 = strcmp(&rendering_buffer_2304_ptr,lVar4 + 0x1df8), iVar23 == 0)) &&
           (bVar31 = false, (int64_t *)**(uint64_t **)(lVar4 + 0x1de0) == plVar14)))))) {
        bVar31 = true;
      }
      if ((uVar32 & 0x6000000) == 0) {
        lVar12 = 0xc0;
        if (local_var_120 != 0) {
          lVar12 = 0xd0;
        }
      }
      else {
        lVar12 = 0xe0;
      }
      pfVar16 = (float *)(lVar12 + 0x1628 + SYSTEM_DATA_MANAGER_A);
      fStack_1f8 = *pfVar16;
      fStack_1f4 = pfVar16[1];
      fStack_1f0 = pfVar16[2];
      fStack_1ec = pfVar16[3] * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      uVar8 = Function_56da4ab5(&fStack_1f8);
      if (*(char *)((int64_t)plStack_238 + 0xae) == '\0') {
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
      fStack_124 = *(float *)((int64_t)plStack_238 + 0x4c) +
                   *(float *)((int64_t)plStack_238 + 0x44);
      fStack_128 = *(float *)(plStack_238 + 9) + *(float *)(plStack_238 + 8);
      lVar12 = plStack_238[0x5d];
      fStack_12c = (float)Function_71f4712c(plStack_238);
      fStack_12c = fStack_12c + *(float *)((int64_t)plStack_238 + 0x44);
      fStack_130 = *(float *)(plStack_238 + 8);
      uVar9 = 0xc;
      if ((uVar32 & 1) != 0) {
        uVar9 = 0xf;
      }
      pfStack_250 = (float *)CONCAT44(pfStack_250._4_4_,uVar9);
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,fVar34);
      MathInterpolationCalculator0(lVar12,&fStack_130,&fStack_128,uVar8);
    }
    bVar31 = false;
    *(int32_t *)(lVar4 + 0x1be8) = 0;
    if (((uVar32 & 1) == 0) && ((*(byte *)((int64_t)plStack_238 + 0x432) & 1) == 0)) {
      pfVar16 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + ((uint64_t)bVar28 + 0x14) * 0x10);
      fStack_1f8 = *pfVar16;
      fStack_1f4 = pfVar16[1];
      fStack_1f0 = pfVar16[2];
      fStack_1ec = pfVar16[3] * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      uVar9 = Function_56da4ab5(&fStack_1f8);
      pfStack_250 = (float *)CONCAT44(pfStack_250._4_4_,3);
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,fVar34);
      MathInterpolationCalculator0(plStack_238[0x5d],&fStack_180,&fStack_178,uVar9);
    }
    if ((uVar29 >> 10 & 1) != 0) {
      Function_36990d36(plStack_238,&fStack_198);
      uVar13 = Function_455243f8(plStack_238,&local_var_1d8);
      Function_989e7d01(&fStack_198,uVar13);
      lVar12 = plStack_238[0x5d];
      fVar38 = fVar34;
      if ((uVar32 & 1) == 0) {
        fVar38 = 0.0;
      }
      fStack_1f8 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1798);
      fStack_1f4 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x179c);
      fStack_1f0 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17a0);
      fStack_1ec = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17a4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      uVar9 = Function_56da4ab5(&fStack_1f8);
      pfStack_250 = (float *)CONCAT44(pfStack_250._4_4_,3);
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,fVar38);
      MathInterpolationCalculator0(lVar12,&fStack_198,&fStack_190,uVar9);
      fVar38 = *(float *)(lVar4 + 0x1668);
      if ((0.0 < fVar38) &&
         (fStack_18c <
          *(float *)((int64_t)plStack_238 + 0x4c) + *(float *)((int64_t)plStack_238 + 0x44))) {
        lVar12 = plStack_238[0x5d];
        fStack_1f8 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
        fStack_1f4 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
        fStack_1f0 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
        fStack_1ec = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        uVar9 = Function_56da4ab5(&fStack_1f8);
        local_var_1d8 = CONCAT44(fStack_18c,fStack_190);
        fStack_134 = fStack_18c;
        fStack_138 = fStack_198;
        pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,fVar38);
        SystemCore_SystemMonitor(lVar12,&fStack_138,&local_var_1d8,uVar9);
      }
    }
    lVar12 = plStack_238[0x81];
    if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0xa0) & 0x40) != 0)) {
      fStack_1f8 = *(float *)(lVar12 + 0x38);
      fStack_1f4 = *(float *)(lVar12 + 0x3c);
      local_var_228 = *(int64_t *)(lVar12 + 0x38);
      fVar38 = (float)(int)(*(float *)(lVar4 + 0x19f8) * 0.7);
      fStack_1ec = (float)(int)(*(float *)(lVar4 + 0x19f8) * 0.55);
      fStack_1f0 = fStack_1f8 + fStack_1ec;
      fStack_1ec = fStack_1f4 + fStack_1ec;
      uVar9 = SystemCore_EventHandler(plStack_238,&rendering_buffer_2496_ptr,0);
      pfStack_258._0_4_ = 0x20;
      cVar6 = SystemCore_Formatter(&fStack_1f8,uVar9,acStack_21f,&cStack_220);
      if (cVar6 != '\0') {
        *(byte *)(plStack_238[0x81] + 0xa1) = *(byte *)(plStack_238[0x81] + 0xa1) | 0x10;
      }
      if (((cStack_220 == '\0') || (acStack_21f[0] == '\0')) &&
         (((*(byte *)(plStack_238[0x81] + 0xa0) & 8) == 0 || (acStack_21f[0] != '\0')))) {
        lVar12 = (uint64_t)(acStack_21f[0] != '\0') + 0x15;
      }
      else {
        lVar12 = 0x17;
      }
      puVar18 = (uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1628 + (lVar12 + 10) * 0x10);
      local_var_1c8 = *puVar18;
      local_var_1c0 = *(int32_t *)(puVar18 + 1);
      fStack_1bc = *(float *)((int64_t)puVar18 + 0xc) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      uVar9 = Function_56da4ab5(&local_var_1c8);
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,uVar9);
      fStack_13c = local_var_228._4_4_ + fVar38;
      fStack_140 = (float)local_var_228;
      local_var_208 = CONCAT44(local_var_228._4_4_,(float)local_var_228 + fVar38);
      function_2940f0(plStack_238[0x5d],&local_var_228,&local_var_208,&fStack_140);
    }
    if (*(char *)((int64_t)plStack_238 + 0xac) != '\0') {
      function_110540(0);
    }
    if (*(char *)((int64_t)plStack_238 + 0xad) != '\0') {
      function_110540(1);
    }
    if ((uVar32 & 2) == 0) {
      lVar12 = 0;
      do {
        fVar38 = *(float *)(plStack_238 + 8);
        fVar37 = *(float *)((int64_t)plStack_238 + 0x44);
        fVar38 = ((fVar38 + *(float *)(plStack_238 + 9)) - fVar38) * pfVar15[-2] + fVar38;
        fVar37 = ((fVar37 + *(float *)((int64_t)plStack_238 + 0x4c)) - fVar37) * pfVar15[-1] +
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
        SystemCore_InterruptHandler(plStack_238[0x5d] + 0x80,&fStack_188);
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
        SystemCore_InterruptHandler(plStack_238[0x5d] + 0x80,&fStack_118);
        pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,pfVar15[3]);
        local_var_1c8 = CONCAT44((fVar36 + fVar34) * pfVar15[1] + fVar37,
                              (fVar36 + fVar34) * *pfVar15 + fVar38);
        UtilitiesSystem_FileHandler(plStack_238[0x5d],&local_var_1c8);
        lVar17 = plStack_238[0x5d];
        function_293190(lVar17,*(uint64_t *)(lVar17 + 0x88),*(int32_t *)(lVar17 + 0x80),
                      *(int32_t *)((int64_t)&local_var_f8 + lVar12 * 4));
        bVar31 = (bool)(bVar31 ^ 1);
        *(int32_t *)(lVar17 + 0x80) = 0;
        lVar12 = lVar12 + 1;
        pfVar15 = pfVar15 + 6;
      } while (lVar12 < local_var_1b0);
    }
    if ((0.0 < fVar36) && ((int)local_var_1a0 == 0)) {
      lVar12 = plStack_238[0x5d];
      local_var_f8 = *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1718);
      local_var_f0 = CONCAT44(*(float *)(SYSTEM_DATA_MANAGER_A + 0x1724) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628)
                           ,*(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1720));
      uVar8 = Function_56da4ab5(&local_var_f8);
      fVar38 = *(float *)(plStack_238 + 8) + *(float *)(plStack_238 + 9);
      fVar37 = *(float *)((int64_t)plStack_238 + 0x44) + *(float *)((int64_t)plStack_238 + 0x4c);
      if ((uVar8 & 0xff000000) != 0) {
        pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,0xf);
        local_var_1c8 = CONCAT44(*(float *)((int64_t)plStack_238 + 0x44) + 0.5,
                              *(float *)(plStack_238 + 8) + 0.5);
        if ((*(byte *)(lVar12 + 0x30) & 1) == 0) {
          fVar38 = fVar38 - 0.49;
          fVar37 = fVar37 - 0.49;
        }
        else {
          fVar38 = fVar38 - 0.5;
          fVar37 = fVar37 - 0.5;
        }
        local_var_1b0 = CONCAT44(fVar37,fVar38);
        UtilitiesSystem_LogManager(lVar12,&local_var_1c8,&local_var_1b0,fVar34);
        function_10e4e0(lVar12,uVar8,1,fVar36);
      }
    }
    if (local_var_148 != 0xffffffff) {
      pfStack_258 = (float *)((uint64_t)pfStack_258 & 0xffffffff00000000);
      function_1296e0(&local_var_1c8,plStack_238,local_var_148,fVar33);
      lVar12 = plStack_238[0x5d];
      local_var_1b0 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1898);
      local_var_1a8 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x18a0);
      fStack_1a4 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x18a4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      uVar9 = Function_56da4ab5(&local_var_1b0);
      if (fVar36 <= 1.0) {
        fVar36 = 1.0;
      }
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,fVar36);
      SystemCore_SystemMonitor(lVar12,&local_var_1c8,&local_var_1c0,uVar9);
    }
    fVar33 = *(float *)(lVar4 + 0x1668);
    uVar8 = local_var_210;
    if (((0.0 < fVar33) && ((uVar32 & 1) == 0)) &&
       ((*(byte *)((int64_t)plStack_238 + 0x432) & 1) == 0)) {
      lVar12 = plStack_238[0x5d];
      fStack_118 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
      fStack_114 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
      local_var_110 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1720);
      fStack_10c = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      uVar9 = Function_56da4ab5(&fStack_118);
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,fVar33);
      local_var_1b0 = CONCAT44(fStack_174 - 1.0,fStack_178 - *(float *)(lVar4 + 0x1638));
      local_var_1c8 = CONCAT44(fStack_174 - 1.0,fStack_180 + *(float *)(lVar4 + 0x1638));
      SystemCore_SystemMonitor(lVar12,&local_var_1c8,&local_var_1b0,uVar9);
      uVar8 = local_var_210;
    }
  }
  else {
    uVar9 = *(int32_t *)(lVar4 + 0x1668);
    *(int32_t *)(lVar4 + 0x1668) = *(int32_t *)((int64_t)plStack_238 + 0x7c);
    if ((bVar28 == 0) || (lVar12 = 0x150, *(char *)(lVar4 + 0x1d06) != '\0')) {
      lVar12 = 0x160;
    }
    puVar18 = (uint64_t *)(lVar12 + 0x1628 + SYSTEM_DATA_MANAGER_A);
    local_var_f8 = *puVar18;
    local_var_f0 = CONCAT44(*(float *)((int64_t)puVar18 + 0xc) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628),
                         *(int32_t *)(puVar18 + 1));
    uVar10 = Function_56da4ab5(&local_var_f8);
    pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,fVar34);
    SystemCore_ResourceManager(CONCAT44(fStack_17c,fStack_180),CONCAT44(fStack_174,fStack_178),uVar10,1);
    *(int32_t *)(lVar4 + 0x1668) = uVar9;
  }
  pfVar15 = (float *)(lVar4 + 0x1668);
  plStack_238[0xb] = plStack_238[10];
  *(float *)(plStack_238 + 0x4e) =
       (*(float *)(plStack_238 + 8) - *(float *)((int64_t)plStack_238 + 0x8c)) +
       *(float *)(plStack_238 + 0xe);
  fVar38 = (float)Function_71f4712c(plStack_238);
  fVar33 = *(float *)((int64_t)plStack_238 + 0x44);
  fVar34 = *(float *)(plStack_238 + 0x12);
  fVar36 = *(float *)((int64_t)plStack_238 + 0x74);
  fVar37 = (float)Function_e8c7ba88();
  *(float *)((int64_t)plStack_238 + 0x274) = fVar37 + fVar38 + (fVar33 - fVar34) + fVar36;
  fVar33 = *(float *)(plStack_238 + 0xd);
  if (fVar33 == 0.0) {
    fVar33 = *(float *)(plStack_238 + 9) - *(float *)((int64_t)plStack_238 + 0xa4);
  }
  *(float *)(plStack_238 + 0x4f) =
       ((*(float *)(plStack_238 + 8) - *(float *)((int64_t)plStack_238 + 0x8c)) -
       *(float *)(plStack_238 + 0xe)) + fVar33;
  fVar33 = *(float *)((int64_t)plStack_238 + 0x6c);
  if (fVar33 == 0.0) {
    fVar33 = *(float *)((int64_t)plStack_238 + 0x4c) - *(float *)(plStack_238 + 0x15);
  }
  *(float *)((int64_t)plStack_238 + 0x27c) =
       ((*(float *)((int64_t)plStack_238 + 0x44) - *(float *)(plStack_238 + 0x12)) -
       *(float *)((int64_t)plStack_238 + 0x74)) + fVar33;
  *(float *)((int64_t)plStack_238 + 0x204) =
       *(float *)(plStack_238 + 0xe) - *(float *)((int64_t)plStack_238 + 0x8c);
  uVar10 = 0;
  *(int32_t *)(plStack_238 + 0x41) = 0;
  *(int32_t *)((int64_t)plStack_238 + 0x20c) = 0;
  Function_e8c7ba88(plStack_238);
  Function_71f4712c(plStack_238);
  uVar13 = Function_87f5b9fb(&local_var_1d8,
                               *(float *)((int64_t)plStack_238 + 0x20c) +
                               *(float *)((int64_t)plStack_238 + 0x204));
  puVar27 = (int32_t *)Function_cb59ba0b(&local_var_1b0,plStack_238 + 8,uVar13);
  uVar9 = puVar27[1];
  *(int32_t *)(plStack_238 + 0x22) = *puVar27;
  *(int32_t *)((int64_t)plStack_238 + 0x114) = uVar9;
  plStack_238[0x20] = plStack_238[0x22];
  plStack_238[0x21] = plStack_238[0x22];
  plStack_238[0x23] = plStack_238[0x22];
  puVar27 = (int32_t *)Function_87f5b9fb(&local_var_1d8);
  uVar9 = puVar27[1];
  *(int32_t *)((int64_t)plStack_238 + 300) = *puVar27;
  *(int32_t *)(plStack_238 + 0x26) = uVar9;
  plStack_238[0x24] = *(int64_t *)((int64_t)plStack_238 + 300);
  *(int32_t *)((int64_t)plStack_238 + 0x134) = 0;
  *(int32_t *)(plStack_238 + 0x25) = 0;
  *(int8_t *)((int64_t)plStack_238 + 0x17c) = 0;
  fVar33 = (float)Function_553e241c(plStack_238);
  *(bool *)((int64_t)plStack_238 + 0x17d) = 0.0 < fVar33;
  *(int *)((int64_t)plStack_238 + 0x174) = (int)plStack_238[0x2f];
  *(int32_t *)(plStack_238 + 0x2f) = 0;
  *(int8_t *)((int64_t)plStack_238 + 0x17e) = 0;
  *(float *)(plStack_238 + 0x27) = *(float *)((int64_t)plStack_238 + 0x104) - 9999.0;
  function_13e200(plStack_238 + 0x31,0);
  lVar12 = lStack_158;
  *(int32_t *)(plStack_238 + 0x34) = 1;
  if (lStack_158 == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = *(int32_t *)(lStack_158 + 0x1a0);
  }
  *(int32_t *)((int64_t)plStack_238 + 0x1a4) = uVar9;
  if (lStack_158 != 0) {
    uVar10 = *(int32_t *)(lStack_158 + 0x1a8);
  }
  *(int32_t *)(plStack_238 + 0x35) = uVar10;
  *(int32_t *)((int64_t)plStack_238 + 0x1ac) = *(int32_t *)((int64_t)plStack_238 + 0x284);
  *(int32_t *)(plStack_238 + 0x36) = 0xbf800000;
  function_13e340(plStack_238 + 0x37,0);
  function_13e2f0(plStack_238 + 0x39,0);
  function_13e2f0(plStack_238 + 0x3b,0);
  plStack_238[0x42] = 0;
  *(int32_t *)((int64_t)plStack_238 + 0x13c) = 0;
  *(int32_t *)(plStack_238 + 0x28) = 0;
  plStack_238[0x33] = (int64_t)(plStack_238 + 0x57);
  function_13db40(plStack_238 + 0x3d,0);
  Function_65a94ed8(plStack_238 + 0x51,3);
  if ((local_var_120 != 0) && ((int)plStack_238[0x35] != *(int *)(lVar12 + 0x1a8))) {
    *(int *)(plStack_238 + 0x35) = *(int *)(lVar12 + 0x1a8);
    function_11d940(plStack_238 + 0x37,plStack_238 + 0x35);
  }
  if (0 < *(int *)((int64_t)plStack_238 + 0xc4)) {
    *(int *)((int64_t)plStack_238 + 0xc4) = *(int *)((int64_t)plStack_238 + 0xc4) + -1;
  }
  if (0 < (int)plStack_238[0x19]) {
    *(int *)(plStack_238 + 0x19) = (int)plStack_238[0x19] + -1;
  }
  if ((char)uVar8 != '\0') {
    SystemCore_DataCompressor(plStack_238);
    SystemFunction_000180131810(plStack_238,0);
  }
  puVar5 = plocal_var_150;
  if ((((plocal_var_150 != (int8_t *)0x0) &&
       (lVar17 = plStack_238[5], *(char *)(lVar17 + 0x48) != '\0')) &&
      (lVar30 = SystemFunction_00018012fae0(), lVar17 != lVar30)) &&
     (((*(byte *)((int64_t)plStack_238 + 0x432) & 1) == 0 ||
      ((*(byte *)((int64_t)plStack_238 + 0x432) & 2) != 0)))) {
    *(int8_t *)(lVar17 + 0x48) = 0;
    *(int8_t *)(lVar4 + 0x1cf8) = 0;
    *puVar5 = 0;
  }
  if (((uVar32 & 1) == 0) && ((*(byte *)((int64_t)plStack_238 + 0x432) & 1) == 0)) {
    uVar8 = *(uint *)(plStack_238 + 0x35);
    *(uint *)(plStack_238 + 0x35) = uVar8 | 0x10;
    *(int32_t *)((int64_t)plStack_238 + 0x16c) = 1;
    *(int32_t *)(plStack_238 + 0x2e) = 2;
    if ((uVar32 & 0x20) == 0) {
      plVar14 = plStack_238 + 8;
      uVar9 = SystemCore_EventHandler(plStack_238,&rendering_buffer_2480_ptr,0);
      cVar6 = function_110000(uVar9,plVar14,0);
      if (cVar6 != '\0') {
        *(int8_t *)((int64_t)plStack_238 + 0xb3) = 1;
      }
    }
    if (plocal_var_150 != (int8_t *)0x0) {
      fVar33 = *(float *)(lVar4 + 0x19f8) * 0.5;
      uVar13 = Function_87f5b9fb(&local_var_1d8,
                                   ((*(float *)(plStack_238 + 9) + *(float *)(plStack_238 + 8)) -
                                   *(float *)(lVar4 + 0x165c)) - fVar33,
                                   *(float *)((int64_t)plStack_238 + 0x44) +
                                   *(float *)(lVar4 + 0x1660) + fVar33);
      uVar9 = SystemCore_EventHandler(plStack_238,&rendering_buffer_2512_ptr,0);
      cVar6 = function_10fd40(uVar9,uVar13);
      if (cVar6 != '\0') {
        *plocal_var_150 = 0;
      }
    }
    *(int32_t *)((int64_t)plStack_238 + 0x16c) = 0;
    *(int32_t *)(plStack_238 + 0x2e) = 1;
    *(uint *)(plStack_238 + 0x35) = uVar8;
    if ((uVar32 & 0x100000) == 0) {
      fVar33 = 0.0;
    }
    else {
      pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,0xbf800000);
      pfVar16 = (float *)SystemCore_Controller(&local_var_1d8,&system_data_df28,0,0);
      fVar33 = *pfVar16;
    }
    uVar13 = Function_87f5b9fb(&local_var_1d8);
    pfStack_258 = (float *)CONCAT44(pfStack_258._4_4_,0xbf800000);
    uVar19 = SystemCore_Controller(&local_var_1b0,pcStack_100,0,1);
    Function_cb59ba0b(&local_var_228,uVar19,uVar13);
    puVar5 = plocal_var_150;
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
    if (plocal_var_150 != (int8_t *)0x0) {
      fVar34 = fVar34 + *(float *)(lVar4 + 0x19f8) + *(float *)(lVar4 + 0x1674);
    }
    if (0.0 < *(float *)(lVar4 + 0x1644)) {
      fVar34 = (float)Function_43b443f9();
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
      fStack_190 = (float)Function_5995e7a8(&fStack_180);
      fStack_190 = fStack_190 - 3.0;
    }
    pfStack_248 = &fStack_198;
    pfStack_258 = (float *)&local_var_228;
    fStack_190 = (*(float *)(plStack_238 + 9) + *(float *)(plStack_238 + 8)) - fStack_190;
    pfStack_250 = (float *)(lVar4 + 0x1644);
    function_122890(&fStack_1e8,&fStack_1e0,pcStack_100,0);
    if ((uVar32 & 0x100000) != 0) {
      uVar13 = Function_87f5b9fb(&local_var_1c8,2.0 - fVar33);
      Function_d92a2e20(&fStack_1e8);
      Function_6f0b7d52();
      uVar19 = Function_87f5b9fb(&fStack_118);
      Function_cb59ba0b(&local_var_1d8,uVar19,uVar13);
      Function_87f5b9fb(&local_var_1b0);
      pfVar16 = (float *)Function_87f5b9fb(&local_var_1c8);
      uVar13 = Function_cb59ba0b(&fStack_118,&fStack_1e0,&local_var_1b0);
      uVar19 = Function_cb59ba0b(&fStack_108,&local_var_1d8,&local_var_1b0);
      pfStack_248 = &fStack_198;
      pfStack_258 = (float *)0x0;
      pfStack_250 = pfVar16;
      function_122890(uVar19,uVar13,&system_data_df28,0);
    }
  }
  *(int16_t *)((int64_t)plStack_238 + 0x26a) = 0;
  *(int16_t *)(plStack_238 + 0x4d) = 0;
  plVar14 = (int64_t *)Function_455243f8(plStack_238,&local_var_f8);
  lVar17 = plVar14[1];
  plStack_238[0x47] = *plVar14;
  plStack_238[0x48] = lVar17;
  if ((*(byte *)((int64_t)plStack_238 + 0x432) & 1) != 0) {
    fVar33 = (float)Function_71f4712c();
    *(float *)((int64_t)plStack_238 + 0x23c) = fVar33 + *(float *)((int64_t)plStack_238 + 0x23c);
  }
  Function_989e7d01(plStack_238 + 0x47,plStack_238 + 0x45);
  *(float *)(plStack_238 + 0x49) = fStack_180 + *(float *)((int64_t)plStack_238 + 0x7c);
  if ((uVar29 & 0x401) == 1) {
    pfVar15 = (float *)((int64_t)plStack_238 + 0x7c);
  }
  fVar33 = *pfVar15;
  fVar34 = (float)Function_e8c7ba88();
  *(float *)((int64_t)plStack_238 + 0x24c) = fVar34 + fStack_174 + fVar33;
  *(float *)(plStack_238 + 0x4a) =
       ((*(float *)(plStack_238 + 9) + *(float *)(plStack_238 + 8)) -
       *(float *)((int64_t)plStack_238 + 0xa4)) - *(float *)((int64_t)plStack_238 + 0x7c);
  *(float *)((int64_t)plStack_238 + 0x254) =
       ((*(float *)((int64_t)plStack_238 + 0x4c) + *(float *)((int64_t)plStack_238 + 0x44)) -
       *(float *)(plStack_238 + 0x15)) - *(float *)((int64_t)plStack_238 + 0x7c);
  fVar33 = (float)Function_6f0b7d52();
  *(float *)(plStack_238 + 0x4b) = (float)(int)(fVar33 + *(float *)(plStack_238 + 0x49) + 0.5);
  *(float *)((int64_t)plStack_238 + 0x25c) =
       (float)(int)(*(float *)((int64_t)plStack_238 + 0x24c) + 0.5);
  fVar33 = *(float *)(plStack_238 + 0x4a);
  fVar34 = (float)Function_6f0b7d52();
  *(float *)(plStack_238 + 0x4c) = (float)(int)((fVar33 + 0.5) - fVar34);
  *(float *)((int64_t)plStack_238 + 0x264) =
       (float)(int)(*(float *)((int64_t)plStack_238 + 0x254) + 0.5);
  if ((*(byte *)(lVar4 + 8) & 0x40) != 0) {
    if ((*(int *)(lVar4 + 0x1b2c) == *(int *)((int64_t)plStack_238 + 0x84)) &&
       (((*(char *)(lVar4 + 0xc1) == '\0' || (*(char *)(lVar4 + 0x135) != '\0')) &&
        ((*(uint *)(plStack_238[0x74] + 0xc) & 0x200004) == 0)))) {
      function_13ba30();
    }
    if ((((*(char *)(lVar4 + 0x1dd0) != '\0') && ((uVar29 >> 0x15 & 1) == 0)) &&
        ((*(int64_t *)(lVar4 + 0x1b78) == 0 ||
         (*(int64_t **)(*(int64_t *)(lVar4 + 0x1b78) + 0x3a0) != plStack_238)))) &&
       ((plStack_238 == (int64_t *)plStack_238[0x74] &&
        ((*(uint *)((int64_t)plStack_238 + 0xc) & 0x20000000) == 0)))) {
      function_13baf0();
    }
  }
  if ((*(byte *)((int64_t)plStack_238 + 0x432) & 1) == 0) {
    *(int32_t *)((int64_t)plStack_238 + 0x144) = *(int32_t *)((int64_t)plStack_238 + 0x84);
    cVar6 = SystemCore_HashCalculator(&fStack_180,&fStack_178,0);
    *(uint *)(plStack_238 + 0x29) = (uint)(cVar6 != '\0');
    *(uint64_t *)((int64_t)plStack_238 + 0x14c) = CONCAT44(fStack_17c,fStack_180);
    *(uint64_t *)((int64_t)plStack_238 + 0x154) = CONCAT44(fStack_174,fStack_178);
    iVar23 = iStack_200;
    iVar26 = iStack_1b8;
  }
  else {
    *(int *)((int64_t)plStack_238 + 0x144) = (int)plStack_238[1];
    *(int32_t *)(plStack_238 + 0x29) = *(int32_t *)((int64_t)plStack_238 + 0x41c);
    *(int64_t *)((int64_t)plStack_238 + 0x14c) = plStack_238[0x84];
    *(int64_t *)((int64_t)plStack_238 + 0x154) = plStack_238[0x85];
    iVar23 = iStack_200;
    iVar26 = iStack_1b8;
  }
LAB_18012ce0f:
  if ((uVar29 >> 0x1d & 1) == 0) {
    SystemCore_PerformanceMonitor(plStack_238 + 0x4b,plStack_238 + 0x4c,1);
  }
  if (iVar23 != iVar26) {
    *(int8_t *)((int64_t)plStack_238 + 0xb1) = 0;
  }
  *(short *)(plStack_238 + 0x17) = (short)plStack_238[0x17] + 1;
  function_11ff20(lVar4 + 0x1bd0);
  if (((*(byte *)((int64_t)plStack_238 + 0x432) & 1) != 0) &&
     ((*(byte *)((int64_t)plStack_238 + 0x432) & 2) == 0)) {
    *(int32_t *)(plStack_238 + 0x1b) = 1;
  }
  if ((uVar29 >> 0x18 & 1) != 0) {
    if (((((uVar29 & 0x40) == 0) && (*(int *)((int64_t)plStack_238 + 0xc4) < 1)) &&
        ((int)plStack_238[0x19] < 1)) &&
       ((*(float *)(plStack_238 + 0x48) < *(float *)(plStack_238 + 0x47) ||
         *(float *)(plStack_238 + 0x48) == *(float *)(plStack_238 + 0x47) ||
        (*(float *)((int64_t)plStack_238 + 0x244) < *(float *)((int64_t)plStack_238 + 0x23c) ||
         *(float *)((int64_t)plStack_238 + 0x244) == *(float *)((int64_t)plStack_238 + 0x23c)))))
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
  if (((int)plStack_238[0x1b] < 1) && (*(int *)((int64_t)plStack_238 + 0xdc) < 1)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  *(char *)((int64_t)plStack_238 + 0xb6) = cVar6;
  if (((((*(char *)((int64_t)plStack_238 + 0xb2) == '\0') &&
        (*(char *)((int64_t)plStack_238 + 0xaf) != '\0')) && (cVar6 == '\0')) ||
      ((0 < *(int *)((int64_t)plStack_238 + 0xc4) || (0 < (int)plStack_238[0x19])))) ||
     (0 < *(int *)((int64_t)plStack_238 + 0xdc))) {
    uVar20 = 0;
  }
  else {
    uVar20 = 1;
  }
  *(int8_t *)((int64_t)plStack_238 + 0xb4) = uVar20;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_e8 ^ (uint64_t)stack_array_278);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address