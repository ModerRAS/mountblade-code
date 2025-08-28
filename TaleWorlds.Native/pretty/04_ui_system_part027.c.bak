#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part027.c - 5 个函数

// 函数: void FUN_18066f3e0(longlong param_1,longlong param_2)
void FUN_18066f3e0(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  uint64_t *puVar11;
  longlong lStackX_20;
  uint64_t in_stack_ffffffffffffff88;
  longlong lVar12;
  uint64_t uVar13;
  int32_t uVar14;
  
  uVar14 = (int32_t)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  if (*(char *)(*(longlong *)(param_2 + 0xf00) + 9) == '\0') {
    if (0x3fffffbe < *(int *)(*(longlong *)(param_2 + 0xfb8) + 0x18) - 0x41U) {
      iVar3 = FUN_18069cf80(param_1);
      *(bool *)(*(longlong *)(param_2 + 0xf00) + 9) = iVar3 == 0;
    }
  }
  else {
    func_0x00018069d1c0(param_2);
  }
  cVar1 = **(char **)(param_2 + 0xf00);
  if (*(char *)(param_2 + 0xf60) != '\0') {
    func_0x00018069ba40(param_1,param_2);
  }
  if (*(char *)(*(longlong *)(param_2 + 0xf00) + 2) == '\0') {
    FUN_18069c080(param_2,*(uint64_t *)(param_2 + 0xf20),*(uint64_t *)(param_2 + 0xf28),
                  *(uint64_t *)(param_2 + 0xf38),*(uint64_t *)(param_2 + 0xf40),
                  *(int32_t *)(param_2 + 0xf4c),*(uint64_t *)(param_2 + 0xeb0),
                  *(uint64_t *)(param_2 + 0xeb8),*(int32_t *)(param_2 + 0xe94));
    if (cVar1 == '\x04') {
      iVar3 = *(int *)(param_2 + 0xe80);
      if (*(char *)(*(longlong *)(param_2 + 0xf00) + 9) != '\0') {
        *(uint64_t *)(param_2 + 0x7c0) = 0;
        *(uint64_t *)(param_2 + 0x7c8) = 0;
        *(uint64_t *)(param_2 + 2000) = 0;
        *(int8_t *)(param_2 + 0x7d8) = 0;
      }
      lVar5 = *(longlong *)(param_2 + 0xf18);
      pcVar9 = (char *)(param_2 + 0x7c0);
      lVar4 = (longlong)*(int *)(param_2 + 0xe80);
      puVar11 = (uint64_t *)(param_2 + 0x860);
      uVar6 = 0;
      lVar8 = *(longlong *)(param_2 + 0xea8) - lVar4;
      lVar10 = 0xc;
      *(int32_t *)(lVar8 + 0x10 + lVar4 * 4) = *(int32_t *)(lVar5 + 0x10);
      *(int32_t *)(lVar8 + 0x10 + lVar4 * 8) = *(int32_t *)(lVar5 + 0x10);
      lStackX_20 = 0;
      *(int32_t *)(lVar8 + 0x10 + lVar4 * 0xc) = *(int32_t *)(lVar5 + 0x10);
      do {
        lVar5 = *(longlong *)(param_2 + 0xea8) + (longlong)*(int *)(puVar11 + 4);
        if (((int)uVar6 < 4) && (*(int *)(param_1 + 0x2be0) != 0)) {
          lVar4 = *(longlong *)(param_2 + 0xf18) + (longlong)*(int *)(puVar11 + 4);
        }
        else {
          lVar4 = lVar5 - iVar3;
        }
        if (((uVar6 & 3) == 0) && (*(int *)(param_1 + 0x2be0) != 0)) {
          lVar8 = lStackX_20 + *(longlong *)(param_2 + 0xf30);
          iVar7 = 1;
        }
        else {
          lVar8 = lVar5 + -1;
          iVar7 = iVar3;
        }
        if ((((uVar6 - 4 & 0xfffffff3) == 0) && (uVar6 != 0x10)) &&
           (*(int *)(param_1 + 0x2be0) != 0)) {
          cVar2 = pcVar9[(*(longlong *)(param_2 + 0xf30) - param_2) + -0x7c1];
        }
        else {
          cVar2 = *(char *)(lVar4 + -1);
        }
        lVar12 = lVar5;
        FUN_18069d280(lVar4,lVar8,iVar7,*(int32_t *)(*(longlong *)(param_2 + 0xf00) + lVar10),
                      lVar5,iVar3,cVar2);
        uVar14 = (int32_t)((ulonglong)lVar12 >> 0x20);
        if (*pcVar9 != '\0') {
          if (*pcVar9 < '\x02') {
            uVar13 = CONCAT44(uVar14,iVar3);
            func_0x00018001a59e((int)*(short *)*puVar11 * (int)*(short *)(param_2 + 0x7e0),lVar5,
                                iVar3,lVar5,uVar13);
            uVar14 = (int32_t)((ulonglong)uVar13 >> 0x20);
            *(int32_t *)*puVar11 = 0;
          }
          else {
            func_0x00018001a682(*puVar11,param_2 + 0x7e0,lVar5,iVar3);
          }
        }
        uVar6 = uVar6 + 1;
        lStackX_20 = lStackX_20 + 1;
        lVar10 = lVar10 + 4;
        puVar11 = puVar11 + 7;
        pcVar9 = pcVar9 + 1;
      } while ((int)uVar6 < 0x10);
    }
    else {
      uVar13 = *(uint64_t *)(param_2 + 0xea8);
      FUN_18069c200(param_2,*(uint64_t *)(param_2 + 0xf18),*(uint64_t *)(param_2 + 0xf30),
                    *(int32_t *)(param_2 + 0xf48),uVar13,*(int32_t *)(param_2 + 0xe80));
      uVar14 = (int32_t)((ulonglong)uVar13 >> 0x20);
    }
  }
  else {
    FUN_18069de90(param_2);
  }
  if (*(char *)(*(longlong *)(param_2 + 0xf00) + 9) == '\0') {
    if (cVar1 != '\x04') {
      lVar5 = param_2 + 0x7e0;
      if (cVar1 != '\t') {
        puVar11 = (uint64_t *)(param_2 + 0xda0);
        if (*(char *)(param_2 + 0x7d8) < '\x02') {
          **(short **)(param_2 + 0xda8) = *(short *)(param_2 + 0x820) * *(short *)*puVar11;
          func_0x00018069cbb0(*(uint64_t *)(param_2 + 0xda8),param_2 + 0x180);
          *(int32_t *)*puVar11 = 0;
        }
        else {
          func_0x00018069c8f0(puVar11,param_2 + 0x820);
          func_0x00018001c560(*(uint64_t *)(param_2 + 0xda8),param_2 + 0x180);
          puVar11 = (uint64_t *)*puVar11;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
        }
        lVar5 = param_2 + 0x800;
      }
      lVar4 = param_2 + 0x7c0;
      FUN_18069c820(param_2 + 0x180,lVar5,*(uint64_t *)(param_2 + 0xea8),
                    *(int32_t *)(param_2 + 0xe80),lVar4);
      uVar14 = (int32_t)((ulonglong)lVar4 >> 0x20);
    }
    FUN_18069c710(param_2 + 0x380,param_2 + 0x840,*(uint64_t *)(param_2 + 0xeb0),
                  *(uint64_t *)(param_2 + 0xeb8),CONCAT44(uVar14,*(int32_t *)(param_2 + 0xe94))
                  ,param_2 + 2000);
  }
  return;
}





// 函数: void FUN_18066f3f4(longlong param_1,longlong param_2)
void FUN_18066f3f4(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong unaff_RBX;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  longlong lVar9;
  uint64_t *puVar10;
  uint64_t in_stack_00000020;
  longlong lVar11;
  uint64_t uVar12;
  int32_t uVar13;
  longlong lStack00000000000000b8;
  
  uVar13 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  if (*(char *)(in_RAX + 9) == '\0') {
    if (0x3fffffbe < *(int *)(*(longlong *)(param_2 + 0xfb8) + 0x18) - 0x41U) {
      iVar2 = FUN_18069cf80(param_1);
      *(bool *)(*(longlong *)(unaff_RBX + 0xf00) + 9) = iVar2 == 0;
    }
  }
  else {
    func_0x00018069d1c0(param_2);
  }
  cVar1 = **(char **)(unaff_RBX + 0xf00);
  if (*(char *)(unaff_RBX + 0xf60) != '\0') {
    func_0x00018069ba40(param_1);
  }
  if (*(char *)(*(longlong *)(unaff_RBX + 0xf00) + 2) == '\0') {
    FUN_18069c080();
    if (cVar1 == '\x04') {
      iVar2 = *(int *)(unaff_RBX + 0xe80);
      if (*(char *)(*(longlong *)(unaff_RBX + 0xf00) + 9) != '\0') {
        *(uint64_t *)(unaff_RBX + 0x7c0) = 0;
        *(uint64_t *)(unaff_RBX + 0x7c8) = 0;
        *(uint64_t *)(unaff_RBX + 2000) = 0;
        *(int8_t *)(unaff_RBX + 0x7d8) = 0;
      }
      lVar4 = *(longlong *)(unaff_RBX + 0xf18);
      pcVar8 = (char *)(unaff_RBX + 0x7c0);
      lVar3 = (longlong)*(int *)(unaff_RBX + 0xe80);
      puVar10 = (uint64_t *)(unaff_RBX + 0x860);
      uVar5 = 0;
      lVar7 = *(longlong *)(unaff_RBX + 0xea8) - lVar3;
      lVar9 = 0xc;
      *(int32_t *)(lVar7 + 0x10 + lVar3 * 4) = *(int32_t *)(lVar4 + 0x10);
      *(int32_t *)(lVar7 + 0x10 + lVar3 * 8) = *(int32_t *)(lVar4 + 0x10);
      lStack00000000000000b8 = 0;
      *(int32_t *)(lVar7 + 0x10 + lVar3 * 0xc) = *(int32_t *)(lVar4 + 0x10);
      do {
        lVar4 = *(longlong *)(unaff_RBX + 0xea8) + (longlong)*(int *)(puVar10 + 4);
        if (((int)uVar5 < 4) && (*(int *)(param_1 + 0x2be0) != 0)) {
          lVar3 = *(longlong *)(unaff_RBX + 0xf18) + (longlong)*(int *)(puVar10 + 4);
        }
        else {
          lVar3 = lVar4 - iVar2;
        }
        if (((uVar5 & 3) == 0) && (*(int *)(param_1 + 0x2be0) != 0)) {
          lVar7 = lStack00000000000000b8 + *(longlong *)(unaff_RBX + 0xf30);
          iVar6 = 1;
        }
        else {
          lVar7 = lVar4 + -1;
          iVar6 = iVar2;
        }
        lVar11 = lVar4;
        FUN_18069d280(lVar3,lVar7,iVar6,*(int32_t *)(*(longlong *)(unaff_RBX + 0xf00) + lVar9),
                      lVar4);
        uVar13 = (int32_t)((ulonglong)lVar11 >> 0x20);
        if (*pcVar8 != '\0') {
          if (*pcVar8 < '\x02') {
            uVar12 = CONCAT44(uVar13,iVar2);
            func_0x00018001a59e((int)*(short *)*puVar10 * (int)*(short *)(unaff_RBX + 0x7e0),lVar4,
                                iVar2,lVar4,uVar12);
            uVar13 = (int32_t)((ulonglong)uVar12 >> 0x20);
            *(int32_t *)*puVar10 = 0;
          }
          else {
            func_0x00018001a682(*puVar10,unaff_RBX + 0x7e0,lVar4,iVar2);
          }
        }
        uVar5 = uVar5 + 1;
        lStack00000000000000b8 = lStack00000000000000b8 + 1;
        lVar9 = lVar9 + 4;
        puVar10 = puVar10 + 7;
        pcVar8 = pcVar8 + 1;
      } while ((int)uVar5 < 0x10);
    }
    else {
      uVar13 = (int32_t)((ulonglong)*(uint64_t *)(unaff_RBX + 0xea8) >> 0x20);
      FUN_18069c200();
    }
  }
  else {
    FUN_18069de90();
  }
  if (*(char *)(*(longlong *)(unaff_RBX + 0xf00) + 9) == '\0') {
    if (cVar1 != '\x04') {
      lVar4 = unaff_RBX + 0x7e0;
      if (cVar1 != '\t') {
        puVar10 = (uint64_t *)(unaff_RBX + 0xda0);
        if (*(char *)(unaff_RBX + 0x7d8) < '\x02') {
          **(short **)(unaff_RBX + 0xda8) = *(short *)(unaff_RBX + 0x820) * *(short *)*puVar10;
          func_0x00018069cbb0(*(uint64_t *)(unaff_RBX + 0xda8),unaff_RBX + 0x180);
          *(int32_t *)*puVar10 = 0;
        }
        else {
          func_0x00018069c8f0(puVar10,unaff_RBX + 0x820);
          func_0x00018001c560(*(uint64_t *)(unaff_RBX + 0xda8),unaff_RBX + 0x180);
          puVar10 = (uint64_t *)*puVar10;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
        }
        lVar4 = unaff_RBX + 0x800;
      }
      lVar3 = unaff_RBX + 0x7c0;
      FUN_18069c820(unaff_RBX + 0x180,lVar4,*(uint64_t *)(unaff_RBX + 0xea8),
                    *(int32_t *)(unaff_RBX + 0xe80),lVar3);
      uVar13 = (int32_t)((ulonglong)lVar3 >> 0x20);
    }
    FUN_18069c710(unaff_RBX + 0x380,unaff_RBX + 0x840,*(uint64_t *)(unaff_RBX + 0xeb0),
                  *(uint64_t *)(unaff_RBX + 0xeb8),
                  CONCAT44(uVar13,*(int32_t *)(unaff_RBX + 0xe94)));
  }
  return;
}





// 函数: void FUN_18066f507(void)
void FUN_18066f507(void)

{
  int iVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong unaff_RBX;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  uint64_t *puVar9;
  longlong unaff_R15;
  longlong lVar10;
  uint64_t uVar11;
  int32_t uVar12;
  char cStack0000000000000030;
  longlong lStack0000000000000050;
  int in_stack_000000a8;
  longlong lStack00000000000000b8;
  
  iVar1 = *(int *)(unaff_RBX + 0xe80);
  if (*(char *)(in_RAX + 9) != '\0') {
    *(uint64_t *)(unaff_RBX + 0x7c0) = 0;
    *(uint64_t *)(unaff_RBX + 0x7c8) = 0;
    *(uint64_t *)(unaff_RBX + 2000) = 0;
    *(int8_t *)(unaff_RBX + 0x7d8) = 0;
  }
  lVar3 = *(longlong *)(unaff_RBX + 0xf18);
  pcVar7 = (char *)(unaff_RBX + 0x7c0);
  lVar2 = (longlong)*(int *)(unaff_RBX + 0xe80);
  puVar9 = (uint64_t *)(unaff_RBX + 0x860);
  uVar4 = 0;
  lVar6 = *(longlong *)(unaff_RBX + 0xea8) - lVar2;
  lStack0000000000000050 = -0x7c0 - unaff_RBX;
  lVar8 = 0xc;
  *(int32_t *)(lVar6 + 0x10 + lVar2 * 4) = *(int32_t *)(lVar3 + 0x10);
  *(int32_t *)(lVar6 + 0x10 + lVar2 * 8) = *(int32_t *)(lVar3 + 0x10);
  lStack00000000000000b8 = 0;
  *(int32_t *)(lVar6 + 0x10 + lVar2 * 0xc) = *(int32_t *)(lVar3 + 0x10);
  do {
    lVar3 = *(longlong *)(unaff_RBX + 0xea8) + (longlong)*(int *)(puVar9 + 4);
    if (((int)uVar4 < 4) && (*(int *)(unaff_R15 + 0x2be0) != 0)) {
      lVar2 = *(longlong *)(unaff_RBX + 0xf18) + (longlong)*(int *)(puVar9 + 4);
    }
    else {
      lVar2 = lVar3 - iVar1;
    }
    if (((uVar4 & 3) == 0) && (*(int *)(unaff_R15 + 0x2be0) != 0)) {
      lVar6 = lStack00000000000000b8 + *(longlong *)(unaff_RBX + 0xf30);
      iVar5 = 1;
    }
    else {
      lVar6 = lVar3 + -1;
      iVar5 = iVar1;
    }
    if ((((uVar4 - 4 & 0xfffffff3) == 0) && (uVar4 != 0x10)) && (*(int *)(unaff_R15 + 0x2be0) != 0))
    {
      cStack0000000000000030 =
           pcVar7[lStack0000000000000050 + *(longlong *)(unaff_RBX + 0xf30) + -1];
    }
    else {
      cStack0000000000000030 = *(char *)(lVar2 + -1);
    }
    lVar10 = lVar3;
    FUN_18069d280(lVar2,lVar6,iVar5,*(int32_t *)(*(longlong *)(unaff_RBX + 0xf00) + lVar8),lVar3)
    ;
    uVar12 = (int32_t)((ulonglong)lVar10 >> 0x20);
    if (*pcVar7 != '\0') {
      if (*pcVar7 < '\x02') {
        uVar11 = CONCAT44(uVar12,iVar1);
        func_0x00018001a59e((int)*(short *)*puVar9 * (int)*(short *)(unaff_RBX + 0x7e0),lVar3,iVar1,
                            lVar3,uVar11);
        uVar12 = (int32_t)((ulonglong)uVar11 >> 0x20);
        *(int32_t *)*puVar9 = 0;
      }
      else {
        func_0x00018001a682(*puVar9,unaff_RBX + 0x7e0,lVar3,iVar1);
      }
    }
    uVar4 = uVar4 + 1;
    lStack00000000000000b8 = lStack00000000000000b8 + 1;
    lVar8 = lVar8 + 4;
    puVar9 = puVar9 + 7;
    pcVar7 = pcVar7 + 1;
  } while ((int)uVar4 < 0x10);
  if (*(char *)(*(longlong *)(unaff_RBX + 0xf00) + 9) == '\0') {
    if (in_stack_000000a8 != 4) {
      lVar3 = unaff_RBX + 0x7e0;
      if (in_stack_000000a8 != 9) {
        puVar9 = (uint64_t *)(unaff_RBX + 0xda0);
        if (*(char *)(unaff_RBX + 0x7d8) < '\x02') {
          **(short **)(unaff_RBX + 0xda8) = *(short *)(unaff_RBX + 0x820) * *(short *)*puVar9;
          func_0x00018069cbb0(*(uint64_t *)(unaff_RBX + 0xda8),unaff_RBX + 0x180);
          *(int32_t *)*puVar9 = 0;
        }
        else {
          func_0x00018069c8f0(puVar9,unaff_RBX + 0x820);
          func_0x00018001c560(*(uint64_t *)(unaff_RBX + 0xda8),unaff_RBX + 0x180);
          puVar9 = (uint64_t *)*puVar9;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
        }
        lVar3 = unaff_RBX + 0x800;
      }
      lVar2 = unaff_RBX + 0x7c0;
      FUN_18069c820(unaff_RBX + 0x180,lVar3,*(uint64_t *)(unaff_RBX + 0xea8),
                    *(int32_t *)(unaff_RBX + 0xe80),lVar2);
      uVar12 = (int32_t)((ulonglong)lVar2 >> 0x20);
    }
    FUN_18069c710(unaff_RBX + 0x380,unaff_RBX + 0x840,*(uint64_t *)(unaff_RBX + 0xeb0),
                  *(uint64_t *)(unaff_RBX + 0xeb8),
                  CONCAT44(uVar12,*(int32_t *)(unaff_RBX + 0xe94)));
  }
  return;
}





// 函数: void FUN_18066f6fa(void)
void FUN_18066f6fa(void)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong unaff_RBX;
  int unaff_EDI;
  uint64_t in_stack_00000020;
  longlong lVar3;
  int32_t uVar4;
  
  uVar4 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  FUN_18069de90();
  if (*(char *)(*(longlong *)(unaff_RBX + 0xf00) + 9) == '\0') {
    if (unaff_EDI != 4) {
      lVar2 = unaff_RBX + 0x7e0;
      if (unaff_EDI != 9) {
        puVar1 = (uint64_t *)(unaff_RBX + 0xda0);
        if (*(char *)(unaff_RBX + 0x7d8) < '\x02') {
          **(short **)(unaff_RBX + 0xda8) = *(short *)(unaff_RBX + 0x820) * *(short *)*puVar1;
          func_0x00018069cbb0(*(uint64_t *)(unaff_RBX + 0xda8),unaff_RBX + 0x180);
          *(int32_t *)*puVar1 = 0;
        }
        else {
          func_0x00018069c8f0(puVar1,unaff_RBX + 0x820);
          func_0x00018001c560(*(uint64_t *)(unaff_RBX + 0xda8),unaff_RBX + 0x180);
          puVar1 = (uint64_t *)*puVar1;
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
        }
        lVar2 = unaff_RBX + 0x800;
      }
      lVar3 = unaff_RBX + 0x7c0;
      FUN_18069c820(unaff_RBX + 0x180,lVar2,*(uint64_t *)(unaff_RBX + 0xea8),
                    *(int32_t *)(unaff_RBX + 0xe80),lVar3);
      uVar4 = (int32_t)((ulonglong)lVar3 >> 0x20);
    }
    FUN_18069c710(unaff_RBX + 0x380,unaff_RBX + 0x840,*(uint64_t *)(unaff_RBX + 0xeb0),
                  *(uint64_t *)(unaff_RBX + 0xeb8),
                  CONCAT44(uVar4,*(int32_t *)(unaff_RBX + 0xe94)));
  }
  return;
}





// 函数: void FUN_18066f715(void)
void FUN_18066f715(void)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong unaff_RBX;
  int unaff_EDI;
  
  if (unaff_EDI != 4) {
    lVar2 = unaff_RBX + 0x7e0;
    if (unaff_EDI != 9) {
      puVar1 = (uint64_t *)(unaff_RBX + 0xda0);
      if (*(char *)(unaff_RBX + 0x7d8) < '\x02') {
        **(short **)(unaff_RBX + 0xda8) = *(short *)(unaff_RBX + 0x820) * *(short *)*puVar1;
        func_0x00018069cbb0(*(uint64_t *)(unaff_RBX + 0xda8),unaff_RBX + 0x180);
        *(int32_t *)*puVar1 = 0;
      }
      else {
        func_0x00018069c8f0(puVar1,unaff_RBX + 0x820);
        func_0x00018001c560(*(uint64_t *)(unaff_RBX + 0xda8),unaff_RBX + 0x180);
        puVar1 = (uint64_t *)*puVar1;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      lVar2 = unaff_RBX + 0x800;
    }
    FUN_18069c820(unaff_RBX + 0x180,lVar2,*(uint64_t *)(unaff_RBX + 0xea8),
                  *(int32_t *)(unaff_RBX + 0xe80),unaff_RBX + 0x7c0);
  }
  FUN_18069c710(unaff_RBX + 0x380,unaff_RBX + 0x840,*(uint64_t *)(unaff_RBX + 0xeb0),
                *(uint64_t *)(unaff_RBX + 0xeb8),*(int32_t *)(unaff_RBX + 0xe94));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



