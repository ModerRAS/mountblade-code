/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
// 99_part_09_part057.c - 6 个函数
// 函数: void function_5d9b2b(uint64_t param_1,char param_2)
void function_5d9b2b(uint64_t param_1,char param_2)
{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *unaff_RBX;
  int32_t unaff_ESI;
  int32_t *unaff_R14;
  bVar1 = 1 < (int)unaff_R14[0x44e];
  cVar2 = *(char *)(unaff_R14 + 0x451);
  if ((bool)*(char *)(unaff_R14 + 0x451) != bVar1) {
    *(bool *)(unaff_R14 + 0x451) = bVar1;
    unaff_R14[0x45e] = unaff_ESI;
    *(int8_t *)((int64_t)unaff_R14 + 0x1145) = 0;
    cVar2 = bVar1;
  }
  *unaff_R14 = unaff_ESI;
  if (param_2 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      iVar3 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar3 = unaff_R14[0x44e];
    }
    if (iVar3 < 2) {
      *(int8_t *)((int64_t)unaff_R14 + 0x1145) = 1;
    }
    function_5da2b0();
    function_5d9c90();
    cVar2 = *(char *)(unaff_R14 + 0x451);
  }
  if (cVar2 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      unaff_RBX = *(uint64_t **)(unaff_R14 + 0x446);
    }
    uVar4 = unaff_RBX[(int64_t)(int)unaff_R14[0x450] * 4];
    goto LAB_1805d9c6a;
  }
  if (*(char *)((int64_t)unaff_R14 + 0x1147) == '\0') {
LAB_1805d9c26:
    if (*(char *)((int64_t)unaff_R14 + 0x1145) == '\0') {
      return;
    }
    cVar2 = *(char *)(unaff_R14 + 0x44f);
    if (cVar2 == '\0') {
      iVar3 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar3 = unaff_R14[0x44e];
    }
    if (iVar3 != 1) {
      return;
    }
  }
  else {
    cVar2 = *(char *)(unaff_R14 + 0x44f);
    if (cVar2 == '\0') {
      iVar3 = (int)(*(int64_t *)(unaff_R14 + 0x448) - *(int64_t *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar3 = unaff_R14[0x44e];
    }
    if (iVar3 != 1) goto LAB_1805d9c26;
  }
  if (cVar2 == '\0') {
    unaff_RBX = *(uint64_t **)(unaff_R14 + 0x446);
  }
  uVar4 = *unaff_RBX;
LAB_1805d9c6a:
  *(uint64_t *)(unaff_R14 + 0xf) = uVar4;
  unaff_R14[10] = unaff_R14[10] & 0xfffffd0f;
  return;
}
// 函数: void function_5d9b80(void)
void function_5d9b80(void)
{
  int iVar1;
  uint64_t uVar2;
  char cVar3;
  uint64_t *unaff_RBX;
  int64_t unaff_R14;
  if (*(char *)(unaff_R14 + 0x113c) == '\0') {
    iVar1 = (int)(*(int64_t *)(unaff_R14 + 0x1120) - *(int64_t *)(unaff_R14 + 0x1118) >> 5);
  }
  else {
    iVar1 = *(int *)(unaff_R14 + 0x1138);
  }
  if (iVar1 < 2) {
    *(int8_t *)(unaff_R14 + 0x1145) = 1;
  }
  function_5da2b0();
  function_5d9c90();
  if (*(char *)(unaff_R14 + 0x1144) != '\0') {
    if (*(char *)(unaff_R14 + 0x113c) == '\0') {
      unaff_RBX = *(uint64_t **)(unaff_R14 + 0x1118);
    }
    uVar2 = unaff_RBX[(int64_t)*(int *)(unaff_R14 + 0x1140) * 4];
    goto LAB_1805d9c6a;
  }
  if (*(char *)(unaff_R14 + 0x1147) == '\0') {
LAB_1805d9c26:
    if (*(char *)(unaff_R14 + 0x1145) == '\0') {
      return;
    }
    cVar3 = *(char *)(unaff_R14 + 0x113c);
    if (cVar3 == '\0') {
      iVar1 = (int)(*(int64_t *)(unaff_R14 + 0x1120) - *(int64_t *)(unaff_R14 + 0x1118) >> 5);
    }
    else {
      iVar1 = *(int *)(unaff_R14 + 0x1138);
    }
    if (iVar1 != 1) {
      return;
    }
  }
  else {
    cVar3 = *(char *)(unaff_R14 + 0x113c);
    if (cVar3 == '\0') {
      iVar1 = (int)(*(int64_t *)(unaff_R14 + 0x1120) - *(int64_t *)(unaff_R14 + 0x1118) >> 5);
    }
    else {
      iVar1 = *(int *)(unaff_R14 + 0x1138);
    }
    if (iVar1 != 1) goto LAB_1805d9c26;
  }
  if (cVar3 == '\0') {
    unaff_RBX = *(uint64_t **)(unaff_R14 + 0x1118);
  }
  uVar2 = *unaff_RBX;
LAB_1805d9c6a:
  *(uint64_t *)(unaff_R14 + 0x3c) = uVar2;
  *(uint *)(unaff_R14 + 0x28) = *(uint *)(unaff_R14 + 0x28) & 0xfffffd0f;
  return;
}
// 函数: void function_5d9c90(void)
void function_5d9c90(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_5da2b0(void)
void function_5da2b0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_5da5f0(void)
void function_5da5f0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
int8_t function_5dbe60(int64_t param_1)
{
  uint *puVar1;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  puVar1 = (uint *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
    return *(int8_t *)(param_1 + 0xd1);
  }
  Function_4b4c6390(puVar1);
  if (extraout_XMM0_Da < *(float *)(param_1 + 0x94) ||
      extraout_XMM0_Da == *(float *)(param_1 + 0x94)) {
    function_507b40();
    if (extraout_XMM0_Da_00 < 1.5) goto LAB_1805dbea9;
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    *(int8_t *)(param_1 + 0xd1) = 0;
    *puVar1 = *puVar1 | 0x200;
    return 0;
  }
LAB_1805dbea9:
  *(int8_t *)(param_1 + 0xd1) = 1;
  *puVar1 = *puVar1 | 0x200;
  return 1;
}
// 函数: void function_5dbed0(int64_t param_1)
void function_5dbed0(int64_t param_1)
{
// WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(*(int64_t *)(**(int64_t **)(param_1 + 0x20) + 0x20) + 0x34));
}