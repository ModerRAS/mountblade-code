#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part130.c - 5 个函数

// 函数: void FUN_1807437a4(void)
void FUN_1807437a4(void)

{
  return;
}



uint64_t FUN_1807437c0(int64_t param_1)

{
  int64_t *plVar1;
  
  plVar1 = *(int64_t **)(param_1 + 0x10788);
  if (plVar1 != (int64_t *)(param_1 + 0x10788)) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(param_1 + 0x10bd0,plVar1[3],&system_buffer_ptr,0,1);
  }
  return 0;
}





// 函数: void FUN_1807437dd(int64_t param_1)
void FUN_1807437dd(int64_t param_1)

{
  int64_t unaff_RBX;
  
                    // WARNING: Subroutine does not return
  SystemDataValidator(param_1 + 0x10bd0,*(uint64_t *)(unaff_RBX + 0x18),&system_buffer_ptr,0,1);
}



uint64_t FUN_180743864(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180743880(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  lVar1 = param_1 + 0x10810;
  plVar2 = (int64_t *)(param_1 + 0x10830);
  *(uint64_t *)(param_1 + 0x10828) = 0xffffffffffffffff;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0x10818) = lVar1;
  *(uint64_t *)(param_1 + 0x10820) = 0;
  if ((int64_t *)*plVar2 != plVar2) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),((int64_t *)*plVar2)[2],&unknown_var_8208_ptr,
                  0xff,1);
  }
  *(int64_t **)(param_1 + 0x10838) = plVar2;
  *plVar2 = (int64_t)plVar2;
  *(uint64_t *)(param_1 + 0x10840) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807438b7(void)
void FUN_1807438b7(void)

{
  int64_t unaff_RSI;
  
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(unaff_RSI + 0x10),
                &unknown_var_8208_ptr,0xff,1);
}



uint64_t FUN_180743921(void)

{
  int64_t unaff_RBX;
  
  *(int64_t *)(unaff_RBX + 8) = unaff_RBX;
  *(int64_t *)unaff_RBX = unaff_RBX;
  *(uint64_t *)(unaff_RBX + 0x10) = 0;
  return 0;
}



uint64_t FUN_180743940(int64_t param_1,int param_2,int64_t param_3,char param_4)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint64_t uStackX_8;
  
  lVar1 = param_1 + (int64_t)param_2 * 0x18;
  if (*(int64_t *)(param_1 + 0x6b8) == 0) {
    *(int64_t *)(lVar1 + 0x12638) = param_1;
    *(int *)(param_1 + 0x12648 + (int64_t)param_2 * 0x18) = param_2;
    goto LAB_180743a60;
  }
  if (*(int64_t *)(lVar1 + 0x12640) == 0) {
    if (param_3 == 0) goto LAB_180743a60;
LAB_1807439ba:
    if (*(int64_t *)(lVar1 + 0x12640) != 0) goto LAB_180743a60;
    uVar3 = FUN_180767440(lVar1 + 0x12638,param_2,param_1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = (**(code **)(**(int64_t **)(param_1 + 0x116e0) + 0x120))
                      (*(int64_t **)(param_1 + 0x116e0),0xfffffffd,&uStackX_8);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_180759220(uStackX_8,*(uint64_t *)(lVar1 + 0x12640),0,0,1,0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_180743b50(param_1,param_2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_180762070(*(uint64_t *)(lVar1 + 0x12640),1);
    iVar2 = (int)uVar3;
  }
  else {
    if (param_3 != 0) goto LAB_1807439ba;
    uVar3 = FUN_180767660(lVar1 + 0x12638);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = FUN_180743b50(param_1,param_2);
    iVar2 = (int)uVar3;
  }
  if (iVar2 != 0) {
    return uVar3;
  }
LAB_180743a60:
  if ((*(int *)(param_1 + 0x11654) == param_2) &&
     (((plVar4 = (int64_t *)(param_1 + 0x12758), (int64_t *)*plVar4 != plVar4 ||
       (*(int64_t **)(param_1 + 0x12760) != plVar4)) && (param_4 == '\0')))) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1807676b0(lVar1 + 0x12638,param_3);
  }
  return uVar3;
}



uint64_t FUN_180743ab0(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lStackX_8;
  
  plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x368) + -0x178);
  if (*(int64_t *)(param_1 + 0x368) == 0) {
    plVar2 = (int64_t *)0x0;
  }
  while (plVar1 = plVar2, plVar1 != (int64_t *)(param_1 + 0x1f0)) {
    plVar2 = (int64_t *)(plVar1[0x2f] + -0x178);
    if (plVar1[0x2f] == 0) {
      plVar2 = (int64_t *)0x0;
    }
    func_0x0001807561d0(plVar1,&lStackX_8);
    if (lStackX_8 == param_2) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
  }
  return 0;
}



uint64_t FUN_180743ae4(void)

{
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t *plVar1;
  int64_t *unaff_R14;
  int64_t in_stack_00000040;
  
  do {
    plVar1 = (int64_t *)(unaff_RBX[0x2f] + -0x178);
    if (unaff_RBX[0x2f] == 0) {
      plVar1 = unaff_R14;
    }
    func_0x0001807561d0(unaff_RBX,&stack0x00000040);
    if (in_stack_00000040 == unaff_RBP) {
      (**(code **)(*unaff_RBX + 8))(unaff_RBX);
    }
    unaff_RBX = plVar1;
  } while (plVar1 != unaff_RSI);
  return 0;
}



uint64_t FUN_180743b2f(void)

{
  return 0;
}



uint64_t FUN_180743b50(int64_t param_1,int32_t param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  
  plVar3 = (int64_t *)(*(int64_t *)(param_1 + 0x368) + -0x178);
  if (*(int64_t *)(param_1 + 0x368) == 0) {
    plVar3 = (int64_t *)0x0;
  }
  while (plVar3 != (int64_t *)(param_1 + 0x1f0)) {
    uVar1 = (**(code **)(*plVar3 + 0x78))(plVar3,param_2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    plVar2 = plVar3 + 0x2f;
    plVar3 = (int64_t *)(*plVar2 + -0x178);
    if (*plVar2 == 0) {
      plVar3 = (int64_t *)0x0;
    }
  }
  plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x116e0) + 400);
  plVar3 = (int64_t *)*plVar2;
  if (plVar3 != plVar2) {
    do {
      uVar1 = FUN_180754eb0(plVar3[2],param_2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      plVar3 = (int64_t *)*plVar3;
    } while (plVar3 != (int64_t *)(*(int64_t *)(param_1 + 0x116e0) + 400));
  }
  return 0;
}



uint64_t FUN_180743c40(int64_t param_1)

{
  uint64_t uVar1;
  int64_t alStackX_8 [4];
  
  if (*(int64_t *)(param_1 + 0x11598) != 0) {
    if (*(int64_t *)(param_1 + 0x11928) != 0) {
      alStackX_8[0] = 0;
      uVar1 = FUN_180768b50(alStackX_8);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((*(int64_t *)(param_1 + 0x11928) == alStackX_8[0]) &&
         (*(char *)(param_1 + 0x11930) != '\0')) {
        return 0x23;
      }
    }
    if (*(int64_t *)(param_1 + 0x11598) == 0) {
      return 0x1c;
    }
    uVar1 = SystemMemoryAllocator();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_180743cc0(int64_t param_1,int8_t param_2)

{
  uint64_t uVar1;
  
  if (*(int64_t *)(param_1 + 0x115a8) != 0) {
    uVar1 = SystemMemoryAllocator();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(int64_t *)(param_1 + 0x11928) != 0) {
      return 0x1c;
    }
    uVar1 = FUN_180768b50(param_1 + 0x11928);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(int64_t *)(param_1 + 0x11928) == 0) {
      return 0x1c;
    }
    *(int8_t *)(param_1 + 0x11930) = param_2;
    uVar1 = FUN_180744ae0(param_1,0x100002,*(int64_t *)(param_1 + 0x11928),param_2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



int32_t SystemMemoryProcessor(int64_t param_1,int param_2)

{
  int64_t lVar1;
  
  lVar1 = *(int64_t *)(param_1 + 0x11530 + (int64_t)param_2 * 8);
  if (lVar1 == 0) {
    return 0x1c;
  }
  if (lVar1 == 0) {
    return 0x1c;
  }
  LeaveCriticalSection();
  return 0;
}



uint64_t FUN_180743d80(int64_t param_1)

{
  if (*(int64_t *)(param_1 + 0x11598) != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  return 0;
}



uint64_t FUN_180743da0(int64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  if (*(int64_t *)(param_1 + 0x115a8) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(int64_t *)(param_1 + 0x11928);
    if (lVar1 == 0) {
      return 0x1c;
    }
    *(uint64_t *)(param_1 + 0x11928) = 0;
    *(int8_t *)(param_1 + 0x11930) = 0;
    uVar2 = FUN_180744ae0(param_1,0x100004,lVar1,0);
    if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(*(uint64_t *)(param_1 + 0x115a8));
    }
  }
  return uVar2;
}



uint64_t FUN_180743e10(int64_t param_1)

{
  if (*(int64_t *)(param_1 + 0x11538) != 0) {
    SystemMemoryAllocator();
  }
  if (*(int64_t *)(param_1 + 0x11548) != 0) {
    SystemMemoryAllocator();
  }
  return 0;
}



uint64_t FUN_180743e50(int64_t param_1)

{
  if (*(int64_t *)(param_1 + 0x11548) != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  if (*(int64_t *)(param_1 + 0x11538) != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager();
  }
  return 0;
}





// 函数: void FUN_180743e90(uint64_t *param_1)
void FUN_180743e90(uint64_t *param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  
  *param_1 = &unknown_var_8544_ptr;
  func_0x00018074fb20(param_1 + 0x10);
  FUN_1807554e0(param_1 + 0x3e);
  FUN_1807554e0(param_1 + 0x84);
  puVar1 = param_1 + 0xca;
  *(int32_t *)(param_1 + 0xcd) = 0xffffffff;
  *puVar1 = puVar1;
  param_1[0xcb] = puVar1;
  param_1[0xcc] = 0;
  puVar1 = param_1 + 0xd8;
  *puVar1 = puVar1;
  param_1[0xd9] = puVar1;
  func_0x000180772c00(param_1 + 0xdc);
  puVar1 = param_1 + 0xea;
  param_1[0xeb] = puVar1;
  *puVar1 = puVar1;
  param_1[0xec] = 0;
  puVar1 = param_1 + 0xed;
  param_1[0xee] = puVar1;
  *puVar1 = puVar1;
  param_1[0xef] = 0;
  puVar1 = param_1 + 0x20f1;
  param_1[0x20f2] = puVar1;
  *puVar1 = puVar1;
  param_1[0x20f3] = 0;
  param_1[0x20f4] = 0;
  puVar1 = param_1 + 0x2102;
  param_1[0x2105] = 0xffffffffffffffff;
  *puVar1 = puVar1;
  param_1[0x2103] = puVar1;
  param_1[0x2104] = 0;
  puVar1 = param_1 + 0x2106;
  param_1[0x2107] = puVar1;
  *puVar1 = puVar1;
  param_1[0x2108] = 0;
  func_0x000180741c80(param_1 + 0x2109);
  func_0x000180741c80(param_1 + 0x217a);
  puVar1 = param_1 + 0x21eb;
  param_1[0x21ec] = puVar1;
  puVar3 = param_1 + 0x2201;
  *puVar1 = puVar1;
  lVar2 = 2;
  param_1[0x21ed] = 0;
  puVar1 = param_1 + 0x21fb;
  param_1[0x21fc] = puVar1;
  *puVar1 = puVar1;
  param_1[0x21fd] = 0;
  puVar1 = param_1 + 0x21fe;
  param_1[0x21ff] = puVar1;
  *puVar1 = puVar1;
  param_1[0x2200] = 0;
  do {
    func_0x000180772c00(puVar3);
    puVar3 = (uint64_t *)((int64_t)puVar3 + 0x3c);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = param_1 + 0x2210;
  lVar2 = 8;
  do {
    func_0x000180785fd0(puVar1);
    puVar1 = puVar1 + 0xe;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x22be] = 0;
  param_1[0x22bf] = 0;
  param_1[0x22c0] = 0;
  func_0x000180772c00(param_1 + 0x22cf);
  puVar1 = param_1 + 0x22de;
  param_1[0x22df] = puVar1;
  lVar2 = 8;
  *puVar1 = puVar1;
  param_1[0x22e0] = 0;
  puVar1 = param_1 + 0x22e1;
  param_1[0x22e2] = puVar1;
  *puVar1 = puVar1;
  param_1[0x22e3] = 0;
  puVar1 = param_1 + 0x22e5;
  param_1[0x22e6] = puVar1;
  *puVar1 = puVar1;
  param_1[0x22e7] = 0;
  puVar1 = param_1 + 0x22e8;
  param_1[0x22e9] = puVar1;
  *puVar1 = puVar1;
  param_1[0x22ea] = 0;
  puVar1 = param_1 + 0x22ed;
  param_1[0x22ee] = puVar1;
  *puVar1 = puVar1;
  param_1[0x22ef] = 0;
  puVar1 = param_1 + 0x2389;
  *(int32_t *)(param_1 + 0x22fb) = 0xdef5eed1;
  *(int32_t *)((int64_t)param_1 + 0x117dc) = 0x210a112e;
  *(int32_t *)(param_1 + 0x22fc) = 0xb00d7817;
  *(int32_t *)((int64_t)param_1 + 0x117e4) = 0xa24611e;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 0x18;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = param_1 + 0x243c;
  param_1[0x243d] = puVar1;
  *puVar1 = puVar1;
  param_1[0x243e] = 0;
  puVar1 = param_1 + 0x2441;
  param_1[0x2442] = puVar1;
  *puVar1 = puVar1;
  param_1[0x2443] = 0;
  func_0x000180767970(param_1 + 0x2444);
  func_0x000180772c00((int64_t)param_1 + 0x12374);
  FUN_180785980(param_1 + 0x2487);
  func_0x000180772c00(param_1 + 0x24bf);
  param_1[0x24c7] = 0;
  puVar1 = param_1 + 0x24eb;
  param_1[0x24c8] = 0;
  *(int32_t *)(param_1 + 0x24c9) = 0;
  param_1[0x24ca] = 0;
  param_1[0x24cb] = 0;
  *(int32_t *)(param_1 + 0x24cc) = 0;
  param_1[0x24cd] = 0;
  param_1[0x24ce] = 0;
  *(int32_t *)(param_1 + 0x24cf) = 0;
  param_1[0x24d0] = 0;
  param_1[0x24d1] = 0;
  *(int32_t *)(param_1 + 0x24d2) = 0;
  param_1[0x24ec] = puVar1;
  *puVar1 = puVar1;
  param_1[0x24ed] = 0;
  puVar1 = param_1 + 0x24f0;
  param_1[0x24f1] = puVar1;
  *puVar1 = puVar1;
  param_1[0x24f2] = 0;
  puVar1 = param_1 + 0x24fa;
  param_1[0x24f3] = 0;
  *(int32_t *)(param_1 + 0x24f4) = 0;
  param_1[0x24f5] = 0;
  param_1[0x24f6] = 0;
  param_1[0x24f7] = 0;
  param_1[0x24f8] = 0;
  *(int32_t *)(param_1 + 0x24f9) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x127cc) = 0;
  *puVar1 = puVar1;
  param_1[0x24fb] = puVar1;
  param_1[0x24fc] = 0;
  param_1[0x24fd] = 0;
  *(int16_t *)(param_1 + 1) = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xd6] = 0;
  param_1[0x3d] = 0;
  param_1[0x2283] = 0;
  *(int32_t *)((int64_t)param_1 + 0x116b4) = 0;
  *(int32_t *)((int64_t)param_1 + 0x11934) = 0x4000;
  *(int32_t *)(param_1 + 8999) = 8;
  *(uint64_t *)((int64_t)param_1 + 0x116bc) = 0x40;
  param_1[0x22ce] = 0;
  *(int32_t *)((int64_t)param_1 + 0x1175c) = 0x800;
  *(int8_t *)(param_1 + 0x22eb) = 0;
  *(int32_t *)(param_1 + 0xdb) = 0x400;
  *(int32_t *)((int64_t)param_1 + 0x6dc) = 0x1000;
  param_1[0xd7] = 0;
  param_1[0xda] = 48000;
  *(int32_t *)(param_1 + 0x22dd) = 0;
  param_1[0x3c] = 0;
  *(int32_t *)(param_1 + 0xd0) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x116c4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x116cc) = 0xffffffffffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x116d4) = 0xffffffffffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x684) = 0xffffffffffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x68c) = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0x2280) = 1;
  *(int32_t *)((int64_t)param_1 + 0x11404) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2281) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x1140c) = 0x3f800000;
  param_1[0x2486] = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x2284,0,0x100);
}



uint64_t * FUN_180744640(uint64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int iVar2;
  
  *param_1 = &unknown_var_8544_ptr;
  FUN_180744d60(param_1 + 0x24fc);
  plVar1 = param_1 + 0x24fa;
  *(int64_t *)param_1[0x24fb] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0x24fb];
  param_1[0x24fb] = plVar1;
  *plVar1 = (int64_t)plVar1;
  iVar2 = SystemStatusChecker(param_1 + 0x24f5);
  if (iVar2 == 0) {
    iVar2 = FUN_180744e20(param_1 + 0x24f7);
    if (iVar2 == 0) {
      *(int32_t *)(param_1 + 0x24f9) = 0xffffffff;
      *(int32_t *)((int64_t)param_1 + 0x127cc) = 0;
    }
  }
  FUN_180744e20(param_1 + 0x24f7);
  SystemStatusChecker(param_1 + 0x24f5);
  func_0x000180785a10(param_1 + 0x2487);
  param_1[0x2444] = &unknown_var_8408_ptr;
  thunk_FUN_180742070(param_1 + 0x217a);
  thunk_FUN_180742070(param_1 + 0x2109);
  plVar1 = param_1 + 0xd8;
  *(int64_t *)param_1[0xd9] = *plVar1;
  *(uint64_t *)(*plVar1 + 8) = param_1[0xd9];
  param_1[0xd9] = plVar1;
  *plVar1 = (int64_t)plVar1;
  if ((param_2 & 1) != 0) {
    free(param_1,0x127f8);
  }
  return param_1;
}



uint64_t * FUN_180744750(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &unknown_var_8408_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x150);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180744780(int64_t param_1)

{
  int iVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int iVar4;
  uint64_t uVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  
  uVar6 = *(uint *)(param_1 + 0x6d8);
  lVar8 = 0;
  uVar5 = (uint64_t)*(uint *)(param_1 + 0x6dc) / (uint64_t)uVar6;
  iVar1 = (int)uVar5;
  plVar2 = (int64_t *)
           FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),(uVar6 + 0x16) * iVar1 * 4 + 0x40,
                         &unknown_var_8576_ptr,0x3b5,0);
  if (plVar2 == (int64_t *)0x0) {
    return 0x26;
  }
  *plVar2 = (int64_t)(plVar2 + 6);
  uVar9 = (int64_t)iVar1 * 0x58 + 0xf + (int64_t)(plVar2 + 6) & 0xfffffffffffffff0;
  if (0 < iVar1) {
    do {
      lVar8 = lVar8 + 0x58;
      *(uint64_t *)(*plVar2 + -8 + lVar8) = uVar9;
      uVar9 = uVar9 + (uint64_t)uVar6 * 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar3 = FUN_18078a0c0(param_1 + 0x720,plVar2 + 2,CONCAT71((int7)(uVar9 >> 8),1));
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar3 = FUN_180765990(plVar2[2],1);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  func_0x000180743c20(param_1,0x11);
  *(int32_t *)(plVar2 + 4) = *(int32_t *)(param_1 + 0x127e8);
  uVar6 = (int)*(uint *)(param_1 + 0x127ec) >> 0x1f;
  iVar4 = *(int *)(param_1 + 0x127e8) + 1;
  iVar1 = (*(uint *)(param_1 + 0x127ec) ^ uVar6) - uVar6;
  if (iVar1 < iVar4) {
    iVar7 = (int)((float)iVar1 * 1.5);
    iVar1 = iVar4;
    if (iVar4 <= iVar7) {
      iVar1 = iVar7;
    }
    if (iVar1 < 8) {
      iVar7 = 8;
    }
    else if (iVar7 < iVar4) {
      iVar7 = iVar4;
    }
    iVar1 = FUN_180747f10((int64_t *)(param_1 + 0x127e0),iVar7);
    if (iVar1 != 0) goto LAB_1807448f0;
  }
  *(int64_t **)(*(int64_t *)(param_1 + 0x127e0) + (int64_t)*(int *)(param_1 + 0x127e8) * 8) =
       plVar2;
  *(int *)(param_1 + 0x127e8) = *(int *)(param_1 + 0x127e8) + 1;
LAB_1807448f0:
                    // WARNING: Subroutine does not return
  SystemMemoryProcessor(param_1,0x11);
}



uint64_t
FUN_180744920(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,char param_5)

{
  uint64_t uVar1;
  int iVar2;
  int aiStackX_20 [2];
  uint64_t *puVar3;
  uint64_t uVar4;
  uint uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  int64_t lStack_30;
  uint64_t uStack_28;
  int64_t lStack_20;
  uint64_t auStack_18 [2];
  
  if (((param_4 != (int64_t *)0x0) && (*(short *)((int64_t)param_4 + 0x1fc) == -1)) &&
     (param_4[4] != 0)) {
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x670) + 0x3a8) != 0) {
      puVar3 = &uStack_38;
      iVar2 = 0;
      uStack_38 = 0;
      uVar1 = FUN_180787940();
      if ((int)uVar1 == 0) {
        lStack_30 = 0;
        uVar1 = (**(code **)(*(int64_t *)param_4[4] + 0x120))
                          ((int64_t *)param_4[4],0xfffffffd,&lStack_30);
        if ((int)uVar1 == 0) {
          uStack_40 = 0;
          uVar1 = (**(code **)(*param_4 + 0x120))(param_4,0xffffffff,&uStack_40);
          if ((int)uVar1 == 0) {
            uVar4 = CONCAT71((int7)((uint64_t)puVar3 >> 8),1);
            FUN_180759220(uStack_38,uStack_40,&uStack_28,0,uVar4,0);
            func_0x000180766510(uStack_28,uStack_48 | 0xfeed0000);
            if ((param_5 == '\0') && (FUN_18075ec10(uStack_40,aiStackX_20,0,1), 0 < aiStackX_20[0]))
            {
              do {
                uVar4 = uVar4 & 0xffffffffffffff00;
                FUN_18075ef40(uStack_40,iVar2,&lStack_20,auStack_18,uVar4,1);
                if (lStack_20 == lStack_30) {
                  uVar4 = uVar4 & 0xffffffffffffff00;
                  FUN_180765c40(auStack_18[0],0,0,1,uVar4);
                }
                iVar2 = iVar2 + 1;
              } while (iVar2 < aiStackX_20[0]);
            }
            *(int16_t *)((int64_t)param_4 + 0x1fc) = (int16_t)uStack_48;
            uVar1 = 0;
            *(char *)((int64_t)param_4 + 0x1fe) = param_5;
          }
        }
      }
      return uVar1;
    }
    return 0x44;
  }
  return 0x1f;
}



uint64_t FUN_18074496d(void)

{
  char cVar1;
  uint64_t in_RAX;
  uint64_t uVar2;
  int iVar3;
  int64_t *unaff_RDI;
  uint64_t uVar4;
  int16_t uStack0000000000000030;
  uint64_t uStack0000000000000040;
  int64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  int64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  int in_stack_00000098;
  char in_stack_000000a0;
  
  iVar3 = 0;
  uStack0000000000000040 = 0;
  uVar2 = FUN_180787940();
  if ((int)uVar2 == 0) {
    in_stack_00000048 = 0;
    uVar2 = (**(code **)(*(int64_t *)unaff_RDI[4] + 0x120))
                      ((int64_t *)unaff_RDI[4],0xfffffffd,&stack0x00000048);
    if (((int)uVar2 == 0) && (uVar2 = (**(code **)(*unaff_RDI + 0x120))(), (int)uVar2 == 0)) {
      uVar4 = CONCAT71((int7)((uint64_t)in_RAX >> 8),1);
      FUN_180759220(uStack0000000000000040,0,&stack0x00000050,0,uVar4);
      func_0x000180766510(in_stack_00000050,_uStack0000000000000030 | 0xfeed0000);
      cVar1 = in_stack_000000a0;
      if ((in_stack_000000a0 == '\0') &&
         (FUN_18075ec10(0,&stack0x00000098,0,1), 0 < in_stack_00000098)) {
        do {
          uVar4 = uVar4 & 0xffffffffffffff00;
          FUN_18075ef40(0,iVar3,&stack0x00000058,&stack0x00000060,uVar4);
          if (in_stack_00000058 == in_stack_00000048) {
            uVar4 = uVar4 & 0xffffffffffffff00;
            FUN_180765c40(in_stack_00000060,0,0,1,uVar4);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < in_stack_00000098);
      }
      *(int16_t *)((int64_t)unaff_RDI + 0x1fc) = uStack0000000000000030;
      uVar2 = 0;
      *(char *)((int64_t)unaff_RDI + 0x1fe) = cVar1;
    }
  }
  return uVar2;
}



uint64_t FUN_1807449f2(void)

{
  char cVar1;
  int unaff_EBX;
  int64_t unaff_RDI;
  int16_t uStack0000000000000030;
  uint64_t in_stack_00000038;
  int64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  int64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  int in_stack_00000098;
  char in_stack_000000a0;
  
  FUN_180759220();
  func_0x000180766510(in_stack_00000050,_uStack0000000000000030 | 0xfeed0000);
  cVar1 = in_stack_000000a0;
  if ((in_stack_000000a0 == '\0') &&
     (FUN_18075ec10(in_stack_00000038,&stack0x00000098,0,1), unaff_EBX < in_stack_00000098)) {
    do {
      FUN_18075ef40(in_stack_00000038,unaff_EBX,&stack0x00000058,&stack0x00000060,0);
      if (in_stack_00000058 == in_stack_00000048) {
        FUN_180765c40(in_stack_00000060,0,0,1,0);
      }
      unaff_EBX = unaff_EBX + 1;
    } while (unaff_EBX < in_stack_00000098);
  }
  *(int16_t *)(unaff_RDI + 0x1fc) = uStack0000000000000030;
  *(char *)(unaff_RDI + 0x1fe) = cVar1;
  return 0;
}





// 函数: void FUN_180744abc(void)
void FUN_180744abc(void)

{
  return;
}



uint64_t FUN_180744aca(void)

{
  return 0x1f;
}



int FUN_180744ae0(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t *puVar2;
  int iVar3;
  
  if (param_1 != 0) {
    func_0x000180743c20(param_1,0x15);
  }
  iVar3 = 0;
  puVar2 = (uint64_t *)(param_1 + 0x115e8);
  do {
    if ((code *)puVar2[-1] != (code *)0x0) {
      iVar1 = (*(code *)puVar2[-1])(param_1,param_2,param_3,param_4,*puVar2);
      if (iVar1 != 0) goto LAB_180744b66;
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 1);
  iVar1 = 0;
LAB_180744b66:
  if ((param_1 != 0) && (param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(param_1,0x15);
  }
  return iVar1;
}



int FUN_180744ae6(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t *puVar2;
  int iVar3;
  
  if (param_1 != 0) {
    func_0x000180743c20(param_1,0x15);
  }
  iVar3 = 0;
  puVar2 = (uint64_t *)(param_1 + 0x115e8);
  do {
    if ((code *)puVar2[-1] != (code *)0x0) {
      iVar1 = (*(code *)puVar2[-1])(param_1,param_2,param_3,param_4,*puVar2);
      if (iVar1 != 0) goto LAB_180744b66;
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 1);
  iVar1 = 0;
LAB_180744b66:
  if ((param_1 != 0) && (param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(param_1,0x15);
  }
  return iVar1;
}



int32_t FUN_180744b89(void)

{
  int64_t unaff_RBP;
  int32_t unaff_ESI;
  
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor();
  }
  return unaff_ESI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



