/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
// 99_part_11_part015.c - 11 个函数
// 函数: void UtilitiesSystem_e93c0(int64_t param_1,int64_t *param_2)
void UtilitiesSystem_e93c0(int64_t param_1,int64_t *param_2)
{
  if (*(int64_t *)(param_1 + 0x68) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))(param_2,*(uint64_t *)(param_1 + 0x68),0x80);
  }
// WARNING: Could not recover jumptable at 0x0001806e940c. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x20))(param_2,*(uint64_t *)(param_1 + 0x20));
  return;
}
// 函数: void UtilitiesSystem_e9470(int64_t param_1,uint64_t param_2)
void UtilitiesSystem_e9470(int64_t param_1,uint64_t param_2)
{
  uint64_t uVar1;
  uVar1 = UtilitiesSystem_f59e0(param_2,*(uint64_t *)(param_1 + 0x60),param_1 + 0x18,0x180be0be0);
  *(uint64_t *)(param_1 + 0x60) = uVar1;
  return;
}
uint * UtilitiesSystem_e94b0(int64_t *param_1,int64_t param_2)
{
  uint uVar1;
  int64_t lVar2;
  uint *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint *puVar6;
  puVar6 = (uint *)*param_1;
  if (puVar6 == (uint *)0x0) {
    lVar2 = 0;
    puVar6 = (uint *)0x0;
  }
  else {
    *(int16_t *)((int64_t)puVar6 + 10) = 2;
    *(void **)puVar6 = &processed_var_6984_ptr;
    *(void **)(puVar6 + 6) = &processed_var_7328_ptr;
    lVar2 = *param_1;
  }
  *param_1 = lVar2 + 0x70;
  if (*(int64_t *)(puVar6 + 0x1a) != 0) {
    uVar5 = *(int64_t *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(uint64_t *)(param_2 + 8) = uVar5 + 0x80;
    *(uint64_t *)(puVar6 + 0x1a) = uVar5;
  }
  uVar1 = **(uint **)(param_2 + 8);
  puVar3 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 == 0) {
    puVar3 = (uint *)0x0;
  }
  *(uint **)(puVar6 + 8) = puVar3;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
  uVar4 = UtilitiesSystem_f59e0(param_2,*(uint64_t *)(puVar6 + 0x18),puVar6 + 6,0x180be0be0);
  *(uint64_t *)(puVar6 + 0x18) = uVar4;
  return puVar6;
}
bool UtilitiesSystem_e96a0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  lVar1 = (**(code **)(*param_2 + 0xd0))(param_2,param_3,param_4,param_1 + 0x18,0x180be0be0,0x80);
  *(int64_t *)(param_1 + 0x60) = lVar1;
  return lVar1 != 0;
}
// 函数: void UtilitiesSystem_e9710(int64_t param_1,uint64_t param_2,uint64_t param_3)
void UtilitiesSystem_e9710(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int8_t stack_array_128 [32];
  int8_t stack_array_108 [48];
  int8_t stack_array_d8 [192];
  UtilitiesSystem_dee40(param_1,param_2,param_3,stack_array_d8,stack_array_108,stack_array_128,1);
// WARNING: Subroutine does not return
  AdvancedSystemController(*(float *)(param_1 + 0x70) * 0.5);
}
// 函数: void UtilitiesSystem_e9765(void)
void UtilitiesSystem_e9765(void)
{
  float fVar1;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int8_t unaff_DIL;
  uint8_t unaff_00000039;
  float fVar2;
  int8_t *plocal_var_28;
  int8_t local_var_30;
  float fStack000000000000005c;
  float fStack000000000000006c;
  uint64_t local_var_170;
  uint64_t local_var_178;
  *(uint64_t *)(in_RAX + 0x10) = CONCAT71(unaff_00000039,unaff_DIL);
  plocal_var_28 = &local_buffer_00000070;
  local_var_30 = 1;
  UtilitiesSystem_dee40();
  fStack000000000000005c = *(float *)(unaff_RBP + -0x7c);
  fStack000000000000006c = *(float *)(unaff_RBP + -0x78);
  fVar1 = *(float *)(unaff_RBX + 0x6c);
  fVar2 = fStack000000000000005c * fStack000000000000005c +
          fStack000000000000006c * fStack000000000000006c;
  if (fVar1 * fVar1 < fVar2) {
    fVar2 = 1.0 / SQRT(fVar2);
    fStack000000000000006c = fVar2 * fStack000000000000006c * fVar1;
    fStack000000000000005c = fVar2 * fStack000000000000005c * fVar1;
  }
// WARNING: Subroutine does not return
  AdvancedSystemController(*(float *)(unaff_RBX + 0x70) * 0.5);
}
// 函数: void UtilitiesSystem_e994f(uint64_t param_1,uint param_2)
void UtilitiesSystem_e994f(uint64_t param_1,uint param_2)
{
  float fVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  char in_AL;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t *unaff_RSI;
  int32_t *unaff_R14;
  char unaff_R15B;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM10_Da;
  float fVar13;
  float unaff_XMM11_Da;
  float fVar14;
  float unaff_XMM12_Da;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_XMM15_Da;
  float fStack0000000000000040;
  float fStack0000000000000044;
  uint64_t local_var_48;
  uint64_t local_buffer_50;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float local_buffer_60;
  float fStack0000000000000068;
  float fStack000000000000006c;
  if (in_AL != '\0') {
    fStack0000000000000058 = *(float *)(unaff_RBP + -0x80);
    if (unaff_R15B == '\0') {
      fVar1 = *(float *)(unaff_RBX + 0x10);
      fVar8 = *(float *)(unaff_RBX + 0x1c);
      fVar10 = *(float *)(unaff_RBX + 0x14);
      local_var_48 = *(uint64_t *)(unaff_RBX + 0x10);
      fVar13 = *(float *)(unaff_RBX + 0x18);
      local_buffer_50 = *(uint64_t *)(unaff_RBX + 0x18);
      fVar9 = (float)((uint)(*(float *)(unaff_RBX + 0x20) + *(float *)(unaff_RBX + 0x20)) ^ param_2)
      ;
      fVar14 = (float)((uint)(*(float *)(unaff_RBX + 0x24) + *(float *)(unaff_RBX + 0x24)) ^ param_2
                      );
      fVar11 = (float)((uint)(*(float *)(unaff_RBX + 0x28) + *(float *)(unaff_RBX + 0x28)) ^ param_2
                      );
      fVar17 = fVar8 * fVar8 - unaff_XMM11_Da;
      fVar7 = fVar10 * fVar14 + fVar1 * fVar9 + fVar13 * fVar11;
      fStack0000000000000058 =
           (fVar17 * fVar9 - (fVar10 * fVar11 - fVar13 * fVar14) * fVar8) + fVar1 * fVar7;
      fVar12 = fStack0000000000000058 - *(float *)(unaff_RBP + -0x80);
      fStack000000000000005c =
           (fVar17 * fVar14 - (fVar13 * fVar9 - fVar1 * fVar11) * fVar8) + fVar10 * fVar7;
      local_buffer_60 =
           (fVar17 * fVar11 - (fVar1 * fVar14 - fVar10 * fVar9) * fVar8) + fVar13 * fVar7;
      fVar13 = -unaff_XMM10_Da;
      fVar8 = -unaff_XMM12_Da;
      *(float *)(unaff_RBP + -0x44) = fStack0000000000000044;
      fVar14 = -unaff_XMM15_Da;
      local_var_48 = local_var_48 ^ 0x8000000080000000;
      local_buffer_50 = local_buffer_50 ^ 0x80000000;
      *(float *)(unaff_RBP + -0x50) = fVar14;
      *(float *)(unaff_RBP + -0x4c) = fVar13;
      *(float *)(unaff_RBP + 0xa0) = fVar8;
      *(float *)(unaff_RBP + -0x48) = fVar8;
      fVar1 = *(float *)(unaff_RBP + 0xa0);
      fVar12 = fVar12 + fVar12;
      fVar7 = (fStack000000000000005c - fStack0000000000000068) +
              (fStack000000000000005c - fStack0000000000000068);
      fVar11 = (local_buffer_60 - fStack000000000000006c) +
               (local_buffer_60 - fStack000000000000006c);
      fVar10 = fStack0000000000000044 * fStack0000000000000044 - 0.5;
      fVar8 = fVar13 * fVar7 + fVar14 * fVar12 + fVar8 * fVar11;
      fVar15 = (fVar13 * fVar11 - fVar1 * fVar7) * fStack0000000000000044 + fVar10 * fVar12 +
               fVar8 * fVar14;
      fVar17 = (fVar1 * fVar12 - fVar14 * fVar11) * fStack0000000000000044 + fVar10 * fVar7 +
               fVar8 * fVar13;
      fVar19 = (fVar14 * fVar7 - fVar13 * fVar12) * fStack0000000000000044 + fVar10 * fVar11 +
               fVar8 * fVar1;
      puVar2 = (uint64_t *)SystemCore_Initializer(unaff_RBP + -0x50,&local_buffer_00000070,&local_buffer_00000048);
      fVar1 = *(float *)(unaff_RBP + -0x6c);
      fVar8 = *(float *)(unaff_RBP + -100);
      fVar10 = *(float *)(unaff_RBP + -0x68);
      local_var_48 = *puVar2;
      local_buffer_50 = puVar2[1];
      fVar13 = *(float *)(unaff_RBP + -0x70);
      fVar16 = fVar15 + fVar15;
      fVar18 = fVar17 + fVar17;
      fVar20 = fVar19 + fVar19;
      fVar12 = fVar8 * fVar8 - 0.5;
      fVar9 = fVar1 * fVar18 + fVar13 * fVar16 + fVar10 * fVar20;
      fVar7 = *(float *)(unaff_RBP + -0x58);
      fVar11 = *(float *)(unaff_RBP + -0x5c);
      fVar14 = *(float *)(unaff_RBP + -0x60);
      fStack0000000000000058 = fVar15;
      fStack000000000000005c = fVar17;
      local_buffer_60 = fVar19;
      puVar3 = (int32_t *)SystemCore_Initializer(unaff_RBP + -0x70,unaff_RBP + -0x50,&local_buffer_00000048);
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *unaff_R14 = *puVar3;
      unaff_R14[1] = uVar4;
      unaff_R14[2] = uVar5;
      unaff_R14[3] = uVar6;
      unaff_R14[4] = fVar14 + (fVar1 * fVar20 - fVar10 * fVar18) * fVar8 + fVar12 * fVar16 +
                              fVar13 * fVar9;
      unaff_R14[5] = fVar11 + (fVar10 * fVar16 - fVar13 * fVar20) * fVar8 + fVar12 * fVar18 +
                              fVar1 * fVar9;
      unaff_R14[6] = fVar7 + (fVar13 * fVar18 - fVar1 * fVar16) * fVar8 + fVar12 * fVar20 +
                             fVar10 * fVar9;
    }
    else {
      fVar1 = *(float *)(unaff_RBX + 0x2c);
      fVar8 = *(float *)(unaff_RBX + 0x38);
      fVar10 = *(float *)(unaff_RBX + 0x30);
      fVar13 = *(float *)(unaff_RBX + 0x34);
      fVar7 = *(float *)(unaff_RBX + 0x44);
      fVar11 = *(float *)(unaff_RBX + 0x3c);
      fVar14 = *(float *)(unaff_RBX + 0x40);
      *(float *)(unaff_RBP + -100) = fVar8;
      fVar9 = (float)((uint)(fVar7 + fVar7) ^ param_2);
      fVar12 = (float)((uint)(fVar11 + fVar11) ^ param_2);
      fVar17 = fVar8 * fVar8 - unaff_XMM11_Da;
      fVar11 = (float)((uint)(fVar14 + fVar14) ^ param_2);
      fVar7 = fVar10 * fVar11 + fVar1 * fVar12 + fVar13 * fVar9;
      fVar14 = (fVar17 * fVar12 - (fVar10 * fVar9 - fVar13 * fVar11) * fVar8) + fVar1 * fVar7;
      *(float *)(unaff_RBP + -0x60) = fVar14;
      fVar14 = fVar14 + fVar14;
      fVar18 = (fVar17 * fVar11 - (fVar13 * fVar12 - fVar1 * fVar9) * fVar8) + fVar10 * fVar7;
      *(float *)(unaff_RBP + -0x5c) = fVar18;
      fVar18 = fVar18 + fVar18;
      fVar7 = (fVar17 * fVar9 - (fVar1 * fVar11 - fVar10 * fVar12) * fVar8) + fVar13 * fVar7;
      *(float *)(unaff_RBP + -0x70) = -fVar1;
      *(float *)(unaff_RBP + -0x6c) = -fVar10;
      *(float *)(unaff_RBP + -0x58) = fVar7;
      fVar7 = fVar7 + fVar7;
      *(float *)(unaff_RBP + -0x68) = -fVar13;
      fVar10 = fStack0000000000000044 * fStack0000000000000044 - 0.5;
      fVar1 = *(float *)(unaff_RBP + 0xa0);
      fVar8 = fVar18 * unaff_XMM10_Da + fVar14 * unaff_XMM15_Da + fVar7 * unaff_XMM12_Da;
      fVar15 = (fVar7 * unaff_XMM10_Da - fVar18 * fVar1) * fStack0000000000000044 + fVar10 * fVar14
               + fVar8 * unaff_XMM15_Da + *(float *)(unaff_RBP + -0x80);
      fVar17 = (fVar14 * fVar1 - fVar7 * unaff_XMM15_Da) * fStack0000000000000044 + fVar10 * fVar18
               + fVar8 * fStack0000000000000040 + fStack0000000000000068;
      fVar19 = (fVar18 * unaff_XMM15_Da - fVar14 * fStack0000000000000040) * fStack0000000000000044
               + fVar10 * fVar7 + fVar8 * fVar1 + fStack000000000000006c;
      puVar2 = (uint64_t *)SystemCore_Initializer(&local_buffer_00000048,unaff_RBP + -0x50,unaff_RBP + -0x70);
      fVar1 = *(float *)(unaff_RBP + -0x34);
      fVar8 = *(float *)(unaff_RBP + -0x38);
      fVar10 = *(float *)(unaff_RBP + -0x3c);
      local_var_48 = *puVar2;
      local_buffer_50 = puVar2[1];
      fVar13 = *(float *)(unaff_RBP + -0x40);
      fVar16 = fVar15 + fVar15;
      fVar12 = fVar1 * fVar1 - 0.5;
      fVar18 = fVar17 + fVar17;
      fVar20 = fVar19 + fVar19;
      fVar9 = fVar10 * fVar18 + fVar13 * fVar16 + fVar8 * fVar20;
      fVar7 = *(float *)(unaff_RBP + -0x28);
      fVar11 = *(float *)(unaff_RBP + -0x2c);
      fVar14 = *(float *)(unaff_RBP + -0x30);
      fStack0000000000000058 = fVar15;
      fStack000000000000005c = fVar17;
      local_buffer_60 = fVar19;
      puVar3 = (int32_t *)SystemCore_Initializer(unaff_RBP + -0x40,&local_buffer_00000070,&local_buffer_00000048);
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *unaff_RSI = *puVar3;
      unaff_RSI[1] = uVar4;
      unaff_RSI[2] = uVar5;
      unaff_RSI[3] = uVar6;
      unaff_RSI[4] = fVar14 + (fVar10 * fVar20 - fVar8 * fVar18) * fVar1 + fVar12 * fVar16 +
                              fVar13 * fVar9;
      unaff_RSI[5] = fVar11 + (fVar8 * fVar16 - fVar13 * fVar20) * fVar1 + fVar12 * fVar18 +
                              fVar10 * fVar9;
      unaff_RSI[6] = fVar7 + (fVar13 * fVar18 - fVar10 * fVar16) * fVar1 + fVar12 * fVar20 +
                             fVar8 * fVar9;
    }
// WARNING: Subroutine does not return
    UtilitiesSystem_e1390();
  }
  return;
}
// 函数: void UtilitiesSystem_e995c(int32_t param_1,uint param_2)
void UtilitiesSystem_e995c(int32_t param_1,uint param_2)
{
  float fVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t *unaff_RSI;
  int32_t *unaff_R14;
  char unaff_R15B;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM10_Da;
  float fVar13;
  float unaff_XMM11_Da;
  float fVar14;
  float unaff_XMM12_Da;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_XMM15_Da;
  float fStack0000000000000040;
  float fStack0000000000000044;
  uint64_t local_var_48;
  uint64_t local_buffer_50;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float local_buffer_60;
  float fStack0000000000000068;
  float fStack000000000000006c;
  if (unaff_R15B == '\0') {
    fVar1 = *(float *)(unaff_RBX + 0x10);
    fVar8 = *(float *)(unaff_RBX + 0x1c);
    fVar10 = *(float *)(unaff_RBX + 0x14);
    local_var_48 = *(uint64_t *)(unaff_RBX + 0x10);
    fVar13 = *(float *)(unaff_RBX + 0x18);
    local_buffer_50 = *(uint64_t *)(unaff_RBX + 0x18);
    fVar9 = (float)((uint)(*(float *)(unaff_RBX + 0x20) + *(float *)(unaff_RBX + 0x20)) ^ param_2);
    fVar14 = (float)((uint)(*(float *)(unaff_RBX + 0x24) + *(float *)(unaff_RBX + 0x24)) ^ param_2);
    fVar11 = (float)((uint)(*(float *)(unaff_RBX + 0x28) + *(float *)(unaff_RBX + 0x28)) ^ param_2);
    fVar17 = fVar8 * fVar8 - unaff_XMM11_Da;
    fVar7 = fVar10 * fVar14 + fVar1 * fVar9 + fVar13 * fVar11;
    fStack0000000000000058 =
         (fVar17 * fVar9 - (fVar10 * fVar11 - fVar13 * fVar14) * fVar8) + fVar1 * fVar7;
    fVar12 = fStack0000000000000058 - *(float *)(unaff_RBP + -0x80);
    fStack000000000000005c =
         (fVar17 * fVar14 - (fVar13 * fVar9 - fVar1 * fVar11) * fVar8) + fVar10 * fVar7;
    local_buffer_60 =
         (fVar17 * fVar11 - (fVar1 * fVar14 - fVar10 * fVar9) * fVar8) + fVar13 * fVar7;
    fVar13 = -unaff_XMM10_Da;
    fVar8 = -unaff_XMM12_Da;
    *(float *)(unaff_RBP + -0x44) = fStack0000000000000044;
    fVar14 = -unaff_XMM15_Da;
    local_var_48 = local_var_48 ^ 0x8000000080000000;
    local_buffer_50 = local_buffer_50 ^ 0x80000000;
    *(float *)(unaff_RBP + -0x50) = fVar14;
    *(float *)(unaff_RBP + -0x4c) = fVar13;
    *(float *)(unaff_RBP + 0xa0) = fVar8;
    *(float *)(unaff_RBP + -0x48) = fVar8;
    fVar1 = *(float *)(unaff_RBP + 0xa0);
    fVar12 = fVar12 + fVar12;
    fVar7 = (fStack000000000000005c - fStack0000000000000068) +
            (fStack000000000000005c - fStack0000000000000068);
    fVar11 = (local_buffer_60 - fStack000000000000006c) +
             (local_buffer_60 - fStack000000000000006c);
    fVar10 = fStack0000000000000044 * fStack0000000000000044 - 0.5;
    fVar8 = fVar13 * fVar7 + fVar14 * fVar12 + fVar8 * fVar11;
    fVar15 = (fVar13 * fVar11 - fVar1 * fVar7) * fStack0000000000000044 + fVar10 * fVar12 +
             fVar8 * fVar14;
    fVar17 = (fVar1 * fVar12 - fVar14 * fVar11) * fStack0000000000000044 + fVar10 * fVar7 +
             fVar8 * fVar13;
    fVar19 = (fVar14 * fVar7 - fVar13 * fVar12) * fStack0000000000000044 + fVar10 * fVar11 +
             fVar8 * fVar1;
    puVar5 = (uint64_t *)SystemCore_Initializer(unaff_RBP + -0x50,&local_buffer_00000070,&local_buffer_00000048);
    fVar1 = *(float *)(unaff_RBP + -0x6c);
    fVar8 = *(float *)(unaff_RBP + -100);
    fVar10 = *(float *)(unaff_RBP + -0x68);
    local_var_48 = *puVar5;
    local_buffer_50 = puVar5[1];
    fVar13 = *(float *)(unaff_RBP + -0x70);
    fVar16 = fVar15 + fVar15;
    fVar18 = fVar17 + fVar17;
    fVar20 = fVar19 + fVar19;
    fVar12 = fVar8 * fVar8 - 0.5;
    fVar9 = fVar1 * fVar18 + fVar13 * fVar16 + fVar10 * fVar20;
    fVar7 = *(float *)(unaff_RBP + -0x58);
    fVar11 = *(float *)(unaff_RBP + -0x5c);
    fVar14 = *(float *)(unaff_RBP + -0x60);
    fStack0000000000000058 = fVar15;
    fStack000000000000005c = fVar17;
    local_buffer_60 = fVar19;
    puVar6 = (int32_t *)SystemCore_Initializer(unaff_RBP + -0x70,unaff_RBP + -0x50,&local_buffer_00000048);
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *unaff_R14 = *puVar6;
    unaff_R14[1] = uVar2;
    unaff_R14[2] = uVar3;
    unaff_R14[3] = uVar4;
    unaff_R14[4] = fVar14 + (fVar1 * fVar20 - fVar10 * fVar18) * fVar8 + fVar12 * fVar16 +
                            fVar13 * fVar9;
    unaff_R14[5] = fVar11 + (fVar10 * fVar16 - fVar13 * fVar20) * fVar8 + fVar12 * fVar18 +
                            fVar1 * fVar9;
    unaff_R14[6] = fVar7 + (fVar13 * fVar18 - fVar1 * fVar16) * fVar8 + fVar12 * fVar20 +
                           fVar10 * fVar9;
  }
  else {
    fVar1 = *(float *)(unaff_RBX + 0x2c);
    fVar8 = *(float *)(unaff_RBX + 0x38);
    fVar10 = *(float *)(unaff_RBX + 0x30);
    fVar13 = *(float *)(unaff_RBX + 0x34);
    fVar7 = *(float *)(unaff_RBX + 0x44);
    fVar11 = *(float *)(unaff_RBX + 0x3c);
    fVar14 = *(float *)(unaff_RBX + 0x40);
    *(float *)(unaff_RBP + -100) = fVar8;
    fVar9 = (float)((uint)(fVar7 + fVar7) ^ param_2);
    fVar12 = (float)((uint)(fVar11 + fVar11) ^ param_2);
    fVar17 = fVar8 * fVar8 - unaff_XMM11_Da;
    fVar11 = (float)((uint)(fVar14 + fVar14) ^ param_2);
    fVar7 = fVar10 * fVar11 + fVar1 * fVar12 + fVar13 * fVar9;
    fVar14 = (fVar17 * fVar12 - (fVar10 * fVar9 - fVar13 * fVar11) * fVar8) + fVar1 * fVar7;
    *(float *)(unaff_RBP + -0x60) = fVar14;
    fVar14 = fVar14 + fVar14;
    fVar18 = (fVar17 * fVar11 - (fVar13 * fVar12 - fVar1 * fVar9) * fVar8) + fVar10 * fVar7;
    *(float *)(unaff_RBP + -0x5c) = fVar18;
    fVar18 = fVar18 + fVar18;
    fVar7 = (fVar17 * fVar9 - (fVar1 * fVar11 - fVar10 * fVar12) * fVar8) + fVar13 * fVar7;
    *(float *)(unaff_RBP + -0x70) = -fVar1;
    *(float *)(unaff_RBP + -0x6c) = -fVar10;
    *(float *)(unaff_RBP + -0x58) = fVar7;
    fVar7 = fVar7 + fVar7;
    *(float *)(unaff_RBP + -0x68) = -fVar13;
    fVar10 = fStack0000000000000044 * fStack0000000000000044 - 0.5;
    fVar1 = *(float *)(unaff_RBP + 0xa0);
    fVar8 = fVar18 * unaff_XMM10_Da + fVar14 * unaff_XMM15_Da + fVar7 * unaff_XMM12_Da;
    fVar15 = (fVar7 * unaff_XMM10_Da - fVar18 * fVar1) * fStack0000000000000044 + fVar10 * fVar14 +
             fVar8 * unaff_XMM15_Da + *(float *)(unaff_RBP + -0x80);
    fVar17 = (fVar14 * fVar1 - fVar7 * unaff_XMM15_Da) * fStack0000000000000044 + fVar10 * fVar18 +
             fVar8 * fStack0000000000000040 + fStack0000000000000068;
    fVar19 = (fVar18 * unaff_XMM15_Da - fVar14 * fStack0000000000000040) * fStack0000000000000044 +
             fVar10 * fVar7 + fVar8 * fVar1 + fStack000000000000006c;
    fStack0000000000000058 = (float)param_1;
    puVar5 = (uint64_t *)SystemCore_Initializer(&local_buffer_00000048,unaff_RBP + -0x50,unaff_RBP + -0x70);
    fVar1 = *(float *)(unaff_RBP + -0x34);
    fVar8 = *(float *)(unaff_RBP + -0x38);
    fVar10 = *(float *)(unaff_RBP + -0x3c);
    local_var_48 = *puVar5;
    local_buffer_50 = puVar5[1];
    fVar13 = *(float *)(unaff_RBP + -0x40);
    fVar16 = fVar15 + fVar15;
    fVar12 = fVar1 * fVar1 - 0.5;
    fVar18 = fVar17 + fVar17;
    fVar20 = fVar19 + fVar19;
    fVar9 = fVar10 * fVar18 + fVar13 * fVar16 + fVar8 * fVar20;
    fVar7 = *(float *)(unaff_RBP + -0x28);
    fVar11 = *(float *)(unaff_RBP + -0x2c);
    fVar14 = *(float *)(unaff_RBP + -0x30);
    fStack0000000000000058 = fVar15;
    fStack000000000000005c = fVar17;
    local_buffer_60 = fVar19;
    puVar6 = (int32_t *)SystemCore_Initializer(unaff_RBP + -0x40,&local_buffer_00000070,&local_buffer_00000048);
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *unaff_RSI = *puVar6;
    unaff_RSI[1] = uVar2;
    unaff_RSI[2] = uVar3;
    unaff_RSI[3] = uVar4;
    unaff_RSI[4] = fVar14 + (fVar10 * fVar20 - fVar8 * fVar18) * fVar1 + fVar12 * fVar16 +
                            fVar13 * fVar9;
    unaff_RSI[5] = fVar11 + (fVar8 * fVar16 - fVar13 * fVar20) * fVar1 + fVar12 * fVar18 +
                            fVar10 * fVar9;
    unaff_RSI[6] = fVar7 + (fVar13 * fVar18 - fVar10 * fVar16) * fVar1 + fVar12 * fVar20 +
                           fVar8 * fVar9;
  }
// WARNING: Subroutine does not return
  UtilitiesSystem_e1390();
}
// 函数: void UtilitiesSystem_ea0de(void)
void UtilitiesSystem_ea0de(void)
{
  return;
}
// 函数: void UtilitiesSystem_ea130(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
void UtilitiesSystem_ea130(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                  byte param_5)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int8_t stack_array_58 [16];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  UtilitiesSystem_df310(&fStack_78,stack_array_58,param_2,param_3,param_4);
  if ((param_5 & 1) != 0) {
    (**(code **)(*param_1 + 8))(param_1,&fStack_78,stack_array_58);
  }
  if (((param_5 & 2) != 0) && ((*(byte *)(param_2 + 0x74) & 2) != 0)) {
    fVar1 = (fStack_44 - fStack_64) + (fStack_44 - fStack_64);
    fVar2 = (fStack_48 - fStack_68) + (fStack_48 - fStack_68);
    fVar4 = (fStack_40 - fStack_60) + (fStack_40 - fStack_60);
    fVar3 = 0.0;
    fVar1 = ((fStack_6c * fStack_6c - 0.5) * fVar2 -
            (fStack_74 * fVar4 - fStack_70 * fVar1) * fStack_6c) +
            (fStack_78 * fVar2 + fStack_74 * fVar1 + fStack_70 * fVar4) * fStack_78;
    if ((*(float *)(param_2 + 0x5c) <= 0.0) && (*(float *)(param_2 + 0x58) <= 0.0)) {
      fVar3 = *(float *)(param_2 + 0x60);
    }
    (**(code **)(*param_1 + 0x10))
              (param_1,&fStack_78,stack_array_58,*param_1,fVar1 < *(float *)(param_2 + 0x68) + fVar3);
    (**(code **)(*param_1 + 0x10))
              (param_1,&fStack_78,stack_array_58,*param_1,*(float *)(param_2 + 100) - fVar3 < fVar1);
  }
  return;
}
// 函数: void UtilitiesSystem_ea1b6(float param_1,float param_2,float param_3,float param_4,uint64_t param_5,
void UtilitiesSystem_ea1b6(float param_1,float param_2,float param_3,float param_4,uint64_t param_5,
                  float param_6,uint64_t param_7,float param_8,float param_9,uint64_t param_10,
                  uint64_t param_11,float param_12,float param_13)
{
  int64_t unaff_RBX;
  int64_t *unaff_RDI;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float fVar1;
  float fVar2;
  float fVar3;
  fVar1 = (param_12 - param_8) + (param_12 - param_8);
  fVar3 = (param_13 - param_9) + (param_13 - param_9);
  fVar2 = 0.0;
  fVar1 = ((param_3 * param_3 - 0.5) * fVar1 -
          (param_2 * fVar3 - param_1 * (in_XMM5_Da + in_XMM5_Da)) * param_3) +
          (param_6 * fVar1 + param_4 * (in_XMM5_Da + in_XMM5_Da) + in_XMM4_Da * fVar3) * param_6;
  if ((*(float *)(unaff_RBX + 0x5c) <= 0.0) && (*(float *)(unaff_RBX + 0x58) <= 0.0)) {
    fVar2 = *(float *)(unaff_RBX + 0x60);
  }
  fVar3 = *(float *)(unaff_RBX + 0x68) + fVar2;
  (**(code **)(*unaff_RDI + 0x10))(fVar3,&param_6,&param_10,*unaff_RDI,fVar1 < fVar3);
  fVar2 = *(float *)(unaff_RBX + 100) - fVar2;
  (**(code **)(*unaff_RDI + 0x10))(fVar2,&param_6,&param_10,*unaff_RDI,fVar2 < fVar1);
  return;
}
// 函数: void UtilitiesSystem_ea1ca(float param_1,float param_2,float param_3,float param_4,uint64_t param_5,
void UtilitiesSystem_ea1ca(float param_1,float param_2,float param_3,float param_4,uint64_t param_5,
                  float param_6,uint64_t param_7,uint64_t param_8,float param_9)
{
  int64_t unaff_RBX;
  int64_t *unaff_RDI;
  float fVar1;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float fVar2;
  float fVar3;
  float local_buffer_68;
  fVar3 = (local_buffer_68 - param_9) + (local_buffer_68 - param_9);
  fVar2 = 0.0;
  fVar3 = ((param_3 * param_3 - 0.5) * (unaff_XMM6_Da + unaff_XMM6_Da) -
          (param_2 * fVar3 - param_1 * (in_XMM5_Da + in_XMM5_Da)) * param_3) +
          (param_6 * (unaff_XMM6_Da + unaff_XMM6_Da) + param_4 * (in_XMM5_Da + in_XMM5_Da) +
          in_XMM4_Da * fVar3) * param_6;
  if ((*(float *)(unaff_RBX + 0x5c) <= 0.0) && (*(float *)(unaff_RBX + 0x58) <= 0.0)) {
    fVar2 = *(float *)(unaff_RBX + 0x60);
  }
  fVar1 = *(float *)(unaff_RBX + 0x68) + fVar2;
  (**(code **)(*unaff_RDI + 0x10))(fVar1,&param_6,&local_buffer_00000050,*unaff_RDI,fVar3 < fVar1);
  fVar2 = *(float *)(unaff_RBX + 100) - fVar2;
  (**(code **)(*unaff_RDI + 0x10))(fVar2,&param_6,&local_buffer_00000050,*unaff_RDI,fVar2 < fVar3);
  return;
}
// 函数: void UtilitiesSystem_ea253(void)
void UtilitiesSystem_ea253(void)
{
  int64_t unaff_RBX;
  int64_t *unaff_RDI;
  float fVar1;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  if (*(float *)(unaff_RBX + 0x58) <= unaff_XMM6_Da) {
    unaff_XMM6_Da = *(float *)(unaff_RBX + 0x60);
  }
  fVar1 = *(float *)(unaff_RBX + 0x68) + unaff_XMM6_Da;
  (**(code **)(*unaff_RDI + 0x10))
            (fVar1,&local_buffer_00000030,&local_buffer_00000050,*unaff_RDI,unaff_XMM8_Da < fVar1);
  fVar1 = *(float *)(unaff_RBX + 100) - unaff_XMM6_Da;
  (**(code **)(*unaff_RDI + 0x10))
            (fVar1,&local_buffer_00000030,&local_buffer_00000050,*unaff_RDI,fVar1 < unaff_XMM8_Da);
  return;
}