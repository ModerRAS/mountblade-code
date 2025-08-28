// $fun 的语义化别名
#define $alias_name $fun
#define SystemInitializer System_Initializer2  // 系统初始化器
// 03_rendering_part440.c - 8 个函数
// 函数: void function_50aea0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_50aea0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *(int64_t *)(param_1 + 0x658);
  iVar2 = _Mtx_lock(lVar1 + 0x58);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if (*(int64_t *)(lVar1 + 0x28) != 0) {
    iVar2 = _Mtx_lock(*(int64_t *)(lVar1 + 0x28) + 0x58);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  if ((*(byte *)(lVar1 + 0xa8) & 1) == 0) {
    SystemCore_FileSystem(lVar1,*(int64_t *)(lVar1 + 0x10) + 0x70,0xbf800000,param_4,uVar3);
  }
  if (*(int64_t *)(lVar1 + 0x28) != 0) {
    iVar2 = _Mtx_unlock(*(int64_t *)(lVar1 + 0x28) + 0x58);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  iVar2 = _Mtx_unlock(lVar1 + 0x58);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_50af60(int64_t param_1,int param_2)
void function_50af60(int64_t param_1,int param_2)
{
  int32_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int64_t lVar9;
  int8_t astack_special_x_10 [16];
  uint64_t stack_special_x_20;
  if (param_2 == 3) {
    lVar2 = *(int64_t *)(param_1 + 0x8f8);
    plVar3 = *(int64_t **)(lVar2 + 0x9e8);
    uVar1 = *(int32_t *)(lVar2 + 0x9e0);
    lVar9 = (int64_t)*(int *)((int64_t)(int)plVar3[0x1e] * 0xa0 + 100 + plVar3[0x1a]) * 0x170 +
            render_system_config;
    iVar6 = *(int *)(param_1 + 0x638);
    if (*(int64_t *)(param_1 + 0x280) == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = *(int *)(*(int64_t *)(param_1 + 0x280) + 0x50);
    }
    if ((system_status_flag == 1) || (system_status_flag == 4)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
                0x48) < render_system_config_config) {
      SystemInitializer(&system_ptr_9e60);
      if (render_system_config_config == -1) {
        _Mtx_init_in_situ(0x180d49e70,2);
        function_8fc820(function_943020);
        SystemCore_StateController(&system_ptr_9e60);
      }
    }
    stack_special_x_20 = 0x180d49e70;
    iVar5 = _Mtx_lock(0x180d49e70);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    function_5109d0(param_1);
    if ((*(uint *)((int64_t)(int)plVar3[0x1e] * 0xa0 + 0x50 + plVar3[0x1a]) >> 8 & 1) == 0) {
      if (bVar8) {
        if (*(int *)(param_1 + 0x570) == 2) {
          *(int64_t *)(*(int64_t *)(param_1 + 0x8d8) + 0x87b700) =
               *(int64_t *)
                (&system_error_code + (int64_t)*(int *)(*(int64_t *)(param_1 + 0x8d8) + 0x87b708) * 8)
               + 50000;
        }
      }
      else {
        if (iVar7 != -1) {
          function_537de0(lVar2,uVar1,0);
        }
        if ((*plVar3 != 0) && (0 < *(short *)(*plVar3 + 8))) {
          function_5373f0(lVar2,uVar1,1);
        }
        if ((*(uint64_t *)((int64_t)(int)plVar3[0x1e] * 0xa0 + 0x50 + plVar3[0x1a]) & 0x1000) != 0
           ) {
          function_50e990(param_1,1,astack_special_x_10);
        }
      }
    }
    else {
      if (!bVar8) {
        if (iVar7 != -1) {
          function_537de0(lVar2,uVar1,0);
        }
        sVar4 = Function_1250a6b1(plVar3);
        if (0 < sVar4) {
          function_50e990(param_1,1,astack_special_x_10);
        }
      }
      if ((iVar6 == 0) && (!bVar8)) {
        function_50b440(param_1,0,0xffffffff,1,0);
        function_50b440(param_1,1,0xffffffff,1,0);
      }
      function_5b1d30(param_1 + 0x138,lVar9);
      *(uint64_t *)(param_1 + 0x280) = 0;
      *(uint64_t *)(param_1 + 0x290) = 0;
    }
    iVar6 = _Mtx_unlock(0x180d49e70);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
  }
  else {
    function_5a2d30(param_1 + 0x28);
  }
  return;
}
uint64_t function_50b240(int64_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int *piVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  float fVar10;
  int8_t auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStackX_8;
  float fStackX_c;
  lVar2 = *(int64_t *)(param_1 + 0x8d8);
  uVar5 = 0;
  uVar9 = 0xffffffff;
  fVar15 = 0.0;
  uVar1 = *(uint *)(lVar2 + 0x52ed94);
  if (0 < (int64_t)(int)uVar1) {
    piVar4 = (int *)(lVar2 + 0x30b0);
    uVar8 = uVar5;
    do {
      if (-1 < *piVar4) goto LAB_18050b299;
      uVar8 = (uint64_t)((int)uVar8 + 1);
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 0x298;
    } while ((int64_t)uVar5 < (int64_t)(int)uVar1);
  }
  uVar8 = (uint64_t)uVar1;
LAB_18050b299:
  uVar5 = 0xffffffff;
  if ((int)uVar8 < (int)uVar1) {
    do {
      lVar6 = (int64_t)(int)uVar8 * 0xa60;
      if (((((*(byte *)(lVar6 + 0x360c + lVar2) & 1) != 0) &&
           (*(int *)(lVar6 + 0x3600 + lVar2) == -1)) && (*(int *)(lVar6 + 0x3608 + lVar2) == 1)) &&
         (*(int *)(lVar6 + 0x37c0 + lVar2) == 0)) {
        lVar3 = *(int64_t *)(param_1 + 0x20);
        lVar6 = *(int64_t *)(lVar6 + 0x30c0 + lVar2);
        fVar13 = *(float *)(lVar6 + 0xc) - *(float *)(lVar3 + 0xc);
        fVar14 = *(float *)(lVar6 + 0x10) - *(float *)(lVar3 + 0x10);
        fVar10 = *(float *)(lVar6 + 0x14) - *(float *)(lVar3 + 0x14);
        fVar12 = fVar14 * fVar14 + fVar13 * fVar13 + fVar10 * fVar10;
        auVar11 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
        fVar10 = auVar11._0_4_;
        fVar16 = fVar10 * 0.5 * (3.0 - fVar12 * fVar10 * fVar10);
        fStackX_8 = (float)*(uint64_t *)(param_1 + 0x49c);
        fStackX_c = (float)((uint64_t)*(uint64_t *)(param_1 + 0x49c) >> 0x20);
        fVar10 = 1.0;
        if (1.0 < fVar16 * fVar12) {
          fVar10 = 1.0 / (fVar16 * fVar12);
        }
        fVar12 = fStackX_c * fVar14 * fVar16 + fStackX_8 * fVar13 * fVar16 + 1.0;
        fVar10 = fVar10 * fVar12 * fVar12;
        if (fVar15 < fVar10) {
          uVar9 = uVar8;
          fVar15 = fVar10;
        }
      }
      uVar7 = (uint)*(short *)(lVar2 + 0x52dda0 + (int64_t)(int)uVar8 * 2);
      uVar8 = (uint64_t)uVar7;
    } while ((int)uVar7 < (int)uVar1);
    uVar5 = 0xffffffff;
    if (0.5 < fVar15) {
      uVar5 = uVar9;
    }
  }
  return uVar5;
}
int function_50b2a2(uint64_t param_1,int param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int in_R10D;
  int in_R11D;
  float fVar3;
  int8_t auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM8_Da;
  float fVar8;
  float fStack0000000000000060;
  float fStack0000000000000064;
  do {
    lVar2 = (int64_t)param_2 * 0xa60;
    if (((((*(byte *)(lVar2 + 0x360c + param_3) & 1) != 0) &&
         (*(int *)(lVar2 + 0x3600 + param_3) == in_R10D)) &&
        (*(int *)(lVar2 + 0x3608 + param_3) == 1)) && (*(int *)(lVar2 + 0x37c0 + param_3) == 0)) {
      lVar1 = *(int64_t *)(unaff_RSI + 0x20);
      lVar2 = *(int64_t *)(lVar2 + 0x30c0 + param_3);
      fVar6 = *(float *)(lVar2 + 0xc) - *(float *)(lVar1 + 0xc);
      fVar7 = *(float *)(lVar2 + 0x10) - *(float *)(lVar1 + 0x10);
      fVar3 = *(float *)(lVar2 + 0x14) - *(float *)(lVar1 + 0x14);
      fVar5 = fVar7 * fVar7 + fVar6 * fVar6 + fVar3 * fVar3;
      auVar4 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar3 = auVar4._0_4_;
      fVar8 = fVar3 * 0.5 * (3.0 - fVar5 * fVar3 * fVar3);
      fStack0000000000000060 = (float)*(uint64_t *)(unaff_RSI + 0x49c);
      fStack0000000000000064 = (float)((uint64_t)*(uint64_t *)(unaff_RSI + 0x49c) >> 0x20);
      fVar3 = 1.0;
      if (1.0 < fVar8 * fVar5) {
        fVar3 = 1.0 / (fVar8 * fVar5);
      }
      fVar5 = fStack0000000000000064 * fVar7 * fVar8 + fStack0000000000000060 * fVar6 * fVar8 + 1.0;
      fVar3 = fVar3 * fVar5 * fVar5;
      if (unaff_XMM8_Da < fVar3) {
        unaff_XMM8_Da = fVar3;
        unaff_EBX = param_2;
      }
    }
    param_2 = (int)*(short *)(param_3 + 0x52dda0 + (int64_t)param_2 * 2);
  } while (param_2 < in_R11D);
  if (0.5 < unaff_XMM8_Da) {
    in_R10D = unaff_EBX;
  }
  return in_R10D;
}
int32_t function_50b41d(void)
{
  int32_t in_R10D;
  return in_R10D;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_50b440(int64_t param_1,int param_2,uint param_3,int param_4,char param_5)
void function_50b440(int64_t param_1,int param_2,uint param_3,int param_4,char param_5)
{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  byte bVar10;
  byte bVar11;
  int64_t lVar12;
  uint local_var_f58;
  int32_t uVar13;
  byte bStack_78;
  char cStack_77;
  int iStack_74;
  int aiStack_70 [2];
  int32_t local_var_68;
  int iStack_64;
  uint64_t local_var_60;
  int32_t local_var_58;
  uint64_t local_var_54;
  uint64_t local_var_4c;
  int32_t local_var_44;
  int32_t local_var_40;
  int8_t local_var_3c;
  if (system_status_flag == 1) {
    if (param_3 == 0xffffffff) {
      *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) | (param_2 + 1) * 0x100;
      return;
    }
    if (param_3 == 0) {
      *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) | 0x10;
      return;
    }
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) | 0x20;
      return;
    }
    if (param_3 != 2) {
      uVar4 = 0x80;
      if (param_3 != 3) {
        uVar4 = 0;
      }
      *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) | uVar4;
      return;
    }
    *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) | 0x40;
    return;
  }
  lVar9 = *(int64_t *)(param_1 + 0x8f8);
  uVar4 = *(uint *)(lVar9 + 0x9e0 + (int64_t)param_2 * 4);
  uVar8 = (uint64_t)(int)uVar4;
  if (uVar4 < 5) {
    cVar2 = SystemCore_EventHandler(uVar8 * 0x1f8 + 8 + lVar9);
    uVar8 = (uint64_t)uVar4;
    if (cVar2 == '\0') {
      uVar8 = 6;
    }
  }
  uVar7 = (uint)uVar8;
  lVar6 = 0;
  bVar11 = (byte)((uint)*(int32_t *)(param_1 + 0x564) >> 0x1f) ^ 1;
  iVar5 = *(int *)(*(int64_t *)(param_1 + 0x590) + 0x2498);
  uVar4 = 0;
  if (iVar5 != -1) {
    uVar4 = *(uint *)((int64_t)iVar5 * 0x68 + 0x58 + render_system_config);
  }
  if (param_3 == uVar7) {
    return;
  }
  if ((param_3 != 0xffffffff) &&
     (iVar5 = function_537650(lVar9,param_3,bVar11,*(int32_t *)(param_1 + 0x56c)), iVar5 != param_2
     )) {
    return;
  }
  if (((param_4 == 0) && (uVar4 < 0x20)) && ((0x80130000U >> (uVar4 & 0x1f) & 1) != 0)) {
    return;
  }
  lVar9 = *(int64_t *)(param_1 + 0x8f8);
  cVar2 = '\0';
  if (*(char *)(lVar9 + 0xa24) != -1) {
    return;
  }
  if (param_3 < 5) {
    bStack_78 = 1;
    lVar6 = lVar9 + 8 + (int64_t)(int)param_3 * 0x1f8;
    if (*(int *)(lVar6 + 0x30) < 1) {
      return;
    }
    if (((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0)) >>
          9 & 1) != 0) && (*(short *)(lVar6 + 8) < 1)) {
      return;
    }
    local_var_f58 = *(uint *)(param_1 + 0x56c);
    cVar3 = function_5377e0(lVar9,param_3,param_2,bVar11,local_var_f58);
    if (cVar3 == '\0') {
      return;
    }
  }
  else {
    bStack_78 = 0;
  }
  if (((param_5 == '\0') && (param_2 == 1)) &&
     ((uVar7 != 0xffffffff &&
      ((param_3 == 0xffffffff && (cVar2 = function_531480(param_1,uVar8 & 0xffffffff), cVar2 != '\0'))
      )))) {
    function_50c740(param_1,*(int32_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e4),8,0);
  }
  cStack_77 = '\x01';
  if (((param_3 != 0xffffffff) || (cVar2 == '\0')) && (1 < param_4 - 1U)) {
    iStack_74 = -1;
    aiStack_70[0] = -1;
    local_var_f58 = param_3;
    function_52eb50(param_1,&iStack_74,aiStack_70,bStack_78,param_3,param_2);
    if (iStack_74 != -1) {
      local_var_54 = 0x3f80000000000000;
      local_var_4c = 0xbe4ccccdbe4ccccd;
      local_var_60 = 0;
      local_var_44 = 0x3ecccccd;
      local_var_58 = 0;
      local_var_40 = 0x1000000;
      local_var_3c = 0;
      local_var_68 = 1;
      iStack_64 = iStack_74;
      cStack_77 = CoreSystemThreadManager(param_1,&local_var_68);
      if (cStack_77 == '\0') {
        if (param_4 != 3) {
          return;
        }
      }
      else if (aiStack_70[0] != -1) {
        local_var_f58 = local_var_f58 & 0xffffff00;
        function_4f83f0(*(uint64_t *)(param_1 + 0x8d8),aiStack_70[0],param_1 + 0x550,0,
                      local_var_f58,*(int32_t *)(param_1 + 0x10),0xffffffff,0,0,0);
      }
    }
  }
  if (bStack_78 != 0) {
    lVar9 = *(int64_t *)(param_1 + 0x8f8);
    lVar12 = *(int64_t *)(lVar9 + 0x9e8 + (int64_t)(1 - param_2) * 8);
    if (((*(byte *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0)) >>
          4 & 1) != 0) ||
       ((lVar12 != 0 &&
        ((*(byte *)((int64_t)*(int *)(lVar12 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar12 + 0xd0))
          >> 4 & 1) != 0)))) {
      uVar4 = param_3;
      if (param_2 != 0) {
        uVar4 = *(uint *)(lVar9 + 0x9e0);
      }
      if (param_2 == 1) {
        lVar12 = lVar6;
      }
      PerformanceMonitor_Profiler(param_1,uVar4,bVar11,CONCAT71((int7)((uint64_t)lVar9 >> 8),lVar12 != 0),
                    local_var_f58 & 0xffffff00,1 - param_2,param_5);
    }
  }
  if (param_2 == 1) {
    if (param_4 != 3) {
      uVar7 = param_3;
    }
    *(uint *)(*(int64_t *)(param_1 + 0x8f8) + 0xa20) = uVar7;
    uVar4 = *(uint *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e0);
    if ((int)uVar4 < 0) goto LAB_18050b9f8;
    uVar13 = 0;
    bVar10 = 0;
  }
  else {
    if ((bStack_78 != 0) &&
       ((*(byte *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0)) >>
         4 & 1) == 0)) {
      lVar9 = *(int64_t *)(param_1 + 0x8f8);
      iVar5 = *(int *)(lVar9 + 0xa20);
      if (-1 < iVar5) {
        lVar6 = *(int64_t *)((int64_t)iVar5 * 0x1f8 + 0xd8 + lVar9);
        lVar9 = (int64_t)*(int *)((int64_t)iVar5 * 0x1f8 + 0xf8 + lVar9) * 0xa0;
        bVar10 = *(byte *)((int64_t)*(int *)(lVar9 + 100 + lVar6) * 0x170 + 0x140 + render_system_config)
        ;
        if ((*(int *)(lVar9 + 0x5c + lVar6) == 0xf) &&
           ((*(uint *)(param_1 + 0x56c) & 0x1000000) != 0)) {
          bVar10 = bVar10 & 0xfd;
        }
        if (bVar11 == 0) {
          bVar1 = bVar10 & 1;
        }
        else {
          bVar1 = bVar10 & 2;
        }
        if ((bVar1 == 0) && ((bVar10 & 4) == 0)) {
          function_50bb10(param_1,1,iVar5,1,param_5);
        }
      }
    }
    if ((int)param_3 < 0) goto LAB_18050b9f8;
    uVar13 = 1;
    bVar10 = (byte)((uint)*(int32_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e4) >> 0x1f);
    bStack_78 = bVar10 ^ 1;
    uVar4 = param_3;
  }
  PerformanceMonitor_Profiler(param_1,uVar4,bVar11,bStack_78,bVar10,uVar13,param_5);
LAB_18050b9f8:
  lVar9 = *(int64_t *)(param_1 + 0x8f8);
  iVar5 = *(int *)(lVar9 + 0x9e0 + (int64_t)param_2 * 4);
  lVar6 = lVar9;
  if (-1 < iVar5) {
    lVar12 = (int64_t)iVar5 * 0x1f8;
    cVar2 = SystemCore_EventHandler(lVar9 + 8 + lVar12);
    if (((cVar2 != '\0') &&
        ((*(uint *)((int64_t)*(int *)(lVar12 + 0xf8 + lVar9) * 0xa0 + 0x58 +
                   *(int64_t *)(lVar12 + 0xd8 + lVar9)) & 0x3000) != 0)) && (system_status_flag != 1))
    {
      function_50c740(param_1,iVar5,8);
      lVar6 = *(int64_t *)(param_1 + 0x8f8);
    }
  }
  *(char *)(lVar6 + 0xa25) = (char)param_2;
  *(char *)(lVar6 + 0xa26) = (char)param_3;
  *(bool *)(lVar6 + 0xa27) = param_4 == 3;
  *(bool *)(lVar6 + 0xa28) = param_4 == 1;
  *(char *)(lVar6 + 0xa29) = param_5;
  if ((cStack_77 == '\0') || (param_4 - 1U < 2)) {
    function_536cd0(*(uint64_t *)(param_1 + 0x8f8));
    function_50c1c0(param_1);
  }
  else {
    *(int8_t *)(*(int64_t *)(param_1 + 0x8f8) + 0xa24) = 0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_50b572(int32_t param_1)
void function_50b572(int32_t param_1)
{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int64_t in_RAX;
  uint64_t uVar5;
  int64_t unaff_RBX;
  uint uVar6;
  int64_t lVar7;
  uint unaff_ESI;
  uint uVar8;
  uint64_t unaff_RDI;
  int64_t lVar9;
  byte bVar10;
  char unaff_R12B;
  int unaff_R13D;
  int64_t unaff_R14;
  int64_t lVar11;
  int iVar12;
  uint64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  byte bStack0000000000000050;
  char cStack0000000000000051;
  int iStack0000000000000054;
  int local_buffer_58;
  int32_t local_buffer_60;
  int iStack0000000000000064;
  int local_buffer_e8;
  byte local_buffer_f0;
  uVar6 = (uint)unaff_R14;
  if (*(int *)(in_RAX + 0x2498) != -1) {
    uVar6 = *(uint *)((int64_t)*(int *)(in_RAX + 0x2498) * 0x68 + 0x58 + render_system_config);
  }
  uVar8 = (uint)unaff_RDI;
  if (uVar8 == unaff_ESI) {
    return;
  }
  iVar12 = (int)unaff_R15;
  if ((uVar8 != 0xffffffff) &&
     (iVar4 = function_537650(param_1,unaff_RDI & 0xffffffff,unaff_R12B,
                            *(int32_t *)(unaff_RBX + 0x56c)), param_1 = extraout_XMM0_Da,
     iVar4 != iVar12)) {
    return;
  }
  if (((unaff_R13D == 0) && (uVar6 < 0x20)) && ((0x80130000U >> (uVar6 & 0x1f) & 1) != 0)) {
    return;
  }
  lVar9 = *(int64_t *)(unaff_RBX + 0x8f8);
  cVar3 = '\0';
  if (*(char *)(lVar9 + 0xa24) != -1) {
    return;
  }
  bVar10 = (byte)unaff_R14;
  lVar7 = unaff_R14;
  bStack0000000000000050 = bVar10;
  if (uVar8 < 5) {
    bStack0000000000000050 = 1;
    lVar7 = lVar9 + 8 + unaff_RDI * 0x1f8;
    if (*(int *)(lVar7 + 0x30) <= (int)(uint)unaff_R14) {
      return;
    }
    if (((*(uint *)((int64_t)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar7 + 0xd0)) >>
          9 & 1) != 0) && (*(short *)(lVar7 + 8) <= (short)unaff_R14)) {
      return;
    }
    cVar2 = function_5377e0(lVar9,unaff_RDI & 0xffffffff,unaff_R15 & 0xffffffff,unaff_R12B,
                          *(int32_t *)(unaff_RBX + 0x56c));
    param_1 = extraout_XMM0_Da_00;
    if (cVar2 == '\0') {
      return;
    }
  }
  if (((local_buffer_f0 == bVar10) && (iVar12 == 1)) &&
     ((unaff_ESI != 0xffffffff &&
      ((uVar8 == 0xffffffff &&
       (cVar3 = function_531480(param_1,unaff_ESI), param_1 = extraout_XMM0_Da_01, cVar3 != '\0'))))))
  {
    param_1 = function_50c740(extraout_XMM0_Da_01,
                            *(int32_t *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0x9e4),8,0);
  }
  cStack0000000000000051 = '\x01';
  if (((uVar8 != 0xffffffff) || (cVar3 == '\0')) && (1 < local_buffer_e8 - 1U)) {
    iStack0000000000000054 = -1;
    local_buffer_58 = -1;
    param_1 = function_52eb50(param_1,(int64_t)&local_buffer_00000050 + 4,&local_buffer_00000058,
                            bStack0000000000000050);
    if (iStack0000000000000054 != -1) {
      local_buffer_60 = 1;
      iStack0000000000000064 = iStack0000000000000054;
      cStack0000000000000051 = CoreSystemThreadManager(0x3ecccccd,&local_buffer_00000060);
      param_1 = extraout_XMM0_Da_02;
      if (cStack0000000000000051 == '\0') {
        if (local_buffer_e8 != 3) {
          return;
        }
      }
      else if (local_buffer_58 != -1) {
        param_1 = function_4f83f0(*(uint64_t *)(unaff_RBX + 0x8d8),local_buffer_58,
                                unaff_RBX + 0x550,0,bVar10);
      }
    }
  }
  if (bStack0000000000000050 != 0) {
    lVar9 = *(int64_t *)(unaff_RBX + 0x8f8);
    lVar11 = *(int64_t *)(lVar9 + 0x9e8 + (int64_t)(1 - iVar12) * 8);
    if (((*(byte *)((int64_t)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar7 + 0xd0)) >>
          4 & 1) != 0) ||
       ((lVar11 != 0 &&
        ((*(byte *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar11 + 0xd0))
          >> 4 & 1) != 0)))) {
      uVar5 = unaff_RDI & 0xffffffff;
      if (iVar12 != 0) {
        uVar5 = (uint64_t)*(uint *)(lVar9 + 0x9e0);
      }
      if (iVar12 == 1) {
        lVar11 = lVar7;
      }
      param_1 = PerformanceMonitor_Profiler(param_1,uVar5,unaff_R12B,
                              CONCAT71((int7)((uint64_t)lVar9 >> 8),lVar11 != 0),bVar10);
    }
  }
  if (iVar12 == 1) {
    if (local_buffer_e8 != 3) {
      unaff_ESI = uVar8;
    }
    *(uint *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0xa20) = unaff_ESI;
    uVar6 = *(uint *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0x9e0);
    uVar5 = (uint64_t)uVar6;
    if ((int)uVar6 < 0) goto LAB_18050b9f8;
  }
  else {
    if ((bStack0000000000000050 != 0) &&
       ((*(byte *)((int64_t)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar7 + 0xd0)) >>
         4 & 1) == 0)) {
      lVar9 = *(int64_t *)(unaff_RBX + 0x8f8);
      iVar12 = *(int *)(lVar9 + 0xa20);
      if (-1 < iVar12) {
        lVar7 = *(int64_t *)((int64_t)iVar12 * 0x1f8 + 0xd8 + lVar9);
        lVar9 = (int64_t)*(int *)((int64_t)iVar12 * 0x1f8 + 0xf8 + lVar9) * 0xa0;
        bVar10 = *(byte *)((int64_t)*(int *)(lVar9 + 100 + lVar7) * 0x170 + 0x140 + render_system_config)
        ;
        if ((*(int *)(lVar9 + 0x5c + lVar7) == 0xf) &&
           ((*(uint *)(unaff_RBX + 0x56c) & 0x1000000) != 0)) {
          bVar10 = bVar10 & 0xfd;
        }
        if (unaff_R12B == '\0') {
          bVar1 = bVar10 & 1;
        }
        else {
          bVar1 = bVar10 & 2;
        }
        if ((bVar1 == 0) && ((bVar10 & 4) == 0)) {
          param_1 = function_50bb10(param_1,1,iVar12,1,local_buffer_f0);
        }
      }
    }
    if ((int)uVar8 < 0) goto LAB_18050b9f8;
    uVar5 = unaff_RDI & 0xffffffff;
    bVar10 = (byte)((uint)*(int32_t *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0x9e4) >> 0x1f);
    bStack0000000000000050 = bVar10 ^ 1;
  }
  PerformanceMonitor_Profiler(param_1,uVar5,unaff_R12B,bStack0000000000000050,bVar10);
LAB_18050b9f8:
  lVar9 = *(int64_t *)(unaff_RBX + 0x8f8);
  iVar12 = *(int *)(lVar9 + 0x9e0 + unaff_R15 * 4);
  lVar7 = lVar9;
  if (-1 < iVar12) {
    lVar11 = (int64_t)iVar12 * 0x1f8;
    cVar3 = SystemCore_EventHandler(lVar9 + 8 + lVar11);
    if (((cVar3 != '\0') &&
        ((*(uint *)((int64_t)*(int *)(lVar11 + 0xf8 + lVar9) * 0xa0 + 0x58 +
                   *(int64_t *)(lVar11 + 0xd8 + lVar9)) & 0x3000) != 0)) && (system_status_flag != 1))
    {
      function_50c740(extraout_XMM0_Da_03,iVar12,8);
      lVar7 = *(int64_t *)(unaff_RBX + 0x8f8);
    }
  }
  *(char *)(lVar7 + 0xa25) = (char)unaff_R15;
  *(char *)(lVar7 + 0xa26) = (char)unaff_RDI;
  *(bool *)(lVar7 + 0xa27) = local_buffer_e8 == 3;
  *(bool *)(lVar7 + 0xa28) = local_buffer_e8 == 1;
  *(byte *)(lVar7 + 0xa29) = local_buffer_f0;
  if ((cStack0000000000000051 == '\0') || (local_buffer_e8 - 1U < 2)) {
    function_536cd0(*(uint64_t *)(unaff_RBX + 0x8f8));
    function_50c1c0();
  }
  else {
    *(int8_t *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0xa24) = 0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_50b6b8(int32_t param_1)
void function_50b6b8(int32_t param_1)
{
  byte bVar1;
  char cVar2;
  int iVar3;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  int64_t lVar4;
  int64_t lVar5;
  byte bVar6;
  char unaff_R12B;
  char unaff_R13B;
  byte unaff_R14B;
  int64_t lVar7;
  int iVar8;
  int64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  byte bStack0000000000000050;
  char cStack0000000000000051;
  int iStack0000000000000054;
  int local_buffer_58;
  int32_t local_buffer_60;
  int iStack0000000000000064;
  int local_buffer_e8;
  int8_t local_buffer_f0;
  cStack0000000000000051 = '\x01';
  iVar8 = (int)unaff_R15;
  if (((unaff_EDI != -1) || (unaff_R13B == '\0')) && (1 < local_buffer_e8 - 1U)) {
    iStack0000000000000054 = -1;
    local_buffer_58 = -1;
    param_1 = function_52eb50(param_1,(int64_t)&local_buffer_00000050 + 4,&local_buffer_00000058,
                            bStack0000000000000050);
    if (iStack0000000000000054 != -1) {
      local_buffer_60 = 1;
      iStack0000000000000064 = iStack0000000000000054;
      cStack0000000000000051 = CoreSystemThreadManager(0x3ecccccd,&local_buffer_00000060);
      param_1 = extraout_XMM0_Da;
      if (cStack0000000000000051 == '\0') {
        if (local_buffer_e8 != 3) {
          return;
        }
      }
      else if (local_buffer_58 != -1) {
        param_1 = function_4f83f0(*(uint64_t *)(unaff_RBX + 0x8d8),local_buffer_58,
                                unaff_RBX + 0x550,0,unaff_R14B);
      }
    }
  }
  if (bStack0000000000000050 != 0) {
    lVar5 = *(int64_t *)(unaff_RBX + 0x8f8);
    lVar4 = *(int64_t *)(lVar5 + 0x9e8 + (int64_t)(1 - iVar8) * 8);
    if (((*(byte *)((int64_t)*(int *)(unaff_RBP + 0xf0) * 0xa0 + 0x50 +
                   *(int64_t *)(unaff_RBP + 0xd0)) >> 4 & 1) != 0) ||
       ((lVar4 != 0 &&
        ((*(byte *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar4 + 0xd0)) >>
          4 & 1) != 0)))) {
      iVar3 = unaff_EDI;
      if (iVar8 != 0) {
        iVar3 = *(int *)(lVar5 + 0x9e0);
      }
      if (iVar8 == 1) {
        lVar4 = unaff_RBP;
      }
      param_1 = PerformanceMonitor_Profiler(param_1,iVar3,unaff_R12B,
                              CONCAT71((int7)((uint64_t)lVar5 >> 8),lVar4 != 0),unaff_R14B);
    }
  }
  if (iVar8 == 1) {
    if (local_buffer_e8 != 3) {
      unaff_ESI = unaff_EDI;
    }
    *(int *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0xa20) = unaff_ESI;
    iVar8 = *(int *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0x9e0);
    if (iVar8 < 0) goto LAB_18050b9f8;
  }
  else {
    if ((bStack0000000000000050 != 0) &&
       ((*(byte *)((int64_t)*(int *)(unaff_RBP + 0xf0) * 0xa0 + 0x50 +
                  *(int64_t *)(unaff_RBP + 0xd0)) >> 4 & 1) == 0)) {
      lVar5 = *(int64_t *)(unaff_RBX + 0x8f8);
      iVar8 = *(int *)(lVar5 + 0xa20);
      if (-1 < iVar8) {
        lVar4 = *(int64_t *)((int64_t)iVar8 * 0x1f8 + 0xd8 + lVar5);
        lVar5 = (int64_t)*(int *)((int64_t)iVar8 * 0x1f8 + 0xf8 + lVar5) * 0xa0;
        bVar6 = *(byte *)((int64_t)*(int *)(lVar5 + 100 + lVar4) * 0x170 + 0x140 + render_system_config);
        if ((*(int *)(lVar5 + 0x5c + lVar4) == 0xf) &&
           ((*(uint *)(unaff_RBX + 0x56c) & 0x1000000) != 0)) {
          bVar6 = bVar6 & 0xfd;
        }
        if (unaff_R12B == '\0') {
          bVar1 = bVar6 & 1;
        }
        else {
          bVar1 = bVar6 & 2;
        }
        if ((bVar1 == 0) && ((bVar6 & 4) == 0)) {
          param_1 = function_50bb10(param_1,1,iVar8,1,local_buffer_f0);
        }
      }
    }
    if (unaff_EDI < 0) goto LAB_18050b9f8;
    unaff_R14B = (byte)((uint)*(int32_t *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0x9e4) >> 0x1f);
    bStack0000000000000050 = unaff_R14B ^ 1;
    iVar8 = unaff_EDI;
  }
  PerformanceMonitor_Profiler(param_1,iVar8,unaff_R12B,bStack0000000000000050,unaff_R14B);
LAB_18050b9f8:
  lVar5 = *(int64_t *)(unaff_RBX + 0x8f8);
  iVar8 = *(int *)(lVar5 + 0x9e0 + unaff_R15 * 4);
  lVar4 = lVar5;
  if (-1 < iVar8) {
    lVar7 = (int64_t)iVar8 * 0x1f8;
    cVar2 = SystemCore_EventHandler(lVar5 + 8 + lVar7);
    if (((cVar2 != '\0') &&
        ((*(uint *)((int64_t)*(int *)(lVar7 + 0xf8 + lVar5) * 0xa0 + 0x58 +
                   *(int64_t *)(lVar7 + 0xd8 + lVar5)) & 0x3000) != 0)) && (system_status_flag != 1)) {
      function_50c740(extraout_XMM0_Da_00,iVar8,8);
      lVar4 = *(int64_t *)(unaff_RBX + 0x8f8);
    }
  }
  *(char *)(lVar4 + 0xa25) = (char)unaff_R15;
  *(char *)(lVar4 + 0xa26) = (char)unaff_EDI;
  *(bool *)(lVar4 + 0xa27) = local_buffer_e8 == 3;
  *(bool *)(lVar4 + 0xa28) = local_buffer_e8 == 1;
  *(int8_t *)(lVar4 + 0xa29) = local_buffer_f0;
  if ((cStack0000000000000051 == '\0') || (local_buffer_e8 - 1U < 2)) {
    function_536cd0(*(uint64_t *)(unaff_RBX + 0x8f8));
    function_50c1c0();
  }
  else {
    *(int8_t *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0xa24) = 0;
  }
  return;
}
// 函数: void function_50badd(void)
void function_50badd(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_50bb10(int64_t param_1,int param_2,int param_3,int8_t param_4,int8_t param_5)
void function_50bb10(int64_t param_1,int param_2,int param_3,int8_t param_4,int8_t param_5)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  lVar3 = *(int64_t *)(param_1 + 0x8f8);
  iVar1 = *(int *)(lVar3 + 0x9e0 + (int64_t)param_2 * 4);
  if (iVar1 != param_3) {
    if ((((system_status_flag != 1) && (system_status_flag != 4)) &&
        (lVar2 = *(int64_t *)(lVar3 + 0x9e8 + (int64_t)param_2 * 8), lVar2 != 0)) &&
       ((*(uint *)((int64_t)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x58 + *(int64_t *)(lVar2 + 0xd0)) &
        0x3000) != 0)) {
      function_50c740(param_1,iVar1,8);
      lVar3 = *(int64_t *)(param_1 + 0x8f8);
    }
    function_536e20(lVar3,param_2,param_3,param_4,param_5);
    function_50c1c0(param_1);
  }
  return;
}
// 函数: void function_50bbd0(int64_t param_1,int param_2,int32_t param_3,int8_t param_4)
void function_50bbd0(int64_t param_1,int param_2,int32_t param_3,int8_t param_4)
{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  if (-1 < param_2) {
    iVar2 = function_537650(*(uint64_t *)(param_1 + 0x8f8),param_2,
                          *(uint *)(param_1 + 0x564) >> 0x1f ^ 1,*(int32_t *)(param_1 + 0x56c));
    if (iVar2 < 0) {
      lVar4 = *(int64_t *)(param_1 + 0x8f8);
      lVar3 = (int64_t)param_2 * 0x1f8;
      cVar1 = SystemCore_EventHandler(lVar4 + 8 + lVar3);
      if ((cVar1 != '\0') &&
         (lVar3 = (int64_t)*(int *)(lVar3 + 0xf8 + lVar4) * 0xa0 +
                  *(int64_t *)(lVar3 + 0xd8 + lVar4), (*(uint *)(lVar3 + 0x50) & 0x103) != 0x100))
      {
        function_531050(param_1,*(uint *)(lVar3 + 0x58) >> 0x13 & 1,param_2);
        lVar4 = *(int64_t *)(param_1 + 0x8f8);
      }
      iVar2 = function_537650(lVar4,param_2,*(uint *)(param_1 + 0x564) >> 0x1f ^ 1,
                            *(int32_t *)(param_1 + 0x56c));
      if (iVar2 < 0) {
        return;
      }
    }
    if (*(int *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e0 + (int64_t)iVar2 * 4) != param_2) {
      function_50b440(param_1,iVar2,param_2,param_3,param_4);
    }
  }
  return;
}