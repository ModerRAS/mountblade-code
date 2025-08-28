n//  的语义化别名
#define SystemCore_DatabaseHandler
// $fun 的语义化别名
#define $alias_name $fun
#define SystemInitializer System_Initializer2  // 系统初始化器
// 03_rendering_part480.c - 11 个函数
// 函数: void function_524ea6(void)
void function_524ea6(void)
{
  uint64_t *puVar1;
  char cVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t lVar7;
  int64_t unaff_RBX;
  int64_t lVar8;
  int32_t uVar9;
  char unaff_DIL;
  int iVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t unaff_R12;
  float *unaff_R13;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar13;
  float fVar14;
  int8_t auVar15 [16];
  float fVar16;
  float fVar17;
  float unaff_XMM11_Da;
  float *local_var_f0;
  char local_var_f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000108;
  float fStack000000000000010c;
  cVar3 = '\0';
  cVar2 = SystemFunction_000180522f60();
  if (((cVar2 != '\0') && (unaff_R15 != 0)) && (cVar2 = SystemFunction_00018038b3c0(), cVar2 != '\0')) {
    cVar2 = SystemCore_PerformanceMonitor();
    if (cVar2 != '\0') goto LAB_180525170;
    iVar6 = 0;
    iVar10 = 0;
    if (*(byte *)(unaff_R15 + 0xa8) != 0) {
      lVar7 = 0x60;
      do {
        iVar10 = iVar6;
        if (1 < *(byte *)(*(int64_t *)(unaff_R15 + lVar7) + 0x20)) break;
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 8;
        iVar10 = 0;
      } while (iVar6 < (int)(uint)*(byte *)(unaff_R15 + 0xa8));
    }
    puVar1 = *(uint64_t **)(unaff_R15 + 0x60 + (int64_t)iVar10 * 8);
    uVar5 = *(uint64_t *)*puVar1;
    fStack0000000000000108 = (float)uVar5;
    fStack000000000000010c = (float)((uint64_t)uVar5 >> 0x20);
    uVar5 = *(uint64_t *)puVar1[1];
    fStack0000000000000100 = (float)uVar5;
    fStack0000000000000104 = (float)((uint64_t)uVar5 >> 0x20);
    fVar17 = fStack0000000000000100 - fStack0000000000000108;
    fVar16 = fStack0000000000000104 - fStack000000000000010c;
    fVar13 = fVar16 * fVar16 + fVar17 * fVar17;
    auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar14 = auVar15._0_4_;
    fVar13 = fVar14 * 0.5 * (3.0 - fVar13 * fVar14 * fVar14);
    fVar17 = fVar17 * fVar13;
    fVar16 = fVar16 * fVar13;
    if (0.0 < (fStack000000000000010c - unaff_R13[1]) * fVar16 +
              (fStack0000000000000108 - *unaff_R13) * fVar17 !=
        0.0 < (fStack0000000000000104 - unaff_R13[1]) * fVar16 +
              (fStack0000000000000100 - *unaff_R13) * fVar17) {
      cVar3 = '\x01';
    }
  }
  if (cVar3 == '\0') {
    lVar7 = 0;
    if (*(char *)(unaff_RBX + 0x12bc) != '\0') {
      lVar11 = unaff_RBX + 0x290;
      iVar10 = *(int *)(unaff_RBX + 0x12b8);
      cVar2 = *(char *)(unaff_RBX + 0x12b4);
      lVar8 = *(int64_t *)(**(int64_t **)(unaff_RBX + 0x198) + 0x20);
      while( true ) {
        if (cVar2 == '\0') {
          iVar6 = (int)(*(int64_t *)(lVar11 + 0x1008) - *(int64_t *)(lVar11 + 0x1000) >> 5);
        }
        else {
          iVar6 = *(int *)(lVar11 + 0x1020);
        }
        if (iVar6 <= iVar10) break;
        lVar12 = (int64_t)iVar10 * 0x20;
        lVar4 = lVar11;
        if (cVar2 == '\0') {
          lVar4 = *(int64_t *)(lVar11 + 0x1000);
        }
        if (*(int64_t *)(lVar12 + 0x10 + lVar4) != 0) {
          lVar4 = lVar11;
          if (cVar2 == '\0') {
            lVar4 = *(int64_t *)(lVar11 + 0x1000);
          }
          uVar5 = *(uint64_t *)(lVar12 + 0x10 + lVar4);
          cVar3 = SystemCore_PerformanceMonitor(uVar5,lVar8 + 0xc);
          if ((cVar3 != '\0') &&
             (fVar13 = (float)SystemFunction_00018038d2f0(uVar5,lVar8 + 0xc),
             ABS(*(float *)(lVar8 + 0x14) - fVar13) < unaff_XMM11_Da)) {
            lVar7 = lVar11;
            if (cVar2 == '\0') {
              lVar7 = *(int64_t *)(lVar11 + 0x1000);
            }
            lVar7 = *(int64_t *)(lVar12 + 0x10 + lVar7);
          }
        }
        iVar10 = iVar10 + 1;
      }
      unaff_DIL = '\0';
    }
    unaff_R12 = unaff_R15;
    unaff_R13 = local_var_f0;
    if ((lVar7 != 0) && (lVar7 != unaff_R15)) {
      unaff_DIL = '\x01';
      *(int64_t *)(unaff_R14 + 0x9d8) = lVar7;
      local_var_f8 = '\x01';
      unaff_R12 = lVar7;
    }
  }
LAB_180525170:
  if ((unaff_R15 == unaff_R12) && (cVar2 = SystemFunction_000180522f60(), cVar2 == '\0')) {
    lVar7 = *(int64_t *)(unaff_R14 + 0x660);
    if (unaff_R12 == 0) {
      uVar5 = function_396100(lVar7 + 0x2a68,unaff_R13,lVar7 + 0x28c8,1);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar5;
    }
    else {
      lVar11 = lVar7 + 0x2a68;
      uVar9 = 2;
      if ((*(byte *)(unaff_R12 + 0x139) & 4) != 0) {
        uVar9 = 5;
      }
      iVar10 = function_3965f0(lVar11);
      lVar8 = (int64_t)iVar10;
      function_38de80(lVar11,iVar10);
      *(int32_t *)(unaff_R12 + 0x40 + lVar8 * 4) = *(int32_t *)(lVar7 + 0x2fc0 + lVar8 * 4);
      function_395ea0(lVar11,iVar10,unaff_R13,unaff_R12,uVar9);
      *(int32_t *)(lVar7 + 0x2fe0 + lVar8 * 4) = 0;
      *(uint64_t *)(unaff_R14 + 0x9d8) = 0;
      uVar5 = function_396100(*(int64_t *)(unaff_R14 + 0x660) + 0x2a68,unaff_R13,
                            *(int64_t *)(unaff_R14 + 0x660) + 0x28c8,1);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar5;
      unaff_DIL = local_var_f8;
    }
  }
  if (((*(int *)(unaff_R14 + 0x570) == 1) && (unaff_R15 != *(int64_t *)(unaff_R14 + 0x9d8))) &&
     (unaff_DIL == '\0')) {
    function_5e48c0(*(int64_t *)(unaff_R14 + 0x6e0) + 0x178);
  }
  return;
}
// 函数: void function_524ef5(uint64_t param_1,uint64_t param_2,int param_3,int param_4)
void function_524ef5(uint64_t param_1,uint64_t param_2,int param_3,int param_4)
{
  uint64_t *puVar1;
  char cVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t lVar7;
  int64_t unaff_RBX;
  int64_t lVar8;
  int32_t uVar9;
  char unaff_DIL;
  int iVar10;
  char in_R10B;
  int64_t lVar11;
  int64_t lVar12;
  int64_t unaff_R12;
  float *unaff_R13;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar13;
  float fVar14;
  int8_t auVar15 [16];
  float fVar16;
  float fVar17;
  float unaff_XMM11_Da;
  float *local_var_f0;
  char local_var_f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000108;
  float fStack000000000000010c;
  iVar6 = 0;
  iVar10 = param_4;
  if (param_3 != 0) {
    lVar7 = 0x60;
    do {
      iVar10 = iVar6;
      if (1 < *(byte *)(*(int64_t *)(unaff_R15 + lVar7) + 0x20)) break;
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
      iVar10 = param_4;
    } while (iVar6 < param_3);
  }
  puVar1 = *(uint64_t **)(unaff_R15 + 0x60 + (int64_t)iVar10 * 8);
  uVar5 = *(uint64_t *)*puVar1;
  fStack0000000000000108 = (float)uVar5;
  fStack000000000000010c = (float)((uint64_t)uVar5 >> 0x20);
  lVar7 = *(int64_t *)puVar1[1];
  fStack0000000000000100 = (float)lVar7;
  fStack0000000000000104 = (float)((uint64_t)lVar7 >> 0x20);
  fVar17 = fStack0000000000000100 - fStack0000000000000108;
  fVar16 = fStack0000000000000104 - fStack000000000000010c;
  fVar13 = fVar16 * fVar16 + fVar17 * fVar17;
  auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
  fVar14 = auVar15._0_4_;
  fVar13 = fVar14 * 0.5 * (3.0 - fVar13 * fVar14 * fVar14);
  fVar17 = fVar17 * fVar13;
  fVar16 = fVar16 * fVar13;
  if (0.0 < (fStack000000000000010c - unaff_R13[1]) * fVar16 +
            (fStack0000000000000108 - *unaff_R13) * fVar17 !=
      0.0 < (fStack0000000000000104 - unaff_R13[1]) * fVar16 +
            (fStack0000000000000100 - *unaff_R13) * fVar17) {
    in_R10B = '\x01';
  }
  _fStack0000000000000100 = lVar7;
  _fStack0000000000000108 = uVar5;
  if (in_R10B == '\0') {
    lVar7 = 0;
    if (*(char *)(unaff_RBX + 0x12bc) != '\0') {
      lVar11 = unaff_RBX + 0x290;
      iVar10 = *(int *)(unaff_RBX + 0x12b8);
      cVar3 = *(char *)(unaff_RBX + 0x12b4);
      lVar8 = *(int64_t *)(**(int64_t **)(unaff_RBX + 0x198) + 0x20);
      while( true ) {
        if (cVar3 == '\0') {
          iVar6 = (int)(*(int64_t *)(lVar11 + 0x1008) - *(int64_t *)(lVar11 + 0x1000) >> 5);
        }
        else {
          iVar6 = *(int *)(lVar11 + 0x1020);
        }
        if (iVar6 <= iVar10) break;
        lVar12 = (int64_t)iVar10 * 0x20;
        lVar4 = lVar11;
        if (cVar3 == '\0') {
          lVar4 = *(int64_t *)(lVar11 + 0x1000);
        }
        if (*(int64_t *)(lVar12 + 0x10 + lVar4) != 0) {
          lVar4 = lVar11;
          if (cVar3 == '\0') {
            lVar4 = *(int64_t *)(lVar11 + 0x1000);
          }
          uVar5 = *(uint64_t *)(lVar12 + 0x10 + lVar4);
          cVar2 = SystemCore_PerformanceMonitor(uVar5,lVar8 + 0xc);
          if ((cVar2 != '\0') &&
             (fVar13 = (float)SystemFunction_00018038d2f0(uVar5,lVar8 + 0xc),
             ABS(*(float *)(lVar8 + 0x14) - fVar13) < unaff_XMM11_Da)) {
            lVar7 = lVar11;
            if (cVar3 == '\0') {
              lVar7 = *(int64_t *)(lVar11 + 0x1000);
            }
            lVar7 = *(int64_t *)(lVar12 + 0x10 + lVar7);
          }
        }
        iVar10 = iVar10 + 1;
      }
      unaff_DIL = '\0';
    }
    unaff_R12 = unaff_R15;
    unaff_R13 = local_var_f0;
    if ((lVar7 != 0) && (lVar7 != unaff_R15)) {
      unaff_DIL = '\x01';
      *(int64_t *)(unaff_R14 + 0x9d8) = lVar7;
      local_var_f8 = '\x01';
      unaff_R12 = lVar7;
    }
  }
  if ((unaff_R15 == unaff_R12) && (cVar3 = SystemFunction_000180522f60(), cVar3 == '\0')) {
    lVar7 = *(int64_t *)(unaff_R14 + 0x660);
    if (unaff_R12 == 0) {
      uVar5 = function_396100(lVar7 + 0x2a68,unaff_R13,lVar7 + 0x28c8,1);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar5;
    }
    else {
      lVar11 = lVar7 + 0x2a68;
      _fStack0000000000000100 = 0;
      uVar9 = 2;
      if ((*(byte *)(unaff_R12 + 0x139) & 4) != 0) {
        uVar9 = 5;
      }
      iVar10 = function_3965f0(lVar11);
      lVar8 = (int64_t)iVar10;
      function_38de80(lVar11,iVar10);
      *(int32_t *)(unaff_R12 + 0x40 + lVar8 * 4) = *(int32_t *)(lVar7 + 0x2fc0 + lVar8 * 4);
      function_395ea0(lVar11,iVar10,unaff_R13,unaff_R12,uVar9);
      *(int32_t *)(lVar7 + 0x2fe0 + lVar8 * 4) = 0;
      *(int64_t *)(unaff_R14 + 0x9d8) = _fStack0000000000000100;
      unaff_DIL = local_var_f8;
      if (_fStack0000000000000100 == 0) {
        uVar5 = function_396100(*(int64_t *)(unaff_R14 + 0x660) + 0x2a68,unaff_R13,
                              *(int64_t *)(unaff_R14 + 0x660) + 0x28c8,1);
        *(uint64_t *)(unaff_R14 + 0x9d8) = uVar5;
      }
    }
  }
  if (((*(int *)(unaff_R14 + 0x570) == 1) && (unaff_R15 != *(int64_t *)(unaff_R14 + 0x9d8))) &&
     (unaff_DIL == '\0')) {
    function_5e48c0(*(int64_t *)(unaff_R14 + 0x6e0) + 0x178);
  }
  return;
}
// 函数: void function_525053(void)
void function_525053(void)
{
  char cVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t unaff_RBX;
  int64_t lVar7;
  int32_t uVar8;
  char unaff_DIL;
  int iVar9;
  char in_R10B;
  int64_t lVar10;
  int64_t lVar11;
  int64_t unaff_R12;
  uint64_t unaff_R13;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar12;
  float unaff_XMM11_Da;
  uint64_t local_var_f0;
  char local_var_f8;
  if (in_R10B == '\0') {
    lVar5 = 0;
    if (*(char *)(unaff_RBX + 0x12bc) != '\0') {
      lVar10 = unaff_RBX + 0x290;
      iVar9 = *(int *)(unaff_RBX + 0x12b8);
      cVar2 = *(char *)(unaff_RBX + 0x12b4);
      lVar7 = *(int64_t *)(**(int64_t **)(unaff_RBX + 0x198) + 0x20);
      while( true ) {
        if (cVar2 == '\0') {
          iVar3 = (int)(*(int64_t *)(lVar10 + 0x1008) - *(int64_t *)(lVar10 + 0x1000) >> 5);
        }
        else {
          iVar3 = *(int *)(lVar10 + 0x1020);
        }
        if (iVar3 <= iVar9) break;
        lVar11 = (int64_t)iVar9 * 0x20;
        lVar4 = lVar10;
        if (cVar2 == '\0') {
          lVar4 = *(int64_t *)(lVar10 + 0x1000);
        }
        if (*(int64_t *)(lVar11 + 0x10 + lVar4) != 0) {
          lVar4 = lVar10;
          if (cVar2 == '\0') {
            lVar4 = *(int64_t *)(lVar10 + 0x1000);
          }
          uVar6 = *(uint64_t *)(lVar11 + 0x10 + lVar4);
          cVar1 = SystemCore_PerformanceMonitor(uVar6,lVar7 + 0xc);
          if ((cVar1 != '\0') &&
             (fVar12 = (float)SystemFunction_00018038d2f0(uVar6,lVar7 + 0xc),
             ABS(*(float *)(lVar7 + 0x14) - fVar12) < unaff_XMM11_Da)) {
            lVar5 = lVar10;
            if (cVar2 == '\0') {
              lVar5 = *(int64_t *)(lVar10 + 0x1000);
            }
            lVar5 = *(int64_t *)(lVar11 + 0x10 + lVar5);
          }
        }
        iVar9 = iVar9 + 1;
      }
      unaff_DIL = '\0';
    }
    unaff_R12 = unaff_R15;
    unaff_R13 = local_var_f0;
    if ((lVar5 != 0) && (lVar5 != unaff_R15)) {
      unaff_DIL = '\x01';
      *(int64_t *)(unaff_R14 + 0x9d8) = lVar5;
      local_var_f8 = '\x01';
      unaff_R12 = lVar5;
    }
  }
  if ((unaff_R15 == unaff_R12) && (cVar2 = SystemFunction_000180522f60(), cVar2 == '\0')) {
    lVar5 = *(int64_t *)(unaff_R14 + 0x660);
    if (unaff_R12 == 0) {
      uVar6 = function_396100(lVar5 + 0x2a68,unaff_R13,lVar5 + 0x28c8,1);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar6;
    }
    else {
      lVar10 = lVar5 + 0x2a68;
      uVar8 = 2;
      if ((*(byte *)(unaff_R12 + 0x139) & 4) != 0) {
        uVar8 = 5;
      }
      iVar9 = function_3965f0(lVar10);
      lVar7 = (int64_t)iVar9;
      function_38de80(lVar10,iVar9);
      *(int32_t *)(unaff_R12 + 0x40 + lVar7 * 4) = *(int32_t *)(lVar5 + 0x2fc0 + lVar7 * 4);
      function_395ea0(lVar10,iVar9,unaff_R13,unaff_R12,uVar8);
      *(int32_t *)(lVar5 + 0x2fe0 + lVar7 * 4) = 0;
      *(uint64_t *)(unaff_R14 + 0x9d8) = 0;
      uVar6 = function_396100(*(int64_t *)(unaff_R14 + 0x660) + 0x2a68,unaff_R13,
                            *(int64_t *)(unaff_R14 + 0x660) + 0x28c8,1);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar6;
      unaff_DIL = local_var_f8;
    }
  }
  if (((*(int *)(unaff_R14 + 0x570) == 1) && (unaff_R15 != *(int64_t *)(unaff_R14 + 0x9d8))) &&
     (unaff_DIL == '\0')) {
    function_5e48c0(*(int64_t *)(unaff_R14 + 0x6e0) + 0x178);
  }
  return;
}
// 函数: void function_525178(void)
void function_525178(void)
{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  char unaff_DIL;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int64_t unaff_R15;
  char local_var_f8;
  if ((unaff_R15 == unaff_R12) && (cVar3 = SystemFunction_000180522f60(), cVar3 == '\0')) {
    lVar2 = *(int64_t *)(unaff_R14 + 0x660);
    if (unaff_R12 == 0) {
      uVar5 = function_396100(lVar2 + 0x2a68);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar5;
    }
    else {
      lVar1 = lVar2 + 0x2a68;
      iVar4 = function_3965f0(lVar1);
      lVar6 = (int64_t)iVar4;
      function_38de80(lVar1,iVar4);
      *(int32_t *)(unaff_R12 + 0x40 + lVar6 * 4) = *(int32_t *)(lVar2 + 0x2fc0 + lVar6 * 4);
      function_395ea0(lVar1,iVar4);
      *(int32_t *)(lVar2 + 0x2fe0 + lVar6 * 4) = 0;
      *(uint64_t *)(unaff_R14 + 0x9d8) = 0;
      uVar5 = function_396100(*(int64_t *)(unaff_R14 + 0x660) + 0x2a68);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar5;
      unaff_DIL = local_var_f8;
    }
  }
  if (((*(int *)(unaff_R14 + 0x570) == 1) && (unaff_R15 != *(int64_t *)(unaff_R14 + 0x9d8))) &&
     (unaff_DIL == '\0')) {
    function_5e48c0(*(int64_t *)(unaff_R14 + 0x6e0) + 0x178);
  }
  return;
}
// 函数: void function_5252a5(void)
void function_5252a5(void)
{
  char unaff_DIL;
  int64_t unaff_R14;
  int64_t unaff_R15;
  if ((unaff_R15 != *(int64_t *)(unaff_R14 + 0x9d8)) && (unaff_DIL == '\0')) {
    function_5e48c0(*(int64_t *)(unaff_R14 + 0x6e0) + 0x178);
  }
  return;
}
// 函数: void function_5252d4(void)
void function_5252d4(void)
{
  return;
}
// 函数: void function_5252e2(void)
void function_5252e2(void)
{
  return;
}
// 函数: void function_5252ef(int64_t param_1)
void function_5252ef(int64_t param_1)
{
  uint64_t uVar1;
  char unaff_DIL;
  int64_t unaff_R14;
  int64_t unaff_R15;
  uVar1 = function_396100(param_1 + 0x2a68);
  *(uint64_t *)(unaff_R14 + 0x9d8) = uVar1;
  if (((*(int *)(unaff_R14 + 0x570) == 1) && (unaff_R15 != *(int64_t *)(unaff_R14 + 0x9d8))) &&
     (unaff_DIL == '\0')) {
    function_5e48c0(*(int64_t *)(unaff_R14 + 0x6e0) + 0x178);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5253f0(int64_t param_1,int64_t param_2,char param_3,char param_4,int param_5,
void function_5253f0(int64_t param_1,int64_t param_2,char param_3,char param_4,int param_5,
                  uint64_t param_6,int64_t param_7,int param_8,uint64_t *param_9,
                  uint64_t *param_10)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  bool bVar7;
  int64_t lVar8;
  int64_t lVar9;
  void *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int32_t uVar15;
  int8_t stack_array_228 [32];
  uint64_t **pplocal_var_208;
  uint64_t **pplocal_var_200;
  int iStack_1f8;
  int32_t local_var_1f0;
  int64_t *plStack_1e8;
  char cStack_1c8;
  int8_t local_var_1c7;
  int32_t local_var_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int64_t lStack_1b0;
  int64_t lStack_1a8;
  uint64_t *plocal_var_198;
  uint64_t local_var_190;
  uint64_t *plocal_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  void *plocal_var_170;
  void *plocal_var_168;
  int32_t local_var_160;
  uint8_t stack_array_158 [32];
  int64_t alStack_138 [4];
  int32_t stack_array_118 [2];
  int8_t stack_array_110 [152];
  int iStack_78;
  uint64_t local_var_68;
  local_var_178 = 0xfffffffffffffffe;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_228;
  iStack_1bc = param_8;
  lStack_1a8 = param_7;
  plocal_var_188 = param_9;
  plocal_var_198 = param_10;
  local_var_1c4 = 0;
  local_var_1c7 = param_7 != 0;
  if (param_7 == 0) {
    if (param_5 < 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (int64_t)param_5 * 0x1f8 + 8 +
              *(int64_t *)((int64_t)param_8 * 0xa60 + 0x3998 + *(int64_t *)(param_1 + 0x8d8));
    }
  }
  else {
    lVar8 = *(int64_t *)(param_7 + 0xf0);
  }
  cStack_1c8 = param_3;
  if (*(char *)(param_2 + 0xd0) != '\0') {
    function_50df10(param_1,param_4,param_8,local_var_1c7);
  }
  iStack_1b8 = *(int *)(param_2 + 0xc);
  lVar1 = *(int64_t *)(param_1 + 0x8f8);
  if (param_4 < '\0') {
    lVar9 = *(int64_t *)(lVar1 + 0x9f0);
  }
  else {
    lVar9 = lVar1 + 8 + (int64_t)param_4 * 0x1f8;
  }
  if (iStack_1b8 == 0) {
    if (cStack_1c8 == '\0') goto LAB_1805259ed;
  }
  else if ((((iStack_1b8 != 5) && (lVar9 != 0)) &&
           ((*(uint64_t *)
              ((int64_t)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar9 + 0xd0)) >> 0x1c
            & 1) != 0)) && (0 < *(int *)(param_2 + 200))) {
    iVar14 = (int)param_4;
    if (param_4 < '\0') {
      iVar14 = *(int *)(lVar1 + 0x9e4);
    }
    iStack_1c0 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      lStack_1b0 = render_system_data_memory;
      iStack_1c0 = *(int *)(param_2 + 200);
      iVar13 = *(int *)(param_1 + 0x18);
      iStack_1b4 = iVar13;
      if ((iVar13 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x30))(iVar13);
      }
      local_var_1c4 = 1;
      (**(code **)(lStack_1b0 + 0x80))(iVar13,iVar14,iStack_1c0);
      local_var_1c4 = 0;
      if ((iVar13 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x18))(iVar13);
      }
    }
  }
  iVar14 = iStack_1bc;
  iVar13 = iStack_1b8;
  if (*(char *)(param_2 + 0xd0) == '\0') {
    iVar12 = -1;
    iVar11 = -1;
    lVar1 = *(int64_t *)(param_1 + 0x8f8);
    if (param_4 < '\0') {
      lVar9 = *(int64_t *)(lVar1 + 0x9f0);
    }
    else {
      lVar9 = lVar1 + 8 + (int64_t)param_4 * 0x1f8;
    }
    iVar13 = *(int *)(*(int64_t *)(param_1 + 0x590) + 0x2498);
    if (((iVar13 == -1) || (*(char *)((int64_t)iVar13 * 0x68 + 0x60 + render_system_memory) < '\x05')) ||
       ('\x06' < *(char *)((int64_t)iVar13 * 0x68 + 0x60 + render_system_memory))) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((((lStack_1a8 == 0) && (!bVar7)) && (param_4 < '\0')) ||
       (((lVar9 == 0 || (*(int *)(lVar9 + 0x30) < 1)) ||
        (((uVar2 = *(uint64_t *)
                    ((int64_t)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar9 + 0xd0)),
          (uVar2 >> 9 & 1) != 0 && (*(short *)(lVar9 + 8) < 1)) || ((uVar2 >> 0x1c & 1) == 0)))))) {
      if (*(int64_t *)(lVar1 + 0x9e8) != 0) {
        if (lVar8 != 0) {
          iVar11 = *(int *)(lVar8 + 0x34);
        }
        iVar12 = *(int *)(*(int64_t *)(lVar1 + 0x9e8) + 0x34);
        goto LAB_1805256ec;
      }
    }
    else {
      if (lVar8 != 0) {
        iVar11 = *(int *)(lVar8 + 0x34);
      }
      iVar12 = *(int *)(lVar9 + 0x34);
LAB_1805256ec:
      pplocal_var_200 = (uint64_t **)((uint64_t)pplocal_var_200 & 0xffffffffffffff00);
      function_4f5d10(*(uint64_t *)(param_1 + 0x8d8),iStack_1bc,param_2 + 0x6c,0x41200000);
    }
    if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
                 0x48) < render_system_config_memory) && (SystemInitializer(&system_ptr_9ef8), render_system_config_memory == -1)) {
      plocal_var_170 = &processed_var_672_ptr;
      plocal_var_168 = stack_array_158;
      stack_array_158[0] = 0;
      local_var_160 = 0xc;
      strcpy_s(stack_array_158,0x20,&processed_var_5088_ptr);
      render_system_config_memory = RenderingSystem_PostProcessor(render_system_data_memory,&plocal_var_170);
      plocal_var_170 = &system_state_ptr;
      SystemCore_StateController(&system_ptr_9ef8);
    }
    if (iVar11 == -1) {
      iVar11 = render_system_config_memory;
    }
    if (iVar12 == -1) {
      iVar12 = render_system_config_memory;
    }
    pplocal_var_208 = (uint64_t **)SystemCore_MemoryManager;
    iStack_1c0 = iVar12;
    DataStructureManager(alStack_138,0x30,4,function_1c2890);
    iVar13 = iStack_1b8;
    plStack_1e8 = (int64_t *)0x0;
    iStack_78 = 0;
    if (iStack_1b8 == 4) {
      uVar15 = 0x3dcccccd;
LAB_1805257df:
      plocal_var_170 = &system_config_ptr;
      plocal_var_168 = stack_array_158;
      stack_array_158[0] = 0;
      local_var_160 = 0xe;
      strcpy_s(stack_array_158,0x10,&processed_var_6896_ptr);
      lVar8 = (int64_t)iStack_78;
      puVar10 = &system_buffer_ptr;
      if (plocal_var_168 != (void *)0x0) {
        puVar10 = plocal_var_168;
      }
      (**(code **)(alStack_138[lVar8 * 6] + 0x10))(alStack_138 + lVar8 * 6,puVar10);
      stack_array_118[lVar8 * 0xc] = 0xffffffff;
      stack_array_118[lVar8 * 0xc + 1] = uVar15;
      stack_array_110[lVar8 * 0x30] = 1;
      iStack_78 = iStack_78 + 1;
      plStack_1e8 = alStack_138;
      plocal_var_170 = &system_state_ptr;
      iVar12 = iStack_1c0;
    }
    else {
      if (iStack_1b8 == 5) {
        uVar15 = 0x3e4ccccd;
        goto LAB_1805257df;
      }
      if (cStack_1c8 != '\0') {
        uVar15 = 0x3e99999a;
        goto LAB_1805257df;
      }
    }
    local_var_1f0 = *(int32_t *)(param_1 + 0x10);
    iStack_1f8 = iVar14;
    function_4f81c0(*(uint64_t *)(param_1 + 0x8d8),iVar11,iVar12,param_2 + 0x6c);
    SystemDataValidator(alStack_138,0x30,4,SystemCore_MemoryManager);
  }
  if (iVar13 != 0) {
    iStack_1c0 = 0;
    if (-1 < iVar14) {
      iVar14 = *(int *)((int64_t)iVar14 * 0xa60 + 0x30b8 + *(int64_t *)(param_1 + 0x8d8));
      if ((iVar14 != 0) && (system_cache_buffer != 0)) {
        iStack_1b8 = iVar14;
        (**(code **)(system_cache_buffer + 0x30))(iVar14);
      }
      iStack_1b8 = 0;
      local_var_1c4 = 0;
      iStack_1c0 = iVar14;
    }
    iVar13 = iStack_1c0;
    lVar8 = render_system_data_memory;
    puVar3 = (uint64_t *)*plocal_var_198;
    uVar4 = plocal_var_198[1];
    puVar5 = (uint64_t *)*plocal_var_188;
    uVar6 = plocal_var_188[1];
    iVar14 = *(int *)(param_1 + 0x18);
    iStack_1b4 = iVar14;
    if ((iVar14 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar14);
    }
    local_var_1c4 = 4;
    iStack_1f8 = CONCAT31(iStack_1f8._1_3_,local_var_1c7);
    pplocal_var_200 = &plocal_var_188;
    pplocal_var_208 = &plocal_var_198;
    plocal_var_198 = puVar5;
    local_var_190 = uVar6;
    plocal_var_188 = puVar3;
    local_var_180 = uVar4;
    (**(code **)(lVar8 + 0x230))
              (*(int32_t *)(*(int64_t *)(param_1 + 0x8d8) + 0x98d928),iVar14,iVar13,param_2);
    local_var_1c4 = 0;
    if ((iVar14 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar14);
    }
    if ((iVar13 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar13);
    }
  }
LAB_1805259ed:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_68 ^ (uint64_t)stack_array_228);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_525ac0(int64_t param_1,char param_2)
void function_525ac0(int64_t param_1,char param_2)
{
  int32_t uVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  lVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x408,8,3);
  DataStructureManager(lVar5,0x10,0x40,function_534540,function_534590);
  lVar6 = 0;
  *(uint64_t *)(lVar5 + 0x400) = 0;
  *(int64_t *)(param_1 + 0x9a0) = lVar5;
  *(uint64_t *)(lVar5 + 0x400) = *(uint64_t *)(lVar5 + 0x400) | 1L << ((int64_t)param_2 & 0x3fU);
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    uVar1 = *(int32_t *)(param_1 + 0x10);
    iVar4 = _Mtx_lock(0x180c95528);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    cVar3 = SystemBufferProcessor(0x180c95578,0,&system_param1_ptr);
    if (((cVar3 != '\0') && (cVar3 = SystemBufferProcessor(0x180c95578,9,&memory_allocator_3472_ptr), cVar3 != '\0')) &&
       (cVar3 = SystemBufferProcessor(0x180c95578,uVar1,&memory_allocator_3424_ptr), cVar3 != '\0')) {
      SystemBufferProcessor(0x180c95578,(int)param_2,&memory_allocator_3040_ptr);
    }
    render_system_memory = render_system_memory & 0xffffffff00000000;
    iVar4 = (int)(render_system_memory - render_system_memory >> 3);
    lVar5 = render_system_memory;
    if (0 < iVar4) {
      do {
        lVar2 = *(int64_t *)(lVar5 + lVar6 * 8);
        if ((lVar2 != 0) && (*(char *)(*(int64_t *)(lVar2 + 0x58f8) + 0x1c) != '\0')) {
          NetworkSystem_SecurityManager(lVar2,0x180c95578);
          lVar5 = render_system_memory;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar4);
    }
    if (render_system_memory != 0) {
      SystemCore_DatabaseHandler(render_system_memory,0x180c95578);
    }
    render_system_memory = 0;
// WARNING: Subroutine does not return
    memset(render_system_memory,0,(int64_t)(render_system_memory >> 3));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_525cb0(int64_t param_1,float param_2)
void function_525cb0(int64_t param_1,float param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  char cVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  uVar7 = 0;
  do {
    cVar6 = (char)uVar7;
    if ((*(uint64_t *)(*(int64_t *)(param_1 + 0x9a0) + 0x400) >> (uVar7 & 0x3f) & 1) != 0) {
      plVar8 = (int64_t *)((int64_t)cVar6 * 0x10 + *(int64_t *)(param_1 + 0x9a0));
      if (*(float *)(plVar8 + 1) <= 5.0) {
        if (*plVar8 == 0) {
          function_2ac200(uVar7,&plStackX_18,&processed_var_6872_ptr);
          if (plStackX_18 != (int64_t *)0x0) {
            uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x168,8,3);
            plVar4 = (int64_t *)function_2ac390(uVar3);
            if (plVar4 != (int64_t *)0x0) {
              (**(code **)(*plVar4 + 0x28))(plVar4);
            }
            plStackX_20 = plStackX_18;
            if (plStackX_18 != (int64_t *)0x0) {
              (**(code **)(*plStackX_18 + 0x28))();
            }
            function_2adab0(plVar4,&plStackX_20);
            uVar5 = *(uint64_t *)(*(int64_t *)(param_1 + 0x9a0) + 0x400);
            uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
            uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
            *(bool *)((int64_t)plVar4 + 0x15a) =
                 (char)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ==
                 '\x01';
            lVar1 = *(int64_t *)(param_1 + 0x6d8);
            function_2fbf30(*(uint64_t *)(*(int64_t *)(lVar1 + 0x8a8) + 0x260),uVar7,plVar4,
                          plVar4 + 10);
            function_544ac0(lVar1);
            (**(code **)(*plVar4 + 0x28))(plVar4);
            plVar2 = (int64_t *)*plVar8;
            *plVar8 = (int64_t)plVar4;
            if (plVar2 != (int64_t *)0x0) {
              (**(code **)(*plVar2 + 0x38))();
            }
            (**(code **)(*plVar4 + 0x38))(plVar4);
          }
          if (plStackX_18 != (int64_t *)0x0) {
            (**(code **)(*plStackX_18 + 0x38))();
          }
        }
        else {
          *(float *)(plVar8 + 1) = *(float *)(plVar8 + 1) + param_2;
        }
      }
      else {
        lVar1 = *(int64_t *)(param_1 + 0x6d8);
        function_3004f0(*(uint64_t *)(*(int64_t *)(lVar1 + 0x8a8) + 0x260),uVar7,*plVar8);
        function_544ac0(lVar1);
        *(int32_t *)(plVar8 + 1) = 0xbf800000;
        *(int8_t *)(*plVar8 + 0x159) = 0;
        plVar4 = (int64_t *)*plVar8;
        *plVar8 = 0;
        if (plVar4 != (int64_t *)0x0) {
          (**(code **)(*plVar4 + 0x38))();
        }
        *(uint64_t *)(*(int64_t *)(param_1 + 0x9a0) + 0x400) =
             *(uint64_t *)(*(int64_t *)(param_1 + 0x9a0) + 0x400) &
             ~(1L << ((int64_t)cVar6 & 0x3fU));
        plVar8 = *(int64_t **)(param_1 + 0x9a0);
        if (plVar8[0x80] == 0) {
          if (plVar8 == (int64_t *)0x0) {
            *(uint64_t *)(param_1 + 0x9a0) = 0;
            return;
          }
          plStackX_18 = plVar8;
          SystemDataValidator(plVar8,0x10,0x40,function_534590,plVar4);
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar8);
        }
      }
    }
    uVar7 = (uint64_t)(byte)(cVar6 + 1U);
    if ('?' < (char)(cVar6 + 1U)) {
      return;
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address