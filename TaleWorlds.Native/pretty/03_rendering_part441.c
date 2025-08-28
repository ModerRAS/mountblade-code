/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part441.c - 10 个函数

// 函数: void FUN_18050bc2f(void)
void FUN_18050bc2f(void)

{
  char cVar1;
  int iVar2;
  int64_t unaff_RBX;
  int64_t lVar3;
  uint64_t unaff_RDI;
  int64_t in_R11;
  
  lVar3 = unaff_RDI * 0x1f8;
  cVar1 = FUN_18058f970(in_R11 + 8 + lVar3);
  if ((cVar1 != '\0') &&
     ((*(uint *)((int64_t)*(int *)(lVar3 + 0xf8 + in_R11) * 0xa0 +
                 *(int64_t *)(lVar3 + 0xd8 + in_R11) + 0x50) & 0x103) != 0x100)) {
    FUN_180531050();
    in_R11 = *(int64_t *)(unaff_RBX + 0x8f8);
  }
  iVar2 = FUN_180537650(in_R11,unaff_RDI & 0xffffffff,*(uint *)(unaff_RBX + 0x564) >> 0x1f ^ 1,
                        *(int32_t *)(unaff_RBX + 0x56c));
  if ((-1 < iVar2) &&
     (*(int *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0x9e0 + (int64_t)iVar2 * 4) != (int)unaff_RDI)) {
    FUN_18050b440();
  }
  return;
}





// 函数: void FUN_18050bcb9(uint64_t param_1,int param_2)
void FUN_18050bcb9(uint64_t param_1,int param_2)

{
  int64_t unaff_RBX;
  int unaff_EDI;
  
  if (*(int *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0x9e0 + (int64_t)param_2 * 4) != unaff_EDI) {
    FUN_18050b440();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050bd00(int64_t param_1,int param_2,int32_t param_3)
void FUN_18050bd00(int64_t param_1,int param_2,int32_t param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int64_t lVar6;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint in_stack_ffffffffffffffb8;
  
  lVar10 = render_system_config;
  lVar6 = *(int64_t *)(param_1 + 0x8f8);
  uVar12 = (uint64_t)param_2;
  iVar1 = *(int *)(lVar6 + 0x9e0 + uVar12 * 4);
  if (param_2 == 1) {
    iVar7 = 1;
    iVar8 = 0;
    if (iVar1 < 4) {
      iVar8 = iVar1;
    }
    do {
      uVar5 = (iVar8 + iVar7) % 5;
      lVar9 = (int64_t)(int)uVar5 * 0x1f8 + lVar6;
      if (((0 < *(int *)(lVar9 + 0x38)) &&
          ((lVar11 = (int64_t)*(int *)(lVar9 + 0xf8) * 0xa0 + *(int64_t *)(lVar9 + 0xd8),
           (*(uint *)(lVar11 + 0x50) >> 9 & 1) == 0 || (0 < *(short *)(lVar9 + 0x10))))) &&
         (((cVar3 = func_0x000180534fb0(lVar9 + 8), cVar3 == '\0' || (0 < *(short *)(lVar9 + 0x10)))
          && ((*(uint *)(lVar11 + 0x58) & 0x80000) != 0)))) {
        bVar4 = *(byte *)((int64_t)*(int *)(lVar11 + 100) * 0x170 + 0x140 + lVar10);
        if ((*(int *)(lVar11 + 0x5c) == 0xf) && ((*(uint *)(param_1 + 0x56c) & 0x1000000) != 0)) {
          bVar4 = bVar4 & 0xfd;
        }
        if (*(int *)(param_1 + 0x564) < 0) {
          bVar2 = bVar4 & 1;
        }
        else {
          bVar2 = bVar4 & 2;
        }
        if ((bVar2 == 0) && ((bVar4 & 8) == 0)) break;
      }
      iVar7 = iVar7 + 1;
      uVar5 = 0xffffffff;
    } while (iVar7 < 5);
    if (((-1 < iVar8) && (iVar1 < 4)) || (uVar5 < 4)) {
      uVar12 = 1;
LAB_18050be46:
      if ((int)uVar5 < 0) {
        lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e8 + (int64_t)(int)uVar12 * 8);
        if ((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x58 + *(int64_t *)(lVar6 + 0xd0))
            & 0x3000) != 0) {
          if (system_status_flag == 1) {
            return;
          }
          if (system_status_flag == 4) {
            return;
          }
          FUN_18050c740(param_1,*(int32_t *)
                                 (*(int64_t *)(param_1 + 0x8f8) + 0x9e0 + (int64_t)(int)uVar12 * 4
                                 ),8);
          return;
        }
      }
      FUN_18050b440(param_1,uVar12 & 0xffffffff,uVar5,param_3,in_stack_ffffffffffffffb8 & 0xffffff00
                   );
    }
  }
  else {
    if (iVar1 == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar6 + 8 + (int64_t)iVar1 * 0x1f8;
    }
    iVar8 = 1;
    do {
      lVar10 = *(int64_t *)(param_1 + 0x8f8);
      uVar5 = (iVar8 + iVar1) % 5;
      lVar9 = (int64_t)(int)uVar5 * 0x1f8 + lVar10;
      if (((0 < *(int *)(lVar9 + 0x38)) &&
          (((*(uint *)((int64_t)*(int *)(lVar9 + 0xf8) * 0xa0 + 0x50 + *(int64_t *)(lVar9 + 0xd8))
             >> 9 & 1) == 0 || (0 < *(short *)(lVar9 + 0x10))))) &&
         ((cVar3 = func_0x000180534fb0(lVar9 + 8), cVar3 == '\0' || (0 < *(short *)(lVar9 + 0x10))))
         ) {
        in_stack_ffffffffffffffb8 = *(uint *)(param_1 + 0x56c);
        cVar3 = FUN_1805377e0(lVar10,uVar5,param_2,*(uint *)(param_1 + 0x564) >> 0x1f ^ 1,
                              in_stack_ffffffffffffffb8);
        if ((cVar3 != '\0') &&
           ((((lVar6 == 0 ||
              ((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 +
                         *(int64_t *)(lVar6 + 0xd0)) >> 8 & 1) == 0)) ||
             ((*(uint *)((int64_t)*(int *)(lVar9 + 0xf8) * 0xa0 + 0x50 +
                        *(int64_t *)(lVar9 + 0xd8)) >> 8 & 1) == 0)) ||
            (*(int *)(lVar9 + 0x38) != *(int *)(lVar6 + 0x30))))) goto LAB_18050be46;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 5);
  }
  return;
}





// 函数: void FUN_18050c030(int64_t param_1,int param_2,char param_3)
void FUN_18050c030(int64_t param_1,int param_2,char param_3)

{
  int iVar1;
  int64_t lVar2;
  int32_t uVar3;
  char cVar4;
  char cVar5;
  int32_t uVar6;
  bool bVar7;
  bool bVar8;
  int32_t uVar9;
  
  if (param_2 == 0) {
    bVar7 = param_3 == '\0';
    if (param_3 != '\0') goto LAB_18050c05d;
LAB_18050c088:
    cVar5 = '\0';
  }
  else {
    bVar7 = (param_2 - 1U & 0xfffffffd) == 0;
    if ((param_2 - 2U & 0xfffffffd) != 0) goto LAB_18050c088;
LAB_18050c05d:
    cVar5 = '\x01';
  }
  lVar2 = *(int64_t *)(param_1 + 0x6e0);
  iVar1 = *(int *)(lVar2 + 0x14a8);
  if (iVar1 == 0) {
    bVar8 = *(char *)(lVar2 + 0x2024) == (char)iVar1;
    if (*(char *)(lVar2 + 0x2024) == (char)iVar1) {
LAB_18050c123:
      cVar4 = '\0';
      goto LAB_18050c0b1;
    }
  }
  else {
    bVar8 = (iVar1 - 1U & 0xfffffffd) == 0;
    if ((iVar1 - 2U & 0xfffffffd) != 0) goto LAB_18050c123;
  }
  cVar4 = '\x01';
LAB_18050c0b1:
  if (((cVar5 == '\0') || (cVar4 != '\0')) && ((bVar7 == false || (bVar8 != false)))) {
    if (((cVar5 == '\0') && (cVar4 != '\0')) || ((bVar7 == false && (bVar8 != false)))) {
      uVar9 = *(int32_t *)(lVar2 + 0x21e0);
      if (*(char *)(lVar2 + 0x21c0) == '\0') {
        uVar6 = *(int32_t *)(lVar2 + 0x14b4);
        uVar3 = 0xffffffff;
      }
      else {
        uVar6 = *(int32_t *)(lVar2 + 0x21c4);
        uVar3 = 0xffffffff;
      }
    }
    else {
      if (*(char *)(lVar2 + 0x21c0) == '\0') {
        return;
      }
      uVar9 = *(int32_t *)(lVar2 + 0x21e0);
      uVar6 = *(int32_t *)(lVar2 + 0x21c4);
      uVar3 = *(int32_t *)(lVar2 + 0x14b4);
    }
  }
  else {
    FUN_180511990(param_1,*(int32_t *)(lVar2 + 0x14b4),0xffffffff,bVar7,cVar5,0);
    if ((cVar4 == '\0') && (bVar8 == false)) {
      return;
    }
    lVar2 = *(int64_t *)(param_1 + 0x6e0);
    uVar9 = *(int32_t *)(lVar2 + 0x21e0);
    if (*(char *)(lVar2 + 0x21c0) == '\0') {
      uVar6 = *(int32_t *)(lVar2 + 0x14b4);
      uVar3 = 0xffffffff;
    }
    else {
      uVar6 = *(int32_t *)(lVar2 + 0x21c4);
      uVar3 = 0xffffffff;
    }
  }
  FUN_180511990(param_1,uVar3,uVar6,bVar8,cVar4,uVar9);
  return;
}





// 函数: void FUN_18050c067(int64_t param_1,uint64_t param_2,char param_3,uint64_t param_4)
void FUN_18050c067(int64_t param_1,uint64_t param_2,char param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  int32_t uVar3;
  int64_t unaff_RSI;
  char cVar4;
  int32_t uVar5;
  bool bVar6;
  int32_t uStack0000000000000028;
  
  iVar1 = *(int *)(param_1 + 0x14a8);
  if (iVar1 == 0) {
    bVar6 = *(char *)(param_1 + 0x2024) == (char)iVar1;
    if (*(char *)(param_1 + 0x2024) == (char)iVar1) {
LAB_18050c123:
      cVar4 = '\0';
      goto LAB_18050c0b1;
    }
  }
  else {
    bVar6 = (iVar1 - 1U & 0xfffffffd) == 0;
    if ((iVar1 - 2U & 0xfffffffd) != 0) goto LAB_18050c123;
  }
  cVar4 = '\x01';
LAB_18050c0b1:
  if (((param_3 == '\0') || (cVar4 != '\0')) && (((char)param_4 == '\0' || (bVar6 != false)))) {
    if (((param_3 == '\0') && (cVar4 != '\0')) || (((char)param_4 == '\0' && (bVar6 != false)))) {
      uStack0000000000000028 = *(int32_t *)(param_1 + 0x21e0);
      if (*(char *)(param_1 + 0x21c0) == '\0') {
        uVar5 = *(int32_t *)(param_1 + 0x14b4);
        uVar3 = 0xffffffff;
      }
      else {
        uVar5 = *(int32_t *)(param_1 + 0x21c4);
        uVar3 = 0xffffffff;
      }
    }
    else {
      if (*(char *)(param_1 + 0x21c0) == '\0') {
        return;
      }
      uStack0000000000000028 = *(int32_t *)(param_1 + 0x21e0);
      uVar5 = *(int32_t *)(param_1 + 0x21c4);
      uVar3 = *(int32_t *)(param_1 + 0x14b4);
    }
  }
  else {
    uStack0000000000000028 = 0;
    FUN_180511990(0,*(int32_t *)(param_1 + 0x14b4),0xffffffff,param_4,param_3);
    if ((cVar4 == '\0') && (bVar6 == false)) {
      return;
    }
    lVar2 = *(int64_t *)(unaff_RSI + 0x6e0);
    uStack0000000000000028 = *(int32_t *)(lVar2 + 0x21e0);
    if (*(char *)(lVar2 + 0x21c0) == '\0') {
      uVar5 = *(int32_t *)(lVar2 + 0x14b4);
      uVar3 = 0xffffffff;
    }
    else {
      uVar5 = *(int32_t *)(lVar2 + 0x21c4);
      uVar3 = 0xffffffff;
    }
  }
  FUN_180511990(uStack0000000000000028,uVar3,uVar5,bVar6,cVar4);
  return;
}





// 函数: void FUN_18050c07e(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)
void FUN_18050c07e(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  int32_t uVar3;
  int64_t unaff_RSI;
  char cVar4;
  int32_t uVar5;
  bool bVar6;
  bool bVar7;
  int32_t uStack0000000000000028;
  
  bVar7 = (param_2 - 2U & 0xfffffffd) == 0;
  lVar2 = *(int64_t *)(param_1 + 0x6e0);
  iVar1 = *(int *)(lVar2 + 0x14a8);
  if (iVar1 == 0) {
    bVar6 = *(char *)(lVar2 + 0x2024) == (char)iVar1;
    if (*(char *)(lVar2 + 0x2024) == (char)iVar1) {
LAB_18050c123:
      cVar4 = '\0';
      goto LAB_18050c0b1;
    }
  }
  else {
    bVar6 = (iVar1 - 1U & 0xfffffffd) == 0;
    if ((iVar1 - 2U & 0xfffffffd) != 0) goto LAB_18050c123;
  }
  cVar4 = '\x01';
LAB_18050c0b1:
  if (((bVar7) && (cVar4 == '\0')) || (((char)param_4 != '\0' && (bVar6 == false)))) {
    uStack0000000000000028 = 0;
    FUN_180511990(0,*(int32_t *)(lVar2 + 0x14b4),0xffffffff,param_4,bVar7);
    if ((cVar4 == '\0') && (bVar6 == false)) {
      return;
    }
    lVar2 = *(int64_t *)(unaff_RSI + 0x6e0);
    uStack0000000000000028 = *(int32_t *)(lVar2 + 0x21e0);
    if (*(char *)(lVar2 + 0x21c0) == '\0') {
      uVar5 = *(int32_t *)(lVar2 + 0x14b4);
      uVar3 = 0xffffffff;
    }
    else {
      uVar5 = *(int32_t *)(lVar2 + 0x21c4);
      uVar3 = 0xffffffff;
    }
  }
  else if (((bVar7) || (cVar4 == '\0')) && (((char)param_4 != '\0' || (bVar6 == false)))) {
    if (*(char *)(lVar2 + 0x21c0) == '\0') {
      return;
    }
    uStack0000000000000028 = *(int32_t *)(lVar2 + 0x21e0);
    uVar5 = *(int32_t *)(lVar2 + 0x21c4);
    uVar3 = *(int32_t *)(lVar2 + 0x14b4);
  }
  else {
    uStack0000000000000028 = *(int32_t *)(lVar2 + 0x21e0);
    if (*(char *)(lVar2 + 0x21c0) == '\0') {
      uVar5 = *(int32_t *)(lVar2 + 0x14b4);
      uVar3 = 0xffffffff;
    }
    else {
      uVar5 = *(int32_t *)(lVar2 + 0x21c4);
      uVar3 = 0xffffffff;
    }
  }
  FUN_180511990(uStack0000000000000028,uVar3,uVar5,bVar6,cVar4);
  return;
}





// 函数: void FUN_18050c08d(int64_t param_1,int param_2,char param_3,uint64_t param_4)
void FUN_18050c08d(int64_t param_1,int param_2,char param_3,uint64_t param_4)

{
  int64_t lVar1;
  int32_t uVar2;
  int64_t unaff_RSI;
  char cVar3;
  int32_t uVar4;
  bool bVar5;
  int32_t uStack0000000000000028;
  
  bVar5 = (param_2 - 1U & 0xfffffffd) == 0;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x2024) != '\0') {
LAB_18050c0ae:
      cVar3 = '\x01';
      goto LAB_18050c0b1;
    }
  }
  else if ((param_2 - 2U & 0xfffffffd) == 0) goto LAB_18050c0ae;
  cVar3 = '\0';
LAB_18050c0b1:
  if (((param_3 == '\0') || (cVar3 != '\0')) && (((char)param_4 == '\0' || (bVar5)))) {
    if (((param_3 == '\0') && (cVar3 != '\0')) || (((char)param_4 == '\0' && (bVar5)))) {
      uStack0000000000000028 = *(int32_t *)(param_1 + 0x21e0);
      if (*(char *)(param_1 + 0x21c0) == '\0') {
        uVar4 = *(int32_t *)(param_1 + 0x14b4);
        uVar2 = 0xffffffff;
      }
      else {
        uVar4 = *(int32_t *)(param_1 + 0x21c4);
        uVar2 = 0xffffffff;
      }
    }
    else {
      if (*(char *)(param_1 + 0x21c0) == '\0') {
        return;
      }
      uStack0000000000000028 = *(int32_t *)(param_1 + 0x21e0);
      uVar4 = *(int32_t *)(param_1 + 0x21c4);
      uVar2 = *(int32_t *)(param_1 + 0x14b4);
    }
  }
  else {
    uStack0000000000000028 = 0;
    FUN_180511990(0,*(int32_t *)(param_1 + 0x14b4),0xffffffff,param_4,param_3);
    if ((cVar3 == '\0') && (!bVar5)) {
      return;
    }
    lVar1 = *(int64_t *)(unaff_RSI + 0x6e0);
    uStack0000000000000028 = *(int32_t *)(lVar1 + 0x21e0);
    if (*(char *)(lVar1 + 0x21c0) == '\0') {
      uVar4 = *(int32_t *)(lVar1 + 0x14b4);
      uVar2 = 0xffffffff;
    }
    else {
      uVar4 = *(int32_t *)(lVar1 + 0x21c4);
      uVar2 = 0xffffffff;
    }
  }
  FUN_180511990(uStack0000000000000028,uVar2,uVar4,bVar5,cVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050c1c0(int64_t param_1)
void FUN_18050c1c0(int64_t param_1)

{
  ushort *puVar1;
  int64_t *plVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int8_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  ushort uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  uint *puVar17;
  int8_t auStack_88 [32];
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_30;
  
  lVar13 = *(int64_t *)(param_1 + 0x6d8);
  if ((*(int *)(param_1 + 0x570) == 2) && (system_data_ec8a != '\0')) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  *(int8_t *)(lVar13 + 0x848) = uVar11;
  uStack_30 = 0x18050c1fa;
  FUN_180543e30(lVar13);
  uStack_30 = 0x18050c205;
  FUN_180540440(lVar13);
  uStack_30 = 0x18050c20e;
  FUN_1805a3a20(param_1 + 0x28);
  if ((((system_status_flag != 1) && (system_status_flag != 4)) && (*(int *)(param_1 + 0x570) == 1)) &&
     (*(int *)(param_1 + 0x568) == 1)) {
    puVar1 = (ushort *)(*(int64_t *)(param_1 + 0x6e0) + 0x130);
    *puVar1 = *puVar1 | 1;
  }
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  lVar13 = *(int64_t *)(param_1 + 0x130);
  lVar5 = *(int64_t *)(lVar13 + 0x590);
  lVar6 = *(int64_t *)(*(int64_t *)(lVar13 + 0x8f8) + 0x9e8);
  uVar12 = *(uint64_t *)(lVar5 + 0x2460);
  lVar7 = *(int64_t *)(*(int64_t *)(lVar13 + 0x8f8) + 0x9f0);
  if (uVar12 != 0) {
    uVar12 = *(uint64_t *)(uVar12 + 0x1d0);
  }
  uVar12 = *(uint64_t *)(lVar5 + 0x2470) | uVar12;
  if (*(int64_t *)(lVar5 + 0x24a8) == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(uint64_t *)(*(int64_t *)(lVar5 + 0x24a8) + 0x1d0);
  }
  if (((uVar12 & 0x2000000000) == 0) && (*(int *)(lVar5 + 0x2498) != -1)) {
    uVar12 = *(uint64_t *)(lVar5 + 0x24b8) | uVar15;
  }
  plVar2 = (int64_t *)(lVar13 + 0x728);
  if ((((uVar12 >> 0x1a & 1) == 0) &&
      (lVar16 = *plVar2,
      0.0 <= (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(lVar16 + 0x570) * 8) -
                    *(int64_t *)(lVar16 + 0x568)) * 1e-05)) ||
     (lVar16 = *plVar2, ((*(ushort *)(lVar16 + 0x5ac) | *(ushort *)(lVar16 + 0x5aa)) & 0x7fc) != 0))
  {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((lVar7 == 0) ||
     ((*(uint *)((int64_t)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x58 + *(int64_t *)(lVar7 + 0xd0)) &
      0x100000) == 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((((*(int *)(lVar13 + 0x564) < 0) || (*(float *)(lVar5 + 0x2434) != 0.0)) ||
      ((iVar4 = *(int *)(lVar5 + 0x2450), iVar4 != -1 &&
       ((*(int *)((int64_t)iVar4 * 0x68 + 0x58 + render_system_config) == 0x24 ||
        (*(int *)((int64_t)iVar4 * 0x68 + 0x58 + render_system_config) == 0x25)))))) ||
     ((lVar6 != 0 &&
      ((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0)) >>
        0x15 & 1) != 0)))) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (((bVar8) || (bVar9)) || (bVar10)) {
    lVar13 = *plVar2;
    if (((*(ushort *)(lVar13 + 0x5ac) | *(ushort *)(lVar13 + 0x5aa)) & 0x3003) == 0) {
      *(uint64_t *)(lVar13 + 0x504) = 0;
      *(uint64_t *)(lVar13 + 0x50c) = 0;
      lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 0x130) + 0x728);
      *(uint64_t *)(lVar13 + 0x514) = 0;
      *(uint64_t *)(lVar13 + 0x51c) = 0;
      lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 0x130) + 0x728);
      *(uint64_t *)(lVar13 + 0x544) = 0;
      *(uint64_t *)(lVar13 + 0x54c) = 0;
      puVar17 = (uint *)((int64_t)
                         *(char *)(*(int64_t *)
                                    (*(int64_t *)
                                      (*(int64_t *)
                                        (*(int64_t *)(*(int64_t *)(param_1 + 0x130) + 0x6d8) +
                                        0x8a8) + 0x260) + 0x210) + 0xe3) * 0x100 +
                        *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x130) + 0x658) + 0x18))
      ;
      do {
        LOCK();
        uVar3 = *puVar17;
        *puVar17 = *puVar17 | 1;
        UNLOCK();
      } while ((uVar3 & 1) != 0);
      uStack_68 = *(uint64_t *)(puVar17 + 1);
      uStack_60 = *(uint64_t *)(puVar17 + 3);
      uStack_58 = *(uint64_t *)(puVar17 + 5);
      uStack_50 = *(uint64_t *)(puVar17 + 7);
      *puVar17 = 0;
      lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 0x130) + 0x728);
      *(uint64_t *)(lVar13 + 0x4f4) = uStack_58;
      *(uint64_t *)(lVar13 + 0x4fc) = uStack_50;
      *(float *)(*(int64_t *)(*(int64_t *)(param_1 + 0x130) + 0x728) + 0x564) =
           (float)render_system_data_config * 1e-05;
    }
    lVar13 = *(int64_t *)(param_1 + 0x130);
    if (bVar9) {
      uVar14 = *(ushort *)(*(int64_t *)(lVar13 + 0x728) + 0x5aa) & 0x2000;
      if (uVar14 != 0) {
        puVar1 = (ushort *)(*(int64_t *)(lVar13 + 0x728) + 0x5ac);
        *puVar1 = *puVar1 | uVar14;
        puVar1 = (ushort *)(*(int64_t *)(lVar13 + 0x728) + 0x5aa);
        *puVar1 = *puVar1 & ~uVar14;
        lVar13 = *(int64_t *)(param_1 + 0x130);
      }
      lVar5 = *(int64_t *)(lVar13 + 0x728);
      if (((*(ushort *)(lVar5 + 0x5ac) | *(ushort *)(lVar5 + 0x5aa)) & 0x1000) == 0) {
        *(int32_t *)(lVar5 + 0x80) = 0;
        *(int32_t *)(lVar5 + 0x84) = 0;
        *(int32_t *)(lVar5 + 0x88) = 0;
        *(int32_t *)(lVar5 + 0x8c) = 0;
        lVar13 = *(int64_t *)(param_1 + 0x130);
      }
      FUN_180516bd0(lVar13,0x1000,0x382a);
    }
    else {
      lVar5 = *(int64_t *)(lVar13 + 0x728);
      if (bVar10) {
        uVar14 = *(ushort *)(lVar5 + 0x5aa) & 0x1000;
        if (uVar14 != 0) {
          *(ushort *)(lVar5 + 0x5ac) = *(ushort *)(lVar5 + 0x5ac) | uVar14;
          puVar1 = (ushort *)(*(int64_t *)(lVar13 + 0x728) + 0x5aa);
          *puVar1 = *puVar1 & ~uVar14;
          lVar13 = *(int64_t *)(param_1 + 0x130);
        }
        FUN_180516bd0(lVar13,0x2000,0x382a);
      }
      else {
        uVar14 = *(ushort *)(lVar5 + 0x5aa) & 0x3000;
        if (uVar14 != 0) {
          *(ushort *)(lVar5 + 0x5ac) = *(ushort *)(lVar5 + 0x5ac) | uVar14;
          puVar1 = (ushort *)(*(int64_t *)(lVar13 + 0x728) + 0x5aa);
          *puVar1 = *puVar1 & ~uVar14;
        }
      }
    }
    lVar13 = *(int64_t *)(param_1 + 0x130);
    lVar5 = *(int64_t *)(lVar13 + 0x728);
    if (!bVar8) {
      uVar14 = *(ushort *)(lVar5 + 0x5aa) & 1;
      if (uVar14 != 0) {
        *(ushort *)(lVar5 + 0x5ac) = *(ushort *)(lVar5 + 0x5ac) | uVar14;
        puVar1 = (ushort *)(*(int64_t *)(lVar13 + 0x728) + 0x5aa);
        *puVar1 = *puVar1 & ~uVar14;
        lVar13 = *(int64_t *)(param_1 + 0x130);
      }
LAB_18059b902:
      uVar14 = *(ushort *)(*(int64_t *)(lVar13 + 0x728) + 0x5aa) & 2;
      if (uVar14 != 0) {
        puVar1 = (ushort *)(*(int64_t *)(lVar13 + 0x728) + 0x5ac);
        *puVar1 = *puVar1 | uVar14;
        lVar13 = *(int64_t *)(lVar13 + 0x728);
        goto LAB_18059b924;
      }
      goto LAB_18059b92e;
    }
    if ((*(byte *)(lVar5 + 0x5aa) & 1) == 0) {
      FUN_180516bd0(lVar13,1,0xc7d5);
      lVar13 = *(int64_t *)(param_1 + 0x130);
    }
    if ((bVar9) ||
       ((*(int64_t *)(*(int64_t *)(lVar13 + 0x8f8) + 0x9f0) == 0 &&
        ((lVar5 = *(int64_t *)(*(int64_t *)(lVar13 + 0x8f8) + 0x9e8), lVar5 == 0 ||
         (*(char *)(*(int64_t *)(lVar5 + 0xf8) + 0x88) !=
          *(char *)(*(int64_t *)(lVar13 + 0x590) + 0x25fc))))))) goto LAB_18059b902;
    uVar14 = *(ushort *)(*(int64_t *)(lVar13 + 0x728) + 0x5aa);
    if ((uVar14 & 2) != 0) goto LAB_18059b92e;
    if (((uVar14 & 0x800) == 0) || ((uVar12 & 0x800000000000) == 0)) {
      FUN_180516bd0(lVar13,2,0xc7d5);
      goto LAB_18059b92e;
    }
LAB_18059b933:
    lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 0x130) + 0x728);
    if (((*(ushort *)(lVar13 + 0x5aa) & 0x342a) == 0) &&
       ((*(ushort *)(lVar13 + 0x5ac) & 0x342a) == 0)) {
      FUN_180516bd0(*(int64_t *)(param_1 + 0x130),0x800,0x382a);
      goto LAB_18059b99c;
    }
  }
  else {
    uVar14 = *(ushort *)(lVar16 + 0x5aa) & 0x3003;
    if (uVar14 == 0) goto LAB_18059b92e;
    *(ushort *)(lVar16 + 0x5ac) = *(ushort *)(lVar16 + 0x5ac) | uVar14;
    lVar13 = *(int64_t *)(lVar13 + 0x728);
LAB_18059b924:
    *(ushort *)(lVar13 + 0x5aa) = *(ushort *)(lVar13 + 0x5aa) & ~uVar14;
LAB_18059b92e:
    if ((uVar12 & 0x800000000000) != 0) goto LAB_18059b933;
  }
  lVar13 = *(int64_t *)(param_1 + 0x130);
  lVar5 = *(int64_t *)(lVar13 + 0x728);
  uVar14 = *(ushort *)(lVar5 + 0x5aa) & 0x800;
  if (uVar14 != 0) {
    puVar1 = (ushort *)(lVar5 + 0x5ac);
    *puVar1 = *puVar1 | uVar14;
    puVar1 = (ushort *)(*(int64_t *)(lVar13 + 0x728) + 0x5aa);
    *puVar1 = *puVar1 & ~uVar14;
  }
LAB_18059b99c:
  lVar13 = *(int64_t *)(param_1 + 0x130);
  lVar5 = *(int64_t *)(lVar13 + 0x728);
  uVar14 = *(ushort *)(lVar5 + 0x5aa) & 0x3c0;
  if ((uVar14 != 0) &&
     (0.0 <= (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(lVar5 + 0x580) * 8) -
                    *(int64_t *)(lVar5 + 0x578)) * 1e-05)) {
    *(ushort *)(lVar5 + 0x5ac) = *(ushort *)(lVar5 + 0x5ac) | uVar14;
    puVar1 = (ushort *)(*(int64_t *)(lVar13 + 0x728) + 0x5aa);
    *puVar1 = *puVar1 & ~uVar14;
    *(int32_t *)(*(int64_t *)(lVar13 + 0x728) + 0x5a4) = 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_88);
}





// 函数: void FUN_18050c260(int64_t param_1)
void FUN_18050c260(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fStackX_8;
  float fStackX_c;
  
  iVar7 = -1;
  lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e8);
  lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9f0);
  if (lVar2 == 0) {
    iVar3 = -1;
    iVar5 = 0;
  }
  else {
    iVar3 = *(int *)(lVar2 + 0xf0);
    iVar5 = *(int *)((int64_t)iVar3 * 0xa0 + 100 + *(int64_t *)(lVar2 + 0xd0));
  }
  if (lVar4 != 0) {
    iVar7 = *(int *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar4 + 0xd0));
  }
  if ((((*(uint *)(param_1 + 0x56c) & 0x800) == 0) || (*(int64_t *)(param_1 + 0x590) == 0)) ||
     (*(char *)(*(int64_t *)(param_1 + 0x590) + 0x34bc) == '\0')) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if ((*(int *)(param_1 + 0x7e4) == iVar5) && (*(int *)(param_1 + 0x7e8) == iVar7)) {
    iVar1 = *(int *)(param_1 + 0x7ec);
    if (*(int *)(param_1 + 0x564) < 0) {
      if (bVar6 == 0) {
        bVar8 = iVar1 == -1;
      }
      else {
        bVar8 = iVar1 == -2;
      }
    }
    else {
      bVar8 = iVar1 == *(int *)(param_1 + 0x564);
    }
    if (bVar8) {
      return;
    }
  }
  FUN_180516fe0(param_1,&fStackX_8,lVar2,iVar3);
  fVar9 = 0.0;
  if (lVar2 == 0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = *(float *)((int64_t)iVar3 * 0xa0 + 0x88 + *(int64_t *)(lVar2 + 0xd0)) *
             *(float *)(lVar2 + 0x48);
    lVar4 = (int64_t)iVar3 * 0xa0;
    fVar9 = *(float *)(lVar4 + 0x88 + *(int64_t *)(lVar2 + 0xd0)) * *(float *)(lVar2 + 0x48) *
            *(float *)(lVar4 + 0x90 + *(int64_t *)(lVar2 + 0xd0));
  }
  iVar3 = *(int *)(param_1 + 0x564);
  *(int *)(param_1 + 0x7e4) = iVar5;
  *(int *)(param_1 + 0x7e8) = iVar7;
  *(float *)(param_1 + 0x7dc) = fStackX_8 + fVar10;
  if (iVar3 < 0) {
    iVar3 = (bVar6 ^ 1) - 2;
  }
  *(int *)(param_1 + 0x7ec) = iVar3;
  iVar3 = *(int *)(param_1 + 0x564);
  *(int *)(param_1 + 0x7e4) = iVar5;
  *(int *)(param_1 + 0x7e8) = iVar7;
  *(float *)(param_1 + 0x7e0) = fStackX_c + fVar9;
  if (iVar3 < 0) {
    iVar3 = (bVar6 ^ 1) - 2;
  }
  *(int *)(param_1 + 0x7ec) = iVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050c450(int64_t param_1,int param_2,uint param_3)
void FUN_18050c450(int64_t param_1,int param_2,uint param_3)

{
  int iVar1;
  int64_t lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  short sVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int8_t auStack_8b8 [32];
  uint64_t *puStack_898;
  uint uStack_890;
  uint64_t uStack_888;
  uint64_t uStack_880;
  int32_t uStack_878;
  uint64_t uStack_870;
  uint64_t uStack_868;
  int iStack_860;
  uint64_t uStack_858;
  float afStack_848 [256];
  float afStack_448 [256];
  uint64_t uStack_48;
  
  uStack_858 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_8b8;
  uStack_878 = 0;
  uStack_888 = 0;
  uStack_880 = 0;
  uStack_870 = 0;
  uStack_868 = 0;
  lVar10 = (int64_t)param_2 * 0x1f8 + *(int64_t *)(param_1 + 0x8f8);
  if ((param_3 & 0x20) == 0) {
                    // WARNING: Subroutine does not return
    AdvancedSystemController(*(int32_t *)(*(int64_t *)(param_1 + 0x20) + 0x34));
  }
  lVar9 = (int64_t)*(char *)(*(int64_t *)(lVar10 + 0x100) + 0x88);
  FUN_1802fd530(*(uint64_t *)(param_1 + 0x658),afStack_448,afStack_848);
  fVar3 = afStack_848[lVar9 * 4 + 3];
  uStack_870._0_4_ = afStack_448[lVar9 * 4];
  uStack_870._4_4_ = afStack_448[lVar9 * 4 + 1];
  fVar4 = afStack_448[lVar9 * 4 + 2];
  fVar5 = afStack_448[lVar9 * 4 + 3];
  lVar2 = *(int64_t *)(param_1 + 0x20);
  uStack_868 = CONCAT44(fVar5,fVar4);
  fVar11 = afStack_848[lVar9 * 4] + *(float *)(lVar2 + 0x24);
  fVar12 = afStack_848[lVar9 * 4 + 1] + *(float *)(lVar2 + 0x28);
  uStack_888 = CONCAT44(fVar12,fVar11);
  fVar13 = afStack_848[lVar9 * 4 + 2] + *(float *)(lVar2 + 0x2c);
  uStack_880 = CONCAT44(fVar3,fVar13);
  if (-50.0 <= fVar11) {
    if (52.350002 <= fVar11) {
      uStack_888 = CONCAT44(fVar12,0x42516667);
    }
  }
  else {
    uStack_888 = CONCAT44(fVar12,0xc2480000);
  }
  if (-50.0 <= fVar12) {
    if (52.350002 <= fVar12) {
      uStack_888 = CONCAT44(0x42516667,(int32_t)uStack_888);
    }
  }
  else {
    uStack_888 = CONCAT44(0xc2480000,(int32_t)uStack_888);
  }
  if (-50.0 <= fVar13) {
    if (52.350002 <= fVar13) {
      uStack_880 = CONCAT44(fVar3,0x42516667);
    }
  }
  else {
    uStack_880 = CONCAT44(fVar3,0xc2480000);
  }
  if (-150.0 <= (float)uStack_870) {
    if (1488.35 <= (float)uStack_870) {
      uStack_870._0_4_ = 1488.35;
    }
  }
  else {
    uStack_870._0_4_ = -150.0;
  }
  if (-150.0 <= uStack_870._4_4_) {
    if (1488.35 <= uStack_870._4_4_) {
      uStack_870._4_4_ = 1488.35;
    }
  }
  else {
    uStack_870._4_4_ = -150.0;
  }
  if (-150.0 <= fVar4) {
    if (1488.35 <= fVar4) {
      uStack_868 = CONCAT44(fVar5,0x44ba0b33);
    }
  }
  else {
    uStack_868 = CONCAT44(fVar5,0xc3160000);
  }
  if ((param_3 & 3) != 0) goto LAB_18050c696;
  cVar6 = func_0x000180534fb0(lVar10 + 8);
  if (cVar6 == '\0') {
LAB_18050c68f:
    uVar8 = 2;
  }
  else {
    sVar7 = func_0x000180535060(lVar10 + 8);
    uVar8 = 1;
    if (sVar7 < 2) goto LAB_18050c68f;
  }
  param_3 = param_3 | uVar8;
LAB_18050c696:
  lVar10 = render_system_data_config;
  iStack_860 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    iStack_860 = iVar1;
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar1);
    }
    uStack_878 = 1;
    puStack_898 = &uStack_870;
    uStack_890 = param_3;
    (**(code **)(lVar10 + 0x270))
              (*(int32_t *)(*(int64_t *)(param_1 + 0x8d8) + 0x98d928),iVar1,param_2,&uStack_888)
    ;
    uStack_878 = 0;
    if ((iVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar1);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_8b8);
}





