
// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: RenderingBufferHandler */
#define RenderingBufferHandler RenderingBufferHandler



// 03_rendering_part504.c - 18 个函数

// 函数: void FUN_180536190(int64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180536190(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  char cVar1;
  bool bVar2;
  int8_t auStack_1b8 [32];
  code *pcStack_198;
  char cStack_188;
  uint uStack_184;
  int aiStack_180 [2];
  int8_t auStack_178 [4];
  int8_t auStack_174 [4];
  int8_t auStack_170 [8];
  int iStack_168;
  int32_t uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  int32_t uStack_158;
  int32_t uStack_154;
  uint64_t uStack_150;
  uint64_t uStack_148;
  int32_t uStack_140;
  int32_t uStack_138;
  uint uStack_134;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  int32_t uStack_fc;
  int64_t lStack_f8;
  int8_t auStack_e8 [192];
  int32_t uStack_28;
  uint64_t uStack_18;
  
  uStack_130 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1b8;
  if (*param_1 != 0) {
    pcStack_198 = SystemCore_MemoryManager;
    DataStructureManager(auStack_e8,0x30,4,FUN_1801c2890);
    uStack_28 = 0;
    cVar1 = SystemSynchronizationProcessor(param_3,aiStack_180,&system_data_bcc0);
    if (cVar1 != '\0') {
      cVar1 = RenderingBufferHandler0(param_3,auStack_178,&memory_allocator_3264_ptr);
      if (cVar1 != '\0') {
        cVar1 = RenderingBufferHandler0(param_3,auStack_174,&memory_allocator_3264_ptr);
        if (cVar1 != '\0') {
          cVar1 = RenderingBufferHandler0(param_3,auStack_170,&memory_allocator_3280_ptr);
          if (cVar1 != '\0') {
            uStack_184 = (uint)(cStack_188 != '\0');
            cVar1 = SystemSynchronizationProcessor(param_3,&uStack_184,&system_param1_ptr);
            bVar2 = uStack_184 != 0;
            if (cVar1 != '\0') {
              cVar1 = FUN_1805aeb50(param_3,auStack_e8);
              if (cVar1 != '\0') {
                iStack_168 = aiStack_180[0];
                uStack_164 = (int32_t)_auStack_178;
                uStack_160 = (int32_t)((uint64_t)_auStack_178 >> 0x20);
                uStack_15c = auStack_170._0_4_;
                uStack_158 = auStack_170._4_4_;
                uStack_150 = 0;
                uStack_148 = 0;
                uStack_140 = 0;
                uStack_138 = 0;
                uStack_154 = CONCAT13(bVar2,1);
                uStack_128 = CONCAT44(uStack_164,aiStack_180[0]);
                uStack_120 = CONCAT44(uStack_15c,uStack_160);
                uStack_118 = uStack_158;
                uStack_114 = uStack_154;
                uStack_110 = 0;
                uStack_10c = 0;
                uStack_108 = 0;
                uStack_104 = 0;
                uStack_100 = 0;
                uStack_fc = 0x3f800000;
                lStack_f8 = (uint64_t)uStack_134 << 0x20;
                if (-1 < aiStack_180[0]) {
                  FUN_180545140(&system_data_6110,&uStack_128,auStack_e8,0);
                }
              }
            }
          }
        }
      }
    }
    SystemDataValidator(auStack_e8,0x30,4,SystemCore_MemoryManager);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_1b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180536390(int64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180536390(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  int8_t auStack_128 [32];
  code *pcStack_108;
  int iStack_f8;
  int16_t auStack_f4 [2];
  uint64_t uStack_f0;
  int8_t auStack_e8 [192];
  int32_t uStack_28;
  uint64_t uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    pcStack_108 = SystemCore_MemoryManager;
    DataStructureManager(auStack_e8,0x30,4,FUN_1801c2890);
    uStack_28 = 0;
    cVar2 = SystemSynchronizationProcessor(param_3,&iStack_f8,&memory_allocator_3424_ptr);
    if (cVar2 != '\0') {
      cVar2 = SystemSynchronizationProcessor(param_3,auStack_f4,&system_data_bcd0);
      if (cVar2 != '\0') {
        cVar2 = FUN_1805aeb50(param_3,auStack_e8);
        if (cVar2 != '\0') {
          if (((-1 < iStack_f8) && (iStack_f8 < *(int *)(lVar1 + 0x52ed94))) &&
             (-1 < *(short *)(lVar1 + 0x52dda0 + (int64_t)iStack_f8 * 2))) {
            lVar3 = lVar1 + 0x30a0 + (int64_t)iStack_f8 * 0xa60;
            lVar1 = *(int64_t *)(lVar3 + 0x6d8);
            if ((lVar1 != 0) && (*(char *)(lVar1 + 0x8be) != '\0')) {
              FUN_180508510(lVar3,auStack_f4[0],0,auStack_e8);
            }
          }
        }
      }
    }
    SystemDataValidator(auStack_e8,0x30,4,SystemCore_MemoryManager);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_128);
}





// 函数: void FUN_1805364e0(int64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_1805364e0(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  float fStack_18;
  float fStack_14;
  float afStack_10 [2];
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    cVar3 = RenderingBufferHandler0(param_3,&fStack_18,&rendering_buffer_2992_ptr);
    if (((cVar3 == '\0') ||
        (cVar3 = RenderingBufferHandler0(param_3,&fStack_14,&rendering_buffer_2992_ptr), cVar3 == '\0')) ||
       (cVar3 = RenderingBufferHandler0(param_3,afStack_10,&memory_allocator_3008_ptr), cVar3 == '\0')) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    FUN_1804fe350(&processed_var_4696_ptr,cVar3,&processed_var_4752_ptr,lVar2 + 0x98d930);
    if (cVar3 != '\0') {
      iVar1 = *(int *)(lVar2 + 0x98d930);
      if (((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x52ed94))) &&
         (-1 < *(short *)(lVar2 + 0x52dda0 + (int64_t)iVar1 * 2))) {
        lVar4 = (int64_t)iVar1 * 0xa60;
        *(int32_t *)(lVar4 + 0x3624 + lVar2) = 0xbf19999a;
        *(float *)(lVar4 + 0x3614 + lVar2) = fStack_18 + *(float *)(lVar4 + 0x3614 + lVar2);
        *(float *)(lVar4 + 0x3618 + lVar2) = fStack_14 + *(float *)(lVar4 + 0x3618 + lVar2);
        *(float *)(lVar4 + 0x361c + lVar2) = afStack_10[0] + *(float *)(lVar4 + 0x361c + lVar2);
      }
    }
  }
  return;
}





// 函数: void FUN_180536500(int32_t param_1)
void FUN_180536500(int32_t param_1)

{
  int iVar1;
  char cVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  float fStackX_20;
  float fStackX_24;
  float in_stack_00000028;
  
  cVar2 = RenderingBufferHandler0(param_1,&fStackX_20);
  if (cVar2 != '\0') {
    cVar2 = RenderingBufferHandler0(extraout_XMM0_Da,&fStackX_24,&rendering_buffer_2992_ptr);
    if (cVar2 != '\0') {
      cVar2 = RenderingBufferHandler0(extraout_XMM0_Da_00,&stack0x00000028,&memory_allocator_3008_ptr);
      if (cVar2 != '\0') {
        cVar2 = '\x01';
        goto LAB_18053654e;
      }
    }
  }
  cVar2 = '\0';
LAB_18053654e:
  FUN_1804fe350(&processed_var_4696_ptr,cVar2,&processed_var_4752_ptr,unaff_RBX + 0x98d930);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(unaff_RBX + 0x98d930);
    if (((-1 < iVar1) && (iVar1 < *(int *)(unaff_RBX + 0x52ed94))) &&
       (-1 < *(short *)(unaff_RBX + 0x52dda0 + (int64_t)iVar1 * 2))) {
      lVar3 = (int64_t)iVar1 * 0xa60;
      *(int32_t *)(lVar3 + 0x3624 + unaff_RBX) = 0xbf19999a;
      *(float *)(lVar3 + 0x3614 + unaff_RBX) = fStackX_20 + *(float *)(lVar3 + 0x3614 + unaff_RBX);
      *(float *)(lVar3 + 0x3618 + unaff_RBX) = fStackX_24 + *(float *)(lVar3 + 0x3618 + unaff_RBX);
      *(float *)(lVar3 + 0x361c + unaff_RBX) =
           in_stack_00000028 + *(float *)(lVar3 + 0x361c + unaff_RBX);
    }
  }
  return;
}





// 函数: void FUN_1805365f1(void)
void FUN_1805365f1(void)

{
  return;
}





// 函数: void FUN_180536600(int64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180536600(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  float afStackX_8 [2];
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    cVar3 = RenderingBufferHandler0(param_3,afStackX_8,&rendering_buffer_2976_ptr);
    FUN_1804feec0();
    if (cVar3 != '\0') {
      iVar1 = *(int *)(lVar2 + 0x98d930);
      if ((((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x52ed94))) &&
          (-1 < *(short *)(lVar2 + 0x52dda0 + (int64_t)iVar1 * 2))) && (0.01 < afStackX_8[0])) {
        FUN_1805a0af0(lVar2 + 0x30c8 + (int64_t)iVar1 * 0xa60,afStackX_8[0],1);
      }
    }
  }
  return;
}





// 函数: void FUN_180536615(void)
void FUN_180536615(void)

{
  int iVar1;
  char cVar2;
  int64_t unaff_RDI;
  float in_stack_00000040;
  
  cVar2 = RenderingBufferHandler0();
  FUN_1804feec0();
  if (cVar2 != '\0') {
    iVar1 = *(int *)(unaff_RDI + 0x98d930);
    if ((((-1 < iVar1) && (iVar1 < *(int *)(unaff_RDI + 0x52ed94))) &&
        (-1 < *(short *)(unaff_RDI + 0x52dda0 + (int64_t)iVar1 * 2))) && (0.01 < in_stack_00000040)
       ) {
      FUN_1805a0af0(unaff_RDI + 0x30c8 + (int64_t)iVar1 * 0xa60,in_stack_00000040,1);
    }
  }
  return;
}





// 函数: void FUN_180536658(void)
void FUN_180536658(void)

{
  int iVar1;
  int *unaff_RSI;
  int64_t unaff_RDI;
  float in_stack_00000040;
  
  iVar1 = *unaff_RSI;
  if ((((-1 < iVar1) && (iVar1 < *(int *)(unaff_RDI + 0x52ed94))) &&
      (-1 < *(short *)(unaff_RDI + 0x52dda0 + (int64_t)iVar1 * 2))) && (0.01 < in_stack_00000040))
  {
    FUN_1805a0af0(unaff_RDI + 0x30c8 + (int64_t)iVar1 * 0xa60,in_stack_00000040,1);
  }
  return;
}





// 函数: void FUN_1805366a2(void)
void FUN_1805366a2(void)

{
  return;
}





// 函数: void FUN_1805366b0(int64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_1805366b0(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  int aiStackX_8 [2];
  int aiStackX_20 [2];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  cVar3 = SystemSynchronizationProcessor(param_3,aiStackX_20,&memory_allocator_3424_ptr);
  if (cVar3 != '\0') {
    aiStackX_8[0] = (int)(char)aiStackX_8[0];
    cVar3 = SystemSynchronizationProcessor(param_3,aiStackX_8,&memory_allocator_3040_ptr);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_180536711;
    }
  }
  bVar2 = false;
LAB_180536711:
  FUN_1804ff150();
  if ((((bVar2) && (-1 < aiStackX_20[0])) && (aiStackX_20[0] < *(int *)(lVar1 + 0x52ed94))) &&
     (-1 < *(short *)(lVar1 + 0x52dda0 + (int64_t)aiStackX_20[0] * 2))) {
    FUN_180525ac0(lVar1 + 0x30a0 + (int64_t)aiStackX_20[0] * 0xa60,(char)aiStackX_8[0]);
  }
  return;
}





// 函数: void FUN_180536790(int64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180536790(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  char cVar2;
  uint auStackX_8 [2];
  int aiStackX_20 [2];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  cVar2 = SystemSynchronizationProcessor(param_3,aiStackX_20,&memory_allocator_3424_ptr);
  if (cVar2 != '\0') {
    auStackX_8[0] = (uint)((char)auStackX_8[0] != '\0');
    cVar2 = SystemSynchronizationProcessor(param_3,auStackX_8,&system_param1_ptr);
    auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,auStackX_8[0] != 0);
    if (cVar2 != '\0') {
      cVar2 = '\x01';
      goto LAB_1805367f6;
    }
  }
  cVar2 = '\0';
LAB_1805367f6:
  FUN_1804fe790(&processed_var_4840_ptr,cVar2,&processed_var_4904_ptr,aiStackX_20,auStackX_8);
  if ((((cVar2 != '\0') && (-1 < aiStackX_20[0])) && (aiStackX_20[0] < *(int *)(lVar1 + 0x52ed94)))
     && (-1 < *(short *)(lVar1 + 0x52dda0 + (int64_t)aiStackX_20[0] * 2))) {
    FUN_180508bd0(lVar1 + 0x30a0 + (int64_t)aiStackX_20[0] * 0xa60,(char)auStackX_8[0]);
  }
  return;
}





// 函数: void FUN_180536870(int64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180536870(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  uint uVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  uint auStackX_8 [2];
  int aiStackX_20 [2];
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  cVar3 = SystemSynchronizationProcessor(param_3,aiStackX_20,&memory_allocator_3424_ptr);
  if (cVar3 != '\0') {
    auStackX_8[0] = (uint)((char)auStackX_8[0] != '\0');
    cVar3 = SystemSynchronizationProcessor(param_3,auStackX_8,&system_param1_ptr);
    auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,auStackX_8[0] != 0);
    if (cVar3 != '\0') {
      cVar3 = '\x01';
      goto LAB_1805368d6;
    }
  }
  cVar3 = '\0';
LAB_1805368d6:
  FUN_1804fe790(&processed_var_4944_ptr,cVar3,&processed_var_5016_ptr,aiStackX_20,auStackX_8);
  if ((((cVar3 != '\0') && (-1 < aiStackX_20[0])) && (aiStackX_20[0] < *(int *)(lVar2 + 0x74eb8c)))
     && (-1 < *(short *)(lVar2 + 0x74db98 + (int64_t)aiStackX_20[0] * 2))) {
    lVar4 = (int64_t)aiStackX_20[0] * 0x240;
    uVar1 = *(uint *)(lVar4 + 0x62eda0 + lVar2);
    if ((char)auStackX_8[0] != '\0') {
      *(uint *)(lVar4 + 0x62eda0 + lVar2) = uVar1 | 0x80;
      return;
    }
    *(uint *)(lVar4 + 0x62eda0 + lVar2) = uVar1 & 0xffffff7f;
  }
  return;
}





// 函数: void FUN_180536960(int64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180536960(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  char cVar2;
  int32_t auStackX_8 [8];
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    cVar2 = SystemSynchronizationProcessor(param_3,auStackX_8,&memory_allocator_3488_ptr);
    if (cVar2 != '\0') {
      *(int32_t *)(lVar1 + 0x87b758) = auStackX_8[0];
      *(int32_t *)(lVar1 + 0x87b754) = auStackX_8[0];
    }
  }
  return;
}





// 函数: void FUN_1805369a0(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1805369a0(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  plVar4 = (int64_t *)(param_1 + 8);
  lVar8 = 5;
  do {
    *(int32_t *)(plVar4 + 3) = 0xffffffff;
    plVar4[0x18] = plVar4[0x17];
    *(int16_t *)((int64_t)plVar4 + -0xe) = 0;
    plVar4[0x14] = 0;
    *(uint64_t *)((int64_t)plVar4 + 0x34) = 0;
    *(uint64_t *)((int64_t)plVar4 + 0x3c) = 0;
    *(uint64_t *)((int64_t)plVar4 + 0x44) = 0;
    *(int32_t *)(plVar4 + 6) = 0x3f800000;
    plVar1 = (int64_t *)plVar4[4];
    plVar4[4] = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar1 = (int64_t *)plVar4[5];
    if (plVar1 != (int64_t *)0x0) {
      if (plVar1[0x11] != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      if (*plVar1 == 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(plVar1);
      }
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    plVar4[5] = 0;
    plVar4[0x1c] = 0;
    *(int16_t *)(plVar4 + -2) = 0;
    lVar3 = plVar4[-3];
    if (lVar3 != 0) {
      FUN_18058f420(lVar3);
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar3);
    }
    plVar4[-3] = 0;
    lVar3 = plVar4[-1];
    uVar6 = 0;
    uVar7 = 0;
    if (*plVar4 - lVar3 >> 3 != 0) {
      do {
        lVar2 = *(int64_t *)(uVar7 + lVar3);
        if (lVar2 != 0) {
          FUN_18058f420(lVar2,lVar3,param_3,param_4,uVar9);
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager(lVar2);
        }
        *(uint64_t *)(uVar7 + plVar4[-1]) = 0;
        uVar5 = (int)uVar6 + 1;
        lVar3 = plVar4[-1];
        uVar6 = (uint64_t)uVar5;
        uVar7 = uVar7 + 8;
      } while ((uint64_t)(int64_t)(int)uVar5 < (uint64_t)(*plVar4 - lVar3 >> 3));
    }
    *plVar4 = lVar3;
    *(int32_t *)(plVar4 + 0x1b) = 0;
    *(int8_t *)((int64_t)plVar4 + 0xb4) = 0;
    *(int32_t *)((int64_t)plVar4 + 0x1c) = 0xffffffff;
    *(uint64_t *)((int64_t)plVar4 + 0xac) = 0xffffffffffffffff;
    *(int32_t *)(plVar4 + 0x15) = 0xffffffff;
    *(uint64_t *)((int64_t)plVar4 + 0x4c) = 0x3f800000;
    *(uint64_t *)((int64_t)plVar4 + 0x54) = 0;
    *(uint64_t *)((int64_t)plVar4 + 0x5c) = 0x3f80000000000000;
    *(uint64_t *)((int64_t)plVar4 + 100) = 0;
    *(int32_t *)((int64_t)plVar4 + 0x6c) = 0;
    *(int32_t *)(plVar4 + 0xe) = 0;
    *(int32_t *)((int64_t)plVar4 + 0x74) = 0x3f800000;
    *(int32_t *)(plVar4 + 0xf) = 0;
    *(int32_t *)((int64_t)plVar4 + 0x7c) = 0;
    *(int32_t *)(plVar4 + 0x10) = 0;
    *(int32_t *)((int64_t)plVar4 + 0x84) = 0;
    *(int32_t *)(plVar4 + 0x11) = 0x3f800000;
    plVar4 = plVar4 + 0x3f;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  *(uint64_t *)(param_1 + 0x278) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x27a) = 0;
  *(uint64_t *)(param_1 + 0x27c) = 0;
  *(uint64_t *)(param_1 + 0x27e) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x280) = 0xffffffffffffffff;
  param_1[0x288] = 0xffffffff;
  *param_1 = 0xffffffff;
  *(uint64_t *)(param_1 + 0x286) = 0;
  *(uint64_t *)(param_1 + 0x282) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x284) = 0xffffffffffffffff;
  param_1[0x289] = 0xffffff;
  *(int16_t *)(param_1 + 0x28a) = 0x101;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180536bf0(int *param_1,int param_2,int param_3,int param_4)
void FUN_180536bf0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  param_1[0x282] = param_2;
  param_1[0x283] = param_3;
  param_1[0x284] = param_4;
  if (*(int *)((int64_t)*param_1 * 0xa60 + 0x30b8 + *(int64_t *)(param_1 + 0x286)) != 0) {
    iVar1 = *(int *)((int64_t)*param_1 * 0xa60 + 0x30b8 + *(int64_t *)(param_1 + 0x286));
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar1);
    }
    (**(code **)(render_system_data_config + 0xb0))
              (iVar1,param_3,param_4,*(code **)(render_system_data_config + 0xb0),1,uVar2);
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180536cd0(int *param_1)
void FUN_180536cd0(int *param_1)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  lVar4 = (int64_t)*param_1 * 0xa60 + *(int64_t *)(param_1 + 0x286);
  FUN_180536e20(param_1,(int)*(char *)((int64_t)param_1 + 0xa25),
                (int)*(char *)((int64_t)param_1 + 0xa26),(char)param_1[0x28a],
                *(int8_t *)((int64_t)param_1 + 0xa29));
  cVar1 = *(char *)((int64_t)param_1 + 0xa26);
  if ((((-1 < cVar1) &&
       (*(char *)((int64_t)
                  *(int *)((int64_t)param_1[(int64_t)cVar1 * 0x7e + 0x3e] * 0xa0 + 100 +
                          *(int64_t *)(param_1 + (int64_t)cVar1 * 0x7e + 0x36)) * 0x170 + 0x134 +
                 render_system_config) != '\0')) && ((*(uint *)(lVar4 + 0x360c) & 0x800) != 0)) &&
     ((lVar3 = *(int64_t *)(lVar4 + 0x3630), lVar3 != 0 && (*(char *)(lVar3 + 0x34bc) != '\0')))) {
    *(int8_t *)(lVar3 + 0x34bc) = 0;
  }
  *(int32_t *)((int64_t)param_1 + 0xa25) = 0x100ffff;
  *(int8_t *)((int64_t)param_1 + 0xa29) = 1;
  lVar3 = render_system_data_config;
  iVar2 = *(int *)(lVar4 + 0x30b8);
  if ((iVar2 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))(iVar2);
  }
  (**(code **)(lVar3 + 0xd0))(iVar2);
  if ((iVar2 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))(iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180536e20(int *param_1,int param_2,int param_3,uint64_t param_4,char param_5)
void FUN_180536e20(int *param_1,int param_2,int param_3,uint64_t param_4,char param_5)

{
  short sVar1;
  int iVar2;
  uint64_t uVar3;
  char cVar4;
  int64_t lVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int64_t lVar12;
  int aiStackX_10 [2];
  int64_t lStackX_20;
  uint64_t in_stack_ffffffffffffffc8;
  uint64_t uVar13;
  
  lVar8 = (int64_t)param_3;
  lVar12 = (int64_t)param_2;
  uVar13 = in_stack_ffffffffffffffc8 & 0xffffffff00000000;
  iVar2 = param_1[lVar12 + 0x278];
  lVar7 = (int64_t)iVar2;
  if (iVar2 != param_3) {
    if (((*(int64_t *)(param_1 + 0x286) != 0) && (-1 < iVar2)) && (0 < param_1[lVar7 * 0x7e + 0xe])
       ) {
      if (((*(uint64_t *)
             (*(int64_t *)(param_1 + lVar7 * 0x7e + 0x36) + 0x50 +
             (int64_t)param_1[lVar7 * 0x7e + 0x3e] * 0xa0) & 0x200) == 0) ||
         (0 < (short)param_1[lVar7 * 0x7e + 4])) {
        uVar3 = *(uint64_t *)
                 (*(int64_t *)(param_1 + lVar7 * 0x7e + 0x36) + 0x50 +
                 (int64_t)param_1[lVar7 * 0x7e + 0x3e] * 0xa0);
        if ((uVar3 >> 0xc & 1) == 0) {
          if ((uVar3 >> 10 & 1) != 0) {
            if (*(short *)(lVar7 * 0x1f8 + 0x12 + (int64_t)param_1) < 1) {
              uVar6 = 0;
            }
            else {
              uVar6 = 0x3f800000;
            }
            if (*(int64_t *)(param_1 + lVar7 * 0x7e + 0x40) != 0) {
              *(int32_t *)(*(int64_t *)(param_1 + lVar7 * 0x7e + 0x40) + 0x90) = uVar6;
            }
          }
        }
        else {
          if ((*(int64_t *)(param_1 + lVar7 * 0x7e + 2) != 0) &&
             (sVar1 = *(short *)(*(int64_t *)(param_1 + lVar7 * 0x7e + 2) + 8), sVar1 != 0)) {
            FUN_1805373f0(param_1,lVar7,sVar1,param_4,uVar13,0xfffffffffffffffe);
          }
          FUN_180537de0(param_1,param_1[lVar12 + 0x278],0);
          if (((*(uint64_t *)
                 ((int64_t)param_1[lVar7 * 0x7e + 0x3e] * 0xa0 + 0x50 +
                 *(int64_t *)(param_1 + lVar7 * 0x7e + 0x36)) & 0x400) != 0) &&
             (*(int64_t *)(param_1 + lVar7 * 0x7e + 0x40) != 0)) {
            *(int32_t *)(*(int64_t *)(param_1 + lVar7 * 0x7e + 0x40) + 0x90) = 0;
          }
        }
        if (*(int64_t *)(param_1 + lVar7 * 0x7e + 0x40) != 0) {
          *(int8_t *)(*(int64_t *)(param_1 + lVar7 * 0x7e + 0x40) + 0x125) = 0;
        }
      }
    }
    uVar6 = (int32_t)(uVar13 >> 0x20);
    param_1[lVar12 + 0x278] = param_3;
    param_1[0x285] = -1;
    if (((param_3 == -1) || (piVar11 = param_1 + lVar8 * 0x7e + 2, piVar11 == (int *)0x0)) ||
       (cVar4 = SystemCore_EventHandler(piVar11), cVar4 == '\0')) {
      piVar11 = (int *)0x0;
    }
    *(int **)(param_1 + lVar12 * 2 + 0x27a) = piVar11;
    lVar7 = *(int64_t *)(param_1 + 0x286);
    lVar12 = *(int64_t *)((int64_t)*param_1 * 0xa60 + 0x37d8 + lVar7);
    if (lVar12 != 0) {
      func_0x0001805afb00(lVar12,param_1);
      lVar7 = *(int64_t *)(param_1 + 0x286);
    }
    if (((lVar7 != 0) && (-1 < *param_1)) &&
       (aiStackX_10[0] = 0, *(int *)((int64_t)*param_1 * 0xa60 + 0x30b8 + lVar7) != 0)) {
      lVar7 = (int64_t)*param_1 * 0xa60 + *(int64_t *)(param_1 + 0x286);
      iVar2 = *(int *)(lVar7 + 0x30b8);
      aiStackX_10[0] = iVar2;
      if ((iVar2 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x30))(iVar2);
      }
      (**(code **)(render_system_data_config + 0xc0))
                (iVar2,param_2 == 1,param_4 & 0xff,param_5,CONCAT44(uVar6,1));
      uVar6 = 1;
      if (*(int *)(lVar7 + 0x3610) == 1) {
        lVar12 = *(int64_t *)(lVar7 + 0x3780);
        *(int32_t *)(lVar12 + 0x10) = 0;
        *(uint64_t *)(lVar12 + 0x18) = 0;
        *(uint64_t *)(lVar12 + 0x20) = 0;
        *(int32_t *)(lVar12 + 0x28) = 0;
        *(int32_t *)(lVar12 + 0x2c) = 0xbf800000;
        *(uint64_t *)(lVar12 + 0x30) = 0;
        *(int32_t *)(lVar12 + 0x38) = 0xffffffff;
        lVar12 = *(int64_t *)(param_1 + 0x27a);
        if (lVar12 != 0) {
          uVar13 = *(uint64_t *)
                    ((int64_t)*(int *)(lVar12 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar12 + 0xd0))
          ;
          if (((byte)uVar13 >> 1 & 1) == 0) {
            uVar6 = 1;
            if ((uVar13 & 0x40) != 0) {
              uVar6 = 3;
            }
          }
          else {
            uVar6 = 2;
          }
        }
        *(int32_t *)(*(int64_t *)(lVar7 + 0x3780) + 0x215c) = uVar6;
      }
      if ((iVar2 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x18))(iVar2);
      }
    }
    if ((*(int64_t *)(param_1 + 0x286) != 0) && (-1 < param_3)) {
      cVar4 = SystemCore_EventHandler(param_1 + lVar8 * 0x7e + 2);
      if (cVar4 != '\0') {
        if ((param_5 == '\0') &&
           ((*(uint *)((int64_t)param_1[lVar8 * 0x7e + 0x3e] * 0xa0 + 0x50 +
                      *(int64_t *)(param_1 + lVar8 * 0x7e + 0x36)) >> 0xc & 1) != 0)) {
          if ((*(int64_t *)(param_1 + lVar8 * 0x7e + 2) != 0) &&
             (*(short *)(*(int64_t *)(param_1 + lVar8 * 0x7e + 2) + 8) != 0)) {
            FUN_1805373f0(param_1,param_3);
          }
          FUN_180537de0(param_1,param_3,0);
        }
        if ((char)param_4 == '\0') {
          if ((*(uint *)((int64_t)param_1[lVar8 * 0x7e + 0x3e] * 0xa0 + 0x50 +
                        *(int64_t *)(param_1 + lVar8 * 0x7e + 0x36)) >> 8 & 1) != 0) {
            FUN_180537de0(param_1,param_3,
                          *(int16_t *)
                           ((int64_t)param_1[lVar8 * 0x7e + 0x3e] * 0xa0 + 0x96 +
                           *(int64_t *)(param_1 + lVar8 * 0x7e + 0x36)));
          }
        }
        if (*(int64_t *)(param_1 + lVar8 * 0x7e + 0x40) != 0) {
          *(int8_t *)(*(int64_t *)(param_1 + lVar8 * 0x7e + 0x40) + 0x125) = 1;
        }
      }
    }
  }
  lVar12 = (int64_t)*param_1 * 0xa60 + *(int64_t *)(param_1 + 0x286) + 0x30a0;
  lVar7 = 0;
  iVar10 = -1;
  iVar2 = *(int *)(*(int64_t *)(lVar12 + 0x8f8) + 0x9e0);
  lVar8 = lVar7;
  iVar9 = iVar10;
  if ((-1 < iVar2) &&
     (lVar8 = (int64_t)iVar2 * 0x1f8 + 8 + *(int64_t *)(lVar12 + 0x8f8), lVar8 != 0)) {
    iVar9 = *(int *)(lVar8 + 0xf0);
  }
  aiStackX_10[0] = -1;
  lVar5 = lVar7;
  if (lVar8 != 0) {
    lVar5 = FUN_18050e440(lVar12,lVar8,aiStackX_10,&stack0x00000018,&stack0x00000008,&lStackX_20,
                          iVar9);
    lVar7 = lStackX_20;
    iVar10 = aiStackX_10[0];
  }
  *(int64_t *)(lVar12 + 0x628) = lVar7;
  *(int64_t *)(lVar12 + 0x630) = lVar5;
  *(uint64_t *)(lVar12 + 0x638) = CONCAT44(0xffffffff,iVar10);
  *(uint64_t *)(lVar12 + 0x640) = CONCAT44(iVar9,0xffffffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180537230(int *param_1,int param_2,int param_3,int16_t param_4)
void FUN_180537230(int *param_1,int param_2,int param_3,int16_t param_4)

{
  int64_t lVar1;
  int8_t uVar2;
  int iVar3;
  uint uVar4;
  int16_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lStack_30;
  
  lStack_30 = -2;
  lVar7 = (int64_t)param_3;
  uVar5 = 0;
  lVar6 = *(int64_t *)(param_1 + 0x286) + 0x30a0 + (int64_t)*param_1 * 0xa60;
  lVar1 = *(int64_t *)
           (*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar6 + 0x6d8) + 0x8a8) + 0x260) + 0x210);
  uVar4 = *(uint *)((int64_t)param_1[lVar7 * 0x7e + 0x3e] * 0xa0 + 0x58 +
                   *(int64_t *)(param_1 + lVar7 * 0x7e + 0x36)) & 0x300;
  if (uVar4 == 0x100) {
    uVar2 = *(int8_t *)(lVar1 + 0x25fc);
  }
  else if (uVar4 == 0x200) {
    uVar2 = *(int8_t *)(lVar1 + 0x25fe);
  }
  else {
    uVar2 = *(int8_t *)(lVar1 + 0x25fb);
  }
  FUN_18058f6e0(param_1 + (int64_t)param_2 * 0x7e + 2,param_1 + lVar7 * 0x7e + 2,param_4,
                lVar7 * 0x1f8,uVar2);
  if (*(int *)(lVar6 + 0x18) != 0) {
    iVar3 = *(int *)(lVar6 + 0x18);
    if ((iVar3 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar3);
    }
    if (*(int64_t *)(param_1 + (int64_t)param_2 * 0x7e + 2) != 0) {
      uVar5 = *(int16_t *)(*(int64_t *)(param_1 + (int64_t)param_2 * 0x7e + 2) + 8);
    }
    (**(code **)(render_system_data_config + 0x90))(iVar3,param_2,param_3,uVar5);
    if ((iVar3 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar3);
    }
  }
  lVar1 = *(int64_t *)(lVar6 + 0x6d8);
  if ((*(int *)(lVar6 + 0x570) == 2) && (system_data_ec8a != '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(int8_t *)(lVar1 + 0x848) = uVar2;
  FUN_180543e30(lVar1);
  FUN_180540440(lVar1,lVar6);
  lVar6 = *(int64_t *)(lVar6 + 0x6d8);
  lVar7 = *(int64_t *)(lVar6 + 0x930);
  lVar1 = lVar7 + 0x2be8;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  lStack_30 = lVar6;
  FUN_1804dd4d0(lVar7 + 0x2b88,&stack0xffffffffffffffe0,&lStack_30);
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



