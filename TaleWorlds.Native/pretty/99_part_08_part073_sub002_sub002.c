/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"

// 99_part_08_part073_sub002_sub002.c - 1 个函数

// 函数: void FUN_1805b99b1(int64_t param_1,char param_2)
void FUN_1805b99b1(int64_t param_1,char param_2)

{
  int32_t *puVar1;
  uint64_t uVar2;
  short sVar3;
  int iVar4;
  int64_t lVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  bool bVar18;
  char cVar19;
  byte bVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int64_t in_RAX;
  int32_t *puVar24;
  int64_t *plVar25;
  float *pfVar26;
  uint64_t uVar27;
  uint uVar28;
  int iVar29;
  int64_t lVar30;
  byte *pbVar31;
  uint64_t uVar32;
  int *piVar33;
  uint64_t uVar34;
  uint64_t *puVar35;
  int64_t lVar36;
  int64_t lVar37;
  uint64_t uVar38;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  void *puVar39;
  int64_t lVar40;
  uint64_t uVar41;
  uint uVar42;
  uint64_t uVar43;
  uint uVar44;
  int64_t lVar46;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int32_t uVar47;
  int32_t extraout_XMM0_Da;
  float fVar48;
  int8_t auVar49 [16];
  float fVar50;
  float fVar51;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM12_Da;
  int iVar52;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM13_Da;
  float fVar53;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Dc;
  uint64_t in_stack_00000040;
  int in_stack_00000048;
  int iStack0000000000000050;
  int iStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  int32_t uStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float fStack0000000000000080;
  int32_t uStack0000000000000084;
  int32_t in_stack_00000130;
  int32_t in_stack_00000138;
  int32_t in_stack_00000150;
  int32_t in_stack_00000158;
  int32_t in_stack_00000160;
  int32_t in_stack_00000168;
  int32_t in_stack_00000170;
  int32_t in_stack_00000178;
  int32_t in_stack_00000180;
  int32_t in_stack_00000188;
  int32_t in_stack_00000190;
  int32_t in_stack_00000198;
  int32_t in_stack_000001a0;
  int32_t in_stack_000001a8;
  int32_t in_stack_000001b0;
  int32_t in_stack_000001b8;
  uint64_t uVar45;
  
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x40) = unaff_R15;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0xd8) = unaff_XMM14_Da;
  *(int32_t *)(in_RAX + -0xd4) = unaff_XMM14_Db;
  *(int32_t *)(in_RAX + -0xd0) = unaff_XMM14_Dc;
  *(int32_t *)(in_RAX + -0xcc) = unaff_XMM14_Dd;
  cVar19 = *(char *)(param_1 + 0x21c0);
  if (cVar19 == '\0') {
    iVar22 = *(int *)(param_1 + 0x14b4);
  }
  else {
    iVar22 = *(int *)(param_1 + 0x21c4);
  }
  iVar21 = *(int *)(param_1 + 0x14a8);
  *(int *)(unaff_RBP + 0x138) = iVar22;
  if (iVar21 != 9) {
    if (cVar19 == '\0') {
      iVar21 = *(int *)(param_1 + 0x14b4);
    }
    else {
      iVar21 = *(int *)(param_1 + 0x21c4);
    }
    if (-1 < iVar21) {
      lVar30 = *(int64_t *)((int64_t)iVar21 * 0xa60 + 0x3778 + *(int64_t *)(param_1 + 0x1488));
      if (((lVar30 != 0) && (*(char *)(lVar30 + 0x8be) != '\0')) &&
         (*(int *)((int64_t)iVar22 * 0xa60 + 0x3608 + *(int64_t *)(param_1 + 0x1488)) == 1)) {
        bVar18 = true;
        goto LAB_1805b9a5e;
      }
    }
  }
  bVar18 = false;
  *(int32_t *)(unaff_RBP + 0x138) = 0xffffffff;
LAB_1805b9a5e:
  uVar28 = *(uint *)(unaff_RBX + 2);
  plVar25 = unaff_RBX + 1;
  if ((uVar28 >> 0x1b & 1) == 0) {
    bVar20 = (byte)((uint)*(int32_t *)(*(int64_t *)*plVar25 + 0x564) >> 0x1f) ^ 1;
    *(byte *)((int64_t)unaff_RBX + 0x11c) = bVar20;
  }
  else {
    bVar20 = *(byte *)((int64_t)unaff_RBX + 0x11c);
  }
  lVar30 = *unaff_RBX;
  lVar36 = *(int64_t *)(lVar30 + 0x20);
  uVar47 = *(int32_t *)(lVar36 + 0xc);
  uStack000000000000005c = *(int32_t *)(lVar36 + 0x10);
  uStack0000000000000060 = *(int32_t *)(lVar36 + 0x14);
  uStack0000000000000064 = *(int32_t *)(lVar36 + 0x18);
  uStack0000000000000058 = uVar47;
  if (bVar20 != 0) {
    if (((*(uint *)(lVar30 + 0x56c) & 0x2000) != 0) && (-1 < *(int *)(lVar30 + 0x564))) {
      lVar36 = (int64_t)*(int *)(lVar30 + 0x564) * 0xa60;
      if (*(int *)(lVar36 + 0x3608 + *(int64_t *)(lVar30 + 0x8d8)) == 1) {
        lVar30 = *(int64_t *)(lVar30 + 0x8d8) + 0x30a0 + lVar36;
      }
    }
                    // WARNING: Subroutine does not return
    AdvancedSystemController(*(int32_t *)(*(int64_t *)(lVar30 + 0x20) + 0x34));
  }
  cVar19 = false;
  *(int8_t *)(unaff_RBP + 0x130) = 0;
  if ((uVar28 & 0x20) == 0) {
    unaff_RBX[0x15] = *(int64_t *)(*(int64_t *)(*(int64_t *)*plVar25 + 0x8f8) + 0x9e8);
    *(uint *)(unaff_RBX + 2) = uVar28 | 0x20;
  }
  lVar30 = unaff_RBX[0x15];
  if ((((lVar30 != 0) && (0 < *(int *)(lVar30 + 0x30))) &&
      ((uVar32 = *(uint64_t *)
                  ((int64_t)*(int *)(lVar30 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar30 + 0xd0)),
       (uVar32 >> 9 & 1) == 0 || (0 < *(short *)(lVar30 + 8))))) && ((uVar32 >> 1 & 1) != 0)) {
    lVar36 = *unaff_RBX;
    if ((*(int64_t *)(lVar36 + 0x628) == lVar30) && (*(int *)(lVar36 + 0x644) == -1)) {
      iVar22 = *(int *)(lVar36 + 0x638);
    }
    else {
      *(int32_t *)(unaff_RBP + 0x130) = 0xffffffff;
      *(int32_t *)(unaff_RBP + 0x120) = 0xffffffff;
      in_stack_00000040._4_4_ = 0xffffffff;
      uVar47 = FUN_18050e440(lVar36,lVar30,unaff_RBP + 0x120,(int64_t)&stack0x00000040 + 4,
                             unaff_RBP + 0x130);
      iVar22 = *(int *)(unaff_RBP + 0x120);
    }
    cVar19 = 0 < iVar22;
    *(char *)(unaff_RBP + 0x130) = cVar19;
  }
  puVar39 = &rendering_buffer_2336_ptr;
  if (param_2 != '\0') {
    puVar39 = &rendering_buffer_2328_ptr;
  }
  func_0x000180508000(uVar47,&memory_allocator_3152_ptr,puVar39,cVar19);
  if (cVar19 == '\0') {
    fVar48 = *(float *)((int64_t)unaff_RBX + 0x2c);
    lVar30 = unaff_RBX[6];
    uVar47 = *(int32_t *)((int64_t)unaff_RBX + 0x34);
    lVar36 = unaff_RBX[3];
    uVar6 = *(int32_t *)((int64_t)unaff_RBX + 0x1c);
    lVar46 = unaff_RBX[4];
    uVar7 = *(int32_t *)((int64_t)unaff_RBX + 0x24);
    *(int *)(unaff_RBP + -0x30) = (int)unaff_RBX[5];
    *(float *)(unaff_RBP + -0x2c) = fVar48;
    *(int *)(unaff_RBP + -0x28) = (int)lVar30;
    *(int32_t *)(unaff_RBP + -0x24) = uVar47;
    *(int *)(unaff_RBP + -0x40) = (int)lVar36;
    *(int32_t *)(unaff_RBP + -0x3c) = uVar6;
    *(int *)(unaff_RBP + -0x38) = (int)lVar46;
    *(int32_t *)(unaff_RBP + -0x34) = uVar7;
    if (fVar48 < 0.0) {
      FUN_1805d5a50(plVar25);
      uVar47 = *(int32_t *)((int64_t)unaff_RBX + 0x1c);
      lVar30 = unaff_RBX[4];
      uVar6 = *(int32_t *)((int64_t)unaff_RBX + 0x24);
      lVar36 = unaff_RBX[5];
      uVar7 = *(int32_t *)((int64_t)unaff_RBX + 0x2c);
      lVar46 = unaff_RBX[6];
      uVar8 = *(int32_t *)((int64_t)unaff_RBX + 0x34);
      *(int *)(unaff_RBP + -0x40) = (int)unaff_RBX[3];
      *(int32_t *)(unaff_RBP + -0x3c) = uVar47;
      *(int *)(unaff_RBP + -0x38) = (int)lVar30;
      *(int32_t *)(unaff_RBP + -0x34) = uVar6;
      *(int *)(unaff_RBP + -0x30) = (int)lVar36;
      *(int32_t *)(unaff_RBP + -0x2c) = uVar7;
      *(int *)(unaff_RBP + -0x28) = (int)lVar46;
      *(int32_t *)(unaff_RBP + -0x24) = uVar8;
    }
    lVar30 = *(int64_t *)(*unaff_RBX + 0x8f8) + 8 +
             (int64_t)*(int *)((int64_t)unaff_RBX + 0x2154) * 0x1f8;
    if ((*(int *)(lVar30 + 0x30) < 1) ||
       (((uVar32 = *(uint64_t *)
                    ((int64_t)*(int *)(lVar30 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar30 + 0xd0))
         , (uVar32 >> 9 & 1) != 0 && (*(short *)(lVar30 + 8) < 1)) || ((uVar32 >> 1 & 1) == 0)))) {
      iVar22 = (int)((*(int64_t *)(lVar30 + 0xd8) - *(int64_t *)(lVar30 + 0xd0)) / 0xa0);
      if (0 < iVar22) {
        pbVar31 = (byte *)(*(int64_t *)(lVar30 + 0xd0) + 0x50);
        lVar36 = 0;
        do {
          if ((*pbVar31 >> 1 & 1) != 0) break;
          lVar36 = lVar36 + 1;
          pbVar31 = pbVar31 + 0xa0;
        } while (lVar36 < iVar22);
      }
    }
  }
  else {
    puVar24 = (int32_t *)FUN_1805b7970();
    uVar47 = puVar24[1];
    uVar6 = puVar24[2];
    uVar7 = puVar24[3];
    uVar8 = puVar24[4];
    uVar9 = puVar24[5];
    uVar10 = puVar24[6];
    uVar11 = puVar24[7];
    *(int32_t *)(unaff_RBP + -0x40) = *puVar24;
    *(int32_t *)(unaff_RBP + -0x3c) = uVar47;
    *(int32_t *)(unaff_RBP + -0x38) = uVar6;
    *(int32_t *)(unaff_RBP + -0x34) = uVar7;
    *(int32_t *)(unaff_RBP + -0x30) = uVar8;
    *(int32_t *)(unaff_RBP + -0x2c) = uVar9;
    *(int32_t *)(unaff_RBP + -0x28) = uVar10;
    *(int32_t *)(unaff_RBP + -0x24) = uVar11;
  }
  lVar36 = unaff_RBX[0x291];
  iVar22 = *(int *)(lVar36 + 0x52ed94);
  in_stack_00000048 = iVar22;
  if (param_2 == '\0') {
    in_stack_00000048 = (*(int *)(lVar36 + 0x98d9d4) + 1) * 5;
  }
  lVar46 = *(int64_t *)(&system_error_code + (int64_t)*(int *)(lVar36 + 0x87b790) * 8);
  lVar5 = *(int64_t *)(lVar36 + 0x87b788);
  iVar21 = (int)unaff_RBX[0x402];
  uVar32 = (uint64_t)iVar21;
  if (iVar21 < 0) {
    sVar3 = *(short *)(lVar36 + 0x52dda0 + uVar32 * 2);
    if (sVar3 == -1) {
      if (iVar21 < iVar22) {
        do {
          if (*(short *)(lVar36 + 0x52dda0 + (int64_t)(int)uVar32 * 2) != -1) break;
          uVar28 = (int)uVar32 + 1;
          uVar32 = (uint64_t)uVar28;
          *(uint *)(unaff_RBX + 0x402) = uVar28;
        } while ((int)uVar28 < *(int *)(lVar36 + 0x52ed94));
      }
    }
    else {
      *(int *)(unaff_RBX + 0x402) = (int)sVar3;
    }
  }
  in_stack_00000040._4_4_ = iVar22;
  FUN_1805279f0(*unaff_RBX,unaff_RBP + -0x78,*(uint64_t *)(unaff_RBP + -0x38),lVar30);
  iVar21 = *(int *)(unaff_RBP + 0x138);
  if (((!bVar18) || (*(int *)((int64_t)unaff_RBX + 0x200c) < 1)) ||
     (*(int8_t *)(unaff_RBP + 0x120) = 1, iVar21 != *(int *)((int64_t)unaff_RBX + 0x1c4c))) {
    *(int8_t *)(unaff_RBP + 0x120) = 0;
  }
  uVar32 = (uint64_t)*(uint *)(unaff_RBX + 0x402);
  if ((int)*(uint *)(unaff_RBX + 0x402) < iVar22) {
    iVar52 = iStack0000000000000054;
    iVar23 = iStack0000000000000050;
    in_stack_00000130 = unaff_XMM15_Da;
    in_stack_00000138 = unaff_XMM15_Dc;
    in_stack_00000150 = unaff_XMM13_Da;
    in_stack_00000158 = unaff_XMM13_Dc;
    in_stack_00000160 = unaff_XMM12_Da;
    in_stack_00000168 = unaff_XMM12_Dc;
    in_stack_00000170 = unaff_XMM11_Da;
    in_stack_00000178 = unaff_XMM11_Dc;
    in_stack_00000180 = unaff_XMM10_Da;
    in_stack_00000188 = unaff_XMM10_Dc;
    in_stack_00000190 = unaff_XMM9_Da;
    in_stack_00000198 = unaff_XMM9_Dc;
    in_stack_000001a0 = unaff_XMM8_Da;
    in_stack_000001a8 = unaff_XMM8_Dc;
    in_stack_000001b0 = unaff_XMM7_Da;
    in_stack_000001b8 = unaff_XMM7_Dc;
    do {
      lVar36 = unaff_RBX[0x291] + 0x30a0 + (int64_t)(int)uVar32 * 0xa60;
      if (((*(int *)(lVar36 + 0x568) == 1) &&
          (iVar4 = *(int *)(lVar36 + 0x10), iVar4 != *(int *)(*unaff_RBX + 0x10))) &&
         ((*(int *)(lVar36 + 0x560) < 0 && (cVar19 = func_0x000180508270(), cVar19 != '\0')))) {
        bVar18 = false;
        if (iVar4 != iVar21) {
          iVar22 = (int)unaff_RBX[0x381];
          lVar40 = (int64_t)iVar22;
          iVar29 = 0;
          lVar37 = 0;
          if (0 < iVar22) {
            plVar25 = unaff_RBX + 0x371;
            do {
              if ((int)*plVar25 == iVar4) {
                if (*(float *)((int64_t)unaff_RBX + lVar37 * 8 + 0x1b8c) <=
                    (float)(lVar46 - lVar5) * 1e-05) {
                  *(int *)(unaff_RBX + lVar37 + 0x371) = (int)unaff_RBX[lVar40 + 0x370];
                  *(int32_t *)((int64_t)unaff_RBX + lVar37 * 8 + 0x1b8c) =
                       *(int32_t *)((int64_t)unaff_RBX + lVar40 * 8 + 0x1b84);
                  *(int32_t *)(unaff_RBX + lVar40 + 0x370) = 0xffffffff;
                  *(int *)(unaff_RBX + 0x381) = (int)unaff_RBX[0x381] + -1;
                }
                else {
                  bVar18 = true;
                }
                break;
              }
              iVar29 = iVar29 + 1;
              lVar37 = lVar37 + 1;
              plVar25 = plVar25 + 1;
            } while (iVar29 < iVar22);
          }
        }
        fVar48 = (float)FUN_1805bcd40(extraout_XMM0_Da,lVar36,&stack0x00000058,lVar30,
                                      *(int8_t *)(unaff_RBP + 0x130));
        if (-1e+30 < fVar48) {
          if (iVar4 == iVar21) {
            uVar28 = 0;
            *(int8_t *)(unaff_RBP + 0x120) = 1;
LAB_1805ba031:
            if (iVar4 == *(int *)(unaff_RBP + 0x138)) {
              if (!bVar18) {
LAB_1805ba2c7:
                iVar22 = *(int *)((int64_t)unaff_RBX + 0x200c);
                if (iVar22 < 0x10) {
                  iVar22 = iVar22 + 1;
                  *(int *)((int64_t)unaff_RBX + 0x200c) = iVar22;
                }
                lVar37 = (int64_t)(int)uVar28;
                lVar40 = (int64_t)(iVar22 + -1);
                if (lVar37 < lVar40) {
                  puVar35 = (uint64_t *)((int64_t)unaff_RBX + lVar40 * 0x3c + 0x1c4c);
                  lVar40 = lVar40 - lVar37;
                  do {
                    *puVar35 = *(uint64_t *)((int64_t)puVar35 + -0x3c);
                    puVar35[1] = *(uint64_t *)((int64_t)puVar35 + -0x34);
                    puVar35[2] = *(uint64_t *)((int64_t)puVar35 + -0x2c);
                    puVar35[3] = *(uint64_t *)((int64_t)puVar35 + -0x24);
                    *(int32_t *)(puVar35 + 4) = *(int32_t *)((int64_t)puVar35 + -0x1c);
                    *(int32_t *)((int64_t)puVar35 + 0x24) = *(int32_t *)(puVar35 + -3);
                    *(int32_t *)(puVar35 + 5) = *(int32_t *)((int64_t)puVar35 + -0x14);
                    *(int32_t *)((int64_t)puVar35 + 0x2c) = *(int32_t *)(puVar35 + -2);
                    puVar35[6] = *(uint64_t *)((int64_t)puVar35 + -0xc);
                    *(int32_t *)(puVar35 + 7) = *(int32_t *)((int64_t)puVar35 + -4);
                    puVar35 = (uint64_t *)((int64_t)puVar35 + -0x3c);
                    lVar40 = lVar40 + -1;
                  } while (lVar40 != 0);
                }
                lVar37 = lVar37 * 0x3c;
                *(int32_t *)(lVar37 + 0x1c4c + (int64_t)unaff_RBX) =
                     *(int32_t *)(lVar36 + 0x10);
                *(int32_t *)(lVar37 + 0x1c54 + (int64_t)unaff_RBX) = 0;
                *(float *)(lVar37 + 0x1c50 + (int64_t)unaff_RBX) = fVar48;
                *(int32_t *)(lVar37 + 0x1c58 + (int64_t)unaff_RBX) = 0xf149f2ca;
                *(uint64_t *)(lVar37 + 0x1c80 + (int64_t)unaff_RBX) = 0x7149f2ca;
                *(int32_t *)(lVar37 + 0x1c5c + (int64_t)unaff_RBX) = 0;
                goto LAB_1805ba3ca;
              }
            }
            else if (!bVar18) {
              lVar37 = *(int64_t *)(lVar36 + 0x6d8);
              lVar40 = *(int64_t *)(*unaff_RBX + 0x6d8);
              fStack000000000000006c = *(float *)(lVar37 + 0x8c8);
              fVar51 = *(float *)(lVar40 + 0x8e8);
              fVar50 = *(float *)(lVar40 + 0x8ec);
              uVar47 = *(int32_t *)(lVar40 + 0x8f0);
              fVar53 = *(float *)(lVar37 + 0x8cc);
              fStack0000000000000068 = *(float *)(lVar37 + 0x8c4) - *(float *)(lVar40 + 0x8e4);
              *(float *)(unaff_RBP + -0x68) = *(float *)(lVar40 + 0x8e4);
              fStack000000000000006c = fStack000000000000006c - fVar51;
              fVar53 = fVar53 - fVar50;
              *(float *)(unaff_RBP + -100) = fVar51;
              *(float *)(unaff_RBP + -0x60) = fVar50;
              *(int32_t *)(unaff_RBP + -0x5c) = uVar47;
              fVar50 = fStack0000000000000068 * fStack0000000000000068 +
                       fStack000000000000006c * fStack000000000000006c + fVar53 * fVar53;
              auVar49 = rsqrtss(ZEXT416((uint)fVar50),ZEXT416((uint)fVar50));
              fVar51 = auVar49._0_4_;
              fVar51 = fVar51 * 0.5 * (3.0 - fVar50 * fVar51 * fVar51);
              fStack0000000000000068 = fVar51 * fStack0000000000000068;
              fStack000000000000006c = fVar51 * fStack000000000000006c;
              fStack0000000000000070 = fVar51 * fVar53;
              *(float *)(unaff_RBP + -0x48) = fVar51 * fVar50;
              uStack0000000000000074 = 0x7f7fffff;
              *(float *)(unaff_RBP + -0x58) = fStack0000000000000068;
              *(float *)(unaff_RBP + -0x54) = fStack000000000000006c;
              *(float *)(unaff_RBP + -0x50) = fStack0000000000000070;
              *(int32_t *)(unaff_RBP + -0x4c) = 0x7f7fffff;
              if ((fVar51 * fVar50 < *(float *)(unaff_RBP + -0x28)) && (fVar53 < -0.85)) {
                fStack0000000000000078 = *(float *)(lVar37 + 0x8c4) - *(float *)(unaff_RBP + -0x78);
                fStack000000000000007c = *(float *)(lVar37 + 0x8c8) - *(float *)(unaff_RBP + -0x74);
                fStack0000000000000080 = *(float *)(lVar37 + 0x8cc) - *(float *)(unaff_RBP + -0x70);
                *(int32_t *)(unaff_RBP + -0x7c) = 0x7f7fffff;
                fVar51 = fStack000000000000007c * fStack000000000000007c +
                         fStack0000000000000078 * fStack0000000000000078 +
                         fStack0000000000000080 * fStack0000000000000080;
                auVar49 = rsqrtss(ZEXT416((uint)fVar51),ZEXT416((uint)fVar51));
                fVar53 = auVar49._0_4_;
                fVar53 = fVar53 * 0.5 * (3.0 - fVar51 * fVar53 * fVar53);
                fStack0000000000000078 = fVar53 * fStack0000000000000078;
                fStack000000000000007c = fVar53 * fStack000000000000007c;
                fStack0000000000000080 = fVar53 * fStack0000000000000080;
                *(float *)(unaff_RBP + -0x68) = *(float *)(unaff_RBP + -0x78);
                *(int32_t *)(unaff_RBP + -100) = *(int32_t *)(unaff_RBP + -0x74);
                *(int32_t *)(unaff_RBP + -0x60) = *(int32_t *)(unaff_RBP + -0x70);
                *(int32_t *)(unaff_RBP + -0x5c) = *(int32_t *)(unaff_RBP + -0x6c);
                *(float *)(unaff_RBP + 0x20) = fVar53 * fVar51;
                *(int32_t *)(unaff_RBP + -0x48) = *(int32_t *)(unaff_RBP + 0x20);
                *(float *)(unaff_RBP + -0x58) = fStack0000000000000078;
                *(float *)(unaff_RBP + -0x54) = fStack000000000000007c;
                *(float *)(unaff_RBP + -0x50) = fStack0000000000000080;
                *(int32_t *)(unaff_RBP + -0x4c) = uStack0000000000000084;
              }
              iVar22 = FUN_180619450(unaff_RBX + 0x408,unaff_RBP + -0x68);
              if (iVar22 == 4) goto LAB_1805ba2c7;
            }
            bVar18 = false;
            piVar33 = (int *)((int64_t)unaff_RBX + 0x1c0c);
            lVar40 = 0;
            pfVar26 = (float *)(unaff_RBX + 0x382);
            lVar37 = 0;
            do {
              if (bVar18) {
                if (iVar23 < 0) break;
                iVar21 = *piVar33;
                *piVar33 = iVar23;
                iVar22 = piVar33[1];
                piVar33[1] = iVar52;
                iVar52 = iVar22;
                iVar23 = iVar21;
              }
              else if (((int)pfVar26[-1] < 0) || (*pfVar26 <= fVar48)) {
                uVar2 = *(uint64_t *)piVar33;
                bVar18 = true;
                iVar23 = (int)uVar2;
                iStack0000000000000054 = (int)((uint64_t)uVar2 >> 0x20);
                iVar52 = iStack0000000000000054;
                _iStack0000000000000050 = uVar2;
              }
              else {
                lVar40 = lVar40 + 1;
                pfVar26 = pfVar26 + 2;
              }
              lVar37 = lVar37 + 1;
              piVar33 = piVar33 + 2;
            } while (lVar37 < 4);
            if (lVar40 < 4) {
              uVar47 = *(int32_t *)(lVar36 + 0x10);
              *(float *)(unaff_RBX + lVar40 + 0x382) = fVar48;
              *(int32_t *)((int64_t)unaff_RBX + lVar40 * 8 + 0x1c0c) = uVar47;
            }
          }
          else {
            uVar28 = (uint)(*(char *)(unaff_RBP + 0x120) != '\0');
            uVar32 = (uint64_t)uVar28;
            if ((int)uVar28 < *(int *)((int64_t)unaff_RBX + 0x200c)) {
              pfVar26 = (float *)((int64_t)unaff_RBX + uVar32 * 0x3c + 0x1c50);
              do {
                uVar28 = (uint)uVar32;
                if (*pfVar26 <= fVar48) break;
                uVar28 = uVar28 + 1;
                uVar32 = (uint64_t)uVar28;
                pfVar26 = pfVar26 + 0xf;
              } while ((int)uVar28 < *(int *)((int64_t)unaff_RBX + 0x200c));
            }
            if ((int)uVar28 < 0x10) goto LAB_1805ba031;
          }
LAB_1805ba3ca:
          iVar21 = *(int *)(unaff_RBP + 0x138);
        }
        else if (iVar4 == iVar21) {
          uVar28 = 0;
          *(int8_t *)(unaff_RBP + 0x120) = 1;
          goto LAB_1805ba031;
        }
        in_stack_00000048 = in_stack_00000048 + -1;
        iVar22 = in_stack_00000040._4_4_;
        if (in_stack_00000048 == 0) break;
      }
      uVar28 = *(uint *)(unaff_RBX + 0x402);
      uVar32 = (uint64_t)(int)uVar28;
      lVar36 = unaff_RBX[0x291];
      sVar3 = *(short *)(lVar36 + 0x52dda0 + uVar32 * 2);
      if (sVar3 == -1) {
        if ((int)uVar28 < *(int *)(lVar36 + 0x52ed94)) {
          do {
            if (*(short *)(lVar36 + 0x52dda0 + (int64_t)(int)uVar28 * 2) != -1) break;
            uVar28 = uVar28 + 1;
            uVar32 = (uint64_t)uVar28;
            *(uint *)(unaff_RBX + 0x402) = uVar28;
          } while ((int)uVar28 < *(int *)(lVar36 + 0x52ed94));
        }
      }
      else {
        uVar32 = (uint64_t)(uint)(int)sVar3;
        *(int *)(unaff_RBX + 0x402) = (int)sVar3;
      }
    } while ((int)uVar32 < iVar22);
    param_2 = *(char *)(unaff_RBP + 0x128);
  }
  if (iVar22 <= (int)unaff_RBX[0x402]) {
    *(int8_t *)(unaff_RBX + 0x389) = 0;
    if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
      bVar20 = (byte)((uint)*(int32_t *)(*(int64_t *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((int64_t)unaff_RBX + 0x11c) = bVar20;
    }
    else {
      bVar20 = *(byte *)((int64_t)unaff_RBX + 0x11c);
    }
    if (bVar20 == 0) {
      fVar48 = -600000.0;
    }
    else {
      fVar48 = -220000.0;
    }
    uVar28 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar28 = uVar28 ^ uVar28 >> 0x11;
    uVar28 = uVar28 ^ uVar28 << 5;
    *(uint *)(unaff_RBX + 0x272) = uVar28;
    uVar32 = 0;
    unaff_RBX[0x387] =
         *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x388] * 8) -
         (int64_t)(((float)(uVar28 - 1) * 2.3283064e-05 + fVar48) - 50000.0);
    uVar34 = uVar32;
    uVar38 = uVar32;
    uVar41 = uVar32;
    uVar43 = uVar32;
    uVar45 = uVar32;
    do {
      uVar42 = (uint)uVar43;
      uVar28 = uVar42;
      if (*(int *)((int64_t)unaff_RBX + uVar41 * 8 + 0x1c0c) < 0) break;
      if ((int)uVar34 < *(int *)((int64_t)unaff_RBX + 0x200c)) {
        fVar48 = *(float *)(uVar38 * 0x3c + 0x1c50 + (int64_t)unaff_RBX);
      }
      else {
        fVar48 = 0.0;
      }
      fVar53 = *(float *)(unaff_RBX + uVar41 + 0x382);
      uVar44 = (int)uVar45 + 1;
      uVar45 = (uint64_t)uVar44;
      if (fVar53 <= fVar48) {
        uVar34 = (uint64_t)((int)uVar34 + 1);
      }
      uVar28 = uVar42 + 1;
      if (fVar53 <= fVar48) {
        uVar28 = uVar42;
      }
      uVar43 = (uint64_t)uVar28;
      uVar27 = uVar41 + 1;
      if (fVar53 <= fVar48) {
        uVar27 = uVar41;
      }
      if (fVar53 <= fVar48) {
        uVar38 = uVar38 + 1;
      }
      uVar41 = uVar27;
    } while ((int)uVar44 < 4);
    if (uVar28 != 0) {
      lVar30 = (int64_t)(int)uVar28;
      iVar22 = 0x10 - uVar28;
      if ((int)(uVar28 + *(int *)((int64_t)unaff_RBX + 0x200c)) < 0x11) {
        iVar22 = *(int *)((int64_t)unaff_RBX + 0x200c);
      }
      if (3 < lVar30) {
        lVar46 = (lVar30 - 4U >> 2) + 1;
        uVar32 = lVar46 * 4;
        lVar36 = (int64_t)unaff_RBX + (int64_t)iVar22 * 0x3c + 0x1c84;
        puVar24 = (int32_t *)((int64_t)unaff_RBX + 0x1c0c);
        do {
          uVar47 = puVar24[1];
          *(int32_t *)(lVar36 + -0x38) = *puVar24;
          *(int32_t *)(lVar36 + -0x34) = uVar47;
          *(int32_t *)(lVar36 + -0x30) = 0;
          *(int32_t *)(lVar36 + -0x2c) = 0xf149f2ca;
          *(uint64_t *)(lVar36 + -4) = 0x7149f2ca;
          *(int32_t *)(lVar36 + -0x28) = 0;
          uVar47 = puVar24[3];
          *(int32_t *)(lVar36 + 4) = puVar24[2];
          *(int32_t *)(lVar36 + 8) = uVar47;
          *(int32_t *)(lVar36 + 0xc) = 0;
          *(int32_t *)(lVar36 + 0x10) = 0xf149f2ca;
          *(uint64_t *)(lVar36 + 0x38) = 0x7149f2ca;
          *(int32_t *)(lVar36 + 0x14) = 0;
          uVar47 = puVar24[5];
          *(int32_t *)(lVar36 + 0x40) = puVar24[4];
          *(int32_t *)(lVar36 + 0x44) = uVar47;
          *(int32_t *)(lVar36 + 0x48) = 0;
          *(int32_t *)(lVar36 + 0x4c) = 0xf149f2ca;
          *(uint64_t *)(lVar36 + 0x74) = 0x7149f2ca;
          *(int32_t *)(lVar36 + 0x50) = 0;
          uVar47 = puVar24[7];
          *(int32_t *)(lVar36 + 0x7c) = puVar24[6];
          *(int32_t *)(lVar36 + 0x80) = uVar47;
          *(int32_t *)(lVar36 + 0x84) = 0;
          *(int32_t *)(lVar36 + 0x88) = 0xf149f2ca;
          *(uint64_t *)(lVar36 + 0xb0) = 0x7149f2ca;
          *(int32_t *)(lVar36 + 0x8c) = 0;
          lVar46 = lVar46 + -1;
          lVar36 = lVar36 + 0xf0;
          puVar24 = puVar24 + 8;
        } while (lVar46 != 0);
      }
      if ((int64_t)uVar32 < lVar30) {
        puVar24 = (int32_t *)((int64_t)unaff_RBX + uVar32 * 8 + 0x1c0c);
        lVar30 = lVar30 - uVar32;
        lVar36 = (int64_t)unaff_RBX + ((int64_t)iVar22 + uVar32) * 0x3c + 0x1c84;
        do {
          puVar1 = puVar24 + 1;
          uVar47 = *puVar24;
          puVar24 = puVar24 + 2;
          *(int32_t *)(lVar36 + -0x34) = *puVar1;
          *(int32_t *)(lVar36 + -0x38) = uVar47;
          *(int32_t *)(lVar36 + -0x30) = 0;
          *(int32_t *)(lVar36 + -0x2c) = 0xf149f2ca;
          *(uint64_t *)(lVar36 + -4) = 0x7149f2ca;
          *(int32_t *)(lVar36 + -0x28) = 0;
          lVar30 = lVar30 + -1;
          lVar36 = lVar36 + 0x3c;
        } while (lVar30 != 0);
      }
      *(uint *)((int64_t)unaff_RBX + 0x1c2c) = uVar28;
      *(uint *)((int64_t)unaff_RBX + 0x200c) = iVar22 + uVar28;
    }
    if (*(char *)(unaff_RBP + 0x120) != '\0') {
      puVar35 = (uint64_t *)((int64_t)unaff_RBX + 0x1c4c);
      iVar22 = 1;
      uVar12 = *puVar35;
      uVar13 = *(uint64_t *)((int64_t)unaff_RBX + 0x1c54);
      uVar47 = *(int32_t *)((int64_t)unaff_RBX + 0x1c84);
      uVar14 = *(uint64_t *)((int64_t)unaff_RBX + 0x1c5c);
      uVar15 = *(uint64_t *)((int64_t)unaff_RBX + 0x1c64);
      lVar30 = (int64_t)
               (*(int *)((int64_t)unaff_RBX + 0x200c) - *(int *)((int64_t)unaff_RBX + 0x1c2c));
      uVar2 = *(uint64_t *)((int64_t)unaff_RBX + 0x1c7c);
      uVar16 = *(uint64_t *)((int64_t)unaff_RBX + 0x1c6c);
      uVar17 = *(uint64_t *)((int64_t)unaff_RBX + 0x1c74);
      *(uint64_t *)(unaff_RBP + -0x40) = uVar12;
      *(uint64_t *)(unaff_RBP + -0x38) = uVar13;
      if (1 < lVar30) {
        fVar48 = *(float *)(unaff_RBP + -0x3c);
        lVar36 = 1;
        if (4 < lVar30) {
          do {
            if (*(float *)(puVar35 + 8) <= fVar48) goto LAB_1805ba95e;
            *puVar35 = *(uint64_t *)((int64_t)puVar35 + 0x3c);
            puVar35[1] = *(uint64_t *)((int64_t)puVar35 + 0x44);
            puVar35[2] = *(uint64_t *)((int64_t)puVar35 + 0x4c);
            puVar35[3] = *(uint64_t *)((int64_t)puVar35 + 0x54);
            *(int32_t *)(puVar35 + 4) = *(int32_t *)((int64_t)puVar35 + 0x5c);
            *(int32_t *)((int64_t)puVar35 + 0x24) = *(int32_t *)(puVar35 + 0xc);
            *(int32_t *)(puVar35 + 5) = *(int32_t *)((int64_t)puVar35 + 100);
            *(int32_t *)((int64_t)puVar35 + 0x2c) = *(int32_t *)(puVar35 + 0xd);
            puVar35[6] = *(uint64_t *)((int64_t)puVar35 + 0x6c);
            *(int32_t *)(puVar35 + 7) = *(int32_t *)((int64_t)puVar35 + 0x74);
            if (*(float *)((int64_t)puVar35 + 0x7c) <= fVar48) {
              iVar22 = iVar22 + 1;
              goto LAB_1805ba95e;
            }
            *(uint64_t *)((int64_t)puVar35 + 0x3c) = puVar35[0xf];
            *(uint64_t *)((int64_t)puVar35 + 0x44) = puVar35[0x10];
            *(uint64_t *)((int64_t)puVar35 + 0x4c) = puVar35[0x11];
            *(uint64_t *)((int64_t)puVar35 + 0x54) = puVar35[0x12];
            *(int32_t *)((int64_t)puVar35 + 0x5c) = *(int32_t *)(puVar35 + 0x13);
            *(int32_t *)(puVar35 + 0xc) = *(int32_t *)((int64_t)puVar35 + 0x9c);
            *(int32_t *)((int64_t)puVar35 + 100) = *(int32_t *)(puVar35 + 0x14);
            *(int32_t *)(puVar35 + 0xd) = *(int32_t *)((int64_t)puVar35 + 0xa4);
            *(uint64_t *)((int64_t)puVar35 + 0x6c) = puVar35[0x15];
            *(int32_t *)((int64_t)puVar35 + 0x74) = *(int32_t *)(puVar35 + 0x16);
            if (*(float *)(puVar35 + 0x17) <= fVar48) {
              iVar22 = iVar22 + 2;
              goto LAB_1805ba95e;
            }
            puVar35[0xf] = *(uint64_t *)((int64_t)puVar35 + 0xb4);
            puVar35[0x10] = *(uint64_t *)((int64_t)puVar35 + 0xbc);
            puVar35[0x11] = *(uint64_t *)((int64_t)puVar35 + 0xc4);
            puVar35[0x12] = *(uint64_t *)((int64_t)puVar35 + 0xcc);
            *(int32_t *)(puVar35 + 0x13) = *(int32_t *)((int64_t)puVar35 + 0xd4);
            *(int32_t *)((int64_t)puVar35 + 0x9c) = *(int32_t *)(puVar35 + 0x1b);
            *(int32_t *)(puVar35 + 0x14) = *(int32_t *)((int64_t)puVar35 + 0xdc);
            *(int32_t *)((int64_t)puVar35 + 0xa4) = *(int32_t *)(puVar35 + 0x1c);
            puVar35[0x15] = *(uint64_t *)((int64_t)puVar35 + 0xe4);
            *(int32_t *)(puVar35 + 0x16) = *(int32_t *)((int64_t)puVar35 + 0xec);
            if (*(float *)((int64_t)puVar35 + 0xf4) <= fVar48) {
              iVar22 = iVar22 + 3;
              goto LAB_1805ba95e;
            }
            iVar22 = iVar22 + 4;
            lVar36 = lVar36 + 4;
            *(uint64_t *)((int64_t)puVar35 + 0xb4) = puVar35[0x1e];
            *(uint64_t *)((int64_t)puVar35 + 0xbc) = puVar35[0x1f];
            *(uint64_t *)((int64_t)puVar35 + 0xc4) = puVar35[0x20];
            *(uint64_t *)((int64_t)puVar35 + 0xcc) = puVar35[0x21];
            *(int32_t *)((int64_t)puVar35 + 0xd4) = *(int32_t *)(puVar35 + 0x22);
            *(int32_t *)(puVar35 + 0x1b) = *(int32_t *)((int64_t)puVar35 + 0x114);
            *(int32_t *)((int64_t)puVar35 + 0xdc) = *(int32_t *)(puVar35 + 0x23);
            *(int32_t *)(puVar35 + 0x1c) = *(int32_t *)((int64_t)puVar35 + 0x11c);
            *(uint64_t *)((int64_t)puVar35 + 0xe4) = puVar35[0x24];
            *(int32_t *)((int64_t)puVar35 + 0xec) = *(int32_t *)(puVar35 + 0x25);
            puVar35 = puVar35 + 0x1e;
          } while (lVar36 < lVar30 + -3);
        }
        if (lVar36 < lVar30) {
          puVar35 = (uint64_t *)((int64_t)unaff_RBX + lVar36 * 0x3c + 0x1c4c);
          do {
            if (*(float *)((int64_t)puVar35 + 4) <= fVar48) break;
            iVar22 = iVar22 + 1;
            lVar36 = lVar36 + 1;
            *(uint64_t *)((int64_t)puVar35 + -0x3c) = *puVar35;
            *(uint64_t *)((int64_t)puVar35 + -0x34) = puVar35[1];
            *(uint64_t *)((int64_t)puVar35 + -0x2c) = puVar35[2];
            *(uint64_t *)((int64_t)puVar35 + -0x24) = puVar35[3];
            *(int32_t *)((int64_t)puVar35 + -0x1c) = *(int32_t *)(puVar35 + 4);
            *(int32_t *)(puVar35 + -3) = *(int32_t *)((int64_t)puVar35 + 0x24);
            *(int32_t *)((int64_t)puVar35 + -0x14) = *(int32_t *)(puVar35 + 5);
            *(int32_t *)(puVar35 + -2) = *(int32_t *)((int64_t)puVar35 + 0x2c);
            *(uint64_t *)((int64_t)puVar35 + -0xc) = puVar35[6];
            *(int32_t *)((int64_t)puVar35 + -4) = *(int32_t *)(puVar35 + 7);
            puVar35 = (uint64_t *)((int64_t)puVar35 + 0x3c);
          } while (lVar36 < lVar30);
        }
      }
LAB_1805ba95e:
      if (iVar22 != 1) {
        lVar30 = (int64_t)iVar22 * 0x3c;
        puVar35 = (uint64_t *)(lVar30 + 0x1c10 + (int64_t)unaff_RBX);
        *puVar35 = uVar12;
        puVar35[1] = uVar13;
        puVar35 = (uint64_t *)(lVar30 + 0x1c20 + (int64_t)unaff_RBX);
        *puVar35 = uVar14;
        puVar35[1] = uVar15;
        puVar35 = (uint64_t *)(lVar30 + 0x1c30 + (int64_t)unaff_RBX);
        *puVar35 = uVar16;
        puVar35[1] = uVar17;
        *(uint64_t *)(lVar30 + 0x1c40 + (int64_t)unaff_RBX) = uVar2;
        *(int32_t *)(lVar30 + 0x1c48 + (int64_t)unaff_RBX) = uVar47;
      }
    }
    *(int32_t *)((int64_t)unaff_RBX + 0x1c0c) = 0xffffffff;
    *(int32_t *)((int64_t)unaff_RBX + 0x1c14) = 0xffffffff;
    *(int32_t *)((int64_t)unaff_RBX + 0x1c1c) = 0xffffffff;
    *(int32_t *)((int64_t)unaff_RBX + 0x1c24) = 0xffffffff;
    *(int32_t *)((int64_t)unaff_RBX + 0x1c2c) = 0;
  }
  if (param_2 != '\0') {
    FUN_1805beae0();
  }
  return;
}



float * FUN_1805b9e7b(float *param_1)

{
  int32_t *puVar1;
  int32_t uVar2;
  short sVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  int64_t *plVar14;
  float *pfVar15;
  int iVar16;
  uint *puVar17;
  uint64_t uVar18;
  uint64_t *puVar19;
  int64_t lVar20;
  float *pfVar21;
  int32_t *puVar22;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int iVar23;
  int unaff_EDI;
  uint uVar25;
  int64_t lVar26;
  int iVar27;
  int64_t lVar28;
  uint unaff_R14D;
  int unaff_R15D;
  bool bVar29;
  int32_t extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  int8_t auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float unaff_XMM14_Da;
  int8_t uVar40;
  uint64_t in_stack_00000040;
  int in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000080;
  uint64_t uVar24;
  uint64_t uVar30;
  
  do {
    lVar28 = unaff_RBX[0x291] + 0x30a0 + (int64_t)(int)param_1 * 0xa60;
    if ((((*(int *)(lVar28 + 0x568) == 1) &&
         (iVar27 = *(int *)(lVar28 + 0x10), iVar27 != *(int *)(*unaff_RBX + 0x10))) &&
        (*(int *)(lVar28 + 0x560) < 0)) && (cVar12 = func_0x000180508270(), cVar12 != '\0')) {
      bVar11 = false;
      if (iVar27 != unaff_EDI) {
        iVar23 = (int)unaff_RBX[0x381];
        lVar26 = (int64_t)iVar23;
        iVar16 = 0;
        lVar20 = 0;
        if (0 < iVar23) {
          plVar14 = unaff_RBX + 0x371;
          do {
            if ((int)*plVar14 == iVar27) {
              if (*(float *)((int64_t)unaff_RBX + lVar20 * 8 + 0x1b8c) <= unaff_XMM14_Da) {
                *(int *)(unaff_RBX + lVar20 + 0x371) = (int)unaff_RBX[lVar26 + 0x370];
                *(int32_t *)((int64_t)unaff_RBX + lVar20 * 8 + 0x1b8c) =
                     *(int32_t *)((int64_t)unaff_RBX + lVar26 * 8 + 0x1b84);
                *(int32_t *)(unaff_RBX + lVar26 + 0x370) = 0xffffffff;
                *(int *)(unaff_RBX + 0x381) = (int)unaff_RBX[0x381] + -1;
              }
              else {
                bVar11 = true;
              }
              break;
            }
            iVar16 = iVar16 + 1;
            lVar20 = lVar20 + 1;
            plVar14 = plVar14 + 1;
          } while (iVar16 < iVar23);
        }
      }
      uVar40 = *(int8_t *)(unaff_RBP + 0x130);
      pfVar15 = (float *)FUN_1805bcd40(extraout_XMM0_Da,lVar28);
      if (-1e+30 < extraout_XMM0_Da_00) {
        if (iVar27 == unaff_EDI) {
          uVar25 = 0;
          *(int8_t *)(unaff_RBP + 0x120) = 1;
LAB_1805ba031:
          if (iVar27 == *(int *)(unaff_RBP + 0x138)) {
            if (!bVar11) {
LAB_1805ba2c7:
              iVar27 = *(int *)((int64_t)unaff_RBX + 0x200c);
              if (iVar27 < 0x10) {
                iVar27 = iVar27 + 1;
                *(int *)((int64_t)unaff_RBX + 0x200c) = iVar27;
              }
              lVar20 = (int64_t)(int)uVar25;
              lVar26 = (int64_t)(iVar27 + -1);
              if (lVar20 < lVar26) {
                puVar19 = (uint64_t *)((int64_t)unaff_RBX + lVar26 * 0x3c + 0x1c4c);
                lVar26 = lVar26 - lVar20;
                do {
                  *puVar19 = *(uint64_t *)((int64_t)puVar19 + -0x3c);
                  puVar19[1] = *(uint64_t *)((int64_t)puVar19 + -0x34);
                  puVar19[2] = *(uint64_t *)((int64_t)puVar19 + -0x2c);
                  puVar19[3] = *(uint64_t *)((int64_t)puVar19 + -0x24);
                  *(int32_t *)(puVar19 + 4) = *(int32_t *)((int64_t)puVar19 + -0x1c);
                  *(int32_t *)((int64_t)puVar19 + 0x24) = *(int32_t *)(puVar19 + -3);
                  *(int32_t *)(puVar19 + 5) = *(int32_t *)((int64_t)puVar19 + -0x14);
                  *(int32_t *)((int64_t)puVar19 + 0x2c) = *(int32_t *)(puVar19 + -2);
                  puVar19[6] = *(uint64_t *)((int64_t)puVar19 + -0xc);
                  *(int32_t *)(puVar19 + 7) = *(int32_t *)((int64_t)puVar19 + -4);
                  puVar19 = (uint64_t *)((int64_t)puVar19 + -0x3c);
                  lVar26 = lVar26 + -1;
                } while (lVar26 != 0);
              }
              lVar20 = lVar20 * 0x3c;
              *(int32_t *)(lVar20 + 0x1c4c + (int64_t)unaff_RBX) =
                   *(int32_t *)(lVar28 + 0x10);
              pfVar15 = (float *)0x0;
              *(int32_t *)(lVar20 + 0x1c54 + (int64_t)unaff_RBX) = 0;
              *(float *)(lVar20 + 0x1c50 + (int64_t)unaff_RBX) = extraout_XMM0_Da_00;
              *(int32_t *)(lVar20 + 0x1c58 + (int64_t)unaff_RBX) = 0xf149f2ca;
              *(uint64_t *)(lVar20 + 0x1c80 + (int64_t)unaff_RBX) = 0x7149f2ca;
              *(int32_t *)(lVar20 + 0x1c5c + (int64_t)unaff_RBX) = 0;
              goto LAB_1805ba3ca;
            }
          }
          else if (!bVar11) {
            lVar20 = *(int64_t *)(lVar28 + 0x6d8);
            lVar26 = *(int64_t *)(*unaff_RBX + 0x6d8);
            fVar37 = *(float *)(lVar20 + 0x8c8);
            fVar36 = *(float *)(lVar26 + 0x8e8);
            fVar35 = *(float *)(lVar26 + 0x8ec);
            uVar2 = *(int32_t *)(lVar26 + 0x8f0);
            fVar39 = *(float *)(lVar20 + 0x8cc);
            fVar38 = *(float *)(lVar20 + 0x8c4) - *(float *)(lVar26 + 0x8e4);
            *(float *)(unaff_RBP + -0x68) = *(float *)(lVar26 + 0x8e4);
            fVar37 = fVar37 - fVar36;
            fVar39 = fVar39 - fVar35;
            *(float *)(unaff_RBP + -100) = fVar36;
            *(float *)(unaff_RBP + -0x60) = fVar35;
            *(int32_t *)(unaff_RBP + -0x5c) = uVar2;
            fVar35 = fVar38 * fVar38 + fVar37 * fVar37 + fVar39 * fVar39;
            auVar31 = rsqrtss(ZEXT416((uint)fVar35),ZEXT416((uint)fVar35));
            fVar36 = auVar31._0_4_;
            fVar36 = fVar36 * 0.5 * (3.0 - fVar35 * fVar36 * fVar36);
            auVar31._4_4_ = 0x3f000000;
            auVar31._0_4_ = fVar36;
            auVar31._8_4_ = 0x3f000000;
            auVar31._12_4_ = 0x3f000000;
            auVar32._4_12_ = auVar31._4_12_;
            auVar32._0_4_ = fVar36 * fVar37;
            uVar30 = auVar32._0_8_;
            fVar37 = fVar36 * fVar39;
            *(float *)(unaff_RBP + -0x48) = fVar36 * fVar35;
            *(float *)(unaff_RBP + -0x58) = fVar36 * fVar38;
            *(float *)(unaff_RBP + -0x54) = auVar32._0_4_;
            *(float *)(unaff_RBP + -0x50) = fVar37;
            *(int32_t *)(unaff_RBP + -0x4c) = 0x7f7fffff;
            if ((fVar36 * fVar35 < *(float *)(unaff_RBP + -0x28)) && (fVar39 < -0.85)) {
              fVar37 = *(float *)(lVar20 + 0x8c4) - *(float *)(unaff_RBP + -0x78);
              fVar35 = *(float *)(lVar20 + 0x8c8) - *(float *)(unaff_RBP + -0x74);
              fVar36 = *(float *)(lVar20 + 0x8cc) - *(float *)(unaff_RBP + -0x70);
              *(int32_t *)(unaff_RBP + -0x7c) = 0x7f7fffff;
              fVar38 = fVar35 * fVar35 + fVar37 * fVar37 + fVar36 * fVar36;
              auVar31 = rsqrtss(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38));
              fVar39 = auVar31._0_4_;
              fVar39 = fVar39 * 0.5 * (3.0 - fVar38 * fVar39 * fVar39);
              fVar37 = fVar39 * fVar37;
              auVar33._4_4_ = 0x3f000000;
              auVar33._0_4_ = fVar39;
              auVar33._8_4_ = 0x3f000000;
              auVar33._12_4_ = 0x3f000000;
              auVar34._4_12_ = auVar33._4_12_;
              auVar34._0_4_ = fVar39 * fVar36;
              uVar30 = auVar34._0_8_;
              *(float *)(unaff_RBP + -0x68) = *(float *)(unaff_RBP + -0x78);
              *(int32_t *)(unaff_RBP + -100) = *(int32_t *)(unaff_RBP + -0x74);
              *(int32_t *)(unaff_RBP + -0x60) = *(int32_t *)(unaff_RBP + -0x70);
              *(int32_t *)(unaff_RBP + -0x5c) = *(int32_t *)(unaff_RBP + -0x6c);
              *(float *)(unaff_RBP + 0x20) = fVar39 * fVar38;
              *(int32_t *)(unaff_RBP + -0x48) = *(int32_t *)(unaff_RBP + 0x20);
              *(float *)(unaff_RBP + -0x58) = fVar37;
              *(float *)(unaff_RBP + -0x54) = fVar39 * fVar35;
              *(float *)(unaff_RBP + -0x50) = auVar34._0_4_;
              *(int32_t *)(unaff_RBP + -0x4c) = in_stack_00000080._4_4_;
            }
            pfVar15 = (float *)FUN_180619450(unaff_RBX + 0x408,unaff_RBP + -0x68,uVar30,fVar37,
                                             uVar40);
            if ((int)pfVar15 == 4) goto LAB_1805ba2c7;
          }
          bVar11 = false;
          puVar17 = (uint *)((int64_t)unaff_RBX + 0x1c0c);
          lVar26 = 0;
          pfVar21 = (float *)(unaff_RBX + 0x382);
          lVar20 = 0;
          do {
            if (bVar11) {
              if ((int)unaff_R14D < 0) break;
              uVar4 = *puVar17;
              pfVar15 = (float *)(uint64_t)uVar4;
              *puVar17 = unaff_R14D;
              uVar25 = puVar17[1];
              puVar17[1] = in_stack_00000050._4_4_;
              in_stack_00000050._4_4_ = uVar25;
              unaff_R14D = uVar4;
            }
            else if (((int)pfVar21[-1] < 0) || (*pfVar21 <= extraout_XMM0_Da_00)) {
              pfVar15 = *(float **)puVar17;
              bVar11 = true;
              unaff_R14D = (uint)pfVar15;
              in_stack_00000050._4_4_ = (uint)((uint64_t)pfVar15 >> 0x20);
            }
            else {
              lVar26 = lVar26 + 1;
              pfVar21 = pfVar21 + 2;
            }
            lVar20 = lVar20 + 1;
            puVar17 = puVar17 + 2;
          } while (lVar20 < 4);
          if (lVar26 < 4) {
            uVar25 = *(uint *)(lVar28 + 0x10);
            pfVar15 = (float *)(uint64_t)uVar25;
            *(float *)(unaff_RBX + lVar26 + 0x382) = extraout_XMM0_Da_00;
            *(uint *)((int64_t)unaff_RBX + lVar26 * 8 + 0x1c0c) = uVar25;
          }
        }
        else {
          bVar29 = *(char *)(unaff_RBP + 0x120) != '\0';
          uVar24 = (uint64_t)bVar29;
          uVar25 = (uint)bVar29;
          if ((int)uVar25 < *(int *)((int64_t)unaff_RBX + 0x200c)) {
            pfVar15 = (float *)((int64_t)unaff_RBX + uVar24 * 0x3c + 0x1c50);
            do {
              uVar25 = (uint)uVar24;
              if (*pfVar15 <= extraout_XMM0_Da_00) break;
              uVar25 = uVar25 + 1;
              uVar24 = (uint64_t)uVar25;
              pfVar15 = pfVar15 + 0xf;
            } while ((int)uVar25 < *(int *)((int64_t)unaff_RBX + 0x200c));
          }
          if ((int)uVar25 < 0x10) goto LAB_1805ba031;
        }
LAB_1805ba3ca:
        unaff_EDI = *(int *)(unaff_RBP + 0x138);
      }
      else if (iVar27 == unaff_EDI) {
        uVar25 = 0;
        *(int8_t *)(unaff_RBP + 0x120) = 1;
        goto LAB_1805ba031;
      }
      in_stack_00000048 = in_stack_00000048 + -1;
      unaff_R15D = in_stack_00000040._4_4_;
      if (in_stack_00000048 == 0) break;
    }
    uVar25 = *(uint *)(unaff_RBX + 0x402);
    pfVar15 = (float *)(int64_t)(int)uVar25;
    lVar28 = unaff_RBX[0x291];
    sVar3 = *(short *)(lVar28 + 0x52dda0 + (int64_t)pfVar15 * 2);
    if (sVar3 == -1) {
      param_1 = pfVar15;
      if ((int)uVar25 < *(int *)(lVar28 + 0x52ed94)) {
        do {
          pfVar15 = (float *)(int64_t)(int)uVar25;
          if (*(short *)(lVar28 + 0x52dda0 + (int64_t)pfVar15 * 2) != -1) break;
          uVar25 = uVar25 + 1;
          param_1 = (float *)(uint64_t)uVar25;
          *(uint *)(unaff_RBX + 0x402) = uVar25;
        } while ((int)uVar25 < *(int *)(lVar28 + 0x52ed94));
      }
    }
    else {
      param_1 = (float *)(uint64_t)(uint)(int)sVar3;
      *(int *)(unaff_RBX + 0x402) = (int)sVar3;
    }
  } while ((int)param_1 < unaff_R15D);
  cVar12 = *(char *)(unaff_RBP + 0x128);
  if (unaff_R15D <= (int)unaff_RBX[0x402]) {
    *(int8_t *)(unaff_RBX + 0x389) = 0;
    if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
      bVar13 = (byte)((uint)*(int32_t *)(*(int64_t *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((int64_t)unaff_RBX + 0x11c) = bVar13;
    }
    else {
      bVar13 = *(byte *)((int64_t)unaff_RBX + 0x11c);
    }
    if (bVar13 == 0) {
      fVar37 = -600000.0;
    }
    else {
      fVar37 = -220000.0;
    }
    uVar25 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar25 = uVar25 ^ uVar25 >> 0x11;
    uVar25 = uVar25 ^ uVar25 << 5;
    *(uint *)(unaff_RBX + 0x272) = uVar25;
    pfVar15 = (float *)(int64_t)(int)unaff_RBX[0x388];
    iVar23 = 0;
    uVar24 = 0;
    unaff_RBX[0x387] =
         *(int64_t *)(&system_error_code + (int64_t)pfVar15 * 8) -
         (int64_t)(((float)(uVar25 - 1) * 2.3283064e-05 + fVar37) - 50000.0);
    pfVar21 = (float *)0x0;
    uVar18 = uVar24;
    lVar28 = 0;
    iVar27 = iVar23;
    do {
      if (*(int *)((int64_t)unaff_RBX + lVar28 * 8 + 0x1c0c) < 0) break;
      if ((int)uVar18 < *(int *)((int64_t)unaff_RBX + 0x200c)) {
        fVar37 = *(float *)((int64_t)pfVar21 * 0x3c + 0x1c50 + (int64_t)unaff_RBX);
      }
      else {
        fVar37 = 0.0;
      }
      fVar39 = *(float *)(unaff_RBX + lVar28 + 0x382);
      iVar27 = iVar27 + 1;
      if (fVar39 <= fVar37) {
        uVar18 = (uint64_t)((int)uVar18 + 1);
      }
      iVar16 = iVar23 + 1;
      if (fVar39 <= fVar37) {
        iVar16 = iVar23;
      }
      iVar23 = iVar16;
      lVar20 = lVar28 + 1;
      if (fVar39 <= fVar37) {
        lVar20 = lVar28;
      }
      pfVar15 = (float *)((int64_t)pfVar21 + 1);
      if (fVar39 <= fVar37) {
        pfVar21 = pfVar15;
      }
      lVar28 = lVar20;
    } while (iVar27 < 4);
    if (iVar23 != 0) {
      lVar28 = (int64_t)iVar23;
      iVar27 = 0x10 - iVar23;
      if (iVar23 + *(int *)((int64_t)unaff_RBX + 0x200c) < 0x11) {
        iVar27 = *(int *)((int64_t)unaff_RBX + 0x200c);
      }
      if (3 < lVar28) {
        lVar26 = (lVar28 - 4U >> 2) + 1;
        uVar24 = lVar26 * 4;
        lVar20 = (int64_t)unaff_RBX + (int64_t)iVar27 * 0x3c + 0x1c84;
        puVar22 = (int32_t *)((int64_t)unaff_RBX + 0x1c0c);
        do {
          uVar2 = puVar22[1];
          *(int32_t *)(lVar20 + -0x38) = *puVar22;
          *(int32_t *)(lVar20 + -0x34) = uVar2;
          *(int32_t *)(lVar20 + -0x30) = 0;
          *(int32_t *)(lVar20 + -0x2c) = 0xf149f2ca;
          *(uint64_t *)(lVar20 + -4) = 0x7149f2ca;
          *(int32_t *)(lVar20 + -0x28) = 0;
          uVar2 = puVar22[3];
          *(int32_t *)(lVar20 + 4) = puVar22[2];
          *(int32_t *)(lVar20 + 8) = uVar2;
          *(int32_t *)(lVar20 + 0xc) = 0;
          *(int32_t *)(lVar20 + 0x10) = 0xf149f2ca;
          *(uint64_t *)(lVar20 + 0x38) = 0x7149f2ca;
          *(int32_t *)(lVar20 + 0x14) = 0;
          uVar2 = puVar22[5];
          *(int32_t *)(lVar20 + 0x40) = puVar22[4];
          *(int32_t *)(lVar20 + 0x44) = uVar2;
          *(int32_t *)(lVar20 + 0x48) = 0;
          *(int32_t *)(lVar20 + 0x4c) = 0xf149f2ca;
          *(uint64_t *)(lVar20 + 0x74) = 0x7149f2ca;
          *(int32_t *)(lVar20 + 0x50) = 0;
          uVar2 = puVar22[7];
          *(int32_t *)(lVar20 + 0x7c) = puVar22[6];
          *(int32_t *)(lVar20 + 0x80) = uVar2;
          *(int32_t *)(lVar20 + 0x84) = 0;
          *(int32_t *)(lVar20 + 0x88) = 0xf149f2ca;
          *(uint64_t *)(lVar20 + 0xb0) = 0x7149f2ca;
          *(int32_t *)(lVar20 + 0x8c) = 0;
          lVar26 = lVar26 + -1;
          lVar20 = lVar20 + 0xf0;
          puVar22 = puVar22 + 8;
        } while (lVar26 != 0);
      }
      if ((int64_t)uVar24 < lVar28) {
        puVar22 = (int32_t *)((int64_t)unaff_RBX + uVar24 * 8 + 0x1c0c);
        lVar28 = lVar28 - uVar24;
        lVar20 = (int64_t)unaff_RBX + ((int64_t)iVar27 + uVar24) * 0x3c + 0x1c84;
        do {
          puVar1 = puVar22 + 1;
          uVar2 = *puVar22;
          puVar22 = puVar22 + 2;
          *(int32_t *)(lVar20 + -0x34) = *puVar1;
          *(int32_t *)(lVar20 + -0x38) = uVar2;
          *(int32_t *)(lVar20 + -0x30) = 0;
          *(int32_t *)(lVar20 + -0x2c) = 0xf149f2ca;
          *(uint64_t *)(lVar20 + -4) = 0x7149f2ca;
          *(int32_t *)(lVar20 + -0x28) = 0;
          lVar28 = lVar28 + -1;
          lVar20 = lVar20 + 0x3c;
        } while (lVar28 != 0);
      }
      pfVar15 = (float *)(uint64_t)(uint)(iVar27 + iVar23);
      *(int *)((int64_t)unaff_RBX + 0x1c2c) = iVar23;
      *(int *)((int64_t)unaff_RBX + 0x200c) = iVar27 + iVar23;
    }
    if (*(char *)(unaff_RBP + 0x120) != '\0') {
      puVar19 = (uint64_t *)((int64_t)unaff_RBX + 0x1c4c);
      iVar27 = 1;
      uVar5 = *puVar19;
      uVar6 = *(uint64_t *)((int64_t)unaff_RBX + 0x1c54);
      uVar2 = *(int32_t *)((int64_t)unaff_RBX + 0x1c84);
      uVar7 = *(uint64_t *)((int64_t)unaff_RBX + 0x1c5c);
      uVar8 = *(uint64_t *)((int64_t)unaff_RBX + 0x1c64);
      lVar28 = (int64_t)
               (*(int *)((int64_t)unaff_RBX + 0x200c) - *(int *)((int64_t)unaff_RBX + 0x1c2c));
      uVar30 = *(uint64_t *)((int64_t)unaff_RBX + 0x1c7c);
      uVar9 = *(uint64_t *)((int64_t)unaff_RBX + 0x1c6c);
      uVar10 = *(uint64_t *)((int64_t)unaff_RBX + 0x1c74);
      *(uint64_t *)(unaff_RBP + -0x40) = uVar5;
      *(uint64_t *)(unaff_RBP + -0x38) = uVar6;
      if (1 < lVar28) {
        fVar37 = *(float *)(unaff_RBP + -0x3c);
        lVar20 = 1;
        if (4 < lVar28) {
          do {
            if (*(float *)(puVar19 + 8) <= fVar37) goto LAB_1805ba95e;
            *puVar19 = *(uint64_t *)((int64_t)puVar19 + 0x3c);
            puVar19[1] = *(uint64_t *)((int64_t)puVar19 + 0x44);
            puVar19[2] = *(uint64_t *)((int64_t)puVar19 + 0x4c);
            puVar19[3] = *(uint64_t *)((int64_t)puVar19 + 0x54);
            *(int32_t *)(puVar19 + 4) = *(int32_t *)((int64_t)puVar19 + 0x5c);
            *(int32_t *)((int64_t)puVar19 + 0x24) = *(int32_t *)(puVar19 + 0xc);
            *(int32_t *)(puVar19 + 5) = *(int32_t *)((int64_t)puVar19 + 100);
            *(int32_t *)((int64_t)puVar19 + 0x2c) = *(int32_t *)(puVar19 + 0xd);
            puVar19[6] = *(uint64_t *)((int64_t)puVar19 + 0x6c);
            *(int32_t *)(puVar19 + 7) = *(int32_t *)((int64_t)puVar19 + 0x74);
            if (*(float *)((int64_t)puVar19 + 0x7c) <= fVar37) {
              iVar27 = iVar27 + 1;
              goto LAB_1805ba95e;
            }
            *(uint64_t *)((int64_t)puVar19 + 0x3c) = puVar19[0xf];
            *(uint64_t *)((int64_t)puVar19 + 0x44) = puVar19[0x10];
            *(uint64_t *)((int64_t)puVar19 + 0x4c) = puVar19[0x11];
            *(uint64_t *)((int64_t)puVar19 + 0x54) = puVar19[0x12];
            *(int32_t *)((int64_t)puVar19 + 0x5c) = *(int32_t *)(puVar19 + 0x13);
            *(int32_t *)(puVar19 + 0xc) = *(int32_t *)((int64_t)puVar19 + 0x9c);
            *(int32_t *)((int64_t)puVar19 + 100) = *(int32_t *)(puVar19 + 0x14);
            *(int32_t *)(puVar19 + 0xd) = *(int32_t *)((int64_t)puVar19 + 0xa4);
            *(uint64_t *)((int64_t)puVar19 + 0x6c) = puVar19[0x15];
            *(int32_t *)((int64_t)puVar19 + 0x74) = *(int32_t *)(puVar19 + 0x16);
            if (*(float *)(puVar19 + 0x17) <= fVar37) {
              iVar27 = iVar27 + 2;
              goto LAB_1805ba95e;
            }
            puVar19[0xf] = *(uint64_t *)((int64_t)puVar19 + 0xb4);
            puVar19[0x10] = *(uint64_t *)((int64_t)puVar19 + 0xbc);
            puVar19[0x11] = *(uint64_t *)((int64_t)puVar19 + 0xc4);
            puVar19[0x12] = *(uint64_t *)((int64_t)puVar19 + 0xcc);
            *(int32_t *)(puVar19 + 0x13) = *(int32_t *)((int64_t)puVar19 + 0xd4);
            *(int32_t *)((int64_t)puVar19 + 0x9c) = *(int32_t *)(puVar19 + 0x1b);
            *(int32_t *)(puVar19 + 0x14) = *(int32_t *)((int64_t)puVar19 + 0xdc);
            *(int32_t *)((int64_t)puVar19 + 0xa4) = *(int32_t *)(puVar19 + 0x1c);
            puVar19[0x15] = *(uint64_t *)((int64_t)puVar19 + 0xe4);
            *(int32_t *)(puVar19 + 0x16) = *(int32_t *)((int64_t)puVar19 + 0xec);
            if (*(float *)((int64_t)puVar19 + 0xf4) <= fVar37) {
              iVar27 = iVar27 + 3;
              goto LAB_1805ba95e;
            }
            iVar27 = iVar27 + 4;
            lVar20 = lVar20 + 4;
            *(uint64_t *)((int64_t)puVar19 + 0xb4) = puVar19[0x1e];
            *(uint64_t *)((int64_t)puVar19 + 0xbc) = puVar19[0x1f];
            *(uint64_t *)((int64_t)puVar19 + 0xc4) = puVar19[0x20];
            *(uint64_t *)((int64_t)puVar19 + 0xcc) = puVar19[0x21];
            *(int32_t *)((int64_t)puVar19 + 0xd4) = *(int32_t *)(puVar19 + 0x22);
            *(int32_t *)(puVar19 + 0x1b) = *(int32_t *)((int64_t)puVar19 + 0x114);
            *(int32_t *)((int64_t)puVar19 + 0xdc) = *(int32_t *)(puVar19 + 0x23);
            *(int32_t *)(puVar19 + 0x1c) = *(int32_t *)((int64_t)puVar19 + 0x11c);
            *(uint64_t *)((int64_t)puVar19 + 0xe4) = puVar19[0x24];
            *(int32_t *)((int64_t)puVar19 + 0xec) = *(int32_t *)(puVar19 + 0x25);
            puVar19 = puVar19 + 0x1e;
          } while (lVar20 < lVar28 + -3);
        }
        if (lVar20 < lVar28) {
          puVar19 = (uint64_t *)((int64_t)unaff_RBX + lVar20 * 0x3c + 0x1c4c);
          do {
            if (*(float *)((int64_t)puVar19 + 4) <= fVar37) break;
            iVar27 = iVar27 + 1;
            lVar20 = lVar20 + 1;
            *(uint64_t *)((int64_t)puVar19 + -0x3c) = *puVar19;
            *(uint64_t *)((int64_t)puVar19 + -0x34) = puVar19[1];
            *(uint64_t *)((int64_t)puVar19 + -0x2c) = puVar19[2];
            *(uint64_t *)((int64_t)puVar19 + -0x24) = puVar19[3];
            *(int32_t *)((int64_t)puVar19 + -0x1c) = *(int32_t *)(puVar19 + 4);
            *(int32_t *)(puVar19 + -3) = *(int32_t *)((int64_t)puVar19 + 0x24);
            *(int32_t *)((int64_t)puVar19 + -0x14) = *(int32_t *)(puVar19 + 5);
            *(int32_t *)(puVar19 + -2) = *(int32_t *)((int64_t)puVar19 + 0x2c);
            *(uint64_t *)((int64_t)puVar19 + -0xc) = puVar19[6];
            *(int32_t *)((int64_t)puVar19 + -4) = *(int32_t *)(puVar19 + 7);
            puVar19 = (uint64_t *)((int64_t)puVar19 + 0x3c);
          } while (lVar20 < lVar28);
        }
      }
LAB_1805ba95e:
      pfVar15 = (float *)(uint64_t)(iVar27 - 1U);
      if (iVar27 - 1U != 0) {
        pfVar15 = (float *)(int64_t)iVar27;
        lVar28 = (int64_t)pfVar15 * 0x3c;
        puVar19 = (uint64_t *)(lVar28 + 0x1c10 + (int64_t)unaff_RBX);
        *puVar19 = uVar5;
        puVar19[1] = uVar6;
        puVar19 = (uint64_t *)(lVar28 + 0x1c20 + (int64_t)unaff_RBX);
        *puVar19 = uVar7;
        puVar19[1] = uVar8;
        puVar19 = (uint64_t *)(lVar28 + 0x1c30 + (int64_t)unaff_RBX);
        *puVar19 = uVar9;
        puVar19[1] = uVar10;
        *(uint64_t *)(lVar28 + 0x1c40 + (int64_t)unaff_RBX) = uVar30;
        *(int32_t *)(lVar28 + 0x1c48 + (int64_t)unaff_RBX) = uVar2;
      }
    }
    *(int32_t *)((int64_t)unaff_RBX + 0x1c0c) = 0xffffffff;
    *(int32_t *)((int64_t)unaff_RBX + 0x1c14) = 0xffffffff;
    *(int32_t *)((int64_t)unaff_RBX + 0x1c1c) = 0xffffffff;
    *(int32_t *)((int64_t)unaff_RBX + 0x1c24) = 0xffffffff;
    *(int32_t *)((int64_t)unaff_RBX + 0x1c2c) = 0;
  }
  if (cVar12 != '\0') {
    pfVar15 = (float *)FUN_1805beae0();
  }
  return pfVar15;
}








