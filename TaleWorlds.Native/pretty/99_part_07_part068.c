
// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: RenderingSystemProcessor */
#define RenderingSystemProcessor RenderingSystemProcessor



// 99_part_07_part068.c - 7 个函数

// 函数: void FUN_1804d8972(void)
void FUN_1804d8972(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804d8980(int64_t *param_1,int param_2,int param_3)
void FUN_1804d8980(int64_t *param_1,int param_2,int param_3)

{
  uint uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  for (lVar9 = (int64_t)param_2; lVar9 < param_3; lVar9 = lVar9 + 1) {
    lVar7 = *param_1;
    uVar1 = *(uint *)(*(int64_t *)(lVar7 + 0x420) + lVar9 * 4);
    lVar3 = *(int64_t *)(*(int64_t *)(lVar7 + 0x2c68) + (int64_t)((int)uVar1 >> 10) * 8);
    lVar8 = (int64_t)(int)(*(uint *)(lVar7 + 0x2c88) & uVar1) * 0x68;
    uVar1 = *(uint *)(lVar3 + 8 + lVar8);
    lVar4 = *(int64_t *)(*(int64_t *)(lVar7 + 0x2cf0) + (int64_t)((int)uVar1 >> 10) * 8);
    uVar2 = *(int32_t *)(lVar4 + 8 + (int64_t)(int)(*(uint *)(lVar7 + 0x2d10) & uVar1) * 0xc);
    FUN_1804d7780(lVar7,*(int32_t *)(lVar3 + 0x14 + lVar8),uVar2,lVar4,uVar10);
    if ((*(int64_t *)(system_main_module_state + 0x3d8) != 0) &&
       (*(int *)(*(int64_t *)(system_main_module_state + 0x3d8) + 0x110) == 1)) {
      uVar1 = *(uint *)(lVar3 + 0x14 + lVar8);
      lVar7 = *(int64_t *)(*(int64_t *)(*param_1 + 11000) + (int64_t)((int)uVar1 >> 10) * 8) +
              (int64_t)(int)(*(uint *)(*param_1 + 0x2b18) & uVar1) * 0xd8;
      plVar5 = *(int64_t **)(lVar7 + 8);
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
      FUN_180322890(*(uint64_t *)(system_main_module_state + 0x3d8),*(uint64_t *)(lVar7 + 8),0xffffffff);
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5);
      }
    }
    FUN_1804d7500(*param_1,*(int32_t *)(lVar3 + 0x14 + lVar8),uVar2);
    iVar6 = 0;
    if (*(int64_t *)(lVar3 + 0x28 + lVar8) - *(int64_t *)(lVar3 + 0x20 + lVar8) >> 2 != 0) {
      lVar7 = 0;
      do {
        FUN_1804d7780(*param_1,*(int32_t *)(lVar7 + *(int64_t *)(lVar3 + 0x20 + lVar8)),uVar2);
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 4;
      } while ((uint64_t)(int64_t)iVar6 <
               (uint64_t)
               (*(int64_t *)(lVar3 + 0x28 + lVar8) - *(int64_t *)(lVar3 + 0x20 + lVar8) >> 2));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804d8b40(int64_t *param_1,int param_2,int param_3)
void FUN_1804d8b40(int64_t *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  int iVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  int64_t lVar13;
  int aiStackX_10 [4];
  int64_t lStackX_20;
  int8_t auStack_50 [8];
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  for (lVar13 = (int64_t)param_2; lVar13 < param_3; lVar13 = lVar13 + 1) {
    lVar6 = *param_1;
    uVar4 = *(uint *)(*(int64_t *)(lVar6 + 0x420) + lVar13 * 4);
    lVar7 = *(int64_t *)(*(int64_t *)(lVar6 + 0x2c68) + (int64_t)((int)uVar4 >> 10) * 8);
    lVar12 = (int64_t)(int)(*(uint *)(lVar6 + 0x2c88) & uVar4) * 0x68;
    uVar4 = *(uint *)(lVar7 + 8 + lVar12);
    if ((*(int *)(*(int64_t *)(*(int64_t *)(lVar6 + 0x2cf0) + (int64_t)((int)uVar4 >> 10) * 8) +
                  8 + (int64_t)(int)(*(uint *)(lVar6 + 0x2d10) & uVar4) * 0xc) == 0) ||
       ((*(int64_t *)(system_main_module_state + 0x3d8) != 0 &&
        (*(int *)(*(int64_t *)(system_main_module_state + 0x3d8) + 0x110) == 1)))) {
      lVar8 = *(int64_t *)param_1[1];
      uVar4 = *(uint *)(lVar7 + 0x14 + lVar12);
      uVar4 = *(uint *)(*(int64_t *)
                         (*(int64_t *)(lVar6 + 11000) + (int64_t)((int)uVar4 >> 10) * 8) + 0x18 +
                       (int64_t)(int)(*(uint *)(lVar6 + 0x2b18) & uVar4) * 0xd8);
      puVar3 = (int32_t *)
               (*(int64_t *)(*(int64_t *)(lVar6 + 0x488) + (int64_t)((int)uVar4 >> 10) * 8) +
                0x38 + (int64_t)(int)(*(uint *)(lVar6 + 0x4a8) & uVar4) * 0x48);
      uStack_38 = *puVar3;
      uStack_34 = puVar3[1];
      uStack_30 = puVar3[2];
      uStack_2c = puVar3[3];
      LOCK();
      puVar1 = (uint *)(lVar8 + 0x1060);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if (uVar4 < 0x100) {
        uStack_3c = 0x3f800000;
        puVar3 = (int32_t *)(lVar8 + ((int64_t)(int)uVar4 + 6) * 0x10);
        *puVar3 = uStack_38;
        puVar3[1] = uStack_34;
        puVar3[2] = uStack_30;
        puVar3[3] = 0x3f800000;
        uStack_48 = uStack_38;
        uStack_44 = uStack_34;
        uStack_40 = uStack_30;
      }
      lVar6 = *(int64_t *)(system_main_module_state + 0x3d8);
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x110) == 1)) {
        lVar8 = *param_1;
        uVar4 = *(uint *)(lVar7 + 0x14 + lVar12);
        uVar4 = *(uint *)(*(int64_t *)
                           (*(int64_t *)(lVar8 + 11000) + (int64_t)((int)uVar4 >> 10) * 8) + 0x18
                         + (int64_t)(int)(*(uint *)(lVar8 + 0x2b18) & uVar4) * 0xd8);
        lVar12 = *(int64_t *)(*(int64_t *)(lVar8 + 0x488) + (int64_t)((int)uVar4 >> 10) * 8);
        uVar5 = *(uint *)(lVar8 + 0x4a8);
        lVar7 = lVar6 + 0x908;
        lStackX_20 = lVar7;
        iVar10 = _Mtx_lock(lVar7);
        if (iVar10 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar10);
        }
        puVar2 = (uint64_t *)(lVar6 + 0x8d8);
        aiStackX_10[0] = *(int *)(lVar6 + 0x150);
        puVar11 = puVar2;
        puVar9 = *(uint64_t **)(lVar6 + 0x8e8);
        while (puVar9 != (uint64_t *)0x0) {
          if (*(int *)(puVar9 + 4) < aiStackX_10[0]) {
            puVar9 = (uint64_t *)*puVar9;
          }
          else {
            puVar11 = puVar9;
            puVar9 = (uint64_t *)puVar9[1];
          }
        }
        if ((puVar11 == puVar2) || (aiStackX_10[0] < *(int *)(puVar11 + 4))) {
          puVar11 = (uint64_t *)FUN_18020d730(puVar2,auStack_50,puVar2,puVar11,aiStackX_10);
          puVar11 = (uint64_t *)*puVar11;
        }
        AudioMixer(puVar11 + 5,lVar12 + (int64_t)(int)(uVar5 & uVar4) * 0x48 + 0x38);
        iVar10 = _Mtx_unlock(lVar7);
        if (iVar10 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar10);
        }
      }
    }
  }
  return;
}






// 函数: void FUN_1804d8e00(int64_t param_1,int param_2,int param_3,uint64_t param_4)
void FUN_1804d8e00(int64_t param_1,int param_2,int param_3,uint64_t param_4)

{
  uint uVar1;
  int64_t lVar2;
  char cVar3;
  int *piVar4;
  int64_t lVar5;
  uint uVar6;
  int aiStackX_8 [2];
  
  FUN_1804d5bb0();
  uVar6 = 0;
  if (0 < *(int *)(param_1 + 0x2c3c)) {
    if (*(int *)(param_1 + 0x2c3c) < 1) goto LAB_1804d8f02;
    do {
      piVar4 = (int *)((int64_t)(int)(*(uint *)(param_1 + 0x2c88) & uVar6) * 0x68 +
                      *(int64_t *)
                       (*(int64_t *)(param_1 + 0x2c68) + (int64_t)((int)uVar6 >> 10) * 8));
      if ((*piVar4 != -1) && (piVar4 != (int *)0xfffffffffffffff8)) {
        lVar5 = (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & piVar4[5]) * 0xd8;
        lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 11000) + (int64_t)(piVar4[5] >> 10) * 8);
        if ((*(char *)(lVar2 + 0x10 + lVar5) != '\0') &&
           (uVar1 = *(uint *)(lVar2 + 0x20 + lVar5),
           cVar3 = FUN_18063c5e0(param_4,(int64_t)(int)(*(uint *)(param_1 + 0x500) & uVar1) * 0xc0
                                         + *(int64_t *)
                                            (*(int64_t *)(param_1 + 0x4e0) +
                                            (int64_t)((int)uVar1 >> 10) * 8) + 8), cVar3 != '\0'))
        {
          aiStackX_8[0] = param_3 + param_2 * 6;
          SystemDatabaseProcessor(piVar4 + 0x12,aiStackX_8);
        }
      }
LAB_1804d8f02:
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(param_1 + 0x2c3c));
  }
  return;
}






// 函数: void FUN_1804d8e34(void)
void FUN_1804d8e34(void)

{
  char cVar1;
  int in_EAX;
  int *piVar2;
  uint unaff_EBX;
  int64_t unaff_RDI;
  int unaff_R14D;
  int unaff_R15D;
  int in_stack_00000040;
  
  if (in_EAX <= (int)unaff_EBX) goto LAB_1804d8f02;
  do {
    piVar2 = (int *)((int64_t)(int)(*(uint *)(unaff_RDI + 0x2c88) & unaff_EBX) * 0x68 +
                    *(int64_t *)
                     (*(int64_t *)(unaff_RDI + 0x2c68) + (int64_t)((int)unaff_EBX >> 10) * 8));
    if ((*piVar2 != -1) && (piVar2 != (int *)0xfffffffffffffff8)) {
      if (*(char *)(*(int64_t *)
                     (*(int64_t *)(unaff_RDI + 11000) + (int64_t)(piVar2[5] >> 10) * 8) + 0x10 +
                   (int64_t)(int)(*(uint *)(unaff_RDI + 0x2b18) & piVar2[5]) * 0xd8) != '\0') {
        cVar1 = FUN_18063c5e0();
        if (cVar1 != '\0') {
          in_stack_00000040 = unaff_R15D + unaff_R14D * 6;
          SystemDatabaseProcessor(piVar2 + 0x12,&stack0x00000040);
        }
      }
    }
LAB_1804d8f02:
    unaff_EBX = unaff_EBX + 1;
  } while ((int)unaff_EBX < *(int *)(unaff_RDI + 0x2c3c));
  return;
}






// 函数: void FUN_1804d8f17(void)
void FUN_1804d8f17(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804d8f30(int64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_1804d8f30(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float *pfVar24;
  int64_t lVar25;
  int64_t lVar26;
  int64_t lVar27;
  uint *puVar28;
  int64_t lVar29;
  int iVar30;
  int64_t lVar31;
  int64_t lVar32;
  int64_t lVar33;
  int64_t *plVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  int8_t auStack_2b8 [32];
  uint64_t *puStack_298;
  int iStack_288;
  uint uStack_284;
  int64_t lStack_280;
  int64_t lStack_278;
  int64_t lStack_270;
  uint64_t uStack_268;
  int64_t lStack_260;
  int *piStack_258;
  uint64_t uStack_248;
  int iStack_240;
  int16_t uStack_23c;
  uint64_t uStack_238;
  uint64_t uStack_230;
  int32_t uStack_228;
  int8_t uStack_224;
  int32_t uStack_220;
  uint64_t uStack_21c;
  int16_t uStack_214;
  uint64_t uStack_210;
  int32_t uStack_208;
  uint64_t uStack_200;
  int32_t uStack_1f8;
  int8_t uStack_1f4;
  int64_t *plStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  uint64_t uStack_1a8;
  int iStack_1a0;
  int8_t uStack_19c;
  char cStack_19b;
  uint64_t uStack_198;
  int32_t uStack_190;
  int32_t uStack_18c;
  int32_t uStack_188;
  int8_t uStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  int16_t uStack_174;
  uint64_t uStack_170;
  int32_t uStack_168;
  uint64_t uStack_160;
  int32_t uStack_158;
  int8_t uStack_154;
  int64_t *plStack_140;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  uint64_t uStack_b8;
  
  uStack_b8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2b8;
  uStack_268 = param_3;
  FUN_1804d5bb0();
  uStack_284 = 0;
  if (0 < *(int *)(param_1 + 0x2c3c)) {
    uVar35 = 0;
    if (*(int *)(param_1 + 0x2c3c) < 1) goto LAB_1804d977d;
    do {
      lVar31 = 0;
      piStack_258 = (int *)((int64_t)(int)(*(uint *)(param_1 + 0x2c88) & uStack_284) * 0x68 +
                           *(int64_t *)
                            (*(int64_t *)(param_1 + 0x2c68) + (int64_t)((int)uStack_284 >> 10) * 8
                            ));
      uVar35 = uStack_284;
      if ((*piStack_258 != -1) && ((uint *)(piStack_258 + 2) != (uint *)0x0)) {
        uVar3 = piStack_258[5];
        iVar30 = 0;
        if (*(char *)(*(int64_t *)
                       (*(int64_t *)(param_1 + 0x3f8) + (int64_t)((int)uStack_284 >> 10) * 8) + 8
                     + (int64_t)(int)(*(uint *)(param_1 + 0x418) & uStack_284) * 0xc) != '\0') {
          uVar4 = piStack_258[2];
          iVar30 = *(int *)(*(int64_t *)
                             (*(int64_t *)(param_1 + 0x2cf0) + (int64_t)((int)uVar4 >> 10) * 8) +
                            8 + (int64_t)(int)(*(uint *)(param_1 + 0x2d10) & uVar4) * 0xc);
        }
        plVar34 = (int64_t *)(piStack_258 + 0x12);
        iStack_288 = iVar30;
        if ((*(int64_t *)(piStack_258 + 0x14) - *plVar34 >> 2 != 0) && (uVar3 != 0xffffffff)) {
          lVar29 = (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & uVar3) * 0xd8 +
                   *(int64_t *)(*(int64_t *)(param_1 + 11000) + (int64_t)((int)uVar3 >> 10) * 8);
          uVar35 = *(uint *)(lVar29 + 0x1c);
          if (uVar35 != 0xffffffff) {
            SystemCore_FileSystem(*(uint64_t *)
                           (*(int64_t *)
                             (*(int64_t *)(param_1 + 0x698) + (int64_t)((int)uVar35 >> 10) * 8) +
                            8 + (int64_t)(int)(*(uint *)(param_1 + 0x6b8) & uVar35) * 0x30),
                          *(int64_t *)
                           (*(int64_t *)(param_1 + 0x488) + (int64_t)((int)uVar3 >> 10) * 8) +
                          ((int64_t)(int)(*(uint *)(param_1 + 0x4a8) & uVar3) * 9 + 1) * 8,
                          0xbf800000);
          }
          uStack_248 = 0;
          iStack_240 = -1;
          uStack_23c = 0xff00;
          uVar35 = *(uint *)(lVar29 + 0x2c + (int64_t)iVar30 * 4);
          lVar29 = ((int64_t)iVar30 + 2) * 0x58;
          uStack_238 = 0;
          uStack_230 = 0xffffffffffffffff;
          uStack_228 = 0xffffffff;
          lStack_280 = (int64_t)(int)(*(uint *)(lVar29 + 0x50 + param_1) & uVar35) * 0x68;
          lStack_278 = *(int64_t *)
                        (*(int64_t *)(lVar29 + 0x30 + param_1) + (int64_t)((int)uVar35 >> 10) * 8)
          ;
          uStack_224 = 0xff;
          uStack_220 = 0xffffffff;
          iVar30 = (int)((*(int64_t *)(lStack_278 + 0x30 + lStack_280) -
                         *(int64_t *)(lStack_278 + 0x28 + lStack_280)) / 0x68);
          uStack_21c = 0;
          uStack_214 = 0x400;
          lStack_270 = (int64_t)iVar30;
          uStack_210 = 0;
          uStack_208 = 0;
          uStack_200 = 0;
          uStack_1f8 = 0;
          uStack_1f4 = 0;
          plStack_1e0 = (int64_t *)0x0;
          if (0 < iVar30) {
            do {
              lVar29 = *(int64_t *)(lStack_278 + 0x28 + lStack_280);
              lVar33 = (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & *(uint *)(lVar31 + lVar29)) *
                       0xd8;
              lVar32 = *(int64_t *)
                        (*(int64_t *)(param_1 + 11000) +
                        (int64_t)((int)*(uint *)(lVar31 + lVar29) >> 10) * 8);
              uVar35 = *(uint *)(lVar32 + 0x1c + lVar33);
              lVar25 = (int64_t)(int)(*(uint *)(param_1 + 0x6b8) & uVar35);
              uVar3 = *(uint *)(lVar32 + 0x18 + lVar33);
              lVar26 = (int64_t)(int)(*(uint *)(param_1 + 0x4a8) & uVar3);
              lVar32 = *(int64_t *)
                        (*(int64_t *)(param_1 + 0x698) + (int64_t)((int)uVar35 >> 10) * 8);
              lVar33 = *(int64_t *)
                        (*(int64_t *)(param_1 + 0x488) + (int64_t)((int)uVar3 >> 10) * 8);
              puVar28 = (uint *)((int64_t)*(char *)(lVar31 + 4 + lVar29) * 0x100 +
                                *(int64_t *)(*(int64_t *)(lVar32 + 8 + lVar25 * 0x30) + 0x18));
              do {
                LOCK();
                uVar35 = *puVar28;
                *puVar28 = *puVar28 | 1;
                UNLOCK();
              } while ((uVar35 & 1) != 0);
              uStack_138 = puVar28[1];
              uStack_134 = puVar28[2];
              uStack_130 = puVar28[3];
              uStack_12c = puVar28[4];
              fVar5 = (float)puVar28[5];
              fVar6 = (float)puVar28[6];
              fVar7 = (float)puVar28[7];
              uStack_11c = puVar28[8];
              *puVar28 = 0;
              lStack_260 = lVar32;
              fStack_128 = fVar5;
              fStack_124 = fVar6;
              fStack_120 = fVar7;
              uStack_d8 = uStack_138;
              uStack_d4 = uStack_134;
              uStack_d0 = uStack_130;
              uStack_cc = uStack_12c;
              fStack_c8 = fVar5;
              fStack_c4 = fVar6;
              fStack_c0 = fVar7;
              uStack_bc = uStack_11c;
              SystemSecurityManager(&fStack_1d8,&uStack_138);
              pfVar24 = (float *)(lVar33 + 8 + lVar26 * 0x48);
              fVar8 = *pfVar24;
              fVar9 = pfVar24[1];
              fVar10 = pfVar24[2];
              fVar11 = pfVar24[3];
              pfVar24 = (float *)(lVar33 + 0x18 + lVar26 * 0x48);
              fVar12 = *pfVar24;
              fVar13 = pfVar24[1];
              fVar14 = pfVar24[2];
              fVar15 = pfVar24[3];
              pfVar24 = (float *)(lVar33 + 0x28 + lVar26 * 0x48);
              fVar16 = *pfVar24;
              fVar17 = pfVar24[1];
              fVar18 = pfVar24[2];
              fVar19 = pfVar24[3];
              iStack_240 = iStack_288;
              plVar34 = (int64_t *)(piStack_258 + 0x12);
              fVar47 = fStack_1d4 * fVar12 + fStack_1d8 * fVar8 + fStack_1d0 * fVar16;
              fVar48 = fStack_1d4 * fVar13 + fStack_1d8 * fVar9 + fStack_1d0 * fVar17;
              fVar49 = fStack_1d4 * fVar14 + fStack_1d8 * fVar10 + fStack_1d0 * fVar18;
              fVar50 = fStack_1d4 * fVar15 + fStack_1d8 * fVar11 + fStack_1d0 * fVar19;
              fVar43 = fStack_1c4 * fVar12 + fStack_1c8 * fVar8 + fStack_1c0 * fVar16;
              fVar44 = fStack_1c4 * fVar13 + fStack_1c8 * fVar9 + fStack_1c0 * fVar17;
              fVar45 = fStack_1c4 * fVar14 + fStack_1c8 * fVar10 + fStack_1c0 * fVar18;
              fVar46 = fStack_1c4 * fVar15 + fStack_1c8 * fVar11 + fStack_1c0 * fVar19;
              fVar39 = fStack_1b4 * fVar12 + fStack_1b8 * fVar8 + fStack_1b0 * fVar16;
              fVar40 = fStack_1b4 * fVar13 + fStack_1b8 * fVar9 + fStack_1b0 * fVar17;
              fVar41 = fStack_1b4 * fVar14 + fStack_1b8 * fVar10 + fStack_1b0 * fVar18;
              fVar42 = fStack_1b4 * fVar15 + fStack_1b8 * fVar11 + fStack_1b0 * fVar19;
              pfVar24 = (float *)(lVar33 + 0x38 + lVar26 * 0x48);
              fVar20 = *pfVar24;
              fVar21 = pfVar24[1];
              fVar22 = pfVar24[2];
              fVar23 = pfVar24[3];
              uStack_1f8 = *(int32_t *)(*(int64_t *)(lVar32 + 8 + lVar25 * 0x30) + 0x180);
              uStack_23c = CONCAT11(*(int8_t *)(lVar31 + 5 + lVar29),(int8_t)uStack_23c);
              plStack_1e0 = plVar34;
              pfVar24 = (float *)(**(code **)(**(int64_t **)(lVar31 + 0x10 + lVar29) + 0x158))();
              fVar1 = pfVar24[1];
              fVar2 = *pfVar24;
              fVar36 = pfVar24[2];
              fStack_118 = fVar1 * fVar43 + fVar2 * fVar47 + fVar36 * fVar39;
              fStack_114 = fVar1 * fVar44 + fVar2 * fVar48 + fVar36 * fVar40;
              fStack_110 = fVar1 * fVar45 + fVar2 * fVar49 + fVar36 * fVar41;
              fStack_10c = fVar1 * fVar46 + fVar2 * fVar50 + fVar36 * fVar42;
              fVar1 = pfVar24[5];
              fVar2 = pfVar24[4];
              fVar36 = pfVar24[6];
              fVar37 = pfVar24[9];
              fVar38 = pfVar24[8];
              fStack_108 = fVar1 * fVar43 + fVar2 * fVar47 + fVar36 * fVar39;
              fStack_104 = fVar1 * fVar44 + fVar2 * fVar48 + fVar36 * fVar40;
              fStack_100 = fVar1 * fVar45 + fVar2 * fVar49 + fVar36 * fVar41;
              fStack_fc = fVar1 * fVar46 + fVar2 * fVar50 + fVar36 * fVar42;
              fVar1 = pfVar24[10];
              fVar2 = pfVar24[0xd];
              fVar36 = pfVar24[0xc];
              fStack_f8 = fVar37 * fVar43 + fVar38 * fVar47 + fVar1 * fVar39;
              fStack_f4 = fVar37 * fVar44 + fVar38 * fVar48 + fVar1 * fVar40;
              fStack_f0 = fVar37 * fVar45 + fVar38 * fVar49 + fVar1 * fVar41;
              fStack_ec = fVar37 * fVar46 + fVar38 * fVar50 + fVar1 * fVar42;
              fVar1 = pfVar24[0xe];
              fStack_e8 = fVar2 * fVar43 + fVar36 * fVar47 + fVar1 * fVar39 +
                          fVar5 * fVar8 + fVar6 * fVar12 + fVar7 * fVar16 + fVar20;
              fStack_e4 = fVar2 * fVar44 + fVar36 * fVar48 + fVar1 * fVar40 +
                          fVar5 * fVar9 + fVar6 * fVar13 + fVar7 * fVar17 + fVar21;
              fStack_e0 = fVar2 * fVar45 + fVar36 * fVar49 + fVar1 * fVar41 +
                          fVar5 * fVar10 + fVar6 * fVar14 + fVar7 * fVar18 + fVar22;
              fStack_dc = fVar2 * fVar46 + fVar36 * fVar50 + fVar1 * fVar42 +
                          fVar5 * fVar11 + fVar6 * fVar15 + fVar7 * fVar19 + fVar23;
              if ((((*(int *)(lVar31 + 0x18 + lVar29) != 0) ||
                   (lVar32 = *(int64_t *)(param_2 + 0x28), lVar32 == 0)) ||
                  (fVar1 = *(float *)(lVar31 + 0x5c + lVar29), fVar1 == 3.4028235e+38)) ||
                 (fVar37 = *(float *)(lVar33 + 0x3c + lVar26 * 0x48) - *(float *)(lVar32 + 0x124),
                 fVar38 = *(float *)(lVar33 + 0x38 + lVar26 * 0x48) - *(float *)(lVar32 + 0x120),
                 fVar36 = *(float *)(lVar33 + 0x40 + lVar26 * 0x48) - *(float *)(lVar32 + 0x128),
                 fVar2 = *(float *)(lVar31 + 0x60 + lVar29),
                 (fVar38 * fVar38 + fVar37 * fVar37 + fVar36 * fVar36) - fVar2 * fVar2 <=
                 fVar1 * fVar1)) {
                puStack_298 = &uStack_248;
                SystemHealthMonitor(*(uint64_t *)(lVar31 + 8 + lVar29),param_2,&fStack_118,uStack_268);
              }
              lVar31 = lVar31 + 0x68;
              lStack_270 = lStack_270 + -1;
            } while (lStack_270 != 0);
            lStack_270 = 0;
          }
          lVar31 = 0;
          iVar30 = (int)((*(int64_t *)(lStack_278 + 0x10 + lStack_280) -
                         *(int64_t *)(lStack_278 + 8 + lStack_280)) / 0x68);
          lVar29 = (int64_t)iVar30;
          uVar35 = uStack_284;
          if (0 < iVar30) {
            do {
              lVar33 = *(int64_t *)(lStack_278 + 8 + lStack_280);
              uVar35 = *(uint *)(lVar31 + 0x60 + lVar33);
              lVar26 = (int64_t)(int)(uVar35 & *(uint *)(param_1 + 0x2b18)) * 0xd8;
              lVar32 = *(int64_t *)
                        (*(int64_t *)(param_1 + 11000) + (int64_t)((int)uVar35 >> 10) * 8);
              uVar35 = *(uint *)(lVar32 + 0x1c + lVar26);
              lVar27 = (int64_t)(int)(uVar35 & *(uint *)(param_1 + 0x6b8));
              lVar25 = *(int64_t *)
                        (*(int64_t *)(param_1 + 0x698) + (int64_t)((int)uVar35 >> 10) * 8);
              uVar35 = *(uint *)(lVar32 + 0x18 + lVar26);
              lVar26 = *(int64_t *)(param_2 + 0x28);
              lVar32 = *(int64_t *)
                        (*(int64_t *)(param_1 + 0x488) + (int64_t)((int)uVar35 >> 10) * 8) + 8 +
                       (int64_t)(int)(*(uint *)(param_1 + 0x4a8) & uVar35) * 0x48;
              if (((lVar26 == 0) ||
                  (fVar1 = *(float *)(lVar31 + 0x54 + lVar33), fVar1 == 3.4028235e+38)) ||
                 (fVar37 = *(float *)(lVar32 + 0x34) - *(float *)(lVar26 + 0x124),
                 fVar38 = *(float *)(lVar32 + 0x30) - *(float *)(lVar26 + 0x120),
                 fVar36 = *(float *)(lVar32 + 0x38) - *(float *)(lVar26 + 0x128),
                 fVar2 = *(float *)(lVar31 + 0x58 + lVar33),
                 (fVar38 * fVar38 + fVar37 * fVar37 + fVar36 * fVar36) - fVar2 * fVar2 <=
                 fVar1 * fVar1)) {
                lVar26 = *(int64_t *)(lVar25 + 8 + lVar27 * 0x30);
                uStack_1a8 = 0;
                uStack_178 = 0;
                uStack_174 = 0x400;
                uStack_18c = *(int32_t *)(lVar26 + 0x48);
                uStack_190 = *(int32_t *)(lVar26 + 0x44);
                uStack_184 = *(int8_t *)(lVar26 + 0x20);
                uStack_17c = *(int32_t *)(lVar26 + 0x168);
                uStack_170 = 0;
                uStack_168 = 0;
                uStack_160 = 0;
                uStack_154 = 0;
                uStack_19c = 1;
                lVar25 = *(int64_t *)(lVar25 + 8 + lVar27 * 0x30);
                uStack_180 = *(int32_t *)(lVar25 + 0x170);
                uStack_158 = *(int32_t *)(lVar25 + 0x180);
                iStack_1a0 = iStack_288;
                cStack_19b = *(char *)(lVar31 + 0x50 + lVar33);
                if (cStack_19b == -1) {
                  uStack_198 = 0;
                }
                else {
                  uStack_198 = *(uint64_t *)(lVar31 + 0x40 + lVar33);
                }
                puStack_298 = &uStack_1a8;
                uStack_188 = uStack_190;
                plStack_140 = plVar34;
                SystemHealthMonitor(*(uint64_t *)(lVar31 + 0x48 + lVar33),param_2,lVar32,uStack_268);
              }
              lVar31 = lVar31 + 0x68;
              lVar29 = lVar29 + -1;
              uVar35 = uStack_284;
            } while (lVar29 != 0);
          }
        }
        plVar34[1] = *plVar34;
      }
LAB_1804d977d:
      uStack_284 = uVar35 + 1;
    } while ((int)uStack_284 < *(int *)(param_1 + 0x2c3c));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_b8 ^ (uint64_t)auStack_2b8);
}






