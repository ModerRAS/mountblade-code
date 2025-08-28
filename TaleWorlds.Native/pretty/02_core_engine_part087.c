n//  的语义化别名
#define SystemCore_LoggingSystem
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathInterpolationCalculator */
#define MathInterpolationCalculator MathInterpolationCalculator
// 02_core_engine_part087.c - 3 个函数
// 函数: void GenericFunction_180112c2e(void)
void GenericFunction_180112c2e(void)
{
  int32_t *puVar1;
  int32_t uVar2;
  float fVar3;
  byte bVar4;
  uint64_t uVar5;
  char *pcVar6;
  bool bVar7;
  byte *pbVar8;
  char cVar9;
  int32_t uVar10;
  int32_t uVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint uVar15;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  char *pcVar16;
  int64_t unaff_RDI;
  int64_t unaff_R13;
  int unaff_R14D;
  uint unaff_R15D;
  float fVar17;
  float fVar18;
  float unaff_XMM6_Da;
  float fVar19;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  uint64_t local_var_20;
  uint64_t uVar20;
  uint64_t uVar21;
  int32_t uVar22;
  char cStack0000000000000040;
  char cStack0000000000000041;
  float fStack0000000000000044;
  float local_var_48;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  int32_t local_buffer_60;
  float fStack0000000000000064;
  float fStack0000000000000068;
  int32_t local_buffer_6c;
  float local_buffer_70;
  float fStack0000000000000074;
  float local_buffer_78;
  int32_t local_buffer_7c;
  uVar20 = local_var_20 & 0xffffffff00000000;
  cStack0000000000000041 =
       SystemCore_Formatter(unaff_RBP + -0x80,unaff_R14D,&local_buffer_00000040,(int64_t)&local_buffer_00000040 + 1,
                     uVar20);
  uVar22 = (int32_t)(uVar20 >> 0x20);
  if ((*(int *)(unaff_RBX + 0x1bc0) < *(int *)(unaff_RBX + 0x1bb0)) &&
     (*(int *)(*(int64_t *)(unaff_RBX + 0x1bb8) + (int64_t)*(int *)(unaff_RBX + 0x1bc0) * 0x30) ==
      unaff_R14D)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  fVar18 = *(float *)(unaff_RBP + -0x78);
  uVar2 = *(int32_t *)(unaff_RBP + -0x74);
  uVar14 = *(uint64_t *)(unaff_RBP + -0x78);
  lVar12 = 0x110;
  if (cStack0000000000000040 != '\0') {
    lVar12 = 0x120;
  }
  fVar3 = *(float *)(unaff_RBP + -0x80);
  fVar17 = *(float *)(unaff_RBP + -0x7c);
  uVar5 = *(uint64_t *)(unaff_RBP + -0x80);
  fVar19 = fVar18 - unaff_XMM6_Da;
  puVar1 = (int32_t *)(lVar12 + 0x1628 + unaff_RBX);
  local_buffer_58 = *puVar1;
  local_buffer_5c = puVar1[1];
  local_buffer_60 = puVar1[2];
  fStack0000000000000064 = (float)puVar1[3] * *(float *)(unaff_RBX + 0x1628);
  local_buffer_70 = fVar3;
  fStack0000000000000074 = fVar17;
  local_buffer_78 = fVar19;
  local_buffer_7c = uVar2;
  uVar10 = SystemFunction_000180121e20(&local_buffer_00000058);
  _local_buffer_58 = CONCAT44(local_buffer_5c,uVar10);
  if (unaff_R14D == *(int *)(unaff_RBX + 0x1ca0)) {
    UtilitiesSystem_Validator(unaff_RBP + -0x80,1);
    unaff_RBX = SYSTEM_DATA_MANAGER_A;
    uVar10 = local_buffer_58;
  }
  if (unaff_ESI == 0) {
    uVar21 = CONCAT44(uVar22,*(int32_t *)(unaff_RDI + 0x1664));
    _local_buffer_58 = CONCAT44(uVar2,fVar19);
    MathInterpolationCalculator0(*(uint64_t *)(unaff_R13 + 0x2e8),unaff_RBP + -0x80,&local_buffer_00000058,uVar10,
                  uVar21);
    uVar22 = (int32_t)((uint64_t)uVar21 >> 0x20);
    unaff_RBX = SYSTEM_DATA_MANAGER_A;
  }
  if (fStack0000000000000044 == 0.0) {
    uVar10 = *(int32_t *)(unaff_RDI + 0x1664);
    if ((bVar7) || (lVar12 = 0x1f0, cStack0000000000000040 != '\0')) {
      lVar12 = 0x200;
    }
    puVar13 = (uint64_t *)(unaff_RBX + 0x1628 + lVar12);
    _local_buffer_58 = *puVar13;
    local_buffer_60 = *(int32_t *)(puVar13 + 1);
    fStack0000000000000064 = *(float *)((int64_t)puVar13 + 0xc) * *(float *)(unaff_RBX + 0x1628);
    fStack0000000000000044 = fVar19;
    local_var_48 = fVar17;
    uVar11 = SystemFunction_000180121e20(&local_buffer_00000058);
    MathInterpolationCalculator0(*(uint64_t *)(unaff_R13 + 0x2e8),(int64_t)&local_buffer_00000040 + 4,
                  unaff_RBP + -0x78,uVar11,CONCAT44(uVar22,uVar10));
    GenericFunction_180122c80(CONCAT44(fVar17 + *(float *)(unaff_RDI + 0x1660),
                           fVar19 + *(float *)(unaff_RDI + 0x1660)),3,0x3f800000);
  }
  uVar22 = *(int32_t *)(unaff_RDI + 0x1664);
  *(uint64_t *)(unaff_RBP + -0x78) = uVar14;
  *(uint64_t *)(unaff_RBP + -0x80) = uVar5;
  GenericFunction_180122b10(uVar5,uVar14,uVar22);
  lVar12 = SYSTEM_DATA_MANAGER_A;
  pcVar6 = (char *)CONCAT44(local_buffer_6c,fStack0000000000000068);
  if ((pcVar6 != (char *)0x0) && (unaff_ESI == 0)) {
    _local_buffer_58 = 0;
    fStack0000000000000044 = fVar3 + *(float *)(unaff_RDI + 0x165c);
    local_var_48 = fVar17 + *(float *)(unaff_RDI + 0x1660);
    pcVar16 = pcVar6;
    if (pcVar6 != (char *)0xffffffffffffffff) {
      while (*pcVar16 != '\0') {
        if (((*pcVar16 == '#') && (pcVar16[1] == '#')) ||
           (pcVar16 = pcVar16 + 1, pcVar16 == (char *)0xffffffffffffffff)) break;
      }
    }
    if (((float)(int)pcVar16 != fStack0000000000000068) &&
       (UtilitiesSystem_DataValidator(*(uint64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x2e8),
                      (int64_t)&local_buffer_00000040 + 4,&local_buffer_00000078,pcVar6,pcVar16),
       *(char *)(lVar12 + 0x2e38) != '\0')) {
      SystemCore_ThreadController((int64_t)&local_buffer_00000040 + 4,
                    CONCAT44(local_buffer_6c,fStack0000000000000068),pcVar16);
    }
  }
  if (unaff_XMM9_Da < unaff_XMM12_Da) {
    SystemCore_ManageMemory(CONCAT44(fVar17 + *(float *)(unaff_RDI + 0x1660),
                           fVar18 + *(float *)(unaff_RDI + 0x1674)),
                  *(uint64_t *)(unaff_RBP + -0x70),0,1);
  }
  if ((cStack0000000000000041 == '\0') && (*(int *)(unaff_RDI + 0x1ca4) != unaff_R14D)) {
    if (!bVar7) goto LAB_180112f8f;
  }
  else if (!bVar7) {
    if (*(int *)(unaff_R13 + 0x16c) == 0) {
      *(int *)(unaff_R13 + 0x3c8) = unaff_R14D;
    }
    GenericFunction_18012eb50(unaff_R14D);
  }
  if (fStack0000000000000050 == 0.0) {
    uVar15 = unaff_R15D | 4;
    if ((unaff_R15D & 0x1e) != 0) {
      uVar15 = unaff_R15D;
    }
    unaff_R15D = uVar15;
    if ((unaff_R15D & 4) == 0) {
      if ((unaff_R15D & 2) == 0) {
        uVar14 = 0xffffffff;
        if ((unaff_R15D & 8) != 0) {
          uVar14 = 0x14;
        }
      }
      else {
        uVar14 = 4;
      }
    }
    else {
      uVar14 = 8;
    }
    local_buffer_7c = SystemFunction_000180112960(uVar14);
    lVar12 = SYSTEM_DATA_MANAGER_A;
    *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1be0) = 1;
    *(uint64_t *)(lVar12 + 0x1c28) = 0;
    *(uint64_t *)(lVar12 + 0x1c30) = 0;
    fStack0000000000000074 = 0.0;
    local_buffer_78 = 3.4028235e+38;
    *(float *)(lVar12 + 0x1c18) = unaff_XMM10_Da;
    *(int32_t *)(lVar12 + 0x1c1c) = 0;
    *(int32_t *)(lVar12 + 0x1c20) = 0x7f7fffff;
    *(int32_t *)(lVar12 + 0x1c24) = local_buffer_7c;
    local_buffer_70 = unaff_XMM10_Da;
  }
  else {
    fVar18 = *(float *)(unaff_RDI + 0x1c18);
    if (*(float *)(unaff_RDI + 0x1c18) <= unaff_XMM10_Da) {
      fVar18 = unaff_XMM10_Da;
    }
    *(float *)(unaff_RDI + 0x1be0) = fStack0000000000000050;
    *(float *)(unaff_RDI + 0x1c18) = fVar18;
  }
  SystemCore_LoggingSystem(unaff_RBP + -0x68,0x10,&rendering_buffer_2184_ptr,*(int32_t *)(unaff_RDI + 0x1bc0));
  uVar15 = 0xffffffff;
  bVar4 = *(byte *)(unaff_RBP + -0x68);
  pbVar8 = (byte *)(unaff_RBP + -0x67);
  while (bVar4 != 0) {
    if (((bVar4 == 0x23) && (*pbVar8 == 0x23)) && (pbVar8[1] == 0x23)) {
      uVar15 = 0xffffffff;
    }
    uVar15 = *(uint *)(&processed_var_6320_ptr + ((uint64_t)(uVar15 & 0xff) ^ (uint64_t)bVar4) * 4) ^
             uVar15 >> 8;
    bVar4 = *pbVar8;
    pbVar8 = pbVar8 + 1;
  }
  lVar12 = GenericFunction_180121fa0(SYSTEM_DATA_MANAGER_A + 0x1ae0,~uVar15);
  if ((lVar12 != 0) && (*(char *)(lVar12 + 0xb0) != '\0')) {
    if (*(char *)(lVar12 + 0xb2) == '\0') {
      if (((*(char *)(lVar12 + 0xb6) == '\0') || (*(int *)(lVar12 + 0xdc) != 0)) ||
         (*(int *)(lVar12 + 0xd8) < 1)) {
        fVar18 = *(float *)(lVar12 + 0x68);
        if (fVar18 == unaff_XMM9_Da) {
          fVar18 = (*(float *)(lVar12 + 0x118) - *(float *)(lVar12 + 0x40)) +
                   *(float *)(lVar12 + 0x8c);
        }
        fVar17 = *(float *)(lVar12 + 0x6c);
        if (fVar17 == unaff_XMM9_Da) {
          fVar17 = (*(float *)(lVar12 + 0x11c) - *(float *)(lVar12 + 0x44)) +
                   *(float *)(lVar12 + 0x90);
        }
        fStack0000000000000050 = (float)(int)fVar18 + *(float *)(lVar12 + 0x70);
        fStack0000000000000054 = (float)(int)fVar17 + *(float *)(lVar12 + 0x74);
      }
      else {
        fStack0000000000000050 = *(float *)(lVar12 + 0x60);
        fStack0000000000000054 = *(float *)(lVar12 + 100);
      }
    }
    else {
      fStack0000000000000050 = *(float *)(lVar12 + 0x60);
      fStack0000000000000054 = *(float *)(lVar12 + 100);
    }
    if ((*(uint *)(lVar12 + 0xc) & 0x2000000) == 0) {
      puVar13 = (uint64_t *)GenericFunction_180129220((int64_t)&local_buffer_00000040 + 4,lVar12,&local_buffer_00000050);
    }
    else {
      fStack0000000000000044 = fStack0000000000000050;
      puVar13 = (uint64_t *)((int64_t)&local_buffer_00000040 + 4);
      local_var_48 = fStack0000000000000054;
    }
    SystemCore_MemoryManager(unaff_RBP + -0x70,lVar12,*puVar13);
    if ((unaff_R15D & 1) != 0) {
      *(int32_t *)(lVar12 + 0xd4) = 0;
    }
    GenericFunction_18012f580(&local_buffer_00000070,lVar12);
    fStack0000000000000068 = fVar3;
    local_buffer_6c = uVar2;
    GenericFunction_18012f260(&local_buffer_00000050,&local_buffer_00000068,unaff_RBP + -0x70,lVar12 + 0xd4,&local_buffer_00000070
                 );
    lVar12 = SYSTEM_DATA_MANAGER_A;
    *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bf4) =
         CONCAT44(fStack0000000000000054,fStack0000000000000050);
    *(uint64_t *)(lVar12 + 0x1bfc) = 0;
    *(int32_t *)(lVar12 + 0x1bd0) = 1;
    *(int8_t *)(lVar12 + 0x1c14) = 1;
  }
  fStack0000000000000068 = *(float *)(unaff_RDI + 0x165c);
  local_buffer_6c = *(int32_t *)(unaff_RDI + 0x1630);
  GenericFunction_18012da40(1,&local_buffer_00000068);
  cVar9 = CoreSystem_Validator(unaff_RBP + -0x68,0,0x4000143);
  GenericFunction_18012dad0(1);
  if (cVar9 == '\0') {
    GenericFunction_18012f0c0();
  }
LAB_180112f8f:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x58) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180112e81(uint64_t param_1,char *param_2)
void GenericFunction_180112e81(uint64_t param_1,char *param_2)
{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t unaff_RBP;
  int unaff_ESI;
  char *pcVar8;
  int64_t unaff_RDI;
  char unaff_R12B;
  int64_t unaff_R13;
  int unaff_R14D;
  uint unaff_R15D;
  float fVar9;
  float fVar10;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  uint64_t local_var_40;
  float local_var_48;
  float fStack0000000000000050;
  float fStack0000000000000054;
  uint64_t local_buffer_58;
  int32_t local_buffer_68;
  int32_t local_buffer_6c;
  float fStack0000000000000070;
  int32_t local_buffer_74;
  int32_t local_buffer_78;
  int32_t local_buffer_7c;
  lVar4 = SYSTEM_DATA_MANAGER_A;
  if (unaff_ESI == 0) {
    local_buffer_58 = 0;
    local_var_40._4_4_ = unaff_XMM13_Da + *(float *)(unaff_RDI + 0x165c);
    local_var_48 = unaff_XMM7_Da + *(float *)(unaff_RDI + 0x1660);
    pcVar8 = param_2;
    if (param_2 != (char *)0xffffffffffffffff) {
      while (*pcVar8 != '\0') {
        if (((*pcVar8 == '#') && (pcVar8[1] == '#')) ||
           (pcVar8 = pcVar8 + 1, pcVar8 == (char *)0xffffffffffffffff)) break;
      }
    }
    if (((int)pcVar8 != (int)param_2) &&
       (UtilitiesSystem_DataValidator(*(uint64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x2e8),
                      (int64_t)&local_buffer_00000040 + 4,&local_buffer_00000078,param_2,pcVar8),
       *(char *)(lVar4 + 0x2e38) != '\0')) {
      SystemCore_ThreadController((int64_t)&local_buffer_00000040 + 4,
                    CONCAT44(local_buffer_6c,local_buffer_68),pcVar8);
    }
  }
  if (unaff_XMM9_Da < unaff_XMM12_Da) {
    SystemCore_ManageMemory(CONCAT44(unaff_XMM7_Da + *(float *)(unaff_RDI + 0x1660),
                           unaff_XMM11_Da + *(float *)(unaff_RDI + 0x1674)),
                  *(uint64_t *)(unaff_RBP + -0x70),0,1);
  }
  if ((local_var_40._1_1_ == '\0') && (*(int *)(unaff_RDI + 0x1ca4) != unaff_R14D)) {
    if (unaff_R12B == '\0') goto LAB_180112f8f;
  }
  else if (unaff_R12B == '\0') {
    if (*(int *)(unaff_R13 + 0x16c) == 0) {
      *(int *)(unaff_R13 + 0x3c8) = unaff_R14D;
    }
    GenericFunction_18012eb50(unaff_R14D);
  }
  if (fStack0000000000000050 == 0.0) {
    uVar7 = unaff_R15D | 4;
    if ((unaff_R15D & 0x1e) != 0) {
      uVar7 = unaff_R15D;
    }
    unaff_R15D = uVar7;
    if ((unaff_R15D & 4) == 0) {
      if ((unaff_R15D & 2) == 0) {
        uVar6 = 0xffffffff;
        if ((unaff_R15D & 8) != 0) {
          uVar6 = 0x14;
        }
      }
      else {
        uVar6 = 4;
      }
    }
    else {
      uVar6 = 8;
    }
    local_buffer_7c = SystemFunction_000180112960(uVar6);
    lVar4 = SYSTEM_DATA_MANAGER_A;
    *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1be0) = 1;
    *(uint64_t *)(lVar4 + 0x1c28) = 0;
    *(uint64_t *)(lVar4 + 0x1c30) = 0;
    local_buffer_74 = 0;
    local_buffer_78 = 0x7f7fffff;
    *(float *)(lVar4 + 0x1c18) = unaff_XMM10_Da;
    *(int32_t *)(lVar4 + 0x1c1c) = 0;
    *(int32_t *)(lVar4 + 0x1c20) = 0x7f7fffff;
    *(int32_t *)(lVar4 + 0x1c24) = local_buffer_7c;
    fStack0000000000000070 = unaff_XMM10_Da;
  }
  else {
    fVar10 = *(float *)(unaff_RDI + 0x1c18);
    if (*(float *)(unaff_RDI + 0x1c18) <= unaff_XMM10_Da) {
      fVar10 = unaff_XMM10_Da;
    }
    *(float *)(unaff_RDI + 0x1be0) = fStack0000000000000050;
    *(float *)(unaff_RDI + 0x1c18) = fVar10;
  }
  SystemCore_LoggingSystem(unaff_RBP + -0x68,0x10,&rendering_buffer_2184_ptr,*(int32_t *)(unaff_RDI + 0x1bc0));
  uVar7 = 0xffffffff;
  bVar1 = *(byte *)(unaff_RBP + -0x68);
  pbVar2 = (byte *)(unaff_RBP + -0x67);
  while (bVar1 != 0) {
    if (((bVar1 == 0x23) && (*pbVar2 == 0x23)) && (pbVar2[1] == 0x23)) {
      uVar7 = 0xffffffff;
    }
    uVar7 = *(uint *)(&processed_var_6320_ptr + ((uint64_t)(uVar7 & 0xff) ^ (uint64_t)bVar1) * 4) ^
            uVar7 >> 8;
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  }
  lVar4 = GenericFunction_180121fa0(SYSTEM_DATA_MANAGER_A + 0x1ae0,~uVar7);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xb0) != '\0')) {
    if (*(char *)(lVar4 + 0xb2) == '\0') {
      if (((*(char *)(lVar4 + 0xb6) == '\0') || (*(int *)(lVar4 + 0xdc) != 0)) ||
         (*(int *)(lVar4 + 0xd8) < 1)) {
        fVar10 = *(float *)(lVar4 + 0x68);
        if (fVar10 == unaff_XMM9_Da) {
          fVar10 = (*(float *)(lVar4 + 0x118) - *(float *)(lVar4 + 0x40)) + *(float *)(lVar4 + 0x8c)
          ;
        }
        fVar9 = *(float *)(lVar4 + 0x6c);
        if (fVar9 == unaff_XMM9_Da) {
          fVar9 = (*(float *)(lVar4 + 0x11c) - *(float *)(lVar4 + 0x44)) + *(float *)(lVar4 + 0x90);
        }
        fStack0000000000000050 = (float)(int)fVar10 + *(float *)(lVar4 + 0x70);
        fStack0000000000000054 = (float)(int)fVar9 + *(float *)(lVar4 + 0x74);
      }
      else {
        fStack0000000000000050 = *(float *)(lVar4 + 0x60);
        fStack0000000000000054 = *(float *)(lVar4 + 100);
      }
    }
    else {
      fStack0000000000000050 = *(float *)(lVar4 + 0x60);
      fStack0000000000000054 = *(float *)(lVar4 + 100);
    }
    if ((*(uint *)(lVar4 + 0xc) & 0x2000000) == 0) {
      puVar5 = (uint64_t *)GenericFunction_180129220((int64_t)&local_buffer_00000040 + 4,lVar4,&local_buffer_00000050);
    }
    else {
      local_var_40._4_4_ = fStack0000000000000050;
      puVar5 = (uint64_t *)((int64_t)&local_buffer_00000040 + 4);
      local_var_48 = fStack0000000000000054;
    }
    SystemCore_MemoryManager(unaff_RBP + -0x70,lVar4,*puVar5);
    if ((unaff_R15D & 1) != 0) {
      *(int32_t *)(lVar4 + 0xd4) = 0;
    }
    GenericFunction_18012f580(&local_buffer_00000070,lVar4);
    GenericFunction_18012f260(&local_buffer_00000050,&local_buffer_00000068,unaff_RBP + -0x70,lVar4 + 0xd4,&local_buffer_00000070)
    ;
    lVar4 = SYSTEM_DATA_MANAGER_A;
    *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bf4) =
         CONCAT44(fStack0000000000000054,fStack0000000000000050);
    *(uint64_t *)(lVar4 + 0x1bfc) = 0;
    *(int32_t *)(lVar4 + 0x1bd0) = 1;
    *(int8_t *)(lVar4 + 0x1c14) = 1;
  }
  local_buffer_68 = *(int32_t *)(unaff_RDI + 0x165c);
  local_buffer_6c = *(int32_t *)(unaff_RDI + 0x1630);
  GenericFunction_18012da40(1,&local_buffer_00000068);
  cVar3 = CoreSystem_Validator(unaff_RBP + -0x68,0,0x4000143);
  GenericFunction_18012dad0(1);
  if (cVar3 == '\0') {
    GenericFunction_18012f0c0();
  }
LAB_180112f8f:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x58) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180112f7f(void)
void GenericFunction_180112f7f(void)
{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  char unaff_R12B;
  int64_t unaff_R13;
  int unaff_R14D;
  uint unaff_R15D;
  float fVar8;
  float fVar9;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  uint64_t local_var_40;
  float local_var_48;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int32_t local_buffer_68;
  int32_t local_buffer_6c;
  float fStack0000000000000070;
  int32_t local_buffer_74;
  int32_t local_buffer_78;
  int32_t local_buffer_7c;
  if (*(int *)(unaff_RDI + 0x1ca4) == unaff_R14D) {
    if (unaff_R12B == '\0') {
      if (*(int *)(unaff_R13 + 0x16c) == 0) {
        *(int *)(unaff_R13 + 0x3c8) = unaff_R14D;
      }
      GenericFunction_18012eb50(unaff_R14D);
    }
  }
  else if (unaff_R12B == '\0') goto LAB_180112f8f;
  if (fStack0000000000000050 == 0.0) {
    uVar7 = unaff_R15D | 4;
    if ((unaff_R15D & 0x1e) != 0) {
      uVar7 = unaff_R15D;
    }
    unaff_R15D = uVar7;
    if ((unaff_R15D & 4) == 0) {
      if ((unaff_R15D & 2) == 0) {
        uVar6 = 0xffffffff;
        if ((unaff_R15D & 8) != 0) {
          uVar6 = 0x14;
        }
      }
      else {
        uVar6 = 4;
      }
    }
    else {
      uVar6 = 8;
    }
    local_buffer_7c = SystemFunction_000180112960(uVar6);
    lVar4 = SYSTEM_DATA_MANAGER_A;
    *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1be0) = 1;
    *(uint64_t *)(lVar4 + 0x1c28) = 0;
    *(uint64_t *)(lVar4 + 0x1c30) = 0;
    local_buffer_74 = 0;
    local_buffer_78 = 0x7f7fffff;
    *(float *)(lVar4 + 0x1c18) = unaff_XMM10_Da;
    *(int32_t *)(lVar4 + 0x1c1c) = 0;
    *(int32_t *)(lVar4 + 0x1c20) = 0x7f7fffff;
    *(int32_t *)(lVar4 + 0x1c24) = local_buffer_7c;
    fStack0000000000000070 = unaff_XMM10_Da;
  }
  else {
    fVar9 = *(float *)(unaff_RDI + 0x1c18);
    if (*(float *)(unaff_RDI + 0x1c18) <= unaff_XMM10_Da) {
      fVar9 = unaff_XMM10_Da;
    }
    *(float *)(unaff_RDI + 0x1be0) = fStack0000000000000050;
    *(float *)(unaff_RDI + 0x1c18) = fVar9;
  }
  SystemCore_LoggingSystem(unaff_RBP + -0x68,0x10,&rendering_buffer_2184_ptr,*(int32_t *)(unaff_RDI + 0x1bc0));
  uVar7 = 0xffffffff;
  bVar1 = *(byte *)(unaff_RBP + -0x68);
  pbVar2 = (byte *)(unaff_RBP + -0x67);
  while (bVar1 != 0) {
    if (((bVar1 == 0x23) && (*pbVar2 == 0x23)) && (pbVar2[1] == 0x23)) {
      uVar7 = 0xffffffff;
    }
    uVar7 = *(uint *)(&processed_var_6320_ptr + ((uint64_t)(uVar7 & 0xff) ^ (uint64_t)bVar1) * 4) ^
            uVar7 >> 8;
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  }
  lVar4 = GenericFunction_180121fa0(SYSTEM_DATA_MANAGER_A + 0x1ae0,~uVar7);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xb0) != '\0')) {
    if (*(char *)(lVar4 + 0xb2) == '\0') {
      if (((*(char *)(lVar4 + 0xb6) == '\0') || (*(int *)(lVar4 + 0xdc) != 0)) ||
         (*(int *)(lVar4 + 0xd8) < 1)) {
        fVar9 = *(float *)(lVar4 + 0x68);
        if (fVar9 == unaff_XMM9_Da) {
          fVar9 = (*(float *)(lVar4 + 0x118) - *(float *)(lVar4 + 0x40)) + *(float *)(lVar4 + 0x8c);
        }
        fVar8 = *(float *)(lVar4 + 0x6c);
        if (fVar8 == unaff_XMM9_Da) {
          fVar8 = (*(float *)(lVar4 + 0x11c) - *(float *)(lVar4 + 0x44)) + *(float *)(lVar4 + 0x90);
        }
        fStack0000000000000050 = (float)(int)fVar9 + *(float *)(lVar4 + 0x70);
        fStack0000000000000054 = (float)(int)fVar8 + *(float *)(lVar4 + 0x74);
      }
      else {
        fStack0000000000000050 = *(float *)(lVar4 + 0x60);
        fStack0000000000000054 = *(float *)(lVar4 + 100);
      }
    }
    else {
      fStack0000000000000050 = *(float *)(lVar4 + 0x60);
      fStack0000000000000054 = *(float *)(lVar4 + 100);
    }
    if ((*(uint *)(lVar4 + 0xc) & 0x2000000) == 0) {
      puVar5 = (uint64_t *)GenericFunction_180129220((int64_t)&local_buffer_00000040 + 4,lVar4,&local_buffer_00000050);
    }
    else {
      local_var_40._4_4_ = fStack0000000000000050;
      puVar5 = (uint64_t *)((int64_t)&local_buffer_00000040 + 4);
      local_var_48 = fStack0000000000000054;
    }
    SystemCore_MemoryManager(unaff_RBP + -0x70,lVar4,*puVar5);
    if ((unaff_R15D & 1) != 0) {
      *(int32_t *)(lVar4 + 0xd4) = 0;
    }
    GenericFunction_18012f580(&local_buffer_00000070,lVar4);
    GenericFunction_18012f260(&local_buffer_00000050,&local_buffer_00000068,unaff_RBP + -0x70,lVar4 + 0xd4,&local_buffer_00000070)
    ;
    lVar4 = SYSTEM_DATA_MANAGER_A;
    *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1bf4) =
         CONCAT44(fStack0000000000000054,fStack0000000000000050);
    *(uint64_t *)(lVar4 + 0x1bfc) = 0;
    *(int32_t *)(lVar4 + 0x1bd0) = 1;
    *(int8_t *)(lVar4 + 0x1c14) = 1;
  }
  local_buffer_68 = *(int32_t *)(unaff_RDI + 0x165c);
  local_buffer_6c = *(int32_t *)(unaff_RDI + 0x1630);
  GenericFunction_18012da40(1,&local_buffer_00000068);
  cVar3 = CoreSystem_Validator(unaff_RBP + -0x68,0,0x4000143);
  GenericFunction_18012dad0(1);
  if (cVar3 == '\0') {
    GenericFunction_18012f0c0();
  }
LAB_180112f8f:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x58) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t
GenericFunction_180113380(uint64_t param_1,int *param_2,uint64_t param_3,uint64_t param_4,int param_5)
{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint64_t uVar4;
  void *puVar5;
  uint64_t uVar6;
  int iVar7;
  uint64_t uVar8;
  void *pstack_special_x_10;
  uint64_t astack_special_x_18 [2];
  uint64_t stack_array_48 [2];
  uVar6 = 0;
  iVar2 = *param_2;
  astack_special_x_18[0] = 0;
  if ((-1 < iVar2) && (iVar2 < param_5)) {
    SystemFunction_000180113330(param_4,iVar2,astack_special_x_18);
  }
  uVar4 = GenericFunction_1801129b0(param_1,astack_special_x_18[0],0);
  if ((char)uVar4 != '\0') {
    uVar4 = 0;
    if (0 < param_5) {
      stack_array_48[0] = 0;
      uVar8 = uVar6;
      do {
        GenericFunction_18012e250(uVar6);
        iVar2 = *param_2;
        iVar7 = (int)uVar8;
        cVar3 = SystemFunction_000180113330(param_4,uVar8,&pstack_special_x_10);
        puVar5 = &rendering_buffer_2168_ptr;
        if (cVar3 != '\0') {
          puVar5 = pstack_special_x_10;
        }
        pstack_special_x_10 = puVar5;
        cVar3 = GenericFunction_180119960(puVar5,iVar7 == iVar2,0,stack_array_48);
        if (cVar3 != '\0') {
          uVar4 = 1;
          *param_2 = iVar7;
        }
        if (iVar7 == iVar2) {
          GenericFunction_18012e060();
        }
        uVar8 = (uint64_t)(iVar7 + 1U);
        uVar6 = uVar6 + 1;
        piVar1 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
        *piVar1 = *piVar1 + -1;
      } while ((int)(iVar7 + 1U) < param_5);
    }
    GenericFunction_18012f0c0();
    return uVar4;
  }
  return uVar4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t GenericFunction_1801133fb(void)
{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *puVar4;
  int iVar5;
  uint64_t unaff_RDI;
  uint64_t uVar6;
  int8_t unaff_R12B;
  int *unaff_R14;
  int unaff_R15D;
  void *local_buffer_78;
  uVar6 = unaff_RDI;
  do {
    GenericFunction_18012e250(unaff_RDI);
    iVar2 = *unaff_R14;
    iVar5 = (int)uVar6;
    cVar3 = SystemFunction_000180113330();
    puVar4 = &rendering_buffer_2168_ptr;
    if (cVar3 != '\0') {
      puVar4 = local_buffer_78;
    }
    cVar3 = GenericFunction_180119960(puVar4,iVar5 == iVar2,0,&local_buffer_00000020);
    if (cVar3 != '\0') {
      unaff_R12B = 1;
      *unaff_R14 = iVar5;
    }
    if (iVar5 == iVar2) {
      GenericFunction_18012e060();
    }
    uVar6 = (uint64_t)(iVar5 + 1U);
    unaff_RDI = unaff_RDI + 1;
    piVar1 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
    *piVar1 = *piVar1 + -1;
    local_buffer_78 = puVar4;
  } while ((int)(iVar5 + 1U) < unaff_R15D);
  GenericFunction_18012f0c0();
  return unaff_R12B;
}
int8_t GenericFunction_18011348e(void)
{
  int8_t unaff_R12B;
  GenericFunction_18012f0c0();
  return unaff_R12B;
}
uint GenericFunction_1801134b0(byte *param_1,uint64_t param_2,int param_3,uint64_t param_4)
{
  uint uVar1;
  byte bVar2;
  int8_t stack_array_48 [32];
  for (; (bVar2 = *param_1, bVar2 == 0x20 || (bVar2 == 9)); param_1 = param_1 + 1) {
  }
  uVar1 = (uint)bVar2;
  if (((uVar1 - 0x2a & 0xfa) == 0) && (bVar2 != 0x2e)) {
    do {
      do {
        bVar2 = param_1[1];
        param_1 = param_1 + 1;
      } while (bVar2 == 0x20);
    } while (bVar2 == 9);
  }
  if (bVar2 == 0) {
    return uVar1 - 0x2a & 0xffffff00;
  }
// WARNING: Subroutine does not return
  memcpy(stack_array_48,param_4,*(uint64_t *)(&processed_var_5904_ptr + (int64_t)param_3 * 0x18));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address