#include "TaleWorlds.Native.Split.h"

// 99_part_08_part072_sub002_sub002.c - 1 个函数

// 函数: void FUN_1805b99a6(longlong *param_1,char param_2)
void FUN_1805b99a6(longlong *param_1,char param_2)

{
  int32_t *puVar1;
  uint64_t uVar2;
  short sVar3;
  int iVar4;
  int32_t uVar5;
  longlong lVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  bool bVar19;
  char cVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong in_RAX;
  int32_t *puVar25;
  longlong *plVar26;
  float *pfVar27;
  ulonglong uVar28;
  uint uVar29;
  int iVar30;
  longlong lVar31;
  byte *pbVar32;
  ulonglong uVar33;
  int *piVar34;
  ulonglong uVar35;
  uint64_t *puVar36;
  longlong lVar37;
  longlong lVar38;
  ulonglong uVar39;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  void *puVar40;
  longlong lVar41;
  ulonglong uVar42;
  uint uVar43;
  ulonglong uVar44;
  uint uVar45;
  longlong lVar47;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
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
  ulonglong uVar46;
  
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
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
  lVar31 = param_1[0x438];
  if ((char)lVar31 == '\0') {
    iVar23 = *(int *)((longlong)param_1 + 0x14b4);
  }
  else {
    iVar23 = *(int *)((longlong)param_1 + 0x21c4);
  }
  lVar37 = param_1[0x295];
  *(int *)(unaff_RBP + 0x138) = iVar23;
  if ((int)lVar37 != 9) {
    if ((char)lVar31 == '\0') {
      iVar22 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar22 = *(int *)((longlong)param_1 + 0x21c4);
    }
    if (-1 < iVar22) {
      lVar31 = *(longlong *)((longlong)iVar22 * 0xa60 + 0x3778 + param_1[0x291]);
      if (((lVar31 != 0) && (*(char *)(lVar31 + 0x8be) != '\0')) &&
         (*(int *)((longlong)iVar23 * 0xa60 + 0x3608 + param_1[0x291]) == 1)) {
        bVar19 = true;
        goto LAB_1805b9a5e;
      }
    }
  }
  bVar19 = false;
  *(int32_t *)(unaff_RBP + 0x138) = 0xffffffff;
LAB_1805b9a5e:
  uVar29 = *(uint *)(param_1 + 2);
  plVar26 = param_1 + 1;
  if ((uVar29 >> 0x1b & 1) == 0) {
    bVar21 = (byte)((uint)*(int32_t *)(*(longlong *)*plVar26 + 0x564) >> 0x1f) ^ 1;
    *(byte *)((longlong)param_1 + 0x11c) = bVar21;
  }
  else {
    bVar21 = *(byte *)((longlong)param_1 + 0x11c);
  }
  lVar31 = *param_1;
  lVar37 = *(longlong *)(lVar31 + 0x20);
  uStack0000000000000058 = *(int32_t *)(lVar37 + 0xc);
  uStack000000000000005c = *(int32_t *)(lVar37 + 0x10);
  uStack0000000000000060 = *(int32_t *)(lVar37 + 0x14);
  uStack0000000000000064 = *(int32_t *)(lVar37 + 0x18);
  if (bVar21 != 0) {
    if (((*(uint *)(lVar31 + 0x56c) & 0x2000) != 0) && (-1 < *(int *)(lVar31 + 0x564))) {
      lVar37 = (longlong)*(int *)(lVar31 + 0x564) * 0xa60;
      if (*(int *)(lVar37 + 0x3608 + *(longlong *)(lVar31 + 0x8d8)) == 1) {
        lVar31 = *(longlong *)(lVar31 + 0x8d8) + 0x30a0 + lVar37;
      }
    }
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(int32_t *)(*(longlong *)(lVar31 + 0x20) + 0x34));
  }
  cVar20 = false;
  *(int8_t *)(unaff_RBP + 0x130) = 0;
  if ((uVar29 & 0x20) == 0) {
    param_1[0x15] = *(longlong *)(*(longlong *)(*(longlong *)*plVar26 + 0x8f8) + 0x9e8);
    *(uint *)(param_1 + 2) = uVar29 | 0x20;
  }
  lVar31 = param_1[0x15];
  if ((((lVar31 != 0) && (0 < *(int *)(lVar31 + 0x30))) &&
      ((uVar33 = *(ulonglong *)
                  ((longlong)*(int *)(lVar31 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar31 + 0xd0)),
       (uVar33 >> 9 & 1) == 0 || (0 < *(short *)(lVar31 + 8))))) && ((uVar33 >> 1 & 1) != 0)) {
    lVar37 = *param_1;
    if ((*(longlong *)(lVar37 + 0x628) == lVar31) && (*(int *)(lVar37 + 0x644) == -1)) {
      iVar23 = *(int *)(lVar37 + 0x638);
    }
    else {
      *(int32_t *)(unaff_RBP + 0x130) = 0xffffffff;
      *(int32_t *)(unaff_RBP + 0x120) = 0xffffffff;
      in_stack_00000040._4_4_ = 0xffffffff;
      FUN_18050e440(lVar37,lVar31,unaff_RBP + 0x120,(longlong)&stack0x00000040 + 4,unaff_RBP + 0x130
                   );
      iVar23 = *(int *)(unaff_RBP + 0x120);
    }
    cVar20 = 0 < iVar23;
    *(char *)(unaff_RBP + 0x130) = cVar20;
  }
  puVar40 = &UNK_180a06420;
  if (param_2 != '\0') {
    puVar40 = &UNK_180a06418;
  }
  func_0x000180508000(param_1,&UNK_180a37490,puVar40,cVar20);
  if (cVar20 == '\0') {
    fVar48 = *(float *)((longlong)param_1 + 0x2c);
    lVar31 = param_1[6];
    uVar5 = *(int32_t *)((longlong)param_1 + 0x34);
    lVar37 = param_1[3];
    uVar7 = *(int32_t *)((longlong)param_1 + 0x1c);
    lVar47 = param_1[4];
    uVar8 = *(int32_t *)((longlong)param_1 + 0x24);
    *(int *)(unaff_RBP + -0x30) = (int)param_1[5];
    *(float *)(unaff_RBP + -0x2c) = fVar48;
    *(int *)(unaff_RBP + -0x28) = (int)lVar31;
    *(int32_t *)(unaff_RBP + -0x24) = uVar5;
    *(int *)(unaff_RBP + -0x40) = (int)lVar37;
    *(int32_t *)(unaff_RBP + -0x3c) = uVar7;
    *(int *)(unaff_RBP + -0x38) = (int)lVar47;
    *(int32_t *)(unaff_RBP + -0x34) = uVar8;
    if (fVar48 < 0.0) {
      FUN_1805d5a50(plVar26);
      uVar5 = *(int32_t *)((longlong)param_1 + 0x1c);
      lVar31 = param_1[4];
      uVar7 = *(int32_t *)((longlong)param_1 + 0x24);
      lVar37 = param_1[5];
      uVar8 = *(int32_t *)((longlong)param_1 + 0x2c);
      lVar47 = param_1[6];
      uVar9 = *(int32_t *)((longlong)param_1 + 0x34);
      *(int *)(unaff_RBP + -0x40) = (int)param_1[3];
      *(int32_t *)(unaff_RBP + -0x3c) = uVar5;
      *(int *)(unaff_RBP + -0x38) = (int)lVar31;
      *(int32_t *)(unaff_RBP + -0x34) = uVar7;
      *(int *)(unaff_RBP + -0x30) = (int)lVar37;
      *(int32_t *)(unaff_RBP + -0x2c) = uVar8;
      *(int *)(unaff_RBP + -0x28) = (int)lVar47;
      *(int32_t *)(unaff_RBP + -0x24) = uVar9;
    }
    lVar31 = *(longlong *)(*param_1 + 0x8f8) + 8 +
             (longlong)*(int *)((longlong)param_1 + 0x2154) * 0x1f8;
    if ((*(int *)(lVar31 + 0x30) < 1) ||
       (((uVar33 = *(ulonglong *)
                    ((longlong)*(int *)(lVar31 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar31 + 0xd0))
         , (uVar33 >> 9 & 1) != 0 && (*(short *)(lVar31 + 8) < 1)) || ((uVar33 >> 1 & 1) == 0)))) {
      iVar23 = (int)((*(longlong *)(lVar31 + 0xd8) - *(longlong *)(lVar31 + 0xd0)) / 0xa0);
      if (0 < iVar23) {
        pbVar32 = (byte *)(*(longlong *)(lVar31 + 0xd0) + 0x50);
        lVar37 = 0;
        do {
          if ((*pbVar32 >> 1 & 1) != 0) break;
          lVar37 = lVar37 + 1;
          pbVar32 = pbVar32 + 0xa0;
        } while (lVar37 < iVar23);
      }
    }
  }
  else {
    puVar25 = (int32_t *)FUN_1805b7970();
    uVar5 = puVar25[1];
    uVar7 = puVar25[2];
    uVar8 = puVar25[3];
    uVar9 = puVar25[4];
    uVar10 = puVar25[5];
    uVar11 = puVar25[6];
    uVar12 = puVar25[7];
    *(int32_t *)(unaff_RBP + -0x40) = *puVar25;
    *(int32_t *)(unaff_RBP + -0x3c) = uVar5;
    *(int32_t *)(unaff_RBP + -0x38) = uVar7;
    *(int32_t *)(unaff_RBP + -0x34) = uVar8;
    *(int32_t *)(unaff_RBP + -0x30) = uVar9;
    *(int32_t *)(unaff_RBP + -0x2c) = uVar10;
    *(int32_t *)(unaff_RBP + -0x28) = uVar11;
    *(int32_t *)(unaff_RBP + -0x24) = uVar12;
  }
  lVar37 = param_1[0x291];
  iVar23 = *(int *)(lVar37 + 0x52ed94);
  in_stack_00000048 = iVar23;
  if (param_2 == '\0') {
    in_stack_00000048 = (*(int *)(lVar37 + 0x98d9d4) + 1) * 5;
  }
  lVar47 = *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar37 + 0x87b790) * 8);
  lVar6 = *(longlong *)(lVar37 + 0x87b788);
  iVar22 = (int)param_1[0x402];
  uVar33 = (ulonglong)iVar22;
  if (iVar22 < 0) {
    sVar3 = *(short *)(lVar37 + 0x52dda0 + uVar33 * 2);
    if (sVar3 == -1) {
      if (iVar22 < iVar23) {
        do {
          if (*(short *)(lVar37 + 0x52dda0 + (longlong)(int)uVar33 * 2) != -1) break;
          uVar29 = (int)uVar33 + 1;
          uVar33 = (ulonglong)uVar29;
          *(uint *)(param_1 + 0x402) = uVar29;
        } while ((int)uVar29 < *(int *)(lVar37 + 0x52ed94));
      }
    }
    else {
      *(int *)(param_1 + 0x402) = (int)sVar3;
    }
  }
  in_stack_00000040._4_4_ = iVar23;
  FUN_1805279f0(*param_1,unaff_RBP + -0x78,*(uint64_t *)(unaff_RBP + -0x38),lVar31);
  iVar22 = *(int *)(unaff_RBP + 0x138);
  if (((!bVar19) || (*(int *)((longlong)param_1 + 0x200c) < 1)) ||
     (*(int8_t *)(unaff_RBP + 0x120) = 1, iVar22 != *(int *)((longlong)param_1 + 0x1c4c))) {
    *(int8_t *)(unaff_RBP + 0x120) = 0;
  }
  uVar33 = (ulonglong)*(uint *)(param_1 + 0x402);
  if ((int)*(uint *)(param_1 + 0x402) < iVar23) {
    iVar52 = iStack0000000000000054;
    iVar24 = iStack0000000000000050;
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
      lVar37 = param_1[0x291] + 0x30a0 + (longlong)(int)uVar33 * 0xa60;
      if (((*(int *)(lVar37 + 0x568) == 1) &&
          (iVar4 = *(int *)(lVar37 + 0x10), iVar4 != *(int *)(*param_1 + 0x10))) &&
         ((*(int *)(lVar37 + 0x560) < 0 && (cVar20 = func_0x000180508270(), cVar20 != '\0')))) {
        bVar19 = false;
        if (iVar4 != iVar22) {
          iVar23 = (int)param_1[0x381];
          lVar41 = (longlong)iVar23;
          iVar30 = 0;
          lVar38 = 0;
          if (0 < iVar23) {
            plVar26 = param_1 + 0x371;
            do {
              if ((int)*plVar26 == iVar4) {
                if (*(float *)((longlong)param_1 + lVar38 * 8 + 0x1b8c) <=
                    (float)(lVar47 - lVar6) * 1e-05) {
                  *(int *)(param_1 + lVar38 + 0x371) = (int)param_1[lVar41 + 0x370];
                  *(int32_t *)((longlong)param_1 + lVar38 * 8 + 0x1b8c) =
                       *(int32_t *)((longlong)param_1 + lVar41 * 8 + 0x1b84);
                  *(int32_t *)(param_1 + lVar41 + 0x370) = 0xffffffff;
                  *(int *)(param_1 + 0x381) = (int)param_1[0x381] + -1;
                }
                else {
                  bVar19 = true;
                }
                break;
              }
              iVar30 = iVar30 + 1;
              lVar38 = lVar38 + 1;
              plVar26 = plVar26 + 1;
            } while (iVar30 < iVar23);
          }
        }
        fVar48 = (float)FUN_1805bcd40(param_1,lVar37,&stack0x00000058,lVar31,
                                      *(int8_t *)(unaff_RBP + 0x130));
        if (-1e+30 < fVar48) {
          if (iVar4 == iVar22) {
            uVar29 = 0;
            *(int8_t *)(unaff_RBP + 0x120) = 1;
LAB_1805ba031:
            if (iVar4 == *(int *)(unaff_RBP + 0x138)) {
              if (!bVar19) {
LAB_1805ba2c7:
                iVar23 = *(int *)((longlong)param_1 + 0x200c);
                if (iVar23 < 0x10) {
                  iVar23 = iVar23 + 1;
                  *(int *)((longlong)param_1 + 0x200c) = iVar23;
                }
                lVar38 = (longlong)(int)uVar29;
                lVar41 = (longlong)(iVar23 + -1);
                if (lVar38 < lVar41) {
                  puVar36 = (uint64_t *)((longlong)param_1 + lVar41 * 0x3c + 0x1c4c);
                  lVar41 = lVar41 - lVar38;
                  do {
                    *puVar36 = *(uint64_t *)((longlong)puVar36 + -0x3c);
                    puVar36[1] = *(uint64_t *)((longlong)puVar36 + -0x34);
                    puVar36[2] = *(uint64_t *)((longlong)puVar36 + -0x2c);
                    puVar36[3] = *(uint64_t *)((longlong)puVar36 + -0x24);
                    *(int32_t *)(puVar36 + 4) = *(int32_t *)((longlong)puVar36 + -0x1c);
                    *(int32_t *)((longlong)puVar36 + 0x24) = *(int32_t *)(puVar36 + -3);
                    *(int32_t *)(puVar36 + 5) = *(int32_t *)((longlong)puVar36 + -0x14);
                    *(int32_t *)((longlong)puVar36 + 0x2c) = *(int32_t *)(puVar36 + -2);
                    puVar36[6] = *(uint64_t *)((longlong)puVar36 + -0xc);
                    *(int32_t *)(puVar36 + 7) = *(int32_t *)((longlong)puVar36 + -4);
                    puVar36 = (uint64_t *)((longlong)puVar36 + -0x3c);
                    lVar41 = lVar41 + -1;
                  } while (lVar41 != 0);
                }
                lVar38 = lVar38 * 0x3c;
                *(int32_t *)(lVar38 + 0x1c4c + (longlong)param_1) =
                     *(int32_t *)(lVar37 + 0x10);
                *(int32_t *)(lVar38 + 0x1c54 + (longlong)param_1) = 0;
                *(float *)(lVar38 + 0x1c50 + (longlong)param_1) = fVar48;
                *(int32_t *)(lVar38 + 0x1c58 + (longlong)param_1) = 0xf149f2ca;
                *(uint64_t *)(lVar38 + 0x1c80 + (longlong)param_1) = 0x7149f2ca;
                *(int32_t *)(lVar38 + 0x1c5c + (longlong)param_1) = 0;
                goto LAB_1805ba3ca;
              }
            }
            else if (!bVar19) {
              lVar38 = *(longlong *)(lVar37 + 0x6d8);
              lVar41 = *(longlong *)(*param_1 + 0x6d8);
              fStack000000000000006c = *(float *)(lVar38 + 0x8c8);
              fVar51 = *(float *)(lVar41 + 0x8e8);
              fVar50 = *(float *)(lVar41 + 0x8ec);
              uVar5 = *(int32_t *)(lVar41 + 0x8f0);
              fVar53 = *(float *)(lVar38 + 0x8cc);
              fStack0000000000000068 = *(float *)(lVar38 + 0x8c4) - *(float *)(lVar41 + 0x8e4);
              *(float *)(unaff_RBP + -0x68) = *(float *)(lVar41 + 0x8e4);
              fStack000000000000006c = fStack000000000000006c - fVar51;
              fVar53 = fVar53 - fVar50;
              *(float *)(unaff_RBP + -100) = fVar51;
              *(float *)(unaff_RBP + -0x60) = fVar50;
              *(int32_t *)(unaff_RBP + -0x5c) = uVar5;
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
                fStack0000000000000078 = *(float *)(lVar38 + 0x8c4) - *(float *)(unaff_RBP + -0x78);
                fStack000000000000007c = *(float *)(lVar38 + 0x8c8) - *(float *)(unaff_RBP + -0x74);
                fStack0000000000000080 = *(float *)(lVar38 + 0x8cc) - *(float *)(unaff_RBP + -0x70);
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
              iVar23 = FUN_180619450(param_1 + 0x408,unaff_RBP + -0x68);
              if (iVar23 == 4) goto LAB_1805ba2c7;
            }
            bVar19 = false;
            piVar34 = (int *)((longlong)param_1 + 0x1c0c);
            lVar41 = 0;
            pfVar27 = (float *)(param_1 + 0x382);
            lVar38 = 0;
            do {
              if (bVar19) {
                if (iVar24 < 0) break;
                iVar22 = *piVar34;
                *piVar34 = iVar24;
                iVar23 = piVar34[1];
                piVar34[1] = iVar52;
                iVar52 = iVar23;
                iVar24 = iVar22;
              }
              else if (((int)pfVar27[-1] < 0) || (*pfVar27 <= fVar48)) {
                uVar2 = *(uint64_t *)piVar34;
                bVar19 = true;
                iVar24 = (int)uVar2;
                iStack0000000000000054 = (int)((ulonglong)uVar2 >> 0x20);
                iVar52 = iStack0000000000000054;
                _iStack0000000000000050 = uVar2;
              }
              else {
                lVar41 = lVar41 + 1;
                pfVar27 = pfVar27 + 2;
              }
              lVar38 = lVar38 + 1;
              piVar34 = piVar34 + 2;
            } while (lVar38 < 4);
            if (lVar41 < 4) {
              uVar5 = *(int32_t *)(lVar37 + 0x10);
              *(float *)(param_1 + lVar41 + 0x382) = fVar48;
              *(int32_t *)((longlong)param_1 + lVar41 * 8 + 0x1c0c) = uVar5;
            }
          }
          else {
            uVar29 = (uint)(*(char *)(unaff_RBP + 0x120) != '\0');
            uVar33 = (ulonglong)uVar29;
            if ((int)uVar29 < *(int *)((longlong)param_1 + 0x200c)) {
              pfVar27 = (float *)((longlong)param_1 + uVar33 * 0x3c + 0x1c50);
              do {
                uVar29 = (uint)uVar33;
                if (*pfVar27 <= fVar48) break;
                uVar29 = uVar29 + 1;
                uVar33 = (ulonglong)uVar29;
                pfVar27 = pfVar27 + 0xf;
              } while ((int)uVar29 < *(int *)((longlong)param_1 + 0x200c));
            }
            if ((int)uVar29 < 0x10) goto LAB_1805ba031;
          }
LAB_1805ba3ca:
          iVar22 = *(int *)(unaff_RBP + 0x138);
        }
        else if (iVar4 == iVar22) {
          uVar29 = 0;
          *(int8_t *)(unaff_RBP + 0x120) = 1;
          goto LAB_1805ba031;
        }
        in_stack_00000048 = in_stack_00000048 + -1;
        iVar23 = in_stack_00000040._4_4_;
        if (in_stack_00000048 == 0) break;
      }
      uVar29 = *(uint *)(param_1 + 0x402);
      uVar33 = (ulonglong)(int)uVar29;
      lVar37 = param_1[0x291];
      sVar3 = *(short *)(lVar37 + 0x52dda0 + uVar33 * 2);
      if (sVar3 == -1) {
        if ((int)uVar29 < *(int *)(lVar37 + 0x52ed94)) {
          do {
            if (*(short *)(lVar37 + 0x52dda0 + (longlong)(int)uVar29 * 2) != -1) break;
            uVar29 = uVar29 + 1;
            uVar33 = (ulonglong)uVar29;
            *(uint *)(param_1 + 0x402) = uVar29;
          } while ((int)uVar29 < *(int *)(lVar37 + 0x52ed94));
        }
      }
      else {
        uVar33 = (ulonglong)(uint)(int)sVar3;
        *(int *)(param_1 + 0x402) = (int)sVar3;
      }
    } while ((int)uVar33 < iVar23);
    param_2 = *(char *)(unaff_RBP + 0x128);
  }
  if (iVar23 <= (int)param_1[0x402]) {
    *(int8_t *)(param_1 + 0x389) = 0;
    if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
      bVar21 = (byte)((uint)*(int32_t *)(*(longlong *)param_1[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)param_1 + 0x11c) = bVar21;
    }
    else {
      bVar21 = *(byte *)((longlong)param_1 + 0x11c);
    }
    if (bVar21 == 0) {
      fVar48 = -600000.0;
    }
    else {
      fVar48 = -220000.0;
    }
    uVar29 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar29 = uVar29 ^ uVar29 >> 0x11;
    uVar29 = uVar29 ^ uVar29 << 5;
    *(uint *)(param_1 + 0x272) = uVar29;
    uVar33 = 0;
    param_1[0x387] =
         *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x388] * 8) -
         (longlong)(((float)(uVar29 - 1) * 2.3283064e-05 + fVar48) - 50000.0);
    uVar35 = uVar33;
    uVar39 = uVar33;
    uVar42 = uVar33;
    uVar44 = uVar33;
    uVar46 = uVar33;
    do {
      uVar43 = (uint)uVar44;
      uVar29 = uVar43;
      if (*(int *)((longlong)param_1 + uVar42 * 8 + 0x1c0c) < 0) break;
      if ((int)uVar35 < *(int *)((longlong)param_1 + 0x200c)) {
        fVar48 = *(float *)(uVar39 * 0x3c + 0x1c50 + (longlong)param_1);
      }
      else {
        fVar48 = 0.0;
      }
      fVar53 = *(float *)(param_1 + uVar42 + 0x382);
      uVar45 = (int)uVar46 + 1;
      uVar46 = (ulonglong)uVar45;
      if (fVar53 <= fVar48) {
        uVar35 = (ulonglong)((int)uVar35 + 1);
      }
      uVar29 = uVar43 + 1;
      if (fVar53 <= fVar48) {
        uVar29 = uVar43;
      }
      uVar44 = (ulonglong)uVar29;
      uVar28 = uVar42 + 1;
      if (fVar53 <= fVar48) {
        uVar28 = uVar42;
      }
      if (fVar53 <= fVar48) {
        uVar39 = uVar39 + 1;
      }
      uVar42 = uVar28;
    } while ((int)uVar45 < 4);
    if (uVar29 != 0) {
      lVar31 = (longlong)(int)uVar29;
      iVar23 = 0x10 - uVar29;
      if ((int)(uVar29 + *(int *)((longlong)param_1 + 0x200c)) < 0x11) {
        iVar23 = *(int *)((longlong)param_1 + 0x200c);
      }
      if (3 < lVar31) {
        lVar47 = (lVar31 - 4U >> 2) + 1;
        uVar33 = lVar47 * 4;
        lVar37 = (longlong)param_1 + (longlong)iVar23 * 0x3c + 0x1c84;
        puVar25 = (int32_t *)((longlong)param_1 + 0x1c0c);
        do {
          uVar5 = puVar25[1];
          *(int32_t *)(lVar37 + -0x38) = *puVar25;
          *(int32_t *)(lVar37 + -0x34) = uVar5;
          *(int32_t *)(lVar37 + -0x30) = 0;
          *(int32_t *)(lVar37 + -0x2c) = 0xf149f2ca;
          *(uint64_t *)(lVar37 + -4) = 0x7149f2ca;
          *(int32_t *)(lVar37 + -0x28) = 0;
          uVar5 = puVar25[3];
          *(int32_t *)(lVar37 + 4) = puVar25[2];
          *(int32_t *)(lVar37 + 8) = uVar5;
          *(int32_t *)(lVar37 + 0xc) = 0;
          *(int32_t *)(lVar37 + 0x10) = 0xf149f2ca;
          *(uint64_t *)(lVar37 + 0x38) = 0x7149f2ca;
          *(int32_t *)(lVar37 + 0x14) = 0;
          uVar5 = puVar25[5];
          *(int32_t *)(lVar37 + 0x40) = puVar25[4];
          *(int32_t *)(lVar37 + 0x44) = uVar5;
          *(int32_t *)(lVar37 + 0x48) = 0;
          *(int32_t *)(lVar37 + 0x4c) = 0xf149f2ca;
          *(uint64_t *)(lVar37 + 0x74) = 0x7149f2ca;
          *(int32_t *)(lVar37 + 0x50) = 0;
          uVar5 = puVar25[7];
          *(int32_t *)(lVar37 + 0x7c) = puVar25[6];
          *(int32_t *)(lVar37 + 0x80) = uVar5;
          *(int32_t *)(lVar37 + 0x84) = 0;
          *(int32_t *)(lVar37 + 0x88) = 0xf149f2ca;
          *(uint64_t *)(lVar37 + 0xb0) = 0x7149f2ca;
          *(int32_t *)(lVar37 + 0x8c) = 0;
          lVar47 = lVar47 + -1;
          lVar37 = lVar37 + 0xf0;
          puVar25 = puVar25 + 8;
        } while (lVar47 != 0);
      }
      if ((longlong)uVar33 < lVar31) {
        puVar25 = (int32_t *)((longlong)param_1 + uVar33 * 8 + 0x1c0c);
        lVar31 = lVar31 - uVar33;
        lVar37 = (longlong)param_1 + ((longlong)iVar23 + uVar33) * 0x3c + 0x1c84;
        do {
          puVar1 = puVar25 + 1;
          uVar5 = *puVar25;
          puVar25 = puVar25 + 2;
          *(int32_t *)(lVar37 + -0x34) = *puVar1;
          *(int32_t *)(lVar37 + -0x38) = uVar5;
          *(int32_t *)(lVar37 + -0x30) = 0;
          *(int32_t *)(lVar37 + -0x2c) = 0xf149f2ca;
          *(uint64_t *)(lVar37 + -4) = 0x7149f2ca;
          *(int32_t *)(lVar37 + -0x28) = 0;
          lVar31 = lVar31 + -1;
          lVar37 = lVar37 + 0x3c;
        } while (lVar31 != 0);
      }
      *(uint *)((longlong)param_1 + 0x1c2c) = uVar29;
      *(uint *)((longlong)param_1 + 0x200c) = iVar23 + uVar29;
    }
    if (*(char *)(unaff_RBP + 0x120) != '\0') {
      puVar36 = (uint64_t *)((longlong)param_1 + 0x1c4c);
      iVar23 = 1;
      uVar13 = *puVar36;
      uVar14 = *(uint64_t *)((longlong)param_1 + 0x1c54);
      uVar5 = *(int32_t *)((longlong)param_1 + 0x1c84);
      uVar15 = *(uint64_t *)((longlong)param_1 + 0x1c5c);
      uVar16 = *(uint64_t *)((longlong)param_1 + 0x1c64);
      lVar31 = (longlong)
               (*(int *)((longlong)param_1 + 0x200c) - *(int *)((longlong)param_1 + 0x1c2c));
      uVar2 = *(uint64_t *)((longlong)param_1 + 0x1c7c);
      uVar17 = *(uint64_t *)((longlong)param_1 + 0x1c6c);
      uVar18 = *(uint64_t *)((longlong)param_1 + 0x1c74);
      *(uint64_t *)(unaff_RBP + -0x40) = uVar13;
      *(uint64_t *)(unaff_RBP + -0x38) = uVar14;
      if (1 < lVar31) {
        fVar48 = *(float *)(unaff_RBP + -0x3c);
        lVar37 = 1;
        if (4 < lVar31) {
          do {
            if (*(float *)(puVar36 + 8) <= fVar48) goto LAB_1805ba95e;
            *puVar36 = *(uint64_t *)((longlong)puVar36 + 0x3c);
            puVar36[1] = *(uint64_t *)((longlong)puVar36 + 0x44);
            puVar36[2] = *(uint64_t *)((longlong)puVar36 + 0x4c);
            puVar36[3] = *(uint64_t *)((longlong)puVar36 + 0x54);
            *(int32_t *)(puVar36 + 4) = *(int32_t *)((longlong)puVar36 + 0x5c);
            *(int32_t *)((longlong)puVar36 + 0x24) = *(int32_t *)(puVar36 + 0xc);
            *(int32_t *)(puVar36 + 5) = *(int32_t *)((longlong)puVar36 + 100);
            *(int32_t *)((longlong)puVar36 + 0x2c) = *(int32_t *)(puVar36 + 0xd);
            puVar36[6] = *(uint64_t *)((longlong)puVar36 + 0x6c);
            *(int32_t *)(puVar36 + 7) = *(int32_t *)((longlong)puVar36 + 0x74);
            if (*(float *)((longlong)puVar36 + 0x7c) <= fVar48) {
              iVar23 = iVar23 + 1;
              goto LAB_1805ba95e;
            }
            *(uint64_t *)((longlong)puVar36 + 0x3c) = puVar36[0xf];
            *(uint64_t *)((longlong)puVar36 + 0x44) = puVar36[0x10];
            *(uint64_t *)((longlong)puVar36 + 0x4c) = puVar36[0x11];
            *(uint64_t *)((longlong)puVar36 + 0x54) = puVar36[0x12];
            *(int32_t *)((longlong)puVar36 + 0x5c) = *(int32_t *)(puVar36 + 0x13);
            *(int32_t *)(puVar36 + 0xc) = *(int32_t *)((longlong)puVar36 + 0x9c);
            *(int32_t *)((longlong)puVar36 + 100) = *(int32_t *)(puVar36 + 0x14);
            *(int32_t *)(puVar36 + 0xd) = *(int32_t *)((longlong)puVar36 + 0xa4);
            *(uint64_t *)((longlong)puVar36 + 0x6c) = puVar36[0x15];
            *(int32_t *)((longlong)puVar36 + 0x74) = *(int32_t *)(puVar36 + 0x16);
            if (*(float *)(puVar36 + 0x17) <= fVar48) {
              iVar23 = iVar23 + 2;
              goto LAB_1805ba95e;
            }
            puVar36[0xf] = *(uint64_t *)((longlong)puVar36 + 0xb4);
            puVar36[0x10] = *(uint64_t *)((longlong)puVar36 + 0xbc);
            puVar36[0x11] = *(uint64_t *)((longlong)puVar36 + 0xc4);
            puVar36[0x12] = *(uint64_t *)((longlong)puVar36 + 0xcc);
            *(int32_t *)(puVar36 + 0x13) = *(int32_t *)((longlong)puVar36 + 0xd4);
            *(int32_t *)((longlong)puVar36 + 0x9c) = *(int32_t *)(puVar36 + 0x1b);
            *(int32_t *)(puVar36 + 0x14) = *(int32_t *)((longlong)puVar36 + 0xdc);
            *(int32_t *)((longlong)puVar36 + 0xa4) = *(int32_t *)(puVar36 + 0x1c);
            puVar36[0x15] = *(uint64_t *)((longlong)puVar36 + 0xe4);
            *(int32_t *)(puVar36 + 0x16) = *(int32_t *)((longlong)puVar36 + 0xec);
            if (*(float *)((longlong)puVar36 + 0xf4) <= fVar48) {
              iVar23 = iVar23 + 3;
              goto LAB_1805ba95e;
            }
            iVar23 = iVar23 + 4;
            lVar37 = lVar37 + 4;
            *(uint64_t *)((longlong)puVar36 + 0xb4) = puVar36[0x1e];
            *(uint64_t *)((longlong)puVar36 + 0xbc) = puVar36[0x1f];
            *(uint64_t *)((longlong)puVar36 + 0xc4) = puVar36[0x20];
            *(uint64_t *)((longlong)puVar36 + 0xcc) = puVar36[0x21];
            *(int32_t *)((longlong)puVar36 + 0xd4) = *(int32_t *)(puVar36 + 0x22);
            *(int32_t *)(puVar36 + 0x1b) = *(int32_t *)((longlong)puVar36 + 0x114);
            *(int32_t *)((longlong)puVar36 + 0xdc) = *(int32_t *)(puVar36 + 0x23);
            *(int32_t *)(puVar36 + 0x1c) = *(int32_t *)((longlong)puVar36 + 0x11c);
            *(uint64_t *)((longlong)puVar36 + 0xe4) = puVar36[0x24];
            *(int32_t *)((longlong)puVar36 + 0xec) = *(int32_t *)(puVar36 + 0x25);
            puVar36 = puVar36 + 0x1e;
          } while (lVar37 < lVar31 + -3);
        }
        if (lVar37 < lVar31) {
          puVar36 = (uint64_t *)((longlong)param_1 + lVar37 * 0x3c + 0x1c4c);
          do {
            if (*(float *)((longlong)puVar36 + 4) <= fVar48) break;
            iVar23 = iVar23 + 1;
            lVar37 = lVar37 + 1;
            *(uint64_t *)((longlong)puVar36 + -0x3c) = *puVar36;
            *(uint64_t *)((longlong)puVar36 + -0x34) = puVar36[1];
            *(uint64_t *)((longlong)puVar36 + -0x2c) = puVar36[2];
            *(uint64_t *)((longlong)puVar36 + -0x24) = puVar36[3];
            *(int32_t *)((longlong)puVar36 + -0x1c) = *(int32_t *)(puVar36 + 4);
            *(int32_t *)(puVar36 + -3) = *(int32_t *)((longlong)puVar36 + 0x24);
            *(int32_t *)((longlong)puVar36 + -0x14) = *(int32_t *)(puVar36 + 5);
            *(int32_t *)(puVar36 + -2) = *(int32_t *)((longlong)puVar36 + 0x2c);
            *(uint64_t *)((longlong)puVar36 + -0xc) = puVar36[6];
            *(int32_t *)((longlong)puVar36 + -4) = *(int32_t *)(puVar36 + 7);
            puVar36 = (uint64_t *)((longlong)puVar36 + 0x3c);
          } while (lVar37 < lVar31);
        }
      }
LAB_1805ba95e:
      if (iVar23 != 1) {
        lVar31 = (longlong)iVar23 * 0x3c;
        puVar36 = (uint64_t *)(lVar31 + 0x1c10 + (longlong)param_1);
        *puVar36 = uVar13;
        puVar36[1] = uVar14;
        puVar36 = (uint64_t *)(lVar31 + 0x1c20 + (longlong)param_1);
        *puVar36 = uVar15;
        puVar36[1] = uVar16;
        puVar36 = (uint64_t *)(lVar31 + 0x1c30 + (longlong)param_1);
        *puVar36 = uVar17;
        puVar36[1] = uVar18;
        *(uint64_t *)(lVar31 + 0x1c40 + (longlong)param_1) = uVar2;
        *(int32_t *)(lVar31 + 0x1c48 + (longlong)param_1) = uVar5;
      }
    }
    *(int32_t *)((longlong)param_1 + 0x1c0c) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x1c14) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x1c1c) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x1c24) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x1c2c) = 0;
  }
  if (param_2 != '\0') {
    FUN_1805beae0(param_1);
  }
  return;
}








