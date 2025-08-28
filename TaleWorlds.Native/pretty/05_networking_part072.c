#include "TaleWorlds.Native.Split.h"
// 05_networking_part072.c - 10 个函数
// 函数: void function_87ad70(void)
void function_87ad70(void)
{
// WARNING: Subroutine does not return
  SystemConfigManager();
}
uint64_t function_87ad8b(void)
{
  int64_t in_RAX;
  char unaff_BPL;
  if (unaff_BPL != '\0') {
// WARNING: Subroutine does not return
    SystemConfigManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}
int64_t function_87adc0(int64_t param_1,uint *param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x740);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if (((*(int *)(lVar5 + 0x73c) != 0) && (*(int *)(lVar5 + 0x720) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x718) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x720) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x728));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087ae76;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087ae76:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
int64_t function_87ade3(uint64_t param_1,uint64_t param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  lVar1 = *(int64_t *)(unaff_RDI + 0x740);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x73c) != 0) && (*(int *)(unaff_RDI + 0x720) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x718) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x720) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x728));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087ae76;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087ae76:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
// 函数: void function_87ae80(void)
void function_87ae80(void)
{
// WARNING: Subroutine does not return
  SystemConfigManager();
}
uint64_t function_87ae9b(void)
{
  int64_t in_RAX;
  char unaff_BPL;
  if (unaff_BPL != '\0') {
// WARNING: Subroutine does not return
    SystemConfigManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}
int64_t function_87aed0(int64_t param_1,uint *param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x860);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if (((*(int *)(lVar5 + 0x85c) != 0) && (*(int *)(lVar5 + 0x840) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x838) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x840) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x848));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087af86;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087af86:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
int64_t function_87aef3(uint64_t param_1,uint64_t param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  lVar1 = *(int64_t *)(unaff_RDI + 0x860);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x85c) != 0) && (*(int *)(unaff_RDI + 0x840) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x838) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x840) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x848));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087af86;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087af86:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
// 函数: void function_87af90(void)
void function_87af90(void)
{
// WARNING: Subroutine does not return
  SystemConfigManager();
}
uint64_t function_87afab(void)
{
  int64_t in_RAX;
  char unaff_BPL;
  if (unaff_BPL != '\0') {
// WARNING: Subroutine does not return
    SystemConfigManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}
int64_t function_87afe0(int64_t param_1,uint *param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x590);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if (((*(int *)(lVar5 + 0x58c) != 0) && (*(int *)(lVar5 + 0x570) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x568) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x570) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x578));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b096;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b096:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
int64_t function_87b003(uint64_t param_1,uint64_t param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  lVar1 = *(int64_t *)(unaff_RDI + 0x590);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x58c) != 0) && (*(int *)(unaff_RDI + 0x570) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x568) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x570) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x578));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b096;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b096:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
// 函数: void function_87b0a0(void)
void function_87b0a0(void)
{
// WARNING: Subroutine does not return
  SystemConfigManager();
}
uint64_t function_87b0bb(void)
{
  int64_t in_RAX;
  char unaff_BPL;
  if (unaff_BPL != '\0') {
// WARNING: Subroutine does not return
    SystemConfigManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}
int64_t function_87b110(int64_t param_1,uint *param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x680);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if (((*(int *)(lVar5 + 0x67c) != 0) && (*(int *)(lVar5 + 0x660) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x658) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x660) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x668));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b1c6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b1c6:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
int64_t function_87b133(uint64_t param_1,uint64_t param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  lVar1 = *(int64_t *)(unaff_RDI + 0x680);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x67c) != 0) && (*(int *)(unaff_RDI + 0x660) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x658) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x660) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x668));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b1c6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b1c6:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
// 函数: void function_87b1d0(void)
void function_87b1d0(void)
{
// WARNING: Subroutine does not return
  SystemConfigManager();
}
uint64_t function_87b1eb(void)
{
  int64_t in_RAX;
  char unaff_BPL;
  if (unaff_BPL != '\0') {
// WARNING: Subroutine does not return
    SystemConfigManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}
int64_t function_87b200(int64_t param_1,uint *param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x7a0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if (((*(int *)(lVar5 + 0x79c) != 0) && (*(int *)(lVar5 + 0x780) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x778) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x780) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x788));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b2b6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b2b6:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
int64_t function_87b223(uint64_t param_1,uint64_t param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  lVar1 = *(int64_t *)(unaff_RDI + 0x7a0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x79c) != 0) && (*(int *)(unaff_RDI + 0x780) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x778) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x780) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x788));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b2b6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b2b6:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
// 函数: void function_87b2c0(void)
void function_87b2c0(void)
{
// WARNING: Subroutine does not return
  SystemConfigManager();
}
uint64_t function_87b2db(void)
{
  int64_t in_RAX;
  char unaff_BPL;
  if (unaff_BPL != '\0') {
// WARNING: Subroutine does not return
    SystemConfigManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}
int64_t function_87b310(int64_t param_1,uint *param_2,char param_3)
{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int iVar10;
  int64_t lVar11;
  lVar11 = *(int64_t *)(param_1 + 8);
  if (lVar11 == 0) {
    return 0;
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar7 = *(int64_t *)param_2;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  lVar8 = *(int64_t *)(param_2 + 2);
  lVar1 = *(int64_t *)(lVar11 + 0x380);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    SystemStateManager(lVar1);
  }
  if ((*(int *)(lVar11 + 0x37c) != 0) && (*(int *)(lVar11 + 0x360) != 0)) {
    iVar10 = *(int *)(*(int64_t *)(lVar11 + 0x358) +
                     (int64_t)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x360) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (int64_t *)((int64_t)iVar10 * 0x20 + *(int64_t *)(lVar11 + 0x368));
        if ((*plVar9 == lVar7) && (plVar9[1] == lVar8)) {
          lVar11 = plVar9[3];
          goto LAB_18087b3cf;
        }
        iVar10 = (int)plVar9[2];
      } while (iVar10 != -1);
    }
  }
  lVar11 = 0;
LAB_18087b3cf:
  if (bVar6) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar11;
}
int64_t function_87b32a(int64_t param_1,uint64_t param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t unaff_RBX;
  int64_t lVar5;
  int64_t in_XMM0_Qb;
  uint stack_special_x_24;
  int64_t lStack0000000000000028;
  lVar1 = *(int64_t *)(unaff_RBX + 0x380);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x37c) != 0) && (*(int *)(unaff_RBX + 0x360) != 0)) {
    stack_special_x_24 = (uint)((uint64_t)param_1 >> 0x20);
    iVar4 = *(int *)(*(int64_t *)(unaff_RBX + 0x358) +
                    (int64_t)
                    (int)((stack_special_x_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x360) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RBX + 0x368));
        if ((*plVar3 == param_1) && (plVar3[1] == lStack0000000000000028)) {
          lVar5 = plVar3[3];
          goto LAB_18087b3cf;
        }
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_18087b3cf:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
// 函数: void function_87b3d9(void)
void function_87b3d9(void)
{
// WARNING: Subroutine does not return
  SystemConfigManager();
}
uint64_t function_87b3ef(void)
{
  int64_t in_RAX;
  char unaff_SIL;
  if (unaff_SIL != '\0') {
// WARNING: Subroutine does not return
    SystemConfigManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}
int64_t function_87b420(int64_t param_1,uint *param_2,char param_3)
{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int iVar10;
  int64_t lVar11;
  lVar11 = *(int64_t *)(param_1 + 8);
  if (lVar11 == 0) {
    return 0;
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar7 = *(int64_t *)param_2;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  lVar8 = *(int64_t *)(param_2 + 2);
  lVar1 = *(int64_t *)(lVar11 + 0x350);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    SystemStateManager(lVar1);
  }
  if ((*(int *)(lVar11 + 0x34c) != 0) && (*(int *)(lVar11 + 0x330) != 0)) {
    iVar10 = *(int *)(*(int64_t *)(lVar11 + 0x328) +
                     (int64_t)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x330) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (int64_t *)((int64_t)iVar10 * 0x20 + *(int64_t *)(lVar11 + 0x338));
        if ((*plVar9 == lVar7) && (plVar9[1] == lVar8)) {
          lVar11 = plVar9[3];
          goto LAB_18087b4df;
        }
        iVar10 = (int)plVar9[2];
      } while (iVar10 != -1);
    }
  }
  lVar11 = 0;
LAB_18087b4df:
  if (bVar6) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar11;
}
int64_t function_87b43a(int64_t param_1,uint64_t param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t unaff_RBX;
  int64_t lVar5;
  int64_t in_XMM0_Qb;
  uint stack_special_x_24;
  int64_t lStack0000000000000028;
  lVar1 = *(int64_t *)(unaff_RBX + 0x350);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x34c) != 0) && (*(int *)(unaff_RBX + 0x330) != 0)) {
    stack_special_x_24 = (uint)((uint64_t)param_1 >> 0x20);
    iVar4 = *(int *)(*(int64_t *)(unaff_RBX + 0x328) +
                    (int64_t)
                    (int)((stack_special_x_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x330) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RBX + 0x338));
        if ((*plVar3 == param_1) && (plVar3[1] == lStack0000000000000028)) {
          lVar5 = plVar3[3];
          goto LAB_18087b4df;
        }
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_18087b4df:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
// 函数: void function_87b4e9(void)
void function_87b4e9(void)
{
// WARNING: Subroutine does not return
  SystemConfigManager();
}
uint64_t function_87b4ff(void)
{
  int64_t in_RAX;
  char unaff_SIL;
  if (unaff_SIL != '\0') {
// WARNING: Subroutine does not return
    SystemConfigManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}
int64_t function_87b530(int64_t param_1,uint *param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x6e0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if (((*(int *)(lVar5 + 0x6dc) != 0) && (*(int *)(lVar5 + 0x6c0) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x6b8) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x6c0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x6c8));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b5e6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b5e6:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
int64_t function_87b553(uint64_t param_1,uint64_t param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  lVar1 = *(int64_t *)(unaff_RDI + 0x6e0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x6dc) != 0) && (*(int *)(unaff_RDI + 0x6c0) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x6b8) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x6c0) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x6c8));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b5e6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b5e6:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
// 函数: void function_87b5f0(void)
void function_87b5f0(void)
{
// WARNING: Subroutine does not return
  SystemConfigManager();
}
uint64_t function_87b60b(void)
{
  int64_t in_RAX;
  char unaff_BPL;
  if (unaff_BPL != '\0') {
// WARNING: Subroutine does not return
    SystemConfigManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}
int64_t function_87b640(int64_t param_1,uint *param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  lVar5 = *(int64_t *)(param_1 + 8);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(int64_t *)(lVar5 + 0x890);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if (((*(int *)(lVar5 + 0x88c) != 0) && (*(int *)(lVar5 + 0x870) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(lVar5 + 0x868) +
                      (int64_t)
                      (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) &
                           *(int *)(lVar5 + 0x870) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(lVar5 + 0x878));
      if ((*plVar3 == *(int64_t *)param_2) && (plVar3[1] == *(int64_t *)(param_2 + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b6f6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b6f6:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
int64_t function_87b663(uint64_t param_1,uint64_t param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  uint *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RDI;
  lVar1 = *(int64_t *)(unaff_RDI + 0x890);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if (((*(int *)(unaff_RDI + 0x88c) != 0) && (*(int *)(unaff_RDI + 0x870) != 0)) &&
     (iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x868) +
                      (int64_t)
                      (int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) &
                           *(int *)(unaff_RDI + 0x870) - 1U) * 4), iVar4 != -1)) {
    do {
      plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RDI + 0x878));
      if ((*plVar3 == *(int64_t *)unaff_RBX) && (plVar3[1] == *(int64_t *)(unaff_RBX + 2))) {
        lVar5 = plVar3[3];
        goto LAB_18087b6f6;
      }
      iVar4 = (int)plVar3[2];
    } while (iVar4 != -1);
  }
  lVar5 = 0;
LAB_18087b6f6:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}
// 函数: void function_87b700(void)
void function_87b700(void)
{
// WARNING: Subroutine does not return
  SystemConfigManager();
}
uint64_t function_87b71b(void)
{
  int64_t in_RAX;
  char unaff_BPL;
  if (unaff_BPL != '\0') {
// WARNING: Subroutine does not return
    SystemConfigManager();
  }
  return *(uint64_t *)(in_RAX + 0x18);
}
int64_t function_87b750(int64_t param_1,uint *param_2,char param_3)
{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int iVar10;
  int64_t lVar11;
  lVar11 = *(int64_t *)(param_1 + 8);
  if (lVar11 == 0) {
    return 0;
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  lVar7 = *(int64_t *)param_2;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  lVar8 = *(int64_t *)(param_2 + 2);
  lVar1 = *(int64_t *)(lVar11 + 0x3e0);
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    SystemStateManager(lVar1);
  }
  if ((*(int *)(lVar11 + 0x3dc) != 0) && (*(int *)(lVar11 + 0x3c0) != 0)) {
    iVar10 = *(int *)(*(int64_t *)(lVar11 + 0x3b8) +
                     (int64_t)
                     (int)((uVar3 ^ uVar2 ^ uVar4 ^ uVar5) & *(int *)(lVar11 + 0x3c0) - 1U) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (int64_t *)((int64_t)iVar10 * 0x20 + *(int64_t *)(lVar11 + 0x3c8));
        if ((*plVar9 == lVar7) && (plVar9[1] == lVar8)) {
          lVar11 = plVar9[3];
          goto LAB_18087b80f;
        }
        iVar10 = (int)plVar9[2];
      } while (iVar10 != -1);
    }
  }
  lVar11 = 0;
LAB_18087b80f:
  if (bVar6) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar11;
}
int64_t function_87b76a(int64_t param_1,uint64_t param_2,char param_3)
{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t unaff_RBX;
  int64_t lVar5;
  int64_t in_XMM0_Qb;
  uint stack_special_x_24;
  int64_t lStack0000000000000028;
  lVar1 = *(int64_t *)(unaff_RBX + 0x3e0);
  lStack0000000000000028 = in_XMM0_Qb;
  if ((lVar1 == 0) || (param_3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    SystemStateManager(lVar1);
  }
  if ((*(int *)(unaff_RBX + 0x3dc) != 0) && (*(int *)(unaff_RBX + 0x3c0) != 0)) {
    stack_special_x_24 = (uint)((uint64_t)param_1 >> 0x20);
    iVar4 = *(int *)(*(int64_t *)(unaff_RBX + 0x3b8) +
                    (int64_t)
                    (int)((stack_special_x_24 ^ (uint)param_1 ^ (uint)lStack0000000000000028 ^
                          lStack0000000000000028._4_4_) & *(int *)(unaff_RBX + 0x3c0) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (int64_t *)((int64_t)iVar4 * 0x20 + *(int64_t *)(unaff_RBX + 0x3c8));
        if ((*plVar3 == param_1) && (plVar3[1] == lStack0000000000000028)) {
          lVar5 = plVar3[3];
          goto LAB_18087b80f;
        }
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_18087b80f:
  if (bVar2) {
// WARNING: Subroutine does not return
    SystemConfigManager(lVar1);
  }
  return lVar5;
}