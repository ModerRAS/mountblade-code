#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part129.c - 4 个函数

// 函数: void FUN_180742ff0(void)
void FUN_180742ff0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180743010(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)
           FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x18,&UNK_180957e90,0xd0,0,0,1);
  if (plVar1 == (longlong *)0x0) {
    return 0x26;
  }
  plVar1[1] = (longlong)plVar1;
  *plVar1 = (longlong)plVar1;
  plVar1[2] = 0;
  plVar2 = (longlong *)
           FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x2000,&UNK_180957e90,0xd6,0);
  if (plVar2 == (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),plVar1,&UNK_180957e90,0xd9,1);
  }
  lVar4 = 0x100;
  plVar3 = plVar2;
  do {
    plVar3[1] = (longlong)plVar3;
    *plVar3 = (longlong)plVar3;
    plVar3[3] = -1;
    plVar3[2] = 0;
    plVar3[1] = *(longlong *)(param_1 + 0x10818);
    *plVar3 = param_1 + 0x10810;
    *(longlong **)(param_1 + 0x10818) = plVar3;
    *(longlong **)plVar3[1] = plVar3;
    plVar3 = plVar3 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  plVar1[2] = (longlong)plVar2;
  plVar1[1] = *(longlong *)(param_1 + 0x10838);
  *plVar1 = param_1 + 0x10830;
  *(longlong **)(param_1 + 0x10838) = plVar1;
  *(longlong **)plVar1[1] = plVar1;
  return 0;
}



uint64_t FUN_180743160(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  uint in_stack_ffffffffffffffc8;
  uint3 uVar6;
  ulonglong in_stack_ffffffffffffffd0;
  int32_t uVar7;
  
  if (param_1 != 0) {
    func_0x000180743c20(param_1,1);
  }
  if ((*(char *)(param_1 + 0x10784) == '\0') && (iVar1 = *(int *)(param_1 + 0x10780), 0 < iVar1)) {
    *(int8_t *)(param_1 + 0x10784) = 1;
    if (param_2 != '\0') {
      func_0x000180743c20(param_1,3);
      iVar1 = *(int *)(param_1 + 0x10780);
    }
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        piVar4 = (int *)(param_1 + 0x780 + (longlong)iVar5);
        uVar6 = (uint3)(in_stack_ffffffffffffffc8 >> 8);
        uVar7 = (int32_t)(in_stack_ffffffffffffffd0 >> 0x20);
        switch((char)*piVar4) {
        case '\0':
          in_stack_ffffffffffffffd0 = *(ulonglong *)(piVar4 + 6);
          in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffff00;
          FUN_180759d80(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),0,piVar4[8],
                        in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0,0);
          break;
        case '\x01':
          in_stack_ffffffffffffffd0 = *(ulonglong *)(piVar4 + 6);
          in_stack_ffffffffffffffc8 = CONCAT31(uVar6,1);
          FUN_180759d80(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),0,piVar4[8],
                        in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0,0);
          break;
        case '\x02':
          in_stack_ffffffffffffffc8 = piVar4[8];
          in_stack_ffffffffffffffd0 = in_stack_ffffffffffffffd0 & 0xffffffffffffff00;
          FUN_1807594d0(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),piVar4[6],piVar4[7],
                        in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0);
          break;
        case '\x03':
          lVar2 = *(longlong *)(piVar4 + 2);
          in_stack_ffffffffffffffd0 = CONCAT44(uVar7,4);
          in_stack_ffffffffffffffc8 = (uint)uVar6 << 8;
          FUN_18075dcc0(*(uint64_t *)(lVar2 + 0x60),*(uint64_t *)(lVar2 + 0x58),lVar2,1,
                        in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0);
          break;
        case '\x04':
          in_stack_ffffffffffffffd0 = CONCAT44(uVar7,piVar4[8]);
          in_stack_ffffffffffffffc8 = (uint)uVar6 << 8;
          FUN_18075dcc0(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),
                        *(uint64_t *)(piVar4 + 6),1,in_stack_ffffffffffffffc8,
                        in_stack_ffffffffffffffd0);
          lVar2 = *(longlong *)(piVar4 + 4);
          if (lVar2 == 0) {
            lVar2 = *(longlong *)(piVar4 + 2);
          }
          LOCK();
          *(uint *)(lVar2 + 100) = *(uint *)(lVar2 + 100) & 0xffffefff;
          UNLOCK();
          break;
        case '\x05':
          in_stack_ffffffffffffffc8 = (uint)uVar6 << 8;
          FUN_18075d7f0(*(uint64_t *)(piVar4 + 2),(char)piVar4[4],
                        *(int8_t *)((longlong)piVar4 + 0x11),0,in_stack_ffffffffffffffc8);
          lVar2 = *(longlong *)(piVar4 + 2);
          if ((*(code **)(lVar2 + 0x120) != (code *)0x0) && ((*(byte *)(lVar2 + 0x11a) & 0x10) != 0)
             ) {
            (**(code **)(lVar2 + 0x120))(lVar2 + 0xb0,0x10);
            lVar2 = *(longlong *)(piVar4 + 2);
          }
          LOCK();
          *(uint *)(lVar2 + 100) = *(uint *)(lVar2 + 100) & 0xffffefff;
          UNLOCK();
          if (*(char *)((longlong)piVar4 + 0x12) != '\0') {
            lVar2 = *(longlong *)(piVar4 + 2);
            if ((*(code **)(lVar2 + 0x120) != (code *)0x0) &&
               ((*(byte *)(lVar2 + 0x11a) & 0x80) != 0)) {
              (**(code **)(lVar2 + 0x120))(lVar2 + 0xb0,0x80,0,0);
              lVar2 = *(longlong *)(param_1 + 0x788 + (longlong)iVar5);
            }
            FUN_18075f8e0(lVar2 + 0x138);
            FUN_18075f8e0(*(longlong *)(piVar4 + 2) + 0x158);
            func_0x000180743c20(param_1,0x14);
            lVar2 = *(longlong *)(piVar4 + 2);
            plVar3 = (longlong *)(lVar2 + 0x178);
            *(uint64_t *)(lVar2 + 0x180) = *(uint64_t *)(param_1 + 0x10fe0);
            *plVar3 = param_1 + 0x10fd8;
            *(longlong **)(param_1 + 0x10fe0) = plVar3;
            **(uint64_t **)(lVar2 + 0x180) = plVar3;
            *(longlong *)(*(longlong *)(piVar4 + 2) + 0x188) = *(longlong *)(piVar4 + 2);
                    // WARNING: Subroutine does not return
            FUN_180743d60(param_1,0x14);
          }
          break;
        case '\x06':
          FUN_18075fdb0(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4));
          break;
        case '\a':
          lVar2 = *(longlong *)(piVar4 + 2);
          if ((*(code **)(lVar2 + 0x120) != (code *)0x0) && ((*(byte *)(lVar2 + 0x11a) & 2) != 0)) {
            (**(code **)(lVar2 + 0x120))(lVar2 + 0xb0,2);
          }
          break;
        case '\b':
          FUN_180770230(*(uint64_t *)(piVar4 + 2));
          break;
        case '\t':
          FUN_180770fe0(*(uint64_t *)(piVar4 + 2),piVar4[4]);
          break;
        case '\n':
          lVar2 = *(longlong *)(piVar4 + 6);
          in_stack_ffffffffffffffc8 = (uint)*(short *)((longlong)piVar4 + 0x22);
          if (*(longlong *)(piVar4 + 4) == 0) {
            FUN_18076def0(lVar2 + 0x38,*(uint64_t *)(piVar4 + 2),in_stack_ffffffffffffffc8,
                          (int)(short)piVar4[8],0);
            FUN_1807657c0(lVar2,piVar4[9]);
                    // WARNING: Subroutine does not return
            FUN_180742250(param_1 + 0x10bd0,*(uint64_t *)(piVar4 + 2),&system_buffer_ptr,0,1);
          }
          FUN_180765a60(lVar2);
          break;
        case '\v':
          FUN_180766380(*(uint64_t *)(piVar4 + 2),piVar4[4]);
          break;
        case '\f':
          FUN_180762c70(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),(char)piVar4[6],0);
          LOCK();
          *(uint *)(*(longlong *)(piVar4 + 2) + 100) =
               *(uint *)(*(longlong *)(piVar4 + 2) + 100) & 0xfffff7ff;
          UNLOCK();
          break;
        case '\r':
          FUN_180765d50(*(uint64_t *)(piVar4 + 2),piVar4[4],piVar4[5],(char)piVar4[6]);
          break;
        case '\x0e':
          func_0x000180762150(*(uint64_t *)(piVar4 + 2),(char)piVar4[4]);
          break;
        case '\x0f':
          func_0x000180762330(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),
                              *(uint64_t *)(piVar4 + 6),(char)piVar4[8]);
          break;
        case '\x10':
          *(uint64_t *)(*(longlong *)(piVar4 + 2) + 0x220) = *(uint64_t *)(piVar4 + 4);
          break;
        case '\x11':
          FUN_180760540(*(uint64_t *)(piVar4 + 2));
          break;
        case '\x12':
          FUN_18076f280(*(uint64_t *)(piVar4 + 2),1);
          break;
        case '\x13':
          FUN_180762b60(*(uint64_t *)(piVar4 + 2),piVar4[1],0);
        }
        iVar5 = iVar5 + (*piVar4 >> 8);
      } while (iVar5 < *(int *)(param_1 + 0x10780));
    }
    *(int32_t *)(param_1 + 0x10780) = 0;
    *(int8_t *)(param_1 + 0x10784) = 0;
    if (param_2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_180743d60(param_1,3);
    }
  }
  if (param_1 == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  FUN_180743d60(param_1,1);
}



uint64_t FUN_180743166(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  uint in_stack_00000020;
  uint3 uVar6;
  
  if (param_1 != 0) {
    func_0x000180743c20(param_1,1);
  }
  if ((*(char *)(param_1 + 0x10784) == '\0') && (iVar1 = *(int *)(param_1 + 0x10780), 0 < iVar1)) {
    *(int8_t *)(param_1 + 0x10784) = 1;
    if (param_2 != '\0') {
      func_0x000180743c20(param_1,3);
      iVar1 = *(int *)(param_1 + 0x10780);
    }
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        piVar4 = (int *)(param_1 + 0x780 + (longlong)iVar5);
        uVar6 = (uint3)(in_stack_00000020 >> 8);
        switch((char)*piVar4) {
        case '\0':
          in_stack_00000020 = in_stack_00000020 & 0xffffff00;
          FUN_180759d80(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),0,piVar4[8],
                        in_stack_00000020);
          break;
        case '\x01':
          in_stack_00000020 = CONCAT31(uVar6,1);
          FUN_180759d80(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),0,piVar4[8],
                        in_stack_00000020);
          break;
        case '\x02':
          in_stack_00000020 = piVar4[8];
          FUN_1807594d0(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),piVar4[6],piVar4[7],
                        in_stack_00000020);
          break;
        case '\x03':
          lVar2 = *(longlong *)(piVar4 + 2);
          in_stack_00000020 = (uint)uVar6 << 8;
          FUN_18075dcc0(*(uint64_t *)(lVar2 + 0x60),*(uint64_t *)(lVar2 + 0x58),lVar2,1,
                        in_stack_00000020);
          break;
        case '\x04':
          in_stack_00000020 = (uint)uVar6 << 8;
          FUN_18075dcc0(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),
                        *(uint64_t *)(piVar4 + 6),1,in_stack_00000020);
          lVar2 = *(longlong *)(piVar4 + 4);
          if (lVar2 == 0) {
            lVar2 = *(longlong *)(piVar4 + 2);
          }
          LOCK();
          *(uint *)(lVar2 + 100) = *(uint *)(lVar2 + 100) & 0xffffefff;
          UNLOCK();
          break;
        case '\x05':
          in_stack_00000020 = (uint)uVar6 << 8;
          FUN_18075d7f0(*(uint64_t *)(piVar4 + 2),(char)piVar4[4],
                        *(int8_t *)((longlong)piVar4 + 0x11),0,in_stack_00000020);
          lVar2 = *(longlong *)(piVar4 + 2);
          if ((*(code **)(lVar2 + 0x120) != (code *)0x0) && ((*(byte *)(lVar2 + 0x11a) & 0x10) != 0)
             ) {
            (**(code **)(lVar2 + 0x120))(lVar2 + 0xb0,0x10);
            lVar2 = *(longlong *)(piVar4 + 2);
          }
          LOCK();
          *(uint *)(lVar2 + 100) = *(uint *)(lVar2 + 100) & 0xffffefff;
          UNLOCK();
          if (*(char *)((longlong)piVar4 + 0x12) != '\0') {
            lVar2 = *(longlong *)(piVar4 + 2);
            if ((*(code **)(lVar2 + 0x120) != (code *)0x0) &&
               ((*(byte *)(lVar2 + 0x11a) & 0x80) != 0)) {
              (**(code **)(lVar2 + 0x120))(lVar2 + 0xb0,0x80,0,0);
              lVar2 = *(longlong *)(param_1 + 0x788 + (longlong)iVar5);
            }
            FUN_18075f8e0(lVar2 + 0x138);
            FUN_18075f8e0(*(longlong *)(piVar4 + 2) + 0x158);
            func_0x000180743c20(param_1,0x14);
            lVar2 = *(longlong *)(piVar4 + 2);
            plVar3 = (longlong *)(lVar2 + 0x178);
            *(uint64_t *)(lVar2 + 0x180) = *(uint64_t *)(param_1 + 0x10fe0);
            *plVar3 = param_1 + 0x10fd8;
            *(longlong **)(param_1 + 0x10fe0) = plVar3;
            **(uint64_t **)(lVar2 + 0x180) = plVar3;
            *(longlong *)(*(longlong *)(piVar4 + 2) + 0x188) = *(longlong *)(piVar4 + 2);
                    // WARNING: Subroutine does not return
            FUN_180743d60(param_1,0x14);
          }
          break;
        case '\x06':
          FUN_18075fdb0(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4));
          break;
        case '\a':
          lVar2 = *(longlong *)(piVar4 + 2);
          if ((*(code **)(lVar2 + 0x120) != (code *)0x0) && ((*(byte *)(lVar2 + 0x11a) & 2) != 0)) {
            (**(code **)(lVar2 + 0x120))(lVar2 + 0xb0,2);
          }
          break;
        case '\b':
          FUN_180770230(*(uint64_t *)(piVar4 + 2));
          break;
        case '\t':
          FUN_180770fe0(*(uint64_t *)(piVar4 + 2),piVar4[4]);
          break;
        case '\n':
          lVar2 = *(longlong *)(piVar4 + 6);
          in_stack_00000020 = (uint)*(short *)((longlong)piVar4 + 0x22);
          if (*(longlong *)(piVar4 + 4) == 0) {
            FUN_18076def0(lVar2 + 0x38,*(uint64_t *)(piVar4 + 2),in_stack_00000020,
                          (int)(short)piVar4[8],0);
            FUN_1807657c0(lVar2,piVar4[9]);
                    // WARNING: Subroutine does not return
            FUN_180742250(param_1 + 0x10bd0,*(uint64_t *)(piVar4 + 2),&system_buffer_ptr,0,1);
          }
          FUN_180765a60(lVar2);
          break;
        case '\v':
          FUN_180766380(*(uint64_t *)(piVar4 + 2),piVar4[4]);
          break;
        case '\f':
          FUN_180762c70(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),(char)piVar4[6],0);
          LOCK();
          *(uint *)(*(longlong *)(piVar4 + 2) + 100) =
               *(uint *)(*(longlong *)(piVar4 + 2) + 100) & 0xfffff7ff;
          UNLOCK();
          break;
        case '\r':
          FUN_180765d50(*(uint64_t *)(piVar4 + 2),piVar4[4],piVar4[5],(char)piVar4[6]);
          break;
        case '\x0e':
          func_0x000180762150(*(uint64_t *)(piVar4 + 2),(char)piVar4[4]);
          break;
        case '\x0f':
          func_0x000180762330(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),
                              *(uint64_t *)(piVar4 + 6),(char)piVar4[8]);
          break;
        case '\x10':
          *(uint64_t *)(*(longlong *)(piVar4 + 2) + 0x220) = *(uint64_t *)(piVar4 + 4);
          break;
        case '\x11':
          FUN_180760540(*(uint64_t *)(piVar4 + 2));
          break;
        case '\x12':
          FUN_18076f280(*(uint64_t *)(piVar4 + 2),1);
          break;
        case '\x13':
          FUN_180762b60(*(uint64_t *)(piVar4 + 2),piVar4[1],0);
        }
        iVar5 = iVar5 + (*piVar4 >> 8);
      } while (iVar5 < *(int *)(param_1 + 0x10780));
    }
    *(int32_t *)(param_1 + 0x10780) = 0;
    *(int8_t *)(param_1 + 0x10784) = 0;
    if (param_2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_180743d60(param_1,3);
    }
  }
  if (param_1 == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  FUN_180743d60(param_1,1);
}



uint64_t FUN_1807431a7(void)

{
  int in_EAX;
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong unaff_RDI;
  char unaff_R14B;
  char unaff_R15B;
  uint in_stack_00000020;
  uint3 uVar5;
  
  *(int8_t *)(unaff_RDI + 0x10784) = 1;
  if (unaff_R15B != '\0') {
    func_0x000180743c20();
    in_EAX = *(int *)(unaff_RDI + 0x10780);
  }
  iVar4 = 0;
  if (0 < in_EAX) {
    do {
      piVar3 = (int *)(unaff_RDI + 0x780 + (longlong)iVar4);
      uVar5 = (uint3)(in_stack_00000020 >> 8);
      switch((char)*piVar3) {
      case '\0':
        in_stack_00000020 = in_stack_00000020 & 0xffffff00;
        FUN_180759d80(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),0,piVar3[8],
                      in_stack_00000020);
        break;
      case '\x01':
        in_stack_00000020 = CONCAT31(uVar5,1);
        FUN_180759d80(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),0,piVar3[8],
                      in_stack_00000020);
        break;
      case '\x02':
        in_stack_00000020 = piVar3[8];
        FUN_1807594d0(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),piVar3[6],piVar3[7],
                      in_stack_00000020);
        break;
      case '\x03':
        lVar1 = *(longlong *)(piVar3 + 2);
        in_stack_00000020 = (uint)uVar5 << 8;
        FUN_18075dcc0(*(uint64_t *)(lVar1 + 0x60),*(uint64_t *)(lVar1 + 0x58),lVar1,1,
                      in_stack_00000020);
        break;
      case '\x04':
        in_stack_00000020 = (uint)uVar5 << 8;
        FUN_18075dcc0(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),
                      *(uint64_t *)(piVar3 + 6),1,in_stack_00000020);
        lVar1 = *(longlong *)(piVar3 + 4);
        if (lVar1 == 0) {
          lVar1 = *(longlong *)(piVar3 + 2);
        }
        LOCK();
        *(uint *)(lVar1 + 100) = *(uint *)(lVar1 + 100) & 0xffffefff;
        UNLOCK();
        break;
      case '\x05':
        in_stack_00000020 = (uint)uVar5 << 8;
        FUN_18075d7f0(*(uint64_t *)(piVar3 + 2),(char)piVar3[4],
                      *(int8_t *)((longlong)piVar3 + 0x11),0,in_stack_00000020);
        lVar1 = *(longlong *)(piVar3 + 2);
        if ((*(code **)(lVar1 + 0x120) != (code *)0x0) && ((*(byte *)(lVar1 + 0x11a) & 0x10) != 0))
        {
          (**(code **)(lVar1 + 0x120))(lVar1 + 0xb0,0x10);
          lVar1 = *(longlong *)(piVar3 + 2);
        }
        LOCK();
        *(uint *)(lVar1 + 100) = *(uint *)(lVar1 + 100) & 0xffffefff;
        UNLOCK();
        if (*(char *)((longlong)piVar3 + 0x12) != '\0') {
          lVar1 = *(longlong *)(piVar3 + 2);
          if ((*(code **)(lVar1 + 0x120) != (code *)0x0) && ((*(byte *)(lVar1 + 0x11a) & 0x80) != 0)
             ) {
            (**(code **)(lVar1 + 0x120))(lVar1 + 0xb0,0x80,0,0);
            lVar1 = *(longlong *)(unaff_RDI + 0x788 + (longlong)iVar4);
          }
          FUN_18075f8e0(lVar1 + 0x138);
          FUN_18075f8e0(*(longlong *)(piVar3 + 2) + 0x158);
          func_0x000180743c20();
          lVar1 = *(longlong *)(piVar3 + 2);
          plVar2 = (longlong *)(lVar1 + 0x178);
          *(uint64_t *)(lVar1 + 0x180) = *(uint64_t *)(unaff_RDI + 0x10fe0);
          *plVar2 = unaff_RDI + 0x10fd8;
          *(longlong **)(unaff_RDI + 0x10fe0) = plVar2;
          **(uint64_t **)(lVar1 + 0x180) = plVar2;
          *(longlong *)(*(longlong *)(piVar3 + 2) + 0x188) = *(longlong *)(piVar3 + 2);
                    // WARNING: Subroutine does not return
          FUN_180743d60();
        }
        break;
      case '\x06':
        FUN_18075fdb0(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4));
        break;
      case '\a':
        lVar1 = *(longlong *)(piVar3 + 2);
        if ((*(code **)(lVar1 + 0x120) != (code *)0x0) && ((*(byte *)(lVar1 + 0x11a) & 2) != 0)) {
          (**(code **)(lVar1 + 0x120))(lVar1 + 0xb0,2);
        }
        break;
      case '\b':
        FUN_180770230(*(uint64_t *)(piVar3 + 2));
        break;
      case '\t':
        FUN_180770fe0(*(uint64_t *)(piVar3 + 2),piVar3[4]);
        break;
      case '\n':
        lVar1 = *(longlong *)(piVar3 + 6);
        in_stack_00000020 = (uint)*(short *)((longlong)piVar3 + 0x22);
        if (*(longlong *)(piVar3 + 4) == 0) {
          FUN_18076def0(lVar1 + 0x38,*(uint64_t *)(piVar3 + 2),in_stack_00000020,
                        (int)(short)piVar3[8],0);
          FUN_1807657c0(lVar1,piVar3[9]);
                    // WARNING: Subroutine does not return
          FUN_180742250(unaff_RDI + 0x10bd0,*(uint64_t *)(piVar3 + 2),&system_buffer_ptr,0,1);
        }
        FUN_180765a60(lVar1,*(uint64_t *)(piVar3 + 2),*(longlong *)(piVar3 + 4),
                      (int)(short)piVar3[8],in_stack_00000020);
        break;
      case '\v':
        FUN_180766380(*(uint64_t *)(piVar3 + 2),piVar3[4]);
        break;
      case '\f':
        FUN_180762c70(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),(char)piVar3[6],0);
        LOCK();
        *(uint *)(*(longlong *)(piVar3 + 2) + 100) =
             *(uint *)(*(longlong *)(piVar3 + 2) + 100) & 0xfffff7ff;
        UNLOCK();
        break;
      case '\r':
        FUN_180765d50(*(uint64_t *)(piVar3 + 2),piVar3[4],piVar3[5],(char)piVar3[6]);
        break;
      case '\x0e':
        func_0x000180762150(*(uint64_t *)(piVar3 + 2),(char)piVar3[4]);
        break;
      case '\x0f':
        func_0x000180762330(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),
                            *(uint64_t *)(piVar3 + 6),(char)piVar3[8]);
        break;
      case '\x10':
        *(uint64_t *)(*(longlong *)(piVar3 + 2) + 0x220) = *(uint64_t *)(piVar3 + 4);
        break;
      case '\x11':
        FUN_180760540(*(uint64_t *)(piVar3 + 2));
        break;
      case '\x12':
        FUN_18076f280(*(uint64_t *)(piVar3 + 2),1);
        break;
      case '\x13':
        FUN_180762b60(*(uint64_t *)(piVar3 + 2),piVar3[1],0);
      }
      iVar4 = iVar4 + (*piVar3 >> 8);
    } while (iVar4 < *(int *)(unaff_RDI + 0x10780));
  }
  *(int32_t *)(unaff_RDI + 0x10780) = 0;
  *(int8_t *)(unaff_RDI + 0x10784) = 0;
  if (unaff_R15B != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  if (unaff_R14B == '\0') {
    return 0;
  }
                    // WARNING: Subroutine does not return
  FUN_180743d60();
}



uint64_t FUN_1807431d5(void)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  int unaff_ESI;
  longlong unaff_RDI;
  char unaff_R14B;
  char unaff_R15B;
  uint in_stack_00000020;
  uint3 uVar4;
  
  do {
    piVar3 = (int *)(unaff_RDI + 0x780 + (longlong)unaff_ESI);
    uVar4 = (uint3)(in_stack_00000020 >> 8);
    switch((char)*piVar3) {
    case '\0':
      in_stack_00000020 = in_stack_00000020 & 0xffffff00;
      FUN_180759d80(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),0,piVar3[8],
                    in_stack_00000020);
      break;
    case '\x01':
      in_stack_00000020 = CONCAT31(uVar4,1);
      FUN_180759d80(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),0,piVar3[8],
                    in_stack_00000020);
      break;
    case '\x02':
      in_stack_00000020 = piVar3[8];
      FUN_1807594d0(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),piVar3[6],piVar3[7],
                    in_stack_00000020);
      break;
    case '\x03':
      lVar1 = *(longlong *)(piVar3 + 2);
      in_stack_00000020 = (uint)uVar4 << 8;
      FUN_18075dcc0(*(uint64_t *)(lVar1 + 0x60),*(uint64_t *)(lVar1 + 0x58),lVar1,1,
                    in_stack_00000020);
      break;
    case '\x04':
      in_stack_00000020 = (uint)uVar4 << 8;
      FUN_18075dcc0(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),
                    *(uint64_t *)(piVar3 + 6),1,in_stack_00000020);
      lVar1 = *(longlong *)(piVar3 + 4);
      if (lVar1 == 0) {
        lVar1 = *(longlong *)(piVar3 + 2);
      }
      LOCK();
      *(uint *)(lVar1 + 100) = *(uint *)(lVar1 + 100) & 0xffffefff;
      UNLOCK();
      break;
    case '\x05':
      in_stack_00000020 = (uint)uVar4 << 8;
      FUN_18075d7f0(*(uint64_t *)(piVar3 + 2),(char)piVar3[4],
                    *(int8_t *)((longlong)piVar3 + 0x11),0,in_stack_00000020);
      lVar1 = *(longlong *)(piVar3 + 2);
      if ((*(code **)(lVar1 + 0x120) != (code *)0x0) && ((*(byte *)(lVar1 + 0x11a) & 0x10) != 0)) {
        (**(code **)(lVar1 + 0x120))(lVar1 + 0xb0,0x10);
        lVar1 = *(longlong *)(piVar3 + 2);
      }
      LOCK();
      *(uint *)(lVar1 + 100) = *(uint *)(lVar1 + 100) & 0xffffefff;
      UNLOCK();
      if (*(char *)((longlong)piVar3 + 0x12) != '\0') {
        lVar1 = *(longlong *)(piVar3 + 2);
        if ((*(code **)(lVar1 + 0x120) != (code *)0x0) && ((*(byte *)(lVar1 + 0x11a) & 0x80) != 0))
        {
          (**(code **)(lVar1 + 0x120))(lVar1 + 0xb0,0x80,0,0);
          lVar1 = *(longlong *)(unaff_RDI + 0x788 + (longlong)unaff_ESI);
        }
        FUN_18075f8e0(lVar1 + 0x138);
        FUN_18075f8e0(*(longlong *)(piVar3 + 2) + 0x158);
        func_0x000180743c20();
        lVar1 = *(longlong *)(piVar3 + 2);
        plVar2 = (longlong *)(lVar1 + 0x178);
        *(uint64_t *)(lVar1 + 0x180) = *(uint64_t *)(unaff_RDI + 0x10fe0);
        *plVar2 = unaff_RDI + 0x10fd8;
        *(longlong **)(unaff_RDI + 0x10fe0) = plVar2;
        **(uint64_t **)(lVar1 + 0x180) = plVar2;
        *(longlong *)(*(longlong *)(piVar3 + 2) + 0x188) = *(longlong *)(piVar3 + 2);
                    // WARNING: Subroutine does not return
        FUN_180743d60();
      }
      break;
    case '\x06':
      FUN_18075fdb0(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4));
      break;
    case '\a':
      lVar1 = *(longlong *)(piVar3 + 2);
      if ((*(code **)(lVar1 + 0x120) != (code *)0x0) && ((*(byte *)(lVar1 + 0x11a) & 2) != 0)) {
        (**(code **)(lVar1 + 0x120))(lVar1 + 0xb0,2);
      }
      break;
    case '\b':
      FUN_180770230(*(uint64_t *)(piVar3 + 2));
      break;
    case '\t':
      FUN_180770fe0(*(uint64_t *)(piVar3 + 2),piVar3[4]);
      break;
    case '\n':
      lVar1 = *(longlong *)(piVar3 + 6);
      in_stack_00000020 = (uint)*(short *)((longlong)piVar3 + 0x22);
      if (*(longlong *)(piVar3 + 4) == 0) {
        FUN_18076def0(lVar1 + 0x38,*(uint64_t *)(piVar3 + 2),in_stack_00000020,
                      (int)(short)piVar3[8],0);
        FUN_1807657c0(lVar1,piVar3[9]);
                    // WARNING: Subroutine does not return
        FUN_180742250(unaff_RDI + 0x10bd0,*(uint64_t *)(piVar3 + 2),&system_buffer_ptr,0,1);
      }
      FUN_180765a60(lVar1);
      break;
    case '\v':
      FUN_180766380(*(uint64_t *)(piVar3 + 2),piVar3[4]);
      break;
    case '\f':
      FUN_180762c70(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),(char)piVar3[6],0);
      LOCK();
      *(uint *)(*(longlong *)(piVar3 + 2) + 100) =
           *(uint *)(*(longlong *)(piVar3 + 2) + 100) & 0xfffff7ff;
      UNLOCK();
      break;
    case '\r':
      FUN_180765d50(*(uint64_t *)(piVar3 + 2),piVar3[4],piVar3[5],(char)piVar3[6]);
      break;
    case '\x0e':
      func_0x000180762150(*(uint64_t *)(piVar3 + 2),(char)piVar3[4]);
      break;
    case '\x0f':
      func_0x000180762330(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),
                          *(uint64_t *)(piVar3 + 6),(char)piVar3[8]);
      break;
    case '\x10':
      *(uint64_t *)(*(longlong *)(piVar3 + 2) + 0x220) = *(uint64_t *)(piVar3 + 4);
      break;
    case '\x11':
      FUN_180760540(*(uint64_t *)(piVar3 + 2));
      break;
    case '\x12':
      FUN_18076f280(*(uint64_t *)(piVar3 + 2),1);
      break;
    case '\x13':
      FUN_180762b60(*(uint64_t *)(piVar3 + 2),piVar3[1],0);
    }
    unaff_ESI = unaff_ESI + (*piVar3 >> 8);
  } while (unaff_ESI < *(int *)(unaff_RDI + 0x10780));
  *(int32_t *)(unaff_RDI + 0x10780) = 0;
  *(int8_t *)(unaff_RDI + 0x10784) = 0;
  if (unaff_R15B != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  if (unaff_R14B == '\0') {
    return 0;
  }
                    // WARNING: Subroutine does not return
  FUN_180743d60();
}



uint64_t FUN_1807435b8(void)

{
  longlong unaff_RDI;
  char unaff_R14B;
  char unaff_R15B;
  
  *(int32_t *)(unaff_RDI + 0x10780) = 0;
  *(int8_t *)(unaff_RDI + 0x10784) = 0;
  if (unaff_R15B != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  if (unaff_R14B != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return 0;
}





// 函数: void FUN_1807435d3(void)
void FUN_1807435d3(void)

{
                    // WARNING: Subroutine does not return
  FUN_180743d60();
}





// 函数: void FUN_1807435ef(void)
void FUN_1807435ef(void)

{
                    // WARNING: Subroutine does not return
  FUN_180743d60();
}





// 函数: void FUN_180743660(longlong param_1)
void FUN_180743660(longlong param_1)

{
  longlong *plVar1;
  
  func_0x000180743c20(param_1,0x14);
  plVar1 = *(longlong **)(param_1 + 0x10fd8);
  if (plVar1 != (longlong *)(param_1 + 0x10fd8)) {
    *(longlong *)plVar1[1] = *plVar1;
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
                    // WARNING: Subroutine does not return
    FUN_180743d60(param_1,0x14);
  }
                    // WARNING: Subroutine does not return
  FUN_180743d60(param_1,0x14);
}



ulonglong FUN_180743700(longlong param_1,uint64_t *param_2,int param_3,char param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint uVar4;
  
  if ((param_4 == '\0') || (uVar2 = func_0x000180743c20(param_1,1), (int)uVar2 == 0)) {
    uVar4 = param_3 + 7U & 0xfffffff8;
    if (((int)(*(int *)(param_1 + 0x10780) + uVar4) < 0x10001) ||
       (uVar1 = FUN_180743160(param_1,1), uVar1 == 0)) {
      puVar3 = (uint *)(param_1 + 0x780 + (longlong)*(int *)(param_1 + 0x10780));
      *puVar3 = *puVar3 & 0xff;
      *puVar3 = *puVar3 | uVar4 << 8;
      *(int *)(param_1 + 0x10780) = *(int *)(param_1 + 0x10780) + uVar4;
      uVar1 = 0;
      *param_2 = puVar3;
    }
    else if (param_4 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_180743d60(param_1,1);
    }
    uVar2 = (ulonglong)uVar1;
  }
  return uVar2;
}



int FUN_180743741(int param_1)

{
  int iVar1;
  uint *puVar2;
  longlong unaff_RBX;
  char unaff_BPL;
  int unaff_EDI;
  uint64_t *unaff_R14;
  
  if ((param_1 + unaff_EDI < 0x10001) || (iVar1 = FUN_180743160(), iVar1 == 0)) {
    puVar2 = (uint *)(unaff_RBX + 0x780 + (longlong)*(int *)(unaff_RBX + 0x10780));
    *puVar2 = *puVar2 & 0xff;
    *puVar2 = *puVar2 | unaff_EDI << 8;
    *(int *)(unaff_RBX + 0x10780) = *(int *)(unaff_RBX + 0x10780) + unaff_EDI;
    iVar1 = 0;
    *unaff_R14 = puVar2;
  }
  else if (unaff_BPL != '\0') {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return iVar1;
}





