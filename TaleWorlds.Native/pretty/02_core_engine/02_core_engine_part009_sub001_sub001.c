#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part009_sub001_sub001.c - 核心引擎模块子组件1
// 本文件包含27个函数，主要负责进程管理、线程管理、互斥锁初始化等核心功能

// 全局变量声明
extern void *current_process_handle;
extern void *global_mutex_1;
extern void *global_mutex_2;
extern int thread_local_data_initialized;
extern int global_counter;
extern void *global_data_structure;
extern int process_initialization_status;

/**
 * 获取当前进程句柄
 * 功能：获取当前进程的句柄并存储到全局变量中
 */
void get_current_process_handle(void)
{
    current_process_handle = GetCurrentProcess();
    return;
}



/**
 * 初始化系统核心组件
 * 功能：初始化系统的核心组件并返回初始化状态
 * 返回值：初始化成功返回0，失败返回-1
 */
int initialize_system_core(void)
{
    longlong result;
    
    // 调用初始化函数
    FUN_180629770();
    result = FUN_1808fc7d0(&UNK_180943130);
    return (result != 0) - 1;
}



int FUN_1800435a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  _Mtx_init_in_situ(0x180c966f0,2,param_3,param_4,0xfffffffffffffffe);
  lVar1 = FUN_1808fc7d0(FUN_180943140);
  return (lVar1 != 0) - 1;
}



int FUN_1800435e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  _Mtx_init_in_situ(0x180c96740,2,param_3,param_4,0xfffffffffffffffe);
  lVar1 = FUN_1808fc7d0(FUN_180943160);
  return (lVar1 != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180043610(void)

{
  longlong lVar1;
  
  _DAT_180c967b8 = 3;
  _DAT_180c96790 = &DAT_180c96790;
  _DAT_180c96798 = &DAT_180c96790;
  _DAT_180c967a0 = 0;
  _DAT_180c967a8 = 0;
  _DAT_180c967b0 = 0;
  lVar1 = FUN_1808fc7d0(FUN_180943180);
  return (lVar1 != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043690(void)
void FUN_180043690(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x10;
  strcpy_s(auStack_88,0x80,&UNK_180a3def0,in_R9,0xfffffffffffffffe);
  _DAT_180c967d0 = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180043720(void)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
  *(undefined8 *)(lVar1 + 0x18) = &UNK_18098bcb0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x18) = &UNK_180a3c3e0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
  piVar2 = *(int **)(lVar1 + 0x50);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(lVar1 + 0x60);
  }
  else {
    if (*piVar2 != 0x1e) goto LAB_1808fd14a;
    piVar2 = (int *)malloc(0x100);
    free(0);
    if (piVar2 == (int *)0x0) {
      return 0xffffffff;
    }
    *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(lVar1 + 0x50);
  }
  *piVar2 = 0;
  *(int **)(lVar1 + 0x50) = piVar2;
LAB_1808fd14a:
  *(code **)(piVar2 + (longlong)*piVar2 * 2 + 4) = FUN_1809431a0;
  *piVar2 = *piVar2 + 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043790(void)
void FUN_180043790(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x17;
  strcpy_s(auStack_88,0x80,&UNK_180a3e3d8,in_R9,0xfffffffffffffffe);
  _DAT_180c967d4 = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043820(void)
void FUN_180043820(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x11;
  strcpy_s(auStack_88,0x80,&UNK_180a3e3f0,in_R9,0xfffffffffffffffe);
  _DAT_180c967d8 = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1800438b0(void)

{
  longlong lVar1;
  
  _DAT_180c96808 = 3;
  _DAT_180c967e0 = &DAT_180c967e0;
  _DAT_180c967e8 = &DAT_180c967e0;
  _DAT_180c967f0 = 0;
  _DAT_180c967f8 = 0;
  _DAT_180c96800 = 0;
  lVar1 = FUN_1808fc7d0(FUN_180943200);
  return (lVar1 != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180043960(void)

{
  longlong lVar1;
  int iVar2;
  
  _DAT_180c0c6c0 = 0x100;
  iVar2 = 0;
  do {
    FUN_180767e20(iVar2,0x4000000000000000,0xffff7fff,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xd);
  *(uint *)(_DAT_180be14a0 + 0x330) = *(uint *)(_DAT_180be14a0 + 0x330) | 4;
  _DAT_180be1324 = 0xffffffff;
  lVar1 = FUN_1808fc7d0(&UNK_180943250);
  return (lVar1 != 0) - 1;
}



int FUN_1800439c0(void)

{
  longlong lVar1;
  
  func_0x000180741c80(0x180c0c340);
  lVar1 = FUN_1808fc7d0(&UNK_180943260);
  return (lVar1 != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800439e0(void)
void FUN_1800439e0(void)

{
  int iVar1;
  
  iVar1 = FUN_1807681a0(0);
  _DAT_180c0c6d0 = 0x180be14a8;
  if (iVar1 != 0) {
    _DAT_180c0c6d0 = 0x180be14c0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043a10(void)
void FUN_180043a10(void)

{
  int iVar1;
  
  iVar1 = FUN_1807681a0(1);
  if (iVar1 != 0) {
    _DAT_180c0c6d8 = 0x180be15c0;
    return;
  }
  iVar1 = FUN_1807681a0(0);
  _DAT_180c0c6d8 = 0x180be14e0;
  if (iVar1 != 0) {
    _DAT_180c0c6d8 = 0x180be1550;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043a90(void)
void FUN_180043a90(void)

{
  int iVar1;
  
  iVar1 = FUN_1807681a0(0);
  _DAT_180c0d100 = 0x180be1c00;
  if (iVar1 != 0) {
    _DAT_180c0d100 = 0x180be1c08;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043ac0(void)
void FUN_180043ac0(void)

{
  int iVar1;
  
  iVar1 = FUN_1807681a0(0);
  _DAT_180c0e170 = 0x180be23a0;
  if (iVar1 != 0) {
    _DAT_180c0e170 = 0x180be23c0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043af0(void)
void FUN_180043af0(void)

{
  int iVar1;
  
  iVar1 = FUN_1807681a0(0);
  _DAT_180c108d0 = 0x180be2ad8;
  if (iVar1 != 0) {
    _DAT_180c108d0 = 0x180be2af8;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043b20(void)
void FUN_180043b20(void)

{
  int iVar1;
  
  iVar1 = FUN_1807681a0(0);
  _DAT_180c2bca0 = 0x180be4710;
  if (iVar1 != 0) {
    _DAT_180c2bca0 = 0x180be4728;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043b50(void)
void FUN_180043b50(void)

{
  int iVar1;
  
  iVar1 = FUN_1807681a0(1);
  if (iVar1 != 0) {
    _DAT_180c31148 = 0x180be6078;
    return;
  }
  iVar1 = FUN_1807681a0(0);
  _DAT_180c31148 = 0x180be6068;
  if (iVar1 != 0) {
    _DAT_180c31148 = 0x180be6070;
  }
  return;
}



int FUN_180043ba0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)0x180c35590;
  lVar2 = 0x10;
  do {
    func_0x000180767970(puVar1);
    *puVar1 = &UNK_18097e888;
    puVar1 = puVar1 + 0x2b;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  lVar2 = FUN_1808fc7d0(&UNK_180943270);
  return (lVar2 != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043c00(void)
void FUN_180043c00(void)

{
  int iVar1;
  
  iVar1 = FUN_1807681a0(0);
  _DAT_180c4ea58 = 0x180bebac8;
  if (iVar1 != 0) {
    _DAT_180c4ea58 = 0x180bebad8;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180043c30(void)
void FUN_180043c30(void)

{
  int iVar1;
  
  iVar1 = FUN_1807681a0(3);
  if (iVar1 != 0) {
    _DAT_180c4ea60 = 0x180bebc10;
    return;
  }
  iVar1 = FUN_1807681a0(2);
  if (iVar1 != 0) {
    _DAT_180c4ea60 = 0x180bebbb0;
    return;
  }
  iVar1 = FUN_1807681a0(0);
  _DAT_180c4ea60 = 0x180bebaf0;
  if (iVar1 != 0) {
    _DAT_180c4ea60 = 0x180bebb50;
  }
  return;
}



int FUN_180043cc0(void)

{
  longlong lVar1;
  
  FUN_1808dbcd0(0x180c4f510);
  lVar1 = FUN_1808fc7d0(&UNK_180943310);
  return (lVar1 != 0) - 1;
}



int FUN_180043ce0(void)

{
  longlong lVar1;
  
  _Mtx_init_in_situ(0x180c82170,2);
  lVar1 = FUN_1808fc7d0(&UNK_180943320);
  return (lVar1 != 0) - 1;
}



void WotsMainSDLL(undefined8 param_1)

{
  undefined8 auStackX_18 [2];
  
                    // 0x43d20  31  WotsMainSDLL




// 函数: void FUN_180043d40(longlong param_1)
void FUN_180043d40(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  FUN_180046e20();
  _DAT_180c82864 = _DAT_180c82864 + 1;
  FUN_180050b00();
  if (_DAT_180c91048 != (longlong *)0x0) {
    if ((undefined *)*_DAT_180c91048 == &UNK_1809fe100) {
      cVar3 = (char)_DAT_180c91048[2] != '\0';
    }
    else {
      cVar3 = (**(code **)((undefined *)*_DAT_180c91048 + 0x68))();
    }
    if (cVar3 == '\0') goto LAB_180043e47;
  }
  plVar2 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0xc0,8,3,uVar4);
  plStackX_20 = plVar2;
  FUN_180049830(plVar2);
  *plVar2 = (longlong)&UNK_1809fe100;
  plVar2[3] = -4;
  pplStackX_10 = (longlong **)plVar2;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  pplStackX_10 = (longlong **)_DAT_180c91048;
  if (_DAT_180c91048 != (longlong *)0x0) {
    lVar1 = *_DAT_180c91048;
    _DAT_180c91048 = plVar2;
    (**(code **)(lVar1 + 0x38))();
    plVar2 = _DAT_180c91048;
  }
  _DAT_180c91048 = plVar2;
  if ((undefined *)*_DAT_180c91048 == &UNK_1809fe100) {
    if (_DAT_180c86948 != 0) {
      FUN_18006e990();
    }
  }
  else {
    (**(code **)((undefined *)*_DAT_180c91048 + 0x60))();
  }
  plVar2 = _DAT_180c91048;
  plStackX_18 = _DAT_180c91048;
  _DAT_180c91048 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
LAB_180043e47:
  FUN_1800466d0(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(_DAT_180c86870 + 0x1ed) != '\0') {
    plVar2 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3);
    *plVar2 = (longlong)&UNK_180a21690;
    *plVar2 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar2 + 1) = 0;
    *plVar2 = (longlong)&UNK_18098bdc8;
    LOCK();
    *(undefined1 *)(plVar2 + 2) = 0;
    UNLOCK();
    plVar2[3] = -1;
    *plVar2 = (longlong)&UNK_18098bd40;
    plVar2[4] = 0x180c91060;
    plStackX_20 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
    uVar4 = _DAT_180c82868;
    pplStackX_10 = &plStackX_8;
    plStackX_8 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
    FUN_18005e300(uVar4,&plStackX_8);
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  return;
}



undefined8 *
FUN_180043f30(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_18098bd40;
  *param_1 = &UNK_18098bdc8;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}







// 函数: void FUN_180043f90(void)
void FUN_180043f90(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}







// 函数: void FUN_180044a30(undefined8 *param_1)
void FUN_180044a30(undefined8 *param_1)

{
  *param_1 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180044a50(void)
void FUN_180044a50(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_248 [32];
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  longlong *plStack_208;
  undefined4 uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined4 uStack_1e8;
  ulonglong uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined4 uStack_1c8;
  ulonglong uStack_1c0;
  undefined *puStack_1b8;
  longlong lStack_1b0;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  longlong *plStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined4 uStack_178;
  undefined auStack_170 [32];
  longlong **applStack_150 [3];
  undefined1 auStack_138 [272];
  ulonglong uStack_28;
  
  uStack_198 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  uStack_200 = 0;
  if (*(char *)(_DAT_180c86928 + 0x18) == '\0') {
    FUN_18004b560(&puStack_1b8);
    (**(code **)(**(longlong **)(_DAT_180c86870 + 0x2b0) + 0x98))
              (*(longlong **)(_DAT_180c86870 + 0x2b0),&puStack_1b8);
    FUN_180061380();
    lVar3 = _DAT_180c86928;
    uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
    plVar6 = (longlong *)FUN_1800636f0(uVar5,8,lVar3);
    plStack_190 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    *(undefined4 *)(plVar6 + 0xd) = 0xbb80073;
    puVar1 = *(undefined8 **)(lVar3 + 400);
    pcVar2 = *(code **)*puVar1;
    applStack_150[0] = &plStack_208;
    plStack_208 = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6);
    (*pcVar2)(puVar1,&plStack_208);
    (**(code **)(*plVar6 + 0x38))(plVar6);
    FUN_1800624c0();
    puStack_1d8 = &UNK_180a3c3e0;
    uStack_1c0 = 0;
    puStack_1d0 = (undefined *)0x0;
    uStack_1c8 = 0;
    puStack_1f8 = &UNK_180a3c3e0;
    uStack_1e0 = 0;
    puStack_1f0 = (undefined *)0x0;
    uStack_1e8 = 0;
    plStack_208 = (longlong *)CONCAT44(plStack_208._4_4_,0x10);
    iVar4 = GetComputerNameA(applStack_150,&plStack_208);
    if (iVar4 == 0) {
      FUN_180627160(&UNK_180a3c110);
    }
    else {
      if (0xf < ((ulonglong)plStack_208 & 0xffffffff)) goto LAB_180044db8;
      *(undefined1 *)((longlong)applStack_150 + ((ulonglong)plStack_208 & 0xffffffff)) = 0;
      (**(code **)(puStack_1d8 + 0x10))(&puStack_1d8,applStack_150);
    }
    plStack_208 = (longlong *)CONCAT44(plStack_208._4_4_,0x101);
    iVar4 = GetUserNameA(auStack_138,&plStack_208);
    if (iVar4 == 0) {
      FUN_180627160(&UNK_180a3c138);
    }
    else {
      if (0x100 < ((ulonglong)plStack_208 & 0xffffffff)) {
        FUN_1808fcdc8();
LAB_180044db8:
        FUN_1808fcdc8();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      auStack_138[(ulonglong)plStack_208 & 0xffffffff] = 0;
      (**(code **)(puStack_1f8 + 0x10))(&puStack_1f8,auStack_138);
    }
    puStack_218 = &DAT_18098bc73;
    if (puStack_1f0 != (undefined *)0x0) {
      puStack_218 = puStack_1f0;
    }
    puStack_220 = &DAT_18098bc73;
    if (puStack_1d0 != (undefined *)0x0) {
      puStack_220 = puStack_1d0;
    }
    puStack_228 = &UNK_18098bab0;
    FUN_1800623b0(_DAT_180c86928,5,0xffffffffffffffff,4);
    puStack_188 = &UNK_18098bc80;
    puStack_180 = auStack_170;
    uStack_178 = 0;
    auStack_170[0] = 0;
    uStack_200 = 2;
    FUN_18004b860(&puStack_188,&UNK_1809fd0a0,0x130a7);
    puStack_220 = &DAT_18098bc73;
    if (puStack_180 != (undefined *)0x0) {
      puStack_220 = puStack_180;
    }
    puStack_228 = &UNK_18098bac8;
    FUN_1800623b0(_DAT_180c86928,5,0xffffffffffffffff,4);
    uStack_200 = 0;
    puStack_188 = &UNK_18098bcb0;
    puStack_1f8 = &UNK_180a3c3e0;
    if (puStack_1f0 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_1f0 = (undefined *)0x0;
    uStack_1e0 = uStack_1e0 & 0xffffffff00000000;
    puStack_1f8 = &UNK_18098bcb0;
    puStack_1d8 = &UNK_180a3c3e0;
    if (puStack_1d0 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_1d0 = (undefined *)0x0;
    uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
    puStack_1d8 = &UNK_18098bcb0;
    puStack_1b8 = &UNK_180a3c3e0;
    if (lStack_1b0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_1b0 = 0;
    uStack_1a0 = 0;
    puStack_1b8 = &UNK_18098bcb0;
  }
  uStack_200 = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_248);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_180044dc0(undefined8 param_1,longlong param_2)
void FUN_180044dc0(undefined8 param_1,longlong param_2)

{
  longlong **pplVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined *puVar13;
  ulonglong uVar14;
  uint uVar15;
  char cVar16;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  longlong lStackX_20;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined4 uStack_a0;
  undefined *puStack_98;
  longlong lStack_90;
  uint uStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined4 uStack_60;
  undefined8 uStack_58;
  longlong **pplStack_50;
  longlong *plStack_48;
  
  uStack_58 = 0xfffffffffffffffe;
  uVar5 = FUN_180043f90();
  FUN_180629770();
  plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x68,8,3);
  pplVar1 = (longlong **)(plVar6 + 1);
  plStackX_10 = plVar6;
  pplStackX_18 = pplVar1;
  _Mtx_init_in_situ(pplVar1,2);
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  *(undefined2 *)plVar6 = 0;
  _DAT_180c8ed10 = plVar6;
  if ((char)*plVar6 != '\0') goto LAB_180044faf;
  pplStack_50 = pplVar1;
  iVar2 = _Mtx_lock(pplVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  SymSetOptions(0x2017);
  FUN_180629090(&puStack_b8);
  puVar13 = &DAT_18098bc73;
  if (puStack_b0 != (undefined *)0x0) {
    puVar13 = puStack_b0;
  }
  SymSetSearchPath(_DAT_180c96218,puVar13);
  lVar7 = plVar6[0xb];
  if (lVar7 == 0) {
    lVar7 = LoadLibraryA(&UNK_180a3c428);
    plVar6[0xb] = lVar7;
    if (lVar7 != 0) goto LAB_180044ee3;
    puStack_b8 = &UNK_180a3c3e0;
    if (puStack_b0 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
LAB_180044ee3:
    if (plVar6[0xc] == 0) {
      lVar7 = GetProcAddress(lVar7,&UNK_180a3c410);
      plVar6[0xc] = lVar7;
      if (lVar7 == 0) {
        puStack_b8 = &UNK_180a3c3e0;
        if (puStack_b0 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        goto LAB_180044f8f;
      }
    }
    puVar13 = &DAT_18098bc73;
    if (puStack_b0 != (undefined *)0x0) {
      puVar13 = puStack_b0;
    }
    iVar2 = SymInitialize(_DAT_180c96218,puVar13,1);
    if (iVar2 == 0) {
      puStack_b8 = &UNK_180a3c3e0;
      if (puStack_b0 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    else {
      *(char *)plVar6 = '\x01';
      puStack_b8 = &UNK_180a3c3e0;
      if (puStack_b0 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
  }
LAB_180044f8f:
  uStack_a0 = 0;
  puStack_b0 = (undefined *)0x0;
  puStack_b8 = &UNK_18098bcb0;
  iVar2 = _Mtx_unlock(pplVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
LAB_180044faf:
  puVar8 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,8,8,3);
  *puVar8 = 0;
  puVar9 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,8,8,3);
  *puVar8 = &UNK_18098bb60;
  *puVar9 = &UNK_18098bb88;
  puVar10 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
  puVar11 = (undefined1 *)FUN_18062b1e0(_DAT_180c8ed18,1,1,3);
  *puVar11 = 0;
  puVar10[2] = puVar11;
  _DAT_180c8ed08 = puVar10;
  *puVar10 = puVar9;
  puVar10[1] = puVar8;
  puVar10[3] = uVar5;
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x198,8,3);
  _DAT_180c8ed68 = FUN_18024e5c0(uVar5);
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0xa8,8,3);
  _DAT_180c8ed00 = FUN_180637560(uVar5);
  FUN_18062b1e0(_DAT_180c8ed18,1,1,3);
  iVar2 = QueryPerformanceFrequency(&pplStackX_18);
  if (iVar2 == 0) {
    FUN_180626ee0(&UNK_180a3c090);
  }
  _DAT_180c8ed50 = 1.0 / (double)(longlong)pplStackX_18;
  timeBeginPeriod(1);
  QueryPerformanceCounter(&lStackX_20);
  if (DAT_180bf0102 != '\0') {
    _DAT_180c8ed48 = _DAT_180c8ed48 + (lStackX_20 - _DAT_180c8ed58);
  }
  _DAT_180c8ed58 = 0;
  _DAT_180c8ed40 = lStackX_20;




// 函数: void FUN_180045380(void)
void FUN_180045380(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 in_R9;
  undefined *puStack_68;
  undefined8 *puStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  
  puStack_68 = &UNK_180a3c3e0;
  uStack_50 = 0;
  puStack_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,in_R9,0xfffffffffffffffe);
  *(undefined1 *)puVar3 = 0;
  puStack_60 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
  *puVar3 = 0x72657472617453;
  uStack_58 = 7;
  uVar1 = GetCurrentThread();
  FUN_180623fd0(uVar1,&puStack_68);
  puStack_68 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_180045580(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong **pplVar3;
  undefined4 uVar4;
  int iVar5;
  longlong ****pppplVar6;
  undefined8 uVar7;
  longlong ****pppplVar8;
  longlong ***ppplVar9;
  longlong lVar10;
  char cVar11;
  longlong ****pppplStackX_8;
  longlong ***ppplStackX_10;
  longlong **pplStackX_18;
  longlong ***ppplStackX_20;
  undefined8 uVar12;
  longlong *****ppppplVar13;
  longlong ****pppplVar14;
  
  uVar12 = 0xfffffffffffffffe;
  if (_DAT_180c91048 != (undefined8 *)0x0) {
    while( true ) {
      if ((undefined *)*_DAT_180c91048 == &UNK_1809fe100) {
        cVar11 = *(char *)(_DAT_180c91048 + 2) != '\0';
      }
      else {
        cVar11 = (**(code **)((undefined *)*_DAT_180c91048 + 0x68))();
      }
      if (cVar11 != '\0') break;
      Sleep(1);
    }
  }
  pppplVar6 = (longlong ****)FUN_18062b1e0(_DAT_180c8ed18,0xc0,8,3,uVar12);
  pppplStackX_8 = pppplVar6;
  FUN_180049830(pppplVar6);
  *pppplVar6 = (longlong ***)&UNK_1809ff2f8;
  ppplStackX_20 = (longlong ***)pppplVar6;
  (*(code *)(*pppplVar6)[5])(pppplVar6);
  lVar10 = _DAT_180c82868;
  ppppplVar13 = &pppplStackX_8;
  pppplStackX_8 = pppplVar6;
  (*(code *)(*pppplVar6)[5])(pppplVar6);
  FUN_18005e300(lVar10,&pppplStackX_8);
  while( true ) {
    if (*pppplVar6 == (longlong ***)&UNK_1809ff2f8) {
      cVar11 = *(char *)(pppplVar6 + 2) != '\0';
    }
    else {
      cVar11 = (*(code *)(*pppplVar6)[0xd])(pppplVar6);
    }
    if (cVar11 != '\0') break;
    Sleep(1);
  }
  FUN_1800623e0();
  lVar10 = _DAT_180c86928;
  uVar7 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
  pppplVar8 = (longlong ****)FUN_1800636f0(uVar7,2,lVar10);
  pppplVar14 = pppplVar8;
  if (pppplVar8 != (longlong ****)0x0) {
    (*(code *)(*pppplVar8)[5])(pppplVar8);
  }
  puVar1 = *(undefined8 **)(lVar10 + 400);
  pcVar2 = *(code **)*puVar1;
  pppplStackX_8 = &ppplStackX_10;
  ppplStackX_10 = (longlong ***)pppplVar8;
  if (pppplVar8 != (longlong ****)0x0) {
    (*(code *)(*pppplVar8)[5])(pppplVar8);
  }
  (*pcVar2)(puVar1,&ppplStackX_10);
  uVar12 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3,uVar12,ppppplVar13,pppplVar14);
  ppplVar9 = (longlong ***)FUN_1800636f0(uVar12,0,lVar10);
  if (ppplVar9 != (longlong ***)0x0) {
    (*(code *)(*ppplVar9)[5])(ppplVar9);
  }
  puVar1 = *(undefined8 **)(lVar10 + 400);
  pcVar2 = *(code **)*puVar1;
  pppplStackX_8 = (longlong ****)&pplStackX_18;
  pplStackX_18 = (longlong **)ppplVar9;
  if (ppplVar9 != (longlong ***)0x0) {
    (*(code *)(*ppplVar9)[5])(ppplVar9);
  }
  (*pcVar2)(puVar1,&pplStackX_18);
  FUN_18020f150(*(undefined8 *)(lVar10 + 400));
  if (ppplVar9 != (longlong ***)0x0) {
    (*(code *)(*ppplVar9)[7])(ppplVar9);
  }
  if (pppplVar8 != (longlong ****)0x0) {
    (*(code *)(*pppplVar8)[7])(pppplVar8);
  }
  pppplVar14 = _DAT_180c86940;
  *(undefined1 *)(_DAT_180c86940[1] + 0x80) = 1;
  while( true ) {
    pplVar3 = *pppplVar14[1];
    if (pplVar3 == (longlong **)&UNK_1809ff3f8) {
      cVar11 = *(char *)(pppplVar14[1] + 2) != '\0';
    }
    else {
      cVar11 = (*(code *)pplVar3[0xd])();
    }
    pppplVar8 = _DAT_180c86940;
    if (cVar11 != '\0') break;
    Sleep(1);
  }
  pppplStackX_8 = _DAT_180c86940;
  if (_DAT_180c86940 != (longlong ****)0x0) {
    lVar10 = __RTCastToVoid(_DAT_180c86940);
    *pppplVar8 = (longlong ***)&UNK_1809fee70;
    PostQueuedCompletionStatus(pppplVar8[0x42686],0,0xffffffffffffffff);
    CloseHandle(pppplVar8[0x42686]);
    ppplStackX_10 = (longlong ***)(pppplVar8 + 0x42687);
    if ((longlong ***)*ppplStackX_10 != (longlong ***)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    ppplStackX_10 = (longlong ***)(pppplVar8 + 0x4267c);
    _Mtx_destroy_in_situ();
    ppplStackX_10 = (longlong ***)(pppplVar8 + 0x40070);
    _Mtx_destroy_in_situ();
    FUN_18006bfe0(pppplVar8);
    if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar10);
    }
  }
  pppplVar14 = _DAT_180c86948;
  lVar10 = _DAT_180c82868;
  _DAT_180c86940 = (longlong ****)0x0;
  if (_DAT_180c82868 != 0) {
    FUN_18005d790(_DAT_180c82868);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar10);
  }
  _DAT_180c82868 = 0;
  *(undefined4 *)(_DAT_180c86948 + 0x2d) = 2;
  pppplStackX_8 = pppplVar14;
  if (pppplVar14 == (longlong ****)0x0) {
    _DAT_180c86948 = (longlong ****)0x0;
    WaitForSingleObject(_DAT_180c91900,0xffffffff);
    do {
      iVar5 = ReleaseSemaphore(_DAT_180c91900,1);
    } while (iVar5 == 0);
    uVar12 = __acrt_iob_func(1);
    fflush(uVar12);
    uVar12 = __acrt_iob_func(2);
    fflush(uVar12);
    uVar4 = _DAT_180c82854;
    (*(code *)(*pppplVar6)[7])(pppplVar6);
    return uVar4;
  }
  FUN_18006ef20(pppplVar14 + 0x1e);
  FUN_18006ef20(pppplVar14 + 0xf);
  FUN_18006ef20(pppplVar14);
                    // WARNING: Subroutine does not return
  FUN_18064e900(pppplVar14);
}



void WotsMain(undefined8 param_1)

{
  undefined8 auStackX_18 [2];
  
                    // 0x45a00  27  WotsMain




// 函数: void FUN_180045af0(longlong *param_1)
void FUN_180045af0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}







// 函数: void FUN_180045b20(longlong param_1,longlong param_2)
void FUN_180045b20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    **(undefined1 **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0x1000) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x000180045b59. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(undefined8 *)(param_1 + 8),0x1000);
    return;
  }
  FUN_180626f80(&UNK_18098bc48,0x1000,param_2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(undefined1 **)(param_1 + 8) = 0;
  return;
}







// 函数: void FUN_180045ba0(longlong param_1,undefined8 param_2,int param_3)
void FUN_180045ba0(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 + 1 < 0x1000) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined1 **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(undefined1 **)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}







// 函数: void FUN_180045bc1(void)
void FUN_180045bc1(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}







// 函数: void FUN_180045be6(undefined1 *param_1)
void FUN_180045be6(undefined1 *param_1)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  return;
}







// 函数: void FUN_180045c00(void)
void FUN_180045c00(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



undefined8 *
FUN_180045d80(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_18098bcb0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x1018,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 * FUN_180045dc0(undefined8 *param_1,uint param_2)

{
  *param_1 = &UNK_1809fee70;
  PostQueuedCompletionStatus(param_1[0x42686],0,0xffffffffffffffff,0,0xfffffffffffffffe);
  CloseHandle(param_1[0x42686]);
  if (param_1[0x42687] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  FUN_18006bfe0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x213458);
  }
  return param_1;
}



void _guard_check_icall(void)

{
  return;
}



undefined8 *
FUN_180045ea0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_18098bcb0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x418,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}







// 函数: void FUN_180045ee0(longlong param_1,longlong param_2)
void FUN_180045ee0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    **(undefined1 **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0x400) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x000180045f19. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(undefined8 *)(param_1 + 8),0x400);
    return;
  }
  FUN_180626f80(&UNK_18098bc48,0x400,param_2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(undefined1 **)(param_1 + 8) = 0;
  return;
}







