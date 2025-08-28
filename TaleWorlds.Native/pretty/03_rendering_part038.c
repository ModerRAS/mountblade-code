#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part038.c - 7 个函数

// 函数: void FUN_180289f50(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180289f50(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint64_t uStack_68;
  int32_t uStack_60;
  int32_t uStack_5c;
  int16_t uStack_58;
  int8_t uStack_56;
  int32_t uStack_54;
  int8_t uStack_50;
  uint64_t uStack_48;
  longlong lStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  uint64_t uStack_20;
  
  fVar4 = (float)system_error_code;
  fVar3 = fVar4 * 1e-05 - *(float *)(param_1 + 0x15c);
  lVar1 = *(longlong *)(param_1 + 0x120);
  *(float *)(lVar1 + 0x2a8) = fVar3;
  *(int32_t *)(lVar1 + 0x2ac) = 0;
  *(int32_t *)(lVar1 + 0x2b0) = 0;
  *(int32_t *)(lVar1 + 0x2b4) = 0x7f7fffff;
  if ((*(longlong *)(param_1 + 0x140) - *(longlong *)(param_1 + 0x138) >> 5 != 0) && (5.0 < fVar3))
  {
    iVar2 = (*(int *)(param_1 + 0x118) + 1) %
            (int)(*(longlong *)(param_1 + 0x100) - *(longlong *)(param_1 + 0xf8) >> 3);
    FUN_18022cd30(*(uint64_t *)(*(longlong *)(param_1 + 0x120) + 0x1b8),0,
                  *(uint64_t *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar2 * 8),param_4,
                  0xfffffffffffffffe);
    FUN_18022cd30(*(uint64_t *)(*(longlong *)(param_1 + 0x120) + 0x1b8),1,
                  *(uint64_t *)
                   (*(longlong *)(param_1 + 0xf8) +
                   (((longlong)iVar2 + 1U) %
                   (ulonglong)(*(longlong *)(param_1 + 0x100) - *(longlong *)(param_1 + 0xf8) >> 3))
                   * 8));
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0xffffffff;
    uStack_58 = 1;
    uStack_56 = 0;
    uStack_54 = 0xffffffff;
    uStack_50 = 1;
    uStack_48 = 0;
    lStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 3;
    uStack_20 = 0;
    FUN_180076c50(*(uint64_t *)(param_1 + 0x120),&uStack_68);
    *(int *)(param_1 + 0x118) = iVar2;
    *(float *)(param_1 + 0x15c) = fVar4 * 1e-05;
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



uint64_t *
FUN_18028a120(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x16;
  strcpy_s(param_2[1],0x80,&system_data_6c38,param_4,0,0xfffffffffffffffe);
  return param_2;
}



uint64_t *
FUN_18028a1a0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_40_ptr;
  if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1e] + 0x38))();
  }
  FUN_180244780(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xf8,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t *
FUN_18028a210(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0x16,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x5f617465426c6772;
  puVar1[1] = 0x6f74616369646e69;
  *(int32_t *)(puVar1 + 2) = 0x69765f72;
  *(int16_t *)((longlong)puVar1 + 0x14) = 0x7765;
  *(int8_t *)((longlong)puVar1 + 0x16) = 0;
  *(int32_t *)(param_2 + 2) = 0x16;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18028a2c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  longlong lVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  uint64_t uStack_148;
  int32_t uStack_140;
  int16_t uStack_13c;
  uint64_t uStack_138;
  uint64_t uStack_130;
  int32_t uStack_128;
  int8_t uStack_124;
  int32_t uStack_120;
  uint64_t uStack_11c;
  int16_t uStack_114;
  uint64_t uStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  int32_t uStack_f8;
  int8_t uStack_f4;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  float fStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  
  uStack_d8 = 0xfffffffffffffffe;
  lVar11 = FUN_1800daa50();
  FUN_180094b30(lVar11,&system_data_6c38);
  plVar3 = *(longlong **)(system_message_buffer + 0x121e0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar4 = *(longlong **)(lVar11 + 0x9690);
  *(longlong **)(lVar11 + 0x9690) = plVar3;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar3 = *(longlong **)(lVar11 + 0x96a8);
  *(uint64_t *)(lVar11 + 0x96a8) = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  uVar8 = *(uint64_t *)(param_1 + 0x24);
  *(uint64_t *)(lVar11 + 0x11c18) = *(uint64_t *)(param_1 + 0x1c);
  *(uint64_t *)(lVar11 + 0x11c20) = uVar8;
  *(uint64_t *)(lVar11 + 0x11c28) = *(uint64_t *)(param_1 + 0x2c);
  *(int16_t *)(lVar11 + 0x11c36) = 0x100;
  *(int8_t *)(lVar11 + 0x9a31) = 0;
  lVar14 = 2;
  *(int32_t *)(lVar11 + 4) = 2;
  *(float *)(lVar11 + 0x124e4) = (float)(system_error_code % 1000000000) * 1e-05;
  puVar9 = (uint64_t *)(system_operation_state + 0x16a0);
  puVar10 = (uint64_t *)(lVar11 + 0x30);
  do {
    puVar13 = puVar10;
    puVar12 = puVar9;
    uVar8 = puVar12[1];
    *puVar13 = *puVar12;
    puVar13[1] = uVar8;
    uVar8 = puVar12[3];
    puVar13[2] = puVar12[2];
    puVar13[3] = uVar8;
    uVar8 = puVar12[5];
    puVar13[4] = puVar12[4];
    puVar13[5] = uVar8;
    uVar8 = puVar12[7];
    puVar13[6] = puVar12[6];
    puVar13[7] = uVar8;
    uVar8 = puVar12[9];
    puVar13[8] = puVar12[8];
    puVar13[9] = uVar8;
    uVar8 = puVar12[0xb];
    puVar13[10] = puVar12[10];
    puVar13[0xb] = uVar8;
    uVar8 = puVar12[0xd];
    puVar13[0xc] = puVar12[0xc];
    puVar13[0xd] = uVar8;
    uVar8 = puVar12[0xf];
    puVar13[0xe] = puVar12[0xe];
    puVar13[0xf] = uVar8;
    lVar14 = lVar14 + -1;
    puVar9 = puVar12 + 0x10;
    puVar10 = puVar13 + 0x10;
  } while (lVar14 != 0);
  uVar8 = puVar12[0x11];
  puVar13[0x10] = puVar12[0x10];
  puVar13[0x11] = uVar8;
  uVar8 = puVar12[0x13];
  puVar13[0x12] = puVar12[0x12];
  puVar13[0x13] = uVar8;
  uVar8 = puVar12[0x15];
  puVar13[0x14] = puVar12[0x14];
  puVar13[0x15] = uVar8;
  uVar5 = *(int32_t *)((longlong)puVar12 + 0xb4);
  uVar6 = *(int32_t *)(puVar12 + 0x17);
  uVar7 = *(int32_t *)((longlong)puVar12 + 0xbc);
  *(int32_t *)(puVar13 + 0x16) = *(int32_t *)(puVar12 + 0x16);
  *(int32_t *)((longlong)puVar13 + 0xb4) = uVar5;
  *(int32_t *)(puVar13 + 0x17) = uVar6;
  *(int32_t *)((longlong)puVar13 + 0xbc) = uVar7;
  FUN_18024b8d0(lVar11);
  if (*(char *)(param_1 + 0xdc) != '\0') {
    *(uint *)(lVar11 + 4) = *(uint *)(lVar11 + 4) | 0x40000;
  }
  *(int32_t *)(lVar11 + 0x11cf0) = 0;
  *(int32_t *)(lVar11 + 0x9a2c) = 20000;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3f800000;
  lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x1b8) + 0xb8);
  fVar16 = (float)*(ushort *)(lVar14 + 0x32e) / *(float *)(system_operation_state + 0x17f0);
  fVar15 = (float)*(ushort *)(lVar14 + 0x32c) / *(float *)(system_operation_state + 0x17ec);
  fStack_c8 = fVar15 * 1.0 + 0.0 + 0.0;
  fStack_c4 = fVar15 * 0.0 + 0.0 + 0.0;
  fStack_c0 = fVar15 * 0.0 + 0.0 + 0.0;
  fStack_bc = fVar15 * 0.0 + 0.0 + 0.0;
  fStack_b8 = fVar16 * 0.0 + 0.0 + 0.0;
  fStack_b4 = fVar16 * 1.0 + 0.0 + 0.0;
  fStack_b0 = fVar16 * 0.0 + 0.0 + 0.0;
  fStack_ac = fVar16 * 0.0 + 0.0 + 0.0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0x3f800000;
  uStack_9c = 0;
  fStack_94 = (1.0 - fVar16) + 0.0;
  uStack_148 = 0;
  uStack_140 = 0xffffffff;
  uStack_13c = 0xff00;
  uStack_138 = 0;
  uStack_130 = 0xffffffffffffffff;
  uStack_128 = 0xffffffff;
  uStack_124 = 0xff;
  uStack_120 = 0xffffffff;
  uStack_11c = 0;
  uStack_114 = 0x400;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_e0 = 0;
  fStack_88 = fStack_c8;
  fStack_84 = fStack_c4;
  fStack_80 = fStack_c0;
  fStack_7c = fStack_bc;
  fStack_78 = fStack_b8;
  fStack_74 = fStack_b4;
  fStack_70 = fStack_b0;
  fStack_6c = fStack_ac;
  uStack_68 = uStack_a8;
  uStack_64 = uStack_a4;
  uStack_60 = uStack_a0;
  uStack_5c = uStack_9c;
  FUN_180077750(*(longlong *)(param_1 + 0xf0),lVar11,&fStack_c8,0,&uStack_148);
  LOCK();
  piVar1 = (int *)(param_2 + 0x11a48);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *(longlong *)(param_2 + 0x9a48 + (longlong)iVar2 * 8) = lVar11;
  uVar8 = *(uint64_t *)(param_2 + 0x9a3c);
  *(uint64_t *)(lVar11 + 0x9a34) = *(uint64_t *)(param_2 + 0x9a34);
  *(uint64_t *)(lVar11 + 0x9a3c) = uVar8;
  return lVar11;
}





// 函数: void FUN_18028a660(longlong *param_1)
void FUN_18028a660(longlong *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint64_t *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar14 = param_1[1];
  lVar13 = *param_1;
  if (lVar14 - lVar13 >> 5 != 0) {
    iVar15 = 1;
    lVar16 = 0;
    do {
      uVar6 = (ulonglong)iVar15;
      lVar5 = lVar16;
      iVar12 = iVar15;
      if (uVar6 < (ulonglong)(lVar14 - lVar13 >> 5)) {
        do {
          lVar17 = lVar5 + 0x20;
          iVar2 = *(int *)(lVar13 + 0x10 + lVar16);
          iVar9 = *(int *)(lVar5 + 0x30 + lVar13);
          if (iVar2 == iVar9) {
            if (iVar2 != 0) {
              pbVar7 = *(byte **)(lVar13 + 8 + lVar16);
              lVar14 = *(longlong *)(lVar5 + 0x28 + lVar13) - (longlong)pbVar7;
              do {
                pbVar1 = pbVar7 + lVar14;
                iVar9 = (uint)*pbVar7 - (uint)*pbVar1;
                if (iVar9 != 0) break;
                pbVar7 = pbVar7 + 1;
              } while (*pbVar1 != 0);
            }
LAB_18028a721:
            if (iVar9 == 0) {
              lVar14 = *param_1;
              lVar13 = (param_1[1] - lVar14 & 0xffffffffffffffe0U) + lVar14;
              lVar17 = lVar17 + lVar14;
              uVar3 = *(uint *)(lVar13 + -0x10);
              uVar10 = (ulonglong)uVar3;
              if (*(longlong *)(lVar13 + -0x18) != 0) {
                FUN_1806277c0(lVar17,uVar10);
              }
              if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
                memcpy(*(uint64_t *)(lVar17 + 8),*(uint64_t *)(lVar13 + -0x18),uVar10);
              }
              *(int32_t *)(lVar17 + 0x10) = 0;
              if (*(longlong *)(lVar17 + 8) != 0) {
                *(int8_t *)(uVar10 + *(longlong *)(lVar17 + 8)) = 0;
              }
              *(int32_t *)(lVar17 + 0x1c) = *(int32_t *)(lVar13 + -4);
              puVar4 = (uint64_t *)param_1[1];
              lVar14 = *param_1;
              uVar8 = (longlong)puVar4 - lVar14 >> 5;
              uVar10 = uVar8 - 1;
              if (uVar8 < uVar10) {
                FUN_18025aec0(param_1,0xffffffffffffffff);
              }
              else {
                lVar13 = uVar10 * 0x20;
                puVar11 = (uint64_t *)(lVar13 + lVar14);
                if (puVar11 != puVar4) {
                  do {
                    (**(code **)*puVar11)(puVar11,0);
                    puVar11 = puVar11 + 4;
                  } while (puVar11 != puVar4);
                  lVar14 = *param_1;
                }
                param_1[1] = lVar13 + lVar14;
              }
              iVar12 = iVar12 + -1;
              lVar17 = lVar5;
            }
          }
          else if (iVar2 == 0) goto LAB_18028a721;
          lVar13 = *param_1;
          iVar12 = iVar12 + 1;
          lVar14 = param_1[1];
          lVar5 = lVar17;
        } while ((ulonglong)(longlong)iVar12 < (ulonglong)(lVar14 - lVar13 >> 5));
      }
      iVar15 = iVar15 + 1;
      lVar16 = lVar16 + 0x20;
    } while (uVar6 < (ulonglong)(lVar14 - lVar13 >> 5));
  }
  return;
}





// 函数: void FUN_18028a686(longlong param_1,longlong param_2)
void FUN_18028a686(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  int iVar8;
  uint64_t unaff_RBX;
  ulonglong uVar9;
  uint64_t *puVar10;
  int iVar11;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  longlong lVar12;
  uint64_t unaff_RDI;
  longlong lVar13;
  longlong in_R11;
  int iVar14;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  longlong lVar15;
  longlong *unaff_R14;
  uint64_t unaff_R15;
  longlong lVar16;
  ulonglong uStack0000000000000050;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R12;
  iVar14 = 1;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R13;
  lVar15 = 0;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  do {
    uStack0000000000000050 = (ulonglong)iVar14;
    lVar5 = lVar15;
    iVar11 = iVar14;
    if (uStack0000000000000050 < (ulonglong)(param_1 - param_2 >> 5)) {
      do {
        lVar16 = lVar5 + 0x20;
        iVar2 = *(int *)(param_2 + 0x10 + lVar15);
        iVar8 = *(int *)(lVar5 + 0x30 + param_2);
        if (iVar2 == iVar8) {
          if (iVar2 != 0) {
            pbVar6 = *(byte **)(param_2 + 8 + lVar15);
            lVar13 = *(longlong *)(lVar5 + 0x28 + param_2) - (longlong)pbVar6;
            do {
              pbVar1 = pbVar6 + lVar13;
              iVar8 = (uint)*pbVar6 - (uint)*pbVar1;
              if (iVar8 != 0) break;
              pbVar6 = pbVar6 + 1;
            } while (*pbVar1 != 0);
          }
LAB_18028a721:
          if (iVar8 == 0) {
            lVar13 = *unaff_R14;
            lVar12 = (unaff_R14[1] - lVar13 & 0xffffffffffffffe0U) + lVar13;
            lVar16 = lVar16 + lVar13;
            uVar3 = *(uint *)(lVar12 + -0x10);
            uVar9 = (ulonglong)uVar3;
            if (*(longlong *)(lVar12 + -0x18) != 0) {
              FUN_1806277c0(lVar16,uVar9);
            }
            if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
              memcpy(*(uint64_t *)(lVar16 + 8),*(uint64_t *)(lVar12 + -0x18),uVar9);
            }
            *(int32_t *)(lVar16 + 0x10) = 0;
            if (*(longlong *)(lVar16 + 8) != 0) {
              *(int8_t *)(uVar9 + *(longlong *)(lVar16 + 8)) = 0;
            }
            *(int32_t *)(lVar16 + 0x1c) = *(int32_t *)(lVar12 + -4);
            puVar4 = (uint64_t *)unaff_R14[1];
            lVar16 = *unaff_R14;
            uVar7 = (longlong)puVar4 - lVar16 >> 5;
            uVar9 = uVar7 - 1;
            if (uVar7 < uVar9) {
              FUN_18025aec0();
            }
            else {
              lVar13 = uVar9 * 0x20;
              puVar10 = (uint64_t *)(lVar13 + lVar16);
              if (puVar10 != puVar4) {
                do {
                  (**(code **)*puVar10)(puVar10,0);
                  puVar10 = puVar10 + 4;
                } while (puVar10 != puVar4);
                lVar16 = *unaff_R14;
              }
              unaff_R14[1] = lVar13 + lVar16;
            }
            iVar11 = iVar11 + -1;
            lVar16 = lVar5;
          }
        }
        else if (iVar2 == 0) goto LAB_18028a721;
        param_2 = *unaff_R14;
        iVar11 = iVar11 + 1;
        param_1 = unaff_R14[1];
        lVar5 = lVar16;
      } while ((ulonglong)(longlong)iVar11 < (ulonglong)(param_1 - param_2 >> 5));
    }
    iVar14 = iVar14 + 1;
    lVar15 = lVar15 + 0x20;
    if ((ulonglong)(param_1 - param_2 >> 5) <= uStack0000000000000050) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18028a841(void)
void FUN_18028a841(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18028a850(int *param_1,int param_2,int param_3,longlong param_4,int param_5)
void FUN_18028a850(int *param_1,int param_2,int param_3,longlong param_4,int param_5)

{
  uint uVar1;
  int8_t auVar2 [16];
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  
  auVar2 = render_system_config;
  uVar1 = param_5 - 1;
  iVar8 = 0;
  if (((0 < (int)uVar1) && (iVar8 = 0, 3 < uVar1)) && (1 < render_system_control_config)) {
    uVar3 = uVar1 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    plVar5 = (longlong *)(param_4 + 0x28);
    iVar9 = 0;
    do {
      iVar4 = iVar9 + 2;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar2._0_8_;
      iVar8 = iVar9 + 4;
      auVar12._0_4_ = iVar9 + auVar2._0_4_ + 1;
      auVar12._4_4_ = iVar9 + auVar2._4_4_ + 1;
      auVar12._8_4_ = iVar9;
      auVar12._12_4_ = iVar9;
      auVar10 = pmovsxdq(auVar10,auVar12);
      plVar5[-4] = auVar10._0_8_ * 0x10 + param_4;
      plVar5[-2] = auVar10._8_8_ + param_4;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = auVar2._0_8_;
      auVar13._0_4_ = iVar4 + auVar2._0_4_ + 1;
      auVar13._4_4_ = iVar4 + auVar2._4_4_ + 1;
      auVar13._8_4_ = iVar4;
      auVar13._12_4_ = iVar4;
      auVar10 = pmovsxdq(auVar11,auVar13);
      *plVar5 = auVar10._0_8_ * 0x10 + param_4;
      plVar5[2] = auVar10._8_8_ + param_4;
      plVar5 = plVar5 + 8;
      iVar9 = iVar8;
    } while (iVar8 < (int)(uVar1 - uVar3));
  }
  lVar6 = (longlong)iVar8;
  iVar9 = iVar8;
  if (lVar6 < (int)uVar1) {
    lVar7 = (int)uVar1 - lVar6;
    iVar9 = iVar8 + (int)lVar7;
    plVar5 = (longlong *)(lVar6 * 0x10 + 8 + param_4);
    do {
      iVar8 = iVar8 + 1;
      *plVar5 = (longlong)iVar8 * 0x10 + param_4;
      lVar7 = lVar7 + -1;
      plVar5 = plVar5 + 2;
    } while (lVar7 != 0);
  }
  *(uint64_t *)(param_4 + 8 + (longlong)iVar9 * 0x10) = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[5] = param_5;
  param_1[3] = 1;
  param_1[4] = 0;
  *(longlong *)(param_1 + 8) = param_4;
  *(int **)(param_1 + 6) = param_1 + 10;
  param_1[2] = (param_5 + -1 + param_2) / param_5;
  *(short *)(param_1 + 0xe) = (short)param_2;
  *(int **)(param_1 + 0xc) = param_1 + 0xe;
  *(int16_t *)((longlong)param_1 + 0x3a) = 0xffff;
  *(int16_t *)(param_1 + 10) = 0;
  *(int16_t *)((longlong)param_1 + 0x2a) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}





// 函数: void FUN_18028a8b0(int param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_18028a8b0(int param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  longlong lVar6;
  longlong in_R9;
  int *in_R10;
  int in_R11D;
  uint64_t unaff_R14;
  int iVar9;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  longlong in_XMM3_Qb;
  ulonglong in_XMM4_Qa;
  
  uVar2 = in_EAX & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  plVar3 = (longlong *)(in_R9 + 0x28);
  do {
    iVar4 = in_R11D;
    iVar1 = iVar4 + 2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = in_XMM4_Qa;
    iVar9 = (int)(in_XMM4_Qa >> 0x20);
    in_R11D = iVar4 + 4;
    auVar10._0_4_ = iVar4 + (int)in_XMM4_Qa + 1;
    auVar10._4_4_ = iVar4 + iVar9 + 1;
    auVar10._8_4_ = iVar4;
    auVar10._12_4_ = iVar4;
    auVar7 = pmovsxdq(auVar7,auVar10);
    plVar3[-4] = auVar7._0_8_ * 0x10 + param_4;
    plVar3[-2] = auVar7._8_8_ + in_XMM3_Qb;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = in_XMM4_Qa;
    auVar11._0_4_ = iVar1 + (int)in_XMM4_Qa + 1;
    auVar11._4_4_ = iVar1 + iVar9 + 1;
    auVar11._8_4_ = iVar1;
    auVar11._12_4_ = iVar1;
    auVar7 = pmovsxdq(auVar8,auVar11);
    *plVar3 = auVar7._0_8_ * 0x10 + param_4;
    plVar3[2] = auVar7._8_8_ + in_XMM3_Qb;
    plVar3 = plVar3 + 8;
  } while (in_R11D < (int)(param_1 - uVar2));
  lVar5 = (longlong)in_R11D;
  if (lVar5 < param_1) {
    iVar4 = iVar4 + 5;
    lVar6 = param_1 - lVar5;
    in_R11D = in_R11D + (int)lVar6;
    plVar3 = (longlong *)(lVar5 * 0x10 + 8 + in_R9);
    do {
      lVar5 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      *plVar3 = lVar5 * 0x10 + in_R9;
      lVar6 = lVar6 + -1;
      plVar3 = plVar3 + 2;
    } while (lVar6 != 0);
  }
  *(uint64_t *)(in_R9 + 8 + (longlong)in_R11D * 0x10) = unaff_R14;
  *in_R10 = unaff_ESI;
  in_R10[1] = unaff_EBP;
  in_R10[5] = unaff_EDI;
  in_R10[3] = 1;
  in_R10[4] = 0;
  *(longlong *)(in_R10 + 8) = in_R9;
  *(int **)(in_R10 + 6) = in_R10 + 10;
  in_R10[2] = (unaff_EDI + -1 + unaff_ESI) / unaff_EDI;
  *(short *)(in_R10 + 0xe) = (short)unaff_ESI;
  *(int **)(in_R10 + 0xc) = in_R10 + 0xe;
  *(int16_t *)((longlong)in_R10 + 0x3a) = 0xffff;
  *(short *)(in_R10 + 10) = (short)unaff_R14;
  *(short *)((longlong)in_R10 + 0x2a) = (short)unaff_R14;
  *(uint64_t *)(in_R10 + 0x10) = unaff_R14;
  return;
}





// 函数: void FUN_18028a95c(int param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_18028a95c(int param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  longlong lVar4;
  int *in_R10;
  int in_R11D;
  uint64_t unaff_R14;
  
  lVar3 = (longlong)in_R11D;
  if (lVar3 < param_1) {
    iVar2 = in_R11D + 1;
    lVar4 = param_1 - lVar3;
    in_R11D = in_R11D + (int)lVar4;
    plVar1 = (longlong *)(lVar3 * 0x10 + 8 + param_4);
    do {
      lVar3 = (longlong)iVar2;
      iVar2 = iVar2 + 1;
      *plVar1 = lVar3 * 0x10 + param_4;
      lVar4 = lVar4 + -1;
      plVar1 = plVar1 + 2;
    } while (lVar4 != 0);
  }
  *(uint64_t *)(param_4 + 8 + (longlong)in_R11D * 0x10) = unaff_R14;
  *in_R10 = unaff_ESI;
  in_R10[1] = unaff_EBP;
  in_R10[5] = unaff_EDI;
  in_R10[3] = 1;
  in_R10[4] = 0;
  *(longlong *)(in_R10 + 8) = param_4;
  *(int **)(in_R10 + 6) = in_R10 + 10;
  in_R10[2] = (unaff_EDI + -1 + unaff_ESI) / unaff_EDI;
  *(short *)(in_R10 + 0xe) = (short)unaff_ESI;
  *(int **)(in_R10 + 0xc) = in_R10 + 0xe;
  *(int16_t *)((longlong)in_R10 + 0x3a) = 0xffff;
  *(short *)(in_R10 + 10) = (short)unaff_R14;
  *(short *)((longlong)in_R10 + 0x2a) = (short)unaff_R14;
  *(uint64_t *)(in_R10 + 0x10) = unaff_R14;
  return;
}



uint FUN_18028aa10(uint64_t param_1,ushort *param_2,int param_3,int param_4,int *param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  
  uVar5 = 0;
  iVar4 = 0;
  iVar7 = 0;
  if ((int)(uint)*param_2 < param_3 + param_4) {
    do {
      uVar3 = (uint)param_2[1];
      if (uVar5 < param_2[1]) {
        puVar8 = *(ushort **)(param_2 + 4);
        iVar6 = (uVar3 - uVar5) * iVar7;
        uVar1 = *puVar8;
        uVar2 = (uint)uVar1;
        uVar5 = uVar3;
        if ((int)(uint)*param_2 < param_3) {
          iVar7 = iVar7 + ((uint)uVar1 - param_3);
        }
        else {
          iVar7 = iVar7 + ((uint)uVar1 - (uint)*param_2);
        }
      }
      else {
        puVar8 = *(ushort **)(param_2 + 4);
        uVar2 = (uint)*puVar8;
        iVar6 = param_4 - iVar7;
        if ((int)((uVar2 - *param_2) + iVar7) <= param_4) {
          iVar6 = uVar2 - *param_2;
        }
        iVar7 = iVar7 + iVar6;
        iVar6 = (uVar5 - uVar3) * iVar6;
      }
      iVar4 = iVar4 + iVar6;
      param_2 = puVar8;
    } while ((int)uVar2 < param_3 + param_4);
    *param_5 = iVar4;
  }
  else {
    *param_5 = 0;
  }
  return uVar5;
}



uint FUN_18028aa42(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBP;
  int unaff_ESI;
  uint unaff_EDI;
  int iVar4;
  int in_R10D;
  ushort *in_R11;
  ushort *puVar5;
  int unaff_R14D;
  int unaff_R15D;
  int *in_stack_00000038;
  
  do {
    uVar3 = (uint)in_R11[1];
    if ((int)unaff_EDI < (int)(uint)in_R11[1]) {
      puVar5 = *(ushort **)(in_R11 + 4);
      iVar4 = (uVar3 - unaff_EDI) * in_R10D;
      uVar1 = *puVar5;
      uVar2 = (uint)uVar1;
      unaff_EDI = uVar3;
      if ((int)(uint)*in_R11 < unaff_R14D) {
        in_R10D = in_R10D + ((uint)uVar1 - unaff_R14D);
      }
      else {
        in_R10D = in_R10D + ((uint)uVar1 - (uint)*in_R11);
      }
    }
    else {
      puVar5 = *(ushort **)(in_R11 + 4);
      uVar2 = (uint)*puVar5;
      iVar4 = unaff_R15D - in_R10D;
      if ((int)((uVar2 - *in_R11) + in_R10D) <= unaff_R15D) {
        iVar4 = uVar2 - *in_R11;
      }
      in_R10D = in_R10D + iVar4;
      iVar4 = (unaff_EDI - uVar3) * iVar4;
    }
    unaff_ESI = unaff_ESI + iVar4;
    in_R11 = puVar5;
  } while ((int)uVar2 < unaff_EBP);
  *in_stack_00000038 = unaff_ESI;
  return unaff_EDI;
}



int32_t FUN_18028aacb(void)

{
  int32_t unaff_EDI;
  int32_t *in_stack_00000038;
  
  *in_stack_00000038 = unaff_EDI;
  return unaff_EDI;
}





