n//  的语义化别名
#define SystemCore_LoggingSystem 


// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: MathInterpolationCalculator */
#define MathInterpolationCalculator MathInterpolationCalculator



// 02_core_engine_part146.c - 9 个函数

// 函数: void FUN_180136f68(int64_t param_1,int64_t param_2)
void FUN_180136f68(int64_t param_1,int64_t param_2)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  byte bVar6;
  uint uVar7;
  uint64_t uVar8;
  
  uVar4 = 0;
  lVar2 = *(int64_t *)(param_2 + 0x30);
  if ((lVar2 == 0) || (*(int64_t *)(param_1 + 0x30) != 0)) {
    bVar6 = 0;
  }
  else {
    *(int64_t *)(param_1 + 0x30) = lVar2;
    bVar6 = 1;
    *(uint64_t *)(param_2 + 0x30) = 0;
  }
  if (0 < *(int *)(param_2 + 0x20)) {
    uVar5 = uVar4;
    uVar8 = uVar4;
    do {
      if (lVar2 == 0) {
        lVar3 = *(int64_t *)(uVar5 + *(int64_t *)(param_2 + 0x28));
      }
      else {
        lVar3 = *(int64_t *)(*(int64_t *)(lVar2 + 8) + 8 + uVar4);
      }
      *(byte *)(lVar3 + 0x432) = *(byte *)(lVar3 + 0x432) & 0xfe;
      *(uint64_t *)(lVar3 + 0x408) = 0;
      FUN_180136b10(param_1,lVar3,bVar6 ^ 1);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
      uVar4 = uVar4 + 0x28;
      uVar5 = uVar5 + 8;
    } while ((int)uVar7 < *(int *)(param_2 + 0x20));
  }
  lVar3 = SYSTEM_DATA_MANAGER_A;
  lVar2 = *(int64_t *)(param_2 + 0x28);
  if (lVar2 == 0) {
    if ((bVar6 == 0) && (lVar2 = *(int64_t *)(param_2 + 0x30), lVar2 != 0)) {
      if (*(int64_t *)(param_1 + 0x30) != 0) {
        *(int32_t *)(*(int64_t *)(param_1 + 0x30) + 0x14) = *(int32_t *)(lVar2 + 0x14);
        lVar2 = *(int64_t *)(param_2 + 0x30);
      }
      FUN_18013ea00(lVar2);
      *(uint64_t *)(param_2 + 0x30) = 0;
    }
    return;
  }
  *(uint64_t *)(param_2 + 0x20) = 0;
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 0x3a8);
    *piVar1 = *piVar1 + -1;
  }
                    // WARNING: Subroutine does not return
  SystemResourceCleaner(lVar2,SYSTEM_DATA_MANAGER_B);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180136fa8(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_180136fa8(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int *piVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int64_t lVar3;
  int64_t unaff_RDI;
  int64_t lVar4;
  char unaff_R13B;
  int64_t unaff_R14;
  int unaff_R15D;
  
  lVar3 = param_3;
  lVar4 = param_3;
  do {
    if (unaff_RDI == 0) {
      lVar2 = *(int64_t *)(lVar3 + *(int64_t *)(unaff_RBX + 0x28));
    }
    else {
      lVar2 = *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + 8 + param_3);
    }
    *(byte *)(lVar2 + 0x432) = *(byte *)(lVar2 + 0x432) & 0xfe;
    *(int64_t *)(lVar2 + 0x408) = lVar4;
    FUN_180136b10();
    lVar2 = SYSTEM_DATA_MANAGER_A;
    unaff_R15D = unaff_R15D + 1;
    param_3 = param_3 + 0x28;
    lVar3 = lVar3 + 8;
    lVar4 = 0;
  } while (unaff_R15D < *(int *)(unaff_RBX + 0x20));
  lVar3 = *(int64_t *)(unaff_RBX + 0x28);
  if (lVar3 != 0) {
    *(uint64_t *)(unaff_RBX + 0x20) = 0;
    if (lVar2 != 0) {
      piVar1 = (int *)(lVar2 + 0x3a8);
      *piVar1 = *piVar1 + -1;
    }
                    // WARNING: Subroutine does not return
    SystemResourceCleaner(lVar3,SYSTEM_DATA_MANAGER_B);
  }
  if ((unaff_R13B == '\0') && (lVar3 = *(int64_t *)(unaff_RBX + 0x30), lVar3 != 0)) {
    if (*(int64_t *)(unaff_R14 + 0x30) != 0) {
      *(int32_t *)(*(int64_t *)(unaff_R14 + 0x30) + 0x14) = *(int32_t *)(lVar3 + 0x14);
      lVar3 = *(int64_t *)(unaff_RBX + 0x30);
    }
    FUN_18013ea00(lVar3);
    *(uint64_t *)(unaff_RBX + 0x30) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18013701d(void)
void FUN_18013701d(void)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  char unaff_R13B;
  int64_t unaff_R14;
  
  lVar2 = SYSTEM_DATA_MANAGER_A;
  lVar3 = *(int64_t *)(unaff_RBX + 0x28);
  if (lVar3 != 0) {
    *(uint64_t *)(unaff_RBX + 0x20) = 0;
    if (lVar2 != 0) {
      piVar1 = (int *)(lVar2 + 0x3a8);
      *piVar1 = *piVar1 + -1;
    }
                    // WARNING: Subroutine does not return
    SystemResourceCleaner(lVar3,SYSTEM_DATA_MANAGER_B);
  }
  if ((unaff_R13B == '\0') && (lVar3 = *(int64_t *)(unaff_RBX + 0x30), lVar3 != 0)) {
    if (*(int64_t *)(unaff_R14 + 0x30) != 0) {
      *(int32_t *)(*(int64_t *)(unaff_R14 + 0x30) + 0x14) = *(int32_t *)(lVar3 + 0x14);
      lVar3 = *(int64_t *)(unaff_RBX + 0x30);
    }
    FUN_18013ea00(lVar3);
    *(uint64_t *)(unaff_RBX + 0x30) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180137030(uint64_t param_1)
void FUN_180137030(uint64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  
  lVar2 = SYSTEM_DATA_MANAGER_A;
  *(uint64_t *)(unaff_RBX + 0x20) = 0;
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x3a8);
    *piVar1 = *piVar1 + -1;
  }
                    // WARNING: Subroutine does not return
  SystemResourceCleaner(param_1,SYSTEM_DATA_MANAGER_B);
}





// 函数: void FUN_180137068(void)
void FUN_180137068(void)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t unaff_R14;
  
  lVar1 = *(int64_t *)(unaff_RBX + 0x30);
  if (lVar1 != 0) {
    if (*(int64_t *)(unaff_R14 + 0x30) != 0) {
      *(int32_t *)(*(int64_t *)(unaff_R14 + 0x30) + 0x14) = *(int32_t *)(lVar1 + 0x14);
      lVar1 = *(int64_t *)(unaff_RBX + 0x30);
    }
    FUN_18013ea00(lVar1);
    *(uint64_t *)(unaff_RBX + 0x30) = 0;
  }
  return;
}





// 函数: void FUN_1801370a0(int64_t param_1,int64_t *param_2)
void FUN_1801370a0(int64_t param_1,int64_t *param_2)

{
  while( true ) {
    if (0 < *(int *)(param_1 + 0x20)) {
      if (param_2[1] == 0) {
        param_2[1] = param_1;
      }
      *(int *)(param_2 + 2) = (int)param_2[2] + 1;
    }
    if ((*(byte *)(param_1 + 0xa0) & 0x20) != 0) {
      *param_2 = param_1;
    }
    if ((1 < (int)param_2[2]) && (*param_2 != 0)) break;
    if (*(int64_t *)(param_1 + 0x10) != 0) {
      FUN_1801370a0(*(int64_t *)(param_1 + 0x10),param_2);
    }
    param_1 = *(int64_t *)(param_1 + 0x18);
    if (param_1 == 0) {
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180137110(int32_t *param_1)
void FUN_180137110(int32_t *param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  if (*(int64_t *)(param_1 + 2) != 0) {
    param_1[1] = *(int32_t *)(*(int64_t *)(param_1 + 2) + 4);
  }
  if (*(int64_t *)(param_1 + 4) != 0) {
    FUN_180137110();
  }
  if (*(int64_t *)(param_1 + 6) != 0) {
    FUN_180137110();
  }
  iVar7 = param_1[8];
  iVar6 = 0;
  if (0 < iVar7) {
    lVar8 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 0x1a90);
      lVar2 = *(int64_t *)(lVar8 + *(int64_t *)(param_1 + 10));
      if ((param_1[0x23] + 1 == iVar1) && (*(int *)(lVar2 + 0x280) + 1 < iVar1)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (((param_1[0x23] + 1 == iVar1) &&
          ((((*(byte *)((int64_t)param_1 + 0xa1) & 2) != 0 ||
            (param_1[0x27] == *(int *)(lVar2 + 8))) && (*(char *)(lVar2 + 0xb7) != '\0')))) &&
         ((*(uint *)(lVar2 + 0xc) & 0x100000) == 0)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (((*(byte *)(lVar2 + 0x432) >> 2 & 1) != 0 || bVar5) || bVar4) {
        *(byte *)(lVar2 + 0x432) = *(byte *)(lVar2 + 0x432) & 0xfb;
        if ((param_1[8] == 1) && ((*(byte *)(param_1 + 0x28) & 0x20) == 0)) {
          lVar3 = *(int64_t *)(param_1 + 0x1a);
          if (lVar3 != 0) {
            if (*(int32_t **)(lVar3 + 0x410) == param_1) {
              *(uint64_t *)(lVar3 + 0x410) = 0;
            }
            *(uint64_t *)(param_1 + 0x1a) = 0;
          }
          if (param_1[8] == 1) {
            *(uint64_t *)(param_1 + 0x1c) = **(uint64_t **)(param_1 + 10);
            *(byte *)(**(int64_t **)(param_1 + 10) + 0x432) =
                 *(byte *)(**(int64_t **)(param_1 + 10) + 0x432) & 0xfe;
          }
          if (*(int64_t *)(param_1 + 0xc) != 0) {
            FUN_18013ea00();
            *(uint64_t *)(param_1 + 0xc) = 0;
          }
          FUN_180136d40(param_1,lVar2,*param_1);
          return;
        }
        FUN_180136d40(param_1,lVar2,*param_1);
        iVar7 = param_1[8];
        iVar6 = iVar6 + -1;
        lVar8 = lVar8 + -8;
      }
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar6 < iVar7);
  }
  if (iVar7 < 2) {
    if ((*(byte *)((int64_t)param_1 + 0xa1) & 0x10) != 0) {
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) ^ 0x40;
    }
  }
  else {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xbf;
  }
  *(byte *)((int64_t)param_1 + 0xa1) = *(byte *)((int64_t)param_1 + 0xa1) & 0xef;
  func_0x0001801372f0(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180137370(int64_t param_1,uint64_t param_2)
void FUN_180137370(int64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  uVar1 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1b48);
  uVar2 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1b4c);
  FUN_1801248f0(param_2);
  *(uint64_t *)(lVar3 + 0x1b78) = param_2;
  *(byte *)(param_1 + 0xa1) = *(byte *)(param_1 + 0xa1) & 0xf7;
  *(int32_t *)(lVar3 + 0x1b48) = uVar1;
  *(int32_t *)(lVar3 + 0x1b4c) = uVar2;
  return;
}



// WARNING: Removing unreachable block (ram,0x000180137481)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801373f0(int32_t *param_1)
void FUN_1801373f0(int32_t *param_1)

{
  uint64_t *puVar1;
  byte bVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  bool bVar6;
  int64_t lVar7;
  char cVar8;
  int32_t uVar9;
  int32_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  byte bVar14;
  int64_t *plVar15;
  int16_t uVar16;
  int64_t lVar17;
  int32_t *puVar18;
  int16_t uVar19;
  int iVar20;
  uint64_t uVar21;
  uint uVar22;
  int32_t *puVar23;
  uint64_t *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int8_t auStack_f8 [32];
  int32_t uStack_d8;
  int32_t uStack_d0;
  char cStack_c8;
  char cStack_c7;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int32_t *puStack_a8;
  uint64_t uStack_a0;
  uint uStack_98;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  float fStack_7c;
  int8_t auStack_78 [24];
  uint64_t uStack_60;
  
  lVar7 = SYSTEM_DATA_MANAGER_A;
  uStack_60 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
  puVar18 = (int32_t *)0x0;
  param_1[0x22] = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1a90);
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x1e) = 0;
  lVar11 = lVar7;
  if (*(int64_t *)(param_1 + 2) == 0) {
    FUN_180137110();
    uStack_a0 = (int32_t *)0x0;
    if (0 < (int)param_1[8]) {
      uStack_a0 = param_1;
    }
    uStack_98 = (uint)(0 < (int)param_1[8]);
    puStack_a8 = puVar18;
    if ((*(byte *)(param_1 + 0x28) & 0x20) != 0) {
      puStack_a8 = param_1;
    }
    if (*(int64_t *)(param_1 + 4) != 0) {
      FUN_1801370a0(*(int64_t *)(param_1 + 4),&puStack_a8);
    }
    if (*(int64_t *)(param_1 + 6) != 0) {
      FUN_1801370a0(*(int64_t *)(param_1 + 6),&puStack_a8);
    }
    *(int32_t **)(param_1 + 0x1e) = puStack_a8;
    puVar10 = puVar18;
    if (uStack_98 == 1) {
      puVar10 = uStack_a0;
    }
    *(int32_t **)(param_1 + 0x20) = puVar10;
    if (param_1[0x25] == 0) {
      lVar11 = SYSTEM_DATA_MANAGER_A;
      if (uStack_a0 == (int32_t *)0x0) goto LAB_180137566;
      param_1[0x25] = *uStack_a0;
    }
    lVar11 = SYSTEM_DATA_MANAGER_A;
    if (uStack_a0 != (int32_t *)0x0) {
      iVar20 = 1;
      lVar11 = **(int64_t **)(uStack_a0 + 10);
      uVar9 = *(int32_t *)(lVar11 + 0x18);
      uVar3 = *(int32_t *)(lVar11 + 0x1c);
      uVar4 = *(int32_t *)(lVar11 + 0x20);
      param_1[0x15] = *(int32_t *)(lVar11 + 0x14);
      param_1[0x16] = uVar9;
      param_1[0x17] = uVar3;
      param_1[0x18] = uVar4;
      param_1[0x19] = *(int32_t *)(lVar11 + 0x24);
      lVar11 = SYSTEM_DATA_MANAGER_A;
      if (1 < (int)uStack_a0[8]) {
        lVar17 = 1;
        plVar15 = *(int64_t **)(uStack_a0 + 10);
        do {
          plVar15 = plVar15 + 1;
          if (*(char *)(*plVar15 + 0x24) == '\0') {
            lVar11 = (*(int64_t **)(uStack_a0 + 10))[iVar20];
            uVar9 = *(int32_t *)(lVar11 + 0x18);
            uVar3 = *(int32_t *)(lVar11 + 0x1c);
            uVar4 = *(int32_t *)(lVar11 + 0x20);
            param_1[0x15] = *(int32_t *)(lVar11 + 0x14);
            param_1[0x16] = uVar9;
            param_1[0x17] = uVar3;
            param_1[0x18] = uVar4;
            param_1[0x19] = *(int32_t *)(lVar11 + 0x24);
            lVar11 = SYSTEM_DATA_MANAGER_A;
            break;
          }
          iVar20 = iVar20 + 1;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)uStack_a0[8]);
      }
    }
  }
LAB_180137566:
  iVar20 = param_1[8];
  if ((((iVar20 < 2) && (*(int64_t *)(param_1 + 2) == 0)) && (*(int64_t *)(param_1 + 4) == 0)) &&
     (((*(byte *)(param_1 + 0x28) & 0x10) == 0 && (*(char *)(lVar7 + 0xc2) == '\0')))) {
    if (iVar20 == 1) {
      lVar11 = *(int64_t *)(param_1 + 0x1a);
      lVar17 = **(int64_t **)(param_1 + 10);
      *(uint64_t *)(param_1 + 0xe) = *(uint64_t *)(lVar17 + 0x40);
      *(uint64_t *)(param_1 + 0x10) = *(uint64_t *)(lVar17 + 0x50);
      if ((lVar11 != 0) && (*(int64_t *)(lVar7 + 0x1c98) == lVar11)) {
        SystemCore_DataCompressor(lVar17);
        lVar11 = *(int64_t *)(param_1 + 0x1a);
      }
      if (lVar11 != 0) {
        lVar11 = *(int64_t *)(lVar11 + 0x28);
        *(int64_t *)(lVar17 + 0x28) = lVar11;
        *(int32_t *)(lVar17 + 0x30) = *(int32_t *)(*(int64_t *)(param_1 + 0x1a) + 0x30);
        if (*(char *)(*(int64_t *)(param_1 + 0x1a) + 0xae) != '\0') {
          *(int64_t *)(lVar11 + 0x78) = lVar17;
          *(int8_t *)(lVar17 + 0xae) = 1;
        }
      }
    }
    lVar11 = *(int64_t *)(param_1 + 0x1a);
    if (lVar11 != 0) {
      if (*(int32_t **)(lVar11 + 0x410) == param_1) {
        *(uint64_t *)(lVar11 + 0x410) = 0;
      }
      *(uint64_t *)(param_1 + 0x1a) = 0;
    }
    if (param_1[8] == 1) {
      *(uint64_t *)(param_1 + 0x1c) = **(uint64_t **)(param_1 + 10);
      *(byte *)(**(int64_t **)(param_1 + 10) + 0x432) =
           *(byte *)(**(int64_t **)(param_1 + 10) + 0x432) & 0xfe;
    }
    if (*(int64_t *)(param_1 + 0xc) != 0) {
      FUN_18013ea00();
      *(uint64_t *)(param_1 + 0xc) = 0;
    }
    *(byte *)((int64_t)param_1 + 0xa1) = *(byte *)((int64_t)param_1 + 0xa1) & 0xfc;
    param_1[0x27] = 0;
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0x7c;
    param_1[0x23] = *(int32_t *)(lVar7 + 0x1a90);
    if (((*(byte *)((int64_t)param_1 + 0xa1) & 8) != 0) && (param_1[8] == 1)) {
      FUN_180137370(param_1,**(uint64_t **)(param_1 + 10));
    }
    goto LAB_180137f18;
  }
  bVar2 = *(byte *)(param_1 + 0x28);
  bVar14 = bVar2 & 0x7f;
  cStack_c7 = '\0';
  *(byte *)(param_1 + 0x28) = bVar14;
  if ((bVar2 & 0x10) == 0) {
    *(byte *)((int64_t)param_1 + 0xa1) = 0 < iVar20 | *(byte *)((int64_t)param_1 + 0xa1) & 0xfe;
    puVar10 = puVar18;
    puVar23 = puVar18;
    if (0 < iVar20) {
      do {
        uVar22 = (int)puVar23 + 1;
        lVar17 = *(int64_t *)((int64_t)puVar10 + *(int64_t *)(param_1 + 10));
        *(byte *)(lVar17 + 0x432) = 1 < (int)param_1[8] | *(byte *)(lVar17 + 0x432) & 0xfe;
        bVar14 = *(char *)(lVar17 + 0xb7) << 7 | *(byte *)(param_1 + 0x28);
        *(byte *)(param_1 + 0x28) = bVar14;
        puVar10 = puVar10 + 2;
        puVar23 = (int32_t *)(uint64_t)uVar22;
      } while ((int)uVar22 < (int)param_1[8]);
    }
    if (*(int64_t *)(param_1 + 2) == 0) {
      if ((bVar14 & 4) != 0) {
        if (((bVar14 & 1) == 0) || ((int)param_1[8] < 1)) {
          if (*(int64_t *)(param_1 + 0x1a) == 0) {
            *(uint64_t *)(lVar11 + 0x1bf4) = *(uint64_t *)(param_1 + 0xe);
            *(uint64_t *)(lVar11 + 0x1bfc) = 0;
            *(int32_t *)(lVar11 + 0x1bd0) = 1;
            *(int8_t *)(lVar11 + 0x1c14) = 1;
            *(uint64_t *)(lVar11 + 0x1c04) = *(uint64_t *)(param_1 + 0x10);
            *(int32_t *)(lVar11 + 0x1bd4) = 1;
          }
        }
        else {
          lVar17 = **(int64_t **)(param_1 + 10);
          *(uint64_t *)(lVar11 + 0x1bf4) = *(uint64_t *)(lVar17 + 0x40);
          *(uint64_t *)(lVar11 + 0x1bfc) = 0;
          *(int32_t *)(lVar11 + 0x1bd0) = 1;
          *(int8_t *)(lVar11 + 0x1c14) = 1;
          *(uint64_t *)(lVar11 + 0x1c04) = *(uint64_t *)(lVar17 + 0x50);
          *(int32_t *)(lVar11 + 0x1bd4) = 1;
          *(int8_t *)(lVar11 + 0x1c15) = *(int8_t *)(lVar17 + 0xb2);
          *(int32_t *)(lVar11 + 0x1bdc) = 1;
        }
        if (((*(byte *)(param_1 + 0x28) & 2) != 0) && (0 < (int)param_1[8])) {
          uVar9 = *(int32_t *)(**(int64_t **)(param_1 + 10) + 0x30);
          *(int32_t *)(lVar11 + 0x1bec) = 1;
          *(int32_t *)(lVar11 + 0x1c3c) = uVar9;
        }
        uVar9 = param_1[0x16];
        uVar3 = param_1[0x17];
        uVar4 = param_1[0x18];
        *(int32_t *)(lVar11 + 0x1c44) = param_1[0x15];
        *(int32_t *)(lVar11 + 0x1c48) = uVar9;
        *(int32_t *)(lVar11 + 0x1c4c) = uVar3;
        *(int32_t *)(lVar11 + 0x1c50) = uVar4;
        *(int32_t *)(lVar11 + 0x1c54) = param_1[0x19];
        SystemCore_LoggingSystem(auStack_78,0x14,&rendering_buffer_2680_ptr,*param_1);
        lVar11 = SYSTEM_DATA_MANAGER_A;
        fStack_b8 = 1.4013e-45;
        fStack_b4 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x162c);
        fStack_b0 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1630);
        FUN_18013e000(SYSTEM_DATA_MANAGER_A + 0x1b90,&fStack_b8);
        *(uint64_t *)(lVar11 + 0x162c) = 0;
        CoreSystem_Validator(auStack_78,0,0x20081139);
        lVar11 = SYSTEM_DATA_MANAGER_A;
        lVar12 = (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b90);
        lVar17 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b98);
        lVar13 = (int64_t)*(int *)(lVar17 + -0xc + lVar12 * 0xc);
        uVar21 = (uint64_t)*(uint *)(&processed_var_6056_ptr + lVar13 * 0xc);
        if (*(int *)(&processed_var_6048_ptr + lVar13 * 0xc) == 4) {
          if (*(int *)(&processed_var_6052_ptr + lVar13 * 0xc) == 1) {
            *(int32_t *)(uVar21 + 0x1628 + SYSTEM_DATA_MANAGER_A) =
                 *(int32_t *)(lVar17 + -8 + lVar12 * 0xc);
          }
          else if (*(int *)(&processed_var_6052_ptr + lVar13 * 0xc) == 2) {
            *(int32_t *)(uVar21 + 0x1628 + SYSTEM_DATA_MANAGER_A) =
                 *(int32_t *)(lVar17 + -8 + lVar12 * 0xc);
            *(int32_t *)(uVar21 + 0x162c + lVar11) = *(int32_t *)(lVar17 + -4 + lVar12 * 0xc);
          }
        }
        *(int *)(lVar11 + 0x1b90) = *(int *)(lVar11 + 0x1b90) + -1;
        puVar18 = *(int32_t **)(lVar7 + 0x1af8);
        *(int32_t **)(param_1 + 0x1a) = puVar18;
        cStack_c7 = '\x01';
        *(uint64_t *)(puVar18 + 0x40) = *(uint64_t *)(puVar18 + 0x10);
        *(int32_t **)(puVar18 + 0x104) = param_1;
        *(uint64_t *)(param_1 + 0xe) = *(uint64_t *)(puVar18 + 0x10);
        *(uint64_t *)(param_1 + 0x10) = *(uint64_t *)(puVar18 + 0x12);
      }
    }
    else {
      puVar18 = *(int32_t **)(*(int64_t *)(param_1 + 2) + 0x68);
      *(int32_t **)(param_1 + 0x1a) = puVar18;
    }
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfc;
    if (((*(byte *)((int64_t)param_1 + 0xa1) & 8) != 0) && (*(int64_t *)(param_1 + 0x1a) != 0)) {
      FUN_180137370(param_1);
    }
  }
  else {
    puVar18 = *(int32_t **)(param_1 + 0x1a);
    *(byte *)((int64_t)param_1 + 0xa1) = *(byte *)((int64_t)param_1 + 0xa1) | 1;
  }
  if (*(int64_t *)(param_1 + 2) == 0) {
    if (*(int64_t *)(lVar7 + 0x1c98) != 0) {
      lVar17 = *(int64_t *)(*(int64_t *)(lVar7 + 0x1c98) + 0x3a8);
      puVar10 = *(int32_t **)(lVar17 + 0x408);
      if ((puVar10 != (int32_t *)0x0) && (*(int32_t **)(lVar17 + 0x398) == puVar18)) {
        param_1[0x25] = *puVar10;
      }
    }
    if ((puVar18 == (int32_t *)0x0) || ((*(byte *)(param_1 + 1) & 0x40) == 0))
    goto LAB_180137a81;
    cStack_c8 = '\x01';
    FUN_180291cf0(*(uint64_t *)(puVar18 + 0xba),2);
    lVar11 = SYSTEM_DATA_MANAGER_A;
    puVar24 = *(uint64_t **)(puVar18 + 0xba);
    if (*(int *)(puVar24 + 0x12) != 1) {
      uVar5 = puVar24[1];
      puVar1 = (uint64_t *)((int64_t)*(int *)(puVar24 + 0x12) * 0x20 + puVar24[0x14]);
      *puVar1 = *puVar24;
      puVar1[1] = uVar5;
      uVar5 = puVar24[3];
      puVar1 = (uint64_t *)((int64_t)*(int *)(puVar24 + 0x12) * 0x20 + 0x10 + puVar24[0x14]);
      *puVar1 = puVar24[2];
      puVar1[1] = uVar5;
      lVar17 = puVar24[0x14];
      *(int32_t *)(puVar24 + 0x12) = 1;
      uVar5 = *(uint64_t *)(lVar17 + 0x28);
      *puVar24 = *(uint64_t *)(lVar17 + 0x20);
      puVar24[1] = uVar5;
      uVar9 = *(int32_t *)(lVar17 + 0x34);
      uVar3 = *(int32_t *)(lVar17 + 0x38);
      uVar4 = *(int32_t *)(lVar17 + 0x3c);
      *(int32_t *)(puVar24 + 2) = *(int32_t *)(lVar17 + 0x30);
      *(int32_t *)((int64_t)puVar24 + 0x14) = uVar9;
      *(int32_t *)(puVar24 + 3) = uVar3;
      *(int32_t *)((int64_t)puVar24 + 0x1c) = uVar4;
      puVar24[0xb] = puVar24[3] + (int64_t)*(int *)(puVar24 + 2) * 2;
    }
  }
  else {
LAB_180137a81:
    cStack_c8 = '\0';
  }
  lVar17 = *(int64_t *)(param_1 + 0x1e);
  if (((((*(int64_t *)(param_1 + 2) == 0) && (puVar18 != (int32_t *)0x0)) &&
       ((*(byte *)(param_1 + 1) & 0x40) != 0)) &&
      ((lVar17 != 0 && (*(int64_t *)(lVar17 + 0x10) == 0)))) && (*(int *)(lVar17 + 0x20) == 0)) {
    puVar24 = (uint64_t *)(lVar11 + 0x1de0);
    bVar6 = true;
    if (*(char *)(lVar11 + 0x1dd0) == '\0') {
      puVar24 = (uint64_t *)0x0;
    }
    if (((puVar24 == (uint64_t *)0x0) || (*(int *)((int64_t)puVar24 + 0x14) == -1)) ||
       ((iVar20 = strcmp(&rendering_buffer_2304_ptr,puVar24 + 3), iVar20 != 0 ||
        (cVar8 = FUN_180138ed0(puVar18,*(uint64_t *)*puVar24), cVar8 == '\0')))) {
      fVar28 = *(float *)(lVar17 + 0x38) - -4.0;
      fVar27 = *(float *)(lVar17 + 0x3c) - -4.0;
      fVar26 = (*(float *)(lVar17 + 0x38) + *(float *)(lVar17 + 0x40)) - 4.0;
      fVar25 = (*(float *)(lVar17 + 0x3c) + *(float *)(lVar17 + 0x44)) - 4.0;
      if ((fVar28 <= fVar26) && (fVar27 <= fVar25)) {
        lVar12 = *(int64_t *)(puVar18 + 0xe6);
        uVar16 = (int16_t)(int)(fVar25 - fVar27);
        uVar19 = (int16_t)(int)(fVar26 - fVar28);
        puVar18[0x9a] = CONCAT22(uVar16,uVar19);
        puVar18[0x9b] =
             CONCAT22((short)(int)(fVar27 - (float)puVar18[0x11]),
                      (short)(int)(fVar28 - (float)puVar18[0x10]));
        *(uint *)(lVar12 + 0x268) = CONCAT22(uVar16,uVar19);
        fStack_b8 = (float)CONCAT22((short)(int)(fVar27 - *(float *)(lVar12 + 0x44)),
                                    (short)(int)(fVar28 - *(float *)(lVar12 + 0x40)));
        *(float *)(lVar12 + 0x26c) = fStack_b8;
      }
    }
  }
  else {
    bVar6 = false;
  }
  if (*(int64_t *)(param_1 + 2) == 0) {
    if (puVar18 != (int32_t *)0x0) {
      FUN_18013a5e0(param_1,*(uint64_t *)(puVar18 + 0x10),*(uint64_t *)(puVar18 + 0x12));
      FUN_18013a920(param_1);
      lVar11 = SYSTEM_DATA_MANAGER_A;
      goto LAB_180137c29;
    }
  }
  else {
LAB_180137c29:
    if ((((puVar18 != (int32_t *)0x0) && (*(int64_t *)(param_1 + 4) == 0)) && (param_1[8] == 0))
       && (((*(byte *)(param_1 + 0x28) & 4) != 0 && ((*(byte *)(param_1 + 1) & 0x40) == 0)))) {
      uStack_88 = *(int32_t *)(lVar11 + 0x1938);
      uStack_84 = *(int32_t *)(lVar11 + 0x193c);
      uStack_80 = *(int32_t *)(lVar11 + 0x1940);
      fStack_b4 = (float)param_1[0xf] + (float)param_1[0x11];
      fStack_7c = *(float *)(lVar11 + 0x1944) * *(float *)(lVar11 + 0x1628);
      fStack_b8 = (float)param_1[0xe] + (float)param_1[0x10];
      uVar9 = func_0x000180121e20(&uStack_88);
      uStack_d0 = 0xf;
      uStack_d8 = 0;
      MathInterpolationCalculator0(*(uint64_t *)(puVar18 + 0xba),param_1 + 0xe,&fStack_b8,uVar9);
      lVar11 = SYSTEM_DATA_MANAGER_A;
    }
  }
  if ((cStack_c8 != '\0') && ((*(byte *)(param_1 + 0x28) & 4) != 0)) {
    func_0x000180292160(*(uint64_t *)(puVar18 + 0xba),0);
    uStack_88 = *(int32_t *)(lVar11 + 0x16e8);
    uStack_84 = *(int32_t *)(lVar11 + 0x16ec);
    uStack_80 = *(int32_t *)(lVar11 + 0x16f0);
    fStack_7c = *(float *)(lVar11 + 0x16f4) * *(float *)(lVar11 + 0x1628);
    if (bVar6) {
      puStack_a8 = *(int32_t **)(lVar17 + 0x38);
      fStack_b4 = (float)param_1[0xf];
      fStack_b8 = (float)param_1[0xe];
      fStack_ac = fStack_b4 + (float)param_1[0x11];
      fStack_b0 = fStack_b8 + (float)param_1[0x10];
      uStack_a0 = (int32_t *)
                  CONCAT44(*(float *)(lVar17 + 0x3c) + *(float *)(lVar17 + 0x44),
                           *(float *)(lVar17 + 0x38) + *(float *)(lVar17 + 0x40));
      uVar9 = func_0x000180121e20(&uStack_88);
      uStack_d8 = 0;
      FUN_180298890(*(uint64_t *)(puVar18 + 0xba),&fStack_b8,&puStack_a8,uVar9);
    }
    else {
      fStack_b8 = (float)param_1[0xe] + (float)param_1[0x10];
      fStack_b4 = (float)param_1[0xf] + (float)param_1[0x11];
      uVar9 = func_0x000180121e20(&uStack_88);
      uStack_d0 = 0xf;
      uStack_d8 = 0;
      MathInterpolationCalculator0(*(uint64_t *)(puVar18 + 0xba),param_1 + 0xe,&fStack_b8,uVar9);
    }
    FUN_180291f60(*(uint64_t *)(puVar18 + 0xba));
  }
  if ((puVar18 == (int32_t *)0x0) || ((int)param_1[8] < 1)) {
    *(byte *)((int64_t)param_1 + 0xa1) = *(byte *)((int64_t)param_1 + 0xa1) & 0xfd;
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xf7;
    param_1[0x27] = 0;
    if (0 < (int)param_1[8]) {
      param_1[0x26] = *(int32_t *)(**(int64_t **)(param_1 + 10) + 8);
    }
  }
  else {
    FUN_180137f90(param_1,puVar18);
    if (*(int *)(*(int64_t *)(param_1 + 0xc) + 0x14) != 0) {
      param_1[0x26] = *(int *)(*(int64_t *)(param_1 + 0xc) + 0x14);
    }
  }
  if ((((puVar18 != (int32_t *)0x0) && ((*(byte *)(param_1 + 0x28) & 4) != 0)) &&
      (*(int64_t *)(param_1 + 2) == 0)) &&
     ((*(int64_t *)(lVar7 + 0x1b78) == 0 ||
      (*(int32_t **)(*(int64_t *)(lVar7 + 0x1b78) + 0x3a0) != puVar18)))) {
    FUN_18013baf0(puVar18);
  }
  param_1[0x23] = *(int32_t *)(lVar7 + 0x1a90);
  if (puVar18 != (int32_t *)0x0) {
    if (*(int64_t *)(param_1 + 4) != 0) {
      FUN_1801373f0();
    }
    if (*(int64_t *)(param_1 + 6) != 0) {
      FUN_1801373f0();
    }
    if (cStack_c7 != '\0') {
      RenderingSystem_MeshProcessor();
    }
  }
LAB_180137f18:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_60 ^ (uint64_t)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



