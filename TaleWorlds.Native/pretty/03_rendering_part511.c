#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part511.c - 10 个函数

// 函数: void FUN_18053e9e0(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4)
void FUN_18053e9e0(uint64_t param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 != '\0') {
    free(param_1,0x18,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}



ulonglong * FUN_18053ea40(ulonglong *param_1,uint64_t *param_2,uint64_t *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  ulonglong uVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  
  puVar5 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 4);
  lVar4 = (longlong)param_3 + (-8 - (longlong)param_2) >> 3;
  if (lVar4 < 0x29) {
    FUN_18053f270(param_2,puVar5,param_3 + -1);
  }
  else {
    lVar4 = lVar4 + 1 >> 3;
    FUN_18053f270(param_2,param_2 + lVar4,param_2 + lVar4 * 2);
    FUN_18053f270(puVar5 + -lVar4,puVar5,puVar5 + lVar4);
    FUN_18053f270(param_3 + lVar4 * -2 + -1,param_3 + (-1 - lVar4),param_3 + -1);
    FUN_18053f270(param_2 + lVar4,puVar5,param_3 + (-1 - lVar4));
  }
  puVar8 = puVar5 + 1;
  if (param_2 < puVar5) {
    uVar7 = *puVar5;
    do {
      uVar11 = puVar5[-1];
      puVar10 = puVar5 + -1;
      iVar1 = func_0x00018053d680(uVar11);
      iVar2 = func_0x00018053d680(uVar7);
      uVar7 = uVar11;
      if ((iVar2 < iVar1) || (iVar1 < iVar2)) break;
      puVar5 = puVar10;
    } while (param_2 < puVar10);
  }
  puVar10 = puVar8;
  puVar6 = puVar5;
  if (puVar8 < param_3) {
    uVar3 = func_0x00018053d680(*puVar5);
    uVar9 = (ulonglong)uVar3;
    do {
      iVar1 = func_0x00018053d680(*puVar8);
      puVar10 = puVar8;
      if (((int)uVar9 < iVar1) || (iVar1 < (int)uVar9)) break;
      puVar8 = puVar8 + 1;
      puVar10 = puVar8;
    } while (puVar8 < param_3);
  }
joined_r0x00018053eb83:
  do {
    puVar12 = puVar5;
    if (param_3 <= puVar10) {
joined_r0x00018053ebc0:
      for (; param_2 < puVar5; puVar5 = puVar5 + -1) {
        puVar12 = puVar12 + -1;
        uVar7 = *puVar12;
        iVar1 = func_0x00018053d680(uVar7);
        iVar2 = func_0x00018053d680(*puVar6);
        if (iVar1 <= iVar2) {
          if (iVar1 < iVar2) break;
          puVar6 = puVar6 + -1;
          if (puVar6 != puVar12) {
            uVar11 = *puVar6;
            *puVar6 = uVar7;
            *puVar12 = uVar11;
          }
        }
      }
      if (puVar5 == param_2) {
        if (puVar10 == param_3) {
          *param_1 = (ulonglong)puVar6;
          param_1[1] = (ulonglong)puVar8;
          return param_1;
        }
        if (puVar8 != puVar10) {
          uVar7 = *puVar6;
          *puVar6 = *puVar8;
          *puVar8 = uVar7;
        }
        puVar8 = puVar8 + 1;
        uVar7 = *puVar6;
        *puVar6 = *puVar10;
        *puVar10 = uVar7;
        puVar10 = puVar10 + 1;
        puVar6 = puVar6 + 1;
      }
      else {
        puVar5 = puVar5 + -1;
        if (puVar10 == param_3) {
          puVar6 = puVar6 + -1;
          if (puVar5 == puVar6) {
            puVar12 = puVar8 + -1;
            puVar8 = puVar8 + -1;
            uVar7 = *puVar6;
            *puVar6 = *puVar12;
            *puVar8 = uVar7;
          }
          else {
            puVar8 = puVar8 + -1;
            uVar7 = *puVar5;
            *puVar5 = *puVar6;
            *puVar6 = uVar7;
            *puVar6 = *puVar8;
            *puVar8 = uVar7;
          }
        }
        else {
          uVar7 = *puVar10;
          *puVar10 = *puVar5;
          *puVar5 = uVar7;
          puVar10 = puVar10 + 1;
        }
      }
      goto joined_r0x00018053eb83;
    }
    iVar1 = func_0x00018053d680(*puVar6);
    uVar7 = *puVar10;
    iVar2 = func_0x00018053d680(uVar7);
    if (iVar1 <= iVar2) {
      puVar12 = puVar5;
      if (iVar1 < iVar2) goto joined_r0x00018053ebc0;
      if (puVar8 != puVar10) {
        uVar11 = *puVar8;
        *puVar8 = uVar7;
        *puVar10 = uVar11;
      }
      puVar8 = puVar8 + 1;
    }
    puVar10 = puVar10 + 1;
  } while( true );
}



ulonglong * FUN_18053ea59(ulonglong *param_1,uint64_t *param_2,uint64_t *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong in_RAX;
  longlong lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  ulonglong uVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  ulonglong *in_stack_00000050;
  
  puVar5 = param_2 + (in_RAX - (longlong)param_2 >> 4);
  lVar4 = (longlong)param_3 + (-8 - (longlong)param_2) >> 3;
  if (lVar4 < 0x29) {
    FUN_18053f270(param_2,puVar5,param_3 + -1);
    in_stack_00000050 = param_1;
  }
  else {
    lVar4 = lVar4 + 1 >> 3;
    FUN_18053f270(param_2,param_2 + lVar4,param_2 + lVar4 * 2);
    FUN_18053f270(puVar5 + -lVar4,puVar5,puVar5 + lVar4);
    FUN_18053f270(param_3 + lVar4 * -2 + -1,param_3 + (-1 - lVar4),param_3 + -1);
    FUN_18053f270(param_2 + lVar4,puVar5,param_3 + (-1 - lVar4));
  }
  puVar8 = puVar5 + 1;
  if (param_2 < puVar5) {
    uVar7 = *puVar5;
    do {
      uVar11 = puVar5[-1];
      puVar10 = puVar5 + -1;
      iVar1 = func_0x00018053d680(uVar11);
      iVar2 = func_0x00018053d680(uVar7);
      uVar7 = uVar11;
      if ((iVar2 < iVar1) || (iVar1 < iVar2)) break;
      puVar5 = puVar10;
    } while (param_2 < puVar10);
  }
  puVar10 = puVar8;
  puVar6 = puVar5;
  if (puVar8 < param_3) {
    uVar3 = func_0x00018053d680(*puVar5);
    uVar9 = (ulonglong)uVar3;
    do {
      iVar1 = func_0x00018053d680(*puVar8);
      puVar10 = puVar8;
      if (((int)uVar9 < iVar1) || (iVar1 < (int)uVar9)) break;
      puVar8 = puVar8 + 1;
      puVar10 = puVar8;
    } while (puVar8 < param_3);
  }
joined_r0x00018053eb83:
  do {
    puVar12 = puVar5;
    if (param_3 <= puVar10) {
joined_r0x00018053ebc0:
      for (; param_2 < puVar5; puVar5 = puVar5 + -1) {
        puVar12 = puVar12 + -1;
        uVar7 = *puVar12;
        iVar1 = func_0x00018053d680(uVar7);
        iVar2 = func_0x00018053d680(*puVar6);
        if (iVar1 <= iVar2) {
          if (iVar1 < iVar2) break;
          puVar6 = puVar6 + -1;
          if (puVar6 != puVar12) {
            uVar11 = *puVar6;
            *puVar6 = uVar7;
            *puVar12 = uVar11;
          }
        }
      }
      if (puVar5 == param_2) {
        if (puVar10 == param_3) {
          *in_stack_00000050 = (ulonglong)puVar6;
          in_stack_00000050[1] = (ulonglong)puVar8;
          return in_stack_00000050;
        }
        if (puVar8 != puVar10) {
          uVar7 = *puVar6;
          *puVar6 = *puVar8;
          *puVar8 = uVar7;
        }
        puVar8 = puVar8 + 1;
        uVar7 = *puVar6;
        *puVar6 = *puVar10;
        *puVar10 = uVar7;
        puVar10 = puVar10 + 1;
        puVar6 = puVar6 + 1;
      }
      else {
        puVar5 = puVar5 + -1;
        if (puVar10 == param_3) {
          puVar6 = puVar6 + -1;
          if (puVar5 == puVar6) {
            puVar12 = puVar8 + -1;
            puVar8 = puVar8 + -1;
            uVar7 = *puVar6;
            *puVar6 = *puVar12;
            *puVar8 = uVar7;
          }
          else {
            puVar8 = puVar8 + -1;
            uVar7 = *puVar5;
            *puVar5 = *puVar6;
            *puVar6 = uVar7;
            *puVar6 = *puVar8;
            *puVar8 = uVar7;
          }
        }
        else {
          uVar7 = *puVar10;
          *puVar10 = *puVar5;
          *puVar5 = uVar7;
          puVar10 = puVar10 + 1;
        }
      }
      goto joined_r0x00018053eb83;
    }
    iVar1 = func_0x00018053d680(*puVar6);
    uVar7 = *puVar10;
    iVar2 = func_0x00018053d680(uVar7);
    if (iVar1 <= iVar2) {
      puVar12 = puVar5;
      if (iVar1 < iVar2) goto joined_r0x00018053ebc0;
      if (puVar8 != puVar10) {
        uVar11 = *puVar8;
        *puVar8 = uVar7;
        *puVar10 = uVar11;
      }
      puVar8 = puVar8 + 1;
    }
    puVar10 = puVar10 + 1;
  } while( true );
}



uint64_t * FUN_18053ea89(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong in_RAX;
  longlong lVar5;
  uint64_t *unaff_RBX;
  uint64_t *puVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  ulonglong uVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  uint64_t *unaff_R12;
  uint64_t *unaff_R15;
  uint64_t *in_stack_00000050;
  
  lVar5 = in_RAX >> 3;
  lVar1 = lVar5 * 8 + param_2;
  FUN_18053f270(param_1,lVar1,lVar5 * 0x10 + param_2);
  FUN_18053f270(unaff_RBX + -lVar5);
  FUN_18053f270(unaff_R15 + lVar5 * -2 + -1,unaff_R15 + (-1 - lVar5),unaff_R15 + -1);
  FUN_18053f270(lVar1);
  puVar8 = unaff_RBX + 1;
  if (unaff_R12 < unaff_RBX) {
    uVar7 = *unaff_RBX;
    do {
      uVar11 = unaff_RBX[-1];
      puVar10 = unaff_RBX + -1;
      iVar2 = func_0x00018053d680(uVar11);
      iVar3 = func_0x00018053d680(uVar7);
      uVar7 = uVar11;
      if ((iVar3 < iVar2) || (iVar2 < iVar3)) break;
      unaff_RBX = puVar10;
    } while (unaff_R12 < puVar10);
  }
  puVar10 = puVar8;
  puVar6 = unaff_RBX;
  if (puVar8 < unaff_R15) {
    uVar4 = func_0x00018053d680(*unaff_RBX);
    uVar9 = (ulonglong)uVar4;
    do {
      iVar2 = func_0x00018053d680(*puVar8);
      puVar10 = puVar8;
      if (((int)uVar9 < iVar2) || (iVar2 < (int)uVar9)) break;
      puVar8 = puVar8 + 1;
      puVar10 = puVar8;
    } while (puVar8 < unaff_R15);
  }
joined_r0x00018053eb83:
  do {
    puVar12 = unaff_RBX;
    if (unaff_R15 <= puVar10) {
joined_r0x00018053ebc0:
      for (; unaff_R12 < unaff_RBX; unaff_RBX = unaff_RBX + -1) {
        puVar12 = puVar12 + -1;
        uVar7 = *puVar12;
        iVar2 = func_0x00018053d680(uVar7);
        iVar3 = func_0x00018053d680(*puVar6);
        if (iVar2 <= iVar3) {
          if (iVar2 < iVar3) break;
          puVar6 = puVar6 + -1;
          if (puVar6 != puVar12) {
            uVar11 = *puVar6;
            *puVar6 = uVar7;
            *puVar12 = uVar11;
          }
        }
      }
      if (unaff_RBX == unaff_R12) {
        if (puVar10 == unaff_R15) {
          *in_stack_00000050 = puVar6;
          in_stack_00000050[1] = puVar8;
          return in_stack_00000050;
        }
        if (puVar8 != puVar10) {
          uVar7 = *puVar6;
          *puVar6 = *puVar8;
          *puVar8 = uVar7;
        }
        puVar8 = puVar8 + 1;
        uVar7 = *puVar6;
        *puVar6 = *puVar10;
        *puVar10 = uVar7;
        puVar10 = puVar10 + 1;
        puVar6 = puVar6 + 1;
      }
      else {
        unaff_RBX = unaff_RBX + -1;
        if (puVar10 == unaff_R15) {
          puVar6 = puVar6 + -1;
          if (unaff_RBX == puVar6) {
            puVar12 = puVar8 + -1;
            puVar8 = puVar8 + -1;
            uVar7 = *puVar6;
            *puVar6 = *puVar12;
            *puVar8 = uVar7;
          }
          else {
            puVar8 = puVar8 + -1;
            uVar7 = *unaff_RBX;
            *unaff_RBX = *puVar6;
            *puVar6 = uVar7;
            *puVar6 = *puVar8;
            *puVar8 = uVar7;
          }
        }
        else {
          uVar7 = *puVar10;
          *puVar10 = *unaff_RBX;
          *unaff_RBX = uVar7;
          puVar10 = puVar10 + 1;
        }
      }
      goto joined_r0x00018053eb83;
    }
    iVar2 = func_0x00018053d680(*puVar6);
    uVar7 = *puVar10;
    iVar3 = func_0x00018053d680(uVar7);
    if (iVar2 <= iVar3) {
      puVar12 = unaff_RBX;
      if (iVar2 < iVar3) goto joined_r0x00018053ebc0;
      if (puVar8 != puVar10) {
        uVar11 = *puVar8;
        *puVar8 = uVar7;
        *puVar10 = uVar11;
      }
      puVar8 = puVar8 + 1;
    }
    puVar10 = puVar10 + 1;
  } while( true );
}





// 函数: void FUN_18053eaf7(void)
void FUN_18053eaf7(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint64_t *unaff_RBX;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  uint64_t *unaff_R12;
  uint64_t *unaff_R14;
  uint64_t *unaff_R15;
  
  FUN_18053f270();
  puVar6 = unaff_RBX + 1;
  if (unaff_R12 < unaff_RBX) {
    uVar5 = *unaff_RBX;
    do {
      uVar9 = unaff_RBX[-1];
      puVar8 = unaff_RBX + -1;
      iVar1 = func_0x00018053d680(uVar9);
      iVar2 = func_0x00018053d680(uVar5);
      uVar5 = uVar9;
      if ((iVar2 < iVar1) || (iVar1 < iVar2)) break;
      unaff_RBX = puVar8;
    } while (unaff_R12 < puVar8);
  }
  puVar8 = puVar6;
  puVar4 = unaff_RBX;
  if (puVar6 < unaff_R15) {
    uVar3 = func_0x00018053d680(*unaff_RBX);
    uVar7 = (ulonglong)uVar3;
    do {
      iVar1 = func_0x00018053d680(*puVar6);
      puVar8 = puVar6;
      if (((int)uVar7 < iVar1) || (iVar1 < (int)uVar7)) break;
      puVar6 = puVar6 + 1;
      puVar8 = puVar6;
    } while (puVar6 < unaff_R15);
  }
joined_r0x00018053eb83:
  do {
    puVar10 = unaff_RBX;
    if (unaff_R15 <= puVar8) {
joined_r0x00018053ebc0:
      for (; unaff_R12 < unaff_RBX; unaff_RBX = unaff_RBX + -1) {
        puVar10 = puVar10 + -1;
        uVar5 = *puVar10;
        iVar1 = func_0x00018053d680(uVar5);
        iVar2 = func_0x00018053d680(*puVar4);
        if (iVar1 <= iVar2) {
          if (iVar1 < iVar2) break;
          puVar4 = puVar4 + -1;
          if (puVar4 != puVar10) {
            uVar9 = *puVar4;
            *puVar4 = uVar5;
            *puVar10 = uVar9;
          }
        }
      }
      if (unaff_RBX == unaff_R12) {
        if (puVar8 == unaff_R15) {
          *unaff_R14 = puVar4;
          unaff_R14[1] = puVar6;
          return;
        }
        if (puVar6 != puVar8) {
          uVar5 = *puVar4;
          *puVar4 = *puVar6;
          *puVar6 = uVar5;
        }
        puVar6 = puVar6 + 1;
        uVar5 = *puVar4;
        *puVar4 = *puVar8;
        *puVar8 = uVar5;
        puVar8 = puVar8 + 1;
        puVar4 = puVar4 + 1;
      }
      else {
        unaff_RBX = unaff_RBX + -1;
        if (puVar8 == unaff_R15) {
          puVar4 = puVar4 + -1;
          if (unaff_RBX == puVar4) {
            puVar10 = puVar6 + -1;
            puVar6 = puVar6 + -1;
            uVar5 = *puVar4;
            *puVar4 = *puVar10;
            *puVar6 = uVar5;
          }
          else {
            puVar6 = puVar6 + -1;
            uVar5 = *unaff_RBX;
            *unaff_RBX = *puVar4;
            *puVar4 = uVar5;
            *puVar4 = *puVar6;
            *puVar6 = uVar5;
          }
        }
        else {
          uVar5 = *puVar8;
          *puVar8 = *unaff_RBX;
          *unaff_RBX = uVar5;
          puVar8 = puVar8 + 1;
        }
      }
      goto joined_r0x00018053eb83;
    }
    iVar1 = func_0x00018053d680(*puVar4);
    uVar5 = *puVar8;
    iVar2 = func_0x00018053d680(uVar5);
    if (iVar1 <= iVar2) {
      puVar10 = unaff_RBX;
      if (iVar1 < iVar2) goto joined_r0x00018053ebc0;
      if (puVar6 != puVar8) {
        uVar9 = *puVar6;
        *puVar6 = uVar5;
        *puVar8 = uVar9;
      }
      puVar6 = puVar6 + 1;
    }
    puVar8 = puVar8 + 1;
  } while( true );
}





// 函数: void FUN_18053eb11(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_18053eb11(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint64_t *unaff_RBX;
  uint64_t *puVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t *unaff_R12;
  uint64_t *unaff_R14;
  uint64_t *unaff_R15;
  
  uVar5 = *unaff_RBX;
  do {
    uVar8 = unaff_RBX[-1];
    puVar7 = unaff_RBX + -1;
    iVar1 = func_0x00018053d680(uVar8);
    iVar2 = func_0x00018053d680(uVar5);
    uVar5 = uVar8;
    if ((iVar2 < iVar1) || (iVar1 < iVar2)) break;
    unaff_RBX = puVar7;
  } while (unaff_R12 < puVar7);
  puVar7 = param_3;
  puVar4 = unaff_RBX;
  if (param_3 < unaff_R15) {
    uVar3 = func_0x00018053d680(*unaff_RBX);
    uVar6 = (ulonglong)uVar3;
    do {
      iVar1 = func_0x00018053d680(*param_3);
      puVar7 = param_3;
      if (((int)uVar6 < iVar1) || (iVar1 < (int)uVar6)) break;
      param_3 = param_3 + 1;
      puVar7 = param_3;
    } while (param_3 < unaff_R15);
  }
joined_r0x00018053eb83:
  do {
    puVar9 = unaff_RBX;
    if (unaff_R15 <= puVar7) {
joined_r0x00018053ebc0:
      for (; unaff_R12 < unaff_RBX; unaff_RBX = unaff_RBX + -1) {
        puVar9 = puVar9 + -1;
        uVar5 = *puVar9;
        iVar1 = func_0x00018053d680(uVar5);
        iVar2 = func_0x00018053d680(*puVar4);
        if (iVar1 <= iVar2) {
          if (iVar1 < iVar2) break;
          puVar4 = puVar4 + -1;
          if (puVar4 != puVar9) {
            uVar8 = *puVar4;
            *puVar4 = uVar5;
            *puVar9 = uVar8;
          }
        }
      }
      if (unaff_RBX == unaff_R12) {
        if (puVar7 == unaff_R15) {
          *unaff_R14 = puVar4;
          unaff_R14[1] = param_3;
          return;
        }
        if (param_3 != puVar7) {
          uVar5 = *puVar4;
          *puVar4 = *param_3;
          *param_3 = uVar5;
        }
        param_3 = param_3 + 1;
        uVar5 = *puVar4;
        *puVar4 = *puVar7;
        *puVar7 = uVar5;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
      }
      else {
        unaff_RBX = unaff_RBX + -1;
        if (puVar7 == unaff_R15) {
          puVar4 = puVar4 + -1;
          if (unaff_RBX == puVar4) {
            puVar9 = param_3 + -1;
            param_3 = param_3 + -1;
            uVar5 = *puVar4;
            *puVar4 = *puVar9;
            *param_3 = uVar5;
          }
          else {
            param_3 = param_3 + -1;
            uVar5 = *unaff_RBX;
            *unaff_RBX = *puVar4;
            *puVar4 = uVar5;
            *puVar4 = *param_3;
            *param_3 = uVar5;
          }
        }
        else {
          uVar5 = *puVar7;
          *puVar7 = *unaff_RBX;
          *unaff_RBX = uVar5;
          puVar7 = puVar7 + 1;
        }
      }
      goto joined_r0x00018053eb83;
    }
    iVar1 = func_0x00018053d680(*puVar4);
    uVar5 = *puVar7;
    iVar2 = func_0x00018053d680(uVar5);
    if (iVar1 <= iVar2) {
      puVar9 = unaff_RBX;
      if (iVar1 < iVar2) goto joined_r0x00018053ebc0;
      if (param_3 != puVar7) {
        uVar8 = *param_3;
        *param_3 = uVar5;
        *puVar7 = uVar8;
      }
      param_3 = param_3 + 1;
    }
    puVar7 = puVar7 + 1;
  } while( true );
}





// 函数: void FUN_18053ecd0(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)
void FUN_18053ecd0(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)

{
  char cVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t uVar4;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  puVar2 = (uint64_t *)*param_4;
  cVar1 = *(char *)puVar2[3];
  uVar4 = FUN_18053cf40(param_1,param_2,cVar1);
  FUN_18053d000(*puVar2,uVar4,puVar2[1],*(uint64_t *)puVar2[2],cVar1 != '\0');
  if (*(char *)puVar2[4] != '\0') {
    lVar3 = *(longlong *)puVar2[2];
    uStack_18 = *(uint64_t *)(lVar3 + 0x24);
    uStack_10 = *(uint64_t *)(lVar3 + 0x2c);
    FUN_18053d120(*(int8_t *)puVar2[3],uVar4,&uStack_18,*(int32_t *)(lVar3 + 0xc),
                  *(int32_t *)(lVar3 + 0x10),*(int32_t *)(lVar3 + 8),*(int8_t *)puVar2[3])
    ;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18053ed70(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0a870;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053ee50(ulonglong *param_1)
void FUN_18053ee50(ulonglong *param_1)

{
  ulonglong *puVar1;
  
  FUN_180626f80(&unknown_var_8896_ptr);
  for (puVar1 = *(ulonglong **)
                 (*(longlong *)(_DAT_180c95f30 + 8) +
                 (*param_1 % (ulonglong)*(uint *)(_DAT_180c95f30 + 0x10)) * 8);
      puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[7]) {
    if (*param_1 == *puVar1) goto LAB_18053eeb0;
  }
  puVar1 = (ulonglong *)0x0;
LAB_18053eeb0:
  if (puVar1 == (ulonglong *)0x0) {
    *(int8_t *)
     (*(longlong *)(*(longlong *)(_DAT_180c95f30 + 8) + *(longlong *)(_DAT_180c95f30 + 0x10) * 8) +
     0x34) = 1;
    return;
  }
  *(int8_t *)((longlong)puVar1 + 0x34) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053ef20(uint64_t *param_1,uint64_t param_2,uint64_t param_3,ulonglong *param_4)
void FUN_18053ef20(uint64_t *param_1,uint64_t param_2,uint64_t param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  
  for (puVar1 = *(ulonglong **)
                 (*(longlong *)(_DAT_180c95f30 + 8) +
                 (*param_4 % (ulonglong)*(uint *)(_DAT_180c95f30 + 0x10)) * 8);
      puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[7]) {
    if (*param_4 == *puVar1) goto LAB_18053ef74;
  }
  puVar1 = (ulonglong *)0x0;
LAB_18053ef74:
  if (puVar1 == (ulonglong *)0x0) {
    puVar1 = *(ulonglong **)
              (*(longlong *)(_DAT_180c95f30 + 8) + *(longlong *)(_DAT_180c95f30 + 0x10) * 8);
  }
  *(int8_t *)((longlong)puVar1 + 0x22) = 4;
  FUN_180639bf0(puVar1 + 1,param_2);
                    // WARNING: Subroutine does not return
  memcpy(puVar1[1],*param_1,param_2);
}





// 函数: void FUN_18053f0d0(int param_1,int param_2,longlong *param_3)
void FUN_18053f0d0(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_1 < param_2) {
    lVar1 = (longlong)param_1 * 0xe0;
    uVar2 = (ulonglong)(uint)(param_2 - param_1);
    do {
      FUN_18053b6e0(*(longlong *)(*param_3 + 0x80) + lVar1);
      lVar1 = lVar1 + 0xe0;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}





// 函数: void FUN_18053f0d9(int param_1,int param_2,longlong *param_3)
void FUN_18053f0d9(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = (longlong)param_1 * 0xe0;
  uVar2 = (ulonglong)(uint)(param_2 - param_1);
  do {
    FUN_18053b6e0(*(longlong *)(*param_3 + 0x80) + lVar1);
    lVar1 = lVar1 + 0xe0;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}





// 函数: void FUN_18053f12e(void)
void FUN_18053f12e(void)

{
  return;
}





// 函数: void FUN_18053f170(longlong param_1,longlong param_2,ulonglong param_3,uint64_t *param_4)
void FUN_18053f170(longlong param_1,longlong param_2,ulonglong param_3,uint64_t *param_4)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  lVar6 = param_2;
  if (param_2 < lVar5) {
    do {
      lVar4 = lVar6 * 2;
      iVar2 = func_0x00018053d680(*(uint64_t *)(param_1 + 0x10 + lVar6 * 0x10));
      iVar3 = func_0x00018053d680(*(uint64_t *)(param_1 + 8 + lVar4 * 8));
      lVar4 = (ulonglong)(iVar2 <= iVar3) + 1 + lVar4;
      *(uint64_t *)(param_1 + lVar6 * 8) = *(uint64_t *)(param_1 + lVar4 * 8);
      lVar6 = lVar4;
    } while (lVar4 < lVar5);
  }
  if ((lVar4 == lVar5) && ((param_3 & 1) == 0)) {
    *(uint64_t *)(param_1 + lVar4 * 8) = *(uint64_t *)(param_1 + -8 + param_3 * 8);
    lVar4 = param_3 - 1;
  }
  if (param_2 < lVar4) {
    do {
      lVar6 = lVar4 + -1 >> 1;
      uVar1 = *(uint64_t *)(param_1 + lVar6 * 8);
      iVar2 = func_0x00018053d680(uVar1);
      iVar3 = func_0x00018053d680(*param_4);
      if (iVar2 <= iVar3) goto LAB_18053f248;
      *(uint64_t *)(param_1 + lVar4 * 8) = uVar1;
      lVar4 = lVar6;
    } while (param_2 < lVar6);
    *(uint64_t *)(param_1 + lVar6 * 8) = *param_4;
  }
  else {
LAB_18053f248:
    *(uint64_t *)(param_1 + lVar4 * 8) = *param_4;
  }
  return;
}





