n//  的语义化别名
#define SystemCore_MemoryAllocator 


// $fun 的语义化别名
#define $alias_name $fun

/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0


// 99_part_09_part048.c - 11 个函数

// 函数: void FUN_1805d2cb9(int64_t param_1)
void FUN_1805d2cb9(int64_t param_1)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint *puVar4;
  int64_t *unaff_RBX;
  uint64_t unaff_RDI;
  int64_t lVar5;
  int iVar6;
  int64_t in_R11;
  bool in_ZF;
  float fVar7;
  float fVar8;
  int8_t auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint64_t in_stack_00000070;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RDI;
  if (in_ZF) {
    func_0x0001805d4cd0(param_1 + 8);
  }
  iVar6 = (int)unaff_RBX[0x405];
  lVar5 = unaff_RBX[0x1d];
  if (iVar6 == 1) {
    lVar3 = *(int64_t *)(lVar5 + 0x6d8);
    lVar2 = *(int64_t *)(lVar3 + 0x8a8);
    puVar4 = (uint *)((int64_t)
                      *(char *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x260) + 0x210) + 0xe3) * 0x100
                     + *(int64_t *)(*(int64_t *)(lVar5 + 0x658) + 0x18));
    do {
      LOCK();
      uVar1 = *puVar4;
      *puVar4 = *puVar4 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    *puVar4 = 0;
    fVar13 = *(float *)((int64_t)unaff_RBX + 0x202c);
    fVar11 = (float)puVar4[7] * *(float *)(lVar2 + 0x98) + *(float *)(lVar2 + 0xa8);
    fVar8 = (float)puVar4[6] * *(float *)(lVar2 + 0x80) +
            (float)puVar4[5] * *(float *)(lVar2 + 0x70) + *(float *)(lVar2 + 0xa0);
    fVar10 = (float)puVar4[5] * *(float *)(lVar2 + 0x74) +
             (float)puVar4[6] * *(float *)(lVar2 + 0x84) + *(float *)(lVar2 + 0xa4);
    fVar11 = (*(float *)(lVar3 + 0x8dc) - fVar11) * fVar13 + fVar11;
    fVar8 = (*(float *)(lVar3 + 0x8d4) - fVar8) * fVar13 + fVar8;
    fVar10 = (*(float *)(lVar3 + 0x8d8) - fVar10) * fVar13 + fVar10;
    fVar13 = 3.4028235e+38;
  }
  else if (iVar6 == 2) {
    lVar5 = *(int64_t *)(lVar5 + 0x6d8);
    fVar8 = *(float *)(lVar5 + 0x8c4);
    fVar10 = *(float *)(lVar5 + 0x8c8);
    fVar11 = *(float *)(lVar5 + 0x8cc);
    fVar13 = *(float *)(lVar5 + 0x8d0);
  }
  else if (iVar6 == 3) {
    lVar5 = *(int64_t *)(lVar5 + 0x6d8);
    fVar13 = *(float *)((int64_t)unaff_RBX + 0x202c);
    fVar8 = (*(float *)(lVar5 + 0x8d4) - *(float *)(lVar5 + 0x8c4)) * fVar13 +
            *(float *)(lVar5 + 0x8c4);
    fVar10 = (*(float *)(lVar5 + 0x8d8) - *(float *)(lVar5 + 0x8c8)) * fVar13 +
             *(float *)(lVar5 + 0x8c8);
    fVar11 = (*(float *)(lVar5 + 0x8dc) - *(float *)(lVar5 + 0x8cc)) * fVar13 +
             *(float *)(lVar5 + 0x8cc);
    fVar13 = 3.4028235e+38;
  }
  else {
    lVar3 = func_0x000180524cb0(lVar5);
    if (iVar6 == 4) {
      if ((*(byte *)(lVar3 + 0x56c) & 1) == 0) {
        lVar5 = *(int64_t *)(lVar5 + 0x6d8);
        fVar8 = *(float *)(lVar5 + 0x8c4);
        fVar10 = *(float *)(lVar5 + 0x8c8);
        fVar11 = *(float *)(lVar5 + 0x8cc);
        fVar13 = *(float *)(lVar5 + 0x8d0);
      }
      else {
        puVar4 = (uint *)((int64_t)*(char *)(*(int64_t *)(lVar3 + 0x590) + 0x2581) * 0x100 +
                         *(int64_t *)(*(int64_t *)(lVar5 + 0x658) + 0x18));
        do {
          LOCK();
          uVar1 = *puVar4;
          *puVar4 = *puVar4 | 1;
          UNLOCK();
        } while ((uVar1 & 1) != 0);
        *puVar4 = 0;
        lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x6d8) + 0x8a8);
        lVar5 = *(int64_t *)(lVar5 + 0x6d8);
        fVar11 = *(float *)(lVar5 + 0x8ec);
        fVar12 = fVar11 - ((float)puVar4[7] * *(float *)(lVar3 + 0x98) + *(float *)(lVar3 + 0xa8));
        fVar13 = *(float *)(*(int64_t *)(*unaff_RBX + 0x6d8) + 0x8ec);
        if (ABS(fVar12) <= 0.001) {
          fVar7 = 1.0;
        }
        else {
          fVar8 = (fVar13 - fVar11) / fVar12;
          fVar7 = 0.0;
          if ((0.0 <= fVar8) && (fVar7 = fVar8, 1.0 <= fVar8)) {
            fVar7 = 1.0;
          }
        }
        fVar8 = (*(float *)(lVar5 + 0x8e4) -
                ((float)puVar4[6] * *(float *)(lVar3 + 0x80) +
                 (float)puVar4[5] * *(float *)(lVar3 + 0x70) + *(float *)(lVar3 + 0xa0))) * fVar7 +
                *(float *)(lVar5 + 0x8e4);
        fVar10 = (*(float *)(lVar5 + 0x8e8) -
                 ((float)puVar4[5] * *(float *)(lVar3 + 0x74) +
                  (float)puVar4[6] * *(float *)(lVar3 + 0x84) + *(float *)(lVar3 + 0xa4))) * fVar7 +
                 *(float *)(lVar5 + 0x8e8);
        fVar11 = fVar7 * fVar12 + fVar11;
      }
    }
    else if (iVar6 == 5) {
      lVar5 = *(int64_t *)(lVar3 + 0x6d8);
      fVar8 = *(float *)(lVar5 + 0x8d4);
      fVar10 = *(float *)(lVar5 + 0x8d8);
      fVar11 = *(float *)(lVar5 + 0x8dc);
      fVar13 = *(float *)(lVar5 + 0x8e0);
    }
    else {
      lVar5 = *(int64_t *)(lVar3 + 0x20);
      fVar8 = *(float *)(lVar5 + 0x1c0) - *(float *)(lVar5 + 0x1b0);
      fVar11 = *(float *)(lVar5 + 0x1c4) - *(float *)(lVar5 + 0x1b4);
      fVar12 = *(float *)(lVar5 + 0x1c8) - *(float *)(lVar5 + 0x1b8);
      lVar3 = *(int64_t *)(*unaff_RBX + 0x6d8);
      fVar10 = fVar11 * fVar11 + fVar8 * fVar8 + fVar12 * fVar12;
      auVar9 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar13 = auVar9._0_4_;
      fVar7 = fVar13 * 0.5 * (3.0 - fVar10 * fVar13 * fVar13);
      fVar13 = (*(float *)(lVar3 + 0x8c8) - *(float *)(lVar5 + 0x1b4)) * fVar11 * fVar7 +
               (*(float *)(lVar3 + 0x8c4) - *(float *)(lVar5 + 0x1b0)) * fVar8 * fVar7 +
               (*(float *)(lVar3 + 0x8cc) - *(float *)(lVar5 + 0x1b8)) * fVar12 * fVar7;
      if (0.0 <= fVar13) {
        if (fVar13 <= fVar7 * fVar10) {
          fVar8 = fVar8 * fVar7 * fVar13 + *(float *)(lVar5 + 0x1b0);
          fVar10 = fVar11 * fVar7 * fVar13 + *(float *)(lVar5 + 0x1b4);
          fVar11 = fVar12 * fVar7 * fVar13 + *(float *)(lVar5 + 0x1b8);
          fVar13 = 3.4028235e+38;
        }
        else {
          fVar8 = *(float *)(lVar5 + 0x1c0);
          fVar10 = *(float *)(lVar5 + 0x1c4);
          fVar11 = *(float *)(lVar5 + 0x1c8);
          fVar13 = *(float *)(lVar5 + 0x1cc);
        }
      }
      else {
        fVar8 = *(float *)(lVar5 + 0x1b0);
        fVar10 = *(float *)(lVar5 + 0x1b4);
        fVar11 = *(float *)(lVar5 + 0x1b8);
        fVar13 = *(float *)(lVar5 + 0x1bc);
      }
    }
  }
  *(float *)(unaff_RBX + 0x406) = fVar8;
  *(float *)((int64_t)unaff_RBX + 0x2034) = fVar10;
  *(float *)(unaff_RBX + 0x407) = fVar11;
  *(float *)((int64_t)unaff_RBX + 0x203c) = fVar13;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000070 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1805d2ce8(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_1805d2ce8(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint *puVar7;
  int64_t unaff_RBX;
  float fVar8;
  float fVar9;
  float fVar10;
  uint64_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  uint uStack000000000000004c;
  uint64_t in_stack_00000070;
  
  lVar5 = *(int64_t *)(param_3 + 0x6d8);
  lVar6 = *(int64_t *)(lVar5 + 0x8a8);
  puVar7 = (uint *)((int64_t)*(char *)(*(int64_t *)(*(int64_t *)(lVar6 + 0x260) + 0x210) + 0xe3)
                    * 0x100 + *(int64_t *)(*(int64_t *)(param_3 + 0x658) + 0x18));
  do {
    LOCK();
    uVar1 = *puVar7;
    *puVar7 = *puVar7 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uStack0000000000000030 = *(uint64_t *)(puVar7 + 1);
  uStack0000000000000038 = *(uint64_t *)(puVar7 + 3);
  fStack0000000000000040 = (float)puVar7[5];
  fStack0000000000000044 = (float)puVar7[6];
  fStack0000000000000048 = (float)puVar7[7];
  uStack000000000000004c = puVar7[8];
  *puVar7 = 0;
  fVar2 = *(float *)(unaff_RBX + 0x202c);
  fVar3 = *(float *)(lVar5 + 0x8dc);
  fVar10 = fStack0000000000000048 * *(float *)(lVar6 + 0x98) + *(float *)(lVar6 + 0xa8);
  fVar8 = fStack0000000000000044 * *(float *)(lVar6 + 0x80) +
          fStack0000000000000040 * *(float *)(lVar6 + 0x70) + *(float *)(lVar6 + 0xa0);
  fVar9 = fStack0000000000000040 * *(float *)(lVar6 + 0x74) +
          fStack0000000000000044 * *(float *)(lVar6 + 0x84) + *(float *)(lVar6 + 0xa4);
  fVar4 = *(float *)(lVar5 + 0x8d8);
  *(float *)(unaff_RBX + 0x2030) = (*(float *)(lVar5 + 0x8d4) - fVar8) * fVar2 + fVar8;
  *(float *)(unaff_RBX + 0x2034) = (fVar4 - fVar9) * fVar2 + fVar9;
  *(float *)(unaff_RBX + 0x2038) = (fVar3 - fVar10) * fVar2 + fVar10;
  *(int32_t *)(unaff_RBX + 0x203c) = 0x7f7fffff;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000070 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1805d2ebf(uint64_t param_1,uint64_t param_2,int64_t param_3,int param_4)
void FUN_1805d2ebf(uint64_t param_1,uint64_t param_2,int64_t param_3,int param_4)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint *puVar4;
  int64_t *unaff_RBX;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int8_t auVar9 [16];
  float fVar10;
  float fVar11;
  uint64_t in_stack_00000070;
  
  lVar3 = func_0x000180524cb0(param_3);
  if (param_4 == 4) {
    if ((*(byte *)(lVar3 + 0x56c) & 1) == 0) {
      lVar3 = *(int64_t *)(param_3 + 0x6d8);
      fVar7 = *(float *)(lVar3 + 0x8c4);
      fVar8 = *(float *)(lVar3 + 0x8c8);
      fVar6 = *(float *)(lVar3 + 0x8cc);
      fVar10 = *(float *)(lVar3 + 0x8d0);
    }
    else {
      puVar4 = (uint *)((int64_t)*(char *)(*(int64_t *)(lVar3 + 0x590) + 0x2581) * 0x100 +
                       *(int64_t *)(*(int64_t *)(param_3 + 0x658) + 0x18));
      do {
        LOCK();
        uVar1 = *puVar4;
        *puVar4 = *puVar4 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      *puVar4 = 0;
      lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x6d8) + 0x8a8);
      lVar2 = *(int64_t *)(param_3 + 0x6d8);
      fVar6 = *(float *)(lVar2 + 0x8ec);
      fVar11 = fVar6 - ((float)puVar4[7] * *(float *)(lVar3 + 0x98) + *(float *)(lVar3 + 0xa8));
      fVar10 = *(float *)(*(int64_t *)(*unaff_RBX + 0x6d8) + 0x8ec);
      if (ABS(fVar11) <= 0.001) {
        fVar5 = 1.0;
      }
      else {
        fVar7 = (fVar10 - fVar6) / fVar11;
        fVar5 = 0.0;
        if ((0.0 <= fVar7) && (fVar5 = fVar7, 1.0 <= fVar7)) {
          fVar5 = 1.0;
        }
      }
      fVar7 = (*(float *)(lVar2 + 0x8e4) -
              ((float)puVar4[6] * *(float *)(lVar3 + 0x80) +
               (float)puVar4[5] * *(float *)(lVar3 + 0x70) + *(float *)(lVar3 + 0xa0))) * fVar5 +
              *(float *)(lVar2 + 0x8e4);
      fVar8 = (*(float *)(lVar2 + 0x8e8) -
              ((float)puVar4[5] * *(float *)(lVar3 + 0x74) +
               (float)puVar4[6] * *(float *)(lVar3 + 0x84) + *(float *)(lVar3 + 0xa4))) * fVar5 +
              *(float *)(lVar2 + 0x8e8);
      fVar6 = fVar5 * fVar11 + fVar6;
    }
  }
  else if (param_4 == 5) {
    lVar3 = *(int64_t *)(lVar3 + 0x6d8);
    fVar7 = *(float *)(lVar3 + 0x8d4);
    fVar8 = *(float *)(lVar3 + 0x8d8);
    fVar6 = *(float *)(lVar3 + 0x8dc);
    fVar10 = *(float *)(lVar3 + 0x8e0);
  }
  else {
    lVar3 = *(int64_t *)(lVar3 + 0x20);
    fVar7 = *(float *)(lVar3 + 0x1c0) - *(float *)(lVar3 + 0x1b0);
    fVar10 = *(float *)(lVar3 + 0x1c4) - *(float *)(lVar3 + 0x1b4);
    fVar11 = *(float *)(lVar3 + 0x1c8) - *(float *)(lVar3 + 0x1b8);
    lVar2 = *(int64_t *)(*unaff_RBX + 0x6d8);
    fVar8 = fVar10 * fVar10 + fVar7 * fVar7 + fVar11 * fVar11;
    auVar9 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar6 = auVar9._0_4_;
    fVar5 = fVar6 * 0.5 * (3.0 - fVar8 * fVar6 * fVar6);
    fVar6 = (*(float *)(lVar2 + 0x8c8) - *(float *)(lVar3 + 0x1b4)) * fVar10 * fVar5 +
            (*(float *)(lVar2 + 0x8c4) - *(float *)(lVar3 + 0x1b0)) * fVar7 * fVar5 +
            (*(float *)(lVar2 + 0x8cc) - *(float *)(lVar3 + 0x1b8)) * fVar11 * fVar5;
    if (fVar6 < 0.0) {
      fVar7 = *(float *)(lVar3 + 0x1b0);
      fVar8 = *(float *)(lVar3 + 0x1b4);
      fVar6 = *(float *)(lVar3 + 0x1b8);
      fVar10 = *(float *)(lVar3 + 0x1bc);
    }
    else if (fVar5 * fVar8 < fVar6) {
      fVar7 = *(float *)(lVar3 + 0x1c0);
      fVar8 = *(float *)(lVar3 + 0x1c4);
      fVar6 = *(float *)(lVar3 + 0x1c8);
      fVar10 = *(float *)(lVar3 + 0x1cc);
    }
    else {
      fVar7 = fVar7 * fVar5 * fVar6 + *(float *)(lVar3 + 0x1b0);
      fVar8 = fVar10 * fVar5 * fVar6 + *(float *)(lVar3 + 0x1b4);
      fVar6 = fVar11 * fVar5 * fVar6 + *(float *)(lVar3 + 0x1b8);
      fVar10 = 3.4028235e+38;
    }
  }
  *(float *)(unaff_RBX + 0x406) = fVar7;
  *(float *)((int64_t)unaff_RBX + 0x2034) = fVar8;
  *(float *)(unaff_RBX + 0x407) = fVar6;
  *(float *)((int64_t)unaff_RBX + 0x203c) = fVar10;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000070 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1805d31dd(void)
void FUN_1805d31dd(void)

{
  int64_t unaff_RBX;
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  uint64_t in_stack_00000070;
  
  *(uint64_t *)(unaff_RBX + 0x2030) = unaff_XMM6_Qa;
  *(uint64_t *)(unaff_RBX + 0x2038) = unaff_XMM6_Qb;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000070 ^ (uint64_t)&stack0x00000000);
}






// 函数: void SystemCore_ThreadManager(int64_t *param_1)
void SystemCore_ThreadManager(int64_t *param_1)

{
  float fVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  float fVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int8_t auVar9 [16];
  float fVar10;
  float fVar11;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  int8_t uStack_34;
  
  plVar2 = (int64_t *)*param_1;
  lVar3 = *(int64_t *)(*plVar2 + 0x20);
  lVar4 = *(int64_t *)(*plVar2 + 0x8d8);
  uVar6 = *(int32_t *)(lVar3 + 0x10);
  uVar7 = *(int32_t *)(lVar3 + 0x14);
  uVar8 = *(int32_t *)(lVar3 + 0x18);
  *(int32_t *)(param_1 + 7) = *(int32_t *)(lVar3 + 0xc);
  *(int32_t *)((int64_t)param_1 + 0x3c) = uVar6;
  *(int32_t *)(param_1 + 8) = uVar7;
  *(int32_t *)((int64_t)param_1 + 0x44) = uVar8;
  if ((plVar2[0x41e] != 0) &&
     (((int)plVar2[0x295] - 5U < 2 ||
      (((*(byte *)((int64_t)plVar2 + 0x209c) & 1) != 0 && ((*(byte *)(plVar2 + 0x413) & 1) != 0))))
     )) {
    if (((*(byte *)((int64_t)plVar2 + 0x209c) & 1) == 0) || ((*(byte *)(plVar2 + 0x413) & 1) == 0))
    {
      uStack_58 = 0;
      uStack_50 = 0x7f7fffff3f800000;
      uStack_34 = 0;
      uStack_38 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      PhysicsSystem_JointManager(*(uint64_t *)(lVar4 + 0x18),plVar2 + 0x41f,lVar4,&uStack_68,0x51b189,1);
    }
    else {
      uStack_68 = (int32_t)plVar2[0x41f];
      uStack_64 = *(int32_t *)((int64_t)plVar2 + 0x20fc);
      uStack_60 = (int32_t)plVar2[0x420];
      uStack_5c = *(int32_t *)((int64_t)plVar2 + 0x2104);
    }
    *(int32_t *)(param_1 + 9) = uStack_68;
    *(int32_t *)((int64_t)param_1 + 0x4c) = uStack_64;
    *(int32_t *)(param_1 + 10) = uStack_60;
    *(int32_t *)((int64_t)param_1 + 0x54) = uStack_5c;
    param_1[0xb] = CONCAT44(*(float *)((int64_t)param_1 + 0x4c) -
                            *(float *)((int64_t)param_1 + 0x3c),
                            *(float *)(param_1 + 9) - *(float *)(param_1 + 7));
    fVar5 = *(float *)((int64_t)param_1 + 0x5c);
    fVar1 = *(float *)(param_1 + 0xb);
    fVar11 = fVar1 * fVar1 + fVar5 * fVar5;
    auVar9 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar10 = auVar9._0_4_;
    fVar10 = fVar10 * 0.5 * (3.0 - fVar11 * fVar10 * fVar10);
    *(float *)((int64_t)param_1 + 0x5c) = fVar5 * fVar10;
    *(float *)(param_1 + 0xb) = fVar1 * fVar10;
    *(float *)(param_1 + 0xc) = fVar10 * fVar11;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 1;
    return;
  }
  if ((*(uint *)(param_1 + 1) & 0x200) == 0) {
    func_0x0001805d4cd0(param_1);
  }
  if (param_1[0x1c] != 0) {
    lVar3 = *param_1;
    if (*(int *)(lVar3 + 0x2028) == 0) {
      lVar3 = *(int64_t *)(param_1[0x1c] + 0x20);
      fVar5 = *(float *)(lVar3 + 0xc);
      uVar6 = *(int32_t *)(lVar3 + 0x10);
      uVar7 = *(int32_t *)(lVar3 + 0x14);
      uVar8 = *(int32_t *)(lVar3 + 0x18);
    }
    else {
      fVar5 = *(float *)(lVar3 + 0x2030);
      uVar6 = *(int32_t *)(lVar3 + 0x2034);
      uVar7 = *(int32_t *)(lVar3 + 0x2038);
      uVar8 = *(int32_t *)(lVar3 + 0x203c);
    }
    *(float *)(param_1 + 9) = fVar5;
    *(int32_t *)((int64_t)param_1 + 0x4c) = uVar6;
    *(int32_t *)(param_1 + 10) = uVar7;
    *(int32_t *)((int64_t)param_1 + 0x54) = uVar8;
    param_1[0xb] = CONCAT44(*(float *)((int64_t)param_1 + 0x4c) -
                            *(float *)((int64_t)param_1 + 0x3c),fVar5 - *(float *)(param_1 + 7));
    uVar6 = FUN_1801be430();
    *(int32_t *)(param_1 + 0xc) = uVar6;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 1;
    return;
  }
  *(int32_t *)(param_1 + 0xc) = 0x42c80000;
  param_1[0xb] = 0x3f80000000000000;
  param_1[9] = 0;
  param_1[10] = 0;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 1;
  return;
}






// 函数: void FUN_1805d3272(int64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_1805d3272(int64_t param_1,uint64_t param_2,int64_t param_3)

{
  float fVar1;
  float fVar2;
  int64_t unaff_RBX;
  bool in_ZF;
  int8_t auVar3 [16];
  float fVar4;
  float fVar5;
  int8_t uStack0000000000000028;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  uint64_t uStack0000000000000050;
  uint64_t uStack0000000000000058;
  uint64_t uStack0000000000000060;
  uint64_t uStack0000000000000068;
  int32_t uStack0000000000000070;
  int8_t uStack0000000000000074;
  int32_t in_stack_000000b0;
  
  if ((in_ZF) || ((*(byte *)(param_1 + 0x2098) & 1) == 0)) {
    uStack0000000000000050 = 0;
    uStack0000000000000058 = 0x7f7fffff3f800000;
    uStack0000000000000028 = 1;
    uStack0000000000000074 = 0;
    uStack0000000000000070 = 0;
    uStack0000000000000060 = 0;
    uStack0000000000000068 = 0;
    PhysicsSystem_JointManager(*(uint64_t *)(param_3 + 0x18),param_1 + 0x20f8,param_3,&stack0x00000040,0x51b189
                 );
  }
  else {
    uStack0000000000000040 = *(int32_t *)(param_1 + 0x20f8);
    uStack0000000000000044 = *(int32_t *)(param_1 + 0x20fc);
    uStack0000000000000048 = *(int32_t *)(param_1 + 0x2100);
    uStack000000000000004c = *(int32_t *)(param_1 + 0x2104);
  }
  *(int32_t *)(unaff_RBX + 0x48) = uStack0000000000000040;
  *(int32_t *)(unaff_RBX + 0x4c) = uStack0000000000000044;
  *(int32_t *)(unaff_RBX + 0x50) = uStack0000000000000048;
  *(int32_t *)(unaff_RBX + 0x54) = uStack000000000000004c;
  *(uint64_t *)(unaff_RBX + 0x58) =
       CONCAT44(*(float *)(unaff_RBX + 0x4c) - *(float *)(unaff_RBX + 0x3c),
                *(float *)(unaff_RBX + 0x48) - *(float *)(unaff_RBX + 0x38));
  fVar1 = *(float *)(unaff_RBX + 0x5c);
  fVar2 = *(float *)(unaff_RBX + 0x58);
  fVar5 = fVar2 * fVar2 + fVar1 * fVar1;
  auVar3 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
  fVar4 = auVar3._0_4_;
  fVar4 = fVar4 * 0.5 * (3.0 - fVar5 * fVar4 * fVar4);
  *(float *)(unaff_RBX + 0x5c) = fVar1 * fVar4;
  *(float *)(unaff_RBX + 0x58) = fVar2 * fVar4;
  *(float *)(unaff_RBX + 0x60) = fVar4 * fVar5;
  *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 1;
  return;
}






// 函数: void FUN_1805d339e(void)
void FUN_1805d339e(void)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  float fVar2;
  int32_t uVar3;
  int32_t uStack0000000000000034;
  int32_t uStack000000000000003c;
  float fStack00000000000000b4;
  
  if ((*(uint *)(unaff_RBX + 1) & 0x200) == 0) {
    func_0x0001805d4cd0();
  }
  if (unaff_RBX[0x1c] != 0) {
    lVar1 = *unaff_RBX;
    if (*(int *)(lVar1 + 0x2028) == 0) {
      lVar1 = *(int64_t *)(unaff_RBX[0x1c] + 0x20);
      fVar2 = *(float *)(lVar1 + 0xc);
      uStack0000000000000034 = *(int32_t *)(lVar1 + 0x10);
      uVar3 = *(int32_t *)(lVar1 + 0x14);
      uStack000000000000003c = *(int32_t *)(lVar1 + 0x18);
    }
    else {
      fVar2 = *(float *)(lVar1 + 0x2030);
      uStack0000000000000034 = *(int32_t *)(lVar1 + 0x2034);
      uVar3 = *(int32_t *)(lVar1 + 0x2038);
      uStack000000000000003c = *(int32_t *)(lVar1 + 0x203c);
    }
    *(float *)(unaff_RBX + 9) = fVar2;
    *(int32_t *)((int64_t)unaff_RBX + 0x4c) = uStack0000000000000034;
    *(int32_t *)(unaff_RBX + 10) = uVar3;
    *(int32_t *)((int64_t)unaff_RBX + 0x54) = uStack000000000000003c;
    fStack00000000000000b4 =
         *(float *)((int64_t)unaff_RBX + 0x4c) - *(float *)((int64_t)unaff_RBX + 0x3c);
    unaff_RBX[0xb] = CONCAT44(fStack00000000000000b4,fVar2 - *(float *)(unaff_RBX + 7));
    uVar3 = FUN_1801be430();
    *(int32_t *)(unaff_RBX + 0xc) = uVar3;
    *(uint *)(unaff_RBX + 1) = *(uint *)(unaff_RBX + 1) | 1;
    return;
  }
  *(int32_t *)(unaff_RBX + 0xc) = 0x42c80000;
  unaff_RBX[0xb] = 0x3f80000000000000;
  unaff_RBX[9] = 0;
  unaff_RBX[10] = 0;
  *(uint *)(unaff_RBX + 1) = *(uint *)(unaff_RBX + 1) | 1;
  return;
}






// 函数: void FUN_1805d3480(int64_t param_1)
void FUN_1805d3480(int64_t param_1)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x200) == 0) {
    func_0x0001805d4cd0();
  }
  if (*(int64_t *)(param_1 + 0xe0) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    if ((uVar1 & 1) == 0) {
      SystemCore_ThreadManager(param_1);
      uVar1 = *(uint *)(param_1 + 8);
    }
    if ((uVar1 >> 9 & 1) == 0) {
      func_0x0001805d4cd0(param_1);
    }
                    // WARNING: Subroutine does not return
    AdvancedSystemController(*(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0xe0) + 0x20) + 0x34));
  }
  *(int32_t *)(param_1 + 0x70) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10000;
  return;
}






// 函数: void FUN_1805d34a8(void)
void FUN_1805d34a8(void)

{
  uint in_EAX;
  int64_t unaff_RBX;
  
  if ((in_EAX & 1) == 0) {
    SystemCore_ThreadManager();
    in_EAX = *(uint *)(unaff_RBX + 8);
  }
  if ((in_EAX >> 9 & 1) == 0) {
    func_0x0001805d4cd0();
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(*(int64_t *)(*(int64_t *)(unaff_RBX + 0xe0) + 0x20) + 0x34));
}






// 函数: void FUN_1805d3518(uint64_t param_1,float param_2)
void FUN_1805d3518(uint64_t param_1,float param_2)

{
  int64_t unaff_RBX;
  
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  *(float *)(unaff_RBX + 0x70) = param_2;
  *(uint *)(unaff_RBX + 8) = *(uint *)(unaff_RBX + 8) | 0x10000;
  return;
}






// 函数: void FUN_1805d3550(int64_t *param_1)
void FUN_1805d3550(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t *plVar4;
  float fVar5;
  float fVar6;
  int8_t auVar7 [16];
  float fVar8;
  
  plVar4 = (int64_t *)*param_1;
  if ((plVar4[0x41e] != 0) &&
     (((int)plVar4[0x295] - 5U < 2 ||
      (((*(byte *)((int64_t)plVar4 + 0x209c) & 1) != 0 && ((*(byte *)(plVar4 + 0x413) & 1) != 0))))
     )) {
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      SystemCore_ThreadManager(param_1);
      plVar4 = (int64_t *)*param_1;
    }
    lVar2 = *(int64_t *)(*plVar4 + 0x6d8);
    fVar8 = *(float *)((int64_t)param_1 + 0x4c) - *(float *)(lVar2 + 0x8c8);
    fVar5 = *(float *)(param_1 + 10) - *(float *)(lVar2 + 0x8cc);
    fVar6 = *(float *)(param_1 + 9) - *(float *)(lVar2 + 0x8c4);
    fVar6 = fVar8 * fVar8 + fVar6 * fVar6 + fVar5 * fVar5;
    auVar7 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar5 = auVar7._0_4_;
    *(float *)((int64_t)param_1 + 100) = fVar5 * 0.5 * (3.0 - fVar6 * fVar5 * fVar5) * fVar6;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 2;
    return;
  }
  uVar3 = *(uint *)(param_1 + 1);
  if ((uVar3 >> 9 & 1) == 0) {
    func_0x0001805d4cd0(param_1);
    uVar3 = *(uint *)(param_1 + 1);
  }
  lVar2 = param_1[0x1c];
  if (lVar2 != 0) {
    if ((uVar3 >> 9 & 1) == 0) {
      func_0x0001805d4cd0(param_1);
      lVar2 = param_1[0x1c];
    }
    if (*(int *)(lVar2 + 0x568) == 1) {
      plVar4 = (int64_t *)*param_1;
      if ((int)plVar4[0x405] != 0) {
        lVar2 = *(int64_t *)(*plVar4 + 0x6d8);
        fVar8 = *(float *)(lVar2 + 0x8c8) - *(float *)((int64_t)plVar4 + 0x2034);
        fVar6 = *(float *)(lVar2 + 0x8c4) - *(float *)(plVar4 + 0x406);
        fVar5 = *(float *)(lVar2 + 0x8cc) - *(float *)(plVar4 + 0x407);
        *(float *)((int64_t)param_1 + 100) = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar5 * fVar5);
        *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 2;
        return;
      }
      lVar2 = SystemCore_MemoryAllocator(param_1);
      lVar2 = *(int64_t *)(lVar2 + 0x6d8);
      lVar1 = *(int64_t *)(*(int64_t *)*param_1 + 0x6d8);
      fVar8 = *(float *)(lVar2 + 0x8c8) - *(float *)(lVar1 + 0x8c8);
      fVar5 = *(float *)(lVar2 + 0x8cc) - *(float *)(lVar1 + 0x8cc);
      fVar6 = *(float *)(lVar2 + 0x8c4) - *(float *)(lVar1 + 0x8c4);
      *(float *)((int64_t)param_1 + 100) = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar5 * fVar5);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 2;
      return;
    }
  }
  *(int32_t *)((int64_t)param_1 + 100) = 0x42c80000;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 2;
  return;
}






