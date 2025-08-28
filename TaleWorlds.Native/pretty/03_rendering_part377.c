
// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator



// 03_rendering_part377.c - 7 个函数

// 函数: void FUN_180472d60(uint64_t *param_1,int8_t *param_2,uint64_t *param_3,int64_t param_4)
void FUN_180472d60(uint64_t *param_1,int8_t *param_2,uint64_t *param_3,int64_t param_4)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  byte *pbVar13;
  byte *pbVar14;
  int8_t auStack_1a8 [32];
  int32_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t auStack_160 [2];
  uint64_t uStack_150;
  uint64_t uStack_148;
  int64_t lStack_140;
  int64_t lStack_138;
  uint64_t *puStack_130;
  uint64_t *puStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  int64_t lStack_e0;
  int64_t lStack_d8;
  uint64_t uStack_d0;
  int8_t *puStack_c8;
  uint64_t *puStack_c0;
  uint uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int64_t lStack_58;
  int64_t lStack_50;
  uint64_t uStack_48;
  
  uStack_d0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1a8;
  lVar11 = 0;
  uStack_188 = 0;
  pbVar14 = (byte *)(param_1[1] + param_4);
  pbVar7 = (byte *)*param_1;
  lVar8 = (int64_t)pbVar14 - (int64_t)pbVar7;
  if (pbVar14 < pbVar7) {
    lVar8 = lVar11;
  }
  lVar10 = lVar11;
  lVar12 = lVar11;
  pbVar13 = pbVar7;
  pbVar6 = pbVar14;
  lVar9 = lVar11;
  if (lVar8 != 0) {
    do {
      lVar9 = lVar12 + 1;
      if (*pbVar13 != 10) {
        lVar9 = lVar12;
      }
      lVar10 = lVar10 + 1;
      lVar12 = lVar9;
      pbVar13 = pbVar13 + 1;
    } while (lVar10 != lVar8);
  }
  do {
    pbVar13 = pbVar6;
    if (pbVar13 == pbVar7) break;
    pbVar6 = pbVar13 + -1;
  } while (pbVar13[-1] != 10);
  lVar8 = (int64_t)pbVar14 - (int64_t)pbVar13;
  if (pbVar14 < pbVar13) {
    lVar8 = lVar11;
  }
  pbVar7 = pbVar13;
  lVar10 = lVar11;
  if (lVar8 != 0) {
    do {
      lVar11 = lVar10 + 1;
      if ((*pbVar7 & 0xc0) == 0x80) {
        lVar11 = lVar10;
      }
      pbVar7 = pbVar7 + 1;
      lVar10 = lVar11;
    } while ((int64_t)pbVar7 - (int64_t)pbVar13 != lVar8);
  }
  uStack_88 = 0;
  uStack_80 = 0xf;
  uStack_98 = uStack_98 & 0xffffffffffffff00;
  uStack_68 = 0;
  uStack_60 = 0xf;
  uStack_78 = uStack_78 & 0xffffff00;
  lStack_58 = 0;
  lStack_50 = 0;
  puStack_c8 = param_2;
  if (&uStack_98 != param_3) {
    SystemPerformanceOptimizer(&uStack_98);
    uStack_98 = *param_3;
    uStack_90 = param_3[1];
    uStack_88 = param_3[2];
    uStack_80 = param_3[3];
    param_3[2] = 0;
    param_3[3] = 0xf;
    *(int8_t *)param_3 = 0;
  }
  lVar8 = strcspn(pbVar13,&system_data_cc18);
  uStack_a8 = 0;
  uStack_a0 = 0xf;
  uStack_b8 = uStack_b8 & 0xffffff00;
  if (pbVar13 != pbVar13 + lVar8) {
    MathCoreCalculator0(&uStack_b8,pbVar13,(int64_t)(pbVar13 + lVar8) - (int64_t)pbVar13);
  }
  uVar3 = uStack_a0;
  uVar2 = uStack_a8;
  SystemPerformanceOptimizer(&uStack_78);
  uVar5 = uStack_80;
  uVar4 = uStack_88;
  uStack_180 = uStack_98;
  uVar1 = uStack_b8;
  uStack_74 = uStack_b4;
  uStack_70 = uStack_b0;
  uStack_6c = uStack_ac;
  uStack_a8 = 0;
  uStack_a0 = 0xf;
  uStack_b8 = uStack_b8 & 0xffffff00;
  lStack_140 = lVar9 + 1;
  lStack_138 = lVar11 + 1;
  uStack_118 = uStack_90;
  uStack_88 = 0;
  uStack_80 = 0xf;
  uStack_98 = uStack_98 & 0xffffffffffffff00;
  uStack_fc = uStack_b4;
  uStack_f8 = uStack_b0;
  uStack_f4 = uStack_ac;
  uStack_68 = 0;
  uStack_60 = 0xf;
  uStack_78 = uVar1 & 0xffffff00;
  puStack_130 = &uStack_120;
  uStack_178 = uStack_90;
  uStack_110 = 0;
  uStack_108 = 0xf;
  uStack_120 = uStack_180 & 0xffffffffffffff00;
  uStack_f0 = 0;
  uStack_e8 = 0xf;
  uStack_100 = uVar1 & 0xffffff00;
  puStack_128 = &uStack_180;
  *param_2 = 1;
  puStack_c0 = (uint64_t *)(param_2 + 8);
  *puStack_c0 = uStack_180;
  *(uint64_t *)(param_2 + 0x10) = uStack_90;
  *(uint64_t *)(param_2 + 0x18) = uVar4;
  *(uint64_t *)(param_2 + 0x20) = uVar5;
  uStack_170 = 0;
  uStack_168 = 0xf;
  uStack_180 = uStack_180 & 0xffffffffffffff00;
  *(uint64_t *)(param_2 + 0x28) = CONCAT44(uStack_b4,uVar1);
  *(uint64_t *)(param_2 + 0x30) = CONCAT44(uStack_ac,uStack_b0);
  *(uint64_t *)(param_2 + 0x38) = uVar2;
  *(uint64_t *)(param_2 + 0x40) = uVar3;
  uStack_150 = 0;
  uStack_148 = 0xf;
  auStack_160[0] = CONCAT44(uStack_b4,uVar1) & 0xffffffffffffff00;
  *(int64_t *)(param_2 + 0x48) = lStack_140;
  *(int64_t *)(param_2 + 0x50) = lStack_138;
  lStack_e0 = lStack_140;
  lStack_d8 = lStack_138;
  lStack_58 = lStack_140;
  lStack_50 = lStack_138;
  SystemPerformanceOptimizer(auStack_160);
  SystemPerformanceOptimizer(&uStack_180);
  uStack_188 = 2;
  SystemPerformanceOptimizer(&uStack_100);
  SystemPerformanceOptimizer(&uStack_120);
  uStack_188 = 1;
  SystemPerformanceOptimizer(&uStack_78);
  SystemPerformanceOptimizer(&uStack_98);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_1a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804730d0(int64_t param_1,ushort *param_2)
void FUN_1804730d0(int64_t param_1,ushort *param_2)

{
  char cVar1;
  ushort uVar2;
  int64_t lVar3;
  ushort uVar4;
  int iVar5;
  int8_t auStack_48 [32];
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int16_t uStack_14;
  int8_t uStack_12;
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
  iVar5 = 0;
  *param_2 = 0;
  uStack_18 = 0x44434241;
  uStack_14 = 0x4645;
  uStack_12 = 0;
  uStack_28 = 0x33323130;
  uStack_24 = 0x37363534;
  uStack_20 = 0x62613938;
  uStack_1c = 0x66656463;
  do {
    cVar1 = **(char **)(param_1 + 8);
    if (cVar1 == '\0') break;
    *(char **)(param_1 + 8) = *(char **)(param_1 + 8) + 1;
    lVar3 = strchr(&uStack_28,(int)cVar1);
    if (lVar3 == 0) break;
    uVar2 = (ushort)(lVar3 - (int64_t)&uStack_28);
    uVar4 = uVar2 - 6;
    if (lVar3 - (int64_t)&uStack_28 < 0x10) {
      uVar4 = uVar2;
    }
    iVar5 = iVar5 + 1;
    *param_2 = uVar4 | *param_2 << 4;
  } while (iVar5 != 4);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_48);
}





// 函数: void FUN_1804731a0(uint param_1,uint64_t *param_2)
void FUN_1804731a0(uint param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  byte *pbVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  byte bStackX_8;
  int16_t uStackX_9;
  byte bStackX_b;
  byte abStackX_c [28];
  uint64_t *puVar5;
  
  uStackX_9 = 0;
  bStackX_b = 0;
  bStackX_8 = (byte)param_1;
  if (param_1 < 0x10000) {
    if (param_1 < 0x800) {
      if (param_1 < 0x80) {
        pbVar2 = (byte *)&uStackX_9;
      }
      else {
        uStackX_9 = bStackX_8 & 0xff3f | 0x80;
        pbVar2 = (byte *)((int64_t)&uStackX_9 + 1);
        bStackX_8 = (byte)(param_1 >> 6) & 0x1f | 0xc0;
      }
    }
    else {
      uStackX_9 = CONCAT11(bStackX_8,(char)(param_1 >> 6)) & 0x3f3f | 0x8080;
      pbVar2 = &bStackX_b;
      bStackX_8 = (byte)(param_1 >> 0xc) & 0xf | 0xe0;
    }
  }
  else {
    bStackX_b = bStackX_8 & 0x3f | 0x80;
    uStackX_9 = CONCAT11((char)(param_1 >> 6),(char)(param_1 >> 0xc)) & 0x3f3f | 0x8080;
    pbVar2 = abStackX_c;
    bStackX_8 = (byte)(param_1 >> 0x12) & 7 | 0xf0;
  }
  uVar1 = param_2[3];
  puVar3 = param_2;
  if (0xf < uVar1) {
    puVar3 = (uint64_t *)*param_2;
  }
  puVar5 = param_2;
  if (0xf < uVar1) {
    puVar5 = (uint64_t *)*param_2;
  }
  lVar4 = (int64_t)puVar5 + param_2[2];
  puVar5 = param_2;
  if (0xf < uVar1) {
    puVar5 = (uint64_t *)*param_2;
  }
  FUN_180477f00(param_2,lVar4 - (int64_t)puVar5,(int64_t)puVar3 + (param_2[2] - lVar4),&bStackX_8,
                (int64_t)pbVar2 - (int64_t)&bStackX_8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804732b0(int8_t *param_1,int64_t param_2,uint64_t *param_3)
void FUN_1804732b0(int8_t *param_1,int64_t param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  char *pcVar2;
  uint64_t uVar3;
  code *pcVar4;
  int64_t lVar5;
  bool bVar6;
  ushort uVar7;
  char cVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int8_t auStack_178 [32];
  int32_t uStack_158;
  ushort auStack_154 [2];
  int8_t *puStack_150;
  uint64_t uStack_148;
  int8_t *puStack_138;
  int8_t uStack_128;
  uint8_t uStack_127;
  uint64_t uStack_118;
  uint64_t uStack_110;
  int8_t uStack_108;
  uint8_t uStack_107;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  int8_t uStack_e8;
  uint8_t uStack_e7;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int8_t uStack_c8;
  uint8_t uStack_c7;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  int8_t uStack_a8;
  uint8_t uStack_a7;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int8_t uStack_88;
  uint8_t uStack_87;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  int8_t uStack_60;
  uint64_t uStack_58;
  int8_t uStack_50;
  uint64_t uStack_48;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  uStack_158 = 0;
  puStack_150 = param_1;
  puStack_138 = param_1;
  if (**(char **)(param_2 + 8) == '\"') {
    *(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1;
    uStack_68 = 0x74726e66622f5c22;
    uStack_60 = 0;
    uStack_58 = 0x90d0a0c082f5c22;
    uStack_50 = 0;
    while( true ) {
      pcVar2 = *(char **)(param_2 + 8);
      cVar8 = *pcVar2;
      if (cVar8 == '\0') break;
      *(char **)(param_2 + 8) = pcVar2 + 1;
      if (cVar8 == '\"') {
        *puStack_150 = 0;
        uStack_158 = 1;
        goto LAB_180473bb3;
      }
      if (cVar8 == '\\') {
        cVar8 = pcVar2[1];
        if (cVar8 == '\0') {
          uStack_118 = 0;
          uStack_110 = 0xf;
          uStack_128 = 0;
          MathCoreCalculator0(&uStack_128,&memory_allocator_3064_ptr,0x16);
          FUN_180472d60(param_2,puStack_150,&uStack_128,0);
          uStack_158 = 1;
          if (uStack_110 < 0x10) goto LAB_180473b9d;
          uVar12 = uStack_110 + 1;
          lVar5 = CONCAT71(uStack_127,uStack_128);
          lVar9 = lVar5;
          if (0xfff < uVar12) {
            uVar12 = uStack_110 + 0x28;
            lVar9 = *(int64_t *)(lVar5 + -8);
            if (0x1f < (lVar5 - *(int64_t *)(lVar5 + -8)) - 8U) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          goto LAB_180473b98;
        }
        *(char **)(param_2 + 8) = pcVar2 + 2;
        lVar9 = strchr(&uStack_68,(int)cVar8);
        if (lVar9 == 0) {
          if (cVar8 != 'u') {
            uStack_f8 = 0;
            uStack_f0 = 0xf;
            uStack_108 = 0;
            MathCoreCalculator0(&uStack_108,&memory_allocator_3200_ptr,0x2a);
            FUN_180472d60(param_2,puStack_150,&uStack_108,0xffffffffffffffff);
            uStack_158 = 1;
            if (0xf < uStack_f0) {
              uVar12 = uStack_f0 + 1;
              lVar5 = CONCAT71(uStack_107,uStack_108);
              lVar9 = lVar5;
              if (0xfff < uVar12) {
                uVar12 = uStack_f0 + 0x28;
                lVar9 = *(int64_t *)(lVar5 + -8);
                if (0x1f < (lVar5 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn(lVar9,uVar12);
                }
              }
LAB_1804738e8:
              uStack_158 = 1;
              free(lVar9,uVar12);
            }
LAB_1804738ed:
            uStack_f8 = 0;
            uStack_f0 = 0xf;
            uStack_108 = 0;
            goto LAB_180473bb3;
          }
          auStack_154[0] = 0;
          cVar8 = FUN_1804730d0(param_2,auStack_154);
          uVar7 = auStack_154[0];
          if (cVar8 == '\0') {
            uStack_f8 = 0;
            uStack_f0 = 0xf;
            uStack_108 = 0;
            MathCoreCalculator0(&uStack_108,&memory_allocator_3088_ptr,0x31);
            FUN_180472d60(param_2,puStack_150,&uStack_108,0xffffffffffffffff);
            uStack_158 = 1;
            if (0xf < uStack_f0) {
              uVar12 = uStack_f0 + 1;
              lVar5 = CONCAT71(uStack_107,uStack_108);
              lVar9 = lVar5;
              if (0xfff < uVar12) {
                uVar12 = uStack_f0 + 0x28;
                lVar9 = *(int64_t *)(lVar5 + -8);
                if (0x1f < (lVar5 - *(int64_t *)(lVar5 + -8)) - 8U) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              goto LAB_1804738e8;
            }
            goto LAB_1804738ed;
          }
          if ((ushort)(auStack_154[0] + 0x2800) < 0x400) {
            auStack_154[0] = 0;
            lVar9 = 0;
            do {
              if ((&memory_allocator_3140_ptr + lVar9)[*(int64_t *)(param_2 + 8) + -0x180a2b134] !=
                  (&memory_allocator_3140_ptr)[lVar9]) {
                bVar6 = false;
                goto LAB_180473445;
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 != 2);
            *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 2;
            bVar6 = true;
LAB_180473445:
            if (!bVar6) {
              uStack_98 = 0;
              uStack_90 = 0xf;
              uStack_a8 = 0;
              MathCoreCalculator0(&uStack_a8,&memory_allocator_3344_ptr,0x4d);
              FUN_180472d60(param_2,puStack_150,&uStack_a8,0);
              uStack_158 = 1;
              if (0xf < uStack_90) {
                uVar12 = uStack_90 + 1;
                lVar5 = CONCAT71(uStack_a7,uStack_a8);
                lVar9 = lVar5;
                if (0xfff < uVar12) {
                  uVar12 = uStack_90 + 0x28;
                  lVar9 = *(int64_t *)(lVar5 + -8);
                  if (0x1f < (lVar5 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                free(lVar9,uVar12);
              }
              uStack_98 = 0;
              uStack_90 = 0xf;
              uStack_a8 = 0;
              goto LAB_180473bb3;
            }
            cVar8 = FUN_1804730d0(param_2,auStack_154);
            if (cVar8 == '\0') {
              uStack_b8 = 0;
              uStack_b0 = 0xf;
              uStack_c8 = 0;
              MathCoreCalculator0(&uStack_c8,&memory_allocator_3424_ptr,0x2a);
              FUN_180472d60(param_2,puStack_150,&uStack_c8,0);
              uStack_158 = 1;
              if (0xf < uStack_b0) {
                uVar12 = uStack_b0 + 1;
                lVar5 = CONCAT71(uStack_c7,uStack_c8);
                lVar9 = lVar5;
                if (0xfff < uVar12) {
                  uVar12 = uStack_b0 + 0x28;
                  lVar9 = *(int64_t *)(lVar5 + -8);
                  if (0x1f < (lVar5 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                free(lVar9,uVar12);
              }
              uStack_b8 = 0;
              uStack_b0 = 0xf;
              uStack_c8 = 0;
              goto LAB_180473bb3;
            }
            if (0x3ff < (ushort)(auStack_154[0] + 0x2400)) {
              uStack_d8 = 0;
              uStack_d0 = 0xf;
              uStack_e8 = 0;
              MathCoreCalculator0(&uStack_e8,&memory_allocator_3472_ptr,0x42);
              FUN_180472d60(param_2,puStack_150,&uStack_e8,0xfffffffffffffffc);
              uStack_158 = 1;
              if (0xf < uStack_d0) {
                uVar12 = uStack_d0 + 1;
                lVar5 = CONCAT71(uStack_e7,uStack_e8);
                lVar9 = lVar5;
                if (0xfff < uVar12) {
                  uVar12 = uStack_d0 + 0x28;
                  lVar9 = *(int64_t *)(lVar5 + -8);
                  if (0x1f < (lVar5 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                free(lVar9,uVar12);
              }
              uStack_d8 = 0;
              uStack_d0 = 0xf;
              uStack_e8 = 0;
              goto LAB_180473bb3;
            }
            FUN_1804731a0((uint)uVar7 * 0x400 + 0xfca10000 | auStack_154[0] - 0xdc00,param_3);
          }
          else {
            if ((ushort)(auStack_154[0] + 0x2400) < 0x400) {
              uStack_78 = 0;
              uStack_70 = 0xf;
              uStack_88 = 0;
              MathCoreCalculator0(&uStack_88,&system_handler1_ptr,0x48);
              FUN_180472d60(param_2,puStack_150,&uStack_88,0xfffffffffffffffc);
              uStack_158 = 1;
              if (0xf < uStack_70) {
                uVar12 = uStack_70 + 1;
                lVar5 = CONCAT71(uStack_87,uStack_88);
                lVar9 = lVar5;
                if (0xfff < uVar12) {
                  uVar12 = uStack_70 + 0x28;
                  lVar9 = *(int64_t *)(lVar5 + -8);
                  if (0x1f < (lVar5 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                free(lVar9,uVar12);
              }
              uStack_78 = 0;
              uStack_70 = 0xf;
              uStack_88 = 0;
              goto LAB_180473bb3;
            }
            FUN_1804731a0(auStack_154[0],param_3);
          }
        }
        else {
          FUN_18009f020(param_3,*(int8_t *)(lVar9 + 0x10));
        }
      }
      else {
        uVar12 = param_3[2];
        uVar3 = param_3[3];
        if (uVar3 <= uVar12) {
          if (uVar12 == 0x7fffffffffffffff) {
            FUN_1800670f0();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar13 = uVar12 + 1 | 0xf;
          if (uVar13 < 0x8000000000000000) {
            if (0x7fffffffffffffff - (uVar3 >> 1) < uVar3) {
              uVar13 = 0x7fffffffffffffff;
            }
            else {
              uVar1 = (uVar3 >> 1) + uVar3;
              if (uVar13 < uVar1) {
                uVar13 = uVar1;
              }
            }
          }
          else {
            uVar13 = 0x7fffffffffffffff;
          }
          uVar11 = SystemCore_SyscallHandler(uVar13 + 1);
          param_3[2] = uVar12 + 1;
          param_3[3] = uVar13;
          if (0xf < uVar3) {
                    // WARNING: Subroutine does not return
            memcpy(uVar11,*param_3,uVar12);
          }
                    // WARNING: Subroutine does not return
          memcpy(uVar11,param_3,uVar12);
        }
        param_3[2] = uVar12 + 1;
        puVar10 = param_3;
        if (0xf < uVar3) {
          puVar10 = (uint64_t *)*param_3;
        }
        *(char *)((int64_t)puVar10 + uVar12) = cVar8;
        *(int8_t *)((int64_t)puVar10 + uVar12 + 1) = 0;
      }
    }
    uStack_118 = 0;
    uStack_110 = 0xf;
    uStack_128 = 0;
    MathCoreCalculator0(&uStack_128,&memory_allocator_3064_ptr,0x16);
    FUN_180472d60(param_2,puStack_150,&uStack_128,0);
    uStack_158 = 1;
    if (uStack_110 < 0x10) goto LAB_180473b9d;
    uVar12 = uStack_110 + 1;
    lVar5 = CONCAT71(uStack_127,uStack_128);
    lVar9 = lVar5;
    if (0xfff < uVar12) {
      uVar12 = uStack_110 + 0x28;
      lVar9 = *(int64_t *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar9,uVar12);
      }
    }
  }
  else {
    uStack_118 = 0;
    uStack_110 = 0xf;
    uStack_128 = 0;
    MathCoreCalculator0(&uStack_128,&memory_allocator_3168_ptr,0xc);
    FUN_180472d60(param_2,param_1,&uStack_128,0);
    uStack_158 = 1;
    if (uStack_110 < 0x10) goto LAB_180473b9d;
    uVar12 = uStack_110 + 1;
    lVar5 = CONCAT71(uStack_127,uStack_128);
    lVar9 = lVar5;
    if (0xfff < uVar12) {
      uVar12 = uStack_110 + 0x28;
      lVar9 = *(int64_t *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar9,uVar12);
      }
    }
  }
LAB_180473b98:
  uStack_158 = 1;
  free(lVar9,uVar12);
LAB_180473b9d:
  uStack_118 = 0;
  uStack_110 = 0xf;
  uStack_128 = 0;
LAB_180473bb3:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180473be0(char *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180473be0(char *param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int8_t auStack_b8 [32];
  int32_t uStack_98;
  int8_t auStack_90 [8];
  int64_t *plStack_88;
  uint64_t uStack_80;
  char *pcStack_78;
  uint64_t *puStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int8_t uStack_40;
  uint8_t uStack_3f;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  
  uStack_80 = 0xfffffffffffffffe;
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  uStack_98 = 0;
  uStack_30 = 0;
  uStack_28 = 0xf;
  uStack_40 = 0;
  pcStack_78 = param_1;
  FUN_1804732b0(param_1,0,&uStack_40);
  uStack_98 = 1;
  if (*param_1 == '\0') {
    puStack_68 = &uStack_60;
    uStack_60 = CONCAT71(uStack_3f,uStack_40);
    uStack_58 = uStack_38;
    uStack_50 = uStack_30;
    uStack_48 = uStack_28;
    uStack_30 = 0;
    uStack_28 = 0xf;
    uStack_40 = 0;
    FUN_180472240(auStack_90,&uStack_60);
    FUN_180473d60(param_3,auStack_90);
    if (plStack_88 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plStack_88 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_88)(plStack_88);
        LOCK();
        piVar2 = (int *)((int64_t)plStack_88 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_88 + 8))(plStack_88);
        }
      }
    }
  }
  if (0xf < uStack_28) {
    uVar6 = uStack_28 + 1;
    lVar4 = CONCAT71(uStack_3f,uStack_40);
    lVar5 = lVar4;
    if (0xfff < uVar6) {
      uVar6 = uStack_28 + 0x28;
      lVar5 = *(int64_t *)(lVar4 + -8);
      if (0x1f < (lVar4 - lVar5) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar5,uVar6);
  }
  uStack_30 = 0;
  uStack_28 = 0xf;
  uStack_40 = 0;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_20 ^ (uint64_t)auStack_b8);
}



uint64_t * FUN_180473d60(uint64_t *param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = uVar4;
  plVar6 = (int64_t *)param_1[1];
  param_1[1] = uVar5;
  if (plVar6 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((int64_t)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180473e00(int8_t *param_1,int64_t param_2,uint64_t param_3)
void FUN_180473e00(int8_t *param_1,int64_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int8_t auStack_98 [32];
  int32_t uStack_78;
  uint64_t uStack_70;
  int64_t *plStack_68;
  uint64_t uStack_60;
  int8_t *puStack_58;
  int8_t uStack_48;
  uint8_t uStack_47;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  lVar6 = 0;
  uStack_78 = 0;
  do {
    puStack_58 = param_1;
    if ((&processed_var_7160_ptr + lVar6)[*(int64_t *)(param_2 + 8) + -0x180a028d8] !=
        (&processed_var_7160_ptr)[lVar6]) {
      uStack_38 = 0;
      uStack_30 = 0xf;
      uStack_48 = 0;
      MathCoreCalculator0(&uStack_48,&memory_allocator_3248_ptr,0x14);
      FUN_180472d60(param_2,param_1,&uStack_48,0);
      uStack_78 = 1;
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        lVar4 = CONCAT71(uStack_47,uStack_48);
        lVar6 = lVar4;
        if (0xfff < uVar7) {
          uVar7 = uStack_30 + 0x28;
          lVar6 = *(int64_t *)(lVar4 + -8);
          if (0x1f < (lVar4 - lVar6) - 8U) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        free(lVar6,uVar7);
      }
      uStack_38 = 0;
      uStack_30 = 0xf;
      uStack_48 = 0;
      goto LAB_180473fb2;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  if (render_system_memory != (int64_t *)0x0) {
    LOCK();
    *(int *)(render_system_memory + 1) = (int)render_system_memory[1] + 1;
    UNLOCK();
  }
  uStack_70 = render_system_memory;
  plStack_68 = render_system_memory;
  FUN_180473d60(param_3,&uStack_70);
  plVar5 = plStack_68;
  if (plStack_68 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plStack_68 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_68)(plStack_68);
      LOCK();
      piVar2 = (int *)((int64_t)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_68 + 8))();
      }
    }
  }
  *param_1 = 0;
  uStack_78 = 1;
LAB_180473fb2:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180473fd0(int8_t *param_1,int64_t param_2,uint64_t param_3)
void FUN_180473fd0(int8_t *param_1,int64_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int8_t auStack_a8 [32];
  int32_t uStack_88;
  uint64_t uStack_80;
  int64_t *plStack_78;
  uint64_t uStack_70;
  int64_t *plStack_68;
  uint64_t uStack_60;
  int8_t *puStack_58;
  int8_t uStack_48;
  uint8_t uStack_47;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  lVar6 = 0;
  uStack_88 = 0;
  lVar5 = *(int64_t *)(param_2 + 8);
  lVar8 = lVar6;
  do {
    puStack_58 = param_1;
    if ((&rendering_buffer_2328_ptr + lVar8)[lVar5 + -0x180a06418] != (&rendering_buffer_2328_ptr)[lVar8]) {
      goto LAB_1804740f0;
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
  *(int64_t *)(param_2 + 8) = lVar5 + 4;
  if (render_system_memory != (int64_t *)0x0) {
    LOCK();
    *(int *)(render_system_memory + 1) = (int)render_system_memory[1] + 1;
    UNLOCK();
  }
  uStack_80 = render_system_memory;
  plStack_78 = render_system_memory;
  FUN_180473d60(param_3,&uStack_80);
  plVar4 = plStack_78;
  if (plStack_78 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plStack_78 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_78)(plStack_78);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_78 + 8))();
      }
    }
  }
  *param_1 = 0;
  uStack_88 = 1;
  goto LAB_18047423d;
  while (lVar6 = lVar6 + 1, lVar6 != 5) {
LAB_1804740f0:
    if ((&rendering_buffer_2336_ptr + lVar6)[lVar5 + -0x180a06420] != (&rendering_buffer_2336_ptr)[lVar6]) {
      uStack_38 = 0;
      uStack_30 = 0xf;
      uStack_48 = 0;
      MathCoreCalculator0(&uStack_48,&memory_allocator_3248_ptr,0x14);
      FUN_180472d60(param_2,param_1,&uStack_48,0);
      uStack_88 = 1;
      if (0xf < uStack_30) {
        uVar7 = uStack_30 + 1;
        lVar8 = CONCAT71(uStack_47,uStack_48);
        lVar5 = lVar8;
        if (0xfff < uVar7) {
          uVar7 = uStack_30 + 0x28;
          lVar5 = *(int64_t *)(lVar8 + -8);
          if (0x1f < (lVar8 - lVar5) - 8U) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        free(lVar5,uVar7);
      }
      uStack_38 = 0;
      uStack_30 = 0xf;
      uStack_48 = 0;
      goto LAB_18047423d;
    }
  }
  *(int64_t *)(param_2 + 8) = lVar5 + 5;
  if (render_system_memory != (int64_t *)0x0) {
    LOCK();
    *(int *)(render_system_memory + 1) = (int)render_system_memory[1] + 1;
    UNLOCK();
  }
  uStack_70 = render_system_memory;
  plStack_68 = render_system_memory;
  FUN_180473d60(param_3,&uStack_70);
  plVar4 = plStack_68;
  if (plStack_68 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plStack_68 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_68)(plStack_68);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_68 + 8))();
      }
    }
  }
  *param_1 = 0;
  uStack_88 = 1;
LAB_18047423d:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



