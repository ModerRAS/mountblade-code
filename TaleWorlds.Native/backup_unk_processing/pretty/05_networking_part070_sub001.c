#include "TaleWorlds.Native.Split.h"

// 05_networking_part070_sub001.c - 13 个函数

#include "TaleWorlds.Native.Split.h"

// 05_networking_part070.c - 13 个函数


// 函数: void FUN_180879232(void)
void FUN_180879232(void)

{
  uint *puVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong unaff_RBP;
  ulonglong uVar15;
  longlong *unaff_RSI;
  uint uVar16;
  ulonglong uVar17;
  longlong *unaff_RDI;
  int unaff_R12D;
  uint uVar18;
  int32_t *puVar19;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong *unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t uVar20;
  int in_stack_00000070;
  
  do {
    uVar20 = FUN_1808fcb90(&system_ptr_ea98);
    if (_DAT_180c4ea98 == -1) {
      _DAT_180c4ea94 = unaff_R12D;
      uVar20 = FUN_1808fcb30(&system_ptr_ea98);
    }
    do {
      if ((int)unaff_RDI[0x14] != _DAT_180c4ea94) {
        for (uVar13 = unaff_RDI[0x10];
            (uVar14 = unaff_RDI[0x10], uVar14 <= uVar13 &&
            (uVar13 < uVar14 + (longlong)(int)unaff_RDI[0x11] * 0x18)); uVar13 = uVar13 + 0x18) {
          lVar11 = (**(code **)(*unaff_R15 + 0x128))(uVar20,uVar13,CONCAT71((int7)(uVar14 >> 8),1));
          if (lVar11 != 0) {
            *(int32_t *)(lVar11 + 0xb0) = 0xffffffff;
          }
          uVar20 = extraout_XMM0_Da_00;
        }
      }
      if ((unaff_RDI == unaff_RSI) || (unaff_RDI = (longlong *)*unaff_RDI, unaff_RDI == unaff_RSI))
      {
        lVar11 = *(longlong *)(unaff_RBP + -0x41);
        do {
          in_stack_00000070 = in_stack_00000070 + 1;
          if ((in_stack_00000070 < 0) || (*(int *)(lVar11 + 0xd8) <= in_stack_00000070)) {
            uVar18 = *(uint *)(unaff_RBP + -0x61);
            uVar13 = 0;
            if (((uVar18 < 0x55) && (iVar8 = FUN_180868f00(FUN_1808780d0,lVar11), iVar8 != 0)) ||
               (((uVar18 < 0x56 && (iVar8 = FUN_180877970(lVar11), iVar8 != 0)) ||
                ((uVar18 < 0x57 && (iVar8 = FUN_180868f00(FUN_180876d70,lVar11), iVar8 != 0))))))
            goto LAB_180879203;
            uVar20 = 0;
            uVar14 = uVar13;
            if (uVar18 < 0x58) goto LAB_180878cc1;
            goto LAB_180878d26;
          }
          lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0xd0) + (longlong)in_stack_00000070 * 8);
          for (uVar13 = *(ulonglong *)(lVar12 + 0x48);
              (uVar14 = *(ulonglong *)(lVar12 + 0x48), uVar14 <= uVar13 &&
              (uVar13 < uVar14 + (longlong)*(int *)(lVar12 + 0x50) * 0x18)); uVar13 = uVar13 + 0x18)
          {
            lVar10 = (**(code **)(*unaff_R15 + 0x128))
                               (uVar20,uVar13,CONCAT71((int7)(uVar14 >> 8),1));
            if (lVar10 != 0) {
              *(int32_t *)(lVar10 + 0xb0) = 0xffffffff;
            }
            uVar20 = extraout_XMM0_Da;
          }
          unaff_RSI = (longlong *)(lVar12 + 0x68);
          unaff_RDI = *(longlong **)(lVar12 + 0x68);
        } while (unaff_RDI == unaff_RSI);
        unaff_R12D = 0;
        unaff_R14 = 0x48;
        unaff_R13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
      }
    } while (_DAT_180c4ea98 <= *(int *)(unaff_R14 + unaff_R13));
  } while( true );
LAB_180878cc1:
  iVar8 = (int)uVar14;
  uVar14 = uVar13;
  if ((iVar8 < 0) || (*(int *)(lVar11 + 0x158) <= iVar8)) goto LAB_180878cf5;
  iVar9 = FUN_180879270(*(uint64_t *)(*(longlong *)(lVar11 + 0x150) + (longlong)iVar8 * 8));
  if (iVar9 != 0) goto LAB_180879203;
  uVar14 = (ulonglong)(iVar8 + 1);
  goto LAB_180878cc1;
LAB_180878cf5:
  iVar8 = (int)uVar14;
  if ((iVar8 < 0) || (*(int *)(lVar11 + 0x168) <= iVar8)) goto LAB_180878d26;
  iVar9 = FUN_180879270(*(uint64_t *)(*(longlong *)(lVar11 + 0x160) + (longlong)iVar8 * 8));
  if (iVar9 != 0) goto LAB_180879203;
  uVar14 = (ulonglong)(iVar8 + 1);
  goto LAB_180878cf5;
LAB_180878d26:
  uVar14 = uVar13;
  if (uVar18 < 0x59) {
    while ((iVar8 = (int)uVar14, -1 < iVar8 && (iVar8 < *(int *)(lVar11 + 0x88)))) {
      lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x80) + (longlong)iVar8 * 8);
      if (*(int *)(lVar12 + 0x60) == 0x1e) {
        *(int8_t *)(lVar12 + 0x40) = 1;
      }
      uVar14 = (ulonglong)(iVar8 + 1);
    }
  }
  if ((0x5a < uVar18) ||
     ((((iVar8 = FUN_180868e40(FUN_1808777c0,lVar11), iVar8 == 0 &&
        (iVar8 = FUN_180868de0(FUN_1808777c0,lVar11), iVar8 == 0)) &&
       (iVar8 = FUN_180868fc0(FUN_1808777c0,lVar11), iVar8 == 0)) &&
      (iVar8 = FUN_180868ea0(FUN_1808777c0,lVar11), iVar8 == 0)))) {
    if (uVar18 < 0x61) {
      uVar14 = uVar13;
      uVar15 = uVar13;
      uVar17 = uVar13;
      if (0 < *(int *)(lVar11 + 0x1a8)) {
        do {
          cVar7 = FUN_1808c84b0(*(uint64_t *)(uVar14 + *(longlong *)(lVar11 + 0x1a0)));
          if (cVar7 == '\0') {
            puVar1 = (uint *)(*(longlong *)(*(longlong *)(lVar11 + 0x1a0) + uVar14) + 0xf8);
            *puVar1 = *puVar1 | 1;
            uVar15 = (ulonglong)((int)uVar15 + 1);
          }
          uVar20 = (int32_t)uVar15;
          uVar16 = (int)uVar17 + 1;
          uVar14 = uVar14 + 8;
          uVar17 = (ulonglong)uVar16;
        } while ((int)uVar16 < *(int *)(lVar11 + 0x1a8));
      }
      *(int32_t *)(lVar11 + 0x2f4) = uVar20;
    }
    if ((uVar18 < 100) && (uVar14 = uVar13, uVar15 = uVar13, 0 < *(int *)(lVar11 + 0x1a8))) {
      do {
        lVar12 = *(longlong *)(uVar15 + *(longlong *)(lVar11 + 0x1a0));
        if (((*(int *)(lVar12 + 0x60) != 0) ||
            ((*(int *)(lVar12 + 100) != 0 || (*(int *)(lVar12 + 0x68) != 0)))) ||
           (*(int *)(lVar12 + 0x6c) != 0)) {
          *(uint *)(lVar12 + 0xf8) = *(uint *)(lVar12 + 0xf8) | 2;
        }
        uVar16 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar16;
        uVar15 = uVar15 + 8;
      } while ((int)uVar16 < *(int *)(lVar11 + 0x1a8));
    }
    if ((0x6a < uVar18) || (iVar8 = FUN_1808df350(lVar11), iVar8 == 0)) {
      if (uVar18 < 0x6c) {
        iVar8 = FUN_1808698b0(FUN_180879510,*(uint64_t *)(unaff_RBP + -0x49),lVar11);
        if (iVar8 != 0) goto LAB_180879203;
      }
      if (((((0x6d < uVar18) || (iVar8 = FUN_1808df2b0(lVar11), iVar8 == 0)) &&
           ((0x6e < uVar18 || (iVar8 = FUN_1808deff0(lVar11), iVar8 == 0)))) &&
          (((0x71 < uVar18 || (iVar8 = FUN_1808df570(lVar11), iVar8 == 0)) &&
           ((0x73 < uVar18 || (iVar8 = FUN_180868f00(FUN_180876d90,lVar11), iVar8 == 0)))))) &&
         ((0x74 < uVar18 || (iVar8 = FUN_180868f00(&UNK_180876e90,lVar11), iVar8 == 0)))) {
        if (uVar18 < 99) {
          iVar8 = FUN_180868d20(FUN_1808794d0,lVar11);
          if ((((iVar8 != 0) || (iVar8 = FUN_180869080(FUN_1808794d0,lVar11), iVar8 != 0)) ||
              (iVar8 = FUN_180869020(FUN_1808794d0,lVar11), iVar8 != 0)) ||
             (iVar8 = FUN_180868f60(FUN_1808794d0,lVar11), uVar14 = uVar13, iVar8 != 0))
          goto LAB_180879203;
          while ((iVar8 = (int)uVar14, -1 < iVar8 && (iVar8 < *(int *)(lVar11 + 0x108)))) {
            uVar2 = *(uint64_t *)(*(longlong *)(lVar11 + 0x100) + (longlong)iVar8 * 8);
            FUN_1808b0660(uVar2,5);
            FUN_1808b0660(uVar2,6);
            FUN_1808b0660(uVar2,7);
            uVar14 = (ulonglong)(iVar8 + 1);
          }
        }
        if (((0x85 < uVar18) || (iVar8 = FUN_180868d80(FUN_180877f00,lVar11), iVar8 == 0)) &&
           ((0x75 < uVar18 || (iVar8 = FUN_180868d80(FUN_180877810,lVar11), iVar8 == 0)))) {
          if (uVar18 < 0x82) {
            while ((iVar8 = (int)uVar13, -1 < iVar8 && (iVar8 < *(int *)(lVar11 + 0x1c8)))) {
              lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x1c0) + (longlong)iVar8 * 8);
              puVar19 = *(int32_t **)(lVar11 + 0x48);
              *(longlong *)(unaff_RBP + -0x51) = lVar11;
              while( true ) {
                puVar3 = *(int32_t **)(lVar11 + 0x48);
                *(int32_t **)(unaff_RBP + -0x59) = puVar19;
                if ((puVar19 < puVar3) ||
                   (puVar3 + (longlong)*(int *)(lVar11 + 0x50) * 7 <= puVar19)) break;
                uVar20 = *puVar19;
                uVar4 = puVar19[1];
                uVar5 = puVar19[2];
                uVar6 = puVar19[3];
                lVar12 = *unaff_R15;
                *(int32_t *)(unaff_RBP + -0x79) = uVar20;
                *(int32_t *)(unaff_RBP + -0x75) = uVar4;
                *(int32_t *)(unaff_RBP + -0x71) = uVar5;
                *(int32_t *)(unaff_RBP + -0x6d) = uVar6;
                lVar12 = (**(code **)(lVar12 + 0x128))
                                   (uVar20,unaff_RBP + -0x79,
                                    CONCAT71((int7)((ulonglong)puVar19 >> 8),1));
                *(longlong *)(unaff_RBP + -0x49) = lVar12;
                if (lVar12 == 0) {
                    // WARNING: Subroutine does not return
                  FUN_18076b390(unaff_RBP + -0x39,0x27,&UNK_180958180,
                                *(int32_t *)(unaff_RBP + -0x79),
                                *(int16_t *)(unaff_RBP + -0x75));
                }
                FUN_1808b06c0(lVar12 + 200,*(longlong *)(unaff_RBP + -0x51) + 0x38,puVar19[4],
                              puVar19[5],*(int8_t *)(puVar19 + 6));
                puVar19 = (int32_t *)(*(longlong *)(unaff_RBP + -0x59) + 0x1c);
              }
              FUN_180874670((ulonglong *)(lVar11 + 0x48),puVar3,puVar19);
              lVar11 = *(longlong *)(unaff_RBP + -0x41);
              uVar13 = (ulonglong)(iVar8 + 1);
            }
            uVar18 = *(uint *)(unaff_RBP + -0x61);
          }
          iVar8 = 0;
          if (((0x88 < uVar18) || (iVar9 = FUN_180868d80(FUN_180876eb0,lVar11), iVar9 == 0)) &&
             (uVar18 < 0x8d)) {
            for (; (-1 < iVar8 && (iVar8 < *(int *)(lVar11 + 0x1b8))); iVar8 = iVar8 + 1) {
              lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x1b0) + (longlong)iVar8 * 8);
              if (*(int *)(lVar12 + 0x68) != 0) {
                puVar1 = (uint *)(lVar12 + 0x34);
                *puVar1 = *puVar1 | 0x20;
              }
            }
          }
        }
      }
    }
  }
LAB_180879203:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x11) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180879270(longlong param_1,longlong *param_2)
void FUN_180879270(longlong param_1,longlong *param_2)

{
  int32_t *puVar1;
  longlong lVar2;
  int32_t *puVar3;
  int8_t auStack_d8 [32];
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  int8_t auStack_68 [40];
  ulonglong uStack_40;
  
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  puVar3 = *(int32_t **)(param_1 + 0xd8);
  while( true ) {
    puVar1 = *(int32_t **)(param_1 + 0xd8);
    if ((puVar3 < puVar1) || (puVar1 + (longlong)*(int *)(param_1 + 0xe0) * 5 <= puVar3))
    goto LAB_180879390;
    lVar2 = (**(code **)(*param_2 + 0x128))
                      (param_2,puVar3,CONCAT71((int7)((ulonglong)puVar1 >> 8),1));
    if (lVar2 == 0) {
      uStack_70 = (uint)*(byte *)((longlong)puVar3 + 0xf);
      uStack_78 = (uint)*(byte *)((longlong)puVar3 + 0xe);
      uStack_80 = (uint)*(byte *)((longlong)puVar3 + 0xd);
      uStack_88 = (uint)*(byte *)(puVar3 + 3);
      uStack_90 = (uint)*(byte *)((longlong)puVar3 + 0xb);
      uStack_98 = (uint)*(byte *)((longlong)puVar3 + 10);
      uStack_a0 = (uint)*(byte *)((longlong)puVar3 + 9);
      uStack_a8 = (uint)*(byte *)(puVar3 + 2);
      uStack_b0 = (uint)*(ushort *)((longlong)puVar3 + 6);
      uStack_b8 = (uint)*(ushort *)(puVar3 + 1);
                    // WARNING: Subroutine does not return
      FUN_18076b390(auStack_68,0x27,&UNK_180958180,*puVar3);
    }
    if (*(int *)(lVar2 + 0xb0) == -1) break;
    puVar3 = puVar3 + 5;
  }
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 1;
LAB_180879390:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_d8);
}



uint64_t FUN_1808793e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int32_t uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x98) + -1;
  uVar2 = *(int32_t *)(param_1 + 0x50);
  if (-1 < iVar4) {
    lVar3 = (longlong)iVar4 << 4;
    do {
      lVar1 = (**(code **)(*param_2 + 0x140))(param_2,*(longlong *)(param_1 + 0x90) + lVar3,1);
      if (lVar1 != 0) {
        if (*(short *)(lVar1 + 0xc) == 7) {
          *(int32_t *)(lVar1 + 0x44) = uVar2;
        }
        else {
          uVar2 = *(int32_t *)(lVar1 + 0x44);
        }
      }
      lVar3 = lVar3 + -0x10;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = *(int *)(param_1 + 0x88) + -1;
  if (-1 < iVar4) {
    lVar3 = (longlong)iVar4 << 4;
    do {
      lVar1 = (**(code **)(*param_2 + 0x140))(param_2,*(longlong *)(param_1 + 0x80) + lVar3,1);
      if (lVar1 != 0) {
        if (*(short *)(lVar1 + 0xc) == 7) {
          *(int32_t *)(lVar1 + 0x44) = uVar2;
        }
        else {
          uVar2 = *(int32_t *)(lVar1 + 0x44);
        }
      }
      lVar3 = lVar3 + -0x10;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return 0;
}



uint64_t FUN_1808794d0(uint64_t param_1)

{
  FUN_1808b0660(param_1,5);
  FUN_1808b0660(param_1,6);
  FUN_1808b0660(param_1,7);
  return 0;
}



uint64_t FUN_180879510(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  int iVar5;
  int8_t uStackX_8;
  
  uVar4 = *(ulonglong *)(param_1 + 0x58);
  do {
    if ((uVar4 < *(ulonglong *)(param_1 + 0x58)) ||
       ((longlong)*(int *)(param_1 + 0x60) * 0x10 + *(ulonglong *)(param_1 + 0x58) <= uVar4)) {
      return 0;
    }
    lVar2 = (**(code **)(*param_2 + 0x158))(param_2,uVar4,1,uVar4);
    if (lVar2 != 0) {
      iVar5 = 0;
      if (0 < *(int *)(lVar2 + 0x40)) {
        lVar1 = *(longlong *)(lVar2 + 0x38);
        do {
          if ((*(longlong *)(lVar1 + (longlong)iVar5 * 0x10) == *(longlong *)(param_1 + 0x10)) &&
             (*(longlong *)(lVar1 + 8 + (longlong)iVar5 * 0x10) == *(longlong *)(param_1 + 0x18)))
          goto LAB_1808795e2;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar2 + 0x40));
      }
      uVar3 = FUN_18086da90((longlong *)(lVar2 + 0x38),(longlong *)(param_1 + 0x10),uStackX_8);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (param_3 != 0) {
        uVar3 = FUN_1808c53d0(param_3,lVar2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_1808c52b0(param_3,lVar2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
    }
LAB_1808795e2:
    uVar4 = uVar4 + 0x10;
  } while( true );
}



uint64_t FUN_180879610(longlong *param_1,uint *param_2,int8_t *param_3)

{
  uint64_t *puVar1;
  int8_t uVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  longlong lVar7;
  
  uVar6 = FUN_180855ce0();
  if ((int)uVar6 == 0) {
    if ((int)param_1[1] == 0) {
      return 0x1c;
    }
    lVar10 = (longlong)
             (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) & (int)param_1[1] - 1U);
    piVar13 = (int *)(*param_1 + lVar10 * 4);
    iVar4 = *(int *)(*param_1 + lVar10 * 4);
    if (iVar4 != -1) {
      lVar10 = param_1[2];
      do {
        lVar7 = (longlong)iVar4;
        if ((*(longlong *)(lVar10 + lVar7 * 0x18) == *(longlong *)param_2) &&
           (*(longlong *)(lVar10 + 8 + lVar7 * 0x18) == *(longlong *)(param_2 + 2))) {
          *(int8_t *)(lVar10 + 0x14 + lVar7 * 0x18) = *param_3;
          return 0;
        }
        iVar4 = *(int *)(lVar10 + 0x10 + lVar7 * 0x18);
        piVar13 = (int *)(lVar10 + 0x10 + lVar7 * 0x18);
      } while (iVar4 != -1);
    }
    iVar4 = (int)param_1[4];
    lVar10 = (longlong)iVar4;
    if (iVar4 == -1) {
      iVar4 = (int)param_1[3];
      uVar11 = (int)*(uint *)((longlong)param_1 + 0x1c) >> 0x1f;
      uVar6 = *(uint64_t *)param_2;
      uVar3 = *(uint64_t *)(param_2 + 2);
      uVar2 = *param_3;
      iVar5 = (*(uint *)((longlong)param_1 + 0x1c) ^ uVar11) - uVar11;
      iVar9 = iVar4 + 1;
      if (iVar5 < iVar9) {
        iVar12 = (int)((float)iVar5 * 1.5);
        iVar5 = iVar9;
        if (iVar9 <= iVar12) {
          iVar5 = iVar12;
        }
        if (iVar5 < 2) {
          iVar12 = 2;
        }
        else if (iVar12 < iVar9) {
          iVar12 = iVar9;
        }
        uVar8 = FUN_1808595a0(param_1 + 2,iVar12);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
      }
      lVar7 = (longlong)(int)param_1[3];
      lVar10 = param_1[2];
      puVar1 = (uint64_t *)(lVar10 + lVar7 * 0x18);
      *puVar1 = uVar6;
      puVar1[1] = uVar3;
      *(int32_t *)(lVar10 + 0x10 + lVar7 * 0x18) = 0xffffffff;
      *(int8_t *)(lVar10 + 0x14 + lVar7 * 0x18) = uVar2;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      lVar7 = param_1[2];
      *(int32_t *)(param_1 + 4) = *(int32_t *)(lVar7 + 0x10 + lVar10 * 0x18);
      *(int32_t *)(lVar7 + 0x10 + lVar10 * 0x18) = 0xffffffff;
      uVar6 = *(uint64_t *)(param_2 + 2);
      puVar1 = (uint64_t *)(lVar7 + lVar10 * 0x18);
      *puVar1 = *(uint64_t *)param_2;
      puVar1[1] = uVar6;
      *(int8_t *)(lVar7 + 0x14 + lVar10 * 0x18) = *param_3;
    }
    *piVar13 = iVar4;
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    uVar6 = 0;
  }
  return uVar6;
}



uint64_t FUN_180879647(uint param_1)

{
  longlong *plVar1;
  int8_t uVar2;
  longlong lVar3;
  uint in_EAX;
  int iVar4;
  int iVar5;
  uint64_t uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *unaff_RBX;
  longlong lVar12;
  longlong *unaff_RSI;
  int *piVar13;
  int8_t *unaff_R15;
  longlong lVar6;
  
  piVar13 = (int *)(*unaff_RSI + (longlong)(int)(param_1 & in_EAX) * 4);
  iVar4 = *(int *)(*unaff_RSI + (longlong)(int)(param_1 & in_EAX) * 4);
  if (iVar4 != -1) {
    lVar12 = unaff_RSI[2];
    do {
      lVar6 = (longlong)iVar4;
      if ((*(longlong *)(lVar12 + lVar6 * 0x18) == *unaff_RBX) &&
         (*(longlong *)(lVar12 + 8 + lVar6 * 0x18) == unaff_RBX[1])) {
        *(int8_t *)(lVar12 + 0x14 + lVar6 * 0x18) = *unaff_R15;
        return 0;
      }
      iVar4 = *(int *)(lVar12 + 0x10 + lVar6 * 0x18);
      piVar13 = (int *)(lVar12 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != -1);
  }
  iVar4 = (int)unaff_RSI[4];
  lVar12 = (longlong)iVar4;
  if (iVar4 == -1) {
    iVar4 = (int)unaff_RSI[3];
    uVar10 = (int)*(uint *)((longlong)unaff_RSI + 0x1c) >> 0x1f;
    lVar12 = *unaff_RBX;
    lVar6 = unaff_RBX[1];
    uVar2 = *unaff_R15;
    iVar5 = (*(uint *)((longlong)unaff_RSI + 0x1c) ^ uVar10) - uVar10;
    iVar9 = iVar4 + 1;
    if (iVar5 < iVar9) {
      iVar11 = (int)((float)iVar5 * 1.5);
      iVar5 = iVar9;
      if (iVar9 <= iVar11) {
        iVar5 = iVar11;
      }
      if (iVar5 < 2) {
        iVar11 = 2;
      }
      else if (iVar11 < iVar9) {
        iVar11 = iVar9;
      }
      uVar7 = FUN_1808595a0(unaff_RSI + 2,iVar11);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
    lVar8 = (longlong)(int)unaff_RSI[3];
    lVar3 = unaff_RSI[2];
    plVar1 = (longlong *)(lVar3 + lVar8 * 0x18);
    *plVar1 = lVar12;
    plVar1[1] = lVar6;
    *(int32_t *)(lVar3 + 0x10 + lVar8 * 0x18) = 0xffffffff;
    *(int8_t *)(lVar3 + 0x14 + lVar8 * 0x18) = uVar2;
    *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + 1;
  }
  else {
    lVar6 = unaff_RSI[2];
    *(int32_t *)(unaff_RSI + 4) = *(int32_t *)(lVar6 + 0x10 + lVar12 * 0x18);
    *(int32_t *)(lVar6 + 0x10 + lVar12 * 0x18) = 0xffffffff;
    lVar3 = unaff_RBX[1];
    plVar1 = (longlong *)(lVar6 + lVar12 * 0x18);
    *plVar1 = *unaff_RBX;
    plVar1[1] = lVar3;
    *(int8_t *)(lVar6 + 0x14 + lVar12 * 0x18) = *unaff_R15;
  }
  *piVar13 = iVar4;
  *(int *)((longlong)unaff_RSI + 0x24) = *(int *)((longlong)unaff_RSI + 0x24) + 1;
  return 0;
}



uint64_t FUN_18087969a(void)

{
  uint64_t *puVar1;
  int8_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  uint64_t uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint64_t *unaff_RBX;
  int iVar11;
  longlong lVar12;
  longlong unaff_RSI;
  int *unaff_RDI;
  int8_t *unaff_R15;
  
  iVar11 = *(int *)(unaff_RSI + 0x20);
  lVar12 = (longlong)iVar11;
  if (iVar11 == -1) {
    iVar11 = *(int *)(unaff_RSI + 0x18);
    uVar9 = (int)*(uint *)(unaff_RSI + 0x1c) >> 0x1f;
    uVar3 = *unaff_RBX;
    uVar4 = unaff_RBX[1];
    uVar2 = *unaff_R15;
    iVar5 = (*(uint *)(unaff_RSI + 0x1c) ^ uVar9) - uVar9;
    iVar8 = iVar11 + 1;
    if (iVar5 < iVar8) {
      iVar10 = (int)((float)iVar5 * 1.5);
      iVar5 = iVar8;
      if (iVar8 <= iVar10) {
        iVar5 = iVar10;
      }
      if (iVar5 < 2) {
        iVar10 = 2;
      }
      else if (iVar10 < iVar8) {
        iVar10 = iVar8;
      }
      uVar6 = FUN_1808595a0(unaff_RSI + 0x10,iVar10);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    lVar7 = (longlong)*(int *)(unaff_RSI + 0x18);
    lVar12 = *(longlong *)(unaff_RSI + 0x10);
    puVar1 = (uint64_t *)(lVar12 + lVar7 * 0x18);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    *(int32_t *)(lVar12 + 0x10 + lVar7 * 0x18) = 0xffffffff;
    *(int8_t *)(lVar12 + 0x14 + lVar7 * 0x18) = uVar2;
    *(int *)(unaff_RSI + 0x18) = *(int *)(unaff_RSI + 0x18) + 1;
  }
  else {
    lVar7 = *(longlong *)(unaff_RSI + 0x10);
    *(int32_t *)(unaff_RSI + 0x20) = *(int32_t *)(lVar7 + 0x10 + lVar12 * 0x18);
    *(int32_t *)(lVar7 + 0x10 + lVar12 * 0x18) = 0xffffffff;
    uVar3 = unaff_RBX[1];
    puVar1 = (uint64_t *)(lVar7 + lVar12 * 0x18);
    *puVar1 = *unaff_RBX;
    puVar1[1] = uVar3;
    *(int8_t *)(lVar7 + 0x14 + lVar12 * 0x18) = *unaff_R15;
  }
  *unaff_RDI = iVar11;
  *(int *)(unaff_RSI + 0x24) = *(int *)(unaff_RSI + 0x24) + 1;
  return 0;
}



uint64_t FUN_1808796f6(longlong param_1,longlong param_2)

{
  int8_t *unaff_R15;
  
  *(int8_t *)(param_2 + 0x14 + param_1 * 8) = *unaff_R15;
  return 0;
}



uint64_t FUN_18087970e(int param_1,int param_2)

{
  int32_t *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong lVar4;
  int8_t unaff_BL;
  int32_t unaff_EBP;
  longlong unaff_RSI;
  int32_t *unaff_RDI;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  uVar3 = FUN_1808595a0(unaff_RSI + 0x10,param_2);
  if ((int)uVar3 == 0) {
    lVar4 = (longlong)*(int *)(unaff_RSI + 0x18);
    lVar2 = *(longlong *)(unaff_RSI + 0x10);
    puVar1 = (int32_t *)(lVar2 + lVar4 * 0x18);
    *puVar1 = unaff_XMM6_Da;
    puVar1[1] = unaff_XMM6_Db;
    puVar1[2] = unaff_XMM6_Dc;
    puVar1[3] = unaff_XMM6_Dd;
    *(int32_t *)(lVar2 + 0x10 + lVar4 * 0x18) = 0xffffffff;
    *(int8_t *)(lVar2 + 0x14 + lVar4 * 0x18) = unaff_BL;
    *(int *)(unaff_RSI + 0x18) = *(int *)(unaff_RSI + 0x18) + 1;
    *unaff_RDI = unaff_EBP;
    *(int *)(unaff_RSI + 0x24) = *(int *)(unaff_RSI + 0x24) + 1;
    uVar3 = 0;
  }
  return uVar3;
}






// 函数: void FUN_180879789(void)
void FUN_180879789(void)

{
  return;
}



int FUN_1808797a0(longlong param_1,longlong param_2,int param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *(int32_t *)(param_1 + 0x10);
  uStack_14 = *(int32_t *)(param_1 + 0x14);
  uStack_10 = *(int32_t *)(param_1 + 0x18);
  uStack_c = *(int32_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x24);
  uVar2 = *(int32_t *)(param_1 + 0x20);
  iVar3 = FUN_18074b650(param_2,param_3,&uStack_18);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180879880(longlong param_1,longlong param_2,int param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *(int32_t *)(param_1 + 0x10);
  uStack_14 = *(int32_t *)(param_1 + 0x14);
  uStack_10 = *(int32_t *)(param_1 + 0x18);
  uStack_c = *(int32_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x24);
  uVar2 = *(int32_t *)(param_1 + 0x20);
  iVar3 = FUN_18074b880(param_2,param_3,&UNK_180985ae8);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b650(iVar3 + param_2,param_3 - iVar3,&uStack_18);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



longlong FUN_180879970(longlong *param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = param_1[5];
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FUN_180768360(lVar1);
  }
  if (((*(int *)((longlong)param_1 + 0x24) != 0) && ((int)param_1[1] != 0)) &&
     (iVar4 = *(int *)(*param_1 +
                      (longlong)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) & (int)param_1[1] - 1U
                           ) * 4), iVar4 != -1)) {
    do {
      plVar3 = (longlong *)((longlong)iVar4 * 0x20 + param_1[2]);
      if ((*plVar3 == *(longlong *)param_2) && (plVar3[1] == *(longlong *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_180879a06;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_180879a06:
  if (bVar2) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar1);
  }
  return lVar5;
}



uint64_t FUN_180879a60(longlong param_1,longlong param_2,uint64_t param_3)

{
  uint64_t uVar1;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  uVar1 = func_0x00018088e470(*(uint64_t *)(param_1 + 0x98));
  if ((int)uVar1 == 0) {
    uVar1 = FUN_180739890(*(uint64_t *)(param_1 + 0x78),param_3);
  }
  return uVar1;
}






// 函数: void FUN_180879ad0(longlong *param_1)
void FUN_180879ad0(longlong *param_1)

{
  uint64_t uVar1;
  
  uVar1 = FUN_180847820();
                    // WARNING: Could not recover jumptable at 0x000180879aef. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1b8))(param_1,uVar1,1);
  return;
}






// 函数: void FUN_180879b00(longlong *param_1)
void FUN_180879b00(longlong *param_1)

{
  uint64_t uVar1;
  
  uVar1 = FUN_180847820();
                    // WARNING: Could not recover jumptable at 0x000180879b1f. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x228))(param_1,uVar1,1);
  return;
}






// 函数: void FUN_180879b30(longlong *param_1)
void FUN_180879b30(longlong *param_1)

{
  uint64_t uVar1;
  
  uVar1 = FUN_180847820();
                    // WARNING: Could not recover jumptable at 0x000180879b4f. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1d8))(param_1,uVar1,1);
  return;
}






// 函数: void FUN_180879b60(longlong *param_1)
void FUN_180879b60(longlong *param_1)

{
  uint64_t uVar1;
  
  uVar1 = FUN_180847820();
                    // WARNING: Could not recover jumptable at 0x000180879b7f. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1b0))(param_1,uVar1,1);
  return;
}






// 函数: void FUN_180879b90(longlong *param_1)
void FUN_180879b90(longlong *param_1)

{
  uint64_t uVar1;
  
  uVar1 = FUN_180847820();
                    // WARNING: Could not recover jumptable at 0x000180879baf. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x180))(param_1,uVar1,1);
  return;
}






// 函数: void FUN_180879bc0(longlong *param_1)
void FUN_180879bc0(longlong *param_1)

{
  uint64_t uVar1;
  
  uVar1 = FUN_180847820();
                    // WARNING: Could not recover jumptable at 0x000180879bdf. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1e8))(param_1,uVar1,1);
  return;
}






// 函数: void FUN_180879bf0(longlong *param_1)
void FUN_180879bf0(longlong *param_1)

{
  uint64_t uVar1;
  
  uVar1 = FUN_180847820();
                    // WARNING: Could not recover jumptable at 0x000180879c0f. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1a8))(param_1,uVar1,1);
  return;
}






// 函数: void FUN_180879c20(longlong *param_1)
void FUN_180879c20(longlong *param_1)

{
  uint64_t uVar1;
  
  uVar1 = FUN_180847820();
                    // WARNING: Could not recover jumptable at 0x000180879c3f. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1e0))(param_1,uVar1,1);
  return;
}






// 函数: void FUN_180879c50(longlong *param_1)
void FUN_180879c50(longlong *param_1)

{
  uint64_t uVar1;
  
  uVar1 = FUN_180847820();
                    // WARNING: Could not recover jumptable at 0x000180879c6f. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,1);
  return;
}






