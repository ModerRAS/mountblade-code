#include "TaleWorlds.Native.Split.h"

// 99_part_14_part004.c - 21 个函数

// 函数: void FUN_1808e9b10(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e9b10(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x20;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_180986390;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9bf0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e9bf0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x28;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
    *puVar4 = &UNK_180985a80;
    *(undefined4 *)(puVar4 + 1) = 0x28;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9cd0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e9cd0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x18;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = &UNK_180986408;
    *(undefined4 *)(puVar4 + 2) = 2;
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0x20214;
    *(undefined4 *)(puVar4 + 1) = 0x18;
    FUN_180896c10(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9db0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e9db0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x10;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    puVar4[1] = 0x10;
    *puVar4 = &UNK_180982ab0;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9e80(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e9e80(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x10;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    puVar4[1] = 0x10;
    *puVar4 = &UNK_180982b30;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9f50(void)
void FUN_1808e9f50(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *in_R9;
  
  lVar1 = in_R9[1];
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4;
  iVar5 = (int)lVar1 + 0x228;
  if (iVar2 < iVar5) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(in_R9,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((longlong)(int)lVar1 + *in_R9,0,0x228);
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *in_R9,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808ea030(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808ea030(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x28;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
    *puVar4 = &UNK_180981e58;
    *(undefined4 *)(puVar4 + 1) = 0x28;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea110(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808ea110(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x18;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
    *puVar4 = &UNK_180982810;
    *(undefined4 *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea1e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808ea1e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x18;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
    *puVar4 = &UNK_180982890;
    *(undefined4 *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea2b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808ea2b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x18;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    plVar4 = (longlong *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)plVar4 + 0xc) = 0;
    *plVar4 = (longlong)&UNK_180982a30;
    *(undefined4 *)((longlong)plVar4 + 0x14) = 0;
    *(undefined4 *)(plVar4 + 1) = 0x18;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea390(void)
void FUN_1808ea390(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *in_R9;
  
  lVar1 = in_R9[1];
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4;
  iVar5 = (int)lVar1 + 0x228;
  if (iVar2 < iVar5) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(in_R9,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((longlong)(int)lVar1 + *in_R9,0,0x228);
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *in_R9,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808ea470(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808ea470(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x28;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
    *puVar4 = &UNK_180981d58;
    *(undefined4 *)(puVar4 + 1) = 0x28;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea550(void)
void FUN_1808ea550(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *in_R9;
  
  lVar1 = in_R9[1];
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4;
  iVar5 = (int)lVar1 + 0x228;
  if (iVar2 < iVar5) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(in_R9,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((longlong)(int)lVar1 + *in_R9,0,0x228);
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *in_R9,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808ea630(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808ea630(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x28;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
    *puVar4 = &UNK_180981cd8;
    *(undefined4 *)(puVar4 + 1) = 0x28;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea710(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808ea710(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x18;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
    *puVar4 = &UNK_180982910;
    *(undefined4 *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea7e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808ea7e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x18;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
    *puVar4 = &UNK_1809829a0;
    *(undefined4 *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea8b0(void)
void FUN_1808ea8b0(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *in_R9;
  
  lVar1 = in_R9[1];
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4;
  iVar5 = (int)lVar1 + 0x228;
  if (iVar2 < iVar5) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(in_R9,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((longlong)(int)lVar1 + *in_R9,0,0x228);
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *in_R9,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808ea990(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808ea990(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x28;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
    *puVar4 = &UNK_180981dd8;
    *(undefined4 *)(puVar4 + 1) = 0x28;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808eaa70(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808eaa70(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x50;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    plVar4 = (longlong *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)plVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x14) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x24) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x2c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x34) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x3c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x44) = 0;
    *plVar4 = (longlong)&UNK_180982608;
    *(undefined4 *)((longlong)plVar4 + 0x4c) = 0;
    *(undefined4 *)(plVar4 + 1) = 0x50;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808eab60(void)
void FUN_1808eab60(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *in_R9;
  
  lVar1 = in_R9[1];
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4;
  iVar5 = (int)lVar1 + 0x218;
  if (iVar2 < iVar5) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(in_R9,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((longlong)(int)lVar1 + *in_R9,0,0x218);
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *in_R9,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808eac40(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808eac40(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x28;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    plVar4 = (longlong *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)plVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x14) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x1c) = 0;
    *plVar4 = (longlong)&UNK_180982588;
    *(undefined4 *)((longlong)plVar4 + 0x24) = 0;
    *(undefined4 *)(plVar4 + 1) = 0x28;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






