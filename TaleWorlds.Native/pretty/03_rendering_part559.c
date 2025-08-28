// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: SystemOutputManager */
#define SystemOutputManager SystemOutputManager
// 03_rendering_part559.c - 8 个函数
// 函数: void NetworkSystem_771cb(uint64_t param_1,int64_t param_2)
void NetworkSystem_771cb(uint64_t param_1,int64_t param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  bool bVar9;
  int32_t uVar10;
  int iVar11;
  int32_t uVar12;
  int iVar13;
  int64_t in_RAX;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar16;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R15;
  int32_t unaff_XMM6_Da;
  uint local_var_20;
  uint uVar17;
  int iStack0000000000000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  int32_t local_buffer_44;
  int64_t local_var_48;
  uint64_t local_buffer_50;
  int64_t local_var_58;
  uint64_t local_var_60;
  lVar15 = *(int64_t *)(in_RAX + 0x98);
  lVar5 = *(int64_t *)(param_2 + 0xb0);
  iStack0000000000000030 = *(int *)(lVar5 + 0x20);
  local_buffer_50 = (uint64_t)iStack0000000000000030;
  if (((uint64_t)(*(int64_t *)(in_RAX + 0xa0) - lVar15 >> 3) <= local_buffer_50) ||
     (*(int64_t *)(lVar15 + local_buffer_50 * 8) == 0)) {
    iVar16 = 0;
    lVar15 = 0;
    do {
      bVar9 = 5 < iVar16;
      uVar12 = CONCAT31((int3)(local_var_20 >> 8),bVar9);
      iVar13 = 5;
      if (iVar16 < 5) {
        iVar13 = iVar16;
      }
      uVar10 = RenderingSystem_RenderQueue(lVar5,2,iVar13,0xffffffff,uVar12);
      iVar11 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar10);
      iVar11 = *(int *)(render_system_ui + (int64_t)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar11 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x140 + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar12 >> 8),bVar9);
      uVar12 = NetworkSystem_57a10(lVar5,2,iVar13,0xffffffff,uVar10);
      iVar11 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(render_system_ui + (int64_t)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar11 * 8);
      }
      *(uint64_t *)(unaff_RBP + -0x10 + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = RenderingSystem_RenderQueue(lVar5,1,iVar13,0xffffffff,uVar10);
      iVar11 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(render_system_ui + (int64_t)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar11 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x150 + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = NetworkSystem_57a10(lVar5,1,iVar13,0xffffffff,uVar10);
      iVar11 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(render_system_ui + (int64_t)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar11 * 8);
      }
      *(uint64_t *)(unaff_RBP + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = RenderingSystem_RenderQueue(lVar5,0,iVar13,0xffffffff,uVar10);
      iVar11 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(render_system_ui + (int64_t)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar11 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x158 + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = NetworkSystem_57a10(lVar5,0,iVar13,0xffffffff,uVar10);
      iVar11 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(render_system_ui + (int64_t)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar11 * 8);
      }
      *(uint64_t *)(unaff_RBP + 8 + lVar15) = uVar14;
      uVar10 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = RenderingSystem_RenderQueue(lVar5,5,iVar13,0xffffffff,uVar10);
      iVar11 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar11 = *(int *)(render_system_ui + (int64_t)iVar11 * 4);
      if (iVar11 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar11 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x148 + lVar15) = uVar14;
      uVar17 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
      uVar12 = NetworkSystem_57a10(lVar5,5,iVar13,0xffffffff,uVar17);
      iVar13 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar13 = *(int *)(render_system_ui + (int64_t)iVar13 * 4);
      if (iVar13 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar13 * 8);
      }
      *(uint64_t *)(unaff_RBP + -8 + lVar15) = uVar14;
      uVar17 = uVar17 & 0xffffff00;
      uVar12 = RenderingSystem_RenderQueue(lVar5,0xffffffff,1,1,uVar17);
      iVar13 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar13 = *(int *)(render_system_ui + (int64_t)iVar13 * 4);
      if (iVar13 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar13 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x160 + lVar15) = uVar14;
      uVar17 = uVar17 & 0xffffff00;
      uVar12 = NetworkSystem_57a10(lVar5,0xffffffff,1,1,uVar17);
      iVar13 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar13 = *(int *)(render_system_ui + (int64_t)iVar13 * 4);
      if (iVar13 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar13 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x10 + lVar15) = uVar14;
      uVar17 = uVar17 & 0xffffff00;
      uVar12 = RenderingSystem_RenderQueue(lVar5,0xffffffff,1,0,uVar17);
      iVar13 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar13 = *(int *)(render_system_ui + (int64_t)iVar13 * 4);
      if (iVar13 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar13 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x168 + lVar15) = uVar14;
      local_var_20 = uVar17 & 0xffffff00;
      uVar12 = NetworkSystem_57a10(lVar5,0xffffffff,1,0,local_var_20);
      iVar13 = SystemCacheManager(&system_data_5f30,*(int32_t *)(unaff_RSI + 0xac),uVar12);
      iVar13 = *(int *)(render_system_ui + (int64_t)iVar13 * 4);
      if (iVar13 == -1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(uint64_t *)(render_system_ui + (int64_t)iVar13 * 8);
      }
      *(uint64_t *)(unaff_RBP + 0x18 + lVar15) = uVar14;
      iVar16 = iVar16 + 1;
      lVar15 = lVar15 + 0x30;
    } while (iVar16 < 7);
    NetworkSystem_3b400((int64_t)*(int *)(unaff_RSI + 0xac) * 0xe0 + render_system_ui,
                  iStack0000000000000030,unaff_RBP + 0x140,unaff_RBP + -0x10);
    unaff_R12 = CONCAT44(fStack000000000000003c,fStack0000000000000038);
    lVar15 = *(int64_t *)(local_var_48 + 0x98);
    unaff_R15 = local_var_58;
  }
  plVar6 = *(int64_t **)(lVar15 + local_buffer_50 * 8);
  uVar12 = *(int32_t *)(unaff_RBP + 0x330);
  *(int64_t **)(unaff_RSI + 0xa210) = plVar6;
  *(int32_t *)(unaff_RSI + 0x2564) = uVar12;
  if ((unaff_R12 != 0) && (unaff_R15 != 0)) {
    uVar14 = *(uint64_t *)(*plVar6 + 0x68);
    uVar7 = *(uint64_t *)(*(int64_t *)(*(int64_t *)(unaff_R13 + 0x2590) + 0xc78) + 0x38);
    UISystem_0c880(unaff_R12,&local_buffer_00000070,uVar14,0);
    UISystem_0c880(*(uint64_t *)(unaff_R15 + 0x208),unaff_RBP + -0x70,uVar7,
                  *(int8_t *)(unaff_R13 + 0x2581));
    UISystem_0c880(unaff_R12,unaff_RBP + -0x50,uVar14,*(int8_t *)(unaff_RSI + 0x2602));
    UISystem_0c880(unaff_R12,unaff_RBP + -0x30,uVar14,*(int8_t *)(unaff_RSI + 0x2601));
    puVar8 = *(uint64_t **)(unaff_R15 + 0xd8);
    if (puVar8 == (uint64_t *)0x0) {
      *(uint64_t *)(unaff_RSI + 0x2538) = 0x3f8000003f800000;
      *(uint64_t *)(unaff_RSI + 0x2540) = 0x3f800000;
    }
    else {
      uVar14 = puVar8[1];
      *(uint64_t *)(unaff_RSI + 0x2538) = *puVar8;
      *(uint64_t *)(unaff_RSI + 0x2540) = uVar14;
      unaff_XMM6_Da = *(int32_t *)(*(int64_t *)(unaff_R15 + 0xd8) + 0x10);
    }
    *(int32_t *)(unaff_RSI + 0x2548) = unaff_XMM6_Da;
    fStack0000000000000038 = *(float *)(unaff_RBP + -0x80) - *(float *)(unaff_RBP + -0x60);
    fStack000000000000003c = *(float *)(unaff_RBP + -0x7c) - *(float *)(unaff_RBP + -0x5c);
    fVar1 = *(float *)(unaff_RBP + -0x78);
    fVar2 = *(float *)(unaff_RBP + -0x58);
    local_buffer_44 = 0x7f7fffff;
    fStack0000000000000040 =
         (fVar1 - *(float *)(*(int64_t *)(unaff_R12 + 0x140) + 0x158) * 1.5) - fVar2;
    SystemCore_EventHandler(unaff_RBP + -0x70,&local_buffer_00000058,&local_buffer_00000038);
    uVar12 = *(int32_t *)(unaff_RBP + -0x18);
    *(int64_t *)(unaff_RSI + 0x2528) = local_var_58;
    *(uint64_t *)(unaff_RSI + 0x2530) = local_var_60;
    *(int32_t *)(unaff_RSI + 0x2554) = *(int32_t *)(unaff_RBP + -0x38);
    fVar3 = *(float *)(unaff_RBP + -0x80);
    fVar4 = *(float *)(unaff_RBP + -0x40);
    *(float *)(unaff_RSI + 0x254c) = fVar1;
    *(float *)(unaff_RSI + 0x2550) = fVar2;
    *(int32_t *)(unaff_RSI + 0x2558) = uVar12;
    *(float *)(unaff_RSI + 0x255c) = ABS(fVar3 - fVar4);
    *(float *)(unaff_RSI + 0x2560) =
         ABS(*(float *)(unaff_RBP + -0x20) - *(float *)(unaff_RBP + -0x80));
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x290) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkSystem_776ba(int32_t param_1)
void NetworkSystem_776ba(int32_t param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int64_t *in_RAX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R15;
  int32_t uVar8;
  int32_t unaff_XMM6_Da;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  int32_t local_buffer_44;
  uint64_t local_var_58;
  uint64_t local_var_60;
  if (unaff_R15 != 0) {
    uVar5 = *(uint64_t *)(*in_RAX + 0x68);
    uVar6 = *(uint64_t *)(*(int64_t *)(*(int64_t *)(unaff_R13 + 0x2590) + 0xc78) + 0x38);
    UISystem_0c880(param_1,&local_buffer_00000070,uVar5,0);
    uVar8 = UISystem_0c880(*(uint64_t *)(unaff_R15 + 0x208),unaff_RBP + -0x70,uVar6,
                          *(int8_t *)(unaff_R13 + 0x2581));
    uVar8 = UISystem_0c880(uVar8,unaff_RBP + -0x50,uVar5,*(int8_t *)(unaff_RSI + 0x2602));
    UISystem_0c880(uVar8,unaff_RBP + -0x30,uVar5,*(int8_t *)(unaff_RSI + 0x2601));
    puVar7 = *(uint64_t **)(unaff_R15 + 0xd8);
    if (puVar7 == (uint64_t *)0x0) {
      *(uint64_t *)(unaff_RSI + 0x2538) = 0x3f8000003f800000;
      *(uint64_t *)(unaff_RSI + 0x2540) = 0x3f800000;
    }
    else {
      uVar5 = puVar7[1];
      *(uint64_t *)(unaff_RSI + 0x2538) = *puVar7;
      *(uint64_t *)(unaff_RSI + 0x2540) = uVar5;
      unaff_XMM6_Da = *(int32_t *)(*(int64_t *)(unaff_R15 + 0xd8) + 0x10);
    }
    *(int32_t *)(unaff_RSI + 0x2548) = unaff_XMM6_Da;
    fStack0000000000000038 = *(float *)(unaff_RBP + -0x80) - *(float *)(unaff_RBP + -0x60);
    fStack000000000000003c = *(float *)(unaff_RBP + -0x7c) - *(float *)(unaff_RBP + -0x5c);
    fVar1 = *(float *)(unaff_RBP + -0x78);
    fVar2 = *(float *)(unaff_RBP + -0x58);
    local_buffer_44 = 0x7f7fffff;
    fStack0000000000000040 =
         (fVar1 - *(float *)(*(int64_t *)(unaff_R12 + 0x140) + 0x158) * 1.5) - fVar2;
    SystemCore_EventHandler(unaff_RBP + -0x70,&local_buffer_00000058,&local_buffer_00000038);
    uVar8 = *(int32_t *)(unaff_RBP + -0x18);
    *(uint64_t *)(unaff_RSI + 0x2528) = local_var_58;
    *(uint64_t *)(unaff_RSI + 0x2530) = local_var_60;
    *(int32_t *)(unaff_RSI + 0x2554) = *(int32_t *)(unaff_RBP + -0x38);
    fVar3 = *(float *)(unaff_RBP + -0x80);
    fVar4 = *(float *)(unaff_RBP + -0x40);
    *(float *)(unaff_RSI + 0x254c) = fVar1;
    *(float *)(unaff_RSI + 0x2550) = fVar2;
    *(int32_t *)(unaff_RSI + 0x2558) = uVar8;
    *(float *)(unaff_RSI + 0x255c) = ABS(fVar3 - fVar4);
    *(float *)(unaff_RSI + 0x2560) =
         ABS(*(float *)(unaff_RBP + -0x20) - *(float *)(unaff_RBP + -0x80));
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x290) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkSystem_776ee(int64_t param_1)
void NetworkSystem_776ee(int64_t param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R15;
  int32_t uVar7;
  int32_t unaff_XMM6_Da;
  float local_var_38;
  float fStack000000000000003c;
  float local_var_40;
  int32_t local_buffer_44;
  uint64_t local_var_58;
  uint64_t local_var_60;
  uVar5 = *(uint64_t *)(param_1 + 0x38);
  UISystem_0c880();
  uVar7 = UISystem_0c880(*(uint64_t *)(unaff_R15 + 0x208),unaff_RBP + -0x70,uVar5,
                        *(int8_t *)(unaff_R13 + 0x2581));
  uVar7 = UISystem_0c880(uVar7,unaff_RBP + -0x50);
  UISystem_0c880(uVar7,unaff_RBP + -0x30);
  puVar6 = *(uint64_t **)(unaff_R15 + 0xd8);
  if (puVar6 == (uint64_t *)0x0) {
    *(uint64_t *)(unaff_RSI + 0x2538) = 0x3f8000003f800000;
    *(uint64_t *)(unaff_RSI + 0x2540) = 0x3f800000;
  }
  else {
    uVar5 = puVar6[1];
    *(uint64_t *)(unaff_RSI + 0x2538) = *puVar6;
    *(uint64_t *)(unaff_RSI + 0x2540) = uVar5;
    unaff_XMM6_Da = *(int32_t *)(*(int64_t *)(unaff_R15 + 0xd8) + 0x10);
  }
  *(int32_t *)(unaff_RSI + 0x2548) = unaff_XMM6_Da;
  local_var_38 = *(float *)(unaff_RBP + -0x80) - *(float *)(unaff_RBP + -0x60);
  fStack000000000000003c = *(float *)(unaff_RBP + -0x7c) - *(float *)(unaff_RBP + -0x5c);
  fVar1 = *(float *)(unaff_RBP + -0x78);
  fVar2 = *(float *)(unaff_RBP + -0x58);
  local_buffer_44 = 0x7f7fffff;
  local_var_40 = (fVar1 - *(float *)(*(int64_t *)(unaff_R12 + 0x140) + 0x158) * 1.5) - fVar2;
  SystemCore_EventHandler(unaff_RBP + -0x70,&local_buffer_00000058,&local_buffer_00000038);
  uVar7 = *(int32_t *)(unaff_RBP + -0x18);
  *(uint64_t *)(unaff_RSI + 0x2528) = local_var_58;
  *(uint64_t *)(unaff_RSI + 0x2530) = local_var_60;
  *(int32_t *)(unaff_RSI + 0x2554) = *(int32_t *)(unaff_RBP + -0x38);
  fVar3 = *(float *)(unaff_RBP + -0x80);
  fVar4 = *(float *)(unaff_RBP + -0x40);
  *(float *)(unaff_RSI + 0x254c) = fVar1;
  *(float *)(unaff_RSI + 0x2550) = fVar2;
  *(int32_t *)(unaff_RSI + 0x2558) = uVar7;
  *(float *)(unaff_RSI + 0x255c) = ABS(fVar3 - fVar4);
  *(float *)(unaff_RSI + 0x2560) =
       ABS(*(float *)(unaff_RBP + -0x20) - *(float *)(unaff_RBP + -0x80));
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x290) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkSystem_7788a(void)
void NetworkSystem_7788a(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x290) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkSystem_7789a(void)
void NetworkSystem_7789a(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x290) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkSystem_778a2(void)
void NetworkSystem_778a2(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x290) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void NetworkSystem_778d0(int64_t param_1,int64_t param_2)
void NetworkSystem_778d0(int64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_1 + 0x2510) != param_2) {
    if (*(int64_t *)(param_1 + 0x2510) != 0) {
      if ((*(int64_t *)(param_1 + 0x3450) != 0) || (*(int64_t *)(param_1 + 0x3458) != 0)) {
        (**(code **)(param_1 + 0x3458))(*(int64_t *)(param_1 + 0x3450),&system_data_99a0,0);
      }
      *(uint64_t *)(param_1 + 0x3450) = 0;
      *(uint64_t *)(param_1 + 0x3458) = 0;
    }
    *(int64_t *)(param_1 + 0x2510) = param_2;
    if (param_2 != 0) {
      *(int64_t *)(param_1 + 0x3450) = param_2;
      *(void **)(param_1 + 0x3458) = &memory_allocator_3264_ptr;
    }
  }
  return;
}
// 函数: void NetworkSystem_77da0(int64_t *param_1,char param_2)
void NetworkSystem_77da0(int64_t *param_1,char param_2)
{
  float fVar1;
  float fVar2;
  if (param_2 == '\0') {
    fVar2 = 8.0;
    (**(code **)(*param_1 + 0x150))(param_1,0x41000000,0,0);
  }
  else {
    (**(code **)(*param_1 + 0x150))(param_1,0,0x3f800000,0x3f800000);
    fVar2 = 0.0;
  }
  fVar1 = fVar2 - 1.665;
  *(bool *)(param_1 + 0x4b8) = fVar2 <= 2.0;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = 1.0 - fVar1 * 0.29985008;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)((int64_t)param_1 + 0x25c4) = fVar2;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address