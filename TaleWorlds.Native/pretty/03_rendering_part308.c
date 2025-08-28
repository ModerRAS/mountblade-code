#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part308.c - 1 个函数
// 函数: void UISystem_30110(void)
void UISystem_30110(void)
{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint64_t uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int8_t uVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  int unaff_EBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar13;
  uint uVar14;
  uint64_t unaff_RDI;
  int iVar15;
  int iVar16;
  int64_t lVar17;
  float *pfVar18;
  int32_t in_R10D;
  int64_t lVar19;
  int iVar20;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int unaff_R14D;
  int iVar21;
  int iVar22;
  uint64_t *unaff_R15;
  float fVar23;
  float fVar24;
  float fVar25;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  char local_var_40;
  int local_var_48;
  uint local_buffer_4c;
  int local_buffer_50;
  int iStack0000000000000054;
  int iStack0000000000000058;
  int iStack000000000000005c;
  int32_t local_buffer_60;
  int32_t local_buffer_64;
  int32_t local_buffer_68;
  int iStack000000000000006c;
  int iStack0000000000000070;
  int iStack0000000000000074;
  uint64_t *local_buffer_78;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R13;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  lVar17 = 0;
  do {
    iVar15 = (*(int *)(&processed_var_4560_ptr + lVar17 * 4) * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    iVar15 = *(int *)(&processed_var_4304_ptr + lVar17 * 4);
    bVar1 = (&processed_var_576_ptr)[lVar17];
    *(int8_t *)(unaff_RBP + 0x4a0 + (uint64_t)bVar1) = uVar9;
    iVar15 = (iVar15 * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    iVar15 = *(int *)(&processed_var_4564_ptr + lVar17 * 4);
    *(int8_t *)(unaff_RBP + 0x4e0 + (uint64_t)bVar1) = uVar9;
    iVar15 = (iVar15 * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    iVar15 = *(int *)(&processed_var_4308_ptr + lVar17 * 4);
    bVar1 = (&processed_var_577_ptr)[lVar17];
    *(int8_t *)(unaff_RBP + 0x4a0 + (uint64_t)bVar1) = uVar9;
    iVar15 = (iVar15 * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    iVar15 = *(int *)(&processed_var_4568_ptr + lVar17 * 4);
    *(int8_t *)(unaff_RBP + 0x4e0 + (uint64_t)bVar1) = uVar9;
    iVar15 = (iVar15 * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    iVar15 = *(int *)(&processed_var_4312_ptr + lVar17 * 4);
    bVar1 = (&processed_var_578_ptr)[lVar17];
    *(int8_t *)(unaff_RBP + 0x4a0 + (uint64_t)bVar1) = uVar9;
    iVar15 = (iVar15 * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    iVar15 = *(int *)(&processed_var_4572_ptr + lVar17 * 4);
    *(int8_t *)(unaff_RBP + 0x4e0 + (uint64_t)bVar1) = uVar9;
    iVar15 = (iVar15 * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    iVar15 = *(int *)(&processed_var_4316_ptr + lVar17 * 4);
    bVar1 = (&processed_var_579_ptr)[lVar17];
    *(int8_t *)(unaff_RBP + 0x4a0 + (uint64_t)bVar1) = uVar9;
    iVar15 = (iVar15 * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    iVar15 = *(int *)(&processed_var_4576_ptr + lVar17 * 4);
    *(int8_t *)(unaff_RBP + 0x4e0 + (uint64_t)bVar1) = uVar9;
    iVar15 = (iVar15 * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    iVar15 = *(int *)(&processed_var_4320_ptr + lVar17 * 4);
    bVar1 = (&processed_var_580_ptr)[lVar17];
    *(int8_t *)(unaff_RBP + 0x4a0 + (uint64_t)bVar1) = uVar9;
    iVar15 = (iVar15 * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    iVar15 = *(int *)(&processed_var_4580_ptr + lVar17 * 4);
    *(int8_t *)(unaff_RBP + 0x4e0 + (uint64_t)bVar1) = uVar9;
    iVar15 = (iVar15 * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    iVar15 = *(int *)(&processed_var_4324_ptr + lVar17 * 4);
    bVar1 = (&processed_var_581_ptr)[lVar17];
    *(int8_t *)(unaff_RBP + 0x4a0 + (uint64_t)bVar1) = uVar9;
    iVar15 = (iVar15 * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    iVar15 = *(int *)(&processed_var_4584_ptr + lVar17 * 4);
    *(int8_t *)(unaff_RBP + 0x4e0 + (uint64_t)bVar1) = uVar9;
    iVar15 = (iVar15 * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    iVar15 = *(int *)(&processed_var_4328_ptr + lVar17 * 4);
    bVar1 = (&processed_var_582_ptr)[lVar17];
    *(int8_t *)(unaff_RBP + 0x4a0 + (uint64_t)bVar1) = uVar9;
    iVar15 = (iVar15 * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    iVar15 = *(int *)(&processed_var_4588_ptr + lVar17 * 4);
    *(int8_t *)(unaff_RBP + 0x4e0 + (uint64_t)bVar1) = uVar9;
    iVar15 = (iVar15 * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    iVar15 = *(int *)(&processed_var_4332_ptr + lVar17 * 4);
    bVar1 = (&processed_var_583_ptr)[lVar17];
    *(int8_t *)(unaff_RBP + 0x4a0 + (uint64_t)bVar1) = uVar9;
    iVar15 = (iVar15 * 0x14 + 0x32) / 100;
    if (iVar15 < 1) {
      uVar9 = 1;
    }
    else {
      uVar9 = (int8_t)iVar15;
      if (0xff < iVar15) {
        uVar9 = 0xff;
      }
    }
    lVar17 = lVar17 + 8;
    *(int8_t *)(unaff_RBP + 0x4e0 + (uint64_t)bVar1) = uVar9;
  } while (lVar17 < 0x40);
  pfVar18 = (float *)&processed_var_4272_ptr;
  lVar17 = 0;
  do {
    fVar23 = *pfVar18;
    bVar1 = *(byte *)(unaff_RBP + 0x4e0 + (uint64_t)(byte)(&processed_var_576_ptr)[lVar17]);
    bVar2 = (&processed_var_577_ptr)[lVar17];
    bVar3 = *(byte *)(unaff_RBP + 0x4a0 + (uint64_t)bVar2);
    *(float *)(unaff_RBP + 0x80 + lVar17 * 4) =
         0.35355338 /
         ((float)*(byte *)(unaff_RBP + 0x4a0 + (uint64_t)(byte)(&processed_var_576_ptr)[lVar17]) * fVar23);
    bVar2 = *(byte *)(unaff_RBP + 0x4e0 + (uint64_t)bVar2);
    bVar4 = (&processed_var_578_ptr)[lVar17];
    *(float *)(unaff_RBP + -0x80 + lVar17 * 4) = 0.35355338 / ((float)bVar1 * fVar23);
    bVar1 = *(byte *)(unaff_RBP + 0x4a0 + (uint64_t)bVar4);
    *(float *)(unaff_RBP + 0x84 + lVar17 * 4) = 0.25489777 / ((float)bVar3 * fVar23);
    bVar3 = *(byte *)(unaff_RBP + 0x4e0 + (uint64_t)bVar4);
    bVar4 = (&processed_var_579_ptr)[lVar17];
    *(float *)(unaff_RBP + -0x7c + lVar17 * 4) = 0.25489777 / ((float)bVar2 * fVar23);
    bVar2 = *(byte *)(unaff_RBP + 0x4a0 + (uint64_t)bVar4);
    *(float *)(unaff_RBP + 0x88 + lVar17 * 4) = 0.27059805 / ((float)bVar1 * fVar23);
    bVar1 = *(byte *)(unaff_RBP + 0x4e0 + (uint64_t)bVar4);
    bVar4 = (&processed_var_580_ptr)[lVar17];
    *(float *)(unaff_RBP + -0x78 + lVar17 * 4) = 0.27059805 / ((float)bVar3 * fVar23);
    bVar3 = *(byte *)(unaff_RBP + 0x4a0 + (uint64_t)bVar4);
    *(float *)(unaff_RBP + 0x8c + lVar17 * 4) = 0.30067247 / ((float)bVar2 * fVar23);
    bVar2 = *(byte *)(unaff_RBP + 0x4e0 + (uint64_t)bVar4);
    bVar4 = (&processed_var_581_ptr)[lVar17];
    *(float *)(unaff_RBP + -0x74 + lVar17 * 4) = 0.30067247 / ((float)bVar1 * fVar23);
    bVar1 = *(byte *)(unaff_RBP + 0x4a0 + (uint64_t)bVar4);
    *(float *)(unaff_RBP + 0x90 + lVar17 * 4) = 0.35355338 / ((float)bVar3 * fVar23);
    *(float *)(unaff_RBP + -0x70 + lVar17 * 4) = 0.35355338 / ((float)bVar2 * fVar23);
    bVar2 = *(byte *)(unaff_RBP + 0x4e0 + (uint64_t)bVar4);
    bVar3 = (&processed_var_582_ptr)[lVar17];
    lVar19 = lVar17 + 8;
    pfVar18 = pfVar18 + 1;
    bVar4 = *(byte *)(unaff_RBP + 0x4a0 + (uint64_t)bVar3);
    *(float *)(unaff_RBP + 0x74 + lVar19 * 4) = 0.4499881 / ((float)bVar1 * fVar23);
    bVar1 = *(byte *)(unaff_RBP + 0x4e0 + (uint64_t)bVar3);
    bVar3 = (&processed_var_583_ptr)[lVar17];
    *(float *)((int64_t)&local_buffer_00000070 + lVar19 * 4 + 4) = 0.4499881 / ((float)bVar2 * fVar23);
    bVar2 = *(byte *)(unaff_RBP + 0x4a0 + (uint64_t)bVar3);
    *(float *)(unaff_RBP + 0x78 + lVar19 * 4) = 0.6532815 / ((float)bVar4 * fVar23);
    bVar3 = *(byte *)(unaff_RBP + 0x4e0 + (uint64_t)bVar3);
    *(float *)((int64_t)&local_buffer_00000078 + lVar19 * 4) = 0.6532815 / ((float)bVar1 * fVar23);
    *(float *)(unaff_RBP + 0x7c + lVar19 * 4) = 1.2814577 / ((float)bVar2 * fVar23);
    *(float *)((int64_t)&local_buffer_00000078 + lVar19 * 4 + 4) = 1.2814577 / ((float)bVar3 * fVar23);
    lVar17 = lVar19;
  } while ((int64_t)pfVar18 < 0x180a28eb0);
  uVar5 = unaff_R15[1];
  *(int32_t *)(unaff_RBP + 0x480) = 0x1100c0ff;
  *(char *)(unaff_RBP + 0x485) = (char)((uint)in_R10D >> 8);
  *(char *)(unaff_RBP + 0x487) = (char)((uint)unaff_EBX >> 8);
  *(int8_t *)(unaff_RBP + 0x484) = 8;
  *(char *)(unaff_RBP + 0x486) = (char)in_R10D;
  *(char *)(unaff_RBP + 0x488) = (char)unaff_EBX;
  *(int32_t *)(unaff_RBP + 0x489) = 0x110103;
  *(int32_t *)(unaff_RBP + 0x48d) = 0x3011102;
  *(int32_t *)(unaff_RBP + 0x491) = 0xc4ff0111;
  *(int16_t *)(unaff_RBP + 0x495) = 0xa201;
  *(int8_t *)(unaff_RBP + 0x497) = 0;
  (*(code *)*unaff_R15)(uVar5,&processed_var_4240_ptr,0x19);
  (*(code *)*unaff_R15)(unaff_R15[1],unaff_RBP + 0x4a0,0x40);
  local_var_40 = 1;
  (*(code *)*unaff_R15)(unaff_R15[1],&local_buffer_00000040,1);
  (*(code *)*unaff_R15)(unaff_R15[1],unaff_RBP + 0x4e0,0x40);
  (*(code *)*unaff_R15)(unaff_R15[1],unaff_RBP + 0x480,0x18);
  (*(code *)*unaff_R15)(unaff_R15[1],&processed_var_5009_ptr,0x10);
  (*(code *)*unaff_R15)(unaff_R15[1],&ui_system_data_1104_ptr,0xc);
  local_var_40 = 0x10;
  (*(code *)*unaff_R15)(unaff_R15[1],&local_buffer_00000040,1);
  (*(code *)*unaff_R15)(unaff_R15[1],&processed_var_4985_ptr,0x10);
  (*(code *)*unaff_R15)(unaff_R15[1],&processed_var_4816_ptr,0xa2);
  local_var_40 = 1;
  (*(code *)*unaff_R15)(unaff_R15[1],&local_buffer_00000040,1);
  (*(code *)*unaff_R15)(unaff_R15[1],&ui_system_data_1121_ptr,0x10);
  (*(code *)*unaff_R15)(unaff_R15[1],&ui_system_data_1104_ptr,0xc);
  local_var_40 = 0x11;
  (*(code *)*unaff_R15)(unaff_R15[1],&local_buffer_00000040,1);
  (*(code *)*unaff_R15)(unaff_R15[1],&ui_system_data_1081_ptr,0x10);
  (*(code *)*unaff_R15)(unaff_R15[1],&processed_var_912_ptr,0xa2);
  (*(code *)*unaff_R15)(unaff_R15[1],&processed_var_4224_ptr);
  iVar15 = 0;
  local_buffer_60 = 0;
  local_buffer_64 = 0;
  local_buffer_68 = 0;
  if (2 < unaff_R14D) {
    iVar15 = 2;
  }
  local_buffer_4c = 0;
  iStack0000000000000054 = 0;
  bVar6 = 2 < unaff_R14D;
  local_buffer_50 = 0;
  if (0 < local_var_48) {
    lVar17 = *(int64_t *)(unaff_RBP + 0x620);
    iVar16 = local_var_48;
    do {
      if (0 < unaff_EBX) {
        iStack000000000000006c = 8;
        do {
          unaff_R15 = local_buffer_78;
          iVar7 = iStack000000000000006c;
          lVar19 = 0;
          iStack0000000000000074 = iStack0000000000000054 + 8;
          for (iVar22 = iStack0000000000000054; iVar22 < iStack0000000000000074; iVar22 = iVar22 + 1
              ) {
            iVar20 = iVar22;
            if (iVar16 <= iVar22) {
              iVar20 = iVar16 + -1;
            }
            if (render_system_data_memory != 0) {
              iVar20 = (iVar16 - iVar20) + -1;
            }
            iVar20 = iVar20 * unaff_EBX;
            iVar16 = iStack000000000000006c + -8;
            if (iVar16 < iStack000000000000006c) {
              if (3 < iStack000000000000006c - iVar16) {
                iStack0000000000000070 = iStack000000000000006c + -3;
                iVar21 = iStack000000000000006c + -6;
                do {
                  iStack0000000000000058 = unaff_EBX + -1;
                  iVar11 = iVar16;
                  if (unaff_EBX <= iVar16) {
                    iVar11 = iStack0000000000000058;
                  }
                  iVar10 = (iVar11 + iVar20) * iStack000000000000005c;
                  fVar25 = (float)*(byte *)(iVar10 + lVar17);
                  fVar23 = (float)*(byte *)((int)(iVar10 + (uint)bVar6) + lVar17);
                  iVar11 = iVar21 + -1;
                  if (unaff_EBX <= iVar21 + -1) {
                    iVar11 = iStack0000000000000058;
                  }
                  iVar11 = (iVar11 + iVar20) * iStack000000000000005c;
                  fVar24 = (float)*(byte *)((iVar10 + iVar15) + lVar17);
                  bVar1 = *(byte *)(iVar11 + lVar17);
                  *(float *)(unaff_RBP + 0x180 + lVar19 * 4) =
                       (fVar25 * 0.299 + fVar23 * 0.587 + fVar24 * 0.114) - 128.0;
                  *(float *)(unaff_RBP + 0x280 + lVar19 * 4) =
                       fVar24 * 0.5 - (fVar25 * 0.16874 + fVar23 * 0.33126);
                  *(float *)(unaff_RBP + 0x380 + lVar19 * 4) =
                       (fVar25 * 0.5 - fVar23 * 0.41869) - fVar24 * 0.08131;
                  fVar24 = (float)bVar1;
                  fVar23 = (float)*(byte *)((int)(iVar11 + (uint)bVar6) + lVar17);
                  fVar25 = (float)*(byte *)((iVar11 + iVar15) + lVar17);
                  *(float *)(unaff_RBP + 0x184 + lVar19 * 4) =
                       (fVar24 * 0.299 + fVar23 * 0.587 + fVar25 * 0.114) - 128.0;
                  *(float *)(unaff_RBP + 0x284 + lVar19 * 4) =
                       fVar25 * 0.5 - (fVar24 * 0.16874 + fVar23 * 0.33126);
                  *(float *)(unaff_RBP + 900 + lVar19 * 4) =
                       (fVar24 * 0.5 - fVar23 * 0.41869) - fVar25 * 0.08131;
                  iVar11 = iVar21;
                  if (unaff_EBX <= iVar21) {
                    iVar11 = iStack0000000000000058;
                  }
                  iVar10 = (iVar11 + iVar20) * iStack000000000000005c;
                  fVar25 = (float)*(byte *)(iVar10 + lVar17);
                  fVar23 = (float)*(byte *)((int)(iVar10 + (uint)bVar6) + lVar17);
                  iVar11 = iVar21 + 1;
                  if (unaff_EBX <= iVar21 + 1) {
                    iVar11 = unaff_EBX + -1;
                  }
                  iVar11 = (iVar11 + iVar20) * iStack000000000000005c;
                  fVar24 = (float)*(byte *)((iVar10 + iVar15) + lVar17);
                  bVar1 = *(byte *)(iVar11 + lVar17);
                  *(float *)(unaff_RBP + 0x188 + lVar19 * 4) =
                       (fVar25 * 0.299 + fVar23 * 0.587 + fVar24 * 0.114) - 128.0;
                  *(float *)(unaff_RBP + 0x288 + lVar19 * 4) =
                       fVar24 * 0.5 - (fVar25 * 0.16874 + fVar23 * 0.33126);
                  *(float *)(unaff_RBP + 0x388 + lVar19 * 4) =
                       (fVar25 * 0.5 - fVar23 * 0.41869) - fVar24 * 0.08131;
                  fVar24 = (float)bVar1;
                  fVar23 = (float)*(byte *)((int)(iVar11 + (uint)bVar6) + lVar17);
                  fVar25 = (float)*(byte *)((iVar11 + iVar15) + lVar17);
                  *(float *)(unaff_RBP + 0x18c + lVar19 * 4) =
                       (fVar24 * 0.299 + fVar23 * 0.587 + fVar25 * 0.114) - 128.0;
                  *(float *)(unaff_RBP + 0x28c + lVar19 * 4) =
                       fVar25 * 0.5 - (fVar24 * 0.16874 + fVar23 * 0.33126);
                  iVar16 = iVar16 + 4;
                  iVar21 = iVar21 + 4;
                  *(float *)(unaff_RBP + 0x38c + lVar19 * 4) =
                       (fVar24 * 0.5 - fVar23 * 0.41869) - fVar25 * 0.08131;
                  lVar19 = lVar19 + 4;
                  unaff_R14D = iStack000000000000005c;
                } while (iVar16 < iStack0000000000000070);
              }
              for (; iVar16 < iStack000000000000006c; iVar16 = iVar16 + 1) {
                iVar21 = iVar16;
                if (unaff_EBX <= iVar16) {
                  iVar21 = unaff_EBX + -1;
                }
                iVar21 = (iVar21 + iVar20) * unaff_R14D;
                fVar24 = (float)*(byte *)(iVar21 + lVar17);
                fVar23 = (float)*(byte *)((int)(iVar21 + (uint)bVar6) + lVar17);
                fVar25 = (float)*(byte *)((iVar21 + iVar15) + lVar17);
                *(float *)(unaff_RBP + 0x180 + lVar19 * 4) =
                     (fVar24 * 0.299 + fVar23 * 0.587 + fVar25 * 0.114) - 128.0;
                *(float *)(unaff_RBP + 0x280 + lVar19 * 4) =
                     fVar25 * 0.5 - (fVar24 * 0.16874 + fVar23 * 0.33126);
                *(float *)(unaff_RBP + 0x380 + lVar19 * 4) =
                     (fVar24 * 0.5 - fVar23 * 0.41869) - fVar25 * 0.08131;
                lVar19 = lVar19 + 1;
              }
            }
            iVar16 = local_var_48;
          }
          local_buffer_60 =
               UISystem_2f7d0(local_buffer_78,&local_buffer_0000004c,&local_buffer_00000050,unaff_RBP + 0x180,
                             unaff_RBP + 0x80);
          local_buffer_64 =
               UISystem_2f7d0(unaff_R15,&local_buffer_0000004c,&local_buffer_00000050,unaff_RBP + 0x280,
                             unaff_RBP + -0x80);
          local_buffer_68 =
               UISystem_2f7d0(unaff_R15,&local_buffer_0000004c,&local_buffer_00000050,unaff_RBP + 0x380,
                             unaff_RBP + -0x80);
          iStack000000000000006c = iVar7 + 8;
          iVar16 = local_var_48;
        } while (iVar7 < unaff_EBX);
      }
      iStack0000000000000054 = iStack0000000000000054 + 8;
    } while (iStack0000000000000054 < iVar16);
  }
  uVar8 = local_buffer_50 + 7;
  uVar14 = 0x7f << (0x18U - (char)uVar8 & 0x1f) | local_buffer_4c;
  if (7 < (int)uVar8) {
    uVar13 = (uint64_t)(uVar8 >> 3);
    do {
      cVar12 = (char)(uVar14 >> 0x10);
      local_var_40 = cVar12;
      (*(code *)*unaff_R15)(unaff_R15[1],&local_buffer_00000040,1);
      if (cVar12 == -1) {
        local_var_40 = 0;
        (*(code *)*unaff_R15)(unaff_R15[1],&local_buffer_00000040,1);
      }
      uVar14 = uVar14 << 8;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  local_var_40 = 0xff;
  (*(code *)*unaff_R15)(unaff_R15[1],&local_buffer_00000040,1);
  local_var_40 = 0xd9;
  (*(code *)*unaff_R15)(unaff_R15[1],&local_buffer_00000040,1);
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x520) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address