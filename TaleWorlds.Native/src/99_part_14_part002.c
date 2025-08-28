#include "TaleWorlds.Native.Split.h"

// 99_part_14_part002.c - 20 个函数

// 函数: void FUN_1808e7860(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e7860(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_180982cc0;
    *(undefined4 *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e7930(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e7930(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_180982dc0;
    *(undefined4 *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e7a00(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e7a00(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_180982d40;
    *(undefined4 *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e7ad0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e7ad0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_180984260;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e7bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e7bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_180984160;
    *(undefined4 *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e7c80(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e7c80(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_1809843d0;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e7d60(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e7d60(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_180984358;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e7e40(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e7e40(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_1809842e0;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e7f20(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e7f20(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_180984448;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8000(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e8000(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_1809841e0;
    *(undefined4 *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e80d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e80d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_1809832b8;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e81b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e81b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_180983348;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8290(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e8290(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_1809833d8;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8370(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e8370(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    plVar4 = (longlong *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)plVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x14) = 0;
    *plVar4 = (longlong)&UNK_180983468;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = 0;
    *(undefined4 *)(plVar4 + 1) = 0x20;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8450(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e8450(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_180983618;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8530(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e8530(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_1809834f8;
    *(undefined4 *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8600(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e8600(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_1809836a8;
    *(undefined4 *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e86d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e86d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_180983588;
    *(undefined4 *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e87a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e87a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
    *puVar4 = &UNK_180983e00;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8880(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)
void FUN_1808e8880(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

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
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (undefined8 *)((longlong)(int)lVar1 + *param_4);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_180983d78;
    *(undefined4 *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






