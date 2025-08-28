#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part060.c - 7 个函数

// 函数：资源处理初始化函数
// 功能：初始化资源处理系统，设置参数并调用相关处理函数
void initialize_resource_processing(uint64_t system_handle, longlong resource_data, longlong config_data, char process_flag)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int32_t uVar8;
  longlong lVar9;
  longlong *plVar10;
  int32_t *puVar11;
  void *puVar12;
  longlong lVar13;
  uint64_t *puVar14;
  uint uVar15;
  int8_t auStack_958 [96];
  float fStack_8f8;
  uint64_t auStack_8f4 [5];
  uint uStack_8c8;
  longlong alStack_8c0 [5];
  int8_t auStack_898 [8];
  void *puStack_890;
  int32_t *puStack_888;
  int32_t uStack_880;
  uint64_t uStack_878;
  int8_t auStack_870 [8];
  longlong lStack_868;
  int8_t auStack_858 [8];
  void *puStack_850;
  uint uStack_848;
  longlong lStack_810;
  longlong lStack_808;
  longlong lStack_800;
  void *puStack_7d8;
  longlong lStack_7d0;
  int32_t uStack_7c0;
  uint64_t uStack_788;
  uint64_t uStack_780;
  void *puStack_728;
  int8_t *puStack_720;
  int32_t uStack_718;
  int8_t auStack_710 [40];
  uint64_t uStack_6e8;
  uint64_t uStack_6e0;
  uint64_t uStack_6d8;
  void *puStack_558;
  void *puStack_550;
  void *puStack_548;
  uint64_t uStack_3c8;
  uint64_t uStack_3c0;
  uint64_t uStack_3b8;
  uint64_t uStack_3b0;
  uint64_t uStack_3a8;
  uint64_t uStack_3a0;
  ulonglong uStack_58;
  
  puVar4 = _DAT_180c86960;
  if (param_3 == 0) {
    return;
  }
  uStack_788 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_958;
  lStack_800 = param_3;
  (**(code **)(*(longlong *)(param_3 + 0x20) + 0x10))((longlong *)(param_3 + 0x20),&system_flag_143c);
  FUN_1806279c0(&puStack_7d8,param_2);
  lVar9 = FUN_18009ba60(puVar4 + 8,&puStack_7d8);
  puStack_7d8 = &unknown_var_3456_ptr;
  lStack_808 = lVar9;
  if (lStack_7d0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_7d0 = 0;
  uStack_7c0 = 0;
  puStack_7d8 = &unknown_var_720_ptr;
  lVar13 = lVar9 + 0x128;
  lStack_810 = lVar13;
  iVar7 = _Mtx_lock(lVar13);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  FUN_180056150(param_3);
  if (*(char *)(lVar9 + 0x124) != '\0') {
    *(float *)(lVar9 + 0x120) = (float)*(double *)(param_3 + 0x40);
  }
  uStack_780 = 0x180c91970;
  iVar7 = _Mtx_lock(0x180c91970);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  if (param_4 == '\0') {
    plVar10 = (longlong *)_DAT_180c86960[1];
  }
  else {
    plVar10 = (longlong *)*_DAT_180c86960;
  }
  _DAT_180c8a9b0 = *plVar10;
  if (0.0 < *(double *)(param_3 + 0x40)) {
    FUN_180096240(puVar4,param_3,lVar9);
  }
  if (*(char *)((longlong)puVar4 + 0x39) == '\0') goto LAB_180097ca1;
  puVar12 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar12 = *(void **)(param_2 + 8);
  }
  FUN_1801299b0(puVar12,0,0);
  auStack_8f4[0] = 0;
  bVar5 = FUN_18010f6f0(&unknown_var_2612_ptr,auStack_8f4,0);
  uVar15 = (uint)bVar5;
  uStack_8c8 = (uint)bVar5;
  func_0x00018012e760();
  alStack_8c0[0] = 0;
  cVar6 = FUN_18010f6f0(&unknown_var_1920_ptr,alStack_8c0,0);
  if (cVar6 != '\0') {
    puStack_728 = &unknown_var_672_ptr;
    puStack_720 = auStack_710;
    auStack_710[0] = 0;
    uStack_718 = 0x11;
    strcpy_s(auStack_710,0x20,&unknown_var_1896_ptr);
    FUN_180097d40(puVar4,param_2,&puStack_728);
    puStack_728 = &unknown_var_720_ptr;
  }
  func_0x00018012e760();
  cVar6 = FUN_180111070(&unknown_var_1944_ptr,lVar9 + 0x124);
  if ((cVar6 != '\0') &&
     (uVar15 = (uint)bVar5, uStack_8c8 = uVar15, *(char *)(lVar9 + 0x124) != '\0')) {
    uVar15 = 1;
    uStack_8c8 = uVar15;
  }
  func_0x00018012e760();
  FUN_180111070(&unknown_var_1936_ptr,lVar9 + 0x125);
  func_0x00018012e760();
  FUN_180111070(&unknown_var_1960_ptr,lVar9 + 0x126);
  lVar2 = _DAT_180c8a9b0;
  *(int8_t *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1af8) + 0x210);
  if (lVar2 == 0) {
LAB_180096e94:
    FUN_180134640(0,3);
  }
  else if ((*(int *)(lVar2 + 0x10) != 3) || (*(int *)(lVar2 + 4) != 0)) {
    FUN_180134b80();
    goto LAB_180096e94;
  }
  FUN_180095da0(puVar4,param_3,lVar9);
  FUN_18012cfe0();
  if (*(char *)(lVar9 + 0x126) != '\0') {
    FUN_1806279c0(auStack_858,param_2);
    iVar7 = uStack_848 + 6;
    FUN_1806277c0(auStack_858,iVar7);
    puVar11 = (int32_t *)(puStack_850 + uStack_848);
    *puVar11 = 0x61724720;
    *(int16_t *)(puVar11 + 1) = 0x6870;
    *(int8_t *)((longlong)puVar11 + 6) = 0;
    puVar12 = &system_buffer_ptr;
    if (puStack_850 != (void *)0x0) {
      puVar12 = puStack_850;
    }
    uStack_848 = iVar7;
    FUN_1801299b0(puVar12,0,0);
    puVar14 = &uStack_3c8;
    lVar13 = 0x32;
    do {
      func_0x000180095340(puVar14);
      puVar14 = puVar14 + 2;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    puStack_558 = &unknown_var_1980_ptr;
    uStack_3c8 = 0x3f0000003f000000;
    uStack_3c0 = 0x3f8000003f000000;
    uStack_6e8 = puVar4[0xf];
    puStack_550 = &unknown_var_1972_ptr;
    uStack_3b8 = 0x3f0000003f000000;
    uStack_3b0 = 0x3f8000003f000000;
    uStack_6e0 = puVar4[0x13];
    uVar3 = puVar4[4];
    uVar1 = puVar4[3] + 4;
    if ((uVar1 < uVar3) && (uVar1 != uVar3)) {
                    // WARNING: Subroutine does not return
      memmove(puVar4[3],uVar1,uVar3 - uVar1);
    }
    puVar4[4] = uVar3 - 4;
    FUN_180626f80(&unknown_var_2016_ptr);
    fStack_8f8 = (float)_DAT_180c91d10;
    FUN_1800571e0(puVar4 + 3,&fStack_8f8);
    puStack_548 = &unknown_var_1992_ptr;
    uStack_3a8 = 0x3f4ccccd3e4ccccd;
    uStack_3a0 = 0x3f8000003f000000;
    uStack_6d8 = puVar4[3];
    fStack_8f8 = 4.2039e-45;
    puStack_890 = &unknown_var_3456_ptr;
    uStack_878 = 0;
    puStack_888 = (int32_t *)0x0;
    uStack_880 = 0;
    alStack_8c0[0] = lVar9 + 0xf0;
    lStack_868 = lVar9 + 0x30;
    puVar11 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar11 = 0;
    puStack_888 = puVar11;
    uVar8 = FUN_18064e990(puVar11);
    uStack_878 = CONCAT44(uStack_878._4_4_,uVar8);
    *puVar11 = 0x6c6c41;
    uStack_880 = 3;
    plVar10 = (longlong *)FUN_180058080(lVar9 + 0xf0,auStack_898,&puStack_890);
    FUN_180058080(lVar9 + 0x30,auStack_870,*plVar10 + 0x20);
    puStack_890 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar11);
  }
  if ((char)uVar15 != '\0') {
    lVar2 = lVar9 + 0x90;
    FUN_180058370(lVar2,*(uint64_t *)(lVar9 + 0xa0));
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar9 + 0x98) = lVar2;
    *(uint64_t *)(lVar9 + 0xa0) = 0;
    *(int8_t *)(lVar9 + 0xa8) = 0;
    *(uint64_t *)(lVar9 + 0xb0) = 0;
    FUN_1800593f0(lVar9,*(uint64_t *)(lVar9 + 0x10));
    *(longlong *)lVar9 = lVar9;
    *(longlong *)(lVar9 + 8) = lVar9;
    *(uint64_t *)(lVar9 + 0x10) = 0;
    *(int8_t *)(lVar9 + 0x18) = 0;
    *(uint64_t *)(lVar9 + 0x20) = 0;
    FUN_1800593f0(lVar9,0);
    *(longlong *)lVar9 = lVar9;
    *(longlong *)(lVar9 + 8) = lVar9;
    *(uint64_t *)(lVar9 + 0x10) = 0;
    *(int8_t *)(lVar9 + 0x18) = 0;
    *(uint64_t *)(lVar9 + 0x20) = 0;
  }
LAB_180097ca1:
  FUN_180056410(param_3);
  FUN_180057bf0(param_3);
  *(int *)(lVar9 + 0x178) = *(int *)(lVar9 + 0x178) + 1;
  iVar7 = _Mtx_unlock(0x180c91970);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  iVar7 = _Mtx_unlock(lVar13);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_958);
}





// 函数：资源处理完成函数
// 功能：处理资源处理完成后的清理工作
void complete_resource_processing(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// 函数：资源优先级比较函数
// 功能：比较两个资源的优先级，返回比较结果
uint64_t compare_resource_priority(longlong *resource_ptr, int priority_a, int priority_b)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  
  puVar1 = (uint64_t *)*param_1;
  puVar4 = (uint64_t *)puVar1[2];
  puVar2 = puVar4;
  puVar3 = puVar1;
  if (puVar4 == (uint64_t *)0x0) {
LAB_180098929:
    puVar3 = puVar1;
  }
  else {
    do {
      if (*(int *)(puVar2 + 4) < param_3) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar3 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    } while (puVar2 != (uint64_t *)0x0);
    if ((puVar3 == puVar1) || (param_3 < *(int *)(puVar3 + 4))) goto LAB_180098929;
  }
  puVar2 = puVar1;
  if (puVar4 != (uint64_t *)0x0) {
    do {
      if (*(int *)(puVar4 + 4) < param_2) {
        puVar4 = (uint64_t *)*puVar4;
      }
      else {
        puVar2 = puVar4;
        puVar4 = (uint64_t *)puVar4[1];
      }
    } while (puVar4 != (uint64_t *)0x0);
    if ((puVar2 != puVar1) && (*(int *)(puVar2 + 4) <= param_2)) goto LAB_180098960;
  }
  puVar2 = puVar1;
LAB_180098960:
  return CONCAT71((int7)((ulonglong)puVar2 >> 8),
                  *(float *)((longlong)puVar3 + 0x24) < *(float *)((longlong)puVar2 + 0x24));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：资源数据复制函数
// 功能：复制资源数据结构，创建新的资源实例
void copy_resource_data(int8_t *source_data)

{
  longlong lVar1;
  int8_t *puVar2;
  ulonglong uVar3;
  uint64_t uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  puVar2 = (int8_t *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3);
  uVar7 = 0;
  *(uint64_t *)(puVar2 + 0x14) = 0;
  *puVar2 = 0;
  *(int32_t *)(puVar2 + 0x10) = 0;
  *(uint64_t *)(puVar2 + 0x24) = 0;
  *(uint64_t *)(puVar2 + 0x1c) = 0;
  *(uint64_t *)(puVar2 + 8) = 0;
  *puVar2 = *param_1;
  *(int32_t *)(puVar2 + 0x10) = *(int32_t *)(param_1 + 0x10);
  *(int32_t *)(puVar2 + 0x18) = *(int32_t *)(param_1 + 0x18);
  *(int32_t *)(puVar2 + 0x14) = *(int32_t *)(param_1 + 0x14);
  *(uint64_t *)(puVar2 + 0x1c) = *(uint64_t *)(param_1 + 0x1c);
  *(uint64_t *)(puVar2 + 0x24) = *(uint64_t *)(param_1 + 0x24);
  uVar3 = uVar7;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    uVar3 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x10) * 8,3);
  }
  *(ulonglong *)(puVar2 + 8) = uVar3;
  uVar3 = uVar7;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      lVar1 = *(longlong *)(uVar3 + *(longlong *)(param_1 + 8));
      uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0xa8,8,3);
      lVar5 = FUN_18011fa30(uVar4,0);
      FUN_18013e410(lVar5,lVar1);
      FUN_18013e570(lVar5 + 0x10,lVar1 + 0x10);
      FUN_18013e390(lVar5 + 0x20,lVar1 + 0x20);
      *(int32_t *)(lVar5 + 0x30) = *(int32_t *)(lVar1 + 0x30);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      *(longlong *)(uVar3 + *(longlong *)(puVar2 + 8)) = lVar5;
      uVar3 = uVar3 + 8;
    } while ((int)uVar6 < *(int *)(param_1 + 0x10));
  }
  *(int8_t **)(_DAT_180c86890 + 0x1a08 + (longlong)_DAT_180c86958 * 8) = puVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：资源批量处理函数
// 功能：批量处理资源数据，执行复制和初始化操作
void batch_process_resources(void)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R14;
  ulonglong uVar5;
  
  uVar5 = unaff_RBP;
  do {
    lVar1 = *(longlong *)(uVar5 + *(longlong *)(unaff_R14 + 8));
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xa8,8,3);
    lVar3 = FUN_18011fa30(uVar2,0);
    FUN_18013e410(lVar3,lVar1);
    FUN_18013e570(lVar3 + 0x10,lVar1 + 0x10);
    FUN_18013e390(lVar3 + 0x20,lVar1 + 0x20);
    *(int32_t *)(lVar3 + 0x30) = *(int32_t *)(lVar1 + 0x30);
    uVar4 = (int)unaff_RBP + 1;
    unaff_RBP = (ulonglong)uVar4;
    *(longlong *)(uVar5 + *(longlong *)(unaff_RSI + 8)) = lVar3;
    uVar5 = uVar5 + 8;
  } while ((int)uVar4 < *(int *)(unaff_R14 + 0x10));
  *(longlong *)(_DAT_180c86890 + 0x1a08 + (longlong)_DAT_180c86958 * 8) = unaff_RSI;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：资源清理函数
// 功能：清理资源数据，释放相关内存
void cleanup_resources(void)

{
  uint64_t unaff_RSI;
  
  *(uint64_t *)(_DAT_180c86890 + 0x1a08 + (longlong)_DAT_180c86958 * 8) = unaff_RSI;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：资源管理器初始化函数
// 功能：初始化资源管理器，设置各种参数和回调函数
void initialize_resource_manager(longlong *manager_ptr, int param_a, int param_b, uint64_t callback_data)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  int8_t auStack_178 [48];
  longlong **pplStack_148;
  int iStack_140;
  int iStack_13c;
  longlong *plStack_138;
  longlong *plStack_130;
  longlong *plStack_128;
  longlong *aplStack_120 [2];
  int32_t uStack_110;
  uint64_t uStack_10c;
  uint64_t uStack_104;
  int32_t uStack_fc;
  int32_t uStack_f8;
  longlong *plStack_f0;
  int32_t uStack_e8;
  int8_t uStack_e4;
  int iStack_e0;
  int iStack_dc;
  int32_t uStack_d8;
  int32_t uStack_d4;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  int32_t uStack_c0;
  longlong *plStack_b8;
  int32_t uStack_b0;
  int8_t uStack_ac;
  longlong *plStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  longlong *plStack_70;
  longlong *plStack_68;
  void *puStack_60;
  int8_t *puStack_58;
  int32_t uStack_50;
  int8_t auStack_48 [16];
  ulonglong uStack_38;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  lVar3 = *param_1;
  _DAT_180c8a9b0 = lVar3;
  *(float *)(lVar3 + 0x10) = (float)param_2;
  *(float *)(lVar3 + 0x14) = (float)param_3;
  *(int32_t *)(lVar3 + 0x18) = 0x3c888889;
  *(int8_t *)(lVar3 + 200) = 0;
  *(int32_t *)(lVar3 + 0x3c) = 0xf;
  *(int32_t *)(lVar3 + 0x40) = 0xcb;
  *(int32_t *)(lVar3 + 0x44) = 0xcd;
  *(int32_t *)(lVar3 + 0x48) = 200;
  *(int32_t *)(lVar3 + 0x4c) = 0xd0;
  *(int32_t *)(lVar3 + 0x58) = 199;
  *(int32_t *)(lVar3 + 0x5c) = 0xcf;
  *(int32_t *)(lVar3 + 100) = 0xd3;
  *(int32_t *)(lVar3 + 0x68) = 0xe;
  *(int32_t *)(lVar3 + 0x70) = 0x1c;
  *(int32_t *)(lVar3 + 0x74) = 1;
  *(int32_t *)(lVar3 + 0x78) = 0x1e;
  *(int32_t *)(lVar3 + 0x7c) = 0x2e;
  *(int32_t *)(lVar3 + 0x80) = 0x2f;
  *(int32_t *)(lVar3 + 0x84) = 0x2d;
  *(int32_t *)(lVar3 + 0x88) = 0x15;
  *(int32_t *)(lVar3 + 0x8c) = 0x2c;
  *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 0x40;
  *(uint64_t *)(lVar3 + 0x110) = param_4;
  *(void **)(lVar3 + 0x100) = &unknown_var_1840_ptr;
  *(code **)(lVar3 + 0xf8) = FUN_180099f90;
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0xa0,8,3);
  plVar6 = (longlong *)FUN_1800842a0(uVar5);
  plStack_70 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  *(int32_t *)(plVar6 + 2) = 0x1fffe;
  *(int16_t *)((longlong)plVar6 + 0x14) = 0x100;
  plVar7 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3);
  puStack_60 = &unknown_var_7512_ptr;
  puStack_58 = auStack_48;
  auStack_48[0] = 0;
  uStack_50 = 5;
  pplStack_148 = (longlong **)plVar7;
  strcpy_s(auStack_48,0x10,&unknown_var_2264_ptr);
  *plVar7 = (longlong)&unknown_var_3552_ptr;
  *plVar7 = (longlong)&unknown_var_3696_ptr;
  *(int32_t *)(plVar7 + 1) = 0;
  *plVar7 = (longlong)&unknown_var_7064_ptr;
  LOCK();
  *(int8_t *)(plVar7 + 2) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)((longlong)plVar7 + 0x14) = 0;
  UNLOCK();
  plVar7[3] = 0;
  plVar7[4] = 0;
  plStack_a0 = plVar7;
  (**(code **)(*plVar7 + 0x28))(plVar7);
  plStack_a0 = (longlong *)param_1[2];
  param_1[2] = (longlong)plVar7;
  if (plStack_a0 != (longlong *)0x0) {
    (**(code **)(*plStack_a0 + 0x38))();
  }
  puStack_60 = &unknown_var_720_ptr;
  lVar4 = param_1[2];
  pplStack_148 = &plStack_130;
  plStack_130 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  FUN_180255880(lVar4,&plStack_130);
  plVar7 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3);
  *plVar7 = (longlong)&unknown_var_3552_ptr;
  *plVar7 = (longlong)&unknown_var_3696_ptr;
  *(int32_t *)(plVar7 + 1) = 0;
  *plVar7 = (longlong)&unknown_var_6752_ptr;
  plVar7[4] = 0;
  plVar7[2] = 0;
  *(byte *)(plVar7 + 5) = *(byte *)(plVar7 + 5) | 1;
  pplStack_148 = (longlong **)plVar7;
  plStack_68 = plVar7;
  (**(code **)(*plVar7 + 0x28))(plVar7);
  *(int32_t *)(plVar7 + 2) = 0xffff;
  *(int8_t *)(plVar7 + 3) = 1;
  *(int32_t *)((longlong)plVar7 + 0x14) = 2;
  plVar8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
  *plVar8 = (longlong)&unknown_var_3552_ptr;
  *plVar8 = (longlong)&unknown_var_3696_ptr;
  *(int32_t *)(plVar8 + 1) = 0;
  *plVar8 = (longlong)&unknown_var_6960_ptr;
  LOCK();
  *(int32_t *)(plVar8 + 2) = 0;
  UNLOCK();
  plVar8[3] = 0;
  pplStack_148 = (longlong **)plVar8;
  plStack_98 = plVar8;
  (**(code **)(*plVar8 + 0x28))(plVar8);
  plStack_98 = (longlong *)param_1[3];
  param_1[3] = (longlong)plVar8;
  if (plStack_98 != (longlong *)0x0) {
    (**(code **)(*plStack_98 + 0x38))();
  }
  lVar4 = param_1[3];
  pplStack_148 = &plStack_128;
  plStack_128 = plVar7;
  (**(code **)(*plVar7 + 0x28))(plVar7);
  FUN_180255b70(lVar4,&plStack_128);
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3);
  plVar8 = (longlong *)FUN_18023a2e0(uVar5,1);
  if (plVar8 != (longlong *)0x0) {
    plStack_90 = plVar8;
    (**(code **)(*plVar8 + 0x28))(plVar8);
  }
  plStack_90 = (longlong *)param_1[0xc];
  param_1[0xc] = (longlong)plVar8;
  if (plStack_90 != (longlong *)0x0) {
    (**(code **)(*plStack_90 + 0x38))();
  }
  uVar5 = FUN_180294610(*(uint64_t *)(lVar3 + 0xa0),&uStack_88,&iStack_140,&iStack_13c);
  FUN_18009bb60(uVar5,aplStack_120,uStack_88,iStack_140 * iStack_13c);
  plVar8 = aplStack_120[0];
  uStack_110 = 1;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f8 = 1;
  uStack_80 = 0;
  plStack_f0 = (longlong *)0x0;
  uStack_e8 = 0xffffffff;
  uStack_e4 = 0;
  uStack_10c = 0x700000001;
  plStack_138 = aplStack_120[0];
  if (aplStack_120[0] != (longlong *)0x0) {
    (**(code **)(*aplStack_120[0] + 0x28))(aplStack_120[0]);
  }
  plStack_f0 = plVar8;
  plStack_138 = (longlong *)param_1[0xc];
  pplStack_148 = (longlong **)&iStack_e0;
  iStack_e0 = iStack_140;
  iStack_dc = iStack_13c;
  uStack_d8 = 1;
  uStack_d4 = 1;
  uStack_d0 = 7;
  uStack_c8 = 0;
  uStack_c0 = 1;
  plStack_b8 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8);
  }
  uStack_b0 = 0xffffffff;
  uStack_ac = 0;
  FUN_1800a5110(_DAT_180c86938,&iStack_e0,plStack_138);
  *(longlong *)(*(longlong *)(lVar3 + 0xa0) + 8) = param_1[0xc];
  fVar1 = *(float *)(_DAT_180c8a9b0 + 0x14);
  fVar2 = *(float *)(_DAT_180c8a9b0 + 0x10);
  fVar9 = 1.0 / fVar2;
  *(float *)(param_1 + 4) = fVar9 + fVar9;
  *(uint64_t *)((longlong)param_1 + 0x24) = 0;
  *(uint64_t *)((longlong)param_1 + 0x2c) = 0;
  fVar10 = 1.0 / fVar1;
  *(float *)((longlong)param_1 + 0x34) = fVar10 * -2.0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(int32_t *)(param_1 + 9) = 0xbf000000;
  *(int32_t *)((longlong)param_1 + 0x4c) = 0;
  *(float *)(param_1 + 10) = -(fVar9 * fVar2);
  *(float *)((longlong)param_1 + 0x54) = fVar10 * fVar1;
  *(int32_t *)(param_1 + 0xb) = 0x3f000000;
  *(int32_t *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(int16_t *)(param_1 + 0x14) = 1;
  *(int32_t *)((longlong)param_1 + 0x7c) = 0x4000301;
  *(int16_t *)((longlong)param_1 + 0x7a) = 0;
  param_1[0x15] = param_1[0xd];
  param_1[0x16] = param_1[0xe];
  param_1[0x17] = param_1[0xf];
  param_1[0x18] = param_1[0x10];
  param_1[0x19] = param_1[0x11];
  param_1[0x1a] = param_1[0x12];
  param_1[0x1b] = param_1[0x13];
  param_1[0x1c] = param_1[0x14];
  FUN_180099100(param_1);
  FUN_180125780();
  FUN_180127440();
  *(int8_t *)(param_1 + 1) = 1;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x38))(plVar8);
  }
  if (aplStack_120[0] != (longlong *)0x0) {
    (**(code **)(*aplStack_120[0] + 0x38))();
  }
  (**(code **)(*plVar7 + 0x38))(plVar7);
  (**(code **)(*plVar6 + 0x38))(plVar6);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Removing unreachable block (ram,0x000180099310)
// WARNING: Removing unreachable block (ram,0x0001800993a9)



// 函数：资源管理器配置函数
// 功能：配置资源管理器的各种参数和处理函数
void configure_resource_manager(longlong manager_handle)

{
  longlong lVar1;
  uint8_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  void **ppuStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  longlong **pplStackX_20;
  int32_t uStack_170;
  int32_t uStack_16c;
  int32_t uStack_164;
  void *puStack_150;
  longlong lStack_148;
  int32_t uStack_140;
  ulonglong uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  longlong *plStack_120;
  longlong *plStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  int32_t uStack_100;
  longlong *plStack_f8;
  void *puStack_f0;
  longlong lStack_e8;
  int32_t uStack_e0;
  ulonglong uStack_d8;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int32_t uStack_c8;
  int32_t uStack_c4;
  longlong *plStack_c0;
  uint64_t uStack_b8;
  int32_t uStack_b0;
  int16_t uStack_ac;
  int16_t uStack_aa;
  longlong *plStack_a8;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  longlong *plStack_88;
  int8_t auStack_80 [32];
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  longlong *plStack_50;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  ppuStackX_8 = (void **)((ulonglong)ppuStackX_8 & 0xffffffffffffff00);
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_18009e9e0(param_1,&plStackX_10,&unknown_var_2296_ptr);
  plStack_f8 = (longlong *)0x0;
  pplStackX_20 = (longlong **)&puStack_f0;
  puStack_f0 = &unknown_var_3456_ptr;
  uStack_d8 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  plStack_c0 = (longlong *)0x0;
  plStack_118 = plStackX_10;
  uStack_108 = CONCAT26(uStack_aa,CONCAT24(uStack_ac,uStack_b0));
  uStack_110 = uStack_b8;
  uStack_100 = 2;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  FUN_18009e9e0(pplStackX_20,&plStackX_18,&unknown_var_2280_ptr);
  uVar3 = uStack_b0;
  uVar5 = uStack_b8;
  puStack_150 = &unknown_var_3456_ptr;
  uStack_138 = 0;
  lStack_148 = 0;
  uStack_140 = 0;
  plStack_120 = (longlong *)0x0;
  uVar2 = CONCAT24(uStack_ac,uStack_b0);
  uStack_130 = 0;
  uStack_128 = 0;
  lVar1 = plStackX_10[0x2b7];
  pplStackX_20 = &plStack_a8;
  plStack_a8 = plStack_118;
  uStack_a0 = (int32_t)uStack_110;
  uStack_9c = uStack_110._4_4_;
  uStack_98 = (int32_t)uStack_108;
  uStack_94 = uStack_108._4_4_;
  uStack_90 = uStack_100;
  plStack_88 = plStack_f8;
  if (plStack_f8 != (longlong *)0x0) {
    (**(code **)(*plStack_f8 + 0x28))();
  }
  FUN_180627ae0(auStack_80,&puStack_f0);
  uStack_60 = uStack_d0;
  uStack_5c = uStack_cc;
  uStack_58 = uStack_c8;
  uStack_54 = uStack_c4;
  plStack_50 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    (**(code **)(*plStack_c0 + 0x28))();
  }
  uVar4 = FUN_180299eb0(lVar1,0,&plStack_a8,&ppuStackX_8);
  *(uint64_t *)(param_1 + 0x68) = uVar4;
  lVar1 = plStackX_18[0x2b7];
  pplStackX_20 = &plStack_a8;
  uStack_170 = (int32_t)uVar5;
  uStack_16c = (int32_t)((ulonglong)uVar5 >> 0x20);
  uStack_164 = (int32_t)(CONCAT26(uStack_aa,uVar2) >> 0x20);
  plStack_88 = (longlong *)0x0;
  uStack_90 = 2;
  uStack_94 = uStack_164;
  uStack_98 = uVar3;
  uStack_9c = uStack_16c;
  uStack_a0 = uStack_170;
  FUN_180627ae0(auStack_80,&puStack_150);
  uStack_60 = (int32_t)uStack_130;
  uStack_5c = uStack_130._4_4_;
  uStack_58 = (int32_t)uStack_128;
  uStack_54 = uStack_128._4_4_;
  plStack_50 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    (**(code **)(*plStack_120 + 0x28))();
  }
  uVar5 = FUN_180299eb0(lVar1,0,&plStack_a8,&ppuStackX_8);
  *(uint64_t *)(param_1 + 0xa8) = uVar5;
  if (plStack_120 != (longlong *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  ppuStackX_8 = &puStack_150;
  puStack_150 = &unknown_var_3456_ptr;
  if (lStack_148 == 0) {
    uStack_138 = uStack_138 & 0xffffffff00000000;
    lStack_148 = 0;
    puStack_150 = &unknown_var_720_ptr;
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    if (plStack_c0 != (longlong *)0x0) {
      (**(code **)(*plStack_c0 + 0x38))();
    }
    ppuStackX_8 = &puStack_f0;
    puStack_f0 = &unknown_var_3456_ptr;
    if (lStack_e8 == 0) {
      lStack_e8 = 0;
      uStack_d8 = uStack_d8 & 0xffffffff00000000;
      puStack_f0 = &unknown_var_720_ptr;
      if (plStack_f8 != (longlong *)0x0) {
        (**(code **)(*plStack_f8 + 0x38))();
      }
      if (plStackX_10 != (longlong *)0x0) {
        (**(code **)(*plStackX_10 + 0x38))();
      }
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x000180099be3)
// WARNING: Removing unreachable block (ram,0x000180099ab6)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



