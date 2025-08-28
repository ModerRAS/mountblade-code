#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part060.c - 7 个函数

// 函数: void FUN_1804d3dc4(void)
void FUN_1804d3dc4(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_R14;
  longlong *in_stack_00000028;
  
  if (*unaff_RBX != -1) {
    FUN_1800571e0(unaff_R14 + 0x2c48,&stack0x00000050);
    FUN_1804a7c60(unaff_RBX + 2);
    *unaff_RBX = -1;
  }
  lVar3 = *(longlong *)(unaff_RBP + 0x18);
  plVar2 = in_stack_00000028;
  while (lVar3 == 0) {
    plVar1 = plVar2 + 1;
    plVar2 = plVar2 + 1;
    lVar3 = *plVar1;
  }
  lVar3 = *in_stack_00000028;
  lVar4 = *(longlong *)(lVar3 + 0x18);
  if (lVar3 == unaff_RBP) {
    *in_stack_00000028 = lVar4;
  }
  else {
    for (; lVar4 != unaff_RBP; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      lVar3 = lVar4;
    }
    *(uint64_t *)(lVar3 + 0x18) = *(uint64_t *)(lVar4 + 0x18);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804d3e61(void)
void FUN_1804d3e61(void)

{
  uint64_t *in_RAX;
  uint64_t *unaff_RBX;
  uint64_t *unaff_RDI;
  longlong unaff_R15;
  
  do {
    if (*(int *)(in_RAX + 5) < *(int *)(unaff_R15 + 8)) {
      in_RAX = (uint64_t *)*in_RAX;
    }
    else {
      unaff_RBX = in_RAX;
      in_RAX = (uint64_t *)in_RAX[1];
    }
  } while (in_RAX != (uint64_t *)0x0);
  if ((unaff_RBX == unaff_RDI) || (*(int *)(unaff_R15 + 8) < *(int *)(unaff_RBX + 5))) {
    unaff_RBX = unaff_RDI;
  }
  if (unaff_RBX != unaff_RDI) {
    unaff_RDI[4] = unaff_RDI[4] + -1;
    func_0x00018066bd70(unaff_RBX);
    FUN_18066ba00(unaff_RBX);
    if (unaff_RBX != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(unaff_RBX);
    }
  }
  return;
}






// 函数: void FUN_1804d3e9b(void)
void FUN_1804d3e9b(void)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  *(longlong *)(unaff_RDI + 0x20) = *(longlong *)(unaff_RDI + 0x20) + -1;
  func_0x00018066bd70();
  FUN_18066ba00();
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804d3ed0(longlong *param_1,longlong *param_2)
void FUN_1804d3ed0(longlong *param_1,longlong *param_2)

{
  int8_t *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  uint64_t *puVar8;
  longlong lVar9;
  longlong lVar10;
  int32_t *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStackX_18;
  longlong *plStackX_20;
  uint in_stack_ffffffffffffff28;
  uint uVar22;
  int32_t uVar23;
  uint uVar24;
  uint uVar25;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  uint64_t uStack_98;
  int32_t uStack_90;
  longlong *plStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  uint64_t uStack_68;
  
  uStack_68 = 0xfffffffffffffffe;
  uVar15 = 0;
  uVar23 = 0;
  lVar2 = *param_2;
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  FUN_1804dd5d0(param_1 + 0x592,&plStack_78,param_2);
  if (plStack_78 != *(longlong **)(param_1[0x593] + param_1[0x594] * 8)) {
    uVar15 = *(uint *)(plStack_78 + 2);
    FUN_1804e06d0((longlong)(int)(*(uint *)(param_1 + 0x591) & uVar15) * 0x68 + 8 +
                  *(longlong *)(param_1[0x58d] + (longlong)((int)uVar15 >> 10) * 8),param_1);
    uStackX_18 = CONCAT44(uStackX_18._4_4_,uVar15);
    lVar2 = *(longlong *)(param_1[0x58d] + (longlong)((int)uVar15 >> 10) * 8);
    lVar12 = (longlong)(int)(*(uint *)(param_1 + 0x591) & uVar15) * 0x68;
    if ((uVar15 != 0xffffffff) && (*(int *)(lVar2 + lVar12) != -1)) {
      FUN_1800571e0(param_1 + 0x589,&uStackX_18);
      FUN_1804a7c60(lVar12 + 8 + lVar2);
      *(int32_t *)(lVar2 + lVar12) = 0xffffffff;
    }
    lVar2 = plStack_78[3];
    plVar18 = plStack_70;
    while (lVar2 == 0) {
      plVar18 = plVar18 + 1;
      lVar2 = *plVar18;
    }
    plVar18 = (longlong *)*plStack_70;
    plVar3 = (longlong *)plVar18[3];
    if (plVar18 == plStack_78) {
      *plStack_70 = (longlong)plVar3;
    }
    else {
      for (; plVar3 != plStack_78; plVar3 = (longlong *)plVar3[3]) {
        plVar18 = plVar3;
      }
      plVar18[3] = plVar3[3];
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(plStack_78);
  }
  plVar18 = param_1 + 0x587;
  if ((param_1[0x58a] - param_1[0x589] & 0xfffffffffffffffcU) == 0) {
    FUN_1804dc0f0(plVar18);
  }
  uVar25 = *(uint *)(param_1[0x58a] + -4);
  plStackX_10 = (longlong *)CONCAT44(plStackX_10._4_4_,uVar25);
  param_1[0x58a] = param_1[0x58a] + -4;
  iVar16 = *(int *)((longlong)param_1 + 0x2c3c);
  if (*(int *)((longlong)param_1 + 0x2c3c) <= (int)uVar25) {
    iVar16 = uVar25 + 1;
  }
  *(int *)((longlong)param_1 + 0x2c3c) = iVar16;
  plStackX_20 = (longlong *)(longlong)((int)uVar25 >> 10);
  lVar12 = *(longlong *)(param_1[0x58d] + (longlong)plStackX_20 * 8);
  lVar10 = (longlong)(int)(*(uint *)(param_1 + 0x591) & uVar25) * 0x68;
  lVar14 = *plVar18;
  *(int *)plVar18 = (int)lVar14 + 1;
  *(int *)(lVar12 + lVar10) = (int)lVar14;
  *(uint *)(lVar12 + 4 + lVar10) = uVar25;
  uStackX_18 = lVar10 + 8 + lVar12;
  *(uint64_t *)(uStackX_18 + 0x18) = 0;
  *(uint64_t *)(uStackX_18 + 0x20) = 0;
  *(uint64_t *)(uStackX_18 + 0x28) = 0;
  *(int32_t *)(uStackX_18 + 0x30) = 3;
  *(uint64_t *)(uStackX_18 + 0x40) = 0;
  *(uint64_t *)(uStackX_18 + 0x48) = 0;
  *(uint64_t *)(uStackX_18 + 0x50) = 0;
  *(int32_t *)(uStackX_18 + 0x58) = 0xc;
  *(uint64_t *)(uStackX_18 + 8) = 0xffffffffffffffff;
  *(int32_t *)(uStackX_18 + 0x10) = 0xffffffff;
  *(uint64_t *)(uStackX_18 + 0x20) = *(uint64_t *)(uStackX_18 + 0x18);
  *(uint64_t *)(uStackX_18 + 0x48) = *(uint64_t *)(uStackX_18 + 0x40);
  uVar17 = (((((ulonglong)*(byte *)(param_2 + 1) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 9)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 10)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0xb)) * 0x100000001b3;
  uVar13 = uVar17 % (ulonglong)*(uint *)(param_1 + 0x594);
  puVar6 = *(int32_t **)(param_1[0x593] + uVar13 * 8);
  if (puVar6 != (int32_t *)0x0) {
    do {
      if ((int)param_2[1] == puVar6[2]) {
        if (puVar6 != (int32_t *)0x0) goto LAB_1804d41e2;
        break;
      }
      puVar6 = *(int32_t **)(puVar6 + 6);
    } while (puVar6 != (int32_t *)0x0);
  }
  in_stack_ffffffffffffff28 = 0;
  FUN_18066c220(param_1 + 0x596,&uStackX_18,(ulonglong)*(uint *)(param_1 + 0x594),
                (int)param_1[0x595],1);
  puVar6 = (int32_t *)
           FUN_18062b420(system_memory_pool_ptr,0x20,*(int8_t *)((longlong)param_1 + 0x2cbc));
  uVar4 = *(int32_t *)((longlong)param_2 + 4);
  lVar12 = param_2[1];
  uVar5 = *(int32_t *)((longlong)param_2 + 0xc);
  *puVar6 = (int)*param_2;
  puVar6[1] = uVar4;
  puVar6[2] = (int)lVar12;
  puVar6[3] = uVar5;
  puVar6[4] = 0;
  *(uint64_t *)(puVar6 + 6) = 0;
  if ((char)uStackX_18 != '\0') {
    uVar13 = uVar17 % (ulonglong)uStackX_18._4_4_;
    FUN_1804ddf60(param_1 + 0x592,uStackX_18._4_4_);
  }
  *(uint64_t *)(puVar6 + 6) = *(uint64_t *)(param_1[0x593] + uVar13 * 8);
  *(int32_t **)(param_1[0x593] + uVar13 * 8) = puVar6;
  param_1[0x595] = param_1[0x595] + 1;
LAB_1804d41e2:
  plVar18 = plStackX_10;
  uVar25 = (uint)plStackX_10;
  puVar6[4] = (uint)plStackX_10;
  lVar12 = *(longlong *)(param_1[0x58d] + (longlong)plStackX_20 * 8);
  lVar14 = (longlong)(int)(*(uint *)(param_1 + 0x591) & (uint)plStackX_10) * 0x68;
  *(int32_t *)(lVar12 + 0x10 + lVar14) = 0xffffffff;
  if (system_system_memory != 0) {
    lVar10 = *(longlong *)(lVar2 + 0x8a8);
    if (*(longlong *)(lVar10 + 0x168) != 0) {
      in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffff00;
      FUN_1802eb9a0(*(longlong *)(lVar10 + 0x168),lVar10,0,1,in_stack_ffffffffffffff28,0x27,uVar23);
      lVar10 = *(longlong *)(lVar2 + 0x8a8);
    }
    func_0x0001804ceed0(lVar10);
  }
  uVar22 = CONCAT31((int3)(in_stack_ffffffffffffff28 >> 8),1);
  uVar23 = FUN_1804d4b50(param_1,(ulonglong)plVar18 & 0xffffffff,*(uint64_t *)(lVar2 + 0x8a8),8,
                         uVar22);
  *(int32_t *)(lVar12 + 0x14 + lVar14) = uVar23;
  plVar18 = (longlong *)(lVar2 + 0x90);
  lStack_b0 = 5;
  plStack_80 = (longlong *)0x5;
  plStack_88 = plVar18;
  do {
    plVar3 = (longlong *)*plVar18;
    plStack_78 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    uVar15 = uVar15 & 0xfffffffd;
    if ((plVar3 != (longlong *)0x0) &&
       (uVar24 = uVar15, (**(code **)(*plVar3 + 0x38))(plVar3), plVar3 != (longlong *)0x0)) {
      uVar22 = uVar22 & 0xffffff00;
      uVar23 = FUN_1804d4b50(param_1,uVar25,plVar3,8,uVar22);
      puVar6 = *(int32_t **)(lVar12 + 0x28 + lVar14);
      uStackX_18._0_4_ = uVar23;
      if (puVar6 < *(int32_t **)(lVar12 + 0x30 + lVar14)) {
        *(int32_t **)(lVar12 + 0x28 + lVar14) = puVar6 + 1;
        *puVar6 = uVar23;
      }
      else {
        puVar11 = *(int32_t **)(lVar12 + 0x20 + lVar14);
        lVar10 = (longlong)puVar6 - (longlong)puVar11 >> 2;
        if (lVar10 == 0) {
          lVar10 = 1;
LAB_1804d4341:
          puVar7 = (int32_t *)
                   FUN_18062b420(system_memory_pool_ptr,lVar10 * 4,*(int8_t *)(lVar12 + 0x38 + lVar14));
          puVar6 = *(int32_t **)(lVar12 + 0x28 + lVar14);
          puVar11 = *(int32_t **)(lVar12 + 0x20 + lVar14);
        }
        else {
          lVar10 = lVar10 * 2;
          if (lVar10 != 0) goto LAB_1804d4341;
          puVar7 = (int32_t *)0x0;
        }
        if (puVar11 != puVar6) {
                    // WARNING: Subroutine does not return
          memmove(puVar7,puVar11,(longlong)puVar6 - (longlong)puVar11);
        }
        *puVar7 = (int)uStackX_18;
        if (*(longlong *)(lVar12 + 0x20 + lVar14) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(int32_t **)(lVar12 + 0x20 + lVar14) = puVar7;
        *(int32_t **)(lVar12 + 0x28 + lVar14) = puVar7 + 1;
        *(int32_t **)(lVar12 + 0x30 + lVar14) = puVar7 + lVar10;
        param_1 = plStackX_8;
      }
      lStack_a8 = 0;
      lStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 3;
      FUN_1802e8c60(plVar3,&lStack_a8);
      plVar3 = plStackX_10;
      iVar16 = 0;
      uStackX_18 = (ulonglong)uStackX_18._4_4_ << 0x20;
      if (lStack_a0 - lStack_a8 >> 3 != 0) {
        lVar10 = 0;
        uVar15 = uVar24;
        do {
          uVar22 = uVar22 & 0xffffff00;
          uVar23 = FUN_1804d4b50(param_1,(ulonglong)plVar3 & 0xffffffff,
                                 *(uint64_t *)(lStack_a8 + lVar10),8,uVar22);
          plStackX_20 = (longlong *)CONCAT44(plStackX_20._4_4_,uVar23);
          puVar6 = *(int32_t **)(lVar12 + 0x28 + lVar14);
          if (puVar6 < *(int32_t **)(lVar12 + 0x30 + lVar14)) {
            *(int32_t **)(lVar12 + 0x28 + lVar14) = puVar6 + 1;
            *puVar6 = uVar23;
          }
          else {
            puVar11 = *(int32_t **)(lVar12 + 0x20 + lVar14);
            lVar9 = (longlong)puVar6 - (longlong)puVar11 >> 2;
            if (lVar9 == 0) {
              lVar9 = 1;
LAB_1804d4461:
              puVar7 = (int32_t *)
                       FUN_18062b420(system_memory_pool_ptr,lVar9 * 4,
                                     *(int8_t *)(lVar12 + 0x38 + lVar14));
              puVar6 = *(int32_t **)(lVar12 + 0x28 + lVar14);
              puVar11 = *(int32_t **)(lVar12 + 0x20 + lVar14);
            }
            else {
              lVar9 = lVar9 * 2;
              if (lVar9 != 0) goto LAB_1804d4461;
              puVar7 = (int32_t *)0x0;
            }
            if (puVar11 != puVar6) {
                    // WARNING: Subroutine does not return
              memmove(puVar7,puVar11,(longlong)puVar6 - (longlong)puVar11);
            }
            *puVar7 = plStackX_20._0_4_;
            if (*(longlong *)(lVar12 + 0x20 + lVar14) != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *(int32_t **)(lVar12 + 0x20 + lVar14) = puVar7;
            *(int32_t **)(lVar12 + 0x28 + lVar14) = puVar7 + 1;
            *(int32_t **)(lVar12 + 0x30 + lVar14) = puVar7 + lVar9;
            param_1 = plStackX_8;
            iVar16 = (int)uStackX_18;
          }
          iVar16 = iVar16 + 1;
          uStackX_18 = CONCAT44(uStackX_18._4_4_,iVar16);
          lVar10 = lVar10 + 8;
        } while ((ulonglong)(longlong)iVar16 < (ulonglong)(lStack_a0 - lStack_a8 >> 3));
      }
      if (lStack_a8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uVar25 = (uint)plStackX_10;
    }
    plVar18 = plVar18 + 0x30;
    plStack_80 = (longlong *)((longlong)plStack_80 + -1);
  } while (plStack_80 != (longlong *)0x0);
  uStackX_18 = uStackX_18 & 0xffffffff00000000;
  lVar10 = *(longlong *)(lVar2 + 0x810);
  if (*(longlong *)(lVar2 + 0x818) - lVar10 >> 3 == 0) {
    plStack_80 = (longlong *)0x0;
LAB_1804d485d:
    uVar25 = *(uint *)(lVar12 + 0x14 + lVar14);
    lVar10 = *(longlong *)(param_1[0x55f] + (longlong)((int)uVar25 >> 10) * 8);
    uStackX_18 = (longlong)(int)(*(uint *)(param_1 + 0x563) & uVar25) * 0xd8;
    *(int32_t *)(lVar12 + 0x40 + lVar14) = 0;
    plVar18 = (longlong *)(lVar2 + 0xe8);
    fVar21 = 0.0;
    do {
      plVar3 = (longlong *)*plVar18;
      plStackX_20 = plVar3;
      if (plVar3 == (longlong *)0x0) {
        fVar20 = 0.0;
      }
      else {
        (**(code **)(*plVar3 + 0x28))(plVar3);
        puVar8 = (uint64_t *)FUN_1804dfe80(plStack_88,&plStackX_8);
        uVar15 = uVar15 | 0x11;
        lVar9 = (**(code **)(*(longlong *)*puVar8 + 0x198))();
        fVar20 = *(float *)(lVar9 + 0x30);
      }
      fVar19 = *(float *)(lVar12 + 0x40 + lVar14);
      if (fVar19 <= fVar20) {
        fVar19 = fVar20;
      }
      *(float *)(lVar12 + 0x40 + lVar14) = fVar19;
      if (((uVar15 & 1) != 0) && (uVar15 = 0, plStackX_8 != (longlong *)0x0)) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      uVar15 = uVar15 & 0xffffffef;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3);
      }
      plStack_88 = plStack_88 + 0x30;
      plVar18 = plVar18 + 0x30;
      lStack_b0 = lStack_b0 + -1;
    } while (lStack_b0 != 0);
    if (*(longlong *)(lVar2 + 0x8a8) != 0) {
      fVar21 = *(float *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x8a8) + 0x260) + 0x208)
                         + 0x1ac);
    }
    *(float *)(uStackX_18 + 0x94 + lVar10) = fVar21;
    fVar20 = *(float *)(lVar12 + 0x40 + lVar14) * 0.5;
    if (fVar21 <= fVar20) {
      fVar21 = fVar20;
    }
    *(float *)(uStackX_18 + 0x94 + lVar10) = fVar21;
    if (*(longlong *)(lVar2 + 0x10) != 0) {
      uVar23 = FUN_1804d4b50(param_1,(ulonglong)plStackX_10 & 0xffffffff,*(longlong *)(lVar2 + 0x10)
                             ,8,uVar22 & 0xffffff00);
      plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,uVar23);
      FUN_1800571e0(lVar12 + 0x20 + lVar14,&plStackX_8);
    }
    *(int32_t *)(lVar12 + 0x18 + lVar14) = *(int32_t *)(lVar2 + 0x91c);
    uVar23 = FUN_1804dbeb0(param_1 + 0x598);
    *(int32_t *)(lVar12 + 8 + lVar14) = uVar23;
    plVar18 = param_1 + 0x79;
    if ((param_1[0x7c] - param_1[0x7b] & 0xfffffffffffffffcU) == 0) {
      FUN_1804dc7a0(plVar18);
    }
    uVar15 = *(uint *)(param_1[0x7c] + -4);
    param_1[0x7c] = param_1[0x7c] + -4;
    iVar16 = *(int *)((longlong)param_1 + 0x3cc);
    if (*(int *)((longlong)param_1 + 0x3cc) <= (int)uVar15) {
      iVar16 = uVar15 + 1;
    }
    *(int *)((longlong)param_1 + 0x3cc) = iVar16;
    lVar9 = (longlong)(int)(*(uint *)(param_1 + 0x83) & uVar15);
    lVar2 = *(longlong *)(param_1[0x7f] + (longlong)((int)uVar15 >> 10) * 8);
    lVar10 = *plVar18;
    *(int *)plVar18 = (int)lVar10 + 1;
    *(int *)(lVar2 + lVar9 * 0xc) = (int)lVar10;
    *(uint *)(lVar2 + 4 + lVar9 * 0xc) = uVar15;
    puVar1 = (int8_t *)(lVar2 + (lVar9 * 3 + 2) * 4);
    if (puVar1 != (int8_t *)0x0) {
      *puVar1 = 0;
    }
    *(uint *)(lVar12 + 0xc + lVar14) = uVar15;
    return;
  }
  lStack_b8 = 0;
  plStack_80 = (longlong *)0x0;
  do {
    plVar18 = (longlong *)**(uint64_t **)(lVar10 + lStack_b8);
    plStack_78 = plVar18;
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0x28))(plVar18);
    }
    uVar22 = uVar22 & 0xffffff00;
    uVar23 = FUN_1804d4b50(param_1,uVar25,plVar18,8,uVar22);
    plStackX_20 = (longlong *)CONCAT44(plStackX_20._4_4_,uVar23);
    puVar6 = *(int32_t **)(lVar12 + 0x28 + lVar14);
    if (puVar6 < *(int32_t **)(lVar12 + 0x30 + lVar14)) {
      *(int32_t **)(lVar12 + 0x28 + lVar14) = puVar6 + 1;
      *puVar6 = uVar23;
    }
    else {
      puVar11 = *(int32_t **)(lVar12 + 0x20 + lVar14);
      lVar10 = (longlong)puVar6 - (longlong)puVar11 >> 2;
      if (lVar10 == 0) {
        lVar10 = 1;
LAB_1804d45f6:
        puVar7 = (int32_t *)
                 FUN_18062b420(system_memory_pool_ptr,lVar10 * 4,*(int8_t *)(lVar12 + 0x38 + lVar14));
        puVar6 = *(int32_t **)(lVar12 + 0x28 + lVar14);
        puVar11 = *(int32_t **)(lVar12 + 0x20 + lVar14);
      }
      else {
        lVar10 = lVar10 * 2;
        if (lVar10 != 0) goto LAB_1804d45f6;
        puVar7 = (int32_t *)0x0;
      }
      if (puVar11 != puVar6) {
                    // WARNING: Subroutine does not return
        memmove(puVar7,puVar11,(longlong)puVar6 - (longlong)puVar11);
      }
      *puVar7 = plStackX_20._0_4_;
      if (*(longlong *)(lVar12 + 0x20 + lVar14) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(int32_t **)(lVar12 + 0x20 + lVar14) = puVar7;
      *(int32_t **)(lVar12 + 0x28 + lVar14) = puVar7 + 1;
      *(int32_t **)(lVar12 + 0x30 + lVar14) = puVar7 + lVar10;
      param_1 = plStackX_8;
    }
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0x38))(plVar18);
    }
    lStack_a8 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 3;
    plVar18 = (longlong *)**(longlong **)(*(longlong *)(lVar2 + 0x810) + lStack_b8);
    plStack_80 = plVar18;
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0x28))(plVar18);
    }
    FUN_1802e8c60(plVar18,&lStack_a8);
    uVar15 = uVar15 & 0xfffffff3;
    uVar25 = uVar15;
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0x38))(plVar18);
    }
    iVar16 = 0;
    if (lStack_a0 - lStack_a8 >> 3 != 0) {
      lVar10 = 0;
      uVar15 = uVar25;
      do {
        uVar22 = uVar22 & 0xffffff00;
        uVar23 = FUN_1804d4b50(param_1,(ulonglong)plStackX_10 & 0xffffffff,
                               *(uint64_t *)(lVar10 + lStack_a8),8,uVar22);
        plStackX_20 = (longlong *)CONCAT44(plStackX_20._4_4_,uVar23);
        puVar6 = *(int32_t **)(lVar12 + 0x28 + lVar14);
        if (puVar6 < *(int32_t **)(lVar12 + 0x30 + lVar14)) {
          *(int32_t **)(lVar12 + 0x28 + lVar14) = puVar6 + 1;
          *puVar6 = uVar23;
        }
        else {
          puVar11 = *(int32_t **)(lVar12 + 0x20 + lVar14);
          lVar9 = (longlong)puVar6 - (longlong)puVar11 >> 2;
          if (lVar9 == 0) {
            lVar9 = 1;
LAB_1804d4771:
            puVar7 = (int32_t *)
                     FUN_18062b420(system_memory_pool_ptr,lVar9 * 4,*(int8_t *)(lVar12 + 0x38 + lVar14))
            ;
            puVar6 = *(int32_t **)(lVar12 + 0x28 + lVar14);
            puVar11 = *(int32_t **)(lVar12 + 0x20 + lVar14);
          }
          else {
            lVar9 = lVar9 * 2;
            if (lVar9 != 0) goto LAB_1804d4771;
            puVar7 = (int32_t *)0x0;
          }
          if (puVar11 != puVar6) {
                    // WARNING: Subroutine does not return
            memmove(puVar7,puVar11,(longlong)puVar6 - (longlong)puVar11);
          }
          *puVar7 = plStackX_20._0_4_;
          if (*(longlong *)(lVar12 + 0x20 + lVar14) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(int32_t **)(lVar12 + 0x20 + lVar14) = puVar7;
          *(int32_t **)(lVar12 + 0x28 + lVar14) = puVar7 + 1;
          *(int32_t **)(lVar12 + 0x30 + lVar14) = puVar7 + lVar9;
          param_1 = plStackX_8;
        }
        iVar16 = iVar16 + 1;
        lVar10 = lVar10 + 8;
      } while ((ulonglong)(longlong)iVar16 < (ulonglong)(lStack_a0 - lStack_a8 >> 3));
    }
    if (lStack_a8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    iVar16 = (int)uStackX_18 + 1;
    uStackX_18 = CONCAT44(uStackX_18._4_4_,iVar16);
    lStack_b8 = lStack_b8 + 8;
    lVar10 = *(longlong *)(lVar2 + 0x810);
    if ((ulonglong)(*(longlong *)(lVar2 + 0x818) - lVar10 >> 3) <= (ulonglong)(longlong)iVar16)
    goto LAB_1804d485d;
    uVar25 = (uint)plStackX_10;
  } while( true );
}






// 函数: void FUN_1804d4aa0(longlong param_1)
void FUN_1804d4aa0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x2b28);
  plVar4 = (longlong *)*plVar1;
  plVar3 = plVar1;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)plVar1[1];
    plVar2 = plVar1;
    while (plVar3 = plVar2 + 1, plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)plVar2[2];
      plVar2 = plVar3;
    }
  }
  if (plVar4 != (longlong *)plVar1[*(longlong *)(param_1 + 0x2b30)]) {
    do {
      if (*(longlong *)(*plVar4 + 0x20) != 0) {
        FUN_180198980();
      }
      for (plVar4 = (longlong *)plVar4[2]; plVar4 == (longlong *)0x0; plVar4 = (longlong *)*plVar4)
      {
        plVar4 = plVar3 + 1;
        plVar3 = plVar3 + 1;
      }
    } while (plVar4 != *(longlong **)
                        (*(longlong *)(param_1 + 0x2b28) + *(longlong *)(param_1 + 0x2b30) * 8));
  }
  return;
}






// 函数: void FUN_1804d4aeb(void)
void FUN_1804d4aeb(void)

{
  uint64_t *puVar1;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  do {
    if (*(longlong *)(*unaff_RDI + 0x20) != 0) {
      FUN_180198980();
    }
    unaff_RDI = (longlong *)unaff_RDI[2];
    while (unaff_RDI == (longlong *)0x0) {
      puVar1 = (uint64_t *)(unaff_RBX + 8);
      unaff_RBX = unaff_RBX + 8;
      unaff_RDI = (longlong *)*puVar1;
    }
  } while (unaff_RDI !=
           *(longlong **)(*(longlong *)(unaff_RSI + 0x2b28) + *(longlong *)(unaff_RSI + 0x2b30) * 8)
          );
  return;
}






// 函数: void FUN_1804d4b39(void)
void FUN_1804d4b39(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




