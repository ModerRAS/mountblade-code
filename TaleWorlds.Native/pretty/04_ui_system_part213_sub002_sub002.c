#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part213_sub002_sub002.c - 1 个函数

// 函数: void FUN_18078e1b5(int64_t param_1,uint64_t param_2,uint param_3,int32_t param_4)
void FUN_18078e1b5(int64_t param_1,uint64_t param_2,uint param_3,int32_t param_4)

{
  uint *puVar1;
  float fVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  bool bVar6;
  int64_t lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint64_t *in_RAX;
  int64_t *plVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t *plVar17;
  int iVar18;
  uint uVar19;
  uint64_t uVar20;
  int iVar21;
  int *piVar22;
  uint64_t *unaff_RBP;
  int *piVar23;
  int32_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint uVar27;
  int64_t *plVar28;
  int64_t *plVar29;
  int64_t *plVar30;
  int64_t *plVar31;
  int64_t *plVar32;
  int64_t *plVar33;
  int64_t *plVar34;
  uint64_t in_stack_00000020;
  uint in_stack_00000050;
  char cStack0000000000000054;
  char cStack0000000000000058;
  uint uStack000000000000005c;
  int iStack0000000000000060;
  int iStack0000000000000064;
  int64_t *in_stack_00000068;
  int64_t lStack0000000000000070;
  int64_t *plStack0000000000000078;
  
  plVar17 = (int64_t *)0x0;
  plVar32 = (int64_t *)0x0;
  lVar15 = unaff_RBP[0x867];
  plVar29 = (int64_t *)0x0;
  plVar31 = (int64_t *)0x0;
  plVar34 = (int64_t *)0x0;
  *(int32_t *)(unaff_RBP + -10) = param_4;
  unaff_RBP[-4] = param_2;
  unaff_RBP[-0xd] = lVar15;
  unaff_RBP[-9] = in_RAX;
  unaff_RBP[-0xe] = 0;
  unaff_RBP[0x12] = 0;
  unaff_RBP[-6] = 0;
  plStack0000000000000078 = (int64_t *)0x0;
  cStack0000000000000054 = '\0';
  iStack0000000000000060 = 0;
  *(int32_t *)(unaff_RBP + -0x10) = 0;
  *(uint *)(unaff_RBP + -0xc) = param_3;
  unaff_RBP[-2] = 0;
  _cStack0000000000000058 = 0;
  lStack0000000000000070 = param_1;
  if (in_RAX == (uint64_t *)0x0) {
LAB_18078e2c4:
    in_stack_00000050 = 0x1f;
    goto LAB_180790207;
  }
  if ((((param_3 >> 0x1c & 1) != 0) && (lVar15 != 0)) && (*(int64_t *)(lVar15 + 0x58) != 0)) {
    in_stack_00000050 = 0x27;
    plVar29 = plVar17;
    plVar31 = plVar17;
    plVar32 = plVar17;
    plVar34 = plVar17;
    goto LAB_180790207;
  }
  if ((param_3 >> 0x10 & 1) == 0) {
    *in_RAX = 0;
  }
  if ((char)param_3 < '\0') {
    param_3 = param_3 & 0xfffffcff;
  }
  else if ((param_3 >> 9 & 1) != 0) {
    param_3 = param_3 & 0xfffffeff;
  }
  uVar10 = param_3 & 0xfb03ffff;
  if ((param_3 & 8) == 0) {
    uVar10 = param_3;
  }
  uVar9 = uVar10 | 0x10;
  if ((uVar10 & 0x4fc0000) == 0) {
    uVar9 = uVar10;
  }
  uVar10 = (uint)((uint64_t)in_stack_00000020 >> 0x20);
  uStack000000000000005c = uVar9;
  if ((uVar9 & 0x1400) == 0) {
    if ((uVar9 & 0x10000800) != 0) {
      if ((lVar15 == 0) || (*(int *)(lVar15 + 4) == 0)) goto LAB_180790207;
      goto LAB_18078e2fd;
    }
LAB_18078e395:
    if ((uVar9 >> 10 & 1) == 0) {
      iVar8 = FUN_18078d9d0();
      if (iVar8 != 0) goto LAB_180790207;
      unaff_RBP[-0xf] = plStack0000000000000078;
      plVar34 = plStack0000000000000078;
      uVar9 = uStack000000000000005c;
      in_stack_00000068 = plStack0000000000000078;
    }
    else {
      plVar34 = (int64_t *)
                FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x1f8,&unknown_var_1936_ptr,0x355,
                              (uint64_t)uVar10 << 0x20);
      if (plVar34 == (int64_t *)0x0) {
        in_stack_00000068 = (int64_t *)0x0;
        plVar34 = plVar17;
      }
      else {
        in_stack_00000068 = plVar34;
        func_0x000180768c10(plVar34);
        *(int32_t *)(plVar34 + 7) = 0;
        *plVar34 = (int64_t)&unknown_var_760_ptr;
      }
      unaff_RBP[-0xf] = plVar34;
      plStack0000000000000078 = plVar34;
      if (plVar34 == (int64_t *)0x0) goto LAB_180790207;
      if ((lVar15 == 0) || (iVar8 = *(int *)(lVar15 + 0xb0), iVar8 == 0)) {
        iVar21 = *(int *)(lStack0000000000000070 + 0x1175c);
      }
      else {
        iVar21 = 0;
        if (iVar8 != -1) {
          iVar21 = iVar8;
        }
      }
      FUN_180769b80(plVar34,lStack0000000000000070,0,iVar21);
      uStack000000000000005c = uVar9 & 0xffffefff;
      uVar9 = uStack000000000000005c;
    }
  }
  else {
    if (((lVar15 == 0) || ((*(int *)(lVar15 + 0x14) == 0 || (*(int *)(lVar15 + 0xc) < 1)))) ||
       (*(int *)(lVar15 + 0x10) == 0)) goto LAB_18078e2c4;
LAB_18078e2fd:
    if ((uVar9 & 0x10000800) == 0) goto LAB_18078e395;
    plVar11 = (int64_t *)
              FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x200,&unknown_var_1936_ptr,0x1e1,
                            (uint64_t)uVar10 << 0x20);
    unaff_RBP[-0xf] = plVar11;
    plVar34 = plVar17;
    if (plVar11 == (int64_t *)0x0) goto LAB_180790207;
    func_0x000180768c10(plVar11);
    *plVar11 = (int64_t)&unknown_var_2352_ptr;
    *(int32_t *)(plVar11 + 7) = 1;
    *(int32_t *)(plVar11 + 0x3e) = 0;
    plVar11[0x3f] = 0;
    FUN_1807e5830(plVar11,lStack0000000000000070,0,0,0);
    plVar34 = plVar11;
    in_stack_00000068 = plVar11;
    plStack0000000000000078 = plVar11;
  }
  iVar8 = func_0x00018076a6b0(plVar34,uVar9 >> 7 & 1);
  if (iVar8 != 0) goto LAB_180790207;
  plVar11 = plVar34;
  if ((*(int64_t *)unaff_RBP[-9] != 0) && (cStack0000000000000054 != '\0')) {
    LOCK();
    *(int32_t *)(*(int64_t *)unaff_RBP[-9] + 0x110) = 3;
    UNLOCK();
    unaff_RBP[-0xf] = plStack0000000000000078;
    plVar11 = plStack0000000000000078;
  }
  if ((((uStack000000000000005c & 0x80) != 0) && (*(int *)((int64_t)plVar11 + 0x164) - 1U < 0x4000)
      ) && ((*(byte *)(lStack0000000000000070 + 0x78) & 1) == 0)) {
    unaff_RBP[-2] = unaff_RBP + 0x52;
    plVar11[0x3c] = (int64_t)(unaff_RBP + 0x52);
  }
  if (lVar15 == 0) {
    uVar26 = 0;
    uVar20 = uVar26;
    uVar25 = uVar26;
  }
  else {
    uVar26 = *(uint64_t *)(lVar15 + 0x58);
    uVar20 = (uint64_t)*(uint *)(lVar15 + 4);
    uVar25 = (uint64_t)*(uint *)(lVar15 + 8);
  }
  iVar8 = FUN_180769c60(plVar11,unaff_RBP[-4],uVar20,uVar25,uVar26);
  if (iVar8 != 0) goto LAB_180790207;
  unaff_RBP[-7] = plVar11;
  if ((*(int64_t *)unaff_RBP[-9] != 0) && (cStack0000000000000054 != '\0')) {
    LOCK();
    *(int32_t *)(*(int64_t *)unaff_RBP[-9] + 0x110) = 4;
    UNLOCK();
    unaff_RBP[-0xf] = plStack0000000000000078;
  }
  iVar8 = func_0x000180771d10(*(uint64_t *)(lStack0000000000000070 + 0x11418),unaff_RBP + -8);
  plVar31 = plVar11;
  if (iVar8 != 0) goto LAB_180790207;
  bVar6 = false;
  if ((lVar15 == 0) || (uVar10 = *(uint *)(lVar15 + 0x70), uVar9 = uVar10, uVar10 == 0)) {
    if ((uStack000000000000005c & 0x10000c00) == 0) {
      lVar12 = func_0x00018076b770(unaff_RBP[-4],0x2e);
      if (lVar12 != 0) {
        lVar12 = lVar12 + 1;
        piVar23 = (int *)&unknown_var_1012_ptr;
        unaff_RBP[-5] = lVar12;
        do {
          iVar8 = 0;
          if (0 < *piVar23) {
            piVar22 = piVar23 + 1;
            do {
              iVar21 = func_0x00018076b630(lVar12,*(uint64_t *)piVar22);
              if (iVar21 == 0) {
                uVar10 = piVar23[-1];
                bVar6 = true;
                lVar15 = unaff_RBP[-0xd];
                uVar9 = uVar10;
                goto LAB_18078e63c;
              }
              lVar12 = unaff_RBP[-5];
              iVar8 = iVar8 + 1;
              piVar22 = piVar22 + 2;
            } while (iVar8 < *piVar23);
          }
          piVar23 = piVar23 + 0xc;
        } while ((int64_t)piVar23 < 0x18095b3c4);
        lVar15 = unaff_RBP[-0xd];
      }
      bVar6 = true;
      uVar10 = 0;
      uVar9 = _cStack0000000000000058;
    }
    else {
      uVar10 = 0;
      uVar9 = _cStack0000000000000058;
    }
  }
LAB_18078e63c:
  _cStack0000000000000058 = uVar9;
  iVar21 = 0;
  iStack0000000000000064 = 0;
  iVar8 = iStack0000000000000064;
  if ((uVar10 != 0) && (0 < *(int *)(unaff_RBP + -8))) {
    do {
      iVar8 = func_0x000180771c10(*(uint64_t *)(lStack0000000000000070 + 0x11418),iVar21,
                                  &stack0x00000050);
      if (((iVar8 == 0) &&
          (iVar8 = func_0x000180771bd0(*(uint64_t *)(lStack0000000000000070 + 0x11418),
                                       in_stack_00000050,unaff_RBP + 0x11), iVar8 == 0)) &&
         ((iVar8 = iVar21, *(uint *)(unaff_RBP[0x11] + 0x80) == _cStack0000000000000058 ||
          ((bVar6 && (*(uint *)(unaff_RBP[0x11] + 0x80) == 0)))))) break;
      iVar21 = iVar21 + 1;
      iVar8 = iStack0000000000000064;
    } while (iVar21 < *(int *)(unaff_RBP + -8));
  }
  iStack0000000000000064 = iVar8;
  lVar12 = 0;
  uVar26 = unaff_RBP[-0xf];
  unaff_RBP[-3] = 0;
  if ((uStack000000000000005c >> 0x19 & 1) == 0) {
    *(int32_t *)(unaff_RBP + 0x27) = 0;
    unaff_RBP[0x46] = 0;
    unaff_RBP[0x47] = 0;
    unaff_RBP[0x48] = 0;
    unaff_RBP[0x4b] = 0;
    unaff_RBP[0x49] = 0;
    unaff_RBP[0x4f] = 0;
    unaff_RBP[0x50] = uVar26;
    puVar13 = (uint64_t *)func_0x0001807f4160();
    uVar5 = puVar13[1];
    unaff_RBP[0x28] = *puVar13;
    unaff_RBP[0x29] = uVar5;
    uVar5 = puVar13[3];
    unaff_RBP[0x2a] = puVar13[2];
    unaff_RBP[0x2b] = uVar5;
    uVar5 = puVar13[5];
    unaff_RBP[0x2c] = puVar13[4];
    unaff_RBP[0x2d] = uVar5;
    uVar5 = puVar13[7];
    unaff_RBP[0x2e] = puVar13[6];
    unaff_RBP[0x2f] = uVar5;
    uVar5 = puVar13[9];
    unaff_RBP[0x30] = puVar13[8];
    unaff_RBP[0x31] = uVar5;
    uVar5 = puVar13[0xb];
    unaff_RBP[0x32] = puVar13[10];
    unaff_RBP[0x33] = uVar5;
    uVar5 = puVar13[0xd];
    unaff_RBP[0x34] = puVar13[0xc];
    unaff_RBP[0x35] = uVar5;
    uVar5 = puVar13[0xf];
    unaff_RBP[0x36] = puVar13[0xe];
    unaff_RBP[0x37] = uVar5;
    uVar5 = puVar13[0x11];
    unaff_RBP[0x38] = puVar13[0x10];
    unaff_RBP[0x39] = uVar5;
    uVar5 = puVar13[0x13];
    unaff_RBP[0x3a] = puVar13[0x12];
    unaff_RBP[0x3b] = uVar5;
    uVar5 = puVar13[0x15];
    unaff_RBP[0x3c] = puVar13[0x14];
    unaff_RBP[0x3d] = uVar5;
    uVar5 = puVar13[0x17];
    unaff_RBP[0x3e] = puVar13[0x16];
    unaff_RBP[0x3f] = uVar5;
    uVar5 = puVar13[0x19];
    unaff_RBP[0x40] = puVar13[0x18];
    unaff_RBP[0x41] = uVar5;
    uVar24 = *(int32_t *)((int64_t)puVar13 + 0xd4);
    uVar3 = *(int32_t *)(puVar13 + 0x1b);
    uVar4 = *(int32_t *)((int64_t)puVar13 + 0xdc);
    *(int32_t *)(unaff_RBP + 0x42) = *(int32_t *)(puVar13 + 0x1a);
    *(int32_t *)((int64_t)unaff_RBP + 0x214) = uVar24;
    *(int32_t *)(unaff_RBP + 0x43) = uVar3;
    *(int32_t *)((int64_t)unaff_RBP + 0x21c) = uVar4;
    in_stack_00000050 = FUN_18076a440(uVar26,0,0);
    plVar31 = plVar17;
    plVar33 = plVar17;
    if ((in_stack_00000050 == 0) &&
       (in_stack_00000050 =
             (*(code *)unaff_RBP[0x2c])(unaff_RBP + 0x22,uStack000000000000005c,lVar15),
       plVar31 = plVar29, plVar33 = plVar32, in_stack_00000050 == 0)) {
      lVar12 = unaff_RBP[0x4f];
      unaff_RBP[-3] = lVar12;
      unaff_RBP[0x50] = 0;
      unaff_RBP[0x4f] = 0;
      FUN_180773410(unaff_RBP + 0x22,0);
      goto LAB_18078e7f1;
    }
  }
  else {
LAB_18078e7f1:
    uVar9 = FUN_18078d250(lStack0000000000000070,iStack0000000000000064,uStack000000000000005c,
                          *(int32_t *)(unaff_RBP + -0xc),uVar26);
    lVar14 = lStack0000000000000070;
    uVar10 = uStack000000000000005c;
    plVar33 = plVar17;
    if (uVar9 == 0x13) {
      iVar21 = 0;
      iVar8 = *(int *)(unaff_RBP + -8);
      plVar31 = plVar29;
      plVar33 = plVar32;
      in_stack_00000050 = uVar9;
      if (iVar8 < 1) goto FUN_1807901fa;
      uVar20 = unaff_RBP[-0xf];
      uVar24 = *(int32_t *)(unaff_RBP + -0xc);
      in_stack_00000050 = 0x13;
      iVar18 = iStack0000000000000064;
      do {
        if (iVar21 != iVar18) {
          uVar26 = uVar20;
          uVar9 = FUN_18078d250(lVar14,iVar21,uVar10,uVar24,uVar20);
          if (uVar9 != 0x13) break;
          iVar8 = *(int *)(unaff_RBP + -8);
          iVar18 = iStack0000000000000064;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < iVar8);
      plVar33 = (int64_t *)unaff_RBP[0x12];
      lVar12 = unaff_RBP[-3];
      plVar11 = (int64_t *)unaff_RBP[-7];
      lVar15 = unaff_RBP[-0xd];
      plVar34 = in_stack_00000068;
    }
    plVar31 = plVar33;
    in_stack_00000050 = uVar9;
    if (uVar9 == 0) {
      plVar29 = (int64_t *)unaff_RBP[-6];
      in_stack_00000068 = plVar29;
      if (plVar29 == (int64_t *)0x0) {
        in_stack_00000050 = 0x13;
      }
      else {
        if ((lVar15 == 0) ||
           (iStack0000000000000064 = *(int *)(lVar15 + 0x20), iStack0000000000000064 == 0)) {
          iStack0000000000000064 = (int)plVar29[3];
        }
        if (lVar12 != 0) {
          if (plVar29[0x2d] == 0) {
            plVar29[0x2d] = lVar12;
          }
          else {
            FUN_1807d83f0(plVar29[0x2d],lVar12);
            FUN_1807d8800(lVar12);
          }
          lVar12 = 0;
        }
        FUN_180772e40();
        plVar11 = (int64_t *)0x0;
        plVar34 = (int64_t *)0x0;
        if (0 < iStack0000000000000064) {
          uVar26 = uVar26 & 0xffffffff00000000;
          lVar14 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iStack0000000000000064 * 8,
                                 &unknown_var_1936_ptr,0x414,uVar26);
          unaff_RBP[-0xe] = lVar14;
          if (lVar14 == 0) {
            in_stack_00000050 = 0x26;
            plVar31 = plVar29;
            plVar11 = (int64_t *)0x0;
            goto FUN_1807901fa;
          }
        }
        plVar31 = (int64_t *)0x0;
        unaff_RBP[-1] = 0;
        *unaff_RBP = 0;
        unaff_RBP[1] = 0;
        unaff_RBP[2] = 0;
        unaff_RBP[3] = 0;
        unaff_RBP[4] = 0;
        unaff_RBP[5] = 0;
        in_stack_00000050 = (*(code *)plVar29[0x11])(plVar29);
        if (in_stack_00000050 == 0) {
          if (*(int *)((int64_t)unaff_RBP + 4) < 0x21) {
            plVar32 = plVar29;
            if ((*(int *)((int64_t)plVar29 + 0x44) != 0) &&
               ((uStack000000000000005c & 0x10300) == 0)) {
              if ((plVar29[0x2e] != 0) &&
                 (in_stack_00000050 = func_0x00018076a6b0(), plVar32 = in_stack_00000068,
                 in_stack_00000050 != 0)) goto LAB_18078ea30;
              uStack000000000000005c = uStack000000000000005c | 0x80;
            }
            uVar10 = (uint)(uVar26 >> 0x20);
            if ((int)plVar32[5] == 0xb) {
              if ((uStack000000000000005c >> 0x10 & 1) == 0) {
                uVar26 = uVar26 & 0xffffffff00000000;
                lVar15 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x160,&unknown_var_1936_ptr,
                                       0x445,uVar26);
                uVar10 = (uint)(uVar26 >> 0x20);
                if ((lVar15 == 0) || (lVar14 = FUN_1807f7c50(lVar15), lVar14 == 0)) {
                  in_stack_00000050 = 0x26;
                  plVar31 = plVar29;
                  plVar33 = (int64_t *)unaff_RBP[-0xe];
                  goto FUN_1807901fa;
                }
                plVar31 = (int64_t *)unaff_RBP[-9];
              }
              else {
                plVar31 = (int64_t *)unaff_RBP[-9];
                lVar14 = *plVar31;
              }
              lVar15 = lStack0000000000000070;
              lVar16 = unaff_RBP[-0xd];
              plVar29 = (int64_t *)0x0;
              *(int64_t *)(lVar14 + 0xd8) = lStack0000000000000070;
              plVar17 = plVar29;
              if (lVar16 != 0) {
                plVar17 = *(int64_t **)(lVar16 + 0x38);
              }
              *(int64_t **)(lVar14 + 0x148) = plVar17;
              plVar17 = plVar29;
              if (lVar16 != 0) {
                plVar17 = *(int64_t **)(lVar16 + 0x40);
              }
              *(int64_t **)(lVar14 + 0x150) = plVar17;
              *(int64_t *)(lVar14 + 0x158) = lVar14;
              lVar7 = plVar32[5];
              *(int64_t **)(lVar14 + 0x60) = plVar32;
              *(int *)(lVar14 + 0x24) = (int)lVar7;
              *(int32_t *)(lVar14 + 0x78) = *(int32_t *)(lStack0000000000000070 + 0x11404);
              fVar2 = *(float *)(lStack0000000000000070 + 0x11404);
              *(uint64_t *)(lVar14 + 0xa0) = 0;
              *(int32_t *)(lVar14 + 0xb0) = 0;
              *(int32_t *)(lVar14 + 0xc0) = 0xffffffff;
              *(float *)(lVar14 + 0x7c) = fVar2 * 10000.0;
              plVar32 = plVar29;
              if (lVar16 != 0) {
                plVar32 = *(int64_t **)(lVar16 + 0x68);
              }
              *(int64_t **)(lVar14 + 200) = plVar32;
              FUN_180744ae0(lStack0000000000000070,0x100008,lVar14,0);
              *plVar31 = lVar14;
              plVar33 = (int64_t *)unaff_RBP[-0xe];
            }
            else {
              lVar14 = (int64_t)iStack0000000000000064;
              unaff_RBP[-0xf] = lVar14;
              if ((char)uStack000000000000005c < '\0') {
                unaff_RBP[-5] = 0;
                if ((uStack000000000000005c >> 0x10 & 1) == 0) {
                  lVar16 = (uint64_t)uVar10 << 0x20;
                  lVar14 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x198,
                                         &unknown_var_1936_ptr,0x47a,lVar16);
                  uVar10 = (uint)((uint64_t)lVar16 >> 0x20);
                  if (lVar14 != 0) {
                    plVar32 = (int64_t *)FUN_180773a80(lVar14);
                    unaff_RBP[-0xb] = plVar32;
                    plVar17 = plVar32;
                    if (plVar32 != (int64_t *)0x0) goto LAB_18078ec15;
                  }
                  plVar33 = (int64_t *)unaff_RBP[-0xe];
                  plVar17 = plVar31;
LAB_18078f725:
                  in_stack_00000050 = 0x26;
                  plVar31 = plVar29;
                }
                else {
                  plVar32 = *(int64_t **)unaff_RBP[-9];
                  unaff_RBP[-0xb] = plVar32;
                  plVar17 = plVar31;
LAB_18078ec15:
                  plVar32[0x14] = unaff_RBP[-0xe];
                  *(int *)(plVar32 + 0x16) = iStack0000000000000064;
                  plVar32[0x1b] = lStack0000000000000070;
                  plVar32[0xc] = (int64_t)in_stack_00000068;
                  if ((lVar15 == 0) || (uVar9 = *(uint *)(lVar15 + 0x18), uVar9 == 0)) {
                    uVar9 = (uint)(*(int *)(lStack0000000000000070 + 0x11644) *
                                  *(int *)(unaff_RBP + -0x10)) / 1000;
                  }
                  uVar27 = uStack000000000000005c & 0x400;
                  *(uint *)(unaff_RBP + -0xc) = uVar27;
                  if (uVar27 == 0) {
                    _cStack0000000000000058 = 1;
                    if (*(uint *)((int64_t)unaff_RBP + 0x14) != 0) {
                      _cStack0000000000000058 = *(uint *)((int64_t)unaff_RBP + 0x14);
                    }
                    uVar26 = (uint64_t)_cStack0000000000000058;
                    if (_cStack0000000000000058 < 0x100) {
                      if (_cStack0000000000000058 == 0) {
                        uVar26 = 1;
                      }
                      _cStack0000000000000058 = (int)uVar26 + 0xff;
                      _cStack0000000000000058 =
                           _cStack0000000000000058 -
                           (int)((uint64_t)_cStack0000000000000058 % uVar26);
                      uVar26 = (uint64_t)_cStack0000000000000058;
                    }
                  }
                  else {
                    uVar26 = (uint64_t)uVar9;
                    _cStack0000000000000058 = uVar9;
                  }
                  uVar9 = uVar9 - (int)((uint64_t)uVar9 % uVar26);
                  uVar19 = (uint)uVar26 * 2;
                  if ((uint)uVar26 < uVar9) {
                    uVar19 = uVar9;
                  }
                  if (((uVar27 == 0) && (iStack0000000000000064 == 0)) &&
                     ((uint)unaff_RBP[2] <= uVar19)) {
                    uVar19 = (uint)unaff_RBP[2];
                  }
                  uVar9 = uStack000000000000005c & 0xeffffdfa | 2;
                  *(uint *)(unaff_RBP + -0x10) = uVar9;
                  unaff_RBP[0x1b] = unaff_RBP[-1];
                  unaff_RBP[0x1c] = *unaff_RBP;
                  unaff_RBP[0x1d] = unaff_RBP[1];
                  unaff_RBP[0x1e] = unaff_RBP[2];
                  unaff_RBP[0x21] = unaff_RBP[5];
                  unaff_RBP[0x1f] = unaff_RBP[3];
                  unaff_RBP[0x20] = unaff_RBP[4];
                  if (lVar15 != 0) {
                    iVar8 = *(int *)(unaff_RBP + 0x21);
                    if (*(int *)(lVar15 + 0xb4) != 0) {
                      iVar8 = *(int *)(lVar15 + 0xb4);
                    }
                    *(int *)(unaff_RBP + 0x21) = iVar8;
                  }
                  *(int *)((int64_t)unaff_RBP + 0xe4) = iStack0000000000000060;
                  *(int32_t *)(unaff_RBP + 0x1f) = 0;
                  *(uint *)(unaff_RBP + 0x1e) = uVar19;
                  *(uint *)((int64_t)unaff_RBP + 0xfc) = uVar19 - 1;
                  in_stack_00000050 =
                       FUN_18078df30(lStack0000000000000070,uVar9,unaff_RBP + 0x1b,unaff_RBP + -5);
                  plVar33 = plVar31;
                  if (in_stack_00000050 == 0) {
                    lVar15 = unaff_RBP[-0xd];
                    lVar14 = 0;
                    lVar16 = lVar14;
                    if (lVar15 != 0) {
                      lVar16 = *(int64_t *)(lVar15 + 0x38);
                    }
                    lVar7 = unaff_RBP[-5];
                    unaff_RBP[-5] = lVar7;
                    *(int64_t *)(lVar7 + 0x148) = lVar16;
                    lVar16 = lVar14;
                    if (lVar15 != 0) {
                      lVar16 = *(int64_t *)(lVar15 + 0x40);
                    }
                    *(int64_t *)(lVar7 + 0x150) = lVar16;
                    lVar16 = lVar14;
                    if (lVar15 != 0) {
                      lVar16 = *(int64_t *)(lVar15 + 0x68);
                    }
                    plVar32 = (int64_t *)unaff_RBP[-0xb];
                    *(int64_t *)(lVar7 + 200) = lVar16;
                    *(int64_t **)(lVar7 + 0x158) = plVar32;
                    *(int64_t **)(lVar7 + 0x60) = in_stack_00000068;
                    plVar32[0x30] = lVar7;
                    *(int32_t *)(plVar32 + 0x18) = 0;
                    *(int32_t *)((int64_t)plVar32 + 0x44) = *(int32_t *)(unaff_RBP + 2);
                    *(int32_t *)(plVar32 + 9) = *(int32_t *)((int64_t)unaff_RBP + 0xc);
                    *(float *)((int64_t)plVar32 + 0x6c) = (float)*(int *)(unaff_RBP + 1);
                    if (lVar15 == 0) {
                      uVar24 = *(int32_t *)(unaff_RBP + 5);
                    }
                    else {
                      uVar24 = *(int32_t *)(lVar15 + 0xb4);
                    }
                    uVar9 = *(uint *)(unaff_RBP + -0x10);
                    *(int32_t *)((int64_t)plVar32 + 0x74) = uVar24;
                    uVar24 = *(int32_t *)((int64_t)unaff_RBP + 0x2c);
                    *(uint *)((int64_t)plVar32 + 0x2c) = uVar9 & 0xfffffffd | 0x20080;
                    *(int32_t *)((int64_t)plVar32 + 0x13c) = uVar24;
                    *(int32_t *)(plVar32 + 5) = *(int32_t *)unaff_RBP;
                    *(int *)(plVar32 + 0xd) = iStack0000000000000060;
                    plVar32[0x1b] = lStack0000000000000070;
                    lVar16 = lVar14;
                    if (lVar15 != 0) {
                      lVar16 = *(int64_t *)(lVar15 + 0x38);
                    }
                    plVar32[0x29] = lVar16;
                    lVar16 = lVar14;
                    if (lVar15 != 0) {
                      lVar16 = *(int64_t *)(lVar15 + 0x40);
                    }
                    plVar32[0x2a] = lVar16;
                    *(uint *)((int64_t)plVar32 + 0x18c) = _cStack0000000000000058;
                    plVar32[0x2b] = (int64_t)plVar32;
                    *(int *)((int64_t)plVar32 + 0x24) = (int)in_stack_00000068[5];
                    *(int32_t *)(plVar32 + 0xf) =
                         *(int32_t *)(lStack0000000000000070 + 0x11404);
                    *(float *)((int64_t)plVar32 + 0x7c) =
                         *(float *)(lStack0000000000000070 + 0x11404) * 10000.0;
                    if (lVar15 != 0) {
                      lVar14 = *(int64_t *)(lVar15 + 0x68);
                    }
                    plVar32[0x19] = lVar14;
                    uVar9 = uVar9 & 0xffffffe5 | 0x20080;
                    *(int32_t *)(plVar32 + 10) = *(int32_t *)((int64_t)plVar32 + 0x44);
                    *(int32_t *)((int64_t)plVar32 + 0x4c) = 0;
                    lVar15 = unaff_RBP[-1];
                    *(uint *)((int64_t)plVar32 + 0x2c) = uVar9;
                    plVar32[6] = lVar15;
                    uVar9 = *(uint *)(lVar7 + 0x2c) & 0x18 | uVar9;
                    *(uint *)((int64_t)plVar32 + 0x2c) = uVar9;
                    if ((((unaff_RBP[4] & 1) == 0) && ((uStack000000000000005c & 1) == 0)) &&
                       (((unaff_RBP[4] & 2) != 0 || ((uStack000000000000005c & 2) != 0)))) {
                      uVar27 = 2;
                    }
                    else {
                      uVar27 = 1;
                    }
                    uVar26 = CONCAT44(uVar10,2);
                    *(uint *)((int64_t)plVar32 + 0x2c) = uVar27 | uVar9;
                    (**(code **)(*plVar32 + 0x138))
                              (plVar32,*(int32_t *)(unaff_RBP + 3),2,
                               *(int32_t *)((int64_t)unaff_RBP + 0x1c),uVar26);
                    if (plVar32[0x26] == 0) {
                      in_stack_00000050 =
                           (**(code **)(*plVar32 + 0xd8))
                                     (plVar32,*(uint64_t *)(lStack0000000000000070 + 0x11720));
                      if (in_stack_00000050 != 0) goto LAB_18078f72d;
                      plVar32 = (int64_t *)unaff_RBP[-0xb];
                      in_stack_00000050 = 0;
                    }
                    lVar15 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),200,
                                           &unknown_var_1936_ptr,0x516,uVar26 & 0xffffffff00000000);
                    if (lVar15 != 0) {
                      lVar15 = FUN_1807f3070(lVar15);
                    }
                    plVar32[0x2f] = lVar15;
                    plVar29 = plVar31;
                    if (lVar15 != 0) {
                      *(int64_t *)(lVar15 + 8) = lStack0000000000000070;
                      func_0x000180743c20(lStack0000000000000070,10);
                      plVar29 = plVar32 + 0x2c;
                      plVar32[0x2e] = (int64_t)plVar32;
                      plVar32[0x2d] = *(int64_t *)(lStack0000000000000070 + 0x12210);
                      *plVar29 = lStack0000000000000070 + 0x12208;
                      *(int64_t **)(lStack0000000000000070 + 0x12210) = plVar29;
                      *(int64_t **)plVar32[0x2d] = plVar29;
                    // WARNING: Subroutine does not return
                      FUN_180743d60(lStack0000000000000070,10);
                    }
                    goto LAB_18078f725;
                  }
                }
LAB_18078f72d:
                if (plVar17 != (int64_t *)0x0) {
                  (**(code **)(*plVar17 + 0x18))(plVar17,1);
                }
                goto FUN_1807901fa;
              }
              plStack0000000000000078 = (int64_t *)0x0;
              unaff_RBP[-10] = 0;
              plVar33 = (int64_t *)unaff_RBP[-0xe];
              cStack0000000000000054 = '\0';
              plVar17 = plVar31;
              if (0 < iStack0000000000000064) {
                if ((uStack000000000000005c >> 0x10 & 1) == 0) {
                  uVar26 = (uint64_t)uVar10 << 0x20;
                  lVar15 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x160,
                                         &unknown_var_1936_ptr,0x63b,uVar26);
                  if (lVar15 != 0) {
                    plVar17 = (int64_t *)FUN_1807f7c50(lVar15);
                    unaff_RBP[-10] = plVar17;
                    plVar30 = plVar17;
                    if (plVar17 != (int64_t *)0x0) goto LAB_18078f7d7;
                  }
                  in_stack_00000050 = 0x26;
                  plVar17 = plVar31;
LAB_18078fe1a:
                  plVar31 = plVar29;
                  if (plVar17 != (int64_t *)0x0) {
                    (**(code **)(*plVar17 + 0x18))(plVar17,1);
                  }
                  goto FUN_1807901fa;
                }
                plVar30 = *(int64_t **)unaff_RBP[-9];
                unaff_RBP[-10] = plVar30;
LAB_18078f7d7:
                lVar15 = unaff_RBP[-0xd];
                plVar29 = (int64_t *)0x0;
                plVar30[0x1b] = lStack0000000000000070;
                plVar31 = plVar29;
                if (lVar15 != 0) {
                  plVar31 = *(int64_t **)(lVar15 + 0x38);
                }
                plVar30[0x29] = (int64_t)plVar31;
                plVar31 = plVar29;
                if (lVar15 != 0) {
                  plVar31 = *(int64_t **)(lVar15 + 0x40);
                }
                plVar30[0x2a] = (int64_t)plVar31;
                plVar30[0x2b] = (int64_t)plVar30;
                *(int *)((int64_t)plVar30 + 0x24) = (int)plVar32[5];
                plVar30[0xc] = (int64_t)plVar32;
                *(int32_t *)(plVar30 + 0xf) = *(int32_t *)(lStack0000000000000070 + 0x11404);
                fVar2 = *(float *)(lStack0000000000000070 + 0x11404);
                plVar30[0x14] = unaff_RBP[-0xe];
                *(int *)(plVar30 + 0x16) = iStack0000000000000064;
                *(float *)((int64_t)plVar30 + 0x7c) = fVar2 * 10000.0;
                *(int32_t *)(plVar30 + 0x18) = 0xffffffff;
                plVar31 = plVar29;
                if (lVar15 != 0) {
                  plVar31 = *(int64_t **)(lVar15 + 0x68);
                }
                plVar30[0x19] = (int64_t)plVar31;
                *(uint *)((int64_t)plVar30 + 0x2c) = uStack000000000000005c;
                *(float *)((int64_t)plVar30 + 0x6c) = (float)*(int *)(unaff_RBP + 1);
                FUN_180744ae0(lStack0000000000000070,0x100008);
                lVar14 = unaff_RBP[-0xf];
                plVar33 = plVar29;
              }
              uVar10 = (uint)(uVar26 >> 0x20);
              iStack0000000000000060 = 0;
              iVar8 = iStack0000000000000064;
              if (iStack0000000000000064 == 0) {
                iVar8 = 1;
              }
              *(int *)(unaff_RBP + -0xc) = iVar8;
              if (0 < iVar8) {
                do {
                  uVar10 = (uint)(uVar26 >> 0x20);
                  iVar8 = 1;
                  if (lVar14 != 0) {
                    iVar8 = (int)plVar32[3];
                  }
                  if (iVar8 <= iStack0000000000000060) break;
                  unaff_RBP[0x14] = 0;
                  unaff_RBP[0x15] = 0;
                  unaff_RBP[0x16] = 0;
                  unaff_RBP[0x17] = 0;
                  unaff_RBP[0x18] = 0;
                  unaff_RBP[0x19] = 0;
                  unaff_RBP[0x1a] = 0;
                  _cStack0000000000000058 = uStack000000000000005c;
                  in_stack_00000050 =
                       (*(code *)plVar32[0x11])(plVar32,iStack0000000000000060,unaff_RBP + 0x14);
                  if (in_stack_00000050 != 0) goto LAB_18078fe1a;
                  lVar14 = unaff_RBP[-0xf];
                  if ((lVar14 == 0) && ((uStack000000000000005c >> 0x10 & 1) != 0)) {
                    unaff_RBP[-3] = *(uint64_t *)unaff_RBP[-9];
LAB_18078f958:
                    lVar15 = unaff_RBP[-0xd];
LAB_18078f95c:
                    if (lVar15 != 0) {
                      iVar8 = *(int *)(unaff_RBP + 0x1a);
                      if (*(int *)(lVar15 + 0xb4) != 0) {
                        iVar8 = *(int *)(lVar15 + 0xb4);
                      }
                      *(int *)(unaff_RBP + 0x1a) = iVar8;
                    }
LAB_18078f978:
                    uVar10 = 0;
                    if ((uStack000000000000005c >> 9 & 1) == 0) {
LAB_18078fa18:
                      if ((cStack0000000000000054 == '\0') &&
                         ((uStack000000000000005c >> 0x1c & 1) != 0)) {
                        if ((code *)in_stack_00000068[0x17] == (code *)0x0) {
                          in_stack_00000050 = 0x27;
                          goto LAB_18078fe1a;
                        }
                        in_stack_00000050 = (*(code *)in_stack_00000068[0x17])(in_stack_00000068);
                        uVar10 = in_stack_00000050;
                        if (in_stack_00000050 != 0) goto LAB_18078fe1a;
                      }
                    }
                    else {
                      if (*(uint *)((int64_t)in_stack_00000068 + 0xa4) < 2) {
                        _cStack0000000000000058 = uStack000000000000005c & 0xfffffdff;
                        if (unaff_RBP[-10] != 0) {
                          puVar1 = (uint *)(unaff_RBP[-10] + 0x2c);
                          *puVar1 = *puVar1 & 0xfffffdff;
                        }
                        goto LAB_18078fa18;
                      }
                      cStack0000000000000054 = '\x01';
                    }
                    in_stack_00000050 = uVar10;
                    in_stack_00000050 =
                         FUN_18078df30(lStack0000000000000070,_cStack0000000000000058,
                                       unaff_RBP + 0x14,unaff_RBP + -3);
                    if (in_stack_00000050 != 0) goto LAB_18078fe1a;
                    plVar31 = (int64_t *)unaff_RBP[-3];
                    plVar32 = (int64_t *)0x0;
                    lVar15 = unaff_RBP[-10];
                    plVar30 = (int64_t *)0x0;
                    *(int *)(plVar31 + 0x18) = iStack0000000000000060;
                    plVar31[0x17] = lVar15;
                    *(int *)((int64_t)plVar31 + 0x24) = (int)in_stack_00000068[5];
                    plVar31[0xc] = (int64_t)in_stack_00000068;
                    *(int32_t *)(plVar31 + 0xf) =
                         *(int32_t *)(lStack0000000000000070 + 0x11404);
                    lVar15 = unaff_RBP[-0xd];
                    *(float *)((int64_t)plVar31 + 0x7c) =
                         *(float *)(lStack0000000000000070 + 0x11404) * 10000.0;
                    plVar29 = plVar32;
                    if (lVar15 != 0) {
                      plVar29 = *(int64_t **)(lVar15 + 0x68);
                    }
                    plVar31[0x19] = (int64_t)plVar29;
                    plStack0000000000000078 = plVar31;
                    if ((plVar31[0x26] == 0) &&
                       (in_stack_00000050 =
                             (**(code **)(*plVar31 + 0xd8))
                                       (plVar31,*(uint64_t *)(lStack0000000000000070 + 0x11720)),
                       plVar29 = plVar32, in_stack_00000050 != 0)) goto LAB_18078fe1a;
                    in_stack_00000050 = 0;
                    if ((unaff_RBP[-0xf] == 0) && (iStack0000000000000060 == 0)) {
                      FUN_180744ae0(lStack0000000000000070,0x100008,plVar31,0);
                      lVar15 = unaff_RBP[-0xd];
                      lVar14 = 0;
                      lVar16 = lVar14;
                      if (lVar15 != 0) {
                        lVar16 = *(int64_t *)(lVar15 + 0x38);
                      }
                      plVar31[0x29] = lVar16;
                      if (lVar15 != 0) {
                        lVar14 = *(int64_t *)(lVar15 + 0x40);
                      }
                      plVar31[0x2a] = lVar14;
                      plVar31[0x2b] = (int64_t)plVar31;
                    }
                    plVar29 = plVar30;
                    if ((code *)in_stack_00000068[0x10] != (code *)0x0) {
                      in_stack_00000050 =
                           (*(code *)in_stack_00000068[0x10])
                                     (in_stack_00000068,iStack0000000000000060);
                      if (in_stack_00000050 != 0) goto LAB_18078fe1a;
                      in_stack_00000050 = 0;
                    }
                    if ((iStack0000000000000060 == 0) && ((_cStack0000000000000058 & 0x200) == 0)) {
                      plVar28 = in_stack_00000068;
                      if ((int64_t *)in_stack_00000068[0x24] != (int64_t *)0x0) {
                        plVar28 = (int64_t *)in_stack_00000068[0x24];
                      }
                      unaff_RBP[-7] = plVar28;
                      *(uint *)(plVar28 + 0x2c) = *(uint *)(plVar28 + 0x2c) & 0xfffffdff;
                      if ((code *)plVar28[0x20] != (code *)0x0) {
                        uVar26 = plVar28[0x25];
                        in_stack_00000050 =
                             (*(code *)plVar28[0x20])
                                       (plVar28,(int)plVar31[0xd],
                                        (int)*(float *)((int64_t)plVar31 + 0x6c),0,uVar26);
                        if (in_stack_00000050 != 0) goto LAB_18078fe1a;
                        *(uint *)(unaff_RBP[-7] + 0x2c) = *(uint *)(unaff_RBP[-7] + 0x2c) | 0x200;
                        in_stack_00000050 = 0;
                      }
                    }
                    plVar31 = in_stack_00000068;
                    *(int32_t *)(in_stack_00000068 + 0x2b) = 0;
                    if (in_stack_00000068[0x28] != 0) {
                    // WARNING: Subroutine does not return
                      memset(in_stack_00000068[0x28],0,
                             *(int32_t *)((int64_t)in_stack_00000068 + 0x154));
                    }
                    if (((code *)in_stack_00000068[0x16] != (code *)0x0) &&
                       (in_stack_00000050 = (*(code *)in_stack_00000068[0x16])(in_stack_00000068),
                       in_stack_00000050 != 0)) goto LAB_18078fe1a;
                    uVar24 = 8;
                    if ((_cStack0000000000000058 & 0x200) == 0) {
                      uVar24 = 2;
                    }
                    in_stack_00000050 = FUN_180773610(plVar31,iStack0000000000000060,0,uVar24);
                    plVar31 = plStack0000000000000078;
                    if (in_stack_00000050 != 0) goto LAB_18078fe1a;
                    if ((code *)plStack0000000000000078[0x2a] != (code *)0x0) {
                      if ((int64_t)unaff_RBP[-0xf] < 1) {
                        (*(code *)plStack0000000000000078[0x2a])(plStack0000000000000078,0,0,2);
                      }
                      else {
                        (**(code **)(unaff_RBP[-10] + 0x150))(unaff_RBP[-10],iStack0000000000000060)
                        ;
                      }
                    }
                    if ((_cStack0000000000000058 >> 0x1c & 1) == 0) {
                      if ((_cStack0000000000000058 >> 0xd & 1) == 0) {
                        uVar10 = _cStack0000000000000058 >> 9;
                        _cStack0000000000000058 = uVar10 & 0xffffff01;
                        if ((uVar10 & 1) == 0) {
                          iVar8 = *(int *)(unaff_RBP + 0x17);
LAB_18078fd4b:
                          *(int *)(unaff_RBP + -0x10) = iVar8;
                        }
                        else {
                          iVar8 = *(int *)((int64_t)unaff_RBP + 0xb4);
                          *(int *)(unaff_RBP + -0x10) = iVar8;
                          if ((((int)in_stack_00000068[5] - 5U & 0xfffffff3) != 0) ||
                             ((int)in_stack_00000068[5] == 0xd)) {
                            iVar8 = iVar8 - (int)in_stack_00000068[0x22];
                            goto LAB_18078fd4b;
                          }
                        }
                        in_stack_00000050 = FUN_180751310(plVar31,0,iVar8,unaff_RBP + -0xb);
                        if ((in_stack_00000050 & 0xffffffef) != 0) {
                          if ((*(uint *)((int64_t)plVar31 + 0x2c) & 0x10000) == 0) {
                            (**(code **)(*plVar31 + 0x18))(plVar31,1);
                          }
                          goto LAB_18078fe1a;
                        }
                        uVar10 = *(uint *)(unaff_RBP + -0xb);
                        if (*(uint *)(unaff_RBP + -0x10) != uVar10) {
                          if (((uVar10 == 0) || (cStack0000000000000058 != '\0')) ||
                             (*(uint *)((int64_t)plVar31 + 0x44) < uVar10)) {
                            in_stack_00000050 = 0xd;
                            goto LAB_18078fe1a;
                          }
                          if (*(uint *)(plVar31 + 10) == *(uint *)((int64_t)plVar31 + 0x44)) {
                            *(uint *)(plVar31 + 10) = uVar10;
                          }
                        }
                        in_stack_00000050 = func_0x0001807526d0(plVar31,0);
                        plVar31 = plStack0000000000000078;
                        plVar29 = plVar32;
                        if ((in_stack_00000050 & 0xffffffef) != 0) goto LAB_18078fe1a;
                      }
                    }
                    else {
                      uVar10 = (**(code **)(*plVar31 + 400))
                                         (plVar31,(uint64_t)
                                                  *(uint *)(in_stack_00000068[0x2e] + 0x16c) +
                                                  unaff_RBP[-4]);
                      plVar31 = plStack0000000000000078;
                      in_stack_00000050 = uVar10;
                      if (uVar10 != 0) {
                        (**(code **)(*plStack0000000000000078 + 0x18))(plStack0000000000000078,1);
                        in_stack_00000050 = uVar10;
                        goto LAB_18078fe1a;
                      }
                    }
                    lVar14 = unaff_RBP[-0xf];
                    plVar29 = plVar32;
                    if (0 < lVar14) {
                      *(int64_t **)unaff_RBP[-0xe] = plVar31;
                      *(int *)(unaff_RBP[-10] + 0xb4) = *(int *)(unaff_RBP[-10] + 0xb4) + 1;
                      plVar29 = plVar30;
                    }
                  }
                  else {
                    iVar8 = 0;
                    plStack0000000000000078 = (int64_t *)0x0;
                    unaff_RBP[-3] = 0;
                    if (lVar14 < 1) goto LAB_18078f958;
                    lVar15 = unaff_RBP[-0xd];
                    if (lVar15 == 0) goto LAB_18078f978;
                    piVar23 = *(int **)(lVar15 + 0x28);
                    if (piVar23 == (int *)0x0) goto LAB_18078f95c;
                    if (0 < *(int *)(lVar15 + 0x30)) {
                      do {
                        if (*piVar23 == iStack0000000000000060) goto LAB_18078f95c;
                        iVar8 = iVar8 + 1;
                        piVar23 = piVar23 + 1;
                      } while (iVar8 < *(int *)(lVar15 + 0x30));
                      lVar14 = unaff_RBP[-0xf];
                    }
                  }
                  uVar10 = (uint)(uVar26 >> 0x20);
                  unaff_RBP[-0xe] = unaff_RBP[-0xe] + 8;
                  iStack0000000000000060 = iStack0000000000000060 + 1;
                  plVar32 = in_stack_00000068;
                } while (iStack0000000000000060 < *(int *)(unaff_RBP + -0xc));
              }
              if ((uStack000000000000005c & 0x2000) == 0) {
                if (in_stack_00000068[0x2e] != 0) {
                  if ((*(uint *)(lStack0000000000000070 + 0x78) & 0x100000) == 0) {
                    func_0x000180743c20(lStack0000000000000070,0xc);
                  }
                  FUN_180769080(in_stack_00000068[0x2e]);
                    // WARNING: Subroutine does not return
                  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),in_stack_00000068[0x2e],
                                &unknown_var_1936_ptr,0x752,1);
                }
                if (in_stack_00000068[0x24] != 0) {
                  *(uint64_t *)(in_stack_00000068[0x24] + 0x170) = 0;
                }
              }
              lVar15 = lStack0000000000000070;
              if (iStack0000000000000064 < 1) {
                *(int64_t **)unaff_RBP[-9] = plStack0000000000000078;
                if (plVar17 != (int64_t *)0x0) {
                  (**(code **)(*plVar17 + 0x18))(plVar17,1);
                  lVar15 = lStack0000000000000070;
                }
              }
              else {
                *(uint64_t *)unaff_RBP[-9] = unaff_RBP[-10];
              }
            }
            plVar17 = in_stack_00000068;
            plVar32 = *(int64_t **)unaff_RBP[-9];
            if (*(char *)(unaff_RBP + 0x868) != '\0') {
              FUN_180768360(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
              plVar29 = plVar32 + 1;
              plVar31 = (int64_t *)(lVar15 + 0x88);
              if (lVar15 == -0x80) {
                plVar31 = (int64_t *)0x0;
              }
              lVar15 = *plVar31;
              *plVar29 = lVar15;
              plVar32[2] = (int64_t)plVar31;
              *(int64_t **)(lVar15 + 8) = plVar29;
              *(int64_t **)plVar32[2] = plVar29;
                    // WARNING: Subroutine does not return
              FUN_180768400(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
            }
            plVar31 = plVar29;
            if ((in_stack_00000050 & 0xffffffef) == 0) {
              if (((*(uint *)((int64_t)plVar32 + 0x2c) & 0x8000000) == 0) &&
                 (((char *)plVar32[6] == (char *)0x0 || (*(char *)plVar32[6] == '\0')))) {
                cStack0000000000000054 = '\x01';
                if ((in_stack_00000068[0x2d] != 0) &&
                   (((iVar8 = FUN_1807d86d0(in_stack_00000068[0x2d],&unknown_var_2124_ptr,0,unaff_RBP + 6),
                     iVar8 == 0 ||
                     (iVar8 = FUN_1807d86d0(plVar17[0x2d],&unknown_var_2132_ptr,0,unaff_RBP + 6),
                     iVar8 == 0)) ||
                    (iVar8 = FUN_1807d86d0(plVar17[0x2d],&unknown_var_2136_ptr,0,unaff_RBP + 6), iVar8 == 0
                    )))) {
                  iVar8 = *(int *)((int64_t)unaff_RBP + 0x34);
                  if (iVar8 == 4) {
                    in_stack_00000050 = (**(code **)(*plVar32 + 0x88))(plVar32);
                    if (in_stack_00000050 == 0) {
                      func_0x0001807f7e40(plVar32[7],unaff_RBP[8] + 2,0x80);
                      func_0x0001807f7e70(plVar32[7]);
LAB_1807900e3:
                      cStack0000000000000054 = '\0';
LAB_1807900eb:
                      FUN_1807d84c0(plVar17[0x2d],*(int32_t *)(unaff_RBP + 6),unaff_RBP[7],
                                    unaff_RBP[8],CONCAT44(uVar10,*(int32_t *)(unaff_RBP + 9)));
                      if (cStack0000000000000054 == '\0') goto LAB_1807901bd;
                      goto LAB_18079011d;
                    }
                  }
                  else if (iVar8 == 6) {
                    in_stack_00000050 = (**(code **)(*plVar32 + 0x88))(plVar32);
                    if (in_stack_00000050 == 0) {
                      func_0x00018076b450(plVar32[7],unaff_RBP[8],0x100);
                      goto LAB_1807900e3;
                    }
                  }
                  else {
                    if (iVar8 != 3) goto LAB_1807900eb;
                    in_stack_00000050 = (**(code **)(*plVar32 + 0x88))(plVar32);
                    if (in_stack_00000050 == 0) {
                      FUN_18076b5b0(plVar32[7],0x100,unaff_RBP[8]);
                      goto LAB_1807900e3;
                    }
                  }
                  goto FUN_1807901fa;
                }
LAB_18079011d:
                if (((uStack000000000000005c & 0x10000800) == 0) && (unaff_RBP[-4] != 0)) {
                  uVar10 = func_0x00018076b690(unaff_RBP[-4]);
                  uVar20 = (uint64_t)(int)uVar10;
                  uVar26 = uVar20;
                  if (-1 < (int)uVar10) {
                    do {
                      if ((*(char *)(unaff_RBP[-4] + uVar20) == '\\') ||
                         (*(char *)(unaff_RBP[-4] + uVar20) == '/')) {
                        uVar10 = (int)uVar26 + 1;
                        break;
                      }
                      uVar10 = (int)uVar26 - 1;
                      uVar20 = uVar20 - 1;
                      uVar26 = (uint64_t)uVar10;
                    } while (-1 < (int64_t)uVar20);
                  }
                  uVar9 = 0;
                  if (-1 < (int)uVar10) {
                    uVar9 = uVar10;
                  }
                  unaff_RBP[-7] = (char *)((int64_t)(int)uVar9 + unaff_RBP[-4]);
                  if (*(char *)((int64_t)(int)uVar9 + unaff_RBP[-4]) == '\0') {
                    plVar32[6] = (int64_t)&system_buffer_ptr;
                  }
                  else {
                    in_stack_00000050 = (**(code **)(*plVar32 + 0x88))(plVar32);
                    if (in_stack_00000050 != 0) goto FUN_1807901fa;
                    func_0x00018076b450(plVar32[7],unaff_RBP[-7],0x100);
                  }
                }
              }
LAB_1807901bd:
              if (((plVar17[0x2e] != 0) && (unaff_RBP[-2] != 0)) &&
                 (*(int64_t *)(plVar17[0x2e] + 0x1e0) == unaff_RBP[-2])) {
                in_stack_00000050 = FUN_180768c70();
              }
            }
            else if ((uStack000000000000005c & 0x10000) == 0) {
              *(int64_t *)unaff_RBP[-9] = 0;
            }
          }
          else {
            in_stack_00000050 = 0x40;
            plVar31 = plVar29;
            plVar11 = (int64_t *)0x0;
            plVar33 = (int64_t *)unaff_RBP[-0xe];
          }
        }
        else {
LAB_18078ea30:
          plVar33 = (int64_t *)unaff_RBP[-0xe];
          plVar31 = plVar29;
        }
      }
    }
  }
FUN_1807901fa:
  plVar29 = plVar31;
  plVar31 = plVar11;
  plVar32 = plVar33;
  if (lVar12 != 0) {
    FUN_1807d8800(lVar12);
  }
LAB_180790207:
  if (plVar31 != (int64_t *)0x0) {
    FUN_180769080(plVar31);
  }
  if (plVar34 == (int64_t *)0x0) {
    if (plVar29 != (int64_t *)0x0) {
      FUN_180773410(plVar29,1);
    }
    if (plVar32 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar32,&unknown_var_2144_ptr,0xb8,1);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(unaff_RBP[0x854] ^ (uint64_t)&stack0x00000000);
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar34,&unknown_var_2144_ptr,0xb8,1);
}



// WARNING: Removing unreachable block (ram,0x00018078fee2)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address





